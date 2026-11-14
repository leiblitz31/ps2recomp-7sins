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

// Function: sub_004573A0
// Address: 0x4573a0 - 0x457440
void sub_004573A0_0x4573a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004573A0_0x4573a0");
#endif

    switch (ctx->pc) {
        case 0x4573c8u: goto label_4573c8;
        case 0x4573e0u: goto label_4573e0;
        case 0x4573f8u: goto label_4573f8;
        case 0x457414u: goto label_457414;
        default: break;
    }

    ctx->pc = 0x4573a0u;

    // 0x4573a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4573a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4573a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4573a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4573a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4573a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4573ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4573acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4573b0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x4573b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x4573b4: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x4573b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x4573b8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x4573b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4573bc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x4573bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4573c0: 0xc116138  jal         func_4584E0
    ctx->pc = 0x4573C0u;
    SET_GPR_U32(ctx, 31, 0x4573C8u);
    ctx->pc = 0x4584E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4584E0u, 0x4573C0u, 0x4573C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4573C8u;
label_4573c8:
    // 0x4573c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4573c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4573cc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4573ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4573d0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x4573d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4573d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4573d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4573d8: 0xc04f260  jal         func_13C980
    ctx->pc = 0x4573D8u;
    SET_GPR_U32(ctx, 31, 0x4573E0u);
    ctx->pc = 0x13C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C980u, 0x4573D8u, 0x4573E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4573E0u;
label_4573e0:
    // 0x4573e0: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x4573e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x4573e4: 0x27b1003c  addiu       $s1, $sp, 0x3C
    ctx->pc = 0x4573e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x4573e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4573e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4573ec: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x4573ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4573f0: 0xc04e0d0  jal         func_138340
    ctx->pc = 0x4573F0u;
    SET_GPR_U32(ctx, 31, 0x4573F8u);
    ctx->pc = 0x138340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138340u, 0x4573F0u, 0x4573F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4573F8u;
label_4573f8:
    // 0x4573f8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x4573f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4573fc: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x4573fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x457400: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x457400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457404: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x457404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457408: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x457408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45740c: 0xc04e0c0  jal         func_138300
    ctx->pc = 0x45740Cu;
    SET_GPR_U32(ctx, 31, 0x457414u);
    ctx->pc = 0x138300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138300u, 0x45740Cu, 0x457414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457414u;
label_457414:
    // 0x457414: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x457414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x457418: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x457418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x45741c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45741cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x457420: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x457420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457424: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x457424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457428: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x457428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x45742c: 0x3e00008  jr          $ra
    ctx->pc = 0x45742Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45742Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x457434u;
    // 0x457434: 0x0  nop
    ctx->pc = 0x457434u;
    // NOP
    // 0x457438: 0x0  nop
    ctx->pc = 0x457438u;
    // NOP
    // 0x45743c: 0x0  nop
    ctx->pc = 0x45743cu;
    // NOP
    ctx->pc = 0x457440u;
}
