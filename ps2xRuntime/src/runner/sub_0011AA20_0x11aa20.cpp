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

// Function: sub_0011AA20
// Address: 0x11aa20 - 0x11aa60
void sub_0011AA20_0x11aa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AA20_0x11aa20");
#endif

    switch (ctx->pc) {
        case 0x11aa44u: goto label_11aa44;
        default: break;
    }

    ctx->pc = 0x11aa20u;

    // 0x11aa20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11aa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11aa24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11aa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11aa28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11aa28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11aa2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11aa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x11aa30: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11aa34: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11aa34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11aa38: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x11aa38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x11aa3c: 0xc042278  jal         func_1089E0
    ctx->pc = 0x11AA3Cu;
    SET_GPR_U32(ctx, 31, 0x11AA44u);
    ctx->pc = 0x1089E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1089E0u, 0x11AA3Cu, 0x11AA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA44u;
label_11aa44:
    // 0x11aa44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11aa44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11aa48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11aa48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11aa4c: 0x3e00008  jr          $ra
    ctx->pc = 0x11AA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AA54u;
    // 0x11aa54: 0x0  nop
    ctx->pc = 0x11aa54u;
    // NOP
    // 0x11aa58: 0x0  nop
    ctx->pc = 0x11aa58u;
    // NOP
    // 0x11aa5c: 0x0  nop
    ctx->pc = 0x11aa5cu;
    // NOP
    ctx->pc = 0x11aa60u;
}
