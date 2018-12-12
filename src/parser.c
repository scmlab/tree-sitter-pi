#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 249
#define SYMBOL_COUNT 92
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
  anon_sym_STAR = 11,
  anon_sym_LBRACE = 12,
  anon_sym_SEMI = 13,
  anon_sym_RBRACE = 14,
  anon_sym_DASH_GT = 15,
  anon_sym_COMMA = 16,
  anon_sym_if = 17,
  anon_sym_then = 18,
  anon_sym_else = 19,
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
  sym_repl = 50,
  sym__clauses = 51,
  sym_simple_clause = 52,
  sym__complex_clauses = 53,
  sym_complex_clause = 54,
  sym_pattern = 55,
  sym_pattern_tuple = 56,
  sym__expr = 57,
  sym_if_then_else = 58,
  sym_tuple = 59,
  sym_mul = 60,
  sym_div = 61,
  sym_add = 62,
  sym_sub = 63,
  sym_eq = 64,
  sym_neq = 65,
  sym_gt = 66,
  sym_gte = 67,
  sym_lt = 68,
  sym_lte = 69,
  sym__term = 70,
  sym_boolean = 71,
  sym_integer = 72,
  sym_variable = 73,
  sym__sort = 74,
  sym__type = 75,
  sym_type_send = 76,
  sym_type_recv = 77,
  sym_type_select = 78,
  sym_type_choice = 79,
  sym_type_end = 80,
  sym_type_call = 81,
  sym__type_of_label = 82,
  sym__name = 83,
  sym_reserved_name = 84,
  sym_polarized_name = 85,
  sym_simple_name = 86,
  aux_sym_program_repeat1 = 87,
  aux_sym__complex_clauses_repeat1 = 88,
  aux_sym_pattern_tuple_repeat1 = 89,
  aux_sym_tuple_repeat1 = 90,
  aux_sym_type_select_repeat1 = 91,
  alias_sym_name = 92,
  alias_sym_process_name = 93,
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
      if (lookahead == '*')
        ADVANCE(9);
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
      if (lookahead == '*')
        ADVANCE(9);
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
  [10] = {.lex_state = 85},
  [11] = {.lex_state = 104},
  [12] = {.lex_state = 104},
  [13] = {.lex_state = 109},
  [14] = {.lex_state = 112},
  [15] = {.lex_state = 109},
  [16] = {.lex_state = 102},
  [17] = {.lex_state = 98},
  [18] = {.lex_state = 72},
  [19] = {.lex_state = 85},
  [20] = {.lex_state = 114},
  [21] = {.lex_state = 109},
  [22] = {.lex_state = 102},
  [23] = {.lex_state = 85},
  [24] = {.lex_state = 116},
  [25] = {.lex_state = 118},
  [26] = {.lex_state = 72},
  [27] = {.lex_state = 124},
  [28] = {.lex_state = 102},
  [29] = {.lex_state = 85},
  [30] = {.lex_state = 116},
  [31] = {.lex_state = 118},
  [32] = {.lex_state = 112},
  [33] = {.lex_state = 116},
  [34] = {.lex_state = 116},
  [35] = {.lex_state = 126},
  [36] = {.lex_state = 102},
  [37] = {.lex_state = 128},
  [38] = {.lex_state = 126},
  [39] = {.lex_state = 118},
  [40] = {.lex_state = 118},
  [41] = {.lex_state = 131},
  [42] = {.lex_state = 131},
  [43] = {.lex_state = 128},
  [44] = {.lex_state = 131},
  [45] = {.lex_state = 124},
  [46] = {.lex_state = 85},
  [47] = {.lex_state = 133},
  [48] = {.lex_state = 114},
  [49] = {.lex_state = 128},
  [50] = {.lex_state = 128},
  [51] = {.lex_state = 137},
  [52] = {.lex_state = 139},
  [53] = {.lex_state = 141},
  [54] = {.lex_state = 85},
  [55] = {.lex_state = 118},
  [56] = {.lex_state = 137},
  [57] = {.lex_state = 118},
  [58] = {.lex_state = 143},
  [59] = {.lex_state = 85},
  [60] = {.lex_state = 118},
  [61] = {.lex_state = 118},
  [62] = {.lex_state = 118},
  [63] = {.lex_state = 118},
  [64] = {.lex_state = 118},
  [65] = {.lex_state = 118},
  [66] = {.lex_state = 118},
  [67] = {.lex_state = 118},
  [68] = {.lex_state = 118},
  [69] = {.lex_state = 118},
  [70] = {.lex_state = 85},
  [71] = {.lex_state = 133},
  [72] = {.lex_state = 102},
  [73] = {.lex_state = 133},
  [74] = {.lex_state = 133},
  [75] = {.lex_state = 133},
  [76] = {.lex_state = 145},
  [77] = {.lex_state = 114},
  [78] = {.lex_state = 145},
  [79] = {.lex_state = 85},
  [80] = {.lex_state = 85},
  [81] = {.lex_state = 116},
  [82] = {.lex_state = 116},
  [83] = {.lex_state = 102},
  [84] = {.lex_state = 139},
  [85] = {.lex_state = 85},
  [86] = {.lex_state = 102},
  [87] = {.lex_state = 143},
  [88] = {.lex_state = 131},
  [89] = {.lex_state = 118},
  [90] = {.lex_state = 118},
  [91] = {.lex_state = 118},
  [92] = {.lex_state = 118},
  [93] = {.lex_state = 118},
  [94] = {.lex_state = 118},
  [95] = {.lex_state = 118},
  [96] = {.lex_state = 118},
  [97] = {.lex_state = 118},
  [98] = {.lex_state = 118},
  [99] = {.lex_state = 118},
  [100] = {.lex_state = 143},
  [101] = {.lex_state = 118},
  [102] = {.lex_state = 118},
  [103] = {.lex_state = 118},
  [104] = {.lex_state = 118},
  [105] = {.lex_state = 118},
  [106] = {.lex_state = 118},
  [107] = {.lex_state = 118},
  [108] = {.lex_state = 118},
  [109] = {.lex_state = 118},
  [110] = {.lex_state = 118},
  [111] = {.lex_state = 118},
  [112] = {.lex_state = 102},
  [113] = {.lex_state = 131},
  [114] = {.lex_state = 131},
  [115] = {.lex_state = 128},
  [116] = {.lex_state = 128},
  [117] = {.lex_state = 128},
  [118] = {.lex_state = 128},
  [119] = {.lex_state = 128},
  [120] = {.lex_state = 128},
  [121] = {.lex_state = 128},
  [122] = {.lex_state = 128},
  [123] = {.lex_state = 114},
  [124] = {.lex_state = 114},
  [125] = {.lex_state = 133},
  [126] = {.lex_state = 133},
  [127] = {.lex_state = 116},
  [128] = {.lex_state = 128},
  [129] = {.lex_state = 116},
  [130] = {.lex_state = 128},
  [131] = {.lex_state = 85},
  [132] = {.lex_state = 137},
  [133] = {.lex_state = 139},
  [134] = {.lex_state = 102},
  [135] = {.lex_state = 139},
  [136] = {.lex_state = 98},
  [137] = {.lex_state = 85},
  [138] = {.lex_state = 139},
  [139] = {.lex_state = 109},
  [140] = {.lex_state = 118},
  [141] = {.lex_state = 137},
  [142] = {.lex_state = 137},
  [143] = {.lex_state = 137},
  [144] = {.lex_state = 137},
  [145] = {.lex_state = 137},
  [146] = {.lex_state = 137},
  [147] = {.lex_state = 137},
  [148] = {.lex_state = 137},
  [149] = {.lex_state = 137},
  [150] = {.lex_state = 118},
  [151] = {.lex_state = 118},
  [152] = {.lex_state = 147},
  [153] = {.lex_state = 143},
  [154] = {.lex_state = 143},
  [155] = {.lex_state = 143},
  [156] = {.lex_state = 143},
  [157] = {.lex_state = 143},
  [158] = {.lex_state = 143},
  [159] = {.lex_state = 143},
  [160] = {.lex_state = 143},
  [161] = {.lex_state = 85},
  [162] = {.lex_state = 145},
  [163] = {.lex_state = 128},
  [164] = {.lex_state = 128},
  [165] = {.lex_state = 124},
  [166] = {.lex_state = 139},
  [167] = {.lex_state = 133},
  [168] = {.lex_state = 139},
  [169] = {.lex_state = 133},
  [170] = {.lex_state = 102},
  [171] = {.lex_state = 126},
  [172] = {.lex_state = 116},
  [173] = {.lex_state = 137},
  [174] = {.lex_state = 72},
  [175] = {.lex_state = 85},
  [176] = {.lex_state = 116},
  [177] = {.lex_state = 118},
  [178] = {.lex_state = 147},
  [179] = {.lex_state = 131},
  [180] = {.lex_state = 118},
  [181] = {.lex_state = 137},
  [182] = {.lex_state = 147},
  [183] = {.lex_state = 143},
  [184] = {.lex_state = 118},
  [185] = {.lex_state = 118},
  [186] = {.lex_state = 118},
  [187] = {.lex_state = 118},
  [188] = {.lex_state = 118},
  [189] = {.lex_state = 118},
  [190] = {.lex_state = 118},
  [191] = {.lex_state = 118},
  [192] = {.lex_state = 118},
  [193] = {.lex_state = 118},
  [194] = {.lex_state = 118},
  [195] = {.lex_state = 133},
  [196] = {.lex_state = 133},
  [197] = {.lex_state = 133},
  [198] = {.lex_state = 116},
  [199] = {.lex_state = 145},
  [200] = {.lex_state = 139},
  [201] = {.lex_state = 145},
  [202] = {.lex_state = 145},
  [203] = {.lex_state = 139},
  [204] = {.lex_state = 145},
  [205] = {.lex_state = 137},
  [206] = {.lex_state = 126},
  [207] = {.lex_state = 137},
  [208] = {.lex_state = 124},
  [209] = {.lex_state = 139},
  [210] = {.lex_state = 128},
  [211] = {.lex_state = 128},
  [212] = {.lex_state = 118},
  [213] = {.lex_state = 137},
  [214] = {.lex_state = 131},
  [215] = {.lex_state = 137},
  [216] = {.lex_state = 118},
  [217] = {.lex_state = 118},
  [218] = {.lex_state = 128},
  [219] = {.lex_state = 147},
  [220] = {.lex_state = 147},
  [221] = {.lex_state = 147},
  [222] = {.lex_state = 147},
  [223] = {.lex_state = 147},
  [224] = {.lex_state = 147},
  [225] = {.lex_state = 147},
  [226] = {.lex_state = 147},
  [227] = {.lex_state = 133},
  [228] = {.lex_state = 133},
  [229] = {.lex_state = 139},
  [230] = {.lex_state = 139},
  [231] = {.lex_state = 145},
  [232] = {.lex_state = 139},
  [233] = {.lex_state = 145},
  [234] = {.lex_state = 85},
  [235] = {.lex_state = 133},
  [236] = {.lex_state = 85},
  [237] = {.lex_state = 85},
  [238] = {.lex_state = 137},
  [239] = {.lex_state = 143},
  [240] = {.lex_state = 147},
  [241] = {.lex_state = 128},
  [242] = {.lex_state = 128},
  [243] = {.lex_state = 114},
  [244] = {.lex_state = 118},
  [245] = {.lex_state = 133},
  [246] = {.lex_state = 133},
  [247] = {.lex_state = 85},
  [248] = {.lex_state = 147},
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
    [anon_sym_BANG] = ACTIONS(46),
    [anon_sym_DOT] = ACTIONS(44),
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
    [anon_sym_BANG] = ACTIONS(50),
    [anon_sym_DOT] = ACTIONS(48),
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
    [anon_sym_BANG] = ACTIONS(48),
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
    [anon_sym_BANG] = ACTIONS(58),
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
    [anon_sym_BANG] = ACTIONS(70),
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
    [anon_sym_DOT] = ACTIONS(126),
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
    [anon_sym_DOT] = ACTIONS(130),
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
    [anon_sym_DOT] = ACTIONS(134),
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
    [anon_sym_DOT] = ACTIONS(156),
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
    [anon_sym_BANG] = ACTIONS(168),
    [aux_sym_end] = ACTIONS(170),
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
    [anon_sym_DOT] = ACTIONS(176),
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
    [sym__proc] = STATE(112),
    [sym_par] = STATE(112),
    [sym_nu] = STATE(112),
    [sym_recv] = STATE(112),
    [sym_send] = STATE(112),
    [sym_end] = STATE(112),
    [sym_call] = STATE(112),
    [sym_repl] = STATE(112),
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
    [sym_string] = ACTIONS(240),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(242),
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
    [sym_string] = ACTIONS(244),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(246),
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
    [sym_string] = ACTIONS(248),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(250),
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
    [sym_string] = ACTIONS(252),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(254),
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
    [sym_string] = ACTIONS(256),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(258),
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
    [sym_string] = ACTIONS(260),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(262),
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
    [sym_string] = ACTIONS(264),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(266),
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
    [sym_string] = ACTIONS(268),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(270),
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
    [sym_string] = ACTIONS(272),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(274),
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
    [sym_string] = ACTIONS(276),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(278),
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
    [anon_sym_BANG] = ACTIONS(168),
    [aux_sym_end] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(280),
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym_PIPE] = ACTIONS(280),
    [anon_sym_SEMI] = ACTIONS(280),
    [anon_sym_RBRACE] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(280),
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
    [anon_sym_BANG] = ACTIONS(168),
    [aux_sym_end] = ACTIONS(170),
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
    [anon_sym_QMARK] = ACTIONS(282),
    [anon_sym_BANG] = ACTIONS(284),
    [aux_sym_end] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_sort_int] = ACTIONS(288),
    [sym_sort_bool] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [75] = {
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
    [anon_sym_QMARK] = ACTIONS(282),
    [anon_sym_BANG] = ACTIONS(284),
    [aux_sym_end] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(290),
    [sym_sort_int] = ACTIONS(292),
    [sym_sort_bool] = ACTIONS(292),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [76] = {
    [anon_sym_RPAREN] = ACTIONS(294),
    [anon_sym_DOT] = ACTIONS(294),
    [anon_sym_SEMI] = ACTIONS(294),
    [anon_sym_RBRACE] = ACTIONS(294),
    [sym_comment] = ACTIONS(9),
  },
  [77] = {
    [anon_sym_RPAREN] = ACTIONS(296),
    [sym_comment] = ACTIONS(9),
  },
  [78] = {
    [anon_sym_RPAREN] = ACTIONS(298),
    [anon_sym_DOT] = ACTIONS(298),
    [anon_sym_SEMI] = ACTIONS(298),
    [anon_sym_RBRACE] = ACTIONS(298),
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
    [sym__proc] = STATE(112),
    [sym_par] = STATE(112),
    [sym_nu] = STATE(112),
    [sym_recv] = STATE(112),
    [sym_send] = STATE(112),
    [sym_end] = STATE(112),
    [sym_call] = STATE(112),
    [sym_repl] = STATE(112),
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
  [81] = {
    [sym_pattern] = STATE(132),
    [sym_pattern_tuple] = STATE(35),
    [sym_simple_name] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(78),
    [sym_comment] = ACTIONS(9),
  },
  [82] = {
    [sym_complex_clause] = STATE(133),
    [sym_pattern] = STATE(53),
    [sym_pattern_tuple] = STATE(35),
    [sym_simple_name] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(78),
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
    [aux_sym__complex_clauses_repeat1] = STATE(135),
    [anon_sym_SEMI] = ACTIONS(180),
    [anon_sym_RBRACE] = ACTIONS(302),
    [sym_comment] = ACTIONS(9),
  },
  [85] = {
    [sym__proc] = STATE(138),
    [sym_par] = STATE(138),
    [sym_nu] = STATE(138),
    [sym_recv] = STATE(138),
    [sym_send] = STATE(138),
    [sym_end] = STATE(138),
    [sym_call] = STATE(138),
    [sym_repl] = STATE(138),
    [sym__name] = STATE(139),
    [sym_reserved_name] = STATE(139),
    [sym_polarized_name] = STATE(139),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(304),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(306),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(308),
    [anon_sym_RPAREN] = ACTIONS(308),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_SEMI] = ACTIONS(308),
    [anon_sym_RBRACE] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(308),
    [sym_comment] = ACTIONS(9),
  },
  [87] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(310),
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
    [anon_sym_RPAREN] = ACTIONS(312),
    [anon_sym_DOT] = ACTIONS(312),
    [anon_sym_STAR] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(312),
    [anon_sym_then] = ACTIONS(312),
    [anon_sym_else] = ACTIONS(312),
    [anon_sym_SLASH] = ACTIONS(314),
    [anon_sym_PLUS] = ACTIONS(312),
    [anon_sym_DASH] = ACTIONS(314),
    [anon_sym_EQ_EQ] = ACTIONS(312),
    [anon_sym_BANG_EQ] = ACTIONS(312),
    [anon_sym_GT] = ACTIONS(314),
    [anon_sym_GT_EQ] = ACTIONS(312),
    [anon_sym_LT] = ACTIONS(314),
    [anon_sym_LT_EQ] = ACTIONS(312),
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
    [sym_string] = ACTIONS(240),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(242),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [90] = {
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(316),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(318),
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
    [sym_string] = ACTIONS(244),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(246),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [92] = {
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
  [93] = {
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
  [94] = {
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
  [95] = {
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
  [96] = {
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
  [97] = {
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
  [99] = {
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
  [100] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(352),
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
    [sym_string] = ACTIONS(240),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(242),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [102] = {
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(354),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(356),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(358),
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
    [sym_string] = ACTIONS(244),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(246),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [104] = {
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
    [anon_sym_if] = ACTIONS(120),
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
  [105] = {
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
  [106] = {
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
  [107] = {
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
  [108] = {
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
  [109] = {
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
  [110] = {
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
  [111] = {
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
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(392),
    [anon_sym_RPAREN] = ACTIONS(392),
    [anon_sym_PIPE] = ACTIONS(392),
    [anon_sym_SEMI] = ACTIONS(392),
    [anon_sym_RBRACE] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(392),
    [sym_comment] = ACTIONS(9),
  },
  [113] = {
    [anon_sym_RPAREN] = ACTIONS(394),
    [anon_sym_DOT] = ACTIONS(394),
    [anon_sym_STAR] = ACTIONS(394),
    [anon_sym_COMMA] = ACTIONS(394),
    [anon_sym_then] = ACTIONS(394),
    [anon_sym_else] = ACTIONS(394),
    [anon_sym_SLASH] = ACTIONS(396),
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
  [114] = {
    [anon_sym_RPAREN] = ACTIONS(398),
    [anon_sym_DOT] = ACTIONS(398),
    [anon_sym_STAR] = ACTIONS(398),
    [anon_sym_COMMA] = ACTIONS(398),
    [anon_sym_then] = ACTIONS(398),
    [anon_sym_else] = ACTIONS(398),
    [anon_sym_SLASH] = ACTIONS(400),
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
  [115] = {
    [anon_sym_DOT] = ACTIONS(402),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(402),
    [anon_sym_DASH] = ACTIONS(404),
    [anon_sym_EQ_EQ] = ACTIONS(402),
    [anon_sym_BANG_EQ] = ACTIONS(402),
    [anon_sym_GT] = ACTIONS(404),
    [anon_sym_GT_EQ] = ACTIONS(402),
    [anon_sym_LT] = ACTIONS(404),
    [anon_sym_LT_EQ] = ACTIONS(402),
    [sym_comment] = ACTIONS(9),
  },
  [116] = {
    [anon_sym_DOT] = ACTIONS(406),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_EQ_EQ] = ACTIONS(406),
    [anon_sym_BANG_EQ] = ACTIONS(406),
    [anon_sym_GT] = ACTIONS(408),
    [anon_sym_GT_EQ] = ACTIONS(406),
    [anon_sym_LT] = ACTIONS(408),
    [anon_sym_LT_EQ] = ACTIONS(406),
    [sym_comment] = ACTIONS(9),
  },
  [117] = {
    [anon_sym_DOT] = ACTIONS(410),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_EQ_EQ] = ACTIONS(410),
    [anon_sym_BANG_EQ] = ACTIONS(410),
    [anon_sym_GT] = ACTIONS(412),
    [anon_sym_GT_EQ] = ACTIONS(410),
    [anon_sym_LT] = ACTIONS(412),
    [anon_sym_LT_EQ] = ACTIONS(410),
    [sym_comment] = ACTIONS(9),
  },
  [118] = {
    [anon_sym_DOT] = ACTIONS(414),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_EQ_EQ] = ACTIONS(414),
    [anon_sym_BANG_EQ] = ACTIONS(414),
    [anon_sym_GT] = ACTIONS(416),
    [anon_sym_GT_EQ] = ACTIONS(414),
    [anon_sym_LT] = ACTIONS(416),
    [anon_sym_LT_EQ] = ACTIONS(414),
    [sym_comment] = ACTIONS(9),
  },
  [119] = {
    [anon_sym_DOT] = ACTIONS(418),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_EQ_EQ] = ACTIONS(418),
    [anon_sym_BANG_EQ] = ACTIONS(418),
    [anon_sym_GT] = ACTIONS(420),
    [anon_sym_GT_EQ] = ACTIONS(418),
    [anon_sym_LT] = ACTIONS(420),
    [anon_sym_LT_EQ] = ACTIONS(418),
    [sym_comment] = ACTIONS(9),
  },
  [120] = {
    [anon_sym_DOT] = ACTIONS(422),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_EQ_EQ] = ACTIONS(422),
    [anon_sym_BANG_EQ] = ACTIONS(422),
    [anon_sym_GT] = ACTIONS(424),
    [anon_sym_GT_EQ] = ACTIONS(422),
    [anon_sym_LT] = ACTIONS(424),
    [anon_sym_LT_EQ] = ACTIONS(422),
    [sym_comment] = ACTIONS(9),
  },
  [121] = {
    [anon_sym_DOT] = ACTIONS(426),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_EQ_EQ] = ACTIONS(426),
    [anon_sym_BANG_EQ] = ACTIONS(426),
    [anon_sym_GT] = ACTIONS(428),
    [anon_sym_GT_EQ] = ACTIONS(426),
    [anon_sym_LT] = ACTIONS(428),
    [anon_sym_LT_EQ] = ACTIONS(426),
    [sym_comment] = ACTIONS(9),
  },
  [122] = {
    [anon_sym_DOT] = ACTIONS(430),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_EQ_EQ] = ACTIONS(430),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_GT] = ACTIONS(432),
    [anon_sym_GT_EQ] = ACTIONS(430),
    [anon_sym_LT] = ACTIONS(432),
    [anon_sym_LT_EQ] = ACTIONS(430),
    [sym_comment] = ACTIONS(9),
  },
  [123] = {
    [anon_sym_RPAREN] = ACTIONS(434),
    [sym_comment] = ACTIONS(9),
  },
  [124] = {
    [anon_sym_RPAREN] = ACTIONS(436),
    [sym_comment] = ACTIONS(9),
  },
  [125] = {
    [sym__sort] = STATE(163),
    [sym__type] = STATE(163),
    [sym_type_send] = STATE(163),
    [sym_type_recv] = STATE(163),
    [sym_type_select] = STATE(163),
    [sym_type_choice] = STATE(163),
    [sym_type_end] = STATE(163),
    [sym_type_call] = STATE(163),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(282),
    [anon_sym_BANG] = ACTIONS(284),
    [aux_sym_end] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_sort_int] = ACTIONS(438),
    [sym_sort_bool] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [126] = {
    [sym__sort] = STATE(164),
    [sym__type] = STATE(164),
    [sym_type_send] = STATE(164),
    [sym_type_recv] = STATE(164),
    [sym_type_select] = STATE(164),
    [sym_type_choice] = STATE(164),
    [sym_type_end] = STATE(164),
    [sym_type_call] = STATE(164),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(282),
    [anon_sym_BANG] = ACTIONS(284),
    [aux_sym_end] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(290),
    [sym_sort_int] = ACTIONS(440),
    [sym_sort_bool] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [127] = {
    [sym__type_of_label] = STATE(166),
    [sym_label] = ACTIONS(442),
    [sym_comment] = ACTIONS(9),
  },
  [128] = {
    [anon_sym_DOT] = ACTIONS(444),
    [sym_comment] = ACTIONS(9),
  },
  [129] = {
    [sym__type_of_label] = STATE(168),
    [sym_label] = ACTIONS(442),
    [sym_comment] = ACTIONS(9),
  },
  [130] = {
    [anon_sym_DOT] = ACTIONS(446),
    [sym_comment] = ACTIONS(9),
  },
  [131] = {
    [sym__proc] = STATE(170),
    [sym_par] = STATE(170),
    [sym_nu] = STATE(170),
    [sym_recv] = STATE(170),
    [sym_send] = STATE(170),
    [sym_end] = STATE(170),
    [sym_call] = STATE(170),
    [sym_repl] = STATE(170),
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
    [aux_sym_pattern_tuple_repeat1] = STATE(173),
    [anon_sym_RPAREN] = ACTIONS(448),
    [anon_sym_COMMA] = ACTIONS(450),
    [sym_comment] = ACTIONS(9),
  },
  [133] = {
    [anon_sym_SEMI] = ACTIONS(452),
    [anon_sym_RBRACE] = ACTIONS(452),
    [sym_comment] = ACTIONS(9),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(454),
    [anon_sym_RPAREN] = ACTIONS(454),
    [anon_sym_PIPE] = ACTIONS(454),
    [anon_sym_SEMI] = ACTIONS(454),
    [anon_sym_RBRACE] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(454),
    [sym_comment] = ACTIONS(9),
  },
  [135] = {
    [aux_sym__complex_clauses_repeat1] = STATE(135),
    [anon_sym_SEMI] = ACTIONS(456),
    [anon_sym_RBRACE] = ACTIONS(452),
    [sym_comment] = ACTIONS(9),
  },
  [136] = {
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
    [anon_sym_nu] = ACTIONS(459),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(40),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [137] = {
    [sym__proc] = STATE(22),
    [sym_par] = STATE(22),
    [sym_nu] = STATE(22),
    [sym_recv] = STATE(22),
    [sym_send] = STATE(22),
    [sym_end] = STATE(22),
    [sym_call] = STATE(22),
    [sym_repl] = STATE(22),
    [sym__name] = STATE(139),
    [sym_reserved_name] = STATE(139),
    [sym_polarized_name] = STATE(139),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(304),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(306),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [138] = {
    [anon_sym_PIPE] = ACTIONS(461),
    [anon_sym_SEMI] = ACTIONS(463),
    [anon_sym_RBRACE] = ACTIONS(463),
    [sym_comment] = ACTIONS(9),
  },
  [139] = {
    [anon_sym_QMARK] = ACTIONS(465),
    [anon_sym_BANG] = ACTIONS(467),
    [sym_comment] = ACTIONS(9),
  },
  [140] = {
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(354),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(469),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(471),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [141] = {
    [aux_sym_tuple_repeat1] = STATE(181),
    [anon_sym_RPAREN] = ACTIONS(473),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(475),
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
  [142] = {
    [anon_sym_RPAREN] = ACTIONS(402),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(402),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(402),
    [anon_sym_DASH] = ACTIONS(404),
    [anon_sym_EQ_EQ] = ACTIONS(402),
    [anon_sym_BANG_EQ] = ACTIONS(402),
    [anon_sym_GT] = ACTIONS(404),
    [anon_sym_GT_EQ] = ACTIONS(402),
    [anon_sym_LT] = ACTIONS(404),
    [anon_sym_LT_EQ] = ACTIONS(402),
    [sym_comment] = ACTIONS(9),
  },
  [143] = {
    [anon_sym_RPAREN] = ACTIONS(406),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(406),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_EQ_EQ] = ACTIONS(406),
    [anon_sym_BANG_EQ] = ACTIONS(406),
    [anon_sym_GT] = ACTIONS(408),
    [anon_sym_GT_EQ] = ACTIONS(406),
    [anon_sym_LT] = ACTIONS(408),
    [anon_sym_LT_EQ] = ACTIONS(406),
    [sym_comment] = ACTIONS(9),
  },
  [144] = {
    [anon_sym_RPAREN] = ACTIONS(410),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(410),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(200),
    [anon_sym_EQ_EQ] = ACTIONS(410),
    [anon_sym_BANG_EQ] = ACTIONS(410),
    [anon_sym_GT] = ACTIONS(412),
    [anon_sym_GT_EQ] = ACTIONS(410),
    [anon_sym_LT] = ACTIONS(412),
    [anon_sym_LT_EQ] = ACTIONS(410),
    [sym_comment] = ACTIONS(9),
  },
  [145] = {
    [anon_sym_RPAREN] = ACTIONS(414),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(414),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(200),
    [anon_sym_EQ_EQ] = ACTIONS(414),
    [anon_sym_BANG_EQ] = ACTIONS(414),
    [anon_sym_GT] = ACTIONS(416),
    [anon_sym_GT_EQ] = ACTIONS(414),
    [anon_sym_LT] = ACTIONS(416),
    [anon_sym_LT_EQ] = ACTIONS(414),
    [sym_comment] = ACTIONS(9),
  },
  [146] = {
    [anon_sym_RPAREN] = ACTIONS(418),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(200),
    [anon_sym_EQ_EQ] = ACTIONS(418),
    [anon_sym_BANG_EQ] = ACTIONS(418),
    [anon_sym_GT] = ACTIONS(420),
    [anon_sym_GT_EQ] = ACTIONS(418),
    [anon_sym_LT] = ACTIONS(420),
    [anon_sym_LT_EQ] = ACTIONS(418),
    [sym_comment] = ACTIONS(9),
  },
  [147] = {
    [anon_sym_RPAREN] = ACTIONS(422),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(422),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(200),
    [anon_sym_EQ_EQ] = ACTIONS(422),
    [anon_sym_BANG_EQ] = ACTIONS(422),
    [anon_sym_GT] = ACTIONS(424),
    [anon_sym_GT_EQ] = ACTIONS(422),
    [anon_sym_LT] = ACTIONS(424),
    [anon_sym_LT_EQ] = ACTIONS(422),
    [sym_comment] = ACTIONS(9),
  },
  [148] = {
    [anon_sym_RPAREN] = ACTIONS(426),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(426),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(200),
    [anon_sym_EQ_EQ] = ACTIONS(426),
    [anon_sym_BANG_EQ] = ACTIONS(426),
    [anon_sym_GT] = ACTIONS(428),
    [anon_sym_GT_EQ] = ACTIONS(426),
    [anon_sym_LT] = ACTIONS(428),
    [anon_sym_LT_EQ] = ACTIONS(426),
    [sym_comment] = ACTIONS(9),
  },
  [149] = {
    [anon_sym_RPAREN] = ACTIONS(430),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(430),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(200),
    [anon_sym_EQ_EQ] = ACTIONS(430),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_GT] = ACTIONS(432),
    [anon_sym_GT_EQ] = ACTIONS(430),
    [anon_sym_LT] = ACTIONS(432),
    [anon_sym_LT_EQ] = ACTIONS(430),
    [sym_comment] = ACTIONS(9),
  },
  [150] = {
    [sym__expr] = STATE(182),
    [sym_if_then_else] = STATE(182),
    [sym_tuple] = STATE(182),
    [sym_mul] = STATE(182),
    [sym_div] = STATE(182),
    [sym_add] = STATE(182),
    [sym_sub] = STATE(182),
    [sym_eq] = STATE(182),
    [sym_neq] = STATE(182),
    [sym_gt] = STATE(182),
    [sym_gte] = STATE(182),
    [sym_lt] = STATE(182),
    [sym_lte] = STATE(182),
    [sym__term] = STATE(182),
    [sym_boolean] = STATE(182),
    [sym_integer] = STATE(182),
    [sym_variable] = STATE(182),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(354),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(477),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(479),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [151] = {
    [sym__expr] = STATE(183),
    [sym_if_then_else] = STATE(183),
    [sym_tuple] = STATE(183),
    [sym_mul] = STATE(183),
    [sym_div] = STATE(183),
    [sym_add] = STATE(183),
    [sym_sub] = STATE(183),
    [sym_eq] = STATE(183),
    [sym_neq] = STATE(183),
    [sym_gt] = STATE(183),
    [sym_gte] = STATE(183),
    [sym_lt] = STATE(183),
    [sym_lte] = STATE(183),
    [sym__term] = STATE(183),
    [sym_boolean] = STATE(183),
    [sym_integer] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(120),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(481),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(483),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [152] = {
    [anon_sym_STAR] = ACTIONS(485),
    [anon_sym_else] = ACTIONS(487),
    [anon_sym_SLASH] = ACTIONS(489),
    [anon_sym_PLUS] = ACTIONS(491),
    [anon_sym_DASH] = ACTIONS(493),
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [anon_sym_BANG_EQ] = ACTIONS(497),
    [anon_sym_GT] = ACTIONS(499),
    [anon_sym_GT_EQ] = ACTIONS(501),
    [anon_sym_LT] = ACTIONS(503),
    [anon_sym_LT_EQ] = ACTIONS(505),
    [sym_comment] = ACTIONS(9),
  },
  [153] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(402),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(402),
    [anon_sym_DASH] = ACTIONS(404),
    [anon_sym_EQ_EQ] = ACTIONS(402),
    [anon_sym_BANG_EQ] = ACTIONS(402),
    [anon_sym_GT] = ACTIONS(404),
    [anon_sym_GT_EQ] = ACTIONS(402),
    [anon_sym_LT] = ACTIONS(404),
    [anon_sym_LT_EQ] = ACTIONS(402),
    [sym_comment] = ACTIONS(9),
  },
  [154] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(406),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_EQ_EQ] = ACTIONS(406),
    [anon_sym_BANG_EQ] = ACTIONS(406),
    [anon_sym_GT] = ACTIONS(408),
    [anon_sym_GT_EQ] = ACTIONS(406),
    [anon_sym_LT] = ACTIONS(408),
    [anon_sym_LT_EQ] = ACTIONS(406),
    [sym_comment] = ACTIONS(9),
  },
  [155] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(410),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_EQ_EQ] = ACTIONS(410),
    [anon_sym_BANG_EQ] = ACTIONS(410),
    [anon_sym_GT] = ACTIONS(412),
    [anon_sym_GT_EQ] = ACTIONS(410),
    [anon_sym_LT] = ACTIONS(412),
    [anon_sym_LT_EQ] = ACTIONS(410),
    [sym_comment] = ACTIONS(9),
  },
  [156] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(414),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_EQ_EQ] = ACTIONS(414),
    [anon_sym_BANG_EQ] = ACTIONS(414),
    [anon_sym_GT] = ACTIONS(416),
    [anon_sym_GT_EQ] = ACTIONS(414),
    [anon_sym_LT] = ACTIONS(416),
    [anon_sym_LT_EQ] = ACTIONS(414),
    [sym_comment] = ACTIONS(9),
  },
  [157] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(418),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_EQ_EQ] = ACTIONS(418),
    [anon_sym_BANG_EQ] = ACTIONS(418),
    [anon_sym_GT] = ACTIONS(420),
    [anon_sym_GT_EQ] = ACTIONS(418),
    [anon_sym_LT] = ACTIONS(420),
    [anon_sym_LT_EQ] = ACTIONS(418),
    [sym_comment] = ACTIONS(9),
  },
  [158] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(422),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_EQ_EQ] = ACTIONS(422),
    [anon_sym_BANG_EQ] = ACTIONS(422),
    [anon_sym_GT] = ACTIONS(424),
    [anon_sym_GT_EQ] = ACTIONS(422),
    [anon_sym_LT] = ACTIONS(424),
    [anon_sym_LT_EQ] = ACTIONS(422),
    [sym_comment] = ACTIONS(9),
  },
  [159] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(426),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_EQ_EQ] = ACTIONS(426),
    [anon_sym_BANG_EQ] = ACTIONS(426),
    [anon_sym_GT] = ACTIONS(428),
    [anon_sym_GT_EQ] = ACTIONS(426),
    [anon_sym_LT] = ACTIONS(428),
    [anon_sym_LT_EQ] = ACTIONS(426),
    [sym_comment] = ACTIONS(9),
  },
  [160] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(430),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_EQ_EQ] = ACTIONS(430),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_GT] = ACTIONS(432),
    [anon_sym_GT_EQ] = ACTIONS(430),
    [anon_sym_LT] = ACTIONS(432),
    [anon_sym_LT_EQ] = ACTIONS(430),
    [sym_comment] = ACTIONS(9),
  },
  [161] = {
    [sym__proc] = STATE(170),
    [sym_par] = STATE(170),
    [sym_nu] = STATE(170),
    [sym_recv] = STATE(170),
    [sym_send] = STATE(170),
    [sym_end] = STATE(170),
    [sym_call] = STATE(170),
    [sym_repl] = STATE(170),
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
  [162] = {
    [anon_sym_RPAREN] = ACTIONS(507),
    [anon_sym_DOT] = ACTIONS(507),
    [anon_sym_SEMI] = ACTIONS(507),
    [anon_sym_RBRACE] = ACTIONS(507),
    [sym_comment] = ACTIONS(9),
  },
  [163] = {
    [anon_sym_DOT] = ACTIONS(509),
    [sym_comment] = ACTIONS(9),
  },
  [164] = {
    [anon_sym_DOT] = ACTIONS(511),
    [sym_comment] = ACTIONS(9),
  },
  [165] = {
    [anon_sym_COLON] = ACTIONS(513),
    [sym_comment] = ACTIONS(9),
  },
  [166] = {
    [aux_sym_type_select_repeat1] = STATE(200),
    [anon_sym_SEMI] = ACTIONS(515),
    [anon_sym_RBRACE] = ACTIONS(517),
    [sym_comment] = ACTIONS(9),
  },
  [167] = {
    [sym__type] = STATE(201),
    [sym_type_send] = STATE(201),
    [sym_type_recv] = STATE(201),
    [sym_type_select] = STATE(201),
    [sym_type_choice] = STATE(201),
    [sym_type_end] = STATE(201),
    [sym_type_call] = STATE(201),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(166),
    [anon_sym_BANG] = ACTIONS(168),
    [aux_sym_end] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [168] = {
    [aux_sym_type_select_repeat1] = STATE(203),
    [anon_sym_SEMI] = ACTIONS(515),
    [anon_sym_RBRACE] = ACTIONS(519),
    [sym_comment] = ACTIONS(9),
  },
  [169] = {
    [sym__type] = STATE(204),
    [sym_type_send] = STATE(204),
    [sym_type_recv] = STATE(204),
    [sym_type_select] = STATE(204),
    [sym_type_choice] = STATE(204),
    [sym_type_end] = STATE(204),
    [sym_type_call] = STATE(204),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(166),
    [anon_sym_BANG] = ACTIONS(168),
    [aux_sym_end] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(521),
    [anon_sym_RPAREN] = ACTIONS(521),
    [anon_sym_PIPE] = ACTIONS(521),
    [anon_sym_SEMI] = ACTIONS(521),
    [anon_sym_RBRACE] = ACTIONS(521),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(521),
    [sym_comment] = ACTIONS(9),
  },
  [171] = {
    [anon_sym_RPAREN] = ACTIONS(523),
    [anon_sym_DOT] = ACTIONS(523),
    [anon_sym_DASH_GT] = ACTIONS(523),
    [anon_sym_COMMA] = ACTIONS(523),
    [sym_comment] = ACTIONS(9),
  },
  [172] = {
    [sym_pattern] = STATE(205),
    [sym_pattern_tuple] = STATE(35),
    [sym_simple_name] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(78),
    [sym_comment] = ACTIONS(9),
  },
  [173] = {
    [aux_sym_pattern_tuple_repeat1] = STATE(207),
    [anon_sym_RPAREN] = ACTIONS(525),
    [anon_sym_COMMA] = ACTIONS(450),
    [sym_comment] = ACTIONS(9),
  },
  [174] = {
    [sym_simple_name] = STATE(208),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [175] = {
    [sym__proc] = STATE(209),
    [sym_par] = STATE(209),
    [sym_nu] = STATE(209),
    [sym_recv] = STATE(209),
    [sym_send] = STATE(209),
    [sym_end] = STATE(209),
    [sym_call] = STATE(209),
    [sym_repl] = STATE(209),
    [sym__name] = STATE(139),
    [sym_reserved_name] = STATE(139),
    [sym_polarized_name] = STATE(139),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(304),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(306),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [176] = {
    [sym__clauses] = STATE(36),
    [sym_simple_clause] = STATE(36),
    [sym__complex_clauses] = STATE(36),
    [sym_pattern] = STATE(210),
    [sym_pattern_tuple] = STATE(35),
    [sym_simple_name] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(76),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(78),
    [sym_comment] = ACTIONS(9),
  },
  [177] = {
    [sym__expr] = STATE(211),
    [sym_if_then_else] = STATE(211),
    [sym_tuple] = STATE(211),
    [sym_mul] = STATE(211),
    [sym_div] = STATE(211),
    [sym_add] = STATE(211),
    [sym_sub] = STATE(211),
    [sym_eq] = STATE(211),
    [sym_neq] = STATE(211),
    [sym_gt] = STATE(211),
    [sym_gte] = STATE(211),
    [sym_lt] = STATE(211),
    [sym_lte] = STATE(211),
    [sym__term] = STATE(211),
    [sym_boolean] = STATE(211),
    [sym_integer] = STATE(211),
    [sym_variable] = STATE(211),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(82),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(527),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(529),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [178] = {
    [anon_sym_STAR] = ACTIONS(485),
    [anon_sym_else] = ACTIONS(531),
    [anon_sym_SLASH] = ACTIONS(489),
    [anon_sym_PLUS] = ACTIONS(491),
    [anon_sym_DASH] = ACTIONS(493),
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [anon_sym_BANG_EQ] = ACTIONS(497),
    [anon_sym_GT] = ACTIONS(499),
    [anon_sym_GT_EQ] = ACTIONS(501),
    [anon_sym_LT] = ACTIONS(503),
    [anon_sym_LT_EQ] = ACTIONS(505),
    [sym_comment] = ACTIONS(9),
  },
  [179] = {
    [anon_sym_RPAREN] = ACTIONS(533),
    [anon_sym_DOT] = ACTIONS(533),
    [anon_sym_STAR] = ACTIONS(533),
    [anon_sym_COMMA] = ACTIONS(533),
    [anon_sym_then] = ACTIONS(533),
    [anon_sym_else] = ACTIONS(533),
    [anon_sym_SLASH] = ACTIONS(535),
    [anon_sym_PLUS] = ACTIONS(533),
    [anon_sym_DASH] = ACTIONS(535),
    [anon_sym_EQ_EQ] = ACTIONS(533),
    [anon_sym_BANG_EQ] = ACTIONS(533),
    [anon_sym_GT] = ACTIONS(535),
    [anon_sym_GT_EQ] = ACTIONS(533),
    [anon_sym_LT] = ACTIONS(535),
    [anon_sym_LT_EQ] = ACTIONS(533),
    [sym_comment] = ACTIONS(9),
  },
  [180] = {
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
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(537),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(539),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [181] = {
    [aux_sym_tuple_repeat1] = STATE(215),
    [anon_sym_RPAREN] = ACTIONS(541),
    [anon_sym_COMMA] = ACTIONS(475),
    [sym_comment] = ACTIONS(9),
  },
  [182] = {
    [anon_sym_STAR] = ACTIONS(485),
    [anon_sym_else] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(489),
    [anon_sym_PLUS] = ACTIONS(491),
    [anon_sym_DASH] = ACTIONS(493),
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [anon_sym_BANG_EQ] = ACTIONS(497),
    [anon_sym_GT] = ACTIONS(499),
    [anon_sym_GT_EQ] = ACTIONS(501),
    [anon_sym_LT] = ACTIONS(503),
    [anon_sym_LT_EQ] = ACTIONS(505),
    [sym_comment] = ACTIONS(9),
  },
  [183] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(545),
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
  [184] = {
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
    [anon_sym_if] = ACTIONS(354),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(240),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(242),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [185] = {
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(82),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(547),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(549),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [186] = {
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
    [anon_sym_if] = ACTIONS(354),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(244),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(246),
    [sym__digit] = ACTIONS(92),
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
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(354),
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
    [anon_sym_if] = ACTIONS(354),
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
    [anon_sym_if] = ACTIONS(354),
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
    [anon_sym_if] = ACTIONS(354),
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
    [anon_sym_if] = ACTIONS(354),
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
    [anon_sym_if] = ACTIONS(354),
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
    [anon_sym_if] = ACTIONS(354),
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
    [anon_sym_if] = ACTIONS(354),
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
  [195] = {
    [sym__type] = STATE(201),
    [sym_type_send] = STATE(201),
    [sym_type_recv] = STATE(201),
    [sym_type_select] = STATE(201),
    [sym_type_choice] = STATE(201),
    [sym_type_end] = STATE(201),
    [sym_type_call] = STATE(201),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(282),
    [anon_sym_BANG] = ACTIONS(284),
    [aux_sym_end] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [196] = {
    [sym__type] = STATE(204),
    [sym_type_send] = STATE(204),
    [sym_type_recv] = STATE(204),
    [sym_type_select] = STATE(204),
    [sym_type_choice] = STATE(204),
    [sym_type_end] = STATE(204),
    [sym_type_call] = STATE(204),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(282),
    [anon_sym_BANG] = ACTIONS(284),
    [aux_sym_end] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [197] = {
    [sym__type] = STATE(229),
    [sym_type_send] = STATE(229),
    [sym_type_recv] = STATE(229),
    [sym_type_select] = STATE(229),
    [sym_type_choice] = STATE(229),
    [sym_type_end] = STATE(229),
    [sym_type_call] = STATE(229),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(583),
    [anon_sym_BANG] = ACTIONS(585),
    [aux_sym_end] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [198] = {
    [sym__type_of_label] = STATE(230),
    [sym_label] = ACTIONS(442),
    [sym_comment] = ACTIONS(9),
  },
  [199] = {
    [anon_sym_RPAREN] = ACTIONS(587),
    [anon_sym_DOT] = ACTIONS(587),
    [anon_sym_SEMI] = ACTIONS(587),
    [anon_sym_RBRACE] = ACTIONS(587),
    [sym_comment] = ACTIONS(9),
  },
  [200] = {
    [aux_sym_type_select_repeat1] = STATE(232),
    [anon_sym_SEMI] = ACTIONS(515),
    [anon_sym_RBRACE] = ACTIONS(589),
    [sym_comment] = ACTIONS(9),
  },
  [201] = {
    [anon_sym_RPAREN] = ACTIONS(591),
    [anon_sym_DOT] = ACTIONS(591),
    [anon_sym_SEMI] = ACTIONS(591),
    [anon_sym_RBRACE] = ACTIONS(591),
    [sym_comment] = ACTIONS(9),
  },
  [202] = {
    [anon_sym_RPAREN] = ACTIONS(593),
    [anon_sym_DOT] = ACTIONS(593),
    [anon_sym_SEMI] = ACTIONS(593),
    [anon_sym_RBRACE] = ACTIONS(593),
    [sym_comment] = ACTIONS(9),
  },
  [203] = {
    [aux_sym_type_select_repeat1] = STATE(232),
    [anon_sym_SEMI] = ACTIONS(515),
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
    [anon_sym_RPAREN] = ACTIONS(599),
    [anon_sym_COMMA] = ACTIONS(599),
    [sym_comment] = ACTIONS(9),
  },
  [206] = {
    [anon_sym_RPAREN] = ACTIONS(601),
    [anon_sym_DOT] = ACTIONS(601),
    [anon_sym_DASH_GT] = ACTIONS(601),
    [anon_sym_COMMA] = ACTIONS(601),
    [sym_comment] = ACTIONS(9),
  },
  [207] = {
    [aux_sym_pattern_tuple_repeat1] = STATE(207),
    [anon_sym_RPAREN] = ACTIONS(599),
    [anon_sym_COMMA] = ACTIONS(603),
    [sym_comment] = ACTIONS(9),
  },
  [208] = {
    [anon_sym_RPAREN] = ACTIONS(606),
    [anon_sym_COLON] = ACTIONS(608),
    [sym_comment] = ACTIONS(9),
  },
  [209] = {
    [anon_sym_PIPE] = ACTIONS(461),
    [anon_sym_SEMI] = ACTIONS(104),
    [anon_sym_RBRACE] = ACTIONS(104),
    [sym_comment] = ACTIONS(9),
  },
  [210] = {
    [anon_sym_DOT] = ACTIONS(610),
    [sym_comment] = ACTIONS(9),
  },
  [211] = {
    [anon_sym_DOT] = ACTIONS(612),
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
  [212] = {
    [sym__expr] = STATE(238),
    [sym_if_then_else] = STATE(238),
    [sym_tuple] = STATE(238),
    [sym_mul] = STATE(238),
    [sym_div] = STATE(238),
    [sym_add] = STATE(238),
    [sym_sub] = STATE(238),
    [sym_eq] = STATE(238),
    [sym_neq] = STATE(238),
    [sym_gt] = STATE(238),
    [sym_gte] = STATE(238),
    [sym_lt] = STATE(238),
    [sym_lte] = STATE(238),
    [sym__term] = STATE(238),
    [sym_boolean] = STATE(238),
    [sym_integer] = STATE(238),
    [sym_variable] = STATE(238),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(614),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(616),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [213] = {
    [anon_sym_RPAREN] = ACTIONS(618),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(618),
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
  [214] = {
    [anon_sym_RPAREN] = ACTIONS(620),
    [anon_sym_DOT] = ACTIONS(620),
    [anon_sym_STAR] = ACTIONS(620),
    [anon_sym_COMMA] = ACTIONS(620),
    [anon_sym_then] = ACTIONS(620),
    [anon_sym_else] = ACTIONS(620),
    [anon_sym_SLASH] = ACTIONS(622),
    [anon_sym_PLUS] = ACTIONS(620),
    [anon_sym_DASH] = ACTIONS(622),
    [anon_sym_EQ_EQ] = ACTIONS(620),
    [anon_sym_BANG_EQ] = ACTIONS(620),
    [anon_sym_GT] = ACTIONS(622),
    [anon_sym_GT_EQ] = ACTIONS(620),
    [anon_sym_LT] = ACTIONS(622),
    [anon_sym_LT_EQ] = ACTIONS(620),
    [sym_comment] = ACTIONS(9),
  },
  [215] = {
    [aux_sym_tuple_repeat1] = STATE(215),
    [anon_sym_RPAREN] = ACTIONS(618),
    [anon_sym_COMMA] = ACTIONS(624),
    [sym_comment] = ACTIONS(9),
  },
  [216] = {
    [sym__expr] = STATE(239),
    [sym_if_then_else] = STATE(239),
    [sym_tuple] = STATE(239),
    [sym_mul] = STATE(239),
    [sym_div] = STATE(239),
    [sym_add] = STATE(239),
    [sym_sub] = STATE(239),
    [sym_eq] = STATE(239),
    [sym_neq] = STATE(239),
    [sym_gt] = STATE(239),
    [sym_gte] = STATE(239),
    [sym_lt] = STATE(239),
    [sym_lte] = STATE(239),
    [sym__term] = STATE(239),
    [sym_boolean] = STATE(239),
    [sym_integer] = STATE(239),
    [sym_variable] = STATE(239),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(120),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(627),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(629),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [217] = {
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
    [anon_sym_if] = ACTIONS(354),
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
  [218] = {
    [anon_sym_DOT] = ACTIONS(635),
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
  [219] = {
    [anon_sym_STAR] = ACTIONS(485),
    [anon_sym_else] = ACTIONS(402),
    [anon_sym_SLASH] = ACTIONS(489),
    [anon_sym_PLUS] = ACTIONS(402),
    [anon_sym_DASH] = ACTIONS(404),
    [anon_sym_EQ_EQ] = ACTIONS(402),
    [anon_sym_BANG_EQ] = ACTIONS(402),
    [anon_sym_GT] = ACTIONS(404),
    [anon_sym_GT_EQ] = ACTIONS(402),
    [anon_sym_LT] = ACTIONS(404),
    [anon_sym_LT_EQ] = ACTIONS(402),
    [sym_comment] = ACTIONS(9),
  },
  [220] = {
    [anon_sym_STAR] = ACTIONS(485),
    [anon_sym_else] = ACTIONS(406),
    [anon_sym_SLASH] = ACTIONS(489),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_EQ_EQ] = ACTIONS(406),
    [anon_sym_BANG_EQ] = ACTIONS(406),
    [anon_sym_GT] = ACTIONS(408),
    [anon_sym_GT_EQ] = ACTIONS(406),
    [anon_sym_LT] = ACTIONS(408),
    [anon_sym_LT_EQ] = ACTIONS(406),
    [sym_comment] = ACTIONS(9),
  },
  [221] = {
    [anon_sym_STAR] = ACTIONS(485),
    [anon_sym_else] = ACTIONS(410),
    [anon_sym_SLASH] = ACTIONS(489),
    [anon_sym_PLUS] = ACTIONS(491),
    [anon_sym_DASH] = ACTIONS(493),
    [anon_sym_EQ_EQ] = ACTIONS(410),
    [anon_sym_BANG_EQ] = ACTIONS(410),
    [anon_sym_GT] = ACTIONS(412),
    [anon_sym_GT_EQ] = ACTIONS(410),
    [anon_sym_LT] = ACTIONS(412),
    [anon_sym_LT_EQ] = ACTIONS(410),
    [sym_comment] = ACTIONS(9),
  },
  [222] = {
    [anon_sym_STAR] = ACTIONS(485),
    [anon_sym_else] = ACTIONS(414),
    [anon_sym_SLASH] = ACTIONS(489),
    [anon_sym_PLUS] = ACTIONS(491),
    [anon_sym_DASH] = ACTIONS(493),
    [anon_sym_EQ_EQ] = ACTIONS(414),
    [anon_sym_BANG_EQ] = ACTIONS(414),
    [anon_sym_GT] = ACTIONS(416),
    [anon_sym_GT_EQ] = ACTIONS(414),
    [anon_sym_LT] = ACTIONS(416),
    [anon_sym_LT_EQ] = ACTIONS(414),
    [sym_comment] = ACTIONS(9),
  },
  [223] = {
    [anon_sym_STAR] = ACTIONS(485),
    [anon_sym_else] = ACTIONS(418),
    [anon_sym_SLASH] = ACTIONS(489),
    [anon_sym_PLUS] = ACTIONS(491),
    [anon_sym_DASH] = ACTIONS(493),
    [anon_sym_EQ_EQ] = ACTIONS(418),
    [anon_sym_BANG_EQ] = ACTIONS(418),
    [anon_sym_GT] = ACTIONS(420),
    [anon_sym_GT_EQ] = ACTIONS(418),
    [anon_sym_LT] = ACTIONS(420),
    [anon_sym_LT_EQ] = ACTIONS(418),
    [sym_comment] = ACTIONS(9),
  },
  [224] = {
    [anon_sym_STAR] = ACTIONS(485),
    [anon_sym_else] = ACTIONS(422),
    [anon_sym_SLASH] = ACTIONS(489),
    [anon_sym_PLUS] = ACTIONS(491),
    [anon_sym_DASH] = ACTIONS(493),
    [anon_sym_EQ_EQ] = ACTIONS(422),
    [anon_sym_BANG_EQ] = ACTIONS(422),
    [anon_sym_GT] = ACTIONS(424),
    [anon_sym_GT_EQ] = ACTIONS(422),
    [anon_sym_LT] = ACTIONS(424),
    [anon_sym_LT_EQ] = ACTIONS(422),
    [sym_comment] = ACTIONS(9),
  },
  [225] = {
    [anon_sym_STAR] = ACTIONS(485),
    [anon_sym_else] = ACTIONS(426),
    [anon_sym_SLASH] = ACTIONS(489),
    [anon_sym_PLUS] = ACTIONS(491),
    [anon_sym_DASH] = ACTIONS(493),
    [anon_sym_EQ_EQ] = ACTIONS(426),
    [anon_sym_BANG_EQ] = ACTIONS(426),
    [anon_sym_GT] = ACTIONS(428),
    [anon_sym_GT_EQ] = ACTIONS(426),
    [anon_sym_LT] = ACTIONS(428),
    [anon_sym_LT_EQ] = ACTIONS(426),
    [sym_comment] = ACTIONS(9),
  },
  [226] = {
    [anon_sym_STAR] = ACTIONS(485),
    [anon_sym_else] = ACTIONS(430),
    [anon_sym_SLASH] = ACTIONS(489),
    [anon_sym_PLUS] = ACTIONS(491),
    [anon_sym_DASH] = ACTIONS(493),
    [anon_sym_EQ_EQ] = ACTIONS(430),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_GT] = ACTIONS(432),
    [anon_sym_GT_EQ] = ACTIONS(430),
    [anon_sym_LT] = ACTIONS(432),
    [anon_sym_LT_EQ] = ACTIONS(430),
    [sym_comment] = ACTIONS(9),
  },
  [227] = {
    [sym__sort] = STATE(241),
    [sym__type] = STATE(241),
    [sym_type_send] = STATE(241),
    [sym_type_recv] = STATE(241),
    [sym_type_select] = STATE(241),
    [sym_type_choice] = STATE(241),
    [sym_type_end] = STATE(241),
    [sym_type_call] = STATE(241),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(282),
    [anon_sym_BANG] = ACTIONS(284),
    [aux_sym_end] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_sort_int] = ACTIONS(637),
    [sym_sort_bool] = ACTIONS(637),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [228] = {
    [sym__sort] = STATE(242),
    [sym__type] = STATE(242),
    [sym_type_send] = STATE(242),
    [sym_type_recv] = STATE(242),
    [sym_type_select] = STATE(242),
    [sym_type_choice] = STATE(242),
    [sym_type_end] = STATE(242),
    [sym_type_call] = STATE(242),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(282),
    [anon_sym_BANG] = ACTIONS(284),
    [aux_sym_end] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(290),
    [sym_sort_int] = ACTIONS(639),
    [sym_sort_bool] = ACTIONS(639),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [229] = {
    [anon_sym_SEMI] = ACTIONS(641),
    [anon_sym_RBRACE] = ACTIONS(641),
    [sym_comment] = ACTIONS(9),
  },
  [230] = {
    [anon_sym_SEMI] = ACTIONS(643),
    [anon_sym_RBRACE] = ACTIONS(643),
    [sym_comment] = ACTIONS(9),
  },
  [231] = {
    [anon_sym_RPAREN] = ACTIONS(645),
    [anon_sym_DOT] = ACTIONS(645),
    [anon_sym_SEMI] = ACTIONS(645),
    [anon_sym_RBRACE] = ACTIONS(645),
    [sym_comment] = ACTIONS(9),
  },
  [232] = {
    [aux_sym_type_select_repeat1] = STATE(232),
    [anon_sym_SEMI] = ACTIONS(647),
    [anon_sym_RBRACE] = ACTIONS(643),
    [sym_comment] = ACTIONS(9),
  },
  [233] = {
    [anon_sym_RPAREN] = ACTIONS(650),
    [anon_sym_DOT] = ACTIONS(650),
    [anon_sym_SEMI] = ACTIONS(650),
    [anon_sym_RBRACE] = ACTIONS(650),
    [sym_comment] = ACTIONS(9),
  },
  [234] = {
    [sym__proc] = STATE(72),
    [sym_par] = STATE(72),
    [sym_nu] = STATE(72),
    [sym_recv] = STATE(72),
    [sym_send] = STATE(72),
    [sym_end] = STATE(72),
    [sym_call] = STATE(72),
    [sym_repl] = STATE(72),
    [sym__name] = STATE(139),
    [sym_reserved_name] = STATE(139),
    [sym_polarized_name] = STATE(139),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(304),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(306),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [235] = {
    [sym__type] = STATE(243),
    [sym_type_send] = STATE(243),
    [sym_type_recv] = STATE(243),
    [sym_type_select] = STATE(243),
    [sym_type_choice] = STATE(243),
    [sym_type_end] = STATE(243),
    [sym_type_call] = STATE(243),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(166),
    [anon_sym_BANG] = ACTIONS(168),
    [aux_sym_end] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [236] = {
    [sym__proc] = STATE(86),
    [sym_par] = STATE(86),
    [sym_nu] = STATE(86),
    [sym_recv] = STATE(86),
    [sym_send] = STATE(86),
    [sym_end] = STATE(86),
    [sym_call] = STATE(86),
    [sym_repl] = STATE(86),
    [sym__name] = STATE(139),
    [sym_reserved_name] = STATE(139),
    [sym_polarized_name] = STATE(139),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(304),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(306),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [237] = {
    [sym__proc] = STATE(112),
    [sym_par] = STATE(112),
    [sym_nu] = STATE(112),
    [sym_recv] = STATE(112),
    [sym_send] = STATE(112),
    [sym_end] = STATE(112),
    [sym_call] = STATE(112),
    [sym_repl] = STATE(112),
    [sym__name] = STATE(139),
    [sym_reserved_name] = STATE(139),
    [sym_polarized_name] = STATE(139),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(304),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(306),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [238] = {
    [anon_sym_RPAREN] = ACTIONS(635),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(635),
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
  [239] = {
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(635),
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
  [240] = {
    [anon_sym_STAR] = ACTIONS(485),
    [anon_sym_else] = ACTIONS(652),
    [anon_sym_SLASH] = ACTIONS(489),
    [anon_sym_PLUS] = ACTIONS(491),
    [anon_sym_DASH] = ACTIONS(493),
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [anon_sym_BANG_EQ] = ACTIONS(497),
    [anon_sym_GT] = ACTIONS(499),
    [anon_sym_GT_EQ] = ACTIONS(501),
    [anon_sym_LT] = ACTIONS(503),
    [anon_sym_LT_EQ] = ACTIONS(505),
    [sym_comment] = ACTIONS(9),
  },
  [241] = {
    [anon_sym_DOT] = ACTIONS(654),
    [sym_comment] = ACTIONS(9),
  },
  [242] = {
    [anon_sym_DOT] = ACTIONS(656),
    [sym_comment] = ACTIONS(9),
  },
  [243] = {
    [anon_sym_RPAREN] = ACTIONS(658),
    [sym_comment] = ACTIONS(9),
  },
  [244] = {
    [sym__expr] = STATE(248),
    [sym_if_then_else] = STATE(248),
    [sym_tuple] = STATE(248),
    [sym_mul] = STATE(248),
    [sym_div] = STATE(248),
    [sym_add] = STATE(248),
    [sym_sub] = STATE(248),
    [sym_eq] = STATE(248),
    [sym_neq] = STATE(248),
    [sym_gt] = STATE(248),
    [sym_gte] = STATE(248),
    [sym_lt] = STATE(248),
    [sym_lte] = STATE(248),
    [sym__term] = STATE(248),
    [sym_boolean] = STATE(248),
    [sym_integer] = STATE(248),
    [sym_variable] = STATE(248),
    [sym__name] = STATE(44),
    [sym_reserved_name] = STATE(44),
    [sym_polarized_name] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(354),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_False] = ACTIONS(84),
    [sym_string] = ACTIONS(660),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(88),
    [sym_label] = ACTIONS(662),
    [sym__digit] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [245] = {
    [sym__type] = STATE(201),
    [sym_type_send] = STATE(201),
    [sym_type_recv] = STATE(201),
    [sym_type_select] = STATE(201),
    [sym_type_choice] = STATE(201),
    [sym_type_end] = STATE(201),
    [sym_type_call] = STATE(201),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(583),
    [anon_sym_BANG] = ACTIONS(585),
    [aux_sym_end] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [246] = {
    [sym__type] = STATE(204),
    [sym_type_send] = STATE(204),
    [sym_type_recv] = STATE(204),
    [sym_type_select] = STATE(204),
    [sym_type_choice] = STATE(204),
    [sym_type_end] = STATE(204),
    [sym_type_call] = STATE(204),
    [sym_simple_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(583),
    [anon_sym_BANG] = ACTIONS(585),
    [aux_sym_end] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(9),
  },
  [247] = {
    [sym__proc] = STATE(170),
    [sym_par] = STATE(170),
    [sym_nu] = STATE(170),
    [sym_recv] = STATE(170),
    [sym_send] = STATE(170),
    [sym_end] = STATE(170),
    [sym_call] = STATE(170),
    [sym_repl] = STATE(170),
    [sym__name] = STATE(139),
    [sym_reserved_name] = STATE(139),
    [sym_polarized_name] = STATE(139),
    [sym_simple_name] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(304),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(306),
    [anon_sym_stdin] = ACTIONS(25),
    [anon_sym_stdout] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
  },
  [248] = {
    [anon_sym_STAR] = ACTIONS(485),
    [anon_sym_else] = ACTIONS(635),
    [anon_sym_SLASH] = ACTIONS(489),
    [anon_sym_PLUS] = ACTIONS(491),
    [anon_sym_DASH] = ACTIONS(493),
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [anon_sym_BANG_EQ] = ACTIONS(497),
    [anon_sym_GT] = ACTIONS(499),
    [anon_sym_GT_EQ] = ACTIONS(501),
    [anon_sym_LT] = ACTIONS(503),
    [anon_sym_LT_EQ] = ACTIONS(505),
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
  [168] = {.count = 1, .reusable = true}, SHIFT(75),
  [170] = {.count = 1, .reusable = false}, SHIFT(76),
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
  [240] = {.count = 1, .reusable = true}, SHIFT(113),
  [242] = {.count = 1, .reusable = false}, SHIFT(113),
  [244] = {.count = 1, .reusable = true}, SHIFT(114),
  [246] = {.count = 1, .reusable = false}, SHIFT(114),
  [248] = {.count = 1, .reusable = true}, SHIFT(115),
  [250] = {.count = 1, .reusable = false}, SHIFT(115),
  [252] = {.count = 1, .reusable = true}, SHIFT(116),
  [254] = {.count = 1, .reusable = false}, SHIFT(116),
  [256] = {.count = 1, .reusable = true}, SHIFT(117),
  [258] = {.count = 1, .reusable = false}, SHIFT(117),
  [260] = {.count = 1, .reusable = true}, SHIFT(118),
  [262] = {.count = 1, .reusable = false}, SHIFT(118),
  [264] = {.count = 1, .reusable = true}, SHIFT(119),
  [266] = {.count = 1, .reusable = false}, SHIFT(119),
  [268] = {.count = 1, .reusable = true}, SHIFT(120),
  [270] = {.count = 1, .reusable = false}, SHIFT(120),
  [272] = {.count = 1, .reusable = true}, SHIFT(121),
  [274] = {.count = 1, .reusable = false}, SHIFT(121),
  [276] = {.count = 1, .reusable = true}, SHIFT(122),
  [278] = {.count = 1, .reusable = false}, SHIFT(122),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_nu, 5, .alias_sequence_id = 3),
  [282] = {.count = 1, .reusable = true}, SHIFT(125),
  [284] = {.count = 1, .reusable = true}, SHIFT(126),
  [286] = {.count = 1, .reusable = true}, SHIFT(127),
  [288] = {.count = 1, .reusable = true}, SHIFT(128),
  [290] = {.count = 1, .reusable = true}, SHIFT(129),
  [292] = {.count = 1, .reusable = true}, SHIFT(130),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_type_end, 1),
  [296] = {.count = 1, .reusable = true}, SHIFT(131),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_type_call, 1, .alias_sequence_id = 1),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym__complex_clauses, 3),
  [302] = {.count = 1, .reusable = true}, SHIFT(134),
  [304] = {.count = 1, .reusable = true}, SHIFT(136),
  [306] = {.count = 1, .reusable = true}, SHIFT(137),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_simple_clause, 3),
  [310] = {.count = 1, .reusable = true}, SHIFT(140),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 3),
  [314] = {.count = 1, .reusable = false}, REDUCE(sym__expr, 3),
  [316] = {.count = 1, .reusable = true}, SHIFT(141),
  [318] = {.count = 1, .reusable = false}, SHIFT(141),
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
  [354] = {.count = 1, .reusable = false}, SHIFT(151),
  [356] = {.count = 1, .reusable = true}, SHIFT(152),
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
  [392] = {.count = 1, .reusable = true}, REDUCE(sym_send, 5),
  [394] = {.count = 1, .reusable = true}, REDUCE(sym_mul, 3),
  [396] = {.count = 1, .reusable = false}, REDUCE(sym_mul, 3),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_div, 3),
  [400] = {.count = 1, .reusable = false}, REDUCE(sym_div, 3),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [404] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_sub, 3),
  [408] = {.count = 1, .reusable = false}, REDUCE(sym_sub, 3),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_eq, 3),
  [412] = {.count = 1, .reusable = false}, REDUCE(sym_eq, 3),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_neq, 3),
  [416] = {.count = 1, .reusable = false}, REDUCE(sym_neq, 3),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_gt, 3),
  [420] = {.count = 1, .reusable = false}, REDUCE(sym_gt, 3),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_gte, 3),
  [424] = {.count = 1, .reusable = false}, REDUCE(sym_gte, 3),
  [426] = {.count = 1, .reusable = true}, REDUCE(sym_lt, 3),
  [428] = {.count = 1, .reusable = false}, REDUCE(sym_lt, 3),
  [430] = {.count = 1, .reusable = true}, REDUCE(sym_lte, 3),
  [432] = {.count = 1, .reusable = false}, REDUCE(sym_lte, 3),
  [434] = {.count = 1, .reusable = true}, SHIFT(161),
  [436] = {.count = 1, .reusable = true}, SHIFT(162),
  [438] = {.count = 1, .reusable = true}, SHIFT(163),
  [440] = {.count = 1, .reusable = true}, SHIFT(164),
  [442] = {.count = 1, .reusable = true}, SHIFT(165),
  [444] = {.count = 1, .reusable = true}, SHIFT(167),
  [446] = {.count = 1, .reusable = true}, SHIFT(169),
  [448] = {.count = 1, .reusable = true}, SHIFT(171),
  [450] = {.count = 1, .reusable = true}, SHIFT(172),
  [452] = {.count = 1, .reusable = true}, REDUCE(aux_sym__complex_clauses_repeat1, 2),
  [454] = {.count = 1, .reusable = true}, REDUCE(sym__complex_clauses, 4),
  [456] = {.count = 2, .reusable = true}, REDUCE(aux_sym__complex_clauses_repeat1, 2), SHIFT_REPEAT(82),
  [459] = {.count = 1, .reusable = false}, SHIFT(174),
  [461] = {.count = 1, .reusable = true}, SHIFT(175),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_complex_clause, 3),
  [465] = {.count = 1, .reusable = true}, SHIFT(176),
  [467] = {.count = 1, .reusable = true}, SHIFT(177),
  [469] = {.count = 1, .reusable = true}, SHIFT(178),
  [471] = {.count = 1, .reusable = false}, SHIFT(178),
  [473] = {.count = 1, .reusable = true}, SHIFT(179),
  [475] = {.count = 1, .reusable = true}, SHIFT(180),
  [477] = {.count = 1, .reusable = true}, SHIFT(182),
  [479] = {.count = 1, .reusable = false}, SHIFT(182),
  [481] = {.count = 1, .reusable = true}, SHIFT(183),
  [483] = {.count = 1, .reusable = false}, SHIFT(183),
  [485] = {.count = 1, .reusable = true}, SHIFT(184),
  [487] = {.count = 1, .reusable = true}, SHIFT(185),
  [489] = {.count = 1, .reusable = false}, SHIFT(186),
  [491] = {.count = 1, .reusable = true}, SHIFT(187),
  [493] = {.count = 1, .reusable = false}, SHIFT(188),
  [495] = {.count = 1, .reusable = true}, SHIFT(189),
  [497] = {.count = 1, .reusable = true}, SHIFT(190),
  [499] = {.count = 1, .reusable = false}, SHIFT(191),
  [501] = {.count = 1, .reusable = true}, SHIFT(192),
  [503] = {.count = 1, .reusable = false}, SHIFT(193),
  [505] = {.count = 1, .reusable = true}, SHIFT(194),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym__type, 3),
  [509] = {.count = 1, .reusable = true}, SHIFT(195),
  [511] = {.count = 1, .reusable = true}, SHIFT(196),
  [513] = {.count = 1, .reusable = true}, SHIFT(197),
  [515] = {.count = 1, .reusable = true}, SHIFT(198),
  [517] = {.count = 1, .reusable = true}, SHIFT(199),
  [519] = {.count = 1, .reusable = true}, SHIFT(202),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym_nu, 7, .alias_sequence_id = 3),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_tuple, 5),
  [525] = {.count = 1, .reusable = true}, SHIFT(206),
  [527] = {.count = 1, .reusable = true}, SHIFT(211),
  [529] = {.count = 1, .reusable = false}, SHIFT(211),
  [531] = {.count = 1, .reusable = true}, SHIFT(212),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 5),
  [535] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 5),
  [537] = {.count = 1, .reusable = true}, SHIFT(213),
  [539] = {.count = 1, .reusable = false}, SHIFT(213),
  [541] = {.count = 1, .reusable = true}, SHIFT(214),
  [543] = {.count = 1, .reusable = true}, SHIFT(216),
  [545] = {.count = 1, .reusable = true}, SHIFT(217),
  [547] = {.count = 1, .reusable = true}, SHIFT(218),
  [549] = {.count = 1, .reusable = false}, SHIFT(218),
  [551] = {.count = 1, .reusable = true}, SHIFT(219),
  [553] = {.count = 1, .reusable = false}, SHIFT(219),
  [555] = {.count = 1, .reusable = true}, SHIFT(220),
  [557] = {.count = 1, .reusable = false}, SHIFT(220),
  [559] = {.count = 1, .reusable = true}, SHIFT(221),
  [561] = {.count = 1, .reusable = false}, SHIFT(221),
  [563] = {.count = 1, .reusable = true}, SHIFT(222),
  [565] = {.count = 1, .reusable = false}, SHIFT(222),
  [567] = {.count = 1, .reusable = true}, SHIFT(223),
  [569] = {.count = 1, .reusable = false}, SHIFT(223),
  [571] = {.count = 1, .reusable = true}, SHIFT(224),
  [573] = {.count = 1, .reusable = false}, SHIFT(224),
  [575] = {.count = 1, .reusable = true}, SHIFT(225),
  [577] = {.count = 1, .reusable = false}, SHIFT(225),
  [579] = {.count = 1, .reusable = true}, SHIFT(226),
  [581] = {.count = 1, .reusable = false}, SHIFT(226),
  [583] = {.count = 1, .reusable = true}, SHIFT(227),
  [585] = {.count = 1, .reusable = true}, SHIFT(228),
  [587] = {.count = 1, .reusable = true}, REDUCE(sym_type_choice, 4),
  [589] = {.count = 1, .reusable = true}, SHIFT(231),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym_type_recv, 4),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_type_select, 4),
  [595] = {.count = 1, .reusable = true}, SHIFT(233),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym_type_send, 4),
  [599] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pattern_tuple_repeat1, 2),
  [601] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_tuple, 6),
  [603] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_tuple_repeat1, 2), SHIFT_REPEAT(172),
  [606] = {.count = 1, .reusable = true}, SHIFT(234),
  [608] = {.count = 1, .reusable = true}, SHIFT(235),
  [610] = {.count = 1, .reusable = true}, SHIFT(236),
  [612] = {.count = 1, .reusable = true}, SHIFT(237),
  [614] = {.count = 1, .reusable = true}, SHIFT(238),
  [616] = {.count = 1, .reusable = false}, SHIFT(238),
  [618] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [620] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 6),
  [622] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 6),
  [624] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(180),
  [627] = {.count = 1, .reusable = true}, SHIFT(239),
  [629] = {.count = 1, .reusable = false}, SHIFT(239),
  [631] = {.count = 1, .reusable = true}, SHIFT(240),
  [633] = {.count = 1, .reusable = false}, SHIFT(240),
  [635] = {.count = 1, .reusable = true}, REDUCE(sym_if_then_else, 6),
  [637] = {.count = 1, .reusable = true}, SHIFT(241),
  [639] = {.count = 1, .reusable = true}, SHIFT(242),
  [641] = {.count = 1, .reusable = true}, REDUCE(sym__type_of_label, 3),
  [643] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_select_repeat1, 2),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym_type_choice, 5),
  [647] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_select_repeat1, 2), SHIFT_REPEAT(198),
  [650] = {.count = 1, .reusable = true}, REDUCE(sym_type_select, 5),
  [652] = {.count = 1, .reusable = true}, SHIFT(244),
  [654] = {.count = 1, .reusable = true}, SHIFT(245),
  [656] = {.count = 1, .reusable = true}, SHIFT(246),
  [658] = {.count = 1, .reusable = true}, SHIFT(247),
  [660] = {.count = 1, .reusable = true}, SHIFT(248),
  [662] = {.count = 1, .reusable = false}, SHIFT(248),
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
