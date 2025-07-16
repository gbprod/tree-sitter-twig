((content) @injection.content
 (#set! injection.language "html")
 (#set! injection.combined))

 ((script_element
  (raw_text) @injection.content)
 (#set! injection.language "javascript"))

((style_element
  (raw_text) @injection.content)
 (#set! injection.language "css"))