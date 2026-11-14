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

// Function: sub_0022CF00
// Address: 0x22cf00 - 0x22cf70
void sub_0022CF00_0x22cf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CF00_0x22cf00");
#endif

    switch (ctx->pc) {
        case 0x22cf38u: goto label_22cf38;
        case 0x22cf50u: goto label_22cf50;
        default: break;
    }

    ctx->pc = 0x22cf00u;

    // 0x22cf00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22cf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22cf04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22cf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22cf08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22cf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22cf0c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x22cf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x22cf10: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x22cf10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x22cf14: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x22cf14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x22cf18: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x22cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22cf1c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x22cf1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x22cf20: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x22cf20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22cf24: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x22cf24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22cf28: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x22cf28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22cf2c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x22cf2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x22cf30: 0xc08b3dc  jal         func_22CF70
    ctx->pc = 0x22CF30u;
    SET_GPR_U32(ctx, 31, 0x22CF38u);
    ctx->pc = 0x22CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CF70u, 0x22CF30u, 0x22CF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF38u;
label_22cf38:
    // 0x22cf38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22cf38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cf3c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x22cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22cf40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22cf40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cf44: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x22cf44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22cf48: 0xc08b09c  jal         func_22C270
    ctx->pc = 0x22CF48u;
    SET_GPR_U32(ctx, 31, 0x22CF50u);
    ctx->pc = 0x22C270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C270u, 0x22CF48u, 0x22CF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF50u;
label_22cf50:
    // 0x22cf50: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x22cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22cf54: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x22cf54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x22cf58: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22cf5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22cf5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cf60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22cf60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22cf64: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x22cf64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22cf68: 0x3e00008  jr          $ra
    ctx->pc = 0x22CF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CF70u;
}
