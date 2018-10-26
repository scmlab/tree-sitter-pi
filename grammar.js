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

        source_file: $ => repeat($.proc_declaration),

        proc_declaration: $ => prec(999, seq($.name, '=', $._proc)),

        _proc: $ => choice(
            prec(999, seq( '(', $._proc, ')')),
            $.recv,
            $.send,
            $.par,
            $.nu,
            $.end,
            $.call
        ),

        // 5 types of processes
        par: $ => prec(10, prec.right(seq($._proc, parSymbol, $._proc))),

        nu: $ => prec(9, seq('(', 'nu',  $.name, ')', $._proc)),

        recv: $ => prec(8, seq($.name, '?',  $.name, '.', $._proc)),

        send: $ => prec(8, seq($.name, '!',  $._expr, '.', $._proc)),

        end: $ => token('end'),

        call: $ => seq($.name),

        // expressions
        // expr: $ => $._expr,
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
            $.digit,
        ),

        digit: $ => /\-?[0-9]+/,
        name: $ => /[a-z](\w|')*/,
        boolean: $ => choice(
            token('True'),
            token('False'),
        ),
        // //
        // term: $ => prec.right(sep1(seqSymbol, 15, $._atomic)),
        // //
        // _atomic: $ => choice(
        //     $._parenthesized_term,
        //     $.send,
        //     $.recv,
        //     $.nu,
        //     $.name,
        //     $.end
        // ),
        // _parenthesized_term: $ => seq( '(', alias($._term, $.term), ')'),
        // -- -- -- -- --
        // TERM-NU
        // nu: $ => prec.left(seq(
        //     'nu',
        //     repeat1(alias($.name, $.nu_name)),
        //     ':',
        //     alias($._term, $.nu_body))),
        //     // TERM-END
        //     end: $ => token('end'),
        //     // TERM-SEND
        //     send: $ =>
        //     prec.left(20, seq($._channel,'!',$._term_sendex)),
        //     _channel: $ => choice($.name,$.cmd,),
        //     _term_sendex: $ => choice(
        //         $.label,
        //         $._pattern,
        //         $._expr
        //     ),
        //     _data_constructor: $ => choice(
        //         $.string,
        //         $.tuple
        //     ),
        //     // TERM-RECV
        //     recv: $ =>
        //     prec.left(20, seq($._channel,'?',$._term_recvex)),
        //     _term_recvex: $ => choice(
        //         $.label_guards,
        //         $._pattern
        //     ),
        //     //
        //     label_guards: $ =>
        //     seq('{', sep1_(';', $.label_case), '}'),
        //     //
        //     label_case: $ =>
        //     prec.right(50,seq(
        //         $.label,
        //         '->',
        //         choice($.name,$._term)
        //     )),
        //     // -- -- -- -- --
        //     _pattern: $ => choice(
        //         $._data_constructor,
        //         $.name,
        //         $.digit
        //     ),
        //     // -- -- -- -- --
        //     _expr: $ => choice(
        //         $.expr,
        //         $._parenthesized_expr
        //     ),
        //     expr: $ => prec.right(60,choice(
        //         $.expr_condition,
        //         $.expr_biop,
        //         $.expr_unop,
        //         $._pattern)
        //     ),
        //
        //     //
        //     expr_condition: $ => prec.right(70,seq(
        //         'if',   $.expr,
        //         'then', $.expr,
        //         // choice($._term,$.expr),
        //         'else', $.expr
        //         // choice($._term,$.expr),
        //     )),
        //     expr_biop: $ => prec.left(70,seq(
        //         $.expr, $.biop, $.expr
        //     )),
        //     expr_unop: $ => prec.left(70,seq(
        //         $.unop, $.expr
        //     )),
        //     //
        //     _parenthesized_expr: $ => seq(
        //         '(', $.expr, ')'
        //     ),
        //
        //
        //
        //     // ## ## ## ## ##
        //     string: $ => token(seq(
        //         '"',
        //         repeat(
        //             choice(
        //                 /[^\\"\n]/,
        //                 /\\(\^)?(.|\n)/
        //             )
        //         ),
        //         '"'
        //     )),
        //     // -- -- -- -- --
        //     tuple: $ => seq(
        //         '<', $._pattern, ',',
        //         sep1_(',', $._pattern),
        //         '>'
        //     ),
        //     // ## ## ## ## ##
        //     biop: $ => choice(
        //         '+','-','*','/',
        //         '>=','>','<=','<',
        //         '==','!=',
        //         '&&','||'
        //     ),
        //     unop: $ => choice(
        //         '-','~'
        //     ),
        // ## ## ## ## ##
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
