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

// Function: sub_0019D1B0
// Address: 0x19d1b0 - 0x19d230
void sub_0019D1B0_0x19d1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D1B0_0x19d1b0");
#endif

    switch (ctx->pc) {
        case 0x19d1d8u: goto label_19d1d8;
        case 0x19d1e8u: goto label_19d1e8;
        default: break;
    }

    ctx->pc = 0x19d1b0u;

    // 0x19d1b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19d1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19d1b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19d1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19d1b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d1bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19d1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d1c0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x19d1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x19d1c4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x19d1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x19d1c8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x19d1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x19d1cc: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x19d1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d1d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19D1D0u;
    {
        const bool branch_taken_0x19d1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d1d0) {
            ctx->pc = 0x19D1FCu;
            goto label_19d1fc;
        }
    }
    ctx->pc = 0x19D1D8u;
label_19d1d8:
    // 0x19d1d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d1dc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x19d1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d1e0: 0xc06748c  jal         func_19D230
    ctx->pc = 0x19D1E0u;
    SET_GPR_U32(ctx, 31, 0x19D1E8u);
    ctx->pc = 0x19D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D230u, 0x19D1E0u, 0x19D1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D1E8u;
label_19d1e8:
    // 0x19d1e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19d1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d1ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19d1f0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x19d1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x19d1f4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x19d1f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x19d1f8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x19d1f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19d1fc:
    // 0x19d1fc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d200: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x19D200u;
    {
        const bool branch_taken_0x19d200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d200) {
            ctx->pc = 0x19D1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d1d8;
        }
    }
    ctx->pc = 0x19D208u;
    // 0x19d208: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19d208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d20c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19d20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d210: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d218: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x19d218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x19d21c: 0x3e00008  jr          $ra
    ctx->pc = 0x19D21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D224u;
    // 0x19d224: 0x0  nop
    ctx->pc = 0x19d224u;
    // NOP
    // 0x19d228: 0x0  nop
    ctx->pc = 0x19d228u;
    // NOP
    // 0x19d22c: 0x0  nop
    ctx->pc = 0x19d22cu;
    // NOP
    ctx->pc = 0x19d230u;
}
