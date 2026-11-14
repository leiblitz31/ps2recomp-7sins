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

// Function: sub_00480AB0
// Address: 0x480ab0 - 0x480af0
void sub_00480AB0_0x480ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480AB0_0x480ab0");
#endif

    switch (ctx->pc) {
        case 0x480ac4u: goto label_480ac4;
        case 0x480adcu: goto label_480adc;
        default: break;
    }

    ctx->pc = 0x480ab0u;

    // 0x480ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x480ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x480ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x480ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x480ab8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x480ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x480abc: 0xc1082ca  jal         func_420B28
    ctx->pc = 0x480ABCu;
    SET_GPR_U32(ctx, 31, 0x480AC4u);
    ctx->pc = 0x420B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B28u, 0x480ABCu, 0x480AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480AC4u;
label_480ac4:
    // 0x480ac4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x480ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480ac8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x480ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x480acc: 0x24a50af0  addiu       $a1, $a1, 0xAF0
    ctx->pc = 0x480accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2800));
    // 0x480ad0: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x480ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x480ad4: 0xc1082d8  jal         func_420B60
    ctx->pc = 0x480AD4u;
    SET_GPR_U32(ctx, 31, 0x480ADCu);
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x480AD4u, 0x480ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480ADCu;
label_480adc:
    // 0x480adc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x480adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x480ae0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x480ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x480ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x480AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x480AECu;
    // 0x480aec: 0x0  nop
    ctx->pc = 0x480aecu;
    // NOP
    ctx->pc = 0x480af0u;
}
