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

// Function: sub_00183AB0
// Address: 0x183ab0 - 0x183af0
void sub_00183AB0_0x183ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183AB0_0x183ab0");
#endif

    switch (ctx->pc) {
        case 0x183ad4u: goto label_183ad4;
        default: break;
    }

    ctx->pc = 0x183ab0u;

    // 0x183ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183ab8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x183ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x183abc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x183abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x183ac0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x183ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183ac4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x183ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183ac8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183acc: 0xc060ebc  jal         func_183AF0
    ctx->pc = 0x183ACCu;
    SET_GPR_U32(ctx, 31, 0x183AD4u);
    ctx->pc = 0x183AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183AF0u, 0x183ACCu, 0x183AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183AD4u;
label_183ad4:
    // 0x183ad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183ad8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x183ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183adc: 0x3e00008  jr          $ra
    ctx->pc = 0x183ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183AE4u;
    // 0x183ae4: 0x0  nop
    ctx->pc = 0x183ae4u;
    // NOP
    // 0x183ae8: 0x0  nop
    ctx->pc = 0x183ae8u;
    // NOP
    // 0x183aec: 0x0  nop
    ctx->pc = 0x183aecu;
    // NOP
    ctx->pc = 0x183af0u;
}
