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

// Function: sub_0047AD90
// Address: 0x47ad90 - 0x47ae00
void sub_0047AD90_0x47ad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047AD90_0x47ad90");
#endif

    switch (ctx->pc) {
        case 0x47adb8u: goto label_47adb8;
        case 0x47adc8u: goto label_47adc8;
        case 0x47ade8u: goto label_47ade8;
        default: break;
    }

    ctx->pc = 0x47ad90u;

    // 0x47ad90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47ad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47ad94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47ad94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47ad98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x47ad98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47ad9c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x47ad9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x47ada0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47ada4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x47ADA4u;
    {
        const bool branch_taken_0x47ada4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ada4) {
            ctx->pc = 0x47ADE8u;
            goto label_47ade8;
        }
    }
    ctx->pc = 0x47ADACu;
    // 0x47adac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x47adacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47adb0: 0xc11f04c  jal         func_47C130
    ctx->pc = 0x47ADB0u;
    SET_GPR_U32(ctx, 31, 0x47ADB8u);
    ctx->pc = 0x47C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C130u, 0x47ADB0u, 0x47ADB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47ADB8u;
label_47adb8:
    // 0x47adb8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x47adb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47adbc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47adbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x47adc0: 0xc11ead0  jal         func_47AB40
    ctx->pc = 0x47ADC0u;
    SET_GPR_U32(ctx, 31, 0x47ADC8u);
    ctx->pc = 0x47AB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47AB40u, 0x47ADC0u, 0x47ADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47ADC8u;
label_47adc8:
    // 0x47adc8: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x47adc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47adcc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x47adccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x47add0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47add0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x47add4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47ADD4u;
    {
        const bool branch_taken_0x47add4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x47add4) {
            ctx->pc = 0x47ADE8u;
            goto label_47ade8;
        }
    }
    ctx->pc = 0x47ADDCu;
    // 0x47addc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x47addcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47ade0: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x47ADE0u;
    SET_GPR_U32(ctx, 31, 0x47ADE8u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x47ADE0u, 0x47ADE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47ADE8u;
label_47ade8:
    // 0x47ade8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47adec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47adecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47adf0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x47adf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x47adf4: 0x3e00008  jr          $ra
    ctx->pc = 0x47ADF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47ADF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47ADFCu;
    // 0x47adfc: 0x0  nop
    ctx->pc = 0x47adfcu;
    // NOP
    ctx->pc = 0x47ae00u;
}
