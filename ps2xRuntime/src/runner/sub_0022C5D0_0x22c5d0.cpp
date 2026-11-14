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

// Function: sub_0022C5D0
// Address: 0x22c5d0 - 0x22c610
void sub_0022C5D0_0x22c5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C5D0_0x22c5d0");
#endif

    switch (ctx->pc) {
        case 0x22c5e8u: goto label_22c5e8;
        case 0x22c5f8u: goto label_22c5f8;
        default: break;
    }

    ctx->pc = 0x22c5d0u;

    // 0x22c5d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22c5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22c5d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c5d8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22c5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22c5dc: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x22c5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x22c5e0: 0xc08b1c4  jal         func_22C710
    ctx->pc = 0x22C5E0u;
    SET_GPR_U32(ctx, 31, 0x22C5E8u);
    ctx->pc = 0x22C710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C710u, 0x22C5E0u, 0x22C5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C5E8u;
label_22c5e8:
    // 0x22c5e8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22c5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c5ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22c5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c5f0: 0xc08b184  jal         func_22C610
    ctx->pc = 0x22C5F0u;
    SET_GPR_U32(ctx, 31, 0x22C5F8u);
    ctx->pc = 0x22C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C610u, 0x22C5F0u, 0x22C5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C5F8u;
label_22c5f8:
    // 0x22c5f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c5fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c600: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22c600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22c604: 0x3e00008  jr          $ra
    ctx->pc = 0x22C604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C60Cu;
    // 0x22c60c: 0x0  nop
    ctx->pc = 0x22c60cu;
    // NOP
    ctx->pc = 0x22c610u;
}
