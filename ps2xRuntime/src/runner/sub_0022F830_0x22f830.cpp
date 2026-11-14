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

// Function: sub_0022F830
// Address: 0x22f830 - 0x22f8b0
void sub_0022F830_0x22f830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F830_0x22f830");
#endif

    switch (ctx->pc) {
        case 0x22f858u: goto label_22f858;
        case 0x22f868u: goto label_22f868;
        default: break;
    }

    ctx->pc = 0x22f830u;

    // 0x22f830: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22f830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22f834: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22f834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22f838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22f838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22f83c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22f83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22f840: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x22f840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x22f844: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x22f844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x22f848: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x22f848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x22f84c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x22f84cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f850: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22F850u;
    {
        const bool branch_taken_0x22f850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f850) {
            ctx->pc = 0x22F87Cu;
            goto label_22f87c;
        }
    }
    ctx->pc = 0x22F858u;
label_22f858:
    // 0x22f858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f85c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x22f85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22f860: 0xc08be4c  jal         func_22F930
    ctx->pc = 0x22F860u;
    SET_GPR_U32(ctx, 31, 0x22F868u);
    ctx->pc = 0x22F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F930u, 0x22F860u, 0x22F868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F868u;
label_22f868:
    // 0x22f868: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22f868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22f86c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22f870: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x22f870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x22f874: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x22f874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x22f878: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x22f878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f87c:
    // 0x22f87c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22f880: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x22F880u;
    {
        const bool branch_taken_0x22f880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f880) {
            ctx->pc = 0x22F858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f858;
        }
    }
    ctx->pc = 0x22F888u;
    // 0x22f888: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22f888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f88c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22f88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f890: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22f890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22f894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f898: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x22f898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22f89c: 0x3e00008  jr          $ra
    ctx->pc = 0x22F89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F8A4u;
    // 0x22f8a4: 0x0  nop
    ctx->pc = 0x22f8a4u;
    // NOP
    // 0x22f8a8: 0x0  nop
    ctx->pc = 0x22f8a8u;
    // NOP
    // 0x22f8ac: 0x0  nop
    ctx->pc = 0x22f8acu;
    // NOP
    ctx->pc = 0x22f8b0u;
}
