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

// Function: sub_0017A2F0
// Address: 0x17a2f0 - 0x17a370
void sub_0017A2F0_0x17a2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A2F0_0x17a2f0");
#endif

    switch (ctx->pc) {
        case 0x17a318u: goto label_17a318;
        case 0x17a328u: goto label_17a328;
        default: break;
    }

    ctx->pc = 0x17a2f0u;

    // 0x17a2f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17a2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17a2f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17a2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17a2f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a2fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a300: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x17a300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x17a304: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x17a304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x17a308: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x17a308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x17a30c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x17a30cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a310: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17A310u;
    {
        const bool branch_taken_0x17a310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a310) {
            ctx->pc = 0x17A33Cu;
            goto label_17a33c;
        }
    }
    ctx->pc = 0x17A318u;
label_17a318:
    // 0x17a318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a31c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x17a31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a320: 0xc05e8dc  jal         func_17A370
    ctx->pc = 0x17A320u;
    SET_GPR_U32(ctx, 31, 0x17A328u);
    ctx->pc = 0x17A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A370u, 0x17A320u, 0x17A328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A328u;
label_17a328:
    // 0x17a328: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17a328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a32c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17a330: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x17a330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x17a334: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x17a334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x17a338: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x17a338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17a33c:
    // 0x17a33c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a340: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17A340u;
    {
        const bool branch_taken_0x17a340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a340) {
            ctx->pc = 0x17A318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a318;
        }
    }
    ctx->pc = 0x17A348u;
    // 0x17a348: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17a348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a34c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17a34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a350: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a354: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a358: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x17a358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17a35c: 0x3e00008  jr          $ra
    ctx->pc = 0x17A35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A364u;
    // 0x17a364: 0x0  nop
    ctx->pc = 0x17a364u;
    // NOP
    // 0x17a368: 0x0  nop
    ctx->pc = 0x17a368u;
    // NOP
    // 0x17a36c: 0x0  nop
    ctx->pc = 0x17a36cu;
    // NOP
    ctx->pc = 0x17a370u;
}
