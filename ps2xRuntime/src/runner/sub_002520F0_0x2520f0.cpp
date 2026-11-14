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

// Function: sub_002520F0
// Address: 0x2520f0 - 0x252130
void sub_002520F0_0x2520f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002520F0_0x2520f0");
#endif

    switch (ctx->pc) {
        case 0x252120u: goto label_252120;
        default: break;
    }

    ctx->pc = 0x2520f0u;

    // 0x2520f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2520f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2520f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2520f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2520f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2520f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2520fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2520fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x252100: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x252100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x252104: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x252104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x252108: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x252108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25210c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x25210cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252110: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x252110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252114: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x252114u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252118: 0xc094918  jal         func_252460
    ctx->pc = 0x252118u;
    SET_GPR_U32(ctx, 31, 0x252120u);
    ctx->pc = 0x252460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252460u, 0x252118u, 0x252120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252120u;
label_252120:
    // 0x252120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252124: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x252124u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x252128: 0x3e00008  jr          $ra
    ctx->pc = 0x252128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252130u;
}
