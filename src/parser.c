#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 40
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_EQ = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_PIPE = 4,
  anon_sym_nu = 5,
  anon_sym_QMARK = 6,
  anon_sym_DOT = 7,
  anon_sym_BANG = 8,
  sym_end = 9,
  sym__digit = 10,
  sym_label = 11,
  sym_cmd = 12,
  sym_name = 13,
  sym_comment = 14,
  sym_source_file = 15,
  sym_proc_declaration = 16,
  sym__proc = 17,
  sym_par = 18,
  sym_nu = 19,
  sym_recv = 20,
  sym_send = 21,
  sym_expr = 22,
  aux_sym_source_file_repeat1 = 23,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PIPE] = "|",
  [anon_sym_nu] = "nu",
  [anon_sym_QMARK] = "?",
  [anon_sym_DOT] = ".",
  [anon_sym_BANG] = "!",
  [sym_end] = "end",
  [sym__digit] = "_digit",
  [sym_label] = "label",
  [sym_cmd] = "cmd",
  [sym_name] = "name",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_proc_declaration] = "proc_declaration",
  [sym__proc] = "_proc",
  [sym_par] = "par",
  [sym_nu] = "nu",
  [sym_recv] = "recv",
  [sym_send] = "send",
  [sym_expr] = "expr",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
  [anon_sym_nu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_end] = {
    .visible = true,
    .named = true,
  },
  [sym__digit] = {
    .visible = false,
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
  [sym__proc] = {
    .visible = false,
    .named = true,
  },
  [sym_par] = {
    .visible = true,
    .named = true,
  },
  [sym_nu] = {
    .visible = true,
    .named = true,
  },
  [sym_recv] = {
    .visible = true,
    .named = true,
  },
  [sym_send] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(13);
      if (lookahead == 'e')
        ADVANCE(14);
      if (lookahead == 'n')
        ADVANCE(18);
      if (lookahead == '|')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 5:
      if (lookahead == '-')
        ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 9:
      if (lookahead == '/')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 13:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\'')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_end);
      if (lookahead == '\'')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == 'u')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_nu);
      if (lookahead == '\'')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '\'')
        ADVANCE(22);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\'')
        ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == '\\')
        SKIP(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(23);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == '-')
        ADVANCE(6);
      END_STATE();
    case 25:
      if (lookahead == 'n')
        SKIP(23);
      END_STATE();
    case 26:
      if (lookahead == '-')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(11);
      if (lookahead == '\\')
        SKIP(27);
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
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == '\\')
        SKIP(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(28);
      END_STATE();
    case 29:
      if (lookahead == 'n')
        SKIP(28);
      END_STATE();
    case 30:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == '\\')
        SKIP(31);
      if (lookahead == 'e')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(30);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 31:
      if (lookahead == 'n')
        SKIP(30);
      END_STATE();
    case 32:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == '\\')
        SKIP(33);
      if (lookahead == 'e')
        ADVANCE(14);
      if (lookahead == 'n')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(32);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 33:
      if (lookahead == 'n')
        SKIP(32);
      END_STATE();
    case 34:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == '?')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(34);
      END_STATE();
    case 35:
      if (lookahead == 'n')
        SKIP(34);
      END_STATE();
    case 36:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == '\\')
        SKIP(37);
      if (lookahead == '|')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(36);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 37:
      if (lookahead == 'n')
        SKIP(36);
      END_STATE();
    case 38:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == '\\')
        SKIP(39);
      if (lookahead == '|')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(38);
      END_STATE();
    case 39:
      if (lookahead == 'n')
        SKIP(38);
      END_STATE();
    case 40:
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == '\\')
        SKIP(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 41:
      if (lookahead == 'n')
        SKIP(40);
      END_STATE();
    case 42:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == '\\')
        SKIP(43);
      if (lookahead == '|')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(42);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 43:
      if (lookahead == 'n')
        SKIP(42);
      END_STATE();
    case 44:
      if (lookahead == '-')
        ADVANCE(24);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == '\\')
        SKIP(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(44);
      END_STATE();
    case 45:
      if (lookahead == 'n')
        SKIP(44);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 26},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 30},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 34},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 38},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 40},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 38},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 40},
  [21] = {.lex_state = 42},
  [22] = {.lex_state = 30},
  [23] = {.lex_state = 44},
  [24] = {.lex_state = 44},
  [25] = {.lex_state = 44},
  [26] = {.lex_state = 36},
  [27] = {.lex_state = 38},
  [28] = {.lex_state = 30},
  [29] = {.lex_state = 44},
  [30] = {.lex_state = 44},
  [31] = {.lex_state = 38},
  [32] = {.lex_state = 30},
  [33] = {.lex_state = 30},
  [34] = {.lex_state = 30},
  [35] = {.lex_state = 42},
  [36] = {.lex_state = 30},
  [37] = {.lex_state = 30},
  [38] = {.lex_state = 42},
  [39] = {.lex_state = 42},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_nu] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [sym_end] = ACTIONS(3),
    [sym__digit] = ACTIONS(1),
    [sym_label] = ACTIONS(3),
    [sym_cmd] = ACTIONS(3),
    [sym_name] = ACTIONS(3),
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
    [sym__proc] = STATE(9),
    [sym_par] = STATE(9),
    [sym_nu] = STATE(9),
    [sym_recv] = STATE(9),
    [sym_send] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_end] = ACTIONS(19),
    [sym_name] = ACTIONS(21),
    [sym_comment] = ACTIONS(9),
  },
  [6] = {
    [sym_proc_declaration] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_name] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [7] = {
    [sym__proc] = STATE(13),
    [sym_par] = STATE(13),
    [sym_nu] = STATE(13),
    [sym_recv] = STATE(13),
    [sym_send] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_nu] = ACTIONS(30),
    [sym_end] = ACTIONS(32),
    [sym_name] = ACTIONS(34),
    [sym_comment] = ACTIONS(9),
  },
  [8] = {
    [anon_sym_QMARK] = ACTIONS(36),
    [anon_sym_BANG] = ACTIONS(38),
    [sym_comment] = ACTIONS(9),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(42),
    [sym_name] = ACTIONS(40),
    [sym_comment] = ACTIONS(9),
  },
  [10] = {
    [sym__proc] = STATE(13),
    [sym_par] = STATE(13),
    [sym_nu] = STATE(13),
    [sym_recv] = STATE(13),
    [sym_send] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_nu] = ACTIONS(44),
    [sym_end] = ACTIONS(32),
    [sym_name] = ACTIONS(34),
    [sym_comment] = ACTIONS(9),
  },
  [11] = {
    [sym_name] = ACTIONS(46),
    [sym_comment] = ACTIONS(9),
  },
  [12] = {
    [anon_sym_QMARK] = ACTIONS(48),
    [anon_sym_BANG] = ACTIONS(50),
    [sym_comment] = ACTIONS(9),
  },
  [13] = {
    [anon_sym_RPAREN] = ACTIONS(52),
    [anon_sym_PIPE] = ACTIONS(54),
    [sym_comment] = ACTIONS(9),
  },
  [14] = {
    [sym_name] = ACTIONS(56),
    [sym_comment] = ACTIONS(9),
  },
  [15] = {
    [sym_expr] = STATE(25),
    [sym__digit] = ACTIONS(58),
    [sym_comment] = ACTIONS(9),
  },
  [16] = {
    [sym__proc] = STATE(26),
    [sym_par] = STATE(26),
    [sym_nu] = STATE(26),
    [sym_recv] = STATE(26),
    [sym_send] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_end] = ACTIONS(60),
    [sym_name] = ACTIONS(21),
    [sym_comment] = ACTIONS(9),
  },
  [17] = {
    [sym_name] = ACTIONS(62),
    [sym_comment] = ACTIONS(9),
  },
  [18] = {
    [anon_sym_RPAREN] = ACTIONS(64),
    [sym_comment] = ACTIONS(9),
  },
  [19] = {
    [sym_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(9),
  },
  [20] = {
    [sym_expr] = STATE(30),
    [sym__digit] = ACTIONS(58),
    [sym_comment] = ACTIONS(9),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_RPAREN] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(68),
    [sym_name] = ACTIONS(68),
    [sym_comment] = ACTIONS(9),
  },
  [22] = {
    [sym__proc] = STATE(31),
    [sym_par] = STATE(31),
    [sym_nu] = STATE(31),
    [sym_recv] = STATE(31),
    [sym_send] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(28),
    [sym_end] = ACTIONS(70),
    [sym_name] = ACTIONS(34),
    [sym_comment] = ACTIONS(9),
  },
  [23] = {
    [anon_sym_DOT] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
  },
  [24] = {
    [anon_sym_DOT] = ACTIONS(74),
    [sym_comment] = ACTIONS(9),
  },
  [25] = {
    [anon_sym_DOT] = ACTIONS(76),
    [sym_comment] = ACTIONS(9),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(42),
    [sym_name] = ACTIONS(78),
    [sym_comment] = ACTIONS(9),
  },
  [27] = {
    [anon_sym_RPAREN] = ACTIONS(80),
    [sym_comment] = ACTIONS(9),
  },
  [28] = {
    [sym__proc] = STATE(35),
    [sym_par] = STATE(35),
    [sym_nu] = STATE(35),
    [sym_recv] = STATE(35),
    [sym_send] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_end] = ACTIONS(82),
    [sym_name] = ACTIONS(21),
    [sym_comment] = ACTIONS(9),
  },
  [29] = {
    [anon_sym_DOT] = ACTIONS(84),
    [sym_comment] = ACTIONS(9),
  },
  [30] = {
    [anon_sym_DOT] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [31] = {
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(54),
    [sym_comment] = ACTIONS(9),
  },
  [32] = {
    [sym__proc] = STATE(38),
    [sym_par] = STATE(38),
    [sym_nu] = STATE(38),
    [sym_recv] = STATE(38),
    [sym_send] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_end] = ACTIONS(88),
    [sym_name] = ACTIONS(21),
    [sym_comment] = ACTIONS(9),
  },
  [33] = {
    [sym__proc] = STATE(39),
    [sym_par] = STATE(39),
    [sym_nu] = STATE(39),
    [sym_recv] = STATE(39),
    [sym_send] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_end] = ACTIONS(90),
    [sym_name] = ACTIONS(21),
    [sym_comment] = ACTIONS(9),
  },
  [34] = {
    [sym__proc] = STATE(35),
    [sym_par] = STATE(35),
    [sym_nu] = STATE(35),
    [sym_recv] = STATE(35),
    [sym_send] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(28),
    [sym_end] = ACTIONS(82),
    [sym_name] = ACTIONS(34),
    [sym_comment] = ACTIONS(9),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(92),
    [sym_name] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [36] = {
    [sym__proc] = STATE(38),
    [sym_par] = STATE(38),
    [sym_nu] = STATE(38),
    [sym_recv] = STATE(38),
    [sym_send] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(28),
    [sym_end] = ACTIONS(88),
    [sym_name] = ACTIONS(34),
    [sym_comment] = ACTIONS(9),
  },
  [37] = {
    [sym__proc] = STATE(39),
    [sym_par] = STATE(39),
    [sym_nu] = STATE(39),
    [sym_recv] = STATE(39),
    [sym_send] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(28),
    [sym_end] = ACTIONS(90),
    [sym_name] = ACTIONS(34),
    [sym_comment] = ACTIONS(9),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(94),
    [sym_name] = ACTIONS(94),
    [sym_comment] = ACTIONS(9),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [sym_name] = ACTIONS(96),
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
  [19] = {.count = 1, .reusable = false}, SHIFT(9),
  [21] = {.count = 1, .reusable = false}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [28] = {.count = 1, .reusable = true}, SHIFT(10),
  [30] = {.count = 1, .reusable = false}, SHIFT(11),
  [32] = {.count = 1, .reusable = false}, SHIFT(13),
  [34] = {.count = 1, .reusable = false}, SHIFT(12),
  [36] = {.count = 1, .reusable = true}, SHIFT(14),
  [38] = {.count = 1, .reusable = true}, SHIFT(15),
  [40] = {.count = 1, .reusable = true}, REDUCE(sym_proc_declaration, 3),
  [42] = {.count = 1, .reusable = true}, SHIFT(16),
  [44] = {.count = 1, .reusable = false}, SHIFT(17),
  [46] = {.count = 1, .reusable = true}, SHIFT(18),
  [48] = {.count = 1, .reusable = true}, SHIFT(19),
  [50] = {.count = 1, .reusable = true}, SHIFT(20),
  [52] = {.count = 1, .reusable = true}, SHIFT(21),
  [54] = {.count = 1, .reusable = true}, SHIFT(22),
  [56] = {.count = 1, .reusable = true}, SHIFT(23),
  [58] = {.count = 1, .reusable = true}, SHIFT(24),
  [60] = {.count = 1, .reusable = false}, SHIFT(26),
  [62] = {.count = 1, .reusable = true}, SHIFT(27),
  [64] = {.count = 1, .reusable = true}, SHIFT(28),
  [66] = {.count = 1, .reusable = true}, SHIFT(29),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym__proc, 3),
  [70] = {.count = 1, .reusable = false}, SHIFT(31),
  [72] = {.count = 1, .reusable = true}, SHIFT(32),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [76] = {.count = 1, .reusable = true}, SHIFT(33),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym_par, 3),
  [80] = {.count = 1, .reusable = true}, SHIFT(34),
  [82] = {.count = 1, .reusable = false}, SHIFT(35),
  [84] = {.count = 1, .reusable = true}, SHIFT(36),
  [86] = {.count = 1, .reusable = true}, SHIFT(37),
  [88] = {.count = 1, .reusable = false}, SHIFT(38),
  [90] = {.count = 1, .reusable = false}, SHIFT(39),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_nu, 5),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_recv, 5),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_send, 5),
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
