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

// Function: sub_0040AB18
// Address: 0x40ab18 - 0x40ab38
void sub_0040AB18_0x40ab18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040AB18_0x40ab18");
#endif

    ctx->pc = 0x40ab18u;

    // 0x40ab18: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x40AB18u;
    {
        const bool branch_taken_0x40ab18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AB18u;
        // 0x40ab1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ab18) {
            ctx->pc = 0x40AB30u;
            goto label_40ab30;
        }
    }
    ctx->pc = 0x40AB20u;
    // 0x40ab20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x40ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40ab24: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x40ab24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x40ab28: 0x3e00008  jr          $ra
    ctx->pc = 0x40AB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AB28u;
        // 0x40ab2c: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40AB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40AB30u;
label_40ab30:
    // 0x40ab30: 0x3e00008  jr          $ra
    ctx->pc = 0x40AB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AB30u;
        // 0x40ab34: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40AB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40AB38u;
}
