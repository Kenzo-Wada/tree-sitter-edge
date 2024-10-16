; Literals
(string) @string
(number) @number
(boolean) @boolean
(null) @constant.builtin

; Comments
(comment) @comment

; Keywords and identifiers
((identifier) @keyword
 (#match? @keyword "^(if|else|elseif|end|for|of|each|in|include|component)$"))

((identifier) @variable.builtin
 (#eq? @variable.builtin "this"))

; Function calls and helpers
(function_call
  (identifier) @function)

((function_call
  (identifier) @keyword.conditional)
 (#match? @keyword.conditional "^(if|elseif)$"))

((function_call
  (identifier) @keyword)
 (#match? @keyword "^(component|include)$"))

; Control structures
(if_statement
  (_) @condition)

(else_if_clause)

(else_clause)

(for_statement
  (identifier) @variable)

(each_statement
  (identifier) @variable)

; Directives
(include_statement
  "@include" @keyword.import)

(component
  "@component" @keyword)

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

; Operators and punctuation (generic approach)
((identifier) @operator
 (#match? @operator "^(=|\+|-|\*|/|%|<|>|<=|>=|==|!=|&&|\|\||!|\?|:)$"))

; Variables
(identifier) @variable
