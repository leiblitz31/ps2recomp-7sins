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

// Function: sub_0046C8E0
// Address: 0x46c8e0 - 0x46c960
void sub_0046C8E0_0x46c8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C8E0_0x46c8e0");
#endif

    switch (ctx->pc) {
        case 0x46c908u: goto label_46c908;
        case 0x46c918u: goto label_46c918;
        default: break;
    }

    ctx->pc = 0x46c8e0u;

    // 0x46c8e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x46c8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x46c8e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x46c8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x46c8e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46c8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46c8ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46c8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46c8f0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x46c8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x46c8f4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x46c8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x46c8f8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x46c8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x46c8fc: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x46c8fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46c900: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x46C900u;
    {
        const bool branch_taken_0x46c900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c900) {
            ctx->pc = 0x46C92Cu;
            goto label_46c92c;
        }
    }
    ctx->pc = 0x46C908u;
label_46c908:
    // 0x46c908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46c908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c90c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x46c90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46c910: 0xc11b278  jal         func_46C9E0
    ctx->pc = 0x46C910u;
    SET_GPR_U32(ctx, 31, 0x46C918u);
    ctx->pc = 0x46C9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C9E0u, 0x46C910u, 0x46C918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C918u;
label_46c918:
    // 0x46c918: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x46c918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46c91c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x46c920: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x46c920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x46c924: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x46c924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x46c928: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x46c928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46c92c:
    // 0x46c92c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x46c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46c930: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x46C930u;
    {
        const bool branch_taken_0x46c930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46c930) {
            ctx->pc = 0x46C908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46c908;
        }
    }
    ctx->pc = 0x46C938u;
    // 0x46c938: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46c938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c93c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x46c93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c940: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46c940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46c944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46c948: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x46c948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x46c94c: 0x3e00008  jr          $ra
    ctx->pc = 0x46C94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C954u;
    // 0x46c954: 0x0  nop
    ctx->pc = 0x46c954u;
    // NOP
    // 0x46c958: 0x0  nop
    ctx->pc = 0x46c958u;
    // NOP
    // 0x46c95c: 0x0  nop
    ctx->pc = 0x46c95cu;
    // NOP
    ctx->pc = 0x46c960u;
}
