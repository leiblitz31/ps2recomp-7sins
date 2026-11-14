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

// Function: sub_0025CBD0
// Address: 0x25cbd0 - 0x25cc50
void sub_0025CBD0_0x25cbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CBD0_0x25cbd0");
#endif

    switch (ctx->pc) {
        case 0x25cbf8u: goto label_25cbf8;
        case 0x25cc08u: goto label_25cc08;
        default: break;
    }

    ctx->pc = 0x25cbd0u;

    // 0x25cbd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25cbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25cbd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25cbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25cbd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25cbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25cbdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25cbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25cbe0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x25cbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x25cbe4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x25cbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x25cbe8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x25cbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x25cbec: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x25cbecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25cbf0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25CBF0u;
    {
        const bool branch_taken_0x25cbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cbf0) {
            ctx->pc = 0x25CC1Cu;
            goto label_25cc1c;
        }
    }
    ctx->pc = 0x25CBF8u;
label_25cbf8:
    // 0x25cbf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25cbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cbfc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x25cbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25cc00: 0xc097314  jal         func_25CC50
    ctx->pc = 0x25CC00u;
    SET_GPR_U32(ctx, 31, 0x25CC08u);
    ctx->pc = 0x25CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC50u, 0x25CC00u, 0x25CC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC08u;
label_25cc08:
    // 0x25cc08: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25cc0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25cc10: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x25cc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x25cc14: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x25cc14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x25cc18: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x25cc18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cc1c:
    // 0x25cc1c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25cc20: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x25CC20u;
    {
        const bool branch_taken_0x25cc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cc20) {
            ctx->pc = 0x25CBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25cbf8;
        }
    }
    ctx->pc = 0x25CC28u;
    // 0x25cc28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25cc28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cc2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25cc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cc30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25cc30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cc34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25cc34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cc38: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x25cc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25cc3c: 0x3e00008  jr          $ra
    ctx->pc = 0x25CC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CC44u;
    // 0x25cc44: 0x0  nop
    ctx->pc = 0x25cc44u;
    // NOP
    // 0x25cc48: 0x0  nop
    ctx->pc = 0x25cc48u;
    // NOP
    // 0x25cc4c: 0x0  nop
    ctx->pc = 0x25cc4cu;
    // NOP
    ctx->pc = 0x25cc50u;
}
