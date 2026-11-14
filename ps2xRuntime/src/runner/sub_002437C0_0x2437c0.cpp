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

// Function: sub_002437C0
// Address: 0x2437c0 - 0x243850
void sub_002437C0_0x2437c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002437C0_0x2437c0");
#endif

    switch (ctx->pc) {
        case 0x2437e8u: goto label_2437e8;
        case 0x243814u: goto label_243814;
        case 0x243834u: goto label_243834;
        default: break;
    }

    ctx->pc = 0x2437c0u;

    // 0x2437c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2437c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2437c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2437c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2437c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2437c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2437cc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2437ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2437d0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2437d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2437d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2437d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2437d8: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x2437d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2437dc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2437dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2437e0: 0xc090ca4  jal         func_243290
    ctx->pc = 0x2437E0u;
    SET_GPR_U32(ctx, 31, 0x2437E8u);
    ctx->pc = 0x243290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243290u, 0x2437E0u, 0x2437E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2437E8u;
label_2437e8:
    // 0x2437e8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2437E8u;
    {
        const bool branch_taken_0x2437e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2437e8) {
            ctx->pc = 0x243814u;
            goto label_243814;
        }
    }
    ctx->pc = 0x2437F0u;
    // 0x2437f0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2437f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2437f4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2437f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2437f8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2437f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2437fc: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x2437fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x243800: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x243800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x243804: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x243804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x243808: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x243808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x24380c: 0xc090d44  jal         func_243510
    ctx->pc = 0x24380Cu;
    SET_GPR_U32(ctx, 31, 0x243814u);
    ctx->pc = 0x243510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243510u, 0x24380Cu, 0x243814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243814u;
label_243814:
    // 0x243814: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x243814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243818: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x243818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24381c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x24381cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x243820: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x243820u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x243824: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x243824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243828: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x243828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24382c: 0xc090a5c  jal         func_242970
    ctx->pc = 0x24382Cu;
    SET_GPR_U32(ctx, 31, 0x243834u);
    ctx->pc = 0x242970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242970u, 0x24382Cu, 0x243834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243834u;
label_243834:
    // 0x243834: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x243834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x243838: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x243838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24383c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24383cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243840: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x243840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x243844: 0x3e00008  jr          $ra
    ctx->pc = 0x243844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24384Cu;
    // 0x24384c: 0x0  nop
    ctx->pc = 0x24384cu;
    // NOP
    ctx->pc = 0x243850u;
}
