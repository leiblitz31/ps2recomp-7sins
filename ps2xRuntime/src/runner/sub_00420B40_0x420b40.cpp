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

// Function: sub_00420B40
// Address: 0x420b40 - 0x420b60
void sub_00420B40_0x420b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420B40_0x420b40");
#endif

    ctx->pc = 0x420b40u;

    // 0x420b40: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x420b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
    // 0x420b44: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x420b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x420b48: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x420b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x420b4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x420b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x420b50: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x420b50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420b54: 0x3e00008  jr          $ra
    ctx->pc = 0x420B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420B54u;
        // 0x420b58: 0xac640010  sw          $a0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420B5Cu;
    // 0x420b5c: 0x0  nop
    ctx->pc = 0x420b5cu;
    // NOP
    ctx->pc = 0x420b60u;
}
