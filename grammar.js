const paraSymbol = '|';
const seqSymbol = '.';

module.exports = grammar({
   name: 'pi',
   inline: $ => [],
   extras: $ => [
      $.comment,
      /\s|\\n/
   ],
   externals: $ => [
      // $._newline,
      // $._indent,
      // $._dedent
   ],
   conflicts: $ => [],
   word: $ => $._var_id,
   // ## ## ## ## ## ## ## ## ## ## ## ## ## ## ##
   rules: {
      source_file: $ => repeat1(choice(
         // seq($._inline_declaration, $._newline),
         // $._whatever_declarations
         $._top_declarations ,
         $.comment
      )),
      // ## ## ## ## ##
      _top_declarations: $ =>
         choice( $._type_declaration
               , $._proc_declaration
               ),
      // ## ## ## ## ##
      _type_declaration: $ => choice(
         $.type_declaration,
         $.dual_type_declaration
      ),
      type_declaration: $ => seq($.name ,'::'  ,$.name),
      dual_type_declaration: $ => seq($.name ,$.name ,'::' ,$.name),
      // ## ## ## ## ##
      _proc_declaration: $ =>
         seq($.proc_declaration),
      // merge?
      proc_declaration: $ =>
         prec(3, seq($.name,'=',$._term)),
      // ## ## ## ## ##
      _term: $ => choice($._para_term),
      _para_term: $ =>
         prec.right(sep1(paraSymbol, 10, $.term)),
      //
      term: $ =>
         prec.right(sep1(seqSymbol, 15, $._atomic)),
      //
      _atomic: $ => choice(
         $._parenthesized_term,
         $.send,
         $.recv,
         $.nu,
         $.name,
         $.end
      ),
      _parenthesized_term: $ =>
         seq( '(', alias($._term,$.term), ')'),
      // -- -- -- -- --
      // TERM-NU
      nu: $ =>
         prec.left(seq(
            'nu',
            repeat1(alias($.name, $.nu_name)),
            ':',
            alias($._term, $.nu_body))),
      // TERM-END
      end: $ => token('end'),
      // TERM-SEND
      send: $ =>
         prec.left(20, seq($._channel,'!',$._term_sendex)),
      _channel: $ => choice($.name,$.cmd,),
      _term_sendex: $ => choice(
         $.label,
         $._pattern,
         $._expr
      ),
      _data_constructor: $ => choice(
         $.string,
         $.tuple
      ),
      // TERM-RECV
      recv: $ =>
         prec.left(20, seq($._channel,'?',$._term_recvex)),
      _term_recvex: $ => choice(
         $.label_guards,
         $._pattern
      ),
      //
      label_guards: $ =>
         seq('{', sep1_(';', $.label_case), '}'),
      //
      label_case: $ =>
         prec.right(50,seq(
            $.label,
            '->',
            choice($.name,$._term)
         )),
      // -- -- -- -- --
      _pattern: $ => choice(
         $._data_constructor,
         $.name,
         $.digit
      ),
      // -- -- -- -- --
      _expr: $ => choice(
         $.expr,
         $._parenthesized_expr
      ),
      expr: $ => prec.right(60,choice(
         $.expr_condition,
         $.expr_biop,
         $.expr_unop,
         $._pattern)
      ),

      //
      expr_condition: $ => prec.right(70,seq(
         'if',   $.expr,
         'then', $.expr,
         // choice($._term,$.expr),
         'else', $.expr
         // choice($._term,$.expr),
      )),
      expr_biop: $ => prec.left(70,seq(
         $.expr, $.biop, $.expr
      )),
      expr_unop: $ => prec.left(70,seq(
         $.unop, $.expr
      )),
      //
      _parenthesized_expr: $ => seq(
        '(', $.expr, ')'
      ),



      // ## ## ## ## ##
      string: $ => token(seq(
        '"',
        repeat(
          choice(
            /[^\\"\n]/,
            /\\(\^)?(.|\n)/
          )
        ),
        '"'
      )),
      // -- -- -- -- --
      tuple: $ => seq(
        '<', $._pattern, ',',
        sep1_(',', $._pattern),
        '>'
      ),
      // ## ## ## ## ##
      biop: $ => choice(
         '+','-','*','/',
         '>=','>','<=','<',
         '==','!=',
         '&&','||'
      ),
      unop: $ => choice(
         '-','~'
      ),
      // ## ## ## ## ##
      digit: $ => $._digit,
      _digit: $ => /\-?[0-9]+/,
      label: $ => $._label,
      _label: $ => /[A-Z][A-Z0-9]*/,
      cmd: $ => $._cmd,
      _cmd: $ => /[A-Z](\w|')*/,
      name: $ => $._name,
      _name: $ => /[a-z](\w|')*/,
      // ## ## ## ## ##
      comment: $ => token(choice(
          prec(100, seq('--', /.*/)),
          seq('//', /.*/)
      ))
   }
})

function sep1_(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sep1(sep, num, rule) {
  return seq(rule, repeat(prec(num,seq(sep, rule))))
}
