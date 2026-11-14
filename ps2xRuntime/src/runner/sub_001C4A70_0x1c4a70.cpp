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

// Function: sub_001C4A70
// Address: 0x1c4a70 - 0x1c4b00
void sub_001C4A70_0x1c4a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4A70_0x1c4a70");
#endif

    switch (ctx->pc) {
        case 0x1c4a90u: goto label_1c4a90;
        case 0x1c4aa4u: goto label_1c4aa4;
        case 0x1c4ab8u: goto label_1c4ab8;
        case 0x1c4ae0u: goto label_1c4ae0;
        default: break;
    }

    ctx->pc = 0x1c4a70u;

    // 0x1c4a70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c4a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c4a74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c4a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c4a78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c4a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c4a7c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1c4a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1c4a80: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1c4a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1c4a84: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1c4a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c4a88: 0xc044598  jal         func_111660
    ctx->pc = 0x1C4A88u;
    SET_GPR_U32(ctx, 31, 0x1C4A90u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x1C4A88u, 0x1C4A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4A90u;
label_1c4a90:
    // 0x1c4a90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c4a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a94: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1c4a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1c4a98: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1c4a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c4a9c: 0xc0712e8  jal         func_1C4BA0
    ctx->pc = 0x1C4A9Cu;
    SET_GPR_U32(ctx, 31, 0x1C4AA4u);
    ctx->pc = 0x1C4BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4BA0u, 0x1C4A9Cu, 0x1C4AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4AA4u;
label_1c4aa4:
    // 0x1c4aa4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1c4aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4aa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c4aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4aac: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x1c4aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1c4ab0: 0xc0712c0  jal         func_1C4B00
    ctx->pc = 0x1C4AB0u;
    SET_GPR_U32(ctx, 31, 0x1C4AB8u);
    ctx->pc = 0x1C4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4B00u, 0x1C4AB0u, 0x1C4AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4AB8u;
label_1c4ab8:
    // 0x1c4ab8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1c4ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c4abc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1c4abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c4ac0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c4ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4ac4: 0xa3a00028  sb          $zero, 0x28($sp)
    ctx->pc = 0x1c4ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4ac8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1c4ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c4acc: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1c4accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c4ad0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1c4ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4ad4: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x1c4ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1c4ad8: 0xc07104c  jal         func_1C4130
    ctx->pc = 0x1C4AD8u;
    SET_GPR_U32(ctx, 31, 0x1C4AE0u);
    ctx->pc = 0x1C4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4130u, 0x1C4AD8u, 0x1C4AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4AE0u;
label_1c4ae0:
    // 0x1c4ae0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1c4ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4ae4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1c4ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1c4ae8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c4ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4aec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4af0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c4af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4af4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1c4af4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c4af8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4B00u;
}
