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

// Function: sub_0022C040
// Address: 0x22c040 - 0x22c080
void sub_0022C040_0x22c040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C040_0x22c040");
#endif

    switch (ctx->pc) {
        case 0x22c068u: goto label_22c068;
        default: break;
    }

    ctx->pc = 0x22c040u;

    // 0x22c040: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22c040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22c044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c048: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22c048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22c04c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x22c04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x22c050: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x22c050u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x22c054: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22c054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c058: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x22c058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c05c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x22c05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x22c060: 0xc08b020  jal         func_22C080
    ctx->pc = 0x22C060u;
    SET_GPR_U32(ctx, 31, 0x22C068u);
    ctx->pc = 0x22C080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C080u, 0x22C060u, 0x22C068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C068u;
label_22c068:
    // 0x22c068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c06c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x22c06cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22c070: 0x3e00008  jr          $ra
    ctx->pc = 0x22C070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C078u;
    // 0x22c078: 0x0  nop
    ctx->pc = 0x22c078u;
    // NOP
    // 0x22c07c: 0x0  nop
    ctx->pc = 0x22c07cu;
    // NOP
    ctx->pc = 0x22c080u;
}
