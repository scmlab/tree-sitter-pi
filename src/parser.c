#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 57
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
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
  sym__digit = 17,
  aux_sym_True = 18,
  aux_sym_False = 19,
  sym_label = 20,
  sym_cmd = 21,
  sym_comment = 22,
  sym_program = 23,
  sym_proc_declaration = 24,
  sym__proc = 25,
  sym_par = 26,
  sym_nu = 27,
  sym_recv = 28,
  sym_send = 29,
  sym_call = 30,
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
  [sym__digit] = "_digit",
  [aux_sym_True] = "True",
  [aux_sym_False] = "False",
  [sym_label] = "label",
  [sym_cmd] = "cmd",
  [sym_comment] = "comment",
  [sym_program] = "program",
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
  [sym__digit] = {
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
      if (lookahead == 's')
        ADVANCE(32);
      if (lookahead == '|')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(20);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(27);
      if (lookahead == 't')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(27);
      if (lookahead == 'd')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(27);
      if (lookahead == 'i')
        ADVANCE(35);
      if (lookahead == 'o')
        ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(27);
      if (lookahead == 'n')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_stdin);
      if (lookahead == '\'')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(27);
      if (lookahead == 'u')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(27);
      if (lookahead == 't')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_stdout);
      if (lookahead == '\'')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 41:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(42);
      if (lookahead == '/')
        ADVANCE(43);
      if (lookahead == '\\')
        SKIP(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(41);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == '-')
        ADVANCE(8);
      END_STATE();
    case 43:
      if (lookahead == '/')
        ADVANCE(11);
      END_STATE();
    case 44:
      if (lookahead == 'n')
        SKIP(41);
      END_STATE();
    case 45:
      if (lookahead == '-')
        ADVANCE(42);
      if (lookahead == '/')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(45);
      END_STATE();
    case 46:
      if (lookahead == 'n')
        SKIP(45);
      END_STATE();
    case 47:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(42);
      if (lookahead == '/')
        ADVANCE(43);
      if (lookahead == '\\')
        SKIP(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(47);
      END_STATE();
    case 48:
      if (lookahead == 'n')
        SKIP(47);
      END_STATE();
    case 49:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(42);
      if (lookahead == '/')
        ADVANCE(43);
      if (lookahead == '\\')
        SKIP(50);
      if (lookahead == 'e')
        ADVANCE(26);
      if (lookahead == 's')
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
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(42);
      if (lookahead == '/')
        ADVANCE(43);
      if (lookahead == '\\')
        SKIP(52);
      if (lookahead == 'e')
        ADVANCE(26);
      if (lookahead == 'n')
        ADVANCE(30);
      if (lookahead == 's')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(51);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 52:
      if (lookahead == 'n')
        SKIP(51);
      END_STATE();
    case 53:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(42);
      if (lookahead == '/')
        ADVANCE(43);
      if (lookahead == '?')
        ADVANCE(13);
      if (lookahead == '\\')
        SKIP(54);
      if (lookahead == '|')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(53);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 54:
      if (lookahead == 'n')
        SKIP(53);
      END_STATE();
    case 55:
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
        SKIP(56);
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(42);
      if (lookahead == '/')
        ADVANCE(43);
      if (lookahead == '\\')
        SKIP(58);
      if (lookahead == '|')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(57);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 58:
      if (lookahead == 'n')
        SKIP(57);
      END_STATE();
    case 59:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(42);
      if (lookahead == '/')
        ADVANCE(43);
      if (lookahead == '\\')
        SKIP(60);
      if (lookahead == '|')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(59);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 60:
      if (lookahead == 'n')
        SKIP(59);
      END_STATE();
    case 61:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(62);
      if (lookahead == '/')
        ADVANCE(43);
      if (lookahead == '\\')
        SKIP(64);
      if (lookahead == 's')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(61);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 62:
      if (lookahead == '-')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == 'n')
        SKIP(61);
      END_STATE();
    case 65:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(42);
      if (lookahead == '/')
        ADVANCE(43);
      if (lookahead == '\\')
        SKIP(66);
      if (lookahead == '|')
        ADVANCE(40);
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
    case 67:
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
        SKIP(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(67);
      END_STATE();
    case 68:
      if (lookahead == 'n')
        SKIP(67);
      END_STATE();
    case 69:
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
        SKIP(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(69);
      END_STATE();
    case 70:
      if (lookahead == 'n')
        SKIP(69);
      END_STATE();
    case 71:
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
  [1] = {.lex_state = 41},
  [2] = {.lex_state = 45},
  [3] = {.lex_state = 47},
  [4] = {.lex_state = 45},
  [5] = {.lex_state = 41},
  [6] = {.lex_state = 49},
  [7] = {.lex_state = 41},
  [8] = {.lex_state = 51},
  [9] = {.lex_state = 53},
  [10] = {.lex_state = 55},
  [11] = {.lex_state = 57},
  [12] = {.lex_state = 59},
  [13] = {.lex_state = 53},
  [14] = {.lex_state = 51},
  [15] = {.lex_state = 61},
  [16] = {.lex_state = 65},
  [17] = {.lex_state = 53},
  [18] = {.lex_state = 49},
  [19] = {.lex_state = 61},
  [20] = {.lex_state = 61},
  [21] = {.lex_state = 61},
  [22] = {.lex_state = 67},
  [23] = {.lex_state = 65},
  [24] = {.lex_state = 59},
  [25] = {.lex_state = 49},
  [26] = {.lex_state = 61},
  [27] = {.lex_state = 61},
  [28] = {.lex_state = 57},
  [29] = {.lex_state = 69},
  [30] = {.lex_state = 61},
  [31] = {.lex_state = 67},
  [32] = {.lex_state = 69},
  [33] = {.lex_state = 67},
  [34] = {.lex_state = 65},
  [35] = {.lex_state = 49},
  [36] = {.lex_state = 65},
  [37] = {.lex_state = 69},
  [38] = {.lex_state = 69},
  [39] = {.lex_state = 49},
  [40] = {.lex_state = 71},
  [41] = {.lex_state = 49},
  [42] = {.lex_state = 61},
  [43] = {.lex_state = 61},
  [44] = {.lex_state = 61},
  [45] = {.lex_state = 61},
  [46] = {.lex_state = 49},
  [47] = {.lex_state = 59},
  [48] = {.lex_state = 49},
  [49] = {.lex_state = 49},
  [50] = {.lex_state = 59},
  [51] = {.lex_state = 67},
  [52] = {.lex_state = 59},
  [53] = {.lex_state = 67},
  [54] = {.lex_state = 67},
  [55] = {.lex_state = 67},
  [56] = {.lex_state = 67},
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
    [sym_send] = STATE(11),
    [sym_call] = STATE(11),
    [sym_process_name] = STATE(12),
    [sym__name] = STATE(13),
    [sym_reserved_name] = STATE(13),
    [sym_name] = STATE(13),
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
    [sym__proc] = STATE(16),
    [sym_par] = STATE(16),
    [sym_nu] = STATE(16),
    [sym_recv] = STATE(16),
    [sym_send] = STATE(16),
    [sym_call] = STATE(16),
    [sym_process_name] = STATE(12),
    [sym__name] = STATE(17),
    [sym_reserved_name] = STATE(17),
    [sym_name] = STATE(17),
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
    [anon_sym_QMARK] = ACTIONS(50),
    [anon_sym_BANG] = ACTIONS(52),
    [sym_comment] = ACTIONS(9),
  },
  [14] = {
    [sym__proc] = STATE(16),
    [sym_par] = STATE(16),
    [sym_nu] = STATE(16),
    [sym_recv] = STATE(16),
    [sym_send] = STATE(16),
    [sym_call] = STATE(16),
    [sym_process_name] = STATE(12),
    [sym__name] = STATE(17),
    [sym_reserved_name] = STATE(17),
    [sym_name] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(32),
    [anon_sym_nu] = ACTIONS(54),
    [sym_end] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [15] = {
    [sym__name] = STATE(23),
    [sym_reserved_name] = STATE(23),
    [sym_name] = STATE(23),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [16] = {
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(60),
    [sym_comment] = ACTIONS(9),
  },
  [17] = {
    [anon_sym_QMARK] = ACTIONS(62),
    [anon_sym_BANG] = ACTIONS(64),
    [sym_comment] = ACTIONS(9),
  },
  [18] = {
    [sym__proc] = STATE(28),
    [sym_par] = STATE(28),
    [sym_nu] = STATE(28),
    [sym_recv] = STATE(28),
    [sym_send] = STATE(28),
    [sym_call] = STATE(28),
    [sym_process_name] = STATE(12),
    [sym__name] = STATE(13),
    [sym_reserved_name] = STATE(13),
    [sym_name] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_end] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [19] = {
    [sym__name] = STATE(29),
    [sym_reserved_name] = STATE(29),
    [sym_name] = STATE(29),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [20] = {
    [sym__expr] = STATE(32),
    [sym_mul] = STATE(32),
    [sym_div] = STATE(32),
    [sym_add] = STATE(32),
    [sym_sub] = STATE(32),
    [sym__term] = STATE(32),
    [sym_integer] = STATE(32),
    [sym_variable] = STATE(32),
    [sym__name] = STATE(33),
    [sym_reserved_name] = STATE(33),
    [sym_name] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym__digit] = ACTIONS(70),
    [sym_comment] = ACTIONS(9),
  },
  [21] = {
    [sym__name] = STATE(34),
    [sym_reserved_name] = STATE(34),
    [sym_name] = STATE(34),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [22] = {
    [anon_sym_RPAREN] = ACTIONS(38),
    [anon_sym_DOT] = ACTIONS(38),
    [anon_sym_STAR] = ACTIONS(38),
    [anon_sym_SLASH] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(38),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
  },
  [23] = {
    [anon_sym_RPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(9),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_PIPE] = ACTIONS(76),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(76),
    [sym_comment] = ACTIONS(9),
  },
  [25] = {
    [sym__proc] = STATE(36),
    [sym_par] = STATE(36),
    [sym_nu] = STATE(36),
    [sym_recv] = STATE(36),
    [sym_send] = STATE(36),
    [sym_call] = STATE(36),
    [sym_process_name] = STATE(12),
    [sym__name] = STATE(17),
    [sym_reserved_name] = STATE(17),
    [sym_name] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(32),
    [sym_end] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [26] = {
    [sym__name] = STATE(37),
    [sym_reserved_name] = STATE(37),
    [sym_name] = STATE(37),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [27] = {
    [sym__expr] = STATE(38),
    [sym_mul] = STATE(38),
    [sym_div] = STATE(38),
    [sym_add] = STATE(38),
    [sym_sub] = STATE(38),
    [sym__term] = STATE(38),
    [sym_integer] = STATE(38),
    [sym_variable] = STATE(38),
    [sym__name] = STATE(33),
    [sym_reserved_name] = STATE(33),
    [sym_name] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym__digit] = ACTIONS(70),
    [sym_comment] = ACTIONS(9),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_PIPE] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(80),
    [sym_comment] = ACTIONS(9),
  },
  [29] = {
    [anon_sym_DOT] = ACTIONS(82),
    [sym_comment] = ACTIONS(9),
  },
  [30] = {
    [sym__expr] = STATE(40),
    [sym_mul] = STATE(40),
    [sym_div] = STATE(40),
    [sym_add] = STATE(40),
    [sym_sub] = STATE(40),
    [sym__term] = STATE(40),
    [sym_integer] = STATE(40),
    [sym_variable] = STATE(40),
    [sym__name] = STATE(33),
    [sym_reserved_name] = STATE(33),
    [sym_name] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym__digit] = ACTIONS(70),
    [sym_comment] = ACTIONS(9),
  },
  [31] = {
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_STAR] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [32] = {
    [anon_sym_DOT] = ACTIONS(88),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_comment] = ACTIONS(9),
  },
  [33] = {
    [anon_sym_RPAREN] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(100),
    [sym_comment] = ACTIONS(9),
  },
  [34] = {
    [anon_sym_RPAREN] = ACTIONS(102),
    [sym_comment] = ACTIONS(9),
  },
  [35] = {
    [sym__proc] = STATE(47),
    [sym_par] = STATE(47),
    [sym_nu] = STATE(47),
    [sym_recv] = STATE(47),
    [sym_send] = STATE(47),
    [sym_call] = STATE(47),
    [sym_process_name] = STATE(12),
    [sym__name] = STATE(13),
    [sym_reserved_name] = STATE(13),
    [sym_name] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_end] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [36] = {
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_PIPE] = ACTIONS(60),
    [sym_comment] = ACTIONS(9),
  },
  [37] = {
    [anon_sym_DOT] = ACTIONS(106),
    [sym_comment] = ACTIONS(9),
  },
  [38] = {
    [anon_sym_DOT] = ACTIONS(108),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_comment] = ACTIONS(9),
  },
  [39] = {
    [sym__proc] = STATE(50),
    [sym_par] = STATE(50),
    [sym_nu] = STATE(50),
    [sym_recv] = STATE(50),
    [sym_send] = STATE(50),
    [sym_call] = STATE(50),
    [sym_process_name] = STATE(12),
    [sym__name] = STATE(13),
    [sym_reserved_name] = STATE(13),
    [sym_name] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_end] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [40] = {
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_comment] = ACTIONS(9),
  },
  [41] = {
    [sym__proc] = STATE(52),
    [sym_par] = STATE(52),
    [sym_nu] = STATE(52),
    [sym_recv] = STATE(52),
    [sym_send] = STATE(52),
    [sym_call] = STATE(52),
    [sym_process_name] = STATE(12),
    [sym__name] = STATE(13),
    [sym_reserved_name] = STATE(13),
    [sym_name] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_end] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
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
    [sym__name] = STATE(33),
    [sym_reserved_name] = STATE(33),
    [sym_name] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym__digit] = ACTIONS(70),
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
    [sym__name] = STATE(33),
    [sym_reserved_name] = STATE(33),
    [sym_name] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym__digit] = ACTIONS(70),
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
    [sym__name] = STATE(33),
    [sym_reserved_name] = STATE(33),
    [sym_name] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym__digit] = ACTIONS(70),
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
    [sym__name] = STATE(33),
    [sym_reserved_name] = STATE(33),
    [sym_name] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym__digit] = ACTIONS(70),
    [sym_comment] = ACTIONS(9),
  },
  [46] = {
    [sym__proc] = STATE(47),
    [sym_par] = STATE(47),
    [sym_nu] = STATE(47),
    [sym_recv] = STATE(47),
    [sym_send] = STATE(47),
    [sym_call] = STATE(47),
    [sym_process_name] = STATE(12),
    [sym__name] = STATE(17),
    [sym_reserved_name] = STATE(17),
    [sym_name] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(32),
    [sym_end] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(9),
  },
  [48] = {
    [sym__proc] = STATE(50),
    [sym_par] = STATE(50),
    [sym_nu] = STATE(50),
    [sym_recv] = STATE(50),
    [sym_send] = STATE(50),
    [sym_call] = STATE(50),
    [sym_process_name] = STATE(12),
    [sym__name] = STATE(17),
    [sym_reserved_name] = STATE(17),
    [sym_name] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(32),
    [sym_end] = ACTIONS(110),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [49] = {
    [sym__proc] = STATE(52),
    [sym_par] = STATE(52),
    [sym_nu] = STATE(52),
    [sym_recv] = STATE(52),
    [sym_send] = STATE(52),
    [sym_call] = STATE(52),
    [sym_process_name] = STATE(12),
    [sym__name] = STATE(17),
    [sym_reserved_name] = STATE(17),
    [sym_name] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(32),
    [sym_end] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(118),
    [sym_comment] = ACTIONS(9),
  },
  [51] = {
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
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
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_DOT] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(132),
    [sym_comment] = ACTIONS(9),
  },
  [55] = {
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_DOT] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(9),
  },
  [56] = {
    [anon_sym_RPAREN] = ACTIONS(138),
    [anon_sym_DOT] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(140),
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
  [32] = {.count = 1, .reusable = true}, SHIFT(14),
  [34] = {.count = 1, .reusable = false}, SHIFT(15),
  [36] = {.count = 1, .reusable = false}, SHIFT(16),
  [38] = {.count = 1, .reusable = true}, REDUCE(sym_name, 1),
  [40] = {.count = 1, .reusable = true}, REDUCE(sym_reserved_name, 1),
  [42] = {.count = 1, .reusable = false}, REDUCE(sym_reserved_name, 1),
  [44] = {.count = 1, .reusable = true}, REDUCE(sym_proc_declaration, 3),
  [46] = {.count = 1, .reusable = true}, SHIFT(18),
  [48] = {.count = 1, .reusable = true}, REDUCE(sym_call, 1),
  [50] = {.count = 1, .reusable = true}, SHIFT(19),
  [52] = {.count = 1, .reusable = true}, SHIFT(20),
  [54] = {.count = 1, .reusable = false}, SHIFT(21),
  [56] = {.count = 1, .reusable = false}, SHIFT(22),
  [58] = {.count = 1, .reusable = true}, SHIFT(24),
  [60] = {.count = 1, .reusable = true}, SHIFT(25),
  [62] = {.count = 1, .reusable = true}, SHIFT(26),
  [64] = {.count = 1, .reusable = true}, SHIFT(27),
  [66] = {.count = 1, .reusable = false}, SHIFT(28),
  [68] = {.count = 1, .reusable = true}, SHIFT(30),
  [70] = {.count = 1, .reusable = true}, SHIFT(31),
  [72] = {.count = 1, .reusable = false}, REDUCE(sym_name, 1),
  [74] = {.count = 1, .reusable = true}, SHIFT(35),
  [76] = {.count = 1, .reusable = true}, REDUCE(sym__proc, 3),
  [78] = {.count = 1, .reusable = false}, SHIFT(36),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym_par, 3),
  [82] = {.count = 1, .reusable = true}, SHIFT(39),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_integer, 1),
  [86] = {.count = 1, .reusable = false}, REDUCE(sym_integer, 1),
  [88] = {.count = 1, .reusable = true}, SHIFT(41),
  [90] = {.count = 1, .reusable = true}, SHIFT(42),
  [92] = {.count = 1, .reusable = false}, SHIFT(43),
  [94] = {.count = 1, .reusable = true}, SHIFT(44),
  [96] = {.count = 1, .reusable = false}, SHIFT(45),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 1),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 1),
  [102] = {.count = 1, .reusable = true}, SHIFT(46),
  [104] = {.count = 1, .reusable = false}, SHIFT(47),
  [106] = {.count = 1, .reusable = true}, SHIFT(48),
  [108] = {.count = 1, .reusable = true}, SHIFT(49),
  [110] = {.count = 1, .reusable = false}, SHIFT(50),
  [112] = {.count = 1, .reusable = true}, SHIFT(51),
  [114] = {.count = 1, .reusable = false}, SHIFT(52),
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
