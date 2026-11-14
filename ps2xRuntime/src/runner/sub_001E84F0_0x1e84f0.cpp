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

// Function: sub_001E84F0
// Address: 0x1e84f0 - 0x1e8570
void sub_001E84F0_0x1e84f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E84F0_0x1e84f0");
#endif

    switch (ctx->pc) {
        case 0x1e8518u: goto label_1e8518;
        case 0x1e8528u: goto label_1e8528;
        default: break;
    }

    ctx->pc = 0x1e84f0u;

    // 0x1e84f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e84f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e84f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e84f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e84f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e84f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e84fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e84fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e8500: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e8500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e8504: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e8504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1e8508: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1e8508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1e850c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x1e850cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8510: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E8510u;
    {
        const bool branch_taken_0x1e8510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8510) {
            ctx->pc = 0x1E853Cu;
            goto label_1e853c;
        }
    }
    ctx->pc = 0x1E8518u;
label_1e8518:
    // 0x1e8518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e851c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e851cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8520: 0xc07a0cc  jal         func_1E8330
    ctx->pc = 0x1E8520u;
    SET_GPR_U32(ctx, 31, 0x1E8528u);
    ctx->pc = 0x1E8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8330u, 0x1E8520u, 0x1E8528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8528u;
label_1e8528:
    // 0x1e8528: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e8528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e852c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1e852cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1e8530: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1e8530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1e8534: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1e8534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1e8538: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1e8538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e853c:
    // 0x1e853c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e853cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8540: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e8540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8544: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E8544u;
    {
        const bool branch_taken_0x1e8544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e8544) {
            ctx->pc = 0x1E8518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8518;
        }
    }
    ctx->pc = 0x1E854Cu;
    // 0x1e854c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e854cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8550: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e8550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8554: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e855c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e855cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e8560: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8568u;
    // 0x1e8568: 0x0  nop
    ctx->pc = 0x1e8568u;
    // NOP
    // 0x1e856c: 0x0  nop
    ctx->pc = 0x1e856cu;
    // NOP
    ctx->pc = 0x1e8570u;
}
