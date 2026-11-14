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

// Function: sub_0046F4D0
// Address: 0x46f4d0 - 0x46f520
void sub_0046F4D0_0x46f4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046F4D0_0x46f4d0");
#endif

    switch (ctx->pc) {
        case 0x46f4f4u: goto label_46f4f4;
        case 0x46f508u: goto label_46f508;
        default: break;
    }

    ctx->pc = 0x46f4d0u;

    // 0x46f4d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46f4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46f4d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46f4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46f4d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46f4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46f4dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46f4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46f4e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46f4e4: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x46f4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x46f4e8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46f4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46f4ec: 0xc11b340  jal         func_46CD00
    ctx->pc = 0x46F4ECu;
    SET_GPR_U32(ctx, 31, 0x46F4F4u);
    ctx->pc = 0x46CD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CD00u, 0x46F4ECu, 0x46F4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F4F4u;
label_46f4f4:
    // 0x46f4f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46f4f8: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x46f4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x46f4fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46f4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46f500: 0xc11a410  jal         func_469040
    ctx->pc = 0x46F500u;
    SET_GPR_U32(ctx, 31, 0x46F508u);
    ctx->pc = 0x469040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469040u, 0x46F500u, 0x46F508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F508u;
label_46f508:
    // 0x46f508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46f508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46f50c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46f50cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46f510: 0x3e00008  jr          $ra
    ctx->pc = 0x46F510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46F518u;
    // 0x46f518: 0x0  nop
    ctx->pc = 0x46f518u;
    // NOP
    // 0x46f51c: 0x0  nop
    ctx->pc = 0x46f51cu;
    // NOP
    ctx->pc = 0x46f520u;
}
