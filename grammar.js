const REGEX_NAME = /[a-zA-Z_\x7f-\xff][a-zA-Z0-9_\x7f-\xff]+/;
const REGEX_STRING =
  /"([^#"\\\\]*(?:\\\\.[^#"\\\\]*)*)"|\'([^\'\\\\]*(?:\\\\.[^\'\\\\]*)*)\'/;
const REGEX_NUMBER = /[0-9]+(?:\.[0-9]+)?([Ee][\+\-][0-9]+)?/;
// const REGEX_DQ_STRING_DELIM = /"/;
// const REGEX_DQ_STRING_PART = /[^#"\\\\]*(?:(?:\\\\.|#(?!\{))[^#"\\\\]*)*/;
// const PUNCTUATION = '()[]{}?:.,|';

module.exports = grammar({
  name: 'twig',
  extras: () => [/\s/],
  rules: {
    template: ($) =>
      repeat(
        choice($.block_directive, $.output_directive, $.comment, $.content)
      ),

    content: () => prec.right(repeat1(/[^\{]+|\{/)),

    comment: () => seq('{#', /[^#]*\#+([^\}#][^#]*\#+)*/, '}'),

    block_directive: ($) =>
      seq(choice('{%', '{%-', '{%~'), $.block_code, choice('%}', '-%}', '~%}')),

    block_code: () => repeat1(/[^%-~]+|[%-~]/),

    output_directive: ($) =>
      seq(
        choice('{{', '{{-', '{{~'),
        $._expression,
        choice('}}', '-}}', '~}}')
      ),

    _expression: ($) =>
      prec.right(
        seq(
          choice(
            alias($.identifier, $.variable),
            $._literal,
            $.function_call,
            seq('(', $._expression, ')'),
            $.unary_expression,
            $.binary_expression,
            $.ternary_expression
          ),
          optional(repeat(seq('|', $.filter)))
        )
      ),

    identifier: ($) => seq($._name, repeat(seq('.', $._name))),
    _name: () => REGEX_NAME,

    _literal: ($) =>
      choice($.string, $.number, $.array, $.hash, $.boolean, $.null),

    boolean: () => choice('true', 'false'),
    null: () => 'null',
    string: () => REGEX_STRING,
    number: () => REGEX_NUMBER,
    array: ($) =>
      seq(
        '[',
        optional(seq($._expression, repeat(seq(',', $._expression)))),
        ']'
      ),
    hash: ($) =>
      seq(
        '{',
        optional(seq($._hash_entry, repeat(seq(',', $._hash_entry)))),
        '}'
      ),
    _hash_entry: ($) =>
      seq(optional($.hash_key), alias($._expression, $.hash_value)),

    hash_key: ($) =>
      seq(
        choice(
          seq('(', $._expression, ')'),
          $.string,
          $.number,
          alias($._name, $.name)
        ),
        ':'
      ),

    function_call: ($) =>
      seq(alias($.identifier, $.function_identifier), $.arguments),

    arguments: ($) =>
      seq('(', optional(seq($.argument, repeat(seq(',', $.argument)))), ')'),

    argument: ($) =>
      seq(optional($.argument_name), alias($._expression, $.argument_value)),

    argument_name: () => seq(REGEX_NAME, '='),

    filter: ($) =>
      seq(alias($.identifier, $.filter_identifier), optional($.arguments)),

    binary_expression: ($) =>
      prec.right(
        seq($._expression, alias($.binary_operator, $.operator), $._expression)
      ),

    binary_operator: () =>
      choice(
        'or',
        'and',
        'b-or',
        'b-xor',
        'b-and',
        '==',
        '!=',
        '<=>',
        '<',
        '>',
        '>=',
        '<=',
        'not in',
        'in',
        'matches',
        'starts with',
        'ends with',
        '..',
        '+',
        '-',
        '~',
        '*',
        '/',
        '//',
        '%',
        'is',
        'is not',
        '**',
        '??',
        '?:'
      ),

    unary_expression: ($) =>
      prec.left(seq(alias($.unary_operator, $.operator), $._expression)),

    unary_operator: () => choice('-', '+', 'not'),

    ternary_expression: ($) =>
      prec.left(seq($._expression, '?', $._expression, ':', $._expression)),
  },
});
