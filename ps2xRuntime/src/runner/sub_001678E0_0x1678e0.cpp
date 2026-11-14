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

// Function: sub_001678E0
// Address: 0x1678e0 - 0x167960
void sub_001678E0_0x1678e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001678E0_0x1678e0");
#endif

    switch (ctx->pc) {
        case 0x167908u: goto label_167908;
        case 0x167918u: goto label_167918;
        default: break;
    }

    ctx->pc = 0x1678e0u;

    // 0x1678e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1678e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1678e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1678e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1678e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1678e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1678ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1678ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1678f0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1678f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1678f4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1678f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1678f8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1678f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1678fc: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1678fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167900: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x167900u;
    {
        const bool branch_taken_0x167900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167900) {
            ctx->pc = 0x16792Cu;
            goto label_16792c;
        }
    }
    ctx->pc = 0x167908u;
label_167908:
    // 0x167908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16790c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x16790cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167910: 0xc059e58  jal         func_167960
    ctx->pc = 0x167910u;
    SET_GPR_U32(ctx, 31, 0x167918u);
    ctx->pc = 0x167960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167960u, 0x167910u, 0x167918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167918u;
label_167918:
    // 0x167918: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x167918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16791c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16791cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x167920: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x167920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x167924: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x167924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x167928: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x167928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16792c:
    // 0x16792c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16792cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167930: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x167930u;
    {
        const bool branch_taken_0x167930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167930) {
            ctx->pc = 0x167908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167908;
        }
    }
    ctx->pc = 0x167938u;
    // 0x167938: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x167938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16793c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16793cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167940: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167948: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x167948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16794c: 0x3e00008  jr          $ra
    ctx->pc = 0x16794Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16794Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167954u;
    // 0x167954: 0x0  nop
    ctx->pc = 0x167954u;
    // NOP
    // 0x167958: 0x0  nop
    ctx->pc = 0x167958u;
    // NOP
    // 0x16795c: 0x0  nop
    ctx->pc = 0x16795cu;
    // NOP
    ctx->pc = 0x167960u;
}
