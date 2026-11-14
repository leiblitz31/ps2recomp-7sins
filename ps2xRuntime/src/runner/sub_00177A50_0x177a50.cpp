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

// Function: sub_00177A50
// Address: 0x177a50 - 0x177a90
void sub_00177A50_0x177a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177A50_0x177a50");
#endif

    switch (ctx->pc) {
        case 0x177a78u: goto label_177a78;
        default: break;
    }

    ctx->pc = 0x177a50u;

    // 0x177a50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x177a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x177a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177a58: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x177a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x177a5c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x177a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x177a60: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x177a60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x177a64: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x177a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177a68: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x177a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177a6c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x177a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x177a70: 0xc05dea4  jal         func_177A90
    ctx->pc = 0x177A70u;
    SET_GPR_U32(ctx, 31, 0x177A78u);
    ctx->pc = 0x177A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177A90u, 0x177A70u, 0x177A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A78u;
label_177a78:
    // 0x177a78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177a7c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x177a7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x177a80: 0x3e00008  jr          $ra
    ctx->pc = 0x177A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177A88u;
    // 0x177a88: 0x0  nop
    ctx->pc = 0x177a88u;
    // NOP
    // 0x177a8c: 0x0  nop
    ctx->pc = 0x177a8cu;
    // NOP
    ctx->pc = 0x177a90u;
}
