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

// Function: sub_00490850
// Address: 0x490850 - 0x490890
void sub_00490850_0x490850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490850_0x490850");
#endif

    switch (ctx->pc) {
        case 0x490870u: goto label_490870;
        default: break;
    }

    ctx->pc = 0x490850u;

    // 0x490850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x490850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x490854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x490854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x490858: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x490858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x49085c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x49085cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x490860: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x490860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490864: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x490864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x490868: 0xc124250  jal         func_490940
    ctx->pc = 0x490868u;
    SET_GPR_U32(ctx, 31, 0x490870u);
    ctx->pc = 0x490940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490940u, 0x490868u, 0x490870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490870u;
label_490870:
    // 0x490870: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x490870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x490874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490878: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x490878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x49087c: 0x3e00008  jr          $ra
    ctx->pc = 0x49087Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49087Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490884u;
    // 0x490884: 0x0  nop
    ctx->pc = 0x490884u;
    // NOP
    // 0x490888: 0x0  nop
    ctx->pc = 0x490888u;
    // NOP
    // 0x49088c: 0x0  nop
    ctx->pc = 0x49088cu;
    // NOP
    ctx->pc = 0x490890u;
}
