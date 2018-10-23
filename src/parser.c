#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 36
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_EQ = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_PIPE = 4,
  anon_sym_DOT = 5,
  sym_end = 6,
  sym_digit = 7,
  sym_label = 8,
  sym_cmd = 9,
  sym_name = 10,
  sym_comment = 11,
  sym_source_file = 12,
  sym_proc_declaration = 13,
  sym_par = 14,
  sym__par = 15,
  sym_seq = 16,
  sym__seq = 17,
  sym__proc = 18,
  aux_sym_source_file_repeat1 = 19,
  aux_sym__par_repeat1 = 20,
  aux_sym__seq_repeat1 = 21,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PIPE] = "|",
  [anon_sym_DOT] = ".",
  [sym_end] = "end",
  [sym_digit] = "digit",
  [sym_label] = "label",
  [sym_cmd] = "cmd",
  [sym_name] = "name",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_proc_declaration] = "proc_declaration",
  [sym_par] = "par",
  [sym__par] = "_par",
  [sym_seq] = "seq",
  [sym__seq] = "_seq",
  [sym__proc] = "_proc",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__par_repeat1] = "_par_repeat1",
  [aux_sym__seq_repeat1] = "_seq_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_end] = {
    .visible = true,
    .named = true,
  },
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_proc_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_par] = {
    .visible = true,
    .named = true,
  },
  [sym__par] = {
    .visible = false,
    .named = true,
  },
  [sym_seq] = {
    .visible = true,
    .named = true,
  },
  [sym__seq] = {
    .visible = false,
    .named = true,
  },
  [sym__proc] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__par_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__seq_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == '=')
        ADVANCE(10);
      if (lookahead == '\\')
        SKIP(11);
      if (lookahead == 'e')
        ADVANCE(12);
      if (lookahead == '|')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(16);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 4:
      if (lookahead == '-')
        ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(6);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_digit);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 8:
      if (lookahead == '/')
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 11:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 12:
      if (lookahead == 'n')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'd')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\'')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == '\\')
        SKIP(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(18);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == '-')
        ADVANCE(5);
      END_STATE();
    case 20:
      if (lookahead == 'n')
        SKIP(18);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\'')
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == '=')
        ADVANCE(10);
      if (lookahead == '\\')
        SKIP(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(22);
      END_STATE();
    case 23:
      if (lookahead == 'n')
        SKIP(22);
      END_STATE();
    case 24:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == '\\')
        SKIP(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(24);
      END_STATE();
    case 25:
      if (lookahead == 'n')
        SKIP(24);
      END_STATE();
    case 26:
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == '\\')
        SKIP(27);
      if (lookahead == 'e')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(26);
      END_STATE();
    case 27:
      if (lookahead == 'n')
        SKIP(26);
      END_STATE();
    case 28:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == '\\')
        SKIP(29);
      if (lookahead == '|')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(28);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'n')
        SKIP(28);
      END_STATE();
    case 30:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == '\\')
        SKIP(31);
      if (lookahead == '|')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(30);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'n')
        SKIP(30);
      END_STATE();
    case 32:
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == '\\')
        SKIP(33);
      if (lookahead == '|')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(32);
      END_STATE();
    case 33:
      if (lookahead == 'n')
        SKIP(32);
      END_STATE();
    case 34:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == '\\')
        SKIP(35);
      if (lookahead == '|')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(34);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 35:
      if (lookahead == 'n')
        SKIP(34);
      END_STATE();
    case 36:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == '\\')
        SKIP(37);
      if (lookahead == '|')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(36);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 37:
      if (lookahead == 'n')
        SKIP(36);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 22},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 34},
  [19] = {.lex_state = 36},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 32},
  [22] = {.lex_state = 34},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 32},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 28},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 30},
  [29] = {.lex_state = 30},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 32},
  [32] = {.lex_state = 32},
  [33] = {.lex_state = 32},
  [34] = {.lex_state = 32},
  [35] = {.lex_state = 32},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_end] = ACTIONS(1),
    [sym_digit] = ACTIONS(1),
    [sym_label] = ACTIONS(3),
    [sym_cmd] = ACTIONS(3),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [sym_proc_declaration] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [2] = {
    [anon_sym_EQ] = ACTIONS(11),
    [sym_comment] = ACTIONS(9),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_comment] = ACTIONS(9),
  },
  [4] = {
    [sym_proc_declaration] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_name] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [5] = {
    [sym_par] = STATE(8),
    [sym__par] = STATE(9),
    [sym_seq] = STATE(9),
    [sym__seq] = STATE(10),
    [sym__proc] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_end] = ACTIONS(19),
    [sym_comment] = ACTIONS(9),
  },
  [6] = {
    [sym_proc_declaration] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_name] = ACTIONS(23),
    [sym_comment] = ACTIONS(9),
  },
  [7] = {
    [sym_par] = STATE(11),
    [sym__par] = STATE(12),
    [sym_seq] = STATE(12),
    [sym__seq] = STATE(13),
    [sym__proc] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_end] = ACTIONS(26),
    [sym_comment] = ACTIONS(9),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(28),
    [sym_name] = ACTIONS(28),
    [sym_comment] = ACTIONS(9),
  },
  [9] = {
    [aux_sym__par_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(30),
    [anon_sym_PIPE] = ACTIONS(32),
    [sym_name] = ACTIONS(30),
    [sym_comment] = ACTIONS(9),
  },
  [10] = {
    [aux_sym__seq_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(34),
    [anon_sym_PIPE] = ACTIONS(34),
    [anon_sym_DOT] = ACTIONS(36),
    [sym_name] = ACTIONS(34),
    [sym_comment] = ACTIONS(9),
  },
  [11] = {
    [anon_sym_RPAREN] = ACTIONS(38),
    [sym_comment] = ACTIONS(9),
  },
  [12] = {
    [aux_sym__par_repeat1] = STATE(21),
    [anon_sym_RPAREN] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(42),
    [sym_comment] = ACTIONS(9),
  },
  [13] = {
    [aux_sym__seq_repeat1] = STATE(24),
    [anon_sym_RPAREN] = ACTIONS(44),
    [anon_sym_PIPE] = ACTIONS(34),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_comment] = ACTIONS(9),
  },
  [14] = {
    [sym__par] = STATE(25),
    [sym_seq] = STATE(25),
    [sym__seq] = STATE(10),
    [sym__proc] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_end] = ACTIONS(19),
    [sym_comment] = ACTIONS(9),
  },
  [15] = {
    [aux_sym__par_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(48),
    [anon_sym_PIPE] = ACTIONS(32),
    [sym_name] = ACTIONS(48),
    [sym_comment] = ACTIONS(9),
  },
  [16] = {
    [sym__seq] = STATE(28),
    [sym__proc] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(50),
    [sym_end] = ACTIONS(52),
    [sym_comment] = ACTIONS(9),
  },
  [17] = {
    [aux_sym__seq_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_PIPE] = ACTIONS(54),
    [anon_sym_DOT] = ACTIONS(36),
    [sym_name] = ACTIONS(54),
    [sym_comment] = ACTIONS(9),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(56),
    [anon_sym_PIPE] = ACTIONS(56),
    [anon_sym_DOT] = ACTIONS(56),
    [sym_name] = ACTIONS(56),
    [sym_comment] = ACTIONS(9),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(58),
    [sym_name] = ACTIONS(58),
    [sym_comment] = ACTIONS(9),
  },
  [20] = {
    [sym__par] = STATE(30),
    [sym_seq] = STATE(30),
    [sym__seq] = STATE(31),
    [sym__proc] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_end] = ACTIONS(60),
    [sym_comment] = ACTIONS(9),
  },
  [21] = {
    [aux_sym__par_repeat1] = STATE(32),
    [anon_sym_RPAREN] = ACTIONS(48),
    [anon_sym_PIPE] = ACTIONS(42),
    [sym_comment] = ACTIONS(9),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_RPAREN] = ACTIONS(62),
    [anon_sym_PIPE] = ACTIONS(62),
    [anon_sym_DOT] = ACTIONS(62),
    [sym_name] = ACTIONS(62),
    [sym_comment] = ACTIONS(9),
  },
  [23] = {
    [sym__seq] = STATE(33),
    [sym__proc] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(50),
    [sym_end] = ACTIONS(64),
    [sym_comment] = ACTIONS(9),
  },
  [24] = {
    [aux_sym__seq_repeat1] = STATE(34),
    [anon_sym_RPAREN] = ACTIONS(54),
    [anon_sym_PIPE] = ACTIONS(54),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_comment] = ACTIONS(9),
  },
  [25] = {
    [aux_sym__par_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_PIPE] = ACTIONS(66),
    [sym_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(9),
  },
  [26] = {
    [aux_sym__par_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_PIPE] = ACTIONS(68),
    [sym_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(9),
  },
  [27] = {
    [sym_par] = STATE(11),
    [sym__par] = STATE(35),
    [sym_seq] = STATE(35),
    [sym__seq] = STATE(13),
    [sym__proc] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_end] = ACTIONS(26),
    [sym_comment] = ACTIONS(9),
  },
  [28] = {
    [aux_sym__seq_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(71),
    [anon_sym_DOT] = ACTIONS(71),
    [sym_name] = ACTIONS(71),
    [sym_comment] = ACTIONS(9),
  },
  [29] = {
    [aux_sym__seq_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(71),
    [anon_sym_DOT] = ACTIONS(73),
    [sym_name] = ACTIONS(71),
    [sym_comment] = ACTIONS(9),
  },
  [30] = {
    [aux_sym__par_repeat1] = STATE(21),
    [anon_sym_RPAREN] = ACTIONS(66),
    [anon_sym_PIPE] = ACTIONS(66),
    [sym_comment] = ACTIONS(9),
  },
  [31] = {
    [aux_sym__seq_repeat1] = STATE(24),
    [anon_sym_RPAREN] = ACTIONS(34),
    [anon_sym_PIPE] = ACTIONS(34),
    [anon_sym_DOT] = ACTIONS(46),
    [sym_comment] = ACTIONS(9),
  },
  [32] = {
    [aux_sym__par_repeat1] = STATE(32),
    [anon_sym_RPAREN] = ACTIONS(66),
    [anon_sym_PIPE] = ACTIONS(76),
    [sym_comment] = ACTIONS(9),
  },
  [33] = {
    [aux_sym__seq_repeat1] = STATE(24),
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(71),
    [anon_sym_DOT] = ACTIONS(71),
    [sym_comment] = ACTIONS(9),
  },
  [34] = {
    [aux_sym__seq_repeat1] = STATE(34),
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(71),
    [anon_sym_DOT] = ACTIONS(79),
    [sym_comment] = ACTIONS(9),
  },
  [35] = {
    [aux_sym__par_repeat1] = STATE(21),
    [anon_sym_RPAREN] = ACTIONS(30),
    [anon_sym_PIPE] = ACTIONS(42),
    [sym_comment] = ACTIONS(9),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, SHIFT(10),
  [21] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [26] = {.count = 1, .reusable = true}, SHIFT(13),
  [28] = {.count = 1, .reusable = true}, REDUCE(sym_proc_declaration, 3),
  [30] = {.count = 1, .reusable = true}, REDUCE(sym_par, 1),
  [32] = {.count = 1, .reusable = true}, SHIFT(14),
  [34] = {.count = 1, .reusable = true}, REDUCE(sym_seq, 1),
  [36] = {.count = 1, .reusable = true}, SHIFT(16),
  [38] = {.count = 1, .reusable = true}, SHIFT(18),
  [40] = {.count = 1, .reusable = true}, SHIFT(19),
  [42] = {.count = 1, .reusable = true}, SHIFT(20),
  [44] = {.count = 1, .reusable = true}, SHIFT(22),
  [46] = {.count = 1, .reusable = true}, SHIFT(23),
  [48] = {.count = 1, .reusable = true}, REDUCE(sym__par, 2),
  [50] = {.count = 1, .reusable = true}, SHIFT(27),
  [52] = {.count = 1, .reusable = true}, SHIFT(28),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym__seq, 2),
  [56] = {.count = 1, .reusable = true}, REDUCE(sym__proc, 3),
  [58] = {.count = 1, .reusable = true}, REDUCE(sym__par, 3),
  [60] = {.count = 1, .reusable = true}, SHIFT(31),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym__seq, 3),
  [64] = {.count = 1, .reusable = true}, SHIFT(33),
  [66] = {.count = 1, .reusable = true}, REDUCE(aux_sym__par_repeat1, 2),
  [68] = {.count = 2, .reusable = true}, REDUCE(aux_sym__par_repeat1, 2), SHIFT_REPEAT(14),
  [71] = {.count = 1, .reusable = true}, REDUCE(aux_sym__seq_repeat1, 2),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym__seq_repeat1, 2), SHIFT_REPEAT(16),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym__par_repeat1, 2), SHIFT_REPEAT(20),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym__seq_repeat1, 2), SHIFT_REPEAT(23),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pi() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
