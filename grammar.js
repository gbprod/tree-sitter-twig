module.exports = grammar({
  name: 'twig',
  extras: ($) => [],
  rules: {
    template: ($) => repeat(choice($.block_directive, $.variable_directive, $.comment, $.content)),

    content: ($) => prec.right(repeat1(/[^\{]+|\{/)),

    block_directive: ($) => seq(choice('{%', '{%-', '{%~'), $.block_code, choice('%}', '-%}', '~%}')),

    block_code: ($) => repeat1(/[^%-~]+|[%-~]/),

    variable_directive: ($) => seq('{{', $.variable_code, '}}'),

    variable_code: ($) => repeat1(/[^\}]+|[\}]/),

    comment: ($) => seq('{#', /[^#]*\#+([^\}#][^#]*\#+)*/, '}'),
  },
});
