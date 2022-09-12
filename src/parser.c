#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 2
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

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
  anon_sym_PIPE = 18,
  sym_identifier = 19,
  sym_string = 20,
  anon_sym_LPAREN = 21,
  anon_sym_COMMA = 22,
  anon_sym_RPAREN = 23,
  sym_template = 24,
  sym_content = 25,
  sym_comment = 26,
  sym_block_directive = 27,
  sym_block_code = 28,
  sym_variable_directive = 29,
  sym_expression = 30,
  sym_function_call = 31,
  sym_arguments = 32,
  sym_filter = 33,
  aux_sym_template_repeat1 = 34,
  aux_sym_content_repeat1 = 35,
  aux_sym_block_code_repeat1 = 36,
  aux_sym_expression_repeat1 = 37,
  aux_sym_arguments_repeat1 = 38,
  alias_sym_filter_identifier = 39,
  alias_sym_function_identifier = 40,
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
  [anon_sym_PIPE] = "|",
  [sym_identifier] = "variable",
  [sym_string] = "string",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_template] = "template",
  [sym_content] = "content",
  [sym_comment] = "comment",
  [sym_block_directive] = "block_directive",
  [sym_block_code] = "block_code",
  [sym_variable_directive] = "variable_directive",
  [sym_expression] = "expression",
  [sym_function_call] = "function_call",
  [sym_arguments] = "arguments",
  [sym_filter] = "filter",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
  [aux_sym_block_code_repeat1] = "block_code_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
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
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_template] = sym_template,
  [sym_content] = sym_content,
  [sym_comment] = sym_comment,
  [sym_block_directive] = sym_block_directive,
  [sym_block_code] = sym_block_code,
  [sym_variable_directive] = sym_variable_directive,
  [sym_expression] = sym_expression,
  [sym_function_call] = sym_function_call,
  [sym_arguments] = sym_arguments,
  [sym_filter] = sym_filter,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
  [aux_sym_block_code_repeat1] = aux_sym_block_code_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
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
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_variable_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
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
  [sym_filter] = {
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
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
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
    [0] = alias_sym_filter_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '|') ADVANCE(50);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '~') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 255)) ADVANCE(51);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '{') ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(29);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(41);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '~') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (('&' <= lookahead && lookahead <= '}')) ADVANCE(37);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(13);
      if (lookahead == '}') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '}') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '|') ADVANCE(50);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '~') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '\\') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == '\\') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == '}') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(48);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(49);
      END_STATE();
    case 17:
      if (lookahead == '}') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == '}') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == '}') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (('%' <= lookahead && lookahead <= '~')) ADVANCE(37);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 22:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '{') ADVANCE(44);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(4);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '~') ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_DASH);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_TILDE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_RBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_TILDE_PERCENT_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_block_code_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_block_code_token1);
      if (lookahead == '%') ADVANCE(41);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '~') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (('&' <= lookahead && lookahead <= '}')) ADVANCE(37);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_block_code_token1);
      if (lookahead == '%') ADVANCE(13);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_block_code_token1);
      if (lookahead == '%') ADVANCE(15);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_block_code_token1);
      if (lookahead == '}') ADVANCE(34);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_block_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (('%' <= lookahead && lookahead <= '~')) ADVANCE(37);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_block_code_token1);
      if (lookahead != 0 &&
          (lookahead < '%' || '~' < lookahead)) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '~') ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_TILDE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DASH_RBRACE_RBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_TILDE_RBRACE_RBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 23},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
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
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(36),
    [sym_content] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_directive] = STATE(2),
    [sym_variable_directive] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [aux_sym_content_repeat1] = STATE(4),
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
  [0] = 7,
    ACTIONS(5), 1,
      aux_sym_content_token1,
    ACTIONS(7), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_content_repeat1,
    ACTIONS(9), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
    ACTIONS(11), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
    STATE(3), 5,
      sym_content,
      sym_comment,
      sym_block_directive,
      sym_variable_directive,
      aux_sym_template_repeat1,
  [30] = 7,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      aux_sym_content_token1,
    ACTIONS(20), 1,
      anon_sym_LBRACE_POUND,
    STATE(4), 1,
      aux_sym_content_repeat1,
    ACTIONS(23), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
    ACTIONS(26), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
    STATE(3), 5,
      sym_content,
      sym_comment,
      sym_block_directive,
      sym_variable_directive,
      aux_sym_template_repeat1,
  [60] = 4,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym_content_token1,
    STATE(5), 1,
      aux_sym_content_repeat1,
    ACTIONS(33), 7,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
  [79] = 4,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      aux_sym_content_token1,
    STATE(5), 1,
      aux_sym_content_repeat1,
    ACTIONS(40), 7,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
  [98] = 2,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
  [112] = 2,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
  [126] = 2,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
  [140] = 5,
    ACTIONS(56), 1,
      anon_sym_PIPE,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      aux_sym_expression_repeat1,
    STATE(21), 1,
      sym_arguments,
    ACTIONS(54), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [160] = 3,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_arguments,
    ACTIONS(60), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [175] = 3,
    ACTIONS(64), 1,
      anon_sym_PIPE,
    STATE(11), 1,
      aux_sym_expression_repeat1,
    ACTIONS(62), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [189] = 3,
    ACTIONS(56), 1,
      anon_sym_PIPE,
    STATE(14), 1,
      aux_sym_expression_repeat1,
    ACTIONS(54), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [203] = 7,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_string,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      sym_function_call,
    STATE(27), 1,
      sym_expression,
    STATE(28), 1,
      aux_sym_arguments_repeat1,
  [225] = 3,
    ACTIONS(56), 1,
      anon_sym_PIPE,
    STATE(11), 1,
      aux_sym_expression_repeat1,
    ACTIONS(75), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [239] = 1,
    ACTIONS(62), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [248] = 1,
    ACTIONS(77), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [257] = 5,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_string,
    STATE(12), 1,
      sym_function_call,
    STATE(33), 1,
      sym_expression,
    ACTIONS(79), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [274] = 1,
    ACTIONS(81), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [283] = 1,
    ACTIONS(83), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [292] = 1,
    ACTIONS(85), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [301] = 1,
    ACTIONS(87), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [310] = 3,
    ACTIONS(91), 1,
      aux_sym_block_code_token1,
    STATE(22), 1,
      aux_sym_block_code_repeat1,
    ACTIONS(89), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [322] = 3,
    ACTIONS(96), 1,
      aux_sym_block_code_token1,
    STATE(22), 1,
      aux_sym_block_code_repeat1,
    ACTIONS(94), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [334] = 4,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_string,
    STATE(12), 1,
      sym_function_call,
    STATE(25), 1,
      sym_expression,
  [347] = 1,
    ACTIONS(98), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
  [353] = 1,
    ACTIONS(100), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [359] = 3,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_arguments_repeat1,
  [369] = 3,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_arguments_repeat1,
  [379] = 3,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_arguments_repeat1,
  [389] = 3,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_arguments_repeat1,
  [399] = 3,
    ACTIONS(111), 1,
      aux_sym_block_code_token1,
    STATE(23), 1,
      aux_sym_block_code_repeat1,
    STATE(26), 1,
      sym_block_code,
  [409] = 2,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(15), 1,
      sym_filter,
  [416] = 1,
    ACTIONS(109), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [421] = 1,
    ACTIONS(115), 1,
      aux_sym_comment_token1,
  [425] = 1,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
  [429] = 1,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 79,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 112,
  [SMALL_STATE(8)] = 126,
  [SMALL_STATE(9)] = 140,
  [SMALL_STATE(10)] = 160,
  [SMALL_STATE(11)] = 175,
  [SMALL_STATE(12)] = 189,
  [SMALL_STATE(13)] = 203,
  [SMALL_STATE(14)] = 225,
  [SMALL_STATE(15)] = 239,
  [SMALL_STATE(16)] = 248,
  [SMALL_STATE(17)] = 257,
  [SMALL_STATE(18)] = 274,
  [SMALL_STATE(19)] = 283,
  [SMALL_STATE(20)] = 292,
  [SMALL_STATE(21)] = 301,
  [SMALL_STATE(22)] = 310,
  [SMALL_STATE(23)] = 322,
  [SMALL_STATE(24)] = 334,
  [SMALL_STATE(25)] = 347,
  [SMALL_STATE(26)] = 353,
  [SMALL_STATE(27)] = 359,
  [SMALL_STATE(28)] = 369,
  [SMALL_STATE(29)] = 379,
  [SMALL_STATE(30)] = 389,
  [SMALL_STATE(31)] = 399,
  [SMALL_STATE(32)] = 409,
  [SMALL_STATE(33)] = 416,
  [SMALL_STATE(34)] = 421,
  [SMALL_STATE(35)] = 425,
  [SMALL_STATE(36)] = 429,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(4),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(34),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(31),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(24),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(5),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_directive, 3),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_directive, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_directive, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_directive, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1, .production_id = 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(32),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_code_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_code_repeat1, 2), SHIFT_REPEAT(22),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_code, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(17),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [119] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
