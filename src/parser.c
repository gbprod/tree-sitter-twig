#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_content_token1 = 1,
  anon_sym_LBRACE_PERCENT = 2,
  anon_sym_LBRACE_PERCENT_DASH = 3,
  anon_sym_LBRACE_PERCENT_TILDE = 4,
  anon_sym_PERCENT_RBRACE = 5,
  anon_sym_DASH_PERCENT_RBRACE = 6,
  anon_sym_TILDE_PERCENT_RBRACE = 7,
  aux_sym_block_code_token1 = 8,
  anon_sym_LBRACE_LBRACE = 9,
  anon_sym_RBRACE_RBRACE = 10,
  aux_sym_variable_code_token1 = 11,
  anon_sym_LBRACE_POUND = 12,
  aux_sym_comment_token1 = 13,
  anon_sym_RBRACE = 14,
  sym_template = 15,
  sym_content = 16,
  sym_block_directive = 17,
  sym_block_code = 18,
  sym_variable_directive = 19,
  sym_variable_code = 20,
  sym_comment = 21,
  aux_sym_template_repeat1 = 22,
  aux_sym_content_repeat1 = 23,
  aux_sym_block_code_repeat1 = 24,
  aux_sym_variable_code_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_content_token1] = "content_token1",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_LBRACE_PERCENT_DASH] = "{%-",
  [anon_sym_LBRACE_PERCENT_TILDE] = "{%~",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_DASH_PERCENT_RBRACE] = "-%}",
  [anon_sym_TILDE_PERCENT_RBRACE] = "~%}",
  [aux_sym_block_code_token1] = "block_code_token1",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [aux_sym_variable_code_token1] = "variable_code_token1",
  [anon_sym_LBRACE_POUND] = "{#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_RBRACE] = "}",
  [sym_template] = "template",
  [sym_content] = "content",
  [sym_block_directive] = "block_directive",
  [sym_block_code] = "block_code",
  [sym_variable_directive] = "variable_directive",
  [sym_variable_code] = "variable_code",
  [sym_comment] = "comment",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
  [aux_sym_block_code_repeat1] = "block_code_repeat1",
  [aux_sym_variable_code_repeat1] = "variable_code_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_content_token1] = aux_sym_content_token1,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_LBRACE_PERCENT_DASH] = anon_sym_LBRACE_PERCENT_DASH,
  [anon_sym_LBRACE_PERCENT_TILDE] = anon_sym_LBRACE_PERCENT_TILDE,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_DASH_PERCENT_RBRACE] = anon_sym_DASH_PERCENT_RBRACE,
  [anon_sym_TILDE_PERCENT_RBRACE] = anon_sym_TILDE_PERCENT_RBRACE,
  [aux_sym_block_code_token1] = aux_sym_block_code_token1,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [aux_sym_variable_code_token1] = aux_sym_variable_code_token1,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_template] = sym_template,
  [sym_content] = sym_content,
  [sym_block_directive] = sym_block_directive,
  [sym_block_code] = sym_block_code,
  [sym_variable_directive] = sym_variable_directive,
  [sym_variable_code] = sym_variable_code,
  [sym_comment] = sym_comment,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
  [aux_sym_block_code_repeat1] = aux_sym_block_code_repeat1,
  [aux_sym_variable_code_repeat1] = aux_sym_variable_code_repeat1,
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
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_code_token1] = {
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
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
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
  [sym_variable_code] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
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
  [aux_sym_variable_code_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '~') ADVANCE(21);
      if (('&' <= lookahead && lookahead <= '|')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(30);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '~') ADVANCE(21);
      if (('&' <= lookahead && lookahead <= '}')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == '}') ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == '}') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == '}') ADVANCE(26);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 8:
      if (('%' <= lookahead && lookahead <= '~')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '%') ADVANCE(13);
      if (lookahead == '{') ADVANCE(24);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '~') ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_DASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_TILDE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_RBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_TILDE_PERCENT_RBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_block_code_token1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_block_code_token1);
      if (lookahead == '%') ADVANCE(4);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_block_code_token1);
      if (lookahead == '%') ADVANCE(5);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_block_code_token1);
      if (lookahead == '}') ADVANCE(16);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_block_code_token1);
      if (lookahead != 0 &&
          (lookahead < '%' || '~' < lookahead)) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_variable_code_token1);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_variable_code_token1);
      if (lookahead == '}') ADVANCE(25);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_variable_code_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_TILDE_PERCENT_RBRACE] = ACTIONS(1),
    [aux_sym_block_code_token1] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(17),
    [sym_content] = STATE(2),
    [sym_block_directive] = STATE(2),
    [sym_variable_directive] = STATE(2),
    [sym_comment] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [aux_sym_content_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_content_token1] = ACTIONS(5),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(9),
    [anon_sym_LBRACE_PERCENT_TILDE] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACE_POUND] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      aux_sym_content_token1,
    ACTIONS(7), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_content_repeat1,
    ACTIONS(9), 2,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
    STATE(3), 5,
      sym_content,
      sym_block_directive,
      sym_variable_directive,
      sym_comment,
      aux_sym_template_repeat1,
  [30] = 8,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      aux_sym_content_token1,
    ACTIONS(22), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(28), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(31), 1,
      anon_sym_LBRACE_POUND,
    STATE(4), 1,
      aux_sym_content_repeat1,
    ACTIONS(25), 2,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
    STATE(3), 5,
      sym_content,
      sym_block_directive,
      sym_variable_directive,
      sym_comment,
      aux_sym_template_repeat1,
  [60] = 4,
    ACTIONS(36), 1,
      aux_sym_content_token1,
    ACTIONS(38), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(5), 1,
      aux_sym_content_repeat1,
    ACTIONS(34), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [77] = 4,
    ACTIONS(42), 1,
      aux_sym_content_token1,
    ACTIONS(45), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(5), 1,
      aux_sym_content_repeat1,
    ACTIONS(40), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [94] = 2,
    ACTIONS(49), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(47), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [106] = 2,
    ACTIONS(53), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [118] = 2,
    ACTIONS(57), 2,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(55), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [130] = 3,
    ACTIONS(61), 1,
      aux_sym_block_code_token1,
    STATE(10), 1,
      aux_sym_block_code_repeat1,
    ACTIONS(59), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [142] = 3,
    ACTIONS(65), 1,
      aux_sym_block_code_token1,
    STATE(10), 1,
      aux_sym_block_code_repeat1,
    ACTIONS(63), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [154] = 3,
    ACTIONS(68), 1,
      aux_sym_block_code_token1,
    STATE(9), 1,
      aux_sym_block_code_repeat1,
    STATE(13), 1,
      sym_block_code,
  [164] = 3,
    ACTIONS(70), 1,
      aux_sym_variable_code_token1,
    STATE(14), 1,
      aux_sym_variable_code_repeat1,
    STATE(18), 1,
      sym_variable_code,
  [174] = 1,
    ACTIONS(72), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [180] = 3,
    ACTIONS(74), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(76), 1,
      aux_sym_variable_code_token1,
    STATE(15), 1,
      aux_sym_variable_code_repeat1,
  [190] = 3,
    ACTIONS(78), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(80), 1,
      aux_sym_variable_code_token1,
    STATE(15), 1,
      aux_sym_variable_code_repeat1,
  [200] = 1,
    ACTIONS(83), 1,
      aux_sym_comment_token1,
  [204] = 1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
  [208] = 1,
    ACTIONS(87), 1,
      anon_sym_RBRACE_RBRACE,
  [212] = 1,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 77,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 106,
  [SMALL_STATE(8)] = 118,
  [SMALL_STATE(9)] = 130,
  [SMALL_STATE(10)] = 142,
  [SMALL_STATE(11)] = 154,
  [SMALL_STATE(12)] = 164,
  [SMALL_STATE(13)] = 174,
  [SMALL_STATE(14)] = 180,
  [SMALL_STATE(15)] = 190,
  [SMALL_STATE(16)] = 200,
  [SMALL_STATE(17)] = 204,
  [SMALL_STATE(18)] = 208,
  [SMALL_STATE(19)] = 212,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(4),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(11),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(11),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(12),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(16),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(5),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_directive, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_directive, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_directive, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_directive, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_code, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_code_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_code_repeat1, 2), SHIFT_REPEAT(10),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_code, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_code_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_code_repeat1, 2), SHIFT_REPEAT(15),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [85] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
