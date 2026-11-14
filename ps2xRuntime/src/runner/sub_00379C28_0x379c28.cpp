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

// Function: sub_00379C28
// Address: 0x379c28 - 0x379c48
void sub_00379C28_0x379c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379C28_0x379c28");
#endif

    ctx->pc = 0x379c28u;

    // 0x379c28: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x379c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x379c2c: 0x8c46ac4c  lw          $a2, -0x53B4($v0)
    ctx->pc = 0x379c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5DAC4Cu));
    // 0x379c30: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x379c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379c34: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x379c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x379c38: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x379c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x379c3c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x379c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x379c40: 0x3e00008  jr          $ra
    ctx->pc = 0x379C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379C40u;
        // 0x379c44: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379C48u;
}
