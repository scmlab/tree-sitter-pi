#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 56
#define SYMBOL_COUNT 40
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
  sym__digit = 14,
  sym__name = 15,
  aux_sym_True = 16,
  aux_sym_False = 17,
  sym_label = 18,
  sym_cmd = 19,
  sym_comment = 20,
  sym_program = 21,
  sym_proc_declaration = 22,
  sym__proc = 23,
  sym_process_name = 24,
  sym_par = 25,
  sym_nu = 26,
  sym_recv = 27,
  sym_send = 28,
  sym_call = 29,
  sym__expr = 30,
  sym_mul = 31,
  sym_div = 32,
  sym_add = 33,
  sym_sub = 34,
  sym__term = 35,
  sym_integer = 36,
  sym_variable = 37,
  sym_name = 38,
  aux_sym_program_repeat1 = 39,
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
  [sym__digit] = "_digit",
  [sym__name] = "_name",
  [aux_sym_True] = "True",
  [aux_sym_False] = "False",
  [sym_label] = "label",
  [sym_cmd] = "cmd",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym_proc_declaration] = "proc_declaration",
  [sym__proc] = "_proc",
  [sym_process_name] = "process_name",
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
  [sym_integer] = "integer",
  [sym_variable] = "variable",
  [sym_name] = "name",
  [aux_sym_program_repeat1] = "program_repeat1",
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
  [sym__digit] = {
    .visible = false,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
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
  [sym_program] = {
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
  [sym_process_name] = {
    .visible = true,
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
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
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
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '\'')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
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
      if (lookahead == ')')
        ADVANCE(4);
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(35);
      if (lookahead == '\\')
        SKIP(50);
      if (lookahead == '|')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(49);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 50:
      if (lookahead == 'n')
        SKIP(49);
      END_STATE();
    case 51:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(35);
      if (lookahead == '\\')
        SKIP(52);
      if (lookahead == '|')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(51);
      END_STATE();
    case 52:
      if (lookahead == 'n')
        SKIP(51);
      END_STATE();
    case 53:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(54);
      if (lookahead == '/')
        ADVANCE(35);
      if (lookahead == '\\')
        SKIP(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(53);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 54:
      if (lookahead == '-')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == 'n')
        SKIP(53);
      END_STATE();
    case 57:
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
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 33},
  [6] = {.lex_state = 41},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 43},
  [9] = {.lex_state = 45},
  [10] = {.lex_state = 47},
  [11] = {.lex_state = 49},
  [12] = {.lex_state = 45},
  [13] = {.lex_state = 43},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 51},
  [16] = {.lex_state = 45},
  [17] = {.lex_state = 41},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 53},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 57},
  [22] = {.lex_state = 51},
  [23] = {.lex_state = 49},
  [24] = {.lex_state = 41},
  [25] = {.lex_state = 33},
  [26] = {.lex_state = 53},
  [27] = {.lex_state = 47},
  [28] = {.lex_state = 59},
  [29] = {.lex_state = 53},
  [30] = {.lex_state = 57},
  [31] = {.lex_state = 57},
  [32] = {.lex_state = 59},
  [33] = {.lex_state = 51},
  [34] = {.lex_state = 41},
  [35] = {.lex_state = 51},
  [36] = {.lex_state = 59},
  [37] = {.lex_state = 59},
  [38] = {.lex_state = 41},
  [39] = {.lex_state = 61},
  [40] = {.lex_state = 41},
  [41] = {.lex_state = 53},
  [42] = {.lex_state = 53},
  [43] = {.lex_state = 53},
  [44] = {.lex_state = 53},
  [45] = {.lex_state = 41},
  [46] = {.lex_state = 49},
  [47] = {.lex_state = 41},
  [48] = {.lex_state = 41},
  [49] = {.lex_state = 49},
  [50] = {.lex_state = 57},
  [51] = {.lex_state = 49},
  [52] = {.lex_state = 57},
  [53] = {.lex_state = 57},
  [54] = {.lex_state = 57},
  [55] = {.lex_state = 57},
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
    [sym__name] = ACTIONS(3),
    [aux_sym_True] = ACTIONS(3),
    [aux_sym_False] = ACTIONS(3),
    [sym_label] = ACTIONS(3),
    [sym_cmd] = ACTIONS(3),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(3),
    [sym_proc_declaration] = STATE(5),
    [sym_process_name] = STATE(4),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__name] = ACTIONS(7),
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
    [anon_sym_EQ] = ACTIONS(15),
    [sym_comment] = ACTIONS(9),
  },
  [5] = {
    [sym_proc_declaration] = STATE(7),
    [sym_process_name] = STATE(4),
    [aux_sym_program_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym__name] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [6] = {
    [sym__proc] = STATE(10),
    [sym_process_name] = STATE(11),
    [sym_par] = STATE(10),
    [sym_nu] = STATE(10),
    [sym_recv] = STATE(10),
    [sym_send] = STATE(10),
    [sym_call] = STATE(10),
    [sym_name] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_end] = ACTIONS(21),
    [sym__name] = ACTIONS(23),
    [sym_comment] = ACTIONS(9),
  },
  [7] = {
    [sym_proc_declaration] = STATE(7),
    [sym_process_name] = STATE(4),
    [aux_sym_program_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym__name] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [8] = {
    [sym__proc] = STATE(15),
    [sym_process_name] = STATE(11),
    [sym_par] = STATE(15),
    [sym_nu] = STATE(15),
    [sym_recv] = STATE(15),
    [sym_send] = STATE(15),
    [sym_call] = STATE(15),
    [sym_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(30),
    [anon_sym_nu] = ACTIONS(32),
    [sym_end] = ACTIONS(34),
    [sym__name] = ACTIONS(23),
    [sym_comment] = ACTIONS(9),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_QMARK] = ACTIONS(36),
    [anon_sym_BANG] = ACTIONS(36),
    [sym__name] = ACTIONS(11),
    [sym_comment] = ACTIONS(9),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_PIPE] = ACTIONS(40),
    [sym__name] = ACTIONS(38),
    [sym_comment] = ACTIONS(9),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_RPAREN] = ACTIONS(42),
    [anon_sym_PIPE] = ACTIONS(42),
    [sym__name] = ACTIONS(42),
    [sym_comment] = ACTIONS(9),
  },
  [12] = {
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_BANG] = ACTIONS(46),
    [sym_comment] = ACTIONS(9),
  },
  [13] = {
    [sym__proc] = STATE(15),
    [sym_process_name] = STATE(11),
    [sym_par] = STATE(15),
    [sym_nu] = STATE(15),
    [sym_recv] = STATE(15),
    [sym_send] = STATE(15),
    [sym_call] = STATE(15),
    [sym_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(30),
    [anon_sym_nu] = ACTIONS(48),
    [sym_end] = ACTIONS(34),
    [sym__name] = ACTIONS(23),
    [sym_comment] = ACTIONS(9),
  },
  [14] = {
    [sym_name] = STATE(22),
    [sym__name] = ACTIONS(50),
    [sym_comment] = ACTIONS(9),
  },
  [15] = {
    [anon_sym_RPAREN] = ACTIONS(52),
    [anon_sym_PIPE] = ACTIONS(54),
    [sym_comment] = ACTIONS(9),
  },
  [16] = {
    [anon_sym_QMARK] = ACTIONS(56),
    [anon_sym_BANG] = ACTIONS(58),
    [sym_comment] = ACTIONS(9),
  },
  [17] = {
    [sym__proc] = STATE(27),
    [sym_process_name] = STATE(11),
    [sym_par] = STATE(27),
    [sym_nu] = STATE(27),
    [sym_recv] = STATE(27),
    [sym_send] = STATE(27),
    [sym_call] = STATE(27),
    [sym_name] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_end] = ACTIONS(60),
    [sym__name] = ACTIONS(23),
    [sym_comment] = ACTIONS(9),
  },
  [18] = {
    [sym_name] = STATE(28),
    [sym__name] = ACTIONS(50),
    [sym_comment] = ACTIONS(9),
  },
  [19] = {
    [sym__expr] = STATE(32),
    [sym_mul] = STATE(32),
    [sym_div] = STATE(32),
    [sym_add] = STATE(32),
    [sym_sub] = STATE(32),
    [sym__term] = STATE(32),
    [sym_integer] = STATE(32),
    [sym_variable] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(62),
    [sym__digit] = ACTIONS(64),
    [sym__name] = ACTIONS(66),
    [sym_comment] = ACTIONS(9),
  },
  [20] = {
    [sym_name] = STATE(33),
    [sym__name] = ACTIONS(50),
    [sym_comment] = ACTIONS(9),
  },
  [21] = {
    [anon_sym_RPAREN] = ACTIONS(36),
    [anon_sym_DOT] = ACTIONS(36),
    [sym_comment] = ACTIONS(9),
  },
  [22] = {
    [anon_sym_RPAREN] = ACTIONS(68),
    [sym_comment] = ACTIONS(9),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_RPAREN] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(70),
    [sym__name] = ACTIONS(70),
    [sym_comment] = ACTIONS(9),
  },
  [24] = {
    [sym__proc] = STATE(35),
    [sym_process_name] = STATE(11),
    [sym_par] = STATE(35),
    [sym_nu] = STATE(35),
    [sym_recv] = STATE(35),
    [sym_send] = STATE(35),
    [sym_call] = STATE(35),
    [sym_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(30),
    [sym_end] = ACTIONS(72),
    [sym__name] = ACTIONS(23),
    [sym_comment] = ACTIONS(9),
  },
  [25] = {
    [sym_name] = STATE(36),
    [sym__name] = ACTIONS(50),
    [sym_comment] = ACTIONS(9),
  },
  [26] = {
    [sym__expr] = STATE(37),
    [sym_mul] = STATE(37),
    [sym_div] = STATE(37),
    [sym_add] = STATE(37),
    [sym_sub] = STATE(37),
    [sym__term] = STATE(37),
    [sym_integer] = STATE(37),
    [sym_variable] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(62),
    [sym__digit] = ACTIONS(64),
    [sym__name] = ACTIONS(66),
    [sym_comment] = ACTIONS(9),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_PIPE] = ACTIONS(40),
    [sym__name] = ACTIONS(74),
    [sym_comment] = ACTIONS(9),
  },
  [28] = {
    [anon_sym_DOT] = ACTIONS(76),
    [sym_comment] = ACTIONS(9),
  },
  [29] = {
    [sym__expr] = STATE(39),
    [sym_mul] = STATE(39),
    [sym_div] = STATE(39),
    [sym_add] = STATE(39),
    [sym_sub] = STATE(39),
    [sym__term] = STATE(39),
    [sym_integer] = STATE(39),
    [sym_variable] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(62),
    [sym__digit] = ACTIONS(64),
    [sym__name] = ACTIONS(66),
    [sym_comment] = ACTIONS(9),
  },
  [30] = {
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(80),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(80),
    [sym_comment] = ACTIONS(9),
  },
  [31] = {
    [anon_sym_RPAREN] = ACTIONS(82),
    [anon_sym_DOT] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(9),
  },
  [32] = {
    [anon_sym_DOT] = ACTIONS(86),
    [anon_sym_STAR] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym_PLUS] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(9),
  },
  [33] = {
    [anon_sym_RPAREN] = ACTIONS(96),
    [sym_comment] = ACTIONS(9),
  },
  [34] = {
    [sym__proc] = STATE(46),
    [sym_process_name] = STATE(11),
    [sym_par] = STATE(46),
    [sym_nu] = STATE(46),
    [sym_recv] = STATE(46),
    [sym_send] = STATE(46),
    [sym_call] = STATE(46),
    [sym_name] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_end] = ACTIONS(98),
    [sym__name] = ACTIONS(23),
    [sym_comment] = ACTIONS(9),
  },
  [35] = {
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_PIPE] = ACTIONS(54),
    [sym_comment] = ACTIONS(9),
  },
  [36] = {
    [anon_sym_DOT] = ACTIONS(100),
    [sym_comment] = ACTIONS(9),
  },
  [37] = {
    [anon_sym_DOT] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym_PLUS] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(9),
  },
  [38] = {
    [sym__proc] = STATE(49),
    [sym_process_name] = STATE(11),
    [sym_par] = STATE(49),
    [sym_nu] = STATE(49),
    [sym_recv] = STATE(49),
    [sym_send] = STATE(49),
    [sym_call] = STATE(49),
    [sym_name] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_end] = ACTIONS(104),
    [sym__name] = ACTIONS(23),
    [sym_comment] = ACTIONS(9),
  },
  [39] = {
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_STAR] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym_PLUS] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(9),
  },
  [40] = {
    [sym__proc] = STATE(51),
    [sym_process_name] = STATE(11),
    [sym_par] = STATE(51),
    [sym_nu] = STATE(51),
    [sym_recv] = STATE(51),
    [sym_send] = STATE(51),
    [sym_call] = STATE(51),
    [sym_name] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_end] = ACTIONS(108),
    [sym__name] = ACTIONS(23),
    [sym_comment] = ACTIONS(9),
  },
  [41] = {
    [sym__expr] = STATE(52),
    [sym_mul] = STATE(52),
    [sym_div] = STATE(52),
    [sym_add] = STATE(52),
    [sym_sub] = STATE(52),
    [sym__term] = STATE(52),
    [sym_integer] = STATE(52),
    [sym_variable] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(62),
    [sym__digit] = ACTIONS(64),
    [sym__name] = ACTIONS(66),
    [sym_comment] = ACTIONS(9),
  },
  [42] = {
    [sym__expr] = STATE(53),
    [sym_mul] = STATE(53),
    [sym_div] = STATE(53),
    [sym_add] = STATE(53),
    [sym_sub] = STATE(53),
    [sym__term] = STATE(53),
    [sym_integer] = STATE(53),
    [sym_variable] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(62),
    [sym__digit] = ACTIONS(64),
    [sym__name] = ACTIONS(66),
    [sym_comment] = ACTIONS(9),
  },
  [43] = {
    [sym__expr] = STATE(54),
    [sym_mul] = STATE(54),
    [sym_div] = STATE(54),
    [sym_add] = STATE(54),
    [sym_sub] = STATE(54),
    [sym__term] = STATE(54),
    [sym_integer] = STATE(54),
    [sym_variable] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(62),
    [sym__digit] = ACTIONS(64),
    [sym__name] = ACTIONS(66),
    [sym_comment] = ACTIONS(9),
  },
  [44] = {
    [sym__expr] = STATE(55),
    [sym_mul] = STATE(55),
    [sym_div] = STATE(55),
    [sym_add] = STATE(55),
    [sym_sub] = STATE(55),
    [sym__term] = STATE(55),
    [sym_integer] = STATE(55),
    [sym_variable] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(62),
    [sym__digit] = ACTIONS(64),
    [sym__name] = ACTIONS(66),
    [sym_comment] = ACTIONS(9),
  },
  [45] = {
    [sym__proc] = STATE(46),
    [sym_process_name] = STATE(11),
    [sym_par] = STATE(46),
    [sym_nu] = STATE(46),
    [sym_recv] = STATE(46),
    [sym_send] = STATE(46),
    [sym_call] = STATE(46),
    [sym_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(30),
    [sym_end] = ACTIONS(98),
    [sym__name] = ACTIONS(23),
    [sym_comment] = ACTIONS(9),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(110),
    [sym__name] = ACTIONS(110),
    [sym_comment] = ACTIONS(9),
  },
  [47] = {
    [sym__proc] = STATE(49),
    [sym_process_name] = STATE(11),
    [sym_par] = STATE(49),
    [sym_nu] = STATE(49),
    [sym_recv] = STATE(49),
    [sym_send] = STATE(49),
    [sym_call] = STATE(49),
    [sym_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(30),
    [sym_end] = ACTIONS(104),
    [sym__name] = ACTIONS(23),
    [sym_comment] = ACTIONS(9),
  },
  [48] = {
    [sym__proc] = STATE(51),
    [sym_process_name] = STATE(11),
    [sym_par] = STATE(51),
    [sym_nu] = STATE(51),
    [sym_recv] = STATE(51),
    [sym_send] = STATE(51),
    [sym_call] = STATE(51),
    [sym_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(30),
    [sym_end] = ACTIONS(108),
    [sym__name] = ACTIONS(23),
    [sym_comment] = ACTIONS(9),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(112),
    [sym__name] = ACTIONS(112),
    [sym_comment] = ACTIONS(9),
  },
  [50] = {
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_DOT] = ACTIONS(114),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(9),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(118),
    [sym__name] = ACTIONS(118),
    [sym_comment] = ACTIONS(9),
  },
  [52] = {
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_comment] = ACTIONS(9),
  },
  [53] = {
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(124),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(126),
    [sym_comment] = ACTIONS(9),
  },
  [54] = {
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(130),
    [sym_comment] = ACTIONS(9),
  },
  [55] = {
    [anon_sym_RPAREN] = ACTIONS(132),
    [anon_sym_DOT] = ACTIONS(132),
    [anon_sym_STAR] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(134),
    [sym_comment] = ACTIONS(9),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_process_name, 1),
  [13] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [15] = {.count = 1, .reusable = true}, SHIFT(6),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [19] = {.count = 1, .reusable = true}, SHIFT(8),
  [21] = {.count = 1, .reusable = false}, SHIFT(10),
  [23] = {.count = 1, .reusable = false}, SHIFT(9),
  [25] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [27] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [30] = {.count = 1, .reusable = true}, SHIFT(13),
  [32] = {.count = 1, .reusable = false}, SHIFT(14),
  [34] = {.count = 1, .reusable = false}, SHIFT(15),
  [36] = {.count = 1, .reusable = true}, REDUCE(sym_name, 1),
  [38] = {.count = 1, .reusable = true}, REDUCE(sym_proc_declaration, 3),
  [40] = {.count = 1, .reusable = true}, SHIFT(17),
  [42] = {.count = 1, .reusable = true}, REDUCE(sym_call, 1),
  [44] = {.count = 1, .reusable = true}, SHIFT(18),
  [46] = {.count = 1, .reusable = true}, SHIFT(19),
  [48] = {.count = 1, .reusable = false}, SHIFT(20),
  [50] = {.count = 1, .reusable = true}, SHIFT(21),
  [52] = {.count = 1, .reusable = true}, SHIFT(23),
  [54] = {.count = 1, .reusable = true}, SHIFT(24),
  [56] = {.count = 1, .reusable = true}, SHIFT(25),
  [58] = {.count = 1, .reusable = true}, SHIFT(26),
  [60] = {.count = 1, .reusable = false}, SHIFT(27),
  [62] = {.count = 1, .reusable = true}, SHIFT(29),
  [64] = {.count = 1, .reusable = true}, SHIFT(30),
  [66] = {.count = 1, .reusable = true}, SHIFT(31),
  [68] = {.count = 1, .reusable = true}, SHIFT(34),
  [70] = {.count = 1, .reusable = true}, REDUCE(sym__proc, 3),
  [72] = {.count = 1, .reusable = false}, SHIFT(35),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym_par, 3),
  [76] = {.count = 1, .reusable = true}, SHIFT(38),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym_integer, 1),
  [80] = {.count = 1, .reusable = false}, REDUCE(sym_integer, 1),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 1),
  [84] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 1),
  [86] = {.count = 1, .reusable = true}, SHIFT(40),
  [88] = {.count = 1, .reusable = true}, SHIFT(41),
  [90] = {.count = 1, .reusable = false}, SHIFT(42),
  [92] = {.count = 1, .reusable = true}, SHIFT(43),
  [94] = {.count = 1, .reusable = false}, SHIFT(44),
  [96] = {.count = 1, .reusable = true}, SHIFT(45),
  [98] = {.count = 1, .reusable = false}, SHIFT(46),
  [100] = {.count = 1, .reusable = true}, SHIFT(47),
  [102] = {.count = 1, .reusable = true}, SHIFT(48),
  [104] = {.count = 1, .reusable = false}, SHIFT(49),
  [106] = {.count = 1, .reusable = true}, SHIFT(50),
  [108] = {.count = 1, .reusable = false}, SHIFT(51),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_nu, 5),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_recv, 5),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 3),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym__expr, 3),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_send, 5),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_mul, 3),
  [122] = {.count = 1, .reusable = false}, REDUCE(sym_mul, 3),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_div, 3),
  [126] = {.count = 1, .reusable = false}, REDUCE(sym_div, 3),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [130] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_sub, 3),
  [134] = {.count = 1, .reusable = false}, REDUCE(sym_sub, 3),
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
