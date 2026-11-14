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

// Function: sub_00280640
// Address: 0x280640 - 0x2806e0
void sub_00280640_0x280640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280640_0x280640");
#endif

    switch (ctx->pc) {
        case 0x28066cu: goto label_28066c;
        case 0x28067cu: goto label_28067c;
        case 0x280690u: goto label_280690;
        case 0x2806a0u: goto label_2806a0;
        case 0x2806b8u: goto label_2806b8;
        default: break;
    }

    ctx->pc = 0x280640u;

    // 0x280640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x280640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x280644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x280644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x280648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x280648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28064c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28064cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x280650: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x280650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280654: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x280654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x280658: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x280658u;
    {
        const bool branch_taken_0x280658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x280658) {
            ctx->pc = 0x2806C4u;
            goto label_2806c4;
        }
    }
    ctx->pc = 0x280660u;
    // 0x280660: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x280660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280664: 0xc0a01c8  jal         func_280720
    ctx->pc = 0x280664u;
    SET_GPR_U32(ctx, 31, 0x28066Cu);
    ctx->pc = 0x280720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280720u, 0x280664u, 0x28066Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28066Cu;
label_28066c:
    // 0x28066c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28066cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280670: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x280670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280674: 0xc0a0c6c  jal         func_2831B0
    ctx->pc = 0x280674u;
    SET_GPR_U32(ctx, 31, 0x28067Cu);
    ctx->pc = 0x2831B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2831B0u, 0x280674u, 0x28067Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28067Cu;
label_28067c:
    // 0x28067c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x28067cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280680: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x280680u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280684: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x280684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280688: 0xc0a01c0  jal         func_280700
    ctx->pc = 0x280688u;
    SET_GPR_U32(ctx, 31, 0x280690u);
    ctx->pc = 0x280700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280700u, 0x280688u, 0x280690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280690u;
label_280690:
    // 0x280690: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x280690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x280694: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x280694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280698: 0xc0a01c8  jal         func_280720
    ctx->pc = 0x280698u;
    SET_GPR_U32(ctx, 31, 0x2806A0u);
    ctx->pc = 0x280720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280720u, 0x280698u, 0x2806A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2806A0u;
label_2806a0:
    // 0x2806a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2806a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2806a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2806a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2806a8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2806a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2806ac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2806acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2806b0: 0xc0a01b8  jal         func_2806E0
    ctx->pc = 0x2806B0u;
    SET_GPR_U32(ctx, 31, 0x2806B8u);
    ctx->pc = 0x2806E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2806E0u, 0x2806B0u, 0x2806B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2806B8u;
label_2806b8:
    // 0x2806b8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2806b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2806bc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2806bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2806c0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2806c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2806c4:
    // 0x2806c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2806c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2806c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2806c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2806cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2806ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2806d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2806D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2806D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2806D8u;
    // 0x2806d8: 0x0  nop
    ctx->pc = 0x2806d8u;
    // NOP
    // 0x2806dc: 0x0  nop
    ctx->pc = 0x2806dcu;
    // NOP
    ctx->pc = 0x2806e0u;
}
