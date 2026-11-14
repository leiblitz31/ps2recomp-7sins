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

// Function: sub_00279D20
// Address: 0x279d20 - 0x279d90
void sub_00279D20_0x279d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279D20_0x279d20");
#endif

    switch (ctx->pc) {
        case 0x279d58u: goto label_279d58;
        case 0x279d70u: goto label_279d70;
        default: break;
    }

    ctx->pc = 0x279d20u;

    // 0x279d20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x279d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x279d24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x279d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x279d28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x279d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x279d2c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x279d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x279d30: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x279d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x279d34: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x279d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x279d38: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x279d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279d3c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x279d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x279d40: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x279d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x279d44: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x279d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x279d48: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x279d48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x279d4c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x279d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x279d50: 0xc09e764  jal         func_279D90
    ctx->pc = 0x279D50u;
    SET_GPR_U32(ctx, 31, 0x279D58u);
    ctx->pc = 0x279D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279D90u, 0x279D50u, 0x279D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279D58u;
label_279d58:
    // 0x279d58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x279d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x279d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d64: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x279d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x279d68: 0xc09e320  jal         func_278C80
    ctx->pc = 0x279D68u;
    SET_GPR_U32(ctx, 31, 0x279D70u);
    ctx->pc = 0x278C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278C80u, 0x279D68u, 0x279D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279D70u;
label_279d70:
    // 0x279d70: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x279d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279d74: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x279d74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x279d78: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x279d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x279d7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x279d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279d80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279d84: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x279d84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x279d88: 0x3e00008  jr          $ra
    ctx->pc = 0x279D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279D90u;
}
