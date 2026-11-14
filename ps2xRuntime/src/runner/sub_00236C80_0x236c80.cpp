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

// Function: sub_00236C80
// Address: 0x236c80 - 0x236e90
void sub_00236C80_0x236c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236C80_0x236c80");
#endif

    switch (ctx->pc) {
        case 0x236c80u: goto label_236c80;
        case 0x236c84u: goto label_236c84;
        case 0x236c88u: goto label_236c88;
        case 0x236c8cu: goto label_236c8c;
        case 0x236c90u: goto label_236c90;
        case 0x236c94u: goto label_236c94;
        case 0x236c98u: goto label_236c98;
        case 0x236c9cu: goto label_236c9c;
        case 0x236ca0u: goto label_236ca0;
        case 0x236ca4u: goto label_236ca4;
        case 0x236ca8u: goto label_236ca8;
        case 0x236cacu: goto label_236cac;
        case 0x236cb0u: goto label_236cb0;
        case 0x236cb4u: goto label_236cb4;
        case 0x236cb8u: goto label_236cb8;
        case 0x236cbcu: goto label_236cbc;
        case 0x236cc0u: goto label_236cc0;
        case 0x236cc4u: goto label_236cc4;
        case 0x236cc8u: goto label_236cc8;
        case 0x236cccu: goto label_236ccc;
        case 0x236cd0u: goto label_236cd0;
        case 0x236cd4u: goto label_236cd4;
        case 0x236cd8u: goto label_236cd8;
        case 0x236cdcu: goto label_236cdc;
        case 0x236ce0u: goto label_236ce0;
        case 0x236ce4u: goto label_236ce4;
        case 0x236ce8u: goto label_236ce8;
        case 0x236cecu: goto label_236cec;
        case 0x236cf0u: goto label_236cf0;
        case 0x236cf4u: goto label_236cf4;
        case 0x236cf8u: goto label_236cf8;
        case 0x236cfcu: goto label_236cfc;
        case 0x236d00u: goto label_236d00;
        case 0x236d04u: goto label_236d04;
        case 0x236d08u: goto label_236d08;
        case 0x236d0cu: goto label_236d0c;
        case 0x236d10u: goto label_236d10;
        case 0x236d14u: goto label_236d14;
        case 0x236d18u: goto label_236d18;
        case 0x236d1cu: goto label_236d1c;
        case 0x236d20u: goto label_236d20;
        case 0x236d24u: goto label_236d24;
        case 0x236d28u: goto label_236d28;
        case 0x236d2cu: goto label_236d2c;
        case 0x236d30u: goto label_236d30;
        case 0x236d34u: goto label_236d34;
        case 0x236d38u: goto label_236d38;
        case 0x236d3cu: goto label_236d3c;
        case 0x236d40u: goto label_236d40;
        case 0x236d44u: goto label_236d44;
        case 0x236d48u: goto label_236d48;
        case 0x236d4cu: goto label_236d4c;
        case 0x236d50u: goto label_236d50;
        case 0x236d54u: goto label_236d54;
        case 0x236d58u: goto label_236d58;
        case 0x236d5cu: goto label_236d5c;
        case 0x236d60u: goto label_236d60;
        case 0x236d64u: goto label_236d64;
        case 0x236d68u: goto label_236d68;
        case 0x236d6cu: goto label_236d6c;
        case 0x236d70u: goto label_236d70;
        case 0x236d74u: goto label_236d74;
        case 0x236d78u: goto label_236d78;
        case 0x236d7cu: goto label_236d7c;
        case 0x236d80u: goto label_236d80;
        case 0x236d84u: goto label_236d84;
        case 0x236d88u: goto label_236d88;
        case 0x236d8cu: goto label_236d8c;
        case 0x236d90u: goto label_236d90;
        case 0x236d94u: goto label_236d94;
        case 0x236d98u: goto label_236d98;
        case 0x236d9cu: goto label_236d9c;
        case 0x236da0u: goto label_236da0;
        case 0x236da4u: goto label_236da4;
        case 0x236da8u: goto label_236da8;
        case 0x236dacu: goto label_236dac;
        case 0x236db0u: goto label_236db0;
        case 0x236db4u: goto label_236db4;
        case 0x236db8u: goto label_236db8;
        case 0x236dbcu: goto label_236dbc;
        case 0x236dc0u: goto label_236dc0;
        case 0x236dc4u: goto label_236dc4;
        case 0x236dc8u: goto label_236dc8;
        case 0x236dccu: goto label_236dcc;
        case 0x236dd0u: goto label_236dd0;
        case 0x236dd4u: goto label_236dd4;
        case 0x236dd8u: goto label_236dd8;
        case 0x236ddcu: goto label_236ddc;
        case 0x236de0u: goto label_236de0;
        case 0x236de4u: goto label_236de4;
        case 0x236de8u: goto label_236de8;
        case 0x236decu: goto label_236dec;
        case 0x236df0u: goto label_236df0;
        case 0x236df4u: goto label_236df4;
        case 0x236df8u: goto label_236df8;
        case 0x236dfcu: goto label_236dfc;
        case 0x236e00u: goto label_236e00;
        case 0x236e04u: goto label_236e04;
        case 0x236e08u: goto label_236e08;
        case 0x236e0cu: goto label_236e0c;
        case 0x236e10u: goto label_236e10;
        case 0x236e14u: goto label_236e14;
        case 0x236e18u: goto label_236e18;
        case 0x236e1cu: goto label_236e1c;
        case 0x236e20u: goto label_236e20;
        case 0x236e24u: goto label_236e24;
        case 0x236e28u: goto label_236e28;
        case 0x236e2cu: goto label_236e2c;
        case 0x236e30u: goto label_236e30;
        case 0x236e34u: goto label_236e34;
        case 0x236e38u: goto label_236e38;
        case 0x236e3cu: goto label_236e3c;
        case 0x236e40u: goto label_236e40;
        case 0x236e44u: goto label_236e44;
        case 0x236e48u: goto label_236e48;
        case 0x236e4cu: goto label_236e4c;
        case 0x236e50u: goto label_236e50;
        case 0x236e54u: goto label_236e54;
        case 0x236e58u: goto label_236e58;
        case 0x236e5cu: goto label_236e5c;
        case 0x236e60u: goto label_236e60;
        case 0x236e64u: goto label_236e64;
        case 0x236e68u: goto label_236e68;
        case 0x236e6cu: goto label_236e6c;
        case 0x236e70u: goto label_236e70;
        case 0x236e74u: goto label_236e74;
        case 0x236e78u: goto label_236e78;
        case 0x236e7cu: goto label_236e7c;
        case 0x236e80u: goto label_236e80;
        case 0x236e84u: goto label_236e84;
        case 0x236e88u: goto label_236e88;
        case 0x236e8cu: goto label_236e8c;
        default: break;
    }

    ctx->pc = 0x236c80u;

label_236c80:
    // 0x236c80: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x236c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_236c84:
    // 0x236c84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x236c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_236c88:
    // 0x236c88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x236c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_236c8c:
    // 0x236c8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x236c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_236c90:
    // 0x236c90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x236c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_236c94:
    // 0x236c94: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x236c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_236c98:
    // 0x236c98: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x236c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
label_236c9c:
    // 0x236c9c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x236c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_236ca0:
    // 0x236ca0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x236ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_236ca4:
    // 0x236ca4: 0xc040304  jal         func_100C10
label_236ca8:
    if (ctx->pc == 0x236CA8u) {
        ctx->pc = 0x236CACu;
        goto label_236cac;
    }
    ctx->pc = 0x236CA4u;
    SET_GPR_U32(ctx, 31, 0x236CACu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x236CA4u, 0x236CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236CACu;
label_236cac:
    // 0x236cac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x236cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_236cb0:
    // 0x236cb0: 0x27859d3c  addiu       $a1, $gp, -0x62C4
    ctx->pc = 0x236cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942012));
label_236cb4:
    // 0x236cb4: 0xc040304  jal         func_100C10
label_236cb8:
    if (ctx->pc == 0x236CB8u) {
        ctx->pc = 0x236CBCu;
        goto label_236cbc;
    }
    ctx->pc = 0x236CB4u;
    SET_GPR_U32(ctx, 31, 0x236CBCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x236CB4u, 0x236CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236CBCu;
label_236cbc:
    // 0x236cbc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x236cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_236cc0:
    // 0x236cc0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x236cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_236cc4:
    // 0x236cc4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x236cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_236cc8:
    // 0x236cc8: 0xc119d74  jal         func_4675D0
label_236ccc:
    if (ctx->pc == 0x236CCCu) {
        ctx->pc = 0x236CD0u;
        goto label_236cd0;
    }
    ctx->pc = 0x236CC8u;
    SET_GPR_U32(ctx, 31, 0x236CD0u);
    ctx->pc = 0x4675D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4675D0u, 0x236CC8u, 0x236CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236CD0u;
label_236cd0:
    // 0x236cd0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x236cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_236cd4:
    // 0x236cd4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x236cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_236cd8:
    // 0x236cd8: 0xc0402d4  jal         func_100B50
label_236cdc:
    if (ctx->pc == 0x236CDCu) {
        ctx->pc = 0x236CE0u;
        goto label_236ce0;
    }
    ctx->pc = 0x236CD8u;
    SET_GPR_U32(ctx, 31, 0x236CE0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x236CD8u, 0x236CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236CE0u;
label_236ce0:
    // 0x236ce0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x236ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_236ce4:
    // 0x236ce4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x236ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_236ce8:
    // 0x236ce8: 0xc0402d4  jal         func_100B50
label_236cec:
    if (ctx->pc == 0x236CECu) {
        ctx->pc = 0x236CF0u;
        goto label_236cf0;
    }
    ctx->pc = 0x236CE8u;
    SET_GPR_U32(ctx, 31, 0x236CF0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x236CE8u, 0x236CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236CF0u;
label_236cf0:
    // 0x236cf0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x236cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_236cf4:
    // 0x236cf4: 0xc119db4  jal         func_4676D0
label_236cf8:
    if (ctx->pc == 0x236CF8u) {
        ctx->pc = 0x236CFCu;
        goto label_236cfc;
    }
    ctx->pc = 0x236CF4u;
    SET_GPR_U32(ctx, 31, 0x236CFCu);
    ctx->pc = 0x4676D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4676D0u, 0x236CF4u, 0x236CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236CFCu;
label_236cfc:
    // 0x236cfc: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_236d00:
    if (ctx->pc == 0x236D00u) {
        ctx->pc = 0x236D04u;
        goto label_236d04;
    }
    ctx->pc = 0x236CFCu;
    {
        const bool branch_taken_0x236cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236cfc) {
            ctx->pc = 0x236E54u;
            goto label_236e54;
        }
    }
    ctx->pc = 0x236D04u;
label_236d04:
    // 0x236d04: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x236d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_236d08:
    // 0x236d08: 0xc119e50  jal         func_467940
label_236d0c:
    if (ctx->pc == 0x236D0Cu) {
        ctx->pc = 0x236D10u;
        goto label_236d10;
    }
    ctx->pc = 0x236D08u;
    SET_GPR_U32(ctx, 31, 0x236D10u);
    ctx->pc = 0x467940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467940u, 0x236D08u, 0x236D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236D10u;
label_236d10:
    // 0x236d10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x236d10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236d14:
    // 0x236d14: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x236d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_236d18:
    // 0x236d18: 0xc119b68  jal         func_466DA0
label_236d1c:
    if (ctx->pc == 0x236D1Cu) {
        ctx->pc = 0x236D20u;
        goto label_236d20;
    }
    ctx->pc = 0x236D18u;
    SET_GPR_U32(ctx, 31, 0x236D20u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x236D18u, 0x236D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236D20u;
label_236d20:
    // 0x236d20: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x236d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_236d24:
    // 0x236d24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x236d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236d28:
    // 0x236d28: 0xc0400e0  jal         func_100380
label_236d2c:
    if (ctx->pc == 0x236D2Cu) {
        ctx->pc = 0x236D30u;
        goto label_236d30;
    }
    ctx->pc = 0x236D28u;
    SET_GPR_U32(ctx, 31, 0x236D30u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x236D28u, 0x236D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236D30u;
label_236d30:
    // 0x236d30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236d34:
    // 0x236d34: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_236d38:
    if (ctx->pc == 0x236D38u) {
        ctx->pc = 0x236D3Cu;
        goto label_236d3c;
    }
    ctx->pc = 0x236D34u;
    {
        const bool branch_taken_0x236d34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x236d34) {
            ctx->pc = 0x236D4Cu;
            goto label_236d4c;
        }
    }
    ctx->pc = 0x236D3Cu;
label_236d3c:
    // 0x236d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236d40:
    // 0x236d40: 0xc119f38  jal         func_467CE0
label_236d44:
    if (ctx->pc == 0x236D44u) {
        ctx->pc = 0x236D48u;
        goto label_236d48;
    }
    ctx->pc = 0x236D40u;
    SET_GPR_U32(ctx, 31, 0x236D48u);
    ctx->pc = 0x467CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467CE0u, 0x236D40u, 0x236D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236D48u;
label_236d48:
    // 0x236d48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236d4c:
    // 0x236d4c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x236d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_236d50:
    // 0x236d50: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x236d50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_236d54:
    // 0x236d54: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x236d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_236d58:
    // 0x236d58: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x236d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_236d5c:
    // 0x236d5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x236d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_236d60:
    // 0x236d60: 0xc119f5c  jal         func_467D70
label_236d64:
    if (ctx->pc == 0x236D64u) {
        ctx->pc = 0x236D68u;
        goto label_236d68;
    }
    ctx->pc = 0x236D60u;
    SET_GPR_U32(ctx, 31, 0x236D68u);
    ctx->pc = 0x467D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467D70u, 0x236D60u, 0x236D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236D68u;
label_236d68:
    // 0x236d68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x236d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236d6c:
    // 0x236d6c: 0x14430036  bne         $v0, $v1, . + 4 + (0x36 << 2)
label_236d70:
    if (ctx->pc == 0x236D70u) {
        ctx->pc = 0x236D74u;
        goto label_236d74;
    }
    ctx->pc = 0x236D6Cu;
    {
        const bool branch_taken_0x236d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x236d6c) {
            ctx->pc = 0x236E48u;
            goto label_236e48;
        }
    }
    ctx->pc = 0x236D74u;
label_236d74:
    // 0x236d74: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x236d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_236d78:
    // 0x236d78: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x236d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_236d7c:
    // 0x236d7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x236d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_236d80:
    // 0x236d80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x236d80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_236d84:
    // 0x236d84: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x236d84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_236d88:
    // 0x236d88: 0x320f809  jalr        $t9
label_236d8c:
    if (ctx->pc == 0x236D8Cu) {
        ctx->pc = 0x236D90u;
        goto label_236d90;
    }
    ctx->pc = 0x236D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x236D90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236D88u, 0x236D90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236D90u;
label_236d90:
    // 0x236d90: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x236d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_236d94:
    // 0x236d94: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x236d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_236d98:
    // 0x236d98: 0xc049394  jal         func_124E50
label_236d9c:
    if (ctx->pc == 0x236D9Cu) {
        ctx->pc = 0x236DA0u;
        goto label_236da0;
    }
    ctx->pc = 0x236D98u;
    SET_GPR_U32(ctx, 31, 0x236DA0u);
    ctx->pc = 0x124E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E50u, 0x236D98u, 0x236DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236DA0u;
label_236da0:
    // 0x236da0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x236da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_236da4:
    // 0x236da4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x236da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236da8:
    // 0x236da8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x236da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_236dac:
    // 0x236dac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x236dacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236db0:
    // 0x236db0: 0xc119ea4  jal         func_467A90
label_236db4:
    if (ctx->pc == 0x236DB4u) {
        ctx->pc = 0x236DB8u;
        goto label_236db8;
    }
    ctx->pc = 0x236DB0u;
    SET_GPR_U32(ctx, 31, 0x236DB8u);
    ctx->pc = 0x467A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467A90u, 0x236DB0u, 0x236DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236DB8u;
label_236db8:
    // 0x236db8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x236db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236dbc:
    // 0x236dbc: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
label_236dc0:
    if (ctx->pc == 0x236DC0u) {
        ctx->pc = 0x236DC4u;
        goto label_236dc4;
    }
    ctx->pc = 0x236DBCu;
    {
        const bool branch_taken_0x236dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x236dbc) {
            ctx->pc = 0x236E0Cu;
            goto label_236e0c;
        }
    }
    ctx->pc = 0x236DC4u;
label_236dc4:
    // 0x236dc4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x236dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_236dc8:
    // 0x236dc8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x236dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_236dcc:
    // 0x236dcc: 0xc119f88  jal         func_467E20
label_236dd0:
    if (ctx->pc == 0x236DD0u) {
        ctx->pc = 0x236DD4u;
        goto label_236dd4;
    }
    ctx->pc = 0x236DCCu;
    SET_GPR_U32(ctx, 31, 0x236DD4u);
    ctx->pc = 0x467E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467E20u, 0x236DCCu, 0x236DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236DD4u;
label_236dd4:
    // 0x236dd4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x236dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_236dd8:
    // 0x236dd8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x236dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_236ddc:
    // 0x236ddc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_236de0:
    if (ctx->pc == 0x236DE0u) {
        ctx->pc = 0x236DE4u;
        goto label_236de4;
    }
    ctx->pc = 0x236DDCu;
    {
        const bool branch_taken_0x236ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236ddc) {
            ctx->pc = 0x236E0Cu;
            goto label_236e0c;
        }
    }
    ctx->pc = 0x236DE4u;
label_236de4:
    // 0x236de4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x236de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_236de8:
    // 0x236de8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x236de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_236dec:
    // 0x236dec: 0xc049384  jal         func_124E10
label_236df0:
    if (ctx->pc == 0x236DF0u) {
        ctx->pc = 0x236DF4u;
        goto label_236df4;
    }
    ctx->pc = 0x236DECu;
    SET_GPR_U32(ctx, 31, 0x236DF4u);
    ctx->pc = 0x124E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E10u, 0x236DECu, 0x236DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236DF4u;
label_236df4:
    // 0x236df4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x236df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_236df8:
    // 0x236df8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x236df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_236dfc:
    // 0x236dfc: 0xc119c5c  jal         func_467170
label_236e00:
    if (ctx->pc == 0x236E00u) {
        ctx->pc = 0x236E04u;
        goto label_236e04;
    }
    ctx->pc = 0x236DFCu;
    SET_GPR_U32(ctx, 31, 0x236E04u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x236DFCu, 0x236E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E04u;
label_236e04:
    // 0x236e04: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x236e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_236e08:
    // 0x236e08: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x236e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_236e0c:
    // 0x236e0c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x236e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_236e10:
    // 0x236e10: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x236e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_236e14:
    // 0x236e14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x236e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236e18:
    // 0x236e18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236e1c:
    // 0x236e1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x236e1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_236e20:
    // 0x236e20: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x236e20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_236e24:
    // 0x236e24: 0x320f809  jalr        $t9
label_236e28:
    if (ctx->pc == 0x236E28u) {
        ctx->pc = 0x236E2Cu;
        goto label_236e2c;
    }
    ctx->pc = 0x236E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x236E2Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236E24u, 0x236E2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236E2Cu;
label_236e2c:
    // 0x236e2c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x236e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_236e30:
    // 0x236e30: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x236e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_236e34:
    // 0x236e34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x236e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236e38:
    // 0x236e38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x236e38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_236e3c:
    // 0x236e3c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x236e3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_236e40:
    // 0x236e40: 0x320f809  jalr        $t9
label_236e44:
    if (ctx->pc == 0x236E44u) {
        ctx->pc = 0x236E48u;
        goto label_236e48;
    }
    ctx->pc = 0x236E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x236E48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236E40u, 0x236E48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236E48u;
label_236e48:
    // 0x236e48: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x236e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_236e4c:
    // 0x236e4c: 0xc119e7c  jal         func_4679F0
label_236e50:
    if (ctx->pc == 0x236E50u) {
        ctx->pc = 0x236E54u;
        goto label_236e54;
    }
    ctx->pc = 0x236E4Cu;
    SET_GPR_U32(ctx, 31, 0x236E54u);
    ctx->pc = 0x4679F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4679F0u, 0x236E4Cu, 0x236E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E54u;
label_236e54:
    // 0x236e54: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x236e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_236e58:
    // 0x236e58: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x236e58u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_236e5c:
    // 0x236e5c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x236e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_236e60:
    // 0x236e60: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x236e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_236e64:
    // 0x236e64: 0xc119d90  jal         func_467640
label_236e68:
    if (ctx->pc == 0x236E68u) {
        ctx->pc = 0x236E6Cu;
        goto label_236e6c;
    }
    ctx->pc = 0x236E64u;
    SET_GPR_U32(ctx, 31, 0x236E6Cu);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x236E64u, 0x236E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E6Cu;
label_236e6c:
    // 0x236e6c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x236e6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_236e70:
    // 0x236e70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x236e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_236e74:
    // 0x236e74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x236e74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_236e78:
    // 0x236e78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x236e78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_236e7c:
    // 0x236e7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x236e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_236e80:
    // 0x236e80: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x236e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_236e84:
    // 0x236e84: 0x3e00008  jr          $ra
label_236e88:
    if (ctx->pc == 0x236E88u) {
        ctx->pc = 0x236E8Cu;
        goto label_236e8c;
    }
    ctx->pc = 0x236E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236E8Cu;
label_236e8c:
    // 0x236e8c: 0x0  nop
    ctx->pc = 0x236e8cu;
    // NOP
    ctx->pc = 0x236e90u;
}
