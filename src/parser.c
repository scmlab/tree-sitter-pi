#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 245
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 2
#define TOKEN_COUNT 41
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
  anon_sym_if = 16,
  anon_sym_then = 17,
  anon_sym_else = 18,
  anon_sym_STAR = 19,
  anon_sym_SLASH = 20,
  anon_sym_PLUS = 21,
  anon_sym_DASH = 22,
  anon_sym_EQ_EQ = 23,
  anon_sym_BANG_EQ = 24,
  anon_sym_GT = 25,
  anon_sym_GT_EQ = 26,
  anon_sym_LT = 27,
  anon_sym_LT_EQ = 28,
  anon_sym_True = 29,
  anon_sym_False = 30,
  sym_string = 31,
  sym_sort_int = 32,
  sym_sort_bool = 33,
  anon_sym_stdin = 34,
  anon_sym_stdout = 35,
  aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH = 36,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH = 37,
  sym_label = 38,
  sym__digit = 39,
  sym_comment = 40,
  sym_program = 41,
  sym_proc_declaration = 42,
  sym__proc = 43,
  sym_par = 44,
  sym_nu = 45,
  sym_recv = 46,
  sym_send = 47,
  sym_end = 48,
  sym_call = 49,
  sym__clauses = 50,
  sym_simple_clause = 51,
  sym__complex_clauses = 52,
  sym_complex_clause = 53,
  sym_pattern = 54,
  sym_pattern_tuple = 55,
  sym__expr = 56,
  sym_if_then_else = 57,
  sym_tuple = 58,
  sym_mul = 59,
  sym_div = 60,
  sym_add = 61,
  sym_sub = 62,
  sym_eq = 63,
  sym_neq = 64,
  sym_gt = 65,
  sym_gte = 66,
  sym_lt = 67,
  sym_lte = 68,
  sym__term = 69,
  sym_boolean = 70,
  sym_integer = 71,
  sym_variable = 72,
  sym__sort = 73,
  sym__type = 74,
  sym_type_send = 75,
  sym_type_recv = 76,
  sym_type_select = 77,
  sym_type_choice = 78,
  sym_type_end = 79,
  sym_type_call = 80,
  sym__type_of_label = 81,
  sym__name = 82,
  sym_reserved_name = 83,
  sym_polarized_name = 84,
  sym_simple_name = 85,
  aux_sym_program_repeat1 = 86,
  aux_sym__complex_clauses_repeat1 = 87,
  aux_sym_pattern_tuple_repeat1 = 88,
  aux_sym_tuple_repeat1 = 89,
  aux_sym_type_select_repeat1 = 90,
  alias_sym_name = 91,
  alias_sym_process_name = 92,
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
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [sym_string] = "string",
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
  [sym_if_then_else] = "if_then_else",
  [sym_tuple] = "tuple",
  [sym_mul] = "mul",
  [sym_div] = "div",
  [sym_add] = "add",
  [sym_sub] = "sub",
  [sym_eq] = "eq",
  [sym_neq] = "neq",
  [sym_gt] = "gt",
  [sym_gte] = "gte",
  [sym_lt] = "lt",
  [sym_lte] = "lte",
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
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
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
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
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
  [sym_if_then_else] = {
    .visible = true,
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
  [sym_eq] = {
    .visible = true,
    .named = true,
  },
  [sym_neq] = {
    .visible = true,
    .named = true,
  },
  [sym_gt] = {
    .visible = true,
    .named = true,
  },
  [sym_gte] = {
    .visible = true,
    .named = true,
  },
  [sym_lt] = {
    .visible = true,
    .named = true,
  },
  [sym_lte] = {
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
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == ':')
        ADVANCE(18);
      if (lookahead == ';')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(26);
      if (lookahead == 'B')
        ADVANCE(27);
      if (lookahead == 'F')
        ADVANCE(32);
      if (lookahead == 'I')
        ADVANCE(37);
      if (lookahead == 'T')
        ADVANCE(40);
      if (lookahead == '\\')
        SKIP(44);
      if (lookahead == '`')
        ADVANCE(45);
      if (lookahead == 'e')
        ADVANCE(47);
      if (lookahead == 'i')
        ADVANCE(53);
      if (lookahead == 'n')
        ADVANCE(55);
      if (lookahead == 's')
        ADVANCE(57);
      if (lookahead == 't')
        ADVANCE(65);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '|')
        ADVANCE(70);
      if (lookahead == '}')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(31);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 4:
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(6);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(4);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '>')
        ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'o')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'o')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'l')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_sort_bool);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'a')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == 'l')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 's')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'e')
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'n')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == 't')
        ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_sort_int);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'r')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(31);
      END_STATE();
    case 41:
      if (lookahead == 'u')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'e')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 44:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 45:
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == 'l')
        ADVANCE(48);
      if (lookahead == 'n')
        ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 's')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'e')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 51:
      if (lookahead == 'd')
        ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_end);
      END_STATE();
    case 53:
      if (lookahead == 'f')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 55:
      if (lookahead == 'u')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_nu);
      END_STATE();
    case 57:
      if (lookahead == 't')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'd')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'i')
        ADVANCE(60);
      if (lookahead == 'o')
        ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == 'n')
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_stdin);
      END_STATE();
    case 62:
      if (lookahead == 'u')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 't')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_stdout);
      END_STATE();
    case 65:
      if (lookahead == 'h')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'e')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'n')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 72:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(73);
      if (lookahead == '/')
        ADVANCE(74);
      if (lookahead == '\\')
        SKIP(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(72);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 73:
      if (lookahead == '-')
        ADVANCE(13);
      END_STATE();
    case 74:
      if (lookahead == '/')
        ADVANCE(17);
      END_STATE();
    case 75:
      if (lookahead == 'n')
        SKIP(72);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(78);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(74);
      if (lookahead == ':')
        ADVANCE(18);
      if (lookahead == ';')
        ADVANCE(19);
      if (lookahead == '=')
        ADVANCE(79);
      if (lookahead == '\\')
        SKIP(80);
      if (lookahead == '}')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(77);
      END_STATE();
    case 78:
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '>')
        ADVANCE(14);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 80:
      if (lookahead == 'n')
        SKIP(77);
      END_STATE();
    case 81:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(73);
      if (lookahead == '/')
        ADVANCE(74);
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
      if (lookahead == '-')
        ADVANCE(73);
      if (lookahead == '/')
        ADVANCE(74);
      if (lookahead == '=')
        ADVANCE(79);
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
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(73);
      if (lookahead == '/')
        ADVANCE(74);
      if (lookahead == '\\')
        SKIP(86);
      if (lookahead == '`')
        ADVANCE(45);
      if (lookahead == 'e')
        ADVANCE(87);
      if (lookahead == 's')
        ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(85);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 86:
      if (lookahead == 'n')
        SKIP(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(76);
      if (lookahead == 'n')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(76);
      if (lookahead == 'd')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_end);
      if (lookahead == '\'')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(76);
      if (lookahead == 't')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(76);
      if (lookahead == 'd')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(76);
      if (lookahead == 'i')
        ADVANCE(93);
      if (lookahead == 'o')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(76);
      if (lookahead == 'n')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_stdin);
      if (lookahead == '\'')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(76);
      if (lookahead == 'u')
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(76);
      if (lookahead == 't')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_stdout);
      if (lookahead == '\'')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 98:
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(73);
      if (lookahead == '/')
        ADVANCE(74);
      if (lookahead == '\\')
        SKIP(99);
      if (lookahead == '`')
        ADVANCE(45);
      if (lookahead == 'e')
        ADVANCE(87);
      if (lookahead == 'n')
        ADVANCE(100);
      if (lookahead == 's')
        ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(98);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 99:
      if (lookahead == 'n')
        SKIP(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(76);
      if (lookahead == 'u')
        ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_nu);
      if (lookahead == '\'')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 102:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(73);
      if (lookahead == '/')
        ADVANCE(74);
      if (lookahead == ';')
        ADVANCE(19);
      if (lookahead == '\\')
        SKIP(103);
      if (lookahead == '|')
        ADVANCE(70);
      if (lookahead == '}')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(102);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 103:
      if (lookahead == 'n')
        SKIP(102);
      END_STATE();
    case 104:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(106);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(26);
      if (lookahead == '\\')
        SKIP(107);
      if (lookahead == 'e')
        ADVANCE(108);
      if (lookahead == 't')
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(13);
      END_STATE();
    case 106:
      if (lookahead == '=')
        ADVANCE(23);
      END_STATE();
    case 107:
      if (lookahead == 'n')
        SKIP(104);
      END_STATE();
    case 108:
      if (lookahead == 'l')
        ADVANCE(48);
      END_STATE();
    case 109:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(110);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(73);
      if (lookahead == '/')
        ADVANCE(74);
      if (lookahead == ';')
        ADVANCE(19);
      if (lookahead == '?')
        ADVANCE(26);
      if (lookahead == '\\')
        SKIP(111);
      if (lookahead == '|')
        ADVANCE(70);
      if (lookahead == '}')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(109);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 111:
      if (lookahead == 'n')
        SKIP(109);
      END_STATE();
    case 112:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(73);
      if (lookahead == '/')
        ADVANCE(74);
      if (lookahead == '\\')
        SKIP(113);
      if (lookahead == '|')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(112);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 113:
      if (lookahead == 'n')
        SKIP(112);
      END_STATE();
    case 114:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(73);
      if (lookahead == '/')
        ADVANCE(74);
      if (lookahead == '\\')
        SKIP(115);
      if (lookahead == '|')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(114);
      END_STATE();
    case 115:
      if (lookahead == 'n')
        SKIP(114);
      END_STATE();
    case 116:
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(73);
      if (lookahead == '/')
        ADVANCE(74);
      if (lookahead == '\\')
        SKIP(117);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(116);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 117:
      if (lookahead == 'n')
        SKIP(116);
      END_STATE();
    case 118:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(119);
      if (lookahead == '/')
        ADVANCE(74);
      if (lookahead == 'F')
        ADVANCE(32);
      if (lookahead == 'T')
        ADVANCE(40);
      if (lookahead == '\\')
        SKIP(121);
      if (lookahead == '`')
        ADVANCE(45);
      if (lookahead == 'i')
        ADVANCE(122);
      if (lookahead == 's')
        ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(118);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 119:
      if (lookahead == '-')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      END_STATE();
    case 121:
      if (lookahead == 'n')
        SKIP(118);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(76);
      if (lookahead == 'f')
        ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 124:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(73);
      if (lookahead == '/')
        ADVANCE(74);
      if (lookahead == ':')
        ADVANCE(18);
      if (lookahead == '\\')
        SKIP(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(124);
      END_STATE();
    case 125:
      if (lookahead == 'n')
        SKIP(124);
      END_STATE();
    case 126:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(78);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(74);
      if (lookahead == '\\')
        SKIP(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(126);
      END_STATE();
    case 127:
      if (lookahead == 'n')
        SKIP(126);
      END_STATE();
    case 128:
      if (lookahead == '!')
        ADVANCE(129);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(106);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '\\')
        SKIP(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(128);
      END_STATE();
    case 129:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 130:
      if (lookahead == 'n')
        SKIP(128);
      END_STATE();
    case 131:
      if (lookahead == '!')
        ADVANCE(129);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(105);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(106);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '\\')
        SKIP(132);
      if (lookahead == 'e')
        ADVANCE(108);
      if (lookahead == 't')
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(131);
      END_STATE();
    case 132:
      if (lookahead == 'n')
        SKIP(131);
      END_STATE();
    case 133:
      if (lookahead == '!')
        ADVANCE(110);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(73);
      if (lookahead == '/')
        ADVANCE(74);
      if (lookahead == '?')
        ADVANCE(26);
      if (lookahead == 'B')
        ADVANCE(134);
      if (lookahead == 'I')
        ADVANCE(135);
      if (lookahead == '\\')
        SKIP(136);
      if (lookahead == 'e')
        ADVANCE(87);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(133);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 134:
      if (lookahead == 'o')
        ADVANCE(28);
      END_STATE();
    case 135:
      if (lookahead == 'n')
        ADVANCE(38);
      END_STATE();
    case 136:
      if (lookahead == 'n')
        SKIP(133);
      END_STATE();
    case 137:
      if (lookahead == '!')
        ADVANCE(129);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(105);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(106);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '\\')
        SKIP(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(137);
      END_STATE();
    case 138:
      if (lookahead == 'n')
        SKIP(137);
      END_STATE();
    case 139:
      if (lookahead == '-')
        ADVANCE(73);
      if (lookahead == '/')
        ADVANCE(74);
      if (lookahead == ';')
        ADVANCE(19);
      if (lookahead == '\\')
        SKIP(140);
      if (lookahead == '|')
        ADVANCE(70);
      if (lookahead == '}')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(139);
      END_STATE();
    case 140:
      if (lookahead == 'n')
        SKIP(139);
      END_STATE();
    case 141:
      if (lookahead == '-')
        ADVANCE(78);
      if (lookahead == '/')
        ADVANCE(74);
      if (lookahead == '\\')
        SKIP(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(141);
      END_STATE();
    case 142:
      if (lookahead == 'n')
        SKIP(141);
      END_STATE();
    case 143:
      if (lookahead == '!')
        ADVANCE(129);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(105);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(106);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '\\')
        SKIP(144);
      if (lookahead == 't')
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(143);
      END_STATE();
    case 144:
      if (lookahead == 'n')
        SKIP(143);
      END_STATE();
    case 145:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(73);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(74);
      if (lookahead == ';')
        ADVANCE(19);
      if (lookahead == '\\')
        SKIP(146);
      if (lookahead == '}')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(145);
      END_STATE();
    case 146:
      if (lookahead == 'n')
        SKIP(145);
      END_STATE();
    case 147:
      if (lookahead == '!')
        ADVANCE(129);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(105);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(106);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '\\')
        SKIP(148);
      if (lookahead == 'e')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(147);
      END_STATE();
    case 148:
      if (lookahead == 'n')
        SKIP(147);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 72},
  [2] = {.lex_state = 77},
  [3] = {.lex_state = 81},
  [4] = {.lex_state = 83},
  [5] = {.lex_state = 72},
  [6] = {.lex_state = 85},
  [7] = {.lex_state = 72},
  [8] = {.lex_state = 98},
  [9] = {.lex_state = 102},
  [10] = {.lex_state = 104},
  [11] = {.lex_state = 104},
  [12] = {.lex_state = 109},
  [13] = {.lex_state = 112},
  [14] = {.lex_state = 109},
  [15] = {.lex_state = 102},
  [16] = {.lex_state = 98},
  [17] = {.lex_state = 72},
  [18] = {.lex_state = 114},
  [19] = {.lex_state = 109},
  [20] = {.lex_state = 85},
  [21] = {.lex_state = 116},
  [22] = {.lex_state = 118},
  [23] = {.lex_state = 72},
  [24] = {.lex_state = 124},
  [25] = {.lex_state = 102},
  [26] = {.lex_state = 85},
  [27] = {.lex_state = 116},
  [28] = {.lex_state = 118},
  [29] = {.lex_state = 112},
  [30] = {.lex_state = 116},
  [31] = {.lex_state = 116},
  [32] = {.lex_state = 126},
  [33] = {.lex_state = 102},
  [34] = {.lex_state = 128},
  [35] = {.lex_state = 126},
  [36] = {.lex_state = 118},
  [37] = {.lex_state = 118},
  [38] = {.lex_state = 131},
  [39] = {.lex_state = 131},
  [40] = {.lex_state = 128},
  [41] = {.lex_state = 131},
  [42] = {.lex_state = 124},
  [43] = {.lex_state = 85},
  [44] = {.lex_state = 133},
  [45] = {.lex_state = 114},
  [46] = {.lex_state = 128},
  [47] = {.lex_state = 128},
  [48] = {.lex_state = 137},
  [49] = {.lex_state = 139},
  [50] = {.lex_state = 141},
  [51] = {.lex_state = 85},
  [52] = {.lex_state = 118},
  [53] = {.lex_state = 137},
  [54] = {.lex_state = 118},
  [55] = {.lex_state = 143},
  [56] = {.lex_state = 85},
  [57] = {.lex_state = 118},
  [58] = {.lex_state = 118},
  [59] = {.lex_state = 118},
  [60] = {.lex_state = 118},
  [61] = {.lex_state = 118},
  [62] = {.lex_state = 118},
  [63] = {.lex_state = 118},
  [64] = {.lex_state = 118},
  [65] = {.lex_state = 118},
  [66] = {.lex_state = 118},
  [67] = {.lex_state = 85},
  [68] = {.lex_state = 133},
  [69] = {.lex_state = 102},
  [70] = {.lex_state = 133},
  [71] = {.lex_state = 133},
  [72] = {.lex_state = 133},
  [73] = {.lex_state = 145},
  [74] = {.lex_state = 114},
  [75] = {.lex_state = 145},
  [76] = {.lex_state = 85},
  [77] = {.lex_state = 85},
  [78] = {.lex_state = 116},
  [79] = {.lex_state = 116},
  [80] = {.lex_state = 102},
  [81] = {.lex_state = 139},
  [82] = {.lex_state = 85},
  [83] = {.lex_state = 102},
  [84] = {.lex_state = 143},
  [85] = {.lex_state = 131},
  [86] = {.lex_state = 118},
  [87] = {.lex_state = 118},
  [88] = {.lex_state = 118},
  [89] = {.lex_state = 118},
  [90] = {.lex_state = 118},
  [91] = {.lex_state = 118},
  [92] = {.lex_state = 118},
  [93] = {.lex_state = 118},
  [94] = {.lex_state = 118},
  [95] = {.lex_state = 118},
  [96] = {.lex_state = 118},
  [97] = {.lex_state = 143},
  [98] = {.lex_state = 118},
  [99] = {.lex_state = 118},
  [100] = {.lex_state = 118},
  [101] = {.lex_state = 118},
  [102] = {.lex_state = 118},
  [103] = {.lex_state = 118},
  [104] = {.lex_state = 118},
  [105] = {.lex_state = 118},
  [106] = {.lex_state = 118},
  [107] = {.lex_state = 118},
  [108] = {.lex_state = 118},
  [109] = {.lex_state = 102},
  [110] = {.lex_state = 131},
  [111] = {.lex_state = 131},
  [112] = {.lex_state = 128},
  [113] = {.lex_state = 128},
  [114] = {.lex_state = 128},
  [115] = {.lex_state = 128},
  [116] = {.lex_state = 128},
  [117] = {.lex_state = 128},
  [118] = {.lex_state = 128},
  [119] = {.lex_state = 128},
  [120] = {.lex_state = 114},
  [121] = {.lex_state = 114},
  [122] = {.lex_state = 133},
  [123] = {.lex_state = 133},
  [124] = {.lex_state = 116},
  [125] = {.lex_state = 128},
  [126] = {.lex_state = 116},
  [127] = {.lex_state = 128},
  [128] = {.lex_state = 85},
  [129] = {.lex_state = 137},
  [130] = {.lex_state = 139},
  [131] = {.lex_state = 102},
  [132] = {.lex_state = 139},
  [133] = {.lex_state = 98},
  [134] = {.lex_state = 139},
  [135] = {.lex_state = 109},
  [136] = {.lex_state = 118},
  [137] = {.lex_state = 137},
  [138] = {.lex_state = 137},
  [139] = {.lex_state = 137},
  [140] = {.lex_state = 137},
  [141] = {.lex_state = 137},
  [142] = {.lex_state = 137},
  [143] = {.lex_state = 137},
  [144] = {.lex_state = 137},
  [145] = {.lex_state = 137},
  [146] = {.lex_state = 118},
  [147] = {.lex_state = 118},
  [148] = {.lex_state = 147},
  [149] = {.lex_state = 143},
  [150] = {.lex_state = 143},
  [151] = {.lex_state = 143},
  [152] = {.lex_state = 143},
  [153] = {.lex_state = 143},
  [154] = {.lex_state = 143},
  [155] = {.lex_state = 143},
  [156] = {.lex_state = 143},
  [157] = {.lex_state = 85},
  [158] = {.lex_state = 145},
  [159] = {.lex_state = 128},
  [160] = {.lex_state = 128},
  [161] = {.lex_state = 124},
  [162] = {.lex_state = 139},
  [163] = {.lex_state = 133},
  [164] = {.lex_state = 139},
  [165] = {.lex_state = 133},
  [166] = {.lex_state = 102},
  [167] = {.lex_state = 126},
  [168] = {.lex_state = 116},
  [169] = {.lex_state = 137},
  [170] = {.lex_state = 72},
  [171] = {.lex_state = 85},
  [172] = {.lex_state = 116},
  [173] = {.lex_state = 118},
  [174] = {.lex_state = 147},
  [175] = {.lex_state = 131},
  [176] = {.lex_state = 118},
  [177] = {.lex_state = 137},
  [178] = {.lex_state = 147},
  [179] = {.lex_state = 143},
  [180] = {.lex_state = 118},
  [181] = {.lex_state = 118},
  [182] = {.lex_state = 118},
  [183] = {.lex_state = 118},
  [184] = {.lex_state = 118},
  [185] = {.lex_state = 118},
  [186] = {.lex_state = 118},
  [187] = {.lex_state = 118},
  [188] = {.lex_state = 118},
  [189] = {.lex_state = 118},
  [190] = {.lex_state = 118},
  [191] = {.lex_state = 133},
  [192] = {.lex_state = 133},
  [193] = {.lex_state = 133},
  [194] = {.lex_state = 116},
  [195] = {.lex_state = 145},
  [196] = {.lex_state = 139},
  [197] = {.lex_state = 145},
  [198] = {.lex_state = 145},
  [199] = {.lex_state = 139},
  [200] = {.lex_state = 145},
  [201] = {.lex_state = 137},
  [202] = {.lex_state = 126},
  [203] = {.lex_state = 137},
  [204] = {.lex_state = 124},
  [205] = {.lex_state = 139},
  [206] = {.lex_state = 128},
  [207] = {.lex_state = 128},
  [208] = {.lex_state = 118},
  [209] = {.lex_state = 137},
  [210] = {.lex_state = 131},
  [211] = {.lex_state = 137},
  [212] = {.lex_state = 118},
  [213] = {.lex_state = 118},
  [214] = {.lex_state = 128},
  [215] = {.lex_state = 147},
  [216] = {.lex_state = 147},
  [217] = {.lex_state = 147},
  [218] = {.lex_state = 147},
  [219] = {.lex_state = 147},
  [220] = {.lex_state = 147},
  [221] = {.lex_state = 147},
  [222] = {.lex_state = 147},
  [223] = {.lex_state = 133},
  [224] = {.lex_state = 133},
  [225] = {.lex_state = 139},
  [226] = {.lex_state = 139},
  [227] = {.lex_state = 145},
  [228] = {.lex_state = 139},
  [229] = {.lex_state = 145},
  [230] = {.lex_state = 85},
  [231] = {.lex_state = 133},
  [232] = {.lex_state = 85},
  [233] = {.lex_state = 85},
  [234] = {.lex_state = 137},
  [235] = {.lex_state = 143},
  [236] = {.lex_state = 147},
  [237] = {.lex_state = 128},
  [238] = {.lex_state = 128},
  [239] = {.lex_state = 114},
  [240] = {.lex_state = 118},
  [241] = {.lex_state = 133},
  [242] = {.lex_state = 133},
  [243] = {.lex_state = 85},
  [244] = {.lex_state = 147},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_nu] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_sort_int] = ACTIONS(1),
    [sym_sort_bool] = ACTIONS(1),
    [anon_sym_stdin] = ACTIONS(1),
    [anon_sym_stdout] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(1),
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
    [anon_sym_BANG] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_COMMA] = ACTIONS(40),
    [anon_sym_then] = ACTIONS(40),
    [anon_sym_else] = ACTIONS(40),
    [anon_sym_STAR] = ACTIONS(40),
    [anon_sym_SLASH] = ACTIONS(42),
    [anon_sym_PLUS] = ACTIONS(40),
    [anon_sym_DASH] = ACTIONS(42),
    [anon_sym_EQ_EQ] = ACTIONS(40),
    [anon_sym_BANG_EQ] = ACTIONS(40),
    [anon_sym_GT] = ACTIONS(42),
    [anon_sym_GT_EQ] = ACTIONS(40),
    [anon_sym_LT] = ACTIONS(42),
    [anon_sym_LT_EQ] = ACTIONS(40),
    [sym_comment] = ACTIONS(9),
  },
  [11] = {
    [anon_sym_RPAREN] = ACTIONS(44),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_BANG] = ACTIONS(46),
    [anon_sym_DOT] = ACTIONS(44),
    [anon_sym_COMMA] = ACTIONS(44),
    [anon_sym_then] = ACTIONS(44),
    [anon_sym_else] = ACTIONS(44),
    [anon_sym_STAR] = ACTIONS(44),
    [anon_sym_SLASH] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(44),
    [anon_sym_DASH] = ACTIONS(46),
    [anon_sym_EQ_EQ] = ACTIONS(44),
    [anon_sym_BANG_EQ] = ACTIONS(44),
    [anon_sym_GT] = ACTIONS(46),
    [anon_sym_GT_EQ] = ACTIONS(44),
    [anon_sym_LT] = ACTIONS(46),
    [anon_sym_LT_EQ] = ACTIONS(44),
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
    [sym__expr] = STATE(40),
    [sym_if_then_else] = STATE(40),
    [sym_tuple] = STATE(40),
    [sym_mul] = STATE(40),
    [sym_div] = STATE(40),
    [sym_add] = STATE(40),
    [sym_sub] = STATE(40),
    [sym_eq] = STATE(40),
    [sym_neq] = STATE(40),
    [sym_gt] = STATE(40),
    [sym_gte] = STATE(40),
    [sym_lt] = STATE(40),
    [sym_lte] = STATE(40),
    [sym__term] = STATE(40),
    [sym_boolean] = STATE(40),
    [sym_integer] = STATE(40),
    [sym_variable] = STATE(40),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(80),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(84),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [23] = {
    [sym_simple_name] = STATE(42),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [24] = {
    [anon_sym_RPAREN] = ACTIONS(88),
    [anon_sym_COLON] = ACTIONS(90),
    [sym_comment] = ACTIONS(9),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(92),
    [anon_sym_SEMI] = ACTIONS(92),
    [anon_sym_RBRACE] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [26] = {
    [sym__proc] = STATE(45),
    [sym_par] = STATE(45),
    [sym_nu] = STATE(45),
    [sym_recv] = STATE(45),
    [sym_send] = STATE(45),
    [sym_end] = STATE(45),
    [sym_call] = STATE(45),
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
    [sym_pattern] = STATE(46),
    [sym_pattern_tuple] = STATE(32),
    [sym_simple_name] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
  },
  [28] = {
    [sym__expr] = STATE(47),
    [sym_if_then_else] = STATE(47),
    [sym_tuple] = STATE(47),
    [sym_mul] = STATE(47),
    [sym_div] = STATE(47),
    [sym_add] = STATE(47),
    [sym_sub] = STATE(47),
    [sym_eq] = STATE(47),
    [sym_neq] = STATE(47),
    [sym_gt] = STATE(47),
    [sym_gte] = STATE(47),
    [sym_lt] = STATE(47),
    [sym_lte] = STATE(47),
    [sym__term] = STATE(47),
    [sym_boolean] = STATE(47),
    [sym_integer] = STATE(47),
    [sym_variable] = STATE(47),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(94),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(96),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(98),
    [sym_comment] = ACTIONS(9),
  },
  [30] = {
    [sym_pattern] = STATE(48),
    [sym_pattern_tuple] = STATE(32),
    [sym_simple_name] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
  },
  [31] = {
    [sym_complex_clause] = STATE(49),
    [sym_pattern] = STATE(50),
    [sym_pattern_tuple] = STATE(32),
    [sym_simple_name] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
  },
  [32] = {
    [anon_sym_RPAREN] = ACTIONS(100),
    [anon_sym_DOT] = ACTIONS(100),
    [anon_sym_DASH_GT] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(100),
    [sym_comment] = ACTIONS(9),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_SEMI] = ACTIONS(102),
    [anon_sym_RBRACE] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(102),
    [sym_comment] = ACTIONS(9),
  },
  [34] = {
    [anon_sym_DOT] = ACTIONS(104),
    [sym_comment] = ACTIONS(9),
  },
  [35] = {
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_DOT] = ACTIONS(106),
    [anon_sym_DASH_GT] = ACTIONS(106),
    [anon_sym_COMMA] = ACTIONS(106),
    [sym_comment] = ACTIONS(9),
  },
  [36] = {
    [sym__expr] = STATE(53),
    [sym_if_then_else] = STATE(53),
    [sym_tuple] = STATE(53),
    [sym_mul] = STATE(53),
    [sym_div] = STATE(53),
    [sym_add] = STATE(53),
    [sym_sub] = STATE(53),
    [sym_eq] = STATE(53),
    [sym_neq] = STATE(53),
    [sym_gt] = STATE(53),
    [sym_gte] = STATE(53),
    [sym_lt] = STATE(53),
    [sym_lte] = STATE(53),
    [sym__term] = STATE(53),
    [sym_boolean] = STATE(53),
    [sym_integer] = STATE(53),
    [sym_variable] = STATE(53),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(108),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(110),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(112),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [37] = {
    [sym__expr] = STATE(55),
    [sym_if_then_else] = STATE(55),
    [sym_tuple] = STATE(55),
    [sym_mul] = STATE(55),
    [sym_div] = STATE(55),
    [sym_add] = STATE(55),
    [sym_sub] = STATE(55),
    [sym_eq] = STATE(55),
    [sym_neq] = STATE(55),
    [sym_gt] = STATE(55),
    [sym_gte] = STATE(55),
    [sym_lt] = STATE(55),
    [sym_lte] = STATE(55),
    [sym__term] = STATE(55),
    [sym_boolean] = STATE(55),
    [sym_integer] = STATE(55),
    [sym_variable] = STATE(55),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(116),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(118),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [38] = {
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_then] = ACTIONS(120),
    [anon_sym_else] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [sym_comment] = ACTIONS(9),
  },
  [39] = {
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(124),
    [anon_sym_COMMA] = ACTIONS(124),
    [anon_sym_then] = ACTIONS(124),
    [anon_sym_else] = ACTIONS(124),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(126),
    [anon_sym_EQ_EQ] = ACTIONS(124),
    [anon_sym_BANG_EQ] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_GT_EQ] = ACTIONS(124),
    [anon_sym_LT] = ACTIONS(126),
    [anon_sym_LT_EQ] = ACTIONS(124),
    [sym_comment] = ACTIONS(9),
  },
  [40] = {
    [anon_sym_DOT] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [anon_sym_BANG_EQ] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(142),
    [anon_sym_GT_EQ] = ACTIONS(144),
    [anon_sym_LT] = ACTIONS(146),
    [anon_sym_LT_EQ] = ACTIONS(148),
    [sym_comment] = ACTIONS(9),
  },
  [41] = {
    [anon_sym_RPAREN] = ACTIONS(150),
    [anon_sym_DOT] = ACTIONS(150),
    [anon_sym_COMMA] = ACTIONS(150),
    [anon_sym_then] = ACTIONS(150),
    [anon_sym_else] = ACTIONS(150),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(152),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(152),
    [anon_sym_EQ_EQ] = ACTIONS(150),
    [anon_sym_BANG_EQ] = ACTIONS(150),
    [anon_sym_GT] = ACTIONS(152),
    [anon_sym_GT_EQ] = ACTIONS(150),
    [anon_sym_LT] = ACTIONS(152),
    [anon_sym_LT_EQ] = ACTIONS(150),
    [sym_comment] = ACTIONS(9),
  },
  [42] = {
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(156),
    [sym_comment] = ACTIONS(9),
  },
  [43] = {
    [sym__proc] = STATE(69),
    [sym_par] = STATE(69),
    [sym_nu] = STATE(69),
    [sym_recv] = STATE(69),
    [sym_send] = STATE(69),
    [sym_end] = STATE(69),
    [sym_call] = STATE(69),
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
  [44] = {
    [sym__type] = STATE(74),
    [sym_type_send] = STATE(74),
    [sym_type_recv] = STATE(74),
    [sym_type_select] = STATE(74),
    [sym_type_choice] = STATE(74),
    [sym_type_end] = STATE(74),
    [sym_type_call] = STATE(74),
    [sym_simple_name] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(160),
    [anon_sym_BANG] = ACTIONS(162),
    [aux_sym_end] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(9),
  },
  [45] = {
    [anon_sym_RPAREN] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(62),
    [sym_comment] = ACTIONS(9),
  },
  [46] = {
    [anon_sym_DOT] = ACTIONS(168),
    [sym_comment] = ACTIONS(9),
  },
  [47] = {
    [anon_sym_DOT] = ACTIONS(170),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [anon_sym_BANG_EQ] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(142),
    [anon_sym_GT_EQ] = ACTIONS(144),
    [anon_sym_LT] = ACTIONS(146),
    [anon_sym_LT_EQ] = ACTIONS(148),
    [sym_comment] = ACTIONS(9),
  },
  [48] = {
    [anon_sym_COMMA] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [49] = {
    [aux_sym__complex_clauses_repeat1] = STATE(81),
    [anon_sym_SEMI] = ACTIONS(174),
    [anon_sym_RBRACE] = ACTIONS(176),
    [sym_comment] = ACTIONS(9),
  },
  [50] = {
    [anon_sym_DASH_GT] = ACTIONS(178),
    [sym_comment] = ACTIONS(9),
  },
  [51] = {
    [sym__proc] = STATE(83),
    [sym_par] = STATE(83),
    [sym_nu] = STATE(83),
    [sym_recv] = STATE(83),
    [sym_send] = STATE(83),
    [sym_end] = STATE(83),
    [sym_call] = STATE(83),
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
  [52] = {
    [sym__expr] = STATE(84),
    [sym_if_then_else] = STATE(84),
    [sym_tuple] = STATE(84),
    [sym_mul] = STATE(84),
    [sym_div] = STATE(84),
    [sym_add] = STATE(84),
    [sym_sub] = STATE(84),
    [sym_eq] = STATE(84),
    [sym_neq] = STATE(84),
    [sym_gt] = STATE(84),
    [sym_gte] = STATE(84),
    [sym_lt] = STATE(84),
    [sym_lte] = STATE(84),
    [sym__term] = STATE(84),
    [sym_boolean] = STATE(84),
    [sym_integer] = STATE(84),
    [sym_variable] = STATE(84),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(180),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(182),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [53] = {
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_COMMA] = ACTIONS(186),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(196),
    [anon_sym_BANG_EQ] = ACTIONS(198),
    [anon_sym_GT] = ACTIONS(200),
    [anon_sym_GT_EQ] = ACTIONS(202),
    [anon_sym_LT] = ACTIONS(204),
    [anon_sym_LT_EQ] = ACTIONS(206),
    [sym_comment] = ACTIONS(9),
  },
  [54] = {
    [sym__expr] = STATE(97),
    [sym_if_then_else] = STATE(97),
    [sym_tuple] = STATE(97),
    [sym_mul] = STATE(97),
    [sym_div] = STATE(97),
    [sym_add] = STATE(97),
    [sym_sub] = STATE(97),
    [sym_eq] = STATE(97),
    [sym_neq] = STATE(97),
    [sym_gt] = STATE(97),
    [sym_gte] = STATE(97),
    [sym_lt] = STATE(97),
    [sym_lte] = STATE(97),
    [sym__term] = STATE(97),
    [sym_boolean] = STATE(97),
    [sym_integer] = STATE(97),
    [sym_variable] = STATE(97),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(208),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(210),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [55] = {
    [anon_sym_then] = ACTIONS(212),
    [anon_sym_STAR] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(222),
    [anon_sym_BANG_EQ] = ACTIONS(224),
    [anon_sym_GT] = ACTIONS(226),
    [anon_sym_GT_EQ] = ACTIONS(228),
    [anon_sym_LT] = ACTIONS(230),
    [anon_sym_LT_EQ] = ACTIONS(232),
    [sym_comment] = ACTIONS(9),
  },
  [56] = {
    [sym__proc] = STATE(109),
    [sym_par] = STATE(109),
    [sym_nu] = STATE(109),
    [sym_recv] = STATE(109),
    [sym_send] = STATE(109),
    [sym_end] = STATE(109),
    [sym_call] = STATE(109),
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
  [57] = {
    [sym__expr] = STATE(110),
    [sym_if_then_else] = STATE(110),
    [sym_tuple] = STATE(110),
    [sym_mul] = STATE(110),
    [sym_div] = STATE(110),
    [sym_add] = STATE(110),
    [sym_sub] = STATE(110),
    [sym_eq] = STATE(110),
    [sym_neq] = STATE(110),
    [sym_gt] = STATE(110),
    [sym_gte] = STATE(110),
    [sym_lt] = STATE(110),
    [sym_lte] = STATE(110),
    [sym__term] = STATE(110),
    [sym_boolean] = STATE(110),
    [sym_integer] = STATE(110),
    [sym_variable] = STATE(110),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(234),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(236),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [58] = {
    [sym__expr] = STATE(111),
    [sym_if_then_else] = STATE(111),
    [sym_tuple] = STATE(111),
    [sym_mul] = STATE(111),
    [sym_div] = STATE(111),
    [sym_add] = STATE(111),
    [sym_sub] = STATE(111),
    [sym_eq] = STATE(111),
    [sym_neq] = STATE(111),
    [sym_gt] = STATE(111),
    [sym_gte] = STATE(111),
    [sym_lt] = STATE(111),
    [sym_lte] = STATE(111),
    [sym__term] = STATE(111),
    [sym_boolean] = STATE(111),
    [sym_integer] = STATE(111),
    [sym_variable] = STATE(111),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(238),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(240),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [59] = {
    [sym__expr] = STATE(112),
    [sym_if_then_else] = STATE(112),
    [sym_tuple] = STATE(112),
    [sym_mul] = STATE(112),
    [sym_div] = STATE(112),
    [sym_add] = STATE(112),
    [sym_sub] = STATE(112),
    [sym_eq] = STATE(112),
    [sym_neq] = STATE(112),
    [sym_gt] = STATE(112),
    [sym_gte] = STATE(112),
    [sym_lt] = STATE(112),
    [sym_lte] = STATE(112),
    [sym__term] = STATE(112),
    [sym_boolean] = STATE(112),
    [sym_integer] = STATE(112),
    [sym_variable] = STATE(112),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(242),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(244),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [60] = {
    [sym__expr] = STATE(113),
    [sym_if_then_else] = STATE(113),
    [sym_tuple] = STATE(113),
    [sym_mul] = STATE(113),
    [sym_div] = STATE(113),
    [sym_add] = STATE(113),
    [sym_sub] = STATE(113),
    [sym_eq] = STATE(113),
    [sym_neq] = STATE(113),
    [sym_gt] = STATE(113),
    [sym_gte] = STATE(113),
    [sym_lt] = STATE(113),
    [sym_lte] = STATE(113),
    [sym__term] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_integer] = STATE(113),
    [sym_variable] = STATE(113),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(246),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(248),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [61] = {
    [sym__expr] = STATE(114),
    [sym_if_then_else] = STATE(114),
    [sym_tuple] = STATE(114),
    [sym_mul] = STATE(114),
    [sym_div] = STATE(114),
    [sym_add] = STATE(114),
    [sym_sub] = STATE(114),
    [sym_eq] = STATE(114),
    [sym_neq] = STATE(114),
    [sym_gt] = STATE(114),
    [sym_gte] = STATE(114),
    [sym_lt] = STATE(114),
    [sym_lte] = STATE(114),
    [sym__term] = STATE(114),
    [sym_boolean] = STATE(114),
    [sym_integer] = STATE(114),
    [sym_variable] = STATE(114),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(250),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(252),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [62] = {
    [sym__expr] = STATE(115),
    [sym_if_then_else] = STATE(115),
    [sym_tuple] = STATE(115),
    [sym_mul] = STATE(115),
    [sym_div] = STATE(115),
    [sym_add] = STATE(115),
    [sym_sub] = STATE(115),
    [sym_eq] = STATE(115),
    [sym_neq] = STATE(115),
    [sym_gt] = STATE(115),
    [sym_gte] = STATE(115),
    [sym_lt] = STATE(115),
    [sym_lte] = STATE(115),
    [sym__term] = STATE(115),
    [sym_boolean] = STATE(115),
    [sym_integer] = STATE(115),
    [sym_variable] = STATE(115),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(254),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(256),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [63] = {
    [sym__expr] = STATE(116),
    [sym_if_then_else] = STATE(116),
    [sym_tuple] = STATE(116),
    [sym_mul] = STATE(116),
    [sym_div] = STATE(116),
    [sym_add] = STATE(116),
    [sym_sub] = STATE(116),
    [sym_eq] = STATE(116),
    [sym_neq] = STATE(116),
    [sym_gt] = STATE(116),
    [sym_gte] = STATE(116),
    [sym_lt] = STATE(116),
    [sym_lte] = STATE(116),
    [sym__term] = STATE(116),
    [sym_boolean] = STATE(116),
    [sym_integer] = STATE(116),
    [sym_variable] = STATE(116),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(258),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(260),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [64] = {
    [sym__expr] = STATE(117),
    [sym_if_then_else] = STATE(117),
    [sym_tuple] = STATE(117),
    [sym_mul] = STATE(117),
    [sym_div] = STATE(117),
    [sym_add] = STATE(117),
    [sym_sub] = STATE(117),
    [sym_eq] = STATE(117),
    [sym_neq] = STATE(117),
    [sym_gt] = STATE(117),
    [sym_gte] = STATE(117),
    [sym_lt] = STATE(117),
    [sym_lte] = STATE(117),
    [sym__term] = STATE(117),
    [sym_boolean] = STATE(117),
    [sym_integer] = STATE(117),
    [sym_variable] = STATE(117),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(262),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(264),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [65] = {
    [sym__expr] = STATE(118),
    [sym_if_then_else] = STATE(118),
    [sym_tuple] = STATE(118),
    [sym_mul] = STATE(118),
    [sym_div] = STATE(118),
    [sym_add] = STATE(118),
    [sym_sub] = STATE(118),
    [sym_eq] = STATE(118),
    [sym_neq] = STATE(118),
    [sym_gt] = STATE(118),
    [sym_gte] = STATE(118),
    [sym_lt] = STATE(118),
    [sym_lte] = STATE(118),
    [sym__term] = STATE(118),
    [sym_boolean] = STATE(118),
    [sym_integer] = STATE(118),
    [sym_variable] = STATE(118),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(266),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(268),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [66] = {
    [sym__expr] = STATE(119),
    [sym_if_then_else] = STATE(119),
    [sym_tuple] = STATE(119),
    [sym_mul] = STATE(119),
    [sym_div] = STATE(119),
    [sym_add] = STATE(119),
    [sym_sub] = STATE(119),
    [sym_eq] = STATE(119),
    [sym_neq] = STATE(119),
    [sym_gt] = STATE(119),
    [sym_gte] = STATE(119),
    [sym_lt] = STATE(119),
    [sym_lte] = STATE(119),
    [sym__term] = STATE(119),
    [sym_boolean] = STATE(119),
    [sym_integer] = STATE(119),
    [sym_variable] = STATE(119),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(270),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(272),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [67] = {
    [sym__proc] = STATE(69),
    [sym_par] = STATE(69),
    [sym_nu] = STATE(69),
    [sym_recv] = STATE(69),
    [sym_send] = STATE(69),
    [sym_end] = STATE(69),
    [sym_call] = STATE(69),
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
    [sym__type] = STATE(120),
    [sym_type_send] = STATE(120),
    [sym_type_recv] = STATE(120),
    [sym_type_select] = STATE(120),
    [sym_type_choice] = STATE(120),
    [sym_type_end] = STATE(120),
    [sym_type_call] = STATE(120),
    [sym_simple_name] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(160),
    [anon_sym_BANG] = ACTIONS(162),
    [aux_sym_end] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(9),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(274),
    [anon_sym_PIPE] = ACTIONS(274),
    [anon_sym_SEMI] = ACTIONS(274),
    [anon_sym_RBRACE] = ACTIONS(274),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(274),
    [sym_comment] = ACTIONS(9),
  },
  [70] = {
    [sym__type] = STATE(121),
    [sym_type_send] = STATE(121),
    [sym_type_recv] = STATE(121),
    [sym_type_select] = STATE(121),
    [sym_type_choice] = STATE(121),
    [sym_type_end] = STATE(121),
    [sym_type_call] = STATE(121),
    [sym_simple_name] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(160),
    [anon_sym_BANG] = ACTIONS(162),
    [aux_sym_end] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(9),
  },
  [71] = {
    [sym__sort] = STATE(125),
    [sym__type] = STATE(125),
    [sym_type_send] = STATE(125),
    [sym_type_recv] = STATE(125),
    [sym_type_select] = STATE(125),
    [sym_type_choice] = STATE(125),
    [sym_type_end] = STATE(125),
    [sym_type_call] = STATE(125),
    [sym_simple_name] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(276),
    [anon_sym_BANG] = ACTIONS(278),
    [aux_sym_end] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(280),
    [sym_sort_int] = ACTIONS(282),
    [sym_sort_bool] = ACTIONS(282),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(9),
  },
  [72] = {
    [sym__sort] = STATE(127),
    [sym__type] = STATE(127),
    [sym_type_send] = STATE(127),
    [sym_type_recv] = STATE(127),
    [sym_type_select] = STATE(127),
    [sym_type_choice] = STATE(127),
    [sym_type_end] = STATE(127),
    [sym_type_call] = STATE(127),
    [sym_simple_name] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(276),
    [anon_sym_BANG] = ACTIONS(278),
    [aux_sym_end] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(284),
    [sym_sort_int] = ACTIONS(286),
    [sym_sort_bool] = ACTIONS(286),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(9),
  },
  [73] = {
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_DOT] = ACTIONS(288),
    [anon_sym_SEMI] = ACTIONS(288),
    [anon_sym_RBRACE] = ACTIONS(288),
    [sym_comment] = ACTIONS(9),
  },
  [74] = {
    [anon_sym_RPAREN] = ACTIONS(290),
    [sym_comment] = ACTIONS(9),
  },
  [75] = {
    [anon_sym_RPAREN] = ACTIONS(292),
    [anon_sym_DOT] = ACTIONS(292),
    [anon_sym_SEMI] = ACTIONS(292),
    [anon_sym_RBRACE] = ACTIONS(292),
    [sym_comment] = ACTIONS(9),
  },
  [76] = {
    [sym__proc] = STATE(83),
    [sym_par] = STATE(83),
    [sym_nu] = STATE(83),
    [sym_recv] = STATE(83),
    [sym_send] = STATE(83),
    [sym_end] = STATE(83),
    [sym_call] = STATE(83),
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
  [77] = {
    [sym__proc] = STATE(109),
    [sym_par] = STATE(109),
    [sym_nu] = STATE(109),
    [sym_recv] = STATE(109),
    [sym_send] = STATE(109),
    [sym_end] = STATE(109),
    [sym_call] = STATE(109),
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
  [78] = {
    [sym_pattern] = STATE(129),
    [sym_pattern_tuple] = STATE(32),
    [sym_simple_name] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
  },
  [79] = {
    [sym_complex_clause] = STATE(130),
    [sym_pattern] = STATE(50),
    [sym_pattern_tuple] = STATE(32),
    [sym_simple_name] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(294),
    [anon_sym_RPAREN] = ACTIONS(294),
    [anon_sym_PIPE] = ACTIONS(294),
    [anon_sym_SEMI] = ACTIONS(294),
    [anon_sym_RBRACE] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(294),
    [sym_comment] = ACTIONS(9),
  },
  [81] = {
    [aux_sym__complex_clauses_repeat1] = STATE(132),
    [anon_sym_SEMI] = ACTIONS(174),
    [anon_sym_RBRACE] = ACTIONS(296),
    [sym_comment] = ACTIONS(9),
  },
  [82] = {
    [sym__proc] = STATE(134),
    [sym_par] = STATE(134),
    [sym_nu] = STATE(134),
    [sym_recv] = STATE(134),
    [sym_send] = STATE(134),
    [sym_end] = STATE(134),
    [sym_call] = STATE(134),
    [sym__name] = STATE(135),
    [sym_reserved_name] = STATE(135),
    [sym_polarized_name] = STATE(135),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(298),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(300),
    [anon_sym_RPAREN] = ACTIONS(300),
    [anon_sym_PIPE] = ACTIONS(300),
    [anon_sym_SEMI] = ACTIONS(300),
    [anon_sym_RBRACE] = ACTIONS(300),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(300),
    [sym_comment] = ACTIONS(9),
  },
  [84] = {
    [anon_sym_then] = ACTIONS(302),
    [anon_sym_STAR] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(222),
    [anon_sym_BANG_EQ] = ACTIONS(224),
    [anon_sym_GT] = ACTIONS(226),
    [anon_sym_GT_EQ] = ACTIONS(228),
    [anon_sym_LT] = ACTIONS(230),
    [anon_sym_LT_EQ] = ACTIONS(232),
    [sym_comment] = ACTIONS(9),
  },
  [85] = {
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(304),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_then] = ACTIONS(304),
    [anon_sym_else] = ACTIONS(304),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_EQ_EQ] = ACTIONS(304),
    [anon_sym_BANG_EQ] = ACTIONS(304),
    [anon_sym_GT] = ACTIONS(306),
    [anon_sym_GT_EQ] = ACTIONS(304),
    [anon_sym_LT] = ACTIONS(306),
    [anon_sym_LT_EQ] = ACTIONS(304),
    [sym_comment] = ACTIONS(9),
  },
  [86] = {
    [sym__expr] = STATE(137),
    [sym_if_then_else] = STATE(137),
    [sym_tuple] = STATE(137),
    [sym_mul] = STATE(137),
    [sym_div] = STATE(137),
    [sym_add] = STATE(137),
    [sym_sub] = STATE(137),
    [sym_eq] = STATE(137),
    [sym_neq] = STATE(137),
    [sym_gt] = STATE(137),
    [sym_gte] = STATE(137),
    [sym_lt] = STATE(137),
    [sym_lte] = STATE(137),
    [sym__term] = STATE(137),
    [sym_boolean] = STATE(137),
    [sym_integer] = STATE(137),
    [sym_variable] = STATE(137),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(108),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(308),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(310),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [87] = {
    [sym__expr] = STATE(110),
    [sym_if_then_else] = STATE(110),
    [sym_tuple] = STATE(110),
    [sym_mul] = STATE(110),
    [sym_div] = STATE(110),
    [sym_add] = STATE(110),
    [sym_sub] = STATE(110),
    [sym_eq] = STATE(110),
    [sym_neq] = STATE(110),
    [sym_gt] = STATE(110),
    [sym_gte] = STATE(110),
    [sym_lt] = STATE(110),
    [sym_lte] = STATE(110),
    [sym__term] = STATE(110),
    [sym_boolean] = STATE(110),
    [sym_integer] = STATE(110),
    [sym_variable] = STATE(110),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(108),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(234),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(236),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [88] = {
    [sym__expr] = STATE(111),
    [sym_if_then_else] = STATE(111),
    [sym_tuple] = STATE(111),
    [sym_mul] = STATE(111),
    [sym_div] = STATE(111),
    [sym_add] = STATE(111),
    [sym_sub] = STATE(111),
    [sym_eq] = STATE(111),
    [sym_neq] = STATE(111),
    [sym_gt] = STATE(111),
    [sym_gte] = STATE(111),
    [sym_lt] = STATE(111),
    [sym_lte] = STATE(111),
    [sym__term] = STATE(111),
    [sym_boolean] = STATE(111),
    [sym_integer] = STATE(111),
    [sym_variable] = STATE(111),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(108),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(238),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(240),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [89] = {
    [sym__expr] = STATE(138),
    [sym_if_then_else] = STATE(138),
    [sym_tuple] = STATE(138),
    [sym_mul] = STATE(138),
    [sym_div] = STATE(138),
    [sym_add] = STATE(138),
    [sym_sub] = STATE(138),
    [sym_eq] = STATE(138),
    [sym_neq] = STATE(138),
    [sym_gt] = STATE(138),
    [sym_gte] = STATE(138),
    [sym_lt] = STATE(138),
    [sym_lte] = STATE(138),
    [sym__term] = STATE(138),
    [sym_boolean] = STATE(138),
    [sym_integer] = STATE(138),
    [sym_variable] = STATE(138),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(108),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(312),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(314),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [90] = {
    [sym__expr] = STATE(139),
    [sym_if_then_else] = STATE(139),
    [sym_tuple] = STATE(139),
    [sym_mul] = STATE(139),
    [sym_div] = STATE(139),
    [sym_add] = STATE(139),
    [sym_sub] = STATE(139),
    [sym_eq] = STATE(139),
    [sym_neq] = STATE(139),
    [sym_gt] = STATE(139),
    [sym_gte] = STATE(139),
    [sym_lt] = STATE(139),
    [sym_lte] = STATE(139),
    [sym__term] = STATE(139),
    [sym_boolean] = STATE(139),
    [sym_integer] = STATE(139),
    [sym_variable] = STATE(139),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(108),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(316),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(318),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [91] = {
    [sym__expr] = STATE(140),
    [sym_if_then_else] = STATE(140),
    [sym_tuple] = STATE(140),
    [sym_mul] = STATE(140),
    [sym_div] = STATE(140),
    [sym_add] = STATE(140),
    [sym_sub] = STATE(140),
    [sym_eq] = STATE(140),
    [sym_neq] = STATE(140),
    [sym_gt] = STATE(140),
    [sym_gte] = STATE(140),
    [sym_lt] = STATE(140),
    [sym_lte] = STATE(140),
    [sym__term] = STATE(140),
    [sym_boolean] = STATE(140),
    [sym_integer] = STATE(140),
    [sym_variable] = STATE(140),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(108),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(320),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(322),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [92] = {
    [sym__expr] = STATE(141),
    [sym_if_then_else] = STATE(141),
    [sym_tuple] = STATE(141),
    [sym_mul] = STATE(141),
    [sym_div] = STATE(141),
    [sym_add] = STATE(141),
    [sym_sub] = STATE(141),
    [sym_eq] = STATE(141),
    [sym_neq] = STATE(141),
    [sym_gt] = STATE(141),
    [sym_gte] = STATE(141),
    [sym_lt] = STATE(141),
    [sym_lte] = STATE(141),
    [sym__term] = STATE(141),
    [sym_boolean] = STATE(141),
    [sym_integer] = STATE(141),
    [sym_variable] = STATE(141),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(108),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(324),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(326),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [93] = {
    [sym__expr] = STATE(142),
    [sym_if_then_else] = STATE(142),
    [sym_tuple] = STATE(142),
    [sym_mul] = STATE(142),
    [sym_div] = STATE(142),
    [sym_add] = STATE(142),
    [sym_sub] = STATE(142),
    [sym_eq] = STATE(142),
    [sym_neq] = STATE(142),
    [sym_gt] = STATE(142),
    [sym_gte] = STATE(142),
    [sym_lt] = STATE(142),
    [sym_lte] = STATE(142),
    [sym__term] = STATE(142),
    [sym_boolean] = STATE(142),
    [sym_integer] = STATE(142),
    [sym_variable] = STATE(142),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(108),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(328),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(330),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [94] = {
    [sym__expr] = STATE(143),
    [sym_if_then_else] = STATE(143),
    [sym_tuple] = STATE(143),
    [sym_mul] = STATE(143),
    [sym_div] = STATE(143),
    [sym_add] = STATE(143),
    [sym_sub] = STATE(143),
    [sym_eq] = STATE(143),
    [sym_neq] = STATE(143),
    [sym_gt] = STATE(143),
    [sym_gte] = STATE(143),
    [sym_lt] = STATE(143),
    [sym_lte] = STATE(143),
    [sym__term] = STATE(143),
    [sym_boolean] = STATE(143),
    [sym_integer] = STATE(143),
    [sym_variable] = STATE(143),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(108),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(332),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(334),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [95] = {
    [sym__expr] = STATE(144),
    [sym_if_then_else] = STATE(144),
    [sym_tuple] = STATE(144),
    [sym_mul] = STATE(144),
    [sym_div] = STATE(144),
    [sym_add] = STATE(144),
    [sym_sub] = STATE(144),
    [sym_eq] = STATE(144),
    [sym_neq] = STATE(144),
    [sym_gt] = STATE(144),
    [sym_gte] = STATE(144),
    [sym_lt] = STATE(144),
    [sym_lte] = STATE(144),
    [sym__term] = STATE(144),
    [sym_boolean] = STATE(144),
    [sym_integer] = STATE(144),
    [sym_variable] = STATE(144),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(108),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(336),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(338),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [96] = {
    [sym__expr] = STATE(145),
    [sym_if_then_else] = STATE(145),
    [sym_tuple] = STATE(145),
    [sym_mul] = STATE(145),
    [sym_div] = STATE(145),
    [sym_add] = STATE(145),
    [sym_sub] = STATE(145),
    [sym_eq] = STATE(145),
    [sym_neq] = STATE(145),
    [sym_gt] = STATE(145),
    [sym_gte] = STATE(145),
    [sym_lt] = STATE(145),
    [sym_lte] = STATE(145),
    [sym__term] = STATE(145),
    [sym_boolean] = STATE(145),
    [sym_integer] = STATE(145),
    [sym_variable] = STATE(145),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(108),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(340),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(342),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [97] = {
    [anon_sym_then] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(222),
    [anon_sym_BANG_EQ] = ACTIONS(224),
    [anon_sym_GT] = ACTIONS(226),
    [anon_sym_GT_EQ] = ACTIONS(228),
    [anon_sym_LT] = ACTIONS(230),
    [anon_sym_LT_EQ] = ACTIONS(232),
    [sym_comment] = ACTIONS(9),
  },
  [98] = {
    [sym__expr] = STATE(148),
    [sym_if_then_else] = STATE(148),
    [sym_tuple] = STATE(148),
    [sym_mul] = STATE(148),
    [sym_div] = STATE(148),
    [sym_add] = STATE(148),
    [sym_sub] = STATE(148),
    [sym_eq] = STATE(148),
    [sym_neq] = STATE(148),
    [sym_gt] = STATE(148),
    [sym_gte] = STATE(148),
    [sym_lt] = STATE(148),
    [sym_lte] = STATE(148),
    [sym__term] = STATE(148),
    [sym_boolean] = STATE(148),
    [sym_integer] = STATE(148),
    [sym_variable] = STATE(148),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(346),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(348),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(350),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [99] = {
    [sym__expr] = STATE(110),
    [sym_if_then_else] = STATE(110),
    [sym_tuple] = STATE(110),
    [sym_mul] = STATE(110),
    [sym_div] = STATE(110),
    [sym_add] = STATE(110),
    [sym_sub] = STATE(110),
    [sym_eq] = STATE(110),
    [sym_neq] = STATE(110),
    [sym_gt] = STATE(110),
    [sym_gte] = STATE(110),
    [sym_lt] = STATE(110),
    [sym_lte] = STATE(110),
    [sym__term] = STATE(110),
    [sym_boolean] = STATE(110),
    [sym_integer] = STATE(110),
    [sym_variable] = STATE(110),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(234),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(236),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [100] = {
    [sym__expr] = STATE(111),
    [sym_if_then_else] = STATE(111),
    [sym_tuple] = STATE(111),
    [sym_mul] = STATE(111),
    [sym_div] = STATE(111),
    [sym_add] = STATE(111),
    [sym_sub] = STATE(111),
    [sym_eq] = STATE(111),
    [sym_neq] = STATE(111),
    [sym_gt] = STATE(111),
    [sym_gte] = STATE(111),
    [sym_lt] = STATE(111),
    [sym_lte] = STATE(111),
    [sym__term] = STATE(111),
    [sym_boolean] = STATE(111),
    [sym_integer] = STATE(111),
    [sym_variable] = STATE(111),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(238),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(240),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [101] = {
    [sym__expr] = STATE(149),
    [sym_if_then_else] = STATE(149),
    [sym_tuple] = STATE(149),
    [sym_mul] = STATE(149),
    [sym_div] = STATE(149),
    [sym_add] = STATE(149),
    [sym_sub] = STATE(149),
    [sym_eq] = STATE(149),
    [sym_neq] = STATE(149),
    [sym_gt] = STATE(149),
    [sym_gte] = STATE(149),
    [sym_lt] = STATE(149),
    [sym_lte] = STATE(149),
    [sym__term] = STATE(149),
    [sym_boolean] = STATE(149),
    [sym_integer] = STATE(149),
    [sym_variable] = STATE(149),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(352),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(354),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [102] = {
    [sym__expr] = STATE(150),
    [sym_if_then_else] = STATE(150),
    [sym_tuple] = STATE(150),
    [sym_mul] = STATE(150),
    [sym_div] = STATE(150),
    [sym_add] = STATE(150),
    [sym_sub] = STATE(150),
    [sym_eq] = STATE(150),
    [sym_neq] = STATE(150),
    [sym_gt] = STATE(150),
    [sym_gte] = STATE(150),
    [sym_lt] = STATE(150),
    [sym_lte] = STATE(150),
    [sym__term] = STATE(150),
    [sym_boolean] = STATE(150),
    [sym_integer] = STATE(150),
    [sym_variable] = STATE(150),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(356),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(358),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [103] = {
    [sym__expr] = STATE(151),
    [sym_if_then_else] = STATE(151),
    [sym_tuple] = STATE(151),
    [sym_mul] = STATE(151),
    [sym_div] = STATE(151),
    [sym_add] = STATE(151),
    [sym_sub] = STATE(151),
    [sym_eq] = STATE(151),
    [sym_neq] = STATE(151),
    [sym_gt] = STATE(151),
    [sym_gte] = STATE(151),
    [sym_lt] = STATE(151),
    [sym_lte] = STATE(151),
    [sym__term] = STATE(151),
    [sym_boolean] = STATE(151),
    [sym_integer] = STATE(151),
    [sym_variable] = STATE(151),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(360),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(362),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [104] = {
    [sym__expr] = STATE(152),
    [sym_if_then_else] = STATE(152),
    [sym_tuple] = STATE(152),
    [sym_mul] = STATE(152),
    [sym_div] = STATE(152),
    [sym_add] = STATE(152),
    [sym_sub] = STATE(152),
    [sym_eq] = STATE(152),
    [sym_neq] = STATE(152),
    [sym_gt] = STATE(152),
    [sym_gte] = STATE(152),
    [sym_lt] = STATE(152),
    [sym_lte] = STATE(152),
    [sym__term] = STATE(152),
    [sym_boolean] = STATE(152),
    [sym_integer] = STATE(152),
    [sym_variable] = STATE(152),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(364),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(366),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [105] = {
    [sym__expr] = STATE(153),
    [sym_if_then_else] = STATE(153),
    [sym_tuple] = STATE(153),
    [sym_mul] = STATE(153),
    [sym_div] = STATE(153),
    [sym_add] = STATE(153),
    [sym_sub] = STATE(153),
    [sym_eq] = STATE(153),
    [sym_neq] = STATE(153),
    [sym_gt] = STATE(153),
    [sym_gte] = STATE(153),
    [sym_lt] = STATE(153),
    [sym_lte] = STATE(153),
    [sym__term] = STATE(153),
    [sym_boolean] = STATE(153),
    [sym_integer] = STATE(153),
    [sym_variable] = STATE(153),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(368),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(370),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [106] = {
    [sym__expr] = STATE(154),
    [sym_if_then_else] = STATE(154),
    [sym_tuple] = STATE(154),
    [sym_mul] = STATE(154),
    [sym_div] = STATE(154),
    [sym_add] = STATE(154),
    [sym_sub] = STATE(154),
    [sym_eq] = STATE(154),
    [sym_neq] = STATE(154),
    [sym_gt] = STATE(154),
    [sym_gte] = STATE(154),
    [sym_lt] = STATE(154),
    [sym_lte] = STATE(154),
    [sym__term] = STATE(154),
    [sym_boolean] = STATE(154),
    [sym_integer] = STATE(154),
    [sym_variable] = STATE(154),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(372),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(374),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [107] = {
    [sym__expr] = STATE(155),
    [sym_if_then_else] = STATE(155),
    [sym_tuple] = STATE(155),
    [sym_mul] = STATE(155),
    [sym_div] = STATE(155),
    [sym_add] = STATE(155),
    [sym_sub] = STATE(155),
    [sym_eq] = STATE(155),
    [sym_neq] = STATE(155),
    [sym_gt] = STATE(155),
    [sym_gte] = STATE(155),
    [sym_lt] = STATE(155),
    [sym_lte] = STATE(155),
    [sym__term] = STATE(155),
    [sym_boolean] = STATE(155),
    [sym_integer] = STATE(155),
    [sym_variable] = STATE(155),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(376),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(378),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [108] = {
    [sym__expr] = STATE(156),
    [sym_if_then_else] = STATE(156),
    [sym_tuple] = STATE(156),
    [sym_mul] = STATE(156),
    [sym_div] = STATE(156),
    [sym_add] = STATE(156),
    [sym_sub] = STATE(156),
    [sym_eq] = STATE(156),
    [sym_neq] = STATE(156),
    [sym_gt] = STATE(156),
    [sym_gte] = STATE(156),
    [sym_lt] = STATE(156),
    [sym_lte] = STATE(156),
    [sym__term] = STATE(156),
    [sym_boolean] = STATE(156),
    [sym_integer] = STATE(156),
    [sym_variable] = STATE(156),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(380),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(382),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(384),
    [anon_sym_RPAREN] = ACTIONS(384),
    [anon_sym_PIPE] = ACTIONS(384),
    [anon_sym_SEMI] = ACTIONS(384),
    [anon_sym_RBRACE] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(384),
    [sym_comment] = ACTIONS(9),
  },
  [110] = {
    [anon_sym_RPAREN] = ACTIONS(386),
    [anon_sym_DOT] = ACTIONS(386),
    [anon_sym_COMMA] = ACTIONS(386),
    [anon_sym_then] = ACTIONS(386),
    [anon_sym_else] = ACTIONS(386),
    [anon_sym_STAR] = ACTIONS(386),
    [anon_sym_SLASH] = ACTIONS(388),
    [anon_sym_PLUS] = ACTIONS(386),
    [anon_sym_DASH] = ACTIONS(388),
    [anon_sym_EQ_EQ] = ACTIONS(386),
    [anon_sym_BANG_EQ] = ACTIONS(386),
    [anon_sym_GT] = ACTIONS(388),
    [anon_sym_GT_EQ] = ACTIONS(386),
    [anon_sym_LT] = ACTIONS(388),
    [anon_sym_LT_EQ] = ACTIONS(386),
    [sym_comment] = ACTIONS(9),
  },
  [111] = {
    [anon_sym_RPAREN] = ACTIONS(390),
    [anon_sym_DOT] = ACTIONS(390),
    [anon_sym_COMMA] = ACTIONS(390),
    [anon_sym_then] = ACTIONS(390),
    [anon_sym_else] = ACTIONS(390),
    [anon_sym_STAR] = ACTIONS(390),
    [anon_sym_SLASH] = ACTIONS(392),
    [anon_sym_PLUS] = ACTIONS(390),
    [anon_sym_DASH] = ACTIONS(392),
    [anon_sym_EQ_EQ] = ACTIONS(390),
    [anon_sym_BANG_EQ] = ACTIONS(390),
    [anon_sym_GT] = ACTIONS(392),
    [anon_sym_GT_EQ] = ACTIONS(390),
    [anon_sym_LT] = ACTIONS(392),
    [anon_sym_LT_EQ] = ACTIONS(390),
    [sym_comment] = ACTIONS(9),
  },
  [112] = {
    [anon_sym_DOT] = ACTIONS(394),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(394),
    [anon_sym_DASH] = ACTIONS(396),
    [anon_sym_EQ_EQ] = ACTIONS(394),
    [anon_sym_BANG_EQ] = ACTIONS(394),
    [anon_sym_GT] = ACTIONS(396),
    [anon_sym_GT_EQ] = ACTIONS(394),
    [anon_sym_LT] = ACTIONS(396),
    [anon_sym_LT_EQ] = ACTIONS(394),
    [sym_comment] = ACTIONS(9),
  },
  [113] = {
    [anon_sym_DOT] = ACTIONS(398),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(398),
    [anon_sym_DASH] = ACTIONS(400),
    [anon_sym_EQ_EQ] = ACTIONS(398),
    [anon_sym_BANG_EQ] = ACTIONS(398),
    [anon_sym_GT] = ACTIONS(400),
    [anon_sym_GT_EQ] = ACTIONS(398),
    [anon_sym_LT] = ACTIONS(400),
    [anon_sym_LT_EQ] = ACTIONS(398),
    [sym_comment] = ACTIONS(9),
  },
  [114] = {
    [anon_sym_DOT] = ACTIONS(402),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(402),
    [anon_sym_BANG_EQ] = ACTIONS(402),
    [anon_sym_GT] = ACTIONS(404),
    [anon_sym_GT_EQ] = ACTIONS(402),
    [anon_sym_LT] = ACTIONS(404),
    [anon_sym_LT_EQ] = ACTIONS(402),
    [sym_comment] = ACTIONS(9),
  },
  [115] = {
    [anon_sym_DOT] = ACTIONS(406),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(406),
    [anon_sym_BANG_EQ] = ACTIONS(406),
    [anon_sym_GT] = ACTIONS(408),
    [anon_sym_GT_EQ] = ACTIONS(406),
    [anon_sym_LT] = ACTIONS(408),
    [anon_sym_LT_EQ] = ACTIONS(406),
    [sym_comment] = ACTIONS(9),
  },
  [116] = {
    [anon_sym_DOT] = ACTIONS(410),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(410),
    [anon_sym_BANG_EQ] = ACTIONS(410),
    [anon_sym_GT] = ACTIONS(412),
    [anon_sym_GT_EQ] = ACTIONS(410),
    [anon_sym_LT] = ACTIONS(412),
    [anon_sym_LT_EQ] = ACTIONS(410),
    [sym_comment] = ACTIONS(9),
  },
  [117] = {
    [anon_sym_DOT] = ACTIONS(414),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(414),
    [anon_sym_BANG_EQ] = ACTIONS(414),
    [anon_sym_GT] = ACTIONS(416),
    [anon_sym_GT_EQ] = ACTIONS(414),
    [anon_sym_LT] = ACTIONS(416),
    [anon_sym_LT_EQ] = ACTIONS(414),
    [sym_comment] = ACTIONS(9),
  },
  [118] = {
    [anon_sym_DOT] = ACTIONS(418),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(418),
    [anon_sym_BANG_EQ] = ACTIONS(418),
    [anon_sym_GT] = ACTIONS(420),
    [anon_sym_GT_EQ] = ACTIONS(418),
    [anon_sym_LT] = ACTIONS(420),
    [anon_sym_LT_EQ] = ACTIONS(418),
    [sym_comment] = ACTIONS(9),
  },
  [119] = {
    [anon_sym_DOT] = ACTIONS(422),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(422),
    [anon_sym_BANG_EQ] = ACTIONS(422),
    [anon_sym_GT] = ACTIONS(424),
    [anon_sym_GT_EQ] = ACTIONS(422),
    [anon_sym_LT] = ACTIONS(424),
    [anon_sym_LT_EQ] = ACTIONS(422),
    [sym_comment] = ACTIONS(9),
  },
  [120] = {
    [anon_sym_RPAREN] = ACTIONS(426),
    [sym_comment] = ACTIONS(9),
  },
  [121] = {
    [anon_sym_RPAREN] = ACTIONS(428),
    [sym_comment] = ACTIONS(9),
  },
  [122] = {
    [sym__sort] = STATE(159),
    [sym__type] = STATE(159),
    [sym_type_send] = STATE(159),
    [sym_type_recv] = STATE(159),
    [sym_type_select] = STATE(159),
    [sym_type_choice] = STATE(159),
    [sym_type_end] = STATE(159),
    [sym_type_call] = STATE(159),
    [sym_simple_name] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(276),
    [anon_sym_BANG] = ACTIONS(278),
    [aux_sym_end] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(280),
    [sym_sort_int] = ACTIONS(430),
    [sym_sort_bool] = ACTIONS(430),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(9),
  },
  [123] = {
    [sym__sort] = STATE(160),
    [sym__type] = STATE(160),
    [sym_type_send] = STATE(160),
    [sym_type_recv] = STATE(160),
    [sym_type_select] = STATE(160),
    [sym_type_choice] = STATE(160),
    [sym_type_end] = STATE(160),
    [sym_type_call] = STATE(160),
    [sym_simple_name] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(276),
    [anon_sym_BANG] = ACTIONS(278),
    [aux_sym_end] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(284),
    [sym_sort_int] = ACTIONS(432),
    [sym_sort_bool] = ACTIONS(432),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(9),
  },
  [124] = {
    [sym__type_of_label] = STATE(162),
    [sym_label] = ACTIONS(434),
    [sym_comment] = ACTIONS(9),
  },
  [125] = {
    [anon_sym_DOT] = ACTIONS(436),
    [sym_comment] = ACTIONS(9),
  },
  [126] = {
    [sym__type_of_label] = STATE(164),
    [sym_label] = ACTIONS(434),
    [sym_comment] = ACTIONS(9),
  },
  [127] = {
    [anon_sym_DOT] = ACTIONS(438),
    [sym_comment] = ACTIONS(9),
  },
  [128] = {
    [sym__proc] = STATE(166),
    [sym_par] = STATE(166),
    [sym_nu] = STATE(166),
    [sym_recv] = STATE(166),
    [sym_send] = STATE(166),
    [sym_end] = STATE(166),
    [sym_call] = STATE(166),
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
  [129] = {
    [aux_sym_pattern_tuple_repeat1] = STATE(169),
    [anon_sym_RPAREN] = ACTIONS(440),
    [anon_sym_COMMA] = ACTIONS(442),
    [sym_comment] = ACTIONS(9),
  },
  [130] = {
    [anon_sym_SEMI] = ACTIONS(444),
    [anon_sym_RBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(9),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(446),
    [anon_sym_RPAREN] = ACTIONS(446),
    [anon_sym_PIPE] = ACTIONS(446),
    [anon_sym_SEMI] = ACTIONS(446),
    [anon_sym_RBRACE] = ACTIONS(446),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(446),
    [sym_comment] = ACTIONS(9),
  },
  [132] = {
    [aux_sym__complex_clauses_repeat1] = STATE(132),
    [anon_sym_SEMI] = ACTIONS(448),
    [anon_sym_RBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(9),
  },
  [133] = {
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
    [anon_sym_nu] = ACTIONS(451),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [134] = {
    [anon_sym_PIPE] = ACTIONS(453),
    [anon_sym_SEMI] = ACTIONS(455),
    [anon_sym_RBRACE] = ACTIONS(455),
    [sym_comment] = ACTIONS(9),
  },
  [135] = {
    [anon_sym_QMARK] = ACTIONS(457),
    [anon_sym_BANG] = ACTIONS(459),
    [sym_comment] = ACTIONS(9),
  },
  [136] = {
    [sym__expr] = STATE(174),
    [sym_if_then_else] = STATE(174),
    [sym_tuple] = STATE(174),
    [sym_mul] = STATE(174),
    [sym_div] = STATE(174),
    [sym_add] = STATE(174),
    [sym_sub] = STATE(174),
    [sym_eq] = STATE(174),
    [sym_neq] = STATE(174),
    [sym_gt] = STATE(174),
    [sym_gte] = STATE(174),
    [sym_lt] = STATE(174),
    [sym_lte] = STATE(174),
    [sym__term] = STATE(174),
    [sym_boolean] = STATE(174),
    [sym_integer] = STATE(174),
    [sym_variable] = STATE(174),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(346),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(461),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(463),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [137] = {
    [aux_sym_tuple_repeat1] = STATE(177),
    [anon_sym_RPAREN] = ACTIONS(465),
    [anon_sym_COMMA] = ACTIONS(467),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(196),
    [anon_sym_BANG_EQ] = ACTIONS(198),
    [anon_sym_GT] = ACTIONS(200),
    [anon_sym_GT_EQ] = ACTIONS(202),
    [anon_sym_LT] = ACTIONS(204),
    [anon_sym_LT_EQ] = ACTIONS(206),
    [sym_comment] = ACTIONS(9),
  },
  [138] = {
    [anon_sym_RPAREN] = ACTIONS(394),
    [anon_sym_COMMA] = ACTIONS(394),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(394),
    [anon_sym_DASH] = ACTIONS(396),
    [anon_sym_EQ_EQ] = ACTIONS(394),
    [anon_sym_BANG_EQ] = ACTIONS(394),
    [anon_sym_GT] = ACTIONS(396),
    [anon_sym_GT_EQ] = ACTIONS(394),
    [anon_sym_LT] = ACTIONS(396),
    [anon_sym_LT_EQ] = ACTIONS(394),
    [sym_comment] = ACTIONS(9),
  },
  [139] = {
    [anon_sym_RPAREN] = ACTIONS(398),
    [anon_sym_COMMA] = ACTIONS(398),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(398),
    [anon_sym_DASH] = ACTIONS(400),
    [anon_sym_EQ_EQ] = ACTIONS(398),
    [anon_sym_BANG_EQ] = ACTIONS(398),
    [anon_sym_GT] = ACTIONS(400),
    [anon_sym_GT_EQ] = ACTIONS(398),
    [anon_sym_LT] = ACTIONS(400),
    [anon_sym_LT_EQ] = ACTIONS(398),
    [sym_comment] = ACTIONS(9),
  },
  [140] = {
    [anon_sym_RPAREN] = ACTIONS(402),
    [anon_sym_COMMA] = ACTIONS(402),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(402),
    [anon_sym_BANG_EQ] = ACTIONS(402),
    [anon_sym_GT] = ACTIONS(404),
    [anon_sym_GT_EQ] = ACTIONS(402),
    [anon_sym_LT] = ACTIONS(404),
    [anon_sym_LT_EQ] = ACTIONS(402),
    [sym_comment] = ACTIONS(9),
  },
  [141] = {
    [anon_sym_RPAREN] = ACTIONS(406),
    [anon_sym_COMMA] = ACTIONS(406),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(406),
    [anon_sym_BANG_EQ] = ACTIONS(406),
    [anon_sym_GT] = ACTIONS(408),
    [anon_sym_GT_EQ] = ACTIONS(406),
    [anon_sym_LT] = ACTIONS(408),
    [anon_sym_LT_EQ] = ACTIONS(406),
    [sym_comment] = ACTIONS(9),
  },
  [142] = {
    [anon_sym_RPAREN] = ACTIONS(410),
    [anon_sym_COMMA] = ACTIONS(410),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(410),
    [anon_sym_BANG_EQ] = ACTIONS(410),
    [anon_sym_GT] = ACTIONS(412),
    [anon_sym_GT_EQ] = ACTIONS(410),
    [anon_sym_LT] = ACTIONS(412),
    [anon_sym_LT_EQ] = ACTIONS(410),
    [sym_comment] = ACTIONS(9),
  },
  [143] = {
    [anon_sym_RPAREN] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(414),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(414),
    [anon_sym_BANG_EQ] = ACTIONS(414),
    [anon_sym_GT] = ACTIONS(416),
    [anon_sym_GT_EQ] = ACTIONS(414),
    [anon_sym_LT] = ACTIONS(416),
    [anon_sym_LT_EQ] = ACTIONS(414),
    [sym_comment] = ACTIONS(9),
  },
  [144] = {
    [anon_sym_RPAREN] = ACTIONS(418),
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(418),
    [anon_sym_BANG_EQ] = ACTIONS(418),
    [anon_sym_GT] = ACTIONS(420),
    [anon_sym_GT_EQ] = ACTIONS(418),
    [anon_sym_LT] = ACTIONS(420),
    [anon_sym_LT_EQ] = ACTIONS(418),
    [sym_comment] = ACTIONS(9),
  },
  [145] = {
    [anon_sym_RPAREN] = ACTIONS(422),
    [anon_sym_COMMA] = ACTIONS(422),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(422),
    [anon_sym_BANG_EQ] = ACTIONS(422),
    [anon_sym_GT] = ACTIONS(424),
    [anon_sym_GT_EQ] = ACTIONS(422),
    [anon_sym_LT] = ACTIONS(424),
    [anon_sym_LT_EQ] = ACTIONS(422),
    [sym_comment] = ACTIONS(9),
  },
  [146] = {
    [sym__expr] = STATE(178),
    [sym_if_then_else] = STATE(178),
    [sym_tuple] = STATE(178),
    [sym_mul] = STATE(178),
    [sym_div] = STATE(178),
    [sym_add] = STATE(178),
    [sym_sub] = STATE(178),
    [sym_eq] = STATE(178),
    [sym_neq] = STATE(178),
    [sym_gt] = STATE(178),
    [sym_gte] = STATE(178),
    [sym_lt] = STATE(178),
    [sym_lte] = STATE(178),
    [sym__term] = STATE(178),
    [sym_boolean] = STATE(178),
    [sym_integer] = STATE(178),
    [sym_variable] = STATE(178),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(346),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(469),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(471),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [147] = {
    [sym__expr] = STATE(179),
    [sym_if_then_else] = STATE(179),
    [sym_tuple] = STATE(179),
    [sym_mul] = STATE(179),
    [sym_div] = STATE(179),
    [sym_add] = STATE(179),
    [sym_sub] = STATE(179),
    [sym_eq] = STATE(179),
    [sym_neq] = STATE(179),
    [sym_gt] = STATE(179),
    [sym_gte] = STATE(179),
    [sym_lt] = STATE(179),
    [sym_lte] = STATE(179),
    [sym__term] = STATE(179),
    [sym_boolean] = STATE(179),
    [sym_integer] = STATE(179),
    [sym_variable] = STATE(179),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(473),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(475),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [148] = {
    [anon_sym_else] = ACTIONS(477),
    [anon_sym_STAR] = ACTIONS(479),
    [anon_sym_SLASH] = ACTIONS(481),
    [anon_sym_PLUS] = ACTIONS(483),
    [anon_sym_DASH] = ACTIONS(485),
    [anon_sym_EQ_EQ] = ACTIONS(487),
    [anon_sym_BANG_EQ] = ACTIONS(489),
    [anon_sym_GT] = ACTIONS(491),
    [anon_sym_GT_EQ] = ACTIONS(493),
    [anon_sym_LT] = ACTIONS(495),
    [anon_sym_LT_EQ] = ACTIONS(497),
    [sym_comment] = ACTIONS(9),
  },
  [149] = {
    [anon_sym_then] = ACTIONS(394),
    [anon_sym_STAR] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(394),
    [anon_sym_DASH] = ACTIONS(396),
    [anon_sym_EQ_EQ] = ACTIONS(394),
    [anon_sym_BANG_EQ] = ACTIONS(394),
    [anon_sym_GT] = ACTIONS(396),
    [anon_sym_GT_EQ] = ACTIONS(394),
    [anon_sym_LT] = ACTIONS(396),
    [anon_sym_LT_EQ] = ACTIONS(394),
    [sym_comment] = ACTIONS(9),
  },
  [150] = {
    [anon_sym_then] = ACTIONS(398),
    [anon_sym_STAR] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(398),
    [anon_sym_DASH] = ACTIONS(400),
    [anon_sym_EQ_EQ] = ACTIONS(398),
    [anon_sym_BANG_EQ] = ACTIONS(398),
    [anon_sym_GT] = ACTIONS(400),
    [anon_sym_GT_EQ] = ACTIONS(398),
    [anon_sym_LT] = ACTIONS(400),
    [anon_sym_LT_EQ] = ACTIONS(398),
    [sym_comment] = ACTIONS(9),
  },
  [151] = {
    [anon_sym_then] = ACTIONS(402),
    [anon_sym_STAR] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(402),
    [anon_sym_BANG_EQ] = ACTIONS(402),
    [anon_sym_GT] = ACTIONS(404),
    [anon_sym_GT_EQ] = ACTIONS(402),
    [anon_sym_LT] = ACTIONS(404),
    [anon_sym_LT_EQ] = ACTIONS(402),
    [sym_comment] = ACTIONS(9),
  },
  [152] = {
    [anon_sym_then] = ACTIONS(406),
    [anon_sym_STAR] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(406),
    [anon_sym_BANG_EQ] = ACTIONS(406),
    [anon_sym_GT] = ACTIONS(408),
    [anon_sym_GT_EQ] = ACTIONS(406),
    [anon_sym_LT] = ACTIONS(408),
    [anon_sym_LT_EQ] = ACTIONS(406),
    [sym_comment] = ACTIONS(9),
  },
  [153] = {
    [anon_sym_then] = ACTIONS(410),
    [anon_sym_STAR] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(410),
    [anon_sym_BANG_EQ] = ACTIONS(410),
    [anon_sym_GT] = ACTIONS(412),
    [anon_sym_GT_EQ] = ACTIONS(410),
    [anon_sym_LT] = ACTIONS(412),
    [anon_sym_LT_EQ] = ACTIONS(410),
    [sym_comment] = ACTIONS(9),
  },
  [154] = {
    [anon_sym_then] = ACTIONS(414),
    [anon_sym_STAR] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(414),
    [anon_sym_BANG_EQ] = ACTIONS(414),
    [anon_sym_GT] = ACTIONS(416),
    [anon_sym_GT_EQ] = ACTIONS(414),
    [anon_sym_LT] = ACTIONS(416),
    [anon_sym_LT_EQ] = ACTIONS(414),
    [sym_comment] = ACTIONS(9),
  },
  [155] = {
    [anon_sym_then] = ACTIONS(418),
    [anon_sym_STAR] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(418),
    [anon_sym_BANG_EQ] = ACTIONS(418),
    [anon_sym_GT] = ACTIONS(420),
    [anon_sym_GT_EQ] = ACTIONS(418),
    [anon_sym_LT] = ACTIONS(420),
    [anon_sym_LT_EQ] = ACTIONS(418),
    [sym_comment] = ACTIONS(9),
  },
  [156] = {
    [anon_sym_then] = ACTIONS(422),
    [anon_sym_STAR] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(422),
    [anon_sym_BANG_EQ] = ACTIONS(422),
    [anon_sym_GT] = ACTIONS(424),
    [anon_sym_GT_EQ] = ACTIONS(422),
    [anon_sym_LT] = ACTIONS(424),
    [anon_sym_LT_EQ] = ACTIONS(422),
    [sym_comment] = ACTIONS(9),
  },
  [157] = {
    [sym__proc] = STATE(166),
    [sym_par] = STATE(166),
    [sym_nu] = STATE(166),
    [sym_recv] = STATE(166),
    [sym_send] = STATE(166),
    [sym_end] = STATE(166),
    [sym_call] = STATE(166),
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
  [158] = {
    [anon_sym_RPAREN] = ACTIONS(499),
    [anon_sym_DOT] = ACTIONS(499),
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_RBRACE] = ACTIONS(499),
    [sym_comment] = ACTIONS(9),
  },
  [159] = {
    [anon_sym_DOT] = ACTIONS(501),
    [sym_comment] = ACTIONS(9),
  },
  [160] = {
    [anon_sym_DOT] = ACTIONS(503),
    [sym_comment] = ACTIONS(9),
  },
  [161] = {
    [anon_sym_COLON] = ACTIONS(505),
    [sym_comment] = ACTIONS(9),
  },
  [162] = {
    [aux_sym_type_select_repeat1] = STATE(196),
    [anon_sym_SEMI] = ACTIONS(507),
    [anon_sym_RBRACE] = ACTIONS(509),
    [sym_comment] = ACTIONS(9),
  },
  [163] = {
    [sym__type] = STATE(197),
    [sym_type_send] = STATE(197),
    [sym_type_recv] = STATE(197),
    [sym_type_select] = STATE(197),
    [sym_type_choice] = STATE(197),
    [sym_type_end] = STATE(197),
    [sym_type_call] = STATE(197),
    [sym_simple_name] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(160),
    [anon_sym_BANG] = ACTIONS(162),
    [aux_sym_end] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(9),
  },
  [164] = {
    [aux_sym_type_select_repeat1] = STATE(199),
    [anon_sym_SEMI] = ACTIONS(507),
    [anon_sym_RBRACE] = ACTIONS(511),
    [sym_comment] = ACTIONS(9),
  },
  [165] = {
    [sym__type] = STATE(200),
    [sym_type_send] = STATE(200),
    [sym_type_recv] = STATE(200),
    [sym_type_select] = STATE(200),
    [sym_type_choice] = STATE(200),
    [sym_type_end] = STATE(200),
    [sym_type_call] = STATE(200),
    [sym_simple_name] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(160),
    [anon_sym_BANG] = ACTIONS(162),
    [aux_sym_end] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(9),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(513),
    [anon_sym_RPAREN] = ACTIONS(513),
    [anon_sym_PIPE] = ACTIONS(513),
    [anon_sym_SEMI] = ACTIONS(513),
    [anon_sym_RBRACE] = ACTIONS(513),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(513),
    [sym_comment] = ACTIONS(9),
  },
  [167] = {
    [anon_sym_RPAREN] = ACTIONS(515),
    [anon_sym_DOT] = ACTIONS(515),
    [anon_sym_DASH_GT] = ACTIONS(515),
    [anon_sym_COMMA] = ACTIONS(515),
    [sym_comment] = ACTIONS(9),
  },
  [168] = {
    [sym_pattern] = STATE(201),
    [sym_pattern_tuple] = STATE(32),
    [sym_simple_name] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(68),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
  },
  [169] = {
    [aux_sym_pattern_tuple_repeat1] = STATE(203),
    [anon_sym_RPAREN] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(442),
    [sym_comment] = ACTIONS(9),
  },
  [170] = {
    [sym_simple_name] = STATE(204),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [171] = {
    [sym__proc] = STATE(205),
    [sym_par] = STATE(205),
    [sym_nu] = STATE(205),
    [sym_recv] = STATE(205),
    [sym_send] = STATE(205),
    [sym_end] = STATE(205),
    [sym_call] = STATE(205),
    [sym__name] = STATE(135),
    [sym_reserved_name] = STATE(135),
    [sym_polarized_name] = STATE(135),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(298),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [172] = {
    [sym__clauses] = STATE(33),
    [sym_simple_clause] = STATE(33),
    [sym__complex_clauses] = STATE(33),
    [sym_pattern] = STATE(206),
    [sym_pattern_tuple] = STATE(32),
    [sym_simple_name] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
  },
  [173] = {
    [sym__expr] = STATE(207),
    [sym_if_then_else] = STATE(207),
    [sym_tuple] = STATE(207),
    [sym_mul] = STATE(207),
    [sym_div] = STATE(207),
    [sym_add] = STATE(207),
    [sym_sub] = STATE(207),
    [sym_eq] = STATE(207),
    [sym_neq] = STATE(207),
    [sym_gt] = STATE(207),
    [sym_gte] = STATE(207),
    [sym_lt] = STATE(207),
    [sym_lte] = STATE(207),
    [sym__term] = STATE(207),
    [sym_boolean] = STATE(207),
    [sym_integer] = STATE(207),
    [sym_variable] = STATE(207),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(519),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(521),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [174] = {
    [anon_sym_else] = ACTIONS(523),
    [anon_sym_STAR] = ACTIONS(479),
    [anon_sym_SLASH] = ACTIONS(481),
    [anon_sym_PLUS] = ACTIONS(483),
    [anon_sym_DASH] = ACTIONS(485),
    [anon_sym_EQ_EQ] = ACTIONS(487),
    [anon_sym_BANG_EQ] = ACTIONS(489),
    [anon_sym_GT] = ACTIONS(491),
    [anon_sym_GT_EQ] = ACTIONS(493),
    [anon_sym_LT] = ACTIONS(495),
    [anon_sym_LT_EQ] = ACTIONS(497),
    [sym_comment] = ACTIONS(9),
  },
  [175] = {
    [anon_sym_RPAREN] = ACTIONS(525),
    [anon_sym_DOT] = ACTIONS(525),
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_then] = ACTIONS(525),
    [anon_sym_else] = ACTIONS(525),
    [anon_sym_STAR] = ACTIONS(525),
    [anon_sym_SLASH] = ACTIONS(527),
    [anon_sym_PLUS] = ACTIONS(525),
    [anon_sym_DASH] = ACTIONS(527),
    [anon_sym_EQ_EQ] = ACTIONS(525),
    [anon_sym_BANG_EQ] = ACTIONS(525),
    [anon_sym_GT] = ACTIONS(527),
    [anon_sym_GT_EQ] = ACTIONS(525),
    [anon_sym_LT] = ACTIONS(527),
    [anon_sym_LT_EQ] = ACTIONS(525),
    [sym_comment] = ACTIONS(9),
  },
  [176] = {
    [sym__expr] = STATE(209),
    [sym_if_then_else] = STATE(209),
    [sym_tuple] = STATE(209),
    [sym_mul] = STATE(209),
    [sym_div] = STATE(209),
    [sym_add] = STATE(209),
    [sym_sub] = STATE(209),
    [sym_eq] = STATE(209),
    [sym_neq] = STATE(209),
    [sym_gt] = STATE(209),
    [sym_gte] = STATE(209),
    [sym_lt] = STATE(209),
    [sym_lte] = STATE(209),
    [sym__term] = STATE(209),
    [sym_boolean] = STATE(209),
    [sym_integer] = STATE(209),
    [sym_variable] = STATE(209),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(108),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(529),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(531),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [177] = {
    [aux_sym_tuple_repeat1] = STATE(211),
    [anon_sym_RPAREN] = ACTIONS(533),
    [anon_sym_COMMA] = ACTIONS(467),
    [sym_comment] = ACTIONS(9),
  },
  [178] = {
    [anon_sym_else] = ACTIONS(535),
    [anon_sym_STAR] = ACTIONS(479),
    [anon_sym_SLASH] = ACTIONS(481),
    [anon_sym_PLUS] = ACTIONS(483),
    [anon_sym_DASH] = ACTIONS(485),
    [anon_sym_EQ_EQ] = ACTIONS(487),
    [anon_sym_BANG_EQ] = ACTIONS(489),
    [anon_sym_GT] = ACTIONS(491),
    [anon_sym_GT_EQ] = ACTIONS(493),
    [anon_sym_LT] = ACTIONS(495),
    [anon_sym_LT_EQ] = ACTIONS(497),
    [sym_comment] = ACTIONS(9),
  },
  [179] = {
    [anon_sym_then] = ACTIONS(537),
    [anon_sym_STAR] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(222),
    [anon_sym_BANG_EQ] = ACTIONS(224),
    [anon_sym_GT] = ACTIONS(226),
    [anon_sym_GT_EQ] = ACTIONS(228),
    [anon_sym_LT] = ACTIONS(230),
    [anon_sym_LT_EQ] = ACTIONS(232),
    [sym_comment] = ACTIONS(9),
  },
  [180] = {
    [sym__expr] = STATE(214),
    [sym_if_then_else] = STATE(214),
    [sym_tuple] = STATE(214),
    [sym_mul] = STATE(214),
    [sym_div] = STATE(214),
    [sym_add] = STATE(214),
    [sym_sub] = STATE(214),
    [sym_eq] = STATE(214),
    [sym_neq] = STATE(214),
    [sym_gt] = STATE(214),
    [sym_gte] = STATE(214),
    [sym_lt] = STATE(214),
    [sym_lte] = STATE(214),
    [sym__term] = STATE(214),
    [sym_boolean] = STATE(214),
    [sym_integer] = STATE(214),
    [sym_variable] = STATE(214),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(539),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(541),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [181] = {
    [sym__expr] = STATE(110),
    [sym_if_then_else] = STATE(110),
    [sym_tuple] = STATE(110),
    [sym_mul] = STATE(110),
    [sym_div] = STATE(110),
    [sym_add] = STATE(110),
    [sym_sub] = STATE(110),
    [sym_eq] = STATE(110),
    [sym_neq] = STATE(110),
    [sym_gt] = STATE(110),
    [sym_gte] = STATE(110),
    [sym_lt] = STATE(110),
    [sym_lte] = STATE(110),
    [sym__term] = STATE(110),
    [sym_boolean] = STATE(110),
    [sym_integer] = STATE(110),
    [sym_variable] = STATE(110),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(346),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(234),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(236),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [182] = {
    [sym__expr] = STATE(111),
    [sym_if_then_else] = STATE(111),
    [sym_tuple] = STATE(111),
    [sym_mul] = STATE(111),
    [sym_div] = STATE(111),
    [sym_add] = STATE(111),
    [sym_sub] = STATE(111),
    [sym_eq] = STATE(111),
    [sym_neq] = STATE(111),
    [sym_gt] = STATE(111),
    [sym_gte] = STATE(111),
    [sym_lt] = STATE(111),
    [sym_lte] = STATE(111),
    [sym__term] = STATE(111),
    [sym_boolean] = STATE(111),
    [sym_integer] = STATE(111),
    [sym_variable] = STATE(111),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(346),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(238),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(240),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [183] = {
    [sym__expr] = STATE(215),
    [sym_if_then_else] = STATE(215),
    [sym_tuple] = STATE(215),
    [sym_mul] = STATE(215),
    [sym_div] = STATE(215),
    [sym_add] = STATE(215),
    [sym_sub] = STATE(215),
    [sym_eq] = STATE(215),
    [sym_neq] = STATE(215),
    [sym_gt] = STATE(215),
    [sym_gte] = STATE(215),
    [sym_lt] = STATE(215),
    [sym_lte] = STATE(215),
    [sym__term] = STATE(215),
    [sym_boolean] = STATE(215),
    [sym_integer] = STATE(215),
    [sym_variable] = STATE(215),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(346),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(543),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(545),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [184] = {
    [sym__expr] = STATE(216),
    [sym_if_then_else] = STATE(216),
    [sym_tuple] = STATE(216),
    [sym_mul] = STATE(216),
    [sym_div] = STATE(216),
    [sym_add] = STATE(216),
    [sym_sub] = STATE(216),
    [sym_eq] = STATE(216),
    [sym_neq] = STATE(216),
    [sym_gt] = STATE(216),
    [sym_gte] = STATE(216),
    [sym_lt] = STATE(216),
    [sym_lte] = STATE(216),
    [sym__term] = STATE(216),
    [sym_boolean] = STATE(216),
    [sym_integer] = STATE(216),
    [sym_variable] = STATE(216),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(346),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(547),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(549),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [185] = {
    [sym__expr] = STATE(217),
    [sym_if_then_else] = STATE(217),
    [sym_tuple] = STATE(217),
    [sym_mul] = STATE(217),
    [sym_div] = STATE(217),
    [sym_add] = STATE(217),
    [sym_sub] = STATE(217),
    [sym_eq] = STATE(217),
    [sym_neq] = STATE(217),
    [sym_gt] = STATE(217),
    [sym_gte] = STATE(217),
    [sym_lt] = STATE(217),
    [sym_lte] = STATE(217),
    [sym__term] = STATE(217),
    [sym_boolean] = STATE(217),
    [sym_integer] = STATE(217),
    [sym_variable] = STATE(217),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(346),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(551),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(553),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [186] = {
    [sym__expr] = STATE(218),
    [sym_if_then_else] = STATE(218),
    [sym_tuple] = STATE(218),
    [sym_mul] = STATE(218),
    [sym_div] = STATE(218),
    [sym_add] = STATE(218),
    [sym_sub] = STATE(218),
    [sym_eq] = STATE(218),
    [sym_neq] = STATE(218),
    [sym_gt] = STATE(218),
    [sym_gte] = STATE(218),
    [sym_lt] = STATE(218),
    [sym_lte] = STATE(218),
    [sym__term] = STATE(218),
    [sym_boolean] = STATE(218),
    [sym_integer] = STATE(218),
    [sym_variable] = STATE(218),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(346),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(555),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(557),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [187] = {
    [sym__expr] = STATE(219),
    [sym_if_then_else] = STATE(219),
    [sym_tuple] = STATE(219),
    [sym_mul] = STATE(219),
    [sym_div] = STATE(219),
    [sym_add] = STATE(219),
    [sym_sub] = STATE(219),
    [sym_eq] = STATE(219),
    [sym_neq] = STATE(219),
    [sym_gt] = STATE(219),
    [sym_gte] = STATE(219),
    [sym_lt] = STATE(219),
    [sym_lte] = STATE(219),
    [sym__term] = STATE(219),
    [sym_boolean] = STATE(219),
    [sym_integer] = STATE(219),
    [sym_variable] = STATE(219),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(346),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(559),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(561),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [188] = {
    [sym__expr] = STATE(220),
    [sym_if_then_else] = STATE(220),
    [sym_tuple] = STATE(220),
    [sym_mul] = STATE(220),
    [sym_div] = STATE(220),
    [sym_add] = STATE(220),
    [sym_sub] = STATE(220),
    [sym_eq] = STATE(220),
    [sym_neq] = STATE(220),
    [sym_gt] = STATE(220),
    [sym_gte] = STATE(220),
    [sym_lt] = STATE(220),
    [sym_lte] = STATE(220),
    [sym__term] = STATE(220),
    [sym_boolean] = STATE(220),
    [sym_integer] = STATE(220),
    [sym_variable] = STATE(220),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(346),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(563),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(565),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [189] = {
    [sym__expr] = STATE(221),
    [sym_if_then_else] = STATE(221),
    [sym_tuple] = STATE(221),
    [sym_mul] = STATE(221),
    [sym_div] = STATE(221),
    [sym_add] = STATE(221),
    [sym_sub] = STATE(221),
    [sym_eq] = STATE(221),
    [sym_neq] = STATE(221),
    [sym_gt] = STATE(221),
    [sym_gte] = STATE(221),
    [sym_lt] = STATE(221),
    [sym_lte] = STATE(221),
    [sym__term] = STATE(221),
    [sym_boolean] = STATE(221),
    [sym_integer] = STATE(221),
    [sym_variable] = STATE(221),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(346),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(567),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(569),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [190] = {
    [sym__expr] = STATE(222),
    [sym_if_then_else] = STATE(222),
    [sym_tuple] = STATE(222),
    [sym_mul] = STATE(222),
    [sym_div] = STATE(222),
    [sym_add] = STATE(222),
    [sym_sub] = STATE(222),
    [sym_eq] = STATE(222),
    [sym_neq] = STATE(222),
    [sym_gt] = STATE(222),
    [sym_gte] = STATE(222),
    [sym_lt] = STATE(222),
    [sym_lte] = STATE(222),
    [sym__term] = STATE(222),
    [sym_boolean] = STATE(222),
    [sym_integer] = STATE(222),
    [sym_variable] = STATE(222),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(346),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(571),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(573),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [191] = {
    [sym__type] = STATE(197),
    [sym_type_send] = STATE(197),
    [sym_type_recv] = STATE(197),
    [sym_type_select] = STATE(197),
    [sym_type_choice] = STATE(197),
    [sym_type_end] = STATE(197),
    [sym_type_call] = STATE(197),
    [sym_simple_name] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(276),
    [anon_sym_BANG] = ACTIONS(278),
    [aux_sym_end] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(9),
  },
  [192] = {
    [sym__type] = STATE(200),
    [sym_type_send] = STATE(200),
    [sym_type_recv] = STATE(200),
    [sym_type_select] = STATE(200),
    [sym_type_choice] = STATE(200),
    [sym_type_end] = STATE(200),
    [sym_type_call] = STATE(200),
    [sym_simple_name] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(276),
    [anon_sym_BANG] = ACTIONS(278),
    [aux_sym_end] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(9),
  },
  [193] = {
    [sym__type] = STATE(225),
    [sym_type_send] = STATE(225),
    [sym_type_recv] = STATE(225),
    [sym_type_select] = STATE(225),
    [sym_type_choice] = STATE(225),
    [sym_type_end] = STATE(225),
    [sym_type_call] = STATE(225),
    [sym_simple_name] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(575),
    [anon_sym_BANG] = ACTIONS(577),
    [aux_sym_end] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(9),
  },
  [194] = {
    [sym__type_of_label] = STATE(226),
    [sym_label] = ACTIONS(434),
    [sym_comment] = ACTIONS(9),
  },
  [195] = {
    [anon_sym_RPAREN] = ACTIONS(579),
    [anon_sym_DOT] = ACTIONS(579),
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_RBRACE] = ACTIONS(579),
    [sym_comment] = ACTIONS(9),
  },
  [196] = {
    [aux_sym_type_select_repeat1] = STATE(228),
    [anon_sym_SEMI] = ACTIONS(507),
    [anon_sym_RBRACE] = ACTIONS(581),
    [sym_comment] = ACTIONS(9),
  },
  [197] = {
    [anon_sym_RPAREN] = ACTIONS(583),
    [anon_sym_DOT] = ACTIONS(583),
    [anon_sym_SEMI] = ACTIONS(583),
    [anon_sym_RBRACE] = ACTIONS(583),
    [sym_comment] = ACTIONS(9),
  },
  [198] = {
    [anon_sym_RPAREN] = ACTIONS(585),
    [anon_sym_DOT] = ACTIONS(585),
    [anon_sym_SEMI] = ACTIONS(585),
    [anon_sym_RBRACE] = ACTIONS(585),
    [sym_comment] = ACTIONS(9),
  },
  [199] = {
    [aux_sym_type_select_repeat1] = STATE(228),
    [anon_sym_SEMI] = ACTIONS(507),
    [anon_sym_RBRACE] = ACTIONS(587),
    [sym_comment] = ACTIONS(9),
  },
  [200] = {
    [anon_sym_RPAREN] = ACTIONS(589),
    [anon_sym_DOT] = ACTIONS(589),
    [anon_sym_SEMI] = ACTIONS(589),
    [anon_sym_RBRACE] = ACTIONS(589),
    [sym_comment] = ACTIONS(9),
  },
  [201] = {
    [anon_sym_RPAREN] = ACTIONS(591),
    [anon_sym_COMMA] = ACTIONS(591),
    [sym_comment] = ACTIONS(9),
  },
  [202] = {
    [anon_sym_RPAREN] = ACTIONS(593),
    [anon_sym_DOT] = ACTIONS(593),
    [anon_sym_DASH_GT] = ACTIONS(593),
    [anon_sym_COMMA] = ACTIONS(593),
    [sym_comment] = ACTIONS(9),
  },
  [203] = {
    [aux_sym_pattern_tuple_repeat1] = STATE(203),
    [anon_sym_RPAREN] = ACTIONS(591),
    [anon_sym_COMMA] = ACTIONS(595),
    [sym_comment] = ACTIONS(9),
  },
  [204] = {
    [anon_sym_RPAREN] = ACTIONS(598),
    [anon_sym_COLON] = ACTIONS(600),
    [sym_comment] = ACTIONS(9),
  },
  [205] = {
    [anon_sym_PIPE] = ACTIONS(453),
    [anon_sym_SEMI] = ACTIONS(98),
    [anon_sym_RBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(9),
  },
  [206] = {
    [anon_sym_DOT] = ACTIONS(602),
    [sym_comment] = ACTIONS(9),
  },
  [207] = {
    [anon_sym_DOT] = ACTIONS(604),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [anon_sym_BANG_EQ] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(142),
    [anon_sym_GT_EQ] = ACTIONS(144),
    [anon_sym_LT] = ACTIONS(146),
    [anon_sym_LT_EQ] = ACTIONS(148),
    [sym_comment] = ACTIONS(9),
  },
  [208] = {
    [sym__expr] = STATE(234),
    [sym_if_then_else] = STATE(234),
    [sym_tuple] = STATE(234),
    [sym_mul] = STATE(234),
    [sym_div] = STATE(234),
    [sym_add] = STATE(234),
    [sym_sub] = STATE(234),
    [sym_eq] = STATE(234),
    [sym_neq] = STATE(234),
    [sym_gt] = STATE(234),
    [sym_gte] = STATE(234),
    [sym_lt] = STATE(234),
    [sym_lte] = STATE(234),
    [sym__term] = STATE(234),
    [sym_boolean] = STATE(234),
    [sym_integer] = STATE(234),
    [sym_variable] = STATE(234),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(108),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(606),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(608),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [209] = {
    [anon_sym_RPAREN] = ACTIONS(610),
    [anon_sym_COMMA] = ACTIONS(610),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(196),
    [anon_sym_BANG_EQ] = ACTIONS(198),
    [anon_sym_GT] = ACTIONS(200),
    [anon_sym_GT_EQ] = ACTIONS(202),
    [anon_sym_LT] = ACTIONS(204),
    [anon_sym_LT_EQ] = ACTIONS(206),
    [sym_comment] = ACTIONS(9),
  },
  [210] = {
    [anon_sym_RPAREN] = ACTIONS(612),
    [anon_sym_DOT] = ACTIONS(612),
    [anon_sym_COMMA] = ACTIONS(612),
    [anon_sym_then] = ACTIONS(612),
    [anon_sym_else] = ACTIONS(612),
    [anon_sym_STAR] = ACTIONS(612),
    [anon_sym_SLASH] = ACTIONS(614),
    [anon_sym_PLUS] = ACTIONS(612),
    [anon_sym_DASH] = ACTIONS(614),
    [anon_sym_EQ_EQ] = ACTIONS(612),
    [anon_sym_BANG_EQ] = ACTIONS(612),
    [anon_sym_GT] = ACTIONS(614),
    [anon_sym_GT_EQ] = ACTIONS(612),
    [anon_sym_LT] = ACTIONS(614),
    [anon_sym_LT_EQ] = ACTIONS(612),
    [sym_comment] = ACTIONS(9),
  },
  [211] = {
    [aux_sym_tuple_repeat1] = STATE(211),
    [anon_sym_RPAREN] = ACTIONS(610),
    [anon_sym_COMMA] = ACTIONS(616),
    [sym_comment] = ACTIONS(9),
  },
  [212] = {
    [sym__expr] = STATE(235),
    [sym_if_then_else] = STATE(235),
    [sym_tuple] = STATE(235),
    [sym_mul] = STATE(235),
    [sym_div] = STATE(235),
    [sym_add] = STATE(235),
    [sym_sub] = STATE(235),
    [sym_eq] = STATE(235),
    [sym_neq] = STATE(235),
    [sym_gt] = STATE(235),
    [sym_gte] = STATE(235),
    [sym_lt] = STATE(235),
    [sym_lte] = STATE(235),
    [sym__term] = STATE(235),
    [sym_boolean] = STATE(235),
    [sym_integer] = STATE(235),
    [sym_variable] = STATE(235),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(619),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(621),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [213] = {
    [sym__expr] = STATE(236),
    [sym_if_then_else] = STATE(236),
    [sym_tuple] = STATE(236),
    [sym_mul] = STATE(236),
    [sym_div] = STATE(236),
    [sym_add] = STATE(236),
    [sym_sub] = STATE(236),
    [sym_eq] = STATE(236),
    [sym_neq] = STATE(236),
    [sym_gt] = STATE(236),
    [sym_gte] = STATE(236),
    [sym_lt] = STATE(236),
    [sym_lte] = STATE(236),
    [sym__term] = STATE(236),
    [sym_boolean] = STATE(236),
    [sym_integer] = STATE(236),
    [sym_variable] = STATE(236),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(346),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(623),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(625),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [214] = {
    [anon_sym_DOT] = ACTIONS(627),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [anon_sym_BANG_EQ] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(142),
    [anon_sym_GT_EQ] = ACTIONS(144),
    [anon_sym_LT] = ACTIONS(146),
    [anon_sym_LT_EQ] = ACTIONS(148),
    [sym_comment] = ACTIONS(9),
  },
  [215] = {
    [anon_sym_else] = ACTIONS(394),
    [anon_sym_STAR] = ACTIONS(479),
    [anon_sym_SLASH] = ACTIONS(481),
    [anon_sym_PLUS] = ACTIONS(394),
    [anon_sym_DASH] = ACTIONS(396),
    [anon_sym_EQ_EQ] = ACTIONS(394),
    [anon_sym_BANG_EQ] = ACTIONS(394),
    [anon_sym_GT] = ACTIONS(396),
    [anon_sym_GT_EQ] = ACTIONS(394),
    [anon_sym_LT] = ACTIONS(396),
    [anon_sym_LT_EQ] = ACTIONS(394),
    [sym_comment] = ACTIONS(9),
  },
  [216] = {
    [anon_sym_else] = ACTIONS(398),
    [anon_sym_STAR] = ACTIONS(479),
    [anon_sym_SLASH] = ACTIONS(481),
    [anon_sym_PLUS] = ACTIONS(398),
    [anon_sym_DASH] = ACTIONS(400),
    [anon_sym_EQ_EQ] = ACTIONS(398),
    [anon_sym_BANG_EQ] = ACTIONS(398),
    [anon_sym_GT] = ACTIONS(400),
    [anon_sym_GT_EQ] = ACTIONS(398),
    [anon_sym_LT] = ACTIONS(400),
    [anon_sym_LT_EQ] = ACTIONS(398),
    [sym_comment] = ACTIONS(9),
  },
  [217] = {
    [anon_sym_else] = ACTIONS(402),
    [anon_sym_STAR] = ACTIONS(479),
    [anon_sym_SLASH] = ACTIONS(481),
    [anon_sym_PLUS] = ACTIONS(483),
    [anon_sym_DASH] = ACTIONS(485),
    [anon_sym_EQ_EQ] = ACTIONS(402),
    [anon_sym_BANG_EQ] = ACTIONS(402),
    [anon_sym_GT] = ACTIONS(404),
    [anon_sym_GT_EQ] = ACTIONS(402),
    [anon_sym_LT] = ACTIONS(404),
    [anon_sym_LT_EQ] = ACTIONS(402),
    [sym_comment] = ACTIONS(9),
  },
  [218] = {
    [anon_sym_else] = ACTIONS(406),
    [anon_sym_STAR] = ACTIONS(479),
    [anon_sym_SLASH] = ACTIONS(481),
    [anon_sym_PLUS] = ACTIONS(483),
    [anon_sym_DASH] = ACTIONS(485),
    [anon_sym_EQ_EQ] = ACTIONS(406),
    [anon_sym_BANG_EQ] = ACTIONS(406),
    [anon_sym_GT] = ACTIONS(408),
    [anon_sym_GT_EQ] = ACTIONS(406),
    [anon_sym_LT] = ACTIONS(408),
    [anon_sym_LT_EQ] = ACTIONS(406),
    [sym_comment] = ACTIONS(9),
  },
  [219] = {
    [anon_sym_else] = ACTIONS(410),
    [anon_sym_STAR] = ACTIONS(479),
    [anon_sym_SLASH] = ACTIONS(481),
    [anon_sym_PLUS] = ACTIONS(483),
    [anon_sym_DASH] = ACTIONS(485),
    [anon_sym_EQ_EQ] = ACTIONS(410),
    [anon_sym_BANG_EQ] = ACTIONS(410),
    [anon_sym_GT] = ACTIONS(412),
    [anon_sym_GT_EQ] = ACTIONS(410),
    [anon_sym_LT] = ACTIONS(412),
    [anon_sym_LT_EQ] = ACTIONS(410),
    [sym_comment] = ACTIONS(9),
  },
  [220] = {
    [anon_sym_else] = ACTIONS(414),
    [anon_sym_STAR] = ACTIONS(479),
    [anon_sym_SLASH] = ACTIONS(481),
    [anon_sym_PLUS] = ACTIONS(483),
    [anon_sym_DASH] = ACTIONS(485),
    [anon_sym_EQ_EQ] = ACTIONS(414),
    [anon_sym_BANG_EQ] = ACTIONS(414),
    [anon_sym_GT] = ACTIONS(416),
    [anon_sym_GT_EQ] = ACTIONS(414),
    [anon_sym_LT] = ACTIONS(416),
    [anon_sym_LT_EQ] = ACTIONS(414),
    [sym_comment] = ACTIONS(9),
  },
  [221] = {
    [anon_sym_else] = ACTIONS(418),
    [anon_sym_STAR] = ACTIONS(479),
    [anon_sym_SLASH] = ACTIONS(481),
    [anon_sym_PLUS] = ACTIONS(483),
    [anon_sym_DASH] = ACTIONS(485),
    [anon_sym_EQ_EQ] = ACTIONS(418),
    [anon_sym_BANG_EQ] = ACTIONS(418),
    [anon_sym_GT] = ACTIONS(420),
    [anon_sym_GT_EQ] = ACTIONS(418),
    [anon_sym_LT] = ACTIONS(420),
    [anon_sym_LT_EQ] = ACTIONS(418),
    [sym_comment] = ACTIONS(9),
  },
  [222] = {
    [anon_sym_else] = ACTIONS(422),
    [anon_sym_STAR] = ACTIONS(479),
    [anon_sym_SLASH] = ACTIONS(481),
    [anon_sym_PLUS] = ACTIONS(483),
    [anon_sym_DASH] = ACTIONS(485),
    [anon_sym_EQ_EQ] = ACTIONS(422),
    [anon_sym_BANG_EQ] = ACTIONS(422),
    [anon_sym_GT] = ACTIONS(424),
    [anon_sym_GT_EQ] = ACTIONS(422),
    [anon_sym_LT] = ACTIONS(424),
    [anon_sym_LT_EQ] = ACTIONS(422),
    [sym_comment] = ACTIONS(9),
  },
  [223] = {
    [sym__sort] = STATE(237),
    [sym__type] = STATE(237),
    [sym_type_send] = STATE(237),
    [sym_type_recv] = STATE(237),
    [sym_type_select] = STATE(237),
    [sym_type_choice] = STATE(237),
    [sym_type_end] = STATE(237),
    [sym_type_call] = STATE(237),
    [sym_simple_name] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(276),
    [anon_sym_BANG] = ACTIONS(278),
    [aux_sym_end] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(280),
    [sym_sort_int] = ACTIONS(629),
    [sym_sort_bool] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(9),
  },
  [224] = {
    [sym__sort] = STATE(238),
    [sym__type] = STATE(238),
    [sym_type_send] = STATE(238),
    [sym_type_recv] = STATE(238),
    [sym_type_select] = STATE(238),
    [sym_type_choice] = STATE(238),
    [sym_type_end] = STATE(238),
    [sym_type_call] = STATE(238),
    [sym_simple_name] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(276),
    [anon_sym_BANG] = ACTIONS(278),
    [aux_sym_end] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(284),
    [sym_sort_int] = ACTIONS(631),
    [sym_sort_bool] = ACTIONS(631),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(9),
  },
  [225] = {
    [anon_sym_SEMI] = ACTIONS(633),
    [anon_sym_RBRACE] = ACTIONS(633),
    [sym_comment] = ACTIONS(9),
  },
  [226] = {
    [anon_sym_SEMI] = ACTIONS(635),
    [anon_sym_RBRACE] = ACTIONS(635),
    [sym_comment] = ACTIONS(9),
  },
  [227] = {
    [anon_sym_RPAREN] = ACTIONS(637),
    [anon_sym_DOT] = ACTIONS(637),
    [anon_sym_SEMI] = ACTIONS(637),
    [anon_sym_RBRACE] = ACTIONS(637),
    [sym_comment] = ACTIONS(9),
  },
  [228] = {
    [aux_sym_type_select_repeat1] = STATE(228),
    [anon_sym_SEMI] = ACTIONS(639),
    [anon_sym_RBRACE] = ACTIONS(635),
    [sym_comment] = ACTIONS(9),
  },
  [229] = {
    [anon_sym_RPAREN] = ACTIONS(642),
    [anon_sym_DOT] = ACTIONS(642),
    [anon_sym_SEMI] = ACTIONS(642),
    [anon_sym_RBRACE] = ACTIONS(642),
    [sym_comment] = ACTIONS(9),
  },
  [230] = {
    [sym__proc] = STATE(69),
    [sym_par] = STATE(69),
    [sym_nu] = STATE(69),
    [sym_recv] = STATE(69),
    [sym_send] = STATE(69),
    [sym_end] = STATE(69),
    [sym_call] = STATE(69),
    [sym__name] = STATE(135),
    [sym_reserved_name] = STATE(135),
    [sym_polarized_name] = STATE(135),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(298),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [231] = {
    [sym__type] = STATE(239),
    [sym_type_send] = STATE(239),
    [sym_type_recv] = STATE(239),
    [sym_type_select] = STATE(239),
    [sym_type_choice] = STATE(239),
    [sym_type_end] = STATE(239),
    [sym_type_call] = STATE(239),
    [sym_simple_name] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(160),
    [anon_sym_BANG] = ACTIONS(162),
    [aux_sym_end] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(9),
  },
  [232] = {
    [sym__proc] = STATE(83),
    [sym_par] = STATE(83),
    [sym_nu] = STATE(83),
    [sym_recv] = STATE(83),
    [sym_send] = STATE(83),
    [sym_end] = STATE(83),
    [sym_call] = STATE(83),
    [sym__name] = STATE(135),
    [sym_reserved_name] = STATE(135),
    [sym_polarized_name] = STATE(135),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(298),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [233] = {
    [sym__proc] = STATE(109),
    [sym_par] = STATE(109),
    [sym_nu] = STATE(109),
    [sym_recv] = STATE(109),
    [sym_send] = STATE(109),
    [sym_end] = STATE(109),
    [sym_call] = STATE(109),
    [sym__name] = STATE(135),
    [sym_reserved_name] = STATE(135),
    [sym_polarized_name] = STATE(135),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(298),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [234] = {
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_COMMA] = ACTIONS(627),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(196),
    [anon_sym_BANG_EQ] = ACTIONS(198),
    [anon_sym_GT] = ACTIONS(200),
    [anon_sym_GT_EQ] = ACTIONS(202),
    [anon_sym_LT] = ACTIONS(204),
    [anon_sym_LT_EQ] = ACTIONS(206),
    [sym_comment] = ACTIONS(9),
  },
  [235] = {
    [anon_sym_then] = ACTIONS(627),
    [anon_sym_STAR] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(222),
    [anon_sym_BANG_EQ] = ACTIONS(224),
    [anon_sym_GT] = ACTIONS(226),
    [anon_sym_GT_EQ] = ACTIONS(228),
    [anon_sym_LT] = ACTIONS(230),
    [anon_sym_LT_EQ] = ACTIONS(232),
    [sym_comment] = ACTIONS(9),
  },
  [236] = {
    [anon_sym_else] = ACTIONS(644),
    [anon_sym_STAR] = ACTIONS(479),
    [anon_sym_SLASH] = ACTIONS(481),
    [anon_sym_PLUS] = ACTIONS(483),
    [anon_sym_DASH] = ACTIONS(485),
    [anon_sym_EQ_EQ] = ACTIONS(487),
    [anon_sym_BANG_EQ] = ACTIONS(489),
    [anon_sym_GT] = ACTIONS(491),
    [anon_sym_GT_EQ] = ACTIONS(493),
    [anon_sym_LT] = ACTIONS(495),
    [anon_sym_LT_EQ] = ACTIONS(497),
    [sym_comment] = ACTIONS(9),
  },
  [237] = {
    [anon_sym_DOT] = ACTIONS(646),
    [sym_comment] = ACTIONS(9),
  },
  [238] = {
    [anon_sym_DOT] = ACTIONS(648),
    [sym_comment] = ACTIONS(9),
  },
  [239] = {
    [anon_sym_RPAREN] = ACTIONS(650),
    [sym_comment] = ACTIONS(9),
  },
  [240] = {
    [sym__expr] = STATE(244),
    [sym_if_then_else] = STATE(244),
    [sym_tuple] = STATE(244),
    [sym_mul] = STATE(244),
    [sym_div] = STATE(244),
    [sym_add] = STATE(244),
    [sym_sub] = STATE(244),
    [sym_eq] = STATE(244),
    [sym_neq] = STATE(244),
    [sym_gt] = STATE(244),
    [sym_gte] = STATE(244),
    [sym_lt] = STATE(244),
    [sym_lte] = STATE(244),
    [sym__term] = STATE(244),
    [sym_boolean] = STATE(244),
    [sym_integer] = STATE(244),
    [sym_variable] = STATE(244),
    [sym__name] = STATE(41),
    [sym_reserved_name] = STATE(41),
    [sym_polarized_name] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(346),
    [anon_sym_True] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym_string] = ACTIONS(652),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(82),
    [sym_label] = ACTIONS(654),
    [sym__digit] = ACTIONS(86),
    [sym_comment] = ACTIONS(9),
  },
  [241] = {
    [sym__type] = STATE(197),
    [sym_type_send] = STATE(197),
    [sym_type_recv] = STATE(197),
    [sym_type_select] = STATE(197),
    [sym_type_choice] = STATE(197),
    [sym_type_end] = STATE(197),
    [sym_type_call] = STATE(197),
    [sym_simple_name] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(575),
    [anon_sym_BANG] = ACTIONS(577),
    [aux_sym_end] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(9),
  },
  [242] = {
    [sym__type] = STATE(200),
    [sym_type_send] = STATE(200),
    [sym_type_recv] = STATE(200),
    [sym_type_select] = STATE(200),
    [sym_type_choice] = STATE(200),
    [sym_type_end] = STATE(200),
    [sym_type_call] = STATE(200),
    [sym_simple_name] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(575),
    [anon_sym_BANG] = ACTIONS(577),
    [aux_sym_end] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(9),
  },
  [243] = {
    [sym__proc] = STATE(166),
    [sym_par] = STATE(166),
    [sym_nu] = STATE(166),
    [sym_recv] = STATE(166),
    [sym_send] = STATE(166),
    [sym_end] = STATE(166),
    [sym_call] = STATE(166),
    [sym__name] = STATE(135),
    [sym_reserved_name] = STATE(135),
    [sym_polarized_name] = STATE(135),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(298),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [244] = {
    [anon_sym_else] = ACTIONS(627),
    [anon_sym_STAR] = ACTIONS(479),
    [anon_sym_SLASH] = ACTIONS(481),
    [anon_sym_PLUS] = ACTIONS(483),
    [anon_sym_DASH] = ACTIONS(485),
    [anon_sym_EQ_EQ] = ACTIONS(487),
    [anon_sym_BANG_EQ] = ACTIONS(489),
    [anon_sym_GT] = ACTIONS(491),
    [anon_sym_GT_EQ] = ACTIONS(493),
    [anon_sym_LT] = ACTIONS(495),
    [anon_sym_LT_EQ] = ACTIONS(497),
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
  [76] = {.count = 1, .reusable = false}, SHIFT(37),
  [78] = {.count = 1, .reusable = true}, SHIFT(38),
  [80] = {.count = 1, .reusable = true}, SHIFT(40),
  [82] = {.count = 1, .reusable = false}, SHIFT(11),
  [84] = {.count = 1, .reusable = false}, SHIFT(40),
  [86] = {.count = 1, .reusable = true}, SHIFT(39),
  [88] = {.count = 1, .reusable = true}, SHIFT(43),
  [90] = {.count = 1, .reusable = true}, SHIFT(44),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym__proc, 3),
  [94] = {.count = 1, .reusable = true}, SHIFT(47),
  [96] = {.count = 1, .reusable = false}, SHIFT(47),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_par, 3),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_recv, 3),
  [104] = {.count = 1, .reusable = true}, SHIFT(51),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1, .alias_sequence_id = 2),
  [108] = {.count = 1, .reusable = false}, SHIFT(52),
  [110] = {.count = 1, .reusable = true}, SHIFT(53),
  [112] = {.count = 1, .reusable = false}, SHIFT(53),
  [114] = {.count = 1, .reusable = false}, SHIFT(54),
  [116] = {.count = 1, .reusable = true}, SHIFT(55),
  [118] = {.count = 1, .reusable = false}, SHIFT(55),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [122] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_integer, 1),
  [126] = {.count = 1, .reusable = false}, REDUCE(sym_integer, 1),
  [128] = {.count = 1, .reusable = true}, SHIFT(56),
  [130] = {.count = 1, .reusable = true}, SHIFT(57),
  [132] = {.count = 1, .reusable = false}, SHIFT(58),
  [134] = {.count = 1, .reusable = true}, SHIFT(59),
  [136] = {.count = 1, .reusable = false}, SHIFT(60),
  [138] = {.count = 1, .reusable = true}, SHIFT(61),
  [140] = {.count = 1, .reusable = true}, SHIFT(62),
  [142] = {.count = 1, .reusable = false}, SHIFT(63),
  [144] = {.count = 1, .reusable = true}, SHIFT(64),
  [146] = {.count = 1, .reusable = false}, SHIFT(65),
  [148] = {.count = 1, .reusable = true}, SHIFT(66),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 1),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 1),
  [154] = {.count = 1, .reusable = true}, SHIFT(67),
  [156] = {.count = 1, .reusable = true}, SHIFT(68),
  [158] = {.count = 1, .reusable = true}, SHIFT(70),
  [160] = {.count = 1, .reusable = true}, SHIFT(71),
  [162] = {.count = 1, .reusable = true}, SHIFT(72),
  [164] = {.count = 1, .reusable = false}, SHIFT(73),
  [166] = {.count = 1, .reusable = false}, SHIFT(2),
  [168] = {.count = 1, .reusable = true}, SHIFT(76),
  [170] = {.count = 1, .reusable = true}, SHIFT(77),
  [172] = {.count = 1, .reusable = true}, SHIFT(78),
  [174] = {.count = 1, .reusable = true}, SHIFT(79),
  [176] = {.count = 1, .reusable = true}, SHIFT(80),
  [178] = {.count = 1, .reusable = true}, SHIFT(82),
  [180] = {.count = 1, .reusable = true}, SHIFT(84),
  [182] = {.count = 1, .reusable = false}, SHIFT(84),
  [184] = {.count = 1, .reusable = true}, SHIFT(85),
  [186] = {.count = 1, .reusable = true}, SHIFT(86),
  [188] = {.count = 1, .reusable = true}, SHIFT(87),
  [190] = {.count = 1, .reusable = false}, SHIFT(88),
  [192] = {.count = 1, .reusable = true}, SHIFT(89),
  [194] = {.count = 1, .reusable = false}, SHIFT(90),
  [196] = {.count = 1, .reusable = true}, SHIFT(91),
  [198] = {.count = 1, .reusable = true}, SHIFT(92),
  [200] = {.count = 1, .reusable = false}, SHIFT(93),
  [202] = {.count = 1, .reusable = true}, SHIFT(94),
  [204] = {.count = 1, .reusable = false}, SHIFT(95),
  [206] = {.count = 1, .reusable = true}, SHIFT(96),
  [208] = {.count = 1, .reusable = true}, SHIFT(97),
  [210] = {.count = 1, .reusable = false}, SHIFT(97),
  [212] = {.count = 1, .reusable = true}, SHIFT(98),
  [214] = {.count = 1, .reusable = true}, SHIFT(99),
  [216] = {.count = 1, .reusable = false}, SHIFT(100),
  [218] = {.count = 1, .reusable = true}, SHIFT(101),
  [220] = {.count = 1, .reusable = false}, SHIFT(102),
  [222] = {.count = 1, .reusable = true}, SHIFT(103),
  [224] = {.count = 1, .reusable = true}, SHIFT(104),
  [226] = {.count = 1, .reusable = false}, SHIFT(105),
  [228] = {.count = 1, .reusable = true}, SHIFT(106),
  [230] = {.count = 1, .reusable = false}, SHIFT(107),
  [232] = {.count = 1, .reusable = true}, SHIFT(108),
  [234] = {.count = 1, .reusable = true}, SHIFT(110),
  [236] = {.count = 1, .reusable = false}, SHIFT(110),
  [238] = {.count = 1, .reusable = true}, SHIFT(111),
  [240] = {.count = 1, .reusable = false}, SHIFT(111),
  [242] = {.count = 1, .reusable = true}, SHIFT(112),
  [244] = {.count = 1, .reusable = false}, SHIFT(112),
  [246] = {.count = 1, .reusable = true}, SHIFT(113),
  [248] = {.count = 1, .reusable = false}, SHIFT(113),
  [250] = {.count = 1, .reusable = true}, SHIFT(114),
  [252] = {.count = 1, .reusable = false}, SHIFT(114),
  [254] = {.count = 1, .reusable = true}, SHIFT(115),
  [256] = {.count = 1, .reusable = false}, SHIFT(115),
  [258] = {.count = 1, .reusable = true}, SHIFT(116),
  [260] = {.count = 1, .reusable = false}, SHIFT(116),
  [262] = {.count = 1, .reusable = true}, SHIFT(117),
  [264] = {.count = 1, .reusable = false}, SHIFT(117),
  [266] = {.count = 1, .reusable = true}, SHIFT(118),
  [268] = {.count = 1, .reusable = false}, SHIFT(118),
  [270] = {.count = 1, .reusable = true}, SHIFT(119),
  [272] = {.count = 1, .reusable = false}, SHIFT(119),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_nu, 5, .alias_sequence_id = 3),
  [276] = {.count = 1, .reusable = true}, SHIFT(122),
  [278] = {.count = 1, .reusable = true}, SHIFT(123),
  [280] = {.count = 1, .reusable = true}, SHIFT(124),
  [282] = {.count = 1, .reusable = true}, SHIFT(125),
  [284] = {.count = 1, .reusable = true}, SHIFT(126),
  [286] = {.count = 1, .reusable = true}, SHIFT(127),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_type_end, 1),
  [290] = {.count = 1, .reusable = true}, SHIFT(128),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_type_call, 1, .alias_sequence_id = 1),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym__complex_clauses, 3),
  [296] = {.count = 1, .reusable = true}, SHIFT(131),
  [298] = {.count = 1, .reusable = true}, SHIFT(133),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_simple_clause, 3),
  [302] = {.count = 1, .reusable = true}, SHIFT(136),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 3),
  [306] = {.count = 1, .reusable = false}, REDUCE(sym__expr, 3),
  [308] = {.count = 1, .reusable = true}, SHIFT(137),
  [310] = {.count = 1, .reusable = false}, SHIFT(137),
  [312] = {.count = 1, .reusable = true}, SHIFT(138),
  [314] = {.count = 1, .reusable = false}, SHIFT(138),
  [316] = {.count = 1, .reusable = true}, SHIFT(139),
  [318] = {.count = 1, .reusable = false}, SHIFT(139),
  [320] = {.count = 1, .reusable = true}, SHIFT(140),
  [322] = {.count = 1, .reusable = false}, SHIFT(140),
  [324] = {.count = 1, .reusable = true}, SHIFT(141),
  [326] = {.count = 1, .reusable = false}, SHIFT(141),
  [328] = {.count = 1, .reusable = true}, SHIFT(142),
  [330] = {.count = 1, .reusable = false}, SHIFT(142),
  [332] = {.count = 1, .reusable = true}, SHIFT(143),
  [334] = {.count = 1, .reusable = false}, SHIFT(143),
  [336] = {.count = 1, .reusable = true}, SHIFT(144),
  [338] = {.count = 1, .reusable = false}, SHIFT(144),
  [340] = {.count = 1, .reusable = true}, SHIFT(145),
  [342] = {.count = 1, .reusable = false}, SHIFT(145),
  [344] = {.count = 1, .reusable = true}, SHIFT(146),
  [346] = {.count = 1, .reusable = false}, SHIFT(147),
  [348] = {.count = 1, .reusable = true}, SHIFT(148),
  [350] = {.count = 1, .reusable = false}, SHIFT(148),
  [352] = {.count = 1, .reusable = true}, SHIFT(149),
  [354] = {.count = 1, .reusable = false}, SHIFT(149),
  [356] = {.count = 1, .reusable = true}, SHIFT(150),
  [358] = {.count = 1, .reusable = false}, SHIFT(150),
  [360] = {.count = 1, .reusable = true}, SHIFT(151),
  [362] = {.count = 1, .reusable = false}, SHIFT(151),
  [364] = {.count = 1, .reusable = true}, SHIFT(152),
  [366] = {.count = 1, .reusable = false}, SHIFT(152),
  [368] = {.count = 1, .reusable = true}, SHIFT(153),
  [370] = {.count = 1, .reusable = false}, SHIFT(153),
  [372] = {.count = 1, .reusable = true}, SHIFT(154),
  [374] = {.count = 1, .reusable = false}, SHIFT(154),
  [376] = {.count = 1, .reusable = true}, SHIFT(155),
  [378] = {.count = 1, .reusable = false}, SHIFT(155),
  [380] = {.count = 1, .reusable = true}, SHIFT(156),
  [382] = {.count = 1, .reusable = false}, SHIFT(156),
  [384] = {.count = 1, .reusable = true}, REDUCE(sym_send, 5),
  [386] = {.count = 1, .reusable = true}, REDUCE(sym_mul, 3),
  [388] = {.count = 1, .reusable = false}, REDUCE(sym_mul, 3),
  [390] = {.count = 1, .reusable = true}, REDUCE(sym_div, 3),
  [392] = {.count = 1, .reusable = false}, REDUCE(sym_div, 3),
  [394] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [396] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_sub, 3),
  [400] = {.count = 1, .reusable = false}, REDUCE(sym_sub, 3),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym_eq, 3),
  [404] = {.count = 1, .reusable = false}, REDUCE(sym_eq, 3),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_neq, 3),
  [408] = {.count = 1, .reusable = false}, REDUCE(sym_neq, 3),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_gt, 3),
  [412] = {.count = 1, .reusable = false}, REDUCE(sym_gt, 3),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_gte, 3),
  [416] = {.count = 1, .reusable = false}, REDUCE(sym_gte, 3),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_lt, 3),
  [420] = {.count = 1, .reusable = false}, REDUCE(sym_lt, 3),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_lte, 3),
  [424] = {.count = 1, .reusable = false}, REDUCE(sym_lte, 3),
  [426] = {.count = 1, .reusable = true}, SHIFT(157),
  [428] = {.count = 1, .reusable = true}, SHIFT(158),
  [430] = {.count = 1, .reusable = true}, SHIFT(159),
  [432] = {.count = 1, .reusable = true}, SHIFT(160),
  [434] = {.count = 1, .reusable = true}, SHIFT(161),
  [436] = {.count = 1, .reusable = true}, SHIFT(163),
  [438] = {.count = 1, .reusable = true}, SHIFT(165),
  [440] = {.count = 1, .reusable = true}, SHIFT(167),
  [442] = {.count = 1, .reusable = true}, SHIFT(168),
  [444] = {.count = 1, .reusable = true}, REDUCE(aux_sym__complex_clauses_repeat1, 2),
  [446] = {.count = 1, .reusable = true}, REDUCE(sym__complex_clauses, 4),
  [448] = {.count = 2, .reusable = true}, REDUCE(aux_sym__complex_clauses_repeat1, 2), SHIFT_REPEAT(79),
  [451] = {.count = 1, .reusable = false}, SHIFT(170),
  [453] = {.count = 1, .reusable = true}, SHIFT(171),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_complex_clause, 3),
  [457] = {.count = 1, .reusable = true}, SHIFT(172),
  [459] = {.count = 1, .reusable = true}, SHIFT(173),
  [461] = {.count = 1, .reusable = true}, SHIFT(174),
  [463] = {.count = 1, .reusable = false}, SHIFT(174),
  [465] = {.count = 1, .reusable = true}, SHIFT(175),
  [467] = {.count = 1, .reusable = true}, SHIFT(176),
  [469] = {.count = 1, .reusable = true}, SHIFT(178),
  [471] = {.count = 1, .reusable = false}, SHIFT(178),
  [473] = {.count = 1, .reusable = true}, SHIFT(179),
  [475] = {.count = 1, .reusable = false}, SHIFT(179),
  [477] = {.count = 1, .reusable = true}, SHIFT(180),
  [479] = {.count = 1, .reusable = true}, SHIFT(181),
  [481] = {.count = 1, .reusable = false}, SHIFT(182),
  [483] = {.count = 1, .reusable = true}, SHIFT(183),
  [485] = {.count = 1, .reusable = false}, SHIFT(184),
  [487] = {.count = 1, .reusable = true}, SHIFT(185),
  [489] = {.count = 1, .reusable = true}, SHIFT(186),
  [491] = {.count = 1, .reusable = false}, SHIFT(187),
  [493] = {.count = 1, .reusable = true}, SHIFT(188),
  [495] = {.count = 1, .reusable = false}, SHIFT(189),
  [497] = {.count = 1, .reusable = true}, SHIFT(190),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym__type, 3),
  [501] = {.count = 1, .reusable = true}, SHIFT(191),
  [503] = {.count = 1, .reusable = true}, SHIFT(192),
  [505] = {.count = 1, .reusable = true}, SHIFT(193),
  [507] = {.count = 1, .reusable = true}, SHIFT(194),
  [509] = {.count = 1, .reusable = true}, SHIFT(195),
  [511] = {.count = 1, .reusable = true}, SHIFT(198),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_nu, 7, .alias_sequence_id = 3),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_tuple, 5),
  [517] = {.count = 1, .reusable = true}, SHIFT(202),
  [519] = {.count = 1, .reusable = true}, SHIFT(207),
  [521] = {.count = 1, .reusable = false}, SHIFT(207),
  [523] = {.count = 1, .reusable = true}, SHIFT(208),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 5),
  [527] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 5),
  [529] = {.count = 1, .reusable = true}, SHIFT(209),
  [531] = {.count = 1, .reusable = false}, SHIFT(209),
  [533] = {.count = 1, .reusable = true}, SHIFT(210),
  [535] = {.count = 1, .reusable = true}, SHIFT(212),
  [537] = {.count = 1, .reusable = true}, SHIFT(213),
  [539] = {.count = 1, .reusable = true}, SHIFT(214),
  [541] = {.count = 1, .reusable = false}, SHIFT(214),
  [543] = {.count = 1, .reusable = true}, SHIFT(215),
  [545] = {.count = 1, .reusable = false}, SHIFT(215),
  [547] = {.count = 1, .reusable = true}, SHIFT(216),
  [549] = {.count = 1, .reusable = false}, SHIFT(216),
  [551] = {.count = 1, .reusable = true}, SHIFT(217),
  [553] = {.count = 1, .reusable = false}, SHIFT(217),
  [555] = {.count = 1, .reusable = true}, SHIFT(218),
  [557] = {.count = 1, .reusable = false}, SHIFT(218),
  [559] = {.count = 1, .reusable = true}, SHIFT(219),
  [561] = {.count = 1, .reusable = false}, SHIFT(219),
  [563] = {.count = 1, .reusable = true}, SHIFT(220),
  [565] = {.count = 1, .reusable = false}, SHIFT(220),
  [567] = {.count = 1, .reusable = true}, SHIFT(221),
  [569] = {.count = 1, .reusable = false}, SHIFT(221),
  [571] = {.count = 1, .reusable = true}, SHIFT(222),
  [573] = {.count = 1, .reusable = false}, SHIFT(222),
  [575] = {.count = 1, .reusable = true}, SHIFT(223),
  [577] = {.count = 1, .reusable = true}, SHIFT(224),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_type_choice, 4),
  [581] = {.count = 1, .reusable = true}, SHIFT(227),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym_type_recv, 4),
  [585] = {.count = 1, .reusable = true}, REDUCE(sym_type_select, 4),
  [587] = {.count = 1, .reusable = true}, SHIFT(229),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_type_send, 4),
  [591] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pattern_tuple_repeat1, 2),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_tuple, 6),
  [595] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_tuple_repeat1, 2), SHIFT_REPEAT(168),
  [598] = {.count = 1, .reusable = true}, SHIFT(230),
  [600] = {.count = 1, .reusable = true}, SHIFT(231),
  [602] = {.count = 1, .reusable = true}, SHIFT(232),
  [604] = {.count = 1, .reusable = true}, SHIFT(233),
  [606] = {.count = 1, .reusable = true}, SHIFT(234),
  [608] = {.count = 1, .reusable = false}, SHIFT(234),
  [610] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [612] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 6),
  [614] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 6),
  [616] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(176),
  [619] = {.count = 1, .reusable = true}, SHIFT(235),
  [621] = {.count = 1, .reusable = false}, SHIFT(235),
  [623] = {.count = 1, .reusable = true}, SHIFT(236),
  [625] = {.count = 1, .reusable = false}, SHIFT(236),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym_if_then_else, 6),
  [629] = {.count = 1, .reusable = true}, SHIFT(237),
  [631] = {.count = 1, .reusable = true}, SHIFT(238),
  [633] = {.count = 1, .reusable = true}, REDUCE(sym__type_of_label, 3),
  [635] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_select_repeat1, 2),
  [637] = {.count = 1, .reusable = true}, REDUCE(sym_type_choice, 5),
  [639] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_select_repeat1, 2), SHIFT_REPEAT(194),
  [642] = {.count = 1, .reusable = true}, REDUCE(sym_type_select, 5),
  [644] = {.count = 1, .reusable = true}, SHIFT(240),
  [646] = {.count = 1, .reusable = true}, SHIFT(241),
  [648] = {.count = 1, .reusable = true}, SHIFT(242),
  [650] = {.count = 1, .reusable = true}, SHIFT(243),
  [652] = {.count = 1, .reusable = true}, SHIFT(244),
  [654] = {.count = 1, .reusable = false}, SHIFT(244),
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
