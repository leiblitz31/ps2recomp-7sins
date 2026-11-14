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

// Function: sub_00109450
// Address: 0x109450 - 0x109490
void sub_00109450_0x109450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109450_0x109450");
#endif

    ctx->pc = 0x109450u;

    // 0x109450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x109450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x109454: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x109454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x109458: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x109458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10945c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10945cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109460: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109460u;
    {
        const bool branch_taken_0x109460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109460) {
            ctx->pc = 0x109474u;
            goto label_109474;
        }
    }
    ctx->pc = 0x109468u;
    // 0x109468: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x109468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10946c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10946Cu;
    {
        const bool branch_taken_0x10946c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10946c) {
            ctx->pc = 0x10947Cu;
            goto label_10947c;
        }
    }
    ctx->pc = 0x109474u;
label_109474:
    // 0x109474: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x109474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109478: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x109478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_10947c:
    // 0x10947c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10947cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x109480: 0x3e00008  jr          $ra
    ctx->pc = 0x109480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109488u;
    // 0x109488: 0x0  nop
    ctx->pc = 0x109488u;
    // NOP
    // 0x10948c: 0x0  nop
    ctx->pc = 0x10948cu;
    // NOP
    ctx->pc = 0x109490u;
}
