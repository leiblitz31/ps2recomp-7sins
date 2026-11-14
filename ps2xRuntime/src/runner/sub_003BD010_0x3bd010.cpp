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

// Function: sub_003BD010
// Address: 0x3bd010 - 0x3bd048
void sub_003BD010_0x3bd010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD010_0x3bd010");
#endif

    switch (ctx->pc) {
        case 0x3bd038u: goto label_3bd038;
        default: break;
    }

    ctx->pc = 0x3bd010u;

    // 0x3bd010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3bd010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3bd014: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3bd014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd018: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bd018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3bd01c: 0x24a5004c  addiu       $a1, $a1, 0x4C
    ctx->pc = 0x3bd01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
    // 0x3bd020: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x3bd020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x3bd024: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x3bd024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x3bd028: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x3bd028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3bd02c: 0x3012  mflo        $a2
    ctx->pc = 0x3bd02cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3bd030: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3BD030u;
    SET_GPR_U32(ctx, 31, 0x3BD038u);
    ctx->pc = 0x3BD034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD030u;
    // 0x3bd034: 0x2444004c  addiu       $a0, $v0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3BD030u, 0x3BD038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD038u;
label_3bd038:
    // 0x3bd038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bd038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bd03c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bd03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bd040: 0x3e00008  jr          $ra
    ctx->pc = 0x3BD040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD040u;
        // 0x3bd044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD048u;
}
