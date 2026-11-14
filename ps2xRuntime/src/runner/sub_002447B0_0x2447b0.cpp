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

// Function: sub_002447B0
// Address: 0x2447b0 - 0x244870
void sub_002447B0_0x2447b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002447B0_0x2447b0");
#endif

    switch (ctx->pc) {
        case 0x2447d4u: goto label_2447d4;
        case 0x2447e4u: goto label_2447e4;
        case 0x2447f4u: goto label_2447f4;
        case 0x244808u: goto label_244808;
        case 0x244818u: goto label_244818;
        case 0x244824u: goto label_244824;
        case 0x244834u: goto label_244834;
        default: break;
    }

    ctx->pc = 0x2447b0u;

    // 0x2447b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2447b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2447b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2447b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2447b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2447b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2447bc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2447bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2447c0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2447c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2447c4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2447c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2447c8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2447c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2447cc: 0xc084ee4  jal         func_213B90
    ctx->pc = 0x2447CCu;
    SET_GPR_U32(ctx, 31, 0x2447D4u);
    ctx->pc = 0x213B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213B90u, 0x2447CCu, 0x2447D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2447D4u;
label_2447d4:
    // 0x2447d4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2447d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2447d8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2447d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2447dc: 0xc0422b8  jal         func_108AE0
    ctx->pc = 0x2447DCu;
    SET_GPR_U32(ctx, 31, 0x2447E4u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x2447DCu, 0x2447E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2447E4u;
label_2447e4:
    // 0x2447e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2447e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2447e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2447e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2447ec: 0xc08ec98  jal         func_23B260
    ctx->pc = 0x2447ECu;
    SET_GPR_U32(ctx, 31, 0x2447F4u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x2447ECu, 0x2447F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2447F4u;
label_2447f4:
    // 0x2447f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2447f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2447f8: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2447f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2447fc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2447fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x244800: 0xc0422b8  jal         func_108AE0
    ctx->pc = 0x244800u;
    SET_GPR_U32(ctx, 31, 0x244808u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x244800u, 0x244808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244808u;
label_244808:
    // 0x244808: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x244808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24480c: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x24480cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x244810: 0xc0422a8  jal         func_108AA0
    ctx->pc = 0x244810u;
    SET_GPR_U32(ctx, 31, 0x244818u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x244810u, 0x244818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244818u;
label_244818:
    // 0x244818: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x244818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24481c: 0xc0422b8  jal         func_108AE0
    ctx->pc = 0x24481Cu;
    SET_GPR_U32(ctx, 31, 0x244824u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x24481Cu, 0x244824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244824u;
label_244824:
    // 0x244824: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x244824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244828: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x244828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24482c: 0xc08ec98  jal         func_23B260
    ctx->pc = 0x24482Cu;
    SET_GPR_U32(ctx, 31, 0x244834u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x24482Cu, 0x244834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244834u;
label_244834:
    // 0x244834: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x244834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244838: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x244838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24483c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24483cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244840: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x244840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x244844: 0x3e00008  jr          $ra
    ctx->pc = 0x244844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24484Cu;
    // 0x24484c: 0x0  nop
    ctx->pc = 0x24484cu;
    // NOP
    // 0x244850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x244850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x244854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x244854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244858: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x244858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24485c: 0x3e00008  jr          $ra
    ctx->pc = 0x24485Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24485Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244864u;
    // 0x244864: 0x0  nop
    ctx->pc = 0x244864u;
    // NOP
    // 0x244868: 0x0  nop
    ctx->pc = 0x244868u;
    // NOP
    // 0x24486c: 0x0  nop
    ctx->pc = 0x24486cu;
    // NOP
    ctx->pc = 0x244870u;
}
