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

// Function: sub_00184870
// Address: 0x184870 - 0x1848e0
void sub_00184870_0x184870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184870_0x184870");
#endif

    switch (ctx->pc) {
        case 0x1848a8u: goto label_1848a8;
        case 0x1848c0u: goto label_1848c0;
        default: break;
    }

    ctx->pc = 0x184870u;

    // 0x184870: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x184870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x184874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x184874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x184878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18487c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x18487cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x184880: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x184880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x184884: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x184884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x184888: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x184888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18488c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x18488cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x184890: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x184890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x184894: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x184894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x184898: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x184898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18489c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x18489cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1848a0: 0xc061238  jal         func_1848E0
    ctx->pc = 0x1848A0u;
    SET_GPR_U32(ctx, 31, 0x1848A8u);
    ctx->pc = 0x1848E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1848E0u, 0x1848A0u, 0x1848A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1848A8u;
label_1848a8:
    // 0x1848a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1848a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1848ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1848acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1848b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1848b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1848b4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1848b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1848b8: 0xc060eac  jal         func_183AB0
    ctx->pc = 0x1848B8u;
    SET_GPR_U32(ctx, 31, 0x1848C0u);
    ctx->pc = 0x183AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183AB0u, 0x1848B8u, 0x1848C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1848C0u;
label_1848c0:
    // 0x1848c0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1848c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1848c4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1848c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1848c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1848c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1848cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1848ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1848d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1848d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1848d4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1848d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1848d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1848D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1848D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1848E0u;
}
