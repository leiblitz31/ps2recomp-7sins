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

// Function: sub_001332B0
// Address: 0x1332b0 - 0x133320
void sub_001332B0_0x1332b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001332B0_0x1332b0");
#endif

    switch (ctx->pc) {
        case 0x1332e8u: goto label_1332e8;
        case 0x133300u: goto label_133300;
        default: break;
    }

    ctx->pc = 0x1332b0u;

    // 0x1332b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1332b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1332b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1332b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1332b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1332b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1332bc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1332bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1332c0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1332c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1332c4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1332c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1332c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1332c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1332cc: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x1332ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1332d0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1332d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1332d4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1332d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1332d8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1332d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1332dc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1332dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1332e0: 0xc04ccc8  jal         func_133320
    ctx->pc = 0x1332E0u;
    SET_GPR_U32(ctx, 31, 0x1332E8u);
    ctx->pc = 0x133320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133320u, 0x1332E0u, 0x1332E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1332E8u;
label_1332e8:
    // 0x1332e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1332e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1332ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1332ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1332f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1332f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1332f4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1332f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1332f8: 0xc04c9b4  jal         func_1326D0
    ctx->pc = 0x1332F8u;
    SET_GPR_U32(ctx, 31, 0x133300u);
    ctx->pc = 0x1326D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1326D0u, 0x1332F8u, 0x133300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133300u;
label_133300:
    // 0x133300: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x133300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x133304: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x133304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x133308: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x133308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13330c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13330cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133310: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133314: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x133314u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x133318: 0x3e00008  jr          $ra
    ctx->pc = 0x133318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133320u;
}
