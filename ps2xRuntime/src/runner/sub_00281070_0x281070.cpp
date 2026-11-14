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

// Function: sub_00281070
// Address: 0x281070 - 0x2810a0
void sub_00281070_0x281070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281070_0x281070");
#endif

    switch (ctx->pc) {
        case 0x281088u: goto label_281088;
        default: break;
    }

    ctx->pc = 0x281070u;

    // 0x281070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281078: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x281078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28107c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28107cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281080: 0xc0a0428  jal         func_2810A0
    ctx->pc = 0x281080u;
    SET_GPR_U32(ctx, 31, 0x281088u);
    ctx->pc = 0x2810A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2810A0u, 0x281080u, 0x281088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281088u;
label_281088:
    // 0x281088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28108c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28108cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281090: 0x3e00008  jr          $ra
    ctx->pc = 0x281090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281098u;
    // 0x281098: 0x0  nop
    ctx->pc = 0x281098u;
    // NOP
    // 0x28109c: 0x0  nop
    ctx->pc = 0x28109cu;
    // NOP
    ctx->pc = 0x2810a0u;
}
