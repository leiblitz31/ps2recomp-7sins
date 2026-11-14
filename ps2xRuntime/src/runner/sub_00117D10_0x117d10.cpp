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

// Function: sub_00117D10
// Address: 0x117d10 - 0x117e20
void sub_00117D10_0x117d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117D10_0x117d10");
#endif

    switch (ctx->pc) {
        case 0x117d10u: goto label_117d10;
        case 0x117d14u: goto label_117d14;
        case 0x117d18u: goto label_117d18;
        case 0x117d1cu: goto label_117d1c;
        case 0x117d20u: goto label_117d20;
        case 0x117d24u: goto label_117d24;
        case 0x117d28u: goto label_117d28;
        case 0x117d2cu: goto label_117d2c;
        case 0x117d30u: goto label_117d30;
        case 0x117d34u: goto label_117d34;
        case 0x117d38u: goto label_117d38;
        case 0x117d3cu: goto label_117d3c;
        case 0x117d40u: goto label_117d40;
        case 0x117d44u: goto label_117d44;
        case 0x117d48u: goto label_117d48;
        case 0x117d4cu: goto label_117d4c;
        case 0x117d50u: goto label_117d50;
        case 0x117d54u: goto label_117d54;
        case 0x117d58u: goto label_117d58;
        case 0x117d5cu: goto label_117d5c;
        case 0x117d60u: goto label_117d60;
        case 0x117d64u: goto label_117d64;
        case 0x117d68u: goto label_117d68;
        case 0x117d6cu: goto label_117d6c;
        case 0x117d70u: goto label_117d70;
        case 0x117d74u: goto label_117d74;
        case 0x117d78u: goto label_117d78;
        case 0x117d7cu: goto label_117d7c;
        case 0x117d80u: goto label_117d80;
        case 0x117d84u: goto label_117d84;
        case 0x117d88u: goto label_117d88;
        case 0x117d8cu: goto label_117d8c;
        case 0x117d90u: goto label_117d90;
        case 0x117d94u: goto label_117d94;
        case 0x117d98u: goto label_117d98;
        case 0x117d9cu: goto label_117d9c;
        case 0x117da0u: goto label_117da0;
        case 0x117da4u: goto label_117da4;
        case 0x117da8u: goto label_117da8;
        case 0x117dacu: goto label_117dac;
        case 0x117db0u: goto label_117db0;
        case 0x117db4u: goto label_117db4;
        case 0x117db8u: goto label_117db8;
        case 0x117dbcu: goto label_117dbc;
        case 0x117dc0u: goto label_117dc0;
        case 0x117dc4u: goto label_117dc4;
        case 0x117dc8u: goto label_117dc8;
        case 0x117dccu: goto label_117dcc;
        case 0x117dd0u: goto label_117dd0;
        case 0x117dd4u: goto label_117dd4;
        case 0x117dd8u: goto label_117dd8;
        case 0x117ddcu: goto label_117ddc;
        case 0x117de0u: goto label_117de0;
        case 0x117de4u: goto label_117de4;
        case 0x117de8u: goto label_117de8;
        case 0x117decu: goto label_117dec;
        case 0x117df0u: goto label_117df0;
        case 0x117df4u: goto label_117df4;
        case 0x117df8u: goto label_117df8;
        case 0x117dfcu: goto label_117dfc;
        case 0x117e00u: goto label_117e00;
        case 0x117e04u: goto label_117e04;
        case 0x117e08u: goto label_117e08;
        case 0x117e0cu: goto label_117e0c;
        case 0x117e10u: goto label_117e10;
        case 0x117e14u: goto label_117e14;
        case 0x117e18u: goto label_117e18;
        case 0x117e1cu: goto label_117e1c;
        default: break;
    }

    ctx->pc = 0x117d10u;

label_117d10:
    // 0x117d10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x117d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_117d14:
    // 0x117d14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_117d18:
    // 0x117d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x117d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_117d1c:
    // 0x117d1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x117d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_117d20:
    // 0x117d20: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x117d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_117d24:
    // 0x117d24: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x117d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_117d28:
    // 0x117d28: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x117d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_117d2c:
    // 0x117d2c: 0xc042514  jal         func_109450
label_117d30:
    if (ctx->pc == 0x117D30u) {
        ctx->pc = 0x117D34u;
        goto label_117d34;
    }
    ctx->pc = 0x117D2Cu;
    SET_GPR_U32(ctx, 31, 0x117D34u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x117D2Cu, 0x117D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D34u;
label_117d34:
    // 0x117d34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x117d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_117d38:
    // 0x117d38: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x117d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_117d3c:
    // 0x117d3c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x117d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_117d40:
    // 0x117d40: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x117d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_117d44:
    // 0x117d44: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x117d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_117d48:
    // 0x117d48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x117d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117d4c:
    // 0x117d4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x117d4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_117d50:
    // 0x117d50: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x117d50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_117d54:
    // 0x117d54: 0x320f809  jalr        $t9
label_117d58:
    if (ctx->pc == 0x117D58u) {
        ctx->pc = 0x117D5Cu;
        goto label_117d5c;
    }
    ctx->pc = 0x117D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x117D5Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117D54u, 0x117D5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117D5Cu;
label_117d5c:
    // 0x117d5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x117d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117d60:
    // 0x117d60: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_117d64:
    if (ctx->pc == 0x117D64u) {
        ctx->pc = 0x117D68u;
        goto label_117d68;
    }
    ctx->pc = 0x117D60u;
    {
        const bool branch_taken_0x117d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x117d60) {
            ctx->pc = 0x117D74u;
            goto label_117d74;
        }
    }
    ctx->pc = 0x117D68u;
label_117d68:
    // 0x117d68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x117d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117d6c:
    // 0x117d6c: 0x10000023  b           . + 4 + (0x23 << 2)
label_117d70:
    if (ctx->pc == 0x117D70u) {
        ctx->pc = 0x117D74u;
        goto label_117d74;
    }
    ctx->pc = 0x117D6Cu;
    {
        const bool branch_taken_0x117d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117d6c) {
            ctx->pc = 0x117DFCu;
            goto label_117dfc;
        }
    }
    ctx->pc = 0x117D74u;
label_117d74:
    // 0x117d74: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x117d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_117d78:
    // 0x117d78: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x117d78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_117d7c:
    // 0x117d7c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_117d80:
    if (ctx->pc == 0x117D80u) {
        ctx->pc = 0x117D84u;
        goto label_117d84;
    }
    ctx->pc = 0x117D7Cu;
    {
        const bool branch_taken_0x117d7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x117d7c) {
            ctx->pc = 0x117DBCu;
            goto label_117dbc;
        }
    }
    ctx->pc = 0x117D84u;
label_117d84:
    // 0x117d84: 0x8fb10038  lw          $s1, 0x38($sp)
    ctx->pc = 0x117d84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_117d88:
    // 0x117d88: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x117d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_117d8c:
    // 0x117d8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x117d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117d90:
    // 0x117d90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x117d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117d94:
    // 0x117d94: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x117d94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_117d98:
    // 0x117d98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x117d98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_117d9c:
    // 0x117d9c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x117d9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_117da0:
    // 0x117da0: 0x320f809  jalr        $t9
label_117da4:
    if (ctx->pc == 0x117DA4u) {
        ctx->pc = 0x117DA8u;
        goto label_117da8;
    }
    ctx->pc = 0x117DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x117DA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117DA0u, 0x117DA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117DA8u;
label_117da8:
    // 0x117da8: 0x12220013  beq         $s1, $v0, . + 4 + (0x13 << 2)
label_117dac:
    if (ctx->pc == 0x117DACu) {
        ctx->pc = 0x117DB0u;
        goto label_117db0;
    }
    ctx->pc = 0x117DA8u;
    {
        const bool branch_taken_0x117da8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x117da8) {
            ctx->pc = 0x117DF8u;
            goto label_117df8;
        }
    }
    ctx->pc = 0x117DB0u;
label_117db0:
    // 0x117db0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x117db0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117db4:
    // 0x117db4: 0x10000011  b           . + 4 + (0x11 << 2)
label_117db8:
    if (ctx->pc == 0x117DB8u) {
        ctx->pc = 0x117DBCu;
        goto label_117dbc;
    }
    ctx->pc = 0x117DB4u;
    {
        const bool branch_taken_0x117db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117db4) {
            ctx->pc = 0x117DFCu;
            goto label_117dfc;
        }
    }
    ctx->pc = 0x117DBCu;
label_117dbc:
    // 0x117dbc: 0xa3a0003f  sb          $zero, 0x3F($sp)
    ctx->pc = 0x117dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 63), (uint8_t)GPR_U32(ctx, 0));
label_117dc0:
    // 0x117dc0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x117dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_117dc4:
    // 0x117dc4: 0x27a5003f  addiu       $a1, $sp, 0x3F
    ctx->pc = 0x117dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 63));
label_117dc8:
    // 0x117dc8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x117dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117dcc:
    // 0x117dcc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x117dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117dd0:
    // 0x117dd0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x117dd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_117dd4:
    // 0x117dd4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x117dd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_117dd8:
    // 0x117dd8: 0x320f809  jalr        $t9
label_117ddc:
    if (ctx->pc == 0x117DDCu) {
        ctx->pc = 0x117DE0u;
        goto label_117de0;
    }
    ctx->pc = 0x117DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x117DE0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117DD8u, 0x117DE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117DE0u;
label_117de0:
    // 0x117de0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x117de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117de4:
    // 0x117de4: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_117de8:
    if (ctx->pc == 0x117DE8u) {
        ctx->pc = 0x117DECu;
        goto label_117dec;
    }
    ctx->pc = 0x117DE4u;
    {
        const bool branch_taken_0x117de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x117de4) {
            ctx->pc = 0x117DF8u;
            goto label_117df8;
        }
    }
    ctx->pc = 0x117DECu;
label_117dec:
    // 0x117dec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x117decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117df0:
    // 0x117df0: 0x10000002  b           . + 4 + (0x2 << 2)
label_117df4:
    if (ctx->pc == 0x117DF4u) {
        ctx->pc = 0x117DF8u;
        goto label_117df8;
    }
    ctx->pc = 0x117DF0u;
    {
        const bool branch_taken_0x117df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117df0) {
            ctx->pc = 0x117DFCu;
            goto label_117dfc;
        }
    }
    ctx->pc = 0x117DF8u;
label_117df8:
    // 0x117df8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117dfc:
    // 0x117dfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x117dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_117e00:
    // 0x117e00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x117e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_117e04:
    // 0x117e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x117e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_117e08:
    // 0x117e08: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x117e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_117e0c:
    // 0x117e0c: 0x3e00008  jr          $ra
label_117e10:
    if (ctx->pc == 0x117E10u) {
        ctx->pc = 0x117E14u;
        goto label_117e14;
    }
    ctx->pc = 0x117E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117E14u;
label_117e14:
    // 0x117e14: 0x0  nop
    ctx->pc = 0x117e14u;
    // NOP
label_117e18:
    // 0x117e18: 0x0  nop
    ctx->pc = 0x117e18u;
    // NOP
label_117e1c:
    // 0x117e1c: 0x0  nop
    ctx->pc = 0x117e1cu;
    // NOP
    ctx->pc = 0x117e20u;
}
