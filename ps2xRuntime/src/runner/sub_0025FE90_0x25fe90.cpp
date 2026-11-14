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

// Function: sub_0025FE90
// Address: 0x25fe90 - 0x25ff00
void sub_0025FE90_0x25fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FE90_0x25fe90");
#endif

    switch (ctx->pc) {
        case 0x25fec8u: goto label_25fec8;
        case 0x25fee0u: goto label_25fee0;
        default: break;
    }

    ctx->pc = 0x25fe90u;

    // 0x25fe90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25fe90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25fe94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25fe94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25fe98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25fe98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25fe9c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x25fe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x25fea0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x25fea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x25fea4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x25fea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x25fea8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25feac: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x25feacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x25feb0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25feb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25feb4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x25feb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25feb8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x25feb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25febc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x25febcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x25fec0: 0xc097fc0  jal         func_25FF00
    ctx->pc = 0x25FEC0u;
    SET_GPR_U32(ctx, 31, 0x25FEC8u);
    ctx->pc = 0x25FF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF00u, 0x25FEC0u, 0x25FEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FEC8u;
label_25fec8:
    // 0x25fec8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25fec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fecc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25feccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25fed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25fed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fed4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x25fed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25fed8: 0xc097d1c  jal         func_25F470
    ctx->pc = 0x25FED8u;
    SET_GPR_U32(ctx, 31, 0x25FEE0u);
    ctx->pc = 0x25F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F470u, 0x25FED8u, 0x25FEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FEE0u;
label_25fee0:
    // 0x25fee0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25fee4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x25fee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x25fee8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25feec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25feecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fef0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25fef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fef4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x25fef4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25fef8: 0x3e00008  jr          $ra
    ctx->pc = 0x25FEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FF00u;
}
