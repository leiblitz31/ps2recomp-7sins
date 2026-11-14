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

// Function: sub_002D8D90
// Address: 0x2d8d90 - 0x2d8e30
void sub_002D8D90_0x2d8d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8D90_0x2d8d90");
#endif

    switch (ctx->pc) {
        case 0x2d8d90u: goto label_2d8d90;
        case 0x2d8d94u: goto label_2d8d94;
        case 0x2d8d98u: goto label_2d8d98;
        case 0x2d8d9cu: goto label_2d8d9c;
        case 0x2d8da0u: goto label_2d8da0;
        case 0x2d8da4u: goto label_2d8da4;
        case 0x2d8da8u: goto label_2d8da8;
        case 0x2d8dacu: goto label_2d8dac;
        case 0x2d8db0u: goto label_2d8db0;
        case 0x2d8db4u: goto label_2d8db4;
        case 0x2d8db8u: goto label_2d8db8;
        case 0x2d8dbcu: goto label_2d8dbc;
        case 0x2d8dc0u: goto label_2d8dc0;
        case 0x2d8dc4u: goto label_2d8dc4;
        case 0x2d8dc8u: goto label_2d8dc8;
        case 0x2d8dccu: goto label_2d8dcc;
        case 0x2d8dd0u: goto label_2d8dd0;
        case 0x2d8dd4u: goto label_2d8dd4;
        case 0x2d8dd8u: goto label_2d8dd8;
        case 0x2d8ddcu: goto label_2d8ddc;
        case 0x2d8de0u: goto label_2d8de0;
        case 0x2d8de4u: goto label_2d8de4;
        case 0x2d8de8u: goto label_2d8de8;
        case 0x2d8decu: goto label_2d8dec;
        case 0x2d8df0u: goto label_2d8df0;
        case 0x2d8df4u: goto label_2d8df4;
        case 0x2d8df8u: goto label_2d8df8;
        case 0x2d8dfcu: goto label_2d8dfc;
        case 0x2d8e00u: goto label_2d8e00;
        case 0x2d8e04u: goto label_2d8e04;
        case 0x2d8e08u: goto label_2d8e08;
        case 0x2d8e0cu: goto label_2d8e0c;
        case 0x2d8e10u: goto label_2d8e10;
        case 0x2d8e14u: goto label_2d8e14;
        case 0x2d8e18u: goto label_2d8e18;
        case 0x2d8e1cu: goto label_2d8e1c;
        case 0x2d8e20u: goto label_2d8e20;
        case 0x2d8e24u: goto label_2d8e24;
        case 0x2d8e28u: goto label_2d8e28;
        case 0x2d8e2cu: goto label_2d8e2c;
        default: break;
    }

    ctx->pc = 0x2d8d90u;

label_2d8d90:
    // 0x2d8d90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d8d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2d8d94:
    // 0x2d8d94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d8d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d8d98:
    // 0x2d8d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d8d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d8d9c:
    // 0x2d8d9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d8d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d8da0:
    // 0x2d8da0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2d8da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2d8da4:
    // 0x2d8da4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d8da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2d8da8:
    // 0x2d8da8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2d8dac:
    if (ctx->pc == 0x2D8DACu) {
        ctx->pc = 0x2D8DB0u;
        goto label_2d8db0;
    }
    ctx->pc = 0x2D8DA8u;
    {
        const bool branch_taken_0x2d8da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8da8) {
            ctx->pc = 0x2D8DB8u;
            goto label_2d8db8;
        }
    }
    ctx->pc = 0x2D8DB0u;
label_2d8db0:
    // 0x2d8db0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d8db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d8db4:
    // 0x2d8db4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2d8db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2d8db8:
    // 0x2d8db8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d8db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2d8dbc:
    // 0x2d8dbc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2d8dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2d8dc0:
    // 0x2d8dc0: 0xc119b68  jal         func_466DA0
label_2d8dc4:
    if (ctx->pc == 0x2D8DC4u) {
        ctx->pc = 0x2D8DC8u;
        goto label_2d8dc8;
    }
    ctx->pc = 0x2D8DC0u;
    SET_GPR_U32(ctx, 31, 0x2D8DC8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2D8DC0u, 0x2D8DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8DC8u;
label_2d8dc8:
    // 0x2d8dc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d8dc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8dcc:
    // 0x2d8dcc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2d8dd0:
    if (ctx->pc == 0x2D8DD0u) {
        ctx->pc = 0x2D8DD4u;
        goto label_2d8dd4;
    }
    ctx->pc = 0x2D8DCCu;
    {
        const bool branch_taken_0x2d8dcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8dcc) {
            ctx->pc = 0x2D8DE0u;
            goto label_2d8de0;
        }
    }
    ctx->pc = 0x2D8DD4u;
label_2d8dd4:
    // 0x2d8dd4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d8dd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d8dd8:
    // 0x2d8dd8: 0x1000000e  b           . + 4 + (0xE << 2)
label_2d8ddc:
    if (ctx->pc == 0x2D8DDCu) {
        ctx->pc = 0x2D8DE0u;
        goto label_2d8de0;
    }
    ctx->pc = 0x2D8DD8u;
    {
        const bool branch_taken_0x2d8dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8dd8) {
            ctx->pc = 0x2D8E14u;
            goto label_2d8e14;
        }
    }
    ctx->pc = 0x2D8DE0u;
label_2d8de0:
    // 0x2d8de0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d8de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8de4:
    // 0x2d8de4: 0xc0ba088  jal         func_2E8220
label_2d8de8:
    if (ctx->pc == 0x2D8DE8u) {
        ctx->pc = 0x2D8DECu;
        goto label_2d8dec;
    }
    ctx->pc = 0x2D8DE4u;
    SET_GPR_U32(ctx, 31, 0x2D8DECu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2D8DE4u, 0x2D8DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8DECu;
label_2d8dec:
    // 0x2d8dec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d8decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8df0:
    // 0x2d8df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d8df4:
    // 0x2d8df4: 0xc0ba088  jal         func_2E8220
label_2d8df8:
    if (ctx->pc == 0x2D8DF8u) {
        ctx->pc = 0x2D8DFCu;
        goto label_2d8dfc;
    }
    ctx->pc = 0x2D8DF4u;
    SET_GPR_U32(ctx, 31, 0x2D8DFCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2D8DF4u, 0x2D8DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8DFCu;
label_2d8dfc:
    // 0x2d8dfc: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2d8e00:
    if (ctx->pc == 0x2D8E00u) {
        ctx->pc = 0x2D8E04u;
        goto label_2d8e04;
    }
    ctx->pc = 0x2D8DFCu;
    {
        const bool branch_taken_0x2d8dfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8dfc) {
            ctx->pc = 0x2D8DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8db8;
        }
    }
    ctx->pc = 0x2D8E04u;
label_2d8e04:
    // 0x2d8e04: 0x200f809  jalr        $s0
label_2d8e08:
    if (ctx->pc == 0x2D8E08u) {
        ctx->pc = 0x2D8E0Cu;
        goto label_2d8e0c;
    }
    ctx->pc = 0x2D8E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2D8E0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8E04u, 0x2D8E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D8E0Cu;
label_2d8e0c:
    // 0x2d8e0c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2d8e10:
    if (ctx->pc == 0x2D8E10u) {
        ctx->pc = 0x2D8E14u;
        goto label_2d8e14;
    }
    ctx->pc = 0x2D8E0Cu;
    {
        const bool branch_taken_0x2d8e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8e0c) {
            ctx->pc = 0x2D8DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8db8;
        }
    }
    ctx->pc = 0x2D8E14u;
label_2d8e14:
    // 0x2d8e14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d8e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d8e18:
    // 0x2d8e18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d8e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d8e1c:
    // 0x2d8e1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8e20:
    // 0x2d8e20: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2d8e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2d8e24:
    // 0x2d8e24: 0x3e00008  jr          $ra
label_2d8e28:
    if (ctx->pc == 0x2D8E28u) {
        ctx->pc = 0x2D8E2Cu;
        goto label_2d8e2c;
    }
    ctx->pc = 0x2D8E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8E2Cu;
label_2d8e2c:
    // 0x2d8e2c: 0x0  nop
    ctx->pc = 0x2d8e2cu;
    // NOP
    ctx->pc = 0x2d8e30u;
}
