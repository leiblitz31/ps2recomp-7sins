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

// Function: sub_001E7530
// Address: 0x1e7530 - 0x1e75a0
void sub_001E7530_0x1e7530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7530_0x1e7530");
#endif

    switch (ctx->pc) {
        case 0x1e7564u: goto label_1e7564;
        case 0x1e7584u: goto label_1e7584;
        default: break;
    }

    ctx->pc = 0x1e7530u;

    // 0x1e7530: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e7530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e7534: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e7534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e7538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e753c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e753cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e7540: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e7540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1e7544: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1e7544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1e7548: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1e7548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x1e754c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e754cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7550: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1e7550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e7554: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1e7554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7558: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e7558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e755c: 0xc06a028  jal         func_1A80A0
    ctx->pc = 0x1E755Cu;
    SET_GPR_U32(ctx, 31, 0x1E7564u);
    ctx->pc = 0x1A80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80A0u, 0x1E755Cu, 0x1E7564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7564u;
label_1e7564:
    // 0x1e7564: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e7564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7568: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x1e7568u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e756c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e756cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7570: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1e7570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7574: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e7574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7578: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1e7578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1e757c: 0xc079cf8  jal         func_1E73E0
    ctx->pc = 0x1E757Cu;
    SET_GPR_U32(ctx, 31, 0x1E7584u);
    ctx->pc = 0x1E73E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E73E0u, 0x1E757Cu, 0x1E7584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7584u;
label_1e7584:
    // 0x1e7584: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e7584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7588: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e758c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e758cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7590: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e7590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e7594: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E759Cu;
    // 0x1e759c: 0x0  nop
    ctx->pc = 0x1e759cu;
    // NOP
    ctx->pc = 0x1e75a0u;
}
