#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 3
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum {
  aux_sym_content_token1 = 1,
  anon_sym_LBRACE_POUND = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_RBRACE = 4,
  anon_sym_LBRACE_PERCENT = 5,
  anon_sym_LBRACE_PERCENT_DASH = 6,
  anon_sym_LBRACE_PERCENT_TILDE = 7,
  anon_sym_PERCENT_RBRACE = 8,
  anon_sym_DASH_PERCENT_RBRACE = 9,
  anon_sym_TILDE_PERCENT_RBRACE = 10,
  aux_sym_block_code_token1 = 11,
  anon_sym_LBRACE_LBRACE = 12,
  anon_sym_LBRACE_LBRACE_DASH = 13,
  anon_sym_LBRACE_LBRACE_TILDE = 14,
  anon_sym_RBRACE_RBRACE = 15,
  anon_sym_DASH_RBRACE_RBRACE = 16,
  anon_sym_TILDE_RBRACE_RBRACE = 17,
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  anon_sym_PIPE = 20,
  aux_sym_identifier_token1 = 21,
  anon_sym_DOT = 22,
  sym_string = 23,
  sym_number = 24,
  anon_sym_COMMA = 25,
  anon_sym_EQ = 26,
  anon_sym_or = 27,
  anon_sym_and = 28,
  anon_sym_b_DASHor = 29,
  anon_sym_b_DASHxor = 30,
  anon_sym_b_DASHand = 31,
  anon_sym_EQ_EQ = 32,
  anon_sym_BANG_EQ = 33,
  anon_sym_LT_EQ_GT = 34,
  anon_sym_LT = 35,
  anon_sym_GT = 36,
  anon_sym_GT_EQ = 37,
  anon_sym_LT_EQ = 38,
  anon_sym_notin = 39,
  anon_sym_in = 40,
  anon_sym_matches = 41,
  anon_sym_startswith = 42,
  anon_sym_endswith = 43,
  anon_sym_DOT_DOT = 44,
  anon_sym_PLUS = 45,
  anon_sym_DASH = 46,
  anon_sym_TILDE = 47,
  anon_sym_STAR = 48,
  anon_sym_SLASH = 49,
  anon_sym_SLASH_SLASH = 50,
  anon_sym_PERCENT = 51,
  anon_sym_is = 52,
  anon_sym_isnot = 53,
  anon_sym_STAR_STAR = 54,
  anon_sym_QMARK_QMARK = 55,
  anon_sym_not = 56,
  sym_template = 57,
  sym_content = 58,
  sym_comment = 59,
  sym_block_directive = 60,
  sym_block_code = 61,
  sym_output_directive = 62,
  sym__expression = 63,
  sym_identifier = 64,
  sym__literal = 65,
  sym_function_call = 66,
  sym_arguments = 67,
  sym_argument = 68,
  sym_argument_name = 69,
  sym_filter = 70,
  sym_binary_expression = 71,
  sym_binary_operator = 72,
  sym_unary_expression = 73,
  sym_unary_operator = 74,
  aux_sym_template_repeat1 = 75,
  aux_sym_content_repeat1 = 76,
  aux_sym_block_code_repeat1 = 77,
  aux_sym__expression_repeat1 = 78,
  aux_sym_identifier_repeat1 = 79,
  aux_sym_arguments_repeat1 = 80,
  alias_sym_argument_value = 81,
  alias_sym_filter_identifier = 82,
  alias_sym_function_identifier = 83,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_content_token1] = "content_token1",
  [anon_sym_LBRACE_POUND] = "{#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_LBRACE_PERCENT_DASH] = "{%-",
  [anon_sym_LBRACE_PERCENT_TILDE] = "{%~",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_DASH_PERCENT_RBRACE] = "-%}",
  [anon_sym_TILDE_PERCENT_RBRACE] = "~%}",
  [aux_sym_block_code_token1] = "block_code_token1",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_LBRACE_LBRACE_DASH] = "{{-",
  [anon_sym_LBRACE_LBRACE_TILDE] = "{{~",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_DASH_RBRACE_RBRACE] = "-}}",
  [anon_sym_TILDE_RBRACE_RBRACE] = "~}}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PIPE] = "|",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_DOT] = ".",
  [sym_string] = "string",
  [sym_number] = "number",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_b_DASHor] = "b-or",
  [anon_sym_b_DASHxor] = "b-xor",
  [anon_sym_b_DASHand] = "b-and",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_notin] = "not in",
  [anon_sym_in] = "in",
  [anon_sym_matches] = "matches",
  [anon_sym_startswith] = "starts with",
  [anon_sym_endswith] = "ends with",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_TILDE] = "~",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_PERCENT] = "%",
  [anon_sym_is] = "is",
  [anon_sym_isnot] = "is not",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_QMARK_QMARK] = "\?\?",
  [anon_sym_not] = "not",
  [sym_template] = "template",
  [sym_content] = "content",
  [sym_comment] = "comment",
  [sym_block_directive] = "block_directive",
  [sym_block_code] = "block_code",
  [sym_output_directive] = "output_directive",
  [sym__expression] = "_expression",
  [sym_identifier] = "variable",
  [sym__literal] = "_literal",
  [sym_function_call] = "function_call",
  [sym_arguments] = "arguments",
  [sym_argument] = "argument",
  [sym_argument_name] = "argument_name",
  [sym_filter] = "filter",
  [sym_binary_expression] = "binary_expression",
  [sym_binary_operator] = "operator",
  [sym_unary_expression] = "unary_expression",
  [sym_unary_operator] = "operator",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
  [aux_sym_block_code_repeat1] = "block_code_repeat1",
  [aux_sym__expression_repeat1] = "_expression_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [alias_sym_argument_value] = "argument_value",
  [alias_sym_filter_identifier] = "filter_identifier",
  [alias_sym_function_identifier] = "function_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_content_token1] = aux_sym_content_token1,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_LBRACE_PERCENT_DASH] = anon_sym_LBRACE_PERCENT_DASH,
  [anon_sym_LBRACE_PERCENT_TILDE] = anon_sym_LBRACE_PERCENT_TILDE,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_DASH_PERCENT_RBRACE] = anon_sym_DASH_PERCENT_RBRACE,
  [anon_sym_TILDE_PERCENT_RBRACE] = anon_sym_TILDE_PERCENT_RBRACE,
  [aux_sym_block_code_token1] = aux_sym_block_code_token1,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_LBRACE_LBRACE_DASH] = anon_sym_LBRACE_LBRACE_DASH,
  [anon_sym_LBRACE_LBRACE_TILDE] = anon_sym_LBRACE_LBRACE_TILDE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_DASH_RBRACE_RBRACE] = anon_sym_DASH_RBRACE_RBRACE,
  [anon_sym_TILDE_RBRACE_RBRACE] = anon_sym_TILDE_RBRACE_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_b_DASHor] = anon_sym_b_DASHor,
  [anon_sym_b_DASHxor] = anon_sym_b_DASHxor,
  [anon_sym_b_DASHand] = anon_sym_b_DASHand,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ_GT] = anon_sym_LT_EQ_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_notin] = anon_sym_notin,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_matches] = anon_sym_matches,
  [anon_sym_startswith] = anon_sym_startswith,
  [anon_sym_endswith] = anon_sym_endswith,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_isnot] = anon_sym_isnot,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_QMARK_QMARK] = anon_sym_QMARK_QMARK,
  [anon_sym_not] = anon_sym_not,
  [sym_template] = sym_template,
  [sym_content] = sym_content,
  [sym_comment] = sym_comment,
  [sym_block_directive] = sym_block_directive,
  [sym_block_code] = sym_block_code,
  [sym_output_directive] = sym_output_directive,
  [sym__expression] = sym__expression,
  [sym_identifier] = sym_identifier,
  [sym__literal] = sym__literal,
  [sym_function_call] = sym_function_call,
  [sym_arguments] = sym_arguments,
  [sym_argument] = sym_argument,
  [sym_argument_name] = sym_argument_name,
  [sym_filter] = sym_filter,
  [sym_binary_expression] = sym_binary_expression,
  [sym_binary_operator] = sym_binary_operator,
  [sym_unary_expression] = sym_unary_expression,
  [sym_unary_operator] = sym_binary_operator,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
  [aux_sym_block_code_repeat1] = aux_sym_block_code_repeat1,
  [aux_sym__expression_repeat1] = aux_sym__expression_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [alias_sym_argument_value] = alias_sym_argument_value,
  [alias_sym_filter_identifier] = alias_sym_filter_identifier,
  [alias_sym_function_identifier] = alias_sym_function_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_code_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b_DASHor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b_DASHxor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b_DASHand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_matches] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_startswith] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endswith] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isnot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_block_code] = {
    .visible = true,
    .named = true,
  },
  [sym_output_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_name] = {
    .visible = true,
    .named = true,
  },
  [sym_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_argument_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_filter_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_identifier] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_function_identifier,
  },
  [2] = {
    [0] = alias_sym_argument_value,
  },
  [3] = {
    [0] = alias_sym_filter_identifier,
  },
  [4] = {
    [1] = alias_sym_argument_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__expression, 2,
    sym__expression,
    alias_sym_argument_value,
  sym_identifier, 3,
    sym_identifier,
    alias_sym_filter_identifier,
    alias_sym_function_identifier,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(76);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '%') ADVANCE(142);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(138);
      if (lookahead == '+') ADVANCE(132);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '<') ADVANCE(122);
      if (lookahead == '=') ADVANCE(113);
      if (lookahead == '>') ADVANCE(123);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == '~') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(141);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(138);
      if (lookahead == '+') ADVANCE(132);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '<') ADVANCE(122);
      if (lookahead == '=') ADVANCE(113);
      if (lookahead == '>') ADVANCE(123);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '~') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '+') ADVANCE(132);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(72);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '{') ADVANCE(96);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(81);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(63);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '~') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (('&' <= lookahead && lookahead <= '}')) ADVANCE(89);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(65);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(62);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '~') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(72);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(120);
      END_STATE();
    case 17:
      if (lookahead == '?') ADVANCE(146);
      END_STATE();
    case 18:
      if (lookahead == '\\') ADVANCE(73);
      END_STATE();
    case 19:
      if (lookahead == '\\') ADVANCE(74);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(130);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(106);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(1);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 60:
      if (lookahead == 'w') ADVANCE(32);
      END_STATE();
    case 61:
      if (lookahead == 'w') ADVANCE(33);
      END_STATE();
    case 62:
      if (lookahead == '}') ADVANCE(86);
      END_STATE();
    case 63:
      if (lookahead == '}') ADVANCE(87);
      END_STATE();
    case 64:
      if (lookahead == '}') ADVANCE(100);
      END_STATE();
    case 65:
      if (lookahead == '}') ADVANCE(88);
      END_STATE();
    case 66:
      if (lookahead == '}') ADVANCE(101);
      END_STATE();
    case 67:
      if (lookahead == '}') ADVANCE(99);
      END_STATE();
    case 68:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(71);
      END_STATE();
    case 69:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (('%' <= lookahead && lookahead <= '~')) ADVANCE(89);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(106);
      END_STATE();
    case 73:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 74:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 75:
      if (eof) ADVANCE(76);
      if (lookahead == '{') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '{') ADVANCE(96);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '{') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(9);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '~') ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_DASH);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_TILDE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_RBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_TILDE_PERCENT_RBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_block_code_token1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_block_code_token1);
      if (lookahead == '%') ADVANCE(63);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_block_code_token1);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '~') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (('&' <= lookahead && lookahead <= '}')) ADVANCE(89);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_block_code_token1);
      if (lookahead == '%') ADVANCE(65);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_block_code_token1);
      if (lookahead == '}') ADVANCE(86);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_block_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (('%' <= lookahead && lookahead <= '~')) ADVANCE(89);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_block_code_token1);
      if (lookahead != 0 &&
          (lookahead < '%' || '~' < lookahead)) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '~') ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_TILDE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DASH_RBRACE_RBRACE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_TILDE_RBRACE_RBRACE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(131);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_b_DASHor);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_b_DASHxor);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_b_DASHand);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(121);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_notin);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_startswith);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_endswith);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '}') ADVANCE(64);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '}') ADVANCE(64);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '%') ADVANCE(65);
      if (lookahead == '}') ADVANCE(66);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '}') ADVANCE(66);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(145);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '}') ADVANCE(86);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_isnot);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(106);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 75},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 75},
  [29] = {.lex_state = 75},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 75},
  [36] = {.lex_state = 75},
  [37] = {.lex_state = 75},
  [38] = {.lex_state = 75},
  [39] = {.lex_state = 75},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 69},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT_TILDE] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_TILDE_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_TILDE] = ACTIONS(1),
    [anon_sym_DASH_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_TILDE_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_b_DASHor] = ACTIONS(1),
    [anon_sym_b_DASHxor] = ACTIONS(1),
    [anon_sym_b_DASHand] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_matches] = ACTIONS(1),
    [anon_sym_startswith] = ACTIONS(1),
    [anon_sym_endswith] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_isnot] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_QMARK_QMARK] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(55),
    [sym_content] = STATE(29),
    [sym_comment] = STATE(29),
    [sym_block_directive] = STATE(29),
    [sym_output_directive] = STATE(29),
    [aux_sym_template_repeat1] = STATE(29),
    [aux_sym_content_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_content_token1] = ACTIONS(5),
    [anon_sym_LBRACE_POUND] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(9),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(9),
    [anon_sym_LBRACE_PERCENT_TILDE] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(11),
    [anon_sym_LBRACE_LBRACE_TILDE] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(15), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(17), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_is,
    ACTIONS(13), 28,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_b_DASHor,
      anon_sym_b_DASHxor,
      anon_sym_b_DASHand,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_in,
      anon_sym_matches,
      anon_sym_startswith,
      anon_sym_endswith,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_isnot,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
  [47] = 4,
    ACTIONS(21), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(24), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_is,
    ACTIONS(19), 28,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_b_DASHor,
      anon_sym_b_DASHxor,
      anon_sym_b_DASHand,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_in,
      anon_sym_matches,
      anon_sym_startswith,
      anon_sym_endswith,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_isnot,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
  [94] = 4,
    ACTIONS(15), 1,
      anon_sym_DOT,
    STATE(2), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(28), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_is,
    ACTIONS(26), 28,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_b_DASHor,
      anon_sym_b_DASHxor,
      anon_sym_b_DASHand,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_in,
      anon_sym_matches,
      anon_sym_startswith,
      anon_sym_endswith,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_isnot,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
  [141] = 6,
    ACTIONS(32), 1,
      anon_sym_LPAREN,
    ACTIONS(34), 1,
      anon_sym_PIPE,
    STATE(9), 1,
      aux_sym__expression_repeat1,
    STATE(20), 1,
      sym_arguments,
    ACTIONS(36), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_is,
    ACTIONS(30), 26,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_b_DASHor,
      anon_sym_b_DASHxor,
      anon_sym_b_DASHand,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_in,
      anon_sym_matches,
      anon_sym_startswith,
      anon_sym_endswith,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_isnot,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
  [192] = 2,
    ACTIONS(24), 9,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_is,
    ACTIONS(19), 28,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_b_DASHor,
      anon_sym_b_DASHxor,
      anon_sym_b_DASHand,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_in,
      anon_sym_matches,
      anon_sym_startswith,
      anon_sym_endswith,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_isnot,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
  [234] = 4,
    ACTIONS(32), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_arguments,
    ACTIONS(40), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_is,
    ACTIONS(38), 27,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_b_DASHor,
      anon_sym_b_DASHxor,
      anon_sym_b_DASHand,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_in,
      anon_sym_matches,
      anon_sym_startswith,
      anon_sym_endswith,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_isnot,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
  [280] = 4,
    ACTIONS(34), 1,
      anon_sym_PIPE,
    STATE(9), 1,
      aux_sym__expression_repeat1,
    ACTIONS(36), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_is,
    ACTIONS(30), 26,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_b_DASHor,
      anon_sym_b_DASHxor,
      anon_sym_b_DASHand,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_in,
      anon_sym_matches,
      anon_sym_startswith,
      anon_sym_endswith,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_isnot,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
  [325] = 4,
    ACTIONS(34), 1,
      anon_sym_PIPE,
    STATE(13), 1,
      aux_sym__expression_repeat1,
    ACTIONS(44), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_is,
    ACTIONS(42), 26,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_b_DASHor,
      anon_sym_b_DASHxor,
      anon_sym_b_DASHand,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_in,
      anon_sym_matches,
      anon_sym_startswith,
      anon_sym_endswith,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_isnot,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
  [370] = 3,
    STATE(30), 1,
      sym_binary_operator,
    ACTIONS(48), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_is,
    ACTIONS(46), 27,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_b_DASHor,
      anon_sym_b_DASHxor,
      anon_sym_b_DASHand,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_in,
      anon_sym_matches,
      anon_sym_startswith,
      anon_sym_endswith,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_isnot,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
  [413] = 4,
    ACTIONS(34), 1,
      anon_sym_PIPE,
    STATE(12), 1,
      aux_sym__expression_repeat1,
    ACTIONS(52), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_is,
    ACTIONS(50), 26,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_b_DASHor,
      anon_sym_b_DASHxor,
      anon_sym_b_DASHand,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_in,
      anon_sym_matches,
      anon_sym_startswith,
      anon_sym_endswith,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_isnot,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
  [458] = 4,
    ACTIONS(34), 1,
      anon_sym_PIPE,
    STATE(13), 1,
      aux_sym__expression_repeat1,
    ACTIONS(56), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_is,
    ACTIONS(54), 26,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_b_DASHor,
      anon_sym_b_DASHxor,
      anon_sym_b_DASHand,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_in,
      anon_sym_matches,
      anon_sym_startswith,
      anon_sym_endswith,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_isnot,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
  [503] = 4,
    ACTIONS(60), 1,
      anon_sym_PIPE,
    STATE(13), 1,
      aux_sym__expression_repeat1,
    ACTIONS(63), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_is,
    ACTIONS(58), 26,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_b_DASHor,
      anon_sym_b_DASHxor,
      anon_sym_b_DASHand,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_in,
      anon_sym_matches,
      anon_sym_startswith,
      anon_sym_endswith,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_isnot,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
  [548] = 4,
    STATE(30), 1,
      sym_binary_operator,
    ACTIONS(65), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
    ACTIONS(69), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_is,
    ACTIONS(67), 21,
      anon_sym_or,
      anon_sym_and,
      anon_sym_b_DASHor,
      anon_sym_b_DASHxor,
      anon_sym_b_DASHand,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_in,
      anon_sym_matches,
      anon_sym_startswith,
      anon_sym_endswith,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_isnot,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
  [593] = 5,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(71), 1,
      anon_sym_EQ,
    STATE(2), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(28), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_is,
    ACTIONS(26), 27,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_b_DASHor,
      anon_sym_b_DASHxor,
      anon_sym_b_DASHand,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_in,
      anon_sym_matches,
      anon_sym_startswith,
      anon_sym_endswith,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_isnot,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
  [640] = 2,
    ACTIONS(75), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_is,
    ACTIONS(73), 27,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_b_DASHor,
      anon_sym_b_DASHxor,
      anon_sym_b_DASHand,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_in,
      anon_sym_matches,
      anon_sym_startswith,
      anon_sym_endswith,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_isnot,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
  [680] = 2,
    ACTIONS(79), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_is,
    ACTIONS(77), 27,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_b_DASHor,
      anon_sym_b_DASHxor,
      anon_sym_b_DASHand,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_in,
      anon_sym_matches,
      anon_sym_startswith,
      anon_sym_endswith,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_isnot,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
  [720] = 2,
    ACTIONS(83), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_is,
    ACTIONS(81), 27,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_b_DASHor,
      anon_sym_b_DASHxor,
      anon_sym_b_DASHand,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_in,
      anon_sym_matches,
      anon_sym_startswith,
      anon_sym_endswith,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_isnot,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
  [760] = 2,
    ACTIONS(63), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_is,
    ACTIONS(58), 27,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_b_DASHor,
      anon_sym_b_DASHxor,
      anon_sym_b_DASHand,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_in,
      anon_sym_matches,
      anon_sym_startswith,
      anon_sym_endswith,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_isnot,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
  [800] = 2,
    ACTIONS(87), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_is,
    ACTIONS(85), 27,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_b_DASHor,
      anon_sym_b_DASHxor,
      anon_sym_b_DASHand,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_in,
      anon_sym_matches,
      anon_sym_startswith,
      anon_sym_endswith,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_isnot,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
  [840] = 2,
    ACTIONS(91), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_is,
    ACTIONS(89), 27,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_and,
      anon_sym_b_DASHor,
      anon_sym_b_DASHxor,
      anon_sym_b_DASHand,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_in,
      anon_sym_matches,
      anon_sym_startswith,
      anon_sym_endswith,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_isnot,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
  [880] = 4,
    STATE(30), 1,
      sym_binary_operator,
    ACTIONS(93), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
    ACTIONS(69), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_is,
    ACTIONS(67), 21,
      anon_sym_or,
      anon_sym_and,
      anon_sym_b_DASHor,
      anon_sym_b_DASHxor,
      anon_sym_b_DASHand,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_in,
      anon_sym_matches,
      anon_sym_startswith,
      anon_sym_endswith,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_isnot,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
  [922] = 4,
    STATE(30), 1,
      sym_binary_operator,
    ACTIONS(95), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(69), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_is,
    ACTIONS(67), 23,
      anon_sym_or,
      anon_sym_and,
      anon_sym_b_DASHor,
      anon_sym_b_DASHxor,
      anon_sym_b_DASHand,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_in,
      anon_sym_matches,
      anon_sym_startswith,
      anon_sym_endswith,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_isnot,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
  [963] = 4,
    STATE(30), 1,
      sym_binary_operator,
    ACTIONS(97), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(69), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_is,
    ACTIONS(67), 23,
      anon_sym_or,
      anon_sym_and,
      anon_sym_b_DASHor,
      anon_sym_b_DASHxor,
      anon_sym_b_DASHand,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_in,
      anon_sym_matches,
      anon_sym_startswith,
      anon_sym_endswith,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_isnot,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
  [1004] = 4,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      sym_binary_operator,
    ACTIONS(69), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_is,
    ACTIONS(67), 23,
      anon_sym_or,
      anon_sym_and,
      anon_sym_b_DASHor,
      anon_sym_b_DASHxor,
      anon_sym_b_DASHand,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_in,
      anon_sym_matches,
      anon_sym_startswith,
      anon_sym_endswith,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_isnot,
      anon_sym_STAR_STAR,
      anon_sym_QMARK_QMARK,
  [1044] = 12,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      aux_sym_identifier_token1,
    ACTIONS(111), 1,
      anon_sym_not,
    STATE(5), 1,
      sym_identifier,
    STATE(23), 1,
      sym__expression,
    STATE(33), 1,
      sym_argument_name,
    STATE(34), 1,
      sym_unary_operator,
    STATE(46), 1,
      sym_argument,
    ACTIONS(107), 2,
      sym_string,
      sym_number,
    ACTIONS(109), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(8), 4,
      sym__literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
  [1086] = 11,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      aux_sym_identifier_token1,
    ACTIONS(111), 1,
      anon_sym_not,
    STATE(5), 1,
      sym_identifier,
    STATE(23), 1,
      sym__expression,
    STATE(33), 1,
      sym_argument_name,
    STATE(34), 1,
      sym_unary_operator,
    STATE(51), 1,
      sym_argument,
    ACTIONS(107), 2,
      sym_string,
      sym_number,
    ACTIONS(109), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(8), 4,
      sym__literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
  [1125] = 7,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 1,
      aux_sym_content_token1,
    ACTIONS(118), 1,
      anon_sym_LBRACE_POUND,
    STATE(36), 1,
      aux_sym_content_repeat1,
    ACTIONS(121), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
    ACTIONS(124), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
    STATE(28), 5,
      sym_content,
      sym_comment,
      sym_block_directive,
      sym_output_directive,
      aux_sym_template_repeat1,
  [1155] = 7,
    ACTIONS(5), 1,
      aux_sym_content_token1,
    ACTIONS(7), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      aux_sym_content_repeat1,
    ACTIONS(9), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
    ACTIONS(11), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
    STATE(28), 5,
      sym_content,
      sym_comment,
      sym_block_directive,
      sym_output_directive,
      aux_sym_template_repeat1,
  [1185] = 9,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym_not,
    ACTIONS(129), 1,
      aux_sym_identifier_token1,
    STATE(5), 1,
      sym_identifier,
    STATE(14), 1,
      sym__expression,
    STATE(34), 1,
      sym_unary_operator,
    ACTIONS(107), 2,
      sym_string,
      sym_number,
    ACTIONS(109), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(8), 4,
      sym__literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
  [1218] = 9,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym_not,
    ACTIONS(129), 1,
      aux_sym_identifier_token1,
    STATE(5), 1,
      sym_identifier,
    STATE(22), 1,
      sym__expression,
    STATE(34), 1,
      sym_unary_operator,
    ACTIONS(107), 2,
      sym_string,
      sym_number,
    ACTIONS(109), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(8), 4,
      sym__literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
  [1251] = 9,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym_not,
    ACTIONS(129), 1,
      aux_sym_identifier_token1,
    STATE(5), 1,
      sym_identifier,
    STATE(25), 1,
      sym__expression,
    STATE(34), 1,
      sym_unary_operator,
    ACTIONS(107), 2,
      sym_string,
      sym_number,
    ACTIONS(109), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(8), 4,
      sym__literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
  [1284] = 9,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym_not,
    ACTIONS(129), 1,
      aux_sym_identifier_token1,
    STATE(5), 1,
      sym_identifier,
    STATE(24), 1,
      sym__expression,
    STATE(34), 1,
      sym_unary_operator,
    ACTIONS(107), 2,
      sym_string,
      sym_number,
    ACTIONS(109), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(8), 4,
      sym__literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
  [1317] = 9,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym_not,
    ACTIONS(129), 1,
      aux_sym_identifier_token1,
    STATE(5), 1,
      sym_identifier,
    STATE(10), 1,
      sym__expression,
    STATE(34), 1,
      sym_unary_operator,
    ACTIONS(107), 2,
      sym_string,
      sym_number,
    ACTIONS(109), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(8), 4,
      sym__literal,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
  [1350] = 4,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 1,
      aux_sym_content_token1,
    STATE(35), 1,
      aux_sym_content_repeat1,
    ACTIONS(136), 7,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
  [1369] = 4,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      aux_sym_content_token1,
    STATE(35), 1,
      aux_sym_content_repeat1,
    ACTIONS(142), 7,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
  [1388] = 2,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
  [1402] = 2,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
  [1416] = 2,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
  [1430] = 2,
    ACTIONS(158), 2,
      aux_sym_identifier_token1,
      anon_sym_not,
    ACTIONS(156), 5,
      anon_sym_LPAREN,
      sym_string,
      sym_number,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1442] = 2,
    ACTIONS(162), 2,
      aux_sym_identifier_token1,
      anon_sym_not,
    ACTIONS(160), 5,
      anon_sym_LPAREN,
      sym_string,
      sym_number,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1454] = 2,
    ACTIONS(166), 2,
      aux_sym_identifier_token1,
      anon_sym_not,
    ACTIONS(164), 5,
      anon_sym_LPAREN,
      sym_string,
      sym_number,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1466] = 3,
    ACTIONS(170), 1,
      aux_sym_block_code_token1,
    STATE(43), 1,
      aux_sym_block_code_repeat1,
    ACTIONS(168), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [1478] = 3,
    ACTIONS(175), 1,
      aux_sym_block_code_token1,
    STATE(43), 1,
      aux_sym_block_code_repeat1,
    ACTIONS(173), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [1490] = 3,
    ACTIONS(177), 1,
      aux_sym_identifier_token1,
    STATE(7), 1,
      sym_identifier,
    STATE(19), 1,
      sym_filter,
  [1500] = 3,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_arguments_repeat1,
  [1510] = 1,
    ACTIONS(183), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [1516] = 3,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_arguments_repeat1,
  [1526] = 3,
    ACTIONS(187), 1,
      aux_sym_block_code_token1,
    STATE(44), 1,
      aux_sym_block_code_repeat1,
    STATE(47), 1,
      sym_block_code,
  [1536] = 3,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_arguments_repeat1,
  [1546] = 1,
    ACTIONS(189), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1551] = 1,
    ACTIONS(194), 1,
      aux_sym_comment_token1,
  [1555] = 1,
    ACTIONS(196), 1,
      aux_sym_identifier_token1,
  [1559] = 1,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
  [1563] = 1,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 141,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 234,
  [SMALL_STATE(8)] = 280,
  [SMALL_STATE(9)] = 325,
  [SMALL_STATE(10)] = 370,
  [SMALL_STATE(11)] = 413,
  [SMALL_STATE(12)] = 458,
  [SMALL_STATE(13)] = 503,
  [SMALL_STATE(14)] = 548,
  [SMALL_STATE(15)] = 593,
  [SMALL_STATE(16)] = 640,
  [SMALL_STATE(17)] = 680,
  [SMALL_STATE(18)] = 720,
  [SMALL_STATE(19)] = 760,
  [SMALL_STATE(20)] = 800,
  [SMALL_STATE(21)] = 840,
  [SMALL_STATE(22)] = 880,
  [SMALL_STATE(23)] = 922,
  [SMALL_STATE(24)] = 963,
  [SMALL_STATE(25)] = 1004,
  [SMALL_STATE(26)] = 1044,
  [SMALL_STATE(27)] = 1086,
  [SMALL_STATE(28)] = 1125,
  [SMALL_STATE(29)] = 1155,
  [SMALL_STATE(30)] = 1185,
  [SMALL_STATE(31)] = 1218,
  [SMALL_STATE(32)] = 1251,
  [SMALL_STATE(33)] = 1284,
  [SMALL_STATE(34)] = 1317,
  [SMALL_STATE(35)] = 1350,
  [SMALL_STATE(36)] = 1369,
  [SMALL_STATE(37)] = 1388,
  [SMALL_STATE(38)] = 1402,
  [SMALL_STATE(39)] = 1416,
  [SMALL_STATE(40)] = 1430,
  [SMALL_STATE(41)] = 1442,
  [SMALL_STATE(42)] = 1454,
  [SMALL_STATE(43)] = 1466,
  [SMALL_STATE(44)] = 1478,
  [SMALL_STATE(45)] = 1490,
  [SMALL_STATE(46)] = 1500,
  [SMALL_STATE(47)] = 1510,
  [SMALL_STATE(48)] = 1516,
  [SMALL_STATE(49)] = 1526,
  [SMALL_STATE(50)] = 1536,
  [SMALL_STATE(51)] = 1546,
  [SMALL_STATE(52)] = 1551,
  [SMALL_STATE(53)] = 1555,
  [SMALL_STATE(54)] = 1559,
  [SMALL_STATE(55)] = 1563,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(53),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1, .production_id = 3),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 1, .production_id = 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 4),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 4),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(45),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_repeat1, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 2, .production_id = 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1, .production_id = 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2, .production_id = 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(36),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(52),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(49),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(31),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(35),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_directive, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_directive, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_name, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_name, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_code_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_code_repeat1, 2), SHIFT_REPEAT(43),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_code, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(27),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [200] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_twig(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
