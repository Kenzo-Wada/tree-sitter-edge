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
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
