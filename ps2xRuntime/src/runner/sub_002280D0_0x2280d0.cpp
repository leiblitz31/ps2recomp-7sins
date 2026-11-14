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

// Function: sub_002280D0
// Address: 0x2280d0 - 0x228120
void sub_002280D0_0x2280d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002280D0_0x2280d0");
#endif

    switch (ctx->pc) {
        case 0x228108u: goto label_228108;
        default: break;
    }

    ctx->pc = 0x2280d0u;

    // 0x2280d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2280d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2280d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2280d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2280d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2280d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2280dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2280dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2280e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2280e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2280e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2280e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2280e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2280e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2280ec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2280ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2280f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2280f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2280f4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2280f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2280f8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2280f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2280fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2280fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228100: 0xc08a048  jal         func_228120
    ctx->pc = 0x228100u;
    SET_GPR_U32(ctx, 31, 0x228108u);
    ctx->pc = 0x228120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228120u, 0x228100u, 0x228108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228108u;
label_228108:
    // 0x228108: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x228108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22810c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22810cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228110: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x228110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x228114: 0x3e00008  jr          $ra
    ctx->pc = 0x228114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22811Cu;
    // 0x22811c: 0x0  nop
    ctx->pc = 0x22811cu;
    // NOP
    ctx->pc = 0x228120u;
}
