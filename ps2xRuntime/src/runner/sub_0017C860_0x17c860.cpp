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

// Function: sub_0017C860
// Address: 0x17c860 - 0x17c8d0
void sub_0017C860_0x17c860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C860_0x17c860");
#endif

    switch (ctx->pc) {
        case 0x17c898u: goto label_17c898;
        case 0x17c8b0u: goto label_17c8b0;
        default: break;
    }

    ctx->pc = 0x17c860u;

    // 0x17c860: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17c860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17c864: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17c868: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17c868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17c86c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x17c86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x17c870: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x17c870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x17c874: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x17c874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x17c878: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x17c878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c87c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x17c87cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x17c880: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x17c880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17c884: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x17c884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17c888: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x17c888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c88c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x17c88cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x17c890: 0xc05f234  jal         func_17C8D0
    ctx->pc = 0x17C890u;
    SET_GPR_U32(ctx, 31, 0x17C898u);
    ctx->pc = 0x17C8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C8D0u, 0x17C890u, 0x17C898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C898u;
label_17c898:
    // 0x17c898: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17c898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c89c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x17c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c8a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c8a4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x17c8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17c8a8: 0xc05edf4  jal         func_17B7D0
    ctx->pc = 0x17C8A8u;
    SET_GPR_U32(ctx, 31, 0x17C8B0u);
    ctx->pc = 0x17B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B7D0u, 0x17C8A8u, 0x17C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C8B0u;
label_17c8b0:
    // 0x17c8b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x17c8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c8b4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x17c8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x17c8b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c8bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c8c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17c8c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c8c4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x17c8c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17c8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x17C8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C8D0u;
}
