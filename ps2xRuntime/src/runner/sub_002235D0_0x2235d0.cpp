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

// Function: sub_002235D0
// Address: 0x2235d0 - 0x223660
void sub_002235D0_0x2235d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002235D0_0x2235d0");
#endif

    switch (ctx->pc) {
        case 0x2235f8u: goto label_2235f8;
        case 0x223624u: goto label_223624;
        case 0x223644u: goto label_223644;
        default: break;
    }

    ctx->pc = 0x2235d0u;

    // 0x2235d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2235d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2235d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2235d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2235d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2235d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2235dc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2235dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2235e0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2235e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2235e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2235e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2235e8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2235e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2235ec: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2235ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2235f0: 0xc088700  jal         func_221C00
    ctx->pc = 0x2235F0u;
    SET_GPR_U32(ctx, 31, 0x2235F8u);
    ctx->pc = 0x221C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C00u, 0x2235F0u, 0x2235F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2235F8u;
label_2235f8:
    // 0x2235f8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2235F8u;
    {
        const bool branch_taken_0x2235f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2235f8) {
            ctx->pc = 0x223624u;
            goto label_223624;
        }
    }
    ctx->pc = 0x223600u;
    // 0x223600: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x223600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x223604: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x223604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223608: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x223608u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x22360c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x22360cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x223610: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x223610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x223614: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x223614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x223618: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x223618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x22361c: 0xc0886f0  jal         func_221BC0
    ctx->pc = 0x22361Cu;
    SET_GPR_U32(ctx, 31, 0x223624u);
    ctx->pc = 0x221BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221BC0u, 0x22361Cu, 0x223624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223624u;
label_223624:
    // 0x223624: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x223624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223628: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x223628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22362c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x22362cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x223630: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x223630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x223634: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x223634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223638: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x223638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22363c: 0xc088d98  jal         func_223660
    ctx->pc = 0x22363Cu;
    SET_GPR_U32(ctx, 31, 0x223644u);
    ctx->pc = 0x223660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223660u, 0x22363Cu, 0x223644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223644u;
label_223644:
    // 0x223644: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x223644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x223648: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x223648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22364c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22364cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223650: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x223650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x223654: 0x3e00008  jr          $ra
    ctx->pc = 0x223654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22365Cu;
    // 0x22365c: 0x0  nop
    ctx->pc = 0x22365cu;
    // NOP
    ctx->pc = 0x223660u;
}
