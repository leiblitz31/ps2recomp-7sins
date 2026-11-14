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

// Function: sub_00293D90
// Address: 0x293d90 - 0x293e10
void sub_00293D90_0x293d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293D90_0x293d90");
#endif

    switch (ctx->pc) {
        case 0x293db8u: goto label_293db8;
        case 0x293dc8u: goto label_293dc8;
        default: break;
    }

    ctx->pc = 0x293d90u;

    // 0x293d90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x293d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x293d94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x293d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x293d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x293d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x293d9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x293d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x293da0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x293da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x293da4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x293da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x293da8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x293da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x293dac: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x293dacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293db0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x293DB0u;
    {
        const bool branch_taken_0x293db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293db0) {
            ctx->pc = 0x293DDCu;
            goto label_293ddc;
        }
    }
    ctx->pc = 0x293DB8u;
label_293db8:
    // 0x293db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x293db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293dbc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x293dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293dc0: 0xc0a4f84  jal         func_293E10
    ctx->pc = 0x293DC0u;
    SET_GPR_U32(ctx, 31, 0x293DC8u);
    ctx->pc = 0x293E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293E10u, 0x293DC0u, 0x293DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293DC8u;
label_293dc8:
    // 0x293dc8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x293dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x293dcc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x293dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x293dd0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x293dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x293dd4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x293dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x293dd8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x293dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_293ddc:
    // 0x293ddc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x293ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x293de0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x293DE0u;
    {
        const bool branch_taken_0x293de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293de0) {
            ctx->pc = 0x293DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293db8;
        }
    }
    ctx->pc = 0x293DE8u;
    // 0x293de8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x293de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293dec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x293decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293df0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x293df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293df4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x293df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293df8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x293df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x293dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x293DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293E04u;
    // 0x293e04: 0x0  nop
    ctx->pc = 0x293e04u;
    // NOP
    // 0x293e08: 0x0  nop
    ctx->pc = 0x293e08u;
    // NOP
    // 0x293e0c: 0x0  nop
    ctx->pc = 0x293e0cu;
    // NOP
    ctx->pc = 0x293e10u;
}
