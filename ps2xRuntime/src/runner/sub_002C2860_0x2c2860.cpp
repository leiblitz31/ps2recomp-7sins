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

// Function: sub_002C2860
// Address: 0x2c2860 - 0x2c28f0
void sub_002C2860_0x2c2860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2860_0x2c2860");
#endif

    switch (ctx->pc) {
        case 0x2c2888u: goto label_2c2888;
        case 0x2c28b4u: goto label_2c28b4;
        case 0x2c28d4u: goto label_2c28d4;
        default: break;
    }

    ctx->pc = 0x2c2860u;

    // 0x2c2860: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c2860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c2864: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c2864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c2868: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c286c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2c286cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2c2870: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2c2870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2c2874: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2c2874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c2878: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2c2878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c287c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2c287cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2880: 0xc0afc90  jal         func_2BF240
    ctx->pc = 0x2C2880u;
    SET_GPR_U32(ctx, 31, 0x2C2888u);
    ctx->pc = 0x2BF240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF240u, 0x2C2880u, 0x2C2888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2888u;
label_2c2888:
    // 0x2c2888: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C2888u;
    {
        const bool branch_taken_0x2c2888 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c2888) {
            ctx->pc = 0x2C28B4u;
            goto label_2c28b4;
        }
    }
    ctx->pc = 0x2C2890u;
    // 0x2c2890: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2c2890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c2894: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2c2894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2898: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2c2898u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c289c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2c289cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c28a0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2c28a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c28a4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2c28a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c28a8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2c28a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2c28ac: 0xc0afc80  jal         func_2BF200
    ctx->pc = 0x2C28ACu;
    SET_GPR_U32(ctx, 31, 0x2C28B4u);
    ctx->pc = 0x2BF200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF200u, 0x2C28ACu, 0x2C28B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C28B4u;
label_2c28b4:
    // 0x2c28b4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2c28b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c28b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2c28b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c28bc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2c28bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2c28c0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2c28c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2c28c4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2c28c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c28c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c28c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c28cc: 0xc0b0a3c  jal         func_2C28F0
    ctx->pc = 0x2C28CCu;
    SET_GPR_U32(ctx, 31, 0x2C28D4u);
    ctx->pc = 0x2C28F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28F0u, 0x2C28CCu, 0x2C28D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C28D4u;
label_2c28d4:
    // 0x2c28d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2c28d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c28d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c28d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c28dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c28dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c28e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2c28e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c28e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C28E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C28E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C28ECu;
    // 0x2c28ec: 0x0  nop
    ctx->pc = 0x2c28ecu;
    // NOP
    ctx->pc = 0x2c28f0u;
}
