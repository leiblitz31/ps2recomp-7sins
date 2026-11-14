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

// Function: sub_00266260
// Address: 0x266260 - 0x2662d0
void sub_00266260_0x266260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266260_0x266260");
#endif

    switch (ctx->pc) {
        case 0x266298u: goto label_266298;
        case 0x2662b0u: goto label_2662b0;
        default: break;
    }

    ctx->pc = 0x266260u;

    // 0x266260: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x266260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x266264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x266264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x266268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x266268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26626c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x26626cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x266270: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x266270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x266274: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x266274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x266278: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x266278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26627c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x26627cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x266280: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x266280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x266284: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x266284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x266288: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x266288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26628c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x26628cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x266290: 0xc0998b4  jal         func_2662D0
    ctx->pc = 0x266290u;
    SET_GPR_U32(ctx, 31, 0x266298u);
    ctx->pc = 0x2662D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2662D0u, 0x266290u, 0x266298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266298u;
label_266298:
    // 0x266298: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x266298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26629c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26629cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2662a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2662a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2662a4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2662a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2662a8: 0xc099660  jal         func_265980
    ctx->pc = 0x2662A8u;
    SET_GPR_U32(ctx, 31, 0x2662B0u);
    ctx->pc = 0x265980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265980u, 0x2662A8u, 0x2662B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2662B0u;
label_2662b0:
    // 0x2662b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2662b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2662b4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x2662b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x2662b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2662b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2662bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2662bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2662c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2662c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2662c4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2662c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2662c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2662C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2662C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2662D0u;
}
