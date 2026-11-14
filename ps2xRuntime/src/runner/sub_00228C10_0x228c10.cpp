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

// Function: sub_00228C10
// Address: 0x228c10 - 0x228c80
void sub_00228C10_0x228c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228C10_0x228c10");
#endif

    switch (ctx->pc) {
        case 0x228c48u: goto label_228c48;
        case 0x228c60u: goto label_228c60;
        default: break;
    }

    ctx->pc = 0x228c10u;

    // 0x228c10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x228c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x228c14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x228c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x228c18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x228c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x228c1c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x228c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x228c20: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x228c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x228c24: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x228c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x228c28: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x228c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228c2c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x228c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x228c30: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x228c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x228c34: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x228c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x228c38: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x228c38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228c3c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x228c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x228c40: 0xc08a144  jal         func_228510
    ctx->pc = 0x228C40u;
    SET_GPR_U32(ctx, 31, 0x228C48u);
    ctx->pc = 0x228510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228510u, 0x228C40u, 0x228C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228C48u;
label_228c48:
    // 0x228c48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x228c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228c4c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x228c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228c54: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x228c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x228c58: 0xc089fe8  jal         func_227FA0
    ctx->pc = 0x228C58u;
    SET_GPR_U32(ctx, 31, 0x228C60u);
    ctx->pc = 0x227FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FA0u, 0x228C58u, 0x228C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228C60u;
label_228c60:
    // 0x228c60: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x228c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228c64: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x228c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x228c68: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x228c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228c6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x228c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228c70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x228c70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228c74: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x228c74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x228c78: 0x3e00008  jr          $ra
    ctx->pc = 0x228C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228C80u;
}
