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

// Function: sub_00186960
// Address: 0x186960 - 0x1869b0
void sub_00186960_0x186960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186960_0x186960");
#endif

    switch (ctx->pc) {
        case 0x186988u: goto label_186988;
        case 0x186998u: goto label_186998;
        default: break;
    }

    ctx->pc = 0x186960u;

    // 0x186960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x186960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x186964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186968: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x186968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x18696c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x18696cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x186970: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x186970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x186974: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x186974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x186978: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x186978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18697c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x18697cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x186980: 0xc061d80  jal         func_187600
    ctx->pc = 0x186980u;
    SET_GPR_U32(ctx, 31, 0x186988u);
    ctx->pc = 0x187600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187600u, 0x186980u, 0x186988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186988u;
label_186988:
    // 0x186988: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x186988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18698c: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x18698cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x186990: 0xc061a6c  jal         func_1869B0
    ctx->pc = 0x186990u;
    SET_GPR_U32(ctx, 31, 0x186998u);
    ctx->pc = 0x1869B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1869B0u, 0x186990u, 0x186998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186998u;
label_186998:
    // 0x186998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18699c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x18699cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1869a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1869A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1869A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1869A8u;
    // 0x1869a8: 0x0  nop
    ctx->pc = 0x1869a8u;
    // NOP
    // 0x1869ac: 0x0  nop
    ctx->pc = 0x1869acu;
    // NOP
    ctx->pc = 0x1869b0u;
}
