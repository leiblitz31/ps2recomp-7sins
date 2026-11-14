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

// Function: sub_00280D70
// Address: 0x280d70 - 0x280db0
void sub_00280D70_0x280d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280D70_0x280d70");
#endif

    switch (ctx->pc) {
        case 0x280d94u: goto label_280d94;
        default: break;
    }

    ctx->pc = 0x280d70u;

    // 0x280d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x280d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x280d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280d78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x280d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x280d7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x280d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x280d80: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x280d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280d84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x280d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280d88: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x280d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280d8c: 0xc0a036c  jal         func_280DB0
    ctx->pc = 0x280D8Cu;
    SET_GPR_U32(ctx, 31, 0x280D94u);
    ctx->pc = 0x280DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280DB0u, 0x280D8Cu, 0x280D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280D94u;
label_280d94:
    // 0x280d94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280d98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x280d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x280d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x280D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280DA4u;
    // 0x280da4: 0x0  nop
    ctx->pc = 0x280da4u;
    // NOP
    // 0x280da8: 0x0  nop
    ctx->pc = 0x280da8u;
    // NOP
    // 0x280dac: 0x0  nop
    ctx->pc = 0x280dacu;
    // NOP
    ctx->pc = 0x280db0u;
}
