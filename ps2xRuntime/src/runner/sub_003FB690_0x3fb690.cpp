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

// Function: sub_003FB690
// Address: 0x3fb690 - 0x3fb6c0
void sub_003FB690_0x3fb690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FB690_0x3fb690");
#endif

    ctx->pc = 0x3fb690u;

    // 0x3fb690: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3FB690u;
    {
        const bool branch_taken_0x3fb690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fb690) {
            ctx->pc = 0x3FB6B8u;
            goto label_3fb6b8;
        }
    }
    ctx->pc = 0x3FB698u;
    // 0x3fb698: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FB698u;
    {
        const bool branch_taken_0x3fb698 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB698u;
        // 0x3fb69c: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb698) {
            ctx->pc = 0x3FB6B8u;
            goto label_3fb6b8;
        }
    }
    ctx->pc = 0x3FB6A0u;
    // 0x3fb6a0: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3fb6a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3fb6a4: 0xfca60090  sd          $a2, 0x90($a1)
    ctx->pc = 0x3fb6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 144), GPR_U64(ctx, 6));
    // 0x3fb6a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fb6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fb6ac: 0xfca70098  sd          $a3, 0x98($a1)
    ctx->pc = 0x3fb6acu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 152), GPR_U64(ctx, 7));
    // 0x3fb6b0: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x3fb6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x3fb6b4: 0xa0a800a0  sb          $t0, 0xA0($a1)
    ctx->pc = 0x3fb6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 160), (uint8_t)GPR_U32(ctx, 8));
label_3fb6b8:
    // 0x3fb6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3FB6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FB6C0u;
}
