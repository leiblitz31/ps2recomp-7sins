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

// Function: sub_0018A370
// Address: 0x18a370 - 0x18a3f0
void sub_0018A370_0x18a370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A370_0x18a370");
#endif

    switch (ctx->pc) {
        case 0x18a398u: goto label_18a398;
        case 0x18a3acu: goto label_18a3ac;
        case 0x18a3b8u: goto label_18a3b8;
        case 0x18a3ccu: goto label_18a3cc;
        default: break;
    }

    ctx->pc = 0x18a370u;

    // 0x18a370: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18a370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18a374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18a374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18a378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a37c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x18a37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x18a380: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x18a380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x18a384: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x18a384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x18a388: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x18a388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a38c: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x18a38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x18a390: 0xc06273c  jal         func_189CF0
    ctx->pc = 0x18A390u;
    SET_GPR_U32(ctx, 31, 0x18A398u);
    ctx->pc = 0x189CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189CF0u, 0x18A390u, 0x18A398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A398u;
label_18a398:
    // 0x18a398: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x18a398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a39c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x18a39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x18a3a0: 0x24450074  addiu       $a1, $v0, 0x74
    ctx->pc = 0x18a3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x18a3a4: 0xc062720  jal         func_189C80
    ctx->pc = 0x18A3A4u;
    SET_GPR_U32(ctx, 31, 0x18A3ACu);
    ctx->pc = 0x189C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189C80u, 0x18A3A4u, 0x18A3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A3ACu;
label_18a3ac:
    // 0x18a3ac: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x18a3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x18a3b0: 0xc062714  jal         func_189C50
    ctx->pc = 0x18A3B0u;
    SET_GPR_U32(ctx, 31, 0x18A3B8u);
    ctx->pc = 0x189C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189C50u, 0x18A3B0u, 0x18A3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A3B8u;
label_18a3b8:
    // 0x18a3b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18a3b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a3bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a3c0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x18a3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a3c4: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x18A3C4u;
    SET_GPR_U32(ctx, 31, 0x18A3CCu);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x18A3C4u, 0x18A3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A3CCu;
label_18a3cc:
    // 0x18a3cc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x18a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18a3d0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x18a3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x18a3d4: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x18a3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a3d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a3dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a3dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a3e0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x18a3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18a3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x18A3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A3ECu;
    // 0x18a3ec: 0x0  nop
    ctx->pc = 0x18a3ecu;
    // NOP
    ctx->pc = 0x18a3f0u;
}
