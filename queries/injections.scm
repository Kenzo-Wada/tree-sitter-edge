; Inject typescript into expression contexts
((output_statement
  (_) @injection.content)
 (#set! injection.language "typescript"))

((safe_output_statement
  (_) @injection.content)
 (#set! injection.language "typescript"))

; Inject typescript into control structures
((if_statement
  condition: (_) @injection.content)
 (#set! injection.language "typescript"))

((for_statement
  (_) @injection.content)
 (#set! injection.language "typescript"))

((each_statement
  (_) @injection.content)
 (#set! injection.language "typescript"))

; Inject HTML into layout literals
((layout_literal) @injection.content
 (#set! injection.language "html"))

; Inject typescript into script tags
((layout_literal
  (element
    (start_tag
      (tag_name) @_tag
      (#eq? @_tag "script"))
    (text) @injection.content))
 (#set! injection.language "typescript"))
