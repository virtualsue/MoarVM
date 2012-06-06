# This file is generated from src/core/oplist by tools/update_lib_mast_ops.p6.

class MAST::OpBanks {
    our $primitives := 0;
    our $dev := 1;
    our $string := 2;
    our $math := 3;
}
class MAST::Ops {
    our $primitives := nqp::hash(
        'no_op', 0,
        'goto', 1,
        'if_i', 2,
        'unless_i', 3,
        'if_n', 4,
        'unless_n', 5,
        'if_s', 6,
        'unless_s', 7,
        'if_s0', 8,
        'unless_s0', 9,
        'if_o', 10,
        'unless_o', 11,
        'set', 12,
        'extend_u8', 13,
        'extend_u16', 14,
        'extend_u32', 15,
        'extend_i8', 16,
        'extend_i16', 17,
        'extend_i32', 18,
        'trunc_u8', 19,
        'trunc_u16', 20,
        'trunc_u32', 21,
        'trunc_i8', 22,
        'trunc_i16', 23,
        'trunc_i32', 24,
        'extend_n32', 25,
        'trunc_n32', 26,
        'get_lex', 27,
        'bind_lex', 28,
        'get_lex_lo', 29,
        'bind_lex_lo', 30,
        'get_lex_ni', 31,
        'get_lex_nn', 32,
        'get_lex_ns', 33,
        'get_lex_no', 34,
        'bind_lex_ni', 35,
        'bind_lex_nn', 36,
        'bind_lex_ns', 37,
        'bind_lex_no', 38,
        'return_i', 39,
        'return_n', 40,
        'return_s', 41,
        'return_o', 42,
        'return', 43,
        'const_i8', 44,
        'const_i16', 45,
        'const_i32', 46,
        'const_i64', 47,
        'const_n32', 48,
        'const_n64', 49,
        'const_s', 50,
        'add_i', 51,
        'sub_i', 52,
        'mul_i', 53,
        'div_i', 54,
        'div_u', 55,
        'mod_i', 56,
        'mod_u', 57,
        'neg_i', 58,
        'abs_i', 59,
        'inc_i', 60,
        'inc_u', 61,
        'dec_i', 62,
        'dec_u', 63,
        'getcode', 64,
        'prepargs', 65,
        'arg_i', 66,
        'arg_n', 67,
        'arg_s', 68,
        'arg_o', 69,
        'invoke_v', 70,
        'invoke_i', 71,
        'invoke_n', 72,
        'invoke_s', 73,
        'invoke_o', 74,
        'add_n', 75,
        'sub_n', 76,
        'mul_n', 77,
        'div_n', 78,
        'neg_n', 79,
        'abs_n', 80,
        'eq_i', 81,
        'ne_i', 82,
        'lt_i', 83,
        'le_i', 84,
        'gt_i', 85,
        'ge_i', 86,
        'eq_n', 87,
        'ne_n', 88,
        'lt_n', 89,
        'le_n', 90,
        'gt_n', 91,
        'ge_n', 92
    );
    our $dev := nqp::hash(
        'say_i', 0,
        'say_s', 1,
        'say_n', 2
    );
    our $string := nqp::hash(
        'concat_s', 0,
        'repeat_s', 1,
        'substr_s', 2,
        'index_s', 3,
        'graphs_s', 4,
        'codes_s', 5,
        'eq_s', 6,
        'ne_s', 7,
        'eqat_s', 8,
        'haveat_s', 9,
        'getcp_s', 10,
        'setcp_s', 11,
        'indexcp_s', 12
    );
    our $math := nqp::hash(
        'sin_n', 0,
        'asin_n', 1,
        'cos_n', 2,
        'acos_n', 3,
        'tan_n', 4,
        'atan_n', 5,
        'atan2_n', 6,
        'sec_n', 7,
        'asec_n', 8,
        'sinh_n', 9,
        'cosh_n', 10,
        'tanh_n', 11,
        'sech_n', 12
    );
}
