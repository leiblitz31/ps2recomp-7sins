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

// Function: sub_001E9A40
// Address: 0x1e9a40 - 0x1e9ab0
void sub_001E9A40_0x1e9a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9A40_0x1e9a40");
#endif

    switch (ctx->pc) {
        case 0x1e9a74u: goto label_1e9a74;
        case 0x1e9a94u: goto label_1e9a94;
        default: break;
    }

    ctx->pc = 0x1e9a40u;

    // 0x1e9a40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e9a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e9a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e9a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e9a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e9a4c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e9a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e9a50: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e9a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1e9a54: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1e9a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1e9a58: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1e9a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x1e9a5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e9a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9a60: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1e9a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e9a64: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1e9a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e9a68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e9a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a6c: 0xc07a6bc  jal         func_1E9AF0
    ctx->pc = 0x1E9A6Cu;
    SET_GPR_U32(ctx, 31, 0x1E9A74u);
    ctx->pc = 0x1E9AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9AF0u, 0x1E9A6Cu, 0x1E9A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A74u;
label_1e9a74:
    // 0x1e9a74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e9a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a78: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x1e9a78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9a7c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e9a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9a80: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1e9a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e9a84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e9a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a88: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1e9a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1e9a8c: 0xc07a3c4  jal         func_1E8F10
    ctx->pc = 0x1E9A8Cu;
    SET_GPR_U32(ctx, 31, 0x1E9A94u);
    ctx->pc = 0x1E8F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F10u, 0x1E9A8Cu, 0x1E9A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A94u;
label_1e9a94:
    // 0x1e9a94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e9a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9a9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9aa0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e9aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e9aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9AACu;
    // 0x1e9aac: 0x0  nop
    ctx->pc = 0x1e9aacu;
    // NOP
    ctx->pc = 0x1e9ab0u;
}
