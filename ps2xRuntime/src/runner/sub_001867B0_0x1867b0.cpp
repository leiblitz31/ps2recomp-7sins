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

// Function: sub_001867B0
// Address: 0x1867b0 - 0x1867f0
void sub_001867B0_0x1867b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001867B0_0x1867b0");
#endif

    switch (ctx->pc) {
        case 0x1867d0u: goto label_1867d0;
        default: break;
    }

    ctx->pc = 0x1867b0u;

    // 0x1867b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1867b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1867b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1867b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1867b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1867b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1867bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1867bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1867c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1867c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1867c4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1867c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1867c8: 0xc0619fc  jal         func_1867F0
    ctx->pc = 0x1867C8u;
    SET_GPR_U32(ctx, 31, 0x1867D0u);
    ctx->pc = 0x1867F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1867F0u, 0x1867C8u, 0x1867D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1867D0u;
label_1867d0:
    // 0x1867d0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1867d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1867d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1867d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1867d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1867d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1867dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1867DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1867DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1867E4u;
    // 0x1867e4: 0x0  nop
    ctx->pc = 0x1867e4u;
    // NOP
    // 0x1867e8: 0x0  nop
    ctx->pc = 0x1867e8u;
    // NOP
    // 0x1867ec: 0x0  nop
    ctx->pc = 0x1867ecu;
    // NOP
    ctx->pc = 0x1867f0u;
}
