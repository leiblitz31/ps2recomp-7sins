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

// Function: sub_0023E060
// Address: 0x23e060 - 0x23e090
void sub_0023E060_0x23e060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E060_0x23e060");
#endif

    switch (ctx->pc) {
        case 0x23e078u: goto label_23e078;
        default: break;
    }

    ctx->pc = 0x23e060u;

    // 0x23e060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23e060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23e064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23e064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23e068: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23e068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23e06c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23e06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e070: 0xc08f824  jal         func_23E090
    ctx->pc = 0x23E070u;
    SET_GPR_U32(ctx, 31, 0x23E078u);
    ctx->pc = 0x23E090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E090u, 0x23E070u, 0x23E078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E078u;
label_23e078:
    // 0x23e078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e07c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23e07cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e080: 0x3e00008  jr          $ra
    ctx->pc = 0x23E080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E088u;
    // 0x23e088: 0x0  nop
    ctx->pc = 0x23e088u;
    // NOP
    // 0x23e08c: 0x0  nop
    ctx->pc = 0x23e08cu;
    // NOP
    ctx->pc = 0x23e090u;
}
