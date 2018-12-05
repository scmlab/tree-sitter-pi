const parSymbol = '|';
const seqSymbol = '.';

module.exports = grammar({

    name: 'pi',

    inline: $ => [],

    extras: $ => [
        $.comment,
        /\s|\\n/
    ],

    externals: $ => [],

    conflicts: $ => [],

    word: $ => $._var_id,

    rules: {

        program: $ => repeat($.proc_declaration),

        proc_declaration: $ => prec(999, seq(alias($.simple_name, $.process_name), '=', $._proc)),

        _proc: $ => choice(
            prec(999, seq( '(', $._proc, ')')),
            $.recv,
            $.send,
            $.par,
            $.nu,
            $.end,
            $.call
        ),

        // 6 types of processes
        par: $ => prec(10, prec.right(seq($._proc, parSymbol, $._proc))),

        nu: $ => prec(9, seq('(', 'nu', alias($.simple_name, $.name), optional(seq(':', $._type)), ')', $._proc)),

        recv: $ => seq($._name, '?', $._clauses),

        send: $ => prec(8, seq($._name, '!',  $._expr, '.', $._proc)),

        end: $ => token('end'),

        call: $ => alias($.simple_name, $.process_name),

        // clauses of recv
        _clauses: $ => choice(
            alias($.simple_clause, $.clause),
            $._complex_clauses
        ),
        simple_clause: $ => prec(8, seq($.pattern, '.', $._proc)),
        _complex_clauses: $ => seq('{', sep1(';', alias($.complex_clause, $.clause)), '}'),
        complex_clause: $ => seq($.pattern, '->', $._proc),


        // patterns that appear the in LHS
        pattern: $ => choice(
            alias($.simple_name, $.name),
            alias($.pattern_tuple, $.tuple),
            $.label
        ),
        pattern_tuple: $ => seq( '(', sep2(',', $.pattern), ')'),

        // expressions
        _expr: $ => choice(
            prec(998, seq( '(', $._expr, ')')),
            $.tuple,
            $.mul,
            $.div,
            $.add,
            $.sub,
            $.if_then_else,
            $._term,
        ),

        if_then_else: $ => seq('if', $._expr, 'then', $._expr, 'else', $._expr),
        tuple: $ => prec(999, seq( '(', sep2(',', $._expr), ')')),

        // left associative
        mul: $ => prec.left(802, seq($._expr, '*', $._expr)),
        div: $ => prec.left(802, seq($._expr, '/', $._expr)),
        add: $ => prec.left(801, seq($._expr, '+', $._expr)),
        sub: $ => prec.left(801, seq($._expr, '-', $._expr)),
        eq:  $ => prec.left(800, seq($._expr, '==', $._expr)),
        neq: $ => prec.left(800, seq($._expr, '!=', $._expr)),
        gt:  $ => prec.left(800, seq($._expr, '>', $._expr)),
        gte: $ => prec.left(800, seq($._expr, '>=', $._expr)),
        lt:  $ => prec.left(800, seq($._expr, '<', $._expr)),
        lte: $ => prec.left(800, seq($._expr, '<=', $._expr)),

        _term: $ => choice(
            prec(997, seq( '(', $._expr, ')')),
            $.integer,
            $.string,
            $.variable,
            $.label,
            $.boolean,
            $.eq,
            $.neq,
            $.gt,
            $.gte,
            $.lt,
            $.lte,
        ),

        boolean: $ => choice('True', 'False'),
        string: $ => /\"[^\"\\]*(\\.[^\"\\]*)*\"/,
        integer: $ => $._digit,
        variable: $ => $._name,

        // sorts & types
        _sort: $ => choice(
            $.sort_int,
            $.sort_bool
        ),
        sort_int: $ => 'Int',
        sort_bool: $ => 'Bool',

        _type: $ => choice(
            prec(999, seq( '(', $._type, ')')),
            $.type_send,
            $.type_recv,
            $.type_select,
            $.type_choice,
            $.type_end,
            $.type_call
        ),
        type_send: $ => seq('!', choice($._sort, $._type), '.', $._type),
        type_recv: $ => seq('?', choice($._sort, $._type), '.', $._type),
        type_select: $ => seq('!', '{', sep1(';', $._type_of_label), '}'),
        type_choice: $ => seq('?', '{', sep1(';', $._type_of_label), '}'),
        type_end: $ => token('end'),
        type_call: $ => alias($.simple_name, $.process_name),

        _type_of_label: $ => seq($.label, ':', $._type),


        // names
        _name: $ => choice(
            prec(999, $.reserved_name),
            prec(998, alias($.polarized_name, $.name)),
        ),
        reserved_name: $ => choice(
            'stdin',
            'stdout'
        ),

        polarized_name: $ => choice(/\`[a-z](\w|')*/, /[a-z](\w|')*/),
        simple_name: $ => /[a-z](\w|')*/,


        // label
        label: $ => /[A-Z][A-Z0-9]*/,

        _digit: $ => /\-?[0-9]+/,

        comment: $ => token(choice(
            prec(100, seq('--', /.*/)),
            seq('//', /.*/)
        ))
        }
    })

    // with at least 1 items
    function sep1(sep, rule) {
        return seq(rule, repeat(seq(sep, rule)))
    }

    // with at least 2 items
    function sep2(sep, rule) {
        return seq(rule, sep, rule, repeat(seq(sep, rule)))
    }
    // function sep0(sep, num, rule) {
    //     return seq(rule, repeat(prec(num,seq(sep, rule))))
    // }
    //
    // function sep1(sep, num, rule) {
    //     return seq(rule, sep, rule, repeat(prec(num,seq(sep, rule))))
    // }
