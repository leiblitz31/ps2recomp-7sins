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

// Function: sub_00254420
// Address: 0x254420 - 0x2544c0
void sub_00254420_0x254420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254420_0x254420");
#endif

    switch (ctx->pc) {
        case 0x25444cu: goto label_25444c;
        case 0x25445cu: goto label_25445c;
        case 0x254470u: goto label_254470;
        case 0x254480u: goto label_254480;
        case 0x254498u: goto label_254498;
        default: break;
    }

    ctx->pc = 0x254420u;

    // 0x254420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x254424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x254428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25442c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25442cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x254430: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x254430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254434: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x254434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x254438: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x254438u;
    {
        const bool branch_taken_0x254438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x254438) {
            ctx->pc = 0x2544A4u;
            goto label_2544a4;
        }
    }
    ctx->pc = 0x254440u;
    // 0x254440: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x254440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254444: 0xc095140  jal         func_254500
    ctx->pc = 0x254444u;
    SET_GPR_U32(ctx, 31, 0x25444Cu);
    ctx->pc = 0x254500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254500u, 0x254444u, 0x25444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25444Cu;
label_25444c:
    // 0x25444c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25444cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254450: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x254450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254454: 0xc095e74  jal         func_2579D0
    ctx->pc = 0x254454u;
    SET_GPR_U32(ctx, 31, 0x25445Cu);
    ctx->pc = 0x2579D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2579D0u, 0x254454u, 0x25445Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25445Cu;
label_25445c:
    // 0x25445c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25445cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254460: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x254460u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254464: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x254464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254468: 0xc095138  jal         func_2544E0
    ctx->pc = 0x254468u;
    SET_GPR_U32(ctx, 31, 0x254470u);
    ctx->pc = 0x2544E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544E0u, 0x254468u, 0x254470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254470u;
label_254470:
    // 0x254470: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x254470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x254474: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x254474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254478: 0xc095140  jal         func_254500
    ctx->pc = 0x254478u;
    SET_GPR_U32(ctx, 31, 0x254480u);
    ctx->pc = 0x254500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254500u, 0x254478u, 0x254480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254480u;
label_254480:
    // 0x254480: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x254480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x254484: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x254484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254488: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x254488u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25448c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25448cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254490: 0xc095130  jal         func_2544C0
    ctx->pc = 0x254490u;
    SET_GPR_U32(ctx, 31, 0x254498u);
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x254490u, 0x254498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254498u;
label_254498:
    // 0x254498: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x254498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x25449c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x25449cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2544a0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2544a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2544a4:
    // 0x2544a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2544a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2544a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2544a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2544ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2544acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2544b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2544B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2544B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2544B8u;
    // 0x2544b8: 0x0  nop
    ctx->pc = 0x2544b8u;
    // NOP
    // 0x2544bc: 0x0  nop
    ctx->pc = 0x2544bcu;
    // NOP
    ctx->pc = 0x2544c0u;
}
