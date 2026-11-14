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

// Function: sub_00145750
// Address: 0x145750 - 0x1457c0
void sub_00145750_0x145750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145750_0x145750");
#endif

    switch (ctx->pc) {
        case 0x145788u: goto label_145788;
        case 0x1457a0u: goto label_1457a0;
        default: break;
    }

    ctx->pc = 0x145750u;

    // 0x145750: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x145750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x145754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x145758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14575c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x14575cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x145760: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x145760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x145764: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x145764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x145768: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x145768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14576c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x14576cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x145770: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x145770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x145774: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x145774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x145778: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x145778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14577c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x14577cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x145780: 0xc05162c  jal         func_1458B0
    ctx->pc = 0x145780u;
    SET_GPR_U32(ctx, 31, 0x145788u);
    ctx->pc = 0x1458B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1458B0u, 0x145780u, 0x145788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145788u;
label_145788:
    // 0x145788: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x145788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14578c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x14578cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145794: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x145794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x145798: 0xc0515f0  jal         func_1457C0
    ctx->pc = 0x145798u;
    SET_GPR_U32(ctx, 31, 0x1457A0u);
    ctx->pc = 0x1457C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1457C0u, 0x145798u, 0x1457A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1457A0u;
label_1457a0:
    // 0x1457a0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1457a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1457a4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1457a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1457a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1457a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1457ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1457acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1457b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1457b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1457b4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1457b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1457b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1457B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1457B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1457C0u;
}
