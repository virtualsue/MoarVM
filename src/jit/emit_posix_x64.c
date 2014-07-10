/*
** This file has been pre-processed with DynASM.
** http://luajit.org/dynasm.html
** DynASM version 1.3.0, DynASM x64 version 1.3.0
** DO NOT EDIT! The original file is in "src/jit/emit_x64.dasc".
*/

#line 1 "src/jit/emit_x64.dasc"
#include "moar.h"
#include <dasm_proto.h>
#include <dasm_x86.h>
#include "emit.h"

//|.arch x64
#if DASM_VERSION != 10300
#error "Version mismatch between DynASM and included encoding engine"
#endif
#line 7 "src/jit/emit_x64.dasc"
//|.actionlist actions
static const unsigned char actions[1444] = {
  85,72,137,229,255,65,86,83,65,84,65,85,255,73,137,252,254,73,137,252,245,
  77,139,158,233,73,139,155,233,77,139,163,233,255,252,255,226,255,248,10,72,
  199,192,0,0,0,0,248,11,255,65,93,65,92,91,65,94,255,72,137,252,236,93,195,
  255,72,185,237,237,72,137,139,233,255,72,199,131,233,237,255,73,139,141,233,
  72,139,137,233,72,137,139,233,255,73,139,142,233,72,139,137,233,72,137,139,
  233,255,72,139,139,233,72,139,137,233,255,73,139,142,233,255,72,139,145,233,
  255,72,139,146,233,255,72,131,252,250,0,15,133,244,247,255,205,3,82,81,255,
  76,137,252,247,72,139,116,36,8,72,199,194,237,73,186,237,237,65,252,255,210,
  255,72,131,196,16,255,72,137,194,248,1,255,72,137,147,233,255,72,139,137,
  233,72,139,147,233,72,137,145,233,255,73,139,140,253,36,233,72,137,139,233,
  255,72,139,139,233,72,131,185,233,0,15,133,244,247,72,141,145,233,252,233,
  244,248,248,1,72,139,145,233,72,141,146,233,248,2,255,76,139,2,73,131,252,
  248,0,255,15,133,244,249,255,77,139,134,233,77,139,128,233,248,3,255,76,139,
  2,255,73,131,252,248,0,15,133,244,250,255,77,139,134,233,77,139,128,233,77,
  139,128,233,255,102,252,247,129,233,236,15,149,208,73,131,252,248,0,15,149,
  212,132,196,15,149,208,102,65,252,247,128,233,236,15,148,212,132,196,15,132,
  244,249,82,65,80,76,137,252,247,72,139,179,233,73,186,237,237,65,252,255,
  210,65,88,90,248,3,255,76,137,2,248,4,255,76,139,2,73,131,252,248,0,15,133,
  244,250,255,81,82,76,137,252,247,73,139,182,233,72,139,182,233,72,139,182,
  233,73,186,237,237,65,252,255,210,90,89,255,73,137,192,102,252,247,129,233,
  236,15,149,208,73,131,252,248,0,15,149,212,132,196,15,149,208,102,65,252,
  247,128,233,236,15,148,212,132,196,15,132,244,249,82,65,80,76,137,252,247,
  72,139,179,233,73,186,237,237,65,252,255,210,65,88,90,248,3,76,137,2,255,
  76,137,131,233,255,72,139,139,233,72,139,147,233,76,141,129,233,73,131,184,
  233,0,15,132,244,247,77,139,128,233,248,1,255,102,252,247,129,233,236,15,
  149,208,72,131,252,250,0,15,149,212,132,196,15,149,208,102,252,247,130,233,
  236,15,148,212,132,196,15,132,244,248,82,65,80,76,137,252,247,72,139,179,
  233,73,186,237,237,65,252,255,210,65,88,90,248,2,255,73,137,144,233,255,72,
  139,139,233,72,137,139,233,255,73,139,142,233,72,139,137,233,72,139,137,233,
  72,137,139,233,255,72,139,139,233,73,137,142,233,255,73,139,142,233,72,137,
  139,233,73,199,134,233,237,255,72,139,131,233,255,72,3,131,233,255,72,43,
  131,233,255,72,15,175,131,233,255,72,153,72,252,247,187,233,255,72,137,131,
  233,255,72,252,255,131,233,255,72,252,255,139,233,255,252,242,15,16,131,233,
  255,252,242,15,88,131,233,255,252,242,15,92,131,233,255,252,242,15,89,131,
  233,255,252,242,15,94,131,233,255,252,242,15,17,131,233,255,252,242,72,15,
  42,131,233,252,242,15,17,131,233,255,252,242,72,15,44,131,233,72,137,131,
  233,255,72,59,131,233,255,15,148,208,255,15,149,208,255,15,156,208,255,15,
  158,208,255,15,159,208,255,15,157,208,255,72,15,182,192,72,137,131,233,255,
  76,137,252,247,72,199,198,237,73,186,237,237,65,252,255,210,73,139,142,233,
  72,139,137,233,72,139,137,233,72,137,136,233,102,199,128,233,236,65,139,142,
  233,137,136,233,72,137,131,233,255,76,139,147,233,77,133,210,255,15,132,244,
  247,102,65,252,247,130,233,236,255,15,132,244,247,77,139,154,233,77,139,155,
  233,77,133,219,255,15,132,244,247,76,137,252,247,76,137,214,72,141,147,233,
  77,139,147,233,65,252,255,210,252,233,244,248,248,1,255,76,137,147,233,248,
  2,255,76,137,252,247,255,76,137,252,246,255,76,137,252,242,255,76,137,252,
  241,255,77,137,252,240,255,77,137,252,241,255,73,139,190,233,255,73,139,182,
  233,255,73,139,150,233,255,77,139,134,233,255,77,139,142,233,255,76,137,252,
  239,255,76,137,252,238,255,76,137,252,234,255,76,137,252,233,255,77,137,232,
  255,77,137,252,233,255,72,139,187,233,255,72,139,179,233,255,72,139,147,233,
  255,72,139,139,233,255,76,139,131,233,255,76,139,139,233,255,252,242,15,16,
  139,233,255,252,242,15,16,147,233,255,252,242,15,16,155,233,255,252,242,15,
  16,163,233,255,252,242,15,16,171,233,255,252,242,15,16,179,233,255,252,242,
  15,16,187,233,255,76,141,155,233,255,76,137,223,255,76,137,222,255,76,137,
  218,255,76,137,217,255,77,137,216,255,77,137,217,255,72,199,199,237,255,72,
  199,198,237,255,72,199,194,237,255,72,199,193,237,255,73,199,192,237,255,
  73,199,193,237,255,73,187,237,237,255,72,139,8,72,137,139,233,255,72,139,
  139,233,72,137,8,255,252,233,244,10,255,252,233,245,255,72,139,131,233,72,
  133,192,15,133,245,255,72,139,131,233,72,133,192,15,132,245,255,72,139,139,
  233,73,139,150,233,72,139,146,233,72,139,146,233,255,72,131,252,249,0,15,
  132,244,247,255,102,252,247,129,233,236,255,72,59,145,233,15,133,244,247,
  255,102,252,247,129,233,236,15,133,244,247,255,76,137,252,247,72,199,198,
  237,72,199,194,237,73,186,237,237,65,252,255,210,255,72,199,192,237,252,233,
  244,11,248,2,255,76,137,252,247,76,137,252,238,72,199,194,237,73,186,237,
  237,65,252,255,210,73,137,195,255,76,139,145,233,255,76,139,139,233,77,137,
  138,233,255,73,185,237,237,77,137,138,233,255,77,139,141,233,77,139,137,233,
  77,137,138,233,255,199,129,233,237,255,72,199,129,233,237,255,72,141,147,
  233,72,137,145,233,255,73,139,150,233,72,139,18,72,137,145,233,255,65,82,
  65,83,255,76,137,252,247,72,139,179,233,72,137,226,76,137,209,73,186,237,
  237,65,252,255,210,255,65,91,65,90,255,76,137,252,247,72,137,198,76,137,218,
  76,137,209,255,76,139,144,233,77,139,146,233,65,252,255,210,255,76,137,252,
  247,72,139,179,233,76,137,218,72,199,193,237,73,186,237,237,65,252,255,210,
  255,72,199,192,1,0,0,0,252,233,244,11,255
};

#line 8 "src/jit/emit_x64.dasc"
//|.section code
#define DASM_SECTION_CODE	0
#define DASM_MAXSECTION		1
#line 9 "src/jit/emit_x64.dasc"
//|.globals JIT_LABEL_
enum {
  JIT_LABEL_exit,
  JIT_LABEL_out,
  JIT_LABEL__MAX
};
#line 10 "src/jit/emit_x64.dasc"

/* type declarations */
//|.type FRAME, MVMFrame
#define Dt1(_V) (int)(ptrdiff_t)&(((MVMFrame *)0)_V)
#line 13 "src/jit/emit_x64.dasc"
//|.type REGISTER, MVMRegister
#define Dt2(_V) (int)(ptrdiff_t)&(((MVMRegister *)0)_V)
#line 14 "src/jit/emit_x64.dasc"
//|.type ARGCTX, MVMArgProcContext
#define Dt3(_V) (int)(ptrdiff_t)&(((MVMArgProcContext *)0)_V)
#line 15 "src/jit/emit_x64.dasc"
//|.type STATICFRAME, MVMStaticFrame
#define Dt4(_V) (int)(ptrdiff_t)&(((MVMStaticFrame *)0)_V)
#line 16 "src/jit/emit_x64.dasc"
//|.type P6OPAQUE, MVMP6opaque
#define Dt5(_V) (int)(ptrdiff_t)&(((MVMP6opaque *)0)_V)
#line 17 "src/jit/emit_x64.dasc"
//|.type P6OBODY, MVMP6opaqueBody
#define Dt6(_V) (int)(ptrdiff_t)&(((MVMP6opaqueBody *)0)_V)
#line 18 "src/jit/emit_x64.dasc"
//|.type MVMINSTANCE, MVMInstance
#define Dt7(_V) (int)(ptrdiff_t)&(((MVMInstance *)0)_V)
#line 19 "src/jit/emit_x64.dasc"
//|.type OBJECT, MVMObject
#define Dt8(_V) (int)(ptrdiff_t)&(((MVMObject *)0)_V)
#line 20 "src/jit/emit_x64.dasc"
//|.type COLLECTABLE, MVMCollectable
#define Dt9(_V) (int)(ptrdiff_t)&(((MVMCollectable *)0)_V)
#line 21 "src/jit/emit_x64.dasc"
//|.type STABLE, MVMSTable
#define DtA(_V) (int)(ptrdiff_t)&(((MVMSTable *)0)_V)
#line 22 "src/jit/emit_x64.dasc"
//|.type STRING, MVMString*
#define DtB(_V) (int)(ptrdiff_t)&(((MVMString* *)0)_V)
#line 23 "src/jit/emit_x64.dasc"
//|.type OBJECTPTR, MVMObject*
#define DtC(_V) (int)(ptrdiff_t)&(((MVMObject* *)0)_V)
#line 24 "src/jit/emit_x64.dasc"
//|.type CONTAINERSPEC, MVMContainerSpec
#define DtD(_V) (int)(ptrdiff_t)&(((MVMContainerSpec *)0)_V)
#line 25 "src/jit/emit_x64.dasc"
//|.type U16, MVMuint16
#define DtE(_V) (int)(ptrdiff_t)&(((MVMuint16 *)0)_V)
#line 26 "src/jit/emit_x64.dasc"
//|.type U32, MVMuint32
#define DtF(_V) (int)(ptrdiff_t)&(((MVMuint32 *)0)_V)
#line 27 "src/jit/emit_x64.dasc"
//|.type U64, MVMuint64
#define Dt10(_V) (int)(ptrdiff_t)&(((MVMuint64 *)0)_V)
#line 28 "src/jit/emit_x64.dasc"



/* Static allocation of relevant types to registers. I pick
 * callee-save registers for efficiency. It is likely we'll be calling
 * quite a C functions, and this saves us the trouble of storing
 * them. Moreover, C compilers preferentially do not use callee-saved
 * registers, and so in most cases, these won't be touched at all. */
//|.type TC, MVMThreadContext, r14
#define Dt11(_V) (int)(ptrdiff_t)&(((MVMThreadContext *)0)_V)
#line 37 "src/jit/emit_x64.dasc"
/* Alternative base pointer. I'll be using this often, so picking rbx
 * here rather than the extended registers will lead to smaller
 * bytecode */
//|.type WORK, MVMRegister, rbx
#define Dt12(_V) (int)(ptrdiff_t)&(((MVMRegister *)0)_V)
#line 41 "src/jit/emit_x64.dasc"
//|.type ARGS, MVMRegister, r12
#define Dt13(_V) (int)(ptrdiff_t)&(((MVMRegister *)0)_V)
#line 42 "src/jit/emit_x64.dasc"
//|.type CU, MVMCompUnit, r13
#define Dt14(_V) (int)(ptrdiff_t)&(((MVMCompUnit *)0)_V)
#line 43 "src/jit/emit_x64.dasc"


//|.macro saveregs
//| push TC; push WORK; push ARGS; push CU;
//|.endmacro

//|.macro restoreregs
//| pop CU; pop ARGS; pop WORK; pop TC
//|.endmacro


const MVMint32 MVM_jit_support(void) {
    return 1;
}

const unsigned char * MVM_jit_actions(void) {
    return actions;
}

const unsigned int MVM_jit_num_globals(void) {
    return JIT_LABEL__MAX;
}


/* C Call argument registers */
//|.if WIN32
//|.define ARG1, rcx
//|.define ARG2, rdx
//|.define ARG3, r8
//|.define ARG4, r9
//|.else
//|.define ARG1, rdi
//|.define ARG2, rsi
//|.define ARG3, rdx
//|.define ARG4, rcx
//|.define ARG5, r8
//|.define ARG6, r9
//|.endif

/* C call argument registers for floating point */
//|.if WIN32
//|.define ARG1F, xmm0
//|.define ARG2F, xmm1
//|.define ARG3F, xmm2
//|.define ARG4F, xmm3
//|.else
//|.define ARG1F, xmm0
//|.define ARG2F, xmm1
//|.define ARG3F, xmm2
//|.define ARG4F, xmm3
//|.define ARG5F, xmm4
//|.define ARG6F, xmm5
//|.define ARG7F, xmm6
//|.define ARG8F, xmm7
//|.endif

/* Special register for the function to be invoked 
 * (chosen because it isn't involved in argument passing
 *  and volatile) */
//|.define FUNCTION, r10
/* all-purpose temporary registers */
//|.define TMP1, rcx
//|.define TMP2, rdx
//|.define TMP3, r8
//|.define TMP4, r9
//|.define TMP5, r10
//|.define TMP6, r11
/* same, but 32 bits wide */
//|.define TMP1d, ecx
//|.define TMP2d, edx
//|.define TMP3d, r8d
//|.define TMP4d, r9d
//|.define TMP5d, r10d
//|.define TMP6d, r11d

/* return value */
//|.define RV, rax
//|.define RVF, xmm0

//|.macro callr, reg
//|.if WIN32
//| sub rsp, 32
//| call reg
//| add rsp, 32
//|.else
//| call reg
//|.endif
//|.endmacro

//|.macro callp, funcptr
//| mov64 FUNCTION, (uintptr_t)funcptr
//| callr FUNCTION
//|.endmacro

//|.macro addarg, i, val
//||switch(i) {
//||    case 0:
//|         mov ARG1, val
//||        break;
//||    case 1:
//|         mov ARG2, val
//||        break;
//||    case 2:
//|         mov ARG3, val
//||        break;
//||    case 3:
//|         mov ARG4, val
//||        break;
//|.if not WIN32
//||    case 4:
//|         mov ARG5, val
//||        break;
//||    case 5:
//|         mov ARG6, val
//||        break;
//|.endif
//||    default:
//||        MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
//||}
//|.endmacro

//|.macro addarg_f, i, val
//||switch(i) {
//||    case 0:
//|         movsd ARG1F, qword val
//||        break;
//||    case 1:
//|         movsd ARG2F, qword val
//||        break;
//||    case 2:
//|         movsd ARG3F, qword val
//||        break;
//||    case 3:
//|         movsd ARG4F, qword val
//||        break;
//|.if not WIN32
//||    case 4:
//|         movsd ARG5F, qword val
//||        break;
//||    case 5:
//|         movsd ARG6F, qword val
//||        break;
//||    case 6:
//|         movsd ARG7F, qword val
//||        break;
//||    case 7:
//|         movsd ARG8F, qword val
//||        break;
//|.endif
//||    default:
//||        MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
//||}
//|.endmacro

//|.macro check_wb, root, ref;
//| test word COLLECTABLE:root->flags, MVM_CF_SECOND_GEN;
//| setnz al;
//| cmp ref, 0x0;
//| setne ah;
//| test ah, al;
//| setnz al;
//| test word COLLECTABLE:ref->flags, MVM_CF_SECOND_GEN;
//| setz ah;
//| test ah, al;
//|.endmacro;

//|.macro hit_wb, obj
//| mov ARG1, TC;
//| mov ARG2, obj;
//| callp &MVM_gc_write_barrier_hit;
//|.endmacro

//|.macro get_spesh_slot, reg, idx;
//| mov reg, TC->cur_frame;
//| mov reg, FRAME:reg->effective_spesh_slots;
//| mov reg, OBJECTPTR:reg[idx];
//|.endmacro


//|.macro get_vmnull, reg
//| mov reg, TC->instance;
//| mov reg, MVMINSTANCE:reg->VMNull;
//|.endmacro

//|.macro get_cur_op, reg
//| mov reg, TC->interp_cur_op
//| mov reg, [reg]
//|.endmacro

//|.macro get_string, reg, idx
//| mov reg, CU->body.strings;
//| mov reg, STRING:reg[idx];
//|.endmacro

//|.macro is_type_object, reg
//| test word OBJECT:reg->header.flags, MVM_CF_TYPE_OBJECT
//|.endmacro

/* A function prologue is always the same in x86 / x64, becuase
 * we do not provide variable arguments, instead arguments are provided
 * via a frame. All JIT entry points receive a prologue. */
void MVM_jit_emit_prologue(MVMThreadContext *tc, MVMJitGraph *jg,
                           dasm_State **Dst) {
    /* Setup stack */
    //| push rbp;
    //| mov rbp, rsp;
    dasm_put(Dst, 0);
#line 249 "src/jit/emit_x64.dasc"
    /* save callee-save registers */
    //| saveregs;
    dasm_put(Dst, 5);
#line 251 "src/jit/emit_x64.dasc"
    /* setup special frame variables */
    //| mov TC,   ARG1;
    //| mov CU,   ARG2;
    //| mov TMP6, TC->cur_frame;
    //| mov WORK, FRAME:TMP6->work;
    //| mov ARGS, FRAME:TMP6->params.args;
    dasm_put(Dst, 13, Dt11(->cur_frame), Dt1(->work), Dt1(->params.args));
#line 257 "src/jit/emit_x64.dasc"
    /* ARG3 contains our 'entry label' */
    //| jmp ARG3
    dasm_put(Dst, 34);
#line 259 "src/jit/emit_x64.dasc"

}

/* And a function epilogue is also always the same */
void MVM_jit_emit_epilogue(MVMThreadContext *tc, MVMJitGraph *jg,
                           dasm_State **Dst) {
    //| ->exit:
    //| mov RV, 0;
    //| ->out:
    dasm_put(Dst, 38);
#line 268 "src/jit/emit_x64.dasc"
    /* restore callee-save registers */
    //| restoreregs;
    dasm_put(Dst, 50);
#line 270 "src/jit/emit_x64.dasc"
    /* Restore stack */
    //| mov rsp, rbp;
    //| pop rbp;
    //| ret;
    dasm_put(Dst, 58);
#line 274 "src/jit/emit_x64.dasc"
}

static MVMuint64 try_emit_gen2_ref(MVMThreadContext *tc, MVMJitGraph *jg,
                                   MVMObject *obj, MVMint16 reg, 
                                   dasm_State **Dst) {
    if (!(obj->header.flags & MVM_CF_SECOND_GEN))
        return 0;
    //| mov64 TMP1, (uintptr_t)obj;
    //| mov WORK[reg], TMP1;
    dasm_put(Dst, 65, (unsigned int)((uintptr_t)obj), (unsigned int)(((uintptr_t)obj)>>32), Dt12([reg]));
#line 283 "src/jit/emit_x64.dasc"
    return 1;
}

/* compile per instruction, can't really do any better yet */
void MVM_jit_emit_primitive(MVMThreadContext *tc, MVMJitGraph *jg,
                            MVMJitPrimitive * prim, dasm_State **Dst) {
    MVMSpeshIns *ins = prim->ins;
    MVMuint16 op = ins->info->opcode;
    MVM_jit_log(tc, "emit opcode: <%s>\n", ins->info->name);
    /* Quite a few of these opcodes are copies. Ultimately, I want to
     * move copies to their own node (MVMJitCopy or such), and reduce
     * the number of copies (and thereby increase the efficiency), but
     * currently that isn't really feasible. */
    switch (op) {
    case MVM_OP_const_i64_16: {
        MVMint32 reg = ins->operands[0].reg.orig;
        /* Upgrade to 64 bit */
        MVMint64 val = (MVMint64)ins->operands[1].lit_i16;
        //| mov WORK[reg], qword val;
        dasm_put(Dst, 74, Dt12([reg]), val);
#line 302 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_const_i64: {
        MVMint32 reg = ins->operands[0].reg.orig;
        MVMint64 val = ins->operands[1].lit_i64;
        //| mov64 TMP1, val;
        //| mov WORK[reg], TMP1;
        dasm_put(Dst, 65, (unsigned int)(val), (unsigned int)((val)>>32), Dt12([reg]));
#line 309 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_const_n64: {
        MVMint16 reg = ins->operands[0].reg.orig;
        MVMint64 valbytes = ins->operands[1].lit_i64;
        MVM_jit_log(tc, "store const %f\n", ins->operands[1].lit_n64);
        //| mov64 TMP1, valbytes;
        //| mov WORK[reg], TMP1;
        dasm_put(Dst, 65, (unsigned int)(valbytes), (unsigned int)((valbytes)>>32), Dt12([reg]));
#line 317 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_const_s: {
         MVMint16 reg = ins->operands[0].reg.orig;
         MVMuint32 idx = ins->operands[1].lit_str_idx;
         MVMStaticFrame *sf = jg->sg->sf;
         MVMString * s = sf->body.cu->body.strings[idx];
         if (!try_emit_gen2_ref(tc, jg, (MVMObject*)s, reg, Dst)) {
             //| get_string TMP1, idx;
             //| mov WORK[reg], TMP1;
             dasm_put(Dst, 80, Dt14(->body.strings), DtB([idx]), Dt12([reg]));
#line 327 "src/jit/emit_x64.dasc"
         }
         break;
    }
    case MVM_OP_null: {
        MVMint16 reg = ins->operands[0].reg.orig;
        //| mov TMP1, TC->instance;
        //| mov TMP1, MVMINSTANCE:TMP1->VMNull;
        //| mov WORK[reg], TMP1;
        dasm_put(Dst, 93, Dt11(->instance), Dt7(->VMNull), Dt12([reg]));
#line 335 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_gethow:
    case MVM_OP_getwhat: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 obj = ins->operands[0].reg.orig;
        //| mov TMP1, WORK[obj];
        //| mov TMP1, OBJECT:TMP1->st;
        dasm_put(Dst, 106, Dt12([obj]), Dt8(->st));
#line 343 "src/jit/emit_x64.dasc"
        if (op == MVM_OP_gethow) {
            //| mov TMP1, STABLE:TMP1->HOW;
            dasm_put(Dst, 110, DtA(->HOW));
#line 345 "src/jit/emit_x64.dasc"
        } else {
            //| mov TMP1, STABLE:TMP1->WHAT;
            dasm_put(Dst, 110, DtA(->WHAT));
#line 347 "src/jit/emit_x64.dasc"
        }
        //| mov WORK[dst], TMP1;
        dasm_put(Dst, 69, Dt12([dst]));
#line 349 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_getlex: {
        MVMint16 *lexical_types;
        MVMStaticFrame * sf = jg->sg->sf;
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 idx = ins->operands[1].lex.idx;
        MVMint16 out = ins->operands[1].lex.outers;
        MVMint16 i;
        //| mov TMP1, TC->cur_frame;
        dasm_put(Dst, 115, Dt11(->cur_frame));
#line 359 "src/jit/emit_x64.dasc"
        for (i = 0; i < out; i++) {
            /* I'm going to skip compiling the check whether the outer
             * node really exists, because if the code has run N times
             * correctly, then the outer frame must have existed then,
             * and since this chain is static, it should still exist now.
             * If it doesn't exist, that means we crash. */
            //| mov TMP1, FRAME:TMP1->outer;
            dasm_put(Dst, 110, Dt1(->outer));
#line 366 "src/jit/emit_x64.dasc"
            sf = sf->body.outer;
        }
        /* get array of lexicals */
        //| mov TMP2, FRAME:TMP1->env;
        dasm_put(Dst, 120, Dt1(->env));
#line 370 "src/jit/emit_x64.dasc"
        /* read value */
        //| mov TMP2, REGISTER:TMP2[idx];
        dasm_put(Dst, 125, Dt2([idx]));
#line 372 "src/jit/emit_x64.dasc"
        lexical_types = (jg->sg->lexical_types ? jg->sg->lexical_types :
                         sf->body.lexical_types);
        MVM_jit_log(tc, "Lexical type of register: %d\n", lexical_types[idx]);
        if (lexical_types[idx] == MVM_reg_obj) {
            MVM_jit_log(tc, "Emit lex vifivy check\n");
            /* NB: this code path hasn't been checked. */
            /* if it is zero, check if we need to auto-vivify */        
            //| cmp TMP2, 0;
            //| jne >1; 
            dasm_put(Dst, 130);
#line 381 "src/jit/emit_x64.dasc"
            /* save frame and value */
            //| int 3; // debug instruction - i haven't tested this path, and it seems hard to trigger
            //| push TMP2;
            //| push TMP1;
            dasm_put(Dst, 140);
#line 385 "src/jit/emit_x64.dasc"
            /* setup args */
            //| mov ARG1, TC;
            //| mov ARG2, [rsp+8]; // the frame, which i just pushed
            //| mov ARG3, idx;
            //| callp &MVM_frame_vivify_lexical;
            dasm_put(Dst, 145, idx, (unsigned int)((uintptr_t)&MVM_frame_vivify_lexical), (unsigned int)(((uintptr_t)&MVM_frame_vivify_lexical)>>32));
#line 390 "src/jit/emit_x64.dasc"
            /* restore stack pointer */
            //| add rsp, 16;
            dasm_put(Dst, 167);
#line 392 "src/jit/emit_x64.dasc"
            /* use return value for the result */
            //| mov TMP2, RV;
            //|1:
            dasm_put(Dst, 172);
#line 395 "src/jit/emit_x64.dasc"
        } 
        /* store the value */
        //| mov WORK[dst], TMP2;
        dasm_put(Dst, 178, Dt12([dst]));
#line 398 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_bindlex: {
        MVMint16 idx = ins->operands[0].lex.idx;
        MVMint16 out = ins->operands[0].lex.outers;
        MVMint16 src = ins->operands[1].reg.orig;
        MVMint16 i;
        //| mov TMP1, TC->cur_frame;
        dasm_put(Dst, 115, Dt11(->cur_frame));
#line 406 "src/jit/emit_x64.dasc"
        for (i = 0; i < out; i++) {
            //| mov TMP1, FRAME:TMP1->outer;
            dasm_put(Dst, 110, Dt1(->outer));
#line 408 "src/jit/emit_x64.dasc"
        }
        //| mov TMP1, FRAME:TMP1->env;
        //| mov TMP2, WORK[src];
        //| mov REGISTER:TMP1[idx], TMP2;
        dasm_put(Dst, 183, Dt1(->env), Dt12([src]), Dt2([idx]));
#line 412 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_sp_getarg_o:
    case MVM_OP_sp_getarg_n:
    case MVM_OP_sp_getarg_s:
    case MVM_OP_sp_getarg_i: {
        MVMint32 reg = ins->operands[0].reg.orig;
        MVMuint16 idx = ins->operands[1].callsite_idx;
        //| mov TMP1, ARGS[idx];
        //| mov WORK[reg], TMP1;
        dasm_put(Dst, 196, Dt13([idx]), Dt12([reg]));
#line 422 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_sp_p6oget_i:
    case MVM_OP_sp_p6oget_n:
    case MVM_OP_sp_p6oget_s:
    case MVM_OP_sp_p6oget_o:
    case MVM_OP_sp_p6ogetvc_o:
    case MVM_OP_sp_p6ogetvt_o: {
        MVMint16 dst    = ins->operands[0].reg.orig;
        MVMint16 obj    = ins->operands[1].reg.orig;
        MVMint16 offset = ins->operands[2].lit_i16;
        MVMint16 body   = offsetof(MVMP6opaque, body);
        //| mov TMP1, WORK[obj];
        //| cmp aword P6OPAQUE:TMP1->body.replaced, 0;
        //| jne >1;
        //| lea TMP2, [TMP1 + (offset + body)];
        //| jmp >2;
        //|1:
        //| mov TMP2, P6OPAQUE:TMP1->body.replaced;
        //| lea TMP2, [TMP2 + offset];
        //|2:
        dasm_put(Dst, 207, Dt12([obj]), Dt5(->body.replaced), (offset + body), Dt5(->body.replaced), offset);
#line 443 "src/jit/emit_x64.dasc"
        /* TMP1 now contains address of item */
        if (op == MVM_OP_sp_p6oget_o) {
            //| mov TMP3, [TMP2];
            //| cmp TMP3, 0;
            dasm_put(Dst, 241);
#line 447 "src/jit/emit_x64.dasc"
            /* Check if object doesn't point to NULL */
            //| jne >3;
            dasm_put(Dst, 250);
#line 449 "src/jit/emit_x64.dasc"
            /* Otherwise load VMNull */ 
            //| get_vmnull TMP3;
            //|3:
            dasm_put(Dst, 255, Dt11(->instance), Dt7(->VMNull));
#line 452 "src/jit/emit_x64.dasc"
        } else if (op == MVM_OP_sp_p6ogetvt_o) {
            /* vivify as type object */ 
            MVMint16 spesh_idx = ins->operands[3].lit_i16;
            //| mov TMP3, [TMP2];
            dasm_put(Dst, 266);
#line 456 "src/jit/emit_x64.dasc"
            /* check for null */
            //| cmp TMP3, 0;
            //| jne >4;
            dasm_put(Dst, 270);
#line 459 "src/jit/emit_x64.dasc"
            /* if null, vivify as type object from spesh slot */
            //| get_spesh_slot TMP3, spesh_idx;
            dasm_put(Dst, 280, Dt11(->cur_frame), Dt1(->effective_spesh_slots), DtC([spesh_idx]));
#line 461 "src/jit/emit_x64.dasc"
            /* need to hit write barrier? */
            //| check_wb TMP1, TMP3;
            //| jz >3;
            //| push TMP2; // address
            //| push TMP3; // value
            //| hit_wb WORK[obj]; // write barrier for header 
            //| pop TMP3;
            //| pop TMP2;
            //|3:
            dasm_put(Dst, 293, Dt9(->flags), MVM_CF_SECOND_GEN, Dt9(->flags), MVM_CF_SECOND_GEN, Dt12([obj]), (unsigned int)((uintptr_t)&MVM_gc_write_barrier_hit), (unsigned int)(((uintptr_t)&MVM_gc_write_barrier_hit)>>32));
#line 470 "src/jit/emit_x64.dasc"
            /* store vivified type value in memory location */
            //| mov [TMP2], TMP3;
            //|4:
            dasm_put(Dst, 356);
#line 473 "src/jit/emit_x64.dasc"
        } else if (op == MVM_OP_sp_p6ogetvc_o) {
            MVMint16 spesh_idx = ins->operands[3].lit_i16;
            //| mov TMP3, [TMP2];
            //| cmp TMP3, 0;
            //| jne >4;
            dasm_put(Dst, 362);
#line 478 "src/jit/emit_x64.dasc"
            /* vivify as clone */
            //| push TMP1;
            //| push TMP2;
            //| mov ARG1, TC; 
            //| get_spesh_slot ARG2, spesh_idx;
            //| callp &MVM_repr_clone;
            //| pop TMP2;
            //| pop TMP1;
            dasm_put(Dst, 375, Dt11(->cur_frame), Dt1(->effective_spesh_slots), DtC([spesh_idx]), (unsigned int)((uintptr_t)&MVM_repr_clone), (unsigned int)(((uintptr_t)&MVM_repr_clone)>>32));
#line 486 "src/jit/emit_x64.dasc"
            /* assign with write barrier */
            //| mov TMP3, RV;
            //| check_wb TMP1, TMP3;
            //| jz >3;
            //| push TMP2;
            //| push TMP3;
            //| hit_wb WORK[obj];
            //| pop TMP3;
            //| pop TMP2;
            //|3: 
            //| mov [TMP2], TMP3;
            dasm_put(Dst, 404, Dt9(->flags), MVM_CF_SECOND_GEN, Dt9(->flags), MVM_CF_SECOND_GEN, Dt12([obj]), (unsigned int)((uintptr_t)&MVM_gc_write_barrier_hit), (unsigned int)(((uintptr_t)&MVM_gc_write_barrier_hit)>>32));
#line 497 "src/jit/emit_x64.dasc"
            /* done */
            //|4:
            dasm_put(Dst, 359);
#line 499 "src/jit/emit_x64.dasc"
        } else {
            /* the regular case */
            //| mov TMP3, [TMP2];
            dasm_put(Dst, 266);
#line 502 "src/jit/emit_x64.dasc"
        }
        /* store in local register */
        //| mov WORK[dst], TMP3;
        dasm_put(Dst, 473, Dt12([dst]));
#line 505 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_sp_p6obind_i:
    case MVM_OP_sp_p6obind_n:
    case MVM_OP_sp_p6obind_o:
    case MVM_OP_sp_p6obind_s: {
        MVMint16 obj    = ins->operands[0].reg.orig;
        MVMint16 offset = ins->operands[1].callsite_idx;
        MVMint16 val    = ins->operands[2].reg.orig;
        //| mov TMP1, WORK[obj];            // object
        //| mov TMP2, WORK[val];            // value
        //| lea TMP3, P6OPAQUE:TMP1->body;  // body
        //| cmp qword P6OBODY:TMP3->replaced, 0; 
        //| je >1;
        //| mov TMP3, P6OBODY:TMP3->replaced; // replaced object body
        //|1:
        dasm_put(Dst, 478, Dt12([obj]), Dt12([val]), Dt5(->body), Dt6(->replaced), Dt6(->replaced));
#line 521 "src/jit/emit_x64.dasc"
        if (op == MVM_OP_sp_p6obind_o) {
            /* check if we should hit write barrier */
            //| check_wb TMP1, TMP2;
            //| jz >2;
            //| push TMP2; // store value
            //| push TMP3; // store body pointer
            //| hit_wb WORK[obj]
            //| pop TMP3; // restore body pointer
            //| pop TMP2; // restore value
            //|2: // done
            dasm_put(Dst, 506, Dt9(->flags), MVM_CF_SECOND_GEN, Dt9(->flags), MVM_CF_SECOND_GEN, Dt12([obj]), (unsigned int)((uintptr_t)&MVM_gc_write_barrier_hit), (unsigned int)(((uintptr_t)&MVM_gc_write_barrier_hit)>>32));
#line 531 "src/jit/emit_x64.dasc"
        }
        //| mov [TMP3+offset], TMP2; // store value into body
        dasm_put(Dst, 568, offset);
#line 533 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_getwhere:
    case MVM_OP_set: {
         MVMint32 reg1 = ins->operands[0].reg.orig;
         MVMint32 reg2 = ins->operands[1].reg.orig;
         //| mov TMP1, WORK[reg2];
         //| mov WORK[reg1], TMP1;
         dasm_put(Dst, 573, Dt12([reg2]), Dt12([reg1]));
#line 541 "src/jit/emit_x64.dasc"
         break;
    }
    case MVM_OP_sp_getspeshslot: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 spesh_idx = ins->operands[1].lit_i16;
        //| get_spesh_slot TMP1, spesh_idx;
        //| mov WORK[dst], TMP1;
        dasm_put(Dst, 582, Dt11(->cur_frame), Dt1(->effective_spesh_slots), DtC([spesh_idx]), Dt12([dst]));
#line 548 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_setdispatcher: {
        MVMint16 src = ins->operands[0].reg.orig;
        //| mov TMP1, aword WORK[src];
        //| mov aword TC->cur_dispatcher, TMP1;
        dasm_put(Dst, 599, Dt12([src]), Dt11(->cur_dispatcher));
#line 554 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_takedispatcher: {
        MVMint16 dst = ins->operands[0].reg.orig;
        //| mov TMP1, aword TC->cur_dispatcher;
        //| mov aword WORK[dst], TMP1;
        //| mov aword TC->cur_dispatcher, NULL;
        dasm_put(Dst, 608, Dt11(->cur_dispatcher), Dt12([dst]), Dt11(->cur_dispatcher), NULL);
#line 561 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_getcode: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMuint16 idx = ins->operands[1].coderef_idx;
        //| mov TMP1, aword CU->body.coderefs;
        //| mov TMP1, aword OBJECTPTR:TMP1[idx];
        //| mov aword WORK[dst], TMP1;
        dasm_put(Dst, 80, Dt14(->body.coderefs), DtC([idx]), Dt12([dst]));
#line 569 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_add_i:
    case MVM_OP_sub_i:
    case MVM_OP_mul_i:
    case MVM_OP_div_i:
    case MVM_OP_mod_i: {
        MVMint32 reg_a = ins->operands[0].reg.orig;
        MVMint32 reg_b = ins->operands[1].reg.orig;
        MVMint32 reg_c = ins->operands[2].reg.orig;
        //| mov rax, WORK[reg_b];
        dasm_put(Dst, 622, Dt12([reg_b]));
#line 580 "src/jit/emit_x64.dasc"
        switch(ins->info->opcode) {
        case MVM_OP_add_i:
            //| add rax, WORK[reg_c];
            dasm_put(Dst, 627, Dt12([reg_c]));
#line 583 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_sub_i:
            //| sub rax, WORK[reg_c];
            dasm_put(Dst, 632, Dt12([reg_c]));
#line 586 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_mul_i:
            //| imul rax, WORK[reg_c];
            dasm_put(Dst, 637, Dt12([reg_c]));
#line 589 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_div_i:
        case MVM_OP_mod_i:
            // Convert Quadword to Octoword, i.e. use rax:rdx as one
            // single 16 byte register
            //| cqo; 
            //| idiv qword WORK[reg_c];
            dasm_put(Dst, 643, Dt12([reg_c]));
#line 596 "src/jit/emit_x64.dasc"
            break;
        }
        if (ins->info->opcode == MVM_OP_mod_i) {
            // result of modula is stored in rdx
            //| mov WORK[reg_a], rdx;
            dasm_put(Dst, 178, Dt12([reg_a]));
#line 601 "src/jit/emit_x64.dasc"
        } else {
            // all others in rax
            //| mov WORK[reg_a], rax;
            dasm_put(Dst, 651, Dt12([reg_a]));
#line 604 "src/jit/emit_x64.dasc"
        }
        break;
    }
    case MVM_OP_inc_i: {
         MVMint32 reg = ins->operands[0].reg.orig;
         //| inc qword WORK[reg];
         dasm_put(Dst, 656, Dt12([reg]));
#line 610 "src/jit/emit_x64.dasc"
         break;
    }
    case MVM_OP_dec_i: {
        MVMint32 reg = ins->operands[0].reg.orig;
        //| dec qword WORK[reg];
        dasm_put(Dst, 662, Dt12([reg]));
#line 615 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_add_n:
    case MVM_OP_sub_n:
    case MVM_OP_mul_n:
    case MVM_OP_div_n: {
        MVMint16 reg_a = ins->operands[0].reg.orig;
        MVMint16 reg_b = ins->operands[1].reg.orig;
        MVMint16 reg_c = ins->operands[2].reg.orig;
        /* Copying data to xmm (floating point) registers requires
         * a special move instruction */
        //| movsd xmm0, qword WORK[reg_b];
        dasm_put(Dst, 668, Dt12([reg_b]));
#line 627 "src/jit/emit_x64.dasc"
        switch(ins->info->opcode) {
        case MVM_OP_add_n:
            //| addsd xmm0, qword WORK[reg_c];
            dasm_put(Dst, 675, Dt12([reg_c]));
#line 630 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_sub_n:
            //| subsd xmm0, qword WORK[reg_c];
            dasm_put(Dst, 682, Dt12([reg_c]));
#line 633 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_mul_n:
            //| mulsd xmm0, qword WORK[reg_c];
            dasm_put(Dst, 689, Dt12([reg_c]));
#line 636 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_div_n:
            //| divsd xmm0, qword WORK[reg_c];
            dasm_put(Dst, 696, Dt12([reg_c]));
#line 639 "src/jit/emit_x64.dasc"
            break;
        }
        //| movsd qword WORK[reg_a], xmm0;
        dasm_put(Dst, 703, Dt12([reg_a]));
#line 642 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_coerce_in: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 src = ins->operands[1].reg.orig;
        /* convert simple integer to double precision */
        //| cvtsi2sd xmm0, qword WORK[src];
        //| movsd qword WORK[dst], xmm0;
        dasm_put(Dst, 710, Dt12([src]), Dt12([dst]));
#line 650 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_coerce_ni: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 src = ins->operands[1].reg.orig;
        /* convert double precision to simple intege */
        //| cvttsd2si rax, qword WORK[src];
        //| mov WORK[dst], rax;
        dasm_put(Dst, 724, Dt12([src]), Dt12([dst]));
#line 658 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_eq_i:
    case MVM_OP_eqaddr:
    case MVM_OP_ne_i:
    case MVM_OP_lt_i:
    case MVM_OP_le_i:
    case MVM_OP_gt_i:
    case MVM_OP_ge_i: {
        MVMint32 reg_a = ins->operands[0].reg.orig;
        MVMint32 reg_b = ins->operands[1].reg.orig;
        MVMint32 reg_c = ins->operands[2].reg.orig;
        //| mov rax, WORK[reg_b];
        dasm_put(Dst, 622, Dt12([reg_b]));
#line 671 "src/jit/emit_x64.dasc"
        /* comparison result in the setting bits in the rflags register */
        //| cmp rax, WORK[reg_c];
        dasm_put(Dst, 736, Dt12([reg_c]));
#line 673 "src/jit/emit_x64.dasc"
        /* copy the right comparison bit to the lower byte of the rax register */
        switch(ins->info->opcode) {
        case MVM_OP_eqaddr:
        case MVM_OP_eq_i:
            //| sete al;
            dasm_put(Dst, 741);
#line 678 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_ne_i:
            //| setne al;
            dasm_put(Dst, 745);
#line 681 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_lt_i:
            //| setl al;
            dasm_put(Dst, 749);
#line 684 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_le_i:
            //| setle al;
            dasm_put(Dst, 753);
#line 687 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_gt_i:
            //| setg al;
            dasm_put(Dst, 757);
#line 690 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_ge_i:
            //| setge al;
            dasm_put(Dst, 761);
#line 693 "src/jit/emit_x64.dasc"
            break;
        }
        /* zero extend al (lower byte) to rax (whole register) */
        //| movzx rax, al;
        //| mov WORK[reg_a], rax; 
        dasm_put(Dst, 765, Dt12([reg_a]));
#line 698 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_sp_fastcreate: {
        MVMint16 dst       = ins->operands[0].reg.orig;
        MVMuint16 size     = ins->operands[1].lit_i16;
        MVMint16 spesh_idx = ins->operands[2].lit_i16;
        //| mov ARG1, TC;
        //| mov ARG2, size;
        //| callp &MVM_gc_allocate_zeroed;
        //| get_spesh_slot TMP1, spesh_idx;
        //| mov aword OBJECT:RV->st, TMP1;  // st is 64 bit (pointer)
        //| mov word OBJECT:RV->header.size, size; // object size is 16 bit
        //| mov TMP1d, dword TC->thread_id;  // thread id is 32 bit
        //| mov dword OBJECT:RV->header.owner, TMP1d; // does this even work?
        //| mov aword WORK[dst], RV; // store in local register
        dasm_put(Dst, 774, size, (unsigned int)((uintptr_t)&MVM_gc_allocate_zeroed), (unsigned int)(((uintptr_t)&MVM_gc_allocate_zeroed)>>32), Dt11(->cur_frame), Dt1(->effective_spesh_slots), DtC([spesh_idx]), Dt8(->st), Dt8(->header.size), size, Dt11(->thread_id), Dt8(->header.owner), Dt12([dst]));
#line 713 "src/jit/emit_x64.dasc"
        break;
    }
    case MVM_OP_decont: {
        MVMint16 dst = ins->operands[0].reg.orig;
        MVMint16 src = ins->operands[1].reg.orig;
        //| mov TMP5, WORK[src];
        //| test TMP5, TMP5;
        dasm_put(Dst, 823, Dt12([src]));
#line 720 "src/jit/emit_x64.dasc"
        // obj is null
        //| jz >1; 
        //| is_type_object TMP5;
        dasm_put(Dst, 831, Dt8(->header.flags), MVM_CF_TYPE_OBJECT);
#line 723 "src/jit/emit_x64.dasc"
        // object is type object (not concrete)
        //| jz >1;
        //| mov TMP6, OBJECT:TMP5->st;
        //| mov TMP6, STABLE:TMP6->container_spec;
        //| test TMP6, TMP6;
        dasm_put(Dst, 843, Dt8(->st), DtA(->container_spec));
#line 728 "src/jit/emit_x64.dasc"
        // container spec is zero
        //| jz >1;
        //| mov ARG1, TC;
        //| mov ARG2, TMP5;      // object
        //| lea ARG3, WORK[dst]; // destination register
        //| mov FUNCTION, CONTAINERSPEC:TMP6->fetch; // get function pointer
        //| callr FUNCTION;
        //| jmp >2;
        //|1:
        dasm_put(Dst, 859, Dt12([dst]), DtD(->fetch));
#line 737 "src/jit/emit_x64.dasc"
        // otherwise just move the object into the register
        //| mov WORK[dst], TMP5;
        //|2:
        dasm_put(Dst, 889, Dt12([dst]));
#line 740 "src/jit/emit_x64.dasc"
    }
        
    default:
        MVM_exception_throw_adhoc(tc, "Can't JIT opcode");
    }
}

void MVM_jit_emit_call_c(MVMThreadContext *tc, MVMJitGraph *jg,
                         MVMJitCallC * call_spec, dasm_State **Dst) {
    int i;
    MVMJitCallArg *args = call_spec->args;
    MVM_jit_log(tc, "emit c call <%d args>\n", call_spec->num_args);
    if (call_spec->has_vargs) {
        MVM_exception_throw_adhoc(tc, "JIT can't handle varargs yet");
    }
    /* first, add arguments */
    for (i = 0; i < call_spec->num_args; i++) {
        switch (args[i].type) {
        case MVM_JIT_INTERP_VAR:
            MVM_jit_log(tc, "emit interp call arg %d %d \n", i, args[i].v.ivar);
            switch (args[i].v.ivar) {
            case MVM_JIT_INTERP_TC:
                //| addarg i, TC;
                switch(i) {
                    case 0:
                dasm_put(Dst, 896);
                        break;
                    case 1:
                dasm_put(Dst, 901);
                        break;
                    case 2:
                dasm_put(Dst, 906);
                        break;
                    case 3:
                dasm_put(Dst, 911);
                        break;
                    case 4:
                dasm_put(Dst, 916);
                        break;
                    case 5:
                dasm_put(Dst, 921);
                        break;
                    default:
                        MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
                }
#line 763 "src/jit/emit_x64.dasc"
                 break;
            case MVM_JIT_INTERP_FRAME:
                //| addarg i, TC->cur_frame;
                switch(i) {
                    case 0:
                dasm_put(Dst, 926, Dt11(->cur_frame));
                        break;
                    case 1:
                dasm_put(Dst, 931, Dt11(->cur_frame));
                        break;
                    case 2:
                dasm_put(Dst, 936, Dt11(->cur_frame));
                        break;
                    case 3:
                dasm_put(Dst, 115, Dt11(->cur_frame));
                        break;
                    case 4:
                dasm_put(Dst, 941, Dt11(->cur_frame));
                        break;
                    case 5:
                dasm_put(Dst, 946, Dt11(->cur_frame));
                        break;
                    default:
                        MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
                }
#line 766 "src/jit/emit_x64.dasc"
                break;
            case MVM_JIT_INTERP_CU:
                //| addarg i, CU;
                switch(i) {
                    case 0:
                dasm_put(Dst, 951);
                        break;
                    case 1:
                dasm_put(Dst, 956);
                        break;
                    case 2:
                dasm_put(Dst, 961);
                        break;
                    case 3:
                dasm_put(Dst, 966);
                        break;
                    case 4:
                dasm_put(Dst, 971);
                        break;
                    case 5:
                dasm_put(Dst, 975);
                        break;
                    default:
                        MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
                }
#line 769 "src/jit/emit_x64.dasc"
                break;
            }
            break;
        case MVM_JIT_REG_VAL:
            //| addarg i, WORK[args[i].v.reg];
            switch(i) {
                case 0:
            dasm_put(Dst, 980, Dt12([args[i].v.reg]));
                    break;
                case 1:
            dasm_put(Dst, 985, Dt12([args[i].v.reg]));
                    break;
                case 2:
            dasm_put(Dst, 990, Dt12([args[i].v.reg]));
                    break;
                case 3:
            dasm_put(Dst, 995, Dt12([args[i].v.reg]));
                    break;
                case 4:
            dasm_put(Dst, 1000, Dt12([args[i].v.reg]));
                    break;
                case 5:
            dasm_put(Dst, 1005, Dt12([args[i].v.reg]));
                    break;
                default:
                    MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
            }
#line 774 "src/jit/emit_x64.dasc"
            break;
        case MVM_JIT_REG_VAL_F:
            //| addarg_f i, WORK[args[i].v.reg];
            switch(i) {
                case 0:
            dasm_put(Dst, 668, Dt12([args[i].v.reg]));
                    break;
                case 1:
            dasm_put(Dst, 1010, Dt12([args[i].v.reg]));
                    break;
                case 2:
            dasm_put(Dst, 1017, Dt12([args[i].v.reg]));
                    break;
                case 3:
            dasm_put(Dst, 1024, Dt12([args[i].v.reg]));
                    break;
                case 4:
            dasm_put(Dst, 1031, Dt12([args[i].v.reg]));
                    break;
                case 5:
            dasm_put(Dst, 1038, Dt12([args[i].v.reg]));
                    break;
                case 6:
            dasm_put(Dst, 1045, Dt12([args[i].v.reg]));
                    break;
                case 7:
            dasm_put(Dst, 1052, Dt12([args[i].v.reg]));
                    break;
                default:
                    MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
            }
#line 777 "src/jit/emit_x64.dasc"
            break;
        case MVM_JIT_REG_ADDR:
            //| lea TMP6, WORK[args[i].v.reg];
            //| addarg i, TMP6;
            dasm_put(Dst, 1059, Dt12([args[i].v.reg]));
            switch(i) {
                case 0:
            dasm_put(Dst, 1064);
                    break;
                case 1:
            dasm_put(Dst, 1068);
                    break;
                case 2:
            dasm_put(Dst, 1072);
                    break;
                case 3:
            dasm_put(Dst, 1076);
                    break;
                case 4:
            dasm_put(Dst, 1080);
                    break;
                case 5:
            dasm_put(Dst, 1084);
                    break;
                default:
                    MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
            }
#line 781 "src/jit/emit_x64.dasc"
        case MVM_JIT_LITERAL:
            //| addarg i, args[i].v.lit_i64;
            switch(i) {
                case 0:
            dasm_put(Dst, 1088, args[i].v.lit_i64);
                    break;
                case 1:
            dasm_put(Dst, 1093, args[i].v.lit_i64);
                    break;
                case 2:
            dasm_put(Dst, 1098, args[i].v.lit_i64);
                    break;
                case 3:
            dasm_put(Dst, 1103, args[i].v.lit_i64);
                    break;
                case 4:
            dasm_put(Dst, 1108, args[i].v.lit_i64);
                    break;
                case 5:
            dasm_put(Dst, 1113, args[i].v.lit_i64);
                    break;
                default:
                    MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
            }
#line 783 "src/jit/emit_x64.dasc"
            break;
        case MVM_JIT_LITERAL_64:
        case MVM_JIT_LITERAL_F:
            //| mov64 TMP6, args[i].v.lit_i64;
            //| addarg i, TMP6;
            dasm_put(Dst, 1118, (unsigned int)(args[i].v.lit_i64), (unsigned int)((args[i].v.lit_i64)>>32));
            switch(i) {
                case 0:
            dasm_put(Dst, 1064);
                    break;
                case 1:
            dasm_put(Dst, 1068);
                    break;
                case 2:
            dasm_put(Dst, 1072);
                    break;
                case 3:
            dasm_put(Dst, 1076);
                    break;
                case 4:
            dasm_put(Dst, 1080);
                    break;
                case 5:
            dasm_put(Dst, 1084);
                    break;
                default:
                    MVM_exception_throw_adhoc(tc, "Can't JIT more than %d arguments", i);
            }
#line 788 "src/jit/emit_x64.dasc"
            break;
        }
    }
    /* Emit the call. I think we should be able to do something smarter than
     * store the constant into the bytecode, like a data segment. But I'm
     * not sure. */
    //| callp call_spec->func_ptr;
    dasm_put(Dst, 158, (unsigned int)((uintptr_t)call_spec->func_ptr), (unsigned int)(((uintptr_t)call_spec->func_ptr)>>32));
#line 795 "src/jit/emit_x64.dasc"
    /* right, now determine what to do with the return value */
    switch(call_spec->rv_mode) {
    case MVM_JIT_RV_VOID:
        break;
    case MVM_JIT_RV_INT:
    case MVM_JIT_RV_PTR:
        //| mov WORK[call_spec->rv_idx], RV;
        dasm_put(Dst, 651, Dt12([call_spec->rv_idx]));
#line 802 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_RV_NUM:
        //| movsd qword WORK[call_spec->rv_idx], RVF;
        dasm_put(Dst, 703, Dt12([call_spec->rv_idx]));
#line 805 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_RV_DEREF:
        //| mov TMP1, [RV];
        //| mov WORK[call_spec->rv_idx], TMP1;
        dasm_put(Dst, 1123, Dt12([call_spec->rv_idx]));
#line 809 "src/jit/emit_x64.dasc"
        break;
    case MVM_JIT_RV_ADDR:
        /* store local at address */
        //| mov TMP1, WORK[call_spec->rv_idx];
        //| mov [RV], TMP1;
        dasm_put(Dst, 1131, Dt12([call_spec->rv_idx]));
#line 814 "src/jit/emit_x64.dasc"
        break;
    }
}

void MVM_jit_emit_branch(MVMThreadContext *tc, MVMJitGraph *jg,
                         MVMJitBranch * branch, dasm_State **Dst) {
    MVMSpeshIns *ins = branch->ins;
    MVMint32 name = branch->dest.name;
    if (ins == NULL || ins->info->opcode == MVM_OP_goto) {
        MVM_jit_log(tc, "emit jump to label %d\n", name);
        if (name == MVM_JIT_BRANCH_EXIT) {
            //| jmp ->exit
            dasm_put(Dst, 1139);
#line 826 "src/jit/emit_x64.dasc"
        } else {
            //| jmp =>(name)
            dasm_put(Dst, 1144, (name));
#line 828 "src/jit/emit_x64.dasc"
        }
    } else {
        MVMint16 reg = ins->operands[0].reg.orig;
        MVM_jit_log(tc, "emit branch <%s> to label %d\n",
                    ins->info->name, name);
        switch(ins->info->opcode) {
        case MVM_OP_if_i:
            //| mov rax, WORK[reg];
            //| test rax, rax;
            //| jnz =>(name); // jump to dynamic label
            dasm_put(Dst, 1148, Dt12([reg]), (name));
#line 838 "src/jit/emit_x64.dasc"
            break;
        case MVM_OP_unless_i:
            //| mov rax, WORK[reg];
            //| test rax, rax;
            //| jz =>(name);
            dasm_put(Dst, 1159, Dt12([reg]), (name));
#line 843 "src/jit/emit_x64.dasc"
            break;
        default:
            MVM_exception_throw_adhoc(tc, "JIT: Can't handle conditional <%s>",
                                      ins->info->name);
        }
    }
}

void MVM_jit_emit_label(MVMThreadContext *tc, MVMJitGraph *jg,
                        MVMJitLabel *label, dasm_State **Dst) {
    //| =>(label->name):
    dasm_put(Dst, 253, (label->name));
#line 854 "src/jit/emit_x64.dasc"
}

void MVM_jit_emit_guard(MVMThreadContext *tc, MVMJitGraph *jg,
                        MVMJitGuard *guard, dasm_State **Dst) {
    MVMint16 op        = guard->ins->info->opcode;
    MVMint16 obj       = guard->ins->operands[0].lit_i16;
    MVMint16 spesh_idx = guard->ins->operands[1].lit_i16;
    MVM_jit_log(tc, "emit guard <%s>\n", guard->ins->info->name);
    /* load object and spesh slot value */
    //| mov TMP1, WORK[obj];
    //| get_spesh_slot TMP2, spesh_idx;
    dasm_put(Dst, 1170, Dt12([obj]), Dt11(->cur_frame), Dt1(->effective_spesh_slots), DtC([spesh_idx]));
#line 865 "src/jit/emit_x64.dasc"
    if (op == MVM_OP_sp_guardtype) {
        /* object in queston should be a type object, so it shouldn't
         * be zero, should not be concrete, and the STABLE should be
         * equal to the value in the spesh slot */
        /* check for null */
        //| cmp TMP1, 0;
        //| je >1;
        dasm_put(Dst, 1187);
#line 872 "src/jit/emit_x64.dasc"
        /* check if type object (not concrete) */
        //| is_type_object TMP1;
        dasm_put(Dst, 1197, Dt8(->header.flags), MVM_CF_TYPE_OBJECT);
#line 874 "src/jit/emit_x64.dasc"
        /* if zero, this is a concrete object, and we should deopt */
        //| jz >1;
        dasm_put(Dst, 1192);
#line 876 "src/jit/emit_x64.dasc"
        /* get stable and compare */
        //| cmp TMP2, OBJECT:TMP1->st;
        //| jne >1;
        dasm_put(Dst, 1204, Dt8(->st));
#line 879 "src/jit/emit_x64.dasc"
        /* we're good, no need to deopt */
    } else if (op == MVM_OP_sp_guardconc) {
        /* object should be a non-null concrete (non-type) object */
        //| cmp TMP1, 0;
        //| je >1;
        dasm_put(Dst, 1187);
#line 884 "src/jit/emit_x64.dasc"
        /* shouldn't be type object */
        //| is_type_object TMP1;
        //| jnz >1;
        dasm_put(Dst, 1213, Dt8(->header.flags), MVM_CF_TYPE_OBJECT);
#line 887 "src/jit/emit_x64.dasc"
        /* should have our stable */
        //| cmp TMP2, OBJECT:TMP1->st;
        //| jne >1;
        dasm_put(Dst, 1204, Dt8(->st));
#line 890 "src/jit/emit_x64.dasc"
    }
    /* if we're here, we didn't jump to deopt, so skip it */
    //| jmp >2;
    //|1:
    dasm_put(Dst, 882);
#line 894 "src/jit/emit_x64.dasc"
    /* emit deopt */
    //| mov ARG1, TC;
    //| mov ARG2, guard->deopt_offset;
    //| mov ARG3, guard->deopt_target;
    //| callp &MVM_spesh_deopt_one_direct;
    dasm_put(Dst, 1224, guard->deopt_offset, guard->deopt_target, (unsigned int)((uintptr_t)&MVM_spesh_deopt_one_direct), (unsigned int)(((uintptr_t)&MVM_spesh_deopt_one_direct)>>32));
#line 899 "src/jit/emit_x64.dasc"
    /* tell jit driver we're deopting */
    //| mov RV, MVM_JIT_CTRL_DEOPT
    //| jmp ->out;
    //|2:
    dasm_put(Dst, 1245, MVM_JIT_CTRL_DEOPT);
#line 903 "src/jit/emit_x64.dasc"
}

void MVM_jit_emit_invoke(MVMThreadContext *tc, MVMJitGraph *jg, MVMJitInvoke *invoke,
                         dasm_State **Dst) {
    MVMint16 i;
    /* setup the callsite */
    //| mov ARG1, TC;
    //| mov ARG2, CU;
    //| mov ARG3, invoke->callsite_idx;
    //| callp &MVM_args_prepare;
    //| mov TMP6, RV; // store callsite in tmp6, which we don't use until the end
    dasm_put(Dst, 1256, invoke->callsite_idx, (unsigned int)((uintptr_t)&MVM_args_prepare), (unsigned int)(((uintptr_t)&MVM_args_prepare)>>32));
#line 914 "src/jit/emit_x64.dasc"
    /* get the frame (we'll use it often) */
    //| mov TMP1, TC->cur_frame;
    dasm_put(Dst, 115, Dt11(->cur_frame));
#line 916 "src/jit/emit_x64.dasc"
    /* Store arguments in the buffer. I use TMP5 as it never conflicts
     * with argument passing (like TMP6, but unlike other TMP regs) */
    //| mov TMP5, FRAME:TMP1->args;
    dasm_put(Dst, 1280, Dt1(->args));
#line 919 "src/jit/emit_x64.dasc"
    for (i = 0;  i < invoke->arg_count; i++) {
        MVMSpeshIns *ins = invoke->arg_ins[i];
        switch (ins->info->opcode) {
        case MVM_OP_arg_i:
        case MVM_OP_arg_s:
        case MVM_OP_arg_n:
        case MVM_OP_arg_o: {
            MVMint16 dst = ins->operands[0].lit_i16;
            MVMint16 src = ins->operands[1].reg.orig;
            //| mov TMP4, WORK[src];
            //| mov REGISTER:TMP5[dst], TMP4;
            dasm_put(Dst, 1285, Dt12([src]), Dt2([dst]));
#line 930 "src/jit/emit_x64.dasc"
            break;
        }
        case MVM_OP_argconst_n:
        case MVM_OP_argconst_i: {
            MVMint16 dst = ins->operands[0].lit_i16;
            MVMint64 val = ins->operands[1].lit_i64;
            //| mov64 TMP4, val;
            //| mov REGISTER:TMP5[dst], TMP4;
            dasm_put(Dst, 1294, (unsigned int)(val), (unsigned int)((val)>>32), Dt2([dst]));
#line 938 "src/jit/emit_x64.dasc"
            break;
        }
        case MVM_OP_argconst_s: {
            MVMint16 dst = ins->operands[0].lit_i16;
            MVMint32 idx = ins->operands[1].lit_str_idx;
            //| get_string TMP4, idx;
            //| mov REGISTER:TMP5[dst], TMP4;
            dasm_put(Dst, 1303, Dt14(->body.strings), DtB([idx]), Dt2([dst]));
#line 945 "src/jit/emit_x64.dasc"
            break;
        }
        default:
            MVM_exception_throw_adhoc(tc, "JIT invoke: Can't add arg <%s>",
                                      ins->info->name);
        }
    }

    /* Setup the frame for returning to our current position */
    if (sizeof(MVMReturnType) == 4) {
        //| mov dword FRAME:TMP1->return_type, invoke->return_type;
        dasm_put(Dst, 1316, Dt1(->return_type), invoke->return_type);
#line 956 "src/jit/emit_x64.dasc"
    } else {
        MVM_exception_throw_adhoc(tc, "JIT: MVMReturnType has unexpected size");
    }
    /* The register for our return value */
    if (invoke->return_type == MVM_RETURN_VOID) {
        //| mov aword FRAME:TMP1->return_value, NULL;
        dasm_put(Dst, 1321, Dt1(->return_value), NULL);
#line 962 "src/jit/emit_x64.dasc"
    } else {
        //| lea TMP2, WORK[invoke->return_register];
        //| mov aword FRAME:TMP1->return_value, TMP2;
        dasm_put(Dst, 1327, Dt12([invoke->return_register]), Dt1(->return_value));
#line 965 "src/jit/emit_x64.dasc"
    }
    /* The return address for the interpreter */
    //| get_cur_op TMP2;
    //| mov aword FRAME:TMP1->return_address, TMP2;
    dasm_put(Dst, 1336, Dt11(->interp_cur_op), Dt1(->return_address));
#line 969 "src/jit/emit_x64.dasc"
    /* The re-entry label for the JIT, so that we continue in the next BB */
    //| mov dword FRAME:TMP1->jit_entry_label, invoke->reentry_label;
    dasm_put(Dst, 1316, Dt1(->jit_entry_label), invoke->reentry_label);
#line 971 "src/jit/emit_x64.dasc"


    /* if we're not fast, then we should get the code from multi resolution */
    if (!invoke->is_fast) {
        /* first, save callsite and args */
        //| push TMP5; // args
        //| push TMP6; // callsite
        dasm_put(Dst, 1348);
#line 978 "src/jit/emit_x64.dasc"
        /* setup call MVM_frame_multi_ok(tc, code, &cur_callsite, args); */
        //| mov ARG1, TC;
        //| mov ARG2, WORK[invoke->code_register]; // code object
        //| mov ARG3, rsp; // basically, [rsp] == TMP6 == &cur_callsite
        //| mov ARG4, TMP5; // args
        //| callp &MVM_frame_find_invokee_multi_ok;
        dasm_put(Dst, 1353, Dt12([invoke->code_register]), (unsigned int)((uintptr_t)&MVM_frame_find_invokee_multi_ok), (unsigned int)(((uintptr_t)&MVM_frame_find_invokee_multi_ok)>>32));
#line 984 "src/jit/emit_x64.dasc"
        /* restore callsite, args, RV now holds code object */
        //| pop TMP6; // callsite
        //| pop TMP5; // args
        dasm_put(Dst, 1376);
#line 987 "src/jit/emit_x64.dasc"
        /* setup args for call to invoke(tc, code, cur_callsite, args) */
        //| mov ARG1, TC;
        //| mov ARG2, RV;   // code object
        //| mov ARG3, TMP6; // cur_callsite
        //| mov ARG4, TMP5; // nb - this could be pop ARG4, but that would be confusing
        dasm_put(Dst, 1381);
#line 992 "src/jit/emit_x64.dasc"
        /* get the actual function */
        //| mov FUNCTION, OBJECT:RV->st;
        //| mov FUNCTION, STABLE:FUNCTION->invoke;
        //| callr FUNCTION;
        dasm_put(Dst, 1395, Dt8(->st), DtA(->invoke));
#line 996 "src/jit/emit_x64.dasc"
    } else {
        /* call MVM_frame_invoke_code */
        //| mov ARG1, TC;
        //| mov ARG2, WORK[invoke->code_register];
        //| mov ARG3, TMP6; // this is the callsite object
        //| mov ARG4, invoke->spesh_cand;
        //| callp &MVM_frame_invoke_code;
        dasm_put(Dst, 1408, Dt12([invoke->code_register]), invoke->spesh_cand, (unsigned int)((uintptr_t)&MVM_frame_invoke_code), (unsigned int)(((uintptr_t)&MVM_frame_invoke_code)>>32));
#line 1003 "src/jit/emit_x64.dasc"
    }
    /* Almost done. jump out into the interprete */
    //| mov RV, 1;
    //| jmp ->out;
    dasm_put(Dst, 1432);
#line 1007 "src/jit/emit_x64.dasc"
}
