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

// Function: sub_001BE810
// Address: 0x1be810 - 0x1be880
void sub_001BE810_0x1be810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE810_0x1be810");
#endif

    switch (ctx->pc) {
        case 0x1be848u: goto label_1be848;
        case 0x1be860u: goto label_1be860;
        default: break;
    }

    ctx->pc = 0x1be810u;

    // 0x1be810: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1be810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1be814: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1be814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1be818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1be818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1be81c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1be81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1be820: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1be820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1be824: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1be824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1be828: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1be828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be82c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x1be82cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be830: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1be830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1be834: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1be834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1be838: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1be838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be83c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1be83cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1be840: 0xc056774  jal         func_159DD0
    ctx->pc = 0x1BE840u;
    SET_GPR_U32(ctx, 31, 0x1BE848u);
    ctx->pc = 0x159DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159DD0u, 0x1BE840u, 0x1BE848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE848u;
label_1be848:
    // 0x1be848: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1be848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be84c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1be84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be854: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1be854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1be858: 0xc0560f8  jal         func_1583E0
    ctx->pc = 0x1BE858u;
    SET_GPR_U32(ctx, 31, 0x1BE860u);
    ctx->pc = 0x1583E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1583E0u, 0x1BE858u, 0x1BE860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE860u;
label_1be860:
    // 0x1be860: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1be860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be864: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1be864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1be868: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1be868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be86c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1be86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1be870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be874: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1be874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1be878: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE880u;
}
