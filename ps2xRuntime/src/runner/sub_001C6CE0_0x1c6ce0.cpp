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

// Function: sub_001C6CE0
// Address: 0x1c6ce0 - 0x1c6d60
void sub_001C6CE0_0x1c6ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6CE0_0x1c6ce0");
#endif

    switch (ctx->pc) {
        case 0x1c6d08u: goto label_1c6d08;
        case 0x1c6d18u: goto label_1c6d18;
        default: break;
    }

    ctx->pc = 0x1c6ce0u;

    // 0x1c6ce0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c6ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c6ce4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c6ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c6ce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c6ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c6cec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c6cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c6cf0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1c6cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1c6cf4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1c6cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1c6cf8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1c6cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1c6cfc: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x1c6cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c6d00: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C6D00u;
    {
        const bool branch_taken_0x1c6d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6d00) {
            ctx->pc = 0x1C6D2Cu;
            goto label_1c6d2c;
        }
    }
    ctx->pc = 0x1C6D08u;
label_1c6d08:
    // 0x1c6d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d0c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1c6d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6d10: 0xc071b68  jal         func_1C6DA0
    ctx->pc = 0x1C6D10u;
    SET_GPR_U32(ctx, 31, 0x1C6D18u);
    ctx->pc = 0x1C6DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6DA0u, 0x1C6D10u, 0x1C6D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D18u;
label_1c6d18:
    // 0x1c6d18: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c6d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6d1c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1c6d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1c6d20: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1c6d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1c6d24: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1c6d24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c6d28: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1c6d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c6d2c:
    // 0x1c6d2c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1c6d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6d30: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c6d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c6d34: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1C6D34u;
    {
        const bool branch_taken_0x1c6d34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c6d34) {
            ctx->pc = 0x1C6D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6d08;
        }
    }
    ctx->pc = 0x1C6D3Cu;
    // 0x1c6d3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c6d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c6d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6d44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c6d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6d48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c6d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6d4c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1c6d4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c6d50: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6D58u;
    // 0x1c6d58: 0x0  nop
    ctx->pc = 0x1c6d58u;
    // NOP
    // 0x1c6d5c: 0x0  nop
    ctx->pc = 0x1c6d5cu;
    // NOP
    ctx->pc = 0x1c6d60u;
}
