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

// Function: sub_0023DA00
// Address: 0x23da00 - 0x23da80
void sub_0023DA00_0x23da00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DA00_0x23da00");
#endif

    switch (ctx->pc) {
        case 0x23da24u: goto label_23da24;
        case 0x23da3cu: goto label_23da3c;
        default: break;
    }

    ctx->pc = 0x23da00u;

    // 0x23da00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23da00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23da04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23da04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23da08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23da08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23da0c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x23da0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x23da10: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x23da10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x23da14: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x23da14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x23da18: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23da18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23da1c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x23DA1Cu;
    SET_GPR_U32(ctx, 31, 0x23DA24u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x23DA1Cu, 0x23DA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DA24u;
label_23da24:
    // 0x23da24: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x23da24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x23da28: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23DA28u;
    {
        const bool branch_taken_0x23da28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23da28) {
            ctx->pc = 0x23DA60u;
            goto label_23da60;
        }
    }
    ctx->pc = 0x23DA30u;
    // 0x23da30: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x23da30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23da34: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x23da34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x23da38: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x23da38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_23da3c:
    // 0x23da3c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x23da3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23da40: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x23da40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x23da44: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x23da44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x23da48: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x23da48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x23da4c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x23da4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x23da50: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x23da50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x23da54: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x23da54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x23da58: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23DA58u;
    {
        const bool branch_taken_0x23da58 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x23da58) {
            ctx->pc = 0x23DA3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23da3c;
        }
    }
    ctx->pc = 0x23DA60u;
label_23da60:
    // 0x23da60: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x23da60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x23da64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23da64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23da68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23da68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23da6c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x23da6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23da70: 0x3e00008  jr          $ra
    ctx->pc = 0x23DA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DA78u;
    // 0x23da78: 0x0  nop
    ctx->pc = 0x23da78u;
    // NOP
    // 0x23da7c: 0x0  nop
    ctx->pc = 0x23da7cu;
    // NOP
    ctx->pc = 0x23da80u;
}
