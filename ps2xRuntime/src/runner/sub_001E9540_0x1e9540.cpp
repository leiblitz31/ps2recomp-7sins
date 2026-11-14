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

// Function: sub_001E9540
// Address: 0x1e9540 - 0x1e95c0
void sub_001E9540_0x1e9540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9540_0x1e9540");
#endif

    switch (ctx->pc) {
        case 0x1e9568u: goto label_1e9568;
        case 0x1e9578u: goto label_1e9578;
        default: break;
    }

    ctx->pc = 0x1e9540u;

    // 0x1e9540: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e9540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e9544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e9544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e9548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e954c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e954cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e9550: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e9550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e9554: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e9554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1e9558: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1e9558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1e955c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1e955cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9560: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E9560u;
    {
        const bool branch_taken_0x1e9560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9560) {
            ctx->pc = 0x1E958Cu;
            goto label_1e958c;
        }
    }
    ctx->pc = 0x1E9568u;
label_1e9568:
    // 0x1e9568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e956c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1e956cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9570: 0xc07a3e4  jal         func_1E8F90
    ctx->pc = 0x1E9570u;
    SET_GPR_U32(ctx, 31, 0x1E9578u);
    ctx->pc = 0x1E8F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F90u, 0x1E9570u, 0x1E9578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9578u;
label_1e9578:
    // 0x1e9578: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e9578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e957c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e957cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e9580: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1e9580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1e9584: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1e9584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1e9588: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1e9588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e958c:
    // 0x1e958c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e958cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e9590: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1E9590u;
    {
        const bool branch_taken_0x1e9590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9590) {
            ctx->pc = 0x1E9568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9568;
        }
    }
    ctx->pc = 0x1E9598u;
    // 0x1e9598: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e9598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e959c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e959cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e95a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e95a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e95a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e95a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e95a8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e95a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e95ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E95ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E95ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E95B4u;
    // 0x1e95b4: 0x0  nop
    ctx->pc = 0x1e95b4u;
    // NOP
    // 0x1e95b8: 0x0  nop
    ctx->pc = 0x1e95b8u;
    // NOP
    // 0x1e95bc: 0x0  nop
    ctx->pc = 0x1e95bcu;
    // NOP
    ctx->pc = 0x1e95c0u;
}
