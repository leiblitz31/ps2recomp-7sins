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

// Function: sub_00210800
// Address: 0x210800 - 0x210880
void sub_00210800_0x210800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210800_0x210800");
#endif

    switch (ctx->pc) {
        case 0x210828u: goto label_210828;
        case 0x210838u: goto label_210838;
        default: break;
    }

    ctx->pc = 0x210800u;

    // 0x210800: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x210800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x210804: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x210804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x210808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x210808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21080c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21080cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x210810: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x210810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x210814: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x210814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x210818: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x210818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x21081c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x21081cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x210820: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x210820u;
    {
        const bool branch_taken_0x210820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x210820) {
            ctx->pc = 0x21084Cu;
            goto label_21084c;
        }
    }
    ctx->pc = 0x210828u;
label_210828:
    // 0x210828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x210828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21082c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x21082cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210830: 0xc08418c  jal         func_210630
    ctx->pc = 0x210830u;
    SET_GPR_U32(ctx, 31, 0x210838u);
    ctx->pc = 0x210630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210630u, 0x210830u, 0x210838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210838u;
label_210838:
    // 0x210838: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x210838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21083c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x21083cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x210840: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x210840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x210844: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x210844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x210848: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x210848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21084c:
    // 0x21084c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x21084cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210850: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x210850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210854: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x210854u;
    {
        const bool branch_taken_0x210854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x210854) {
            ctx->pc = 0x210828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210828;
        }
    }
    ctx->pc = 0x21085Cu;
    // 0x21085c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21085cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210860: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x210860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210864: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x210864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210868: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x210868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21086c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x21086cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x210870: 0x3e00008  jr          $ra
    ctx->pc = 0x210870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210878u;
    // 0x210878: 0x0  nop
    ctx->pc = 0x210878u;
    // NOP
    // 0x21087c: 0x0  nop
    ctx->pc = 0x21087cu;
    // NOP
    ctx->pc = 0x210880u;
}
