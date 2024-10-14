#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 119
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  anon_sym_LBRACE_LBRACE = 1,
  anon_sym_RBRACE_RBRACE = 2,
  anon_sym_ATif = 3,
  anon_sym_ATelse = 4,
  anon_sym_ATeach = 5,
  anon_sym_in = 6,
  anon_sym_ATinclude = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  sym_identifier = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_string_token1 = 12,
  anon_sym_SQUOTE = 13,
  aux_sym_string_token2 = 14,
  sym_number = 15,
  anon_sym_true = 16,
  anon_sym_false = 17,
  sym_null = 18,
  anon_sym_COMMA = 19,
  anon_sym_COLON = 20,
  anon_sym_LBRACK = 21,
  anon_sym_RBRACK = 22,
  sym_comment = 23,
  sym_raw_content = 24,
  sym_source_file = 25,
  sym__statement = 26,
  sym_output_statement = 27,
  sym_control_flow_statement = 28,
  sym_if_statement = 29,
  sym_else_clause = 30,
  sym_for_statement = 31,
  sym_include_statement = 32,
  sym_block = 33,
  sym__expression = 34,
  sym_string = 35,
  sym_boolean = 36,
  sym_object = 37,
  sym_pair = 38,
  sym_array = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_object_repeat1 = 41,
  aux_sym_array_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_ATif] = "@if",
  [anon_sym_ATelse] = "@else",
  [anon_sym_ATeach] = "@each",
  [anon_sym_in] = "in",
  [anon_sym_ATinclude] = "@include",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null] = "null",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_comment] = "comment",
  [sym_raw_content] = "raw_content",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_output_statement] = "output_statement",
  [sym_control_flow_statement] = "control_flow_statement",
  [sym_if_statement] = "if_statement",
  [sym_else_clause] = "else_clause",
  [sym_for_statement] = "for_statement",
  [sym_include_statement] = "include_statement",
  [sym_block] = "block",
  [sym__expression] = "_expression",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_ATif] = anon_sym_ATif,
  [anon_sym_ATelse] = anon_sym_ATelse,
  [anon_sym_ATeach] = anon_sym_ATeach,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_ATinclude] = anon_sym_ATinclude,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null] = sym_null,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_comment] = sym_comment,
  [sym_raw_content] = sym_raw_content,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_output_statement] = sym_output_statement,
  [sym_control_flow_statement] = sym_control_flow_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_else_clause] = sym_else_clause,
  [sym_for_statement] = sym_for_statement,
  [sym_include_statement] = sym_include_statement,
  [sym_block] = sym_block,
  [sym__expression] = sym__expression,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATeach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_content] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_output_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_control_flow_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_collection = 2,
  field_condition = 3,
  field_expression = 4,
  field_item = 5,
  field_key = 6,
  field_path = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_collection] = "collection",
  [field_condition] = "condition",
  [field_expression] = "expression",
  [field_item] = "item",
  [field_key] = "key",
  [field_path] = "path",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 1},
  [1] =
    {field_expression, 1},
  [2] =
    {field_body, 2},
    {field_condition, 1},
  [4] =
    {field_key, 0},
    {field_value, 2},
  [6] =
    {field_body, 1},
  [7] =
    {field_body, 4},
    {field_collection, 3},
    {field_item, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 4,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 8,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 10,
  [19] = 17,
  [20] = 20,
  [21] = 16,
  [22] = 15,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 26,
  [27] = 25,
  [28] = 26,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 30,
  [33] = 33,
  [34] = 29,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 37,
  [39] = 39,
  [40] = 35,
  [41] = 36,
  [42] = 31,
  [43] = 33,
  [44] = 39,
  [45] = 45,
  [46] = 46,
  [47] = 46,
  [48] = 45,
  [49] = 49,
  [50] = 30,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 60,
  [67] = 64,
  [68] = 68,
  [69] = 61,
  [70] = 65,
  [71] = 68,
  [72] = 72,
  [73] = 56,
  [74] = 57,
  [75] = 54,
  [76] = 52,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 51,
  [81] = 55,
  [82] = 30,
  [83] = 83,
  [84] = 72,
  [85] = 85,
  [86] = 53,
  [87] = 85,
  [88] = 59,
  [89] = 58,
  [90] = 79,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 94,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 97,
  [100] = 96,
  [101] = 92,
  [102] = 102,
  [103] = 103,
  [104] = 92,
  [105] = 93,
  [106] = 92,
  [107] = 93,
  [108] = 108,
  [109] = 109,
  [110] = 108,
  [111] = 103,
  [112] = 93,
  [113] = 108,
  [114] = 103,
  [115] = 108,
  [116] = 103,
  [117] = 91,
  [118] = 102,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      ADVANCE_MAP(
        '"', 60,
        '\'', 63,
        ',', 74,
        ':', 75,
        '@', 16,
        '[', 76,
        ']', 77,
        'f', 11,
        'i', 27,
        'n', 33,
        't', 28,
        '{', 46,
        '}', 47,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 60,
        '\'', 63,
        ',', 74,
        ':', 75,
        '[', 76,
        ']', 77,
        'f', 49,
        'n', 58,
        't', 55,
        '{', 46,
        '}', 35,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(63);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '}') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '}') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == '{') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == '}') ADVANCE(40);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '{') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_ATif);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_ATelse);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_ATeach);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(88);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '@' ||
          lookahead == '{') ADVANCE(82);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(88);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_raw_content);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(88);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_raw_content);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '@' ||
          lookahead == '{') ADVANCE(4);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_raw_content);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '@' ||
          lookahead == '{') ADVANCE(4);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_raw_content);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '}') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_raw_content);
      if (lookahead == '/') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_raw_content);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(88);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 37},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 37},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 37},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 37},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 37},
  [44] = {.lex_state = 37},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 64},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 61},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 61},
  [111] = {.lex_state = 64},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 61},
  [114] = {.lex_state = 64},
  [115] = {.lex_state = 61},
  [116] = {.lex_state = 64},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATif] = ACTIONS(1),
    [anon_sym_ATelse] = ACTIONS(1),
    [anon_sym_ATeach] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_ATinclude] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(109),
    [sym__statement] = STATE(9),
    [sym_output_statement] = STATE(9),
    [sym_control_flow_statement] = STATE(9),
    [sym_if_statement] = STATE(31),
    [sym_for_statement] = STATE(31),
    [sym_include_statement] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(5),
    [anon_sym_ATif] = ACTIONS(7),
    [anon_sym_ATeach] = ACTIONS(9),
    [anon_sym_ATinclude] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_raw_content] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(27), 1,
      anon_sym_COMMA,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    ACTIONS(17), 2,
      sym_identifier,
      sym_null,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 5,
      sym__expression,
      sym_string,
      sym_boolean,
      sym_object,
      sym_array,
  [37] = 10,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(39), 1,
      anon_sym_RBRACK,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 2,
      sym_identifier,
      sym_null,
    STATE(60), 5,
      sym__expression,
      sym_string,
      sym_boolean,
      sym_object,
      sym_array,
  [74] = 9,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      sym_identifier,
      sym_null,
    STATE(77), 5,
      sym__expression,
      sym_string,
      sym_boolean,
      sym_object,
      sym_array,
  [108] = 9,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      sym_identifier,
      sym_null,
    STATE(77), 5,
      sym__expression,
      sym_string,
      sym_boolean,
      sym_object,
      sym_array,
  [142] = 9,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      sym_identifier,
      sym_null,
    STATE(77), 5,
      sym__expression,
      sym_string,
      sym_boolean,
      sym_object,
      sym_array,
  [176] = 9,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      sym_identifier,
      sym_null,
    STATE(77), 5,
      sym__expression,
      sym_string,
      sym_boolean,
      sym_object,
      sym_array,
  [210] = 8,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(55), 1,
      anon_sym_ATif,
    ACTIONS(57), 1,
      anon_sym_ATeach,
    ACTIONS(59), 1,
      anon_sym_ATinclude,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 2,
      sym_comment,
      sym_raw_content,
    STATE(42), 3,
      sym_if_statement,
      sym_for_statement,
      sym_include_statement,
    STATE(19), 4,
      sym__statement,
      sym_output_statement,
      sym_control_flow_statement,
      aux_sym_source_file_repeat1,
  [241] = 8,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_ATif,
    ACTIONS(9), 1,
      anon_sym_ATeach,
    ACTIONS(11), 1,
      anon_sym_ATinclude,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 2,
      sym_comment,
      sym_raw_content,
    STATE(31), 3,
      sym_if_statement,
      sym_for_statement,
      sym_include_statement,
    STATE(17), 4,
      sym__statement,
      sym_output_statement,
      sym_control_flow_statement,
      aux_sym_source_file_repeat1,
  [272] = 8,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      sym_number,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(69), 2,
      sym_identifier,
      sym_null,
    STATE(87), 5,
      sym__expression,
      sym_string,
      sym_boolean,
      sym_object,
      sym_array,
  [303] = 8,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(55), 1,
      anon_sym_ATif,
    ACTIONS(57), 1,
      anon_sym_ATeach,
    ACTIONS(59), 1,
      anon_sym_ATinclude,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 2,
      sym_comment,
      sym_raw_content,
    STATE(42), 3,
      sym_if_statement,
      sym_for_statement,
      sym_include_statement,
    STATE(19), 4,
      sym__statement,
      sym_output_statement,
      sym_control_flow_statement,
      aux_sym_source_file_repeat1,
  [334] = 8,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      sym_number,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 2,
      sym_identifier,
      sym_null,
    STATE(99), 5,
      sym__expression,
      sym_string,
      sym_boolean,
      sym_object,
      sym_array,
  [365] = 8,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 2,
      sym_identifier,
      sym_null,
    STATE(97), 5,
      sym__expression,
      sym_string,
      sym_boolean,
      sym_object,
      sym_array,
  [396] = 8,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      sym_identifier,
      sym_null,
    STATE(77), 5,
      sym__expression,
      sym_string,
      sym_boolean,
      sym_object,
      sym_array,
  [427] = 8,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(55), 1,
      anon_sym_ATif,
    ACTIONS(57), 1,
      anon_sym_ATeach,
    ACTIONS(59), 1,
      anon_sym_ATinclude,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(85), 2,
      sym_comment,
      sym_raw_content,
    STATE(42), 3,
      sym_if_statement,
      sym_for_statement,
      sym_include_statement,
    STATE(11), 4,
      sym__statement,
      sym_output_statement,
      sym_control_flow_statement,
      aux_sym_source_file_repeat1,
  [458] = 8,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      sym_number,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 2,
      sym_identifier,
      sym_null,
    STATE(72), 5,
      sym__expression,
      sym_string,
      sym_boolean,
      sym_object,
      sym_array,
  [489] = 8,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(96), 1,
      anon_sym_ATif,
    ACTIONS(99), 1,
      anon_sym_ATeach,
    ACTIONS(102), 1,
      anon_sym_ATinclude,
    ACTIONS(105), 2,
      sym_comment,
      sym_raw_content,
    STATE(31), 3,
      sym_if_statement,
      sym_for_statement,
      sym_include_statement,
    STATE(17), 4,
      sym__statement,
      sym_output_statement,
      sym_control_flow_statement,
      aux_sym_source_file_repeat1,
  [520] = 8,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      sym_number,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(108), 2,
      sym_identifier,
      sym_null,
    STATE(85), 5,
      sym__expression,
      sym_string,
      sym_boolean,
      sym_object,
      sym_array,
  [551] = 8,
    ACTIONS(112), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(115), 1,
      anon_sym_ATif,
    ACTIONS(118), 1,
      anon_sym_ATeach,
    ACTIONS(121), 1,
      anon_sym_ATinclude,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    ACTIONS(126), 2,
      sym_comment,
      sym_raw_content,
    STATE(42), 3,
      sym_if_statement,
      sym_for_statement,
      sym_include_statement,
    STATE(19), 4,
      sym__statement,
      sym_output_statement,
      sym_control_flow_statement,
      aux_sym_source_file_repeat1,
  [582] = 8,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      sym_number,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 2,
      sym_identifier,
      sym_null,
    ACTIONS(139), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 5,
      sym__expression,
      sym_string,
      sym_boolean,
      sym_object,
      sym_array,
  [613] = 8,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      sym_number,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 2,
      sym_identifier,
      sym_null,
    STATE(84), 5,
      sym__expression,
      sym_string,
      sym_boolean,
      sym_object,
      sym_array,
  [644] = 8,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(55), 1,
      anon_sym_ATif,
    ACTIONS(57), 1,
      anon_sym_ATeach,
    ACTIONS(59), 1,
      anon_sym_ATinclude,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 2,
      sym_comment,
      sym_raw_content,
    STATE(42), 3,
      sym_if_statement,
      sym_for_statement,
      sym_include_statement,
    STATE(8), 4,
      sym__statement,
      sym_output_statement,
      sym_control_flow_statement,
      aux_sym_source_file_repeat1,
  [675] = 4,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      anon_sym_ATelse,
    STATE(43), 1,
      sym_else_clause,
    ACTIONS(153), 6,
      anon_sym_LBRACE_LBRACE,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATinclude,
      sym_comment,
      sym_raw_content,
  [693] = 3,
    ACTIONS(157), 1,
      anon_sym_ATelse,
    STATE(33), 1,
      sym_else_clause,
    ACTIONS(153), 7,
      anon_sym_LBRACE_LBRACE,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATinclude,
      anon_sym_RBRACE,
      sym_comment,
      sym_raw_content,
  [709] = 2,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 7,
      anon_sym_LBRACE_LBRACE,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATinclude,
      sym_comment,
      sym_raw_content,
  [722] = 2,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 7,
      anon_sym_LBRACE_LBRACE,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATinclude,
      sym_comment,
      sym_raw_content,
  [735] = 1,
    ACTIONS(161), 8,
      anon_sym_LBRACE_LBRACE,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATinclude,
      anon_sym_RBRACE,
      sym_comment,
      sym_raw_content,
  [746] = 1,
    ACTIONS(165), 8,
      anon_sym_LBRACE_LBRACE,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATinclude,
      anon_sym_RBRACE,
      sym_comment,
      sym_raw_content,
  [757] = 1,
    ACTIONS(167), 7,
      anon_sym_LBRACE_LBRACE,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATinclude,
      anon_sym_RBRACE,
      sym_comment,
      sym_raw_content,
  [767] = 1,
    ACTIONS(169), 7,
      anon_sym_LBRACE_LBRACE,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATinclude,
      anon_sym_RBRACE,
      sym_comment,
      sym_raw_content,
  [777] = 2,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(173), 6,
      anon_sym_LBRACE_LBRACE,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATinclude,
      sym_comment,
      sym_raw_content,
  [789] = 2,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 6,
      anon_sym_LBRACE_LBRACE,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATinclude,
      sym_comment,
      sym_raw_content,
  [801] = 1,
    ACTIONS(177), 7,
      anon_sym_LBRACE_LBRACE,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATinclude,
      anon_sym_RBRACE,
      sym_comment,
      sym_raw_content,
  [811] = 2,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 6,
      anon_sym_LBRACE_LBRACE,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATinclude,
      sym_comment,
      sym_raw_content,
  [823] = 1,
    ACTIONS(181), 7,
      anon_sym_LBRACE_LBRACE,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATinclude,
      anon_sym_RBRACE,
      sym_comment,
      sym_raw_content,
  [833] = 7,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      sym_pair,
    STATE(98), 1,
      sym_string,
  [855] = 2,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 6,
      anon_sym_LBRACE_LBRACE,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATinclude,
      sym_comment,
      sym_raw_content,
  [867] = 1,
    ACTIONS(191), 7,
      anon_sym_LBRACE_LBRACE,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATinclude,
      anon_sym_RBRACE,
      sym_comment,
      sym_raw_content,
  [877] = 1,
    ACTIONS(193), 7,
      anon_sym_LBRACE_LBRACE,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATinclude,
      anon_sym_RBRACE,
      sym_comment,
      sym_raw_content,
  [887] = 2,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 6,
      anon_sym_LBRACE_LBRACE,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATinclude,
      sym_comment,
      sym_raw_content,
  [899] = 7,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      sym_pair,
    STATE(98), 1,
      sym_string,
  [921] = 1,
    ACTIONS(173), 7,
      anon_sym_LBRACE_LBRACE,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATinclude,
      anon_sym_RBRACE,
      sym_comment,
      sym_raw_content,
  [931] = 2,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 6,
      anon_sym_LBRACE_LBRACE,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATinclude,
      sym_comment,
      sym_raw_content,
  [943] = 2,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(193), 6,
      anon_sym_LBRACE_LBRACE,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATinclude,
      sym_comment,
      sym_raw_content,
  [955] = 6,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      sym_pair,
    STATE(98), 1,
      sym_string,
  [974] = 6,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      sym_pair,
    STATE(98), 1,
      sym_string,
  [993] = 6,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      sym_pair,
    STATE(98), 1,
      sym_string,
  [1012] = 6,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      sym_pair,
    STATE(98), 1,
      sym_string,
  [1031] = 5,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_identifier,
    STATE(83), 1,
      sym_pair,
    STATE(98), 1,
      sym_string,
  [1047] = 1,
    ACTIONS(175), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1055] = 1,
    ACTIONS(213), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1062] = 1,
    ACTIONS(215), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1069] = 1,
    ACTIONS(217), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1076] = 1,
    ACTIONS(219), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1083] = 1,
    ACTIONS(221), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1090] = 1,
    ACTIONS(223), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1097] = 1,
    ACTIONS(225), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1104] = 1,
    ACTIONS(227), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1111] = 1,
    ACTIONS(229), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1118] = 3,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym_array_repeat1,
  [1128] = 3,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(44), 1,
      sym_string,
  [1138] = 3,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_object_repeat1,
  [1148] = 3,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_array_repeat1,
  [1158] = 3,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym_array_repeat1,
  [1168] = 3,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_object_repeat1,
  [1178] = 3,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_array_repeat1,
  [1188] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym_array_repeat1,
  [1198] = 3,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_object_repeat1,
  [1208] = 3,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    STATE(39), 1,
      sym_string,
  [1218] = 3,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_object_repeat1,
  [1228] = 3,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_object_repeat1,
  [1238] = 2,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_block,
  [1245] = 1,
    ACTIONS(223), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1250] = 1,
    ACTIONS(225), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1255] = 1,
    ACTIONS(219), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1260] = 1,
    ACTIONS(215), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1265] = 1,
    ACTIONS(247), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1270] = 1,
    ACTIONS(275), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1275] = 2,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_block,
  [1282] = 1,
    ACTIONS(213), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1287] = 1,
    ACTIONS(221), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1292] = 1,
    ACTIONS(175), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1297] = 1,
    ACTIONS(239), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1302] = 2,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_block,
  [1309] = 2,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
  [1316] = 1,
    ACTIONS(217), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1321] = 2,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_block,
  [1328] = 1,
    ACTIONS(229), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1333] = 1,
    ACTIONS(227), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1338] = 2,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_block,
  [1345] = 1,
    ACTIONS(279), 1,
      anon_sym_in,
  [1349] = 1,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
  [1353] = 1,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
  [1357] = 1,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
  [1361] = 1,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
  [1365] = 1,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
  [1369] = 1,
    ACTIONS(285), 1,
      anon_sym_RBRACE_RBRACE,
  [1373] = 1,
    ACTIONS(287), 1,
      anon_sym_COLON,
  [1377] = 1,
    ACTIONS(289), 1,
      anon_sym_RBRACE_RBRACE,
  [1381] = 1,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
  [1385] = 1,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
  [1389] = 1,
    ACTIONS(293), 1,
      sym_identifier,
  [1393] = 1,
    ACTIONS(295), 1,
      aux_sym_string_token2,
  [1397] = 1,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
  [1401] = 1,
    ACTIONS(281), 1,
      anon_sym_SQUOTE,
  [1405] = 1,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
  [1409] = 1,
    ACTIONS(297), 1,
      anon_sym_SQUOTE,
  [1413] = 1,
    ACTIONS(299), 1,
      aux_sym_string_token1,
  [1417] = 1,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
  [1421] = 1,
    ACTIONS(303), 1,
      aux_sym_string_token1,
  [1425] = 1,
    ACTIONS(305), 1,
      aux_sym_string_token2,
  [1429] = 1,
    ACTIONS(291), 1,
      anon_sym_SQUOTE,
  [1433] = 1,
    ACTIONS(307), 1,
      aux_sym_string_token1,
  [1437] = 1,
    ACTIONS(309), 1,
      aux_sym_string_token2,
  [1441] = 1,
    ACTIONS(311), 1,
      aux_sym_string_token1,
  [1445] = 1,
    ACTIONS(313), 1,
      aux_sym_string_token2,
  [1449] = 1,
    ACTIONS(315), 1,
      anon_sym_in,
  [1453] = 1,
    ACTIONS(317), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 142,
  [SMALL_STATE(7)] = 176,
  [SMALL_STATE(8)] = 210,
  [SMALL_STATE(9)] = 241,
  [SMALL_STATE(10)] = 272,
  [SMALL_STATE(11)] = 303,
  [SMALL_STATE(12)] = 334,
  [SMALL_STATE(13)] = 365,
  [SMALL_STATE(14)] = 396,
  [SMALL_STATE(15)] = 427,
  [SMALL_STATE(16)] = 458,
  [SMALL_STATE(17)] = 489,
  [SMALL_STATE(18)] = 520,
  [SMALL_STATE(19)] = 551,
  [SMALL_STATE(20)] = 582,
  [SMALL_STATE(21)] = 613,
  [SMALL_STATE(22)] = 644,
  [SMALL_STATE(23)] = 675,
  [SMALL_STATE(24)] = 693,
  [SMALL_STATE(25)] = 709,
  [SMALL_STATE(26)] = 722,
  [SMALL_STATE(27)] = 735,
  [SMALL_STATE(28)] = 746,
  [SMALL_STATE(29)] = 757,
  [SMALL_STATE(30)] = 767,
  [SMALL_STATE(31)] = 777,
  [SMALL_STATE(32)] = 789,
  [SMALL_STATE(33)] = 801,
  [SMALL_STATE(34)] = 811,
  [SMALL_STATE(35)] = 823,
  [SMALL_STATE(36)] = 833,
  [SMALL_STATE(37)] = 855,
  [SMALL_STATE(38)] = 867,
  [SMALL_STATE(39)] = 877,
  [SMALL_STATE(40)] = 887,
  [SMALL_STATE(41)] = 899,
  [SMALL_STATE(42)] = 921,
  [SMALL_STATE(43)] = 931,
  [SMALL_STATE(44)] = 943,
  [SMALL_STATE(45)] = 955,
  [SMALL_STATE(46)] = 974,
  [SMALL_STATE(47)] = 993,
  [SMALL_STATE(48)] = 1012,
  [SMALL_STATE(49)] = 1031,
  [SMALL_STATE(50)] = 1047,
  [SMALL_STATE(51)] = 1055,
  [SMALL_STATE(52)] = 1062,
  [SMALL_STATE(53)] = 1069,
  [SMALL_STATE(54)] = 1076,
  [SMALL_STATE(55)] = 1083,
  [SMALL_STATE(56)] = 1090,
  [SMALL_STATE(57)] = 1097,
  [SMALL_STATE(58)] = 1104,
  [SMALL_STATE(59)] = 1111,
  [SMALL_STATE(60)] = 1118,
  [SMALL_STATE(61)] = 1128,
  [SMALL_STATE(62)] = 1138,
  [SMALL_STATE(63)] = 1148,
  [SMALL_STATE(64)] = 1158,
  [SMALL_STATE(65)] = 1168,
  [SMALL_STATE(66)] = 1178,
  [SMALL_STATE(67)] = 1188,
  [SMALL_STATE(68)] = 1198,
  [SMALL_STATE(69)] = 1208,
  [SMALL_STATE(70)] = 1218,
  [SMALL_STATE(71)] = 1228,
  [SMALL_STATE(72)] = 1238,
  [SMALL_STATE(73)] = 1245,
  [SMALL_STATE(74)] = 1250,
  [SMALL_STATE(75)] = 1255,
  [SMALL_STATE(76)] = 1260,
  [SMALL_STATE(77)] = 1265,
  [SMALL_STATE(78)] = 1270,
  [SMALL_STATE(79)] = 1275,
  [SMALL_STATE(80)] = 1282,
  [SMALL_STATE(81)] = 1287,
  [SMALL_STATE(82)] = 1292,
  [SMALL_STATE(83)] = 1297,
  [SMALL_STATE(84)] = 1302,
  [SMALL_STATE(85)] = 1309,
  [SMALL_STATE(86)] = 1316,
  [SMALL_STATE(87)] = 1321,
  [SMALL_STATE(88)] = 1328,
  [SMALL_STATE(89)] = 1333,
  [SMALL_STATE(90)] = 1338,
  [SMALL_STATE(91)] = 1345,
  [SMALL_STATE(92)] = 1349,
  [SMALL_STATE(93)] = 1353,
  [SMALL_STATE(94)] = 1357,
  [SMALL_STATE(95)] = 1361,
  [SMALL_STATE(96)] = 1365,
  [SMALL_STATE(97)] = 1369,
  [SMALL_STATE(98)] = 1373,
  [SMALL_STATE(99)] = 1377,
  [SMALL_STATE(100)] = 1381,
  [SMALL_STATE(101)] = 1385,
  [SMALL_STATE(102)] = 1389,
  [SMALL_STATE(103)] = 1393,
  [SMALL_STATE(104)] = 1397,
  [SMALL_STATE(105)] = 1401,
  [SMALL_STATE(106)] = 1405,
  [SMALL_STATE(107)] = 1409,
  [SMALL_STATE(108)] = 1413,
  [SMALL_STATE(109)] = 1417,
  [SMALL_STATE(110)] = 1421,
  [SMALL_STATE(111)] = 1425,
  [SMALL_STATE(112)] = 1429,
  [SMALL_STATE(113)] = 1433,
  [SMALL_STATE(114)] = 1437,
  [SMALL_STATE(115)] = 1441,
  [SMALL_STATE(116)] = 1445,
  [SMALL_STATE(117)] = 1449,
  [SMALL_STATE(118)] = 1453,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, 0, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2, 0, 5),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_flow_statement, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_flow_statement, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, 0, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, 0, 5),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_statement, 3, 0, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, 0, 6),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5, 0, 6),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 2, 0, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_statement, 3, 0, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2, 0, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, 0, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [301] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_edge(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
