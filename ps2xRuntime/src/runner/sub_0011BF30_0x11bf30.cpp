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

// Function: sub_0011BF30
// Address: 0x11bf30 - 0x11bf70
void sub_0011BF30_0x11bf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BF30_0x11bf30");
#endif

    switch (ctx->pc) {
        case 0x11bf50u: goto label_11bf50;
        default: break;
    }

    ctx->pc = 0x11bf30u;

    // 0x11bf30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11bf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11bf34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11bf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11bf38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11bf38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11bf3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11bf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x11bf40: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11bf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bf44: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x11bf44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11bf48: 0xc046fdc  jal         func_11BF70
    ctx->pc = 0x11BF48u;
    SET_GPR_U32(ctx, 31, 0x11BF50u);
    ctx->pc = 0x11BF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BF70u, 0x11BF48u, 0x11BF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF50u;
label_11bf50:
    // 0x11bf50: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bf54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11bf54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bf58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11bf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11bf5c: 0x3e00008  jr          $ra
    ctx->pc = 0x11BF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BF64u;
    // 0x11bf64: 0x0  nop
    ctx->pc = 0x11bf64u;
    // NOP
    // 0x11bf68: 0x0  nop
    ctx->pc = 0x11bf68u;
    // NOP
    // 0x11bf6c: 0x0  nop
    ctx->pc = 0x11bf6cu;
    // NOP
    ctx->pc = 0x11bf70u;
}
