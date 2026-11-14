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

// Function: sub_001C4BA0
// Address: 0x1c4ba0 - 0x1c4be0
void sub_001C4BA0_0x1c4ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4BA0_0x1c4ba0");
#endif

    switch (ctx->pc) {
        case 0x1c4bc4u: goto label_1c4bc4;
        default: break;
    }

    ctx->pc = 0x1c4ba0u;

    // 0x1c4ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c4ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c4ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4ba8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c4ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c4bac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c4bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c4bb0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c4bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4bb4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c4bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4bb8: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x1c4bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1c4bbc: 0xc044834  jal         func_1120D0
    ctx->pc = 0x1C4BBCu;
    SET_GPR_U32(ctx, 31, 0x1C4BC4u);
    ctx->pc = 0x1120D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1120D0u, 0x1C4BBCu, 0x1C4BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BC4u;
label_1c4bc4:
    // 0x1c4bc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4bc8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c4bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c4bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4BD4u;
    // 0x1c4bd4: 0x0  nop
    ctx->pc = 0x1c4bd4u;
    // NOP
    // 0x1c4bd8: 0x0  nop
    ctx->pc = 0x1c4bd8u;
    // NOP
    // 0x1c4bdc: 0x0  nop
    ctx->pc = 0x1c4bdcu;
    // NOP
    ctx->pc = 0x1c4be0u;
}
