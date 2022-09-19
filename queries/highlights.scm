(comment) @comment

(filter_identifier) @function.call
(function_identifier) @function.call
(test) @function.builtin
(variable) @variable
(string) @string
(operator) @operator
(number) @number
(boolean) @constant.builtin
(null) @constant.builtin
(keyword) @keyword
(attribute) @attribute
(tag) @tag
(conditional) @conditional
(repeat) @repeat
(method) @method
(parameter) @parameter

[
    "{{"
    "}}"
    "{{-"
    "-}}"
    "{{~"
    "~}}"
    "{%"
    "%}"
    "{%-"
    "-%}"
    "{%~"
    "~%}"
] @tag.delimiter

[
    ","
    "."
    "?"
    ":"
    "="
 ] @punctuation.delimiter

[
    "("
    ")"
    "["
    "]"
    "{"
    "}"
] @punctuation.bracket
