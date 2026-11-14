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

// Function: sub_00281D90
// Address: 0x281d90 - 0x281e40
void sub_00281D90_0x281d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281D90_0x281d90");
#endif

    switch (ctx->pc) {
        case 0x281d90u: goto label_281d90;
        case 0x281d94u: goto label_281d94;
        case 0x281d98u: goto label_281d98;
        case 0x281d9cu: goto label_281d9c;
        case 0x281da0u: goto label_281da0;
        case 0x281da4u: goto label_281da4;
        case 0x281da8u: goto label_281da8;
        case 0x281dacu: goto label_281dac;
        case 0x281db0u: goto label_281db0;
        case 0x281db4u: goto label_281db4;
        case 0x281db8u: goto label_281db8;
        case 0x281dbcu: goto label_281dbc;
        case 0x281dc0u: goto label_281dc0;
        case 0x281dc4u: goto label_281dc4;
        case 0x281dc8u: goto label_281dc8;
        case 0x281dccu: goto label_281dcc;
        case 0x281dd0u: goto label_281dd0;
        case 0x281dd4u: goto label_281dd4;
        case 0x281dd8u: goto label_281dd8;
        case 0x281ddcu: goto label_281ddc;
        case 0x281de0u: goto label_281de0;
        case 0x281de4u: goto label_281de4;
        case 0x281de8u: goto label_281de8;
        case 0x281decu: goto label_281dec;
        case 0x281df0u: goto label_281df0;
        case 0x281df4u: goto label_281df4;
        case 0x281df8u: goto label_281df8;
        case 0x281dfcu: goto label_281dfc;
        case 0x281e00u: goto label_281e00;
        case 0x281e04u: goto label_281e04;
        case 0x281e08u: goto label_281e08;
        case 0x281e0cu: goto label_281e0c;
        case 0x281e10u: goto label_281e10;
        case 0x281e14u: goto label_281e14;
        case 0x281e18u: goto label_281e18;
        case 0x281e1cu: goto label_281e1c;
        case 0x281e20u: goto label_281e20;
        case 0x281e24u: goto label_281e24;
        case 0x281e28u: goto label_281e28;
        case 0x281e2cu: goto label_281e2c;
        case 0x281e30u: goto label_281e30;
        case 0x281e34u: goto label_281e34;
        case 0x281e38u: goto label_281e38;
        case 0x281e3cu: goto label_281e3c;
        default: break;
    }

    ctx->pc = 0x281d90u;

label_281d90:
    // 0x281d90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x281d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_281d94:
    // 0x281d94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x281d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_281d98:
    // 0x281d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x281d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_281d9c:
    // 0x281d9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_281da0:
    // 0x281da0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x281da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_281da4:
    // 0x281da4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x281da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_281da8:
    // 0x281da8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_281dac:
    if (ctx->pc == 0x281DACu) {
        ctx->pc = 0x281DB0u;
        goto label_281db0;
    }
    ctx->pc = 0x281DA8u;
    {
        const bool branch_taken_0x281da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281da8) {
            ctx->pc = 0x281DB8u;
            goto label_281db8;
        }
    }
    ctx->pc = 0x281DB0u;
label_281db0:
    // 0x281db0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_281db4:
    // 0x281db4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x281db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_281db8:
    // 0x281db8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x281db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_281dbc:
    // 0x281dbc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x281dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_281dc0:
    // 0x281dc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_281dc4:
    // 0x281dc4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x281dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_281dc8:
    // 0x281dc8: 0xc119b68  jal         func_466DA0
label_281dcc:
    if (ctx->pc == 0x281DCCu) {
        ctx->pc = 0x281DD0u;
        goto label_281dd0;
    }
    ctx->pc = 0x281DC8u;
    SET_GPR_U32(ctx, 31, 0x281DD0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x281DC8u, 0x281DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281DD0u;
label_281dd0:
    // 0x281dd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x281dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_281dd4:
    // 0x281dd4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_281dd8:
    if (ctx->pc == 0x281DD8u) {
        ctx->pc = 0x281DDCu;
        goto label_281ddc;
    }
    ctx->pc = 0x281DD4u;
    {
        const bool branch_taken_0x281dd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x281dd4) {
            ctx->pc = 0x281DE8u;
            goto label_281de8;
        }
    }
    ctx->pc = 0x281DDCu;
label_281ddc:
    // 0x281ddc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x281ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_281de0:
    // 0x281de0: 0x1000000e  b           . + 4 + (0xE << 2)
label_281de4:
    if (ctx->pc == 0x281DE4u) {
        ctx->pc = 0x281DE8u;
        goto label_281de8;
    }
    ctx->pc = 0x281DE0u;
    {
        const bool branch_taken_0x281de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281de0) {
            ctx->pc = 0x281E1Cu;
            goto label_281e1c;
        }
    }
    ctx->pc = 0x281DE8u;
label_281de8:
    // 0x281de8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x281de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281dec:
    // 0x281dec: 0xc0ba088  jal         func_2E8220
label_281df0:
    if (ctx->pc == 0x281DF0u) {
        ctx->pc = 0x281DF4u;
        goto label_281df4;
    }
    ctx->pc = 0x281DECu;
    SET_GPR_U32(ctx, 31, 0x281DF4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x281DECu, 0x281DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281DF4u;
label_281df4:
    // 0x281df4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x281df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_281df8:
    // 0x281df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_281dfc:
    // 0x281dfc: 0xc0ba088  jal         func_2E8220
label_281e00:
    if (ctx->pc == 0x281E00u) {
        ctx->pc = 0x281E04u;
        goto label_281e04;
    }
    ctx->pc = 0x281DFCu;
    SET_GPR_U32(ctx, 31, 0x281E04u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x281DFCu, 0x281E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281E04u;
label_281e04:
    // 0x281e04: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_281e08:
    if (ctx->pc == 0x281E08u) {
        ctx->pc = 0x281E0Cu;
        goto label_281e0c;
    }
    ctx->pc = 0x281E04u;
    {
        const bool branch_taken_0x281e04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x281e04) {
            ctx->pc = 0x281DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281db8;
        }
    }
    ctx->pc = 0x281E0Cu;
label_281e0c:
    // 0x281e0c: 0x200f809  jalr        $s0
label_281e10:
    if (ctx->pc == 0x281E10u) {
        ctx->pc = 0x281E14u;
        goto label_281e14;
    }
    ctx->pc = 0x281E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x281E14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281E0Cu, 0x281E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x281E14u;
label_281e14:
    // 0x281e14: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_281e18:
    if (ctx->pc == 0x281E18u) {
        ctx->pc = 0x281E1Cu;
        goto label_281e1c;
    }
    ctx->pc = 0x281E14u;
    {
        const bool branch_taken_0x281e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281e14) {
            ctx->pc = 0x281DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281db8;
        }
    }
    ctx->pc = 0x281E1Cu;
label_281e1c:
    // 0x281e1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x281e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_281e20:
    // 0x281e20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x281e20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_281e24:
    // 0x281e24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_281e28:
    // 0x281e28: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x281e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_281e2c:
    // 0x281e2c: 0x3e00008  jr          $ra
label_281e30:
    if (ctx->pc == 0x281E30u) {
        ctx->pc = 0x281E34u;
        goto label_281e34;
    }
    ctx->pc = 0x281E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281E34u;
label_281e34:
    // 0x281e34: 0x0  nop
    ctx->pc = 0x281e34u;
    // NOP
label_281e38:
    // 0x281e38: 0x0  nop
    ctx->pc = 0x281e38u;
    // NOP
label_281e3c:
    // 0x281e3c: 0x0  nop
    ctx->pc = 0x281e3cu;
    // NOP
    ctx->pc = 0x281e40u;
}
