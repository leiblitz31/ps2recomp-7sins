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

// Function: sub_0029DD40
// Address: 0x29dd40 - 0x29ddc0
void sub_0029DD40_0x29dd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DD40_0x29dd40");
#endif

    switch (ctx->pc) {
        case 0x29dd68u: goto label_29dd68;
        case 0x29dd78u: goto label_29dd78;
        default: break;
    }

    ctx->pc = 0x29dd40u;

    // 0x29dd40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29dd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29dd44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29dd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29dd48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29dd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29dd4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29dd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29dd50: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x29dd50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x29dd54: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x29dd54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x29dd58: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x29dd58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x29dd5c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x29dd5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29dd60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x29DD60u;
    {
        const bool branch_taken_0x29dd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dd60) {
            ctx->pc = 0x29DD8Cu;
            goto label_29dd8c;
        }
    }
    ctx->pc = 0x29DD68u;
label_29dd68:
    // 0x29dd68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29dd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dd6c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x29dd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29dd70: 0xc099318  jal         func_264C60
    ctx->pc = 0x29DD70u;
    SET_GPR_U32(ctx, 31, 0x29DD78u);
    ctx->pc = 0x264C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264C60u, 0x29DD70u, 0x29DD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DD78u;
label_29dd78:
    // 0x29dd78: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29dd7c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x29dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x29dd80: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x29dd80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x29dd84: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x29dd84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x29dd88: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x29dd88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29dd8c:
    // 0x29dd8c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x29dd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29dd90: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29dd94: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x29DD94u;
    {
        const bool branch_taken_0x29dd94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29dd94) {
            ctx->pc = 0x29DD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29dd68;
        }
    }
    ctx->pc = 0x29DD9Cu;
    // 0x29dd9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29dd9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dda0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29dda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29dda4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29dda4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29dda8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29dda8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ddac: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x29ddacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x29ddb0: 0x3e00008  jr          $ra
    ctx->pc = 0x29DDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DDB8u;
    // 0x29ddb8: 0x0  nop
    ctx->pc = 0x29ddb8u;
    // NOP
    // 0x29ddbc: 0x0  nop
    ctx->pc = 0x29ddbcu;
    // NOP
    ctx->pc = 0x29ddc0u;
}
