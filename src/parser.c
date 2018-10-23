#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 209
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 3
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_COLON_COLON = 1,
  anon_sym_EQ = 2,
  anon_sym_PIPE = 3,
  anon_sym_DOT = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_nu = 7,
  anon_sym_COLON = 8,
  sym_end = 9,
  anon_sym_BANG = 10,
  anon_sym_QMARK = 11,
  anon_sym_LBRACE = 12,
  anon_sym_SEMI = 13,
  anon_sym_RBRACE = 14,
  anon_sym_DASH_GT = 15,
  anon_sym_if = 16,
  anon_sym_then = 17,
  anon_sym_else = 18,
  sym_string = 19,
  anon_sym_LT = 20,
  anon_sym_COMMA = 21,
  anon_sym_GT = 22,
  anon_sym_PLUS = 23,
  anon_sym_DASH = 24,
  anon_sym_STAR = 25,
  anon_sym_SLASH = 26,
  anon_sym_GT_EQ = 27,
  anon_sym_LT_EQ = 28,
  anon_sym_EQ_EQ = 29,
  anon_sym_BANG_EQ = 30,
  anon_sym_AMP_AMP = 31,
  anon_sym_PIPE_PIPE = 32,
  anon_sym_TILDE = 33,
  sym__digit = 34,
  sym__label = 35,
  sym__cmd = 36,
  sym__name = 37,
  sym_comment = 38,
  sym_source_file = 39,
  sym__top_declarations = 40,
  sym__type_declaration = 41,
  sym_type_declaration = 42,
  sym_dual_type_declaration = 43,
  sym__proc_declaration = 44,
  sym_proc_declaration = 45,
  sym__term = 46,
  sym__para_term = 47,
  sym_term = 48,
  sym__atomic = 49,
  sym__parenthesized_term = 50,
  sym_nu = 51,
  sym_send = 52,
  sym__channel = 53,
  sym__term_sendex = 54,
  sym__data_constructor = 55,
  sym_recv = 56,
  sym__term_recvex = 57,
  sym_label_guards = 58,
  sym_label_case = 59,
  sym__pattern = 60,
  sym__expr = 61,
  sym_expr = 62,
  sym_expr_condition = 63,
  sym_expr_biop = 64,
  sym_expr_unop = 65,
  sym__parenthesized_expr = 66,
  sym_tuple = 67,
  sym_biop = 68,
  sym_unop = 69,
  sym_digit = 70,
  sym_label = 71,
  sym_cmd = 72,
  sym_name = 73,
  aux_sym_source_file_repeat1 = 74,
  aux_sym__para_term_repeat1 = 75,
  aux_sym_term_repeat1 = 76,
  aux_sym_nu_repeat1 = 77,
  aux_sym_label_guards_repeat1 = 78,
  aux_sym_tuple_repeat1 = 79,
  alias_sym_nu_body = 80,
  alias_sym_nu_name = 81,
  alias_sym_term = 82,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_nu] = "nu",
  [anon_sym_COLON] = ":",
  [sym_end] = "end",
  [anon_sym_BANG] = "!",
  [anon_sym_QMARK] = "?",
  [anon_sym_LBRACE] = "{",
  [anon_sym_SEMI] = ";",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [sym_string] = "string",
  [anon_sym_LT] = "<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_TILDE] = "~",
  [sym__digit] = "_digit",
  [sym__label] = "_label",
  [sym__cmd] = "_cmd",
  [sym__name] = "_name",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__top_declarations] = "_top_declarations",
  [sym__type_declaration] = "_type_declaration",
  [sym_type_declaration] = "type_declaration",
  [sym_dual_type_declaration] = "dual_type_declaration",
  [sym__proc_declaration] = "_proc_declaration",
  [sym_proc_declaration] = "proc_declaration",
  [sym__term] = "_term",
  [sym__para_term] = "_para_term",
  [sym_term] = "term",
  [sym__atomic] = "_atomic",
  [sym__parenthesized_term] = "_parenthesized_term",
  [sym_nu] = "nu",
  [sym_send] = "send",
  [sym__channel] = "_channel",
  [sym__term_sendex] = "_term_sendex",
  [sym__data_constructor] = "_data_constructor",
  [sym_recv] = "recv",
  [sym__term_recvex] = "_term_recvex",
  [sym_label_guards] = "label_guards",
  [sym_label_case] = "label_case",
  [sym__pattern] = "_pattern",
  [sym__expr] = "_expr",
  [sym_expr] = "expr",
  [sym_expr_condition] = "expr_condition",
  [sym_expr_biop] = "expr_biop",
  [sym_expr_unop] = "expr_unop",
  [sym__parenthesized_expr] = "_parenthesized_expr",
  [sym_tuple] = "tuple",
  [sym_biop] = "biop",
  [sym_unop] = "unop",
  [sym_digit] = "digit",
  [sym_label] = "label",
  [sym_cmd] = "cmd",
  [sym_name] = "name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__para_term_repeat1] = "_para_term_repeat1",
  [aux_sym_term_repeat1] = "term_repeat1",
  [aux_sym_nu_repeat1] = "nu_repeat1",
  [aux_sym_label_guards_repeat1] = "label_guards_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [alias_sym_nu_body] = "nu_body",
  [alias_sym_nu_name] = "nu_name",
  [alias_sym_term] = "term",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [anon_sym_nu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_end] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
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
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [sym__digit] = {
    .visible = false,
    .named = true,
  },
  [sym__label] = {
    .visible = false,
    .named = true,
  },
  [sym__cmd] = {
    .visible = false,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top_declarations] = {
    .visible = false,
    .named = true,
  },
  [sym__type_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_dual_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__proc_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_proc_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
    .named = true,
  },
  [sym__para_term] = {
    .visible = false,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym__atomic] = {
    .visible = false,
    .named = true,
  },
  [sym__parenthesized_term] = {
    .visible = false,
    .named = true,
  },
  [sym_nu] = {
    .visible = true,
    .named = true,
  },
  [sym_send] = {
    .visible = true,
    .named = true,
  },
  [sym__channel] = {
    .visible = false,
    .named = true,
  },
  [sym__term_sendex] = {
    .visible = false,
    .named = true,
  },
  [sym__data_constructor] = {
    .visible = false,
    .named = true,
  },
  [sym_recv] = {
    .visible = true,
    .named = true,
  },
  [sym__term_recvex] = {
    .visible = false,
    .named = true,
  },
  [sym_label_guards] = {
    .visible = true,
    .named = true,
  },
  [sym_label_case] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_biop] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_unop] = {
    .visible = true,
    .named = true,
  },
  [sym__parenthesized_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_biop] = {
    .visible = true,
    .named = true,
  },
  [sym_unop] = {
    .visible = true,
    .named = true,
  },
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__para_term_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_term_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nu_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_guards_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_nu_body] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_nu_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_term] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_nu_name,
  },
  [2] = {
    [1] = alias_sym_term,
  },
  [3] = {
    [3] = alias_sym_nu_body,
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
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(17);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '/')
        ADVANCE(22);
      if (lookahead == ':')
        ADVANCE(24);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '?')
        ADVANCE(33);
      if (lookahead == '\\')
        SKIP(34);
      if (lookahead == 'e')
        ADVANCE(35);
      if (lookahead == 'i')
        ADVANCE(41);
      if (lookahead == 'n')
        ADVANCE(43);
      if (lookahead == 't')
        ADVANCE(45);
      if (lookahead == '{')
        ADVANCE(49);
      if (lookahead == '|')
        ADVANCE(50);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == '~')
        ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(54);
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
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 6:
      if (lookahead == '\n')
        ADVANCE(4);
      if (lookahead == '^')
        ADVANCE(7);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == '\n')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(8);
      if (lookahead == '\\')
        ADVANCE(9);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(4);
      END_STATE();
    case 9:
      if (lookahead == '\n')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(8);
      if (lookahead == '\\')
        ADVANCE(9);
      if (lookahead == '^')
        ADVANCE(7);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 10:
      if (lookahead == '&')
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 34:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 35:
      if (lookahead == 'l')
        ADVANCE(36);
      if (lookahead == 'n')
        ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 's')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'e')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 39:
      if (lookahead == 'd')
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_end);
      END_STATE();
    case 41:
      if (lookahead == 'f')
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 43:
      if (lookahead == 'u')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_nu);
      END_STATE();
    case 45:
      if (lookahead == 'h')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'e')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'n')
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == ':')
        ADVANCE(58);
      if (lookahead == '=')
        ADVANCE(59);
      if (lookahead == '\\')
        SKIP(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(55);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == '-')
        ADVANCE(18);
      END_STATE();
    case 57:
      if (lookahead == '/')
        ADVANCE(23);
      END_STATE();
    case 58:
      if (lookahead == ':')
        ADVANCE(25);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 60:
      if (lookahead == 'n')
        SKIP(55);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '\'')
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(63);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '/')
        ADVANCE(22);
      if (lookahead == ':')
        ADVANCE(24);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '?')
        ADVANCE(33);
      if (lookahead == '\\')
        SKIP(64);
      if (lookahead == '|')
        ADVANCE(50);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(62);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(18);
      END_STATE();
    case 64:
      if (lookahead == 'n')
        SKIP(62);
      END_STATE();
    case 65:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(57);
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
    case 67:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '\\')
        SKIP(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(67);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(61);
      END_STATE();
    case 68:
      if (lookahead == 'n')
        SKIP(67);
      END_STATE();
    case 69:
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '\\')
        SKIP(70);
      if (lookahead == 'e')
        ADVANCE(71);
      if (lookahead == 'n')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(69);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == 'n')
        SKIP(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '\'')
        ADVANCE(61);
      if (lookahead == 'n')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(61);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '\'')
        ADVANCE(61);
      if (lookahead == 'd')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(61);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_end);
      if (lookahead == '\'')
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(61);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '\'')
        ADVANCE(61);
      if (lookahead == 'u')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(61);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_nu);
      if (lookahead == '\'')
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(61);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__cmd);
      if (lookahead == '\'')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(63);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '/')
        ADVANCE(22);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(78);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '?')
        ADVANCE(33);
      if (lookahead == '\\')
        SKIP(79);
      if (lookahead == '|')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(77);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(61);
      END_STATE();
    case 78:
      if (lookahead == '=')
        ADVANCE(30);
      END_STATE();
    case 79:
      if (lookahead == 'n')
        SKIP(77);
      END_STATE();
    case 80:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(81);
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '?')
        ADVANCE(33);
      if (lookahead == '\\')
        SKIP(82);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(80);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(61);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 82:
      if (lookahead == 'n')
        SKIP(80);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 84:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '\\')
        SKIP(85);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(84);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(61);
      END_STATE();
    case 85:
      if (lookahead == 'n')
        SKIP(84);
      END_STATE();
    case 86:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '\\')
        SKIP(87);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(86);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(61);
      END_STATE();
    case 87:
      if (lookahead == 'n')
        SKIP(86);
      END_STATE();
    case 88:
      if (lookahead == '!')
        ADVANCE(89);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(63);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '/')
        ADVANCE(22);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(78);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '\\')
        SKIP(90);
      if (lookahead == '|')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(88);
      END_STATE();
    case 89:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 90:
      if (lookahead == 'n')
        SKIP(88);
      END_STATE();
    case 91:
      if (lookahead == '!')
        ADVANCE(81);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '?')
        ADVANCE(33);
      if (lookahead == '\\')
        SKIP(92);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(52);
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
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == ':')
        ADVANCE(94);
      if (lookahead == '\\')
        SKIP(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(93);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(61);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 95:
      if (lookahead == 'n')
        SKIP(93);
      END_STATE();
    case 96:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(97);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '<')
        ADVANCE(98);
      if (lookahead == '\\')
        SKIP(99);
      if (lookahead == 'i')
        ADVANCE(100);
      if (lookahead == '~')
        ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(96);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(54);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 99:
      if (lookahead == 'n')
        SKIP(96);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '\'')
        ADVANCE(61);
      if (lookahead == 'f')
        ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(61);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(61);
      END_STATE();
    case 102:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(103);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '<')
        ADVANCE(98);
      if (lookahead == '\\')
        SKIP(104);
      if (lookahead == '{')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(102);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(61);
      END_STATE();
    case 103:
      if (lookahead == '-')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      END_STATE();
    case 104:
      if (lookahead == 'n')
        SKIP(102);
      END_STATE();
    case 105:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(89);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(63);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '/')
        ADVANCE(22);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(78);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '\\')
        SKIP(106);
      if (lookahead == '|')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(105);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(61);
      END_STATE();
    case 106:
      if (lookahead == 'n')
        SKIP(105);
      END_STATE();
    case 107:
      if (lookahead == '!')
        ADVANCE(89);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(63);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '/')
        ADVANCE(22);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(78);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '\\')
        SKIP(108);
      if (lookahead == 'e')
        ADVANCE(109);
      if (lookahead == 't')
        ADVANCE(45);
      if (lookahead == '|')
        ADVANCE(50);
      if (lookahead == '}')
        ADVANCE(52);
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
    case 109:
      if (lookahead == 'l')
        ADVANCE(36);
      END_STATE();
    case 110:
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(111);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '\\')
        SKIP(112);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(110);
      END_STATE();
    case 111:
      if (lookahead == '-')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(19);
      END_STATE();
    case 112:
      if (lookahead == 'n')
        SKIP(110);
      END_STATE();
    case 113:
      if (lookahead == '!')
        ADVANCE(89);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(63);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '/')
        ADVANCE(22);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(78);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '\\')
        SKIP(114);
      if (lookahead == 'e')
        ADVANCE(109);
      if (lookahead == 't')
        ADVANCE(45);
      if (lookahead == '|')
        ADVANCE(50);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(113);
      END_STATE();
    case 114:
      if (lookahead == 'n')
        SKIP(113);
      END_STATE();
    case 115:
      if (lookahead == '!')
        ADVANCE(89);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(63);
      if (lookahead == '/')
        ADVANCE(22);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(78);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '\\')
        SKIP(116);
      if (lookahead == 'e')
        ADVANCE(109);
      if (lookahead == 't')
        ADVANCE(45);
      if (lookahead == '|')
        ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(115);
      END_STATE();
    case 116:
      if (lookahead == 'n')
        SKIP(115);
      END_STATE();
    case 117:
      if (lookahead == '|')
        ADVANCE(51);
      END_STATE();
    case 118:
      if (lookahead == '!')
        ADVANCE(89);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(63);
      if (lookahead == '/')
        ADVANCE(22);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(78);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '\\')
        SKIP(119);
      if (lookahead == 't')
        ADVANCE(45);
      if (lookahead == '|')
        ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(118);
      END_STATE();
    case 119:
      if (lookahead == 'n')
        SKIP(118);
      END_STATE();
    case 120:
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '>')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 122:
      if (lookahead == 'n')
        SKIP(120);
      END_STATE();
    case 123:
      if (lookahead == '!')
        ADVANCE(81);
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '?')
        ADVANCE(33);
      if (lookahead == '\\')
        SKIP(124);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(123);
      END_STATE();
    case 124:
      if (lookahead == 'n')
        SKIP(123);
      END_STATE();
    case 125:
      if (lookahead == '-')
        ADVANCE(111);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '\\')
        SKIP(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(125);
      END_STATE();
    case 126:
      if (lookahead == 'n')
        SKIP(125);
      END_STATE();
    case 127:
      if (lookahead == '!')
        ADVANCE(89);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(63);
      if (lookahead == '/')
        ADVANCE(22);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(78);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '\\')
        SKIP(128);
      if (lookahead == 'e')
        ADVANCE(109);
      if (lookahead == '|')
        ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(127);
      END_STATE();
    case 128:
      if (lookahead == 'n')
        SKIP(127);
      END_STATE();
    case 129:
      if (lookahead == '!')
        ADVANCE(89);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(63);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '/')
        ADVANCE(22);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(78);
      if (lookahead == '>')
        ADVANCE(31);
      if (lookahead == '\\')
        SKIP(130);
      if (lookahead == '|')
        ADVANCE(50);
      if (lookahead == '}')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(129);
      END_STATE();
    case 130:
      if (lookahead == 'n')
        SKIP(129);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 55},
  [2] = {.lex_state = 62},
  [3] = {.lex_state = 65},
  [4] = {.lex_state = 55},
  [5] = {.lex_state = 67},
  [6] = {.lex_state = 55},
  [7] = {.lex_state = 69},
  [8] = {.lex_state = 55},
  [9] = {.lex_state = 67},
  [10] = {.lex_state = 77},
  [11] = {.lex_state = 67},
  [12] = {.lex_state = 69},
  [13] = {.lex_state = 55},
  [14] = {.lex_state = 80},
  [15] = {.lex_state = 67},
  [16] = {.lex_state = 84},
  [17] = {.lex_state = 86},
  [18] = {.lex_state = 84},
  [19] = {.lex_state = 80},
  [20] = {.lex_state = 80},
  [21] = {.lex_state = 55},
  [22] = {.lex_state = 69},
  [23] = {.lex_state = 55},
  [24] = {.lex_state = 88},
  [25] = {.lex_state = 91},
  [26] = {.lex_state = 88},
  [27] = {.lex_state = 88},
  [28] = {.lex_state = 80},
  [29] = {.lex_state = 91},
  [30] = {.lex_state = 93},
  [31] = {.lex_state = 93},
  [32] = {.lex_state = 69},
  [33] = {.lex_state = 86},
  [34] = {.lex_state = 69},
  [35] = {.lex_state = 84},
  [36] = {.lex_state = 96},
  [37] = {.lex_state = 102},
  [38] = {.lex_state = 67},
  [39] = {.lex_state = 88},
  [40] = {.lex_state = 93},
  [41] = {.lex_state = 84},
  [42] = {.lex_state = 69},
  [43] = {.lex_state = 88},
  [44] = {.lex_state = 69},
  [45] = {.lex_state = 88},
  [46] = {.lex_state = 96},
  [47] = {.lex_state = 102},
  [48] = {.lex_state = 69},
  [49] = {.lex_state = 93},
  [50] = {.lex_state = 84},
  [51] = {.lex_state = 86},
  [52] = {.lex_state = 84},
  [53] = {.lex_state = 84},
  [54] = {.lex_state = 96},
  [55] = {.lex_state = 96},
  [56] = {.lex_state = 102},
  [57] = {.lex_state = 96},
  [58] = {.lex_state = 105},
  [59] = {.lex_state = 84},
  [60] = {.lex_state = 84},
  [61] = {.lex_state = 105},
  [62] = {.lex_state = 105},
  [63] = {.lex_state = 96},
  [64] = {.lex_state = 96},
  [65] = {.lex_state = 84},
  [66] = {.lex_state = 91},
  [67] = {.lex_state = 69},
  [68] = {.lex_state = 91},
  [69] = {.lex_state = 88},
  [70] = {.lex_state = 91},
  [71] = {.lex_state = 88},
  [72] = {.lex_state = 96},
  [73] = {.lex_state = 96},
  [74] = {.lex_state = 102},
  [75] = {.lex_state = 107},
  [76] = {.lex_state = 110},
  [77] = {.lex_state = 91},
  [78] = {.lex_state = 113},
  [79] = {.lex_state = 88},
  [80] = {.lex_state = 96},
  [81] = {.lex_state = 96},
  [82] = {.lex_state = 91},
  [83] = {.lex_state = 84},
  [84] = {.lex_state = 84},
  [85] = {.lex_state = 96},
  [86] = {.lex_state = 88},
  [87] = {.lex_state = 96},
  [88] = {.lex_state = 96},
  [89] = {.lex_state = 115},
  [90] = {.lex_state = 118},
  [91] = {.lex_state = 96},
  [92] = {.lex_state = 120},
  [93] = {.lex_state = 96},
  [94] = {.lex_state = 96},
  [95] = {.lex_state = 105},
  [96] = {.lex_state = 123},
  [97] = {.lex_state = 125},
  [98] = {.lex_state = 91},
  [99] = {.lex_state = 88},
  [100] = {.lex_state = 88},
  [101] = {.lex_state = 118},
  [102] = {.lex_state = 120},
  [103] = {.lex_state = 96},
  [104] = {.lex_state = 88},
  [105] = {.lex_state = 123},
  [106] = {.lex_state = 84},
  [107] = {.lex_state = 118},
  [108] = {.lex_state = 84},
  [109] = {.lex_state = 96},
  [110] = {.lex_state = 88},
  [111] = {.lex_state = 118},
  [112] = {.lex_state = 96},
  [113] = {.lex_state = 96},
  [114] = {.lex_state = 118},
  [115] = {.lex_state = 102},
  [116] = {.lex_state = 105},
  [117] = {.lex_state = 96},
  [118] = {.lex_state = 84},
  [119] = {.lex_state = 123},
  [120] = {.lex_state = 69},
  [121] = {.lex_state = 88},
  [122] = {.lex_state = 91},
  [123] = {.lex_state = 96},
  [124] = {.lex_state = 102},
  [125] = {.lex_state = 88},
  [126] = {.lex_state = 91},
  [127] = {.lex_state = 123},
  [128] = {.lex_state = 84},
  [129] = {.lex_state = 96},
  [130] = {.lex_state = 88},
  [131] = {.lex_state = 96},
  [132] = {.lex_state = 96},
  [133] = {.lex_state = 127},
  [134] = {.lex_state = 96},
  [135] = {.lex_state = 118},
  [136] = {.lex_state = 102},
  [137] = {.lex_state = 120},
  [138] = {.lex_state = 120},
  [139] = {.lex_state = 120},
  [140] = {.lex_state = 123},
  [141] = {.lex_state = 84},
  [142] = {.lex_state = 123},
  [143] = {.lex_state = 55},
  [144] = {.lex_state = 123},
  [145] = {.lex_state = 123},
  [146] = {.lex_state = 123},
  [147] = {.lex_state = 80},
  [148] = {.lex_state = 123},
  [149] = {.lex_state = 88},
  [150] = {.lex_state = 127},
  [151] = {.lex_state = 120},
  [152] = {.lex_state = 91},
  [153] = {.lex_state = 127},
  [154] = {.lex_state = 127},
  [155] = {.lex_state = 118},
  [156] = {.lex_state = 96},
  [157] = {.lex_state = 96},
  [158] = {.lex_state = 127},
  [159] = {.lex_state = 120},
  [160] = {.lex_state = 102},
  [161] = {.lex_state = 105},
  [162] = {.lex_state = 120},
  [163] = {.lex_state = 93},
  [164] = {.lex_state = 69},
  [165] = {.lex_state = 123},
  [166] = {.lex_state = 69},
  [167] = {.lex_state = 123},
  [168] = {.lex_state = 96},
  [169] = {.lex_state = 96},
  [170] = {.lex_state = 107},
  [171] = {.lex_state = 120},
  [172] = {.lex_state = 96},
  [173] = {.lex_state = 96},
  [174] = {.lex_state = 96},
  [175] = {.lex_state = 105},
  [176] = {.lex_state = 127},
  [177] = {.lex_state = 102},
  [178] = {.lex_state = 120},
  [179] = {.lex_state = 105},
  [180] = {.lex_state = 120},
  [181] = {.lex_state = 69},
  [182] = {.lex_state = 123},
  [183] = {.lex_state = 123},
  [184] = {.lex_state = 96},
  [185] = {.lex_state = 129},
  [186] = {.lex_state = 96},
  [187] = {.lex_state = 88},
  [188] = {.lex_state = 107},
  [189] = {.lex_state = 88},
  [190] = {.lex_state = 118},
  [191] = {.lex_state = 127},
  [192] = {.lex_state = 120},
  [193] = {.lex_state = 123},
  [194] = {.lex_state = 118},
  [195] = {.lex_state = 96},
  [196] = {.lex_state = 129},
  [197] = {.lex_state = 96},
  [198] = {.lex_state = 120},
  [199] = {.lex_state = 120},
  [200] = {.lex_state = 123},
  [201] = {.lex_state = 96},
  [202] = {.lex_state = 129},
  [203] = {.lex_state = 127},
  [204] = {.lex_state = 120},
  [205] = {.lex_state = 123},
  [206] = {.lex_state = 127},
  [207] = {.lex_state = 96},
  [208] = {.lex_state = 129},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_nu] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(3),
    [sym_end] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [sym__digit] = ACTIONS(1),
    [sym__label] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [sym__top_declarations] = STATE(5),
    [sym__type_declaration] = STATE(5),
    [sym_type_declaration] = STATE(5),
    [sym_dual_type_declaration] = STATE(5),
    [sym__proc_declaration] = STATE(5),
    [sym_proc_declaration] = STATE(5),
    [sym_name] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym__name] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
  [2] = {
    [anon_sym_COLON_COLON] = ACTIONS(10),
    [anon_sym_EQ] = ACTIONS(12),
    [anon_sym_PIPE] = ACTIONS(12),
    [anon_sym_DOT] = ACTIONS(10),
    [anon_sym_RPAREN] = ACTIONS(10),
    [anon_sym_COLON] = ACTIONS(12),
    [anon_sym_BANG] = ACTIONS(12),
    [anon_sym_QMARK] = ACTIONS(10),
    [anon_sym_SEMI] = ACTIONS(10),
    [anon_sym_RBRACE] = ACTIONS(10),
    [anon_sym_LT] = ACTIONS(12),
    [anon_sym_COMMA] = ACTIONS(10),
    [anon_sym_GT] = ACTIONS(12),
    [anon_sym_PLUS] = ACTIONS(10),
    [anon_sym_DASH] = ACTIONS(12),
    [anon_sym_STAR] = ACTIONS(10),
    [anon_sym_SLASH] = ACTIONS(12),
    [anon_sym_GT_EQ] = ACTIONS(10),
    [anon_sym_LT_EQ] = ACTIONS(10),
    [anon_sym_EQ_EQ] = ACTIONS(10),
    [anon_sym_BANG_EQ] = ACTIONS(10),
    [anon_sym_AMP_AMP] = ACTIONS(10),
    [anon_sym_PIPE_PIPE] = ACTIONS(10),
    [sym__name] = ACTIONS(10),
    [sym_comment] = ACTIONS(14),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(16),
    [sym_comment] = ACTIONS(14),
  },
  [4] = {
    [sym_name] = STATE(8),
    [anon_sym_COLON_COLON] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(20),
    [sym__name] = ACTIONS(5),
    [sym_comment] = ACTIONS(14),
  },
  [5] = {
    [sym__top_declarations] = STATE(9),
    [sym__type_declaration] = STATE(9),
    [sym_type_declaration] = STATE(9),
    [sym_dual_type_declaration] = STATE(9),
    [sym__proc_declaration] = STATE(9),
    [sym_proc_declaration] = STATE(9),
    [sym_name] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(22),
    [sym__name] = ACTIONS(5),
    [sym_comment] = ACTIONS(24),
  },
  [6] = {
    [sym_name] = STATE(11),
    [sym__name] = ACTIONS(27),
    [sym_comment] = ACTIONS(14),
  },
  [7] = {
    [sym__term] = STATE(15),
    [sym__para_term] = STATE(16),
    [sym_term] = STATE(17),
    [sym__atomic] = STATE(18),
    [sym__parenthesized_term] = STATE(18),
    [sym_nu] = STATE(18),
    [sym_send] = STATE(18),
    [sym__channel] = STATE(19),
    [sym_recv] = STATE(18),
    [sym_cmd] = STATE(19),
    [sym_name] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_nu] = ACTIONS(31),
    [sym_end] = ACTIONS(33),
    [sym__cmd] = ACTIONS(35),
    [sym__name] = ACTIONS(37),
    [sym_comment] = ACTIONS(14),
  },
  [8] = {
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym_comment] = ACTIONS(14),
  },
  [9] = {
    [sym__top_declarations] = STATE(9),
    [sym__type_declaration] = STATE(9),
    [sym_type_declaration] = STATE(9),
    [sym_dual_type_declaration] = STATE(9),
    [sym__proc_declaration] = STATE(9),
    [sym_proc_declaration] = STATE(9),
    [sym_name] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym__name] = ACTIONS(43),
    [sym_comment] = ACTIONS(46),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(10),
    [anon_sym_PIPE] = ACTIONS(12),
    [anon_sym_DOT] = ACTIONS(10),
    [anon_sym_BANG] = ACTIONS(12),
    [anon_sym_QMARK] = ACTIONS(10),
    [anon_sym_LT] = ACTIONS(12),
    [anon_sym_GT] = ACTIONS(12),
    [anon_sym_PLUS] = ACTIONS(10),
    [anon_sym_DASH] = ACTIONS(12),
    [anon_sym_STAR] = ACTIONS(10),
    [anon_sym_SLASH] = ACTIONS(12),
    [anon_sym_GT_EQ] = ACTIONS(10),
    [anon_sym_LT_EQ] = ACTIONS(10),
    [anon_sym_EQ_EQ] = ACTIONS(10),
    [anon_sym_BANG_EQ] = ACTIONS(10),
    [anon_sym_AMP_AMP] = ACTIONS(10),
    [anon_sym_PIPE_PIPE] = ACTIONS(10),
    [sym__name] = ACTIONS(10),
    [sym_comment] = ACTIONS(10),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(50),
    [sym__name] = ACTIONS(50),
    [sym_comment] = ACTIONS(50),
  },
  [12] = {
    [sym__term] = STATE(24),
    [sym__para_term] = STATE(25),
    [sym_term] = STATE(26),
    [sym__atomic] = STATE(27),
    [sym__parenthesized_term] = STATE(27),
    [sym_nu] = STATE(27),
    [sym_send] = STATE(27),
    [sym__channel] = STATE(28),
    [sym_recv] = STATE(27),
    [sym_cmd] = STATE(28),
    [sym_name] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_nu] = ACTIONS(54),
    [sym_end] = ACTIONS(56),
    [sym__cmd] = ACTIONS(35),
    [sym__name] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [13] = {
    [sym_name] = STATE(30),
    [aux_sym_nu_repeat1] = STATE(31),
    [sym__name] = ACTIONS(5),
    [sym_comment] = ACTIONS(14),
  },
  [14] = {
    [anon_sym_BANG] = ACTIONS(60),
    [anon_sym_QMARK] = ACTIONS(60),
    [sym_comment] = ACTIONS(14),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [sym__name] = ACTIONS(62),
    [sym_comment] = ACTIONS(62),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(64),
    [sym__name] = ACTIONS(64),
    [sym_comment] = ACTIONS(64),
  },
  [17] = {
    [aux_sym__para_term_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_PIPE] = ACTIONS(68),
    [sym__name] = ACTIONS(66),
    [sym_comment] = ACTIONS(70),
  },
  [18] = {
    [aux_sym_term_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(75),
    [sym__name] = ACTIONS(73),
    [sym_comment] = ACTIONS(77),
  },
  [19] = {
    [anon_sym_BANG] = ACTIONS(80),
    [anon_sym_QMARK] = ACTIONS(82),
    [sym_comment] = ACTIONS(14),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(84),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(86),
    [anon_sym_QMARK] = ACTIONS(86),
    [sym__name] = ACTIONS(84),
    [sym_comment] = ACTIONS(84),
  },
  [21] = {
    [sym_name] = STATE(38),
    [sym__name] = ACTIONS(27),
    [sym_comment] = ACTIONS(14),
  },
  [22] = {
    [sym__term] = STATE(39),
    [sym__para_term] = STATE(25),
    [sym_term] = STATE(26),
    [sym__atomic] = STATE(27),
    [sym__parenthesized_term] = STATE(27),
    [sym_nu] = STATE(27),
    [sym_send] = STATE(27),
    [sym__channel] = STATE(28),
    [sym_recv] = STATE(27),
    [sym_cmd] = STATE(28),
    [sym_name] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_nu] = ACTIONS(54),
    [sym_end] = ACTIONS(56),
    [sym__cmd] = ACTIONS(35),
    [sym__name] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [23] = {
    [sym_name] = STATE(30),
    [aux_sym_nu_repeat1] = STATE(40),
    [sym__name] = ACTIONS(5),
    [sym_comment] = ACTIONS(14),
  },
  [24] = {
    [anon_sym_RPAREN] = ACTIONS(88),
    [sym_comment] = ACTIONS(14),
  },
  [25] = {
    [anon_sym_PIPE] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_RPAREN] = ACTIONS(64),
    [anon_sym_SEMI] = ACTIONS(64),
    [anon_sym_RBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(14),
  },
  [26] = {
    [aux_sym__para_term_repeat1] = STATE(43),
    [anon_sym_PIPE] = ACTIONS(90),
    [anon_sym_RPAREN] = ACTIONS(66),
    [sym_comment] = ACTIONS(14),
  },
  [27] = {
    [aux_sym_term_repeat1] = STATE(45),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(14),
  },
  [28] = {
    [anon_sym_BANG] = ACTIONS(94),
    [anon_sym_QMARK] = ACTIONS(96),
    [sym_comment] = ACTIONS(14),
  },
  [29] = {
    [anon_sym_PIPE] = ACTIONS(84),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(86),
    [anon_sym_QMARK] = ACTIONS(86),
    [anon_sym_SEMI] = ACTIONS(84),
    [anon_sym_RBRACE] = ACTIONS(84),
    [sym_comment] = ACTIONS(14),
  },
  [30] = {
    [anon_sym_COLON] = ACTIONS(98),
    [sym__name] = ACTIONS(98),
    [sym_comment] = ACTIONS(14),
  },
  [31] = {
    [sym_name] = STATE(30),
    [aux_sym_nu_repeat1] = STATE(49),
    [anon_sym_COLON] = ACTIONS(100),
    [sym__name] = ACTIONS(5),
    [sym_comment] = ACTIONS(14),
  },
  [32] = {
    [sym_term] = STATE(50),
    [sym__atomic] = STATE(18),
    [sym__parenthesized_term] = STATE(18),
    [sym_nu] = STATE(18),
    [sym_send] = STATE(18),
    [sym__channel] = STATE(19),
    [sym_recv] = STATE(18),
    [sym_cmd] = STATE(19),
    [sym_name] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_nu] = ACTIONS(31),
    [sym_end] = ACTIONS(33),
    [sym__cmd] = ACTIONS(35),
    [sym__name] = ACTIONS(37),
    [sym_comment] = ACTIONS(14),
  },
  [33] = {
    [aux_sym__para_term_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_PIPE] = ACTIONS(68),
    [sym__name] = ACTIONS(102),
    [sym_comment] = ACTIONS(104),
  },
  [34] = {
    [sym__atomic] = STATE(52),
    [sym__parenthesized_term] = STATE(52),
    [sym_nu] = STATE(52),
    [sym_send] = STATE(52),
    [sym__channel] = STATE(19),
    [sym_recv] = STATE(52),
    [sym_cmd] = STATE(19),
    [sym_name] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_nu] = ACTIONS(31),
    [sym_end] = ACTIONS(107),
    [sym__cmd] = ACTIONS(35),
    [sym__name] = ACTIONS(37),
    [sym_comment] = ACTIONS(14),
  },
  [35] = {
    [aux_sym_term_repeat1] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(75),
    [sym__name] = ACTIONS(109),
    [sym_comment] = ACTIONS(111),
  },
  [36] = {
    [sym__term_sendex] = STATE(60),
    [sym__data_constructor] = STATE(61),
    [sym__pattern] = STATE(61),
    [sym__expr] = STATE(60),
    [sym_expr] = STATE(62),
    [sym_expr_condition] = STATE(61),
    [sym_expr_biop] = STATE(61),
    [sym_expr_unop] = STATE(61),
    [sym__parenthesized_expr] = STATE(60),
    [sym_tuple] = STATE(61),
    [sym_unop] = STATE(63),
    [sym_digit] = STATE(61),
    [sym_label] = STATE(60),
    [sym_name] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(114),
    [anon_sym_if] = ACTIONS(116),
    [sym_string] = ACTIONS(118),
    [anon_sym_LT] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(126),
    [sym__label] = ACTIONS(128),
    [sym__name] = ACTIONS(37),
    [sym_comment] = ACTIONS(14),
  },
  [37] = {
    [sym__data_constructor] = STATE(65),
    [sym__term_recvex] = STATE(65),
    [sym_label_guards] = STATE(65),
    [sym__pattern] = STATE(65),
    [sym_tuple] = STATE(65),
    [sym_digit] = STATE(65),
    [sym_name] = STATE(65),
    [anon_sym_LBRACE] = ACTIONS(130),
    [sym_string] = ACTIONS(132),
    [anon_sym_LT] = ACTIONS(120),
    [sym__digit] = ACTIONS(126),
    [sym__name] = ACTIONS(27),
    [sym_comment] = ACTIONS(14),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [sym__name] = ACTIONS(134),
    [sym_comment] = ACTIONS(134),
  },
  [39] = {
    [anon_sym_RPAREN] = ACTIONS(136),
    [sym_comment] = ACTIONS(14),
  },
  [40] = {
    [sym_name] = STATE(30),
    [aux_sym_nu_repeat1] = STATE(49),
    [anon_sym_COLON] = ACTIONS(138),
    [sym__name] = ACTIONS(5),
    [sym_comment] = ACTIONS(14),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_DOT] = ACTIONS(140),
    [sym__name] = ACTIONS(140),
    [sym_comment] = ACTIONS(140),
  },
  [42] = {
    [sym_term] = STATE(68),
    [sym__atomic] = STATE(27),
    [sym__parenthesized_term] = STATE(27),
    [sym_nu] = STATE(27),
    [sym_send] = STATE(27),
    [sym__channel] = STATE(28),
    [sym_recv] = STATE(27),
    [sym_cmd] = STATE(28),
    [sym_name] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_nu] = ACTIONS(54),
    [sym_end] = ACTIONS(56),
    [sym__cmd] = ACTIONS(35),
    [sym__name] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [43] = {
    [aux_sym__para_term_repeat1] = STATE(69),
    [anon_sym_PIPE] = ACTIONS(90),
    [anon_sym_RPAREN] = ACTIONS(102),
    [sym_comment] = ACTIONS(14),
  },
  [44] = {
    [sym__atomic] = STATE(70),
    [sym__parenthesized_term] = STATE(70),
    [sym_nu] = STATE(70),
    [sym_send] = STATE(70),
    [sym__channel] = STATE(28),
    [sym_recv] = STATE(70),
    [sym_cmd] = STATE(28),
    [sym_name] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_nu] = ACTIONS(54),
    [sym_end] = ACTIONS(142),
    [sym__cmd] = ACTIONS(35),
    [sym__name] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [45] = {
    [aux_sym_term_repeat1] = STATE(71),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(109),
    [sym_comment] = ACTIONS(14),
  },
  [46] = {
    [sym__term_sendex] = STATE(77),
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym__expr] = STATE(77),
    [sym_expr] = STATE(79),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym__parenthesized_expr] = STATE(77),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(80),
    [sym_digit] = STATE(78),
    [sym_label] = STATE(77),
    [sym_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_if] = ACTIONS(146),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__label] = ACTIONS(154),
    [sym__name] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [47] = {
    [sym__data_constructor] = STATE(82),
    [sym__term_recvex] = STATE(82),
    [sym_label_guards] = STATE(82),
    [sym__pattern] = STATE(82),
    [sym_tuple] = STATE(82),
    [sym_digit] = STATE(82),
    [sym_name] = STATE(82),
    [anon_sym_LBRACE] = ACTIONS(156),
    [sym_string] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(150),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(5),
    [sym_comment] = ACTIONS(14),
  },
  [48] = {
    [sym__term] = STATE(83),
    [sym__para_term] = STATE(16),
    [sym_term] = STATE(84),
    [sym__atomic] = STATE(18),
    [sym__parenthesized_term] = STATE(18),
    [sym_nu] = STATE(18),
    [sym_send] = STATE(18),
    [sym__channel] = STATE(19),
    [sym_recv] = STATE(18),
    [sym_cmd] = STATE(19),
    [sym_name] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_nu] = ACTIONS(31),
    [sym_end] = ACTIONS(33),
    [sym__cmd] = ACTIONS(35),
    [sym__name] = ACTIONS(37),
    [sym_comment] = ACTIONS(14),
  },
  [49] = {
    [sym_name] = STATE(30),
    [aux_sym_nu_repeat1] = STATE(49),
    [anon_sym_COLON] = ACTIONS(160),
    [sym__name] = ACTIONS(162),
    [sym_comment] = ACTIONS(14),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [anon_sym_PIPE] = ACTIONS(165),
    [anon_sym_DOT] = ACTIONS(165),
    [sym__name] = ACTIONS(165),
    [sym_comment] = ACTIONS(165),
  },
  [51] = {
    [aux_sym__para_term_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(165),
    [anon_sym_PIPE] = ACTIONS(167),
    [sym__name] = ACTIONS(165),
    [sym_comment] = ACTIONS(170),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_DOT] = ACTIONS(173),
    [sym__name] = ACTIONS(173),
    [sym_comment] = ACTIONS(173),
  },
  [53] = {
    [aux_sym_term_repeat1] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_DOT] = ACTIONS(175),
    [sym__name] = ACTIONS(173),
    [sym_comment] = ACTIONS(178),
  },
  [54] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(86),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(87),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(181),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [55] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(90),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(91),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(183),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(185),
    [sym_comment] = ACTIONS(14),
  },
  [56] = {
    [sym__data_constructor] = STATE(92),
    [sym__pattern] = STATE(92),
    [sym_tuple] = STATE(92),
    [sym_digit] = STATE(92),
    [sym_name] = STATE(92),
    [sym_string] = ACTIONS(187),
    [anon_sym_LT] = ACTIONS(150),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(5),
    [sym_comment] = ACTIONS(14),
  },
  [57] = {
    [anon_sym_if] = ACTIONS(189),
    [sym_string] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(191),
    [sym__digit] = ACTIONS(191),
    [sym__name] = ACTIONS(189),
    [sym_comment] = ACTIONS(14),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_DOT] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(195),
    [anon_sym_GT_EQ] = ACTIONS(193),
    [anon_sym_LT_EQ] = ACTIONS(193),
    [anon_sym_EQ_EQ] = ACTIONS(193),
    [anon_sym_BANG_EQ] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(193),
    [anon_sym_PIPE_PIPE] = ACTIONS(193),
    [sym__name] = ACTIONS(193),
    [sym_comment] = ACTIONS(193),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_PIPE] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(197),
    [sym__name] = ACTIONS(197),
    [sym_comment] = ACTIONS(197),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_PIPE] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(199),
    [sym__name] = ACTIONS(199),
    [sym_comment] = ACTIONS(199),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(203),
    [anon_sym_GT_EQ] = ACTIONS(201),
    [anon_sym_LT_EQ] = ACTIONS(201),
    [anon_sym_EQ_EQ] = ACTIONS(201),
    [anon_sym_BANG_EQ] = ACTIONS(201),
    [anon_sym_AMP_AMP] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(201),
    [sym__name] = ACTIONS(201),
    [sym_comment] = ACTIONS(201),
  },
  [62] = {
    [sym_biop] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym__name] = ACTIONS(205),
    [sym_comment] = ACTIONS(213),
  },
  [63] = {
    [sym__data_constructor] = STATE(61),
    [sym__pattern] = STATE(61),
    [sym_expr] = STATE(95),
    [sym_expr_condition] = STATE(61),
    [sym_expr_biop] = STATE(61),
    [sym_expr_unop] = STATE(61),
    [sym_tuple] = STATE(61),
    [sym_unop] = STATE(63),
    [sym_digit] = STATE(61),
    [sym_name] = STATE(61),
    [anon_sym_if] = ACTIONS(116),
    [sym_string] = ACTIONS(118),
    [anon_sym_LT] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(126),
    [sym__name] = ACTIONS(37),
    [sym_comment] = ACTIONS(14),
  },
  [64] = {
    [sym_label_case] = STATE(96),
    [sym_label] = STATE(97),
    [sym__label] = ACTIONS(154),
    [sym_comment] = ACTIONS(14),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(216),
    [anon_sym_PIPE] = ACTIONS(216),
    [anon_sym_DOT] = ACTIONS(216),
    [sym__name] = ACTIONS(216),
    [sym_comment] = ACTIONS(216),
  },
  [66] = {
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_DOT] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_SEMI] = ACTIONS(140),
    [anon_sym_RBRACE] = ACTIONS(140),
    [sym_comment] = ACTIONS(14),
  },
  [67] = {
    [sym__term] = STATE(98),
    [sym__para_term] = STATE(25),
    [sym_term] = STATE(99),
    [sym__atomic] = STATE(27),
    [sym__parenthesized_term] = STATE(27),
    [sym_nu] = STATE(27),
    [sym_send] = STATE(27),
    [sym__channel] = STATE(28),
    [sym_recv] = STATE(27),
    [sym_cmd] = STATE(28),
    [sym_name] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_nu] = ACTIONS(54),
    [sym_end] = ACTIONS(56),
    [sym__cmd] = ACTIONS(35),
    [sym__name] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [68] = {
    [anon_sym_PIPE] = ACTIONS(165),
    [anon_sym_DOT] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_RBRACE] = ACTIONS(165),
    [sym_comment] = ACTIONS(14),
  },
  [69] = {
    [aux_sym__para_term_repeat1] = STATE(69),
    [anon_sym_PIPE] = ACTIONS(218),
    [anon_sym_RPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(14),
  },
  [70] = {
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_DOT] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [sym_comment] = ACTIONS(14),
  },
  [71] = {
    [aux_sym_term_repeat1] = STATE(71),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_DOT] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(173),
    [sym_comment] = ACTIONS(14),
  },
  [72] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(100),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(87),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(181),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [73] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(101),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(91),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(183),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(185),
    [sym_comment] = ACTIONS(14),
  },
  [74] = {
    [sym__data_constructor] = STATE(102),
    [sym__pattern] = STATE(102),
    [sym_tuple] = STATE(102),
    [sym_digit] = STATE(102),
    [sym_name] = STATE(102),
    [sym_string] = ACTIONS(224),
    [anon_sym_LT] = ACTIONS(150),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(5),
    [sym_comment] = ACTIONS(14),
  },
  [75] = {
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_DOT] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_SEMI] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(193),
    [anon_sym_then] = ACTIONS(193),
    [anon_sym_else] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(195),
    [anon_sym_GT_EQ] = ACTIONS(193),
    [anon_sym_LT_EQ] = ACTIONS(193),
    [anon_sym_EQ_EQ] = ACTIONS(193),
    [anon_sym_BANG_EQ] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(193),
    [anon_sym_PIPE_PIPE] = ACTIONS(193),
    [sym_comment] = ACTIONS(14),
  },
  [76] = {
    [anon_sym_PIPE] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(197),
    [anon_sym_RBRACE] = ACTIONS(197),
    [anon_sym_DASH_GT] = ACTIONS(197),
    [sym_comment] = ACTIONS(14),
  },
  [77] = {
    [anon_sym_PIPE] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(199),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_SEMI] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
    [sym_comment] = ACTIONS(14),
  },
  [78] = {
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(201),
    [anon_sym_SEMI] = ACTIONS(201),
    [anon_sym_RBRACE] = ACTIONS(201),
    [anon_sym_then] = ACTIONS(201),
    [anon_sym_else] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(203),
    [anon_sym_GT_EQ] = ACTIONS(201),
    [anon_sym_LT_EQ] = ACTIONS(201),
    [anon_sym_EQ_EQ] = ACTIONS(201),
    [anon_sym_BANG_EQ] = ACTIONS(201),
    [anon_sym_AMP_AMP] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(201),
    [sym_comment] = ACTIONS(14),
  },
  [79] = {
    [sym_biop] = STATE(103),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_comment] = ACTIONS(14),
  },
  [80] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(104),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(80),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(146),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [81] = {
    [sym_label_case] = STATE(105),
    [sym_label] = STATE(97),
    [sym__label] = ACTIONS(154),
    [sym_comment] = ACTIONS(14),
  },
  [82] = {
    [anon_sym_PIPE] = ACTIONS(216),
    [anon_sym_DOT] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_SEMI] = ACTIONS(216),
    [anon_sym_RBRACE] = ACTIONS(216),
    [sym_comment] = ACTIONS(14),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(226),
    [anon_sym_PIPE] = ACTIONS(226),
    [anon_sym_DOT] = ACTIONS(226),
    [sym__name] = ACTIONS(226),
    [sym_comment] = ACTIONS(226),
  },
  [84] = {
    [aux_sym__para_term_repeat1] = STATE(106),
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_DOT] = ACTIONS(66),
    [sym__name] = ACTIONS(66),
    [sym_comment] = ACTIONS(70),
  },
  [85] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(107),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(91),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(183),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(185),
    [sym_comment] = ACTIONS(14),
  },
  [86] = {
    [sym_biop] = STATE(109),
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_comment] = ACTIONS(14),
  },
  [87] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(110),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(87),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(181),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [88] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(111),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(91),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(183),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(185),
    [sym_comment] = ACTIONS(14),
  },
  [89] = {
    [anon_sym_then] = ACTIONS(10),
    [anon_sym_else] = ACTIONS(10),
    [anon_sym_LT] = ACTIONS(12),
    [anon_sym_GT] = ACTIONS(12),
    [anon_sym_PLUS] = ACTIONS(10),
    [anon_sym_DASH] = ACTIONS(12),
    [anon_sym_STAR] = ACTIONS(10),
    [anon_sym_SLASH] = ACTIONS(12),
    [anon_sym_GT_EQ] = ACTIONS(10),
    [anon_sym_LT_EQ] = ACTIONS(10),
    [anon_sym_EQ_EQ] = ACTIONS(10),
    [anon_sym_BANG_EQ] = ACTIONS(10),
    [anon_sym_AMP_AMP] = ACTIONS(10),
    [anon_sym_PIPE_PIPE] = ACTIONS(10),
    [sym_comment] = ACTIONS(14),
  },
  [90] = {
    [sym_biop] = STATE(113),
    [anon_sym_then] = ACTIONS(230),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_comment] = ACTIONS(14),
  },
  [91] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(114),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(91),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(183),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(185),
    [sym_comment] = ACTIONS(14),
  },
  [92] = {
    [anon_sym_COMMA] = ACTIONS(232),
    [sym_comment] = ACTIONS(14),
  },
  [93] = {
    [anon_sym_if] = ACTIONS(234),
    [sym_string] = ACTIONS(236),
    [anon_sym_LT] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(234),
    [anon_sym_TILDE] = ACTIONS(236),
    [sym__digit] = ACTIONS(236),
    [sym__name] = ACTIONS(234),
    [sym_comment] = ACTIONS(14),
  },
  [94] = {
    [sym__data_constructor] = STATE(61),
    [sym__pattern] = STATE(61),
    [sym_expr] = STATE(116),
    [sym_expr_condition] = STATE(61),
    [sym_expr_biop] = STATE(61),
    [sym_expr_unop] = STATE(61),
    [sym_tuple] = STATE(61),
    [sym_unop] = STATE(63),
    [sym_digit] = STATE(61),
    [sym_name] = STATE(61),
    [anon_sym_if] = ACTIONS(116),
    [sym_string] = ACTIONS(118),
    [anon_sym_LT] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(126),
    [sym__name] = ACTIONS(37),
    [sym_comment] = ACTIONS(14),
  },
  [95] = {
    [sym_biop] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(238),
    [anon_sym_PIPE] = ACTIONS(240),
    [anon_sym_DOT] = ACTIONS(238),
    [anon_sym_LT] = ACTIONS(240),
    [anon_sym_GT] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(240),
    [anon_sym_GT_EQ] = ACTIONS(238),
    [anon_sym_LT_EQ] = ACTIONS(238),
    [anon_sym_EQ_EQ] = ACTIONS(238),
    [anon_sym_BANG_EQ] = ACTIONS(238),
    [anon_sym_AMP_AMP] = ACTIONS(238),
    [anon_sym_PIPE_PIPE] = ACTIONS(238),
    [sym__name] = ACTIONS(238),
    [sym_comment] = ACTIONS(242),
  },
  [96] = {
    [aux_sym_label_guards_repeat1] = STATE(119),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(247),
    [sym_comment] = ACTIONS(14),
  },
  [97] = {
    [anon_sym_DASH_GT] = ACTIONS(249),
    [sym_comment] = ACTIONS(14),
  },
  [98] = {
    [anon_sym_PIPE] = ACTIONS(226),
    [anon_sym_DOT] = ACTIONS(226),
    [anon_sym_RPAREN] = ACTIONS(226),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_RBRACE] = ACTIONS(226),
    [sym_comment] = ACTIONS(14),
  },
  [99] = {
    [aux_sym__para_term_repeat1] = STATE(121),
    [anon_sym_PIPE] = ACTIONS(90),
    [anon_sym_DOT] = ACTIONS(66),
    [anon_sym_RPAREN] = ACTIONS(66),
    [sym_comment] = ACTIONS(14),
  },
  [100] = {
    [sym_biop] = STATE(109),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_comment] = ACTIONS(14),
  },
  [101] = {
    [sym_biop] = STATE(113),
    [anon_sym_then] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_comment] = ACTIONS(14),
  },
  [102] = {
    [anon_sym_COMMA] = ACTIONS(255),
    [sym_comment] = ACTIONS(14),
  },
  [103] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(125),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(80),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(146),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [104] = {
    [sym_biop] = STATE(103),
    [anon_sym_PIPE] = ACTIONS(240),
    [anon_sym_DOT] = ACTIONS(238),
    [anon_sym_RPAREN] = ACTIONS(238),
    [anon_sym_LT] = ACTIONS(240),
    [anon_sym_GT] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(240),
    [anon_sym_GT_EQ] = ACTIONS(238),
    [anon_sym_LT_EQ] = ACTIONS(238),
    [anon_sym_EQ_EQ] = ACTIONS(238),
    [anon_sym_BANG_EQ] = ACTIONS(238),
    [anon_sym_AMP_AMP] = ACTIONS(238),
    [anon_sym_PIPE_PIPE] = ACTIONS(238),
    [sym_comment] = ACTIONS(14),
  },
  [105] = {
    [aux_sym_label_guards_repeat1] = STATE(127),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(257),
    [sym_comment] = ACTIONS(14),
  },
  [106] = {
    [aux_sym__para_term_repeat1] = STATE(128),
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_DOT] = ACTIONS(102),
    [sym__name] = ACTIONS(102),
    [sym_comment] = ACTIONS(104),
  },
  [107] = {
    [sym_biop] = STATE(113),
    [anon_sym_then] = ACTIONS(259),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_comment] = ACTIONS(14),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [anon_sym_PIPE] = ACTIONS(261),
    [anon_sym_DOT] = ACTIONS(261),
    [sym__name] = ACTIONS(261),
    [sym_comment] = ACTIONS(261),
  },
  [109] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(130),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(87),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(181),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [110] = {
    [sym_biop] = STATE(109),
    [anon_sym_RPAREN] = ACTIONS(238),
    [anon_sym_LT] = ACTIONS(240),
    [anon_sym_GT] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(240),
    [anon_sym_GT_EQ] = ACTIONS(238),
    [anon_sym_LT_EQ] = ACTIONS(238),
    [anon_sym_EQ_EQ] = ACTIONS(238),
    [anon_sym_BANG_EQ] = ACTIONS(238),
    [anon_sym_AMP_AMP] = ACTIONS(238),
    [anon_sym_PIPE_PIPE] = ACTIONS(238),
    [sym_comment] = ACTIONS(14),
  },
  [111] = {
    [sym_biop] = STATE(113),
    [anon_sym_then] = ACTIONS(263),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_comment] = ACTIONS(14),
  },
  [112] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(133),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(134),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(265),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(185),
    [sym_comment] = ACTIONS(14),
  },
  [113] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(135),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(91),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(183),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(185),
    [sym_comment] = ACTIONS(14),
  },
  [114] = {
    [sym_biop] = STATE(113),
    [anon_sym_then] = ACTIONS(238),
    [anon_sym_LT] = ACTIONS(240),
    [anon_sym_GT] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(240),
    [anon_sym_GT_EQ] = ACTIONS(238),
    [anon_sym_LT_EQ] = ACTIONS(238),
    [anon_sym_EQ_EQ] = ACTIONS(238),
    [anon_sym_BANG_EQ] = ACTIONS(238),
    [anon_sym_AMP_AMP] = ACTIONS(238),
    [anon_sym_PIPE_PIPE] = ACTIONS(238),
    [sym_comment] = ACTIONS(14),
  },
  [115] = {
    [sym__data_constructor] = STATE(139),
    [sym__pattern] = STATE(139),
    [sym_tuple] = STATE(139),
    [sym_digit] = STATE(139),
    [sym_name] = STATE(139),
    [sym_string] = ACTIONS(267),
    [anon_sym_LT] = ACTIONS(269),
    [sym__digit] = ACTIONS(271),
    [sym__name] = ACTIONS(273),
    [sym_comment] = ACTIONS(14),
  },
  [116] = {
    [sym_biop] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(275),
    [anon_sym_PIPE] = ACTIONS(277),
    [anon_sym_DOT] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(275),
    [anon_sym_SLASH] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(275),
    [anon_sym_LT_EQ] = ACTIONS(275),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_BANG_EQ] = ACTIONS(275),
    [anon_sym_AMP_AMP] = ACTIONS(275),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
    [sym__name] = ACTIONS(275),
    [sym_comment] = ACTIONS(279),
  },
  [117] = {
    [sym_label_case] = STATE(140),
    [sym_label] = STATE(97),
    [sym__label] = ACTIONS(154),
    [sym_comment] = ACTIONS(14),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(282),
    [anon_sym_PIPE] = ACTIONS(282),
    [anon_sym_DOT] = ACTIONS(282),
    [sym__name] = ACTIONS(282),
    [sym_comment] = ACTIONS(282),
  },
  [119] = {
    [aux_sym_label_guards_repeat1] = STATE(142),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(284),
    [sym_comment] = ACTIONS(14),
  },
  [120] = {
    [sym__term] = STATE(144),
    [sym__para_term] = STATE(25),
    [sym_term] = STATE(145),
    [sym__atomic] = STATE(146),
    [sym__parenthesized_term] = STATE(146),
    [sym_nu] = STATE(146),
    [sym_send] = STATE(146),
    [sym__channel] = STATE(147),
    [sym_recv] = STATE(146),
    [sym_cmd] = STATE(147),
    [sym_name] = STATE(148),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_nu] = ACTIONS(286),
    [sym_end] = ACTIONS(288),
    [sym__cmd] = ACTIONS(35),
    [sym__name] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [121] = {
    [aux_sym__para_term_repeat1] = STATE(149),
    [anon_sym_PIPE] = ACTIONS(90),
    [anon_sym_DOT] = ACTIONS(102),
    [anon_sym_RPAREN] = ACTIONS(102),
    [sym_comment] = ACTIONS(14),
  },
  [122] = {
    [anon_sym_PIPE] = ACTIONS(261),
    [anon_sym_DOT] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_SEMI] = ACTIONS(261),
    [anon_sym_RBRACE] = ACTIONS(261),
    [sym_comment] = ACTIONS(14),
  },
  [123] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(150),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(134),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(265),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(185),
    [sym_comment] = ACTIONS(14),
  },
  [124] = {
    [sym__data_constructor] = STATE(151),
    [sym__pattern] = STATE(151),
    [sym_tuple] = STATE(151),
    [sym_digit] = STATE(151),
    [sym_name] = STATE(151),
    [sym_string] = ACTIONS(290),
    [anon_sym_LT] = ACTIONS(269),
    [sym__digit] = ACTIONS(271),
    [sym__name] = ACTIONS(273),
    [sym_comment] = ACTIONS(14),
  },
  [125] = {
    [sym_biop] = STATE(103),
    [anon_sym_PIPE] = ACTIONS(277),
    [anon_sym_DOT] = ACTIONS(275),
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(275),
    [anon_sym_SLASH] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(275),
    [anon_sym_LT_EQ] = ACTIONS(275),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_BANG_EQ] = ACTIONS(275),
    [anon_sym_AMP_AMP] = ACTIONS(275),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
    [sym_comment] = ACTIONS(14),
  },
  [126] = {
    [anon_sym_PIPE] = ACTIONS(282),
    [anon_sym_DOT] = ACTIONS(282),
    [anon_sym_RPAREN] = ACTIONS(282),
    [anon_sym_SEMI] = ACTIONS(282),
    [anon_sym_RBRACE] = ACTIONS(282),
    [sym_comment] = ACTIONS(14),
  },
  [127] = {
    [aux_sym_label_guards_repeat1] = STATE(142),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(292),
    [sym_comment] = ACTIONS(14),
  },
  [128] = {
    [aux_sym__para_term_repeat1] = STATE(128),
    [ts_builtin_sym_end] = ACTIONS(165),
    [anon_sym_PIPE] = ACTIONS(167),
    [anon_sym_DOT] = ACTIONS(165),
    [sym__name] = ACTIONS(165),
    [sym_comment] = ACTIONS(170),
  },
  [129] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(153),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(134),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(265),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(185),
    [sym_comment] = ACTIONS(14),
  },
  [130] = {
    [sym_biop] = STATE(109),
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(275),
    [anon_sym_SLASH] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(275),
    [anon_sym_LT_EQ] = ACTIONS(275),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_BANG_EQ] = ACTIONS(275),
    [anon_sym_AMP_AMP] = ACTIONS(275),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
    [sym_comment] = ACTIONS(14),
  },
  [131] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(154),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(134),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(265),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(185),
    [sym_comment] = ACTIONS(14),
  },
  [132] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(155),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(91),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(183),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(185),
    [sym_comment] = ACTIONS(14),
  },
  [133] = {
    [sym_biop] = STATE(157),
    [anon_sym_else] = ACTIONS(294),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_comment] = ACTIONS(14),
  },
  [134] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(158),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(134),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(265),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(185),
    [sym_comment] = ACTIONS(14),
  },
  [135] = {
    [sym_biop] = STATE(113),
    [anon_sym_then] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(275),
    [anon_sym_SLASH] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(275),
    [anon_sym_LT_EQ] = ACTIONS(275),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_BANG_EQ] = ACTIONS(275),
    [anon_sym_AMP_AMP] = ACTIONS(275),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
    [sym_comment] = ACTIONS(14),
  },
  [136] = {
    [sym__data_constructor] = STATE(159),
    [sym__pattern] = STATE(159),
    [sym_tuple] = STATE(159),
    [sym_digit] = STATE(159),
    [sym_name] = STATE(159),
    [sym_string] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(150),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(5),
    [sym_comment] = ACTIONS(14),
  },
  [137] = {
    [anon_sym_COMMA] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(193),
    [sym_comment] = ACTIONS(14),
  },
  [138] = {
    [anon_sym_COMMA] = ACTIONS(10),
    [anon_sym_GT] = ACTIONS(10),
    [sym_comment] = ACTIONS(14),
  },
  [139] = {
    [aux_sym_tuple_repeat1] = STATE(162),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(300),
    [sym_comment] = ACTIONS(14),
  },
  [140] = {
    [anon_sym_SEMI] = ACTIONS(302),
    [anon_sym_RBRACE] = ACTIONS(302),
    [sym_comment] = ACTIONS(14),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(304),
    [anon_sym_PIPE] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(304),
    [sym__name] = ACTIONS(304),
    [sym_comment] = ACTIONS(304),
  },
  [142] = {
    [aux_sym_label_guards_repeat1] = STATE(142),
    [anon_sym_SEMI] = ACTIONS(306),
    [anon_sym_RBRACE] = ACTIONS(302),
    [sym_comment] = ACTIONS(14),
  },
  [143] = {
    [sym_name] = STATE(30),
    [aux_sym_nu_repeat1] = STATE(163),
    [sym__name] = ACTIONS(5),
    [sym_comment] = ACTIONS(14),
  },
  [144] = {
    [anon_sym_SEMI] = ACTIONS(309),
    [anon_sym_RBRACE] = ACTIONS(309),
    [sym_comment] = ACTIONS(14),
  },
  [145] = {
    [aux_sym__para_term_repeat1] = STATE(165),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_SEMI] = ACTIONS(66),
    [anon_sym_RBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(14),
  },
  [146] = {
    [aux_sym_term_repeat1] = STATE(167),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(313),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(14),
  },
  [147] = {
    [anon_sym_BANG] = ACTIONS(315),
    [anon_sym_QMARK] = ACTIONS(96),
    [sym_comment] = ACTIONS(14),
  },
  [148] = {
    [anon_sym_PIPE] = ACTIONS(84),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(86),
    [anon_sym_QMARK] = ACTIONS(86),
    [anon_sym_SEMI] = ACTIONS(309),
    [anon_sym_RBRACE] = ACTIONS(309),
    [sym_comment] = ACTIONS(14),
  },
  [149] = {
    [aux_sym__para_term_repeat1] = STATE(149),
    [anon_sym_PIPE] = ACTIONS(218),
    [anon_sym_DOT] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(14),
  },
  [150] = {
    [sym_biop] = STATE(157),
    [anon_sym_else] = ACTIONS(317),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_comment] = ACTIONS(14),
  },
  [151] = {
    [aux_sym_tuple_repeat1] = STATE(171),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(319),
    [sym_comment] = ACTIONS(14),
  },
  [152] = {
    [anon_sym_PIPE] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(304),
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_SEMI] = ACTIONS(304),
    [anon_sym_RBRACE] = ACTIONS(304),
    [sym_comment] = ACTIONS(14),
  },
  [153] = {
    [sym_biop] = STATE(157),
    [anon_sym_else] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_comment] = ACTIONS(14),
  },
  [154] = {
    [sym_biop] = STATE(157),
    [anon_sym_else] = ACTIONS(323),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_comment] = ACTIONS(14),
  },
  [155] = {
    [sym_biop] = STATE(113),
    [anon_sym_then] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_comment] = ACTIONS(14),
  },
  [156] = {
    [sym__data_constructor] = STATE(61),
    [sym__pattern] = STATE(61),
    [sym_expr] = STATE(175),
    [sym_expr_condition] = STATE(61),
    [sym_expr_biop] = STATE(61),
    [sym_expr_unop] = STATE(61),
    [sym_tuple] = STATE(61),
    [sym_unop] = STATE(63),
    [sym_digit] = STATE(61),
    [sym_name] = STATE(61),
    [anon_sym_if] = ACTIONS(116),
    [sym_string] = ACTIONS(118),
    [anon_sym_LT] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(126),
    [sym__name] = ACTIONS(37),
    [sym_comment] = ACTIONS(14),
  },
  [157] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(176),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(134),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(265),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(185),
    [sym_comment] = ACTIONS(14),
  },
  [158] = {
    [sym_biop] = STATE(157),
    [anon_sym_else] = ACTIONS(238),
    [anon_sym_LT] = ACTIONS(240),
    [anon_sym_GT] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(240),
    [anon_sym_GT_EQ] = ACTIONS(238),
    [anon_sym_LT_EQ] = ACTIONS(238),
    [anon_sym_EQ_EQ] = ACTIONS(238),
    [anon_sym_BANG_EQ] = ACTIONS(238),
    [anon_sym_AMP_AMP] = ACTIONS(238),
    [anon_sym_PIPE_PIPE] = ACTIONS(238),
    [sym_comment] = ACTIONS(14),
  },
  [159] = {
    [anon_sym_COMMA] = ACTIONS(327),
    [sym_comment] = ACTIONS(14),
  },
  [160] = {
    [sym__data_constructor] = STATE(178),
    [sym__pattern] = STATE(178),
    [sym_tuple] = STATE(178),
    [sym_digit] = STATE(178),
    [sym_name] = STATE(178),
    [sym_string] = ACTIONS(329),
    [anon_sym_LT] = ACTIONS(269),
    [sym__digit] = ACTIONS(271),
    [sym__name] = ACTIONS(273),
    [sym_comment] = ACTIONS(14),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [anon_sym_PIPE] = ACTIONS(333),
    [anon_sym_DOT] = ACTIONS(331),
    [anon_sym_LT] = ACTIONS(333),
    [anon_sym_GT] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(331),
    [anon_sym_SLASH] = ACTIONS(333),
    [anon_sym_GT_EQ] = ACTIONS(331),
    [anon_sym_LT_EQ] = ACTIONS(331),
    [anon_sym_EQ_EQ] = ACTIONS(331),
    [anon_sym_BANG_EQ] = ACTIONS(331),
    [anon_sym_AMP_AMP] = ACTIONS(331),
    [anon_sym_PIPE_PIPE] = ACTIONS(331),
    [sym__name] = ACTIONS(331),
    [sym_comment] = ACTIONS(331),
  },
  [162] = {
    [aux_sym_tuple_repeat1] = STATE(180),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(335),
    [sym_comment] = ACTIONS(14),
  },
  [163] = {
    [sym_name] = STATE(30),
    [aux_sym_nu_repeat1] = STATE(49),
    [anon_sym_COLON] = ACTIONS(337),
    [sym__name] = ACTIONS(5),
    [sym_comment] = ACTIONS(14),
  },
  [164] = {
    [sym_term] = STATE(68),
    [sym__atomic] = STATE(146),
    [sym__parenthesized_term] = STATE(146),
    [sym_nu] = STATE(146),
    [sym_send] = STATE(146),
    [sym__channel] = STATE(147),
    [sym_recv] = STATE(146),
    [sym_cmd] = STATE(147),
    [sym_name] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_nu] = ACTIONS(286),
    [sym_end] = ACTIONS(288),
    [sym__cmd] = ACTIONS(35),
    [sym__name] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [165] = {
    [aux_sym__para_term_repeat1] = STATE(182),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_SEMI] = ACTIONS(102),
    [anon_sym_RBRACE] = ACTIONS(102),
    [sym_comment] = ACTIONS(14),
  },
  [166] = {
    [sym__atomic] = STATE(70),
    [sym__parenthesized_term] = STATE(70),
    [sym_nu] = STATE(70),
    [sym_send] = STATE(70),
    [sym__channel] = STATE(147),
    [sym_recv] = STATE(70),
    [sym_cmd] = STATE(147),
    [sym_name] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_nu] = ACTIONS(286),
    [sym_end] = ACTIONS(142),
    [sym__cmd] = ACTIONS(35),
    [sym__name] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [167] = {
    [aux_sym_term_repeat1] = STATE(183),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(313),
    [anon_sym_SEMI] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(14),
  },
  [168] = {
    [sym__term_sendex] = STATE(77),
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym__expr] = STATE(77),
    [sym_expr] = STATE(185),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym__parenthesized_expr] = STATE(77),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(186),
    [sym_digit] = STATE(78),
    [sym_label] = STATE(77),
    [sym_name] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_if] = ACTIONS(339),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__label] = ACTIONS(154),
    [sym__name] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [169] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(187),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(80),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(146),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [170] = {
    [anon_sym_PIPE] = ACTIONS(333),
    [anon_sym_DOT] = ACTIONS(331),
    [anon_sym_RPAREN] = ACTIONS(331),
    [anon_sym_SEMI] = ACTIONS(331),
    [anon_sym_RBRACE] = ACTIONS(331),
    [anon_sym_then] = ACTIONS(331),
    [anon_sym_else] = ACTIONS(331),
    [anon_sym_LT] = ACTIONS(333),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_GT] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(331),
    [anon_sym_SLASH] = ACTIONS(333),
    [anon_sym_GT_EQ] = ACTIONS(331),
    [anon_sym_LT_EQ] = ACTIONS(331),
    [anon_sym_EQ_EQ] = ACTIONS(331),
    [anon_sym_BANG_EQ] = ACTIONS(331),
    [anon_sym_AMP_AMP] = ACTIONS(331),
    [anon_sym_PIPE_PIPE] = ACTIONS(331),
    [sym_comment] = ACTIONS(14),
  },
  [171] = {
    [aux_sym_tuple_repeat1] = STATE(180),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(341),
    [sym_comment] = ACTIONS(14),
  },
  [172] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(189),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(87),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(181),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [173] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(190),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(91),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(183),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(185),
    [sym_comment] = ACTIONS(14),
  },
  [174] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(191),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(134),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(265),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(185),
    [sym_comment] = ACTIONS(14),
  },
  [175] = {
    [sym_biop] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(343),
    [anon_sym_PIPE] = ACTIONS(345),
    [anon_sym_DOT] = ACTIONS(343),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym__name] = ACTIONS(343),
    [sym_comment] = ACTIONS(347),
  },
  [176] = {
    [sym_biop] = STATE(157),
    [anon_sym_else] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(275),
    [anon_sym_SLASH] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(275),
    [anon_sym_LT_EQ] = ACTIONS(275),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_BANG_EQ] = ACTIONS(275),
    [anon_sym_AMP_AMP] = ACTIONS(275),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
    [sym_comment] = ACTIONS(14),
  },
  [177] = {
    [sym__data_constructor] = STATE(192),
    [sym__pattern] = STATE(192),
    [sym_tuple] = STATE(192),
    [sym_digit] = STATE(192),
    [sym_name] = STATE(192),
    [sym_string] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(269),
    [sym__digit] = ACTIONS(271),
    [sym__name] = ACTIONS(273),
    [sym_comment] = ACTIONS(14),
  },
  [178] = {
    [anon_sym_COMMA] = ACTIONS(352),
    [anon_sym_GT] = ACTIONS(352),
    [sym_comment] = ACTIONS(14),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(354),
    [anon_sym_PIPE] = ACTIONS(356),
    [anon_sym_DOT] = ACTIONS(354),
    [anon_sym_LT] = ACTIONS(356),
    [anon_sym_GT] = ACTIONS(356),
    [anon_sym_PLUS] = ACTIONS(354),
    [anon_sym_DASH] = ACTIONS(356),
    [anon_sym_STAR] = ACTIONS(354),
    [anon_sym_SLASH] = ACTIONS(356),
    [anon_sym_GT_EQ] = ACTIONS(354),
    [anon_sym_LT_EQ] = ACTIONS(354),
    [anon_sym_EQ_EQ] = ACTIONS(354),
    [anon_sym_BANG_EQ] = ACTIONS(354),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(354),
    [sym__name] = ACTIONS(354),
    [sym_comment] = ACTIONS(354),
  },
  [180] = {
    [aux_sym_tuple_repeat1] = STATE(180),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_GT] = ACTIONS(352),
    [sym_comment] = ACTIONS(14),
  },
  [181] = {
    [sym__term] = STATE(98),
    [sym__para_term] = STATE(25),
    [sym_term] = STATE(193),
    [sym__atomic] = STATE(146),
    [sym__parenthesized_term] = STATE(146),
    [sym_nu] = STATE(146),
    [sym_send] = STATE(146),
    [sym__channel] = STATE(147),
    [sym_recv] = STATE(146),
    [sym_cmd] = STATE(147),
    [sym_name] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_nu] = ACTIONS(286),
    [sym_end] = ACTIONS(288),
    [sym__cmd] = ACTIONS(35),
    [sym__name] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [182] = {
    [aux_sym__para_term_repeat1] = STATE(182),
    [anon_sym_PIPE] = ACTIONS(361),
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_RBRACE] = ACTIONS(165),
    [sym_comment] = ACTIONS(14),
  },
  [183] = {
    [aux_sym_term_repeat1] = STATE(183),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_DOT] = ACTIONS(364),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [sym_comment] = ACTIONS(14),
  },
  [184] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(194),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(91),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(183),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(185),
    [sym_comment] = ACTIONS(14),
  },
  [185] = {
    [sym_biop] = STATE(195),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(205),
    [anon_sym_SEMI] = ACTIONS(205),
    [anon_sym_RBRACE] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_comment] = ACTIONS(14),
  },
  [186] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(196),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(186),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(339),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [187] = {
    [sym_biop] = STATE(103),
    [anon_sym_PIPE] = ACTIONS(345),
    [anon_sym_DOT] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_comment] = ACTIONS(14),
  },
  [188] = {
    [anon_sym_PIPE] = ACTIONS(356),
    [anon_sym_DOT] = ACTIONS(354),
    [anon_sym_RPAREN] = ACTIONS(354),
    [anon_sym_SEMI] = ACTIONS(354),
    [anon_sym_RBRACE] = ACTIONS(354),
    [anon_sym_then] = ACTIONS(354),
    [anon_sym_else] = ACTIONS(354),
    [anon_sym_LT] = ACTIONS(356),
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_GT] = ACTIONS(356),
    [anon_sym_PLUS] = ACTIONS(354),
    [anon_sym_DASH] = ACTIONS(356),
    [anon_sym_STAR] = ACTIONS(354),
    [anon_sym_SLASH] = ACTIONS(356),
    [anon_sym_GT_EQ] = ACTIONS(354),
    [anon_sym_LT_EQ] = ACTIONS(354),
    [anon_sym_EQ_EQ] = ACTIONS(354),
    [anon_sym_BANG_EQ] = ACTIONS(354),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(354),
    [sym_comment] = ACTIONS(14),
  },
  [189] = {
    [sym_biop] = STATE(109),
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_comment] = ACTIONS(14),
  },
  [190] = {
    [sym_biop] = STATE(113),
    [anon_sym_then] = ACTIONS(343),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_comment] = ACTIONS(14),
  },
  [191] = {
    [sym_biop] = STATE(157),
    [anon_sym_else] = ACTIONS(367),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_comment] = ACTIONS(14),
  },
  [192] = {
    [aux_sym_tuple_repeat1] = STATE(199),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(369),
    [sym_comment] = ACTIONS(14),
  },
  [193] = {
    [aux_sym__para_term_repeat1] = STATE(200),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_DOT] = ACTIONS(66),
    [anon_sym_SEMI] = ACTIONS(66),
    [anon_sym_RBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(14),
  },
  [194] = {
    [sym_biop] = STATE(113),
    [anon_sym_then] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_comment] = ACTIONS(14),
  },
  [195] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(202),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(186),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(339),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [196] = {
    [sym_biop] = STATE(195),
    [anon_sym_PIPE] = ACTIONS(240),
    [anon_sym_DOT] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(238),
    [anon_sym_RBRACE] = ACTIONS(238),
    [anon_sym_LT] = ACTIONS(240),
    [anon_sym_GT] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(240),
    [anon_sym_GT_EQ] = ACTIONS(238),
    [anon_sym_LT_EQ] = ACTIONS(238),
    [anon_sym_EQ_EQ] = ACTIONS(238),
    [anon_sym_BANG_EQ] = ACTIONS(238),
    [anon_sym_AMP_AMP] = ACTIONS(238),
    [anon_sym_PIPE_PIPE] = ACTIONS(238),
    [sym_comment] = ACTIONS(14),
  },
  [197] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(203),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(134),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(265),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(185),
    [sym_comment] = ACTIONS(14),
  },
  [198] = {
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_GT] = ACTIONS(331),
    [sym_comment] = ACTIONS(14),
  },
  [199] = {
    [aux_sym_tuple_repeat1] = STATE(180),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(373),
    [sym_comment] = ACTIONS(14),
  },
  [200] = {
    [aux_sym__para_term_repeat1] = STATE(205),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_DOT] = ACTIONS(102),
    [anon_sym_SEMI] = ACTIONS(102),
    [anon_sym_RBRACE] = ACTIONS(102),
    [sym_comment] = ACTIONS(14),
  },
  [201] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(206),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(134),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(265),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(185),
    [sym_comment] = ACTIONS(14),
  },
  [202] = {
    [sym_biop] = STATE(195),
    [anon_sym_PIPE] = ACTIONS(277),
    [anon_sym_DOT] = ACTIONS(275),
    [anon_sym_SEMI] = ACTIONS(275),
    [anon_sym_RBRACE] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(275),
    [anon_sym_SLASH] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(275),
    [anon_sym_LT_EQ] = ACTIONS(275),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_BANG_EQ] = ACTIONS(275),
    [anon_sym_AMP_AMP] = ACTIONS(275),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
    [sym_comment] = ACTIONS(14),
  },
  [203] = {
    [sym_biop] = STATE(157),
    [anon_sym_else] = ACTIONS(343),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_comment] = ACTIONS(14),
  },
  [204] = {
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_GT] = ACTIONS(354),
    [sym_comment] = ACTIONS(14),
  },
  [205] = {
    [aux_sym__para_term_repeat1] = STATE(205),
    [anon_sym_PIPE] = ACTIONS(361),
    [anon_sym_DOT] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_RBRACE] = ACTIONS(165),
    [sym_comment] = ACTIONS(14),
  },
  [206] = {
    [sym_biop] = STATE(157),
    [anon_sym_else] = ACTIONS(375),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_comment] = ACTIONS(14),
  },
  [207] = {
    [sym__data_constructor] = STATE(78),
    [sym__pattern] = STATE(78),
    [sym_expr] = STATE(208),
    [sym_expr_condition] = STATE(78),
    [sym_expr_biop] = STATE(78),
    [sym_expr_unop] = STATE(78),
    [sym_tuple] = STATE(78),
    [sym_unop] = STATE(186),
    [sym_digit] = STATE(78),
    [sym_name] = STATE(78),
    [anon_sym_if] = ACTIONS(339),
    [sym_string] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(124),
    [sym__digit] = ACTIONS(152),
    [sym__name] = ACTIONS(58),
    [sym_comment] = ACTIONS(14),
  },
  [208] = {
    [sym_biop] = STATE(195),
    [anon_sym_PIPE] = ACTIONS(345),
    [anon_sym_DOT] = ACTIONS(343),
    [anon_sym_SEMI] = ACTIONS(343),
    [anon_sym_RBRACE] = ACTIONS(343),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_BANG_EQ] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_comment] = ACTIONS(14),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 2, .reusable = true}, SHIFT(5), SHIFT_EXTRA(),
  [10] = {.count = 1, .reusable = true}, REDUCE(sym_name, 1),
  [12] = {.count = 1, .reusable = false}, REDUCE(sym_name, 1),
  [14] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [16] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [18] = {.count = 1, .reusable = true}, SHIFT(6),
  [20] = {.count = 1, .reusable = true}, SHIFT(7),
  [22] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [24] = {.count = 2, .reusable = true}, SHIFT(9), SHIFT_EXTRA(),
  [27] = {.count = 1, .reusable = true}, SHIFT(10),
  [29] = {.count = 1, .reusable = true}, SHIFT(12),
  [31] = {.count = 1, .reusable = false}, SHIFT(13),
  [33] = {.count = 1, .reusable = false}, SHIFT(18),
  [35] = {.count = 1, .reusable = true}, SHIFT(14),
  [37] = {.count = 1, .reusable = false}, SHIFT(10),
  [39] = {.count = 1, .reusable = true}, SHIFT(21),
  [41] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [46] = {.count = 3, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9), SHIFT_EXTRA(),
  [50] = {.count = 1, .reusable = true}, REDUCE(sym_type_declaration, 3),
  [52] = {.count = 1, .reusable = true}, SHIFT(22),
  [54] = {.count = 1, .reusable = false}, SHIFT(23),
  [56] = {.count = 1, .reusable = false}, SHIFT(27),
  [58] = {.count = 1, .reusable = false}, SHIFT(2),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym_cmd, 1),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_proc_declaration, 3),
  [64] = {.count = 1, .reusable = true}, REDUCE(sym__term, 1),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym__para_term, 1),
  [68] = {.count = 1, .reusable = true}, SHIFT(32),
  [70] = {.count = 2, .reusable = true}, REDUCE(sym__para_term, 1), SHIFT_EXTRA(),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_term, 1),
  [75] = {.count = 1, .reusable = true}, SHIFT(34),
  [77] = {.count = 2, .reusable = true}, REDUCE(sym_term, 1), SHIFT_EXTRA(),
  [80] = {.count = 1, .reusable = true}, SHIFT(36),
  [82] = {.count = 1, .reusable = true}, SHIFT(37),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym__atomic, 1),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym__channel, 1),
  [88] = {.count = 1, .reusable = true}, SHIFT(41),
  [90] = {.count = 1, .reusable = true}, SHIFT(42),
  [92] = {.count = 1, .reusable = true}, SHIFT(44),
  [94] = {.count = 1, .reusable = true}, SHIFT(46),
  [96] = {.count = 1, .reusable = true}, SHIFT(47),
  [98] = {.count = 1, .reusable = true}, REDUCE(aux_sym_nu_repeat1, 1, .alias_sequence_id = 1),
  [100] = {.count = 1, .reusable = true}, SHIFT(48),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym__para_term, 2),
  [104] = {.count = 2, .reusable = true}, REDUCE(sym__para_term, 2), SHIFT_EXTRA(),
  [107] = {.count = 1, .reusable = false}, SHIFT(52),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_term, 2),
  [111] = {.count = 2, .reusable = true}, REDUCE(sym_term, 2), SHIFT_EXTRA(),
  [114] = {.count = 1, .reusable = true}, SHIFT(54),
  [116] = {.count = 1, .reusable = false}, SHIFT(55),
  [118] = {.count = 1, .reusable = true}, SHIFT(61),
  [120] = {.count = 1, .reusable = true}, SHIFT(56),
  [122] = {.count = 1, .reusable = false}, SHIFT(57),
  [124] = {.count = 1, .reusable = true}, SHIFT(57),
  [126] = {.count = 1, .reusable = true}, SHIFT(58),
  [128] = {.count = 1, .reusable = true}, SHIFT(59),
  [130] = {.count = 1, .reusable = true}, SHIFT(64),
  [132] = {.count = 1, .reusable = true}, SHIFT(65),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_dual_type_declaration, 4),
  [136] = {.count = 1, .reusable = true}, SHIFT(66),
  [138] = {.count = 1, .reusable = true}, SHIFT(67),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym__parenthesized_term, 3, .alias_sequence_id = 2),
  [142] = {.count = 1, .reusable = false}, SHIFT(70),
  [144] = {.count = 1, .reusable = true}, SHIFT(72),
  [146] = {.count = 1, .reusable = false}, SHIFT(73),
  [148] = {.count = 1, .reusable = true}, SHIFT(78),
  [150] = {.count = 1, .reusable = true}, SHIFT(74),
  [152] = {.count = 1, .reusable = true}, SHIFT(75),
  [154] = {.count = 1, .reusable = true}, SHIFT(76),
  [156] = {.count = 1, .reusable = true}, SHIFT(81),
  [158] = {.count = 1, .reusable = true}, SHIFT(82),
  [160] = {.count = 1, .reusable = true}, REDUCE(aux_sym_nu_repeat1, 2),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_nu_repeat1, 2), SHIFT_REPEAT(2),
  [165] = {.count = 1, .reusable = true}, REDUCE(aux_sym__para_term_repeat1, 2),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym__para_term_repeat1, 2), SHIFT_REPEAT(32),
  [170] = {.count = 2, .reusable = true}, REDUCE(aux_sym__para_term_repeat1, 2), SHIFT_EXTRA(),
  [173] = {.count = 1, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2),
  [175] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(34),
  [178] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_EXTRA(),
  [181] = {.count = 1, .reusable = false}, SHIFT(85),
  [183] = {.count = 1, .reusable = false}, SHIFT(88),
  [185] = {.count = 1, .reusable = false}, SHIFT(89),
  [187] = {.count = 1, .reusable = true}, SHIFT(92),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_unop, 1),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_unop, 1),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_digit, 1),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_digit, 1),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_label, 1),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_send, 3),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 1),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym__expr, 1),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym__expr, 1),
  [209] = {.count = 1, .reusable = false}, SHIFT(93),
  [211] = {.count = 1, .reusable = true}, SHIFT(93),
  [213] = {.count = 2, .reusable = true}, REDUCE(sym__expr, 1), SHIFT_EXTRA(),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_recv, 3),
  [218] = {.count = 2, .reusable = true}, REDUCE(aux_sym__para_term_repeat1, 2), SHIFT_REPEAT(42),
  [221] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(44),
  [224] = {.count = 1, .reusable = true}, SHIFT(102),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_nu, 4, .alias_sequence_id = 3),
  [228] = {.count = 1, .reusable = true}, SHIFT(108),
  [230] = {.count = 1, .reusable = true}, SHIFT(112),
  [232] = {.count = 1, .reusable = true}, SHIFT(115),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym_biop, 1),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym_biop, 1),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_expr_unop, 2),
  [240] = {.count = 1, .reusable = false}, REDUCE(sym_expr_unop, 2),
  [242] = {.count = 2, .reusable = true}, REDUCE(sym_expr_unop, 2), SHIFT_EXTRA(),
  [245] = {.count = 1, .reusable = true}, SHIFT(117),
  [247] = {.count = 1, .reusable = true}, SHIFT(118),
  [249] = {.count = 1, .reusable = true}, SHIFT(120),
  [251] = {.count = 1, .reusable = true}, SHIFT(122),
  [253] = {.count = 1, .reusable = true}, SHIFT(123),
  [255] = {.count = 1, .reusable = true}, SHIFT(124),
  [257] = {.count = 1, .reusable = true}, SHIFT(126),
  [259] = {.count = 1, .reusable = true}, SHIFT(129),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym__parenthesized_expr, 3),
  [263] = {.count = 1, .reusable = true}, SHIFT(131),
  [265] = {.count = 1, .reusable = false}, SHIFT(132),
  [267] = {.count = 1, .reusable = true}, SHIFT(139),
  [269] = {.count = 1, .reusable = true}, SHIFT(136),
  [271] = {.count = 1, .reusable = true}, SHIFT(137),
  [273] = {.count = 1, .reusable = true}, SHIFT(138),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_expr_biop, 3),
  [277] = {.count = 1, .reusable = false}, REDUCE(sym_expr_biop, 3),
  [279] = {.count = 2, .reusable = true}, REDUCE(sym_expr_biop, 3), SHIFT_EXTRA(),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_label_guards, 3),
  [284] = {.count = 1, .reusable = true}, SHIFT(141),
  [286] = {.count = 1, .reusable = false}, SHIFT(143),
  [288] = {.count = 1, .reusable = false}, SHIFT(146),
  [290] = {.count = 1, .reusable = true}, SHIFT(151),
  [292] = {.count = 1, .reusable = true}, SHIFT(152),
  [294] = {.count = 1, .reusable = true}, SHIFT(156),
  [296] = {.count = 1, .reusable = true}, SHIFT(159),
  [298] = {.count = 1, .reusable = true}, SHIFT(160),
  [300] = {.count = 1, .reusable = true}, SHIFT(161),
  [302] = {.count = 1, .reusable = true}, REDUCE(aux_sym_label_guards_repeat1, 2),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_label_guards, 4),
  [306] = {.count = 2, .reusable = true}, REDUCE(aux_sym_label_guards_repeat1, 2), SHIFT_REPEAT(117),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_label_case, 3),
  [311] = {.count = 1, .reusable = true}, SHIFT(164),
  [313] = {.count = 1, .reusable = true}, SHIFT(166),
  [315] = {.count = 1, .reusable = true}, SHIFT(168),
  [317] = {.count = 1, .reusable = true}, SHIFT(169),
  [319] = {.count = 1, .reusable = true}, SHIFT(170),
  [321] = {.count = 1, .reusable = true}, SHIFT(172),
  [323] = {.count = 1, .reusable = true}, SHIFT(173),
  [325] = {.count = 1, .reusable = true}, SHIFT(174),
  [327] = {.count = 1, .reusable = true}, SHIFT(177),
  [329] = {.count = 1, .reusable = true}, SHIFT(178),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 5),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 5),
  [335] = {.count = 1, .reusable = true}, SHIFT(179),
  [337] = {.count = 1, .reusable = true}, SHIFT(181),
  [339] = {.count = 1, .reusable = false}, SHIFT(184),
  [341] = {.count = 1, .reusable = true}, SHIFT(188),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_expr_condition, 6),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym_expr_condition, 6),
  [347] = {.count = 2, .reusable = true}, REDUCE(sym_expr_condition, 6), SHIFT_EXTRA(),
  [350] = {.count = 1, .reusable = true}, SHIFT(192),
  [352] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 6),
  [356] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 6),
  [358] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(160),
  [361] = {.count = 2, .reusable = true}, REDUCE(aux_sym__para_term_repeat1, 2), SHIFT_REPEAT(164),
  [364] = {.count = 2, .reusable = true}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(166),
  [367] = {.count = 1, .reusable = true}, SHIFT(197),
  [369] = {.count = 1, .reusable = true}, SHIFT(198),
  [371] = {.count = 1, .reusable = true}, SHIFT(201),
  [373] = {.count = 1, .reusable = true}, SHIFT(204),
  [375] = {.count = 1, .reusable = true}, SHIFT(207),
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
