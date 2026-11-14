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

// Function: sub_002B7620
// Address: 0x2b7620 - 0x2b76b0
void sub_002B7620_0x2b7620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7620_0x2b7620");
#endif

    switch (ctx->pc) {
        case 0x2b7648u: goto label_2b7648;
        case 0x2b7674u: goto label_2b7674;
        case 0x2b7694u: goto label_2b7694;
        default: break;
    }

    ctx->pc = 0x2b7620u;

    // 0x2b7620: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b7620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b7624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b7624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b7628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b7628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b762c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2b762cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2b7630: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2b7630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2b7634: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b7634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7638: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x2b7638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b763c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2b763cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7640: 0xc08feac  jal         func_23FAB0
    ctx->pc = 0x2B7640u;
    SET_GPR_U32(ctx, 31, 0x2B7648u);
    ctx->pc = 0x23FAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAB0u, 0x2B7640u, 0x2B7648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7648u;
label_2b7648:
    // 0x2b7648: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B7648u;
    {
        const bool branch_taken_0x2b7648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b7648) {
            ctx->pc = 0x2B7674u;
            goto label_2b7674;
        }
    }
    ctx->pc = 0x2B7650u;
    // 0x2b7650: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2b7650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7654: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b7654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7658: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2b7658u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b765c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x2b765cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b7660: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2b7660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b7664: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2b7664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7668: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2b7668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2b766c: 0xc08fe60  jal         func_23F980
    ctx->pc = 0x2B766Cu;
    SET_GPR_U32(ctx, 31, 0x2B7674u);
    ctx->pc = 0x23F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F980u, 0x2B766Cu, 0x2B7674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7674u;
label_2b7674:
    // 0x2b7674: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2b7674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7678: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2b7678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2b767c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x2b767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x2b7680: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2b7680u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2b7684: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b7684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7688: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2b7688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b768c: 0xc08fd74  jal         func_23F5D0
    ctx->pc = 0x2B768Cu;
    SET_GPR_U32(ctx, 31, 0x2B7694u);
    ctx->pc = 0x23F5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F5D0u, 0x2B768Cu, 0x2B7694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7694u;
label_2b7694:
    // 0x2b7694: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b7694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7698: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b7698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b769c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b769cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b76a0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2b76a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b76a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B76A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B76A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B76ACu;
    // 0x2b76ac: 0x0  nop
    ctx->pc = 0x2b76acu;
    // NOP
    ctx->pc = 0x2b76b0u;
}
