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

// Function: sub_0019D400
// Address: 0x19d400 - 0x19d480
void sub_0019D400_0x19d400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D400_0x19d400");
#endif

    switch (ctx->pc) {
        case 0x19d428u: goto label_19d428;
        case 0x19d438u: goto label_19d438;
        default: break;
    }

    ctx->pc = 0x19d400u;

    // 0x19d400: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19d400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19d404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19d404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19d408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d40c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19d40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d410: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x19d410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x19d414: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x19d414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x19d418: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x19d418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x19d41c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x19d41cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d420: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19D420u;
    {
        const bool branch_taken_0x19d420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d420) {
            ctx->pc = 0x19D44Cu;
            goto label_19d44c;
        }
    }
    ctx->pc = 0x19D428u;
label_19d428:
    // 0x19d428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d42c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x19d42cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d430: 0xc06748c  jal         func_19D230
    ctx->pc = 0x19D430u;
    SET_GPR_U32(ctx, 31, 0x19D438u);
    ctx->pc = 0x19D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D230u, 0x19D430u, 0x19D438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D438u;
label_19d438:
    // 0x19d438: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19d438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d43c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x19d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x19d440: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x19d440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x19d444: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x19d444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x19d448: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x19d448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19d44c:
    // 0x19d44c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x19d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d450: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19d450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d454: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x19D454u;
    {
        const bool branch_taken_0x19d454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19d454) {
            ctx->pc = 0x19D428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d428;
        }
    }
    ctx->pc = 0x19D45Cu;
    // 0x19d45c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19d45cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d460: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19d460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d464: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d468: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d46c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x19d46cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x19d470: 0x3e00008  jr          $ra
    ctx->pc = 0x19D470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D478u;
    // 0x19d478: 0x0  nop
    ctx->pc = 0x19d478u;
    // NOP
    // 0x19d47c: 0x0  nop
    ctx->pc = 0x19d47cu;
    // NOP
    ctx->pc = 0x19d480u;
}
