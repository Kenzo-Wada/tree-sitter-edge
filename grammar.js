/**
 * @file tree-sitter of edge
 * @author Kenzo-Wada <used.acormhib@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  COMMENT: 1,
  STRING: 2,
  LAYOUT_LITERAL: 3,
};

module.exports = grammar({
  name: "edge",

  extras: ($) => [/\s/, $.comment],

  rules: {
    source_file: ($) => repeat($._statement),

    _statement: ($) =>
      choice(
        $.output_statement,
        $.safe_output_statement,
        $.control_structure,
        $.layout_literal,
        $.component,
      ),

    output_statement: ($) => seq("{{", $._expression, "}}"),

    safe_output_statement: ($) => seq("{{{", $._expression, "}}}"),

    control_structure: ($) =>
      choice(
        $.if_statement,
        $.for_statement,
        $.each_statement,
        $.include_statement,
      ),

    if_statement: ($) =>
      seq(
        "@if",
        "(",
        $._expression,
        ")",
        $._block,
        optional($.else_if_clause),
        optional($.else_clause),
        "@end",
      ),

    else_if_clause: ($) => seq("@elseif", "(", $._expression, ")", $._block),

    else_clause: ($) => seq("@else", $._block),

    for_statement: ($) =>
      seq(
        "@for",
        "(",
        $.identifier,
        "of",
        $._expression,
        ")",
        $._block,
        "@end",
      ),

    each_statement: ($) =>
      seq(
        "@each",
        "(",
        $.identifier,
        "in",
        $._expression,
        ")",
        $._block,
        "@end",
      ),

    include_statement: ($) => seq("@include", "(", $.string, ")"),

    component: ($) => seq("@component", "(", $.string, ")", $._block, "@end"),

    layout_literal: ($) => token(prec(PREC.LAYOUT_LITERAL, /.+/)),

    _block: ($) => repeat1($._statement),

    _expression: ($) =>
      choice(
        $.identifier,
        $.string,
        $.number,
        $.boolean,
        $.null,
        $.array,
        $.object,
        $.function_call,
      ),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    string: ($) =>
      token(
        prec(
          PREC.STRING,
          choice(seq('"', /[^"]*/, '"'), seq("'", /[^']*/, "'")),
        ),
      ),

    number: ($) => /\d+(\.\d+)?/,

    boolean: ($) => choice("true", "false"),

    null: ($) => "null",

    array: ($) => seq("[", sepBy(",", $._expression), optional(","), "]"),

    object: ($) => seq("{", sepBy(",", $.object_pair), optional(","), "}"),

    object_pair: ($) => seq(choice($.identifier, $.string), ":", $._expression),

    function_call: ($) =>
      seq($.identifier, "(", sepBy(",", $._expression), ")"),

    comment: ($) =>
      token(
        prec(
          PREC.COMMENT,
          choice(
            seq("{{--", /[^-]*(-[^-]+)*/, "--}}"),
            seq("//", /.*/),
            seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
          ),
        ),
      ),
  },
});

function sepBy(separator, rule) {
  return optional(seq(rule, repeat(seq(separator, rule))));
}
