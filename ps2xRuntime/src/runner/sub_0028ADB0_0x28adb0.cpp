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

// Function: sub_0028ADB0
// Address: 0x28adb0 - 0x28ae10
void sub_0028ADB0_0x28adb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028ADB0_0x28adb0");
#endif

    switch (ctx->pc) {
        case 0x28add4u: goto label_28add4;
        case 0x28adfcu: goto label_28adfc;
        default: break;
    }

    ctx->pc = 0x28adb0u;

    // 0x28adb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28adb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28adb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28adb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28adb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x28adb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28adbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28adbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x28adc0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x28adc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x28adc4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28adc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28adc8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x28adc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28adcc: 0xc0a2bac  jal         func_28AEB0
    ctx->pc = 0x28ADCCu;
    SET_GPR_U32(ctx, 31, 0x28ADD4u);
    ctx->pc = 0x28AEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AEB0u, 0x28ADCCu, 0x28ADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ADD4u;
label_28add4:
    // 0x28add4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28add4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28add8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x28add8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x28addc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x28addcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ade0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x28ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ade4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x28ade4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x28ade8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x28ade8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28adec: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x28adecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28adf0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28adf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28adf4: 0xc0a2b84  jal         func_28AE10
    ctx->pc = 0x28ADF4u;
    SET_GPR_U32(ctx, 31, 0x28ADFCu);
    ctx->pc = 0x28AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AE10u, 0x28ADF4u, 0x28ADFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ADFCu;
label_28adfc:
    // 0x28adfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ae00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ae00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ae04: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28ae04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28ae08: 0x3e00008  jr          $ra
    ctx->pc = 0x28AE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AE10u;
}
