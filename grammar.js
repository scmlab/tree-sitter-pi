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
            $.end
        ),

        par: $ => prec(10, prec.right(seq($._proc, parSymbol, $._proc))),

        nu: $ => prec(9, seq('(', 'nu',  $.name, ')', $._proc)),

        recv: $ => prec(8, seq($.name, '?',  $.name, '.', $._proc)),

        send: $ => prec(8, seq($.name, '!',  $.expr, '.', $._proc)),


        expr: $ => $._digit,
        // par: $ => prec(900, $._par),
        // _par: $ => choice(
        //     prec(910, seq( '(', $._par, ')')),
        //     prec.right(sep0(parSymbol, 10, $._par)),
        //     $.seq
        // ),
        // // par: $ => prec.right(sep0(parSymbol, 10, $._seq)),
        //
        // seq: $ => prec(800, $._seq),
        // // seq: $ => prec(800, $._seq),
        // _seq: $ => prec(810, choice(
        //     prec.right(sep0(seqSymbol, 15, $._seq)),
        //     seq( '(', $._seq, ')'),
        //     // seq( '(', $._seq, ')'),
        //     $._proc
        // )),

        // seq: $ => choice(
        //     // $._par,
        //     prec.right(sep0(seqSymbol, 15, $._proc)),
        // ),
        //
        // _proc: $ => choice(
        //     seq( '(', $._proc, ')'),
        //     // prec.right(sep1(parSymbol, 10, $._proc)),
        //     // $.send,
        //     // $.recv,
        //     // $.nu,
        //     // $.name,
        //     // $.end
        //     $.proc
        // ),
        //
        // // seperated by '|', right associative
        // _parallel: $ => prec.right(sep1(parSymbol, 10, $._proc)),

        // _proc: $ => choice(
        //     // seq( '(', $.par, ')'),
        //     // $._parallel,
        //
        //     // prec.right(sep1(seqSymbol, 15, $.process)),
        //     // $.send,
        //     // $.recv,
        //     // $.nu,
        //     // $.name,
        //     $.end
        // ),


        end: $ => token('end'),
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
        _digit: $ => /\-?[0-9]+/,
        label: $ => /[A-Z][A-Z0-9]*/,
        cmd: $ => /[A-Z](\w|')*/,
        name: $ => /[a-z](\w|')*/,

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
