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

// Function: sub_001E8DC0
// Address: 0x1e8dc0 - 0x1e8e40
void sub_001E8DC0_0x1e8dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8DC0_0x1e8dc0");
#endif

    switch (ctx->pc) {
        case 0x1e8de8u: goto label_1e8de8;
        case 0x1e8df8u: goto label_1e8df8;
        default: break;
    }

    ctx->pc = 0x1e8dc0u;

    // 0x1e8dc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e8dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e8dc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e8dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e8dc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e8dcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e8dd0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e8dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e8dd4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e8dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1e8dd8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1e8dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1e8ddc: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x1e8ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8de0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E8DE0u;
    {
        const bool branch_taken_0x1e8de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8de0) {
            ctx->pc = 0x1E8E0Cu;
            goto label_1e8e0c;
        }
    }
    ctx->pc = 0x1E8DE8u;
label_1e8de8:
    // 0x1e8de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8dec: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e8decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8df0: 0xc07a300  jal         func_1E8C00
    ctx->pc = 0x1E8DF0u;
    SET_GPR_U32(ctx, 31, 0x1E8DF8u);
    ctx->pc = 0x1E8C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8C00u, 0x1E8DF0u, 0x1E8DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8DF8u;
label_1e8df8:
    // 0x1e8df8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8dfc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1e8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1e8e00: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1e8e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1e8e04: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1e8e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1e8e08: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1e8e08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e8e0c:
    // 0x1e8e0c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e8e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8e10: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e8e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8e14: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E8E14u;
    {
        const bool branch_taken_0x1e8e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e8e14) {
            ctx->pc = 0x1E8DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8de8;
        }
    }
    ctx->pc = 0x1E8E1Cu;
    // 0x1e8e1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e8e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8e20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e8e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8e24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8e24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8e28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8e2c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e8e2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e8e30: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8E38u;
    // 0x1e8e38: 0x0  nop
    ctx->pc = 0x1e8e38u;
    // NOP
    // 0x1e8e3c: 0x0  nop
    ctx->pc = 0x1e8e3cu;
    // NOP
    ctx->pc = 0x1e8e40u;
}
