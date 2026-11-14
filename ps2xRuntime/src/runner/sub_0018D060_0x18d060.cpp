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

// Function: sub_0018D060
// Address: 0x18d060 - 0x18d0a0
void sub_0018D060_0x18d060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D060_0x18d060");
#endif

    switch (ctx->pc) {
        case 0x18d088u: goto label_18d088;
        default: break;
    }

    ctx->pc = 0x18d060u;

    // 0x18d060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18d060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18d064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18d064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18d068: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18d068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18d06c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18d06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x18d070: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x18d070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x18d074: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18d074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d078: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x18d078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d07c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x18d07cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d080: 0xc063428  jal         func_18D0A0
    ctx->pc = 0x18D080u;
    SET_GPR_U32(ctx, 31, 0x18D088u);
    ctx->pc = 0x18D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D0A0u, 0x18D080u, 0x18D088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D088u;
label_18d088:
    // 0x18d088: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18d088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d08c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18d08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d090: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x18d090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18d094: 0x3e00008  jr          $ra
    ctx->pc = 0x18D094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D09Cu;
    // 0x18d09c: 0x0  nop
    ctx->pc = 0x18d09cu;
    // NOP
    ctx->pc = 0x18d0a0u;
}
