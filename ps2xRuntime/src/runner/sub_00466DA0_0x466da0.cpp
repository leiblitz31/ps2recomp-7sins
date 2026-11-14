#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00466DA0
// Address: 0x466da0 - 0x467170
void sub_00466DA0_0x466da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466DA0_0x466da0");
#endif

    switch (ctx->pc) {
        case 0x466da0u: goto label_466da0;
        case 0x466da4u: goto label_466da4;
        case 0x466da8u: goto label_466da8;
        case 0x466dacu: goto label_466dac;
        case 0x466db0u: goto label_466db0;
        case 0x466db4u: goto label_466db4;
        case 0x466db8u: goto label_466db8;
        case 0x466dbcu: goto label_466dbc;
        case 0x466dc0u: goto label_466dc0;
        case 0x466dc4u: goto label_466dc4;
        case 0x466dc8u: goto label_466dc8;
        case 0x466dccu: goto label_466dcc;
        case 0x466dd0u: goto label_466dd0;
        case 0x466dd4u: goto label_466dd4;
        case 0x466dd8u: goto label_466dd8;
        case 0x466ddcu: goto label_466ddc;
        case 0x466de0u: goto label_466de0;
        case 0x466de4u: goto label_466de4;
        case 0x466de8u: goto label_466de8;
        case 0x466decu: goto label_466dec;
        case 0x466df0u: goto label_466df0;
        case 0x466df4u: goto label_466df4;
        case 0x466df8u: goto label_466df8;
        case 0x466dfcu: goto label_466dfc;
        case 0x466e00u: goto label_466e00;
        case 0x466e04u: goto label_466e04;
        case 0x466e08u: goto label_466e08;
        case 0x466e0cu: goto label_466e0c;
        case 0x466e10u: goto label_466e10;
        case 0x466e14u: goto label_466e14;
        case 0x466e18u: goto label_466e18;
        case 0x466e1cu: goto label_466e1c;
        case 0x466e20u: goto label_466e20;
        case 0x466e24u: goto label_466e24;
        case 0x466e28u: goto label_466e28;
        case 0x466e2cu: goto label_466e2c;
        case 0x466e30u: goto label_466e30;
        case 0x466e34u: goto label_466e34;
        case 0x466e38u: goto label_466e38;
        case 0x466e3cu: goto label_466e3c;
        case 0x466e40u: goto label_466e40;
        case 0x466e44u: goto label_466e44;
        case 0x466e48u: goto label_466e48;
        case 0x466e4cu: goto label_466e4c;
        case 0x466e50u: goto label_466e50;
        case 0x466e54u: goto label_466e54;
        case 0x466e58u: goto label_466e58;
        case 0x466e5cu: goto label_466e5c;
        case 0x466e60u: goto label_466e60;
        case 0x466e64u: goto label_466e64;
        case 0x466e68u: goto label_466e68;
        case 0x466e6cu: goto label_466e6c;
        case 0x466e70u: goto label_466e70;
        case 0x466e74u: goto label_466e74;
        case 0x466e78u: goto label_466e78;
        case 0x466e7cu: goto label_466e7c;
        case 0x466e80u: goto label_466e80;
        case 0x466e84u: goto label_466e84;
        case 0x466e88u: goto label_466e88;
        case 0x466e8cu: goto label_466e8c;
        case 0x466e90u: goto label_466e90;
        case 0x466e94u: goto label_466e94;
        case 0x466e98u: goto label_466e98;
        case 0x466e9cu: goto label_466e9c;
        case 0x466ea0u: goto label_466ea0;
        case 0x466ea4u: goto label_466ea4;
        case 0x466ea8u: goto label_466ea8;
        case 0x466eacu: goto label_466eac;
        case 0x466eb0u: goto label_466eb0;
        case 0x466eb4u: goto label_466eb4;
        case 0x466eb8u: goto label_466eb8;
        case 0x466ebcu: goto label_466ebc;
        case 0x466ec0u: goto label_466ec0;
        case 0x466ec4u: goto label_466ec4;
        case 0x466ec8u: goto label_466ec8;
        case 0x466eccu: goto label_466ecc;
        case 0x466ed0u: goto label_466ed0;
        case 0x466ed4u: goto label_466ed4;
        case 0x466ed8u: goto label_466ed8;
        case 0x466edcu: goto label_466edc;
        case 0x466ee0u: goto label_466ee0;
        case 0x466ee4u: goto label_466ee4;
        case 0x466ee8u: goto label_466ee8;
        case 0x466eecu: goto label_466eec;
        case 0x466ef0u: goto label_466ef0;
        case 0x466ef4u: goto label_466ef4;
        case 0x466ef8u: goto label_466ef8;
        case 0x466efcu: goto label_466efc;
        case 0x466f00u: goto label_466f00;
        case 0x466f04u: goto label_466f04;
        case 0x466f08u: goto label_466f08;
        case 0x466f0cu: goto label_466f0c;
        case 0x466f10u: goto label_466f10;
        case 0x466f14u: goto label_466f14;
        case 0x466f18u: goto label_466f18;
        case 0x466f1cu: goto label_466f1c;
        case 0x466f20u: goto label_466f20;
        case 0x466f24u: goto label_466f24;
        case 0x466f28u: goto label_466f28;
        case 0x466f2cu: goto label_466f2c;
        case 0x466f30u: goto label_466f30;
        case 0x466f34u: goto label_466f34;
        case 0x466f38u: goto label_466f38;
        case 0x466f3cu: goto label_466f3c;
        case 0x466f40u: goto label_466f40;
        case 0x466f44u: goto label_466f44;
        case 0x466f48u: goto label_466f48;
        case 0x466f4cu: goto label_466f4c;
        case 0x466f50u: goto label_466f50;
        case 0x466f54u: goto label_466f54;
        case 0x466f58u: goto label_466f58;
        case 0x466f5cu: goto label_466f5c;
        case 0x466f60u: goto label_466f60;
        case 0x466f64u: goto label_466f64;
        case 0x466f68u: goto label_466f68;
        case 0x466f6cu: goto label_466f6c;
        case 0x466f70u: goto label_466f70;
        case 0x466f74u: goto label_466f74;
        case 0x466f78u: goto label_466f78;
        case 0x466f7cu: goto label_466f7c;
        case 0x466f80u: goto label_466f80;
        case 0x466f84u: goto label_466f84;
        case 0x466f88u: goto label_466f88;
        case 0x466f8cu: goto label_466f8c;
        case 0x466f90u: goto label_466f90;
        case 0x466f94u: goto label_466f94;
        case 0x466f98u: goto label_466f98;
        case 0x466f9cu: goto label_466f9c;
        case 0x466fa0u: goto label_466fa0;
        case 0x466fa4u: goto label_466fa4;
        case 0x466fa8u: goto label_466fa8;
        case 0x466facu: goto label_466fac;
        case 0x466fb0u: goto label_466fb0;
        case 0x466fb4u: goto label_466fb4;
        case 0x466fb8u: goto label_466fb8;
        case 0x466fbcu: goto label_466fbc;
        case 0x466fc0u: goto label_466fc0;
        case 0x466fc4u: goto label_466fc4;
        case 0x466fc8u: goto label_466fc8;
        case 0x466fccu: goto label_466fcc;
        case 0x466fd0u: goto label_466fd0;
        case 0x466fd4u: goto label_466fd4;
        case 0x466fd8u: goto label_466fd8;
        case 0x466fdcu: goto label_466fdc;
        case 0x466fe0u: goto label_466fe0;
        case 0x466fe4u: goto label_466fe4;
        case 0x466fe8u: goto label_466fe8;
        case 0x466fecu: goto label_466fec;
        case 0x466ff0u: goto label_466ff0;
        case 0x466ff4u: goto label_466ff4;
        case 0x466ff8u: goto label_466ff8;
        case 0x466ffcu: goto label_466ffc;
        case 0x467000u: goto label_467000;
        case 0x467004u: goto label_467004;
        case 0x467008u: goto label_467008;
        case 0x46700cu: goto label_46700c;
        case 0x467010u: goto label_467010;
        case 0x467014u: goto label_467014;
        case 0x467018u: goto label_467018;
        case 0x46701cu: goto label_46701c;
        case 0x467020u: goto label_467020;
        case 0x467024u: goto label_467024;
        case 0x467028u: goto label_467028;
        case 0x46702cu: goto label_46702c;
        case 0x467030u: goto label_467030;
        case 0x467034u: goto label_467034;
        case 0x467038u: goto label_467038;
        case 0x46703cu: goto label_46703c;
        case 0x467040u: goto label_467040;
        case 0x467044u: goto label_467044;
        case 0x467048u: goto label_467048;
        case 0x46704cu: goto label_46704c;
        case 0x467050u: goto label_467050;
        case 0x467054u: goto label_467054;
        case 0x467058u: goto label_467058;
        case 0x46705cu: goto label_46705c;
        case 0x467060u: goto label_467060;
        case 0x467064u: goto label_467064;
        case 0x467068u: goto label_467068;
        case 0x46706cu: goto label_46706c;
        case 0x467070u: goto label_467070;
        case 0x467074u: goto label_467074;
        case 0x467078u: goto label_467078;
        case 0x46707cu: goto label_46707c;
        case 0x467080u: goto label_467080;
        case 0x467084u: goto label_467084;
        case 0x467088u: goto label_467088;
        case 0x46708cu: goto label_46708c;
        case 0x467090u: goto label_467090;
        case 0x467094u: goto label_467094;
        case 0x467098u: goto label_467098;
        case 0x46709cu: goto label_46709c;
        case 0x4670a0u: goto label_4670a0;
        case 0x4670a4u: goto label_4670a4;
        case 0x4670a8u: goto label_4670a8;
        case 0x4670acu: goto label_4670ac;
        case 0x4670b0u: goto label_4670b0;
        case 0x4670b4u: goto label_4670b4;
        case 0x4670b8u: goto label_4670b8;
        case 0x4670bcu: goto label_4670bc;
        case 0x4670c0u: goto label_4670c0;
        case 0x4670c4u: goto label_4670c4;
        case 0x4670c8u: goto label_4670c8;
        case 0x4670ccu: goto label_4670cc;
        case 0x4670d0u: goto label_4670d0;
        case 0x4670d4u: goto label_4670d4;
        case 0x4670d8u: goto label_4670d8;
        case 0x4670dcu: goto label_4670dc;
        case 0x4670e0u: goto label_4670e0;
        case 0x4670e4u: goto label_4670e4;
        case 0x4670e8u: goto label_4670e8;
        case 0x4670ecu: goto label_4670ec;
        case 0x4670f0u: goto label_4670f0;
        case 0x4670f4u: goto label_4670f4;
        case 0x4670f8u: goto label_4670f8;
        case 0x4670fcu: goto label_4670fc;
        case 0x467100u: goto label_467100;
        case 0x467104u: goto label_467104;
        case 0x467108u: goto label_467108;
        case 0x46710cu: goto label_46710c;
        case 0x467110u: goto label_467110;
        case 0x467114u: goto label_467114;
        case 0x467118u: goto label_467118;
        case 0x46711cu: goto label_46711c;
        case 0x467120u: goto label_467120;
        case 0x467124u: goto label_467124;
        case 0x467128u: goto label_467128;
        case 0x46712cu: goto label_46712c;
        case 0x467130u: goto label_467130;
        case 0x467134u: goto label_467134;
        case 0x467138u: goto label_467138;
        case 0x46713cu: goto label_46713c;
        case 0x467140u: goto label_467140;
        case 0x467144u: goto label_467144;
        case 0x467148u: goto label_467148;
        case 0x46714cu: goto label_46714c;
        case 0x467150u: goto label_467150;
        case 0x467154u: goto label_467154;
        case 0x467158u: goto label_467158;
        case 0x46715cu: goto label_46715c;
        case 0x467160u: goto label_467160;
        case 0x467164u: goto label_467164;
        case 0x467168u: goto label_467168;
        case 0x46716cu: goto label_46716c;
        default: break;
    }

    ctx->pc = 0x466da0u;

label_466da0:
    // 0x466da0: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x466da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_466da4:
    // 0x466da4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x466da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_466da8:
    // 0x466da8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x466da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_466dac:
    // 0x466dac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x466dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_466db0:
    // 0x466db0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x466db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_466db4:
    // 0x466db4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x466db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_466db8:
    // 0x466db8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x466db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_466dbc:
    // 0x466dbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x466dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_466dc0:
    // 0x466dc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x466dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_466dc4:
    // 0x466dc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x466dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_466dc8:
    // 0x466dc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x466dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_466dcc:
    // 0x466dcc: 0xafa401d0  sw          $a0, 0x1D0($sp)
    ctx->pc = 0x466dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 4));
label_466dd0:
    // 0x466dd0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x466dd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_466dd4:
    // 0x466dd4: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x466dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_466dd8:
    // 0x466dd8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_466ddc:
    if (ctx->pc == 0x466DDCu) {
        ctx->pc = 0x466DE0u;
        goto label_466de0;
    }
    ctx->pc = 0x466DD8u;
    {
        const bool branch_taken_0x466dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x466dd8) {
            ctx->pc = 0x466DECu;
            goto label_466dec;
        }
    }
    ctx->pc = 0x466DE0u;
label_466de0:
    // 0x466de0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x466de0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_466de4:
    // 0x466de4: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_466de8:
    if (ctx->pc == 0x466DE8u) {
        ctx->pc = 0x466DECu;
        goto label_466dec;
    }
    ctx->pc = 0x466DE4u;
    {
        const bool branch_taken_0x466de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x466de4) {
            ctx->pc = 0x46713Cu;
            goto label_46713c;
        }
    }
    ctx->pc = 0x466DECu;
label_466dec:
    // 0x466dec: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x466decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_466df0:
    // 0x466df0: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x466df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_466df4:
    // 0x466df4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x466df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_466df8:
    // 0x466df8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x466df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_466dfc:
    // 0x466dfc: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x466dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_466e00:
    // 0x466e00: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x466e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_466e04:
    // 0x466e04: 0x8f82c040  lw          $v0, -0x3FC0($gp)
    ctx->pc = 0x466e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950976)));
label_466e08:
    // 0x466e08: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x466e08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_466e0c:
    // 0x466e0c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_466e10:
    if (ctx->pc == 0x466E10u) {
        ctx->pc = 0x466E14u;
        goto label_466e14;
    }
    ctx->pc = 0x466E0Cu;
    {
        const bool branch_taken_0x466e0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x466e0c) {
            ctx->pc = 0x466E1Cu;
            goto label_466e1c;
        }
    }
    ctx->pc = 0x466E14u;
label_466e14:
    // 0x466e14: 0x8f82c040  lw          $v0, -0x3FC0($gp)
    ctx->pc = 0x466e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950976)));
label_466e18:
    // 0x466e18: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x466e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_466e1c:
    // 0x466e1c: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x466e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_466e20:
    // 0x466e20: 0x8f82c03c  lw          $v0, -0x3FC4($gp)
    ctx->pc = 0x466e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950972)));
label_466e24:
    // 0x466e24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x466e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_466e28:
    // 0x466e28: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x466e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_466e2c:
    // 0x466e2c: 0x307e000f  andi        $fp, $v1, 0xF
    ctx->pc = 0x466e2cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_466e30:
    // 0x466e30: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
label_466e34:
    if (ctx->pc == 0x466E34u) {
        ctx->pc = 0x466E38u;
        goto label_466e38;
    }
    ctx->pc = 0x466E30u;
    {
        const bool branch_taken_0x466e30 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x466e30) {
            ctx->pc = 0x466E48u;
            goto label_466e48;
        }
    }
    ctx->pc = 0x466E38u;
label_466e38:
    // 0x466e38: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x466e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_466e3c:
    // 0x466e3c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x466e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_466e40:
    // 0x466e40: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x466e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_466e44:
    // 0x466e44: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x466e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_466e48:
    // 0x466e48: 0x8f90c038  lw          $s0, -0x3FC8($gp)
    ctx->pc = 0x466e48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950968)));
label_466e4c:
    // 0x466e4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x466e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_466e50:
    // 0x466e50: 0x8f82c034  lw          $v0, -0x3FCC($gp)
    ctx->pc = 0x466e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
label_466e54:
    // 0x466e54: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_466e58:
    if (ctx->pc == 0x466E58u) {
        ctx->pc = 0x466E5Cu;
        goto label_466e5c;
    }
    ctx->pc = 0x466E54u;
    {
        const bool branch_taken_0x466e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x466e54) {
            ctx->pc = 0x466F24u;
            goto label_466f24;
        }
    }
    ctx->pc = 0x466E5Cu;
label_466e5c:
    // 0x466e5c: 0x8f82c034  lw          $v0, -0x3FCC($gp)
    ctx->pc = 0x466e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
label_466e60:
    // 0x466e60: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x466e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_466e64:
    // 0x466e64: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_466e68:
    if (ctx->pc == 0x466E68u) {
        ctx->pc = 0x466E6Cu;
        goto label_466e6c;
    }
    ctx->pc = 0x466E64u;
    {
        const bool branch_taken_0x466e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x466e64) {
            ctx->pc = 0x466F24u;
            goto label_466f24;
        }
    }
    ctx->pc = 0x466E6Cu;
label_466e6c:
    // 0x466e6c: 0x10000014  b           . + 4 + (0x14 << 2)
label_466e70:
    if (ctx->pc == 0x466E70u) {
        ctx->pc = 0x466E74u;
        goto label_466e74;
    }
    ctx->pc = 0x466E6Cu;
    {
        const bool branch_taken_0x466e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x466e6c) {
            ctx->pc = 0x466EC0u;
            goto label_466ec0;
        }
    }
    ctx->pc = 0x466E74u;
label_466e74:
    // 0x466e74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x466e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_466e78:
    // 0x466e78: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x466e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_466e7c:
    // 0x466e7c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x466e7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_466e80:
    // 0x466e80: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_466e84:
    if (ctx->pc == 0x466E84u) {
        ctx->pc = 0x466E88u;
        goto label_466e88;
    }
    ctx->pc = 0x466E80u;
    {
        const bool branch_taken_0x466e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x466e80) {
            ctx->pc = 0x466EB0u;
            goto label_466eb0;
        }
    }
    ctx->pc = 0x466E88u;
label_466e88:
    // 0x466e88: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_466e8c:
    if (ctx->pc == 0x466E8Cu) {
        ctx->pc = 0x466E90u;
        goto label_466e90;
    }
    ctx->pc = 0x466E88u;
    {
        const bool branch_taken_0x466e88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x466e88) {
            ctx->pc = 0x466E9Cu;
            goto label_466e9c;
        }
    }
    ctx->pc = 0x466E90u;
label_466e90:
    // 0x466e90: 0x212082b  sltu        $at, $s0, $s2
    ctx->pc = 0x466e90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_466e94:
    // 0x466e94: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_466e98:
    if (ctx->pc == 0x466E98u) {
        ctx->pc = 0x466E9Cu;
        goto label_466e9c;
    }
    ctx->pc = 0x466E94u;
    {
        const bool branch_taken_0x466e94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x466e94) {
            ctx->pc = 0x466EA0u;
            goto label_466ea0;
        }
    }
    ctx->pc = 0x466E9Cu;
label_466e9c:
    // 0x466e9c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x466e9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_466ea0:
    // 0x466ea0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x466ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_466ea4:
    // 0x466ea4: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x466ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_466ea8:
    // 0x466ea8: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_466eac:
    if (ctx->pc == 0x466EACu) {
        ctx->pc = 0x466EB0u;
        goto label_466eb0;
    }
    ctx->pc = 0x466EA8u;
    {
        const bool branch_taken_0x466ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x466ea8) {
            ctx->pc = 0x466F2Cu;
            goto label_466f2c;
        }
    }
    ctx->pc = 0x466EB0u;
label_466eb0:
    // 0x466eb0: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x466eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_466eb4:
    // 0x466eb4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x466eb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_466eb8:
    // 0x466eb8: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x466eb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_466ebc:
    // 0x466ebc: 0xafa201c8  sw          $v0, 0x1C8($sp)
    ctx->pc = 0x466ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 2));
label_466ec0:
    // 0x466ec0: 0x1600ffec  bnez        $s0, . + 4 + (-0x14 << 2)
label_466ec4:
    if (ctx->pc == 0x466EC4u) {
        ctx->pc = 0x466EC8u;
        goto label_466ec8;
    }
    ctx->pc = 0x466EC0u;
    {
        const bool branch_taken_0x466ec0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x466ec0) {
            ctx->pc = 0x466E74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_466e74;
        }
    }
    ctx->pc = 0x466EC8u;
label_466ec8:
    // 0x466ec8: 0x10000018  b           . + 4 + (0x18 << 2)
label_466ecc:
    if (ctx->pc == 0x466ECCu) {
        ctx->pc = 0x466ED0u;
        goto label_466ed0;
    }
    ctx->pc = 0x466EC8u;
    {
        const bool branch_taken_0x466ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x466ec8) {
            ctx->pc = 0x466F2Cu;
            goto label_466f2c;
        }
    }
    ctx->pc = 0x466ED0u;
label_466ed0:
    // 0x466ed0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x466ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_466ed4:
    // 0x466ed4: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x466ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_466ed8:
    // 0x466ed8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x466ed8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_466edc:
    // 0x466edc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_466ee0:
    if (ctx->pc == 0x466EE0u) {
        ctx->pc = 0x466EE4u;
        goto label_466ee4;
    }
    ctx->pc = 0x466EDCu;
    {
        const bool branch_taken_0x466edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x466edc) {
            ctx->pc = 0x466F14u;
            goto label_466f14;
        }
    }
    ctx->pc = 0x466EE4u;
label_466ee4:
    // 0x466ee4: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_466ee8:
    if (ctx->pc == 0x466EE8u) {
        ctx->pc = 0x466EECu;
        goto label_466eec;
    }
    ctx->pc = 0x466EE4u;
    {
        const bool branch_taken_0x466ee4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x466ee4) {
            ctx->pc = 0x466F00u;
            goto label_466f00;
        }
    }
    ctx->pc = 0x466EECu;
label_466eec:
    // 0x466eec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x466eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_466ef0:
    // 0x466ef0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x466ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_466ef4:
    // 0x466ef4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x466ef4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_466ef8:
    // 0x466ef8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_466efc:
    if (ctx->pc == 0x466EFCu) {
        ctx->pc = 0x466F00u;
        goto label_466f00;
    }
    ctx->pc = 0x466EF8u;
    {
        const bool branch_taken_0x466ef8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x466ef8) {
            ctx->pc = 0x466F04u;
            goto label_466f04;
        }
    }
    ctx->pc = 0x466F00u;
label_466f00:
    // 0x466f00: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x466f00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_466f04:
    // 0x466f04: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x466f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_466f08:
    // 0x466f08: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x466f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_466f0c:
    // 0x466f0c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_466f10:
    if (ctx->pc == 0x466F10u) {
        ctx->pc = 0x466F14u;
        goto label_466f14;
    }
    ctx->pc = 0x466F0Cu;
    {
        const bool branch_taken_0x466f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x466f0c) {
            ctx->pc = 0x466F2Cu;
            goto label_466f2c;
        }
    }
    ctx->pc = 0x466F14u;
label_466f14:
    // 0x466f14: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x466f14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_466f18:
    // 0x466f18: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x466f18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_466f1c:
    // 0x466f1c: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x466f1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_466f20:
    // 0x466f20: 0xafa201c4  sw          $v0, 0x1C4($sp)
    ctx->pc = 0x466f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
label_466f24:
    // 0x466f24: 0x1600ffea  bnez        $s0, . + 4 + (-0x16 << 2)
label_466f28:
    if (ctx->pc == 0x466F28u) {
        ctx->pc = 0x466F2Cu;
        goto label_466f2c;
    }
    ctx->pc = 0x466F24u;
    {
        const bool branch_taken_0x466f24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x466f24) {
            ctx->pc = 0x466ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_466ed0;
        }
    }
    ctx->pc = 0x466F2Cu;
label_466f2c:
    // 0x466f2c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x466f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_466f30:
    // 0x466f30: 0x1600002c  bnez        $s0, . + 4 + (0x2C << 2)
label_466f34:
    if (ctx->pc == 0x466F34u) {
        ctx->pc = 0x466F38u;
        goto label_466f38;
    }
    ctx->pc = 0x466F30u;
    {
        const bool branch_taken_0x466f30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x466f30) {
            ctx->pc = 0x466FE4u;
            goto label_466fe4;
        }
    }
    ctx->pc = 0x466F38u;
label_466f38:
    // 0x466f38: 0x8f82b2b8  lw          $v0, -0x4D48($gp)
    ctx->pc = 0x466f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947512)));
label_466f3c:
    // 0x466f3c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_466f40:
    if (ctx->pc == 0x466F40u) {
        ctx->pc = 0x466F44u;
        goto label_466f44;
    }
    ctx->pc = 0x466F3Cu;
    {
        const bool branch_taken_0x466f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x466f3c) {
            ctx->pc = 0x466FE4u;
            goto label_466fe4;
        }
    }
    ctx->pc = 0x466F44u;
label_466f44:
    // 0x466f44: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x466f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_466f48:
    // 0x466f48: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x466f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_466f4c:
    // 0x466f4c: 0x27a601b8  addiu       $a2, $sp, 0x1B8
    ctx->pc = 0x466f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_466f50:
    // 0x466f50: 0xc115ee8  jal         func_457BA0
label_466f54:
    if (ctx->pc == 0x466F54u) {
        ctx->pc = 0x466F58u;
        goto label_466f58;
    }
    ctx->pc = 0x466F50u;
    SET_GPR_U32(ctx, 31, 0x466F58u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x466F50u, 0x466F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466F58u;
label_466f58:
    // 0x466f58: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_466f5c:
    if (ctx->pc == 0x466F5Cu) {
        ctx->pc = 0x466F60u;
        goto label_466f60;
    }
    ctx->pc = 0x466F58u;
    {
        const bool branch_taken_0x466f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x466f58) {
            ctx->pc = 0x466FE4u;
            goto label_466fe4;
        }
    }
    ctx->pc = 0x466F60u;
label_466f60:
    // 0x466f60: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x466f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_466f64:
    // 0x466f64: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_466f68:
    if (ctx->pc == 0x466F68u) {
        ctx->pc = 0x466F6Cu;
        goto label_466f6c;
    }
    ctx->pc = 0x466F64u;
    {
        const bool branch_taken_0x466f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x466f64) {
            ctx->pc = 0x466FE4u;
            goto label_466fe4;
        }
    }
    ctx->pc = 0x466F6Cu;
label_466f6c:
    // 0x466f6c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x466f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_466f70:
    // 0x466f70: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x466f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_466f74:
    // 0x466f74: 0x8fa601bc  lw          $a2, 0x1BC($sp)
    ctx->pc = 0x466f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_466f78:
    // 0x466f78: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x466f78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_466f7c:
    // 0x466f7c: 0x24e7f680  addiu       $a3, $a3, -0x980
    ctx->pc = 0x466f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964864));
label_466f80:
    // 0x466f80: 0x2408016c  addiu       $t0, $zero, 0x16C
    ctx->pc = 0x466f80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 364));
label_466f84:
    // 0x466f84: 0x2789b2bc  addiu       $t1, $gp, -0x4D44
    ctx->pc = 0x466f84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947516));
label_466f88:
    // 0x466f88: 0xc113940  jal         func_44E500
label_466f8c:
    if (ctx->pc == 0x466F8Cu) {
        ctx->pc = 0x466F90u;
        goto label_466f90;
    }
    ctx->pc = 0x466F88u;
    SET_GPR_U32(ctx, 31, 0x466F90u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x466F88u, 0x466F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466F90u;
label_466f90:
    // 0x466f90: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x466f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_466f94:
    // 0x466f94: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x466f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_466f98:
    // 0x466f98: 0x24a5f690  addiu       $a1, $a1, -0x970
    ctx->pc = 0x466f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964880));
label_466f9c:
    // 0x466f9c: 0x8f86c000  lw          $a2, -0x4000($gp)
    ctx->pc = 0x466f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950912)));
label_466fa0:
    // 0x466fa0: 0x8fa701d0  lw          $a3, 0x1D0($sp)
    ctx->pc = 0x466fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_466fa4:
    // 0x466fa4: 0xc115c24  jal         func_457090
label_466fa8:
    if (ctx->pc == 0x466FA8u) {
        ctx->pc = 0x466FACu;
        goto label_466fac;
    }
    ctx->pc = 0x466FA4u;
    SET_GPR_U32(ctx, 31, 0x466FACu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x466FA4u, 0x466FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466FACu;
label_466fac:
    // 0x466fac: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x466facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_466fb0:
    // 0x466fb0: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x466fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_466fb4:
    // 0x466fb4: 0x40f809  jalr        $v0
label_466fb8:
    if (ctx->pc == 0x466FB8u) {
        ctx->pc = 0x466FBCu;
        goto label_466fbc;
    }
    ctx->pc = 0x466FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x466FBCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466FB4u, 0x466FBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x466FBCu;
label_466fbc:
    // 0x466fbc: 0xaf82b2b8  sw          $v0, -0x4D48($gp)
    ctx->pc = 0x466fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947512), GPR_U32(ctx, 2));
label_466fc0:
    // 0x466fc0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x466fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_466fc4:
    // 0x466fc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_466fc8:
    if (ctx->pc == 0x466FC8u) {
        ctx->pc = 0x466FCCu;
        goto label_466fcc;
    }
    ctx->pc = 0x466FC4u;
    {
        const bool branch_taken_0x466fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x466fc4) {
            ctx->pc = 0x466FD4u;
            goto label_466fd4;
        }
    }
    ctx->pc = 0x466FCCu;
label_466fcc:
    // 0x466fcc: 0xd  break       0
    ctx->pc = 0x466fccu;
    runtime->handleBreak(rdram, ctx);
label_466fd0:
    // 0x466fd0: 0x0  nop
    ctx->pc = 0x466fd0u;
    // NOP
label_466fd4:
    // 0x466fd4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x466fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_466fd8:
    // 0x466fd8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x466fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_466fdc:
    // 0x466fdc: 0xc11392c  jal         func_44E4B0
label_466fe0:
    if (ctx->pc == 0x466FE0u) {
        ctx->pc = 0x466FE4u;
        goto label_466fe4;
    }
    ctx->pc = 0x466FDCu;
    SET_GPR_U32(ctx, 31, 0x466FE4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x466FDCu, 0x466FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466FE4u;
label_466fe4:
    // 0x466fe4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x466fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_466fe8:
    // 0x466fe8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_466fec:
    if (ctx->pc == 0x466FECu) {
        ctx->pc = 0x466FF0u;
        goto label_466ff0;
    }
    ctx->pc = 0x466FE8u;
    {
        const bool branch_taken_0x466fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x466fe8) {
            ctx->pc = 0x466FFCu;
            goto label_466ffc;
        }
    }
    ctx->pc = 0x466FF0u;
label_466ff0:
    // 0x466ff0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x466ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_466ff4:
    // 0x466ff4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x466ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_466ff8:
    // 0x466ff8: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x466ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_466ffc:
    // 0x466ffc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x466ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_467000:
    // 0x467000: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_467004:
    if (ctx->pc == 0x467004u) {
        ctx->pc = 0x467008u;
        goto label_467008;
    }
    ctx->pc = 0x467000u;
    {
        const bool branch_taken_0x467000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x467000) {
            ctx->pc = 0x467014u;
            goto label_467014;
        }
    }
    ctx->pc = 0x467008u;
label_467008:
    // 0x467008: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x467008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_46700c:
    // 0x46700c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46700cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_467010:
    // 0x467010: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x467010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_467014:
    // 0x467014: 0x8f82c038  lw          $v0, -0x3FC8($gp)
    ctx->pc = 0x467014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950968)));
label_467018:
    // 0x467018: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
label_46701c:
    if (ctx->pc == 0x46701Cu) {
        ctx->pc = 0x467020u;
        goto label_467020;
    }
    ctx->pc = 0x467018u;
    {
        const bool branch_taken_0x467018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x467018) {
            ctx->pc = 0x467028u;
            goto label_467028;
        }
    }
    ctx->pc = 0x467020u;
label_467020:
    // 0x467020: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x467020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_467024:
    // 0x467024: 0xaf82c038  sw          $v0, -0x3FC8($gp)
    ctx->pc = 0x467024u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950968), GPR_U32(ctx, 2));
label_467028:
    // 0x467028: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x467028u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_46702c:
    // 0x46702c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x46702cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_467030:
    // 0x467030: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x467030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_467034:
    // 0x467034: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x467034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_467038:
    // 0x467038: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x467038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_46703c:
    // 0x46703c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x46703cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_467040:
    // 0x467040: 0x8f82c03c  lw          $v0, -0x3FC4($gp)
    ctx->pc = 0x467040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950972)));
label_467044:
    // 0x467044: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x467044u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_467048:
    // 0x467048: 0xafa201cc  sw          $v0, 0x1CC($sp)
    ctx->pc = 0x467048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
label_46704c:
    // 0x46704c: 0x8fa301cc  lw          $v1, 0x1CC($sp)
    ctx->pc = 0x46704cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
label_467050:
    // 0x467050: 0x8f82c040  lw          $v0, -0x3FC0($gp)
    ctx->pc = 0x467050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950976)));
label_467054:
    // 0x467054: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x467054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_467058:
    // 0x467058: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_46705c:
    if (ctx->pc == 0x46705Cu) {
        ctx->pc = 0x467060u;
        goto label_467060;
    }
    ctx->pc = 0x467058u;
    {
        const bool branch_taken_0x467058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x467058) {
            ctx->pc = 0x4670F4u;
            goto label_4670f4;
        }
    }
    ctx->pc = 0x467060u;
label_467060:
    // 0x467060: 0x8f82c03c  lw          $v0, -0x3FC4($gp)
    ctx->pc = 0x467060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950972)));
label_467064:
    // 0x467064: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x467064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_467068:
    // 0x467068: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x467068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_46706c:
    // 0x46706c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x46706cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_467070:
    // 0x467070: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x467070u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_467074:
    // 0x467074: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x467074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_467078:
    // 0x467078: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x467078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_46707c:
    // 0x46707c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x46707cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_467080:
    // 0x467080: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x467080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_467084:
    // 0x467084: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x467084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_467088:
    // 0x467088: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x467088u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_46708c:
    // 0x46708c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x46708cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_467090:
    // 0x467090: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x467090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
label_467094:
    // 0x467094: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x467094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_467098:
    // 0x467098: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x467098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_46709c:
    // 0x46709c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x46709cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_4670a0:
    // 0x4670a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4670a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4670a4:
    // 0x4670a4: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x4670a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
label_4670a8:
    // 0x4670a8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4670a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4670ac:
    // 0x4670ac: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4670acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4670b0:
    // 0x4670b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4670b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4670b4:
    // 0x4670b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4670b8:
    if (ctx->pc == 0x4670B8u) {
        ctx->pc = 0x4670BCu;
        goto label_4670bc;
    }
    ctx->pc = 0x4670B4u;
    {
        const bool branch_taken_0x4670b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4670b4) {
            ctx->pc = 0x4670C4u;
            goto label_4670c4;
        }
    }
    ctx->pc = 0x4670BCu;
label_4670bc:
    // 0x4670bc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4670bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4670c0:
    // 0x4670c0: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x4670c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
label_4670c4:
    // 0x4670c4: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x4670c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_4670c8:
    // 0x4670c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4670c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4670cc:
    // 0x4670cc: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x4670ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_4670d0:
    // 0x4670d0: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x4670d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_4670d4:
    // 0x4670d4: 0x8f82c038  lw          $v0, -0x3FC8($gp)
    ctx->pc = 0x4670d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950968)));
label_4670d8:
    // 0x4670d8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x4670d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_4670dc:
    // 0x4670dc: 0x8f82c038  lw          $v0, -0x3FC8($gp)
    ctx->pc = 0x4670dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950968)));
label_4670e0:
    // 0x4670e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4670e4:
    if (ctx->pc == 0x4670E4u) {
        ctx->pc = 0x4670E8u;
        goto label_4670e8;
    }
    ctx->pc = 0x4670E0u;
    {
        const bool branch_taken_0x4670e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4670e0) {
            ctx->pc = 0x4670F0u;
            goto label_4670f0;
        }
    }
    ctx->pc = 0x4670E8u;
label_4670e8:
    // 0x4670e8: 0x8f82c038  lw          $v0, -0x3FC8($gp)
    ctx->pc = 0x4670e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950968)));
label_4670ec:
    // 0x4670ec: 0xac510014  sw          $s1, 0x14($v0)
    ctx->pc = 0x4670ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 17));
label_4670f0:
    // 0x4670f0: 0xaf91c038  sw          $s1, -0x3FC8($gp)
    ctx->pc = 0x4670f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950968), GPR_U32(ctx, 17));
label_4670f4:
    // 0x4670f4: 0x26170010  addiu       $s7, $s0, 0x10
    ctx->pc = 0x4670f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4670f8:
    // 0x4670f8: 0x26e3000f  addiu       $v1, $s7, 0xF
    ctx->pc = 0x4670f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 15));
label_4670fc:
    // 0x4670fc: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x4670fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_467100:
    // 0x467100: 0x62b024  and         $s6, $v1, $v0
    ctx->pc = 0x467100u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_467104:
    // 0x467104: 0x2d7a823  subu        $s5, $s6, $s7
    ctx->pc = 0x467104u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
label_467108:
    // 0x467108: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x467108u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_46710c:
    // 0x46710c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x46710cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_467110:
    // 0x467110: 0x8f82c03c  lw          $v0, -0x3FC4($gp)
    ctx->pc = 0x467110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950972)));
label_467114:
    // 0x467114: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x467114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_467118:
    // 0x467118: 0x8f82c000  lw          $v0, -0x4000($gp)
    ctx->pc = 0x467118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950912)));
label_46711c:
    // 0x46711c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x46711cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_467120:
    // 0x467120: 0xaf82c000  sw          $v0, -0x4000($gp)
    ctx->pc = 0x467120u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950912), GPR_U32(ctx, 2));
label_467124:
    // 0x467124: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_467128:
    if (ctx->pc == 0x467128u) {
        ctx->pc = 0x46712Cu;
        goto label_46712c;
    }
    ctx->pc = 0x467124u;
    {
        const bool branch_taken_0x467124 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x467124) {
            ctx->pc = 0x467138u;
            goto label_467138;
        }
    }
    ctx->pc = 0x46712Cu;
label_46712c:
    // 0x46712c: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x46712cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_467130:
    // 0x467130: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x467130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
label_467134:
    // 0x467134: 0xae82fffc  sw          $v0, -0x4($s4)
    ctx->pc = 0x467134u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294967292), GPR_U32(ctx, 2));
label_467138:
    // 0x467138: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x467138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46713c:
    // 0x46713c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x46713cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_467140:
    // 0x467140: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x467140u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_467144:
    // 0x467144: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x467144u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_467148:
    // 0x467148: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x467148u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_46714c:
    // 0x46714c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x46714cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_467150:
    // 0x467150: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x467150u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_467154:
    // 0x467154: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x467154u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_467158:
    // 0x467158: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x467158u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46715c:
    // 0x46715c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46715cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_467160:
    // 0x467160: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x467160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_467164:
    // 0x467164: 0x27bd01e0  addiu       $sp, $sp, 0x1E0
    ctx->pc = 0x467164u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_467168:
    // 0x467168: 0x3e00008  jr          $ra
label_46716c:
    if (ctx->pc == 0x46716Cu) {
        ctx->pc = 0x467170u;
        goto label_fallthrough_0x467168;
    }
    ctx->pc = 0x467168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x467168:
    ctx->pc = 0x467170u;
}
