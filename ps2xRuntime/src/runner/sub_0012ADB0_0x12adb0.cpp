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

// Function: sub_0012ADB0
// Address: 0x12adb0 - 0x12ae30
void sub_0012ADB0_0x12adb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012ADB0_0x12adb0");
#endif

    switch (ctx->pc) {
        case 0x12adc8u: goto label_12adc8;
        case 0x12adf0u: goto label_12adf0;
        case 0x12ae00u: goto label_12ae00;
        default: break;
    }

    ctx->pc = 0x12adb0u;

    // 0x12adb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12adb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12adb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12adb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12adb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12adb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12adbc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12adbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12adc0: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x12ADC0u;
    SET_GPR_U32(ctx, 31, 0x12ADC8u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x12ADC0u, 0x12ADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ADC8u;
label_12adc8:
    // 0x12adc8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x12adc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x12adcc: 0x246336e0  addiu       $v1, $v1, 0x36E0
    ctx->pc = 0x12adccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14048));
    // 0x12add0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12add0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12add4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12add4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12add8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12add8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12addc: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x12addcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x12ade0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ade4: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x12ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12ade8: 0xc04acf4  jal         func_12B3D0
    ctx->pc = 0x12ADE8u;
    SET_GPR_U32(ctx, 31, 0x12ADF0u);
    ctx->pc = 0x12B3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B3D0u, 0x12ADE8u, 0x12ADF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ADF0u;
label_12adf0:
    // 0x12adf0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12adf4: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x12adf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x12adf8: 0xc04ac9c  jal         func_12B270
    ctx->pc = 0x12ADF8u;
    SET_GPR_U32(ctx, 31, 0x12AE00u);
    ctx->pc = 0x12B270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B270u, 0x12ADF8u, 0x12AE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AE00u;
label_12ae00:
    // 0x12ae00: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12ae00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12ae04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ae08: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x12ae08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x12ae0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ae10: 0xaf82ba64  sw          $v0, -0x459C($gp)
    ctx->pc = 0x12ae10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949476), GPR_U32(ctx, 2));
    // 0x12ae14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ae18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ae18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ae1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12ae1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12ae20: 0x3e00008  jr          $ra
    ctx->pc = 0x12AE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12AE28u;
    // 0x12ae28: 0x0  nop
    ctx->pc = 0x12ae28u;
    // NOP
    // 0x12ae2c: 0x0  nop
    ctx->pc = 0x12ae2cu;
    // NOP
    ctx->pc = 0x12ae30u;
}
