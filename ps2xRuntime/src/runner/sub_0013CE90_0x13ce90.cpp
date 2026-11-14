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

// Function: sub_0013CE90
// Address: 0x13ce90 - 0x13cee0
void sub_0013CE90_0x13ce90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CE90_0x13ce90");
#endif

    switch (ctx->pc) {
        case 0x13ceb0u: goto label_13ceb0;
        case 0x13cec8u: goto label_13cec8;
        default: break;
    }

    ctx->pc = 0x13ce90u;

    // 0x13ce90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ce90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13ce94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13ce94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13ce98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13ce98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13ce9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x13cea0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13cea4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x13cea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13cea8: 0xc04f3b8  jal         func_13CEE0
    ctx->pc = 0x13CEA8u;
    SET_GPR_U32(ctx, 31, 0x13CEB0u);
    ctx->pc = 0x13CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CEE0u, 0x13CEA8u, 0x13CEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CEB0u;
label_13ceb0:
    // 0x13ceb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ceb4: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x13ceb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13ceb8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x13ceb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13cebc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13cebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13cec0: 0xc04f428  jal         func_13D0A0
    ctx->pc = 0x13CEC0u;
    SET_GPR_U32(ctx, 31, 0x13CEC8u);
    ctx->pc = 0x13D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D0A0u, 0x13CEC0u, 0x13CEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CEC8u;
label_13cec8:
    // 0x13cec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13cec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cecc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13ceccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13ced0: 0x3e00008  jr          $ra
    ctx->pc = 0x13CED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CED8u;
    // 0x13ced8: 0x0  nop
    ctx->pc = 0x13ced8u;
    // NOP
    // 0x13cedc: 0x0  nop
    ctx->pc = 0x13cedcu;
    // NOP
    ctx->pc = 0x13cee0u;
}
