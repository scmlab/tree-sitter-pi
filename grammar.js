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

        process_name: $ => $._name,

        // 5 types of processes
        par: $ => prec(10, prec.right(seq($._proc, parSymbol, $._proc))),

        nu: $ => prec(9, seq('(', 'nu',  $.name, ')', $._proc)),

        recv: $ => prec(8, seq($.name, '?',  $.name, '.', $._proc)),

        send: $ => prec(8, seq($.name, '!',  $._expr, '.', $._proc)),

        end: $ => token('end'),

        call: $ => seq($.process_name),

        // expressions
        _expr: $ => choice(
            prec(999, seq( '(', $._expr, ')')),
            $.mul,
            $.div,
            $.add,
            $.sub,
            $._term
        ),

        // left associative
        mul: $ => prec.left(801, seq($._expr, '*', $._expr)),
        div: $ => prec.left(801, seq($._expr, '/', $._expr)),
        add: $ => prec.left(800, seq($._expr, '+', $._expr)),
        sub: $ => prec.left(800, seq($._expr, '-', $._expr)),

        _term: $ => choice(
            prec(997, seq( '(', $._expr, ')')),
            $.integer,
            $.variable
        ),

        integer: $ => $._digit,
        variable: $ => $._name,

        _digit: $ => /\-?[0-9]+/,
        name: $ => $._name,
        _name: $ => /[a-z](\w|')*/,
        boolean: $ => choice(
            token('True'),
            token('False'),
        ),

        label: $ => /[A-Z][A-Z0-9]*/,
        cmd: $ => /[A-Z](\w|')*/,

        comment: $ => token(choice(
            prec(100, seq('--', /.*/)),
            seq('//', /.*/)
        ))
        }
    })

    function sep0_(sep, rule) {
        return seq(rule, repeat(seq(sep, rule)))
    }

    function sep0(sep, num, rule) {
        return seq(rule, repeat(prec(num,seq(sep, rule))))
    }

    function sep1(sep, num, rule) {
        return seq(rule, sep, rule, repeat(prec(num,seq(sep, rule))))
    }
