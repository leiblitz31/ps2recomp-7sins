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

// Function: sub_0025AD30
// Address: 0x25ad30 - 0x25adb0
void sub_0025AD30_0x25ad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AD30_0x25ad30");
#endif

    switch (ctx->pc) {
        case 0x25ad54u: goto label_25ad54;
        case 0x25ad60u: goto label_25ad60;
        case 0x25ad90u: goto label_25ad90;
        default: break;
    }

    ctx->pc = 0x25ad30u;

    // 0x25ad30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25ad30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25ad34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25ad34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25ad38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25ad38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25ad3c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25ad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25ad40: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x25ad40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x25ad44: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ad48: 0x24440174  addiu       $a0, $v0, 0x174
    ctx->pc = 0x25ad48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 372));
    // 0x25ad4c: 0xc095a2c  jal         func_2568B0
    ctx->pc = 0x25AD4Cu;
    SET_GPR_U32(ctx, 31, 0x25AD54u);
    ctx->pc = 0x2568B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2568B0u, 0x25AD4Cu, 0x25AD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AD54u;
label_25ad54:
    // 0x25ad54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25ad54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ad58: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25AD58u;
    {
        const bool branch_taken_0x25ad58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ad58) {
            ctx->pc = 0x25AD80u;
            goto label_25ad80;
        }
    }
    ctx->pc = 0x25AD60u;
label_25ad60:
    // 0x25ad60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25ad60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25ad64: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ad68: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25AD68u;
    {
        const bool branch_taken_0x25ad68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25ad68) {
            ctx->pc = 0x25AD7Cu;
            goto label_25ad7c;
        }
    }
    ctx->pc = 0x25AD70u;
    // 0x25ad70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ad74: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25AD74u;
    {
        const bool branch_taken_0x25ad74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ad74) {
            ctx->pc = 0x25AD9Cu;
            goto label_25ad9c;
        }
    }
    ctx->pc = 0x25AD7Cu;
label_25ad7c:
    // 0x25ad7c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x25ad7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_25ad80:
    // 0x25ad80: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ad84: 0x24440174  addiu       $a0, $v0, 0x174
    ctx->pc = 0x25ad84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 372));
    // 0x25ad88: 0xc095a24  jal         func_256890
    ctx->pc = 0x25AD88u;
    SET_GPR_U32(ctx, 31, 0x25AD90u);
    ctx->pc = 0x256890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256890u, 0x25AD88u, 0x25AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AD90u;
label_25ad90:
    // 0x25ad90: 0x1602fff3  bne         $s0, $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x25AD90u;
    {
        const bool branch_taken_0x25ad90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x25ad90) {
            ctx->pc = 0x25AD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ad60;
        }
    }
    ctx->pc = 0x25AD98u;
    // 0x25ad98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25ad98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ad9c:
    // 0x25ad9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25ad9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ada0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ada0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ada4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25ada4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25ada8: 0x3e00008  jr          $ra
    ctx->pc = 0x25ADA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ADA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25ADB0u;
}
