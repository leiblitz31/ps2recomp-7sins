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

// Function: sub_001E85B0
// Address: 0x1e85b0 - 0x1e8640
void sub_001E85B0_0x1e85b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E85B0_0x1e85b0");
#endif

    switch (ctx->pc) {
        case 0x1e85d0u: goto label_1e85d0;
        case 0x1e85e4u: goto label_1e85e4;
        case 0x1e85f8u: goto label_1e85f8;
        case 0x1e8620u: goto label_1e8620;
        default: break;
    }

    ctx->pc = 0x1e85b0u;

    // 0x1e85b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e85b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e85b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e85b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e85b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e85b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e85bc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e85bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e85c0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e85c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1e85c4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1e85c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e85c8: 0xc069ce8  jal         func_1A73A0
    ctx->pc = 0x1E85C8u;
    SET_GPR_U32(ctx, 31, 0x1E85D0u);
    ctx->pc = 0x1A73A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A73A0u, 0x1E85C8u, 0x1E85D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E85D0u;
label_1e85d0:
    // 0x1e85d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e85d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e85d4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1e85d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1e85d8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1e85d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e85dc: 0xc07a1b8  jal         func_1E86E0
    ctx->pc = 0x1E85DCu;
    SET_GPR_U32(ctx, 31, 0x1E85E4u);
    ctx->pc = 0x1E86E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E86E0u, 0x1E85DCu, 0x1E85E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E85E4u;
label_1e85e4:
    // 0x1e85e4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1e85e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e85e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e85e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e85ec: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x1e85ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1e85f0: 0xc07a190  jal         func_1E8640
    ctx->pc = 0x1E85F0u;
    SET_GPR_U32(ctx, 31, 0x1E85F8u);
    ctx->pc = 0x1E8640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8640u, 0x1E85F0u, 0x1E85F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E85F8u;
label_1e85f8:
    // 0x1e85f8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1e85f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e85fc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e85fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8600: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e8600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8604: 0xa3a00028  sb          $zero, 0x28($sp)
    ctx->pc = 0x1e8604u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e8608: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1e8608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e860c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1e860cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e8610: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1e8610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8614: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x1e8614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1e8618: 0xc079cf8  jal         func_1E73E0
    ctx->pc = 0x1E8618u;
    SET_GPR_U32(ctx, 31, 0x1E8620u);
    ctx->pc = 0x1E73E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E73E0u, 0x1E8618u, 0x1E8620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8620u;
label_1e8620:
    // 0x1e8620: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e8620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8624: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e8624u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1e8628: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e8628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e862c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e862cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8630: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8634: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e8634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e8638: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8640u;
}
