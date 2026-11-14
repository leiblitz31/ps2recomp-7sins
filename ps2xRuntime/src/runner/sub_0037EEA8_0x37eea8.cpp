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

// Function: sub_0037EEA8
// Address: 0x37eea8 - 0x37eed0
void sub_0037EEA8_0x37eea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037EEA8_0x37eea8");
#endif

    ctx->pc = 0x37eea8u;

    // 0x37eea8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x37eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x37eeac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37EEACu;
    {
        const bool branch_taken_0x37eeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37eeac) {
            ctx->pc = 0x37EEC8u;
            goto label_37eec8;
        }
    }
    ctx->pc = 0x37EEB4u;
    // 0x37eeb4: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x37eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x37eeb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37eebc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x37eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x37eec0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37eec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37eec4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x37eec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_37eec8:
    // 0x37eec8: 0x3e00008  jr          $ra
    ctx->pc = 0x37EEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37EECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EEC8u;
        // 0x37eecc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37EEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37EED0u;
}
