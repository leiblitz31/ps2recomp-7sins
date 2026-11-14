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

// Function: sub_0023FAF0
// Address: 0x23faf0 - 0x23fb90
void sub_0023FAF0_0x23faf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FAF0_0x23faf0");
#endif

    switch (ctx->pc) {
        case 0x23fb44u: goto label_23fb44;
        case 0x23fb74u: goto label_23fb74;
        default: break;
    }

    ctx->pc = 0x23faf0u;

    // 0x23faf0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23faf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23faf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23faf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23faf8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23faf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23fafc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x23fafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x23fb00: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x23fb00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x23fb04: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x23fb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x23fb08: 0xa3a80060  sb          $t0, 0x60($sp)
    ctx->pc = 0x23fb08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 8));
    // 0x23fb0c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23fb10: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x23fb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x23fb14: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x23fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23fb18: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23fb18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x23fb1c: 0x93a20060  lbu         $v0, 0x60($sp)
    ctx->pc = 0x23fb1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23fb20: 0xa3a2001c  sb          $v0, 0x1C($sp)
    ctx->pc = 0x23fb20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x23fb24: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23fb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23fb28: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23FB28u;
    {
        const bool branch_taken_0x23fb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fb28) {
            ctx->pc = 0x23FB58u;
            goto label_23fb58;
        }
    }
    ctx->pc = 0x23FB30u;
    // 0x23fb30: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fb34: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x23fb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x23fb38: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x23fb38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23fb3c: 0xc090000  jal         func_240000
    ctx->pc = 0x23FB3Cu;
    SET_GPR_U32(ctx, 31, 0x23FB44u);
    ctx->pc = 0x240000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240000u, 0x23FB3Cu, 0x23FB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB44u;
label_23fb44:
    // 0x23fb44: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fb48: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x23fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x23fb4c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x23fb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x23fb50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23FB50u;
    {
        const bool branch_taken_0x23fb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fb50) {
            ctx->pc = 0x23FB60u;
            goto label_23fb60;
        }
    }
    ctx->pc = 0x23FB58u;
label_23fb58:
    // 0x23fb58: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23fb5c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x23fb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_23fb60:
    // 0x23fb60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fb64: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x23fb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x23fb68: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23fb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23fb6c: 0xc08fee4  jal         func_23FB90
    ctx->pc = 0x23FB6Cu;
    SET_GPR_U32(ctx, 31, 0x23FB74u);
    ctx->pc = 0x23FB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB90u, 0x23FB6Cu, 0x23FB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB74u;
label_23fb74:
    // 0x23fb74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23fb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fb78: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x23fb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x23fb7c: 0x3e00008  jr          $ra
    ctx->pc = 0x23FB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FB84u;
    // 0x23fb84: 0x0  nop
    ctx->pc = 0x23fb84u;
    // NOP
    // 0x23fb88: 0x0  nop
    ctx->pc = 0x23fb88u;
    // NOP
    // 0x23fb8c: 0x0  nop
    ctx->pc = 0x23fb8cu;
    // NOP
    ctx->pc = 0x23fb90u;
}
