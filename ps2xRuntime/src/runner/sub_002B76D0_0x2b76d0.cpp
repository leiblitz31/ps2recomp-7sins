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

// Function: sub_002B76D0
// Address: 0x2b76d0 - 0x2b7760
void sub_002B76D0_0x2b76d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B76D0_0x2b76d0");
#endif

    switch (ctx->pc) {
        case 0x2b76f8u: goto label_2b76f8;
        case 0x2b7724u: goto label_2b7724;
        case 0x2b7744u: goto label_2b7744;
        default: break;
    }

    ctx->pc = 0x2b76d0u;

    // 0x2b76d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b76d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b76d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b76d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b76d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b76d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b76dc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2b76dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2b76e0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2b76e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2b76e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b76e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b76e8: 0x24500054  addiu       $s0, $v0, 0x54
    ctx->pc = 0x2b76e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2b76ec: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2b76ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b76f0: 0xc0addac  jal         func_2B76B0
    ctx->pc = 0x2B76F0u;
    SET_GPR_U32(ctx, 31, 0x2B76F8u);
    ctx->pc = 0x2B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B76B0u, 0x2B76F0u, 0x2B76F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B76F8u;
label_2b76f8:
    // 0x2b76f8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B76F8u;
    {
        const bool branch_taken_0x2b76f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b76f8) {
            ctx->pc = 0x2B7724u;
            goto label_2b7724;
        }
    }
    ctx->pc = 0x2B7700u;
    // 0x2b7700: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2b7700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7704: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b7704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7708: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2b7708u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b770c: 0x24640054  addiu       $a0, $v1, 0x54
    ctx->pc = 0x2b770cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x2b7710: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2b7710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b7714: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2b7714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7718: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2b7718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2b771c: 0xc0ade00  jal         func_2B7800
    ctx->pc = 0x2B771Cu;
    SET_GPR_U32(ctx, 31, 0x2B7724u);
    ctx->pc = 0x2B7800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7800u, 0x2B771Cu, 0x2B7724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7724u;
label_2b7724:
    // 0x2b7724: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2b7724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7728: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2b7728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2b772c: 0x2442ffac  addiu       $v0, $v0, -0x54
    ctx->pc = 0x2b772cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967212));
    // 0x2b7730: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2b7730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2b7734: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b7734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7738: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2b7738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b773c: 0xc0addd8  jal         func_2B7760
    ctx->pc = 0x2B773Cu;
    SET_GPR_U32(ctx, 31, 0x2B7744u);
    ctx->pc = 0x2B7760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7760u, 0x2B773Cu, 0x2B7744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7744u;
label_2b7744:
    // 0x2b7744: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b7744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7748: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b7748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b774c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b774cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7750: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2b7750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b7754: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B775Cu;
    // 0x2b775c: 0x0  nop
    ctx->pc = 0x2b775cu;
    // NOP
    ctx->pc = 0x2b7760u;
}
