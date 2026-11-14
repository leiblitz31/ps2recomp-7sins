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

// Function: sub_00190510
// Address: 0x190510 - 0x190550
void sub_00190510_0x190510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190510_0x190510");
#endif

    switch (ctx->pc) {
        case 0x190534u: goto label_190534;
        default: break;
    }

    ctx->pc = 0x190510u;

    // 0x190510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x190510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x190514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190518: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x190518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19051c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19051cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x190520: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x190520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190524: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x190524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190528: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x190528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19052c: 0xc064154  jal         func_190550
    ctx->pc = 0x19052Cu;
    SET_GPR_U32(ctx, 31, 0x190534u);
    ctx->pc = 0x190550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190550u, 0x19052Cu, 0x190534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190534u;
label_190534:
    // 0x190534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190538: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x190538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19053c: 0x3e00008  jr          $ra
    ctx->pc = 0x19053Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19053Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190544u;
    // 0x190544: 0x0  nop
    ctx->pc = 0x190544u;
    // NOP
    // 0x190548: 0x0  nop
    ctx->pc = 0x190548u;
    // NOP
    // 0x19054c: 0x0  nop
    ctx->pc = 0x19054cu;
    // NOP
    ctx->pc = 0x190550u;
}
