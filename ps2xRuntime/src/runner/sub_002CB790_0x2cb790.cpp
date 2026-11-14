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

// Function: sub_002CB790
// Address: 0x2cb790 - 0x2cb800
void sub_002CB790_0x2cb790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB790_0x2cb790");
#endif

    switch (ctx->pc) {
        case 0x2cb7c8u: goto label_2cb7c8;
        case 0x2cb7e0u: goto label_2cb7e0;
        default: break;
    }

    ctx->pc = 0x2cb790u;

    // 0x2cb790: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cb790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2cb794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cb794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cb798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cb798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cb79c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2cb79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2cb7a0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2cb7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2cb7a4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2cb7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2cb7a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cb7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb7ac: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2cb7acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb7b0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2cb7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cb7b4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2cb7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cb7b8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2cb7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cb7bc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2cb7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2cb7c0: 0xc0b2e00  jal         func_2CB800
    ctx->pc = 0x2CB7C0u;
    SET_GPR_U32(ctx, 31, 0x2CB7C8u);
    ctx->pc = 0x2CB800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB800u, 0x2CB7C0u, 0x2CB7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB7C8u;
label_2cb7c8:
    // 0x2cb7c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cb7c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7cc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cb7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb7d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cb7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7d4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2cb7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cb7d8: 0xc0b2c5c  jal         func_2CB170
    ctx->pc = 0x2CB7D8u;
    SET_GPR_U32(ctx, 31, 0x2CB7E0u);
    ctx->pc = 0x2CB170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB170u, 0x2CB7D8u, 0x2CB7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB7E0u;
label_2cb7e0:
    // 0x2cb7e0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cb7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb7e4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x2cb7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x2cb7e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cb7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cb7ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cb7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb7f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cb7f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb7f4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2cb7f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2cb7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB800u;
}
