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

// Function: sub_002CB8F0
// Address: 0x2cb8f0 - 0x2cb960
void sub_002CB8F0_0x2cb8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB8F0_0x2cb8f0");
#endif

    switch (ctx->pc) {
        case 0x2cb928u: goto label_2cb928;
        case 0x2cb940u: goto label_2cb940;
        default: break;
    }

    ctx->pc = 0x2cb8f0u;

    // 0x2cb8f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cb8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2cb8f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cb8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cb8f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cb8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cb8fc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2cb8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2cb900: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2cb900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2cb904: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2cb904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2cb908: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cb908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb90c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2cb90cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb910: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2cb910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cb914: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2cb914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cb918: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2cb918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cb91c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2cb91cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2cb920: 0xc0b2e7c  jal         func_2CB9F0
    ctx->pc = 0x2CB920u;
    SET_GPR_U32(ctx, 31, 0x2CB928u);
    ctx->pc = 0x2CB9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB9F0u, 0x2CB920u, 0x2CB928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB928u;
label_2cb928:
    // 0x2cb928: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cb928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb92c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cb92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cb930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb934: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2cb934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cb938: 0xc0b2e58  jal         func_2CB960
    ctx->pc = 0x2CB938u;
    SET_GPR_U32(ctx, 31, 0x2CB940u);
    ctx->pc = 0x2CB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB960u, 0x2CB938u, 0x2CB940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB940u;
label_2cb940:
    // 0x2cb940: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cb940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb944: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x2cb944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x2cb948: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cb948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cb94c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cb94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cb950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb954: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2cb954u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2cb958: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB960u;
}
