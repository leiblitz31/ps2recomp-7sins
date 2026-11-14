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

// Function: sub_0025CE00
// Address: 0x25ce00 - 0x25ce80
void sub_0025CE00_0x25ce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CE00_0x25ce00");
#endif

    switch (ctx->pc) {
        case 0x25ce28u: goto label_25ce28;
        case 0x25ce38u: goto label_25ce38;
        default: break;
    }

    ctx->pc = 0x25ce00u;

    // 0x25ce00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25ce00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25ce04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25ce04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25ce08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25ce08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25ce0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25ce0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25ce10: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x25ce10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x25ce14: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x25ce14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x25ce18: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x25ce18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x25ce1c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x25ce1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25ce20: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25CE20u;
    {
        const bool branch_taken_0x25ce20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ce20) {
            ctx->pc = 0x25CE4Cu;
            goto label_25ce4c;
        }
    }
    ctx->pc = 0x25CE28u;
label_25ce28:
    // 0x25ce28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ce28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ce2c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x25ce2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ce30: 0xc097314  jal         func_25CC50
    ctx->pc = 0x25CE30u;
    SET_GPR_U32(ctx, 31, 0x25CE38u);
    ctx->pc = 0x25CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC50u, 0x25CE30u, 0x25CE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CE38u;
label_25ce38:
    // 0x25ce38: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ce3c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25ce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25ce40: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x25ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x25ce44: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x25ce44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x25ce48: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x25ce48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25ce4c:
    // 0x25ce4c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x25ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ce50: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25ce54: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x25CE54u;
    {
        const bool branch_taken_0x25ce54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25ce54) {
            ctx->pc = 0x25CE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ce28;
        }
    }
    ctx->pc = 0x25CE5Cu;
    // 0x25ce5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25ce5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ce60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25ce60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ce64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25ce64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ce68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ce68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ce6c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x25ce6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25ce70: 0x3e00008  jr          $ra
    ctx->pc = 0x25CE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CE78u;
    // 0x25ce78: 0x0  nop
    ctx->pc = 0x25ce78u;
    // NOP
    // 0x25ce7c: 0x0  nop
    ctx->pc = 0x25ce7cu;
    // NOP
    ctx->pc = 0x25ce80u;
}
