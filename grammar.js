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

        proc_declaration: $ => prec(999, seq($.process_name, '=', $._proc)),

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

        nu: $ => prec(9, seq('(', 'nu',  $.name, optional(seq(':', $._type)), ')', $._proc)),

        recv: $ => seq($._name, '?', $._clauses),

        send: $ => prec(8, seq($._name, '!',  $._expr, '.', $._proc)),

        end: $ => token('end'),

        call: $ => seq($.process_name),

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
            $.name,
            alias($.pattern_tuple, $.tuple),
            $.label
        ),
        pattern_tuple: $ => seq( '<', sep1(',', $.pattern), '>'),

        // expressions
        _expr: $ => choice(
            prec(999, seq( '(', $._expr, ')')),
            $.tuple,
            $.mul,
            $.div,
            $.add,
            $.sub,
            $._term
        ),

        tuple: $ => prec(999, seq( '<', sep1(',', $._expr), '>')),

        // left associative
        mul: $ => prec.left(801, seq($._expr, '*', $._expr)),
        div: $ => prec.left(801, seq($._expr, '/', $._expr)),
        add: $ => prec.left(800, seq($._expr, '+', $._expr)),
        sub: $ => prec.left(800, seq($._expr, '-', $._expr)),

        _term: $ => choice(
            prec(997, seq( '(', $._expr, ')')),
            $.integer,
            $.variable,
            $.label
        ),

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
        type_call: $ => $.process_name,

        _type_of_label: $ => seq($.label, ':', $._type),

        // names
        process_name: $ => /[a-z](\w|')*/,
        _name: $ => choice(
            prec(999, $.reserved_name),
            prec(998, $.name),
        ),
        reserved_name: $ => choice(
            'stdin',
            'stdout'
        ),
        name: $ => /[a-z](\w|')*/,


        // label
        label: $ => /[A-Z][A-Z0-9]*/,



        _digit: $ => /\-?[0-9]+/,
        cmd: $ => /[A-Z](\w|')*/,

        comment: $ => token(choice(
            prec(100, seq('--', /.*/)),
            seq('//', /.*/)
        ))
        }
    })

    function sep1(sep, rule) {
        return seq(rule, repeat(seq(sep, rule)))
    }

    // function sep0(sep, num, rule) {
    //     return seq(rule, repeat(prec(num,seq(sep, rule))))
    // }
    //
    // function sep1(sep, num, rule) {
    //     return seq(rule, sep, rule, repeat(prec(num,seq(sep, rule))))
    // }
