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

// Function: sub_0014ADA0
// Address: 0x14ada0 - 0x14adf0
void sub_0014ADA0_0x14ada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014ADA0_0x14ada0");
#endif

    switch (ctx->pc) {
        case 0x14adc4u: goto label_14adc4;
        case 0x14add4u: goto label_14add4;
        default: break;
    }

    ctx->pc = 0x14ada0u;

    // 0x14ada0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14ada0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14ada4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ada4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ada8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14ada8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14adac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x14adacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x14adb0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x14adb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x14adb4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14adb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14adb8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x14adb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14adbc: 0xc052b7c  jal         func_14ADF0
    ctx->pc = 0x14ADBCu;
    SET_GPR_U32(ctx, 31, 0x14ADC4u);
    ctx->pc = 0x14ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ADF0u, 0x14ADBCu, 0x14ADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ADC4u;
label_14adc4:
    // 0x14adc4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14adc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14adc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14adc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14adcc: 0xc046fec  jal         func_11BFB0
    ctx->pc = 0x14ADCCu;
    SET_GPR_U32(ctx, 31, 0x14ADD4u);
    ctx->pc = 0x11BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BFB0u, 0x14ADCCu, 0x14ADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ADD4u;
label_14add4:
    // 0x14add4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14add4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14add8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x14add8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14addc: 0x3e00008  jr          $ra
    ctx->pc = 0x14ADDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14ADDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14ADE4u;
    // 0x14ade4: 0x0  nop
    ctx->pc = 0x14ade4u;
    // NOP
    // 0x14ade8: 0x0  nop
    ctx->pc = 0x14ade8u;
    // NOP
    // 0x14adec: 0x0  nop
    ctx->pc = 0x14adecu;
    // NOP
    ctx->pc = 0x14adf0u;
}
