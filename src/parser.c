#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 58
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
  sym_name = 14,
  sym_digit = 15,
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
  sym_expr = 28,
  sym__expr = 29,
  sym_factor = 30,
  sym__factor = 31,
  sym_term = 32,
  sym__term = 33,
  sym_boolean = 34,
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
  [sym_name] = "name",
  [sym_digit] = "digit",
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
  [sym_expr] = "expr",
  [sym__expr] = "_expr",
  [sym_factor] = "factor",
  [sym__factor] = "_factor",
  [sym_term] = "term",
  [sym__term] = "_term",
  [sym_boolean] = "boolean",
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
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_digit] = {
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
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_factor] = {
    .visible = true,
    .named = true,
  },
  [sym__factor] = {
    .visible = false,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
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
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(13);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == 'F')
        ADVANCE(15);
      if (lookahead == 'T')
        ADVANCE(22);
      if (lookahead == '\\')
        SKIP(26);
      if (lookahead == 'e')
        ADVANCE(27);
      if (lookahead == 'n')
        ADVANCE(31);
      if (lookahead == '|')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
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
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_digit);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == 'a')
        ADVANCE(17);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\'')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == 'l')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == 's')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == 'e')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_False);
      if (lookahead == '\'')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == 'r')
        ADVANCE(23);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == 'u')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == 'e')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_True);
      if (lookahead == '\'')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == 'n')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\'')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == 'd')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_end);
      if (lookahead == '\'')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == 'u')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_nu);
      if (lookahead == '\'')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 34:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == '/')
        ADVANCE(36);
      if (lookahead == '\\')
        SKIP(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(34);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == '-')
        ADVANCE(8);
      END_STATE();
    case 36:
      if (lookahead == '/')
        ADVANCE(12);
      END_STATE();
    case 37:
      if (lookahead == 'n')
        SKIP(34);
      END_STATE();
    case 38:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == '/')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(13);
      if (lookahead == '\\')
        SKIP(39);
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == '/')
        ADVANCE(36);
      if (lookahead == '\\')
        SKIP(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      END_STATE();
    case 41:
      if (lookahead == 'n')
        SKIP(40);
      END_STATE();
    case 42:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == '/')
        ADVANCE(36);
      if (lookahead == '\\')
        SKIP(43);
      if (lookahead == 'e')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(42);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 43:
      if (lookahead == 'n')
        SKIP(42);
      END_STATE();
    case 44:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == '/')
        ADVANCE(36);
      if (lookahead == '\\')
        SKIP(45);
      if (lookahead == 'e')
        ADVANCE(27);
      if (lookahead == 'n')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(44);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 45:
      if (lookahead == 'n')
        SKIP(44);
      END_STATE();
    case 46:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == '/')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == '\\')
        SKIP(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(46);
      END_STATE();
    case 47:
      if (lookahead == 'n')
        SKIP(46);
      END_STATE();
    case 48:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == '/')
        ADVANCE(36);
      if (lookahead == '\\')
        SKIP(49);
      if (lookahead == '|')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(48);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 'n')
        SKIP(48);
      END_STATE();
    case 50:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == '/')
        ADVANCE(36);
      if (lookahead == '\\')
        SKIP(51);
      if (lookahead == '|')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(50);
      END_STATE();
    case 51:
      if (lookahead == 'n')
        SKIP(50);
      END_STATE();
    case 52:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(53);
      if (lookahead == '/')
        ADVANCE(36);
      if (lookahead == 'F')
        ADVANCE(54);
      if (lookahead == 'T')
        ADVANCE(59);
      if (lookahead == '\\')
        SKIP(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(52);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 53:
      if (lookahead == '-')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      END_STATE();
    case 54:
      if (lookahead == 'a')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'l')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 's')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'e')
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_False);
      END_STATE();
    case 59:
      if (lookahead == 'r')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'u')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'e')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_True);
      END_STATE();
    case 63:
      if (lookahead == 'n')
        SKIP(52);
      END_STATE();
    case 64:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == '/')
        ADVANCE(36);
      if (lookahead == '\\')
        SKIP(65);
      if (lookahead == '|')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(64);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 65:
      if (lookahead == 'n')
        SKIP(64);
      END_STATE();
    case 66:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(36);
      if (lookahead == '\\')
        SKIP(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(66);
      END_STATE();
    case 67:
      if (lookahead == 'n')
        SKIP(66);
      END_STATE();
    case 68:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(69);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '\\')
        SKIP(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(8);
      END_STATE();
    case 70:
      if (lookahead == 'n')
        SKIP(68);
      END_STATE();
    case 71:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(69);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '\\')
        SKIP(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(71);
      END_STATE();
    case 72:
      if (lookahead == 'n')
        SKIP(71);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 38},
  [3] = {.lex_state = 40},
  [4] = {.lex_state = 34},
  [5] = {.lex_state = 42},
  [6] = {.lex_state = 34},
  [7] = {.lex_state = 44},
  [8] = {.lex_state = 46},
  [9] = {.lex_state = 48},
  [10] = {.lex_state = 44},
  [11] = {.lex_state = 34},
  [12] = {.lex_state = 46},
  [13] = {.lex_state = 50},
  [14] = {.lex_state = 34},
  [15] = {.lex_state = 52},
  [16] = {.lex_state = 42},
  [17] = {.lex_state = 34},
  [18] = {.lex_state = 50},
  [19] = {.lex_state = 34},
  [20] = {.lex_state = 52},
  [21] = {.lex_state = 64},
  [22] = {.lex_state = 42},
  [23] = {.lex_state = 66},
  [24] = {.lex_state = 52},
  [25] = {.lex_state = 68},
  [26] = {.lex_state = 66},
  [27] = {.lex_state = 66},
  [28] = {.lex_state = 68},
  [29] = {.lex_state = 68},
  [30] = {.lex_state = 68},
  [31] = {.lex_state = 68},
  [32] = {.lex_state = 48},
  [33] = {.lex_state = 50},
  [34] = {.lex_state = 42},
  [35] = {.lex_state = 66},
  [36] = {.lex_state = 66},
  [37] = {.lex_state = 50},
  [38] = {.lex_state = 42},
  [39] = {.lex_state = 50},
  [40] = {.lex_state = 71},
  [41] = {.lex_state = 71},
  [42] = {.lex_state = 42},
  [43] = {.lex_state = 52},
  [44] = {.lex_state = 52},
  [45] = {.lex_state = 42},
  [46] = {.lex_state = 64},
  [47] = {.lex_state = 42},
  [48] = {.lex_state = 42},
  [49] = {.lex_state = 64},
  [50] = {.lex_state = 68},
  [51] = {.lex_state = 68},
  [52] = {.lex_state = 68},
  [53] = {.lex_state = 64},
  [54] = {.lex_state = 52},
  [55] = {.lex_state = 52},
  [56] = {.lex_state = 50},
  [57] = {.lex_state = 50},
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
    [sym_digit] = ACTIONS(1),
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
    [sym_expr] = STATE(26),
    [sym__expr] = STATE(27),
    [sym_factor] = STATE(28),
    [sym__factor] = STATE(29),
    [sym_term] = STATE(30),
    [sym__term] = STATE(31),
    [sym_boolean] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(58),
    [sym_name] = ACTIONS(60),
    [sym_digit] = ACTIONS(60),
    [aux_sym_True] = ACTIONS(62),
    [aux_sym_False] = ACTIONS(62),
    [sym_comment] = ACTIONS(9),
  },
  [16] = {
    [sym__proc] = STATE(32),
    [sym_par] = STATE(32),
    [sym_nu] = STATE(32),
    [sym_recv] = STATE(32),
    [sym_send] = STATE(32),
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
    [sym_expr] = STATE(36),
    [sym__expr] = STATE(27),
    [sym_factor] = STATE(28),
    [sym__factor] = STATE(29),
    [sym_term] = STATE(30),
    [sym__term] = STATE(31),
    [sym_boolean] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(58),
    [sym_name] = ACTIONS(60),
    [sym_digit] = ACTIONS(60),
    [aux_sym_True] = ACTIONS(62),
    [aux_sym_False] = ACTIONS(62),
    [sym_comment] = ACTIONS(9),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_RPAREN] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(72),
    [sym_name] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
  },
  [22] = {
    [sym__proc] = STATE(37),
    [sym_par] = STATE(37),
    [sym_nu] = STATE(37),
    [sym_recv] = STATE(37),
    [sym_send] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(28),
    [sym_end] = ACTIONS(74),
    [sym_name] = ACTIONS(34),
    [sym_comment] = ACTIONS(9),
  },
  [23] = {
    [anon_sym_DOT] = ACTIONS(76),
    [sym_comment] = ACTIONS(9),
  },
  [24] = {
    [sym__expr] = STATE(39),
    [sym_factor] = STATE(28),
    [sym__factor] = STATE(40),
    [sym_term] = STATE(30),
    [sym__term] = STATE(41),
    [sym_boolean] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(58),
    [sym_name] = ACTIONS(78),
    [sym_digit] = ACTIONS(78),
    [aux_sym_True] = ACTIONS(62),
    [aux_sym_False] = ACTIONS(62),
    [sym_comment] = ACTIONS(9),
  },
  [25] = {
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(9),
  },
  [26] = {
    [anon_sym_DOT] = ACTIONS(84),
    [sym_comment] = ACTIONS(9),
  },
  [27] = {
    [anon_sym_DOT] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [28] = {
    [anon_sym_RPAREN] = ACTIONS(88),
    [anon_sym_DOT] = ACTIONS(88),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [29] = {
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_DOT] = ACTIONS(94),
    [anon_sym_STAR] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(96),
    [sym_comment] = ACTIONS(9),
  },
  [30] = {
    [anon_sym_RPAREN] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(104),
    [sym_comment] = ACTIONS(9),
  },
  [31] = {
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_DOT] = ACTIONS(106),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(108),
    [sym_comment] = ACTIONS(9),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(42),
    [sym_name] = ACTIONS(110),
    [sym_comment] = ACTIONS(9),
  },
  [33] = {
    [anon_sym_RPAREN] = ACTIONS(112),
    [sym_comment] = ACTIONS(9),
  },
  [34] = {
    [sym__proc] = STATE(46),
    [sym_par] = STATE(46),
    [sym_nu] = STATE(46),
    [sym_recv] = STATE(46),
    [sym_send] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_end] = ACTIONS(114),
    [sym_name] = ACTIONS(21),
    [sym_comment] = ACTIONS(9),
  },
  [35] = {
    [anon_sym_DOT] = ACTIONS(116),
    [sym_comment] = ACTIONS(9),
  },
  [36] = {
    [anon_sym_DOT] = ACTIONS(118),
    [sym_comment] = ACTIONS(9),
  },
  [37] = {
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(54),
    [sym_comment] = ACTIONS(9),
  },
  [38] = {
    [sym__proc] = STATE(49),
    [sym_par] = STATE(49),
    [sym_nu] = STATE(49),
    [sym_recv] = STATE(49),
    [sym_send] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_end] = ACTIONS(120),
    [sym_name] = ACTIONS(21),
    [sym_comment] = ACTIONS(9),
  },
  [39] = {
    [anon_sym_RPAREN] = ACTIONS(122),
    [sym_comment] = ACTIONS(9),
  },
  [40] = {
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_STAR] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(96),
    [sym_comment] = ACTIONS(9),
  },
  [41] = {
    [anon_sym_RPAREN] = ACTIONS(126),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(108),
    [sym_comment] = ACTIONS(9),
  },
  [42] = {
    [sym__proc] = STATE(53),
    [sym_par] = STATE(53),
    [sym_nu] = STATE(53),
    [sym_recv] = STATE(53),
    [sym_send] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_end] = ACTIONS(128),
    [sym_name] = ACTIONS(21),
    [sym_comment] = ACTIONS(9),
  },
  [43] = {
    [sym_factor] = STATE(50),
    [sym__factor] = STATE(29),
    [sym_term] = STATE(30),
    [sym__term] = STATE(31),
    [sym_boolean] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(130),
    [sym_name] = ACTIONS(60),
    [sym_digit] = ACTIONS(60),
    [aux_sym_True] = ACTIONS(62),
    [aux_sym_False] = ACTIONS(62),
    [sym_comment] = ACTIONS(9),
  },
  [44] = {
    [sym_term] = STATE(51),
    [sym__term] = STATE(31),
    [sym_boolean] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(132),
    [sym_name] = ACTIONS(60),
    [sym_digit] = ACTIONS(60),
    [aux_sym_True] = ACTIONS(62),
    [aux_sym_False] = ACTIONS(62),
    [sym_comment] = ACTIONS(9),
  },
  [45] = {
    [sym__proc] = STATE(46),
    [sym_par] = STATE(46),
    [sym_nu] = STATE(46),
    [sym_recv] = STATE(46),
    [sym_send] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(28),
    [sym_end] = ACTIONS(114),
    [sym_name] = ACTIONS(34),
    [sym_comment] = ACTIONS(9),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_PIPE] = ACTIONS(134),
    [sym_name] = ACTIONS(134),
    [sym_comment] = ACTIONS(9),
  },
  [47] = {
    [sym__proc] = STATE(49),
    [sym_par] = STATE(49),
    [sym_nu] = STATE(49),
    [sym_recv] = STATE(49),
    [sym_send] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(28),
    [sym_end] = ACTIONS(120),
    [sym_name] = ACTIONS(34),
    [sym_comment] = ACTIONS(9),
  },
  [48] = {
    [sym__proc] = STATE(53),
    [sym_par] = STATE(53),
    [sym_nu] = STATE(53),
    [sym_recv] = STATE(53),
    [sym_send] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(28),
    [sym_end] = ACTIONS(128),
    [sym_name] = ACTIONS(34),
    [sym_comment] = ACTIONS(9),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [sym_name] = ACTIONS(136),
    [sym_comment] = ACTIONS(9),
  },
  [50] = {
    [anon_sym_RPAREN] = ACTIONS(138),
    [anon_sym_DOT] = ACTIONS(138),
    [sym_comment] = ACTIONS(9),
  },
  [51] = {
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_DOT] = ACTIONS(140),
    [anon_sym_STAR] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(142),
    [sym_comment] = ACTIONS(9),
  },
  [52] = {
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_DOT] = ACTIONS(144),
    [anon_sym_STAR] = ACTIONS(144),
    [anon_sym_SLASH] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(9),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(148),
    [anon_sym_PIPE] = ACTIONS(148),
    [sym_name] = ACTIONS(148),
    [sym_comment] = ACTIONS(9),
  },
  [54] = {
    [sym__factor] = STATE(56),
    [sym_term] = STATE(30),
    [sym__term] = STATE(41),
    [sym_boolean] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(130),
    [sym_name] = ACTIONS(78),
    [sym_digit] = ACTIONS(78),
    [aux_sym_True] = ACTIONS(62),
    [aux_sym_False] = ACTIONS(62),
    [sym_comment] = ACTIONS(9),
  },
  [55] = {
    [sym__term] = STATE(57),
    [sym_boolean] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(132),
    [sym_name] = ACTIONS(150),
    [sym_digit] = ACTIONS(150),
    [aux_sym_True] = ACTIONS(62),
    [aux_sym_False] = ACTIONS(62),
    [sym_comment] = ACTIONS(9),
  },
  [56] = {
    [anon_sym_RPAREN] = ACTIONS(124),
    [sym_comment] = ACTIONS(9),
  },
  [57] = {
    [anon_sym_RPAREN] = ACTIONS(126),
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
  [60] = {.count = 1, .reusable = true}, SHIFT(31),
  [62] = {.count = 1, .reusable = true}, SHIFT(25),
  [64] = {.count = 1, .reusable = false}, SHIFT(32),
  [66] = {.count = 1, .reusable = true}, SHIFT(33),
  [68] = {.count = 1, .reusable = true}, SHIFT(34),
  [70] = {.count = 1, .reusable = true}, SHIFT(35),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym__proc, 3),
  [74] = {.count = 1, .reusable = false}, SHIFT(37),
  [76] = {.count = 1, .reusable = true}, SHIFT(38),
  [78] = {.count = 1, .reusable = true}, SHIFT(41),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [82] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [84] = {.count = 1, .reusable = true}, SHIFT(42),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 1),
  [90] = {.count = 1, .reusable = true}, SHIFT(43),
  [92] = {.count = 1, .reusable = false}, SHIFT(43),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_factor, 1),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym_factor, 1),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym__factor, 1),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym__factor, 1),
  [102] = {.count = 1, .reusable = true}, SHIFT(44),
  [104] = {.count = 1, .reusable = false}, SHIFT(44),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym_term, 1),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_par, 3),
  [112] = {.count = 1, .reusable = true}, SHIFT(45),
  [114] = {.count = 1, .reusable = false}, SHIFT(46),
  [116] = {.count = 1, .reusable = true}, SHIFT(47),
  [118] = {.count = 1, .reusable = true}, SHIFT(48),
  [120] = {.count = 1, .reusable = false}, SHIFT(49),
  [122] = {.count = 1, .reusable = true}, SHIFT(50),
  [124] = {.count = 1, .reusable = true}, SHIFT(51),
  [126] = {.count = 1, .reusable = true}, SHIFT(52),
  [128] = {.count = 1, .reusable = false}, SHIFT(53),
  [130] = {.count = 1, .reusable = true}, SHIFT(54),
  [132] = {.count = 1, .reusable = true}, SHIFT(55),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_nu, 5),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_recv, 5),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 3),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym__factor, 3),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym__factor, 3),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym__term, 3),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym__term, 3),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym_send, 5),
  [150] = {.count = 1, .reusable = true}, SHIFT(57),
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
