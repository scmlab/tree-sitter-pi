#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 151
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
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
  anon_sym_LT = 15,
  anon_sym_COMMA = 16,
  anon_sym_GT = 17,
  anon_sym_STAR = 18,
  anon_sym_SLASH = 19,
  anon_sym_PLUS = 20,
  anon_sym_DASH = 21,
  sym_sort_int = 22,
  sym_sort_bool = 23,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH = 24,
  anon_sym_stdin = 25,
  anon_sym_stdout = 26,
  sym_label = 27,
  sym__digit = 28,
  sym_cmd = 29,
  sym_comment = 30,
  sym_program = 31,
  sym_proc_declaration = 32,
  sym__proc = 33,
  sym_par = 34,
  sym_nu = 35,
  sym_recv = 36,
  sym_send = 37,
  sym_end = 38,
  sym_call = 39,
  sym__clauses = 40,
  sym_simple_clause = 41,
  sym__complex_clauses = 42,
  sym_complex_clause = 43,
  sym_pattern = 44,
  sym_pattern_tuple = 45,
  sym__expr = 46,
  sym_tuple = 47,
  sym_mul = 48,
  sym_div = 49,
  sym_add = 50,
  sym_sub = 51,
  sym__term = 52,
  sym_integer = 53,
  sym_variable = 54,
  sym__sort = 55,
  sym__type = 56,
  sym_type_send = 57,
  sym_type_recv = 58,
  sym_type_select = 59,
  sym_type_choice = 60,
  sym_type_end = 61,
  sym_type_call = 62,
  sym__type_of_label = 63,
  sym_process_name = 64,
  sym__name = 65,
  sym_reserved_name = 66,
  sym_name = 67,
  aux_sym_program_repeat1 = 68,
  aux_sym__complex_clauses_repeat1 = 69,
  aux_sym_pattern_tuple_repeat1 = 70,
  aux_sym_tuple_repeat1 = 71,
  aux_sym_type_select_repeat1 = 72,
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
  [anon_sym_LT] = "<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
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
  [sym_pattern_tuple] = "tuple",
  [sym__expr] = "_expr",
  [sym_tuple] = "tuple",
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
  [aux_sym_pattern_tuple_repeat1] = "pattern_tuple_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [sym_pattern_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
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
  [aux_sym_pattern_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_repeat1] = {
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
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '?')
        ADVANCE(19);
      if (lookahead == 'B')
        ADVANCE(20);
      if (lookahead == 'I')
        ADVANCE(26);
      if (lookahead == '\\')
        SKIP(29);
      if (lookahead == 'e')
        ADVANCE(30);
      if (lookahead == 'n')
        ADVANCE(34);
      if (lookahead == 's')
        ADVANCE(36);
      if (lookahead == '{')
        ADVANCE(44);
      if (lookahead == '|')
        ADVANCE(45);
      if (lookahead == '}')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(25);
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
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == '>')
        ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '\'')
        ADVANCE(21);
      if (lookahead == 'o')
        ADVANCE(22);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(25);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\'')
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\'')
        ADVANCE(21);
      if (lookahead == 'o')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\'')
        ADVANCE(21);
      if (lookahead == 'l')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_sort_bool);
      if (lookahead == '\'')
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '\'')
        ADVANCE(21);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '\'')
        ADVANCE(21);
      if (lookahead == 'n')
        ADVANCE(27);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_cmd);
      if (lookahead == '\'')
        ADVANCE(21);
      if (lookahead == 't')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_sort_int);
      if (lookahead == '\'')
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(31);
      if (lookahead == 'n')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(31);
      if (lookahead == 'd')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_end);
      if (lookahead == '\'')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(31);
      if (lookahead == 'u')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_nu);
      if (lookahead == '\'')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(31);
      if (lookahead == 't')
        ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(31);
      if (lookahead == 'd')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(31);
      if (lookahead == 'i')
        ADVANCE(39);
      if (lookahead == 'o')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(31);
      if (lookahead == 'n')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_stdin);
      if (lookahead == '\'')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(31);
      if (lookahead == 'u')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(31);
      if (lookahead == 't')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_stdout);
      if (lookahead == '\'')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(48);
      if (lookahead == '/')
        ADVANCE(49);
      if (lookahead == '\\')
        SKIP(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(47);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == '-')
        ADVANCE(9);
      END_STATE();
    case 49:
      if (lookahead == '/')
        ADVANCE(13);
      END_STATE();
    case 50:
      if (lookahead == 'n')
        SKIP(47);
      END_STATE();
    case 51:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(48);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(49);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '\\')
        SKIP(52);
      if (lookahead == '}')
        ADVANCE(46);
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(48);
      if (lookahead == '/')
        ADVANCE(49);
      if (lookahead == '\\')
        SKIP(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(53);
      END_STATE();
    case 54:
      if (lookahead == 'n')
        SKIP(53);
      END_STATE();
    case 55:
      if (lookahead == '-')
        ADVANCE(48);
      if (lookahead == '/')
        ADVANCE(49);
      if (lookahead == '=')
        ADVANCE(17);
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
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(48);
      if (lookahead == '/')
        ADVANCE(49);
      if (lookahead == '\\')
        SKIP(58);
      if (lookahead == 'e')
        ADVANCE(30);
      if (lookahead == 's')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(57);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 58:
      if (lookahead == 'n')
        SKIP(57);
      END_STATE();
    case 59:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(48);
      if (lookahead == '/')
        ADVANCE(49);
      if (lookahead == '\\')
        SKIP(60);
      if (lookahead == 'e')
        ADVANCE(30);
      if (lookahead == 'n')
        ADVANCE(34);
      if (lookahead == 's')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(59);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 60:
      if (lookahead == 'n')
        SKIP(59);
      END_STATE();
    case 61:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(48);
      if (lookahead == '/')
        ADVANCE(49);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(62);
      if (lookahead == '|')
        ADVANCE(45);
      if (lookahead == '}')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(61);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 62:
      if (lookahead == 'n')
        SKIP(61);
      END_STATE();
    case 63:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(48);
      if (lookahead == '/')
        ADVANCE(49);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '?')
        ADVANCE(19);
      if (lookahead == '\\')
        SKIP(64);
      if (lookahead == '|')
        ADVANCE(45);
      if (lookahead == '}')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(63);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 64:
      if (lookahead == 'n')
        SKIP(63);
      END_STATE();
    case 65:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(66);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '?')
        ADVANCE(19);
      if (lookahead == '\\')
        SKIP(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(9);
      END_STATE();
    case 67:
      if (lookahead == 'n')
        SKIP(65);
      END_STATE();
    case 68:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(48);
      if (lookahead == '/')
        ADVANCE(49);
      if (lookahead == '\\')
        SKIP(69);
      if (lookahead == '|')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(68);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 69:
      if (lookahead == 'n')
        SKIP(68);
      END_STATE();
    case 70:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(48);
      if (lookahead == '/')
        ADVANCE(49);
      if (lookahead == '\\')
        SKIP(71);
      if (lookahead == '|')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(70);
      END_STATE();
    case 71:
      if (lookahead == 'n')
        SKIP(70);
      END_STATE();
    case 72:
      if (lookahead == '-')
        ADVANCE(48);
      if (lookahead == '/')
        ADVANCE(49);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(73);
      if (lookahead == '{')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(72);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(74);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 73:
      if (lookahead == 'n')
        SKIP(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(76);
      if (lookahead == '/')
        ADVANCE(49);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(78);
      if (lookahead == 's')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(75);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(74);
      END_STATE();
    case 76:
      if (lookahead == '-')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == 'n')
        SKIP(75);
      END_STATE();
    case 79:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(18);
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
    case 81:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(48);
      if (lookahead == '/')
        ADVANCE(49);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == '\\')
        SKIP(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(81);
      END_STATE();
    case 82:
      if (lookahead == 'n')
        SKIP(81);
      END_STATE();
    case 83:
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(84);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(49);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '\\')
        SKIP(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(83);
      END_STATE();
    case 84:
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == '>')
        ADVANCE(10);
      END_STATE();
    case 85:
      if (lookahead == 'n')
        SKIP(83);
      END_STATE();
    case 86:
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(66);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(86);
      END_STATE();
    case 87:
      if (lookahead == 'n')
        SKIP(86);
      END_STATE();
    case 88:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(66);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '\\')
        SKIP(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(88);
      END_STATE();
    case 89:
      if (lookahead == 'n')
        SKIP(88);
      END_STATE();
    case 90:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(48);
      if (lookahead == '/')
        ADVANCE(49);
      if (lookahead == '?')
        ADVANCE(19);
      if (lookahead == 'B')
        ADVANCE(91);
      if (lookahead == 'I')
        ADVANCE(95);
      if (lookahead == '\\')
        SKIP(98);
      if (lookahead == 'e')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(90);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 91:
      if (lookahead == 'o')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'o')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'l')
        ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_sort_bool);
      END_STATE();
    case 95:
      if (lookahead == 'n')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 't')
        ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_sort_int);
      END_STATE();
    case 98:
      if (lookahead == 'n')
        SKIP(90);
      END_STATE();
    case 99:
      if (lookahead == '-')
        ADVANCE(48);
      if (lookahead == '/')
        ADVANCE(49);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(100);
      if (lookahead == '|')
        ADVANCE(45);
      if (lookahead == '}')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(99);
      END_STATE();
    case 100:
      if (lookahead == 'n')
        SKIP(99);
      END_STATE();
    case 101:
      if (lookahead == '-')
        ADVANCE(84);
      if (lookahead == '/')
        ADVANCE(49);
      if (lookahead == '\\')
        SKIP(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(101);
      END_STATE();
    case 102:
      if (lookahead == 'n')
        SKIP(101);
      END_STATE();
    case 103:
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(66);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '\\')
        SKIP(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(103);
      END_STATE();
    case 104:
      if (lookahead == 'n')
        SKIP(103);
      END_STATE();
    case 105:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(66);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(105);
      END_STATE();
    case 106:
      if (lookahead == 'n')
        SKIP(105);
      END_STATE();
    case 107:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(48);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(49);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(108);
      if (lookahead == '}')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(107);
      END_STATE();
    case 108:
      if (lookahead == 'n')
        SKIP(107);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 47},
  [2] = {.lex_state = 51},
  [3] = {.lex_state = 53},
  [4] = {.lex_state = 55},
  [5] = {.lex_state = 47},
  [6] = {.lex_state = 57},
  [7] = {.lex_state = 47},
  [8] = {.lex_state = 59},
  [9] = {.lex_state = 61},
  [10] = {.lex_state = 63},
  [11] = {.lex_state = 65},
  [12] = {.lex_state = 68},
  [13] = {.lex_state = 61},
  [14] = {.lex_state = 63},
  [15] = {.lex_state = 59},
  [16] = {.lex_state = 47},
  [17] = {.lex_state = 70},
  [18] = {.lex_state = 63},
  [19] = {.lex_state = 57},
  [20] = {.lex_state = 72},
  [21] = {.lex_state = 75},
  [22] = {.lex_state = 47},
  [23] = {.lex_state = 79},
  [24] = {.lex_state = 81},
  [25] = {.lex_state = 61},
  [26] = {.lex_state = 57},
  [27] = {.lex_state = 72},
  [28] = {.lex_state = 75},
  [29] = {.lex_state = 68},
  [30] = {.lex_state = 72},
  [31] = {.lex_state = 72},
  [32] = {.lex_state = 83},
  [33] = {.lex_state = 61},
  [34] = {.lex_state = 86},
  [35] = {.lex_state = 75},
  [36] = {.lex_state = 75},
  [37] = {.lex_state = 88},
  [38] = {.lex_state = 86},
  [39] = {.lex_state = 88},
  [40] = {.lex_state = 81},
  [41] = {.lex_state = 57},
  [42] = {.lex_state = 90},
  [43] = {.lex_state = 70},
  [44] = {.lex_state = 86},
  [45] = {.lex_state = 86},
  [46] = {.lex_state = 99},
  [47] = {.lex_state = 101},
  [48] = {.lex_state = 103},
  [49] = {.lex_state = 57},
  [50] = {.lex_state = 105},
  [51] = {.lex_state = 103},
  [52] = {.lex_state = 57},
  [53] = {.lex_state = 75},
  [54] = {.lex_state = 75},
  [55] = {.lex_state = 75},
  [56] = {.lex_state = 75},
  [57] = {.lex_state = 57},
  [58] = {.lex_state = 90},
  [59] = {.lex_state = 61},
  [60] = {.lex_state = 90},
  [61] = {.lex_state = 90},
  [62] = {.lex_state = 90},
  [63] = {.lex_state = 107},
  [64] = {.lex_state = 70},
  [65] = {.lex_state = 107},
  [66] = {.lex_state = 57},
  [67] = {.lex_state = 57},
  [68] = {.lex_state = 72},
  [69] = {.lex_state = 61},
  [70] = {.lex_state = 99},
  [71] = {.lex_state = 57},
  [72] = {.lex_state = 72},
  [73] = {.lex_state = 83},
  [74] = {.lex_state = 103},
  [75] = {.lex_state = 61},
  [76] = {.lex_state = 88},
  [77] = {.lex_state = 75},
  [78] = {.lex_state = 88},
  [79] = {.lex_state = 103},
  [80] = {.lex_state = 61},
  [81] = {.lex_state = 88},
  [82] = {.lex_state = 88},
  [83] = {.lex_state = 88},
  [84] = {.lex_state = 88},
  [85] = {.lex_state = 70},
  [86] = {.lex_state = 70},
  [87] = {.lex_state = 90},
  [88] = {.lex_state = 90},
  [89] = {.lex_state = 72},
  [90] = {.lex_state = 86},
  [91] = {.lex_state = 72},
  [92] = {.lex_state = 86},
  [93] = {.lex_state = 57},
  [94] = {.lex_state = 99},
  [95] = {.lex_state = 61},
  [96] = {.lex_state = 99},
  [97] = {.lex_state = 59},
  [98] = {.lex_state = 99},
  [99] = {.lex_state = 63},
  [100] = {.lex_state = 103},
  [101] = {.lex_state = 83},
  [102] = {.lex_state = 103},
  [103] = {.lex_state = 103},
  [104] = {.lex_state = 88},
  [105] = {.lex_state = 103},
  [106] = {.lex_state = 57},
  [107] = {.lex_state = 107},
  [108] = {.lex_state = 86},
  [109] = {.lex_state = 86},
  [110] = {.lex_state = 81},
  [111] = {.lex_state = 99},
  [112] = {.lex_state = 90},
  [113] = {.lex_state = 99},
  [114] = {.lex_state = 90},
  [115] = {.lex_state = 61},
  [116] = {.lex_state = 47},
  [117] = {.lex_state = 57},
  [118] = {.lex_state = 72},
  [119] = {.lex_state = 75},
  [120] = {.lex_state = 90},
  [121] = {.lex_state = 90},
  [122] = {.lex_state = 90},
  [123] = {.lex_state = 72},
  [124] = {.lex_state = 107},
  [125] = {.lex_state = 99},
  [126] = {.lex_state = 107},
  [127] = {.lex_state = 107},
  [128] = {.lex_state = 99},
  [129] = {.lex_state = 107},
  [130] = {.lex_state = 81},
  [131] = {.lex_state = 99},
  [132] = {.lex_state = 86},
  [133] = {.lex_state = 86},
  [134] = {.lex_state = 90},
  [135] = {.lex_state = 90},
  [136] = {.lex_state = 99},
  [137] = {.lex_state = 99},
  [138] = {.lex_state = 107},
  [139] = {.lex_state = 99},
  [140] = {.lex_state = 107},
  [141] = {.lex_state = 57},
  [142] = {.lex_state = 90},
  [143] = {.lex_state = 57},
  [144] = {.lex_state = 57},
  [145] = {.lex_state = 86},
  [146] = {.lex_state = 86},
  [147] = {.lex_state = 70},
  [148] = {.lex_state = 90},
  [149] = {.lex_state = 90},
  [150] = {.lex_state = 57},
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
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
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
    [anon_sym_COMMA] = ACTIONS(40),
    [anon_sym_GT] = ACTIONS(40),
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
    [sym__clauses] = STATE(33),
    [sym_simple_clause] = STATE(33),
    [sym__complex_clauses] = STATE(33),
    [sym_pattern] = STATE(34),
    [sym_pattern_tuple] = STATE(32),
    [sym_name] = STATE(32),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LT] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [sym_label] = ACTIONS(70),
    [sym_comment] = ACTIONS(9),
  },
  [21] = {
    [sym__expr] = STATE(38),
    [sym_tuple] = STATE(38),
    [sym_mul] = STATE(38),
    [sym_div] = STATE(38),
    [sym_add] = STATE(38),
    [sym_sub] = STATE(38),
    [sym__term] = STATE(38),
    [sym_integer] = STATE(38),
    [sym_variable] = STATE(38),
    [sym__name] = STATE(39),
    [sym_reserved_name] = STATE(39),
    [sym_name] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(78),
    [sym__digit] = ACTIONS(80),
    [sym_comment] = ACTIONS(9),
  },
  [22] = {
    [sym_name] = STATE(40),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [sym_comment] = ACTIONS(9),
  },
  [23] = {
    [anon_sym_RPAREN] = ACTIONS(38),
    [anon_sym_COLON] = ACTIONS(38),
    [anon_sym_DOT] = ACTIONS(38),
    [anon_sym_DASH_GT] = ACTIONS(38),
    [anon_sym_COMMA] = ACTIONS(38),
    [anon_sym_GT] = ACTIONS(38),
    [anon_sym_STAR] = ACTIONS(38),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(38),
    [anon_sym_DASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(9),
  },
  [24] = {
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_COLON] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_RPAREN] = ACTIONS(88),
    [anon_sym_PIPE] = ACTIONS(88),
    [anon_sym_SEMI] = ACTIONS(88),
    [anon_sym_RBRACE] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_comment] = ACTIONS(9),
  },
  [26] = {
    [sym__proc] = STATE(43),
    [sym_par] = STATE(43),
    [sym_nu] = STATE(43),
    [sym_recv] = STATE(43),
    [sym_send] = STATE(43),
    [sym_end] = STATE(43),
    [sym_call] = STATE(43),
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
    [sym__clauses] = STATE(33),
    [sym_simple_clause] = STATE(33),
    [sym__complex_clauses] = STATE(33),
    [sym_pattern] = STATE(44),
    [sym_pattern_tuple] = STATE(32),
    [sym_name] = STATE(32),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LT] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [sym_label] = ACTIONS(70),
    [sym_comment] = ACTIONS(9),
  },
  [28] = {
    [sym__expr] = STATE(45),
    [sym_tuple] = STATE(45),
    [sym_mul] = STATE(45),
    [sym_div] = STATE(45),
    [sym_add] = STATE(45),
    [sym_sub] = STATE(45),
    [sym__term] = STATE(45),
    [sym_integer] = STATE(45),
    [sym_variable] = STATE(45),
    [sym__name] = STATE(39),
    [sym_reserved_name] = STATE(39),
    [sym_name] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(90),
    [sym__digit] = ACTIONS(80),
    [sym_comment] = ACTIONS(9),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [30] = {
    [sym_complex_clause] = STATE(46),
    [sym_pattern] = STATE(47),
    [sym_pattern_tuple] = STATE(32),
    [sym_name] = STATE(32),
    [anon_sym_LT] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [sym_label] = ACTIONS(70),
    [sym_comment] = ACTIONS(9),
  },
  [31] = {
    [sym_pattern] = STATE(48),
    [sym_pattern_tuple] = STATE(32),
    [sym_name] = STATE(32),
    [anon_sym_LT] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [sym_label] = ACTIONS(70),
    [sym_comment] = ACTIONS(9),
  },
  [32] = {
    [anon_sym_DOT] = ACTIONS(94),
    [anon_sym_DASH_GT] = ACTIONS(94),
    [anon_sym_COMMA] = ACTIONS(94),
    [anon_sym_GT] = ACTIONS(94),
    [sym_comment] = ACTIONS(9),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(96),
    [anon_sym_RBRACE] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(96),
    [sym_comment] = ACTIONS(9),
  },
  [34] = {
    [anon_sym_DOT] = ACTIONS(98),
    [sym_comment] = ACTIONS(9),
  },
  [35] = {
    [sym__expr] = STATE(50),
    [sym_tuple] = STATE(50),
    [sym_mul] = STATE(50),
    [sym_div] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym__term] = STATE(50),
    [sym_integer] = STATE(50),
    [sym_variable] = STATE(50),
    [sym__name] = STATE(39),
    [sym_reserved_name] = STATE(39),
    [sym_name] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(100),
    [sym__digit] = ACTIONS(80),
    [sym_comment] = ACTIONS(9),
  },
  [36] = {
    [sym__expr] = STATE(51),
    [sym_tuple] = STATE(51),
    [sym_mul] = STATE(51),
    [sym_div] = STATE(51),
    [sym_add] = STATE(51),
    [sym_sub] = STATE(51),
    [sym__term] = STATE(51),
    [sym_integer] = STATE(51),
    [sym_variable] = STATE(51),
    [sym__name] = STATE(39),
    [sym_reserved_name] = STATE(39),
    [sym_name] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(102),
    [sym__digit] = ACTIONS(80),
    [sym_comment] = ACTIONS(9),
  },
  [37] = {
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_DOT] = ACTIONS(104),
    [anon_sym_COMMA] = ACTIONS(104),
    [anon_sym_GT] = ACTIONS(104),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(9),
  },
  [38] = {
    [anon_sym_DOT] = ACTIONS(108),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(9),
  },
  [39] = {
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_DOT] = ACTIONS(118),
    [anon_sym_COMMA] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(118),
    [anon_sym_STAR] = ACTIONS(118),
    [anon_sym_SLASH] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(120),
    [sym_comment] = ACTIONS(9),
  },
  [40] = {
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(124),
    [sym_comment] = ACTIONS(9),
  },
  [41] = {
    [sym__proc] = STATE(59),
    [sym_par] = STATE(59),
    [sym_nu] = STATE(59),
    [sym_recv] = STATE(59),
    [sym_send] = STATE(59),
    [sym_end] = STATE(59),
    [sym_call] = STATE(59),
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
  [42] = {
    [sym__type] = STATE(64),
    [sym_type_send] = STATE(64),
    [sym_type_recv] = STATE(64),
    [sym_type_select] = STATE(64),
    [sym_type_choice] = STATE(64),
    [sym_type_end] = STATE(64),
    [sym_type_call] = STATE(64),
    [sym_process_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_BANG] = ACTIONS(130),
    [aux_sym_end] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(134),
    [sym_comment] = ACTIONS(9),
  },
  [43] = {
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(60),
    [sym_comment] = ACTIONS(9),
  },
  [44] = {
    [anon_sym_DOT] = ACTIONS(136),
    [sym_comment] = ACTIONS(9),
  },
  [45] = {
    [anon_sym_DOT] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(9),
  },
  [46] = {
    [aux_sym__complex_clauses_repeat1] = STATE(70),
    [anon_sym_SEMI] = ACTIONS(140),
    [anon_sym_RBRACE] = ACTIONS(142),
    [sym_comment] = ACTIONS(9),
  },
  [47] = {
    [anon_sym_DASH_GT] = ACTIONS(144),
    [sym_comment] = ACTIONS(9),
  },
  [48] = {
    [aux_sym_pattern_tuple_repeat1] = STATE(74),
    [anon_sym_COMMA] = ACTIONS(146),
    [anon_sym_GT] = ACTIONS(148),
    [sym_comment] = ACTIONS(9),
  },
  [49] = {
    [sym__proc] = STATE(75),
    [sym_par] = STATE(75),
    [sym_nu] = STATE(75),
    [sym_recv] = STATE(75),
    [sym_send] = STATE(75),
    [sym_end] = STATE(75),
    [sym_call] = STATE(75),
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
  [50] = {
    [anon_sym_RPAREN] = ACTIONS(150),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(9),
  },
  [51] = {
    [aux_sym_tuple_repeat1] = STATE(79),
    [anon_sym_COMMA] = ACTIONS(152),
    [anon_sym_GT] = ACTIONS(154),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(9),
  },
  [52] = {
    [sym__proc] = STATE(80),
    [sym_par] = STATE(80),
    [sym_nu] = STATE(80),
    [sym_recv] = STATE(80),
    [sym_send] = STATE(80),
    [sym_end] = STATE(80),
    [sym_call] = STATE(80),
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
  [53] = {
    [sym__expr] = STATE(81),
    [sym_tuple] = STATE(81),
    [sym_mul] = STATE(81),
    [sym_div] = STATE(81),
    [sym_add] = STATE(81),
    [sym_sub] = STATE(81),
    [sym__term] = STATE(81),
    [sym_integer] = STATE(81),
    [sym_variable] = STATE(81),
    [sym__name] = STATE(39),
    [sym_reserved_name] = STATE(39),
    [sym_name] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(156),
    [sym__digit] = ACTIONS(80),
    [sym_comment] = ACTIONS(9),
  },
  [54] = {
    [sym__expr] = STATE(82),
    [sym_tuple] = STATE(82),
    [sym_mul] = STATE(82),
    [sym_div] = STATE(82),
    [sym_add] = STATE(82),
    [sym_sub] = STATE(82),
    [sym__term] = STATE(82),
    [sym_integer] = STATE(82),
    [sym_variable] = STATE(82),
    [sym__name] = STATE(39),
    [sym_reserved_name] = STATE(39),
    [sym_name] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(158),
    [sym__digit] = ACTIONS(80),
    [sym_comment] = ACTIONS(9),
  },
  [55] = {
    [sym__expr] = STATE(83),
    [sym_tuple] = STATE(83),
    [sym_mul] = STATE(83),
    [sym_div] = STATE(83),
    [sym_add] = STATE(83),
    [sym_sub] = STATE(83),
    [sym__term] = STATE(83),
    [sym_integer] = STATE(83),
    [sym_variable] = STATE(83),
    [sym__name] = STATE(39),
    [sym_reserved_name] = STATE(39),
    [sym_name] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(160),
    [sym__digit] = ACTIONS(80),
    [sym_comment] = ACTIONS(9),
  },
  [56] = {
    [sym__expr] = STATE(84),
    [sym_tuple] = STATE(84),
    [sym_mul] = STATE(84),
    [sym_div] = STATE(84),
    [sym_add] = STATE(84),
    [sym_sub] = STATE(84),
    [sym__term] = STATE(84),
    [sym_integer] = STATE(84),
    [sym_variable] = STATE(84),
    [sym__name] = STATE(39),
    [sym_reserved_name] = STATE(39),
    [sym_name] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(162),
    [sym__digit] = ACTIONS(80),
    [sym_comment] = ACTIONS(9),
  },
  [57] = {
    [sym__proc] = STATE(59),
    [sym_par] = STATE(59),
    [sym_nu] = STATE(59),
    [sym_recv] = STATE(59),
    [sym_send] = STATE(59),
    [sym_end] = STATE(59),
    [sym_call] = STATE(59),
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
  [58] = {
    [sym__type] = STATE(85),
    [sym_type_send] = STATE(85),
    [sym_type_recv] = STATE(85),
    [sym_type_select] = STATE(85),
    [sym_type_choice] = STATE(85),
    [sym_type_end] = STATE(85),
    [sym_type_call] = STATE(85),
    [sym_process_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_BANG] = ACTIONS(130),
    [aux_sym_end] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(134),
    [sym_comment] = ACTIONS(9),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_PIPE] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(164),
    [sym_comment] = ACTIONS(9),
  },
  [60] = {
    [sym__type] = STATE(86),
    [sym_type_send] = STATE(86),
    [sym_type_recv] = STATE(86),
    [sym_type_select] = STATE(86),
    [sym_type_choice] = STATE(86),
    [sym_type_end] = STATE(86),
    [sym_type_call] = STATE(86),
    [sym_process_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_BANG] = ACTIONS(130),
    [aux_sym_end] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(134),
    [sym_comment] = ACTIONS(9),
  },
  [61] = {
    [sym__sort] = STATE(90),
    [sym__type] = STATE(90),
    [sym_type_send] = STATE(90),
    [sym_type_recv] = STATE(90),
    [sym_type_select] = STATE(90),
    [sym_type_choice] = STATE(90),
    [sym_type_end] = STATE(90),
    [sym_type_call] = STATE(90),
    [sym_process_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(166),
    [anon_sym_BANG] = ACTIONS(168),
    [aux_sym_end] = ACTIONS(132),
    [anon_sym_LBRACE] = ACTIONS(170),
    [sym_sort_int] = ACTIONS(172),
    [sym_sort_bool] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(134),
    [sym_comment] = ACTIONS(9),
  },
  [62] = {
    [sym__sort] = STATE(92),
    [sym__type] = STATE(92),
    [sym_type_send] = STATE(92),
    [sym_type_recv] = STATE(92),
    [sym_type_select] = STATE(92),
    [sym_type_choice] = STATE(92),
    [sym_type_end] = STATE(92),
    [sym_type_call] = STATE(92),
    [sym_process_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(166),
    [anon_sym_BANG] = ACTIONS(168),
    [aux_sym_end] = ACTIONS(132),
    [anon_sym_LBRACE] = ACTIONS(174),
    [sym_sort_int] = ACTIONS(176),
    [sym_sort_bool] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(134),
    [sym_comment] = ACTIONS(9),
  },
  [63] = {
    [anon_sym_RPAREN] = ACTIONS(178),
    [anon_sym_DOT] = ACTIONS(178),
    [anon_sym_SEMI] = ACTIONS(178),
    [anon_sym_RBRACE] = ACTIONS(178),
    [sym_comment] = ACTIONS(9),
  },
  [64] = {
    [anon_sym_RPAREN] = ACTIONS(180),
    [sym_comment] = ACTIONS(9),
  },
  [65] = {
    [anon_sym_RPAREN] = ACTIONS(182),
    [anon_sym_DOT] = ACTIONS(182),
    [anon_sym_SEMI] = ACTIONS(182),
    [anon_sym_RBRACE] = ACTIONS(182),
    [sym_comment] = ACTIONS(9),
  },
  [66] = {
    [sym__proc] = STATE(75),
    [sym_par] = STATE(75),
    [sym_nu] = STATE(75),
    [sym_recv] = STATE(75),
    [sym_send] = STATE(75),
    [sym_end] = STATE(75),
    [sym_call] = STATE(75),
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
  [67] = {
    [sym__proc] = STATE(80),
    [sym_par] = STATE(80),
    [sym_nu] = STATE(80),
    [sym_recv] = STATE(80),
    [sym_send] = STATE(80),
    [sym_end] = STATE(80),
    [sym_call] = STATE(80),
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
  [68] = {
    [sym_complex_clause] = STATE(94),
    [sym_pattern] = STATE(47),
    [sym_pattern_tuple] = STATE(32),
    [sym_name] = STATE(32),
    [anon_sym_LT] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [sym_label] = ACTIONS(70),
    [sym_comment] = ACTIONS(9),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_PIPE] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(184),
    [anon_sym_RBRACE] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(184),
    [sym_comment] = ACTIONS(9),
  },
  [70] = {
    [aux_sym__complex_clauses_repeat1] = STATE(96),
    [anon_sym_SEMI] = ACTIONS(140),
    [anon_sym_RBRACE] = ACTIONS(186),
    [sym_comment] = ACTIONS(9),
  },
  [71] = {
    [sym__proc] = STATE(98),
    [sym_par] = STATE(98),
    [sym_nu] = STATE(98),
    [sym_recv] = STATE(98),
    [sym_send] = STATE(98),
    [sym_end] = STATE(98),
    [sym_call] = STATE(98),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(99),
    [sym_reserved_name] = STATE(99),
    [sym_name] = STATE(99),
    [anon_sym_LPAREN] = ACTIONS(188),
    [aux_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [72] = {
    [sym_pattern] = STATE(100),
    [sym_pattern_tuple] = STATE(32),
    [sym_name] = STATE(32),
    [anon_sym_LT] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [sym_label] = ACTIONS(70),
    [sym_comment] = ACTIONS(9),
  },
  [73] = {
    [anon_sym_DOT] = ACTIONS(190),
    [anon_sym_DASH_GT] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(190),
    [anon_sym_GT] = ACTIONS(190),
    [sym_comment] = ACTIONS(9),
  },
  [74] = {
    [aux_sym_pattern_tuple_repeat1] = STATE(102),
    [anon_sym_COMMA] = ACTIONS(146),
    [anon_sym_GT] = ACTIONS(192),
    [sym_comment] = ACTIONS(9),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(194),
    [anon_sym_PIPE] = ACTIONS(194),
    [anon_sym_SEMI] = ACTIONS(194),
    [anon_sym_RBRACE] = ACTIONS(194),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(194),
    [sym_comment] = ACTIONS(9),
  },
  [76] = {
    [anon_sym_RPAREN] = ACTIONS(196),
    [anon_sym_DOT] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(196),
    [anon_sym_STAR] = ACTIONS(196),
    [anon_sym_SLASH] = ACTIONS(198),
    [anon_sym_PLUS] = ACTIONS(196),
    [anon_sym_DASH] = ACTIONS(198),
    [sym_comment] = ACTIONS(9),
  },
  [77] = {
    [sym__expr] = STATE(103),
    [sym_tuple] = STATE(103),
    [sym_mul] = STATE(103),
    [sym_div] = STATE(103),
    [sym_add] = STATE(103),
    [sym_sub] = STATE(103),
    [sym__term] = STATE(103),
    [sym_integer] = STATE(103),
    [sym_variable] = STATE(103),
    [sym__name] = STATE(39),
    [sym_reserved_name] = STATE(39),
    [sym_name] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(200),
    [sym__digit] = ACTIONS(80),
    [sym_comment] = ACTIONS(9),
  },
  [78] = {
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_DOT] = ACTIONS(202),
    [anon_sym_COMMA] = ACTIONS(202),
    [anon_sym_GT] = ACTIONS(202),
    [anon_sym_STAR] = ACTIONS(202),
    [anon_sym_SLASH] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(204),
    [sym_comment] = ACTIONS(9),
  },
  [79] = {
    [aux_sym_tuple_repeat1] = STATE(105),
    [anon_sym_COMMA] = ACTIONS(152),
    [anon_sym_GT] = ACTIONS(206),
    [sym_comment] = ACTIONS(9),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(208),
    [anon_sym_RPAREN] = ACTIONS(208),
    [anon_sym_PIPE] = ACTIONS(208),
    [anon_sym_SEMI] = ACTIONS(208),
    [anon_sym_RBRACE] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(208),
    [sym_comment] = ACTIONS(9),
  },
  [81] = {
    [anon_sym_RPAREN] = ACTIONS(210),
    [anon_sym_DOT] = ACTIONS(210),
    [anon_sym_COMMA] = ACTIONS(210),
    [anon_sym_GT] = ACTIONS(210),
    [anon_sym_STAR] = ACTIONS(210),
    [anon_sym_SLASH] = ACTIONS(212),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(212),
    [sym_comment] = ACTIONS(9),
  },
  [82] = {
    [anon_sym_RPAREN] = ACTIONS(214),
    [anon_sym_DOT] = ACTIONS(214),
    [anon_sym_COMMA] = ACTIONS(214),
    [anon_sym_GT] = ACTIONS(214),
    [anon_sym_STAR] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(216),
    [sym_comment] = ACTIONS(9),
  },
  [83] = {
    [anon_sym_RPAREN] = ACTIONS(218),
    [anon_sym_DOT] = ACTIONS(218),
    [anon_sym_COMMA] = ACTIONS(218),
    [anon_sym_GT] = ACTIONS(218),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(220),
    [sym_comment] = ACTIONS(9),
  },
  [84] = {
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_DOT] = ACTIONS(222),
    [anon_sym_COMMA] = ACTIONS(222),
    [anon_sym_GT] = ACTIONS(222),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(224),
    [sym_comment] = ACTIONS(9),
  },
  [85] = {
    [anon_sym_RPAREN] = ACTIONS(226),
    [sym_comment] = ACTIONS(9),
  },
  [86] = {
    [anon_sym_RPAREN] = ACTIONS(228),
    [sym_comment] = ACTIONS(9),
  },
  [87] = {
    [sym__sort] = STATE(108),
    [sym__type] = STATE(108),
    [sym_type_send] = STATE(108),
    [sym_type_recv] = STATE(108),
    [sym_type_select] = STATE(108),
    [sym_type_choice] = STATE(108),
    [sym_type_end] = STATE(108),
    [sym_type_call] = STATE(108),
    [sym_process_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(166),
    [anon_sym_BANG] = ACTIONS(168),
    [aux_sym_end] = ACTIONS(132),
    [anon_sym_LBRACE] = ACTIONS(170),
    [sym_sort_int] = ACTIONS(230),
    [sym_sort_bool] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(134),
    [sym_comment] = ACTIONS(9),
  },
  [88] = {
    [sym__sort] = STATE(109),
    [sym__type] = STATE(109),
    [sym_type_send] = STATE(109),
    [sym_type_recv] = STATE(109),
    [sym_type_select] = STATE(109),
    [sym_type_choice] = STATE(109),
    [sym_type_end] = STATE(109),
    [sym_type_call] = STATE(109),
    [sym_process_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(166),
    [anon_sym_BANG] = ACTIONS(168),
    [aux_sym_end] = ACTIONS(132),
    [anon_sym_LBRACE] = ACTIONS(174),
    [sym_sort_int] = ACTIONS(232),
    [sym_sort_bool] = ACTIONS(232),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(134),
    [sym_comment] = ACTIONS(9),
  },
  [89] = {
    [sym__type_of_label] = STATE(111),
    [sym_label] = ACTIONS(234),
    [sym_comment] = ACTIONS(9),
  },
  [90] = {
    [anon_sym_DOT] = ACTIONS(236),
    [sym_comment] = ACTIONS(9),
  },
  [91] = {
    [sym__type_of_label] = STATE(113),
    [sym_label] = ACTIONS(234),
    [sym_comment] = ACTIONS(9),
  },
  [92] = {
    [anon_sym_DOT] = ACTIONS(238),
    [sym_comment] = ACTIONS(9),
  },
  [93] = {
    [sym__proc] = STATE(115),
    [sym_par] = STATE(115),
    [sym_nu] = STATE(115),
    [sym_recv] = STATE(115),
    [sym_send] = STATE(115),
    [sym_end] = STATE(115),
    [sym_call] = STATE(115),
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
  [94] = {
    [anon_sym_SEMI] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(240),
    [sym_comment] = ACTIONS(9),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(242),
    [anon_sym_RPAREN] = ACTIONS(242),
    [anon_sym_PIPE] = ACTIONS(242),
    [anon_sym_SEMI] = ACTIONS(242),
    [anon_sym_RBRACE] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(242),
    [sym_comment] = ACTIONS(9),
  },
  [96] = {
    [aux_sym__complex_clauses_repeat1] = STATE(96),
    [anon_sym_SEMI] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(240),
    [sym_comment] = ACTIONS(9),
  },
  [97] = {
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
    [anon_sym_nu] = ACTIONS(247),
    [aux_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [98] = {
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_RBRACE] = ACTIONS(251),
    [sym_comment] = ACTIONS(9),
  },
  [99] = {
    [anon_sym_QMARK] = ACTIONS(253),
    [anon_sym_BANG] = ACTIONS(255),
    [sym_comment] = ACTIONS(9),
  },
  [100] = {
    [anon_sym_COMMA] = ACTIONS(257),
    [anon_sym_GT] = ACTIONS(257),
    [sym_comment] = ACTIONS(9),
  },
  [101] = {
    [anon_sym_DOT] = ACTIONS(259),
    [anon_sym_DASH_GT] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_GT] = ACTIONS(259),
    [sym_comment] = ACTIONS(9),
  },
  [102] = {
    [aux_sym_pattern_tuple_repeat1] = STATE(102),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_GT] = ACTIONS(257),
    [sym_comment] = ACTIONS(9),
  },
  [103] = {
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_GT] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(9),
  },
  [104] = {
    [anon_sym_RPAREN] = ACTIONS(266),
    [anon_sym_DOT] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(266),
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(268),
    [anon_sym_PLUS] = ACTIONS(266),
    [anon_sym_DASH] = ACTIONS(268),
    [sym_comment] = ACTIONS(9),
  },
  [105] = {
    [aux_sym_tuple_repeat1] = STATE(105),
    [anon_sym_COMMA] = ACTIONS(270),
    [anon_sym_GT] = ACTIONS(264),
    [sym_comment] = ACTIONS(9),
  },
  [106] = {
    [sym__proc] = STATE(115),
    [sym_par] = STATE(115),
    [sym_nu] = STATE(115),
    [sym_recv] = STATE(115),
    [sym_send] = STATE(115),
    [sym_end] = STATE(115),
    [sym_call] = STATE(115),
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
  [107] = {
    [anon_sym_RPAREN] = ACTIONS(273),
    [anon_sym_DOT] = ACTIONS(273),
    [anon_sym_SEMI] = ACTIONS(273),
    [anon_sym_RBRACE] = ACTIONS(273),
    [sym_comment] = ACTIONS(9),
  },
  [108] = {
    [anon_sym_DOT] = ACTIONS(275),
    [sym_comment] = ACTIONS(9),
  },
  [109] = {
    [anon_sym_DOT] = ACTIONS(277),
    [sym_comment] = ACTIONS(9),
  },
  [110] = {
    [anon_sym_COLON] = ACTIONS(279),
    [sym_comment] = ACTIONS(9),
  },
  [111] = {
    [aux_sym_type_select_repeat1] = STATE(125),
    [anon_sym_SEMI] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(283),
    [sym_comment] = ACTIONS(9),
  },
  [112] = {
    [sym__type] = STATE(126),
    [sym_type_send] = STATE(126),
    [sym_type_recv] = STATE(126),
    [sym_type_select] = STATE(126),
    [sym_type_choice] = STATE(126),
    [sym_type_end] = STATE(126),
    [sym_type_call] = STATE(126),
    [sym_process_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_BANG] = ACTIONS(130),
    [aux_sym_end] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(134),
    [sym_comment] = ACTIONS(9),
  },
  [113] = {
    [aux_sym_type_select_repeat1] = STATE(128),
    [anon_sym_SEMI] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(9),
  },
  [114] = {
    [sym__type] = STATE(129),
    [sym_type_send] = STATE(129),
    [sym_type_recv] = STATE(129),
    [sym_type_select] = STATE(129),
    [sym_type_choice] = STATE(129),
    [sym_type_end] = STATE(129),
    [sym_type_call] = STATE(129),
    [sym_process_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_BANG] = ACTIONS(130),
    [aux_sym_end] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(134),
    [sym_comment] = ACTIONS(9),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_PIPE] = ACTIONS(287),
    [anon_sym_SEMI] = ACTIONS(287),
    [anon_sym_RBRACE] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(287),
    [sym_comment] = ACTIONS(9),
  },
  [116] = {
    [sym_name] = STATE(130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [sym_comment] = ACTIONS(9),
  },
  [117] = {
    [sym__proc] = STATE(131),
    [sym_par] = STATE(131),
    [sym_nu] = STATE(131),
    [sym_recv] = STATE(131),
    [sym_send] = STATE(131),
    [sym_end] = STATE(131),
    [sym_call] = STATE(131),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(99),
    [sym_reserved_name] = STATE(99),
    [sym_name] = STATE(99),
    [anon_sym_LPAREN] = ACTIONS(188),
    [aux_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [118] = {
    [sym__clauses] = STATE(33),
    [sym_simple_clause] = STATE(33),
    [sym__complex_clauses] = STATE(33),
    [sym_pattern] = STATE(132),
    [sym_pattern_tuple] = STATE(32),
    [sym_name] = STATE(32),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_LT] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [sym_label] = ACTIONS(70),
    [sym_comment] = ACTIONS(9),
  },
  [119] = {
    [sym__expr] = STATE(133),
    [sym_tuple] = STATE(133),
    [sym_mul] = STATE(133),
    [sym_div] = STATE(133),
    [sym_add] = STATE(133),
    [sym_sub] = STATE(133),
    [sym__term] = STATE(133),
    [sym_integer] = STATE(133),
    [sym_variable] = STATE(133),
    [sym__name] = STATE(39),
    [sym_reserved_name] = STATE(39),
    [sym_name] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_label] = ACTIONS(289),
    [sym__digit] = ACTIONS(80),
    [sym_comment] = ACTIONS(9),
  },
  [120] = {
    [sym__type] = STATE(126),
    [sym_type_send] = STATE(126),
    [sym_type_recv] = STATE(126),
    [sym_type_select] = STATE(126),
    [sym_type_choice] = STATE(126),
    [sym_type_end] = STATE(126),
    [sym_type_call] = STATE(126),
    [sym_process_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(166),
    [anon_sym_BANG] = ACTIONS(168),
    [aux_sym_end] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(134),
    [sym_comment] = ACTIONS(9),
  },
  [121] = {
    [sym__type] = STATE(129),
    [sym_type_send] = STATE(129),
    [sym_type_recv] = STATE(129),
    [sym_type_select] = STATE(129),
    [sym_type_choice] = STATE(129),
    [sym_type_end] = STATE(129),
    [sym_type_call] = STATE(129),
    [sym_process_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(166),
    [anon_sym_BANG] = ACTIONS(168),
    [aux_sym_end] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(134),
    [sym_comment] = ACTIONS(9),
  },
  [122] = {
    [sym__type] = STATE(136),
    [sym_type_send] = STATE(136),
    [sym_type_recv] = STATE(136),
    [sym_type_select] = STATE(136),
    [sym_type_choice] = STATE(136),
    [sym_type_end] = STATE(136),
    [sym_type_call] = STATE(136),
    [sym_process_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(291),
    [anon_sym_BANG] = ACTIONS(293),
    [aux_sym_end] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(134),
    [sym_comment] = ACTIONS(9),
  },
  [123] = {
    [sym__type_of_label] = STATE(137),
    [sym_label] = ACTIONS(234),
    [sym_comment] = ACTIONS(9),
  },
  [124] = {
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_DOT] = ACTIONS(295),
    [anon_sym_SEMI] = ACTIONS(295),
    [anon_sym_RBRACE] = ACTIONS(295),
    [sym_comment] = ACTIONS(9),
  },
  [125] = {
    [aux_sym_type_select_repeat1] = STATE(139),
    [anon_sym_SEMI] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(297),
    [sym_comment] = ACTIONS(9),
  },
  [126] = {
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_DOT] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_RBRACE] = ACTIONS(299),
    [sym_comment] = ACTIONS(9),
  },
  [127] = {
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_DOT] = ACTIONS(301),
    [anon_sym_SEMI] = ACTIONS(301),
    [anon_sym_RBRACE] = ACTIONS(301),
    [sym_comment] = ACTIONS(9),
  },
  [128] = {
    [aux_sym_type_select_repeat1] = STATE(139),
    [anon_sym_SEMI] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(303),
    [sym_comment] = ACTIONS(9),
  },
  [129] = {
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_DOT] = ACTIONS(305),
    [anon_sym_SEMI] = ACTIONS(305),
    [anon_sym_RBRACE] = ACTIONS(305),
    [sym_comment] = ACTIONS(9),
  },
  [130] = {
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_COLON] = ACTIONS(309),
    [sym_comment] = ACTIONS(9),
  },
  [131] = {
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(92),
    [anon_sym_RBRACE] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [132] = {
    [anon_sym_DOT] = ACTIONS(311),
    [sym_comment] = ACTIONS(9),
  },
  [133] = {
    [anon_sym_DOT] = ACTIONS(313),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_comment] = ACTIONS(9),
  },
  [134] = {
    [sym__sort] = STATE(145),
    [sym__type] = STATE(145),
    [sym_type_send] = STATE(145),
    [sym_type_recv] = STATE(145),
    [sym_type_select] = STATE(145),
    [sym_type_choice] = STATE(145),
    [sym_type_end] = STATE(145),
    [sym_type_call] = STATE(145),
    [sym_process_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(166),
    [anon_sym_BANG] = ACTIONS(168),
    [aux_sym_end] = ACTIONS(132),
    [anon_sym_LBRACE] = ACTIONS(170),
    [sym_sort_int] = ACTIONS(315),
    [sym_sort_bool] = ACTIONS(315),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(134),
    [sym_comment] = ACTIONS(9),
  },
  [135] = {
    [sym__sort] = STATE(146),
    [sym__type] = STATE(146),
    [sym_type_send] = STATE(146),
    [sym_type_recv] = STATE(146),
    [sym_type_select] = STATE(146),
    [sym_type_choice] = STATE(146),
    [sym_type_end] = STATE(146),
    [sym_type_call] = STATE(146),
    [sym_process_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(166),
    [anon_sym_BANG] = ACTIONS(168),
    [aux_sym_end] = ACTIONS(132),
    [anon_sym_LBRACE] = ACTIONS(174),
    [sym_sort_int] = ACTIONS(317),
    [sym_sort_bool] = ACTIONS(317),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(134),
    [sym_comment] = ACTIONS(9),
  },
  [136] = {
    [anon_sym_SEMI] = ACTIONS(319),
    [anon_sym_RBRACE] = ACTIONS(319),
    [sym_comment] = ACTIONS(9),
  },
  [137] = {
    [anon_sym_SEMI] = ACTIONS(321),
    [anon_sym_RBRACE] = ACTIONS(321),
    [sym_comment] = ACTIONS(9),
  },
  [138] = {
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_DOT] = ACTIONS(323),
    [anon_sym_SEMI] = ACTIONS(323),
    [anon_sym_RBRACE] = ACTIONS(323),
    [sym_comment] = ACTIONS(9),
  },
  [139] = {
    [aux_sym_type_select_repeat1] = STATE(139),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_RBRACE] = ACTIONS(321),
    [sym_comment] = ACTIONS(9),
  },
  [140] = {
    [anon_sym_RPAREN] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_SEMI] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [sym_comment] = ACTIONS(9),
  },
  [141] = {
    [sym__proc] = STATE(59),
    [sym_par] = STATE(59),
    [sym_nu] = STATE(59),
    [sym_recv] = STATE(59),
    [sym_send] = STATE(59),
    [sym_end] = STATE(59),
    [sym_call] = STATE(59),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(99),
    [sym_reserved_name] = STATE(99),
    [sym_name] = STATE(99),
    [anon_sym_LPAREN] = ACTIONS(188),
    [aux_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [142] = {
    [sym__type] = STATE(147),
    [sym_type_send] = STATE(147),
    [sym_type_recv] = STATE(147),
    [sym_type_select] = STATE(147),
    [sym_type_choice] = STATE(147),
    [sym_type_end] = STATE(147),
    [sym_type_call] = STATE(147),
    [sym_process_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_BANG] = ACTIONS(130),
    [aux_sym_end] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(134),
    [sym_comment] = ACTIONS(9),
  },
  [143] = {
    [sym__proc] = STATE(75),
    [sym_par] = STATE(75),
    [sym_nu] = STATE(75),
    [sym_recv] = STATE(75),
    [sym_send] = STATE(75),
    [sym_end] = STATE(75),
    [sym_call] = STATE(75),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(99),
    [sym_reserved_name] = STATE(99),
    [sym_name] = STATE(99),
    [anon_sym_LPAREN] = ACTIONS(188),
    [aux_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [144] = {
    [sym__proc] = STATE(80),
    [sym_par] = STATE(80),
    [sym_nu] = STATE(80),
    [sym_recv] = STATE(80),
    [sym_send] = STATE(80),
    [sym_end] = STATE(80),
    [sym_call] = STATE(80),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(99),
    [sym_reserved_name] = STATE(99),
    [sym_name] = STATE(99),
    [anon_sym_LPAREN] = ACTIONS(188),
    [aux_sym_end] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
  },
  [145] = {
    [anon_sym_DOT] = ACTIONS(330),
    [sym_comment] = ACTIONS(9),
  },
  [146] = {
    [anon_sym_DOT] = ACTIONS(332),
    [sym_comment] = ACTIONS(9),
  },
  [147] = {
    [anon_sym_RPAREN] = ACTIONS(334),
    [sym_comment] = ACTIONS(9),
  },
  [148] = {
    [sym__type] = STATE(126),
    [sym_type_send] = STATE(126),
    [sym_type_recv] = STATE(126),
    [sym_type_select] = STATE(126),
    [sym_type_choice] = STATE(126),
    [sym_type_end] = STATE(126),
    [sym_type_call] = STATE(126),
    [sym_process_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(291),
    [anon_sym_BANG] = ACTIONS(293),
    [aux_sym_end] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(134),
    [sym_comment] = ACTIONS(9),
  },
  [149] = {
    [sym__type] = STATE(129),
    [sym_type_send] = STATE(129),
    [sym_type_recv] = STATE(129),
    [sym_type_select] = STATE(129),
    [sym_type_choice] = STATE(129),
    [sym_type_end] = STATE(129),
    [sym_type_call] = STATE(129),
    [sym_process_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(291),
    [anon_sym_BANG] = ACTIONS(293),
    [aux_sym_end] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(134),
    [sym_comment] = ACTIONS(9),
  },
  [150] = {
    [sym__proc] = STATE(115),
    [sym_par] = STATE(115),
    [sym_nu] = STATE(115),
    [sym_recv] = STATE(115),
    [sym_send] = STATE(115),
    [sym_end] = STATE(115),
    [sym_call] = STATE(115),
    [sym_process_name] = STATE(13),
    [sym__name] = STATE(99),
    [sym_reserved_name] = STATE(99),
    [sym_name] = STATE(99),
    [anon_sym_LPAREN] = ACTIONS(188),
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
  [70] = {.count = 1, .reusable = true}, SHIFT(32),
  [72] = {.count = 1, .reusable = true}, SHIFT(35),
  [74] = {.count = 1, .reusable = true}, SHIFT(36),
  [76] = {.count = 1, .reusable = false}, SHIFT(23),
  [78] = {.count = 1, .reusable = true}, SHIFT(38),
  [80] = {.count = 1, .reusable = true}, SHIFT(37),
  [82] = {.count = 1, .reusable = false}, REDUCE(sym_name, 1),
  [84] = {.count = 1, .reusable = true}, SHIFT(41),
  [86] = {.count = 1, .reusable = true}, SHIFT(42),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym__proc, 3),
  [90] = {.count = 1, .reusable = true}, SHIFT(45),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_par, 3),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_recv, 3),
  [98] = {.count = 1, .reusable = true}, SHIFT(49),
  [100] = {.count = 1, .reusable = true}, SHIFT(50),
  [102] = {.count = 1, .reusable = true}, SHIFT(51),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_integer, 1),
  [106] = {.count = 1, .reusable = false}, REDUCE(sym_integer, 1),
  [108] = {.count = 1, .reusable = true}, SHIFT(52),
  [110] = {.count = 1, .reusable = true}, SHIFT(53),
  [112] = {.count = 1, .reusable = false}, SHIFT(54),
  [114] = {.count = 1, .reusable = true}, SHIFT(55),
  [116] = {.count = 1, .reusable = false}, SHIFT(56),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 1),
  [120] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 1),
  [122] = {.count = 1, .reusable = true}, SHIFT(57),
  [124] = {.count = 1, .reusable = true}, SHIFT(58),
  [126] = {.count = 1, .reusable = true}, SHIFT(60),
  [128] = {.count = 1, .reusable = true}, SHIFT(61),
  [130] = {.count = 1, .reusable = true}, SHIFT(62),
  [132] = {.count = 1, .reusable = false}, SHIFT(63),
  [134] = {.count = 1, .reusable = false}, SHIFT(2),
  [136] = {.count = 1, .reusable = true}, SHIFT(66),
  [138] = {.count = 1, .reusable = true}, SHIFT(67),
  [140] = {.count = 1, .reusable = true}, SHIFT(68),
  [142] = {.count = 1, .reusable = true}, SHIFT(69),
  [144] = {.count = 1, .reusable = true}, SHIFT(71),
  [146] = {.count = 1, .reusable = true}, SHIFT(72),
  [148] = {.count = 1, .reusable = true}, SHIFT(73),
  [150] = {.count = 1, .reusable = true}, SHIFT(76),
  [152] = {.count = 1, .reusable = true}, SHIFT(77),
  [154] = {.count = 1, .reusable = true}, SHIFT(78),
  [156] = {.count = 1, .reusable = true}, SHIFT(81),
  [158] = {.count = 1, .reusable = true}, SHIFT(82),
  [160] = {.count = 1, .reusable = true}, SHIFT(83),
  [162] = {.count = 1, .reusable = true}, SHIFT(84),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_nu, 5),
  [166] = {.count = 1, .reusable = true}, SHIFT(87),
  [168] = {.count = 1, .reusable = true}, SHIFT(88),
  [170] = {.count = 1, .reusable = true}, SHIFT(89),
  [172] = {.count = 1, .reusable = true}, SHIFT(90),
  [174] = {.count = 1, .reusable = true}, SHIFT(91),
  [176] = {.count = 1, .reusable = true}, SHIFT(92),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_type_end, 1),
  [180] = {.count = 1, .reusable = true}, SHIFT(93),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_type_call, 1),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym__complex_clauses, 3),
  [186] = {.count = 1, .reusable = true}, SHIFT(95),
  [188] = {.count = 1, .reusable = true}, SHIFT(97),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_tuple, 3),
  [192] = {.count = 1, .reusable = true}, SHIFT(101),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_simple_clause, 3),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 3),
  [198] = {.count = 1, .reusable = false}, REDUCE(sym__expr, 3),
  [200] = {.count = 1, .reusable = true}, SHIFT(103),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3),
  [206] = {.count = 1, .reusable = true}, SHIFT(104),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_send, 5),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_mul, 3),
  [212] = {.count = 1, .reusable = false}, REDUCE(sym_mul, 3),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_div, 3),
  [216] = {.count = 1, .reusable = false}, REDUCE(sym_div, 3),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [220] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_sub, 3),
  [224] = {.count = 1, .reusable = false}, REDUCE(sym_sub, 3),
  [226] = {.count = 1, .reusable = true}, SHIFT(106),
  [228] = {.count = 1, .reusable = true}, SHIFT(107),
  [230] = {.count = 1, .reusable = true}, SHIFT(108),
  [232] = {.count = 1, .reusable = true}, SHIFT(109),
  [234] = {.count = 1, .reusable = true}, SHIFT(110),
  [236] = {.count = 1, .reusable = true}, SHIFT(112),
  [238] = {.count = 1, .reusable = true}, SHIFT(114),
  [240] = {.count = 1, .reusable = true}, REDUCE(aux_sym__complex_clauses_repeat1, 2),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym__complex_clauses, 4),
  [244] = {.count = 2, .reusable = true}, REDUCE(aux_sym__complex_clauses_repeat1, 2), SHIFT_REPEAT(68),
  [247] = {.count = 1, .reusable = false}, SHIFT(116),
  [249] = {.count = 1, .reusable = true}, SHIFT(117),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_complex_clause, 3),
  [253] = {.count = 1, .reusable = true}, SHIFT(118),
  [255] = {.count = 1, .reusable = true}, SHIFT(119),
  [257] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pattern_tuple_repeat1, 2),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_tuple, 4),
  [261] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_tuple_repeat1, 2), SHIFT_REPEAT(72),
  [264] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 4),
  [268] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 4),
  [270] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(77),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym__type, 3),
  [275] = {.count = 1, .reusable = true}, SHIFT(120),
  [277] = {.count = 1, .reusable = true}, SHIFT(121),
  [279] = {.count = 1, .reusable = true}, SHIFT(122),
  [281] = {.count = 1, .reusable = true}, SHIFT(123),
  [283] = {.count = 1, .reusable = true}, SHIFT(124),
  [285] = {.count = 1, .reusable = true}, SHIFT(127),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_nu, 7),
  [289] = {.count = 1, .reusable = true}, SHIFT(133),
  [291] = {.count = 1, .reusable = true}, SHIFT(134),
  [293] = {.count = 1, .reusable = true}, SHIFT(135),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_type_choice, 4),
  [297] = {.count = 1, .reusable = true}, SHIFT(138),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_type_recv, 4),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_type_select, 4),
  [303] = {.count = 1, .reusable = true}, SHIFT(140),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_type_send, 4),
  [307] = {.count = 1, .reusable = true}, SHIFT(141),
  [309] = {.count = 1, .reusable = true}, SHIFT(142),
  [311] = {.count = 1, .reusable = true}, SHIFT(143),
  [313] = {.count = 1, .reusable = true}, SHIFT(144),
  [315] = {.count = 1, .reusable = true}, SHIFT(145),
  [317] = {.count = 1, .reusable = true}, SHIFT(146),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym__type_of_label, 3),
  [321] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_select_repeat1, 2),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_type_choice, 5),
  [325] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_select_repeat1, 2), SHIFT_REPEAT(123),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym_type_select, 5),
  [330] = {.count = 1, .reusable = true}, SHIFT(148),
  [332] = {.count = 1, .reusable = true}, SHIFT(149),
  [334] = {.count = 1, .reusable = true}, SHIFT(150),
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
