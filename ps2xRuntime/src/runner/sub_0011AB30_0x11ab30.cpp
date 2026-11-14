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

// Function: sub_0011AB30
// Address: 0x11ab30 - 0x11ab60
void sub_0011AB30_0x11ab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AB30_0x11ab30");
#endif

    ctx->pc = 0x11ab30u;

    // 0x11ab30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11ab30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11ab34: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x11ab34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x11ab38: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ab3c: 0xaf83b9d8  sw          $v1, -0x4628($gp)
    ctx->pc = 0x11ab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949336), GPR_U32(ctx, 3));
    // 0x11ab40: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11ab40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ab44: 0xaf83ba8c  sw          $v1, -0x4574($gp)
    ctx->pc = 0x11ab44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949516), GPR_U32(ctx, 3));
    // 0x11ab48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x11ab48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11ab4c: 0x3e00008  jr          $ra
    ctx->pc = 0x11AB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AB54u;
    // 0x11ab54: 0x0  nop
    ctx->pc = 0x11ab54u;
    // NOP
    // 0x11ab58: 0x0  nop
    ctx->pc = 0x11ab58u;
    // NOP
    // 0x11ab5c: 0x0  nop
    ctx->pc = 0x11ab5cu;
    // NOP
    ctx->pc = 0x11ab60u;
}
