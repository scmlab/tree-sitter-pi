#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 155
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 2
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

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
  anon_sym_COMMA = 15,
  anon_sym_STAR = 16,
  anon_sym_SLASH = 17,
  anon_sym_PLUS = 18,
  anon_sym_DASH = 19,
  anon_sym_True = 20,
  anon_sym_False = 21,
  sym_sort_int = 22,
  sym_sort_bool = 23,
  anon_sym_stdin = 24,
  anon_sym_stdout = 25,
  aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH = 26,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH = 27,
  sym_label = 28,
  sym__digit = 29,
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
  sym_boolean = 53,
  sym_integer = 54,
  sym_variable = 55,
  sym__sort = 56,
  sym__type = 57,
  sym_type_send = 58,
  sym_type_recv = 59,
  sym_type_select = 60,
  sym_type_choice = 61,
  sym_type_end = 62,
  sym_type_call = 63,
  sym__type_of_label = 64,
  sym__name = 65,
  sym_reserved_name = 66,
  sym_polarized_name = 67,
  sym_simple_name = 68,
  aux_sym_program_repeat1 = 69,
  aux_sym__complex_clauses_repeat1 = 70,
  aux_sym_pattern_tuple_repeat1 = 71,
  aux_sym_tuple_repeat1 = 72,
  aux_sym_type_select_repeat1 = 73,
  alias_sym_name = 74,
  alias_sym_process_name = 75,
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
  [anon_sym_COMMA] = ",",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [sym_sort_int] = "sort_int",
  [sym_sort_bool] = "sort_bool",
  [anon_sym_stdin] = "stdin",
  [anon_sym_stdout] = "stdout",
  [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = "/\\`[a-z](\\w|')*/",
  [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = "/[a-z](\\w|')*/",
  [sym_label] = "label",
  [sym__digit] = "_digit",
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
  [sym_boolean] = "boolean",
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
  [sym__name] = "_name",
  [sym_reserved_name] = "reserved_name",
  [sym_polarized_name] = "name",
  [sym_simple_name] = "simple_name",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__complex_clauses_repeat1] = "_complex_clauses_repeat1",
  [aux_sym_pattern_tuple_repeat1] = "pattern_tuple_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_type_select_repeat1] = "type_select_repeat1",
  [alias_sym_name] = "name",
  [alias_sym_process_name] = "process_name",
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
  [anon_sym_COMMA] = {
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
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
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
  [anon_sym_stdin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stdout] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = {
    .visible = false,
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
  [sym_boolean] = {
    .visible = true,
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
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym_reserved_name] = {
    .visible = true,
    .named = true,
  },
  [sym_polarized_name] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_name] = {
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
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_process_name] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_process_name,
  },
  [2] = {
    [0] = alias_sym_name,
  },
  [3] = {
    [2] = alias_sym_name,
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
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '?')
        ADVANCE(17);
      if (lookahead == 'B')
        ADVANCE(18);
      if (lookahead == 'F')
        ADVANCE(23);
      if (lookahead == 'I')
        ADVANCE(28);
      if (lookahead == 'T')
        ADVANCE(31);
      if (lookahead == '\\')
        SKIP(35);
      if (lookahead == '`')
        ADVANCE(36);
      if (lookahead == 'e')
        ADVANCE(38);
      if (lookahead == 'n')
        ADVANCE(42);
      if (lookahead == 's')
        ADVANCE(44);
      if (lookahead == '{')
        ADVANCE(52);
      if (lookahead == '|')
        ADVANCE(53);
      if (lookahead == '}')
        ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
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
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'o')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'o')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'l')
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_sort_bool);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'a')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'l')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 's')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'e')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'n')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 't')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_sort_int);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'r')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(22);
      END_STATE();
    case 32:
      if (lookahead == 'u')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'e')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 35:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 36:
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == 'n')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == 'd')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_end);
      if (lookahead == '\'')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == 'u')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_nu);
      if (lookahead == '\'')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == 't')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == 'd')
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == 'i')
        ADVANCE(47);
      if (lookahead == 'o')
        ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == 'n')
        ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_stdin);
      if (lookahead == '\'')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == 'u')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == 't')
        ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_stdout);
      if (lookahead == '\'')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 55:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '\\')
        SKIP(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(55);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 56:
      if (lookahead == '-')
        ADVANCE(9);
      END_STATE();
    case 57:
      if (lookahead == '/')
        ADVANCE(13);
      END_STATE();
    case 58:
      if (lookahead == 'n')
        SKIP(55);
      END_STATE();
    case 59:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(60);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(61);
      if (lookahead == '}')
        ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(59);
      END_STATE();
    case 60:
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == '>')
        ADVANCE(10);
      END_STATE();
    case 61:
      if (lookahead == 'n')
        SKIP(59);
      END_STATE();
    case 62:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '\\')
        SKIP(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(62);
      END_STATE();
    case 63:
      if (lookahead == 'n')
        SKIP(62);
      END_STATE();
    case 64:
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(64);
      END_STATE();
    case 65:
      if (lookahead == 'n')
        SKIP(64);
      END_STATE();
    case 66:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '\\')
        SKIP(67);
      if (lookahead == '`')
        ADVANCE(36);
      if (lookahead == 'e')
        ADVANCE(38);
      if (lookahead == 's')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(66);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 67:
      if (lookahead == 'n')
        SKIP(66);
      END_STATE();
    case 68:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '\\')
        SKIP(69);
      if (lookahead == '`')
        ADVANCE(36);
      if (lookahead == 'e')
        ADVANCE(38);
      if (lookahead == 'n')
        ADVANCE(42);
      if (lookahead == 's')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(68);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 69:
      if (lookahead == 'n')
        SKIP(68);
      END_STATE();
    case 70:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(71);
      if (lookahead == '|')
        ADVANCE(53);
      if (lookahead == '}')
        ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(70);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 71:
      if (lookahead == 'n')
        SKIP(70);
      END_STATE();
    case 72:
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
        ADVANCE(73);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '?')
        ADVANCE(17);
      if (lookahead == '\\')
        SKIP(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(9);
      END_STATE();
    case 74:
      if (lookahead == 'n')
        SKIP(72);
      END_STATE();
    case 75:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '?')
        ADVANCE(17);
      if (lookahead == '\\')
        SKIP(76);
      if (lookahead == '|')
        ADVANCE(53);
      if (lookahead == '}')
        ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(75);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 76:
      if (lookahead == 'n')
        SKIP(75);
      END_STATE();
    case 77:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '\\')
        SKIP(78);
      if (lookahead == '|')
        ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(77);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 78:
      if (lookahead == 'n')
        SKIP(77);
      END_STATE();
    case 79:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '\\')
        SKIP(80);
      if (lookahead == '|')
        ADVANCE(53);
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
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '\\')
        SKIP(82);
      if (lookahead == '{')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(81);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 82:
      if (lookahead == 'n')
        SKIP(81);
      END_STATE();
    case 83:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(84);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == 'F')
        ADVANCE(23);
      if (lookahead == 'T')
        ADVANCE(31);
      if (lookahead == '\\')
        SKIP(86);
      if (lookahead == '`')
        ADVANCE(36);
      if (lookahead == 's')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(83);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 84:
      if (lookahead == '-')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(85);
      END_STATE();
    case 86:
      if (lookahead == 'n')
        SKIP(83);
      END_STATE();
    case 87:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == '\\')
        SKIP(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(87);
      END_STATE();
    case 88:
      if (lookahead == 'n')
        SKIP(87);
      END_STATE();
    case 89:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(60);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '\\')
        SKIP(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(89);
      END_STATE();
    case 90:
      if (lookahead == 'n')
        SKIP(89);
      END_STATE();
    case 91:
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(73);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(91);
      END_STATE();
    case 92:
      if (lookahead == 'n')
        SKIP(91);
      END_STATE();
    case 93:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(73);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(93);
      END_STATE();
    case 94:
      if (lookahead == 'n')
        SKIP(93);
      END_STATE();
    case 95:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '?')
        ADVANCE(17);
      if (lookahead == 'B')
        ADVANCE(96);
      if (lookahead == 'I')
        ADVANCE(97);
      if (lookahead == '\\')
        SKIP(98);
      if (lookahead == 'e')
        ADVANCE(38);
      if (lookahead == '{')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 96:
      if (lookahead == 'o')
        ADVANCE(19);
      END_STATE();
    case 97:
      if (lookahead == 'n')
        ADVANCE(29);
      END_STATE();
    case 98:
      if (lookahead == 'n')
        SKIP(95);
      END_STATE();
    case 99:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(73);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(100);
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
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(102);
      if (lookahead == '|')
        ADVANCE(53);
      if (lookahead == '}')
        ADVANCE(54);
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
      if (lookahead == '-')
        ADVANCE(60);
      if (lookahead == '/')
        ADVANCE(57);
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
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(106);
      if (lookahead == '}')
        ADVANCE(54);
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
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 55},
  [2] = {.lex_state = 59},
  [3] = {.lex_state = 62},
  [4] = {.lex_state = 64},
  [5] = {.lex_state = 55},
  [6] = {.lex_state = 66},
  [7] = {.lex_state = 55},
  [8] = {.lex_state = 68},
  [9] = {.lex_state = 70},
  [10] = {.lex_state = 72},
  [11] = {.lex_state = 72},
  [12] = {.lex_state = 75},
  [13] = {.lex_state = 77},
  [14] = {.lex_state = 75},
  [15] = {.lex_state = 70},
  [16] = {.lex_state = 68},
  [17] = {.lex_state = 55},
  [18] = {.lex_state = 79},
  [19] = {.lex_state = 75},
  [20] = {.lex_state = 66},
  [21] = {.lex_state = 81},
  [22] = {.lex_state = 83},
  [23] = {.lex_state = 55},
  [24] = {.lex_state = 87},
  [25] = {.lex_state = 70},
  [26] = {.lex_state = 66},
  [27] = {.lex_state = 81},
  [28] = {.lex_state = 83},
  [29] = {.lex_state = 77},
  [30] = {.lex_state = 81},
  [31] = {.lex_state = 81},
  [32] = {.lex_state = 89},
  [33] = {.lex_state = 70},
  [34] = {.lex_state = 91},
  [35] = {.lex_state = 89},
  [36] = {.lex_state = 83},
  [37] = {.lex_state = 93},
  [38] = {.lex_state = 93},
  [39] = {.lex_state = 91},
  [40] = {.lex_state = 93},
  [41] = {.lex_state = 87},
  [42] = {.lex_state = 66},
  [43] = {.lex_state = 95},
  [44] = {.lex_state = 79},
  [45] = {.lex_state = 91},
  [46] = {.lex_state = 91},
  [47] = {.lex_state = 99},
  [48] = {.lex_state = 101},
  [49] = {.lex_state = 103},
  [50] = {.lex_state = 66},
  [51] = {.lex_state = 99},
  [52] = {.lex_state = 66},
  [53] = {.lex_state = 83},
  [54] = {.lex_state = 83},
  [55] = {.lex_state = 83},
  [56] = {.lex_state = 83},
  [57] = {.lex_state = 66},
  [58] = {.lex_state = 95},
  [59] = {.lex_state = 70},
  [60] = {.lex_state = 95},
  [61] = {.lex_state = 95},
  [62] = {.lex_state = 95},
  [63] = {.lex_state = 105},
  [64] = {.lex_state = 79},
  [65] = {.lex_state = 105},
  [66] = {.lex_state = 66},
  [67] = {.lex_state = 66},
  [68] = {.lex_state = 81},
  [69] = {.lex_state = 81},
  [70] = {.lex_state = 70},
  [71] = {.lex_state = 101},
  [72] = {.lex_state = 66},
  [73] = {.lex_state = 70},
  [74] = {.lex_state = 93},
  [75] = {.lex_state = 83},
  [76] = {.lex_state = 70},
  [77] = {.lex_state = 93},
  [78] = {.lex_state = 93},
  [79] = {.lex_state = 93},
  [80] = {.lex_state = 93},
  [81] = {.lex_state = 79},
  [82] = {.lex_state = 79},
  [83] = {.lex_state = 95},
  [84] = {.lex_state = 95},
  [85] = {.lex_state = 81},
  [86] = {.lex_state = 91},
  [87] = {.lex_state = 81},
  [88] = {.lex_state = 91},
  [89] = {.lex_state = 66},
  [90] = {.lex_state = 99},
  [91] = {.lex_state = 101},
  [92] = {.lex_state = 70},
  [93] = {.lex_state = 101},
  [94] = {.lex_state = 68},
  [95] = {.lex_state = 101},
  [96] = {.lex_state = 75},
  [97] = {.lex_state = 99},
  [98] = {.lex_state = 66},
  [99] = {.lex_state = 105},
  [100] = {.lex_state = 91},
  [101] = {.lex_state = 91},
  [102] = {.lex_state = 87},
  [103] = {.lex_state = 101},
  [104] = {.lex_state = 95},
  [105] = {.lex_state = 101},
  [106] = {.lex_state = 95},
  [107] = {.lex_state = 70},
  [108] = {.lex_state = 89},
  [109] = {.lex_state = 81},
  [110] = {.lex_state = 99},
  [111] = {.lex_state = 55},
  [112] = {.lex_state = 66},
  [113] = {.lex_state = 81},
  [114] = {.lex_state = 83},
  [115] = {.lex_state = 93},
  [116] = {.lex_state = 83},
  [117] = {.lex_state = 99},
  [118] = {.lex_state = 95},
  [119] = {.lex_state = 95},
  [120] = {.lex_state = 95},
  [121] = {.lex_state = 81},
  [122] = {.lex_state = 105},
  [123] = {.lex_state = 101},
  [124] = {.lex_state = 105},
  [125] = {.lex_state = 105},
  [126] = {.lex_state = 101},
  [127] = {.lex_state = 105},
  [128] = {.lex_state = 99},
  [129] = {.lex_state = 89},
  [130] = {.lex_state = 99},
  [131] = {.lex_state = 87},
  [132] = {.lex_state = 101},
  [133] = {.lex_state = 91},
  [134] = {.lex_state = 91},
  [135] = {.lex_state = 99},
  [136] = {.lex_state = 93},
  [137] = {.lex_state = 99},
  [138] = {.lex_state = 95},
  [139] = {.lex_state = 95},
  [140] = {.lex_state = 101},
  [141] = {.lex_state = 101},
  [142] = {.lex_state = 105},
  [143] = {.lex_state = 101},
  [144] = {.lex_state = 105},
  [145] = {.lex_state = 66},
  [146] = {.lex_state = 95},
  [147] = {.lex_state = 66},
  [148] = {.lex_state = 66},
  [149] = {.lex_state = 91},
  [150] = {.lex_state = 91},
  [151] = {.lex_state = 79},
  [152] = {.lex_state = 95},
  [153] = {.lex_state = 95},
  [154] = {.lex_state = 66},
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [sym_sort_int] = ACTIONS(1),
    [sym_sort_bool] = ACTIONS(1),
    [anon_sym_stdin] = ACTIONS(3),
    [anon_sym_stdout] = ACTIONS(3),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(3),
    [sym_label] = ACTIONS(3),
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
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(11),
    [anon_sym_DASH_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
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
    [sym__proc] = STATE(13),
    [sym_par] = STATE(13),
    [sym_nu] = STATE(13),
    [sym_recv] = STATE(13),
    [sym_send] = STATE(13),
    [sym_end] = STATE(13),
    [sym_call] = STATE(13),
    [sym__name] = STATE(14),
    [sym_reserved_name] = STATE(14),
    [sym_polarized_name] = STATE(14),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [7] = {
    [sym_proc_declaration] = STATE(7),
    [sym_simple_name] = STATE(4),
    [aux_sym_program_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(29),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(31),
    [sym_comment] = ACTIONS(9),
  },
  [8] = {
    [sym__proc] = STATE(18),
    [sym_par] = STATE(18),
    [sym_nu] = STATE(18),
    [sym_recv] = STATE(18),
    [sym_send] = STATE(18),
    [sym_end] = STATE(18),
    [sym_call] = STATE(18),
    [sym__name] = STATE(19),
    [sym_reserved_name] = STATE(19),
    [sym_polarized_name] = STATE(19),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(34),
    [anon_sym_nu] = ACTIONS(36),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_RPAREN] = ACTIONS(38),
    [anon_sym_PIPE] = ACTIONS(38),
    [anon_sym_SEMI] = ACTIONS(38),
    [anon_sym_RBRACE] = ACTIONS(38),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(9),
  },
  [10] = {
    [anon_sym_RPAREN] = ACTIONS(40),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_BANG] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_COMMA] = ACTIONS(40),
    [anon_sym_STAR] = ACTIONS(40),
    [anon_sym_SLASH] = ACTIONS(42),
    [anon_sym_PLUS] = ACTIONS(40),
    [anon_sym_DASH] = ACTIONS(42),
    [sym_comment] = ACTIONS(9),
  },
  [11] = {
    [anon_sym_RPAREN] = ACTIONS(44),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_BANG] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(44),
    [anon_sym_COMMA] = ACTIONS(44),
    [anon_sym_STAR] = ACTIONS(44),
    [anon_sym_SLASH] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(44),
    [anon_sym_DASH] = ACTIONS(46),
    [sym_comment] = ACTIONS(9),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_BANG] = ACTIONS(44),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(11),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(11),
    [sym_comment] = ACTIONS(9),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [anon_sym_PIPE] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(48),
    [sym_comment] = ACTIONS(9),
  },
  [14] = {
    [anon_sym_QMARK] = ACTIONS(52),
    [anon_sym_BANG] = ACTIONS(54),
    [sym_comment] = ACTIONS(9),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(56),
    [anon_sym_PIPE] = ACTIONS(56),
    [anon_sym_SEMI] = ACTIONS(56),
    [anon_sym_RBRACE] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(56),
    [sym_comment] = ACTIONS(9),
  },
  [16] = {
    [sym__proc] = STATE(18),
    [sym_par] = STATE(18),
    [sym_nu] = STATE(18),
    [sym_recv] = STATE(18),
    [sym_send] = STATE(18),
    [sym_end] = STATE(18),
    [sym_call] = STATE(18),
    [sym__name] = STATE(19),
    [sym_reserved_name] = STATE(19),
    [sym_polarized_name] = STATE(19),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(34),
    [anon_sym_nu] = ACTIONS(58),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [17] = {
    [sym_simple_name] = STATE(24),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [18] = {
    [anon_sym_RPAREN] = ACTIONS(60),
    [anon_sym_PIPE] = ACTIONS(62),
    [sym_comment] = ACTIONS(9),
  },
  [19] = {
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(66),
    [sym_comment] = ACTIONS(9),
  },
  [20] = {
    [sym__proc] = STATE(29),
    [sym_par] = STATE(29),
    [sym_nu] = STATE(29),
    [sym_recv] = STATE(29),
    [sym_send] = STATE(29),
    [sym_end] = STATE(29),
    [sym_call] = STATE(29),
    [sym__name] = STATE(14),
    [sym_reserved_name] = STATE(14),
    [sym_polarized_name] = STATE(14),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [21] = {
    [sym__clauses] = STATE(33),
    [sym_simple_clause] = STATE(33),
    [sym__complex_clauses] = STATE(33),
    [sym_pattern] = STATE(34),
    [sym_pattern_tuple] = STATE(32),
    [sym_simple_name] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
  },
  [22] = {
    [sym__expr] = STATE(39),
    [sym_tuple] = STATE(39),
    [sym_mul] = STATE(39),
    [sym_div] = STATE(39),
    [sym_add] = STATE(39),
    [sym_sub] = STATE(39),
    [sym__term] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_integer] = STATE(39),
    [sym_variable] = STATE(39),
    [sym__name] = STATE(40),
    [sym_reserved_name] = STATE(40),
    [sym_polarized_name] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_True] = ACTIONS(76),
    [anon_sym_False] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(78),
    [sym_label] = ACTIONS(80),
    [sym__digit] = ACTIONS(82),
    [sym_comment] = ACTIONS(9),
  },
  [23] = {
    [sym_simple_name] = STATE(41),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
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
    [sym__proc] = STATE(44),
    [sym_par] = STATE(44),
    [sym_nu] = STATE(44),
    [sym_recv] = STATE(44),
    [sym_send] = STATE(44),
    [sym_end] = STATE(44),
    [sym_call] = STATE(44),
    [sym__name] = STATE(19),
    [sym_reserved_name] = STATE(19),
    [sym_polarized_name] = STATE(19),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(34),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [27] = {
    [sym__clauses] = STATE(33),
    [sym_simple_clause] = STATE(33),
    [sym__complex_clauses] = STATE(33),
    [sym_pattern] = STATE(45),
    [sym_pattern_tuple] = STATE(32),
    [sym_simple_name] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
  },
  [28] = {
    [sym__expr] = STATE(46),
    [sym_tuple] = STATE(46),
    [sym_mul] = STATE(46),
    [sym_div] = STATE(46),
    [sym_add] = STATE(46),
    [sym_sub] = STATE(46),
    [sym__term] = STATE(46),
    [sym_boolean] = STATE(46),
    [sym_integer] = STATE(46),
    [sym_variable] = STATE(46),
    [sym__name] = STATE(40),
    [sym_reserved_name] = STATE(40),
    [sym_polarized_name] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_True] = ACTIONS(76),
    [anon_sym_False] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(78),
    [sym_label] = ACTIONS(90),
    [sym__digit] = ACTIONS(82),
    [sym_comment] = ACTIONS(9),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [30] = {
    [sym_pattern] = STATE(47),
    [sym_pattern_tuple] = STATE(32),
    [sym_simple_name] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
  },
  [31] = {
    [sym_complex_clause] = STATE(48),
    [sym_pattern] = STATE(49),
    [sym_pattern_tuple] = STATE(32),
    [sym_simple_name] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
  },
  [32] = {
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_DOT] = ACTIONS(94),
    [anon_sym_DASH_GT] = ACTIONS(94),
    [anon_sym_COMMA] = ACTIONS(94),
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
    [anon_sym_RPAREN] = ACTIONS(100),
    [anon_sym_DOT] = ACTIONS(100),
    [anon_sym_DASH_GT] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(100),
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
    [sym_boolean] = STATE(51),
    [sym_integer] = STATE(51),
    [sym_variable] = STATE(51),
    [sym__name] = STATE(40),
    [sym_reserved_name] = STATE(40),
    [sym_polarized_name] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_True] = ACTIONS(76),
    [anon_sym_False] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(78),
    [sym_label] = ACTIONS(102),
    [sym__digit] = ACTIONS(82),
    [sym_comment] = ACTIONS(9),
  },
  [37] = {
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_DOT] = ACTIONS(104),
    [anon_sym_COMMA] = ACTIONS(104),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(9),
  },
  [38] = {
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_DOT] = ACTIONS(108),
    [anon_sym_COMMA] = ACTIONS(108),
    [anon_sym_STAR] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(9),
  },
  [39] = {
    [anon_sym_DOT] = ACTIONS(112),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(120),
    [sym_comment] = ACTIONS(9),
  },
  [40] = {
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_COMMA] = ACTIONS(122),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(124),
    [sym_comment] = ACTIONS(9),
  },
  [41] = {
    [anon_sym_RPAREN] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(128),
    [sym_comment] = ACTIONS(9),
  },
  [42] = {
    [sym__proc] = STATE(59),
    [sym_par] = STATE(59),
    [sym_nu] = STATE(59),
    [sym_recv] = STATE(59),
    [sym_send] = STATE(59),
    [sym_end] = STATE(59),
    [sym_call] = STATE(59),
    [sym__name] = STATE(14),
    [sym_reserved_name] = STATE(14),
    [sym_polarized_name] = STATE(14),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [43] = {
    [sym__type] = STATE(64),
    [sym_type_send] = STATE(64),
    [sym_type_recv] = STATE(64),
    [sym_type_select] = STATE(64),
    [sym_type_choice] = STATE(64),
    [sym_type_end] = STATE(64),
    [sym_type_call] = STATE(64),
    [sym_simple_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_QMARK] = ACTIONS(132),
    [anon_sym_BANG] = ACTIONS(134),
    [aux_sym_end] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(9),
  },
  [44] = {
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(62),
    [sym_comment] = ACTIONS(9),
  },
  [45] = {
    [anon_sym_DOT] = ACTIONS(140),
    [sym_comment] = ACTIONS(9),
  },
  [46] = {
    [anon_sym_DOT] = ACTIONS(142),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(120),
    [sym_comment] = ACTIONS(9),
  },
  [47] = {
    [anon_sym_COMMA] = ACTIONS(144),
    [sym_comment] = ACTIONS(9),
  },
  [48] = {
    [aux_sym__complex_clauses_repeat1] = STATE(71),
    [anon_sym_SEMI] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(148),
    [sym_comment] = ACTIONS(9),
  },
  [49] = {
    [anon_sym_DASH_GT] = ACTIONS(150),
    [sym_comment] = ACTIONS(9),
  },
  [50] = {
    [sym__proc] = STATE(73),
    [sym_par] = STATE(73),
    [sym_nu] = STATE(73),
    [sym_recv] = STATE(73),
    [sym_send] = STATE(73),
    [sym_end] = STATE(73),
    [sym_call] = STATE(73),
    [sym__name] = STATE(14),
    [sym_reserved_name] = STATE(14),
    [sym_polarized_name] = STATE(14),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [51] = {
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_COMMA] = ACTIONS(154),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(120),
    [sym_comment] = ACTIONS(9),
  },
  [52] = {
    [sym__proc] = STATE(76),
    [sym_par] = STATE(76),
    [sym_nu] = STATE(76),
    [sym_recv] = STATE(76),
    [sym_send] = STATE(76),
    [sym_end] = STATE(76),
    [sym_call] = STATE(76),
    [sym__name] = STATE(14),
    [sym_reserved_name] = STATE(14),
    [sym_polarized_name] = STATE(14),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [53] = {
    [sym__expr] = STATE(77),
    [sym_tuple] = STATE(77),
    [sym_mul] = STATE(77),
    [sym_div] = STATE(77),
    [sym_add] = STATE(77),
    [sym_sub] = STATE(77),
    [sym__term] = STATE(77),
    [sym_boolean] = STATE(77),
    [sym_integer] = STATE(77),
    [sym_variable] = STATE(77),
    [sym__name] = STATE(40),
    [sym_reserved_name] = STATE(40),
    [sym_polarized_name] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_True] = ACTIONS(76),
    [anon_sym_False] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(78),
    [sym_label] = ACTIONS(156),
    [sym__digit] = ACTIONS(82),
    [sym_comment] = ACTIONS(9),
  },
  [54] = {
    [sym__expr] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_mul] = STATE(78),
    [sym_div] = STATE(78),
    [sym_add] = STATE(78),
    [sym_sub] = STATE(78),
    [sym__term] = STATE(78),
    [sym_boolean] = STATE(78),
    [sym_integer] = STATE(78),
    [sym_variable] = STATE(78),
    [sym__name] = STATE(40),
    [sym_reserved_name] = STATE(40),
    [sym_polarized_name] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_True] = ACTIONS(76),
    [anon_sym_False] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(78),
    [sym_label] = ACTIONS(158),
    [sym__digit] = ACTIONS(82),
    [sym_comment] = ACTIONS(9),
  },
  [55] = {
    [sym__expr] = STATE(79),
    [sym_tuple] = STATE(79),
    [sym_mul] = STATE(79),
    [sym_div] = STATE(79),
    [sym_add] = STATE(79),
    [sym_sub] = STATE(79),
    [sym__term] = STATE(79),
    [sym_boolean] = STATE(79),
    [sym_integer] = STATE(79),
    [sym_variable] = STATE(79),
    [sym__name] = STATE(40),
    [sym_reserved_name] = STATE(40),
    [sym_polarized_name] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_True] = ACTIONS(76),
    [anon_sym_False] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(78),
    [sym_label] = ACTIONS(160),
    [sym__digit] = ACTIONS(82),
    [sym_comment] = ACTIONS(9),
  },
  [56] = {
    [sym__expr] = STATE(80),
    [sym_tuple] = STATE(80),
    [sym_mul] = STATE(80),
    [sym_div] = STATE(80),
    [sym_add] = STATE(80),
    [sym_sub] = STATE(80),
    [sym__term] = STATE(80),
    [sym_boolean] = STATE(80),
    [sym_integer] = STATE(80),
    [sym_variable] = STATE(80),
    [sym__name] = STATE(40),
    [sym_reserved_name] = STATE(40),
    [sym_polarized_name] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_True] = ACTIONS(76),
    [anon_sym_False] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(78),
    [sym_label] = ACTIONS(162),
    [sym__digit] = ACTIONS(82),
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
    [sym__name] = STATE(19),
    [sym_reserved_name] = STATE(19),
    [sym_polarized_name] = STATE(19),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(34),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [58] = {
    [sym__type] = STATE(81),
    [sym_type_send] = STATE(81),
    [sym_type_recv] = STATE(81),
    [sym_type_select] = STATE(81),
    [sym_type_choice] = STATE(81),
    [sym_type_end] = STATE(81),
    [sym_type_call] = STATE(81),
    [sym_simple_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_QMARK] = ACTIONS(132),
    [anon_sym_BANG] = ACTIONS(134),
    [aux_sym_end] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(138),
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
    [sym__type] = STATE(82),
    [sym_type_send] = STATE(82),
    [sym_type_recv] = STATE(82),
    [sym_type_select] = STATE(82),
    [sym_type_choice] = STATE(82),
    [sym_type_end] = STATE(82),
    [sym_type_call] = STATE(82),
    [sym_simple_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_QMARK] = ACTIONS(132),
    [anon_sym_BANG] = ACTIONS(134),
    [aux_sym_end] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(9),
  },
  [61] = {
    [sym__sort] = STATE(86),
    [sym__type] = STATE(86),
    [sym_type_send] = STATE(86),
    [sym_type_recv] = STATE(86),
    [sym_type_select] = STATE(86),
    [sym_type_choice] = STATE(86),
    [sym_type_end] = STATE(86),
    [sym_type_call] = STATE(86),
    [sym_simple_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_QMARK] = ACTIONS(166),
    [anon_sym_BANG] = ACTIONS(168),
    [aux_sym_end] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(170),
    [sym_sort_int] = ACTIONS(172),
    [sym_sort_bool] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(9),
  },
  [62] = {
    [sym__sort] = STATE(88),
    [sym__type] = STATE(88),
    [sym_type_send] = STATE(88),
    [sym_type_recv] = STATE(88),
    [sym_type_select] = STATE(88),
    [sym_type_choice] = STATE(88),
    [sym_type_end] = STATE(88),
    [sym_type_call] = STATE(88),
    [sym_simple_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_QMARK] = ACTIONS(166),
    [anon_sym_BANG] = ACTIONS(168),
    [aux_sym_end] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(174),
    [sym_sort_int] = ACTIONS(176),
    [sym_sort_bool] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(138),
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
    [sym__proc] = STATE(73),
    [sym_par] = STATE(73),
    [sym_nu] = STATE(73),
    [sym_recv] = STATE(73),
    [sym_send] = STATE(73),
    [sym_end] = STATE(73),
    [sym_call] = STATE(73),
    [sym__name] = STATE(19),
    [sym_reserved_name] = STATE(19),
    [sym_polarized_name] = STATE(19),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(34),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [67] = {
    [sym__proc] = STATE(76),
    [sym_par] = STATE(76),
    [sym_nu] = STATE(76),
    [sym_recv] = STATE(76),
    [sym_send] = STATE(76),
    [sym_end] = STATE(76),
    [sym_call] = STATE(76),
    [sym__name] = STATE(19),
    [sym_reserved_name] = STATE(19),
    [sym_polarized_name] = STATE(19),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(34),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [68] = {
    [sym_pattern] = STATE(90),
    [sym_pattern_tuple] = STATE(32),
    [sym_simple_name] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
  },
  [69] = {
    [sym_complex_clause] = STATE(91),
    [sym_pattern] = STATE(49),
    [sym_pattern_tuple] = STATE(32),
    [sym_simple_name] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_PIPE] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(184),
    [anon_sym_RBRACE] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(184),
    [sym_comment] = ACTIONS(9),
  },
  [71] = {
    [aux_sym__complex_clauses_repeat1] = STATE(93),
    [anon_sym_SEMI] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(186),
    [sym_comment] = ACTIONS(9),
  },
  [72] = {
    [sym__proc] = STATE(95),
    [sym_par] = STATE(95),
    [sym_nu] = STATE(95),
    [sym_recv] = STATE(95),
    [sym_send] = STATE(95),
    [sym_end] = STATE(95),
    [sym_call] = STATE(95),
    [sym__name] = STATE(96),
    [sym_reserved_name] = STATE(96),
    [sym_polarized_name] = STATE(96),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(188),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(190),
    [anon_sym_RPAREN] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(190),
    [anon_sym_SEMI] = ACTIONS(190),
    [anon_sym_RBRACE] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(190),
    [sym_comment] = ACTIONS(9),
  },
  [74] = {
    [anon_sym_RPAREN] = ACTIONS(192),
    [anon_sym_DOT] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(192),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(194),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(194),
    [sym_comment] = ACTIONS(9),
  },
  [75] = {
    [sym__expr] = STATE(97),
    [sym_tuple] = STATE(97),
    [sym_mul] = STATE(97),
    [sym_div] = STATE(97),
    [sym_add] = STATE(97),
    [sym_sub] = STATE(97),
    [sym__term] = STATE(97),
    [sym_boolean] = STATE(97),
    [sym_integer] = STATE(97),
    [sym_variable] = STATE(97),
    [sym__name] = STATE(40),
    [sym_reserved_name] = STATE(40),
    [sym_polarized_name] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_True] = ACTIONS(76),
    [anon_sym_False] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(78),
    [sym_label] = ACTIONS(196),
    [sym__digit] = ACTIONS(82),
    [sym_comment] = ACTIONS(9),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(198),
    [anon_sym_RPAREN] = ACTIONS(198),
    [anon_sym_PIPE] = ACTIONS(198),
    [anon_sym_SEMI] = ACTIONS(198),
    [anon_sym_RBRACE] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(198),
    [sym_comment] = ACTIONS(9),
  },
  [77] = {
    [anon_sym_RPAREN] = ACTIONS(200),
    [anon_sym_DOT] = ACTIONS(200),
    [anon_sym_COMMA] = ACTIONS(200),
    [anon_sym_STAR] = ACTIONS(200),
    [anon_sym_SLASH] = ACTIONS(202),
    [anon_sym_PLUS] = ACTIONS(200),
    [anon_sym_DASH] = ACTIONS(202),
    [sym_comment] = ACTIONS(9),
  },
  [78] = {
    [anon_sym_RPAREN] = ACTIONS(204),
    [anon_sym_DOT] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(204),
    [anon_sym_SLASH] = ACTIONS(206),
    [anon_sym_PLUS] = ACTIONS(204),
    [anon_sym_DASH] = ACTIONS(206),
    [sym_comment] = ACTIONS(9),
  },
  [79] = {
    [anon_sym_RPAREN] = ACTIONS(208),
    [anon_sym_DOT] = ACTIONS(208),
    [anon_sym_COMMA] = ACTIONS(208),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(208),
    [anon_sym_DASH] = ACTIONS(210),
    [sym_comment] = ACTIONS(9),
  },
  [80] = {
    [anon_sym_RPAREN] = ACTIONS(212),
    [anon_sym_DOT] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(212),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(212),
    [anon_sym_DASH] = ACTIONS(214),
    [sym_comment] = ACTIONS(9),
  },
  [81] = {
    [anon_sym_RPAREN] = ACTIONS(216),
    [sym_comment] = ACTIONS(9),
  },
  [82] = {
    [anon_sym_RPAREN] = ACTIONS(218),
    [sym_comment] = ACTIONS(9),
  },
  [83] = {
    [sym__sort] = STATE(100),
    [sym__type] = STATE(100),
    [sym_type_send] = STATE(100),
    [sym_type_recv] = STATE(100),
    [sym_type_select] = STATE(100),
    [sym_type_choice] = STATE(100),
    [sym_type_end] = STATE(100),
    [sym_type_call] = STATE(100),
    [sym_simple_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_QMARK] = ACTIONS(166),
    [anon_sym_BANG] = ACTIONS(168),
    [aux_sym_end] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(170),
    [sym_sort_int] = ACTIONS(220),
    [sym_sort_bool] = ACTIONS(220),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(9),
  },
  [84] = {
    [sym__sort] = STATE(101),
    [sym__type] = STATE(101),
    [sym_type_send] = STATE(101),
    [sym_type_recv] = STATE(101),
    [sym_type_select] = STATE(101),
    [sym_type_choice] = STATE(101),
    [sym_type_end] = STATE(101),
    [sym_type_call] = STATE(101),
    [sym_simple_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_QMARK] = ACTIONS(166),
    [anon_sym_BANG] = ACTIONS(168),
    [aux_sym_end] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(174),
    [sym_sort_int] = ACTIONS(222),
    [sym_sort_bool] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(9),
  },
  [85] = {
    [sym__type_of_label] = STATE(103),
    [sym_label] = ACTIONS(224),
    [sym_comment] = ACTIONS(9),
  },
  [86] = {
    [anon_sym_DOT] = ACTIONS(226),
    [sym_comment] = ACTIONS(9),
  },
  [87] = {
    [sym__type_of_label] = STATE(105),
    [sym_label] = ACTIONS(224),
    [sym_comment] = ACTIONS(9),
  },
  [88] = {
    [anon_sym_DOT] = ACTIONS(228),
    [sym_comment] = ACTIONS(9),
  },
  [89] = {
    [sym__proc] = STATE(107),
    [sym_par] = STATE(107),
    [sym_nu] = STATE(107),
    [sym_recv] = STATE(107),
    [sym_send] = STATE(107),
    [sym_end] = STATE(107),
    [sym_call] = STATE(107),
    [sym__name] = STATE(14),
    [sym_reserved_name] = STATE(14),
    [sym_polarized_name] = STATE(14),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [90] = {
    [aux_sym_pattern_tuple_repeat1] = STATE(110),
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(232),
    [sym_comment] = ACTIONS(9),
  },
  [91] = {
    [anon_sym_SEMI] = ACTIONS(234),
    [anon_sym_RBRACE] = ACTIONS(234),
    [sym_comment] = ACTIONS(9),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(236),
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_PIPE] = ACTIONS(236),
    [anon_sym_SEMI] = ACTIONS(236),
    [anon_sym_RBRACE] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(236),
    [sym_comment] = ACTIONS(9),
  },
  [93] = {
    [aux_sym__complex_clauses_repeat1] = STATE(93),
    [anon_sym_SEMI] = ACTIONS(238),
    [anon_sym_RBRACE] = ACTIONS(234),
    [sym_comment] = ACTIONS(9),
  },
  [94] = {
    [sym__proc] = STATE(18),
    [sym_par] = STATE(18),
    [sym_nu] = STATE(18),
    [sym_recv] = STATE(18),
    [sym_send] = STATE(18),
    [sym_end] = STATE(18),
    [sym_call] = STATE(18),
    [sym__name] = STATE(19),
    [sym_reserved_name] = STATE(19),
    [sym_polarized_name] = STATE(19),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(34),
    [anon_sym_nu] = ACTIONS(241),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [95] = {
    [anon_sym_PIPE] = ACTIONS(243),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(245),
    [sym_comment] = ACTIONS(9),
  },
  [96] = {
    [anon_sym_QMARK] = ACTIONS(247),
    [anon_sym_BANG] = ACTIONS(249),
    [sym_comment] = ACTIONS(9),
  },
  [97] = {
    [aux_sym_tuple_repeat1] = STATE(117),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(120),
    [sym_comment] = ACTIONS(9),
  },
  [98] = {
    [sym__proc] = STATE(107),
    [sym_par] = STATE(107),
    [sym_nu] = STATE(107),
    [sym_recv] = STATE(107),
    [sym_send] = STATE(107),
    [sym_end] = STATE(107),
    [sym_call] = STATE(107),
    [sym__name] = STATE(19),
    [sym_reserved_name] = STATE(19),
    [sym_polarized_name] = STATE(19),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(34),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [99] = {
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_RBRACE] = ACTIONS(255),
    [sym_comment] = ACTIONS(9),
  },
  [100] = {
    [anon_sym_DOT] = ACTIONS(257),
    [sym_comment] = ACTIONS(9),
  },
  [101] = {
    [anon_sym_DOT] = ACTIONS(259),
    [sym_comment] = ACTIONS(9),
  },
  [102] = {
    [anon_sym_COLON] = ACTIONS(261),
    [sym_comment] = ACTIONS(9),
  },
  [103] = {
    [aux_sym_type_select_repeat1] = STATE(123),
    [anon_sym_SEMI] = ACTIONS(263),
    [anon_sym_RBRACE] = ACTIONS(265),
    [sym_comment] = ACTIONS(9),
  },
  [104] = {
    [sym__type] = STATE(124),
    [sym_type_send] = STATE(124),
    [sym_type_recv] = STATE(124),
    [sym_type_select] = STATE(124),
    [sym_type_choice] = STATE(124),
    [sym_type_end] = STATE(124),
    [sym_type_call] = STATE(124),
    [sym_simple_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_QMARK] = ACTIONS(132),
    [anon_sym_BANG] = ACTIONS(134),
    [aux_sym_end] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(9),
  },
  [105] = {
    [aux_sym_type_select_repeat1] = STATE(126),
    [anon_sym_SEMI] = ACTIONS(263),
    [anon_sym_RBRACE] = ACTIONS(267),
    [sym_comment] = ACTIONS(9),
  },
  [106] = {
    [sym__type] = STATE(127),
    [sym_type_send] = STATE(127),
    [sym_type_recv] = STATE(127),
    [sym_type_select] = STATE(127),
    [sym_type_choice] = STATE(127),
    [sym_type_end] = STATE(127),
    [sym_type_call] = STATE(127),
    [sym_simple_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_QMARK] = ACTIONS(132),
    [anon_sym_BANG] = ACTIONS(134),
    [aux_sym_end] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(9),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(269),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_RBRACE] = ACTIONS(269),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(269),
    [sym_comment] = ACTIONS(9),
  },
  [108] = {
    [anon_sym_RPAREN] = ACTIONS(271),
    [anon_sym_DOT] = ACTIONS(271),
    [anon_sym_DASH_GT] = ACTIONS(271),
    [anon_sym_COMMA] = ACTIONS(271),
    [sym_comment] = ACTIONS(9),
  },
  [109] = {
    [sym_pattern] = STATE(128),
    [sym_pattern_tuple] = STATE(32),
    [sym_simple_name] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
  },
  [110] = {
    [aux_sym_pattern_tuple_repeat1] = STATE(130),
    [anon_sym_RPAREN] = ACTIONS(273),
    [anon_sym_COMMA] = ACTIONS(232),
    [sym_comment] = ACTIONS(9),
  },
  [111] = {
    [sym_simple_name] = STATE(131),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [112] = {
    [sym__proc] = STATE(132),
    [sym_par] = STATE(132),
    [sym_nu] = STATE(132),
    [sym_recv] = STATE(132),
    [sym_send] = STATE(132),
    [sym_end] = STATE(132),
    [sym_call] = STATE(132),
    [sym__name] = STATE(96),
    [sym_reserved_name] = STATE(96),
    [sym_polarized_name] = STATE(96),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(188),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [113] = {
    [sym__clauses] = STATE(33),
    [sym_simple_clause] = STATE(33),
    [sym__complex_clauses] = STATE(33),
    [sym_pattern] = STATE(133),
    [sym_pattern_tuple] = STATE(32),
    [sym_simple_name] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
  },
  [114] = {
    [sym__expr] = STATE(134),
    [sym_tuple] = STATE(134),
    [sym_mul] = STATE(134),
    [sym_div] = STATE(134),
    [sym_add] = STATE(134),
    [sym_sub] = STATE(134),
    [sym__term] = STATE(134),
    [sym_boolean] = STATE(134),
    [sym_integer] = STATE(134),
    [sym_variable] = STATE(134),
    [sym__name] = STATE(40),
    [sym_reserved_name] = STATE(40),
    [sym_polarized_name] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_True] = ACTIONS(76),
    [anon_sym_False] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(78),
    [sym_label] = ACTIONS(275),
    [sym__digit] = ACTIONS(82),
    [sym_comment] = ACTIONS(9),
  },
  [115] = {
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_DOT] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(277),
    [anon_sym_SLASH] = ACTIONS(279),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(279),
    [sym_comment] = ACTIONS(9),
  },
  [116] = {
    [sym__expr] = STATE(135),
    [sym_tuple] = STATE(135),
    [sym_mul] = STATE(135),
    [sym_div] = STATE(135),
    [sym_add] = STATE(135),
    [sym_sub] = STATE(135),
    [sym__term] = STATE(135),
    [sym_boolean] = STATE(135),
    [sym_integer] = STATE(135),
    [sym_variable] = STATE(135),
    [sym__name] = STATE(40),
    [sym_reserved_name] = STATE(40),
    [sym_polarized_name] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_True] = ACTIONS(76),
    [anon_sym_False] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(78),
    [sym_label] = ACTIONS(281),
    [sym__digit] = ACTIONS(82),
    [sym_comment] = ACTIONS(9),
  },
  [117] = {
    [aux_sym_tuple_repeat1] = STATE(137),
    [anon_sym_RPAREN] = ACTIONS(283),
    [anon_sym_COMMA] = ACTIONS(253),
    [sym_comment] = ACTIONS(9),
  },
  [118] = {
    [sym__type] = STATE(124),
    [sym_type_send] = STATE(124),
    [sym_type_recv] = STATE(124),
    [sym_type_select] = STATE(124),
    [sym_type_choice] = STATE(124),
    [sym_type_end] = STATE(124),
    [sym_type_call] = STATE(124),
    [sym_simple_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_QMARK] = ACTIONS(166),
    [anon_sym_BANG] = ACTIONS(168),
    [aux_sym_end] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(9),
  },
  [119] = {
    [sym__type] = STATE(127),
    [sym_type_send] = STATE(127),
    [sym_type_recv] = STATE(127),
    [sym_type_select] = STATE(127),
    [sym_type_choice] = STATE(127),
    [sym_type_end] = STATE(127),
    [sym_type_call] = STATE(127),
    [sym_simple_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_QMARK] = ACTIONS(166),
    [anon_sym_BANG] = ACTIONS(168),
    [aux_sym_end] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(9),
  },
  [120] = {
    [sym__type] = STATE(140),
    [sym_type_send] = STATE(140),
    [sym_type_recv] = STATE(140),
    [sym_type_select] = STATE(140),
    [sym_type_choice] = STATE(140),
    [sym_type_end] = STATE(140),
    [sym_type_call] = STATE(140),
    [sym_simple_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_BANG] = ACTIONS(287),
    [aux_sym_end] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(9),
  },
  [121] = {
    [sym__type_of_label] = STATE(141),
    [sym_label] = ACTIONS(224),
    [sym_comment] = ACTIONS(9),
  },
  [122] = {
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_DOT] = ACTIONS(289),
    [anon_sym_SEMI] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(289),
    [sym_comment] = ACTIONS(9),
  },
  [123] = {
    [aux_sym_type_select_repeat1] = STATE(143),
    [anon_sym_SEMI] = ACTIONS(263),
    [anon_sym_RBRACE] = ACTIONS(291),
    [sym_comment] = ACTIONS(9),
  },
  [124] = {
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_DOT] = ACTIONS(293),
    [anon_sym_SEMI] = ACTIONS(293),
    [anon_sym_RBRACE] = ACTIONS(293),
    [sym_comment] = ACTIONS(9),
  },
  [125] = {
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_DOT] = ACTIONS(295),
    [anon_sym_SEMI] = ACTIONS(295),
    [anon_sym_RBRACE] = ACTIONS(295),
    [sym_comment] = ACTIONS(9),
  },
  [126] = {
    [aux_sym_type_select_repeat1] = STATE(143),
    [anon_sym_SEMI] = ACTIONS(263),
    [anon_sym_RBRACE] = ACTIONS(297),
    [sym_comment] = ACTIONS(9),
  },
  [127] = {
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_DOT] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_RBRACE] = ACTIONS(299),
    [sym_comment] = ACTIONS(9),
  },
  [128] = {
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_COMMA] = ACTIONS(301),
    [sym_comment] = ACTIONS(9),
  },
  [129] = {
    [anon_sym_RPAREN] = ACTIONS(303),
    [anon_sym_DOT] = ACTIONS(303),
    [anon_sym_DASH_GT] = ACTIONS(303),
    [anon_sym_COMMA] = ACTIONS(303),
    [sym_comment] = ACTIONS(9),
  },
  [130] = {
    [aux_sym_pattern_tuple_repeat1] = STATE(130),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_COMMA] = ACTIONS(305),
    [sym_comment] = ACTIONS(9),
  },
  [131] = {
    [anon_sym_RPAREN] = ACTIONS(308),
    [anon_sym_COLON] = ACTIONS(310),
    [sym_comment] = ACTIONS(9),
  },
  [132] = {
    [anon_sym_PIPE] = ACTIONS(243),
    [anon_sym_SEMI] = ACTIONS(92),
    [anon_sym_RBRACE] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [133] = {
    [anon_sym_DOT] = ACTIONS(312),
    [sym_comment] = ACTIONS(9),
  },
  [134] = {
    [anon_sym_DOT] = ACTIONS(314),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(120),
    [sym_comment] = ACTIONS(9),
  },
  [135] = {
    [anon_sym_RPAREN] = ACTIONS(316),
    [anon_sym_COMMA] = ACTIONS(316),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(120),
    [sym_comment] = ACTIONS(9),
  },
  [136] = {
    [anon_sym_RPAREN] = ACTIONS(318),
    [anon_sym_DOT] = ACTIONS(318),
    [anon_sym_COMMA] = ACTIONS(318),
    [anon_sym_STAR] = ACTIONS(318),
    [anon_sym_SLASH] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(318),
    [anon_sym_DASH] = ACTIONS(320),
    [sym_comment] = ACTIONS(9),
  },
  [137] = {
    [aux_sym_tuple_repeat1] = STATE(137),
    [anon_sym_RPAREN] = ACTIONS(316),
    [anon_sym_COMMA] = ACTIONS(322),
    [sym_comment] = ACTIONS(9),
  },
  [138] = {
    [sym__sort] = STATE(149),
    [sym__type] = STATE(149),
    [sym_type_send] = STATE(149),
    [sym_type_recv] = STATE(149),
    [sym_type_select] = STATE(149),
    [sym_type_choice] = STATE(149),
    [sym_type_end] = STATE(149),
    [sym_type_call] = STATE(149),
    [sym_simple_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_QMARK] = ACTIONS(166),
    [anon_sym_BANG] = ACTIONS(168),
    [aux_sym_end] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(170),
    [sym_sort_int] = ACTIONS(325),
    [sym_sort_bool] = ACTIONS(325),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(9),
  },
  [139] = {
    [sym__sort] = STATE(150),
    [sym__type] = STATE(150),
    [sym_type_send] = STATE(150),
    [sym_type_recv] = STATE(150),
    [sym_type_select] = STATE(150),
    [sym_type_choice] = STATE(150),
    [sym_type_end] = STATE(150),
    [sym_type_call] = STATE(150),
    [sym_simple_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_QMARK] = ACTIONS(166),
    [anon_sym_BANG] = ACTIONS(168),
    [aux_sym_end] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(174),
    [sym_sort_int] = ACTIONS(327),
    [sym_sort_bool] = ACTIONS(327),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(9),
  },
  [140] = {
    [anon_sym_SEMI] = ACTIONS(329),
    [anon_sym_RBRACE] = ACTIONS(329),
    [sym_comment] = ACTIONS(9),
  },
  [141] = {
    [anon_sym_SEMI] = ACTIONS(331),
    [anon_sym_RBRACE] = ACTIONS(331),
    [sym_comment] = ACTIONS(9),
  },
  [142] = {
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_DOT] = ACTIONS(333),
    [anon_sym_SEMI] = ACTIONS(333),
    [anon_sym_RBRACE] = ACTIONS(333),
    [sym_comment] = ACTIONS(9),
  },
  [143] = {
    [aux_sym_type_select_repeat1] = STATE(143),
    [anon_sym_SEMI] = ACTIONS(335),
    [anon_sym_RBRACE] = ACTIONS(331),
    [sym_comment] = ACTIONS(9),
  },
  [144] = {
    [anon_sym_RPAREN] = ACTIONS(338),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_SEMI] = ACTIONS(338),
    [anon_sym_RBRACE] = ACTIONS(338),
    [sym_comment] = ACTIONS(9),
  },
  [145] = {
    [sym__proc] = STATE(59),
    [sym_par] = STATE(59),
    [sym_nu] = STATE(59),
    [sym_recv] = STATE(59),
    [sym_send] = STATE(59),
    [sym_end] = STATE(59),
    [sym_call] = STATE(59),
    [sym__name] = STATE(96),
    [sym_reserved_name] = STATE(96),
    [sym_polarized_name] = STATE(96),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(188),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [146] = {
    [sym__type] = STATE(151),
    [sym_type_send] = STATE(151),
    [sym_type_recv] = STATE(151),
    [sym_type_select] = STATE(151),
    [sym_type_choice] = STATE(151),
    [sym_type_end] = STATE(151),
    [sym_type_call] = STATE(151),
    [sym_simple_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_QMARK] = ACTIONS(132),
    [anon_sym_BANG] = ACTIONS(134),
    [aux_sym_end] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(9),
  },
  [147] = {
    [sym__proc] = STATE(73),
    [sym_par] = STATE(73),
    [sym_nu] = STATE(73),
    [sym_recv] = STATE(73),
    [sym_send] = STATE(73),
    [sym_end] = STATE(73),
    [sym_call] = STATE(73),
    [sym__name] = STATE(96),
    [sym_reserved_name] = STATE(96),
    [sym_polarized_name] = STATE(96),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(188),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [148] = {
    [sym__proc] = STATE(76),
    [sym_par] = STATE(76),
    [sym_nu] = STATE(76),
    [sym_recv] = STATE(76),
    [sym_send] = STATE(76),
    [sym_end] = STATE(76),
    [sym_call] = STATE(76),
    [sym__name] = STATE(96),
    [sym_reserved_name] = STATE(96),
    [sym_polarized_name] = STATE(96),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(188),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [149] = {
    [anon_sym_DOT] = ACTIONS(340),
    [sym_comment] = ACTIONS(9),
  },
  [150] = {
    [anon_sym_DOT] = ACTIONS(342),
    [sym_comment] = ACTIONS(9),
  },
  [151] = {
    [anon_sym_RPAREN] = ACTIONS(344),
    [sym_comment] = ACTIONS(9),
  },
  [152] = {
    [sym__type] = STATE(124),
    [sym_type_send] = STATE(124),
    [sym_type_recv] = STATE(124),
    [sym_type_select] = STATE(124),
    [sym_type_choice] = STATE(124),
    [sym_type_end] = STATE(124),
    [sym_type_call] = STATE(124),
    [sym_simple_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_BANG] = ACTIONS(287),
    [aux_sym_end] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(9),
  },
  [153] = {
    [sym__type] = STATE(127),
    [sym_type_send] = STATE(127),
    [sym_type_recv] = STATE(127),
    [sym_type_select] = STATE(127),
    [sym_type_choice] = STATE(127),
    [sym_type_end] = STATE(127),
    [sym_type_call] = STATE(127),
    [sym_simple_name] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_BANG] = ACTIONS(287),
    [aux_sym_end] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(9),
  },
  [154] = {
    [sym__proc] = STATE(107),
    [sym_par] = STATE(107),
    [sym_nu] = STATE(107),
    [sym_recv] = STATE(107),
    [sym_send] = STATE(107),
    [sym_end] = STATE(107),
    [sym_call] = STATE(107),
    [sym__name] = STATE(96),
    [sym_reserved_name] = STATE(96),
    [sym_polarized_name] = STATE(96),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(188),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
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
  [21] = {.count = 1, .reusable = false}, SHIFT(9),
  [23] = {.count = 1, .reusable = false}, SHIFT(10),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = false}, SHIFT(12),
  [29] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [31] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [34] = {.count = 1, .reusable = true}, SHIFT(16),
  [36] = {.count = 1, .reusable = false}, SHIFT(17),
  [38] = {.count = 1, .reusable = true}, REDUCE(sym_end, 1),
  [40] = {.count = 1, .reusable = true}, REDUCE(sym_reserved_name, 1),
  [42] = {.count = 1, .reusable = false}, REDUCE(sym_reserved_name, 1),
  [44] = {.count = 1, .reusable = true}, REDUCE(sym_polarized_name, 1),
  [46] = {.count = 1, .reusable = false}, REDUCE(sym_polarized_name, 1),
  [48] = {.count = 1, .reusable = true}, REDUCE(sym_proc_declaration, 3, .alias_sequence_id = 1),
  [50] = {.count = 1, .reusable = true}, SHIFT(20),
  [52] = {.count = 1, .reusable = true}, SHIFT(21),
  [54] = {.count = 1, .reusable = true}, SHIFT(22),
  [56] = {.count = 1, .reusable = true}, REDUCE(sym_call, 1, .alias_sequence_id = 1),
  [58] = {.count = 1, .reusable = false}, SHIFT(23),
  [60] = {.count = 1, .reusable = true}, SHIFT(25),
  [62] = {.count = 1, .reusable = true}, SHIFT(26),
  [64] = {.count = 1, .reusable = true}, SHIFT(27),
  [66] = {.count = 1, .reusable = true}, SHIFT(28),
  [68] = {.count = 1, .reusable = true}, SHIFT(30),
  [70] = {.count = 1, .reusable = true}, SHIFT(31),
  [72] = {.count = 1, .reusable = true}, SHIFT(32),
  [74] = {.count = 1, .reusable = true}, SHIFT(36),
  [76] = {.count = 1, .reusable = true}, SHIFT(37),
  [78] = {.count = 1, .reusable = false}, SHIFT(11),
  [80] = {.count = 1, .reusable = false}, SHIFT(39),
  [82] = {.count = 1, .reusable = true}, SHIFT(38),
  [84] = {.count = 1, .reusable = true}, SHIFT(42),
  [86] = {.count = 1, .reusable = true}, SHIFT(43),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym__proc, 3),
  [90] = {.count = 1, .reusable = false}, SHIFT(46),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_par, 3),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_recv, 3),
  [98] = {.count = 1, .reusable = true}, SHIFT(50),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1, .alias_sequence_id = 2),
  [102] = {.count = 1, .reusable = false}, SHIFT(51),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [106] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_integer, 1),
  [110] = {.count = 1, .reusable = false}, REDUCE(sym_integer, 1),
  [112] = {.count = 1, .reusable = true}, SHIFT(52),
  [114] = {.count = 1, .reusable = true}, SHIFT(53),
  [116] = {.count = 1, .reusable = false}, SHIFT(54),
  [118] = {.count = 1, .reusable = true}, SHIFT(55),
  [120] = {.count = 1, .reusable = false}, SHIFT(56),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 1),
  [124] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 1),
  [126] = {.count = 1, .reusable = true}, SHIFT(57),
  [128] = {.count = 1, .reusable = true}, SHIFT(58),
  [130] = {.count = 1, .reusable = true}, SHIFT(60),
  [132] = {.count = 1, .reusable = true}, SHIFT(61),
  [134] = {.count = 1, .reusable = true}, SHIFT(62),
  [136] = {.count = 1, .reusable = false}, SHIFT(63),
  [138] = {.count = 1, .reusable = false}, SHIFT(2),
  [140] = {.count = 1, .reusable = true}, SHIFT(66),
  [142] = {.count = 1, .reusable = true}, SHIFT(67),
  [144] = {.count = 1, .reusable = true}, SHIFT(68),
  [146] = {.count = 1, .reusable = true}, SHIFT(69),
  [148] = {.count = 1, .reusable = true}, SHIFT(70),
  [150] = {.count = 1, .reusable = true}, SHIFT(72),
  [152] = {.count = 1, .reusable = true}, SHIFT(74),
  [154] = {.count = 1, .reusable = true}, SHIFT(75),
  [156] = {.count = 1, .reusable = false}, SHIFT(77),
  [158] = {.count = 1, .reusable = false}, SHIFT(78),
  [160] = {.count = 1, .reusable = false}, SHIFT(79),
  [162] = {.count = 1, .reusable = false}, SHIFT(80),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_nu, 5, .alias_sequence_id = 3),
  [166] = {.count = 1, .reusable = true}, SHIFT(83),
  [168] = {.count = 1, .reusable = true}, SHIFT(84),
  [170] = {.count = 1, .reusable = true}, SHIFT(85),
  [172] = {.count = 1, .reusable = true}, SHIFT(86),
  [174] = {.count = 1, .reusable = true}, SHIFT(87),
  [176] = {.count = 1, .reusable = true}, SHIFT(88),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_type_end, 1),
  [180] = {.count = 1, .reusable = true}, SHIFT(89),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_type_call, 1, .alias_sequence_id = 1),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym__complex_clauses, 3),
  [186] = {.count = 1, .reusable = true}, SHIFT(92),
  [188] = {.count = 1, .reusable = true}, SHIFT(94),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_simple_clause, 3),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 3),
  [194] = {.count = 1, .reusable = false}, REDUCE(sym__expr, 3),
  [196] = {.count = 1, .reusable = false}, SHIFT(97),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_send, 5),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_mul, 3),
  [202] = {.count = 1, .reusable = false}, REDUCE(sym_mul, 3),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_div, 3),
  [206] = {.count = 1, .reusable = false}, REDUCE(sym_div, 3),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [210] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_sub, 3),
  [214] = {.count = 1, .reusable = false}, REDUCE(sym_sub, 3),
  [216] = {.count = 1, .reusable = true}, SHIFT(98),
  [218] = {.count = 1, .reusable = true}, SHIFT(99),
  [220] = {.count = 1, .reusable = true}, SHIFT(100),
  [222] = {.count = 1, .reusable = true}, SHIFT(101),
  [224] = {.count = 1, .reusable = true}, SHIFT(102),
  [226] = {.count = 1, .reusable = true}, SHIFT(104),
  [228] = {.count = 1, .reusable = true}, SHIFT(106),
  [230] = {.count = 1, .reusable = true}, SHIFT(108),
  [232] = {.count = 1, .reusable = true}, SHIFT(109),
  [234] = {.count = 1, .reusable = true}, REDUCE(aux_sym__complex_clauses_repeat1, 2),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym__complex_clauses, 4),
  [238] = {.count = 2, .reusable = true}, REDUCE(aux_sym__complex_clauses_repeat1, 2), SHIFT_REPEAT(69),
  [241] = {.count = 1, .reusable = false}, SHIFT(111),
  [243] = {.count = 1, .reusable = true}, SHIFT(112),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_complex_clause, 3),
  [247] = {.count = 1, .reusable = true}, SHIFT(113),
  [249] = {.count = 1, .reusable = true}, SHIFT(114),
  [251] = {.count = 1, .reusable = true}, SHIFT(115),
  [253] = {.count = 1, .reusable = true}, SHIFT(116),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym__type, 3),
  [257] = {.count = 1, .reusable = true}, SHIFT(118),
  [259] = {.count = 1, .reusable = true}, SHIFT(119),
  [261] = {.count = 1, .reusable = true}, SHIFT(120),
  [263] = {.count = 1, .reusable = true}, SHIFT(121),
  [265] = {.count = 1, .reusable = true}, SHIFT(122),
  [267] = {.count = 1, .reusable = true}, SHIFT(125),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_nu, 7, .alias_sequence_id = 3),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_tuple, 5),
  [273] = {.count = 1, .reusable = true}, SHIFT(129),
  [275] = {.count = 1, .reusable = false}, SHIFT(134),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 5),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 5),
  [281] = {.count = 1, .reusable = false}, SHIFT(135),
  [283] = {.count = 1, .reusable = true}, SHIFT(136),
  [285] = {.count = 1, .reusable = true}, SHIFT(138),
  [287] = {.count = 1, .reusable = true}, SHIFT(139),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_type_choice, 4),
  [291] = {.count = 1, .reusable = true}, SHIFT(142),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_type_recv, 4),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_type_select, 4),
  [297] = {.count = 1, .reusable = true}, SHIFT(144),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_type_send, 4),
  [301] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pattern_tuple_repeat1, 2),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_tuple, 6),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_tuple_repeat1, 2), SHIFT_REPEAT(109),
  [308] = {.count = 1, .reusable = true}, SHIFT(145),
  [310] = {.count = 1, .reusable = true}, SHIFT(146),
  [312] = {.count = 1, .reusable = true}, SHIFT(147),
  [314] = {.count = 1, .reusable = true}, SHIFT(148),
  [316] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 6),
  [320] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 6),
  [322] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(116),
  [325] = {.count = 1, .reusable = true}, SHIFT(149),
  [327] = {.count = 1, .reusable = true}, SHIFT(150),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym__type_of_label, 3),
  [331] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_select_repeat1, 2),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_type_choice, 5),
  [335] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_select_repeat1, 2), SHIFT_REPEAT(121),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_type_select, 5),
  [340] = {.count = 1, .reusable = true}, SHIFT(152),
  [342] = {.count = 1, .reusable = true}, SHIFT(153),
  [344] = {.count = 1, .reusable = true}, SHIFT(154),
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
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
