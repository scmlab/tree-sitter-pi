#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 83
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_EQ = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_PIPE = 4,
  anon_sym_nu = 5,
  anon_sym_QMARK = 6,
  anon_sym_BANG = 7,
  anon_sym_DOT = 8,
  sym_end = 9,
  anon_sym_LBRACE = 10,
  anon_sym_SEMI = 11,
  anon_sym_RBRACE = 12,
  anon_sym_DASH_GT = 13,
  anon_sym_STAR = 14,
  anon_sym_SLASH = 15,
  anon_sym_PLUS = 16,
  anon_sym_DASH = 17,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH = 18,
  anon_sym_stdin = 19,
  anon_sym_stdout = 20,
  sym_label = 21,
  sym__digit = 22,
  sym_cmd = 23,
  sym_comment = 24,
  sym_program = 25,
  sym_proc_declaration = 26,
  sym__proc = 27,
  sym_par = 28,
  sym_nu = 29,
  sym_recv = 30,
  sym_send = 31,
  sym_call = 32,
  sym__clauses = 33,
  sym_simple_clause = 34,
  sym__complex_clauses = 35,
  sym_complex_clause = 36,
  sym_pattern = 37,
  sym__expr = 38,
  sym_mul = 39,
  sym_div = 40,
  sym_add = 41,
  sym_sub = 42,
  sym__term = 43,
  sym_integer = 44,
  sym_variable = 45,
  sym_simple_name = 46,
  sym__name = 47,
  sym_reserved_name = 48,
  sym_name = 49,
  aux_sym_program_repeat1 = 50,
  aux_sym__complex_clauses_repeat1 = 51,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PIPE] = "|",
  [anon_sym_nu] = "nu",
  [anon_sym_QMARK] = "?",
  [anon_sym_BANG] = "!",
  [anon_sym_DOT] = ".",
  [sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_SEMI] = ";",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH_GT] = "->",
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
  [sym_send] = "send",
  [sym_call] = "call",
  [sym__clauses] = "_clauses",
  [sym_simple_clause] = "clause",
  [sym__complex_clauses] = "_complex_clauses",
  [sym_complex_clause] = "clause",
  [sym_pattern] = "pattern",
  [sym__expr] = "_expr",
  [sym_mul] = "mul",
  [sym_div] = "div",
  [sym_add] = "add",
  [sym_sub] = "sub",
  [sym__term] = "_term",
  [sym_integer] = "integer",
  [sym_variable] = "variable",
  [sym_simple_name] = "simple_name",
  [sym__name] = "_name",
  [sym_reserved_name] = "reserved_name",
  [sym_name] = "name",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__complex_clauses_repeat1] = "_complex_clauses_repeat1",
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
  [anon_sym_BANG] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
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
  [sym_send] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym__clauses] = {
    .visible = false,
    .named = true,
  },
  [sym_simple_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__complex_clauses] = {
    .visible = false,
    .named = true,
  },
  [sym_complex_clause] = {
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
  [sym_simple_name] = {
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
  [aux_sym__complex_clauses_repeat1] = {
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
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '?')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(16);
      if (lookahead == 'e')
        ADVANCE(17);
      if (lookahead == 'n')
        ADVANCE(21);
      if (lookahead == 's')
        ADVANCE(23);
      if (lookahead == '{')
        ADVANCE(31);
      if (lookahead == '|')
        ADVANCE(32);
      if (lookahead == '}')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(34);
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
      if (lookahead == '>')
        ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
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
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 16:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(18);
      if (lookahead == 'n')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(18);
      if (lookahead == 'd')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_end);
      if (lookahead == '\'')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(18);
      if (lookahead == 'u')
        ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_nu);
      if (lookahead == '\'')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(18);
      if (lookahead == 't')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(18);
      if (lookahead == 'd')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(18);
      if (lookahead == 'i')
        ADVANCE(26);
      if (lookahead == 'o')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(18);
      if (lookahead == 'n')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_stdin);
      if (lookahead == '\'')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(18);
      if (lookahead == 'u')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(18);
      if (lookahead == 't')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_stdout);
      if (lookahead == '\'')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\'')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(37);
      if (lookahead == '/')
        ADVANCE(38);
      if (lookahead == '\\')
        SKIP(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(36);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 37:
      if (lookahead == '-')
        ADVANCE(8);
      END_STATE();
    case 38:
      if (lookahead == '/')
        ADVANCE(12);
      END_STATE();
    case 39:
      if (lookahead == 'n')
        SKIP(36);
      END_STATE();
    case 40:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(41);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(38);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '\\')
        SKIP(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      END_STATE();
    case 41:
      if (lookahead == '-')
        ADVANCE(8);
      if (lookahead == '>')
        ADVANCE(9);
      END_STATE();
    case 42:
      if (lookahead == 'n')
        SKIP(40);
      END_STATE();
    case 43:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(37);
      if (lookahead == '/')
        ADVANCE(38);
      if (lookahead == '\\')
        SKIP(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(43);
      END_STATE();
    case 44:
      if (lookahead == 'n')
        SKIP(43);
      END_STATE();
    case 45:
      if (lookahead == '-')
        ADVANCE(37);
      if (lookahead == '/')
        ADVANCE(38);
      if (lookahead == '=')
        ADVANCE(14);
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
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(37);
      if (lookahead == '/')
        ADVANCE(38);
      if (lookahead == '\\')
        SKIP(48);
      if (lookahead == 'e')
        ADVANCE(17);
      if (lookahead == 's')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(47);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 48:
      if (lookahead == 'n')
        SKIP(47);
      END_STATE();
    case 49:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(37);
      if (lookahead == '/')
        ADVANCE(38);
      if (lookahead == '\\')
        SKIP(50);
      if (lookahead == 'e')
        ADVANCE(17);
      if (lookahead == 'n')
        ADVANCE(21);
      if (lookahead == 's')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(49);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 50:
      if (lookahead == 'n')
        SKIP(49);
      END_STATE();
    case 51:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(37);
      if (lookahead == '/')
        ADVANCE(38);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '?')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(52);
      if (lookahead == '|')
        ADVANCE(32);
      if (lookahead == '}')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(51);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 52:
      if (lookahead == 'n')
        SKIP(51);
      END_STATE();
    case 53:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(54);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(8);
      END_STATE();
    case 55:
      if (lookahead == 'n')
        SKIP(53);
      END_STATE();
    case 56:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(37);
      if (lookahead == '/')
        ADVANCE(38);
      if (lookahead == '\\')
        SKIP(57);
      if (lookahead == '|')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(56);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 57:
      if (lookahead == 'n')
        SKIP(56);
      END_STATE();
    case 58:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(37);
      if (lookahead == '/')
        ADVANCE(38);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '\\')
        SKIP(59);
      if (lookahead == '|')
        ADVANCE(32);
      if (lookahead == '}')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(58);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 59:
      if (lookahead == 'n')
        SKIP(58);
      END_STATE();
    case 60:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(37);
      if (lookahead == '/')
        ADVANCE(38);
      if (lookahead == '\\')
        SKIP(61);
      if (lookahead == '|')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(60);
      END_STATE();
    case 61:
      if (lookahead == 'n')
        SKIP(60);
      END_STATE();
    case 62:
      if (lookahead == '-')
        ADVANCE(37);
      if (lookahead == '/')
        ADVANCE(38);
      if (lookahead == '\\')
        SKIP(63);
      if (lookahead == '{')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(62);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(64);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 63:
      if (lookahead == 'n')
        SKIP(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(66);
      if (lookahead == '/')
        ADVANCE(38);
      if (lookahead == '\\')
        SKIP(68);
      if (lookahead == 's')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(65);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(67);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead == '-')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == 'n')
        SKIP(65);
      END_STATE();
    case 69:
      if (lookahead == '-')
        ADVANCE(41);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(38);
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
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(54);
      if (lookahead == '.')
        ADVANCE(10);
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
    case 73:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(54);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '\\')
        SKIP(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(73);
      END_STATE();
    case 74:
      if (lookahead == 'n')
        SKIP(73);
      END_STATE();
    case 75:
      if (lookahead == '-')
        ADVANCE(37);
      if (lookahead == '/')
        ADVANCE(38);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '\\')
        SKIP(76);
      if (lookahead == '|')
        ADVANCE(32);
      if (lookahead == '}')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(75);
      END_STATE();
    case 76:
      if (lookahead == 'n')
        SKIP(75);
      END_STATE();
    case 77:
      if (lookahead == '-')
        ADVANCE(41);
      if (lookahead == '/')
        ADVANCE(38);
      if (lookahead == '\\')
        SKIP(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(77);
      END_STATE();
    case 78:
      if (lookahead == 'n')
        SKIP(77);
      END_STATE();
    case 79:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(54);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '\\')
        SKIP(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(79);
      END_STATE();
    case 80:
      if (lookahead == 'n')
        SKIP(79);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 40},
  [3] = {.lex_state = 43},
  [4] = {.lex_state = 45},
  [5] = {.lex_state = 36},
  [6] = {.lex_state = 47},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 49},
  [9] = {.lex_state = 51},
  [10] = {.lex_state = 53},
  [11] = {.lex_state = 56},
  [12] = {.lex_state = 58},
  [13] = {.lex_state = 51},
  [14] = {.lex_state = 49},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 60},
  [17] = {.lex_state = 51},
  [18] = {.lex_state = 47},
  [19] = {.lex_state = 62},
  [20] = {.lex_state = 65},
  [21] = {.lex_state = 36},
  [22] = {.lex_state = 60},
  [23] = {.lex_state = 58},
  [24] = {.lex_state = 47},
  [25] = {.lex_state = 62},
  [26] = {.lex_state = 65},
  [27] = {.lex_state = 56},
  [28] = {.lex_state = 62},
  [29] = {.lex_state = 69},
  [30] = {.lex_state = 58},
  [31] = {.lex_state = 71},
  [32] = {.lex_state = 65},
  [33] = {.lex_state = 73},
  [34] = {.lex_state = 73},
  [35] = {.lex_state = 71},
  [36] = {.lex_state = 73},
  [37] = {.lex_state = 60},
  [38] = {.lex_state = 47},
  [39] = {.lex_state = 60},
  [40] = {.lex_state = 71},
  [41] = {.lex_state = 71},
  [42] = {.lex_state = 75},
  [43] = {.lex_state = 77},
  [44] = {.lex_state = 47},
  [45] = {.lex_state = 79},
  [46] = {.lex_state = 47},
  [47] = {.lex_state = 65},
  [48] = {.lex_state = 65},
  [49] = {.lex_state = 65},
  [50] = {.lex_state = 65},
  [51] = {.lex_state = 47},
  [52] = {.lex_state = 58},
  [53] = {.lex_state = 47},
  [54] = {.lex_state = 47},
  [55] = {.lex_state = 62},
  [56] = {.lex_state = 58},
  [57] = {.lex_state = 75},
  [58] = {.lex_state = 47},
  [59] = {.lex_state = 58},
  [60] = {.lex_state = 73},
  [61] = {.lex_state = 58},
  [62] = {.lex_state = 73},
  [63] = {.lex_state = 73},
  [64] = {.lex_state = 73},
  [65] = {.lex_state = 73},
  [66] = {.lex_state = 75},
  [67] = {.lex_state = 58},
  [68] = {.lex_state = 75},
  [69] = {.lex_state = 49},
  [70] = {.lex_state = 75},
  [71] = {.lex_state = 51},
  [72] = {.lex_state = 36},
  [73] = {.lex_state = 47},
  [74] = {.lex_state = 62},
  [75] = {.lex_state = 65},
  [76] = {.lex_state = 60},
  [77] = {.lex_state = 75},
  [78] = {.lex_state = 71},
  [79] = {.lex_state = 71},
  [80] = {.lex_state = 47},
  [81] = {.lex_state = 47},
  [82] = {.lex_state = 47},
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
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_end] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
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
    [sym_simple_name] = STATE(4),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [2] = {
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_DASH_GT] = ACTIONS(11),
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
    [sym_simple_name] = STATE(4),
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
    [sym_simple_name] = STATE(12),
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
    [sym_simple_name] = STATE(4),
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
    [sym_simple_name] = STATE(12),
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
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(11),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(11),
    [sym_comment] = ACTIONS(9),
  },
  [10] = {
    [anon_sym_RPAREN] = ACTIONS(40),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_BANG] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
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
    [anon_sym_SEMI] = ACTIONS(48),
    [anon_sym_RBRACE] = ACTIONS(48),
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
    [sym_simple_name] = STATE(12),
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
    [sym_simple_name] = STATE(22),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [16] = {
    [anon_sym_RPAREN] = ACTIONS(56),
    [anon_sym_PIPE] = ACTIONS(58),
    [sym_comment] = ACTIONS(9),
  },
  [17] = {
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_BANG] = ACTIONS(62),
    [sym_comment] = ACTIONS(9),
  },
  [18] = {
    [sym__proc] = STATE(27),
    [sym_par] = STATE(27),
    [sym_nu] = STATE(27),
    [sym_recv] = STATE(27),
    [sym_send] = STATE(27),
    [sym_call] = STATE(27),
    [sym_simple_name] = STATE(12),
    [sym__name] = STATE(13),
    [sym_reserved_name] = STATE(13),
    [sym_name] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_end] = ACTIONS(64),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [19] = {
    [sym__clauses] = STATE(30),
    [sym_simple_clause] = STATE(30),
    [sym__complex_clauses] = STATE(30),
    [sym_pattern] = STATE(31),
    [sym_simple_name] = STATE(29),
    [anon_sym_LBRACE] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(68),
    [sym_comment] = ACTIONS(9),
  },
  [20] = {
    [sym__expr] = STATE(35),
    [sym_mul] = STATE(35),
    [sym_div] = STATE(35),
    [sym_add] = STATE(35),
    [sym_sub] = STATE(35),
    [sym__term] = STATE(35),
    [sym_integer] = STATE(35),
    [sym_variable] = STATE(35),
    [sym__name] = STATE(36),
    [sym_reserved_name] = STATE(36),
    [sym_name] = STATE(36),
    [anon_sym_LPAREN] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(72),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(74),
    [sym__digit] = ACTIONS(76),
    [sym_comment] = ACTIONS(9),
  },
  [21] = {
    [sym_simple_name] = STATE(37),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [22] = {
    [anon_sym_RPAREN] = ACTIONS(78),
    [sym_comment] = ACTIONS(9),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_PIPE] = ACTIONS(80),
    [anon_sym_SEMI] = ACTIONS(80),
    [anon_sym_RBRACE] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(80),
    [sym_comment] = ACTIONS(9),
  },
  [24] = {
    [sym__proc] = STATE(39),
    [sym_par] = STATE(39),
    [sym_nu] = STATE(39),
    [sym_recv] = STATE(39),
    [sym_send] = STATE(39),
    [sym_call] = STATE(39),
    [sym_simple_name] = STATE(12),
    [sym__name] = STATE(17),
    [sym_reserved_name] = STATE(17),
    [sym_name] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(32),
    [sym_end] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [25] = {
    [sym__clauses] = STATE(30),
    [sym_simple_clause] = STATE(30),
    [sym__complex_clauses] = STATE(30),
    [sym_pattern] = STATE(40),
    [sym_simple_name] = STATE(29),
    [anon_sym_LBRACE] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(68),
    [sym_comment] = ACTIONS(9),
  },
  [26] = {
    [sym__expr] = STATE(41),
    [sym_mul] = STATE(41),
    [sym_div] = STATE(41),
    [sym_add] = STATE(41),
    [sym_sub] = STATE(41),
    [sym__term] = STATE(41),
    [sym_integer] = STATE(41),
    [sym_variable] = STATE(41),
    [sym__name] = STATE(36),
    [sym_reserved_name] = STATE(36),
    [sym_name] = STATE(36),
    [anon_sym_LPAREN] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(72),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(84),
    [sym__digit] = ACTIONS(76),
    [sym_comment] = ACTIONS(9),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [28] = {
    [sym_complex_clause] = STATE(42),
    [sym_pattern] = STATE(43),
    [sym_simple_name] = STATE(29),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(68),
    [sym_comment] = ACTIONS(9),
  },
  [29] = {
    [anon_sym_DOT] = ACTIONS(88),
    [anon_sym_DASH_GT] = ACTIONS(88),
    [sym_comment] = ACTIONS(9),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_RPAREN] = ACTIONS(90),
    [anon_sym_PIPE] = ACTIONS(90),
    [anon_sym_SEMI] = ACTIONS(90),
    [anon_sym_RBRACE] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(9),
  },
  [31] = {
    [anon_sym_DOT] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [32] = {
    [sym__expr] = STATE(45),
    [sym_mul] = STATE(45),
    [sym_div] = STATE(45),
    [sym_add] = STATE(45),
    [sym_sub] = STATE(45),
    [sym__term] = STATE(45),
    [sym_integer] = STATE(45),
    [sym_variable] = STATE(45),
    [sym__name] = STATE(36),
    [sym_reserved_name] = STATE(36),
    [sym_name] = STATE(36),
    [anon_sym_LPAREN] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(72),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(94),
    [sym__digit] = ACTIONS(76),
    [sym_comment] = ACTIONS(9),
  },
  [33] = {
    [anon_sym_RPAREN] = ACTIONS(38),
    [anon_sym_DOT] = ACTIONS(38),
    [anon_sym_STAR] = ACTIONS(38),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(38),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_comment] = ACTIONS(9),
  },
  [34] = {
    [anon_sym_RPAREN] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(100),
    [sym_comment] = ACTIONS(9),
  },
  [35] = {
    [anon_sym_DOT] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(9),
  },
  [36] = {
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_DOT] = ACTIONS(112),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(9),
  },
  [37] = {
    [anon_sym_RPAREN] = ACTIONS(116),
    [sym_comment] = ACTIONS(9),
  },
  [38] = {
    [sym__proc] = STATE(52),
    [sym_par] = STATE(52),
    [sym_nu] = STATE(52),
    [sym_recv] = STATE(52),
    [sym_send] = STATE(52),
    [sym_call] = STATE(52),
    [sym_simple_name] = STATE(12),
    [sym__name] = STATE(13),
    [sym_reserved_name] = STATE(13),
    [sym_name] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_end] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [39] = {
    [anon_sym_RPAREN] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(58),
    [sym_comment] = ACTIONS(9),
  },
  [40] = {
    [anon_sym_DOT] = ACTIONS(120),
    [sym_comment] = ACTIONS(9),
  },
  [41] = {
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(9),
  },
  [42] = {
    [aux_sym__complex_clauses_repeat1] = STATE(57),
    [anon_sym_SEMI] = ACTIONS(124),
    [anon_sym_RBRACE] = ACTIONS(126),
    [sym_comment] = ACTIONS(9),
  },
  [43] = {
    [anon_sym_DASH_GT] = ACTIONS(128),
    [sym_comment] = ACTIONS(9),
  },
  [44] = {
    [sym__proc] = STATE(59),
    [sym_par] = STATE(59),
    [sym_nu] = STATE(59),
    [sym_recv] = STATE(59),
    [sym_send] = STATE(59),
    [sym_call] = STATE(59),
    [sym_simple_name] = STATE(12),
    [sym__name] = STATE(13),
    [sym_reserved_name] = STATE(13),
    [sym_name] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_end] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [45] = {
    [anon_sym_RPAREN] = ACTIONS(132),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(9),
  },
  [46] = {
    [sym__proc] = STATE(61),
    [sym_par] = STATE(61),
    [sym_nu] = STATE(61),
    [sym_recv] = STATE(61),
    [sym_send] = STATE(61),
    [sym_call] = STATE(61),
    [sym_simple_name] = STATE(12),
    [sym__name] = STATE(13),
    [sym_reserved_name] = STATE(13),
    [sym_name] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_end] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [47] = {
    [sym__expr] = STATE(62),
    [sym_mul] = STATE(62),
    [sym_div] = STATE(62),
    [sym_add] = STATE(62),
    [sym_sub] = STATE(62),
    [sym__term] = STATE(62),
    [sym_integer] = STATE(62),
    [sym_variable] = STATE(62),
    [sym__name] = STATE(36),
    [sym_reserved_name] = STATE(36),
    [sym_name] = STATE(36),
    [anon_sym_LPAREN] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(72),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(136),
    [sym__digit] = ACTIONS(76),
    [sym_comment] = ACTIONS(9),
  },
  [48] = {
    [sym__expr] = STATE(63),
    [sym_mul] = STATE(63),
    [sym_div] = STATE(63),
    [sym_add] = STATE(63),
    [sym_sub] = STATE(63),
    [sym__term] = STATE(63),
    [sym_integer] = STATE(63),
    [sym_variable] = STATE(63),
    [sym__name] = STATE(36),
    [sym_reserved_name] = STATE(36),
    [sym_name] = STATE(36),
    [anon_sym_LPAREN] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(72),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(138),
    [sym__digit] = ACTIONS(76),
    [sym_comment] = ACTIONS(9),
  },
  [49] = {
    [sym__expr] = STATE(64),
    [sym_mul] = STATE(64),
    [sym_div] = STATE(64),
    [sym_add] = STATE(64),
    [sym_sub] = STATE(64),
    [sym__term] = STATE(64),
    [sym_integer] = STATE(64),
    [sym_variable] = STATE(64),
    [sym__name] = STATE(36),
    [sym_reserved_name] = STATE(36),
    [sym_name] = STATE(36),
    [anon_sym_LPAREN] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(72),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(140),
    [sym__digit] = ACTIONS(76),
    [sym_comment] = ACTIONS(9),
  },
  [50] = {
    [sym__expr] = STATE(65),
    [sym_mul] = STATE(65),
    [sym_div] = STATE(65),
    [sym_add] = STATE(65),
    [sym_sub] = STATE(65),
    [sym__term] = STATE(65),
    [sym_integer] = STATE(65),
    [sym_variable] = STATE(65),
    [sym__name] = STATE(36),
    [sym_reserved_name] = STATE(36),
    [sym_name] = STATE(36),
    [anon_sym_LPAREN] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(72),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(142),
    [sym__digit] = ACTIONS(76),
    [sym_comment] = ACTIONS(9),
  },
  [51] = {
    [sym__proc] = STATE(52),
    [sym_par] = STATE(52),
    [sym_nu] = STATE(52),
    [sym_recv] = STATE(52),
    [sym_send] = STATE(52),
    [sym_call] = STATE(52),
    [sym_simple_name] = STATE(12),
    [sym__name] = STATE(17),
    [sym_reserved_name] = STATE(17),
    [sym_name] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(32),
    [sym_end] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_PIPE] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_RBRACE] = ACTIONS(144),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(144),
    [sym_comment] = ACTIONS(9),
  },
  [53] = {
    [sym__proc] = STATE(59),
    [sym_par] = STATE(59),
    [sym_nu] = STATE(59),
    [sym_recv] = STATE(59),
    [sym_send] = STATE(59),
    [sym_call] = STATE(59),
    [sym_simple_name] = STATE(12),
    [sym__name] = STATE(17),
    [sym_reserved_name] = STATE(17),
    [sym_name] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(32),
    [sym_end] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [54] = {
    [sym__proc] = STATE(61),
    [sym_par] = STATE(61),
    [sym_nu] = STATE(61),
    [sym_recv] = STATE(61),
    [sym_send] = STATE(61),
    [sym_call] = STATE(61),
    [sym_simple_name] = STATE(12),
    [sym__name] = STATE(17),
    [sym_reserved_name] = STATE(17),
    [sym_name] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(32),
    [sym_end] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [55] = {
    [sym_complex_clause] = STATE(66),
    [sym_pattern] = STATE(43),
    [sym_simple_name] = STATE(29),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(68),
    [sym_comment] = ACTIONS(9),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_RPAREN] = ACTIONS(146),
    [anon_sym_PIPE] = ACTIONS(146),
    [anon_sym_SEMI] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(146),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(9),
  },
  [57] = {
    [aux_sym__complex_clauses_repeat1] = STATE(68),
    [anon_sym_SEMI] = ACTIONS(124),
    [anon_sym_RBRACE] = ACTIONS(148),
    [sym_comment] = ACTIONS(9),
  },
  [58] = {
    [sym__proc] = STATE(70),
    [sym_par] = STATE(70),
    [sym_nu] = STATE(70),
    [sym_recv] = STATE(70),
    [sym_send] = STATE(70),
    [sym_call] = STATE(70),
    [sym_simple_name] = STATE(12),
    [sym__name] = STATE(71),
    [sym_reserved_name] = STATE(71),
    [sym_name] = STATE(71),
    [anon_sym_LPAREN] = ACTIONS(150),
    [sym_end] = ACTIONS(152),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(154),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(154),
    [anon_sym_SEMI] = ACTIONS(154),
    [anon_sym_RBRACE] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(154),
    [sym_comment] = ACTIONS(9),
  },
  [60] = {
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(156),
    [anon_sym_STAR] = ACTIONS(156),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(156),
    [anon_sym_DASH] = ACTIONS(158),
    [sym_comment] = ACTIONS(9),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_PIPE] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
    [anon_sym_RBRACE] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(160),
    [sym_comment] = ACTIONS(9),
  },
  [62] = {
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_DOT] = ACTIONS(162),
    [anon_sym_STAR] = ACTIONS(162),
    [anon_sym_SLASH] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(164),
    [sym_comment] = ACTIONS(9),
  },
  [63] = {
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_DOT] = ACTIONS(166),
    [anon_sym_STAR] = ACTIONS(166),
    [anon_sym_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(9),
  },
  [64] = {
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_DOT] = ACTIONS(170),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [65] = {
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(176),
    [sym_comment] = ACTIONS(9),
  },
  [66] = {
    [anon_sym_SEMI] = ACTIONS(178),
    [anon_sym_RBRACE] = ACTIONS(178),
    [sym_comment] = ACTIONS(9),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(180),
    [anon_sym_SEMI] = ACTIONS(180),
    [anon_sym_RBRACE] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(180),
    [sym_comment] = ACTIONS(9),
  },
  [68] = {
    [aux_sym__complex_clauses_repeat1] = STATE(68),
    [anon_sym_SEMI] = ACTIONS(182),
    [anon_sym_RBRACE] = ACTIONS(178),
    [sym_comment] = ACTIONS(9),
  },
  [69] = {
    [sym__proc] = STATE(16),
    [sym_par] = STATE(16),
    [sym_nu] = STATE(16),
    [sym_recv] = STATE(16),
    [sym_send] = STATE(16),
    [sym_call] = STATE(16),
    [sym_simple_name] = STATE(12),
    [sym__name] = STATE(17),
    [sym_reserved_name] = STATE(17),
    [sym_name] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(32),
    [anon_sym_nu] = ACTIONS(185),
    [sym_end] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [70] = {
    [anon_sym_PIPE] = ACTIONS(187),
    [anon_sym_SEMI] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(189),
    [sym_comment] = ACTIONS(9),
  },
  [71] = {
    [anon_sym_QMARK] = ACTIONS(191),
    [anon_sym_BANG] = ACTIONS(193),
    [sym_comment] = ACTIONS(9),
  },
  [72] = {
    [sym_simple_name] = STATE(76),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [73] = {
    [sym__proc] = STATE(77),
    [sym_par] = STATE(77),
    [sym_nu] = STATE(77),
    [sym_recv] = STATE(77),
    [sym_send] = STATE(77),
    [sym_call] = STATE(77),
    [sym_simple_name] = STATE(12),
    [sym__name] = STATE(71),
    [sym_reserved_name] = STATE(71),
    [sym_name] = STATE(71),
    [anon_sym_LPAREN] = ACTIONS(150),
    [sym_end] = ACTIONS(195),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [74] = {
    [sym__clauses] = STATE(30),
    [sym_simple_clause] = STATE(30),
    [sym__complex_clauses] = STATE(30),
    [sym_pattern] = STATE(78),
    [sym_simple_name] = STATE(29),
    [anon_sym_LBRACE] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(68),
    [sym_comment] = ACTIONS(9),
  },
  [75] = {
    [sym__expr] = STATE(79),
    [sym_mul] = STATE(79),
    [sym_div] = STATE(79),
    [sym_add] = STATE(79),
    [sym_sub] = STATE(79),
    [sym__term] = STATE(79),
    [sym_integer] = STATE(79),
    [sym_variable] = STATE(79),
    [sym__name] = STATE(36),
    [sym_reserved_name] = STATE(36),
    [sym_name] = STATE(36),
    [anon_sym_LPAREN] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(72),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(197),
    [sym__digit] = ACTIONS(76),
    [sym_comment] = ACTIONS(9),
  },
  [76] = {
    [anon_sym_RPAREN] = ACTIONS(199),
    [sym_comment] = ACTIONS(9),
  },
  [77] = {
    [anon_sym_PIPE] = ACTIONS(187),
    [anon_sym_SEMI] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [78] = {
    [anon_sym_DOT] = ACTIONS(201),
    [sym_comment] = ACTIONS(9),
  },
  [79] = {
    [anon_sym_DOT] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(9),
  },
  [80] = {
    [sym__proc] = STATE(52),
    [sym_par] = STATE(52),
    [sym_nu] = STATE(52),
    [sym_recv] = STATE(52),
    [sym_send] = STATE(52),
    [sym_call] = STATE(52),
    [sym_simple_name] = STATE(12),
    [sym__name] = STATE(71),
    [sym_reserved_name] = STATE(71),
    [sym_name] = STATE(71),
    [anon_sym_LPAREN] = ACTIONS(150),
    [sym_end] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [81] = {
    [sym__proc] = STATE(59),
    [sym_par] = STATE(59),
    [sym_nu] = STATE(59),
    [sym_recv] = STATE(59),
    [sym_send] = STATE(59),
    [sym_call] = STATE(59),
    [sym_simple_name] = STATE(12),
    [sym__name] = STATE(71),
    [sym_reserved_name] = STATE(71),
    [sym_name] = STATE(71),
    [anon_sym_LPAREN] = ACTIONS(150),
    [sym_end] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [82] = {
    [sym__proc] = STATE(61),
    [sym_par] = STATE(61),
    [sym_nu] = STATE(61),
    [sym_recv] = STATE(61),
    [sym_send] = STATE(61),
    [sym_call] = STATE(61),
    [sym_simple_name] = STATE(12),
    [sym__name] = STATE(71),
    [sym_reserved_name] = STATE(71),
    [sym_name] = STATE(71),
    [anon_sym_LPAREN] = ACTIONS(150),
    [sym_end] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
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
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_simple_name, 1),
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
  [56] = {.count = 1, .reusable = true}, SHIFT(23),
  [58] = {.count = 1, .reusable = true}, SHIFT(24),
  [60] = {.count = 1, .reusable = true}, SHIFT(25),
  [62] = {.count = 1, .reusable = true}, SHIFT(26),
  [64] = {.count = 1, .reusable = false}, SHIFT(27),
  [66] = {.count = 1, .reusable = true}, SHIFT(28),
  [68] = {.count = 1, .reusable = true}, SHIFT(29),
  [70] = {.count = 1, .reusable = true}, SHIFT(32),
  [72] = {.count = 1, .reusable = false}, SHIFT(33),
  [74] = {.count = 1, .reusable = true}, SHIFT(35),
  [76] = {.count = 1, .reusable = true}, SHIFT(34),
  [78] = {.count = 1, .reusable = true}, SHIFT(38),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym__proc, 3),
  [82] = {.count = 1, .reusable = false}, SHIFT(39),
  [84] = {.count = 1, .reusable = true}, SHIFT(41),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_par, 3),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_recv, 3),
  [92] = {.count = 1, .reusable = true}, SHIFT(44),
  [94] = {.count = 1, .reusable = true}, SHIFT(45),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym_name, 1),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_integer, 1),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_integer, 1),
  [102] = {.count = 1, .reusable = true}, SHIFT(46),
  [104] = {.count = 1, .reusable = true}, SHIFT(47),
  [106] = {.count = 1, .reusable = false}, SHIFT(48),
  [108] = {.count = 1, .reusable = true}, SHIFT(49),
  [110] = {.count = 1, .reusable = false}, SHIFT(50),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 1),
  [114] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 1),
  [116] = {.count = 1, .reusable = true}, SHIFT(51),
  [118] = {.count = 1, .reusable = false}, SHIFT(52),
  [120] = {.count = 1, .reusable = true}, SHIFT(53),
  [122] = {.count = 1, .reusable = true}, SHIFT(54),
  [124] = {.count = 1, .reusable = true}, SHIFT(55),
  [126] = {.count = 1, .reusable = true}, SHIFT(56),
  [128] = {.count = 1, .reusable = true}, SHIFT(58),
  [130] = {.count = 1, .reusable = false}, SHIFT(59),
  [132] = {.count = 1, .reusable = true}, SHIFT(60),
  [134] = {.count = 1, .reusable = false}, SHIFT(61),
  [136] = {.count = 1, .reusable = true}, SHIFT(62),
  [138] = {.count = 1, .reusable = true}, SHIFT(63),
  [140] = {.count = 1, .reusable = true}, SHIFT(64),
  [142] = {.count = 1, .reusable = true}, SHIFT(65),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_nu, 5),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym__complex_clauses, 3),
  [148] = {.count = 1, .reusable = true}, SHIFT(67),
  [150] = {.count = 1, .reusable = true}, SHIFT(69),
  [152] = {.count = 1, .reusable = false}, SHIFT(70),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_simple_clause, 3),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 3),
  [158] = {.count = 1, .reusable = false}, REDUCE(sym__expr, 3),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym_send, 5),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_mul, 3),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym_mul, 3),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_div, 3),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym_div, 3),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_sub, 3),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym_sub, 3),
  [178] = {.count = 1, .reusable = true}, REDUCE(aux_sym__complex_clauses_repeat1, 2),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym__complex_clauses, 4),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym__complex_clauses_repeat1, 2), SHIFT_REPEAT(55),
  [185] = {.count = 1, .reusable = false}, SHIFT(72),
  [187] = {.count = 1, .reusable = true}, SHIFT(73),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_complex_clause, 3),
  [191] = {.count = 1, .reusable = true}, SHIFT(74),
  [193] = {.count = 1, .reusable = true}, SHIFT(75),
  [195] = {.count = 1, .reusable = false}, SHIFT(77),
  [197] = {.count = 1, .reusable = true}, SHIFT(79),
  [199] = {.count = 1, .reusable = true}, SHIFT(80),
  [201] = {.count = 1, .reusable = true}, SHIFT(81),
  [203] = {.count = 1, .reusable = true}, SHIFT(82),
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
