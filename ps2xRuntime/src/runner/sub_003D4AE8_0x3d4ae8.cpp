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

// Function: sub_003D4AE8
// Address: 0x3d4ae8 - 0x3d4b40
void sub_003D4AE8_0x3d4ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4AE8_0x3d4ae8");
#endif

    ctx->pc = 0x3d4ae8u;

    // 0x3d4ae8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x3d4ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3d4aec: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3d4aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3d4af0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D4AF0u;
    {
        const bool branch_taken_0x3d4af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4AF0u;
        // 0x3d4af4: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4af0) {
            ctx->pc = 0x3D4B04u;
            goto label_3d4b04;
        }
    }
    ctx->pc = 0x3D4AF8u;
    // 0x3d4af8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d4af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d4afc: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4AFCu;
        // 0x3d4b00: 0xac64b204  sw          $a0, -0x4DFC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294947332), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4B04u;
label_3d4b04:
    // 0x3d4b04: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4B04u;
        // 0x3d4b08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4B0Cu;
    // 0x3d4b0c: 0x0  nop
    ctx->pc = 0x3d4b0cu;
    // NOP
    // 0x3d4b10: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d4b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3d4b14: 0x2445b1e0  addiu       $a1, $v0, -0x4E20
    ctx->pc = 0x3d4b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
    // 0x3d4b18: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3d4b18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1E4u));
    // 0x3d4b1c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3d4b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3d4b20: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3d4b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3d4b24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D4B24u;
    {
        const bool branch_taken_0x3d4b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d4b24) {
            ctx->pc = 0x3D4B34u;
            goto label_3d4b34;
        }
    }
    ctx->pc = 0x3D4B2Cu;
    // 0x3d4b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4B2Cu;
        // 0x3d4b30: 0x8ca20024  lw          $v0, 0x24($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4B34u;
label_3d4b34:
    // 0x3d4b34: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4B3Cu;
    // 0x3d4b3c: 0x0  nop
    ctx->pc = 0x3d4b3cu;
    // NOP
    ctx->pc = 0x3d4b40u;
}
