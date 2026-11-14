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

// Function: sub_00237C20
// Address: 0x237c20 - 0x238150
void sub_00237C20_0x237c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237C20_0x237c20");
#endif

    switch (ctx->pc) {
        case 0x237c20u: goto label_237c20;
        case 0x237c24u: goto label_237c24;
        case 0x237c28u: goto label_237c28;
        case 0x237c2cu: goto label_237c2c;
        case 0x237c30u: goto label_237c30;
        case 0x237c34u: goto label_237c34;
        case 0x237c38u: goto label_237c38;
        case 0x237c3cu: goto label_237c3c;
        case 0x237c40u: goto label_237c40;
        case 0x237c44u: goto label_237c44;
        case 0x237c48u: goto label_237c48;
        case 0x237c4cu: goto label_237c4c;
        case 0x237c50u: goto label_237c50;
        case 0x237c54u: goto label_237c54;
        case 0x237c58u: goto label_237c58;
        case 0x237c5cu: goto label_237c5c;
        case 0x237c60u: goto label_237c60;
        case 0x237c64u: goto label_237c64;
        case 0x237c68u: goto label_237c68;
        case 0x237c6cu: goto label_237c6c;
        case 0x237c70u: goto label_237c70;
        case 0x237c74u: goto label_237c74;
        case 0x237c78u: goto label_237c78;
        case 0x237c7cu: goto label_237c7c;
        case 0x237c80u: goto label_237c80;
        case 0x237c84u: goto label_237c84;
        case 0x237c88u: goto label_237c88;
        case 0x237c8cu: goto label_237c8c;
        case 0x237c90u: goto label_237c90;
        case 0x237c94u: goto label_237c94;
        case 0x237c98u: goto label_237c98;
        case 0x237c9cu: goto label_237c9c;
        case 0x237ca0u: goto label_237ca0;
        case 0x237ca4u: goto label_237ca4;
        case 0x237ca8u: goto label_237ca8;
        case 0x237cacu: goto label_237cac;
        case 0x237cb0u: goto label_237cb0;
        case 0x237cb4u: goto label_237cb4;
        case 0x237cb8u: goto label_237cb8;
        case 0x237cbcu: goto label_237cbc;
        case 0x237cc0u: goto label_237cc0;
        case 0x237cc4u: goto label_237cc4;
        case 0x237cc8u: goto label_237cc8;
        case 0x237cccu: goto label_237ccc;
        case 0x237cd0u: goto label_237cd0;
        case 0x237cd4u: goto label_237cd4;
        case 0x237cd8u: goto label_237cd8;
        case 0x237cdcu: goto label_237cdc;
        case 0x237ce0u: goto label_237ce0;
        case 0x237ce4u: goto label_237ce4;
        case 0x237ce8u: goto label_237ce8;
        case 0x237cecu: goto label_237cec;
        case 0x237cf0u: goto label_237cf0;
        case 0x237cf4u: goto label_237cf4;
        case 0x237cf8u: goto label_237cf8;
        case 0x237cfcu: goto label_237cfc;
        case 0x237d00u: goto label_237d00;
        case 0x237d04u: goto label_237d04;
        case 0x237d08u: goto label_237d08;
        case 0x237d0cu: goto label_237d0c;
        case 0x237d10u: goto label_237d10;
        case 0x237d14u: goto label_237d14;
        case 0x237d18u: goto label_237d18;
        case 0x237d1cu: goto label_237d1c;
        case 0x237d20u: goto label_237d20;
        case 0x237d24u: goto label_237d24;
        case 0x237d28u: goto label_237d28;
        case 0x237d2cu: goto label_237d2c;
        case 0x237d30u: goto label_237d30;
        case 0x237d34u: goto label_237d34;
        case 0x237d38u: goto label_237d38;
        case 0x237d3cu: goto label_237d3c;
        case 0x237d40u: goto label_237d40;
        case 0x237d44u: goto label_237d44;
        case 0x237d48u: goto label_237d48;
        case 0x237d4cu: goto label_237d4c;
        case 0x237d50u: goto label_237d50;
        case 0x237d54u: goto label_237d54;
        case 0x237d58u: goto label_237d58;
        case 0x237d5cu: goto label_237d5c;
        case 0x237d60u: goto label_237d60;
        case 0x237d64u: goto label_237d64;
        case 0x237d68u: goto label_237d68;
        case 0x237d6cu: goto label_237d6c;
        case 0x237d70u: goto label_237d70;
        case 0x237d74u: goto label_237d74;
        case 0x237d78u: goto label_237d78;
        case 0x237d7cu: goto label_237d7c;
        case 0x237d80u: goto label_237d80;
        case 0x237d84u: goto label_237d84;
        case 0x237d88u: goto label_237d88;
        case 0x237d8cu: goto label_237d8c;
        case 0x237d90u: goto label_237d90;
        case 0x237d94u: goto label_237d94;
        case 0x237d98u: goto label_237d98;
        case 0x237d9cu: goto label_237d9c;
        case 0x237da0u: goto label_237da0;
        case 0x237da4u: goto label_237da4;
        case 0x237da8u: goto label_237da8;
        case 0x237dacu: goto label_237dac;
        case 0x237db0u: goto label_237db0;
        case 0x237db4u: goto label_237db4;
        case 0x237db8u: goto label_237db8;
        case 0x237dbcu: goto label_237dbc;
        case 0x237dc0u: goto label_237dc0;
        case 0x237dc4u: goto label_237dc4;
        case 0x237dc8u: goto label_237dc8;
        case 0x237dccu: goto label_237dcc;
        case 0x237dd0u: goto label_237dd0;
        case 0x237dd4u: goto label_237dd4;
        case 0x237dd8u: goto label_237dd8;
        case 0x237ddcu: goto label_237ddc;
        case 0x237de0u: goto label_237de0;
        case 0x237de4u: goto label_237de4;
        case 0x237de8u: goto label_237de8;
        case 0x237decu: goto label_237dec;
        case 0x237df0u: goto label_237df0;
        case 0x237df4u: goto label_237df4;
        case 0x237df8u: goto label_237df8;
        case 0x237dfcu: goto label_237dfc;
        case 0x237e00u: goto label_237e00;
        case 0x237e04u: goto label_237e04;
        case 0x237e08u: goto label_237e08;
        case 0x237e0cu: goto label_237e0c;
        case 0x237e10u: goto label_237e10;
        case 0x237e14u: goto label_237e14;
        case 0x237e18u: goto label_237e18;
        case 0x237e1cu: goto label_237e1c;
        case 0x237e20u: goto label_237e20;
        case 0x237e24u: goto label_237e24;
        case 0x237e28u: goto label_237e28;
        case 0x237e2cu: goto label_237e2c;
        case 0x237e30u: goto label_237e30;
        case 0x237e34u: goto label_237e34;
        case 0x237e38u: goto label_237e38;
        case 0x237e3cu: goto label_237e3c;
        case 0x237e40u: goto label_237e40;
        case 0x237e44u: goto label_237e44;
        case 0x237e48u: goto label_237e48;
        case 0x237e4cu: goto label_237e4c;
        case 0x237e50u: goto label_237e50;
        case 0x237e54u: goto label_237e54;
        case 0x237e58u: goto label_237e58;
        case 0x237e5cu: goto label_237e5c;
        case 0x237e60u: goto label_237e60;
        case 0x237e64u: goto label_237e64;
        case 0x237e68u: goto label_237e68;
        case 0x237e6cu: goto label_237e6c;
        case 0x237e70u: goto label_237e70;
        case 0x237e74u: goto label_237e74;
        case 0x237e78u: goto label_237e78;
        case 0x237e7cu: goto label_237e7c;
        case 0x237e80u: goto label_237e80;
        case 0x237e84u: goto label_237e84;
        case 0x237e88u: goto label_237e88;
        case 0x237e8cu: goto label_237e8c;
        case 0x237e90u: goto label_237e90;
        case 0x237e94u: goto label_237e94;
        case 0x237e98u: goto label_237e98;
        case 0x237e9cu: goto label_237e9c;
        case 0x237ea0u: goto label_237ea0;
        case 0x237ea4u: goto label_237ea4;
        case 0x237ea8u: goto label_237ea8;
        case 0x237eacu: goto label_237eac;
        case 0x237eb0u: goto label_237eb0;
        case 0x237eb4u: goto label_237eb4;
        case 0x237eb8u: goto label_237eb8;
        case 0x237ebcu: goto label_237ebc;
        case 0x237ec0u: goto label_237ec0;
        case 0x237ec4u: goto label_237ec4;
        case 0x237ec8u: goto label_237ec8;
        case 0x237eccu: goto label_237ecc;
        case 0x237ed0u: goto label_237ed0;
        case 0x237ed4u: goto label_237ed4;
        case 0x237ed8u: goto label_237ed8;
        case 0x237edcu: goto label_237edc;
        case 0x237ee0u: goto label_237ee0;
        case 0x237ee4u: goto label_237ee4;
        case 0x237ee8u: goto label_237ee8;
        case 0x237eecu: goto label_237eec;
        case 0x237ef0u: goto label_237ef0;
        case 0x237ef4u: goto label_237ef4;
        case 0x237ef8u: goto label_237ef8;
        case 0x237efcu: goto label_237efc;
        case 0x237f00u: goto label_237f00;
        case 0x237f04u: goto label_237f04;
        case 0x237f08u: goto label_237f08;
        case 0x237f0cu: goto label_237f0c;
        case 0x237f10u: goto label_237f10;
        case 0x237f14u: goto label_237f14;
        case 0x237f18u: goto label_237f18;
        case 0x237f1cu: goto label_237f1c;
        case 0x237f20u: goto label_237f20;
        case 0x237f24u: goto label_237f24;
        case 0x237f28u: goto label_237f28;
        case 0x237f2cu: goto label_237f2c;
        case 0x237f30u: goto label_237f30;
        case 0x237f34u: goto label_237f34;
        case 0x237f38u: goto label_237f38;
        case 0x237f3cu: goto label_237f3c;
        case 0x237f40u: goto label_237f40;
        case 0x237f44u: goto label_237f44;
        case 0x237f48u: goto label_237f48;
        case 0x237f4cu: goto label_237f4c;
        case 0x237f50u: goto label_237f50;
        case 0x237f54u: goto label_237f54;
        case 0x237f58u: goto label_237f58;
        case 0x237f5cu: goto label_237f5c;
        case 0x237f60u: goto label_237f60;
        case 0x237f64u: goto label_237f64;
        case 0x237f68u: goto label_237f68;
        case 0x237f6cu: goto label_237f6c;
        case 0x237f70u: goto label_237f70;
        case 0x237f74u: goto label_237f74;
        case 0x237f78u: goto label_237f78;
        case 0x237f7cu: goto label_237f7c;
        case 0x237f80u: goto label_237f80;
        case 0x237f84u: goto label_237f84;
        case 0x237f88u: goto label_237f88;
        case 0x237f8cu: goto label_237f8c;
        case 0x237f90u: goto label_237f90;
        case 0x237f94u: goto label_237f94;
        case 0x237f98u: goto label_237f98;
        case 0x237f9cu: goto label_237f9c;
        case 0x237fa0u: goto label_237fa0;
        case 0x237fa4u: goto label_237fa4;
        case 0x237fa8u: goto label_237fa8;
        case 0x237facu: goto label_237fac;
        case 0x237fb0u: goto label_237fb0;
        case 0x237fb4u: goto label_237fb4;
        case 0x237fb8u: goto label_237fb8;
        case 0x237fbcu: goto label_237fbc;
        case 0x237fc0u: goto label_237fc0;
        case 0x237fc4u: goto label_237fc4;
        case 0x237fc8u: goto label_237fc8;
        case 0x237fccu: goto label_237fcc;
        case 0x237fd0u: goto label_237fd0;
        case 0x237fd4u: goto label_237fd4;
        case 0x237fd8u: goto label_237fd8;
        case 0x237fdcu: goto label_237fdc;
        case 0x237fe0u: goto label_237fe0;
        case 0x237fe4u: goto label_237fe4;
        case 0x237fe8u: goto label_237fe8;
        case 0x237fecu: goto label_237fec;
        case 0x237ff0u: goto label_237ff0;
        case 0x237ff4u: goto label_237ff4;
        case 0x237ff8u: goto label_237ff8;
        case 0x237ffcu: goto label_237ffc;
        case 0x238000u: goto label_238000;
        case 0x238004u: goto label_238004;
        case 0x238008u: goto label_238008;
        case 0x23800cu: goto label_23800c;
        case 0x238010u: goto label_238010;
        case 0x238014u: goto label_238014;
        case 0x238018u: goto label_238018;
        case 0x23801cu: goto label_23801c;
        case 0x238020u: goto label_238020;
        case 0x238024u: goto label_238024;
        case 0x238028u: goto label_238028;
        case 0x23802cu: goto label_23802c;
        case 0x238030u: goto label_238030;
        case 0x238034u: goto label_238034;
        case 0x238038u: goto label_238038;
        case 0x23803cu: goto label_23803c;
        case 0x238040u: goto label_238040;
        case 0x238044u: goto label_238044;
        case 0x238048u: goto label_238048;
        case 0x23804cu: goto label_23804c;
        case 0x238050u: goto label_238050;
        case 0x238054u: goto label_238054;
        case 0x238058u: goto label_238058;
        case 0x23805cu: goto label_23805c;
        case 0x238060u: goto label_238060;
        case 0x238064u: goto label_238064;
        case 0x238068u: goto label_238068;
        case 0x23806cu: goto label_23806c;
        case 0x238070u: goto label_238070;
        case 0x238074u: goto label_238074;
        case 0x238078u: goto label_238078;
        case 0x23807cu: goto label_23807c;
        case 0x238080u: goto label_238080;
        case 0x238084u: goto label_238084;
        case 0x238088u: goto label_238088;
        case 0x23808cu: goto label_23808c;
        case 0x238090u: goto label_238090;
        case 0x238094u: goto label_238094;
        case 0x238098u: goto label_238098;
        case 0x23809cu: goto label_23809c;
        case 0x2380a0u: goto label_2380a0;
        case 0x2380a4u: goto label_2380a4;
        case 0x2380a8u: goto label_2380a8;
        case 0x2380acu: goto label_2380ac;
        case 0x2380b0u: goto label_2380b0;
        case 0x2380b4u: goto label_2380b4;
        case 0x2380b8u: goto label_2380b8;
        case 0x2380bcu: goto label_2380bc;
        case 0x2380c0u: goto label_2380c0;
        case 0x2380c4u: goto label_2380c4;
        case 0x2380c8u: goto label_2380c8;
        case 0x2380ccu: goto label_2380cc;
        case 0x2380d0u: goto label_2380d0;
        case 0x2380d4u: goto label_2380d4;
        case 0x2380d8u: goto label_2380d8;
        case 0x2380dcu: goto label_2380dc;
        case 0x2380e0u: goto label_2380e0;
        case 0x2380e4u: goto label_2380e4;
        case 0x2380e8u: goto label_2380e8;
        case 0x2380ecu: goto label_2380ec;
        case 0x2380f0u: goto label_2380f0;
        case 0x2380f4u: goto label_2380f4;
        case 0x2380f8u: goto label_2380f8;
        case 0x2380fcu: goto label_2380fc;
        case 0x238100u: goto label_238100;
        case 0x238104u: goto label_238104;
        case 0x238108u: goto label_238108;
        case 0x23810cu: goto label_23810c;
        case 0x238110u: goto label_238110;
        case 0x238114u: goto label_238114;
        case 0x238118u: goto label_238118;
        case 0x23811cu: goto label_23811c;
        case 0x238120u: goto label_238120;
        case 0x238124u: goto label_238124;
        case 0x238128u: goto label_238128;
        case 0x23812cu: goto label_23812c;
        case 0x238130u: goto label_238130;
        case 0x238134u: goto label_238134;
        case 0x238138u: goto label_238138;
        case 0x23813cu: goto label_23813c;
        case 0x238140u: goto label_238140;
        case 0x238144u: goto label_238144;
        case 0x238148u: goto label_238148;
        case 0x23814cu: goto label_23814c;
        default: break;
    }

    ctx->pc = 0x237c20u;

label_237c20:
    // 0x237c20: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x237c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_237c24:
    // 0x237c24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x237c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_237c28:
    // 0x237c28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x237c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_237c2c:
    // 0x237c2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x237c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_237c30:
    // 0x237c30: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x237c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
label_237c34:
    // 0x237c34: 0xafa50140  sw          $a1, 0x140($sp)
    ctx->pc = 0x237c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
label_237c38:
    // 0x237c38: 0xa3a60150  sb          $a2, 0x150($sp)
    ctx->pc = 0x237c38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 336), (uint8_t)GPR_U32(ctx, 6));
label_237c3c:
    // 0x237c3c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x237c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_237c40:
    // 0x237c40: 0x14020004  bne         $zero, $v0, . + 4 + (0x4 << 2)
label_237c44:
    if (ctx->pc == 0x237C44u) {
        ctx->pc = 0x237C48u;
        goto label_237c48;
    }
    ctx->pc = 0x237C40u;
    {
        const bool branch_taken_0x237c40 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x237c40) {
            ctx->pc = 0x237C54u;
            goto label_237c54;
        }
    }
    ctx->pc = 0x237C48u;
label_237c48:
    // 0x237c48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x237c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237c4c:
    // 0x237c4c: 0x10000137  b           . + 4 + (0x137 << 2)
label_237c50:
    if (ctx->pc == 0x237C50u) {
        ctx->pc = 0x237C54u;
        goto label_237c54;
    }
    ctx->pc = 0x237C4Cu;
    {
        const bool branch_taken_0x237c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237c4c) {
            ctx->pc = 0x23812Cu;
            goto label_23812c;
        }
    }
    ctx->pc = 0x237C54u;
label_237c54:
    // 0x237c54: 0xc08e094  jal         func_238250
label_237c58:
    if (ctx->pc == 0x237C58u) {
        ctx->pc = 0x237C5Cu;
        goto label_237c5c;
    }
    ctx->pc = 0x237C54u;
    SET_GPR_U32(ctx, 31, 0x237C5Cu);
    ctx->pc = 0x238250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238250u, 0x237C54u, 0x237C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C5Cu;
label_237c5c:
    // 0x237c5c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x237c5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_237c60:
    // 0x237c60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x237c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237c64:
    // 0x237c64: 0xc08e054  jal         func_238150
label_237c68:
    if (ctx->pc == 0x237C68u) {
        ctx->pc = 0x237C6Cu;
        goto label_237c6c;
    }
    ctx->pc = 0x237C64u;
    SET_GPR_U32(ctx, 31, 0x237C6Cu);
    ctx->pc = 0x238150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238150u, 0x237C64u, 0x237C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C6Cu;
label_237c6c:
    // 0x237c6c: 0x27849d44  addiu       $a0, $gp, -0x62BC
    ctx->pc = 0x237c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942020));
label_237c70:
    // 0x237c70: 0xc107156  jal         func_41C558
label_237c74:
    if (ctx->pc == 0x237C74u) {
        ctx->pc = 0x237C78u;
        goto label_237c78;
    }
    ctx->pc = 0x237C70u;
    SET_GPR_U32(ctx, 31, 0x237C78u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x237C70u, 0x237C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C78u;
label_237c78:
    // 0x237c78: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x237c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_237c7c:
    // 0x237c7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x237c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237c80:
    // 0x237c80: 0xc107fa4  jal         func_41FE90
label_237c84:
    if (ctx->pc == 0x237C84u) {
        ctx->pc = 0x237C88u;
        goto label_237c88;
    }
    ctx->pc = 0x237C80u;
    SET_GPR_U32(ctx, 31, 0x237C88u);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x237C80u, 0x237C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C88u;
label_237c88:
    // 0x237c88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x237c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237c8c:
    // 0x237c8c: 0x10100121  beq         $zero, $s0, . + 4 + (0x121 << 2)
label_237c90:
    if (ctx->pc == 0x237C90u) {
        ctx->pc = 0x237C94u;
        goto label_237c94;
    }
    ctx->pc = 0x237C8Cu;
    {
        const bool branch_taken_0x237c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x237c8c) {
            ctx->pc = 0x238114u;
            goto label_238114;
        }
    }
    ctx->pc = 0x237C94u;
label_237c94:
    // 0x237c94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x237c94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237c98:
    // 0x237c98: 0x0  nop
    ctx->pc = 0x237c98u;
    // NOP
label_237c9c:
    // 0x237c9c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x237c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_237ca0:
    // 0x237ca0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x237ca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237ca4:
    // 0x237ca4: 0x0  nop
    ctx->pc = 0x237ca4u;
    // NOP
label_237ca8:
    // 0x237ca8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x237ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_237cac:
    // 0x237cac: 0xc78080f4  lwc1        $f0, -0x7F0C($gp)
    ctx->pc = 0x237cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237cb0:
    // 0x237cb0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x237cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_237cb4:
    // 0x237cb4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x237cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_237cb8:
    // 0x237cb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237cbc:
    // 0x237cbc: 0x0  nop
    ctx->pc = 0x237cbcu;
    // NOP
label_237cc0:
    // 0x237cc0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x237cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_237cc4:
    // 0x237cc4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x237cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_237cc8:
    // 0x237cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237ccc:
    // 0x237ccc: 0x0  nop
    ctx->pc = 0x237cccu;
    // NOP
label_237cd0:
    // 0x237cd0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x237cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_237cd4:
    // 0x237cd4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x237cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_237cd8:
    // 0x237cd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237cdc:
    // 0x237cdc: 0x0  nop
    ctx->pc = 0x237cdcu;
    // NOP
label_237ce0:
    // 0x237ce0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x237ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_237ce4:
    // 0x237ce4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x237ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_237ce8:
    // 0x237ce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237cec:
    // 0x237cec: 0x0  nop
    ctx->pc = 0x237cecu;
    // NOP
label_237cf0:
    // 0x237cf0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x237cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_237cf4:
    // 0x237cf4: 0xc78080f4  lwc1        $f0, -0x7F0C($gp)
    ctx->pc = 0x237cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237cf8:
    // 0x237cf8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x237cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_237cfc:
    // 0x237cfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x237cfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237d00:
    // 0x237d00: 0x0  nop
    ctx->pc = 0x237d00u;
    // NOP
label_237d04:
    // 0x237d04: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x237d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_237d08:
    // 0x237d08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x237d08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237d0c:
    // 0x237d0c: 0x0  nop
    ctx->pc = 0x237d0cu;
    // NOP
label_237d10:
    // 0x237d10: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x237d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_237d14:
    // 0x237d14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x237d14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237d18:
    // 0x237d18: 0x0  nop
    ctx->pc = 0x237d18u;
    // NOP
label_237d1c:
    // 0x237d1c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x237d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_237d20:
    // 0x237d20: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x237d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_237d24:
    // 0x237d24: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x237d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_237d28:
    // 0x237d28: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_237d2c:
    if (ctx->pc == 0x237D2Cu) {
        ctx->pc = 0x237D30u;
        goto label_237d30;
    }
    ctx->pc = 0x237D28u;
    {
        const bool branch_taken_0x237d28 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x237d28) {
            ctx->pc = 0x237D44u;
            goto label_237d44;
        }
    }
    ctx->pc = 0x237D30u;
label_237d30:
    // 0x237d30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237d30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237d34:
    // 0x237d34: 0x0  nop
    ctx->pc = 0x237d34u;
    // NOP
label_237d38:
    // 0x237d38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x237d38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_237d3c:
    // 0x237d3c: 0x10000008  b           . + 4 + (0x8 << 2)
label_237d40:
    if (ctx->pc == 0x237D40u) {
        ctx->pc = 0x237D44u;
        goto label_237d44;
    }
    ctx->pc = 0x237D3Cu;
    {
        const bool branch_taken_0x237d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237d3c) {
            ctx->pc = 0x237D60u;
            goto label_237d60;
        }
    }
    ctx->pc = 0x237D44u;
label_237d44:
    // 0x237d44: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x237d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_237d48:
    // 0x237d48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x237d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_237d4c:
    // 0x237d4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x237d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_237d50:
    // 0x237d50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x237d50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237d54:
    // 0x237d54: 0x0  nop
    ctx->pc = 0x237d54u;
    // NOP
label_237d58:
    // 0x237d58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x237d58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_237d5c:
    // 0x237d5c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x237d5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_237d60:
    // 0x237d60: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x237d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_237d64:
    // 0x237d64: 0xc78080f4  lwc1        $f0, -0x7F0C($gp)
    ctx->pc = 0x237d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237d68:
    // 0x237d68: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x237d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_237d6c:
    // 0x237d6c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x237d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_237d70:
    // 0x237d70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237d74:
    // 0x237d74: 0x0  nop
    ctx->pc = 0x237d74u;
    // NOP
label_237d78:
    // 0x237d78: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x237d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_237d7c:
    // 0x237d7c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x237d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_237d80:
    // 0x237d80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237d84:
    // 0x237d84: 0x0  nop
    ctx->pc = 0x237d84u;
    // NOP
label_237d88:
    // 0x237d88: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x237d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_237d8c:
    // 0x237d8c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x237d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_237d90:
    // 0x237d90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237d94:
    // 0x237d94: 0x0  nop
    ctx->pc = 0x237d94u;
    // NOP
label_237d98:
    // 0x237d98: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x237d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_237d9c:
    // 0x237d9c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x237d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_237da0:
    // 0x237da0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237da4:
    // 0x237da4: 0x0  nop
    ctx->pc = 0x237da4u;
    // NOP
label_237da8:
    // 0x237da8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x237da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_237dac:
    // 0x237dac: 0xc78080f4  lwc1        $f0, -0x7F0C($gp)
    ctx->pc = 0x237dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237db0:
    // 0x237db0: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x237db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_237db4:
    // 0x237db4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x237db4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237db8:
    // 0x237db8: 0x0  nop
    ctx->pc = 0x237db8u;
    // NOP
label_237dbc:
    // 0x237dbc: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x237dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_237dc0:
    // 0x237dc0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x237dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_237dc4:
    // 0x237dc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237dc8:
    // 0x237dc8: 0x0  nop
    ctx->pc = 0x237dc8u;
    // NOP
label_237dcc:
    // 0x237dcc: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x237dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_237dd0:
    // 0x237dd0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x237dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_237dd4:
    // 0x237dd4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x237dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_237dd8:
    // 0x237dd8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_237ddc:
    if (ctx->pc == 0x237DDCu) {
        ctx->pc = 0x237DE0u;
        goto label_237de0;
    }
    ctx->pc = 0x237DD8u;
    {
        const bool branch_taken_0x237dd8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x237dd8) {
            ctx->pc = 0x237DF4u;
            goto label_237df4;
        }
    }
    ctx->pc = 0x237DE0u;
label_237de0:
    // 0x237de0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237de4:
    // 0x237de4: 0x0  nop
    ctx->pc = 0x237de4u;
    // NOP
label_237de8:
    // 0x237de8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x237de8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_237dec:
    // 0x237dec: 0x10000008  b           . + 4 + (0x8 << 2)
label_237df0:
    if (ctx->pc == 0x237DF0u) {
        ctx->pc = 0x237DF4u;
        goto label_237df4;
    }
    ctx->pc = 0x237DECu;
    {
        const bool branch_taken_0x237dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237dec) {
            ctx->pc = 0x237E10u;
            goto label_237e10;
        }
    }
    ctx->pc = 0x237DF4u;
label_237df4:
    // 0x237df4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x237df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_237df8:
    // 0x237df8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x237df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_237dfc:
    // 0x237dfc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x237dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_237e00:
    // 0x237e00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x237e00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237e04:
    // 0x237e04: 0x0  nop
    ctx->pc = 0x237e04u;
    // NOP
label_237e08:
    // 0x237e08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x237e08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_237e0c:
    // 0x237e0c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x237e0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_237e10:
    // 0x237e10: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x237e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_237e14:
    // 0x237e14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x237e14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237e18:
    // 0x237e18: 0x0  nop
    ctx->pc = 0x237e18u;
    // NOP
label_237e1c:
    // 0x237e1c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x237e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_237e20:
    // 0x237e20: 0xc78080f4  lwc1        $f0, -0x7F0C($gp)
    ctx->pc = 0x237e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237e24:
    // 0x237e24: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x237e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_237e28:
    // 0x237e28: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x237e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_237e2c:
    // 0x237e2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237e30:
    // 0x237e30: 0x0  nop
    ctx->pc = 0x237e30u;
    // NOP
label_237e34:
    // 0x237e34: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x237e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_237e38:
    // 0x237e38: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x237e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_237e3c:
    // 0x237e3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237e40:
    // 0x237e40: 0x0  nop
    ctx->pc = 0x237e40u;
    // NOP
label_237e44:
    // 0x237e44: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x237e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_237e48:
    // 0x237e48: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x237e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_237e4c:
    // 0x237e4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237e50:
    // 0x237e50: 0x0  nop
    ctx->pc = 0x237e50u;
    // NOP
label_237e54:
    // 0x237e54: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x237e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_237e58:
    // 0x237e58: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x237e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_237e5c:
    // 0x237e5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237e5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237e60:
    // 0x237e60: 0x0  nop
    ctx->pc = 0x237e60u;
    // NOP
label_237e64:
    // 0x237e64: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x237e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_237e68:
    // 0x237e68: 0xc78080f4  lwc1        $f0, -0x7F0C($gp)
    ctx->pc = 0x237e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237e6c:
    // 0x237e6c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x237e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_237e70:
    // 0x237e70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x237e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_237e74:
    // 0x237e74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237e78:
    // 0x237e78: 0x0  nop
    ctx->pc = 0x237e78u;
    // NOP
label_237e7c:
    // 0x237e7c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x237e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_237e80:
    // 0x237e80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x237e80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237e84:
    // 0x237e84: 0x0  nop
    ctx->pc = 0x237e84u;
    // NOP
label_237e88:
    // 0x237e88: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x237e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_237e8c:
    // 0x237e8c: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x237e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_237e90:
    // 0x237e90: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x237e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_237e94:
    // 0x237e94: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_237e98:
    if (ctx->pc == 0x237E98u) {
        ctx->pc = 0x237E9Cu;
        goto label_237e9c;
    }
    ctx->pc = 0x237E94u;
    {
        const bool branch_taken_0x237e94 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x237e94) {
            ctx->pc = 0x237EB0u;
            goto label_237eb0;
        }
    }
    ctx->pc = 0x237E9Cu;
label_237e9c:
    // 0x237e9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237ea0:
    // 0x237ea0: 0x0  nop
    ctx->pc = 0x237ea0u;
    // NOP
label_237ea4:
    // 0x237ea4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x237ea4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_237ea8:
    // 0x237ea8: 0x10000008  b           . + 4 + (0x8 << 2)
label_237eac:
    if (ctx->pc == 0x237EACu) {
        ctx->pc = 0x237EB0u;
        goto label_237eb0;
    }
    ctx->pc = 0x237EA8u;
    {
        const bool branch_taken_0x237ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237ea8) {
            ctx->pc = 0x237ECCu;
            goto label_237ecc;
        }
    }
    ctx->pc = 0x237EB0u;
label_237eb0:
    // 0x237eb0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x237eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_237eb4:
    // 0x237eb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x237eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_237eb8:
    // 0x237eb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x237eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_237ebc:
    // 0x237ebc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x237ebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237ec0:
    // 0x237ec0: 0x0  nop
    ctx->pc = 0x237ec0u;
    // NOP
label_237ec4:
    // 0x237ec4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x237ec4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_237ec8:
    // 0x237ec8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x237ec8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_237ecc:
    // 0x237ecc: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x237eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_237ed0:
    // 0x237ed0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x237ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_237ed4:
    // 0x237ed4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x237ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_237ed8:
    // 0x237ed8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_237edc:
    if (ctx->pc == 0x237EDCu) {
        ctx->pc = 0x237EE0u;
        goto label_237ee0;
    }
    ctx->pc = 0x237ED8u;
    {
        const bool branch_taken_0x237ed8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x237ed8) {
            ctx->pc = 0x237EF4u;
            goto label_237ef4;
        }
    }
    ctx->pc = 0x237EE0u;
label_237ee0:
    // 0x237ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237ee4:
    // 0x237ee4: 0x0  nop
    ctx->pc = 0x237ee4u;
    // NOP
label_237ee8:
    // 0x237ee8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x237ee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_237eec:
    // 0x237eec: 0x10000008  b           . + 4 + (0x8 << 2)
label_237ef0:
    if (ctx->pc == 0x237EF0u) {
        ctx->pc = 0x237EF4u;
        goto label_237ef4;
    }
    ctx->pc = 0x237EECu;
    {
        const bool branch_taken_0x237eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237eec) {
            ctx->pc = 0x237F10u;
            goto label_237f10;
        }
    }
    ctx->pc = 0x237EF4u;
label_237ef4:
    // 0x237ef4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x237ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_237ef8:
    // 0x237ef8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x237ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_237efc:
    // 0x237efc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x237efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_237f00:
    // 0x237f00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x237f00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237f04:
    // 0x237f04: 0x0  nop
    ctx->pc = 0x237f04u;
    // NOP
label_237f08:
    // 0x237f08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x237f08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_237f0c:
    // 0x237f0c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x237f0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_237f10:
    // 0x237f10: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x237f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_237f14:
    // 0x237f14: 0xc78080f4  lwc1        $f0, -0x7F0C($gp)
    ctx->pc = 0x237f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237f18:
    // 0x237f18: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x237f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_237f1c:
    // 0x237f1c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x237f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_237f20:
    // 0x237f20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237f24:
    // 0x237f24: 0x0  nop
    ctx->pc = 0x237f24u;
    // NOP
label_237f28:
    // 0x237f28: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x237f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_237f2c:
    // 0x237f2c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x237f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_237f30:
    // 0x237f30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237f34:
    // 0x237f34: 0x0  nop
    ctx->pc = 0x237f34u;
    // NOP
label_237f38:
    // 0x237f38: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x237f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_237f3c:
    // 0x237f3c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x237f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_237f40:
    // 0x237f40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237f44:
    // 0x237f44: 0x0  nop
    ctx->pc = 0x237f44u;
    // NOP
label_237f48:
    // 0x237f48: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x237f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_237f4c:
    // 0x237f4c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x237f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_237f50:
    // 0x237f50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237f54:
    // 0x237f54: 0x0  nop
    ctx->pc = 0x237f54u;
    // NOP
label_237f58:
    // 0x237f58: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x237f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_237f5c:
    // 0x237f5c: 0xc78080f4  lwc1        $f0, -0x7F0C($gp)
    ctx->pc = 0x237f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237f60:
    // 0x237f60: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x237f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_237f64:
    // 0x237f64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x237f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_237f68:
    // 0x237f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237f6c:
    // 0x237f6c: 0x0  nop
    ctx->pc = 0x237f6cu;
    // NOP
label_237f70:
    // 0x237f70: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x237f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_237f74:
    // 0x237f74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x237f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_237f78:
    // 0x237f78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_237f7c:
    // 0x237f7c: 0x0  nop
    ctx->pc = 0x237f7cu;
    // NOP
label_237f80:
    // 0x237f80: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x237f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_237f84:
    // 0x237f84: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x237f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_237f88:
    // 0x237f88: 0xc105f96  jal         func_417E58
label_237f8c:
    if (ctx->pc == 0x237F8Cu) {
        ctx->pc = 0x237F90u;
        goto label_237f90;
    }
    ctx->pc = 0x237F88u;
    SET_GPR_U32(ctx, 31, 0x237F90u);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x237F88u, 0x237F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F90u;
label_237f90:
    // 0x237f90: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x237f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_237f94:
    // 0x237f94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x237f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237f98:
    // 0x237f98: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x237f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_237f9c:
    // 0x237f9c: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x237f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_237fa0:
    // 0x237fa0: 0x40f809  jalr        $v0
label_237fa4:
    if (ctx->pc == 0x237FA4u) {
        ctx->pc = 0x237FA8u;
        goto label_237fa8;
    }
    ctx->pc = 0x237FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237FA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237FA0u, 0x237FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237FA8u;
label_237fa8:
    // 0x237fa8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x237fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_237fac:
    // 0x237fac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x237facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237fb0:
    // 0x237fb0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x237fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_237fb4:
    // 0x237fb4: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x237fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_237fb8:
    // 0x237fb8: 0x40f809  jalr        $v0
label_237fbc:
    if (ctx->pc == 0x237FBCu) {
        ctx->pc = 0x237FC0u;
        goto label_237fc0;
    }
    ctx->pc = 0x237FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237FC0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237FB8u, 0x237FC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237FC0u;
label_237fc0:
    // 0x237fc0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x237fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_237fc4:
    // 0x237fc4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x237fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_237fc8:
    // 0x237fc8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x237fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_237fcc:
    // 0x237fcc: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x237fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_237fd0:
    // 0x237fd0: 0x40f809  jalr        $v0
label_237fd4:
    if (ctx->pc == 0x237FD4u) {
        ctx->pc = 0x237FD8u;
        goto label_237fd8;
    }
    ctx->pc = 0x237FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237FD8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237FD0u, 0x237FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237FD8u;
label_237fd8:
    // 0x237fd8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x237fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_237fdc:
    // 0x237fdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x237fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237fe0:
    // 0x237fe0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x237fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_237fe4:
    // 0x237fe4: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x237fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_237fe8:
    // 0x237fe8: 0x40f809  jalr        $v0
label_237fec:
    if (ctx->pc == 0x237FECu) {
        ctx->pc = 0x237FF0u;
        goto label_237ff0;
    }
    ctx->pc = 0x237FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237FF0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237FE8u, 0x237FF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237FF0u;
label_237ff0:
    // 0x237ff0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x237ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_237ff4:
    // 0x237ff4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x237ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_237ff8:
    // 0x237ff8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x237ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_237ffc:
    // 0x237ffc: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x237ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_238000:
    // 0x238000: 0x40f809  jalr        $v0
label_238004:
    if (ctx->pc == 0x238004u) {
        ctx->pc = 0x238008u;
        goto label_238008;
    }
    ctx->pc = 0x238000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238008u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238000u, 0x238008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238008u;
label_238008:
    // 0x238008: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x238008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23800c:
    // 0x23800c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x23800cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_238010:
    // 0x238010: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x238010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_238014:
    // 0x238014: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x238014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_238018:
    // 0x238018: 0x40f809  jalr        $v0
label_23801c:
    if (ctx->pc == 0x23801Cu) {
        ctx->pc = 0x238020u;
        goto label_238020;
    }
    ctx->pc = 0x238018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238020u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238018u, 0x238020u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238020u;
label_238020:
    // 0x238020: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x238020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_238024:
    // 0x238024: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x238024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_238028:
    // 0x238028: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x238028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23802c:
    // 0x23802c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x23802cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_238030:
    // 0x238030: 0x8c42e8b0  lw          $v0, -0x1750($v0)
    ctx->pc = 0x238030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961328)));
label_238034:
    // 0x238034: 0x40f809  jalr        $v0
label_238038:
    if (ctx->pc == 0x238038u) {
        ctx->pc = 0x23803Cu;
        goto label_23803c;
    }
    ctx->pc = 0x238034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23803Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238034u, 0x23803Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23803Cu;
label_23803c:
    // 0x23803c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x23803cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_238040:
    // 0x238040: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x238040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238044:
    // 0x238044: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x238044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_238048:
    // 0x238048: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x238048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_23804c:
    // 0x23804c: 0x40f809  jalr        $v0
label_238050:
    if (ctx->pc == 0x238050u) {
        ctx->pc = 0x238054u;
        goto label_238054;
    }
    ctx->pc = 0x23804Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238054u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23804Cu, 0x238054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238054u;
label_238054:
    // 0x238054: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x238054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_238058:
    // 0x238058: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x238058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23805c:
    // 0x23805c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x23805cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_238060:
    // 0x238060: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x238060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_238064:
    // 0x238064: 0x40f809  jalr        $v0
label_238068:
    if (ctx->pc == 0x238068u) {
        ctx->pc = 0x23806Cu;
        goto label_23806c;
    }
    ctx->pc = 0x238064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23806Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238064u, 0x23806Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23806Cu;
label_23806c:
    // 0x23806c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x23806cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_238070:
    // 0x238070: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x238070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_238074:
    // 0x238074: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x238074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_238078:
    // 0x238078: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x238078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_23807c:
    // 0x23807c: 0x40f809  jalr        $v0
label_238080:
    if (ctx->pc == 0x238080u) {
        ctx->pc = 0x238084u;
        goto label_238084;
    }
    ctx->pc = 0x23807Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238084u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23807Cu, 0x238084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238084u;
label_238084:
    // 0x238084: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x238084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_238088:
    // 0x238088: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x238088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23808c:
    // 0x23808c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x23808cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_238090:
    // 0x238090: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x238090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_238094:
    // 0x238094: 0x40f809  jalr        $v0
label_238098:
    if (ctx->pc == 0x238098u) {
        ctx->pc = 0x23809Cu;
        goto label_23809c;
    }
    ctx->pc = 0x238094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23809Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238094u, 0x23809Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23809Cu;
label_23809c:
    // 0x23809c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23809cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2380a0:
    // 0x2380a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2380a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2380a4:
    // 0x2380a4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2380a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2380a8:
    // 0x2380a8: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2380a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2380ac:
    // 0x2380ac: 0x40f809  jalr        $v0
label_2380b0:
    if (ctx->pc == 0x2380B0u) {
        ctx->pc = 0x2380B4u;
        goto label_2380b4;
    }
    ctx->pc = 0x2380ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2380B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2380ACu, 0x2380B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2380B4u;
label_2380b4:
    // 0x2380b4: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x2380b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_2380b8:
    // 0x2380b8: 0xc105f9e  jal         func_417E78
label_2380bc:
    if (ctx->pc == 0x2380BCu) {
        ctx->pc = 0x2380C0u;
        goto label_2380c0;
    }
    ctx->pc = 0x2380B8u;
    SET_GPR_U32(ctx, 31, 0x2380C0u);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x2380B8u, 0x2380C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2380C0u;
label_2380c0:
    // 0x2380c0: 0x93a20150  lbu         $v0, 0x150($sp)
    ctx->pc = 0x2380c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_2380c4:
    // 0x2380c4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2380c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2380c8:
    // 0x2380c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2380c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2380cc:
    // 0x2380cc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_2380d0:
    if (ctx->pc == 0x2380D0u) {
        ctx->pc = 0x2380D4u;
        goto label_2380d4;
    }
    ctx->pc = 0x2380CCu;
    {
        const bool branch_taken_0x2380cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2380cc) {
            ctx->pc = 0x2380E8u;
            goto label_2380e8;
        }
    }
    ctx->pc = 0x2380D4u;
label_2380d4:
    // 0x2380d4: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x2380d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_2380d8:
    // 0x2380d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2380d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2380dc:
    // 0x2380dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2380dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2380e0:
    // 0x2380e0: 0xc105fb4  jal         func_417ED0
label_2380e4:
    if (ctx->pc == 0x2380E4u) {
        ctx->pc = 0x2380E8u;
        goto label_2380e8;
    }
    ctx->pc = 0x2380E0u;
    SET_GPR_U32(ctx, 31, 0x2380E8u);
    ctx->pc = 0x417ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417ED0u, 0x2380E0u, 0x2380E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2380E8u;
label_2380e8:
    // 0x2380e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2380e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2380ec:
    // 0x2380ec: 0xc10822c  jal         func_4208B0
label_2380f0:
    if (ctx->pc == 0x2380F0u) {
        ctx->pc = 0x2380F4u;
        goto label_2380f4;
    }
    ctx->pc = 0x2380ECu;
    SET_GPR_U32(ctx, 31, 0x2380F4u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x2380ECu, 0x2380F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2380F4u;
label_2380f4:
    // 0x2380f4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2380f8:
    if (ctx->pc == 0x2380F8u) {
        ctx->pc = 0x2380FCu;
        goto label_2380fc;
    }
    ctx->pc = 0x2380F4u;
    {
        const bool branch_taken_0x2380f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2380f4) {
            ctx->pc = 0x238108u;
            goto label_238108;
        }
    }
    ctx->pc = 0x2380FCu;
label_2380fc:
    // 0x2380fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2380fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238100:
    // 0x238100: 0xc08e054  jal         func_238150
label_238104:
    if (ctx->pc == 0x238104u) {
        ctx->pc = 0x238108u;
        goto label_238108;
    }
    ctx->pc = 0x238100u;
    SET_GPR_U32(ctx, 31, 0x238108u);
    ctx->pc = 0x238150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238150u, 0x238100u, 0x238108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238108u;
label_238108:
    // 0x238108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23810c:
    // 0x23810c: 0x10000007  b           . + 4 + (0x7 << 2)
label_238110:
    if (ctx->pc == 0x238110u) {
        ctx->pc = 0x238114u;
        goto label_238114;
    }
    ctx->pc = 0x23810Cu;
    {
        const bool branch_taken_0x23810c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23810c) {
            ctx->pc = 0x23812Cu;
            goto label_23812c;
        }
    }
    ctx->pc = 0x238114u;
label_238114:
    // 0x238114: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_238118:
    if (ctx->pc == 0x238118u) {
        ctx->pc = 0x23811Cu;
        goto label_23811c;
    }
    ctx->pc = 0x238114u;
    {
        const bool branch_taken_0x238114 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x238114) {
            ctx->pc = 0x238128u;
            goto label_238128;
        }
    }
    ctx->pc = 0x23811Cu;
label_23811c:
    // 0x23811c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23811cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238120:
    // 0x238120: 0xc08e054  jal         func_238150
label_238124:
    if (ctx->pc == 0x238124u) {
        ctx->pc = 0x238128u;
        goto label_238128;
    }
    ctx->pc = 0x238120u;
    SET_GPR_U32(ctx, 31, 0x238128u);
    ctx->pc = 0x238150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238150u, 0x238120u, 0x238128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238128u;
label_238128:
    // 0x238128: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x238128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23812c:
    // 0x23812c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23812cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_238130:
    // 0x238130: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x238130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_238134:
    // 0x238134: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x238134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_238138:
    // 0x238138: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x238138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_23813c:
    // 0x23813c: 0x3e00008  jr          $ra
label_238140:
    if (ctx->pc == 0x238140u) {
        ctx->pc = 0x238144u;
        goto label_238144;
    }
    ctx->pc = 0x23813Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23813Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238144u;
label_238144:
    // 0x238144: 0x0  nop
    ctx->pc = 0x238144u;
    // NOP
label_238148:
    // 0x238148: 0x0  nop
    ctx->pc = 0x238148u;
    // NOP
label_23814c:
    // 0x23814c: 0x0  nop
    ctx->pc = 0x23814cu;
    // NOP
    ctx->pc = 0x238150u;
}
