#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 50
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
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
  anon_sym_STAR = 10,
  anon_sym_SLASH = 11,
  anon_sym_PLUS = 12,
  anon_sym_DASH = 13,
  sym_digit = 14,
  sym_name = 15,
  aux_sym_True = 16,
  aux_sym_False = 17,
  sym_label = 18,
  sym_cmd = 19,
  sym_comment = 20,
  sym_source_file = 21,
  sym_proc_declaration = 22,
  sym__proc = 23,
  sym_par = 24,
  sym_nu = 25,
  sym_recv = 26,
  sym_send = 27,
  sym_call = 28,
  sym__expr = 29,
  sym_mul = 30,
  sym_div = 31,
  sym_add = 32,
  sym_sub = 33,
  sym__term = 34,
  aux_sym_source_file_repeat1 = 35,
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
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym_digit] = "digit",
  [sym_name] = "name",
  [aux_sym_True] = "True",
  [aux_sym_False] = "False",
  [sym_label] = "label",
  [sym_cmd] = "cmd",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_proc_declaration] = "proc_declaration",
  [sym__proc] = "_proc",
  [sym_par] = "par",
  [sym_nu] = "nu",
  [sym_recv] = "recv",
  [sym_send] = "send",
  [sym_call] = "call",
  [sym__expr] = "_expr",
  [sym_mul] = "mul",
  [sym_div] = "div",
  [sym_add] = "add",
  [sym_sub] = "sub",
  [sym__term] = "_term",
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
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
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_True] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_False] = {
    .visible = false,
    .named = false,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd] = {
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
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_mul] = {
    .visible = true,
    .named = true,
  },
  [sym_div] = {
    .visible = true,
    .named = true,
  },
  [sym_add] = {
    .visible = true,
    .named = true,
  },
  [sym_sub] = {
    .visible = true,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
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
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '?')
        ADVANCE(13);
      if (lookahead == 'F')
        ADVANCE(14);
      if (lookahead == 'T')
        ADVANCE(21);
      if (lookahead == '\\')
        SKIP(25);
      if (lookahead == 'e')
        ADVANCE(26);
      if (lookahead == 'n')
        ADVANCE(30);
      if (lookahead == '|')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
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
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(16);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(20);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\'')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_False);
      if (lookahead == '\'')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(22);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == 'u')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_True);
      if (lookahead == '\'')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\'')
        ADVANCE(27);
      if (lookahead == 'n')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\'')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\'')
        ADVANCE(27);
      if (lookahead == 'd')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_end);
      if (lookahead == '\'')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\'')
        ADVANCE(27);
      if (lookahead == 'u')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_nu);
      if (lookahead == '\'')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 33:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(35);
      if (lookahead == '\\')
        SKIP(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(33);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == '-')
        ADVANCE(8);
      END_STATE();
    case 35:
      if (lookahead == '/')
        ADVANCE(11);
      END_STATE();
    case 36:
      if (lookahead == 'n')
        SKIP(33);
      END_STATE();
    case 37:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(35);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(37);
      END_STATE();
    case 38:
      if (lookahead == 'n')
        SKIP(37);
      END_STATE();
    case 39:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(35);
      if (lookahead == '\\')
        SKIP(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(39);
      END_STATE();
    case 40:
      if (lookahead == 'n')
        SKIP(39);
      END_STATE();
    case 41:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(35);
      if (lookahead == '\\')
        SKIP(42);
      if (lookahead == 'e')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(41);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 'n')
        SKIP(41);
      END_STATE();
    case 43:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(35);
      if (lookahead == '\\')
        SKIP(44);
      if (lookahead == 'e')
        ADVANCE(26);
      if (lookahead == 'n')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(43);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 44:
      if (lookahead == 'n')
        SKIP(43);
      END_STATE();
    case 45:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(13);
      if (lookahead == '\\')
        SKIP(46);
      if (lookahead == '|')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(45);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 46:
      if (lookahead == 'n')
        SKIP(45);
      END_STATE();
    case 47:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(35);
      if (lookahead == '\\')
        SKIP(48);
      if (lookahead == '|')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(47);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 48:
      if (lookahead == 'n')
        SKIP(47);
      END_STATE();
    case 49:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(13);
      if (lookahead == '\\')
        SKIP(50);
      if (lookahead == '|')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(49);
      END_STATE();
    case 50:
      if (lookahead == 'n')
        SKIP(49);
      END_STATE();
    case 51:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(52);
      if (lookahead == '/')
        ADVANCE(35);
      if (lookahead == '\\')
        SKIP(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(51);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == '-')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_digit);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == 'n')
        SKIP(51);
      END_STATE();
    case 55:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(35);
      if (lookahead == '\\')
        SKIP(56);
      if (lookahead == '|')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(55);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 56:
      if (lookahead == 'n')
        SKIP(55);
      END_STATE();
    case 57:
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '\\')
        SKIP(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(57);
      END_STATE();
    case 58:
      if (lookahead == 'n')
        SKIP(57);
      END_STATE();
    case 59:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '\\')
        SKIP(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(59);
      END_STATE();
    case 60:
      if (lookahead == 'n')
        SKIP(59);
      END_STATE();
    case 61:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '\\')
        SKIP(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(61);
      END_STATE();
    case 62:
      if (lookahead == 'n')
        SKIP(61);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 39},
  [4] = {.lex_state = 33},
  [5] = {.lex_state = 41},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 43},
  [8] = {.lex_state = 45},
  [9] = {.lex_state = 47},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 49},
  [13] = {.lex_state = 49},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 51},
  [16] = {.lex_state = 41},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 49},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 51},
  [21] = {.lex_state = 55},
  [22] = {.lex_state = 41},
  [23] = {.lex_state = 57},
  [24] = {.lex_state = 51},
  [25] = {.lex_state = 57},
  [26] = {.lex_state = 47},
  [27] = {.lex_state = 49},
  [28] = {.lex_state = 41},
  [29] = {.lex_state = 57},
  [30] = {.lex_state = 57},
  [31] = {.lex_state = 49},
  [32] = {.lex_state = 41},
  [33] = {.lex_state = 59},
  [34] = {.lex_state = 41},
  [35] = {.lex_state = 51},
  [36] = {.lex_state = 51},
  [37] = {.lex_state = 51},
  [38] = {.lex_state = 51},
  [39] = {.lex_state = 41},
  [40] = {.lex_state = 55},
  [41] = {.lex_state = 41},
  [42] = {.lex_state = 41},
  [43] = {.lex_state = 55},
  [44] = {.lex_state = 61},
  [45] = {.lex_state = 55},
  [46] = {.lex_state = 61},
  [47] = {.lex_state = 61},
  [48] = {.lex_state = 61},
  [49] = {.lex_state = 61},
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
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(3),
    [sym_name] = ACTIONS(3),
    [aux_sym_True] = ACTIONS(3),
    [aux_sym_False] = ACTIONS(3),
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
    [sym__proc] = STATE(9),
    [sym_par] = STATE(9),
    [sym_nu] = STATE(9),
    [sym_recv] = STATE(9),
    [sym_send] = STATE(9),
    [sym_call] = STATE(9),
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
    [sym_call] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_nu] = ACTIONS(30),
    [sym_end] = ACTIONS(32),
    [sym_name] = ACTIONS(34),
    [sym_comment] = ACTIONS(9),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(36),
    [anon_sym_PIPE] = ACTIONS(36),
    [anon_sym_QMARK] = ACTIONS(38),
    [anon_sym_BANG] = ACTIONS(40),
    [sym_name] = ACTIONS(36),
    [sym_comment] = ACTIONS(9),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_PIPE] = ACTIONS(44),
    [sym_name] = ACTIONS(42),
    [sym_comment] = ACTIONS(9),
  },
  [10] = {
    [sym__proc] = STATE(13),
    [sym_par] = STATE(13),
    [sym_nu] = STATE(13),
    [sym_recv] = STATE(13),
    [sym_send] = STATE(13),
    [sym_call] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_nu] = ACTIONS(46),
    [sym_end] = ACTIONS(32),
    [sym_name] = ACTIONS(34),
    [sym_comment] = ACTIONS(9),
  },
  [11] = {
    [sym_name] = ACTIONS(48),
    [sym_comment] = ACTIONS(9),
  },
  [12] = {
    [anon_sym_RPAREN] = ACTIONS(36),
    [anon_sym_PIPE] = ACTIONS(36),
    [anon_sym_QMARK] = ACTIONS(50),
    [anon_sym_BANG] = ACTIONS(52),
    [sym_comment] = ACTIONS(9),
  },
  [13] = {
    [anon_sym_RPAREN] = ACTIONS(54),
    [anon_sym_PIPE] = ACTIONS(56),
    [sym_comment] = ACTIONS(9),
  },
  [14] = {
    [sym_name] = ACTIONS(58),
    [sym_comment] = ACTIONS(9),
  },
  [15] = {
    [sym__expr] = STATE(25),
    [sym_mul] = STATE(25),
    [sym_div] = STATE(25),
    [sym_add] = STATE(25),
    [sym_sub] = STATE(25),
    [sym__term] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(60),
    [sym_digit] = ACTIONS(62),
    [sym_comment] = ACTIONS(9),
  },
  [16] = {
    [sym__proc] = STATE(26),
    [sym_par] = STATE(26),
    [sym_nu] = STATE(26),
    [sym_recv] = STATE(26),
    [sym_send] = STATE(26),
    [sym_call] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_end] = ACTIONS(64),
    [sym_name] = ACTIONS(21),
    [sym_comment] = ACTIONS(9),
  },
  [17] = {
    [sym_name] = ACTIONS(66),
    [sym_comment] = ACTIONS(9),
  },
  [18] = {
    [anon_sym_RPAREN] = ACTIONS(68),
    [sym_comment] = ACTIONS(9),
  },
  [19] = {
    [sym_name] = ACTIONS(70),
    [sym_comment] = ACTIONS(9),
  },
  [20] = {
    [sym__expr] = STATE(30),
    [sym_mul] = STATE(30),
    [sym_div] = STATE(30),
    [sym_add] = STATE(30),
    [sym_sub] = STATE(30),
    [sym__term] = STATE(30),
    [anon_sym_LPAREN] = ACTIONS(60),
    [sym_digit] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_PIPE] = ACTIONS(74),
    [sym_name] = ACTIONS(74),
    [sym_comment] = ACTIONS(9),
  },
  [22] = {
    [sym__proc] = STATE(31),
    [sym_par] = STATE(31),
    [sym_nu] = STATE(31),
    [sym_recv] = STATE(31),
    [sym_send] = STATE(31),
    [sym_call] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(28),
    [sym_end] = ACTIONS(76),
    [sym_name] = ACTIONS(34),
    [sym_comment] = ACTIONS(9),
  },
  [23] = {
    [anon_sym_DOT] = ACTIONS(78),
    [sym_comment] = ACTIONS(9),
  },
  [24] = {
    [sym__expr] = STATE(33),
    [sym_mul] = STATE(33),
    [sym_div] = STATE(33),
    [sym_add] = STATE(33),
    [sym_sub] = STATE(33),
    [sym__term] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(60),
    [sym_digit] = ACTIONS(80),
    [sym_comment] = ACTIONS(9),
  },
  [25] = {
    [anon_sym_DOT] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(9),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(44),
    [sym_name] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [27] = {
    [anon_sym_RPAREN] = ACTIONS(94),
    [sym_comment] = ACTIONS(9),
  },
  [28] = {
    [sym__proc] = STATE(40),
    [sym_par] = STATE(40),
    [sym_nu] = STATE(40),
    [sym_recv] = STATE(40),
    [sym_send] = STATE(40),
    [sym_call] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_end] = ACTIONS(96),
    [sym_name] = ACTIONS(21),
    [sym_comment] = ACTIONS(9),
  },
  [29] = {
    [anon_sym_DOT] = ACTIONS(98),
    [sym_comment] = ACTIONS(9),
  },
  [30] = {
    [anon_sym_DOT] = ACTIONS(100),
    [anon_sym_STAR] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(9),
  },
  [31] = {
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(56),
    [sym_comment] = ACTIONS(9),
  },
  [32] = {
    [sym__proc] = STATE(43),
    [sym_par] = STATE(43),
    [sym_nu] = STATE(43),
    [sym_recv] = STATE(43),
    [sym_send] = STATE(43),
    [sym_call] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_end] = ACTIONS(102),
    [sym_name] = ACTIONS(21),
    [sym_comment] = ACTIONS(9),
  },
  [33] = {
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_STAR] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(9),
  },
  [34] = {
    [sym__proc] = STATE(45),
    [sym_par] = STATE(45),
    [sym_nu] = STATE(45),
    [sym_recv] = STATE(45),
    [sym_send] = STATE(45),
    [sym_call] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_end] = ACTIONS(106),
    [sym_name] = ACTIONS(21),
    [sym_comment] = ACTIONS(9),
  },
  [35] = {
    [sym__expr] = STATE(46),
    [sym_mul] = STATE(46),
    [sym_div] = STATE(46),
    [sym_add] = STATE(46),
    [sym_sub] = STATE(46),
    [sym__term] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(60),
    [sym_digit] = ACTIONS(108),
    [sym_comment] = ACTIONS(9),
  },
  [36] = {
    [sym__expr] = STATE(47),
    [sym_mul] = STATE(47),
    [sym_div] = STATE(47),
    [sym_add] = STATE(47),
    [sym_sub] = STATE(47),
    [sym__term] = STATE(47),
    [anon_sym_LPAREN] = ACTIONS(60),
    [sym_digit] = ACTIONS(110),
    [sym_comment] = ACTIONS(9),
  },
  [37] = {
    [sym__expr] = STATE(48),
    [sym_mul] = STATE(48),
    [sym_div] = STATE(48),
    [sym_add] = STATE(48),
    [sym_sub] = STATE(48),
    [sym__term] = STATE(48),
    [anon_sym_LPAREN] = ACTIONS(60),
    [sym_digit] = ACTIONS(112),
    [sym_comment] = ACTIONS(9),
  },
  [38] = {
    [sym__expr] = STATE(49),
    [sym_mul] = STATE(49),
    [sym_div] = STATE(49),
    [sym_add] = STATE(49),
    [sym_sub] = STATE(49),
    [sym__term] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(60),
    [sym_digit] = ACTIONS(114),
    [sym_comment] = ACTIONS(9),
  },
  [39] = {
    [sym__proc] = STATE(40),
    [sym_par] = STATE(40),
    [sym_nu] = STATE(40),
    [sym_recv] = STATE(40),
    [sym_send] = STATE(40),
    [sym_call] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(28),
    [sym_end] = ACTIONS(96),
    [sym_name] = ACTIONS(34),
    [sym_comment] = ACTIONS(9),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [sym_name] = ACTIONS(116),
    [sym_comment] = ACTIONS(9),
  },
  [41] = {
    [sym__proc] = STATE(43),
    [sym_par] = STATE(43),
    [sym_nu] = STATE(43),
    [sym_recv] = STATE(43),
    [sym_send] = STATE(43),
    [sym_call] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(28),
    [sym_end] = ACTIONS(102),
    [sym_name] = ACTIONS(34),
    [sym_comment] = ACTIONS(9),
  },
  [42] = {
    [sym__proc] = STATE(45),
    [sym_par] = STATE(45),
    [sym_nu] = STATE(45),
    [sym_recv] = STATE(45),
    [sym_send] = STATE(45),
    [sym_call] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(28),
    [sym_end] = ACTIONS(106),
    [sym_name] = ACTIONS(34),
    [sym_comment] = ACTIONS(9),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(118),
    [sym_name] = ACTIONS(118),
    [sym_comment] = ACTIONS(9),
  },
  [44] = {
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_comment] = ACTIONS(9),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_PIPE] = ACTIONS(124),
    [sym_name] = ACTIONS(124),
    [sym_comment] = ACTIONS(9),
  },
  [46] = {
    [anon_sym_RPAREN] = ACTIONS(126),
    [anon_sym_DOT] = ACTIONS(126),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(9),
  },
  [47] = {
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_DOT] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(132),
    [sym_comment] = ACTIONS(9),
  },
  [48] = {
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_DOT] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(9),
  },
  [49] = {
    [anon_sym_RPAREN] = ACTIONS(138),
    [anon_sym_DOT] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(140),
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
  [36] = {.count = 1, .reusable = true}, REDUCE(sym_call, 1),
  [38] = {.count = 1, .reusable = true}, SHIFT(14),
  [40] = {.count = 1, .reusable = true}, SHIFT(15),
  [42] = {.count = 1, .reusable = true}, REDUCE(sym_proc_declaration, 3),
  [44] = {.count = 1, .reusable = true}, SHIFT(16),
  [46] = {.count = 1, .reusable = false}, SHIFT(17),
  [48] = {.count = 1, .reusable = true}, SHIFT(18),
  [50] = {.count = 1, .reusable = true}, SHIFT(19),
  [52] = {.count = 1, .reusable = true}, SHIFT(20),
  [54] = {.count = 1, .reusable = true}, SHIFT(21),
  [56] = {.count = 1, .reusable = true}, SHIFT(22),
  [58] = {.count = 1, .reusable = true}, SHIFT(23),
  [60] = {.count = 1, .reusable = true}, SHIFT(24),
  [62] = {.count = 1, .reusable = true}, SHIFT(25),
  [64] = {.count = 1, .reusable = false}, SHIFT(26),
  [66] = {.count = 1, .reusable = true}, SHIFT(27),
  [68] = {.count = 1, .reusable = true}, SHIFT(28),
  [70] = {.count = 1, .reusable = true}, SHIFT(29),
  [72] = {.count = 1, .reusable = true}, SHIFT(30),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym__proc, 3),
  [76] = {.count = 1, .reusable = false}, SHIFT(31),
  [78] = {.count = 1, .reusable = true}, SHIFT(32),
  [80] = {.count = 1, .reusable = true}, SHIFT(33),
  [82] = {.count = 1, .reusable = true}, SHIFT(34),
  [84] = {.count = 1, .reusable = true}, SHIFT(35),
  [86] = {.count = 1, .reusable = false}, SHIFT(36),
  [88] = {.count = 1, .reusable = true}, SHIFT(37),
  [90] = {.count = 1, .reusable = false}, SHIFT(38),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_par, 3),
  [94] = {.count = 1, .reusable = true}, SHIFT(39),
  [96] = {.count = 1, .reusable = false}, SHIFT(40),
  [98] = {.count = 1, .reusable = true}, SHIFT(41),
  [100] = {.count = 1, .reusable = true}, SHIFT(42),
  [102] = {.count = 1, .reusable = false}, SHIFT(43),
  [104] = {.count = 1, .reusable = true}, SHIFT(44),
  [106] = {.count = 1, .reusable = false}, SHIFT(45),
  [108] = {.count = 1, .reusable = true}, SHIFT(46),
  [110] = {.count = 1, .reusable = true}, SHIFT(47),
  [112] = {.count = 1, .reusable = true}, SHIFT(48),
  [114] = {.count = 1, .reusable = true}, SHIFT(49),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym_nu, 5),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_recv, 5),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 3),
  [122] = {.count = 1, .reusable = false}, REDUCE(sym__expr, 3),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_send, 5),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_mul, 3),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_mul, 3),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_div, 3),
  [132] = {.count = 1, .reusable = false}, REDUCE(sym_div, 3),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_sub, 3),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym_sub, 3),
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
