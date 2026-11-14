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

// Function: sub_001953E0
// Address: 0x1953e0 - 0x195420
void sub_001953E0_0x1953e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001953E0_0x1953e0");
#endif

    switch (ctx->pc) {
        case 0x1953f8u: goto label_1953f8;
        case 0x195408u: goto label_195408;
        default: break;
    }

    ctx->pc = 0x1953e0u;

    // 0x1953e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1953e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1953e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1953e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1953e8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1953e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1953ec: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1953ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1953f0: 0xc065548  jal         func_195520
    ctx->pc = 0x1953F0u;
    SET_GPR_U32(ctx, 31, 0x1953F8u);
    ctx->pc = 0x195520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195520u, 0x1953F0u, 0x1953F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1953F8u;
label_1953f8:
    // 0x1953f8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1953f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1953fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1953fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195400: 0xc065508  jal         func_195420
    ctx->pc = 0x195400u;
    SET_GPR_U32(ctx, 31, 0x195408u);
    ctx->pc = 0x195420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195420u, 0x195400u, 0x195408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195408u;
label_195408:
    // 0x195408: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x195408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19540c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19540cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195410: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x195410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x195414: 0x3e00008  jr          $ra
    ctx->pc = 0x195414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19541Cu;
    // 0x19541c: 0x0  nop
    ctx->pc = 0x19541cu;
    // NOP
    ctx->pc = 0x195420u;
}
