#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 252
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 2
#define TOKEN_COUNT 43
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
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  anon_sym_DOT = 10,
  aux_sym_end = 11,
  anon_sym_STAR = 12,
  anon_sym_LBRACE = 13,
  anon_sym_SEMI = 14,
  anon_sym_RBRACE = 15,
  anon_sym_DASH_GT = 16,
  anon_sym_COMMA = 17,
  anon_sym_if = 18,
  anon_sym_then = 19,
  anon_sym_else = 20,
  anon_sym_SLASH = 21,
  anon_sym_PLUS = 22,
  anon_sym_DASH = 23,
  anon_sym_EQ_EQ = 24,
  anon_sym_BANG_EQ = 25,
  anon_sym_GT = 26,
  anon_sym_GT_EQ = 27,
  anon_sym_LT = 28,
  anon_sym_LT_EQ = 29,
  anon_sym_True = 30,
  anon_sym_False = 31,
  sym_string = 32,
  sym_sort_int = 33,
  sym_sort_bool = 34,
  anon_sym_BANG = 35,
  anon_sym_stdin = 36,
  anon_sym_stdout = 37,
  aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH = 38,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH = 39,
  sym_label = 40,
  sym__digit = 41,
  sym_comment = 42,
  sym_program = 43,
  sym_proc_declaration = 44,
  sym__proc = 45,
  sym_par = 46,
  sym_nu = 47,
  sym_recv = 48,
  sym_send = 49,
  sym_end = 50,
  sym_call = 51,
  sym_repl = 52,
  sym__clauses = 53,
  sym_simple_clause = 54,
  sym__complex_clauses = 55,
  sym_complex_clause = 56,
  sym_pattern = 57,
  sym_pattern_tuple = 58,
  sym__expr = 59,
  sym_if_then_else = 60,
  sym_tuple = 61,
  sym_mul = 62,
  sym_div = 63,
  sym_add = 64,
  sym_sub = 65,
  sym_eq = 66,
  sym_neq = 67,
  sym_gt = 68,
  sym_gte = 69,
  sym_lt = 70,
  sym_lte = 71,
  sym__term = 72,
  sym_boolean = 73,
  sym_integer = 74,
  sym_variable = 75,
  sym__sort = 76,
  sym__type = 77,
  sym_type_send = 78,
  sym_type_recv = 79,
  sym_type_select = 80,
  sym_type_choice = 81,
  sym_type_end = 82,
  sym_type_call = 83,
  sym__type_of_label = 84,
  sym__name = 85,
  sym_reserved_name = 86,
  sym_polarized_name = 87,
  sym_simple_name = 88,
  aux_sym_program_repeat1 = 89,
  aux_sym__complex_clauses_repeat1 = 90,
  aux_sym_pattern_tuple_repeat1 = 91,
  aux_sym_tuple_repeat1 = 92,
  aux_sym_type_select_repeat1 = 93,
  alias_sym_name = 94,
  alias_sym_process_name = 95,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [aux_sym_end] = "end",
  [anon_sym_STAR] = "*",
  [anon_sym_LBRACE] = "{",
  [anon_sym_SEMI] = ";",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COMMA] = ",",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
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
  [anon_sym_BANG] = "!",
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
  [sym_repl] = "repl",
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_STAR] = {
    .visible = true,
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
  [anon_sym_BANG] = {
    .visible = true,
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
  [sym_repl] = {
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
      if (lookahead == '[')
        ADVANCE(44);
      if (lookahead == '\\')
        SKIP(45);
      if (lookahead == ']')
        ADVANCE(46);
      if (lookahead == '`')
        ADVANCE(47);
      if (lookahead == 'e')
        ADVANCE(49);
      if (lookahead == 'i')
        ADVANCE(55);
      if (lookahead == 'n')
        ADVANCE(57);
      if (lookahead == 's')
        ADVANCE(59);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == '{')
        ADVANCE(71);
      if (lookahead == '|')
        ADVANCE(72);
      if (lookahead == '}')
        ADVANCE(73);
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
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 45:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 47:
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == 'l')
        ADVANCE(50);
      if (lookahead == 'n')
        ADVANCE(53);
      END_STATE();
    case 50:
      if (lookahead == 's')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'e')
        ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 53:
      if (lookahead == 'd')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_end);
      END_STATE();
    case 55:
      if (lookahead == 'f')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 57:
      if (lookahead == 'u')
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_nu);
      END_STATE();
    case 59:
      if (lookahead == 't')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'd')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'i')
        ADVANCE(62);
      if (lookahead == 'o')
        ADVANCE(64);
      END_STATE();
    case 62:
      if (lookahead == 'n')
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_stdin);
      END_STATE();
    case 64:
      if (lookahead == 'u')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 't')
        ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_stdout);
      END_STATE();
    case 67:
      if (lookahead == 'h')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'e')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'n')
        ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 74:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(75);
      if (lookahead == '/')
        ADVANCE(76);
      if (lookahead == '\\')
        SKIP(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(74);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 75:
      if (lookahead == '-')
        ADVANCE(13);
      END_STATE();
    case 76:
      if (lookahead == '/')
        ADVANCE(17);
      END_STATE();
    case 77:
      if (lookahead == 'n')
        SKIP(74);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(80);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(76);
      if (lookahead == ':')
        ADVANCE(18);
      if (lookahead == ';')
        ADVANCE(19);
      if (lookahead == '=')
        ADVANCE(81);
      if (lookahead == '\\')
        SKIP(82);
      if (lookahead == '}')
        ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(79);
      END_STATE();
    case 80:
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '>')
        ADVANCE(14);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 82:
      if (lookahead == 'n')
        SKIP(79);
      END_STATE();
    case 83:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(75);
      if (lookahead == '/')
        ADVANCE(76);
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
      if (lookahead == '-')
        ADVANCE(75);
      if (lookahead == '/')
        ADVANCE(76);
      if (lookahead == '=')
        ADVANCE(81);
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
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(75);
      if (lookahead == '/')
        ADVANCE(76);
      if (lookahead == '\\')
        SKIP(88);
      if (lookahead == '`')
        ADVANCE(47);
      if (lookahead == 'e')
        ADVANCE(89);
      if (lookahead == 's')
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 88:
      if (lookahead == 'n')
        SKIP(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(78);
      if (lookahead == 'n')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(78);
      if (lookahead == 'd')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_end);
      if (lookahead == '\'')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(78);
      if (lookahead == 't')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(78);
      if (lookahead == 'd')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(78);
      if (lookahead == 'i')
        ADVANCE(95);
      if (lookahead == 'o')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(78);
      if (lookahead == 'n')
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_stdin);
      if (lookahead == '\'')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(78);
      if (lookahead == 'u')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(78);
      if (lookahead == 't')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_stdout);
      if (lookahead == '\'')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 100:
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(75);
      if (lookahead == '/')
        ADVANCE(76);
      if (lookahead == '\\')
        SKIP(101);
      if (lookahead == '`')
        ADVANCE(47);
      if (lookahead == 'e')
        ADVANCE(89);
      if (lookahead == 'n')
        ADVANCE(102);
      if (lookahead == 's')
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(100);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 101:
      if (lookahead == 'n')
        SKIP(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(78);
      if (lookahead == 'u')
        ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_nu);
      if (lookahead == '\'')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 104:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(75);
      if (lookahead == '/')
        ADVANCE(76);
      if (lookahead == ';')
        ADVANCE(19);
      if (lookahead == '\\')
        SKIP(105);
      if (lookahead == '|')
        ADVANCE(72);
      if (lookahead == '}')
        ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(104);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 105:
      if (lookahead == 'n')
        SKIP(104);
      END_STATE();
    case 106:
      if (lookahead == '!')
        ADVANCE(107);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(109);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(44);
      if (lookahead == '\\')
        SKIP(110);
      if (lookahead == ']')
        ADVANCE(46);
      if (lookahead == 'e')
        ADVANCE(111);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(106);
      END_STATE();
    case 107:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(13);
      END_STATE();
    case 109:
      if (lookahead == '=')
        ADVANCE(23);
      END_STATE();
    case 110:
      if (lookahead == 'n')
        SKIP(106);
      END_STATE();
    case 111:
      if (lookahead == 'l')
        ADVANCE(50);
      END_STATE();
    case 112:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(75);
      if (lookahead == '/')
        ADVANCE(76);
      if (lookahead == ';')
        ADVANCE(19);
      if (lookahead == '?')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(44);
      if (lookahead == '\\')
        SKIP(113);
      if (lookahead == '|')
        ADVANCE(72);
      if (lookahead == '}')
        ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(112);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 113:
      if (lookahead == 'n')
        SKIP(112);
      END_STATE();
    case 114:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(75);
      if (lookahead == '/')
        ADVANCE(76);
      if (lookahead == '\\')
        SKIP(115);
      if (lookahead == '|')
        ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(114);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 115:
      if (lookahead == 'n')
        SKIP(114);
      END_STATE();
    case 116:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(75);
      if (lookahead == '/')
        ADVANCE(76);
      if (lookahead == '\\')
        SKIP(117);
      if (lookahead == '|')
        ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(116);
      END_STATE();
    case 117:
      if (lookahead == 'n')
        SKIP(116);
      END_STATE();
    case 118:
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(75);
      if (lookahead == '/')
        ADVANCE(76);
      if (lookahead == '\\')
        SKIP(119);
      if (lookahead == '{')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(118);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 119:
      if (lookahead == 'n')
        SKIP(118);
      END_STATE();
    case 120:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(121);
      if (lookahead == '/')
        ADVANCE(76);
      if (lookahead == 'F')
        ADVANCE(32);
      if (lookahead == 'T')
        ADVANCE(40);
      if (lookahead == '\\')
        SKIP(123);
      if (lookahead == '`')
        ADVANCE(47);
      if (lookahead == 'i')
        ADVANCE(124);
      if (lookahead == 's')
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(120);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 121:
      if (lookahead == '-')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(122);
      END_STATE();
    case 123:
      if (lookahead == 'n')
        SKIP(120);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(78);
      if (lookahead == 'f')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 126:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(75);
      if (lookahead == '/')
        ADVANCE(76);
      if (lookahead == ':')
        ADVANCE(18);
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
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(80);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(76);
      if (lookahead == '\\')
        SKIP(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(128);
      END_STATE();
    case 129:
      if (lookahead == 'n')
        SKIP(128);
      END_STATE();
    case 130:
      if (lookahead == '-')
        ADVANCE(75);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(76);
      if (lookahead == '\\')
        SKIP(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(130);
      END_STATE();
    case 131:
      if (lookahead == 'n')
        SKIP(130);
      END_STATE();
    case 132:
      if (lookahead == '!')
        ADVANCE(107);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(109);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '\\')
        SKIP(133);
      if (lookahead == ']')
        ADVANCE(46);
      if (lookahead == 'e')
        ADVANCE(111);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(132);
      END_STATE();
    case 133:
      if (lookahead == 'n')
        SKIP(132);
      END_STATE();
    case 134:
      if (lookahead == '!')
        ADVANCE(107);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(109);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '\\')
        SKIP(135);
      if (lookahead == ']')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(134);
      END_STATE();
    case 135:
      if (lookahead == 'n')
        SKIP(134);
      END_STATE();
    case 136:
      if (lookahead == '!')
        ADVANCE(137);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(75);
      if (lookahead == '/')
        ADVANCE(76);
      if (lookahead == '?')
        ADVANCE(26);
      if (lookahead == 'B')
        ADVANCE(138);
      if (lookahead == 'I')
        ADVANCE(139);
      if (lookahead == '\\')
        SKIP(140);
      if (lookahead == 'e')
        ADVANCE(89);
      if (lookahead == '{')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(136);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 138:
      if (lookahead == 'o')
        ADVANCE(28);
      END_STATE();
    case 139:
      if (lookahead == 'n')
        ADVANCE(38);
      END_STATE();
    case 140:
      if (lookahead == 'n')
        SKIP(136);
      END_STATE();
    case 141:
      if (lookahead == '!')
        ADVANCE(107);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(109);
      if (lookahead == '>')
        ADVANCE(24);
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
      if (lookahead == '-')
        ADVANCE(75);
      if (lookahead == '/')
        ADVANCE(76);
      if (lookahead == ';')
        ADVANCE(19);
      if (lookahead == '\\')
        SKIP(144);
      if (lookahead == '|')
        ADVANCE(72);
      if (lookahead == '}')
        ADVANCE(73);
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
      if (lookahead == '-')
        ADVANCE(80);
      if (lookahead == '/')
        ADVANCE(76);
      if (lookahead == '\\')
        SKIP(146);
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
        ADVANCE(107);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(109);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '\\')
        SKIP(148);
      if (lookahead == 't')
        ADVANCE(67);
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
    case 149:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(75);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(76);
      if (lookahead == ';')
        ADVANCE(19);
      if (lookahead == '\\')
        SKIP(150);
      if (lookahead == '}')
        ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(149);
      END_STATE();
    case 150:
      if (lookahead == 'n')
        SKIP(149);
      END_STATE();
    case 151:
      if (lookahead == '!')
        ADVANCE(107);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(109);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '\\')
        SKIP(152);
      if (lookahead == 'e')
        ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(151);
      END_STATE();
    case 152:
      if (lookahead == 'n')
        SKIP(151);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 74},
  [2] = {.lex_state = 79},
  [3] = {.lex_state = 83},
  [4] = {.lex_state = 85},
  [5] = {.lex_state = 74},
  [6] = {.lex_state = 87},
  [7] = {.lex_state = 74},
  [8] = {.lex_state = 100},
  [9] = {.lex_state = 104},
  [10] = {.lex_state = 87},
  [11] = {.lex_state = 106},
  [12] = {.lex_state = 106},
  [13] = {.lex_state = 112},
  [14] = {.lex_state = 114},
  [15] = {.lex_state = 112},
  [16] = {.lex_state = 104},
  [17] = {.lex_state = 100},
  [18] = {.lex_state = 74},
  [19] = {.lex_state = 87},
  [20] = {.lex_state = 116},
  [21] = {.lex_state = 112},
  [22] = {.lex_state = 104},
  [23] = {.lex_state = 87},
  [24] = {.lex_state = 118},
  [25] = {.lex_state = 120},
  [26] = {.lex_state = 74},
  [27] = {.lex_state = 126},
  [28] = {.lex_state = 104},
  [29] = {.lex_state = 87},
  [30] = {.lex_state = 118},
  [31] = {.lex_state = 120},
  [32] = {.lex_state = 114},
  [33] = {.lex_state = 118},
  [34] = {.lex_state = 118},
  [35] = {.lex_state = 128},
  [36] = {.lex_state = 104},
  [37] = {.lex_state = 130},
  [38] = {.lex_state = 128},
  [39] = {.lex_state = 120},
  [40] = {.lex_state = 120},
  [41] = {.lex_state = 132},
  [42] = {.lex_state = 132},
  [43] = {.lex_state = 134},
  [44] = {.lex_state = 132},
  [45] = {.lex_state = 126},
  [46] = {.lex_state = 87},
  [47] = {.lex_state = 136},
  [48] = {.lex_state = 116},
  [49] = {.lex_state = 130},
  [50] = {.lex_state = 134},
  [51] = {.lex_state = 141},
  [52] = {.lex_state = 143},
  [53] = {.lex_state = 145},
  [54] = {.lex_state = 87},
  [55] = {.lex_state = 120},
  [56] = {.lex_state = 141},
  [57] = {.lex_state = 120},
  [58] = {.lex_state = 147},
  [59] = {.lex_state = 130},
  [60] = {.lex_state = 120},
  [61] = {.lex_state = 120},
  [62] = {.lex_state = 120},
  [63] = {.lex_state = 120},
  [64] = {.lex_state = 120},
  [65] = {.lex_state = 120},
  [66] = {.lex_state = 120},
  [67] = {.lex_state = 120},
  [68] = {.lex_state = 120},
  [69] = {.lex_state = 120},
  [70] = {.lex_state = 87},
  [71] = {.lex_state = 136},
  [72] = {.lex_state = 104},
  [73] = {.lex_state = 136},
  [74] = {.lex_state = 136},
  [75] = {.lex_state = 149},
  [76] = {.lex_state = 136},
  [77] = {.lex_state = 116},
  [78] = {.lex_state = 149},
  [79] = {.lex_state = 87},
  [80] = {.lex_state = 130},
  [81] = {.lex_state = 118},
  [82] = {.lex_state = 118},
  [83] = {.lex_state = 104},
  [84] = {.lex_state = 143},
  [85] = {.lex_state = 87},
  [86] = {.lex_state = 104},
  [87] = {.lex_state = 147},
  [88] = {.lex_state = 132},
  [89] = {.lex_state = 120},
  [90] = {.lex_state = 120},
  [91] = {.lex_state = 120},
  [92] = {.lex_state = 120},
  [93] = {.lex_state = 120},
  [94] = {.lex_state = 120},
  [95] = {.lex_state = 120},
  [96] = {.lex_state = 120},
  [97] = {.lex_state = 120},
  [98] = {.lex_state = 120},
  [99] = {.lex_state = 120},
  [100] = {.lex_state = 147},
  [101] = {.lex_state = 120},
  [102] = {.lex_state = 120},
  [103] = {.lex_state = 120},
  [104] = {.lex_state = 120},
  [105] = {.lex_state = 120},
  [106] = {.lex_state = 120},
  [107] = {.lex_state = 120},
  [108] = {.lex_state = 120},
  [109] = {.lex_state = 120},
  [110] = {.lex_state = 120},
  [111] = {.lex_state = 120},
  [112] = {.lex_state = 87},
  [113] = {.lex_state = 132},
  [114] = {.lex_state = 132},
  [115] = {.lex_state = 134},
  [116] = {.lex_state = 134},
  [117] = {.lex_state = 134},
  [118] = {.lex_state = 134},
  [119] = {.lex_state = 134},
  [120] = {.lex_state = 134},
  [121] = {.lex_state = 134},
  [122] = {.lex_state = 134},
  [123] = {.lex_state = 116},
  [124] = {.lex_state = 116},
  [125] = {.lex_state = 136},
  [126] = {.lex_state = 118},
  [127] = {.lex_state = 136},
  [128] = {.lex_state = 130},
  [129] = {.lex_state = 118},
  [130] = {.lex_state = 130},
  [131] = {.lex_state = 87},
  [132] = {.lex_state = 87},
  [133] = {.lex_state = 141},
  [134] = {.lex_state = 143},
  [135] = {.lex_state = 104},
  [136] = {.lex_state = 143},
  [137] = {.lex_state = 100},
  [138] = {.lex_state = 87},
  [139] = {.lex_state = 143},
  [140] = {.lex_state = 112},
  [141] = {.lex_state = 120},
  [142] = {.lex_state = 141},
  [143] = {.lex_state = 141},
  [144] = {.lex_state = 141},
  [145] = {.lex_state = 141},
  [146] = {.lex_state = 141},
  [147] = {.lex_state = 141},
  [148] = {.lex_state = 141},
  [149] = {.lex_state = 141},
  [150] = {.lex_state = 141},
  [151] = {.lex_state = 120},
  [152] = {.lex_state = 120},
  [153] = {.lex_state = 151},
  [154] = {.lex_state = 147},
  [155] = {.lex_state = 147},
  [156] = {.lex_state = 147},
  [157] = {.lex_state = 147},
  [158] = {.lex_state = 147},
  [159] = {.lex_state = 147},
  [160] = {.lex_state = 147},
  [161] = {.lex_state = 147},
  [162] = {.lex_state = 104},
  [163] = {.lex_state = 87},
  [164] = {.lex_state = 149},
  [165] = {.lex_state = 130},
  [166] = {.lex_state = 126},
  [167] = {.lex_state = 143},
  [168] = {.lex_state = 130},
  [169] = {.lex_state = 136},
  [170] = {.lex_state = 143},
  [171] = {.lex_state = 136},
  [172] = {.lex_state = 104},
  [173] = {.lex_state = 128},
  [174] = {.lex_state = 118},
  [175] = {.lex_state = 141},
  [176] = {.lex_state = 74},
  [177] = {.lex_state = 87},
  [178] = {.lex_state = 118},
  [179] = {.lex_state = 120},
  [180] = {.lex_state = 151},
  [181] = {.lex_state = 132},
  [182] = {.lex_state = 120},
  [183] = {.lex_state = 141},
  [184] = {.lex_state = 151},
  [185] = {.lex_state = 147},
  [186] = {.lex_state = 120},
  [187] = {.lex_state = 120},
  [188] = {.lex_state = 120},
  [189] = {.lex_state = 120},
  [190] = {.lex_state = 120},
  [191] = {.lex_state = 120},
  [192] = {.lex_state = 120},
  [193] = {.lex_state = 120},
  [194] = {.lex_state = 120},
  [195] = {.lex_state = 120},
  [196] = {.lex_state = 120},
  [197] = {.lex_state = 136},
  [198] = {.lex_state = 136},
  [199] = {.lex_state = 118},
  [200] = {.lex_state = 149},
  [201] = {.lex_state = 143},
  [202] = {.lex_state = 136},
  [203] = {.lex_state = 149},
  [204] = {.lex_state = 149},
  [205] = {.lex_state = 143},
  [206] = {.lex_state = 149},
  [207] = {.lex_state = 141},
  [208] = {.lex_state = 128},
  [209] = {.lex_state = 141},
  [210] = {.lex_state = 126},
  [211] = {.lex_state = 143},
  [212] = {.lex_state = 130},
  [213] = {.lex_state = 134},
  [214] = {.lex_state = 120},
  [215] = {.lex_state = 141},
  [216] = {.lex_state = 132},
  [217] = {.lex_state = 141},
  [218] = {.lex_state = 120},
  [219] = {.lex_state = 120},
  [220] = {.lex_state = 134},
  [221] = {.lex_state = 151},
  [222] = {.lex_state = 151},
  [223] = {.lex_state = 151},
  [224] = {.lex_state = 151},
  [225] = {.lex_state = 151},
  [226] = {.lex_state = 151},
  [227] = {.lex_state = 151},
  [228] = {.lex_state = 151},
  [229] = {.lex_state = 136},
  [230] = {.lex_state = 136},
  [231] = {.lex_state = 143},
  [232] = {.lex_state = 143},
  [233] = {.lex_state = 149},
  [234] = {.lex_state = 143},
  [235] = {.lex_state = 149},
  [236] = {.lex_state = 87},
  [237] = {.lex_state = 136},
  [238] = {.lex_state = 87},
  [239] = {.lex_state = 130},
  [240] = {.lex_state = 141},
  [241] = {.lex_state = 147},
  [242] = {.lex_state = 151},
  [243] = {.lex_state = 130},
  [244] = {.lex_state = 130},
  [245] = {.lex_state = 116},
  [246] = {.lex_state = 87},
  [247] = {.lex_state = 120},
  [248] = {.lex_state = 136},
  [249] = {.lex_state = 136},
  [250] = {.lex_state = 87},
  [251] = {.lex_state = 151},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_end] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
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
    [anon_sym_BANG] = ACTIONS(3),
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
    [sym__proc] = STATE(14),
    [sym_par] = STATE(14),
    [sym_nu] = STATE(14),
    [sym_recv] = STATE(14),
    [sym_send] = STATE(14),
    [sym_end] = STATE(14),
    [sym_call] = STATE(14),
    [sym_repl] = STATE(14),
    [sym__name] = STATE(15),
    [sym_reserved_name] = STATE(15),
    [sym_polarized_name] = STATE(15),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [7] = {
    [sym_proc_declaration] = STATE(7),
    [sym_simple_name] = STATE(4),
    [aux_sym_program_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(31),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(33),
    [sym_comment] = ACTIONS(9),
  },
  [8] = {
    [sym__proc] = STATE(20),
    [sym_par] = STATE(20),
    [sym_nu] = STATE(20),
    [sym_recv] = STATE(20),
    [sym_send] = STATE(20),
    [sym_end] = STATE(20),
    [sym_call] = STATE(20),
    [sym_repl] = STATE(20),
    [sym__name] = STATE(21),
    [sym_reserved_name] = STATE(21),
    [sym_polarized_name] = STATE(21),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_nu] = ACTIONS(38),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(40),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_RPAREN] = ACTIONS(42),
    [anon_sym_PIPE] = ACTIONS(42),
    [anon_sym_SEMI] = ACTIONS(42),
    [anon_sym_RBRACE] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(42),
    [sym_comment] = ACTIONS(9),
  },
  [10] = {
    [sym__proc] = STATE(22),
    [sym_par] = STATE(22),
    [sym_nu] = STATE(22),
    [sym_recv] = STATE(22),
    [sym_send] = STATE(22),
    [sym_end] = STATE(22),
    [sym_call] = STATE(22),
    [sym_repl] = STATE(22),
    [sym__name] = STATE(15),
    [sym_reserved_name] = STATE(15),
    [sym_polarized_name] = STATE(15),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [11] = {
    [anon_sym_RPAREN] = ACTIONS(44),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(44),
    [anon_sym_RBRACK] = ACTIONS(44),
    [anon_sym_STAR] = ACTIONS(44),
    [anon_sym_COMMA] = ACTIONS(44),
    [anon_sym_then] = ACTIONS(44),
    [anon_sym_else] = ACTIONS(44),
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
    [anon_sym_RPAREN] = ACTIONS(48),
    [anon_sym_QMARK] = ACTIONS(48),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_RBRACK] = ACTIONS(48),
    [anon_sym_STAR] = ACTIONS(48),
    [anon_sym_COMMA] = ACTIONS(48),
    [anon_sym_then] = ACTIONS(48),
    [anon_sym_else] = ACTIONS(48),
    [anon_sym_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(50),
    [anon_sym_EQ_EQ] = ACTIONS(48),
    [anon_sym_BANG_EQ] = ACTIONS(48),
    [anon_sym_GT] = ACTIONS(50),
    [anon_sym_GT_EQ] = ACTIONS(48),
    [anon_sym_LT] = ACTIONS(50),
    [anon_sym_LT_EQ] = ACTIONS(48),
    [sym_comment] = ACTIONS(9),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_QMARK] = ACTIONS(48),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(11),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(11),
    [sym_comment] = ACTIONS(9),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_PIPE] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(52),
    [sym_comment] = ACTIONS(9),
  },
  [15] = {
    [anon_sym_QMARK] = ACTIONS(56),
    [anon_sym_LBRACK] = ACTIONS(58),
    [sym_comment] = ACTIONS(9),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(60),
    [anon_sym_PIPE] = ACTIONS(60),
    [anon_sym_SEMI] = ACTIONS(60),
    [anon_sym_RBRACE] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(60),
    [sym_comment] = ACTIONS(9),
  },
  [17] = {
    [sym__proc] = STATE(20),
    [sym_par] = STATE(20),
    [sym_nu] = STATE(20),
    [sym_recv] = STATE(20),
    [sym_send] = STATE(20),
    [sym_end] = STATE(20),
    [sym_call] = STATE(20),
    [sym_repl] = STATE(20),
    [sym__name] = STATE(21),
    [sym_reserved_name] = STATE(21),
    [sym_polarized_name] = STATE(21),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_nu] = ACTIONS(62),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(40),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [18] = {
    [sym_simple_name] = STATE(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [19] = {
    [sym__proc] = STATE(22),
    [sym_par] = STATE(22),
    [sym_nu] = STATE(22),
    [sym_recv] = STATE(22),
    [sym_send] = STATE(22),
    [sym_end] = STATE(22),
    [sym_call] = STATE(22),
    [sym_repl] = STATE(22),
    [sym__name] = STATE(21),
    [sym_reserved_name] = STATE(21),
    [sym_polarized_name] = STATE(21),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(36),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(40),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [20] = {
    [anon_sym_RPAREN] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(66),
    [sym_comment] = ACTIONS(9),
  },
  [21] = {
    [anon_sym_QMARK] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [sym_comment] = ACTIONS(9),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_RPAREN] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(72),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_RBRACE] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
  },
  [23] = {
    [sym__proc] = STATE(32),
    [sym_par] = STATE(32),
    [sym_nu] = STATE(32),
    [sym_recv] = STATE(32),
    [sym_send] = STATE(32),
    [sym_end] = STATE(32),
    [sym_call] = STATE(32),
    [sym_repl] = STATE(32),
    [sym__name] = STATE(15),
    [sym_reserved_name] = STATE(15),
    [sym_polarized_name] = STATE(15),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [24] = {
    [sym__clauses] = STATE(36),
    [sym_simple_clause] = STATE(36),
    [sym__complex_clauses] = STATE(36),
    [sym_pattern] = STATE(37),
    [sym_pattern_tuple] = STATE(35),
    [sym_simple_name] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(76),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(78),
    [sym_comment] = ACTIONS(9),
  },
  [25] = {
    [sym__expr] = STATE(43),
    [sym_if_then_else] = STATE(43),
    [sym_tuple] = STATE(43),
    [sym_mul] = STATE(43),
    [sym_div] = STATE(43),
    [sym_add] = STATE(43),
    [sym_sub] = STATE(43),
    [sym_eq] = STATE(43),
    [sym_neq] = STATE(43),
    [sym_gt] = STATE(43),
    [sym_gte] = STATE(43),
    [sym_lt] = STATE(43),
    [sym_lte] = STATE(43),
    [sym__term] = STATE(43),
    [sym_boolean] = STATE(43),
    [sym_integer] = STATE(43),
    [sym_variable] = STATE(43),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(82),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(86),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(90),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [26] = {
    [sym_simple_name] = STATE(45),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [27] = {
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_COLON] = ACTIONS(96),
    [sym_comment] = ACTIONS(9),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_SEMI] = ACTIONS(98),
    [anon_sym_RBRACE] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(98),
    [sym_comment] = ACTIONS(9),
  },
  [29] = {
    [sym__proc] = STATE(48),
    [sym_par] = STATE(48),
    [sym_nu] = STATE(48),
    [sym_recv] = STATE(48),
    [sym_send] = STATE(48),
    [sym_end] = STATE(48),
    [sym_call] = STATE(48),
    [sym_repl] = STATE(48),
    [sym__name] = STATE(21),
    [sym_reserved_name] = STATE(21),
    [sym_polarized_name] = STATE(21),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(36),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(40),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [30] = {
    [sym__clauses] = STATE(36),
    [sym_simple_clause] = STATE(36),
    [sym__complex_clauses] = STATE(36),
    [sym_pattern] = STATE(49),
    [sym_pattern_tuple] = STATE(35),
    [sym_simple_name] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(76),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(78),
    [sym_comment] = ACTIONS(9),
  },
  [31] = {
    [sym__expr] = STATE(50),
    [sym_if_then_else] = STATE(50),
    [sym_tuple] = STATE(50),
    [sym_mul] = STATE(50),
    [sym_div] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym_eq] = STATE(50),
    [sym_neq] = STATE(50),
    [sym_gt] = STATE(50),
    [sym_gte] = STATE(50),
    [sym_lt] = STATE(50),
    [sym_lte] = STATE(50),
    [sym__term] = STATE(50),
    [sym_boolean] = STATE(50),
    [sym_integer] = STATE(50),
    [sym_variable] = STATE(50),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(82),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(100),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(102),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(104),
    [sym_comment] = ACTIONS(9),
  },
  [33] = {
    [sym_pattern] = STATE(51),
    [sym_pattern_tuple] = STATE(35),
    [sym_simple_name] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(78),
    [sym_comment] = ACTIONS(9),
  },
  [34] = {
    [sym_complex_clause] = STATE(52),
    [sym_pattern] = STATE(53),
    [sym_pattern_tuple] = STATE(35),
    [sym_simple_name] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(78),
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
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_PIPE] = ACTIONS(108),
    [anon_sym_SEMI] = ACTIONS(108),
    [anon_sym_RBRACE] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(108),
    [sym_comment] = ACTIONS(9),
  },
  [37] = {
    [anon_sym_DOT] = ACTIONS(110),
    [sym_comment] = ACTIONS(9),
  },
  [38] = {
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_DOT] = ACTIONS(112),
    [anon_sym_DASH_GT] = ACTIONS(112),
    [anon_sym_COMMA] = ACTIONS(112),
    [sym_comment] = ACTIONS(9),
  },
  [39] = {
    [sym__expr] = STATE(56),
    [sym_if_then_else] = STATE(56),
    [sym_tuple] = STATE(56),
    [sym_mul] = STATE(56),
    [sym_div] = STATE(56),
    [sym_add] = STATE(56),
    [sym_sub] = STATE(56),
    [sym_eq] = STATE(56),
    [sym_neq] = STATE(56),
    [sym_gt] = STATE(56),
    [sym_gte] = STATE(56),
    [sym_lt] = STATE(56),
    [sym_lte] = STATE(56),
    [sym__term] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym_integer] = STATE(56),
    [sym_variable] = STATE(56),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(116),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(118),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [40] = {
    [sym__expr] = STATE(58),
    [sym_if_then_else] = STATE(58),
    [sym_tuple] = STATE(58),
    [sym_mul] = STATE(58),
    [sym_div] = STATE(58),
    [sym_add] = STATE(58),
    [sym_sub] = STATE(58),
    [sym_eq] = STATE(58),
    [sym_neq] = STATE(58),
    [sym_gt] = STATE(58),
    [sym_gte] = STATE(58),
    [sym_lt] = STATE(58),
    [sym_lte] = STATE(58),
    [sym__term] = STATE(58),
    [sym_boolean] = STATE(58),
    [sym_integer] = STATE(58),
    [sym_variable] = STATE(58),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(120),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(122),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(124),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [41] = {
    [anon_sym_RPAREN] = ACTIONS(126),
    [anon_sym_RBRACK] = ACTIONS(126),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(126),
    [anon_sym_then] = ACTIONS(126),
    [anon_sym_else] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [anon_sym_BANG_EQ] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [sym_comment] = ACTIONS(9),
  },
  [42] = {
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_RBRACK] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(130),
    [anon_sym_then] = ACTIONS(130),
    [anon_sym_else] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(132),
    [anon_sym_EQ_EQ] = ACTIONS(130),
    [anon_sym_BANG_EQ] = ACTIONS(130),
    [anon_sym_GT] = ACTIONS(132),
    [anon_sym_GT_EQ] = ACTIONS(130),
    [anon_sym_LT] = ACTIONS(132),
    [anon_sym_LT_EQ] = ACTIONS(130),
    [sym_comment] = ACTIONS(9),
  },
  [43] = {
    [anon_sym_RBRACK] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_EQ_EQ] = ACTIONS(144),
    [anon_sym_BANG_EQ] = ACTIONS(146),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_GT_EQ] = ACTIONS(150),
    [anon_sym_LT] = ACTIONS(152),
    [anon_sym_LT_EQ] = ACTIONS(154),
    [sym_comment] = ACTIONS(9),
  },
  [44] = {
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_RBRACK] = ACTIONS(156),
    [anon_sym_STAR] = ACTIONS(156),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_then] = ACTIONS(156),
    [anon_sym_else] = ACTIONS(156),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(156),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(156),
    [anon_sym_BANG_EQ] = ACTIONS(156),
    [anon_sym_GT] = ACTIONS(158),
    [anon_sym_GT_EQ] = ACTIONS(156),
    [anon_sym_LT] = ACTIONS(158),
    [anon_sym_LT_EQ] = ACTIONS(156),
    [sym_comment] = ACTIONS(9),
  },
  [45] = {
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(162),
    [sym_comment] = ACTIONS(9),
  },
  [46] = {
    [sym__proc] = STATE(72),
    [sym_par] = STATE(72),
    [sym_nu] = STATE(72),
    [sym_recv] = STATE(72),
    [sym_send] = STATE(72),
    [sym_end] = STATE(72),
    [sym_call] = STATE(72),
    [sym_repl] = STATE(72),
    [sym__name] = STATE(15),
    [sym_reserved_name] = STATE(15),
    [sym_polarized_name] = STATE(15),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [47] = {
    [sym__type] = STATE(77),
    [sym_type_send] = STATE(77),
    [sym_type_recv] = STATE(77),
    [sym_type_select] = STATE(77),
    [sym_type_choice] = STATE(77),
    [sym_type_end] = STATE(77),
    [sym_type_call] = STATE(77),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(166),
    [aux_sym_end] = ACTIONS(168),
    [anon_sym_BANG] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [48] = {
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(66),
    [sym_comment] = ACTIONS(9),
  },
  [49] = {
    [anon_sym_DOT] = ACTIONS(174),
    [sym_comment] = ACTIONS(9),
  },
  [50] = {
    [anon_sym_RBRACK] = ACTIONS(176),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_EQ_EQ] = ACTIONS(144),
    [anon_sym_BANG_EQ] = ACTIONS(146),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_GT_EQ] = ACTIONS(150),
    [anon_sym_LT] = ACTIONS(152),
    [anon_sym_LT_EQ] = ACTIONS(154),
    [sym_comment] = ACTIONS(9),
  },
  [51] = {
    [anon_sym_COMMA] = ACTIONS(178),
    [sym_comment] = ACTIONS(9),
  },
  [52] = {
    [aux_sym__complex_clauses_repeat1] = STATE(84),
    [anon_sym_SEMI] = ACTIONS(180),
    [anon_sym_RBRACE] = ACTIONS(182),
    [sym_comment] = ACTIONS(9),
  },
  [53] = {
    [anon_sym_DASH_GT] = ACTIONS(184),
    [sym_comment] = ACTIONS(9),
  },
  [54] = {
    [sym__proc] = STATE(86),
    [sym_par] = STATE(86),
    [sym_nu] = STATE(86),
    [sym_recv] = STATE(86),
    [sym_send] = STATE(86),
    [sym_end] = STATE(86),
    [sym_call] = STATE(86),
    [sym_repl] = STATE(86),
    [sym__name] = STATE(15),
    [sym_reserved_name] = STATE(15),
    [sym_polarized_name] = STATE(15),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [55] = {
    [sym__expr] = STATE(87),
    [sym_if_then_else] = STATE(87),
    [sym_tuple] = STATE(87),
    [sym_mul] = STATE(87),
    [sym_div] = STATE(87),
    [sym_add] = STATE(87),
    [sym_sub] = STATE(87),
    [sym_eq] = STATE(87),
    [sym_neq] = STATE(87),
    [sym_gt] = STATE(87),
    [sym_gte] = STATE(87),
    [sym_lt] = STATE(87),
    [sym_lte] = STATE(87),
    [sym__term] = STATE(87),
    [sym_boolean] = STATE(87),
    [sym_integer] = STATE(87),
    [sym_variable] = STATE(87),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(120),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(186),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(188),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [56] = {
    [anon_sym_RPAREN] = ACTIONS(190),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(200),
    [anon_sym_EQ_EQ] = ACTIONS(202),
    [anon_sym_BANG_EQ] = ACTIONS(204),
    [anon_sym_GT] = ACTIONS(206),
    [anon_sym_GT_EQ] = ACTIONS(208),
    [anon_sym_LT] = ACTIONS(210),
    [anon_sym_LT_EQ] = ACTIONS(212),
    [sym_comment] = ACTIONS(9),
  },
  [57] = {
    [sym__expr] = STATE(100),
    [sym_if_then_else] = STATE(100),
    [sym_tuple] = STATE(100),
    [sym_mul] = STATE(100),
    [sym_div] = STATE(100),
    [sym_add] = STATE(100),
    [sym_sub] = STATE(100),
    [sym_eq] = STATE(100),
    [sym_neq] = STATE(100),
    [sym_gt] = STATE(100),
    [sym_gte] = STATE(100),
    [sym_lt] = STATE(100),
    [sym_lte] = STATE(100),
    [sym__term] = STATE(100),
    [sym_boolean] = STATE(100),
    [sym_integer] = STATE(100),
    [sym_variable] = STATE(100),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(120),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(214),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(216),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [58] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(220),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_EQ_EQ] = ACTIONS(228),
    [anon_sym_BANG_EQ] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(232),
    [anon_sym_GT_EQ] = ACTIONS(234),
    [anon_sym_LT] = ACTIONS(236),
    [anon_sym_LT_EQ] = ACTIONS(238),
    [sym_comment] = ACTIONS(9),
  },
  [59] = {
    [anon_sym_DOT] = ACTIONS(240),
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(82),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(242),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(244),
    [sym__digit] = ACTIONS(92),
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(82),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(246),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(248),
    [sym__digit] = ACTIONS(92),
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(82),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(250),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(252),
    [sym__digit] = ACTIONS(92),
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(82),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(254),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(256),
    [sym__digit] = ACTIONS(92),
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(82),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(258),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(260),
    [sym__digit] = ACTIONS(92),
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(82),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(262),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(264),
    [sym__digit] = ACTIONS(92),
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(82),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(266),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(268),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [67] = {
    [sym__expr] = STATE(120),
    [sym_if_then_else] = STATE(120),
    [sym_tuple] = STATE(120),
    [sym_mul] = STATE(120),
    [sym_div] = STATE(120),
    [sym_add] = STATE(120),
    [sym_sub] = STATE(120),
    [sym_eq] = STATE(120),
    [sym_neq] = STATE(120),
    [sym_gt] = STATE(120),
    [sym_gte] = STATE(120),
    [sym_lt] = STATE(120),
    [sym_lte] = STATE(120),
    [sym__term] = STATE(120),
    [sym_boolean] = STATE(120),
    [sym_integer] = STATE(120),
    [sym_variable] = STATE(120),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(82),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(270),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(272),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [68] = {
    [sym__expr] = STATE(121),
    [sym_if_then_else] = STATE(121),
    [sym_tuple] = STATE(121),
    [sym_mul] = STATE(121),
    [sym_div] = STATE(121),
    [sym_add] = STATE(121),
    [sym_sub] = STATE(121),
    [sym_eq] = STATE(121),
    [sym_neq] = STATE(121),
    [sym_gt] = STATE(121),
    [sym_gte] = STATE(121),
    [sym_lt] = STATE(121),
    [sym_lte] = STATE(121),
    [sym__term] = STATE(121),
    [sym_boolean] = STATE(121),
    [sym_integer] = STATE(121),
    [sym_variable] = STATE(121),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(82),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(274),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(276),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [69] = {
    [sym__expr] = STATE(122),
    [sym_if_then_else] = STATE(122),
    [sym_tuple] = STATE(122),
    [sym_mul] = STATE(122),
    [sym_div] = STATE(122),
    [sym_add] = STATE(122),
    [sym_sub] = STATE(122),
    [sym_eq] = STATE(122),
    [sym_neq] = STATE(122),
    [sym_gt] = STATE(122),
    [sym_gte] = STATE(122),
    [sym_lt] = STATE(122),
    [sym_lte] = STATE(122),
    [sym__term] = STATE(122),
    [sym_boolean] = STATE(122),
    [sym_integer] = STATE(122),
    [sym_variable] = STATE(122),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(82),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(278),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(280),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [70] = {
    [sym__proc] = STATE(72),
    [sym_par] = STATE(72),
    [sym_nu] = STATE(72),
    [sym_recv] = STATE(72),
    [sym_send] = STATE(72),
    [sym_end] = STATE(72),
    [sym_call] = STATE(72),
    [sym_repl] = STATE(72),
    [sym__name] = STATE(21),
    [sym_reserved_name] = STATE(21),
    [sym_polarized_name] = STATE(21),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(36),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(40),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [71] = {
    [sym__type] = STATE(123),
    [sym_type_send] = STATE(123),
    [sym_type_recv] = STATE(123),
    [sym_type_select] = STATE(123),
    [sym_type_choice] = STATE(123),
    [sym_type_end] = STATE(123),
    [sym_type_call] = STATE(123),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(166),
    [aux_sym_end] = ACTIONS(168),
    [anon_sym_BANG] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(282),
    [anon_sym_RPAREN] = ACTIONS(282),
    [anon_sym_PIPE] = ACTIONS(282),
    [anon_sym_SEMI] = ACTIONS(282),
    [anon_sym_RBRACE] = ACTIONS(282),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(282),
    [sym_comment] = ACTIONS(9),
  },
  [73] = {
    [sym__type] = STATE(124),
    [sym_type_send] = STATE(124),
    [sym_type_recv] = STATE(124),
    [sym_type_select] = STATE(124),
    [sym_type_choice] = STATE(124),
    [sym_type_end] = STATE(124),
    [sym_type_call] = STATE(124),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(166),
    [aux_sym_end] = ACTIONS(168),
    [anon_sym_BANG] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [74] = {
    [sym__sort] = STATE(128),
    [sym__type] = STATE(128),
    [sym_type_send] = STATE(128),
    [sym_type_recv] = STATE(128),
    [sym_type_select] = STATE(128),
    [sym_type_choice] = STATE(128),
    [sym_type_end] = STATE(128),
    [sym_type_call] = STATE(128),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(284),
    [aux_sym_end] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_sort_int] = ACTIONS(288),
    [sym_sort_bool] = ACTIONS(288),
    [anon_sym_BANG] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
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
    [sym__sort] = STATE(130),
    [sym__type] = STATE(130),
    [sym_type_send] = STATE(130),
    [sym_type_recv] = STATE(130),
    [sym_type_select] = STATE(130),
    [sym_type_choice] = STATE(130),
    [sym_type_end] = STATE(130),
    [sym_type_call] = STATE(130),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(284),
    [aux_sym_end] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(294),
    [sym_sort_int] = ACTIONS(296),
    [sym_sort_bool] = ACTIONS(296),
    [anon_sym_BANG] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [77] = {
    [anon_sym_RPAREN] = ACTIONS(298),
    [sym_comment] = ACTIONS(9),
  },
  [78] = {
    [anon_sym_RPAREN] = ACTIONS(300),
    [anon_sym_DOT] = ACTIONS(300),
    [anon_sym_SEMI] = ACTIONS(300),
    [anon_sym_RBRACE] = ACTIONS(300),
    [sym_comment] = ACTIONS(9),
  },
  [79] = {
    [sym__proc] = STATE(86),
    [sym_par] = STATE(86),
    [sym_nu] = STATE(86),
    [sym_recv] = STATE(86),
    [sym_send] = STATE(86),
    [sym_end] = STATE(86),
    [sym_call] = STATE(86),
    [sym_repl] = STATE(86),
    [sym__name] = STATE(21),
    [sym_reserved_name] = STATE(21),
    [sym_polarized_name] = STATE(21),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(36),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(40),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [80] = {
    [anon_sym_DOT] = ACTIONS(302),
    [sym_comment] = ACTIONS(9),
  },
  [81] = {
    [sym_pattern] = STATE(133),
    [sym_pattern_tuple] = STATE(35),
    [sym_simple_name] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(78),
    [sym_comment] = ACTIONS(9),
  },
  [82] = {
    [sym_complex_clause] = STATE(134),
    [sym_pattern] = STATE(53),
    [sym_pattern_tuple] = STATE(35),
    [sym_simple_name] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(78),
    [sym_comment] = ACTIONS(9),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(304),
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_PIPE] = ACTIONS(304),
    [anon_sym_SEMI] = ACTIONS(304),
    [anon_sym_RBRACE] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(304),
    [sym_comment] = ACTIONS(9),
  },
  [84] = {
    [aux_sym__complex_clauses_repeat1] = STATE(136),
    [anon_sym_SEMI] = ACTIONS(180),
    [anon_sym_RBRACE] = ACTIONS(306),
    [sym_comment] = ACTIONS(9),
  },
  [85] = {
    [sym__proc] = STATE(139),
    [sym_par] = STATE(139),
    [sym_nu] = STATE(139),
    [sym_recv] = STATE(139),
    [sym_send] = STATE(139),
    [sym_end] = STATE(139),
    [sym_call] = STATE(139),
    [sym_repl] = STATE(139),
    [sym__name] = STATE(140),
    [sym_reserved_name] = STATE(140),
    [sym_polarized_name] = STATE(140),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(308),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(312),
    [anon_sym_RPAREN] = ACTIONS(312),
    [anon_sym_PIPE] = ACTIONS(312),
    [anon_sym_SEMI] = ACTIONS(312),
    [anon_sym_RBRACE] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(312),
    [sym_comment] = ACTIONS(9),
  },
  [87] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(314),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_EQ_EQ] = ACTIONS(228),
    [anon_sym_BANG_EQ] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(232),
    [anon_sym_GT_EQ] = ACTIONS(234),
    [anon_sym_LT] = ACTIONS(236),
    [anon_sym_LT_EQ] = ACTIONS(238),
    [sym_comment] = ACTIONS(9),
  },
  [88] = {
    [anon_sym_RPAREN] = ACTIONS(316),
    [anon_sym_RBRACK] = ACTIONS(316),
    [anon_sym_STAR] = ACTIONS(316),
    [anon_sym_COMMA] = ACTIONS(316),
    [anon_sym_then] = ACTIONS(316),
    [anon_sym_else] = ACTIONS(316),
    [anon_sym_SLASH] = ACTIONS(318),
    [anon_sym_PLUS] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(318),
    [anon_sym_EQ_EQ] = ACTIONS(316),
    [anon_sym_BANG_EQ] = ACTIONS(316),
    [anon_sym_GT] = ACTIONS(318),
    [anon_sym_GT_EQ] = ACTIONS(316),
    [anon_sym_LT] = ACTIONS(318),
    [anon_sym_LT_EQ] = ACTIONS(316),
    [sym_comment] = ACTIONS(9),
  },
  [89] = {
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(242),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(244),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [90] = {
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(320),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(322),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [91] = {
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(246),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(248),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [92] = {
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(324),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(326),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [93] = {
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(328),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(330),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [94] = {
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(332),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(334),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [95] = {
    [sym__expr] = STATE(146),
    [sym_if_then_else] = STATE(146),
    [sym_tuple] = STATE(146),
    [sym_mul] = STATE(146),
    [sym_div] = STATE(146),
    [sym_add] = STATE(146),
    [sym_sub] = STATE(146),
    [sym_eq] = STATE(146),
    [sym_neq] = STATE(146),
    [sym_gt] = STATE(146),
    [sym_gte] = STATE(146),
    [sym_lt] = STATE(146),
    [sym_lte] = STATE(146),
    [sym__term] = STATE(146),
    [sym_boolean] = STATE(146),
    [sym_integer] = STATE(146),
    [sym_variable] = STATE(146),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(336),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(338),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [96] = {
    [sym__expr] = STATE(147),
    [sym_if_then_else] = STATE(147),
    [sym_tuple] = STATE(147),
    [sym_mul] = STATE(147),
    [sym_div] = STATE(147),
    [sym_add] = STATE(147),
    [sym_sub] = STATE(147),
    [sym_eq] = STATE(147),
    [sym_neq] = STATE(147),
    [sym_gt] = STATE(147),
    [sym_gte] = STATE(147),
    [sym_lt] = STATE(147),
    [sym_lte] = STATE(147),
    [sym__term] = STATE(147),
    [sym_boolean] = STATE(147),
    [sym_integer] = STATE(147),
    [sym_variable] = STATE(147),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(340),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(342),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [97] = {
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(344),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(346),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [98] = {
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(348),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(350),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [99] = {
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(352),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(354),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [100] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(356),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_EQ_EQ] = ACTIONS(228),
    [anon_sym_BANG_EQ] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(232),
    [anon_sym_GT_EQ] = ACTIONS(234),
    [anon_sym_LT] = ACTIONS(236),
    [anon_sym_LT_EQ] = ACTIONS(238),
    [sym_comment] = ACTIONS(9),
  },
  [101] = {
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(120),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(242),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(244),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [102] = {
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(360),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(362),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [103] = {
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(120),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(246),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(248),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [104] = {
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(120),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(364),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(366),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [105] = {
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(120),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(368),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(370),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [106] = {
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(120),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(372),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(374),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [107] = {
    [sym__expr] = STATE(157),
    [sym_if_then_else] = STATE(157),
    [sym_tuple] = STATE(157),
    [sym_mul] = STATE(157),
    [sym_div] = STATE(157),
    [sym_add] = STATE(157),
    [sym_sub] = STATE(157),
    [sym_eq] = STATE(157),
    [sym_neq] = STATE(157),
    [sym_gt] = STATE(157),
    [sym_gte] = STATE(157),
    [sym_lt] = STATE(157),
    [sym_lte] = STATE(157),
    [sym__term] = STATE(157),
    [sym_boolean] = STATE(157),
    [sym_integer] = STATE(157),
    [sym_variable] = STATE(157),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(120),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(376),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(378),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [108] = {
    [sym__expr] = STATE(158),
    [sym_if_then_else] = STATE(158),
    [sym_tuple] = STATE(158),
    [sym_mul] = STATE(158),
    [sym_div] = STATE(158),
    [sym_add] = STATE(158),
    [sym_sub] = STATE(158),
    [sym_eq] = STATE(158),
    [sym_neq] = STATE(158),
    [sym_gt] = STATE(158),
    [sym_gte] = STATE(158),
    [sym_lt] = STATE(158),
    [sym_lte] = STATE(158),
    [sym__term] = STATE(158),
    [sym_boolean] = STATE(158),
    [sym_integer] = STATE(158),
    [sym_variable] = STATE(158),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(120),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(380),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(382),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [109] = {
    [sym__expr] = STATE(159),
    [sym_if_then_else] = STATE(159),
    [sym_tuple] = STATE(159),
    [sym_mul] = STATE(159),
    [sym_div] = STATE(159),
    [sym_add] = STATE(159),
    [sym_sub] = STATE(159),
    [sym_eq] = STATE(159),
    [sym_neq] = STATE(159),
    [sym_gt] = STATE(159),
    [sym_gte] = STATE(159),
    [sym_lt] = STATE(159),
    [sym_lte] = STATE(159),
    [sym__term] = STATE(159),
    [sym_boolean] = STATE(159),
    [sym_integer] = STATE(159),
    [sym_variable] = STATE(159),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(120),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(384),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(386),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [110] = {
    [sym__expr] = STATE(160),
    [sym_if_then_else] = STATE(160),
    [sym_tuple] = STATE(160),
    [sym_mul] = STATE(160),
    [sym_div] = STATE(160),
    [sym_add] = STATE(160),
    [sym_sub] = STATE(160),
    [sym_eq] = STATE(160),
    [sym_neq] = STATE(160),
    [sym_gt] = STATE(160),
    [sym_gte] = STATE(160),
    [sym_lt] = STATE(160),
    [sym_lte] = STATE(160),
    [sym__term] = STATE(160),
    [sym_boolean] = STATE(160),
    [sym_integer] = STATE(160),
    [sym_variable] = STATE(160),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(120),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(388),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(390),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [111] = {
    [sym__expr] = STATE(161),
    [sym_if_then_else] = STATE(161),
    [sym_tuple] = STATE(161),
    [sym_mul] = STATE(161),
    [sym_div] = STATE(161),
    [sym_add] = STATE(161),
    [sym_sub] = STATE(161),
    [sym_eq] = STATE(161),
    [sym_neq] = STATE(161),
    [sym_gt] = STATE(161),
    [sym_gte] = STATE(161),
    [sym_lt] = STATE(161),
    [sym_lte] = STATE(161),
    [sym__term] = STATE(161),
    [sym_boolean] = STATE(161),
    [sym_integer] = STATE(161),
    [sym_variable] = STATE(161),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(120),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(392),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(394),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [112] = {
    [sym__proc] = STATE(162),
    [sym_par] = STATE(162),
    [sym_nu] = STATE(162),
    [sym_recv] = STATE(162),
    [sym_send] = STATE(162),
    [sym_end] = STATE(162),
    [sym_call] = STATE(162),
    [sym_repl] = STATE(162),
    [sym__name] = STATE(15),
    [sym_reserved_name] = STATE(15),
    [sym_polarized_name] = STATE(15),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [113] = {
    [anon_sym_RPAREN] = ACTIONS(396),
    [anon_sym_RBRACK] = ACTIONS(396),
    [anon_sym_STAR] = ACTIONS(396),
    [anon_sym_COMMA] = ACTIONS(396),
    [anon_sym_then] = ACTIONS(396),
    [anon_sym_else] = ACTIONS(396),
    [anon_sym_SLASH] = ACTIONS(398),
    [anon_sym_PLUS] = ACTIONS(396),
    [anon_sym_DASH] = ACTIONS(398),
    [anon_sym_EQ_EQ] = ACTIONS(396),
    [anon_sym_BANG_EQ] = ACTIONS(396),
    [anon_sym_GT] = ACTIONS(398),
    [anon_sym_GT_EQ] = ACTIONS(396),
    [anon_sym_LT] = ACTIONS(398),
    [anon_sym_LT_EQ] = ACTIONS(396),
    [sym_comment] = ACTIONS(9),
  },
  [114] = {
    [anon_sym_RPAREN] = ACTIONS(400),
    [anon_sym_RBRACK] = ACTIONS(400),
    [anon_sym_STAR] = ACTIONS(400),
    [anon_sym_COMMA] = ACTIONS(400),
    [anon_sym_then] = ACTIONS(400),
    [anon_sym_else] = ACTIONS(400),
    [anon_sym_SLASH] = ACTIONS(402),
    [anon_sym_PLUS] = ACTIONS(400),
    [anon_sym_DASH] = ACTIONS(402),
    [anon_sym_EQ_EQ] = ACTIONS(400),
    [anon_sym_BANG_EQ] = ACTIONS(400),
    [anon_sym_GT] = ACTIONS(402),
    [anon_sym_GT_EQ] = ACTIONS(400),
    [anon_sym_LT] = ACTIONS(402),
    [anon_sym_LT_EQ] = ACTIONS(400),
    [sym_comment] = ACTIONS(9),
  },
  [115] = {
    [anon_sym_RBRACK] = ACTIONS(404),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(404),
    [anon_sym_DASH] = ACTIONS(406),
    [anon_sym_EQ_EQ] = ACTIONS(404),
    [anon_sym_BANG_EQ] = ACTIONS(404),
    [anon_sym_GT] = ACTIONS(406),
    [anon_sym_GT_EQ] = ACTIONS(404),
    [anon_sym_LT] = ACTIONS(406),
    [anon_sym_LT_EQ] = ACTIONS(404),
    [sym_comment] = ACTIONS(9),
  },
  [116] = {
    [anon_sym_RBRACK] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(408),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_EQ_EQ] = ACTIONS(408),
    [anon_sym_BANG_EQ] = ACTIONS(408),
    [anon_sym_GT] = ACTIONS(410),
    [anon_sym_GT_EQ] = ACTIONS(408),
    [anon_sym_LT] = ACTIONS(410),
    [anon_sym_LT_EQ] = ACTIONS(408),
    [sym_comment] = ACTIONS(9),
  },
  [117] = {
    [anon_sym_RBRACK] = ACTIONS(412),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_EQ_EQ] = ACTIONS(412),
    [anon_sym_BANG_EQ] = ACTIONS(412),
    [anon_sym_GT] = ACTIONS(414),
    [anon_sym_GT_EQ] = ACTIONS(412),
    [anon_sym_LT] = ACTIONS(414),
    [anon_sym_LT_EQ] = ACTIONS(412),
    [sym_comment] = ACTIONS(9),
  },
  [118] = {
    [anon_sym_RBRACK] = ACTIONS(416),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_EQ_EQ] = ACTIONS(416),
    [anon_sym_BANG_EQ] = ACTIONS(416),
    [anon_sym_GT] = ACTIONS(418),
    [anon_sym_GT_EQ] = ACTIONS(416),
    [anon_sym_LT] = ACTIONS(418),
    [anon_sym_LT_EQ] = ACTIONS(416),
    [sym_comment] = ACTIONS(9),
  },
  [119] = {
    [anon_sym_RBRACK] = ACTIONS(420),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_EQ_EQ] = ACTIONS(420),
    [anon_sym_BANG_EQ] = ACTIONS(420),
    [anon_sym_GT] = ACTIONS(422),
    [anon_sym_GT_EQ] = ACTIONS(420),
    [anon_sym_LT] = ACTIONS(422),
    [anon_sym_LT_EQ] = ACTIONS(420),
    [sym_comment] = ACTIONS(9),
  },
  [120] = {
    [anon_sym_RBRACK] = ACTIONS(424),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_EQ_EQ] = ACTIONS(424),
    [anon_sym_BANG_EQ] = ACTIONS(424),
    [anon_sym_GT] = ACTIONS(426),
    [anon_sym_GT_EQ] = ACTIONS(424),
    [anon_sym_LT] = ACTIONS(426),
    [anon_sym_LT_EQ] = ACTIONS(424),
    [sym_comment] = ACTIONS(9),
  },
  [121] = {
    [anon_sym_RBRACK] = ACTIONS(428),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_EQ_EQ] = ACTIONS(428),
    [anon_sym_BANG_EQ] = ACTIONS(428),
    [anon_sym_GT] = ACTIONS(430),
    [anon_sym_GT_EQ] = ACTIONS(428),
    [anon_sym_LT] = ACTIONS(430),
    [anon_sym_LT_EQ] = ACTIONS(428),
    [sym_comment] = ACTIONS(9),
  },
  [122] = {
    [anon_sym_RBRACK] = ACTIONS(432),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_EQ_EQ] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(432),
    [anon_sym_GT] = ACTIONS(434),
    [anon_sym_GT_EQ] = ACTIONS(432),
    [anon_sym_LT] = ACTIONS(434),
    [anon_sym_LT_EQ] = ACTIONS(432),
    [sym_comment] = ACTIONS(9),
  },
  [123] = {
    [anon_sym_RPAREN] = ACTIONS(436),
    [sym_comment] = ACTIONS(9),
  },
  [124] = {
    [anon_sym_RPAREN] = ACTIONS(438),
    [sym_comment] = ACTIONS(9),
  },
  [125] = {
    [sym__sort] = STATE(165),
    [sym__type] = STATE(165),
    [sym_type_send] = STATE(165),
    [sym_type_recv] = STATE(165),
    [sym_type_select] = STATE(165),
    [sym_type_choice] = STATE(165),
    [sym_type_end] = STATE(165),
    [sym_type_call] = STATE(165),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(284),
    [aux_sym_end] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_sort_int] = ACTIONS(440),
    [sym_sort_bool] = ACTIONS(440),
    [anon_sym_BANG] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [126] = {
    [sym__type_of_label] = STATE(167),
    [sym_label] = ACTIONS(442),
    [sym_comment] = ACTIONS(9),
  },
  [127] = {
    [sym__sort] = STATE(168),
    [sym__type] = STATE(168),
    [sym_type_send] = STATE(168),
    [sym_type_recv] = STATE(168),
    [sym_type_select] = STATE(168),
    [sym_type_choice] = STATE(168),
    [sym_type_end] = STATE(168),
    [sym_type_call] = STATE(168),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(284),
    [aux_sym_end] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(294),
    [sym_sort_int] = ACTIONS(444),
    [sym_sort_bool] = ACTIONS(444),
    [anon_sym_BANG] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [128] = {
    [anon_sym_DOT] = ACTIONS(446),
    [sym_comment] = ACTIONS(9),
  },
  [129] = {
    [sym__type_of_label] = STATE(170),
    [sym_label] = ACTIONS(442),
    [sym_comment] = ACTIONS(9),
  },
  [130] = {
    [anon_sym_DOT] = ACTIONS(448),
    [sym_comment] = ACTIONS(9),
  },
  [131] = {
    [sym__proc] = STATE(172),
    [sym_par] = STATE(172),
    [sym_nu] = STATE(172),
    [sym_recv] = STATE(172),
    [sym_send] = STATE(172),
    [sym_end] = STATE(172),
    [sym_call] = STATE(172),
    [sym_repl] = STATE(172),
    [sym__name] = STATE(15),
    [sym_reserved_name] = STATE(15),
    [sym_polarized_name] = STATE(15),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [132] = {
    [sym__proc] = STATE(162),
    [sym_par] = STATE(162),
    [sym_nu] = STATE(162),
    [sym_recv] = STATE(162),
    [sym_send] = STATE(162),
    [sym_end] = STATE(162),
    [sym_call] = STATE(162),
    [sym_repl] = STATE(162),
    [sym__name] = STATE(21),
    [sym_reserved_name] = STATE(21),
    [sym_polarized_name] = STATE(21),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(36),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(40),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [133] = {
    [aux_sym_pattern_tuple_repeat1] = STATE(175),
    [anon_sym_RPAREN] = ACTIONS(450),
    [anon_sym_COMMA] = ACTIONS(452),
    [sym_comment] = ACTIONS(9),
  },
  [134] = {
    [anon_sym_SEMI] = ACTIONS(454),
    [anon_sym_RBRACE] = ACTIONS(454),
    [sym_comment] = ACTIONS(9),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(456),
    [anon_sym_RPAREN] = ACTIONS(456),
    [anon_sym_PIPE] = ACTIONS(456),
    [anon_sym_SEMI] = ACTIONS(456),
    [anon_sym_RBRACE] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(456),
    [sym_comment] = ACTIONS(9),
  },
  [136] = {
    [aux_sym__complex_clauses_repeat1] = STATE(136),
    [anon_sym_SEMI] = ACTIONS(458),
    [anon_sym_RBRACE] = ACTIONS(454),
    [sym_comment] = ACTIONS(9),
  },
  [137] = {
    [sym__proc] = STATE(20),
    [sym_par] = STATE(20),
    [sym_nu] = STATE(20),
    [sym_recv] = STATE(20),
    [sym_send] = STATE(20),
    [sym_end] = STATE(20),
    [sym_call] = STATE(20),
    [sym_repl] = STATE(20),
    [sym__name] = STATE(21),
    [sym_reserved_name] = STATE(21),
    [sym_polarized_name] = STATE(21),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_nu] = ACTIONS(461),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(40),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [138] = {
    [sym__proc] = STATE(22),
    [sym_par] = STATE(22),
    [sym_nu] = STATE(22),
    [sym_recv] = STATE(22),
    [sym_send] = STATE(22),
    [sym_end] = STATE(22),
    [sym_call] = STATE(22),
    [sym_repl] = STATE(22),
    [sym__name] = STATE(140),
    [sym_reserved_name] = STATE(140),
    [sym_polarized_name] = STATE(140),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(308),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [139] = {
    [anon_sym_PIPE] = ACTIONS(463),
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_RBRACE] = ACTIONS(465),
    [sym_comment] = ACTIONS(9),
  },
  [140] = {
    [anon_sym_QMARK] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(469),
    [sym_comment] = ACTIONS(9),
  },
  [141] = {
    [sym__expr] = STATE(180),
    [sym_if_then_else] = STATE(180),
    [sym_tuple] = STATE(180),
    [sym_mul] = STATE(180),
    [sym_div] = STATE(180),
    [sym_add] = STATE(180),
    [sym_sub] = STATE(180),
    [sym_eq] = STATE(180),
    [sym_neq] = STATE(180),
    [sym_gt] = STATE(180),
    [sym_gte] = STATE(180),
    [sym_lt] = STATE(180),
    [sym_lte] = STATE(180),
    [sym__term] = STATE(180),
    [sym_boolean] = STATE(180),
    [sym_integer] = STATE(180),
    [sym_variable] = STATE(180),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(471),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(473),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [142] = {
    [aux_sym_tuple_repeat1] = STATE(183),
    [anon_sym_RPAREN] = ACTIONS(475),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(200),
    [anon_sym_EQ_EQ] = ACTIONS(202),
    [anon_sym_BANG_EQ] = ACTIONS(204),
    [anon_sym_GT] = ACTIONS(206),
    [anon_sym_GT_EQ] = ACTIONS(208),
    [anon_sym_LT] = ACTIONS(210),
    [anon_sym_LT_EQ] = ACTIONS(212),
    [sym_comment] = ACTIONS(9),
  },
  [143] = {
    [anon_sym_RPAREN] = ACTIONS(404),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(404),
    [anon_sym_DASH] = ACTIONS(406),
    [anon_sym_EQ_EQ] = ACTIONS(404),
    [anon_sym_BANG_EQ] = ACTIONS(404),
    [anon_sym_GT] = ACTIONS(406),
    [anon_sym_GT_EQ] = ACTIONS(404),
    [anon_sym_LT] = ACTIONS(406),
    [anon_sym_LT_EQ] = ACTIONS(404),
    [sym_comment] = ACTIONS(9),
  },
  [144] = {
    [anon_sym_RPAREN] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(408),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(408),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_EQ_EQ] = ACTIONS(408),
    [anon_sym_BANG_EQ] = ACTIONS(408),
    [anon_sym_GT] = ACTIONS(410),
    [anon_sym_GT_EQ] = ACTIONS(408),
    [anon_sym_LT] = ACTIONS(410),
    [anon_sym_LT_EQ] = ACTIONS(408),
    [sym_comment] = ACTIONS(9),
  },
  [145] = {
    [anon_sym_RPAREN] = ACTIONS(412),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(200),
    [anon_sym_EQ_EQ] = ACTIONS(412),
    [anon_sym_BANG_EQ] = ACTIONS(412),
    [anon_sym_GT] = ACTIONS(414),
    [anon_sym_GT_EQ] = ACTIONS(412),
    [anon_sym_LT] = ACTIONS(414),
    [anon_sym_LT_EQ] = ACTIONS(412),
    [sym_comment] = ACTIONS(9),
  },
  [146] = {
    [anon_sym_RPAREN] = ACTIONS(416),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(416),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(200),
    [anon_sym_EQ_EQ] = ACTIONS(416),
    [anon_sym_BANG_EQ] = ACTIONS(416),
    [anon_sym_GT] = ACTIONS(418),
    [anon_sym_GT_EQ] = ACTIONS(416),
    [anon_sym_LT] = ACTIONS(418),
    [anon_sym_LT_EQ] = ACTIONS(416),
    [sym_comment] = ACTIONS(9),
  },
  [147] = {
    [anon_sym_RPAREN] = ACTIONS(420),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(420),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(200),
    [anon_sym_EQ_EQ] = ACTIONS(420),
    [anon_sym_BANG_EQ] = ACTIONS(420),
    [anon_sym_GT] = ACTIONS(422),
    [anon_sym_GT_EQ] = ACTIONS(420),
    [anon_sym_LT] = ACTIONS(422),
    [anon_sym_LT_EQ] = ACTIONS(420),
    [sym_comment] = ACTIONS(9),
  },
  [148] = {
    [anon_sym_RPAREN] = ACTIONS(424),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(424),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(200),
    [anon_sym_EQ_EQ] = ACTIONS(424),
    [anon_sym_BANG_EQ] = ACTIONS(424),
    [anon_sym_GT] = ACTIONS(426),
    [anon_sym_GT_EQ] = ACTIONS(424),
    [anon_sym_LT] = ACTIONS(426),
    [anon_sym_LT_EQ] = ACTIONS(424),
    [sym_comment] = ACTIONS(9),
  },
  [149] = {
    [anon_sym_RPAREN] = ACTIONS(428),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(428),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(200),
    [anon_sym_EQ_EQ] = ACTIONS(428),
    [anon_sym_BANG_EQ] = ACTIONS(428),
    [anon_sym_GT] = ACTIONS(430),
    [anon_sym_GT_EQ] = ACTIONS(428),
    [anon_sym_LT] = ACTIONS(430),
    [anon_sym_LT_EQ] = ACTIONS(428),
    [sym_comment] = ACTIONS(9),
  },
  [150] = {
    [anon_sym_RPAREN] = ACTIONS(432),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(200),
    [anon_sym_EQ_EQ] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(432),
    [anon_sym_GT] = ACTIONS(434),
    [anon_sym_GT_EQ] = ACTIONS(432),
    [anon_sym_LT] = ACTIONS(434),
    [anon_sym_LT_EQ] = ACTIONS(432),
    [sym_comment] = ACTIONS(9),
  },
  [151] = {
    [sym__expr] = STATE(184),
    [sym_if_then_else] = STATE(184),
    [sym_tuple] = STATE(184),
    [sym_mul] = STATE(184),
    [sym_div] = STATE(184),
    [sym_add] = STATE(184),
    [sym_sub] = STATE(184),
    [sym_eq] = STATE(184),
    [sym_neq] = STATE(184),
    [sym_gt] = STATE(184),
    [sym_gte] = STATE(184),
    [sym_lt] = STATE(184),
    [sym_lte] = STATE(184),
    [sym__term] = STATE(184),
    [sym_boolean] = STATE(184),
    [sym_integer] = STATE(184),
    [sym_variable] = STATE(184),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(479),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(481),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [152] = {
    [sym__expr] = STATE(185),
    [sym_if_then_else] = STATE(185),
    [sym_tuple] = STATE(185),
    [sym_mul] = STATE(185),
    [sym_div] = STATE(185),
    [sym_add] = STATE(185),
    [sym_sub] = STATE(185),
    [sym_eq] = STATE(185),
    [sym_neq] = STATE(185),
    [sym_gt] = STATE(185),
    [sym_gte] = STATE(185),
    [sym_lt] = STATE(185),
    [sym_lte] = STATE(185),
    [sym__term] = STATE(185),
    [sym_boolean] = STATE(185),
    [sym_integer] = STATE(185),
    [sym_variable] = STATE(185),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(120),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(483),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(485),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [153] = {
    [anon_sym_STAR] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(489),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_PLUS] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_EQ_EQ] = ACTIONS(497),
    [anon_sym_BANG_EQ] = ACTIONS(499),
    [anon_sym_GT] = ACTIONS(501),
    [anon_sym_GT_EQ] = ACTIONS(503),
    [anon_sym_LT] = ACTIONS(505),
    [anon_sym_LT_EQ] = ACTIONS(507),
    [sym_comment] = ACTIONS(9),
  },
  [154] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(404),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(404),
    [anon_sym_DASH] = ACTIONS(406),
    [anon_sym_EQ_EQ] = ACTIONS(404),
    [anon_sym_BANG_EQ] = ACTIONS(404),
    [anon_sym_GT] = ACTIONS(406),
    [anon_sym_GT_EQ] = ACTIONS(404),
    [anon_sym_LT] = ACTIONS(406),
    [anon_sym_LT_EQ] = ACTIONS(404),
    [sym_comment] = ACTIONS(9),
  },
  [155] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(408),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(408),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_EQ_EQ] = ACTIONS(408),
    [anon_sym_BANG_EQ] = ACTIONS(408),
    [anon_sym_GT] = ACTIONS(410),
    [anon_sym_GT_EQ] = ACTIONS(408),
    [anon_sym_LT] = ACTIONS(410),
    [anon_sym_LT_EQ] = ACTIONS(408),
    [sym_comment] = ACTIONS(9),
  },
  [156] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_EQ_EQ] = ACTIONS(412),
    [anon_sym_BANG_EQ] = ACTIONS(412),
    [anon_sym_GT] = ACTIONS(414),
    [anon_sym_GT_EQ] = ACTIONS(412),
    [anon_sym_LT] = ACTIONS(414),
    [anon_sym_LT_EQ] = ACTIONS(412),
    [sym_comment] = ACTIONS(9),
  },
  [157] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(416),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_EQ_EQ] = ACTIONS(416),
    [anon_sym_BANG_EQ] = ACTIONS(416),
    [anon_sym_GT] = ACTIONS(418),
    [anon_sym_GT_EQ] = ACTIONS(416),
    [anon_sym_LT] = ACTIONS(418),
    [anon_sym_LT_EQ] = ACTIONS(416),
    [sym_comment] = ACTIONS(9),
  },
  [158] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(420),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_EQ_EQ] = ACTIONS(420),
    [anon_sym_BANG_EQ] = ACTIONS(420),
    [anon_sym_GT] = ACTIONS(422),
    [anon_sym_GT_EQ] = ACTIONS(420),
    [anon_sym_LT] = ACTIONS(422),
    [anon_sym_LT_EQ] = ACTIONS(420),
    [sym_comment] = ACTIONS(9),
  },
  [159] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(424),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_EQ_EQ] = ACTIONS(424),
    [anon_sym_BANG_EQ] = ACTIONS(424),
    [anon_sym_GT] = ACTIONS(426),
    [anon_sym_GT_EQ] = ACTIONS(424),
    [anon_sym_LT] = ACTIONS(426),
    [anon_sym_LT_EQ] = ACTIONS(424),
    [sym_comment] = ACTIONS(9),
  },
  [160] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(428),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_EQ_EQ] = ACTIONS(428),
    [anon_sym_BANG_EQ] = ACTIONS(428),
    [anon_sym_GT] = ACTIONS(430),
    [anon_sym_GT_EQ] = ACTIONS(428),
    [anon_sym_LT] = ACTIONS(430),
    [anon_sym_LT_EQ] = ACTIONS(428),
    [sym_comment] = ACTIONS(9),
  },
  [161] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(432),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_EQ_EQ] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(432),
    [anon_sym_GT] = ACTIONS(434),
    [anon_sym_GT_EQ] = ACTIONS(432),
    [anon_sym_LT] = ACTIONS(434),
    [anon_sym_LT_EQ] = ACTIONS(432),
    [sym_comment] = ACTIONS(9),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(509),
    [anon_sym_RPAREN] = ACTIONS(509),
    [anon_sym_PIPE] = ACTIONS(509),
    [anon_sym_SEMI] = ACTIONS(509),
    [anon_sym_RBRACE] = ACTIONS(509),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(509),
    [sym_comment] = ACTIONS(9),
  },
  [163] = {
    [sym__proc] = STATE(172),
    [sym_par] = STATE(172),
    [sym_nu] = STATE(172),
    [sym_recv] = STATE(172),
    [sym_send] = STATE(172),
    [sym_end] = STATE(172),
    [sym_call] = STATE(172),
    [sym_repl] = STATE(172),
    [sym__name] = STATE(21),
    [sym_reserved_name] = STATE(21),
    [sym_polarized_name] = STATE(21),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(36),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(40),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [164] = {
    [anon_sym_RPAREN] = ACTIONS(511),
    [anon_sym_DOT] = ACTIONS(511),
    [anon_sym_SEMI] = ACTIONS(511),
    [anon_sym_RBRACE] = ACTIONS(511),
    [sym_comment] = ACTIONS(9),
  },
  [165] = {
    [anon_sym_DOT] = ACTIONS(513),
    [sym_comment] = ACTIONS(9),
  },
  [166] = {
    [anon_sym_COLON] = ACTIONS(515),
    [sym_comment] = ACTIONS(9),
  },
  [167] = {
    [aux_sym_type_select_repeat1] = STATE(201),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_RBRACE] = ACTIONS(519),
    [sym_comment] = ACTIONS(9),
  },
  [168] = {
    [anon_sym_DOT] = ACTIONS(521),
    [sym_comment] = ACTIONS(9),
  },
  [169] = {
    [sym__type] = STATE(203),
    [sym_type_send] = STATE(203),
    [sym_type_recv] = STATE(203),
    [sym_type_select] = STATE(203),
    [sym_type_choice] = STATE(203),
    [sym_type_end] = STATE(203),
    [sym_type_call] = STATE(203),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(166),
    [aux_sym_end] = ACTIONS(168),
    [anon_sym_BANG] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [170] = {
    [aux_sym_type_select_repeat1] = STATE(205),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_RBRACE] = ACTIONS(523),
    [sym_comment] = ACTIONS(9),
  },
  [171] = {
    [sym__type] = STATE(206),
    [sym_type_send] = STATE(206),
    [sym_type_recv] = STATE(206),
    [sym_type_select] = STATE(206),
    [sym_type_choice] = STATE(206),
    [sym_type_end] = STATE(206),
    [sym_type_call] = STATE(206),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(166),
    [aux_sym_end] = ACTIONS(168),
    [anon_sym_BANG] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(525),
    [anon_sym_PIPE] = ACTIONS(525),
    [anon_sym_SEMI] = ACTIONS(525),
    [anon_sym_RBRACE] = ACTIONS(525),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(525),
    [sym_comment] = ACTIONS(9),
  },
  [173] = {
    [anon_sym_RPAREN] = ACTIONS(527),
    [anon_sym_DOT] = ACTIONS(527),
    [anon_sym_DASH_GT] = ACTIONS(527),
    [anon_sym_COMMA] = ACTIONS(527),
    [sym_comment] = ACTIONS(9),
  },
  [174] = {
    [sym_pattern] = STATE(207),
    [sym_pattern_tuple] = STATE(35),
    [sym_simple_name] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(78),
    [sym_comment] = ACTIONS(9),
  },
  [175] = {
    [aux_sym_pattern_tuple_repeat1] = STATE(209),
    [anon_sym_RPAREN] = ACTIONS(529),
    [anon_sym_COMMA] = ACTIONS(452),
    [sym_comment] = ACTIONS(9),
  },
  [176] = {
    [sym_simple_name] = STATE(210),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [177] = {
    [sym__proc] = STATE(211),
    [sym_par] = STATE(211),
    [sym_nu] = STATE(211),
    [sym_recv] = STATE(211),
    [sym_send] = STATE(211),
    [sym_end] = STATE(211),
    [sym_call] = STATE(211),
    [sym_repl] = STATE(211),
    [sym__name] = STATE(140),
    [sym_reserved_name] = STATE(140),
    [sym_polarized_name] = STATE(140),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(308),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [178] = {
    [sym__clauses] = STATE(36),
    [sym_simple_clause] = STATE(36),
    [sym__complex_clauses] = STATE(36),
    [sym_pattern] = STATE(212),
    [sym_pattern_tuple] = STATE(35),
    [sym_simple_name] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(76),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(78),
    [sym_comment] = ACTIONS(9),
  },
  [179] = {
    [sym__expr] = STATE(213),
    [sym_if_then_else] = STATE(213),
    [sym_tuple] = STATE(213),
    [sym_mul] = STATE(213),
    [sym_div] = STATE(213),
    [sym_add] = STATE(213),
    [sym_sub] = STATE(213),
    [sym_eq] = STATE(213),
    [sym_neq] = STATE(213),
    [sym_gt] = STATE(213),
    [sym_gte] = STATE(213),
    [sym_lt] = STATE(213),
    [sym_lte] = STATE(213),
    [sym__term] = STATE(213),
    [sym_boolean] = STATE(213),
    [sym_integer] = STATE(213),
    [sym_variable] = STATE(213),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(82),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(531),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(533),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [180] = {
    [anon_sym_STAR] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(535),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_PLUS] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_EQ_EQ] = ACTIONS(497),
    [anon_sym_BANG_EQ] = ACTIONS(499),
    [anon_sym_GT] = ACTIONS(501),
    [anon_sym_GT_EQ] = ACTIONS(503),
    [anon_sym_LT] = ACTIONS(505),
    [anon_sym_LT_EQ] = ACTIONS(507),
    [sym_comment] = ACTIONS(9),
  },
  [181] = {
    [anon_sym_RPAREN] = ACTIONS(537),
    [anon_sym_RBRACK] = ACTIONS(537),
    [anon_sym_STAR] = ACTIONS(537),
    [anon_sym_COMMA] = ACTIONS(537),
    [anon_sym_then] = ACTIONS(537),
    [anon_sym_else] = ACTIONS(537),
    [anon_sym_SLASH] = ACTIONS(539),
    [anon_sym_PLUS] = ACTIONS(537),
    [anon_sym_DASH] = ACTIONS(539),
    [anon_sym_EQ_EQ] = ACTIONS(537),
    [anon_sym_BANG_EQ] = ACTIONS(537),
    [anon_sym_GT] = ACTIONS(539),
    [anon_sym_GT_EQ] = ACTIONS(537),
    [anon_sym_LT] = ACTIONS(539),
    [anon_sym_LT_EQ] = ACTIONS(537),
    [sym_comment] = ACTIONS(9),
  },
  [182] = {
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(541),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(543),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [183] = {
    [aux_sym_tuple_repeat1] = STATE(217),
    [anon_sym_RPAREN] = ACTIONS(545),
    [anon_sym_COMMA] = ACTIONS(477),
    [sym_comment] = ACTIONS(9),
  },
  [184] = {
    [anon_sym_STAR] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(547),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_PLUS] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_EQ_EQ] = ACTIONS(497),
    [anon_sym_BANG_EQ] = ACTIONS(499),
    [anon_sym_GT] = ACTIONS(501),
    [anon_sym_GT_EQ] = ACTIONS(503),
    [anon_sym_LT] = ACTIONS(505),
    [anon_sym_LT_EQ] = ACTIONS(507),
    [sym_comment] = ACTIONS(9),
  },
  [185] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(549),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_EQ_EQ] = ACTIONS(228),
    [anon_sym_BANG_EQ] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(232),
    [anon_sym_GT_EQ] = ACTIONS(234),
    [anon_sym_LT] = ACTIONS(236),
    [anon_sym_LT_EQ] = ACTIONS(238),
    [sym_comment] = ACTIONS(9),
  },
  [186] = {
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(242),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(244),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [187] = {
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(82),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(551),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(553),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [188] = {
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(246),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(248),
    [sym__digit] = ACTIONS(92),
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(555),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(557),
    [sym__digit] = ACTIONS(92),
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(559),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(561),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [191] = {
    [sym__expr] = STATE(223),
    [sym_if_then_else] = STATE(223),
    [sym_tuple] = STATE(223),
    [sym_mul] = STATE(223),
    [sym_div] = STATE(223),
    [sym_add] = STATE(223),
    [sym_sub] = STATE(223),
    [sym_eq] = STATE(223),
    [sym_neq] = STATE(223),
    [sym_gt] = STATE(223),
    [sym_gte] = STATE(223),
    [sym_lt] = STATE(223),
    [sym_lte] = STATE(223),
    [sym__term] = STATE(223),
    [sym_boolean] = STATE(223),
    [sym_integer] = STATE(223),
    [sym_variable] = STATE(223),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(563),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(565),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [192] = {
    [sym__expr] = STATE(224),
    [sym_if_then_else] = STATE(224),
    [sym_tuple] = STATE(224),
    [sym_mul] = STATE(224),
    [sym_div] = STATE(224),
    [sym_add] = STATE(224),
    [sym_sub] = STATE(224),
    [sym_eq] = STATE(224),
    [sym_neq] = STATE(224),
    [sym_gt] = STATE(224),
    [sym_gte] = STATE(224),
    [sym_lt] = STATE(224),
    [sym_lte] = STATE(224),
    [sym__term] = STATE(224),
    [sym_boolean] = STATE(224),
    [sym_integer] = STATE(224),
    [sym_variable] = STATE(224),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(567),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(569),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [193] = {
    [sym__expr] = STATE(225),
    [sym_if_then_else] = STATE(225),
    [sym_tuple] = STATE(225),
    [sym_mul] = STATE(225),
    [sym_div] = STATE(225),
    [sym_add] = STATE(225),
    [sym_sub] = STATE(225),
    [sym_eq] = STATE(225),
    [sym_neq] = STATE(225),
    [sym_gt] = STATE(225),
    [sym_gte] = STATE(225),
    [sym_lt] = STATE(225),
    [sym_lte] = STATE(225),
    [sym__term] = STATE(225),
    [sym_boolean] = STATE(225),
    [sym_integer] = STATE(225),
    [sym_variable] = STATE(225),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(571),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(573),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [194] = {
    [sym__expr] = STATE(226),
    [sym_if_then_else] = STATE(226),
    [sym_tuple] = STATE(226),
    [sym_mul] = STATE(226),
    [sym_div] = STATE(226),
    [sym_add] = STATE(226),
    [sym_sub] = STATE(226),
    [sym_eq] = STATE(226),
    [sym_neq] = STATE(226),
    [sym_gt] = STATE(226),
    [sym_gte] = STATE(226),
    [sym_lt] = STATE(226),
    [sym_lte] = STATE(226),
    [sym__term] = STATE(226),
    [sym_boolean] = STATE(226),
    [sym_integer] = STATE(226),
    [sym_variable] = STATE(226),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(575),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(577),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [195] = {
    [sym__expr] = STATE(227),
    [sym_if_then_else] = STATE(227),
    [sym_tuple] = STATE(227),
    [sym_mul] = STATE(227),
    [sym_div] = STATE(227),
    [sym_add] = STATE(227),
    [sym_sub] = STATE(227),
    [sym_eq] = STATE(227),
    [sym_neq] = STATE(227),
    [sym_gt] = STATE(227),
    [sym_gte] = STATE(227),
    [sym_lt] = STATE(227),
    [sym_lte] = STATE(227),
    [sym__term] = STATE(227),
    [sym_boolean] = STATE(227),
    [sym_integer] = STATE(227),
    [sym_variable] = STATE(227),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(579),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(581),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [196] = {
    [sym__expr] = STATE(228),
    [sym_if_then_else] = STATE(228),
    [sym_tuple] = STATE(228),
    [sym_mul] = STATE(228),
    [sym_div] = STATE(228),
    [sym_add] = STATE(228),
    [sym_sub] = STATE(228),
    [sym_eq] = STATE(228),
    [sym_neq] = STATE(228),
    [sym_gt] = STATE(228),
    [sym_gte] = STATE(228),
    [sym_lt] = STATE(228),
    [sym_lte] = STATE(228),
    [sym__term] = STATE(228),
    [sym_boolean] = STATE(228),
    [sym_integer] = STATE(228),
    [sym_variable] = STATE(228),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(583),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(585),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [197] = {
    [sym__type] = STATE(203),
    [sym_type_send] = STATE(203),
    [sym_type_recv] = STATE(203),
    [sym_type_select] = STATE(203),
    [sym_type_choice] = STATE(203),
    [sym_type_end] = STATE(203),
    [sym_type_call] = STATE(203),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(284),
    [aux_sym_end] = ACTIONS(168),
    [anon_sym_BANG] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [198] = {
    [sym__type] = STATE(231),
    [sym_type_send] = STATE(231),
    [sym_type_recv] = STATE(231),
    [sym_type_select] = STATE(231),
    [sym_type_choice] = STATE(231),
    [sym_type_end] = STATE(231),
    [sym_type_call] = STATE(231),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(587),
    [aux_sym_end] = ACTIONS(168),
    [anon_sym_BANG] = ACTIONS(589),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [199] = {
    [sym__type_of_label] = STATE(232),
    [sym_label] = ACTIONS(442),
    [sym_comment] = ACTIONS(9),
  },
  [200] = {
    [anon_sym_RPAREN] = ACTIONS(591),
    [anon_sym_DOT] = ACTIONS(591),
    [anon_sym_SEMI] = ACTIONS(591),
    [anon_sym_RBRACE] = ACTIONS(591),
    [sym_comment] = ACTIONS(9),
  },
  [201] = {
    [aux_sym_type_select_repeat1] = STATE(234),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_RBRACE] = ACTIONS(593),
    [sym_comment] = ACTIONS(9),
  },
  [202] = {
    [sym__type] = STATE(206),
    [sym_type_send] = STATE(206),
    [sym_type_recv] = STATE(206),
    [sym_type_select] = STATE(206),
    [sym_type_choice] = STATE(206),
    [sym_type_end] = STATE(206),
    [sym_type_call] = STATE(206),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(284),
    [aux_sym_end] = ACTIONS(168),
    [anon_sym_BANG] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [203] = {
    [anon_sym_RPAREN] = ACTIONS(595),
    [anon_sym_DOT] = ACTIONS(595),
    [anon_sym_SEMI] = ACTIONS(595),
    [anon_sym_RBRACE] = ACTIONS(595),
    [sym_comment] = ACTIONS(9),
  },
  [204] = {
    [anon_sym_RPAREN] = ACTIONS(597),
    [anon_sym_DOT] = ACTIONS(597),
    [anon_sym_SEMI] = ACTIONS(597),
    [anon_sym_RBRACE] = ACTIONS(597),
    [sym_comment] = ACTIONS(9),
  },
  [205] = {
    [aux_sym_type_select_repeat1] = STATE(234),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_RBRACE] = ACTIONS(599),
    [sym_comment] = ACTIONS(9),
  },
  [206] = {
    [anon_sym_RPAREN] = ACTIONS(601),
    [anon_sym_DOT] = ACTIONS(601),
    [anon_sym_SEMI] = ACTIONS(601),
    [anon_sym_RBRACE] = ACTIONS(601),
    [sym_comment] = ACTIONS(9),
  },
  [207] = {
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_COMMA] = ACTIONS(603),
    [sym_comment] = ACTIONS(9),
  },
  [208] = {
    [anon_sym_RPAREN] = ACTIONS(605),
    [anon_sym_DOT] = ACTIONS(605),
    [anon_sym_DASH_GT] = ACTIONS(605),
    [anon_sym_COMMA] = ACTIONS(605),
    [sym_comment] = ACTIONS(9),
  },
  [209] = {
    [aux_sym_pattern_tuple_repeat1] = STATE(209),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_COMMA] = ACTIONS(607),
    [sym_comment] = ACTIONS(9),
  },
  [210] = {
    [anon_sym_RPAREN] = ACTIONS(610),
    [anon_sym_COLON] = ACTIONS(612),
    [sym_comment] = ACTIONS(9),
  },
  [211] = {
    [anon_sym_PIPE] = ACTIONS(463),
    [anon_sym_SEMI] = ACTIONS(104),
    [anon_sym_RBRACE] = ACTIONS(104),
    [sym_comment] = ACTIONS(9),
  },
  [212] = {
    [anon_sym_DOT] = ACTIONS(614),
    [sym_comment] = ACTIONS(9),
  },
  [213] = {
    [anon_sym_RBRACK] = ACTIONS(616),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_EQ_EQ] = ACTIONS(144),
    [anon_sym_BANG_EQ] = ACTIONS(146),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_GT_EQ] = ACTIONS(150),
    [anon_sym_LT] = ACTIONS(152),
    [anon_sym_LT_EQ] = ACTIONS(154),
    [sym_comment] = ACTIONS(9),
  },
  [214] = {
    [sym__expr] = STATE(240),
    [sym_if_then_else] = STATE(240),
    [sym_tuple] = STATE(240),
    [sym_mul] = STATE(240),
    [sym_div] = STATE(240),
    [sym_add] = STATE(240),
    [sym_sub] = STATE(240),
    [sym_eq] = STATE(240),
    [sym_neq] = STATE(240),
    [sym_gt] = STATE(240),
    [sym_gte] = STATE(240),
    [sym_lt] = STATE(240),
    [sym_lte] = STATE(240),
    [sym__term] = STATE(240),
    [sym_boolean] = STATE(240),
    [sym_integer] = STATE(240),
    [sym_variable] = STATE(240),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(618),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(620),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [215] = {
    [anon_sym_RPAREN] = ACTIONS(622),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(622),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(200),
    [anon_sym_EQ_EQ] = ACTIONS(202),
    [anon_sym_BANG_EQ] = ACTIONS(204),
    [anon_sym_GT] = ACTIONS(206),
    [anon_sym_GT_EQ] = ACTIONS(208),
    [anon_sym_LT] = ACTIONS(210),
    [anon_sym_LT_EQ] = ACTIONS(212),
    [sym_comment] = ACTIONS(9),
  },
  [216] = {
    [anon_sym_RPAREN] = ACTIONS(624),
    [anon_sym_RBRACK] = ACTIONS(624),
    [anon_sym_STAR] = ACTIONS(624),
    [anon_sym_COMMA] = ACTIONS(624),
    [anon_sym_then] = ACTIONS(624),
    [anon_sym_else] = ACTIONS(624),
    [anon_sym_SLASH] = ACTIONS(626),
    [anon_sym_PLUS] = ACTIONS(624),
    [anon_sym_DASH] = ACTIONS(626),
    [anon_sym_EQ_EQ] = ACTIONS(624),
    [anon_sym_BANG_EQ] = ACTIONS(624),
    [anon_sym_GT] = ACTIONS(626),
    [anon_sym_GT_EQ] = ACTIONS(624),
    [anon_sym_LT] = ACTIONS(626),
    [anon_sym_LT_EQ] = ACTIONS(624),
    [sym_comment] = ACTIONS(9),
  },
  [217] = {
    [aux_sym_tuple_repeat1] = STATE(217),
    [anon_sym_RPAREN] = ACTIONS(622),
    [anon_sym_COMMA] = ACTIONS(628),
    [sym_comment] = ACTIONS(9),
  },
  [218] = {
    [sym__expr] = STATE(241),
    [sym_if_then_else] = STATE(241),
    [sym_tuple] = STATE(241),
    [sym_mul] = STATE(241),
    [sym_div] = STATE(241),
    [sym_add] = STATE(241),
    [sym_sub] = STATE(241),
    [sym_eq] = STATE(241),
    [sym_neq] = STATE(241),
    [sym_gt] = STATE(241),
    [sym_gte] = STATE(241),
    [sym_lt] = STATE(241),
    [sym_lte] = STATE(241),
    [sym__term] = STATE(241),
    [sym_boolean] = STATE(241),
    [sym_integer] = STATE(241),
    [sym_variable] = STATE(241),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(120),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(631),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(633),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [219] = {
    [sym__expr] = STATE(242),
    [sym_if_then_else] = STATE(242),
    [sym_tuple] = STATE(242),
    [sym_mul] = STATE(242),
    [sym_div] = STATE(242),
    [sym_add] = STATE(242),
    [sym_sub] = STATE(242),
    [sym_eq] = STATE(242),
    [sym_neq] = STATE(242),
    [sym_gt] = STATE(242),
    [sym_gte] = STATE(242),
    [sym_lt] = STATE(242),
    [sym_lte] = STATE(242),
    [sym__term] = STATE(242),
    [sym_boolean] = STATE(242),
    [sym_integer] = STATE(242),
    [sym_variable] = STATE(242),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(635),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(637),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [220] = {
    [anon_sym_RBRACK] = ACTIONS(639),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_EQ_EQ] = ACTIONS(144),
    [anon_sym_BANG_EQ] = ACTIONS(146),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_GT_EQ] = ACTIONS(150),
    [anon_sym_LT] = ACTIONS(152),
    [anon_sym_LT_EQ] = ACTIONS(154),
    [sym_comment] = ACTIONS(9),
  },
  [221] = {
    [anon_sym_STAR] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(404),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_PLUS] = ACTIONS(404),
    [anon_sym_DASH] = ACTIONS(406),
    [anon_sym_EQ_EQ] = ACTIONS(404),
    [anon_sym_BANG_EQ] = ACTIONS(404),
    [anon_sym_GT] = ACTIONS(406),
    [anon_sym_GT_EQ] = ACTIONS(404),
    [anon_sym_LT] = ACTIONS(406),
    [anon_sym_LT_EQ] = ACTIONS(404),
    [sym_comment] = ACTIONS(9),
  },
  [222] = {
    [anon_sym_STAR] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(408),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_PLUS] = ACTIONS(408),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_EQ_EQ] = ACTIONS(408),
    [anon_sym_BANG_EQ] = ACTIONS(408),
    [anon_sym_GT] = ACTIONS(410),
    [anon_sym_GT_EQ] = ACTIONS(408),
    [anon_sym_LT] = ACTIONS(410),
    [anon_sym_LT_EQ] = ACTIONS(408),
    [sym_comment] = ACTIONS(9),
  },
  [223] = {
    [anon_sym_STAR] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_PLUS] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_EQ_EQ] = ACTIONS(412),
    [anon_sym_BANG_EQ] = ACTIONS(412),
    [anon_sym_GT] = ACTIONS(414),
    [anon_sym_GT_EQ] = ACTIONS(412),
    [anon_sym_LT] = ACTIONS(414),
    [anon_sym_LT_EQ] = ACTIONS(412),
    [sym_comment] = ACTIONS(9),
  },
  [224] = {
    [anon_sym_STAR] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(416),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_PLUS] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_EQ_EQ] = ACTIONS(416),
    [anon_sym_BANG_EQ] = ACTIONS(416),
    [anon_sym_GT] = ACTIONS(418),
    [anon_sym_GT_EQ] = ACTIONS(416),
    [anon_sym_LT] = ACTIONS(418),
    [anon_sym_LT_EQ] = ACTIONS(416),
    [sym_comment] = ACTIONS(9),
  },
  [225] = {
    [anon_sym_STAR] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(420),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_PLUS] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_EQ_EQ] = ACTIONS(420),
    [anon_sym_BANG_EQ] = ACTIONS(420),
    [anon_sym_GT] = ACTIONS(422),
    [anon_sym_GT_EQ] = ACTIONS(420),
    [anon_sym_LT] = ACTIONS(422),
    [anon_sym_LT_EQ] = ACTIONS(420),
    [sym_comment] = ACTIONS(9),
  },
  [226] = {
    [anon_sym_STAR] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(424),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_PLUS] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_EQ_EQ] = ACTIONS(424),
    [anon_sym_BANG_EQ] = ACTIONS(424),
    [anon_sym_GT] = ACTIONS(426),
    [anon_sym_GT_EQ] = ACTIONS(424),
    [anon_sym_LT] = ACTIONS(426),
    [anon_sym_LT_EQ] = ACTIONS(424),
    [sym_comment] = ACTIONS(9),
  },
  [227] = {
    [anon_sym_STAR] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(428),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_PLUS] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_EQ_EQ] = ACTIONS(428),
    [anon_sym_BANG_EQ] = ACTIONS(428),
    [anon_sym_GT] = ACTIONS(430),
    [anon_sym_GT_EQ] = ACTIONS(428),
    [anon_sym_LT] = ACTIONS(430),
    [anon_sym_LT_EQ] = ACTIONS(428),
    [sym_comment] = ACTIONS(9),
  },
  [228] = {
    [anon_sym_STAR] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(432),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_PLUS] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_EQ_EQ] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(432),
    [anon_sym_GT] = ACTIONS(434),
    [anon_sym_GT_EQ] = ACTIONS(432),
    [anon_sym_LT] = ACTIONS(434),
    [anon_sym_LT_EQ] = ACTIONS(432),
    [sym_comment] = ACTIONS(9),
  },
  [229] = {
    [sym__sort] = STATE(243),
    [sym__type] = STATE(243),
    [sym_type_send] = STATE(243),
    [sym_type_recv] = STATE(243),
    [sym_type_select] = STATE(243),
    [sym_type_choice] = STATE(243),
    [sym_type_end] = STATE(243),
    [sym_type_call] = STATE(243),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(284),
    [aux_sym_end] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_sort_int] = ACTIONS(641),
    [sym_sort_bool] = ACTIONS(641),
    [anon_sym_BANG] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [230] = {
    [sym__sort] = STATE(244),
    [sym__type] = STATE(244),
    [sym_type_send] = STATE(244),
    [sym_type_recv] = STATE(244),
    [sym_type_select] = STATE(244),
    [sym_type_choice] = STATE(244),
    [sym_type_end] = STATE(244),
    [sym_type_call] = STATE(244),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(284),
    [aux_sym_end] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(294),
    [sym_sort_int] = ACTIONS(643),
    [sym_sort_bool] = ACTIONS(643),
    [anon_sym_BANG] = ACTIONS(290),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [231] = {
    [anon_sym_SEMI] = ACTIONS(645),
    [anon_sym_RBRACE] = ACTIONS(645),
    [sym_comment] = ACTIONS(9),
  },
  [232] = {
    [anon_sym_SEMI] = ACTIONS(647),
    [anon_sym_RBRACE] = ACTIONS(647),
    [sym_comment] = ACTIONS(9),
  },
  [233] = {
    [anon_sym_RPAREN] = ACTIONS(649),
    [anon_sym_DOT] = ACTIONS(649),
    [anon_sym_SEMI] = ACTIONS(649),
    [anon_sym_RBRACE] = ACTIONS(649),
    [sym_comment] = ACTIONS(9),
  },
  [234] = {
    [aux_sym_type_select_repeat1] = STATE(234),
    [anon_sym_SEMI] = ACTIONS(651),
    [anon_sym_RBRACE] = ACTIONS(647),
    [sym_comment] = ACTIONS(9),
  },
  [235] = {
    [anon_sym_RPAREN] = ACTIONS(654),
    [anon_sym_DOT] = ACTIONS(654),
    [anon_sym_SEMI] = ACTIONS(654),
    [anon_sym_RBRACE] = ACTIONS(654),
    [sym_comment] = ACTIONS(9),
  },
  [236] = {
    [sym__proc] = STATE(72),
    [sym_par] = STATE(72),
    [sym_nu] = STATE(72),
    [sym_recv] = STATE(72),
    [sym_send] = STATE(72),
    [sym_end] = STATE(72),
    [sym_call] = STATE(72),
    [sym_repl] = STATE(72),
    [sym__name] = STATE(140),
    [sym_reserved_name] = STATE(140),
    [sym_polarized_name] = STATE(140),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(308),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [237] = {
    [sym__type] = STATE(245),
    [sym_type_send] = STATE(245),
    [sym_type_recv] = STATE(245),
    [sym_type_select] = STATE(245),
    [sym_type_choice] = STATE(245),
    [sym_type_end] = STATE(245),
    [sym_type_call] = STATE(245),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(166),
    [aux_sym_end] = ACTIONS(168),
    [anon_sym_BANG] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [238] = {
    [sym__proc] = STATE(86),
    [sym_par] = STATE(86),
    [sym_nu] = STATE(86),
    [sym_recv] = STATE(86),
    [sym_send] = STATE(86),
    [sym_end] = STATE(86),
    [sym_call] = STATE(86),
    [sym_repl] = STATE(86),
    [sym__name] = STATE(140),
    [sym_reserved_name] = STATE(140),
    [sym_polarized_name] = STATE(140),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(308),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [239] = {
    [anon_sym_DOT] = ACTIONS(656),
    [sym_comment] = ACTIONS(9),
  },
  [240] = {
    [anon_sym_RPAREN] = ACTIONS(639),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(639),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(200),
    [anon_sym_EQ_EQ] = ACTIONS(202),
    [anon_sym_BANG_EQ] = ACTIONS(204),
    [anon_sym_GT] = ACTIONS(206),
    [anon_sym_GT_EQ] = ACTIONS(208),
    [anon_sym_LT] = ACTIONS(210),
    [anon_sym_LT_EQ] = ACTIONS(212),
    [sym_comment] = ACTIONS(9),
  },
  [241] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(639),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_EQ_EQ] = ACTIONS(228),
    [anon_sym_BANG_EQ] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(232),
    [anon_sym_GT_EQ] = ACTIONS(234),
    [anon_sym_LT] = ACTIONS(236),
    [anon_sym_LT_EQ] = ACTIONS(238),
    [sym_comment] = ACTIONS(9),
  },
  [242] = {
    [anon_sym_STAR] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(658),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_PLUS] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_EQ_EQ] = ACTIONS(497),
    [anon_sym_BANG_EQ] = ACTIONS(499),
    [anon_sym_GT] = ACTIONS(501),
    [anon_sym_GT_EQ] = ACTIONS(503),
    [anon_sym_LT] = ACTIONS(505),
    [anon_sym_LT_EQ] = ACTIONS(507),
    [sym_comment] = ACTIONS(9),
  },
  [243] = {
    [anon_sym_DOT] = ACTIONS(660),
    [sym_comment] = ACTIONS(9),
  },
  [244] = {
    [anon_sym_DOT] = ACTIONS(662),
    [sym_comment] = ACTIONS(9),
  },
  [245] = {
    [anon_sym_RPAREN] = ACTIONS(664),
    [sym_comment] = ACTIONS(9),
  },
  [246] = {
    [sym__proc] = STATE(162),
    [sym_par] = STATE(162),
    [sym_nu] = STATE(162),
    [sym_recv] = STATE(162),
    [sym_send] = STATE(162),
    [sym_end] = STATE(162),
    [sym_call] = STATE(162),
    [sym_repl] = STATE(162),
    [sym__name] = STATE(140),
    [sym_reserved_name] = STATE(140),
    [sym_polarized_name] = STATE(140),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(308),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [247] = {
    [sym__expr] = STATE(251),
    [sym_if_then_else] = STATE(251),
    [sym_tuple] = STATE(251),
    [sym_mul] = STATE(251),
    [sym_div] = STATE(251),
    [sym_add] = STATE(251),
    [sym_sub] = STATE(251),
    [sym_eq] = STATE(251),
    [sym_neq] = STATE(251),
    [sym_gt] = STATE(251),
    [sym_gte] = STATE(251),
    [sym_lt] = STATE(251),
    [sym_lte] = STATE(251),
    [sym__term] = STATE(251),
    [sym_boolean] = STATE(251),
    [sym_integer] = STATE(251),
    [sym_variable] = STATE(251),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(666),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(668),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [248] = {
    [sym__type] = STATE(203),
    [sym_type_send] = STATE(203),
    [sym_type_recv] = STATE(203),
    [sym_type_select] = STATE(203),
    [sym_type_choice] = STATE(203),
    [sym_type_end] = STATE(203),
    [sym_type_call] = STATE(203),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(587),
    [aux_sym_end] = ACTIONS(168),
    [anon_sym_BANG] = ACTIONS(589),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [249] = {
    [sym__type] = STATE(206),
    [sym_type_send] = STATE(206),
    [sym_type_recv] = STATE(206),
    [sym_type_select] = STATE(206),
    [sym_type_choice] = STATE(206),
    [sym_type_end] = STATE(206),
    [sym_type_call] = STATE(206),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(587),
    [aux_sym_end] = ACTIONS(168),
    [anon_sym_BANG] = ACTIONS(589),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [250] = {
    [sym__proc] = STATE(172),
    [sym_par] = STATE(172),
    [sym_nu] = STATE(172),
    [sym_recv] = STATE(172),
    [sym_send] = STATE(172),
    [sym_end] = STATE(172),
    [sym_call] = STATE(172),
    [sym_repl] = STATE(172),
    [sym__name] = STATE(140),
    [sym_reserved_name] = STATE(140),
    [sym_polarized_name] = STATE(140),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(308),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [251] = {
    [anon_sym_STAR] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(639),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_PLUS] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_EQ_EQ] = ACTIONS(497),
    [anon_sym_BANG_EQ] = ACTIONS(499),
    [anon_sym_GT] = ACTIONS(501),
    [anon_sym_GT_EQ] = ACTIONS(503),
    [anon_sym_LT] = ACTIONS(505),
    [anon_sym_LT_EQ] = ACTIONS(507),
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
  [23] = {.count = 1, .reusable = true}, SHIFT(10),
  [25] = {.count = 1, .reusable = false}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, SHIFT(12),
  [29] = {.count = 1, .reusable = false}, SHIFT(13),
  [31] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [33] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [36] = {.count = 1, .reusable = true}, SHIFT(17),
  [38] = {.count = 1, .reusable = false}, SHIFT(18),
  [40] = {.count = 1, .reusable = true}, SHIFT(19),
  [42] = {.count = 1, .reusable = true}, REDUCE(sym_end, 1),
  [44] = {.count = 1, .reusable = true}, REDUCE(sym_reserved_name, 1),
  [46] = {.count = 1, .reusable = false}, REDUCE(sym_reserved_name, 1),
  [48] = {.count = 1, .reusable = true}, REDUCE(sym_polarized_name, 1),
  [50] = {.count = 1, .reusable = false}, REDUCE(sym_polarized_name, 1),
  [52] = {.count = 1, .reusable = true}, REDUCE(sym_proc_declaration, 3, .alias_sequence_id = 1),
  [54] = {.count = 1, .reusable = true}, SHIFT(23),
  [56] = {.count = 1, .reusable = true}, SHIFT(24),
  [58] = {.count = 1, .reusable = true}, SHIFT(25),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym_call, 1, .alias_sequence_id = 1),
  [62] = {.count = 1, .reusable = false}, SHIFT(26),
  [64] = {.count = 1, .reusable = true}, SHIFT(28),
  [66] = {.count = 1, .reusable = true}, SHIFT(29),
  [68] = {.count = 1, .reusable = true}, SHIFT(30),
  [70] = {.count = 1, .reusable = true}, SHIFT(31),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym_repl, 2),
  [74] = {.count = 1, .reusable = true}, SHIFT(33),
  [76] = {.count = 1, .reusable = true}, SHIFT(34),
  [78] = {.count = 1, .reusable = true}, SHIFT(35),
  [80] = {.count = 1, .reusable = true}, SHIFT(39),
  [82] = {.count = 1, .reusable = false}, SHIFT(40),
  [84] = {.count = 1, .reusable = true}, SHIFT(41),
  [86] = {.count = 1, .reusable = true}, SHIFT(43),
  [88] = {.count = 1, .reusable = false}, SHIFT(12),
  [90] = {.count = 1, .reusable = false}, SHIFT(43),
  [92] = {.count = 1, .reusable = true}, SHIFT(42),
  [94] = {.count = 1, .reusable = true}, SHIFT(46),
  [96] = {.count = 1, .reusable = true}, SHIFT(47),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym__proc, 3),
  [100] = {.count = 1, .reusable = true}, SHIFT(50),
  [102] = {.count = 1, .reusable = false}, SHIFT(50),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_par, 3),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_recv, 3),
  [110] = {.count = 1, .reusable = true}, SHIFT(54),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1, .alias_sequence_id = 2),
  [114] = {.count = 1, .reusable = false}, SHIFT(55),
  [116] = {.count = 1, .reusable = true}, SHIFT(56),
  [118] = {.count = 1, .reusable = false}, SHIFT(56),
  [120] = {.count = 1, .reusable = false}, SHIFT(57),
  [122] = {.count = 1, .reusable = true}, SHIFT(58),
  [124] = {.count = 1, .reusable = false}, SHIFT(58),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_integer, 1),
  [132] = {.count = 1, .reusable = false}, REDUCE(sym_integer, 1),
  [134] = {.count = 1, .reusable = true}, SHIFT(59),
  [136] = {.count = 1, .reusable = true}, SHIFT(60),
  [138] = {.count = 1, .reusable = false}, SHIFT(61),
  [140] = {.count = 1, .reusable = true}, SHIFT(62),
  [142] = {.count = 1, .reusable = false}, SHIFT(63),
  [144] = {.count = 1, .reusable = true}, SHIFT(64),
  [146] = {.count = 1, .reusable = true}, SHIFT(65),
  [148] = {.count = 1, .reusable = false}, SHIFT(66),
  [150] = {.count = 1, .reusable = true}, SHIFT(67),
  [152] = {.count = 1, .reusable = false}, SHIFT(68),
  [154] = {.count = 1, .reusable = true}, SHIFT(69),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 1),
  [158] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 1),
  [160] = {.count = 1, .reusable = true}, SHIFT(70),
  [162] = {.count = 1, .reusable = true}, SHIFT(71),
  [164] = {.count = 1, .reusable = true}, SHIFT(73),
  [166] = {.count = 1, .reusable = true}, SHIFT(74),
  [168] = {.count = 1, .reusable = false}, SHIFT(75),
  [170] = {.count = 1, .reusable = true}, SHIFT(76),
  [172] = {.count = 1, .reusable = false}, SHIFT(2),
  [174] = {.count = 1, .reusable = true}, SHIFT(79),
  [176] = {.count = 1, .reusable = true}, SHIFT(80),
  [178] = {.count = 1, .reusable = true}, SHIFT(81),
  [180] = {.count = 1, .reusable = true}, SHIFT(82),
  [182] = {.count = 1, .reusable = true}, SHIFT(83),
  [184] = {.count = 1, .reusable = true}, SHIFT(85),
  [186] = {.count = 1, .reusable = true}, SHIFT(87),
  [188] = {.count = 1, .reusable = false}, SHIFT(87),
  [190] = {.count = 1, .reusable = true}, SHIFT(88),
  [192] = {.count = 1, .reusable = true}, SHIFT(89),
  [194] = {.count = 1, .reusable = true}, SHIFT(90),
  [196] = {.count = 1, .reusable = false}, SHIFT(91),
  [198] = {.count = 1, .reusable = true}, SHIFT(92),
  [200] = {.count = 1, .reusable = false}, SHIFT(93),
  [202] = {.count = 1, .reusable = true}, SHIFT(94),
  [204] = {.count = 1, .reusable = true}, SHIFT(95),
  [206] = {.count = 1, .reusable = false}, SHIFT(96),
  [208] = {.count = 1, .reusable = true}, SHIFT(97),
  [210] = {.count = 1, .reusable = false}, SHIFT(98),
  [212] = {.count = 1, .reusable = true}, SHIFT(99),
  [214] = {.count = 1, .reusable = true}, SHIFT(100),
  [216] = {.count = 1, .reusable = false}, SHIFT(100),
  [218] = {.count = 1, .reusable = true}, SHIFT(101),
  [220] = {.count = 1, .reusable = true}, SHIFT(102),
  [222] = {.count = 1, .reusable = false}, SHIFT(103),
  [224] = {.count = 1, .reusable = true}, SHIFT(104),
  [226] = {.count = 1, .reusable = false}, SHIFT(105),
  [228] = {.count = 1, .reusable = true}, SHIFT(106),
  [230] = {.count = 1, .reusable = true}, SHIFT(107),
  [232] = {.count = 1, .reusable = false}, SHIFT(108),
  [234] = {.count = 1, .reusable = true}, SHIFT(109),
  [236] = {.count = 1, .reusable = false}, SHIFT(110),
  [238] = {.count = 1, .reusable = true}, SHIFT(111),
  [240] = {.count = 1, .reusable = true}, SHIFT(112),
  [242] = {.count = 1, .reusable = true}, SHIFT(113),
  [244] = {.count = 1, .reusable = false}, SHIFT(113),
  [246] = {.count = 1, .reusable = true}, SHIFT(114),
  [248] = {.count = 1, .reusable = false}, SHIFT(114),
  [250] = {.count = 1, .reusable = true}, SHIFT(115),
  [252] = {.count = 1, .reusable = false}, SHIFT(115),
  [254] = {.count = 1, .reusable = true}, SHIFT(116),
  [256] = {.count = 1, .reusable = false}, SHIFT(116),
  [258] = {.count = 1, .reusable = true}, SHIFT(117),
  [260] = {.count = 1, .reusable = false}, SHIFT(117),
  [262] = {.count = 1, .reusable = true}, SHIFT(118),
  [264] = {.count = 1, .reusable = false}, SHIFT(118),
  [266] = {.count = 1, .reusable = true}, SHIFT(119),
  [268] = {.count = 1, .reusable = false}, SHIFT(119),
  [270] = {.count = 1, .reusable = true}, SHIFT(120),
  [272] = {.count = 1, .reusable = false}, SHIFT(120),
  [274] = {.count = 1, .reusable = true}, SHIFT(121),
  [276] = {.count = 1, .reusable = false}, SHIFT(121),
  [278] = {.count = 1, .reusable = true}, SHIFT(122),
  [280] = {.count = 1, .reusable = false}, SHIFT(122),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_nu, 5, .alias_sequence_id = 3),
  [284] = {.count = 1, .reusable = true}, SHIFT(125),
  [286] = {.count = 1, .reusable = true}, SHIFT(126),
  [288] = {.count = 1, .reusable = true}, SHIFT(128),
  [290] = {.count = 1, .reusable = true}, SHIFT(127),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_type_end, 1),
  [294] = {.count = 1, .reusable = true}, SHIFT(129),
  [296] = {.count = 1, .reusable = true}, SHIFT(130),
  [298] = {.count = 1, .reusable = true}, SHIFT(131),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_type_call, 1, .alias_sequence_id = 1),
  [302] = {.count = 1, .reusable = true}, SHIFT(132),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym__complex_clauses, 3),
  [306] = {.count = 1, .reusable = true}, SHIFT(135),
  [308] = {.count = 1, .reusable = true}, SHIFT(137),
  [310] = {.count = 1, .reusable = true}, SHIFT(138),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_simple_clause, 3),
  [314] = {.count = 1, .reusable = true}, SHIFT(141),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 3),
  [318] = {.count = 1, .reusable = false}, REDUCE(sym__expr, 3),
  [320] = {.count = 1, .reusable = true}, SHIFT(142),
  [322] = {.count = 1, .reusable = false}, SHIFT(142),
  [324] = {.count = 1, .reusable = true}, SHIFT(143),
  [326] = {.count = 1, .reusable = false}, SHIFT(143),
  [328] = {.count = 1, .reusable = true}, SHIFT(144),
  [330] = {.count = 1, .reusable = false}, SHIFT(144),
  [332] = {.count = 1, .reusable = true}, SHIFT(145),
  [334] = {.count = 1, .reusable = false}, SHIFT(145),
  [336] = {.count = 1, .reusable = true}, SHIFT(146),
  [338] = {.count = 1, .reusable = false}, SHIFT(146),
  [340] = {.count = 1, .reusable = true}, SHIFT(147),
  [342] = {.count = 1, .reusable = false}, SHIFT(147),
  [344] = {.count = 1, .reusable = true}, SHIFT(148),
  [346] = {.count = 1, .reusable = false}, SHIFT(148),
  [348] = {.count = 1, .reusable = true}, SHIFT(149),
  [350] = {.count = 1, .reusable = false}, SHIFT(149),
  [352] = {.count = 1, .reusable = true}, SHIFT(150),
  [354] = {.count = 1, .reusable = false}, SHIFT(150),
  [356] = {.count = 1, .reusable = true}, SHIFT(151),
  [358] = {.count = 1, .reusable = false}, SHIFT(152),
  [360] = {.count = 1, .reusable = true}, SHIFT(153),
  [362] = {.count = 1, .reusable = false}, SHIFT(153),
  [364] = {.count = 1, .reusable = true}, SHIFT(154),
  [366] = {.count = 1, .reusable = false}, SHIFT(154),
  [368] = {.count = 1, .reusable = true}, SHIFT(155),
  [370] = {.count = 1, .reusable = false}, SHIFT(155),
  [372] = {.count = 1, .reusable = true}, SHIFT(156),
  [374] = {.count = 1, .reusable = false}, SHIFT(156),
  [376] = {.count = 1, .reusable = true}, SHIFT(157),
  [378] = {.count = 1, .reusable = false}, SHIFT(157),
  [380] = {.count = 1, .reusable = true}, SHIFT(158),
  [382] = {.count = 1, .reusable = false}, SHIFT(158),
  [384] = {.count = 1, .reusable = true}, SHIFT(159),
  [386] = {.count = 1, .reusable = false}, SHIFT(159),
  [388] = {.count = 1, .reusable = true}, SHIFT(160),
  [390] = {.count = 1, .reusable = false}, SHIFT(160),
  [392] = {.count = 1, .reusable = true}, SHIFT(161),
  [394] = {.count = 1, .reusable = false}, SHIFT(161),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym_mul, 3),
  [398] = {.count = 1, .reusable = false}, REDUCE(sym_mul, 3),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym_div, 3),
  [402] = {.count = 1, .reusable = false}, REDUCE(sym_div, 3),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [406] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_sub, 3),
  [410] = {.count = 1, .reusable = false}, REDUCE(sym_sub, 3),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_eq, 3),
  [414] = {.count = 1, .reusable = false}, REDUCE(sym_eq, 3),
  [416] = {.count = 1, .reusable = true}, REDUCE(sym_neq, 3),
  [418] = {.count = 1, .reusable = false}, REDUCE(sym_neq, 3),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_gt, 3),
  [422] = {.count = 1, .reusable = false}, REDUCE(sym_gt, 3),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym_gte, 3),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym_gte, 3),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_lt, 3),
  [430] = {.count = 1, .reusable = false}, REDUCE(sym_lt, 3),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_lte, 3),
  [434] = {.count = 1, .reusable = false}, REDUCE(sym_lte, 3),
  [436] = {.count = 1, .reusable = true}, SHIFT(163),
  [438] = {.count = 1, .reusable = true}, SHIFT(164),
  [440] = {.count = 1, .reusable = true}, SHIFT(165),
  [442] = {.count = 1, .reusable = true}, SHIFT(166),
  [444] = {.count = 1, .reusable = true}, SHIFT(168),
  [446] = {.count = 1, .reusable = true}, SHIFT(169),
  [448] = {.count = 1, .reusable = true}, SHIFT(171),
  [450] = {.count = 1, .reusable = true}, SHIFT(173),
  [452] = {.count = 1, .reusable = true}, SHIFT(174),
  [454] = {.count = 1, .reusable = true}, REDUCE(aux_sym__complex_clauses_repeat1, 2),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym__complex_clauses, 4),
  [458] = {.count = 2, .reusable = true}, REDUCE(aux_sym__complex_clauses_repeat1, 2), SHIFT_REPEAT(82),
  [461] = {.count = 1, .reusable = false}, SHIFT(176),
  [463] = {.count = 1, .reusable = true}, SHIFT(177),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_complex_clause, 3),
  [467] = {.count = 1, .reusable = true}, SHIFT(178),
  [469] = {.count = 1, .reusable = true}, SHIFT(179),
  [471] = {.count = 1, .reusable = true}, SHIFT(180),
  [473] = {.count = 1, .reusable = false}, SHIFT(180),
  [475] = {.count = 1, .reusable = true}, SHIFT(181),
  [477] = {.count = 1, .reusable = true}, SHIFT(182),
  [479] = {.count = 1, .reusable = true}, SHIFT(184),
  [481] = {.count = 1, .reusable = false}, SHIFT(184),
  [483] = {.count = 1, .reusable = true}, SHIFT(185),
  [485] = {.count = 1, .reusable = false}, SHIFT(185),
  [487] = {.count = 1, .reusable = true}, SHIFT(186),
  [489] = {.count = 1, .reusable = true}, SHIFT(187),
  [491] = {.count = 1, .reusable = false}, SHIFT(188),
  [493] = {.count = 1, .reusable = true}, SHIFT(189),
  [495] = {.count = 1, .reusable = false}, SHIFT(190),
  [497] = {.count = 1, .reusable = true}, SHIFT(191),
  [499] = {.count = 1, .reusable = true}, SHIFT(192),
  [501] = {.count = 1, .reusable = false}, SHIFT(193),
  [503] = {.count = 1, .reusable = true}, SHIFT(194),
  [505] = {.count = 1, .reusable = false}, SHIFT(195),
  [507] = {.count = 1, .reusable = true}, SHIFT(196),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_send, 6),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym__type, 3),
  [513] = {.count = 1, .reusable = true}, SHIFT(197),
  [515] = {.count = 1, .reusable = true}, SHIFT(198),
  [517] = {.count = 1, .reusable = true}, SHIFT(199),
  [519] = {.count = 1, .reusable = true}, SHIFT(200),
  [521] = {.count = 1, .reusable = true}, SHIFT(202),
  [523] = {.count = 1, .reusable = true}, SHIFT(204),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym_nu, 7, .alias_sequence_id = 3),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_tuple, 5),
  [529] = {.count = 1, .reusable = true}, SHIFT(208),
  [531] = {.count = 1, .reusable = true}, SHIFT(213),
  [533] = {.count = 1, .reusable = false}, SHIFT(213),
  [535] = {.count = 1, .reusable = true}, SHIFT(214),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 5),
  [539] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 5),
  [541] = {.count = 1, .reusable = true}, SHIFT(215),
  [543] = {.count = 1, .reusable = false}, SHIFT(215),
  [545] = {.count = 1, .reusable = true}, SHIFT(216),
  [547] = {.count = 1, .reusable = true}, SHIFT(218),
  [549] = {.count = 1, .reusable = true}, SHIFT(219),
  [551] = {.count = 1, .reusable = true}, SHIFT(220),
  [553] = {.count = 1, .reusable = false}, SHIFT(220),
  [555] = {.count = 1, .reusable = true}, SHIFT(221),
  [557] = {.count = 1, .reusable = false}, SHIFT(221),
  [559] = {.count = 1, .reusable = true}, SHIFT(222),
  [561] = {.count = 1, .reusable = false}, SHIFT(222),
  [563] = {.count = 1, .reusable = true}, SHIFT(223),
  [565] = {.count = 1, .reusable = false}, SHIFT(223),
  [567] = {.count = 1, .reusable = true}, SHIFT(224),
  [569] = {.count = 1, .reusable = false}, SHIFT(224),
  [571] = {.count = 1, .reusable = true}, SHIFT(225),
  [573] = {.count = 1, .reusable = false}, SHIFT(225),
  [575] = {.count = 1, .reusable = true}, SHIFT(226),
  [577] = {.count = 1, .reusable = false}, SHIFT(226),
  [579] = {.count = 1, .reusable = true}, SHIFT(227),
  [581] = {.count = 1, .reusable = false}, SHIFT(227),
  [583] = {.count = 1, .reusable = true}, SHIFT(228),
  [585] = {.count = 1, .reusable = false}, SHIFT(228),
  [587] = {.count = 1, .reusable = true}, SHIFT(229),
  [589] = {.count = 1, .reusable = true}, SHIFT(230),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym_type_choice, 4),
  [593] = {.count = 1, .reusable = true}, SHIFT(233),
  [595] = {.count = 1, .reusable = true}, REDUCE(sym_type_recv, 4),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym_type_select, 4),
  [599] = {.count = 1, .reusable = true}, SHIFT(235),
  [601] = {.count = 1, .reusable = true}, REDUCE(sym_type_send, 4),
  [603] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pattern_tuple_repeat1, 2),
  [605] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_tuple, 6),
  [607] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_tuple_repeat1, 2), SHIFT_REPEAT(174),
  [610] = {.count = 1, .reusable = true}, SHIFT(236),
  [612] = {.count = 1, .reusable = true}, SHIFT(237),
  [614] = {.count = 1, .reusable = true}, SHIFT(238),
  [616] = {.count = 1, .reusable = true}, SHIFT(239),
  [618] = {.count = 1, .reusable = true}, SHIFT(240),
  [620] = {.count = 1, .reusable = false}, SHIFT(240),
  [622] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [624] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 6),
  [626] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 6),
  [628] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(182),
  [631] = {.count = 1, .reusable = true}, SHIFT(241),
  [633] = {.count = 1, .reusable = false}, SHIFT(241),
  [635] = {.count = 1, .reusable = true}, SHIFT(242),
  [637] = {.count = 1, .reusable = false}, SHIFT(242),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym_if_then_else, 6),
  [641] = {.count = 1, .reusable = true}, SHIFT(243),
  [643] = {.count = 1, .reusable = true}, SHIFT(244),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym__type_of_label, 3),
  [647] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_select_repeat1, 2),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym_type_choice, 5),
  [651] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_select_repeat1, 2), SHIFT_REPEAT(199),
  [654] = {.count = 1, .reusable = true}, REDUCE(sym_type_select, 5),
  [656] = {.count = 1, .reusable = true}, SHIFT(246),
  [658] = {.count = 1, .reusable = true}, SHIFT(247),
  [660] = {.count = 1, .reusable = true}, SHIFT(248),
  [662] = {.count = 1, .reusable = true}, SHIFT(249),
  [664] = {.count = 1, .reusable = true}, SHIFT(250),
  [666] = {.count = 1, .reusable = true}, SHIFT(251),
  [668] = {.count = 1, .reusable = false}, SHIFT(251),
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
