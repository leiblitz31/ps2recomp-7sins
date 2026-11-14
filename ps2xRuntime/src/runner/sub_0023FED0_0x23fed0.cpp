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

// Function: sub_0023FED0
// Address: 0x23fed0 - 0x23ff50
void sub_0023FED0_0x23fed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FED0_0x23fed0");
#endif

    switch (ctx->pc) {
        case 0x23fef8u: goto label_23fef8;
        case 0x23ff08u: goto label_23ff08;
        default: break;
    }

    ctx->pc = 0x23fed0u;

    // 0x23fed0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23fed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23fed4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23fed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23fed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23fed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23fedc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23fedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23fee0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x23fee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x23fee4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x23fee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x23fee8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x23fee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x23feec: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x23feecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23fef0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23FEF0u;
    {
        const bool branch_taken_0x23fef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fef0) {
            ctx->pc = 0x23FF1Cu;
            goto label_23ff1c;
        }
    }
    ctx->pc = 0x23FEF8u;
label_23fef8:
    // 0x23fef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23fef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fefc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23fefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ff00: 0xc08ffe4  jal         func_23FF90
    ctx->pc = 0x23FF00u;
    SET_GPR_U32(ctx, 31, 0x23FF08u);
    ctx->pc = 0x23FF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FF90u, 0x23FF00u, 0x23FF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FF08u;
label_23ff08:
    // 0x23ff08: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ff0c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x23ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x23ff10: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x23ff10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x23ff14: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x23ff14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x23ff18: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x23ff18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ff1c:
    // 0x23ff1c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ff20: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23ff24: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x23FF24u;
    {
        const bool branch_taken_0x23ff24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23ff24) {
            ctx->pc = 0x23FEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fef8;
        }
    }
    ctx->pc = 0x23FF2Cu;
    // 0x23ff2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23ff2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ff30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23ff30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ff34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23ff34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ff38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23ff38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ff3c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x23ff3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x23ff40: 0x3e00008  jr          $ra
    ctx->pc = 0x23FF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FF48u;
    // 0x23ff48: 0x0  nop
    ctx->pc = 0x23ff48u;
    // NOP
    // 0x23ff4c: 0x0  nop
    ctx->pc = 0x23ff4cu;
    // NOP
    ctx->pc = 0x23ff50u;
}
