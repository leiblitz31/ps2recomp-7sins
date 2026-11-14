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

// Function: sub_0018CE40
// Address: 0x18ce40 - 0x18cec0
void sub_0018CE40_0x18ce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CE40_0x18ce40");
#endif

    switch (ctx->pc) {
        case 0x18ce68u: goto label_18ce68;
        case 0x18ce78u: goto label_18ce78;
        default: break;
    }

    ctx->pc = 0x18ce40u;

    // 0x18ce40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18ce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18ce44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18ce44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18ce48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ce48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18ce4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ce4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ce50: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x18ce50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x18ce54: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x18ce54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x18ce58: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x18ce58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x18ce5c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x18ce5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ce60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18CE60u;
    {
        const bool branch_taken_0x18ce60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ce60) {
            ctx->pc = 0x18CE8Cu;
            goto label_18ce8c;
        }
    }
    ctx->pc = 0x18CE68u;
label_18ce68:
    // 0x18ce68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ce68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ce6c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x18ce6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18ce70: 0xc0633e0  jal         func_18CF80
    ctx->pc = 0x18CE70u;
    SET_GPR_U32(ctx, 31, 0x18CE78u);
    ctx->pc = 0x18CF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CF80u, 0x18CE70u, 0x18CE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CE78u;
label_18ce78:
    // 0x18ce78: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18ce78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ce7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18ce80: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x18ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x18ce84: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x18ce84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x18ce88: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x18ce88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18ce8c:
    // 0x18ce8c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ce90: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x18CE90u;
    {
        const bool branch_taken_0x18ce90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ce90) {
            ctx->pc = 0x18CE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ce68;
        }
    }
    ctx->pc = 0x18CE98u;
    // 0x18ce98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18ce98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ce9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18ce9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cea0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18cea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18cea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cea8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x18cea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18ceac: 0x3e00008  jr          $ra
    ctx->pc = 0x18CEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CEB4u;
    // 0x18ceb4: 0x0  nop
    ctx->pc = 0x18ceb4u;
    // NOP
    // 0x18ceb8: 0x0  nop
    ctx->pc = 0x18ceb8u;
    // NOP
    // 0x18cebc: 0x0  nop
    ctx->pc = 0x18cebcu;
    // NOP
    ctx->pc = 0x18cec0u;
}
