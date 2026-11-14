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

// Function: sub_0039A768
// Address: 0x39a768 - 0x39a788
void sub_0039A768_0x39a768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A768_0x39a768");
#endif

    ctx->pc = 0x39a768u;

    // 0x39a768: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x39A768u;
    {
        const bool branch_taken_0x39a768 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a768) {
            ctx->pc = 0x39A76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A768u;
            // 0x39a76c: 0xac850068  sw          $a1, 0x68($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A77Cu;
            goto label_39a77c;
        }
    }
    ctx->pc = 0x39A770u;
    // 0x39a770: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x39a770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x39a774: 0x2445a058  addiu       $a1, $v0, -0x5FA8
    ctx->pc = 0x39a774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942808));
    // 0x39a778: 0xac850068  sw          $a1, 0x68($a0)
    ctx->pc = 0x39a778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
label_39a77c:
    // 0x39a77c: 0x3e00008  jr          $ra
    ctx->pc = 0x39A77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A77Cu;
        // 0x39a780: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A784u;
    // 0x39a784: 0x0  nop
    ctx->pc = 0x39a784u;
    // NOP
    ctx->pc = 0x39a788u;
}
