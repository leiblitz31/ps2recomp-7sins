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

// Function: sub_001E3640
// Address: 0x1e3640 - 0x1e36a0
void sub_001E3640_0x1e3640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3640_0x1e3640");
#endif

    switch (ctx->pc) {
        case 0x1e3678u: goto label_1e3678;
        case 0x1e3684u: goto label_1e3684;
        default: break;
    }

    ctx->pc = 0x1e3640u;

    // 0x1e3640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e3640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e3644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3648: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e3648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e364c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e364cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3650: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e3650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e3654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3658: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1e3658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e365c: 0x431014  dsllv       $v0, $v1, $v0
    ctx->pc = 0x1e365cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x1e3660: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1e3660u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e3664: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1e3664u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1e3668: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x1e3668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1e366c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1e366cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e3670: 0xc07886c  jal         func_1E21B0
    ctx->pc = 0x1E3670u;
    SET_GPR_U32(ctx, 31, 0x1E3678u);
    ctx->pc = 0x1E21B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E21B0u, 0x1E3670u, 0x1E3678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3678u;
label_1e3678:
    // 0x1e3678: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e3678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e367c: 0xc078ae0  jal         func_1E2B80
    ctx->pc = 0x1E367Cu;
    SET_GPR_U32(ctx, 31, 0x1E3684u);
    ctx->pc = 0x1E2B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2B80u, 0x1E367Cu, 0x1E3684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3684u;
label_1e3684:
    // 0x1e3684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3688: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e3688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e368c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E368Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E368Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3694u;
    // 0x1e3694: 0x0  nop
    ctx->pc = 0x1e3694u;
    // NOP
    // 0x1e3698: 0x0  nop
    ctx->pc = 0x1e3698u;
    // NOP
    // 0x1e369c: 0x0  nop
    ctx->pc = 0x1e369cu;
    // NOP
    ctx->pc = 0x1e36a0u;
}
