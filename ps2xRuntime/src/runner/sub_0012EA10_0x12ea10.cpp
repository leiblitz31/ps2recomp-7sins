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

// Function: sub_0012EA10
// Address: 0x12ea10 - 0x12eaa0
void sub_0012EA10_0x12ea10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EA10_0x12ea10");
#endif

    switch (ctx->pc) {
        case 0x12ea30u: goto label_12ea30;
        case 0x12ea44u: goto label_12ea44;
        case 0x12ea5cu: goto label_12ea5c;
        case 0x12ea68u: goto label_12ea68;
        default: break;
    }

    ctx->pc = 0x12ea10u;

    // 0x12ea10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12ea10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12ea14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12ea14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12ea18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12ea18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12ea1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12ea1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12ea20: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x12ea20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x12ea24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12ea24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea28: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x12EA28u;
    {
        const bool branch_taken_0x12ea28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ea28) {
            ctx->pc = 0x12EA70u;
            goto label_12ea70;
        }
    }
    ctx->pc = 0x12EA30u;
label_12ea30:
    // 0x12ea30: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x12ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12ea34: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x12ea34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12ea38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12ea38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea3c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12EA3Cu;
    SET_GPR_U32(ctx, 31, 0x12EA44u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12EA3Cu, 0x12EA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EA44u;
label_12ea44:
    // 0x12ea44: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x12ea44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ea48: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12EA48u;
    {
        const bool branch_taken_0x12ea48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ea48) {
            ctx->pc = 0x12EA6Cu;
            goto label_12ea6c;
        }
    }
    ctx->pc = 0x12EA50u;
    // 0x12ea50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ea50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea54: 0xc04baa8  jal         func_12EAA0
    ctx->pc = 0x12EA54u;
    SET_GPR_U32(ctx, 31, 0x12EA5Cu);
    ctx->pc = 0x12EAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EAA0u, 0x12EA54u, 0x12EA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EA5Cu;
label_12ea5c:
    // 0x12ea5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ea5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea60: 0xc119c5c  jal         func_467170
    ctx->pc = 0x12EA60u;
    SET_GPR_U32(ctx, 31, 0x12EA68u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x12EA60u, 0x12EA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EA68u;
label_12ea68:
    // 0x12ea68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12ea68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ea6c:
    // 0x12ea6c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12ea6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12ea70:
    // 0x12ea70: 0x2e23007f  sltiu       $v1, $s1, 0x7F
    ctx->pc = 0x12ea70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x12ea74: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12EA74u;
    {
        const bool branch_taken_0x12ea74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ea74) {
            ctx->pc = 0x12EA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ea30;
        }
    }
    ctx->pc = 0x12EA7Cu;
    // 0x12ea7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12ea7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ea80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12ea80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ea84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12ea84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ea88: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x12ea88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12ea8c: 0x3e00008  jr          $ra
    ctx->pc = 0x12EA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EA8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EA94u;
    // 0x12ea94: 0x0  nop
    ctx->pc = 0x12ea94u;
    // NOP
    // 0x12ea98: 0x0  nop
    ctx->pc = 0x12ea98u;
    // NOP
    // 0x12ea9c: 0x0  nop
    ctx->pc = 0x12ea9cu;
    // NOP
    ctx->pc = 0x12eaa0u;
}
