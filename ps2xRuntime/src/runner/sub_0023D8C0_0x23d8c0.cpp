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

// Function: sub_0023D8C0
// Address: 0x23d8c0 - 0x23d940
void sub_0023D8C0_0x23d8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D8C0_0x23d8c0");
#endif

    switch (ctx->pc) {
        case 0x23d8e8u: goto label_23d8e8;
        case 0x23d8f8u: goto label_23d8f8;
        default: break;
    }

    ctx->pc = 0x23d8c0u;

    // 0x23d8c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23d8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23d8c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23d8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23d8c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23d8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23d8cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23d8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23d8d0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x23d8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x23d8d4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x23d8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x23d8d8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x23d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x23d8dc: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x23d8dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d8e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23D8E0u;
    {
        const bool branch_taken_0x23d8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d8e0) {
            ctx->pc = 0x23D90Cu;
            goto label_23d90c;
        }
    }
    ctx->pc = 0x23D8E8u;
label_23d8e8:
    // 0x23d8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d8ec: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x23d8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23d8f0: 0xc08f680  jal         func_23DA00
    ctx->pc = 0x23D8F0u;
    SET_GPR_U32(ctx, 31, 0x23D8F8u);
    ctx->pc = 0x23DA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA00u, 0x23D8F0u, 0x23D8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D8F8u;
label_23d8f8:
    // 0x23d8f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23d8fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23d900: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x23d900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x23d904: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x23d904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x23d908: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x23d908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d90c:
    // 0x23d90c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23d910: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x23D910u;
    {
        const bool branch_taken_0x23d910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d910) {
            ctx->pc = 0x23D8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d8e8;
        }
    }
    ctx->pc = 0x23D918u;
    // 0x23d918: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23d918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d91c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23d91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d920: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23d920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23d924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d928: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x23d928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x23d92c: 0x3e00008  jr          $ra
    ctx->pc = 0x23D92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D934u;
    // 0x23d934: 0x0  nop
    ctx->pc = 0x23d934u;
    // NOP
    // 0x23d938: 0x0  nop
    ctx->pc = 0x23d938u;
    // NOP
    // 0x23d93c: 0x0  nop
    ctx->pc = 0x23d93cu;
    // NOP
    ctx->pc = 0x23d940u;
}
