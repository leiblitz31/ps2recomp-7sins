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

// Function: sub_00109AB0
// Address: 0x109ab0 - 0x109af0
void sub_00109AB0_0x109ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109AB0_0x109ab0");
#endif

    switch (ctx->pc) {
        case 0x109accu: goto label_109acc;
        case 0x109adcu: goto label_109adc;
        default: break;
    }

    ctx->pc = 0x109ab0u;

    // 0x109ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x109ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x109ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x109ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x109ab8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x109ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x109abc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x109abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x109ac0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x109ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109ac4: 0xc041864  jal         func_106190
    ctx->pc = 0x109AC4u;
    SET_GPR_U32(ctx, 31, 0x109ACCu);
    ctx->pc = 0x106190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106190u, 0x109AC4u, 0x109ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109ACCu;
label_109acc:
    // 0x109acc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x109accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109ad0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x109ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109ad4: 0xc0426bc  jal         func_109AF0
    ctx->pc = 0x109AD4u;
    SET_GPR_U32(ctx, 31, 0x109ADCu);
    ctx->pc = 0x109AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109AF0u, 0x109AD4u, 0x109ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109ADCu;
label_109adc:
    // 0x109adc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x109adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109ae0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x109ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x109ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x109AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109AECu;
    // 0x109aec: 0x0  nop
    ctx->pc = 0x109aecu;
    // NOP
    ctx->pc = 0x109af0u;
}
