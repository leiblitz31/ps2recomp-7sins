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

// Function: sub_00163360
// Address: 0x163360 - 0x1633a0
void sub_00163360_0x163360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163360_0x163360");
#endif

    switch (ctx->pc) {
        case 0x163378u: goto label_163378;
        case 0x163388u: goto label_163388;
        default: break;
    }

    ctx->pc = 0x163360u;

    // 0x163360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x163360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x163364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x163364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163368: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x163368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x16336c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x16336cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x163370: 0xc058d28  jal         func_1634A0
    ctx->pc = 0x163370u;
    SET_GPR_U32(ctx, 31, 0x163378u);
    ctx->pc = 0x1634A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1634A0u, 0x163370u, 0x163378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163378u;
label_163378:
    // 0x163378: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x163378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16337c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16337cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163380: 0xc058ce8  jal         func_1633A0
    ctx->pc = 0x163380u;
    SET_GPR_U32(ctx, 31, 0x163388u);
    ctx->pc = 0x1633A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1633A0u, 0x163380u, 0x163388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163388u;
label_163388:
    // 0x163388: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x163388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16338c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16338cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163390: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x163390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x163394: 0x3e00008  jr          $ra
    ctx->pc = 0x163394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16339Cu;
    // 0x16339c: 0x0  nop
    ctx->pc = 0x16339cu;
    // NOP
    ctx->pc = 0x1633a0u;
}
