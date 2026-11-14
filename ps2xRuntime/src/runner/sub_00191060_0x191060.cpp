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

// Function: sub_00191060
// Address: 0x191060 - 0x1910a0
void sub_00191060_0x191060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191060_0x191060");
#endif

    switch (ctx->pc) {
        case 0x191078u: goto label_191078;
        case 0x191088u: goto label_191088;
        default: break;
    }

    ctx->pc = 0x191060u;

    // 0x191060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x191060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x191064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191068: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x191068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x19106c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19106cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191070: 0xc0643a8  jal         func_190EA0
    ctx->pc = 0x191070u;
    SET_GPR_U32(ctx, 31, 0x191078u);
    ctx->pc = 0x190EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190EA0u, 0x191070u, 0x191078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191078u;
label_191078:
    // 0x191078: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x191078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x19107c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19107cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191080: 0xc064428  jal         func_1910A0
    ctx->pc = 0x191080u;
    SET_GPR_U32(ctx, 31, 0x191088u);
    ctx->pc = 0x1910A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1910A0u, 0x191080u, 0x191088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191088u;
label_191088:
    // 0x191088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19108c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19108cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x191090: 0x3e00008  jr          $ra
    ctx->pc = 0x191090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191098u;
    // 0x191098: 0x0  nop
    ctx->pc = 0x191098u;
    // NOP
    // 0x19109c: 0x0  nop
    ctx->pc = 0x19109cu;
    // NOP
    ctx->pc = 0x1910a0u;
}
