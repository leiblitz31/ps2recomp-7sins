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

// Function: sub_001BA160
// Address: 0x1ba160 - 0x1ba1d0
void sub_001BA160_0x1ba160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA160_0x1ba160");
#endif

    switch (ctx->pc) {
        case 0x1ba198u: goto label_1ba198;
        case 0x1ba1b0u: goto label_1ba1b0;
        default: break;
    }

    ctx->pc = 0x1ba160u;

    // 0x1ba160: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ba160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ba164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ba164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ba168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ba168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ba16c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1ba16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1ba170: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1ba170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1ba174: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1ba174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1ba178: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1ba178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba17c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x1ba17cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ba180: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1ba180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ba184: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1ba184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ba188: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1ba188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba18c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1ba18cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1ba190: 0xc06e874  jal         func_1BA1D0
    ctx->pc = 0x1BA190u;
    SET_GPR_U32(ctx, 31, 0x1BA198u);
    ctx->pc = 0x1BA1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA1D0u, 0x1BA190u, 0x1BA198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA198u;
label_1ba198:
    // 0x1ba198: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ba198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba19c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1ba19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba1a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba1a4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1ba1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ba1a8: 0xc06e564  jal         func_1B9590
    ctx->pc = 0x1BA1A8u;
    SET_GPR_U32(ctx, 31, 0x1BA1B0u);
    ctx->pc = 0x1B9590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9590u, 0x1BA1A8u, 0x1BA1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA1B0u;
label_1ba1b0:
    // 0x1ba1b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1ba1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba1b4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1ba1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1ba1b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ba1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba1bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ba1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba1c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ba1c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba1c4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1ba1c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ba1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA1D0u;
}
