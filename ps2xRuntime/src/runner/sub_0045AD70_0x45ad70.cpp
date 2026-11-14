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

// Function: sub_0045AD70
// Address: 0x45ad70 - 0x45ae10
void sub_0045AD70_0x45ad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045AD70_0x45ad70");
#endif

    switch (ctx->pc) {
        case 0x45ad9cu: goto label_45ad9c;
        case 0x45adb0u: goto label_45adb0;
        case 0x45adc8u: goto label_45adc8;
        default: break;
    }

    ctx->pc = 0x45ad70u;

    // 0x45ad70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x45ad70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x45ad74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x45ad74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x45ad78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45ad78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x45ad7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45ad7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x45ad80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45ad80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45ad84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45ad84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45ad88: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x45ad88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x45ad8c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x45ad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x45ad90: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x45ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45ad94: 0xc116738  jal         func_459CE0
    ctx->pc = 0x45AD94u;
    SET_GPR_U32(ctx, 31, 0x45AD9Cu);
    ctx->pc = 0x459CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459CE0u, 0x45AD94u, 0x45AD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45AD9Cu;
label_45ad9c:
    // 0x45ad9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x45ad9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ada0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x45ada0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ada4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x45ada4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ada8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x45ADA8u;
    {
        const bool branch_taken_0x45ada8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ada8) {
            ctx->pc = 0x45ADE0u;
            goto label_45ade0;
        }
    }
    ctx->pc = 0x45ADB0u;
label_45adb0:
    // 0x45adb0: 0x8fb30060  lw          $s3, 0x60($sp)
    ctx->pc = 0x45adb0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45adb4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x45adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45adb8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x45adb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45adbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x45adbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45adc0: 0xc116864  jal         func_45A190
    ctx->pc = 0x45ADC0u;
    SET_GPR_U32(ctx, 31, 0x45ADC8u);
    ctx->pc = 0x45A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A190u, 0x45ADC0u, 0x45ADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45ADC8u;
label_45adc8:
    // 0x45adc8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45adcc: 0x8c42011c  lw          $v0, 0x11C($v0)
    ctx->pc = 0x45adccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 284)));
    // 0x45add0: 0x16620002  bne         $s3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x45ADD0u;
    {
        const bool branch_taken_0x45add0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x45add0) {
            ctx->pc = 0x45ADDCu;
            goto label_45addc;
        }
    }
    ctx->pc = 0x45ADD8u;
    // 0x45add8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x45add8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_45addc:
    // 0x45addc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x45addcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_45ade0:
    // 0x45ade0: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x45ade0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x45ade4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x45ADE4u;
    {
        const bool branch_taken_0x45ade4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45ade4) {
            ctx->pc = 0x45ADB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45adb0;
        }
    }
    ctx->pc = 0x45ADECu;
    // 0x45adec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x45adecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45adf0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x45adf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45adf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45adf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45adf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45adf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45adfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45adfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45ae00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45ae00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45ae04: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x45ae04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x45ae08: 0x3e00008  jr          $ra
    ctx->pc = 0x45AE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45AE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45AE10u;
}
