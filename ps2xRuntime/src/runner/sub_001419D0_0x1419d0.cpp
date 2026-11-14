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

// Function: sub_001419D0
// Address: 0x1419d0 - 0x141a10
void sub_001419D0_0x1419d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001419D0_0x1419d0");
#endif

    switch (ctx->pc) {
        case 0x1419e8u: goto label_1419e8;
        case 0x1419f8u: goto label_1419f8;
        default: break;
    }

    ctx->pc = 0x1419d0u;

    // 0x1419d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1419d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1419d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1419d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1419d8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1419d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1419dc: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1419dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1419e0: 0xc0506c4  jal         func_141B10
    ctx->pc = 0x1419E0u;
    SET_GPR_U32(ctx, 31, 0x1419E8u);
    ctx->pc = 0x141B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141B10u, 0x1419E0u, 0x1419E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1419E8u;
label_1419e8:
    // 0x1419e8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1419e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1419ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1419ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1419f0: 0xc050684  jal         func_141A10
    ctx->pc = 0x1419F0u;
    SET_GPR_U32(ctx, 31, 0x1419F8u);
    ctx->pc = 0x141A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141A10u, 0x1419F0u, 0x1419F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1419F8u;
label_1419f8:
    // 0x1419f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1419f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1419fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1419fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141a00: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x141a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x141a04: 0x3e00008  jr          $ra
    ctx->pc = 0x141A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141A0Cu;
    // 0x141a0c: 0x0  nop
    ctx->pc = 0x141a0cu;
    // NOP
    ctx->pc = 0x141a10u;
}
