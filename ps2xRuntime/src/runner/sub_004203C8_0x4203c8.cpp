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

// Function: sub_004203C8
// Address: 0x4203c8 - 0x420450
void sub_004203C8_0x4203c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004203C8_0x4203c8");
#endif

    ctx->pc = 0x4203c8u;

    // 0x4203c8: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x4203c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
    // 0x4203cc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4203ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x4203d0: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x4203d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x4203d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4203d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4203d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4203D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4203DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4203D8u;
        // 0x4203dc: 0x8c620020  lw          $v0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4203D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4203E0u;
    // 0x4203e0: 0x8f85be18  lw          $a1, -0x41E8($gp)
    ctx->pc = 0x4203e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
    // 0x4203e4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4203e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x4203e8: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x4203e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x4203ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4203ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4203f0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4203f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4203f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4203F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4203F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4203F4u;
        // 0x4203f8: 0xaca4002c  sw          $a0, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4203F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4203FCu;
    // 0x4203fc: 0x0  nop
    ctx->pc = 0x4203fcu;
    // NOP
    // 0x420400: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x420400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
    // 0x420404: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x420404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x420408: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x420408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x42040c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x42040cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x420410: 0x3e00008  jr          $ra
    ctx->pc = 0x420410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420410u;
        // 0x420414: 0x8c62002c  lw          $v0, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420418u;
    // 0x420418: 0x8f85be18  lw          $a1, -0x41E8($gp)
    ctx->pc = 0x420418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
    // 0x42041c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x42041cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x420420: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x420420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x420424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x420424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x420428: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x420428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x42042c: 0x3e00008  jr          $ra
    ctx->pc = 0x42042Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42042Cu;
        // 0x420430: 0xaca40030  sw          $a0, 0x30($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42042Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420434u;
    // 0x420434: 0x0  nop
    ctx->pc = 0x420434u;
    // NOP
    // 0x420438: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x420438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
    // 0x42043c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x42043cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x420440: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x420440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x420444: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x420444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x420448: 0x3e00008  jr          $ra
    ctx->pc = 0x420448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420448u;
        // 0x42044c: 0x8c620030  lw          $v0, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420450u;
}
