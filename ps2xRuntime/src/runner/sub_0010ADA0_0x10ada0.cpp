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

// Function: sub_0010ADA0
// Address: 0x10ada0 - 0x10ade0
void sub_0010ADA0_0x10ada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010ADA0_0x10ada0");
#endif

    switch (ctx->pc) {
        case 0x10ada0u: goto label_10ada0;
        case 0x10ada4u: goto label_10ada4;
        case 0x10ada8u: goto label_10ada8;
        case 0x10adacu: goto label_10adac;
        case 0x10adb0u: goto label_10adb0;
        case 0x10adb4u: goto label_10adb4;
        case 0x10adb8u: goto label_10adb8;
        case 0x10adbcu: goto label_10adbc;
        case 0x10adc0u: goto label_10adc0;
        case 0x10adc4u: goto label_10adc4;
        case 0x10adc8u: goto label_10adc8;
        case 0x10adccu: goto label_10adcc;
        case 0x10add0u: goto label_10add0;
        case 0x10add4u: goto label_10add4;
        case 0x10add8u: goto label_10add8;
        case 0x10addcu: goto label_10addc;
        default: break;
    }

    ctx->pc = 0x10ada0u;

label_10ada0:
    // 0x10ada0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ada0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_10ada4:
    // 0x10ada4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ada4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10ada8:
    // 0x10ada8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10ada8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_10adac:
    // 0x10adac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10adacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_10adb0:
    // 0x10adb0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x10adb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10adb4:
    // 0x10adb4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10adb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10adb8:
    // 0x10adb8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x10adb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_10adbc:
    // 0x10adbc: 0x320f809  jalr        $t9
label_10adc0:
    if (ctx->pc == 0x10ADC0u) {
        ctx->pc = 0x10ADC4u;
        goto label_10adc4;
    }
    ctx->pc = 0x10ADBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10ADC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ADBCu, 0x10ADC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10ADC4u;
label_10adc4:
    // 0x10adc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10adc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10adc8:
    // 0x10adc8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10adc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_10adcc:
    // 0x10adcc: 0x3e00008  jr          $ra
label_10add0:
    if (ctx->pc == 0x10ADD0u) {
        ctx->pc = 0x10ADD4u;
        goto label_10add4;
    }
    ctx->pc = 0x10ADCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ADCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ADD4u;
label_10add4:
    // 0x10add4: 0x0  nop
    ctx->pc = 0x10add4u;
    // NOP
label_10add8:
    // 0x10add8: 0x0  nop
    ctx->pc = 0x10add8u;
    // NOP
label_10addc:
    // 0x10addc: 0x0  nop
    ctx->pc = 0x10addcu;
    // NOP
    ctx->pc = 0x10ade0u;
}
