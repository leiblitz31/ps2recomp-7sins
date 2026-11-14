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

// Function: sub_00216CA0
// Address: 0x216ca0 - 0x216d10
void sub_00216CA0_0x216ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216CA0_0x216ca0");
#endif

    switch (ctx->pc) {
        case 0x216cd8u: goto label_216cd8;
        case 0x216cf0u: goto label_216cf0;
        default: break;
    }

    ctx->pc = 0x216ca0u;

    // 0x216ca0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x216ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x216ca4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x216ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x216ca8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x216ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x216cac: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x216cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x216cb0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x216cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x216cb4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x216cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x216cb8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x216cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216cbc: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x216cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x216cc0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x216cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x216cc4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x216cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x216cc8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x216cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x216ccc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x216cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x216cd0: 0xc085b44  jal         func_216D10
    ctx->pc = 0x216CD0u;
    SET_GPR_U32(ctx, 31, 0x216CD8u);
    ctx->pc = 0x216D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216D10u, 0x216CD0u, 0x216CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216CD8u;
label_216cd8:
    // 0x216cd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x216cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216cdc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x216cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x216ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216ce4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x216ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x216ce8: 0xc0859d0  jal         func_216740
    ctx->pc = 0x216CE8u;
    SET_GPR_U32(ctx, 31, 0x216CF0u);
    ctx->pc = 0x216740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216740u, 0x216CE8u, 0x216CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216CF0u;
label_216cf0:
    // 0x216cf0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x216cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216cf4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x216cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x216cf8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x216cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x216cfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x216cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216d00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x216d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216d04: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x216d04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x216d08: 0x3e00008  jr          $ra
    ctx->pc = 0x216D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216D10u;
}
