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

// Function: sub_0018CEC0
// Address: 0x18cec0 - 0x18cf40
void sub_0018CEC0_0x18cec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CEC0_0x18cec0");
#endif

    switch (ctx->pc) {
        case 0x18cee8u: goto label_18cee8;
        case 0x18cef8u: goto label_18cef8;
        default: break;
    }

    ctx->pc = 0x18cec0u;

    // 0x18cec0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18cec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18cec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18cec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18cec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18cec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18cecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ceccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ced0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x18ced0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x18ced4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x18ced4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x18ced8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x18ced8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x18cedc: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x18cedcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18cee0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18CEE0u;
    {
        const bool branch_taken_0x18cee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cee0) {
            ctx->pc = 0x18CF0Cu;
            goto label_18cf0c;
        }
    }
    ctx->pc = 0x18CEE8u;
label_18cee8:
    // 0x18cee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ceec: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x18ceecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18cef0: 0xc0633e0  jal         func_18CF80
    ctx->pc = 0x18CEF0u;
    SET_GPR_U32(ctx, 31, 0x18CEF8u);
    ctx->pc = 0x18CF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CF80u, 0x18CEF0u, 0x18CEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CEF8u;
label_18cef8:
    // 0x18cef8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x18cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18cefc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18cf00: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x18cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x18cf04: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x18cf04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x18cf08: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x18cf08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18cf0c:
    // 0x18cf0c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x18cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18cf10: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18cf14: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x18CF14u;
    {
        const bool branch_taken_0x18cf14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18cf14) {
            ctx->pc = 0x18CEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18cee8;
        }
    }
    ctx->pc = 0x18CF1Cu;
    // 0x18cf1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18cf1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18cf20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cf24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18cf24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cf28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18cf28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cf2c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x18cf2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18cf30: 0x3e00008  jr          $ra
    ctx->pc = 0x18CF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CF38u;
    // 0x18cf38: 0x0  nop
    ctx->pc = 0x18cf38u;
    // NOP
    // 0x18cf3c: 0x0  nop
    ctx->pc = 0x18cf3cu;
    // NOP
    ctx->pc = 0x18cf40u;
}
