#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 135
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_EQ = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_PIPE = 4,
  anon_sym_nu = 5,
  anon_sym_COLON = 6,
  anon_sym_QMARK = 7,
  anon_sym_BANG = 8,
  anon_sym_DOT = 9,
  aux_sym_end = 10,
  anon_sym_LBRACE = 11,
  anon_sym_SEMI = 12,
  anon_sym_RBRACE = 13,
  anon_sym_DASH_GT = 14,
  anon_sym_STAR = 15,
  anon_sym_SLASH = 16,
  anon_sym_PLUS = 17,
  anon_sym_DASH = 18,
  sym_sort_int = 19,
  sym_sort_bool = 20,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH = 21,
  anon_sym_stdin = 22,
  anon_sym_stdout = 23,
  sym_label = 24,
  sym__digit = 25,
  sym_cmd = 26,
  sym_comment = 27,
  sym_program = 28,
  sym_proc_declaration = 29,
  sym__proc = 30,
  sym_par = 31,
  sym_nu = 32,
  sym_recv = 33,
  sym_send = 34,
  sym_end = 35,
  sym_call = 36,
  sym__clauses = 37,
  sym_simple_clause = 38,
  sym__complex_clauses = 39,
  sym_complex_clause = 40,
  sym_pattern = 41,
  sym__expr = 42,
  sym_mul = 43,
  sym_div = 44,
  sym_add = 45,
  sym_sub = 46,
  sym__term = 47,
  sym_integer = 48,
  sym_variable = 49,
  sym__sort = 50,
  sym__type = 51,
  sym_type_send = 52,
  sym_type_recv = 53,
  sym_type_select = 54,
  sym_type_choice = 55,
  sym_type_end = 56,
  sym_type_call = 57,
  sym__type_of_label = 58,
  sym_process_name = 59,
  sym__name = 60,
  sym_reserved_name = 61,
  sym_name = 62,
  aux_sym_program_repeat1 = 63,
  aux_sym__complex_clauses_repeat1 = 64,
  aux_sym_type_select_repeat1 = 65,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PIPE] = "|",
  [anon_sym_nu] = "nu",
  [anon_sym_COLON] = ":",
  [anon_sym_QMARK] = "?",
  [anon_sym_BANG] = "!",
  [anon_sym_DOT] = ".",
  [aux_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_SEMI] = ";",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym_sort_int] = "sort_int",
  [sym_sort_bool] = "sort_bool",
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
  [sym_end] = "end",
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
  [sym__sort] = "_sort",
  [sym__type] = "_type",
  [sym_type_send] = "type_send",
  [sym_type_recv] = "type_recv",
  [sym_type_select] = "type_select",
  [sym_type_choice] = "type_choice",
  [sym_type_end] = "type_end",
  [sym_type_call] = "type_call",
  [sym__type_of_label] = "_type_of_label",
  [sym_process_name] = "process_name",
  [sym__name] = "_name",
  [sym_reserved_name] = "reserved_name",
  [sym_name] = "name",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__complex_clauses_repeat1] = "_complex_clauses_repeat1",
  [aux_sym_type_select_repeat1] = "type_select_repeat1",
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
  [anon_sym_COLON] = {
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
  [aux_sym_end] = {
    .visible = false,
    .named = false,
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
  [sym_sort_int] = {
    .visible = true,
    .named = true,
  },
  [sym_sort_bool] = {
    .visible = true,
    .named = true,
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
  [sym_end] = {
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
  [sym__sort] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_type_send] = {
    .visible = true,
    .named = true,
  },
  [sym_type_recv] = {
    .visible = true,
    .named = true,
  },
  [sym_type_select] = {
    .visible = true,
    .named = true,
  },
  [sym_type_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_type_end] = {
    .visible = true,
    .named = true,
  },
  [sym_type_call] = {
    .visible = true,
    .named = true,
  },
  [sym__type_of_label] = {
    .visible = false,
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
  [aux_sym__complex_clauses_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_select_repeat1] = {
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
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '?')
        ADVANCE(16);
      if (lookahead == 'B')
        ADVANCE(17);
      if (lookahead == 'I')
        ADVANCE(23);
      if (lookahead == '\\')
        SKIP(26);
      if (lookahead == 'e')
        ADVANCE(27);
      if (lookahead == 'n')
        ADVANCE(31);
      if (lookahead == 's')
        ADVANCE(33);
      if (lookahead == '{')
        ADVANCE(41);
      if (lookahead == '|')
        ADVANCE(42);
      if (lookahead == '}')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(22);
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
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '\'')
        ADVANCE(18);
      if (lookahead == 'o')
        ADVANCE(19);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(22);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\'')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\'')
        ADVANCE(18);
      if (lookahead == 'o')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\'')
        ADVANCE(18);
      if (lookahead == 'l')
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_sort_bool);
      if (lookahead == '\'')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '\'')
        ADVANCE(18);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '\'')
        ADVANCE(18);
      if (lookahead == 'n')
        ADVANCE(24);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(22);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\'')
        ADVANCE(18);
      if (lookahead == 't')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_sort_int);
      if (lookahead == '\'')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
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
      ACCEPT_TOKEN(aux_sym_end);
      if (lookahead == '\'')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == 't')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == 'd')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == 'i')
        ADVANCE(36);
      if (lookahead == 'o')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == 'n')
        ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_stdin);
      if (lookahead == '\'')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == 'u')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == 't')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_stdout);
      if (lookahead == '\'')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 44:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(45);
      if (lookahead == '/')
        ADVANCE(46);
      if (lookahead == '\\')
        SKIP(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(44);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 45:
      if (lookahead == '-')
        ADVANCE(8);
      END_STATE();
    case 46:
      if (lookahead == '/')
        ADVANCE(12);
      END_STATE();
    case 47:
      if (lookahead == 'n')
        SKIP(44);
      END_STATE();
    case 48:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(45);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(46);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(49);
      if (lookahead == '}')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(48);
      END_STATE();
    case 49:
      if (lookahead == 'n')
        SKIP(48);
      END_STATE();
    case 50:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(45);
      if (lookahead == '/')
        ADVANCE(46);
      if (lookahead == '\\')
        SKIP(51);
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
      if (lookahead == '-')
        ADVANCE(45);
      if (lookahead == '/')
        ADVANCE(46);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(52);
      END_STATE();
    case 53:
      if (lookahead == 'n')
        SKIP(52);
      END_STATE();
    case 54:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(45);
      if (lookahead == '/')
        ADVANCE(46);
      if (lookahead == '\\')
        SKIP(55);
      if (lookahead == 'e')
        ADVANCE(27);
      if (lookahead == 's')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(54);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 55:
      if (lookahead == 'n')
        SKIP(54);
      END_STATE();
    case 56:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(45);
      if (lookahead == '/')
        ADVANCE(46);
      if (lookahead == '\\')
        SKIP(57);
      if (lookahead == 'e')
        ADVANCE(27);
      if (lookahead == 'n')
        ADVANCE(31);
      if (lookahead == 's')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(56);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
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
        ADVANCE(45);
      if (lookahead == '/')
        ADVANCE(46);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '\\')
        SKIP(59);
      if (lookahead == '|')
        ADVANCE(42);
      if (lookahead == '}')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(58);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 59:
      if (lookahead == 'n')
        SKIP(58);
      END_STATE();
    case 60:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(45);
      if (lookahead == '/')
        ADVANCE(46);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '?')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(61);
      if (lookahead == '|')
        ADVANCE(42);
      if (lookahead == '}')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(60);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 61:
      if (lookahead == 'n')
        SKIP(60);
      END_STATE();
    case 62:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(63);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(8);
      END_STATE();
    case 64:
      if (lookahead == 'n')
        SKIP(62);
      END_STATE();
    case 65:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(45);
      if (lookahead == '/')
        ADVANCE(46);
      if (lookahead == '\\')
        SKIP(66);
      if (lookahead == '|')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(65);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 66:
      if (lookahead == 'n')
        SKIP(65);
      END_STATE();
    case 67:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(45);
      if (lookahead == '/')
        ADVANCE(46);
      if (lookahead == '\\')
        SKIP(68);
      if (lookahead == '|')
        ADVANCE(42);
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
      if (lookahead == '-')
        ADVANCE(45);
      if (lookahead == '/')
        ADVANCE(46);
      if (lookahead == '\\')
        SKIP(70);
      if (lookahead == '{')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(69);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(71);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 70:
      if (lookahead == 'n')
        SKIP(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(71);
      END_STATE();
    case 72:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(73);
      if (lookahead == '/')
        ADVANCE(46);
      if (lookahead == '\\')
        SKIP(75);
      if (lookahead == 's')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(72);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(74);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(71);
      END_STATE();
    case 73:
      if (lookahead == '-')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == 'n')
        SKIP(72);
      END_STATE();
    case 76:
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
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == '\\')
        SKIP(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(76);
      END_STATE();
    case 77:
      if (lookahead == 'n')
        SKIP(76);
      END_STATE();
    case 78:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(45);
      if (lookahead == '/')
        ADVANCE(46);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == '\\')
        SKIP(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(78);
      END_STATE();
    case 79:
      if (lookahead == 'n')
        SKIP(78);
      END_STATE();
    case 80:
      if (lookahead == '-')
        ADVANCE(81);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(46);
      if (lookahead == '\\')
        SKIP(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(80);
      END_STATE();
    case 81:
      if (lookahead == '-')
        ADVANCE(8);
      if (lookahead == '>')
        ADVANCE(9);
      END_STATE();
    case 82:
      if (lookahead == 'n')
        SKIP(80);
      END_STATE();
    case 83:
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(63);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '\\')
        SKIP(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(83);
      END_STATE();
    case 84:
      if (lookahead == 'n')
        SKIP(83);
      END_STATE();
    case 85:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(63);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '\\')
        SKIP(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(85);
      END_STATE();
    case 86:
      if (lookahead == 'n')
        SKIP(85);
      END_STATE();
    case 87:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(45);
      if (lookahead == '/')
        ADVANCE(46);
      if (lookahead == '?')
        ADVANCE(16);
      if (lookahead == 'B')
        ADVANCE(88);
      if (lookahead == 'I')
        ADVANCE(92);
      if (lookahead == '\\')
        SKIP(95);
      if (lookahead == 'e')
        ADVANCE(27);
      if (lookahead == '{')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 88:
      if (lookahead == 'o')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'o')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'l')
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_sort_bool);
      END_STATE();
    case 92:
      if (lookahead == 'n')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 't')
        ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_sort_int);
      END_STATE();
    case 95:
      if (lookahead == 'n')
        SKIP(87);
      END_STATE();
    case 96:
      if (lookahead == '-')
        ADVANCE(45);
      if (lookahead == '/')
        ADVANCE(46);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '\\')
        SKIP(97);
      if (lookahead == '|')
        ADVANCE(42);
      if (lookahead == '}')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(96);
      END_STATE();
    case 97:
      if (lookahead == 'n')
        SKIP(96);
      END_STATE();
    case 98:
      if (lookahead == '-')
        ADVANCE(81);
      if (lookahead == '/')
        ADVANCE(46);
      if (lookahead == '\\')
        SKIP(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(98);
      END_STATE();
    case 99:
      if (lookahead == 'n')
        SKIP(98);
      END_STATE();
    case 100:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(63);
      if (lookahead == '/')
        ADVANCE(11);
      if (lookahead == '\\')
        SKIP(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(100);
      END_STATE();
    case 101:
      if (lookahead == 'n')
        SKIP(100);
      END_STATE();
    case 102:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(45);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(46);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '\\')
        SKIP(103);
      if (lookahead == '}')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(102);
      END_STATE();
    case 103:
      if (lookahead == 'n')
        SKIP(102);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 44},
  [2] = {.lex_state = 48},
  [3] = {.lex_state = 50},
  [4] = {.lex_state = 52},
  [5] = {.lex_state = 44},
  [6] = {.lex_state = 54},
  [7] = {.lex_state = 44},
  [8] = {.lex_state = 56},
  [9] = {.lex_state = 58},
  [10] = {.lex_state = 60},
  [11] = {.lex_state = 62},
  [12] = {.lex_state = 65},
  [13] = {.lex_state = 58},
  [14] = {.lex_state = 60},
  [15] = {.lex_state = 56},
  [16] = {.lex_state = 44},
  [17] = {.lex_state = 67},
  [18] = {.lex_state = 60},
  [19] = {.lex_state = 54},
  [20] = {.lex_state = 69},
  [21] = {.lex_state = 72},
  [22] = {.lex_state = 44},
  [23] = {.lex_state = 76},
  [24] = {.lex_state = 78},
  [25] = {.lex_state = 58},
  [26] = {.lex_state = 54},
  [27] = {.lex_state = 69},
  [28] = {.lex_state = 72},
  [29] = {.lex_state = 65},
  [30] = {.lex_state = 69},
  [31] = {.lex_state = 80},
  [32] = {.lex_state = 58},
  [33] = {.lex_state = 83},
  [34] = {.lex_state = 72},
  [35] = {.lex_state = 85},
  [36] = {.lex_state = 83},
  [37] = {.lex_state = 85},
  [38] = {.lex_state = 78},
  [39] = {.lex_state = 54},
  [40] = {.lex_state = 87},
  [41] = {.lex_state = 67},
  [42] = {.lex_state = 83},
  [43] = {.lex_state = 83},
  [44] = {.lex_state = 96},
  [45] = {.lex_state = 98},
  [46] = {.lex_state = 54},
  [47] = {.lex_state = 100},
  [48] = {.lex_state = 54},
  [49] = {.lex_state = 72},
  [50] = {.lex_state = 72},
  [51] = {.lex_state = 72},
  [52] = {.lex_state = 72},
  [53] = {.lex_state = 54},
  [54] = {.lex_state = 87},
  [55] = {.lex_state = 58},
  [56] = {.lex_state = 87},
  [57] = {.lex_state = 87},
  [58] = {.lex_state = 87},
  [59] = {.lex_state = 102},
  [60] = {.lex_state = 67},
  [61] = {.lex_state = 102},
  [62] = {.lex_state = 54},
  [63] = {.lex_state = 54},
  [64] = {.lex_state = 69},
  [65] = {.lex_state = 58},
  [66] = {.lex_state = 96},
  [67] = {.lex_state = 54},
  [68] = {.lex_state = 58},
  [69] = {.lex_state = 85},
  [70] = {.lex_state = 58},
  [71] = {.lex_state = 85},
  [72] = {.lex_state = 85},
  [73] = {.lex_state = 85},
  [74] = {.lex_state = 85},
  [75] = {.lex_state = 67},
  [76] = {.lex_state = 67},
  [77] = {.lex_state = 87},
  [78] = {.lex_state = 87},
  [79] = {.lex_state = 69},
  [80] = {.lex_state = 83},
  [81] = {.lex_state = 69},
  [82] = {.lex_state = 83},
  [83] = {.lex_state = 54},
  [84] = {.lex_state = 96},
  [85] = {.lex_state = 58},
  [86] = {.lex_state = 96},
  [87] = {.lex_state = 56},
  [88] = {.lex_state = 96},
  [89] = {.lex_state = 60},
  [90] = {.lex_state = 54},
  [91] = {.lex_state = 102},
  [92] = {.lex_state = 83},
  [93] = {.lex_state = 83},
  [94] = {.lex_state = 78},
  [95] = {.lex_state = 96},
  [96] = {.lex_state = 87},
  [97] = {.lex_state = 96},
  [98] = {.lex_state = 87},
  [99] = {.lex_state = 58},
  [100] = {.lex_state = 44},
  [101] = {.lex_state = 54},
  [102] = {.lex_state = 69},
  [103] = {.lex_state = 72},
  [104] = {.lex_state = 87},
  [105] = {.lex_state = 87},
  [106] = {.lex_state = 87},
  [107] = {.lex_state = 69},
  [108] = {.lex_state = 102},
  [109] = {.lex_state = 96},
  [110] = {.lex_state = 102},
  [111] = {.lex_state = 102},
  [112] = {.lex_state = 96},
  [113] = {.lex_state = 102},
  [114] = {.lex_state = 78},
  [115] = {.lex_state = 96},
  [116] = {.lex_state = 83},
  [117] = {.lex_state = 83},
  [118] = {.lex_state = 87},
  [119] = {.lex_state = 87},
  [120] = {.lex_state = 96},
  [121] = {.lex_state = 96},
  [122] = {.lex_state = 102},
  [123] = {.lex_state = 96},
  [124] = {.lex_state = 102},
  [125] = {.lex_state = 54},
  [126] = {.lex_state = 87},
  [127] = {.lex_state = 54},
  [128] = {.lex_state = 54},
  [129] = {.lex_state = 83},
  [130] = {.lex_state = 83},
  [131] = {.lex_state = 67},
  [132] = {.lex_state = 87},
  [133] = {.lex_state = 87},
  [134] = {.lex_state = 54},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_nu] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(3),
    [sym_sort_int] = ACTIONS(3),
    [sym_sort_bool] = ACTIONS(3),
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
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(11),
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
    [sym__proc] = STATE(12),
    [sym_par] = STATE(12),
    [sym_nu] = STATE(12),
    [sym_recv] = STATE(12),
    [sym_send] = STATE(12),
    [sym_end] = STATE(12),
    [sym_call] = STATE(12),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(14),
    [sym_reserved_name] = STATE(14),
    [sym_name] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_end] = ACTIONS(21),
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
    [sym_send] = STATE(17),
    [sym_end] = STATE(17),
    [sym_call] = STATE(17),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(18),
    [sym_reserved_name] = STATE(18),
    [sym_name] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(32),
    [anon_sym_nu] = ACTIONS(34),
    [aux_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(36),
    [anon_sym_RPAREN] = ACTIONS(36),
    [anon_sym_PIPE] = ACTIONS(36),
    [anon_sym_SEMI] = ACTIONS(36),
    [anon_sym_RBRACE] = ACTIONS(36),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(36),
    [sym_comment] = ACTIONS(9),
  },
  [10] = {
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
  [11] = {
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
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [anon_sym_PIPE] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(44),
    [sym_comment] = ACTIONS(9),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(48),
    [anon_sym_PIPE] = ACTIONS(48),
    [anon_sym_SEMI] = ACTIONS(48),
    [anon_sym_RBRACE] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(48),
    [sym_comment] = ACTIONS(9),
  },
  [14] = {
    [anon_sym_QMARK] = ACTIONS(50),
    [anon_sym_BANG] = ACTIONS(52),
    [sym_comment] = ACTIONS(9),
  },
  [15] = {
    [sym__proc] = STATE(17),
    [sym_par] = STATE(17),
    [sym_nu] = STATE(17),
    [sym_recv] = STATE(17),
    [sym_send] = STATE(17),
    [sym_end] = STATE(17),
    [sym_call] = STATE(17),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(18),
    [sym_reserved_name] = STATE(18),
    [sym_name] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(32),
    [anon_sym_nu] = ACTIONS(54),
    [aux_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [16] = {
    [sym_name] = STATE(24),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [sym_comment] = ACTIONS(9),
  },
  [17] = {
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(60),
    [sym_comment] = ACTIONS(9),
  },
  [18] = {
    [anon_sym_QMARK] = ACTIONS(62),
    [anon_sym_BANG] = ACTIONS(64),
    [sym_comment] = ACTIONS(9),
  },
  [19] = {
    [sym__proc] = STATE(29),
    [sym_par] = STATE(29),
    [sym_nu] = STATE(29),
    [sym_recv] = STATE(29),
    [sym_send] = STATE(29),
    [sym_end] = STATE(29),
    [sym_call] = STATE(29),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(14),
    [sym_reserved_name] = STATE(14),
    [sym_name] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [20] = {
    [sym__clauses] = STATE(32),
    [sym_simple_clause] = STATE(32),
    [sym__complex_clauses] = STATE(32),
    [sym_pattern] = STATE(33),
    [sym_name] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [sym_label] = ACTIONS(68),
    [sym_comment] = ACTIONS(9),
  },
  [21] = {
    [sym__expr] = STATE(36),
    [sym_mul] = STATE(36),
    [sym_div] = STATE(36),
    [sym_add] = STATE(36),
    [sym_sub] = STATE(36),
    [sym__term] = STATE(36),
    [sym_integer] = STATE(36),
    [sym_variable] = STATE(36),
    [sym__name] = STATE(37),
    [sym_reserved_name] = STATE(37),
    [sym_name] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(72),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(74),
    [sym__digit] = ACTIONS(76),
    [sym_comment] = ACTIONS(9),
  },
  [22] = {
    [sym_name] = STATE(38),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [sym_comment] = ACTIONS(9),
  },
  [23] = {
    [anon_sym_RPAREN] = ACTIONS(38),
    [anon_sym_COLON] = ACTIONS(38),
    [anon_sym_DOT] = ACTIONS(38),
    [anon_sym_DASH_GT] = ACTIONS(38),
    [anon_sym_STAR] = ACTIONS(38),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(38),
    [anon_sym_DASH] = ACTIONS(78),
    [sym_comment] = ACTIONS(9),
  },
  [24] = {
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_COLON] = ACTIONS(82),
    [sym_comment] = ACTIONS(9),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(84),
    [anon_sym_SEMI] = ACTIONS(84),
    [anon_sym_RBRACE] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(9),
  },
  [26] = {
    [sym__proc] = STATE(41),
    [sym_par] = STATE(41),
    [sym_nu] = STATE(41),
    [sym_recv] = STATE(41),
    [sym_send] = STATE(41),
    [sym_end] = STATE(41),
    [sym_call] = STATE(41),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(18),
    [sym_reserved_name] = STATE(18),
    [sym_name] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(32),
    [aux_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [27] = {
    [sym__clauses] = STATE(32),
    [sym_simple_clause] = STATE(32),
    [sym__complex_clauses] = STATE(32),
    [sym_pattern] = STATE(42),
    [sym_name] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [sym_label] = ACTIONS(68),
    [sym_comment] = ACTIONS(9),
  },
  [28] = {
    [sym__expr] = STATE(43),
    [sym_mul] = STATE(43),
    [sym_div] = STATE(43),
    [sym_add] = STATE(43),
    [sym_sub] = STATE(43),
    [sym__term] = STATE(43),
    [sym_integer] = STATE(43),
    [sym_variable] = STATE(43),
    [sym__name] = STATE(37),
    [sym_reserved_name] = STATE(37),
    [sym_name] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(72),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(86),
    [sym__digit] = ACTIONS(76),
    [sym_comment] = ACTIONS(9),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_PIPE] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_comment] = ACTIONS(9),
  },
  [30] = {
    [sym_complex_clause] = STATE(44),
    [sym_pattern] = STATE(45),
    [sym_name] = STATE(31),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [sym_label] = ACTIONS(68),
    [sym_comment] = ACTIONS(9),
  },
  [31] = {
    [anon_sym_DOT] = ACTIONS(90),
    [anon_sym_DASH_GT] = ACTIONS(90),
    [sym_comment] = ACTIONS(9),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(92),
    [anon_sym_SEMI] = ACTIONS(92),
    [anon_sym_RBRACE] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [33] = {
    [anon_sym_DOT] = ACTIONS(94),
    [sym_comment] = ACTIONS(9),
  },
  [34] = {
    [sym__expr] = STATE(47),
    [sym_mul] = STATE(47),
    [sym_div] = STATE(47),
    [sym_add] = STATE(47),
    [sym_sub] = STATE(47),
    [sym__term] = STATE(47),
    [sym_integer] = STATE(47),
    [sym_variable] = STATE(47),
    [sym__name] = STATE(37),
    [sym_reserved_name] = STATE(37),
    [sym_name] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(72),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(96),
    [sym__digit] = ACTIONS(76),
    [sym_comment] = ACTIONS(9),
  },
  [35] = {
    [anon_sym_RPAREN] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(100),
    [sym_comment] = ACTIONS(9),
  },
  [36] = {
    [anon_sym_DOT] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(9),
  },
  [37] = {
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_DOT] = ACTIONS(112),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(9),
  },
  [38] = {
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(118),
    [sym_comment] = ACTIONS(9),
  },
  [39] = {
    [sym__proc] = STATE(55),
    [sym_par] = STATE(55),
    [sym_nu] = STATE(55),
    [sym_recv] = STATE(55),
    [sym_send] = STATE(55),
    [sym_end] = STATE(55),
    [sym_call] = STATE(55),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(14),
    [sym_reserved_name] = STATE(14),
    [sym_name] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [40] = {
    [sym__type] = STATE(60),
    [sym_type_send] = STATE(60),
    [sym_type_recv] = STATE(60),
    [sym_type_select] = STATE(60),
    [sym_type_choice] = STATE(60),
    [sym_type_end] = STATE(60),
    [sym_type_call] = STATE(60),
    [sym_process_name] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_QMARK] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(124),
    [aux_sym_end] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(9),
  },
  [41] = {
    [anon_sym_RPAREN] = ACTIONS(88),
    [anon_sym_PIPE] = ACTIONS(60),
    [sym_comment] = ACTIONS(9),
  },
  [42] = {
    [anon_sym_DOT] = ACTIONS(130),
    [sym_comment] = ACTIONS(9),
  },
  [43] = {
    [anon_sym_DOT] = ACTIONS(132),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(9),
  },
  [44] = {
    [aux_sym__complex_clauses_repeat1] = STATE(66),
    [anon_sym_SEMI] = ACTIONS(134),
    [anon_sym_RBRACE] = ACTIONS(136),
    [sym_comment] = ACTIONS(9),
  },
  [45] = {
    [anon_sym_DASH_GT] = ACTIONS(138),
    [sym_comment] = ACTIONS(9),
  },
  [46] = {
    [sym__proc] = STATE(68),
    [sym_par] = STATE(68),
    [sym_nu] = STATE(68),
    [sym_recv] = STATE(68),
    [sym_send] = STATE(68),
    [sym_end] = STATE(68),
    [sym_call] = STATE(68),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(14),
    [sym_reserved_name] = STATE(14),
    [sym_name] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [47] = {
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(9),
  },
  [48] = {
    [sym__proc] = STATE(70),
    [sym_par] = STATE(70),
    [sym_nu] = STATE(70),
    [sym_recv] = STATE(70),
    [sym_send] = STATE(70),
    [sym_end] = STATE(70),
    [sym_call] = STATE(70),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(14),
    [sym_reserved_name] = STATE(14),
    [sym_name] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [49] = {
    [sym__expr] = STATE(71),
    [sym_mul] = STATE(71),
    [sym_div] = STATE(71),
    [sym_add] = STATE(71),
    [sym_sub] = STATE(71),
    [sym__term] = STATE(71),
    [sym_integer] = STATE(71),
    [sym_variable] = STATE(71),
    [sym__name] = STATE(37),
    [sym_reserved_name] = STATE(37),
    [sym_name] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(72),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(142),
    [sym__digit] = ACTIONS(76),
    [sym_comment] = ACTIONS(9),
  },
  [50] = {
    [sym__expr] = STATE(72),
    [sym_mul] = STATE(72),
    [sym_div] = STATE(72),
    [sym_add] = STATE(72),
    [sym_sub] = STATE(72),
    [sym__term] = STATE(72),
    [sym_integer] = STATE(72),
    [sym_variable] = STATE(72),
    [sym__name] = STATE(37),
    [sym_reserved_name] = STATE(37),
    [sym_name] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(72),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(144),
    [sym__digit] = ACTIONS(76),
    [sym_comment] = ACTIONS(9),
  },
  [51] = {
    [sym__expr] = STATE(73),
    [sym_mul] = STATE(73),
    [sym_div] = STATE(73),
    [sym_add] = STATE(73),
    [sym_sub] = STATE(73),
    [sym__term] = STATE(73),
    [sym_integer] = STATE(73),
    [sym_variable] = STATE(73),
    [sym__name] = STATE(37),
    [sym_reserved_name] = STATE(37),
    [sym_name] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(72),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(146),
    [sym__digit] = ACTIONS(76),
    [sym_comment] = ACTIONS(9),
  },
  [52] = {
    [sym__expr] = STATE(74),
    [sym_mul] = STATE(74),
    [sym_div] = STATE(74),
    [sym_add] = STATE(74),
    [sym_sub] = STATE(74),
    [sym__term] = STATE(74),
    [sym_integer] = STATE(74),
    [sym_variable] = STATE(74),
    [sym__name] = STATE(37),
    [sym_reserved_name] = STATE(37),
    [sym_name] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(72),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(148),
    [sym__digit] = ACTIONS(76),
    [sym_comment] = ACTIONS(9),
  },
  [53] = {
    [sym__proc] = STATE(55),
    [sym_par] = STATE(55),
    [sym_nu] = STATE(55),
    [sym_recv] = STATE(55),
    [sym_send] = STATE(55),
    [sym_end] = STATE(55),
    [sym_call] = STATE(55),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(18),
    [sym_reserved_name] = STATE(18),
    [sym_name] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(32),
    [aux_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [54] = {
    [sym__type] = STATE(75),
    [sym_type_send] = STATE(75),
    [sym_type_recv] = STATE(75),
    [sym_type_select] = STATE(75),
    [sym_type_choice] = STATE(75),
    [sym_type_end] = STATE(75),
    [sym_type_call] = STATE(75),
    [sym_process_name] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_QMARK] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(124),
    [aux_sym_end] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(9),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_RPAREN] = ACTIONS(150),
    [anon_sym_PIPE] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(150),
    [anon_sym_RBRACE] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(150),
    [sym_comment] = ACTIONS(9),
  },
  [56] = {
    [sym__type] = STATE(76),
    [sym_type_send] = STATE(76),
    [sym_type_recv] = STATE(76),
    [sym_type_select] = STATE(76),
    [sym_type_choice] = STATE(76),
    [sym_type_end] = STATE(76),
    [sym_type_call] = STATE(76),
    [sym_process_name] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_QMARK] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(124),
    [aux_sym_end] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(9),
  },
  [57] = {
    [sym__sort] = STATE(80),
    [sym__type] = STATE(80),
    [sym_type_send] = STATE(80),
    [sym_type_recv] = STATE(80),
    [sym_type_select] = STATE(80),
    [sym_type_choice] = STATE(80),
    [sym_type_end] = STATE(80),
    [sym_type_call] = STATE(80),
    [sym_process_name] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_BANG] = ACTIONS(154),
    [aux_sym_end] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(156),
    [sym_sort_int] = ACTIONS(158),
    [sym_sort_bool] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(9),
  },
  [58] = {
    [sym__sort] = STATE(82),
    [sym__type] = STATE(82),
    [sym_type_send] = STATE(82),
    [sym_type_recv] = STATE(82),
    [sym_type_select] = STATE(82),
    [sym_type_choice] = STATE(82),
    [sym_type_end] = STATE(82),
    [sym_type_call] = STATE(82),
    [sym_process_name] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_BANG] = ACTIONS(154),
    [aux_sym_end] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(160),
    [sym_sort_int] = ACTIONS(162),
    [sym_sort_bool] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(9),
  },
  [59] = {
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_DOT] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(164),
    [sym_comment] = ACTIONS(9),
  },
  [60] = {
    [anon_sym_RPAREN] = ACTIONS(166),
    [sym_comment] = ACTIONS(9),
  },
  [61] = {
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_DOT] = ACTIONS(168),
    [anon_sym_SEMI] = ACTIONS(168),
    [anon_sym_RBRACE] = ACTIONS(168),
    [sym_comment] = ACTIONS(9),
  },
  [62] = {
    [sym__proc] = STATE(68),
    [sym_par] = STATE(68),
    [sym_nu] = STATE(68),
    [sym_recv] = STATE(68),
    [sym_send] = STATE(68),
    [sym_end] = STATE(68),
    [sym_call] = STATE(68),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(18),
    [sym_reserved_name] = STATE(18),
    [sym_name] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(32),
    [aux_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [63] = {
    [sym__proc] = STATE(70),
    [sym_par] = STATE(70),
    [sym_nu] = STATE(70),
    [sym_recv] = STATE(70),
    [sym_send] = STATE(70),
    [sym_end] = STATE(70),
    [sym_call] = STATE(70),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(18),
    [sym_reserved_name] = STATE(18),
    [sym_name] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(32),
    [aux_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [64] = {
    [sym_complex_clause] = STATE(84),
    [sym_pattern] = STATE(45),
    [sym_name] = STATE(31),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [sym_label] = ACTIONS(68),
    [sym_comment] = ACTIONS(9),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_PIPE] = ACTIONS(170),
    [anon_sym_SEMI] = ACTIONS(170),
    [anon_sym_RBRACE] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(170),
    [sym_comment] = ACTIONS(9),
  },
  [66] = {
    [aux_sym__complex_clauses_repeat1] = STATE(86),
    [anon_sym_SEMI] = ACTIONS(134),
    [anon_sym_RBRACE] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [67] = {
    [sym__proc] = STATE(88),
    [sym_par] = STATE(88),
    [sym_nu] = STATE(88),
    [sym_recv] = STATE(88),
    [sym_send] = STATE(88),
    [sym_end] = STATE(88),
    [sym_call] = STATE(88),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(89),
    [sym_reserved_name] = STATE(89),
    [sym_name] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(174),
    [aux_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(176),
    [anon_sym_SEMI] = ACTIONS(176),
    [anon_sym_RBRACE] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(176),
    [sym_comment] = ACTIONS(9),
  },
  [69] = {
    [anon_sym_RPAREN] = ACTIONS(178),
    [anon_sym_DOT] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(178),
    [anon_sym_SLASH] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(180),
    [sym_comment] = ACTIONS(9),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(182),
    [anon_sym_PIPE] = ACTIONS(182),
    [anon_sym_SEMI] = ACTIONS(182),
    [anon_sym_RBRACE] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(182),
    [sym_comment] = ACTIONS(9),
  },
  [71] = {
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_DOT] = ACTIONS(184),
    [anon_sym_STAR] = ACTIONS(184),
    [anon_sym_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(184),
    [anon_sym_DASH] = ACTIONS(186),
    [sym_comment] = ACTIONS(9),
  },
  [72] = {
    [anon_sym_RPAREN] = ACTIONS(188),
    [anon_sym_DOT] = ACTIONS(188),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(190),
    [sym_comment] = ACTIONS(9),
  },
  [73] = {
    [anon_sym_RPAREN] = ACTIONS(192),
    [anon_sym_DOT] = ACTIONS(192),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(194),
    [sym_comment] = ACTIONS(9),
  },
  [74] = {
    [anon_sym_RPAREN] = ACTIONS(196),
    [anon_sym_DOT] = ACTIONS(196),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(196),
    [anon_sym_DASH] = ACTIONS(198),
    [sym_comment] = ACTIONS(9),
  },
  [75] = {
    [anon_sym_RPAREN] = ACTIONS(200),
    [sym_comment] = ACTIONS(9),
  },
  [76] = {
    [anon_sym_RPAREN] = ACTIONS(202),
    [sym_comment] = ACTIONS(9),
  },
  [77] = {
    [sym__sort] = STATE(92),
    [sym__type] = STATE(92),
    [sym_type_send] = STATE(92),
    [sym_type_recv] = STATE(92),
    [sym_type_select] = STATE(92),
    [sym_type_choice] = STATE(92),
    [sym_type_end] = STATE(92),
    [sym_type_call] = STATE(92),
    [sym_process_name] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_BANG] = ACTIONS(154),
    [aux_sym_end] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(156),
    [sym_sort_int] = ACTIONS(204),
    [sym_sort_bool] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(9),
  },
  [78] = {
    [sym__sort] = STATE(93),
    [sym__type] = STATE(93),
    [sym_type_send] = STATE(93),
    [sym_type_recv] = STATE(93),
    [sym_type_select] = STATE(93),
    [sym_type_choice] = STATE(93),
    [sym_type_end] = STATE(93),
    [sym_type_call] = STATE(93),
    [sym_process_name] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_BANG] = ACTIONS(154),
    [aux_sym_end] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(160),
    [sym_sort_int] = ACTIONS(206),
    [sym_sort_bool] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(9),
  },
  [79] = {
    [sym__type_of_label] = STATE(95),
    [sym_label] = ACTIONS(208),
    [sym_comment] = ACTIONS(9),
  },
  [80] = {
    [anon_sym_DOT] = ACTIONS(210),
    [sym_comment] = ACTIONS(9),
  },
  [81] = {
    [sym__type_of_label] = STATE(97),
    [sym_label] = ACTIONS(208),
    [sym_comment] = ACTIONS(9),
  },
  [82] = {
    [anon_sym_DOT] = ACTIONS(212),
    [sym_comment] = ACTIONS(9),
  },
  [83] = {
    [sym__proc] = STATE(99),
    [sym_par] = STATE(99),
    [sym_nu] = STATE(99),
    [sym_recv] = STATE(99),
    [sym_send] = STATE(99),
    [sym_end] = STATE(99),
    [sym_call] = STATE(99),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(14),
    [sym_reserved_name] = STATE(14),
    [sym_name] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [84] = {
    [anon_sym_SEMI] = ACTIONS(214),
    [anon_sym_RBRACE] = ACTIONS(214),
    [sym_comment] = ACTIONS(9),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_PIPE] = ACTIONS(216),
    [anon_sym_SEMI] = ACTIONS(216),
    [anon_sym_RBRACE] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(216),
    [sym_comment] = ACTIONS(9),
  },
  [86] = {
    [aux_sym__complex_clauses_repeat1] = STATE(86),
    [anon_sym_SEMI] = ACTIONS(218),
    [anon_sym_RBRACE] = ACTIONS(214),
    [sym_comment] = ACTIONS(9),
  },
  [87] = {
    [sym__proc] = STATE(17),
    [sym_par] = STATE(17),
    [sym_nu] = STATE(17),
    [sym_recv] = STATE(17),
    [sym_send] = STATE(17),
    [sym_end] = STATE(17),
    [sym_call] = STATE(17),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(18),
    [sym_reserved_name] = STATE(18),
    [sym_name] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(32),
    [anon_sym_nu] = ACTIONS(221),
    [aux_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [88] = {
    [anon_sym_PIPE] = ACTIONS(223),
    [anon_sym_SEMI] = ACTIONS(225),
    [anon_sym_RBRACE] = ACTIONS(225),
    [sym_comment] = ACTIONS(9),
  },
  [89] = {
    [anon_sym_QMARK] = ACTIONS(227),
    [anon_sym_BANG] = ACTIONS(229),
    [sym_comment] = ACTIONS(9),
  },
  [90] = {
    [sym__proc] = STATE(99),
    [sym_par] = STATE(99),
    [sym_nu] = STATE(99),
    [sym_recv] = STATE(99),
    [sym_send] = STATE(99),
    [sym_end] = STATE(99),
    [sym_call] = STATE(99),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(18),
    [sym_reserved_name] = STATE(18),
    [sym_name] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(32),
    [aux_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [91] = {
    [anon_sym_RPAREN] = ACTIONS(231),
    [anon_sym_DOT] = ACTIONS(231),
    [anon_sym_SEMI] = ACTIONS(231),
    [anon_sym_RBRACE] = ACTIONS(231),
    [sym_comment] = ACTIONS(9),
  },
  [92] = {
    [anon_sym_DOT] = ACTIONS(233),
    [sym_comment] = ACTIONS(9),
  },
  [93] = {
    [anon_sym_DOT] = ACTIONS(235),
    [sym_comment] = ACTIONS(9),
  },
  [94] = {
    [anon_sym_COLON] = ACTIONS(237),
    [sym_comment] = ACTIONS(9),
  },
  [95] = {
    [aux_sym_type_select_repeat1] = STATE(109),
    [anon_sym_SEMI] = ACTIONS(239),
    [anon_sym_RBRACE] = ACTIONS(241),
    [sym_comment] = ACTIONS(9),
  },
  [96] = {
    [sym__type] = STATE(110),
    [sym_type_send] = STATE(110),
    [sym_type_recv] = STATE(110),
    [sym_type_select] = STATE(110),
    [sym_type_choice] = STATE(110),
    [sym_type_end] = STATE(110),
    [sym_type_call] = STATE(110),
    [sym_process_name] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_QMARK] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(124),
    [aux_sym_end] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(9),
  },
  [97] = {
    [aux_sym_type_select_repeat1] = STATE(112),
    [anon_sym_SEMI] = ACTIONS(239),
    [anon_sym_RBRACE] = ACTIONS(243),
    [sym_comment] = ACTIONS(9),
  },
  [98] = {
    [sym__type] = STATE(113),
    [sym_type_send] = STATE(113),
    [sym_type_recv] = STATE(113),
    [sym_type_select] = STATE(113),
    [sym_type_choice] = STATE(113),
    [sym_type_end] = STATE(113),
    [sym_type_call] = STATE(113),
    [sym_process_name] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_QMARK] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(124),
    [aux_sym_end] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(9),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(245),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(245),
    [sym_comment] = ACTIONS(9),
  },
  [100] = {
    [sym_name] = STATE(114),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [sym_comment] = ACTIONS(9),
  },
  [101] = {
    [sym__proc] = STATE(115),
    [sym_par] = STATE(115),
    [sym_nu] = STATE(115),
    [sym_recv] = STATE(115),
    [sym_send] = STATE(115),
    [sym_end] = STATE(115),
    [sym_call] = STATE(115),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(89),
    [sym_reserved_name] = STATE(89),
    [sym_name] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(174),
    [aux_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [102] = {
    [sym__clauses] = STATE(32),
    [sym_simple_clause] = STATE(32),
    [sym__complex_clauses] = STATE(32),
    [sym_pattern] = STATE(116),
    [sym_name] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [sym_label] = ACTIONS(68),
    [sym_comment] = ACTIONS(9),
  },
  [103] = {
    [sym__expr] = STATE(117),
    [sym_mul] = STATE(117),
    [sym_div] = STATE(117),
    [sym_add] = STATE(117),
    [sym_sub] = STATE(117),
    [sym__term] = STATE(117),
    [sym_integer] = STATE(117),
    [sym_variable] = STATE(117),
    [sym__name] = STATE(37),
    [sym_reserved_name] = STATE(37),
    [sym_name] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(72),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(247),
    [sym__digit] = ACTIONS(76),
    [sym_comment] = ACTIONS(9),
  },
  [104] = {
    [sym__type] = STATE(110),
    [sym_type_send] = STATE(110),
    [sym_type_recv] = STATE(110),
    [sym_type_select] = STATE(110),
    [sym_type_choice] = STATE(110),
    [sym_type_end] = STATE(110),
    [sym_type_call] = STATE(110),
    [sym_process_name] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_BANG] = ACTIONS(154),
    [aux_sym_end] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(9),
  },
  [105] = {
    [sym__type] = STATE(113),
    [sym_type_send] = STATE(113),
    [sym_type_recv] = STATE(113),
    [sym_type_select] = STATE(113),
    [sym_type_choice] = STATE(113),
    [sym_type_end] = STATE(113),
    [sym_type_call] = STATE(113),
    [sym_process_name] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_BANG] = ACTIONS(154),
    [aux_sym_end] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(9),
  },
  [106] = {
    [sym__type] = STATE(120),
    [sym_type_send] = STATE(120),
    [sym_type_recv] = STATE(120),
    [sym_type_select] = STATE(120),
    [sym_type_choice] = STATE(120),
    [sym_type_end] = STATE(120),
    [sym_type_call] = STATE(120),
    [sym_process_name] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_QMARK] = ACTIONS(249),
    [anon_sym_BANG] = ACTIONS(251),
    [aux_sym_end] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(9),
  },
  [107] = {
    [sym__type_of_label] = STATE(121),
    [sym_label] = ACTIONS(208),
    [sym_comment] = ACTIONS(9),
  },
  [108] = {
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(253),
    [anon_sym_RBRACE] = ACTIONS(253),
    [sym_comment] = ACTIONS(9),
  },
  [109] = {
    [aux_sym_type_select_repeat1] = STATE(123),
    [anon_sym_SEMI] = ACTIONS(239),
    [anon_sym_RBRACE] = ACTIONS(255),
    [sym_comment] = ACTIONS(9),
  },
  [110] = {
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_DOT] = ACTIONS(257),
    [anon_sym_SEMI] = ACTIONS(257),
    [anon_sym_RBRACE] = ACTIONS(257),
    [sym_comment] = ACTIONS(9),
  },
  [111] = {
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_DOT] = ACTIONS(259),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(259),
    [sym_comment] = ACTIONS(9),
  },
  [112] = {
    [aux_sym_type_select_repeat1] = STATE(123),
    [anon_sym_SEMI] = ACTIONS(239),
    [anon_sym_RBRACE] = ACTIONS(261),
    [sym_comment] = ACTIONS(9),
  },
  [113] = {
    [anon_sym_RPAREN] = ACTIONS(263),
    [anon_sym_DOT] = ACTIONS(263),
    [anon_sym_SEMI] = ACTIONS(263),
    [anon_sym_RBRACE] = ACTIONS(263),
    [sym_comment] = ACTIONS(9),
  },
  [114] = {
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_COLON] = ACTIONS(267),
    [sym_comment] = ACTIONS(9),
  },
  [115] = {
    [anon_sym_PIPE] = ACTIONS(223),
    [anon_sym_SEMI] = ACTIONS(88),
    [anon_sym_RBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(9),
  },
  [116] = {
    [anon_sym_DOT] = ACTIONS(269),
    [sym_comment] = ACTIONS(9),
  },
  [117] = {
    [anon_sym_DOT] = ACTIONS(271),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(9),
  },
  [118] = {
    [sym__sort] = STATE(129),
    [sym__type] = STATE(129),
    [sym_type_send] = STATE(129),
    [sym_type_recv] = STATE(129),
    [sym_type_select] = STATE(129),
    [sym_type_choice] = STATE(129),
    [sym_type_end] = STATE(129),
    [sym_type_call] = STATE(129),
    [sym_process_name] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_BANG] = ACTIONS(154),
    [aux_sym_end] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(156),
    [sym_sort_int] = ACTIONS(273),
    [sym_sort_bool] = ACTIONS(273),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(9),
  },
  [119] = {
    [sym__sort] = STATE(130),
    [sym__type] = STATE(130),
    [sym_type_send] = STATE(130),
    [sym_type_recv] = STATE(130),
    [sym_type_select] = STATE(130),
    [sym_type_choice] = STATE(130),
    [sym_type_end] = STATE(130),
    [sym_type_call] = STATE(130),
    [sym_process_name] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_BANG] = ACTIONS(154),
    [aux_sym_end] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(160),
    [sym_sort_int] = ACTIONS(275),
    [sym_sort_bool] = ACTIONS(275),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(9),
  },
  [120] = {
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(277),
    [sym_comment] = ACTIONS(9),
  },
  [121] = {
    [anon_sym_SEMI] = ACTIONS(279),
    [anon_sym_RBRACE] = ACTIONS(279),
    [sym_comment] = ACTIONS(9),
  },
  [122] = {
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_DOT] = ACTIONS(281),
    [anon_sym_SEMI] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(9),
  },
  [123] = {
    [aux_sym_type_select_repeat1] = STATE(123),
    [anon_sym_SEMI] = ACTIONS(283),
    [anon_sym_RBRACE] = ACTIONS(279),
    [sym_comment] = ACTIONS(9),
  },
  [124] = {
    [anon_sym_RPAREN] = ACTIONS(286),
    [anon_sym_DOT] = ACTIONS(286),
    [anon_sym_SEMI] = ACTIONS(286),
    [anon_sym_RBRACE] = ACTIONS(286),
    [sym_comment] = ACTIONS(9),
  },
  [125] = {
    [sym__proc] = STATE(55),
    [sym_par] = STATE(55),
    [sym_nu] = STATE(55),
    [sym_recv] = STATE(55),
    [sym_send] = STATE(55),
    [sym_end] = STATE(55),
    [sym_call] = STATE(55),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(89),
    [sym_reserved_name] = STATE(89),
    [sym_name] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(174),
    [aux_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [126] = {
    [sym__type] = STATE(131),
    [sym_type_send] = STATE(131),
    [sym_type_recv] = STATE(131),
    [sym_type_select] = STATE(131),
    [sym_type_choice] = STATE(131),
    [sym_type_end] = STATE(131),
    [sym_type_call] = STATE(131),
    [sym_process_name] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_QMARK] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(124),
    [aux_sym_end] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(9),
  },
  [127] = {
    [sym__proc] = STATE(68),
    [sym_par] = STATE(68),
    [sym_nu] = STATE(68),
    [sym_recv] = STATE(68),
    [sym_send] = STATE(68),
    [sym_end] = STATE(68),
    [sym_call] = STATE(68),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(89),
    [sym_reserved_name] = STATE(89),
    [sym_name] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(174),
    [aux_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [128] = {
    [sym__proc] = STATE(70),
    [sym_par] = STATE(70),
    [sym_nu] = STATE(70),
    [sym_recv] = STATE(70),
    [sym_send] = STATE(70),
    [sym_end] = STATE(70),
    [sym_call] = STATE(70),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(89),
    [sym_reserved_name] = STATE(89),
    [sym_name] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(174),
    [aux_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [129] = {
    [anon_sym_DOT] = ACTIONS(288),
    [sym_comment] = ACTIONS(9),
  },
  [130] = {
    [anon_sym_DOT] = ACTIONS(290),
    [sym_comment] = ACTIONS(9),
  },
  [131] = {
    [anon_sym_RPAREN] = ACTIONS(292),
    [sym_comment] = ACTIONS(9),
  },
  [132] = {
    [sym__type] = STATE(110),
    [sym_type_send] = STATE(110),
    [sym_type_recv] = STATE(110),
    [sym_type_select] = STATE(110),
    [sym_type_choice] = STATE(110),
    [sym_type_end] = STATE(110),
    [sym_type_call] = STATE(110),
    [sym_process_name] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_QMARK] = ACTIONS(249),
    [anon_sym_BANG] = ACTIONS(251),
    [aux_sym_end] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(9),
  },
  [133] = {
    [sym__type] = STATE(113),
    [sym_type_send] = STATE(113),
    [sym_type_recv] = STATE(113),
    [sym_type_select] = STATE(113),
    [sym_type_choice] = STATE(113),
    [sym_type_end] = STATE(113),
    [sym_type_call] = STATE(113),
    [sym_process_name] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_QMARK] = ACTIONS(249),
    [anon_sym_BANG] = ACTIONS(251),
    [aux_sym_end] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(9),
  },
  [134] = {
    [sym__proc] = STATE(99),
    [sym_par] = STATE(99),
    [sym_nu] = STATE(99),
    [sym_recv] = STATE(99),
    [sym_send] = STATE(99),
    [sym_end] = STATE(99),
    [sym_call] = STATE(99),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(89),
    [sym_reserved_name] = STATE(89),
    [sym_name] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(174),
    [aux_sym_end] = ACTIONS(21),
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
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_process_name, 1),
  [13] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [15] = {.count = 1, .reusable = true}, SHIFT(6),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [19] = {.count = 1, .reusable = true}, SHIFT(8),
  [21] = {.count = 1, .reusable = false}, SHIFT(9),
  [23] = {.count = 1, .reusable = false}, SHIFT(10),
  [25] = {.count = 1, .reusable = false}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.count = 1, .reusable = true}, SHIFT(15),
  [34] = {.count = 1, .reusable = false}, SHIFT(16),
  [36] = {.count = 1, .reusable = true}, REDUCE(sym_end, 1),
  [38] = {.count = 1, .reusable = true}, REDUCE(sym_name, 1),
  [40] = {.count = 1, .reusable = true}, REDUCE(sym_reserved_name, 1),
  [42] = {.count = 1, .reusable = false}, REDUCE(sym_reserved_name, 1),
  [44] = {.count = 1, .reusable = true}, REDUCE(sym_proc_declaration, 3),
  [46] = {.count = 1, .reusable = true}, SHIFT(19),
  [48] = {.count = 1, .reusable = true}, REDUCE(sym_call, 1),
  [50] = {.count = 1, .reusable = true}, SHIFT(20),
  [52] = {.count = 1, .reusable = true}, SHIFT(21),
  [54] = {.count = 1, .reusable = false}, SHIFT(22),
  [56] = {.count = 1, .reusable = true}, SHIFT(23),
  [58] = {.count = 1, .reusable = true}, SHIFT(25),
  [60] = {.count = 1, .reusable = true}, SHIFT(26),
  [62] = {.count = 1, .reusable = true}, SHIFT(27),
  [64] = {.count = 1, .reusable = true}, SHIFT(28),
  [66] = {.count = 1, .reusable = true}, SHIFT(30),
  [68] = {.count = 1, .reusable = true}, SHIFT(31),
  [70] = {.count = 1, .reusable = true}, SHIFT(34),
  [72] = {.count = 1, .reusable = false}, SHIFT(23),
  [74] = {.count = 1, .reusable = true}, SHIFT(36),
  [76] = {.count = 1, .reusable = true}, SHIFT(35),
  [78] = {.count = 1, .reusable = false}, REDUCE(sym_name, 1),
  [80] = {.count = 1, .reusable = true}, SHIFT(39),
  [82] = {.count = 1, .reusable = true}, SHIFT(40),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym__proc, 3),
  [86] = {.count = 1, .reusable = true}, SHIFT(43),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_par, 3),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_recv, 3),
  [94] = {.count = 1, .reusable = true}, SHIFT(46),
  [96] = {.count = 1, .reusable = true}, SHIFT(47),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_integer, 1),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_integer, 1),
  [102] = {.count = 1, .reusable = true}, SHIFT(48),
  [104] = {.count = 1, .reusable = true}, SHIFT(49),
  [106] = {.count = 1, .reusable = false}, SHIFT(50),
  [108] = {.count = 1, .reusable = true}, SHIFT(51),
  [110] = {.count = 1, .reusable = false}, SHIFT(52),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 1),
  [114] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 1),
  [116] = {.count = 1, .reusable = true}, SHIFT(53),
  [118] = {.count = 1, .reusable = true}, SHIFT(54),
  [120] = {.count = 1, .reusable = true}, SHIFT(56),
  [122] = {.count = 1, .reusable = true}, SHIFT(57),
  [124] = {.count = 1, .reusable = true}, SHIFT(58),
  [126] = {.count = 1, .reusable = false}, SHIFT(59),
  [128] = {.count = 1, .reusable = false}, SHIFT(2),
  [130] = {.count = 1, .reusable = true}, SHIFT(62),
  [132] = {.count = 1, .reusable = true}, SHIFT(63),
  [134] = {.count = 1, .reusable = true}, SHIFT(64),
  [136] = {.count = 1, .reusable = true}, SHIFT(65),
  [138] = {.count = 1, .reusable = true}, SHIFT(67),
  [140] = {.count = 1, .reusable = true}, SHIFT(69),
  [142] = {.count = 1, .reusable = true}, SHIFT(71),
  [144] = {.count = 1, .reusable = true}, SHIFT(72),
  [146] = {.count = 1, .reusable = true}, SHIFT(73),
  [148] = {.count = 1, .reusable = true}, SHIFT(74),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_nu, 5),
  [152] = {.count = 1, .reusable = true}, SHIFT(77),
  [154] = {.count = 1, .reusable = true}, SHIFT(78),
  [156] = {.count = 1, .reusable = true}, SHIFT(79),
  [158] = {.count = 1, .reusable = true}, SHIFT(80),
  [160] = {.count = 1, .reusable = true}, SHIFT(81),
  [162] = {.count = 1, .reusable = true}, SHIFT(82),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_type_end, 1),
  [166] = {.count = 1, .reusable = true}, SHIFT(83),
  [168] = {.count = 1, .reusable = true}, REDUCE(sym_type_call, 1),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym__complex_clauses, 3),
  [172] = {.count = 1, .reusable = true}, SHIFT(85),
  [174] = {.count = 1, .reusable = true}, SHIFT(87),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym_simple_clause, 3),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 3),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym__expr, 3),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_send, 5),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_mul, 3),
  [186] = {.count = 1, .reusable = false}, REDUCE(sym_mul, 3),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_div, 3),
  [190] = {.count = 1, .reusable = false}, REDUCE(sym_div, 3),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [194] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_sub, 3),
  [198] = {.count = 1, .reusable = false}, REDUCE(sym_sub, 3),
  [200] = {.count = 1, .reusable = true}, SHIFT(90),
  [202] = {.count = 1, .reusable = true}, SHIFT(91),
  [204] = {.count = 1, .reusable = true}, SHIFT(92),
  [206] = {.count = 1, .reusable = true}, SHIFT(93),
  [208] = {.count = 1, .reusable = true}, SHIFT(94),
  [210] = {.count = 1, .reusable = true}, SHIFT(96),
  [212] = {.count = 1, .reusable = true}, SHIFT(98),
  [214] = {.count = 1, .reusable = true}, REDUCE(aux_sym__complex_clauses_repeat1, 2),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym__complex_clauses, 4),
  [218] = {.count = 2, .reusable = true}, REDUCE(aux_sym__complex_clauses_repeat1, 2), SHIFT_REPEAT(64),
  [221] = {.count = 1, .reusable = false}, SHIFT(100),
  [223] = {.count = 1, .reusable = true}, SHIFT(101),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_complex_clause, 3),
  [227] = {.count = 1, .reusable = true}, SHIFT(102),
  [229] = {.count = 1, .reusable = true}, SHIFT(103),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym__type, 3),
  [233] = {.count = 1, .reusable = true}, SHIFT(104),
  [235] = {.count = 1, .reusable = true}, SHIFT(105),
  [237] = {.count = 1, .reusable = true}, SHIFT(106),
  [239] = {.count = 1, .reusable = true}, SHIFT(107),
  [241] = {.count = 1, .reusable = true}, SHIFT(108),
  [243] = {.count = 1, .reusable = true}, SHIFT(111),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_nu, 7),
  [247] = {.count = 1, .reusable = true}, SHIFT(117),
  [249] = {.count = 1, .reusable = true}, SHIFT(118),
  [251] = {.count = 1, .reusable = true}, SHIFT(119),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_type_choice, 4),
  [255] = {.count = 1, .reusable = true}, SHIFT(122),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_type_recv, 4),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_type_select, 4),
  [261] = {.count = 1, .reusable = true}, SHIFT(124),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_type_send, 4),
  [265] = {.count = 1, .reusable = true}, SHIFT(125),
  [267] = {.count = 1, .reusable = true}, SHIFT(126),
  [269] = {.count = 1, .reusable = true}, SHIFT(127),
  [271] = {.count = 1, .reusable = true}, SHIFT(128),
  [273] = {.count = 1, .reusable = true}, SHIFT(129),
  [275] = {.count = 1, .reusable = true}, SHIFT(130),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym__type_of_label, 3),
  [279] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_select_repeat1, 2),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_type_choice, 5),
  [283] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_select_repeat1, 2), SHIFT_REPEAT(107),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_type_select, 5),
  [288] = {.count = 1, .reusable = true}, SHIFT(132),
  [290] = {.count = 1, .reusable = true}, SHIFT(133),
  [292] = {.count = 1, .reusable = true}, SHIFT(134),
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
