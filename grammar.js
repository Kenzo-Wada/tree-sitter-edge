/**
 * @file tree-sitter of edge
 * @author Kenzo-Wada <used.acormhib@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "edge",

  rules: {
    source_file: ($) => repeat($._statement),

    _statement: ($) =>
      choice(
        $.output_statement,
        $.control_flow_statement,
        $.comment,
        $.raw_content,
      ),

    output_statement: ($) =>
      seq("{{", field("expression", $._expression), "}}"),

    control_flow_statement: ($) =>
      choice($.if_statement, $.for_statement, $.include_statement),

    if_statement: ($) =>
      seq(
        "@if",
        field("condition", $._expression),
        field("body", $.block),
        optional($.else_clause),
      ),

    else_clause: ($) => seq("@else", field("body", $.block)),

    for_statement: ($) =>
      seq(
        "@each",
        field("item", $.identifier),
        "in",
        field("collection", $._expression),
        field("body", $.block),
      ),

    include_statement: ($) => seq("@include", field("path", $.string)),

    block: ($) => seq("{", repeat($._statement), "}"),

    _expression: ($) =>
      choice(
        $.identifier,
        $.string,
        $.number,
        $.boolean,
        $.null,
        $.object,
        $.array,
      ),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    string: ($) => choice(seq('"', /[^"]*/, '"'), seq("'", /[^']*/, "'")),
    number: ($) => /\d+(\.\d+)?/,
    boolean: ($) => choice("true", "false"),
    null: ($) => "null",

    object: ($) => seq("{", sepBy(",", $.pair), optional(","), "}"),

    pair: ($) =>
      seq(
        field("key", choice($.string, $.identifier)),
        ":",
        field("value", $._expression),
      ),

    array: ($) => seq("[", sepBy(",", $._expression), optional(","), "]"),

    comment: ($) =>
      token(
        choice(
          seq("{{--", /.*/, "--}}"),
          seq("//", /.*/),
          seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
        ),
      ),

    raw_content: ($) => /[^{@]+/,
  },
});

function sepBy(sep, rule) {
  return optional(seq(rule, repeat(seq(sep, rule))));
}
