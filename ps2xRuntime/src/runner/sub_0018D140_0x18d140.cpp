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

// Function: sub_0018D140
// Address: 0x18d140 - 0x18d1b0
void sub_0018D140_0x18d140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D140_0x18d140");
#endif

    switch (ctx->pc) {
        case 0x18d178u: goto label_18d178;
        case 0x18d190u: goto label_18d190;
        default: break;
    }

    ctx->pc = 0x18d140u;

    // 0x18d140: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18d140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18d144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18d144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18d148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18d148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18d14c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x18d14cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x18d150: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x18d150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x18d154: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x18d154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x18d158: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x18d158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d15c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x18d15cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d160: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x18d160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18d164: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x18d164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18d168: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x18d168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d16c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x18d16cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x18d170: 0xc06346c  jal         func_18D1B0
    ctx->pc = 0x18D170u;
    SET_GPR_U32(ctx, 31, 0x18D178u);
    ctx->pc = 0x18D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D1B0u, 0x18D170u, 0x18D178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D178u;
label_18d178:
    // 0x18d178: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18d178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d17c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x18d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d184: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x18d184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18d188: 0xc063144  jal         func_18C510
    ctx->pc = 0x18D188u;
    SET_GPR_U32(ctx, 31, 0x18D190u);
    ctx->pc = 0x18C510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C510u, 0x18D188u, 0x18D190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D190u;
label_18d190:
    // 0x18d190: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x18d190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d194: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x18d194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x18d198: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18d198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d19c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18d19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d1a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18d1a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d1a4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x18d1a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18d1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x18D1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D1B0u;
}
