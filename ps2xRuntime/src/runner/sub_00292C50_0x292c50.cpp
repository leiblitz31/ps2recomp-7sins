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

// Function: sub_00292C50
// Address: 0x292c50 - 0x292cc0
void sub_00292C50_0x292c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292C50_0x292c50");
#endif

    switch (ctx->pc) {
        case 0x292c88u: goto label_292c88;
        case 0x292ca0u: goto label_292ca0;
        default: break;
    }

    ctx->pc = 0x292c50u;

    // 0x292c50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x292c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x292c54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x292c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292c58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x292c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x292c5c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x292c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x292c60: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x292c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x292c64: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x292c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x292c68: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x292c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292c6c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x292c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x292c70: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x292c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x292c74: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x292c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x292c78: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x292c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292c7c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x292c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x292c80: 0xc0a4b30  jal         func_292CC0
    ctx->pc = 0x292C80u;
    SET_GPR_U32(ctx, 31, 0x292C88u);
    ctx->pc = 0x292CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292CC0u, 0x292C80u, 0x292C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C88u;
label_292c88:
    // 0x292c88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x292c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292c8c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x292c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292c90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292c94: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x292c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x292c98: 0xc0a472c  jal         func_291CB0
    ctx->pc = 0x292C98u;
    SET_GPR_U32(ctx, 31, 0x292CA0u);
    ctx->pc = 0x291CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291CB0u, 0x292C98u, 0x292CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292CA0u;
label_292ca0:
    // 0x292ca0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x292ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292ca4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x292ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x292ca8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x292ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292cac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292cb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x292cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292cb4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x292cb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x292cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x292CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292CC0u;
}
