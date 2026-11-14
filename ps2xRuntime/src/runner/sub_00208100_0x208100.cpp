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

// Function: sub_00208100
// Address: 0x208100 - 0x208140
void sub_00208100_0x208100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208100_0x208100");
#endif

    switch (ctx->pc) {
        case 0x208128u: goto label_208128;
        default: break;
    }

    ctx->pc = 0x208100u;

    // 0x208100: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x208100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x208104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208108: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x208108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x20810c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x20810cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x208110: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x208110u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x208114: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x208114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208118: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x208118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20811c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x20811cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x208120: 0xc082050  jal         func_208140
    ctx->pc = 0x208120u;
    SET_GPR_U32(ctx, 31, 0x208128u);
    ctx->pc = 0x208140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208140u, 0x208120u, 0x208128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208128u;
label_208128:
    // 0x208128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20812c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x20812cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x208130: 0x3e00008  jr          $ra
    ctx->pc = 0x208130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208138u;
    // 0x208138: 0x0  nop
    ctx->pc = 0x208138u;
    // NOP
    // 0x20813c: 0x0  nop
    ctx->pc = 0x20813cu;
    // NOP
    ctx->pc = 0x208140u;
}
