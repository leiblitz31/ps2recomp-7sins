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

// Function: sub_0028E7A0
// Address: 0x28e7a0 - 0x28e820
void sub_0028E7A0_0x28e7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E7A0_0x28e7a0");
#endif

    switch (ctx->pc) {
        case 0x28e7c8u: goto label_28e7c8;
        case 0x28e7d8u: goto label_28e7d8;
        default: break;
    }

    ctx->pc = 0x28e7a0u;

    // 0x28e7a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28e7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28e7a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28e7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28e7a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28e7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28e7ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28e7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28e7b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x28e7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x28e7b4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x28e7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x28e7b8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x28e7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x28e7bc: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x28e7bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28e7c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28E7C0u;
    {
        const bool branch_taken_0x28e7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e7c0) {
            ctx->pc = 0x28E7ECu;
            goto label_28e7ec;
        }
    }
    ctx->pc = 0x28E7C8u;
label_28e7c8:
    // 0x28e7c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e7cc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x28e7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e7d0: 0xc0a3978  jal         func_28E5E0
    ctx->pc = 0x28E7D0u;
    SET_GPR_U32(ctx, 31, 0x28E7D8u);
    ctx->pc = 0x28E5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E5E0u, 0x28E7D0u, 0x28E7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E7D8u;
label_28e7d8:
    // 0x28e7d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x28e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e7dc: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x28e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x28e7e0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x28e7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x28e7e4: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x28e7e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x28e7e8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x28e7e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28e7ec:
    // 0x28e7ec: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x28e7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e7f0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x28e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28e7f4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x28E7F4u;
    {
        const bool branch_taken_0x28e7f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28e7f4) {
            ctx->pc = 0x28E7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e7c8;
        }
    }
    ctx->pc = 0x28E7FCu;
    // 0x28e7fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28e7fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e800: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28e800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e804: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28e804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e808: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28e808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e80c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x28e80cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28e810: 0x3e00008  jr          $ra
    ctx->pc = 0x28E810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E818u;
    // 0x28e818: 0x0  nop
    ctx->pc = 0x28e818u;
    // NOP
    // 0x28e81c: 0x0  nop
    ctx->pc = 0x28e81cu;
    // NOP
    ctx->pc = 0x28e820u;
}
