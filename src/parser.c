#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 59
#define SYMBOL_COUNT 44
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
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH = 14,
  anon_sym_stdin = 15,
  anon_sym_stdout = 16,
  sym_label = 17,
  sym__digit = 18,
  sym_cmd = 19,
  sym_comment = 20,
  sym_program = 21,
  sym_proc_declaration = 22,
  sym__proc = 23,
  sym_par = 24,
  sym_nu = 25,
  sym_recv = 26,
  sym__simple_recv = 27,
  sym_send = 28,
  sym_call = 29,
  sym_pattern = 30,
  sym__expr = 31,
  sym_mul = 32,
  sym_div = 33,
  sym_add = 34,
  sym_sub = 35,
  sym__term = 36,
  sym_integer = 37,
  sym_variable = 38,
  sym_process_name = 39,
  sym__name = 40,
  sym_reserved_name = 41,
  sym_name = 42,
  aux_sym_program_repeat1 = 43,
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
  [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = "/[a-z](\\w|')*/",
  [anon_sym_stdin] = "stdin",
  [anon_sym_stdout] = "stdout",
  [sym_label] = "label",
  [sym__digit] = "_digit",
  [sym_cmd] = "cmd",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym_proc_declaration] = "proc_declaration",
  [sym__proc] = "_proc",
  [sym_par] = "par",
  [sym_nu] = "nu",
  [sym_recv] = "recv",
  [sym__simple_recv] = "_simple_recv",
  [sym_send] = "send",
  [sym_call] = "call",
  [sym_pattern] = "pattern",
  [sym__expr] = "_expr",
  [sym_mul] = "mul",
  [sym_div] = "div",
  [sym_add] = "add",
  [sym_sub] = "sub",
  [sym__term] = "_term",
  [sym_integer] = "integer",
  [sym_variable] = "variable",
  [sym_process_name] = "process_name",
  [sym__name] = "_name",
  [sym_reserved_name] = "reserved_name",
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
  [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_stdin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stdout] = {
    .visible = true,
    .named = false,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym__digit] = {
    .visible = false,
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
  [sym__simple_recv] = {
    .visible = false,
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
  [sym_pattern] = {
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
  [sym_process_name] = {
    .visible = true,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym_reserved_name] = {
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
      if (lookahead == '\\')
        SKIP(14);
      if (lookahead == 'e')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(19);
      if (lookahead == 's')
        ADVANCE(21);
      if (lookahead == '|')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(30);
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
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == 'n')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == 'd')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_end);
      if (lookahead == '\'')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == 'u')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_nu);
      if (lookahead == '\'')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == 't')
        ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == 'd')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == 'i')
        ADVANCE(24);
      if (lookahead == 'o')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == 'n')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_stdin);
      if (lookahead == '\'')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == 'u')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(16);
      if (lookahead == 't')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_stdout);
      if (lookahead == '\'')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '\'')
        ADVANCE(31);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\'')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(33);
      if (lookahead == '/')
        ADVANCE(34);
      if (lookahead == '\\')
        SKIP(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(32);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 33:
      if (lookahead == '-')
        ADVANCE(8);
      END_STATE();
    case 34:
      if (lookahead == '/')
        ADVANCE(11);
      END_STATE();
    case 35:
      if (lookahead == 'n')
        SKIP(32);
      END_STATE();
    case 36:
      if (lookahead == '-')
        ADVANCE(33);
      if (lookahead == '/')
        ADVANCE(34);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(36);
      END_STATE();
    case 37:
      if (lookahead == 'n')
        SKIP(36);
      END_STATE();
    case 38:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(33);
      if (lookahead == '/')
        ADVANCE(34);
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
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(33);
      if (lookahead == '/')
        ADVANCE(34);
      if (lookahead == '\\')
        SKIP(41);
      if (lookahead == 'e')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 41:
      if (lookahead == 'n')
        SKIP(40);
      END_STATE();
    case 42:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(33);
      if (lookahead == '/')
        ADVANCE(34);
      if (lookahead == '\\')
        SKIP(43);
      if (lookahead == 'e')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(19);
      if (lookahead == 's')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(42);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 43:
      if (lookahead == 'n')
        SKIP(42);
      END_STATE();
    case 44:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(33);
      if (lookahead == '/')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(13);
      if (lookahead == '\\')
        SKIP(45);
      if (lookahead == '|')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(44);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 45:
      if (lookahead == 'n')
        SKIP(44);
      END_STATE();
    case 46:
      if (lookahead == '!')
        ADVANCE(2);
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
      if (lookahead == '?')
        ADVANCE(13);
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
        ADVANCE(33);
      if (lookahead == '/')
        ADVANCE(34);
      if (lookahead == '\\')
        SKIP(49);
      if (lookahead == '|')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(48);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 49:
      if (lookahead == 'n')
        SKIP(48);
      END_STATE();
    case 50:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(33);
      if (lookahead == '/')
        ADVANCE(34);
      if (lookahead == '\\')
        SKIP(51);
      if (lookahead == '|')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(50);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 51:
      if (lookahead == 'n')
        SKIP(50);
      END_STATE();
    case 52:
      if (lookahead == '-')
        ADVANCE(33);
      if (lookahead == '/')
        ADVANCE(34);
      if (lookahead == '\\')
        SKIP(53);
      if (lookahead == 's')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(52);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(54);
      END_STATE();
    case 53:
      if (lookahead == 'n')
        SKIP(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(33);
      if (lookahead == '/')
        ADVANCE(34);
      if (lookahead == '\\')
        SKIP(56);
      if (lookahead == '|')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(55);
      END_STATE();
    case 56:
      if (lookahead == 'n')
        SKIP(55);
      END_STATE();
    case 57:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(58);
      if (lookahead == '/')
        ADVANCE(34);
      if (lookahead == '\\')
        SKIP(60);
      if (lookahead == 's')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(57);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 58:
      if (lookahead == '-')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == 'n')
        SKIP(57);
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
    case 63:
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
        SKIP(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(63);
      END_STATE();
    case 64:
      if (lookahead == 'n')
        SKIP(63);
      END_STATE();
    case 65:
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
        SKIP(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(65);
      END_STATE();
    case 66:
      if (lookahead == 'n')
        SKIP(65);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 36},
  [3] = {.lex_state = 38},
  [4] = {.lex_state = 36},
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 40},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 42},
  [9] = {.lex_state = 44},
  [10] = {.lex_state = 46},
  [11] = {.lex_state = 48},
  [12] = {.lex_state = 50},
  [13] = {.lex_state = 50},
  [14] = {.lex_state = 44},
  [15] = {.lex_state = 42},
  [16] = {.lex_state = 52},
  [17] = {.lex_state = 55},
  [18] = {.lex_state = 44},
  [19] = {.lex_state = 40},
  [20] = {.lex_state = 52},
  [21] = {.lex_state = 57},
  [22] = {.lex_state = 52},
  [23] = {.lex_state = 61},
  [24] = {.lex_state = 55},
  [25] = {.lex_state = 50},
  [26] = {.lex_state = 40},
  [27] = {.lex_state = 52},
  [28] = {.lex_state = 57},
  [29] = {.lex_state = 48},
  [30] = {.lex_state = 63},
  [31] = {.lex_state = 63},
  [32] = {.lex_state = 57},
  [33] = {.lex_state = 61},
  [34] = {.lex_state = 63},
  [35] = {.lex_state = 61},
  [36] = {.lex_state = 55},
  [37] = {.lex_state = 40},
  [38] = {.lex_state = 55},
  [39] = {.lex_state = 63},
  [40] = {.lex_state = 63},
  [41] = {.lex_state = 40},
  [42] = {.lex_state = 65},
  [43] = {.lex_state = 40},
  [44] = {.lex_state = 57},
  [45] = {.lex_state = 57},
  [46] = {.lex_state = 57},
  [47] = {.lex_state = 57},
  [48] = {.lex_state = 40},
  [49] = {.lex_state = 50},
  [50] = {.lex_state = 40},
  [51] = {.lex_state = 40},
  [52] = {.lex_state = 50},
  [53] = {.lex_state = 61},
  [54] = {.lex_state = 50},
  [55] = {.lex_state = 61},
  [56] = {.lex_state = 61},
  [57] = {.lex_state = 61},
  [58] = {.lex_state = 61},
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
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(3),
    [anon_sym_stdin] = ACTIONS(3),
    [anon_sym_stdout] = ACTIONS(3),
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
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
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
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [6] = {
    [sym__proc] = STATE(11),
    [sym_par] = STATE(11),
    [sym_nu] = STATE(11),
    [sym_recv] = STATE(11),
    [sym__simple_recv] = STATE(12),
    [sym_send] = STATE(11),
    [sym_call] = STATE(11),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(14),
    [sym_reserved_name] = STATE(14),
    [sym_name] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [7] = {
    [sym_proc_declaration] = STATE(7),
    [sym_process_name] = STATE(4),
    [aux_sym_program_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [8] = {
    [sym__proc] = STATE(17),
    [sym_par] = STATE(17),
    [sym_nu] = STATE(17),
    [sym_recv] = STATE(17),
    [sym__simple_recv] = STATE(12),
    [sym_send] = STATE(17),
    [sym_call] = STATE(17),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(18),
    [sym_reserved_name] = STATE(18),
    [sym_name] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(32),
    [anon_sym_nu] = ACTIONS(34),
    [sym_end] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_QMARK] = ACTIONS(38),
    [anon_sym_BANG] = ACTIONS(38),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(11),
    [sym_comment] = ACTIONS(9),
  },
  [10] = {
    [anon_sym_RPAREN] = ACTIONS(40),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_BANG] = ACTIONS(40),
    [anon_sym_STAR] = ACTIONS(40),
    [anon_sym_SLASH] = ACTIONS(42),
    [anon_sym_PLUS] = ACTIONS(40),
    [anon_sym_DASH] = ACTIONS(42),
    [sym_comment] = ACTIONS(9),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [anon_sym_PIPE] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(44),
    [sym_comment] = ACTIONS(9),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(48),
    [anon_sym_PIPE] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(48),
    [sym_comment] = ACTIONS(9),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_RPAREN] = ACTIONS(50),
    [anon_sym_PIPE] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(50),
    [sym_comment] = ACTIONS(9),
  },
  [14] = {
    [anon_sym_QMARK] = ACTIONS(52),
    [anon_sym_BANG] = ACTIONS(54),
    [sym_comment] = ACTIONS(9),
  },
  [15] = {
    [sym__proc] = STATE(17),
    [sym_par] = STATE(17),
    [sym_nu] = STATE(17),
    [sym_recv] = STATE(17),
    [sym__simple_recv] = STATE(12),
    [sym_send] = STATE(17),
    [sym_call] = STATE(17),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(18),
    [sym_reserved_name] = STATE(18),
    [sym_name] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(32),
    [anon_sym_nu] = ACTIONS(56),
    [sym_end] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [16] = {
    [sym__name] = STATE(24),
    [sym_reserved_name] = STATE(24),
    [sym_name] = STATE(24),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(58),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [17] = {
    [anon_sym_RPAREN] = ACTIONS(60),
    [anon_sym_PIPE] = ACTIONS(62),
    [sym_comment] = ACTIONS(9),
  },
  [18] = {
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(66),
    [sym_comment] = ACTIONS(9),
  },
  [19] = {
    [sym__proc] = STATE(29),
    [sym_par] = STATE(29),
    [sym_nu] = STATE(29),
    [sym_recv] = STATE(29),
    [sym__simple_recv] = STATE(12),
    [sym_send] = STATE(29),
    [sym_call] = STATE(29),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(14),
    [sym_reserved_name] = STATE(14),
    [sym_name] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_end] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [20] = {
    [sym_pattern] = STATE(31),
    [sym__name] = STATE(30),
    [sym_reserved_name] = STATE(30),
    [sym_name] = STATE(30),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(58),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(70),
    [sym_comment] = ACTIONS(9),
  },
  [21] = {
    [sym__expr] = STATE(34),
    [sym_mul] = STATE(34),
    [sym_div] = STATE(34),
    [sym_add] = STATE(34),
    [sym_sub] = STATE(34),
    [sym__term] = STATE(34),
    [sym_integer] = STATE(34),
    [sym_variable] = STATE(34),
    [sym__name] = STATE(35),
    [sym_reserved_name] = STATE(35),
    [sym_name] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(58),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym__digit] = ACTIONS(74),
    [sym_comment] = ACTIONS(9),
  },
  [22] = {
    [sym__name] = STATE(36),
    [sym_reserved_name] = STATE(36),
    [sym_name] = STATE(36),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(58),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [23] = {
    [anon_sym_RPAREN] = ACTIONS(38),
    [anon_sym_DOT] = ACTIONS(38),
    [anon_sym_STAR] = ACTIONS(38),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(38),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_comment] = ACTIONS(9),
  },
  [24] = {
    [anon_sym_RPAREN] = ACTIONS(78),
    [sym_comment] = ACTIONS(9),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_PIPE] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(80),
    [sym_comment] = ACTIONS(9),
  },
  [26] = {
    [sym__proc] = STATE(38),
    [sym_par] = STATE(38),
    [sym_nu] = STATE(38),
    [sym_recv] = STATE(38),
    [sym__simple_recv] = STATE(12),
    [sym_send] = STATE(38),
    [sym_call] = STATE(38),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(18),
    [sym_reserved_name] = STATE(18),
    [sym_name] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(32),
    [sym_end] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [27] = {
    [sym_pattern] = STATE(39),
    [sym__name] = STATE(30),
    [sym_reserved_name] = STATE(30),
    [sym_name] = STATE(30),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(58),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(70),
    [sym_comment] = ACTIONS(9),
  },
  [28] = {
    [sym__expr] = STATE(40),
    [sym_mul] = STATE(40),
    [sym_div] = STATE(40),
    [sym_add] = STATE(40),
    [sym_sub] = STATE(40),
    [sym__term] = STATE(40),
    [sym_integer] = STATE(40),
    [sym_variable] = STATE(40),
    [sym__name] = STATE(35),
    [sym_reserved_name] = STATE(35),
    [sym_name] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(58),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym__digit] = ACTIONS(74),
    [sym_comment] = ACTIONS(9),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(9),
  },
  [30] = {
    [anon_sym_DOT] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [31] = {
    [anon_sym_DOT] = ACTIONS(88),
    [sym_comment] = ACTIONS(9),
  },
  [32] = {
    [sym__expr] = STATE(42),
    [sym_mul] = STATE(42),
    [sym_div] = STATE(42),
    [sym_add] = STATE(42),
    [sym_sub] = STATE(42),
    [sym__term] = STATE(42),
    [sym_integer] = STATE(42),
    [sym_variable] = STATE(42),
    [sym__name] = STATE(35),
    [sym_reserved_name] = STATE(35),
    [sym_name] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(58),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym__digit] = ACTIONS(74),
    [sym_comment] = ACTIONS(9),
  },
  [33] = {
    [anon_sym_RPAREN] = ACTIONS(90),
    [anon_sym_DOT] = ACTIONS(90),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [34] = {
    [anon_sym_DOT] = ACTIONS(94),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(102),
    [sym_comment] = ACTIONS(9),
  },
  [35] = {
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_DOT] = ACTIONS(104),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(9),
  },
  [36] = {
    [anon_sym_RPAREN] = ACTIONS(108),
    [sym_comment] = ACTIONS(9),
  },
  [37] = {
    [sym__proc] = STATE(49),
    [sym_par] = STATE(49),
    [sym_nu] = STATE(49),
    [sym_recv] = STATE(49),
    [sym__simple_recv] = STATE(12),
    [sym_send] = STATE(49),
    [sym_call] = STATE(49),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(14),
    [sym_reserved_name] = STATE(14),
    [sym_name] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_end] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [38] = {
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(62),
    [sym_comment] = ACTIONS(9),
  },
  [39] = {
    [anon_sym_DOT] = ACTIONS(112),
    [sym_comment] = ACTIONS(9),
  },
  [40] = {
    [anon_sym_DOT] = ACTIONS(114),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(102),
    [sym_comment] = ACTIONS(9),
  },
  [41] = {
    [sym__proc] = STATE(52),
    [sym_par] = STATE(52),
    [sym_nu] = STATE(52),
    [sym_recv] = STATE(52),
    [sym__simple_recv] = STATE(12),
    [sym_send] = STATE(52),
    [sym_call] = STATE(52),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(14),
    [sym_reserved_name] = STATE(14),
    [sym_name] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_end] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [42] = {
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(102),
    [sym_comment] = ACTIONS(9),
  },
  [43] = {
    [sym__proc] = STATE(54),
    [sym_par] = STATE(54),
    [sym_nu] = STATE(54),
    [sym_recv] = STATE(54),
    [sym__simple_recv] = STATE(12),
    [sym_send] = STATE(54),
    [sym_call] = STATE(54),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(14),
    [sym_reserved_name] = STATE(14),
    [sym_name] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_end] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
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
    [sym__name] = STATE(35),
    [sym_reserved_name] = STATE(35),
    [sym_name] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(58),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym__digit] = ACTIONS(74),
    [sym_comment] = ACTIONS(9),
  },
  [45] = {
    [sym__expr] = STATE(56),
    [sym_mul] = STATE(56),
    [sym_div] = STATE(56),
    [sym_add] = STATE(56),
    [sym_sub] = STATE(56),
    [sym__term] = STATE(56),
    [sym_integer] = STATE(56),
    [sym_variable] = STATE(56),
    [sym__name] = STATE(35),
    [sym_reserved_name] = STATE(35),
    [sym_name] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(58),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym__digit] = ACTIONS(74),
    [sym_comment] = ACTIONS(9),
  },
  [46] = {
    [sym__expr] = STATE(57),
    [sym_mul] = STATE(57),
    [sym_div] = STATE(57),
    [sym_add] = STATE(57),
    [sym_sub] = STATE(57),
    [sym__term] = STATE(57),
    [sym_integer] = STATE(57),
    [sym_variable] = STATE(57),
    [sym__name] = STATE(35),
    [sym_reserved_name] = STATE(35),
    [sym_name] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(58),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym__digit] = ACTIONS(74),
    [sym_comment] = ACTIONS(9),
  },
  [47] = {
    [sym__expr] = STATE(58),
    [sym_mul] = STATE(58),
    [sym_div] = STATE(58),
    [sym_add] = STATE(58),
    [sym_sub] = STATE(58),
    [sym__term] = STATE(58),
    [sym_integer] = STATE(58),
    [sym_variable] = STATE(58),
    [sym__name] = STATE(35),
    [sym_reserved_name] = STATE(35),
    [sym_name] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(58),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym__digit] = ACTIONS(74),
    [sym_comment] = ACTIONS(9),
  },
  [48] = {
    [sym__proc] = STATE(49),
    [sym_par] = STATE(49),
    [sym_nu] = STATE(49),
    [sym_recv] = STATE(49),
    [sym__simple_recv] = STATE(12),
    [sym_send] = STATE(49),
    [sym_call] = STATE(49),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(18),
    [sym_reserved_name] = STATE(18),
    [sym_name] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(32),
    [sym_end] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(122),
    [sym_comment] = ACTIONS(9),
  },
  [50] = {
    [sym__proc] = STATE(52),
    [sym_par] = STATE(52),
    [sym_nu] = STATE(52),
    [sym_recv] = STATE(52),
    [sym__simple_recv] = STATE(12),
    [sym_send] = STATE(52),
    [sym_call] = STATE(52),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(18),
    [sym_reserved_name] = STATE(18),
    [sym_name] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(32),
    [sym_end] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [51] = {
    [sym__proc] = STATE(54),
    [sym_par] = STATE(54),
    [sym_nu] = STATE(54),
    [sym_recv] = STATE(54),
    [sym__simple_recv] = STATE(12),
    [sym_send] = STATE(54),
    [sym_call] = STATE(54),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(18),
    [sym_reserved_name] = STATE(18),
    [sym_name] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(32),
    [sym_end] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_PIPE] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(124),
    [sym_comment] = ACTIONS(9),
  },
  [53] = {
    [anon_sym_RPAREN] = ACTIONS(126),
    [anon_sym_DOT] = ACTIONS(126),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(9),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(130),
    [sym_comment] = ACTIONS(9),
  },
  [55] = {
    [anon_sym_RPAREN] = ACTIONS(132),
    [anon_sym_DOT] = ACTIONS(132),
    [anon_sym_STAR] = ACTIONS(132),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(134),
    [sym_comment] = ACTIONS(9),
  },
  [56] = {
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(9),
  },
  [57] = {
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_DOT] = ACTIONS(140),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(142),
    [sym_comment] = ACTIONS(9),
  },
  [58] = {
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_DOT] = ACTIONS(144),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(146),
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
  [21] = {.count = 1, .reusable = false}, SHIFT(11),
  [23] = {.count = 1, .reusable = false}, SHIFT(9),
  [25] = {.count = 1, .reusable = false}, SHIFT(10),
  [27] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.count = 1, .reusable = true}, SHIFT(15),
  [34] = {.count = 1, .reusable = false}, SHIFT(16),
  [36] = {.count = 1, .reusable = false}, SHIFT(17),
  [38] = {.count = 1, .reusable = true}, REDUCE(sym_name, 1),
  [40] = {.count = 1, .reusable = true}, REDUCE(sym_reserved_name, 1),
  [42] = {.count = 1, .reusable = false}, REDUCE(sym_reserved_name, 1),
  [44] = {.count = 1, .reusable = true}, REDUCE(sym_proc_declaration, 3),
  [46] = {.count = 1, .reusable = true}, SHIFT(19),
  [48] = {.count = 1, .reusable = true}, REDUCE(sym_recv, 1),
  [50] = {.count = 1, .reusable = true}, REDUCE(sym_call, 1),
  [52] = {.count = 1, .reusable = true}, SHIFT(20),
  [54] = {.count = 1, .reusable = true}, SHIFT(21),
  [56] = {.count = 1, .reusable = false}, SHIFT(22),
  [58] = {.count = 1, .reusable = false}, SHIFT(23),
  [60] = {.count = 1, .reusable = true}, SHIFT(25),
  [62] = {.count = 1, .reusable = true}, SHIFT(26),
  [64] = {.count = 1, .reusable = true}, SHIFT(27),
  [66] = {.count = 1, .reusable = true}, SHIFT(28),
  [68] = {.count = 1, .reusable = false}, SHIFT(29),
  [70] = {.count = 1, .reusable = true}, SHIFT(30),
  [72] = {.count = 1, .reusable = true}, SHIFT(32),
  [74] = {.count = 1, .reusable = true}, SHIFT(33),
  [76] = {.count = 1, .reusable = false}, REDUCE(sym_name, 1),
  [78] = {.count = 1, .reusable = true}, SHIFT(37),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym__proc, 3),
  [82] = {.count = 1, .reusable = false}, SHIFT(38),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_par, 3),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [88] = {.count = 1, .reusable = true}, SHIFT(41),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_integer, 1),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym_integer, 1),
  [94] = {.count = 1, .reusable = true}, SHIFT(43),
  [96] = {.count = 1, .reusable = true}, SHIFT(44),
  [98] = {.count = 1, .reusable = false}, SHIFT(45),
  [100] = {.count = 1, .reusable = true}, SHIFT(46),
  [102] = {.count = 1, .reusable = false}, SHIFT(47),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 1),
  [106] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 1),
  [108] = {.count = 1, .reusable = true}, SHIFT(48),
  [110] = {.count = 1, .reusable = false}, SHIFT(49),
  [112] = {.count = 1, .reusable = true}, SHIFT(50),
  [114] = {.count = 1, .reusable = true}, SHIFT(51),
  [116] = {.count = 1, .reusable = false}, SHIFT(52),
  [118] = {.count = 1, .reusable = true}, SHIFT(53),
  [120] = {.count = 1, .reusable = false}, SHIFT(54),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_nu, 5),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym__simple_recv, 5),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 3),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym__expr, 3),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_send, 5),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_mul, 3),
  [134] = {.count = 1, .reusable = false}, REDUCE(sym_mul, 3),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_div, 3),
  [138] = {.count = 1, .reusable = false}, REDUCE(sym_div, 3),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_sub, 3),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym_sub, 3),
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
