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

// Function: sub_0011A790
// Address: 0x11a790 - 0x11a820
void sub_0011A790_0x11a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A790_0x11a790");
#endif

    switch (ctx->pc) {
        case 0x11a7b0u: goto label_11a7b0;
        case 0x11a7c4u: goto label_11a7c4;
        case 0x11a7d8u: goto label_11a7d8;
        case 0x11a800u: goto label_11a800;
        default: break;
    }

    ctx->pc = 0x11a790u;

    // 0x11a790: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11a790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11a794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11a794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11a798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11a798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11a79c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x11a79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x11a7a0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x11a7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x11a7a4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x11a7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a7a8: 0xc0411f0  jal         func_1047C0
    ctx->pc = 0x11A7A8u;
    SET_GPR_U32(ctx, 31, 0x11A7B0u);
    ctx->pc = 0x1047C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047C0u, 0x11A7A8u, 0x11A7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A7B0u;
label_11a7b0:
    // 0x11a7b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11a7b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7b4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x11a7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x11a7b8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x11a7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a7bc: 0xc046a88  jal         func_11AA20
    ctx->pc = 0x11A7BCu;
    SET_GPR_U32(ctx, 31, 0x11A7C4u);
    ctx->pc = 0x11AA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AA20u, 0x11A7BCu, 0x11A7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A7C4u;
label_11a7c4:
    // 0x11a7c4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x11a7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a7c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11a7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7cc: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x11a7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x11a7d0: 0xc046a60  jal         func_11A980
    ctx->pc = 0x11A7D0u;
    SET_GPR_U32(ctx, 31, 0x11A7D8u);
    ctx->pc = 0x11A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A980u, 0x11A7D0u, 0x11A7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A7D8u;
label_11a7d8:
    // 0x11a7d8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x11a7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a7dc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x11a7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a7e0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a7e4: 0xa3a00028  sb          $zero, 0x28($sp)
    ctx->pc = 0x11a7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a7e8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x11a7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11a7ec: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x11a7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11a7f0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x11a7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11a7f4: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x11a7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x11a7f8: 0xc046a08  jal         func_11A820
    ctx->pc = 0x11A7F8u;
    SET_GPR_U32(ctx, 31, 0x11A800u);
    ctx->pc = 0x11A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A820u, 0x11A7F8u, 0x11A800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A800u;
label_11a800:
    // 0x11a800: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x11a800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a804: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x11a804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x11a808: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11a808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a80c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11a80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11a810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a814: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x11a814u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11a818: 0x3e00008  jr          $ra
    ctx->pc = 0x11A818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A820u;
}
