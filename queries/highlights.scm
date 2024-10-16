; Literals
(string) @string
(number) @number
(boolean) @boolean
(null) @constant.builtin

; Comments
(comment) @comment

; Keywords
[
  "@if"
  "@elseif"
  "@else"
  "@end"
  "@for"
  "@each"
  "@include"
  "@component"
] @keyword

; Variables and functions
(identifier) @variable
(function_call
  (identifier) @function)

; Control structures
(if_statement
  (identifier) @variable)
(for_statement
  (identifier) @variable)
(each_statement
  (identifier) @variable)

; Directives
(include_statement
  (string) @string.special)
(component
  (string) @string.special)

; Output statements
(output_statement
  ["{{" "}}"] @punctuation.special)
(safe_output_statement
  ["{{{" "}}}"] @punctuation.special)

; Objects and arrays
(object
  ["{" "}"] @punctuation.bracket)
(object_pair
  (identifier) @property)
(array
  ["[" "]"] @punctuation.bracket)

; Layout literal
(layout_literal) @text
