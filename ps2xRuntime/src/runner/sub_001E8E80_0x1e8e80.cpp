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

// Function: sub_001E8E80
// Address: 0x1e8e80 - 0x1e8f10
void sub_001E8E80_0x1e8e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8E80_0x1e8e80");
#endif

    switch (ctx->pc) {
        case 0x1e8ea0u: goto label_1e8ea0;
        case 0x1e8eb4u: goto label_1e8eb4;
        case 0x1e8ec8u: goto label_1e8ec8;
        case 0x1e8ef0u: goto label_1e8ef0;
        default: break;
    }

    ctx->pc = 0x1e8e80u;

    // 0x1e8e80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e8e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e8e84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e8e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e8e88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e8e8c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e8e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e8e90: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e8e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1e8e94: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1e8e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8e98: 0xc078618  jal         func_1E1860
    ctx->pc = 0x1E8E98u;
    SET_GPR_U32(ctx, 31, 0x1E8EA0u);
    ctx->pc = 0x1E1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1860u, 0x1E8E98u, 0x1E8EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8EA0u;
label_1e8ea0:
    // 0x1e8ea0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e8ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ea4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1e8ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1e8ea8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1e8ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8eac: 0xc07a428  jal         func_1E90A0
    ctx->pc = 0x1E8EACu;
    SET_GPR_U32(ctx, 31, 0x1E8EB4u);
    ctx->pc = 0x1E90A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E90A0u, 0x1E8EACu, 0x1E8EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8EB4u;
label_1e8eb4:
    // 0x1e8eb4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1e8eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8eb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e8eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ebc: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x1e8ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1e8ec0: 0xc07a400  jal         func_1E9000
    ctx->pc = 0x1E8EC0u;
    SET_GPR_U32(ctx, 31, 0x1E8EC8u);
    ctx->pc = 0x1E9000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9000u, 0x1E8EC0u, 0x1E8EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8EC8u;
label_1e8ec8:
    // 0x1e8ec8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1e8ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8ecc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e8eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8ed0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e8ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8ed4: 0xa3a00028  sb          $zero, 0x28($sp)
    ctx->pc = 0x1e8ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e8ed8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1e8ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e8edc: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1e8edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e8ee0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1e8ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8ee4: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x1e8ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1e8ee8: 0xc07a3c4  jal         func_1E8F10
    ctx->pc = 0x1E8EE8u;
    SET_GPR_U32(ctx, 31, 0x1E8EF0u);
    ctx->pc = 0x1E8F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F10u, 0x1E8EE8u, 0x1E8EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8EF0u;
label_1e8ef0:
    // 0x1e8ef0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e8ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8ef4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e8ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1e8ef8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e8ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8efc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e8efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8f00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8f00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8f04: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e8f04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e8f08: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8F10u;
}
