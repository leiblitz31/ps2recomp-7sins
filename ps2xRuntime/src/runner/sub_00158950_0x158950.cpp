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

// Function: sub_00158950
// Address: 0x158950 - 0x158990
void sub_00158950_0x158950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158950_0x158950");
#endif

    switch (ctx->pc) {
        case 0x158968u: goto label_158968;
        case 0x158978u: goto label_158978;
        default: break;
    }

    ctx->pc = 0x158950u;

    // 0x158950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x158950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x158954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x158958: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x158958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x15895c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x15895cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x158960: 0xc0562a4  jal         func_158A90
    ctx->pc = 0x158960u;
    SET_GPR_U32(ctx, 31, 0x158968u);
    ctx->pc = 0x158A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158A90u, 0x158960u, 0x158968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158968u;
label_158968:
    // 0x158968: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x158968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15896c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15896cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158970: 0xc056264  jal         func_158990
    ctx->pc = 0x158970u;
    SET_GPR_U32(ctx, 31, 0x158978u);
    ctx->pc = 0x158990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158990u, 0x158970u, 0x158978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158978u;
label_158978:
    // 0x158978: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x158978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15897c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15897cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158980: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x158980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158984: 0x3e00008  jr          $ra
    ctx->pc = 0x158984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15898Cu;
    // 0x15898c: 0x0  nop
    ctx->pc = 0x15898cu;
    // NOP
    ctx->pc = 0x158990u;
}
