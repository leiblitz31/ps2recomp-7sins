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

// Function: sub_00267A40
// Address: 0x267a40 - 0x267ad0
void sub_00267A40_0x267a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267A40_0x267a40");
#endif

    switch (ctx->pc) {
        case 0x267a68u: goto label_267a68;
        case 0x267a94u: goto label_267a94;
        case 0x267ab4u: goto label_267ab4;
        default: break;
    }

    ctx->pc = 0x267a40u;

    // 0x267a40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x267a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x267a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x267a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x267a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x267a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x267a4c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x267a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x267a50: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x267a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x267a54: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x267a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267a58: 0x2450000c  addiu       $s0, $v0, 0xC
    ctx->pc = 0x267a58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x267a5c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x267a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267a60: 0xc099e88  jal         func_267A20
    ctx->pc = 0x267A60u;
    SET_GPR_U32(ctx, 31, 0x267A68u);
    ctx->pc = 0x267A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267A20u, 0x267A60u, 0x267A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267A68u;
label_267a68:
    // 0x267a68: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x267A68u;
    {
        const bool branch_taken_0x267a68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x267a68) {
            ctx->pc = 0x267A94u;
            goto label_267a94;
        }
    }
    ctx->pc = 0x267A70u;
    // 0x267a70: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x267a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267a74: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x267a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267a78: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x267a78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x267a7c: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x267a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x267a80: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x267a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x267a84: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x267a84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267a88: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x267a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x267a8c: 0xc099eb4  jal         func_267AD0
    ctx->pc = 0x267A8Cu;
    SET_GPR_U32(ctx, 31, 0x267A94u);
    ctx->pc = 0x267AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267AD0u, 0x267A8Cu, 0x267A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267A94u;
label_267a94:
    // 0x267a94: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x267a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267a98: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x267a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x267a9c: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x267a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x267aa0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x267aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x267aa4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x267aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267aa8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x267aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x267aac: 0xc099718  jal         func_265C60
    ctx->pc = 0x267AACu;
    SET_GPR_U32(ctx, 31, 0x267AB4u);
    ctx->pc = 0x265C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265C60u, 0x267AACu, 0x267AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267AB4u;
label_267ab4:
    // 0x267ab4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x267ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267ab8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x267ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267abc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x267abcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267ac0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x267ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x267ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x267AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267ACCu;
    // 0x267acc: 0x0  nop
    ctx->pc = 0x267accu;
    // NOP
    ctx->pc = 0x267ad0u;
}
