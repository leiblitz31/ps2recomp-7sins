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

// Function: sub_00181710
// Address: 0x181710 - 0x181790
void sub_00181710_0x181710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181710_0x181710");
#endif

    switch (ctx->pc) {
        case 0x181738u: goto label_181738;
        case 0x181748u: goto label_181748;
        default: break;
    }

    ctx->pc = 0x181710u;

    // 0x181710: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x181710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x181714: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x181714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x181718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x181718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18171c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18171cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181720: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x181720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x181724: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x181724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x181728: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x181728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x18172c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x18172cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181730: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x181730u;
    {
        const bool branch_taken_0x181730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181730) {
            ctx->pc = 0x18175Cu;
            goto label_18175c;
        }
    }
    ctx->pc = 0x181738u;
label_181738:
    // 0x181738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18173c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x18173cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181740: 0xc06054c  jal         func_181530
    ctx->pc = 0x181740u;
    SET_GPR_U32(ctx, 31, 0x181748u);
    ctx->pc = 0x181530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181530u, 0x181740u, 0x181748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181748u;
label_181748:
    // 0x181748: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x181748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18174c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x18174cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x181750: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x181750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x181754: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x181754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x181758: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x181758u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18175c:
    // 0x18175c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x18175cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181760: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x181760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x181764: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x181764u;
    {
        const bool branch_taken_0x181764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x181764) {
            ctx->pc = 0x181738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181738;
        }
    }
    ctx->pc = 0x18176Cu;
    // 0x18176c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18176cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181770: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x181770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181774: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181778: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18177c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x18177cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x181780: 0x3e00008  jr          $ra
    ctx->pc = 0x181780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181788u;
    // 0x181788: 0x0  nop
    ctx->pc = 0x181788u;
    // NOP
    // 0x18178c: 0x0  nop
    ctx->pc = 0x18178cu;
    // NOP
    ctx->pc = 0x181790u;
}
