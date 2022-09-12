const REGEX_NAME = /[a-zA-Z_\x7f-\xff][a-zA-Z0-9_\x7f-\xff]*/;
const REGEX_STRING =
  /"([^#"\\\\]*(?:\\\\.[^#"\\\\]*)*)"|\'([^\'\\\\]*(?:\\\\.[^\'\\\\]*)*)\'/;
// const REGEX_NUMBER = /[0-9]+(?:\.[0-9]+)?([Ee][\+\-][0-9]+)?/;
// const REGEX_DQ_STRING_DELIM = /"/;
// const REGEX_DQ_STRING_PART = /[^#"\\\\]*(?:(?:\\\\.|#(?!\{))[^#"\\\\]*)*/;
// const PUNCTUATION = '()[]{}?:.,|';

module.exports = grammar({
  name: 'twig',
  extras: () => [/\s/],
  rules: {
    template: ($) =>
      repeat(
        choice($.block_directive, $.variable_directive, $.comment, $.content)
      ),

    content: () => prec.right(repeat1(/[^\{]+|\{/)),

    comment: () => seq('{#', /[^#]*\#+([^\}#][^#]*\#+)*/, '}'),

    block_directive: ($) =>
      seq(choice('{%', '{%-', '{%~'), $.block_code, choice('%}', '-%}', '~%}')),

    block_code: () => repeat1(/[^%-~]+|[%-~]/),

    variable_directive: ($) =>
      seq(choice('{{', '{{-', '{{~'), $.expression, choice('}}', '-}}', '~}}')),

    expression: ($) =>
      seq(
        choice(alias($.identifier, $.variable), $.function_call, $.string),
        optional(repeat(seq('|', $.filter)))
      ),

    identifier: () => REGEX_NAME,

    string: () => REGEX_STRING,

    function_call: ($) =>
      seq(alias($.identifier, $.function_identifier), $.arguments),

    arguments: ($) => seq('(', commaSep(optional($.expression)), ')'),

    filter: ($) =>
      seq(alias($.identifier, $.filter_identifier), optional($.arguments)),
  },
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
