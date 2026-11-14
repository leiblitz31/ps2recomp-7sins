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

// Function: sub_0039CA58
// Address: 0x39ca58 - 0x39ca88
void sub_0039CA58_0x39ca58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CA58_0x39ca58");
#endif

    ctx->pc = 0x39ca58u;

    // 0x39ca58: 0x8f85bd68  lw          $a1, -0x4298($gp)
    ctx->pc = 0x39ca58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950248)));
    // 0x39ca5c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x39ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x39ca60: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x39ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x39ca64: 0x8f83a9e8  lw          $v1, -0x5618($gp)
    ctx->pc = 0x39ca64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945256)));
    // 0x39ca68: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x39ca68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x39ca6c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x39ca6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ca70: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x39ca70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x39ca74: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x39ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39ca78: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x39ca78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x39ca7c: 0x3e00008  jr          $ra
    ctx->pc = 0x39CA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CA7Cu;
        // 0x39ca80: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CA84u;
    // 0x39ca84: 0x0  nop
    ctx->pc = 0x39ca84u;
    // NOP
    ctx->pc = 0x39ca88u;
}
