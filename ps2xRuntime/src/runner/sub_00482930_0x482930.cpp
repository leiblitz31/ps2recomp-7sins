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

// Function: sub_00482930
// Address: 0x482930 - 0x4829a0
void sub_00482930_0x482930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482930_0x482930");
#endif

    switch (ctx->pc) {
        case 0x482968u: goto label_482968;
        case 0x482980u: goto label_482980;
        default: break;
    }

    ctx->pc = 0x482930u;

    // 0x482930: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x482930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x482934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x482934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x482938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x482938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48293c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x48293cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x482940: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x482940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x482944: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x482944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x482948: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x482948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48294c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x48294cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x482950: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x482950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x482954: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x482954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x482958: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x482958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48295c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x48295cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x482960: 0xc120a68  jal         func_4829A0
    ctx->pc = 0x482960u;
    SET_GPR_U32(ctx, 31, 0x482968u);
    ctx->pc = 0x4829A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4829A0u, 0x482960u, 0x482968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482968u;
label_482968:
    // 0x482968: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x482968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48296c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x48296cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x482970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x482970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482974: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x482974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x482978: 0xc120744  jal         func_481D10
    ctx->pc = 0x482978u;
    SET_GPR_U32(ctx, 31, 0x482980u);
    ctx->pc = 0x481D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481D10u, 0x482978u, 0x482980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482980u;
label_482980:
    // 0x482980: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x482980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x482984: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x482984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x482988: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x482988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48298c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48298cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x482990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482994: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x482994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x482998: 0x3e00008  jr          $ra
    ctx->pc = 0x482998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4829A0u;
}
