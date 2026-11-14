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

// Function: sub_0023AD90
// Address: 0x23ad90 - 0x23ae00
void sub_0023AD90_0x23ad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AD90_0x23ad90");
#endif

    switch (ctx->pc) {
        case 0x23adc0u: goto label_23adc0;
        case 0x23ade0u: goto label_23ade0;
        default: break;
    }

    ctx->pc = 0x23ad90u;

    // 0x23ad90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23ad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23ad94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ad94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ad98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23ad98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23ad9c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23ad9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x23ada0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ada4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23ADA4u;
    {
        const bool branch_taken_0x23ada4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ada4) {
            ctx->pc = 0x23ADE0u;
            goto label_23ade0;
        }
    }
    ctx->pc = 0x23ADACu;
    // 0x23adac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23adacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23adb0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x23adb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x23adb4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x23adb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23adb8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x23ADB8u;
    SET_GPR_U32(ctx, 31, 0x23ADC0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x23ADB8u, 0x23ADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ADC0u;
label_23adc0:
    // 0x23adc0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23adc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23adc4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23adc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23adc8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23adc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23adcc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23ADCCu;
    {
        const bool branch_taken_0x23adcc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23adcc) {
            ctx->pc = 0x23ADE0u;
            goto label_23ade0;
        }
    }
    ctx->pc = 0x23ADD4u;
    // 0x23add4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23add4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23add8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x23ADD8u;
    SET_GPR_U32(ctx, 31, 0x23ADE0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x23ADD8u, 0x23ADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ADE0u;
label_23ade0:
    // 0x23ade0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ade4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ade4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ade8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23ade8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23adec: 0x3e00008  jr          $ra
    ctx->pc = 0x23ADECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ADECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23ADF4u;
    // 0x23adf4: 0x0  nop
    ctx->pc = 0x23adf4u;
    // NOP
    // 0x23adf8: 0x0  nop
    ctx->pc = 0x23adf8u;
    // NOP
    // 0x23adfc: 0x0  nop
    ctx->pc = 0x23adfcu;
    // NOP
    ctx->pc = 0x23ae00u;
}
