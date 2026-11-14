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

// Function: sub_00279E70
// Address: 0x279e70 - 0x279ee0
void sub_00279E70_0x279e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279E70_0x279e70");
#endif

    switch (ctx->pc) {
        case 0x279ea8u: goto label_279ea8;
        case 0x279ec0u: goto label_279ec0;
        default: break;
    }

    ctx->pc = 0x279e70u;

    // 0x279e70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x279e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x279e74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x279e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x279e78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x279e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x279e7c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x279e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x279e80: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x279e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x279e84: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x279e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x279e88: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x279e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279e8c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x279e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x279e90: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x279e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x279e94: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x279e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x279e98: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x279e98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x279e9c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x279e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x279ea0: 0xc09e7b8  jal         func_279EE0
    ctx->pc = 0x279EA0u;
    SET_GPR_U32(ctx, 31, 0x279EA8u);
    ctx->pc = 0x279EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279EE0u, 0x279EA0u, 0x279EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279EA8u;
label_279ea8:
    // 0x279ea8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x279ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279eac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x279eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279eb4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x279eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x279eb8: 0xc09e3a8  jal         func_278EA0
    ctx->pc = 0x279EB8u;
    SET_GPR_U32(ctx, 31, 0x279EC0u);
    ctx->pc = 0x278EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278EA0u, 0x279EB8u, 0x279EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279EC0u;
label_279ec0:
    // 0x279ec0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x279ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279ec4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x279ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x279ec8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x279ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x279ecc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x279eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279ed0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279ed4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x279ed4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x279ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x279ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279EE0u;
}
