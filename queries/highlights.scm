; Literals
(string) @string
(number) @number
(boolean) @boolean
(null) @constant.builtin

; Comments
(comment) @comment

; Keywords and identifiers
(identifier) @variable
((identifier) @keyword
 (#match? @keyword "^(if|else|elseif|end|for|of|each|in|include|component)$"))

; Function calls
(function_call
  function: (identifier) @function)

; Control structures
(if_statement
  "if" @keyword.conditional
  "(" @punctuation.bracket
  ")" @punctuation.bracket)
(else_if_clause
  "elseif" @keyword.conditional
  "(" @punctuation.bracket
  ")" @punctuation.bracket)
(else_clause
  "else" @keyword.conditional)
(for_statement
  "for" @keyword.repeat
  "(" @punctuation.bracket
  "of" @keyword
  ")" @punctuation.bracket)
(each_statement
  "each" @keyword.repeat
  "(" @punctuation.bracket
  "in" @keyword
  ")" @punctuation.bracket)

; Directives
(include_statement
  "@include" @keyword.import
  "(" @punctuation.bracket
  ")" @punctuation.bracket)
(component
  "@component" @keyword
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

; Output statements
(output_statement
  "{{" @punctuation.special
  "}}" @punctuation.special)
(safe_output_statement
  "{{{" @punctuation.special
  "}}}" @punctuation.special)

; Objects and arrays
(object
  "{" @punctuation.bracket
  "}" @punctuation.bracket)
(object_pair
  key: (identifier) @property)
(array
  "[" @punctuation.bracket
  "]" @punctuation.bracket)

; Operators
"=" @operator
"+" @operator
"-" @operator
"*" @operator
"/" @operator
"%" @operator
"<" @operator
">" @operator
"<=" @operator
">=" @operator
"==" @operator
"!=" @operator
"&&" @operator
"||" @operator
"!" @operator

; Punctuation
"," @punctuation.delimiter
"." @punctuation.delimiter
":" @punctuation.delimiter
"?" @punctuation.special
