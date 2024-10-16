; Fold control structures
[
  (if_statement)
  (for_statement)
  (each_statement)
] @fold

; Fold components
(component) @fold

; Fold HTML elements in layout literals
(layout_literal
  (element) @fold)

; Fold objects and arrays
[
  (object)
  (array)
] @fold
