#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 152
#define SYMBOL_COUNT 73
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
  anon_sym_LT = 15,
  anon_sym_COMMA = 16,
  anon_sym_GT = 17,
  anon_sym_STAR = 18,
  anon_sym_SLASH = 19,
  anon_sym_PLUS = 20,
  anon_sym_DASH = 21,
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
  sym__name = 64,
  sym_reserved_name = 65,
  sym_polarized_name = 66,
  sym_simple_name = 67,
  aux_sym_program_repeat1 = 68,
  aux_sym__complex_clauses_repeat1 = 69,
  aux_sym_pattern_tuple_repeat1 = 70,
  aux_sym_tuple_repeat1 = 71,
  aux_sym_type_select_repeat1 = 72,
  alias_sym_name = 73,
  alias_sym_process_name = 74,
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
        ADVANCE(25);
      if (lookahead == '\\')
        SKIP(28);
      if (lookahead == '`')
        ADVANCE(29);
      if (lookahead == 'e')
        ADVANCE(31);
      if (lookahead == 'n')
        ADVANCE(35);
      if (lookahead == 's')
        ADVANCE(37);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '|')
        ADVANCE(46);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(24);
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
      if (lookahead == 'o')
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'o')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'l')
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_sort_bool);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'n')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 't')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_sort_int);
      END_STATE();
    case 28:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 29:
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(32);
      if (lookahead == 'n')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(32);
      if (lookahead == 'd')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_end);
      if (lookahead == '\'')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(32);
      if (lookahead == 'u')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_nu);
      if (lookahead == '\'')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(32);
      if (lookahead == 't')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(32);
      if (lookahead == 'd')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(32);
      if (lookahead == 'i')
        ADVANCE(40);
      if (lookahead == 'o')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(32);
      if (lookahead == 'n')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_stdin);
      if (lookahead == '\'')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(32);
      if (lookahead == 'u')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(32);
      if (lookahead == 't')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_stdout);
      if (lookahead == '\'')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 48:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(49);
      if (lookahead == '/')
        ADVANCE(50);
      if (lookahead == '\\')
        SKIP(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(48);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 49:
      if (lookahead == '-')
        ADVANCE(9);
      END_STATE();
    case 50:
      if (lookahead == '/')
        ADVANCE(13);
      END_STATE();
    case 51:
      if (lookahead == 'n')
        SKIP(48);
      END_STATE();
    case 52:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(53);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(50);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '\\')
        SKIP(54);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(52);
      END_STATE();
    case 53:
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == '>')
        ADVANCE(10);
      END_STATE();
    case 54:
      if (lookahead == 'n')
        SKIP(52);
      END_STATE();
    case 55:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(49);
      if (lookahead == '/')
        ADVANCE(50);
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
      if (lookahead == '-')
        ADVANCE(49);
      if (lookahead == '/')
        ADVANCE(50);
      if (lookahead == '=')
        ADVANCE(17);
      if (lookahead == '\\')
        SKIP(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(57);
      END_STATE();
    case 58:
      if (lookahead == 'n')
        SKIP(57);
      END_STATE();
    case 59:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(49);
      if (lookahead == '/')
        ADVANCE(50);
      if (lookahead == '\\')
        SKIP(60);
      if (lookahead == '`')
        ADVANCE(29);
      if (lookahead == 'e')
        ADVANCE(31);
      if (lookahead == 's')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(59);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 60:
      if (lookahead == 'n')
        SKIP(59);
      END_STATE();
    case 61:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(49);
      if (lookahead == '/')
        ADVANCE(50);
      if (lookahead == '\\')
        SKIP(62);
      if (lookahead == '`')
        ADVANCE(29);
      if (lookahead == 'e')
        ADVANCE(31);
      if (lookahead == 'n')
        ADVANCE(35);
      if (lookahead == 's')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(61);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 62:
      if (lookahead == 'n')
        SKIP(61);
      END_STATE();
    case 63:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(49);
      if (lookahead == '/')
        ADVANCE(50);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(64);
      if (lookahead == '|')
        ADVANCE(46);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(63);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
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
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(49);
      if (lookahead == '/')
        ADVANCE(50);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '?')
        ADVANCE(19);
      if (lookahead == '\\')
        SKIP(69);
      if (lookahead == '|')
        ADVANCE(46);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(68);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 69:
      if (lookahead == 'n')
        SKIP(68);
      END_STATE();
    case 70:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(49);
      if (lookahead == '/')
        ADVANCE(50);
      if (lookahead == '\\')
        SKIP(71);
      if (lookahead == '|')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(70);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 71:
      if (lookahead == 'n')
        SKIP(70);
      END_STATE();
    case 72:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(49);
      if (lookahead == '/')
        ADVANCE(50);
      if (lookahead == '\\')
        SKIP(73);
      if (lookahead == '|')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(72);
      END_STATE();
    case 73:
      if (lookahead == 'n')
        SKIP(72);
      END_STATE();
    case 74:
      if (lookahead == '-')
        ADVANCE(49);
      if (lookahead == '/')
        ADVANCE(50);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(75);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(74);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 75:
      if (lookahead == 'n')
        SKIP(74);
      END_STATE();
    case 76:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(77);
      if (lookahead == '/')
        ADVANCE(50);
      if (lookahead == '<')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(79);
      if (lookahead == '`')
        ADVANCE(29);
      if (lookahead == 's')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(76);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(78);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(24);
      END_STATE();
    case 77:
      if (lookahead == '-')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead == 'n')
        SKIP(76);
      END_STATE();
    case 80:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(49);
      if (lookahead == '/')
        ADVANCE(50);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == '\\')
        SKIP(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(80);
      END_STATE();
    case 81:
      if (lookahead == 'n')
        SKIP(80);
      END_STATE();
    case 82:
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(53);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(50);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '\\')
        SKIP(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(82);
      END_STATE();
    case 83:
      if (lookahead == 'n')
        SKIP(82);
      END_STATE();
    case 84:
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
        SKIP(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(84);
      END_STATE();
    case 85:
      if (lookahead == 'n')
        SKIP(84);
      END_STATE();
    case 86:
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
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(49);
      if (lookahead == '/')
        ADVANCE(50);
      if (lookahead == '?')
        ADVANCE(19);
      if (lookahead == 'B')
        ADVANCE(89);
      if (lookahead == 'I')
        ADVANCE(90);
      if (lookahead == '\\')
        SKIP(91);
      if (lookahead == 'e')
        ADVANCE(31);
      if (lookahead == '{')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 89:
      if (lookahead == 'o')
        ADVANCE(21);
      END_STATE();
    case 90:
      if (lookahead == 'n')
        ADVANCE(26);
      END_STATE();
    case 91:
      if (lookahead == 'n')
        SKIP(88);
      END_STATE();
    case 92:
      if (lookahead == '-')
        ADVANCE(49);
      if (lookahead == '/')
        ADVANCE(50);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(93);
      if (lookahead == '|')
        ADVANCE(46);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(92);
      END_STATE();
    case 93:
      if (lookahead == 'n')
        SKIP(92);
      END_STATE();
    case 94:
      if (lookahead == '-')
        ADVANCE(53);
      if (lookahead == '/')
        ADVANCE(50);
      if (lookahead == '\\')
        SKIP(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(94);
      END_STATE();
    case 95:
      if (lookahead == 'n')
        SKIP(94);
      END_STATE();
    case 96:
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
        SKIP(97);
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
      if (lookahead == '-')
        ADVANCE(49);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(50);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(101);
      if (lookahead == '}')
        ADVANCE(47);
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
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 52},
  [3] = {.lex_state = 55},
  [4] = {.lex_state = 57},
  [5] = {.lex_state = 48},
  [6] = {.lex_state = 59},
  [7] = {.lex_state = 48},
  [8] = {.lex_state = 61},
  [9] = {.lex_state = 63},
  [10] = {.lex_state = 65},
  [11] = {.lex_state = 65},
  [12] = {.lex_state = 68},
  [13] = {.lex_state = 70},
  [14] = {.lex_state = 68},
  [15] = {.lex_state = 63},
  [16] = {.lex_state = 61},
  [17] = {.lex_state = 48},
  [18] = {.lex_state = 72},
  [19] = {.lex_state = 68},
  [20] = {.lex_state = 59},
  [21] = {.lex_state = 74},
  [22] = {.lex_state = 76},
  [23] = {.lex_state = 48},
  [24] = {.lex_state = 80},
  [25] = {.lex_state = 63},
  [26] = {.lex_state = 59},
  [27] = {.lex_state = 74},
  [28] = {.lex_state = 76},
  [29] = {.lex_state = 70},
  [30] = {.lex_state = 74},
  [31] = {.lex_state = 74},
  [32] = {.lex_state = 82},
  [33] = {.lex_state = 63},
  [34] = {.lex_state = 84},
  [35] = {.lex_state = 82},
  [36] = {.lex_state = 76},
  [37] = {.lex_state = 76},
  [38] = {.lex_state = 86},
  [39] = {.lex_state = 84},
  [40] = {.lex_state = 86},
  [41] = {.lex_state = 80},
  [42] = {.lex_state = 59},
  [43] = {.lex_state = 88},
  [44] = {.lex_state = 72},
  [45] = {.lex_state = 84},
  [46] = {.lex_state = 84},
  [47] = {.lex_state = 92},
  [48] = {.lex_state = 94},
  [49] = {.lex_state = 96},
  [50] = {.lex_state = 59},
  [51] = {.lex_state = 98},
  [52] = {.lex_state = 96},
  [53] = {.lex_state = 59},
  [54] = {.lex_state = 76},
  [55] = {.lex_state = 76},
  [56] = {.lex_state = 76},
  [57] = {.lex_state = 76},
  [58] = {.lex_state = 59},
  [59] = {.lex_state = 88},
  [60] = {.lex_state = 63},
  [61] = {.lex_state = 88},
  [62] = {.lex_state = 88},
  [63] = {.lex_state = 88},
  [64] = {.lex_state = 100},
  [65] = {.lex_state = 72},
  [66] = {.lex_state = 100},
  [67] = {.lex_state = 59},
  [68] = {.lex_state = 59},
  [69] = {.lex_state = 74},
  [70] = {.lex_state = 63},
  [71] = {.lex_state = 92},
  [72] = {.lex_state = 59},
  [73] = {.lex_state = 74},
  [74] = {.lex_state = 82},
  [75] = {.lex_state = 96},
  [76] = {.lex_state = 63},
  [77] = {.lex_state = 86},
  [78] = {.lex_state = 76},
  [79] = {.lex_state = 86},
  [80] = {.lex_state = 96},
  [81] = {.lex_state = 63},
  [82] = {.lex_state = 86},
  [83] = {.lex_state = 86},
  [84] = {.lex_state = 86},
  [85] = {.lex_state = 86},
  [86] = {.lex_state = 72},
  [87] = {.lex_state = 72},
  [88] = {.lex_state = 88},
  [89] = {.lex_state = 88},
  [90] = {.lex_state = 74},
  [91] = {.lex_state = 84},
  [92] = {.lex_state = 74},
  [93] = {.lex_state = 84},
  [94] = {.lex_state = 59},
  [95] = {.lex_state = 92},
  [96] = {.lex_state = 63},
  [97] = {.lex_state = 92},
  [98] = {.lex_state = 61},
  [99] = {.lex_state = 92},
  [100] = {.lex_state = 68},
  [101] = {.lex_state = 96},
  [102] = {.lex_state = 82},
  [103] = {.lex_state = 96},
  [104] = {.lex_state = 96},
  [105] = {.lex_state = 86},
  [106] = {.lex_state = 96},
  [107] = {.lex_state = 59},
  [108] = {.lex_state = 100},
  [109] = {.lex_state = 84},
  [110] = {.lex_state = 84},
  [111] = {.lex_state = 80},
  [112] = {.lex_state = 92},
  [113] = {.lex_state = 88},
  [114] = {.lex_state = 92},
  [115] = {.lex_state = 88},
  [116] = {.lex_state = 63},
  [117] = {.lex_state = 48},
  [118] = {.lex_state = 59},
  [119] = {.lex_state = 74},
  [120] = {.lex_state = 76},
  [121] = {.lex_state = 88},
  [122] = {.lex_state = 88},
  [123] = {.lex_state = 88},
  [124] = {.lex_state = 74},
  [125] = {.lex_state = 100},
  [126] = {.lex_state = 92},
  [127] = {.lex_state = 100},
  [128] = {.lex_state = 100},
  [129] = {.lex_state = 92},
  [130] = {.lex_state = 100},
  [131] = {.lex_state = 80},
  [132] = {.lex_state = 92},
  [133] = {.lex_state = 84},
  [134] = {.lex_state = 84},
  [135] = {.lex_state = 88},
  [136] = {.lex_state = 88},
  [137] = {.lex_state = 92},
  [138] = {.lex_state = 92},
  [139] = {.lex_state = 100},
  [140] = {.lex_state = 92},
  [141] = {.lex_state = 100},
  [142] = {.lex_state = 59},
  [143] = {.lex_state = 88},
  [144] = {.lex_state = 59},
  [145] = {.lex_state = 59},
  [146] = {.lex_state = 84},
  [147] = {.lex_state = 84},
  [148] = {.lex_state = 72},
  [149] = {.lex_state = 88},
  [150] = {.lex_state = 88},
  [151] = {.lex_state = 59},
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
    [anon_sym_GT] = ACTIONS(11),
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
    [anon_sym_GT] = ACTIONS(40),
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
    [anon_sym_GT] = ACTIONS(44),
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
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LT] = ACTIONS(70),
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
    [sym_integer] = STATE(39),
    [sym_variable] = STATE(39),
    [sym__name] = STATE(40),
    [sym_reserved_name] = STATE(40),
    [sym_polarized_name] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LT] = ACTIONS(76),
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
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LT] = ACTIONS(70),
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
    [sym_integer] = STATE(46),
    [sym_variable] = STATE(46),
    [sym__name] = STATE(40),
    [sym_reserved_name] = STATE(40),
    [sym_polarized_name] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LT] = ACTIONS(76),
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
    [sym_complex_clause] = STATE(47),
    [sym_pattern] = STATE(48),
    [sym_pattern_tuple] = STATE(32),
    [sym_simple_name] = STATE(35),
    [anon_sym_LT] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
  },
  [31] = {
    [sym_pattern] = STATE(49),
    [sym_pattern_tuple] = STATE(32),
    [sym_simple_name] = STATE(35),
    [anon_sym_LT] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(72),
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
    [anon_sym_DOT] = ACTIONS(100),
    [anon_sym_DASH_GT] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(100),
    [anon_sym_GT] = ACTIONS(100),
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
    [sym__name] = STATE(40),
    [sym_reserved_name] = STATE(40),
    [sym_polarized_name] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(78),
    [sym_label] = ACTIONS(102),
    [sym__digit] = ACTIONS(82),
    [sym_comment] = ACTIONS(9),
  },
  [37] = {
    [sym__expr] = STATE(52),
    [sym_tuple] = STATE(52),
    [sym_mul] = STATE(52),
    [sym_div] = STATE(52),
    [sym_add] = STATE(52),
    [sym_sub] = STATE(52),
    [sym__term] = STATE(52),
    [sym_integer] = STATE(52),
    [sym_variable] = STATE(52),
    [sym__name] = STATE(40),
    [sym_reserved_name] = STATE(40),
    [sym_polarized_name] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(78),
    [sym_label] = ACTIONS(104),
    [sym__digit] = ACTIONS(82),
    [sym_comment] = ACTIONS(9),
  },
  [38] = {
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_DOT] = ACTIONS(106),
    [anon_sym_COMMA] = ACTIONS(106),
    [anon_sym_GT] = ACTIONS(106),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(108),
    [sym_comment] = ACTIONS(9),
  },
  [39] = {
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(118),
    [sym_comment] = ACTIONS(9),
  },
  [40] = {
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [sym_comment] = ACTIONS(9),
  },
  [41] = {
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(126),
    [sym_comment] = ACTIONS(9),
  },
  [42] = {
    [sym__proc] = STATE(60),
    [sym_par] = STATE(60),
    [sym_nu] = STATE(60),
    [sym_recv] = STATE(60),
    [sym_send] = STATE(60),
    [sym_end] = STATE(60),
    [sym_call] = STATE(60),
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
    [sym__type] = STATE(65),
    [sym_type_send] = STATE(65),
    [sym_type_recv] = STATE(65),
    [sym_type_select] = STATE(65),
    [sym_type_choice] = STATE(65),
    [sym_type_end] = STATE(65),
    [sym_type_call] = STATE(65),
    [sym_simple_name] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(130),
    [anon_sym_BANG] = ACTIONS(132),
    [aux_sym_end] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(9),
  },
  [44] = {
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(62),
    [sym_comment] = ACTIONS(9),
  },
  [45] = {
    [anon_sym_DOT] = ACTIONS(138),
    [sym_comment] = ACTIONS(9),
  },
  [46] = {
    [anon_sym_DOT] = ACTIONS(140),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(118),
    [sym_comment] = ACTIONS(9),
  },
  [47] = {
    [aux_sym__complex_clauses_repeat1] = STATE(71),
    [anon_sym_SEMI] = ACTIONS(142),
    [anon_sym_RBRACE] = ACTIONS(144),
    [sym_comment] = ACTIONS(9),
  },
  [48] = {
    [anon_sym_DASH_GT] = ACTIONS(146),
    [sym_comment] = ACTIONS(9),
  },
  [49] = {
    [aux_sym_pattern_tuple_repeat1] = STATE(75),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_GT] = ACTIONS(150),
    [sym_comment] = ACTIONS(9),
  },
  [50] = {
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
  [51] = {
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(118),
    [sym_comment] = ACTIONS(9),
  },
  [52] = {
    [aux_sym_tuple_repeat1] = STATE(80),
    [anon_sym_COMMA] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(156),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(118),
    [sym_comment] = ACTIONS(9),
  },
  [53] = {
    [sym__proc] = STATE(81),
    [sym_par] = STATE(81),
    [sym_nu] = STATE(81),
    [sym_recv] = STATE(81),
    [sym_send] = STATE(81),
    [sym_end] = STATE(81),
    [sym_call] = STATE(81),
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
    [sym__name] = STATE(40),
    [sym_reserved_name] = STATE(40),
    [sym_polarized_name] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(78),
    [sym_label] = ACTIONS(158),
    [sym__digit] = ACTIONS(82),
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
    [sym__name] = STATE(40),
    [sym_reserved_name] = STATE(40),
    [sym_polarized_name] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(78),
    [sym_label] = ACTIONS(160),
    [sym__digit] = ACTIONS(82),
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
    [sym__name] = STATE(40),
    [sym_reserved_name] = STATE(40),
    [sym_polarized_name] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(78),
    [sym_label] = ACTIONS(162),
    [sym__digit] = ACTIONS(82),
    [sym_comment] = ACTIONS(9),
  },
  [57] = {
    [sym__expr] = STATE(85),
    [sym_tuple] = STATE(85),
    [sym_mul] = STATE(85),
    [sym_div] = STATE(85),
    [sym_add] = STATE(85),
    [sym_sub] = STATE(85),
    [sym__term] = STATE(85),
    [sym_integer] = STATE(85),
    [sym_variable] = STATE(85),
    [sym__name] = STATE(40),
    [sym_reserved_name] = STATE(40),
    [sym_polarized_name] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(78),
    [sym_label] = ACTIONS(164),
    [sym__digit] = ACTIONS(82),
    [sym_comment] = ACTIONS(9),
  },
  [58] = {
    [sym__proc] = STATE(60),
    [sym_par] = STATE(60),
    [sym_nu] = STATE(60),
    [sym_recv] = STATE(60),
    [sym_send] = STATE(60),
    [sym_end] = STATE(60),
    [sym_call] = STATE(60),
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
  [59] = {
    [sym__type] = STATE(86),
    [sym_type_send] = STATE(86),
    [sym_type_recv] = STATE(86),
    [sym_type_select] = STATE(86),
    [sym_type_choice] = STATE(86),
    [sym_type_end] = STATE(86),
    [sym_type_call] = STATE(86),
    [sym_simple_name] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(130),
    [anon_sym_BANG] = ACTIONS(132),
    [aux_sym_end] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(9),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_SEMI] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(9),
  },
  [61] = {
    [sym__type] = STATE(87),
    [sym_type_send] = STATE(87),
    [sym_type_recv] = STATE(87),
    [sym_type_select] = STATE(87),
    [sym_type_choice] = STATE(87),
    [sym_type_end] = STATE(87),
    [sym_type_call] = STATE(87),
    [sym_simple_name] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(130),
    [anon_sym_BANG] = ACTIONS(132),
    [aux_sym_end] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(9),
  },
  [62] = {
    [sym__sort] = STATE(91),
    [sym__type] = STATE(91),
    [sym_type_send] = STATE(91),
    [sym_type_recv] = STATE(91),
    [sym_type_select] = STATE(91),
    [sym_type_choice] = STATE(91),
    [sym_type_end] = STATE(91),
    [sym_type_call] = STATE(91),
    [sym_simple_name] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(168),
    [anon_sym_BANG] = ACTIONS(170),
    [aux_sym_end] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(172),
    [sym_sort_int] = ACTIONS(174),
    [sym_sort_bool] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(9),
  },
  [63] = {
    [sym__sort] = STATE(93),
    [sym__type] = STATE(93),
    [sym_type_send] = STATE(93),
    [sym_type_recv] = STATE(93),
    [sym_type_select] = STATE(93),
    [sym_type_choice] = STATE(93),
    [sym_type_end] = STATE(93),
    [sym_type_call] = STATE(93),
    [sym_simple_name] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(168),
    [anon_sym_BANG] = ACTIONS(170),
    [aux_sym_end] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(176),
    [sym_sort_int] = ACTIONS(178),
    [sym_sort_bool] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(9),
  },
  [64] = {
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_SEMI] = ACTIONS(180),
    [anon_sym_RBRACE] = ACTIONS(180),
    [sym_comment] = ACTIONS(9),
  },
  [65] = {
    [anon_sym_RPAREN] = ACTIONS(182),
    [sym_comment] = ACTIONS(9),
  },
  [66] = {
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_DOT] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(184),
    [anon_sym_RBRACE] = ACTIONS(184),
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
    [sym__proc] = STATE(81),
    [sym_par] = STATE(81),
    [sym_nu] = STATE(81),
    [sym_recv] = STATE(81),
    [sym_send] = STATE(81),
    [sym_end] = STATE(81),
    [sym_call] = STATE(81),
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
  [69] = {
    [sym_complex_clause] = STATE(95),
    [sym_pattern] = STATE(48),
    [sym_pattern_tuple] = STATE(32),
    [sym_simple_name] = STATE(35),
    [anon_sym_LT] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [anon_sym_RPAREN] = ACTIONS(186),
    [anon_sym_PIPE] = ACTIONS(186),
    [anon_sym_SEMI] = ACTIONS(186),
    [anon_sym_RBRACE] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(186),
    [sym_comment] = ACTIONS(9),
  },
  [71] = {
    [aux_sym__complex_clauses_repeat1] = STATE(97),
    [anon_sym_SEMI] = ACTIONS(142),
    [anon_sym_RBRACE] = ACTIONS(188),
    [sym_comment] = ACTIONS(9),
  },
  [72] = {
    [sym__proc] = STATE(99),
    [sym_par] = STATE(99),
    [sym_nu] = STATE(99),
    [sym_recv] = STATE(99),
    [sym_send] = STATE(99),
    [sym_end] = STATE(99),
    [sym_call] = STATE(99),
    [sym__name] = STATE(100),
    [sym_reserved_name] = STATE(100),
    [sym_polarized_name] = STATE(100),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(190),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [73] = {
    [sym_pattern] = STATE(101),
    [sym_pattern_tuple] = STATE(32),
    [sym_simple_name] = STATE(35),
    [anon_sym_LT] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
  },
  [74] = {
    [anon_sym_DOT] = ACTIONS(192),
    [anon_sym_DASH_GT] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(192),
    [anon_sym_GT] = ACTIONS(192),
    [sym_comment] = ACTIONS(9),
  },
  [75] = {
    [aux_sym_pattern_tuple_repeat1] = STATE(103),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_GT] = ACTIONS(194),
    [sym_comment] = ACTIONS(9),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(196),
    [anon_sym_RPAREN] = ACTIONS(196),
    [anon_sym_PIPE] = ACTIONS(196),
    [anon_sym_SEMI] = ACTIONS(196),
    [anon_sym_RBRACE] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(196),
    [sym_comment] = ACTIONS(9),
  },
  [77] = {
    [anon_sym_RPAREN] = ACTIONS(198),
    [anon_sym_DOT] = ACTIONS(198),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_GT] = ACTIONS(198),
    [anon_sym_STAR] = ACTIONS(198),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(200),
    [sym_comment] = ACTIONS(9),
  },
  [78] = {
    [sym__expr] = STATE(104),
    [sym_tuple] = STATE(104),
    [sym_mul] = STATE(104),
    [sym_div] = STATE(104),
    [sym_add] = STATE(104),
    [sym_sub] = STATE(104),
    [sym__term] = STATE(104),
    [sym_integer] = STATE(104),
    [sym_variable] = STATE(104),
    [sym__name] = STATE(40),
    [sym_reserved_name] = STATE(40),
    [sym_polarized_name] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(78),
    [sym_label] = ACTIONS(202),
    [sym__digit] = ACTIONS(82),
    [sym_comment] = ACTIONS(9),
  },
  [79] = {
    [anon_sym_RPAREN] = ACTIONS(204),
    [anon_sym_DOT] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(204),
    [anon_sym_GT] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(204),
    [anon_sym_SLASH] = ACTIONS(206),
    [anon_sym_PLUS] = ACTIONS(204),
    [anon_sym_DASH] = ACTIONS(206),
    [sym_comment] = ACTIONS(9),
  },
  [80] = {
    [aux_sym_tuple_repeat1] = STATE(106),
    [anon_sym_COMMA] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(208),
    [sym_comment] = ACTIONS(9),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(210),
    [anon_sym_RPAREN] = ACTIONS(210),
    [anon_sym_PIPE] = ACTIONS(210),
    [anon_sym_SEMI] = ACTIONS(210),
    [anon_sym_RBRACE] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(210),
    [sym_comment] = ACTIONS(9),
  },
  [82] = {
    [anon_sym_RPAREN] = ACTIONS(212),
    [anon_sym_DOT] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(212),
    [anon_sym_GT] = ACTIONS(212),
    [anon_sym_STAR] = ACTIONS(212),
    [anon_sym_SLASH] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(212),
    [anon_sym_DASH] = ACTIONS(214),
    [sym_comment] = ACTIONS(9),
  },
  [83] = {
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_DOT] = ACTIONS(216),
    [anon_sym_COMMA] = ACTIONS(216),
    [anon_sym_GT] = ACTIONS(216),
    [anon_sym_STAR] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(218),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(218),
    [sym_comment] = ACTIONS(9),
  },
  [84] = {
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_DOT] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(220),
    [anon_sym_GT] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(222),
    [sym_comment] = ACTIONS(9),
  },
  [85] = {
    [anon_sym_RPAREN] = ACTIONS(224),
    [anon_sym_DOT] = ACTIONS(224),
    [anon_sym_COMMA] = ACTIONS(224),
    [anon_sym_GT] = ACTIONS(224),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [sym_comment] = ACTIONS(9),
  },
  [86] = {
    [anon_sym_RPAREN] = ACTIONS(228),
    [sym_comment] = ACTIONS(9),
  },
  [87] = {
    [anon_sym_RPAREN] = ACTIONS(230),
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
    [sym_simple_name] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(168),
    [anon_sym_BANG] = ACTIONS(170),
    [aux_sym_end] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(172),
    [sym_sort_int] = ACTIONS(232),
    [sym_sort_bool] = ACTIONS(232),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(9),
  },
  [89] = {
    [sym__sort] = STATE(110),
    [sym__type] = STATE(110),
    [sym_type_send] = STATE(110),
    [sym_type_recv] = STATE(110),
    [sym_type_select] = STATE(110),
    [sym_type_choice] = STATE(110),
    [sym_type_end] = STATE(110),
    [sym_type_call] = STATE(110),
    [sym_simple_name] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(168),
    [anon_sym_BANG] = ACTIONS(170),
    [aux_sym_end] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(176),
    [sym_sort_int] = ACTIONS(234),
    [sym_sort_bool] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(9),
  },
  [90] = {
    [sym__type_of_label] = STATE(112),
    [sym_label] = ACTIONS(236),
    [sym_comment] = ACTIONS(9),
  },
  [91] = {
    [anon_sym_DOT] = ACTIONS(238),
    [sym_comment] = ACTIONS(9),
  },
  [92] = {
    [sym__type_of_label] = STATE(114),
    [sym_label] = ACTIONS(236),
    [sym_comment] = ACTIONS(9),
  },
  [93] = {
    [anon_sym_DOT] = ACTIONS(240),
    [sym_comment] = ACTIONS(9),
  },
  [94] = {
    [sym__proc] = STATE(116),
    [sym_par] = STATE(116),
    [sym_nu] = STATE(116),
    [sym_recv] = STATE(116),
    [sym_send] = STATE(116),
    [sym_end] = STATE(116),
    [sym_call] = STATE(116),
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
  [95] = {
    [anon_sym_SEMI] = ACTIONS(242),
    [anon_sym_RBRACE] = ACTIONS(242),
    [sym_comment] = ACTIONS(9),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(244),
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_PIPE] = ACTIONS(244),
    [anon_sym_SEMI] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(244),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(244),
    [sym_comment] = ACTIONS(9),
  },
  [97] = {
    [aux_sym__complex_clauses_repeat1] = STATE(97),
    [anon_sym_SEMI] = ACTIONS(246),
    [anon_sym_RBRACE] = ACTIONS(242),
    [sym_comment] = ACTIONS(9),
  },
  [98] = {
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
    [anon_sym_nu] = ACTIONS(249),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [99] = {
    [anon_sym_PIPE] = ACTIONS(251),
    [anon_sym_SEMI] = ACTIONS(253),
    [anon_sym_RBRACE] = ACTIONS(253),
    [sym_comment] = ACTIONS(9),
  },
  [100] = {
    [anon_sym_QMARK] = ACTIONS(255),
    [anon_sym_BANG] = ACTIONS(257),
    [sym_comment] = ACTIONS(9),
  },
  [101] = {
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_GT] = ACTIONS(259),
    [sym_comment] = ACTIONS(9),
  },
  [102] = {
    [anon_sym_DOT] = ACTIONS(261),
    [anon_sym_DASH_GT] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_GT] = ACTIONS(261),
    [sym_comment] = ACTIONS(9),
  },
  [103] = {
    [aux_sym_pattern_tuple_repeat1] = STATE(103),
    [anon_sym_COMMA] = ACTIONS(263),
    [anon_sym_GT] = ACTIONS(259),
    [sym_comment] = ACTIONS(9),
  },
  [104] = {
    [anon_sym_COMMA] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(266),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(118),
    [sym_comment] = ACTIONS(9),
  },
  [105] = {
    [anon_sym_RPAREN] = ACTIONS(268),
    [anon_sym_DOT] = ACTIONS(268),
    [anon_sym_COMMA] = ACTIONS(268),
    [anon_sym_GT] = ACTIONS(268),
    [anon_sym_STAR] = ACTIONS(268),
    [anon_sym_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(270),
    [sym_comment] = ACTIONS(9),
  },
  [106] = {
    [aux_sym_tuple_repeat1] = STATE(106),
    [anon_sym_COMMA] = ACTIONS(272),
    [anon_sym_GT] = ACTIONS(266),
    [sym_comment] = ACTIONS(9),
  },
  [107] = {
    [sym__proc] = STATE(116),
    [sym_par] = STATE(116),
    [sym_nu] = STATE(116),
    [sym_recv] = STATE(116),
    [sym_send] = STATE(116),
    [sym_end] = STATE(116),
    [sym_call] = STATE(116),
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
  [108] = {
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_DOT] = ACTIONS(275),
    [anon_sym_SEMI] = ACTIONS(275),
    [anon_sym_RBRACE] = ACTIONS(275),
    [sym_comment] = ACTIONS(9),
  },
  [109] = {
    [anon_sym_DOT] = ACTIONS(277),
    [sym_comment] = ACTIONS(9),
  },
  [110] = {
    [anon_sym_DOT] = ACTIONS(279),
    [sym_comment] = ACTIONS(9),
  },
  [111] = {
    [anon_sym_COLON] = ACTIONS(281),
    [sym_comment] = ACTIONS(9),
  },
  [112] = {
    [aux_sym_type_select_repeat1] = STATE(126),
    [anon_sym_SEMI] = ACTIONS(283),
    [anon_sym_RBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(9),
  },
  [113] = {
    [sym__type] = STATE(127),
    [sym_type_send] = STATE(127),
    [sym_type_recv] = STATE(127),
    [sym_type_select] = STATE(127),
    [sym_type_choice] = STATE(127),
    [sym_type_end] = STATE(127),
    [sym_type_call] = STATE(127),
    [sym_simple_name] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(130),
    [anon_sym_BANG] = ACTIONS(132),
    [aux_sym_end] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(9),
  },
  [114] = {
    [aux_sym_type_select_repeat1] = STATE(129),
    [anon_sym_SEMI] = ACTIONS(283),
    [anon_sym_RBRACE] = ACTIONS(287),
    [sym_comment] = ACTIONS(9),
  },
  [115] = {
    [sym__type] = STATE(130),
    [sym_type_send] = STATE(130),
    [sym_type_recv] = STATE(130),
    [sym_type_select] = STATE(130),
    [sym_type_choice] = STATE(130),
    [sym_type_end] = STATE(130),
    [sym_type_call] = STATE(130),
    [sym_simple_name] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(130),
    [anon_sym_BANG] = ACTIONS(132),
    [aux_sym_end] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(9),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(289),
    [anon_sym_SEMI] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(289),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(289),
    [sym_comment] = ACTIONS(9),
  },
  [117] = {
    [sym_simple_name] = STATE(131),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [118] = {
    [sym__proc] = STATE(132),
    [sym_par] = STATE(132),
    [sym_nu] = STATE(132),
    [sym_recv] = STATE(132),
    [sym_send] = STATE(132),
    [sym_end] = STATE(132),
    [sym_call] = STATE(132),
    [sym__name] = STATE(100),
    [sym_reserved_name] = STATE(100),
    [sym_polarized_name] = STATE(100),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(190),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [119] = {
    [sym__clauses] = STATE(33),
    [sym_simple_clause] = STATE(33),
    [sym__complex_clauses] = STATE(33),
    [sym_pattern] = STATE(133),
    [sym_pattern_tuple] = STATE(32),
    [sym_simple_name] = STATE(35),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LT] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(7),
    [sym_label] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
  },
  [120] = {
    [sym__expr] = STATE(134),
    [sym_tuple] = STATE(134),
    [sym_mul] = STATE(134),
    [sym_div] = STATE(134),
    [sym_add] = STATE(134),
    [sym_sub] = STATE(134),
    [sym__term] = STATE(134),
    [sym_integer] = STATE(134),
    [sym_variable] = STATE(134),
    [sym__name] = STATE(40),
    [sym_reserved_name] = STATE(40),
    [sym_polarized_name] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(78),
    [sym_label] = ACTIONS(291),
    [sym__digit] = ACTIONS(82),
    [sym_comment] = ACTIONS(9),
  },
  [121] = {
    [sym__type] = STATE(127),
    [sym_type_send] = STATE(127),
    [sym_type_recv] = STATE(127),
    [sym_type_select] = STATE(127),
    [sym_type_choice] = STATE(127),
    [sym_type_end] = STATE(127),
    [sym_type_call] = STATE(127),
    [sym_simple_name] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(168),
    [anon_sym_BANG] = ACTIONS(170),
    [aux_sym_end] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(9),
  },
  [122] = {
    [sym__type] = STATE(130),
    [sym_type_send] = STATE(130),
    [sym_type_recv] = STATE(130),
    [sym_type_select] = STATE(130),
    [sym_type_choice] = STATE(130),
    [sym_type_end] = STATE(130),
    [sym_type_call] = STATE(130),
    [sym_simple_name] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(168),
    [anon_sym_BANG] = ACTIONS(170),
    [aux_sym_end] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(9),
  },
  [123] = {
    [sym__type] = STATE(137),
    [sym_type_send] = STATE(137),
    [sym_type_recv] = STATE(137),
    [sym_type_select] = STATE(137),
    [sym_type_choice] = STATE(137),
    [sym_type_end] = STATE(137),
    [sym_type_call] = STATE(137),
    [sym_simple_name] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(293),
    [anon_sym_BANG] = ACTIONS(295),
    [aux_sym_end] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(9),
  },
  [124] = {
    [sym__type_of_label] = STATE(138),
    [sym_label] = ACTIONS(236),
    [sym_comment] = ACTIONS(9),
  },
  [125] = {
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_DOT] = ACTIONS(297),
    [anon_sym_SEMI] = ACTIONS(297),
    [anon_sym_RBRACE] = ACTIONS(297),
    [sym_comment] = ACTIONS(9),
  },
  [126] = {
    [aux_sym_type_select_repeat1] = STATE(140),
    [anon_sym_SEMI] = ACTIONS(283),
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
    [anon_sym_RPAREN] = ACTIONS(303),
    [anon_sym_DOT] = ACTIONS(303),
    [anon_sym_SEMI] = ACTIONS(303),
    [anon_sym_RBRACE] = ACTIONS(303),
    [sym_comment] = ACTIONS(9),
  },
  [129] = {
    [aux_sym_type_select_repeat1] = STATE(140),
    [anon_sym_SEMI] = ACTIONS(283),
    [anon_sym_RBRACE] = ACTIONS(305),
    [sym_comment] = ACTIONS(9),
  },
  [130] = {
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_DOT] = ACTIONS(307),
    [anon_sym_SEMI] = ACTIONS(307),
    [anon_sym_RBRACE] = ACTIONS(307),
    [sym_comment] = ACTIONS(9),
  },
  [131] = {
    [anon_sym_RPAREN] = ACTIONS(309),
    [anon_sym_COLON] = ACTIONS(311),
    [sym_comment] = ACTIONS(9),
  },
  [132] = {
    [anon_sym_PIPE] = ACTIONS(251),
    [anon_sym_SEMI] = ACTIONS(92),
    [anon_sym_RBRACE] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
  },
  [133] = {
    [anon_sym_DOT] = ACTIONS(313),
    [sym_comment] = ACTIONS(9),
  },
  [134] = {
    [anon_sym_DOT] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(118),
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
    [sym_simple_name] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(168),
    [anon_sym_BANG] = ACTIONS(170),
    [aux_sym_end] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(172),
    [sym_sort_int] = ACTIONS(317),
    [sym_sort_bool] = ACTIONS(317),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(9),
  },
  [136] = {
    [sym__sort] = STATE(147),
    [sym__type] = STATE(147),
    [sym_type_send] = STATE(147),
    [sym_type_recv] = STATE(147),
    [sym_type_select] = STATE(147),
    [sym_type_choice] = STATE(147),
    [sym_type_end] = STATE(147),
    [sym_type_call] = STATE(147),
    [sym_simple_name] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(168),
    [anon_sym_BANG] = ACTIONS(170),
    [aux_sym_end] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(176),
    [sym_sort_int] = ACTIONS(319),
    [sym_sort_bool] = ACTIONS(319),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(9),
  },
  [137] = {
    [anon_sym_SEMI] = ACTIONS(321),
    [anon_sym_RBRACE] = ACTIONS(321),
    [sym_comment] = ACTIONS(9),
  },
  [138] = {
    [anon_sym_SEMI] = ACTIONS(323),
    [anon_sym_RBRACE] = ACTIONS(323),
    [sym_comment] = ACTIONS(9),
  },
  [139] = {
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_DOT] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_RBRACE] = ACTIONS(325),
    [sym_comment] = ACTIONS(9),
  },
  [140] = {
    [aux_sym_type_select_repeat1] = STATE(140),
    [anon_sym_SEMI] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(323),
    [sym_comment] = ACTIONS(9),
  },
  [141] = {
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_SEMI] = ACTIONS(330),
    [anon_sym_RBRACE] = ACTIONS(330),
    [sym_comment] = ACTIONS(9),
  },
  [142] = {
    [sym__proc] = STATE(60),
    [sym_par] = STATE(60),
    [sym_nu] = STATE(60),
    [sym_recv] = STATE(60),
    [sym_send] = STATE(60),
    [sym_end] = STATE(60),
    [sym_call] = STATE(60),
    [sym__name] = STATE(100),
    [sym_reserved_name] = STATE(100),
    [sym_polarized_name] = STATE(100),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(190),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [143] = {
    [sym__type] = STATE(148),
    [sym_type_send] = STATE(148),
    [sym_type_recv] = STATE(148),
    [sym_type_select] = STATE(148),
    [sym_type_choice] = STATE(148),
    [sym_type_end] = STATE(148),
    [sym_type_call] = STATE(148),
    [sym_simple_name] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(130),
    [anon_sym_BANG] = ACTIONS(132),
    [aux_sym_end] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(9),
  },
  [144] = {
    [sym__proc] = STATE(76),
    [sym_par] = STATE(76),
    [sym_nu] = STATE(76),
    [sym_recv] = STATE(76),
    [sym_send] = STATE(76),
    [sym_end] = STATE(76),
    [sym_call] = STATE(76),
    [sym__name] = STATE(100),
    [sym_reserved_name] = STATE(100),
    [sym_polarized_name] = STATE(100),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(190),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [145] = {
    [sym__proc] = STATE(81),
    [sym_par] = STATE(81),
    [sym_nu] = STATE(81),
    [sym_recv] = STATE(81),
    [sym_send] = STATE(81),
    [sym_end] = STATE(81),
    [sym_call] = STATE(81),
    [sym__name] = STATE(100),
    [sym_reserved_name] = STATE(100),
    [sym_polarized_name] = STATE(100),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(190),
    [aux_sym_end] = ACTIONS(21),
    [anon_sym_stdin] = ACTIONS(23),
    [anon_sym_stdout] = ACTIONS(23),
    [aux_sym_SLASH_BSLASH_BQUOTE_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
  },
  [146] = {
    [anon_sym_DOT] = ACTIONS(332),
    [sym_comment] = ACTIONS(9),
  },
  [147] = {
    [anon_sym_DOT] = ACTIONS(334),
    [sym_comment] = ACTIONS(9),
  },
  [148] = {
    [anon_sym_RPAREN] = ACTIONS(336),
    [sym_comment] = ACTIONS(9),
  },
  [149] = {
    [sym__type] = STATE(127),
    [sym_type_send] = STATE(127),
    [sym_type_recv] = STATE(127),
    [sym_type_select] = STATE(127),
    [sym_type_choice] = STATE(127),
    [sym_type_end] = STATE(127),
    [sym_type_call] = STATE(127),
    [sym_simple_name] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(293),
    [anon_sym_BANG] = ACTIONS(295),
    [aux_sym_end] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(9),
  },
  [150] = {
    [sym__type] = STATE(130),
    [sym_type_send] = STATE(130),
    [sym_type_recv] = STATE(130),
    [sym_type_select] = STATE(130),
    [sym_type_choice] = STATE(130),
    [sym_type_end] = STATE(130),
    [sym_type_call] = STATE(130),
    [sym_simple_name] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(293),
    [anon_sym_BANG] = ACTIONS(295),
    [aux_sym_end] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_LPAREN_BSLASHw_PIPE_SQUOTE_RPAREN_STAR_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(9),
  },
  [151] = {
    [sym__proc] = STATE(116),
    [sym_par] = STATE(116),
    [sym_nu] = STATE(116),
    [sym_recv] = STATE(116),
    [sym_send] = STATE(116),
    [sym_end] = STATE(116),
    [sym_call] = STATE(116),
    [sym__name] = STATE(100),
    [sym_reserved_name] = STATE(100),
    [sym_polarized_name] = STATE(100),
    [sym_simple_name] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(190),
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
  [80] = {.count = 1, .reusable = true}, SHIFT(39),
  [82] = {.count = 1, .reusable = true}, SHIFT(38),
  [84] = {.count = 1, .reusable = true}, SHIFT(42),
  [86] = {.count = 1, .reusable = true}, SHIFT(43),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym__proc, 3),
  [90] = {.count = 1, .reusable = true}, SHIFT(46),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_par, 3),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_recv, 3),
  [98] = {.count = 1, .reusable = true}, SHIFT(50),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1, .alias_sequence_id = 2),
  [102] = {.count = 1, .reusable = true}, SHIFT(51),
  [104] = {.count = 1, .reusable = true}, SHIFT(52),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_integer, 1),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym_integer, 1),
  [110] = {.count = 1, .reusable = true}, SHIFT(53),
  [112] = {.count = 1, .reusable = true}, SHIFT(54),
  [114] = {.count = 1, .reusable = false}, SHIFT(55),
  [116] = {.count = 1, .reusable = true}, SHIFT(56),
  [118] = {.count = 1, .reusable = false}, SHIFT(57),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 1),
  [122] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 1),
  [124] = {.count = 1, .reusable = true}, SHIFT(58),
  [126] = {.count = 1, .reusable = true}, SHIFT(59),
  [128] = {.count = 1, .reusable = true}, SHIFT(61),
  [130] = {.count = 1, .reusable = true}, SHIFT(62),
  [132] = {.count = 1, .reusable = true}, SHIFT(63),
  [134] = {.count = 1, .reusable = false}, SHIFT(64),
  [136] = {.count = 1, .reusable = false}, SHIFT(2),
  [138] = {.count = 1, .reusable = true}, SHIFT(67),
  [140] = {.count = 1, .reusable = true}, SHIFT(68),
  [142] = {.count = 1, .reusable = true}, SHIFT(69),
  [144] = {.count = 1, .reusable = true}, SHIFT(70),
  [146] = {.count = 1, .reusable = true}, SHIFT(72),
  [148] = {.count = 1, .reusable = true}, SHIFT(73),
  [150] = {.count = 1, .reusable = true}, SHIFT(74),
  [152] = {.count = 1, .reusable = true}, SHIFT(77),
  [154] = {.count = 1, .reusable = true}, SHIFT(78),
  [156] = {.count = 1, .reusable = true}, SHIFT(79),
  [158] = {.count = 1, .reusable = true}, SHIFT(82),
  [160] = {.count = 1, .reusable = true}, SHIFT(83),
  [162] = {.count = 1, .reusable = true}, SHIFT(84),
  [164] = {.count = 1, .reusable = true}, SHIFT(85),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_nu, 5, .alias_sequence_id = 3),
  [168] = {.count = 1, .reusable = true}, SHIFT(88),
  [170] = {.count = 1, .reusable = true}, SHIFT(89),
  [172] = {.count = 1, .reusable = true}, SHIFT(90),
  [174] = {.count = 1, .reusable = true}, SHIFT(91),
  [176] = {.count = 1, .reusable = true}, SHIFT(92),
  [178] = {.count = 1, .reusable = true}, SHIFT(93),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_type_end, 1),
  [182] = {.count = 1, .reusable = true}, SHIFT(94),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_type_call, 1, .alias_sequence_id = 1),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym__complex_clauses, 3),
  [188] = {.count = 1, .reusable = true}, SHIFT(96),
  [190] = {.count = 1, .reusable = true}, SHIFT(98),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_tuple, 3),
  [194] = {.count = 1, .reusable = true}, SHIFT(102),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_simple_clause, 3),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 3),
  [200] = {.count = 1, .reusable = false}, REDUCE(sym__expr, 3),
  [202] = {.count = 1, .reusable = true}, SHIFT(104),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3),
  [206] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3),
  [208] = {.count = 1, .reusable = true}, SHIFT(105),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_send, 5),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_mul, 3),
  [214] = {.count = 1, .reusable = false}, REDUCE(sym_mul, 3),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_div, 3),
  [218] = {.count = 1, .reusable = false}, REDUCE(sym_div, 3),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [222] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_sub, 3),
  [226] = {.count = 1, .reusable = false}, REDUCE(sym_sub, 3),
  [228] = {.count = 1, .reusable = true}, SHIFT(107),
  [230] = {.count = 1, .reusable = true}, SHIFT(108),
  [232] = {.count = 1, .reusable = true}, SHIFT(109),
  [234] = {.count = 1, .reusable = true}, SHIFT(110),
  [236] = {.count = 1, .reusable = true}, SHIFT(111),
  [238] = {.count = 1, .reusable = true}, SHIFT(113),
  [240] = {.count = 1, .reusable = true}, SHIFT(115),
  [242] = {.count = 1, .reusable = true}, REDUCE(aux_sym__complex_clauses_repeat1, 2),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym__complex_clauses, 4),
  [246] = {.count = 2, .reusable = true}, REDUCE(aux_sym__complex_clauses_repeat1, 2), SHIFT_REPEAT(69),
  [249] = {.count = 1, .reusable = false}, SHIFT(117),
  [251] = {.count = 1, .reusable = true}, SHIFT(118),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_complex_clause, 3),
  [255] = {.count = 1, .reusable = true}, SHIFT(119),
  [257] = {.count = 1, .reusable = true}, SHIFT(120),
  [259] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pattern_tuple_repeat1, 2),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_tuple, 4),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_tuple_repeat1, 2), SHIFT_REPEAT(73),
  [266] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 4),
  [270] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 4),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(78),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym__type, 3),
  [277] = {.count = 1, .reusable = true}, SHIFT(121),
  [279] = {.count = 1, .reusable = true}, SHIFT(122),
  [281] = {.count = 1, .reusable = true}, SHIFT(123),
  [283] = {.count = 1, .reusable = true}, SHIFT(124),
  [285] = {.count = 1, .reusable = true}, SHIFT(125),
  [287] = {.count = 1, .reusable = true}, SHIFT(128),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_nu, 7, .alias_sequence_id = 3),
  [291] = {.count = 1, .reusable = true}, SHIFT(134),
  [293] = {.count = 1, .reusable = true}, SHIFT(135),
  [295] = {.count = 1, .reusable = true}, SHIFT(136),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_type_choice, 4),
  [299] = {.count = 1, .reusable = true}, SHIFT(139),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_type_recv, 4),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_type_select, 4),
  [305] = {.count = 1, .reusable = true}, SHIFT(141),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_type_send, 4),
  [309] = {.count = 1, .reusable = true}, SHIFT(142),
  [311] = {.count = 1, .reusable = true}, SHIFT(143),
  [313] = {.count = 1, .reusable = true}, SHIFT(144),
  [315] = {.count = 1, .reusable = true}, SHIFT(145),
  [317] = {.count = 1, .reusable = true}, SHIFT(146),
  [319] = {.count = 1, .reusable = true}, SHIFT(147),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym__type_of_label, 3),
  [323] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_select_repeat1, 2),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_type_choice, 5),
  [327] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_select_repeat1, 2), SHIFT_REPEAT(124),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_type_select, 5),
  [332] = {.count = 1, .reusable = true}, SHIFT(149),
  [334] = {.count = 1, .reusable = true}, SHIFT(150),
  [336] = {.count = 1, .reusable = true}, SHIFT(151),
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
