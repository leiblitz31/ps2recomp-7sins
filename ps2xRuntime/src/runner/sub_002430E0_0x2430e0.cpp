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

// Function: sub_002430E0
// Address: 0x2430e0 - 0x243160
void sub_002430E0_0x2430e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002430E0_0x2430e0");
#endif

    switch (ctx->pc) {
        case 0x243108u: goto label_243108;
        case 0x243118u: goto label_243118;
        default: break;
    }

    ctx->pc = 0x2430e0u;

    // 0x2430e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2430e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2430e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2430e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2430e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2430e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2430ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2430ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2430f0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2430f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2430f4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2430f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2430f8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2430f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2430fc: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x2430fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243100: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x243100u;
    {
        const bool branch_taken_0x243100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243100) {
            ctx->pc = 0x24312Cu;
            goto label_24312c;
        }
    }
    ctx->pc = 0x243108u;
label_243108:
    // 0x243108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24310c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x24310cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243110: 0xc090c88  jal         func_243220
    ctx->pc = 0x243110u;
    SET_GPR_U32(ctx, 31, 0x243118u);
    ctx->pc = 0x243220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243220u, 0x243110u, 0x243118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243118u;
label_243118:
    // 0x243118: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x243118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24311c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24311cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x243120: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x243120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x243124: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x243124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x243128: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x243128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24312c:
    // 0x24312c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x24312cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x243130: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x243130u;
    {
        const bool branch_taken_0x243130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243130) {
            ctx->pc = 0x243108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243108;
        }
    }
    ctx->pc = 0x243138u;
    // 0x243138: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x243138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24313c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24313cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243140: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x243140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x243144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243148: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x243148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24314c: 0x3e00008  jr          $ra
    ctx->pc = 0x24314Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24314Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243154u;
    // 0x243154: 0x0  nop
    ctx->pc = 0x243154u;
    // NOP
    // 0x243158: 0x0  nop
    ctx->pc = 0x243158u;
    // NOP
    // 0x24315c: 0x0  nop
    ctx->pc = 0x24315cu;
    // NOP
    ctx->pc = 0x243160u;
}
