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

// Function: sub_003447E8
// Address: 0x3447e8 - 0x344830
void sub_003447E8_0x3447e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003447E8_0x3447e8");
#endif

    ctx->pc = 0x3447e8u;

    // 0x3447e8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3447E8u;
    {
        const bool branch_taken_0x3447e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3447e8) {
            ctx->pc = 0x3447F8u;
            goto label_3447f8;
        }
    }
    ctx->pc = 0x3447F0u;
    // 0x3447f0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3447f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3447f4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3447f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3447f8:
    // 0x3447f8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3447F8u;
    {
        const bool branch_taken_0x3447f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3447f8) {
            ctx->pc = 0x344808u;
            goto label_344808;
        }
    }
    ctx->pc = 0x344800u;
    // 0x344800: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x344800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x344804: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x344804u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_344808:
    // 0x344808: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x344808u;
    {
        const bool branch_taken_0x344808 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x344808) {
            ctx->pc = 0x344818u;
            goto label_344818;
        }
    }
    ctx->pc = 0x344810u;
    // 0x344810: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x344810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x344814: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x344814u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_344818:
    // 0x344818: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x344818u;
    {
        const bool branch_taken_0x344818 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x344818) {
            ctx->pc = 0x344828u;
            goto label_344828;
        }
    }
    ctx->pc = 0x344820u;
    // 0x344820: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x344820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x344824: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x344824u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_344828:
    // 0x344828: 0x3e00008  jr          $ra
    ctx->pc = 0x344828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344828u;
        // 0x34482c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344830u;
}
