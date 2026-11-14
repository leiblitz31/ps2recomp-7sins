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

// Function: sub_001067D0
// Address: 0x1067d0 - 0x106810
void sub_001067D0_0x1067d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001067D0_0x1067d0");
#endif

    switch (ctx->pc) {
        case 0x1067f0u: goto label_1067f0;
        default: break;
    }

    ctx->pc = 0x1067d0u;

    // 0x1067d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1067d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1067d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1067d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1067d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1067d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1067dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1067dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1067e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1067e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1067e4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1067e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1067e8: 0xc041a04  jal         func_106810
    ctx->pc = 0x1067E8u;
    SET_GPR_U32(ctx, 31, 0x1067F0u);
    ctx->pc = 0x106810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106810u, 0x1067E8u, 0x1067F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1067F0u;
label_1067f0:
    // 0x1067f0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1067f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1067f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1067f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1067f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1067f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1067fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1067FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1067FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106804u;
    // 0x106804: 0x0  nop
    ctx->pc = 0x106804u;
    // NOP
    // 0x106808: 0x0  nop
    ctx->pc = 0x106808u;
    // NOP
    // 0x10680c: 0x0  nop
    ctx->pc = 0x10680cu;
    // NOP
    ctx->pc = 0x106810u;
}
