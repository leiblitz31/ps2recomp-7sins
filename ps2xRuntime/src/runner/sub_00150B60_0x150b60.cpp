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

// Function: sub_00150B60
// Address: 0x150b60 - 0x150ba0
void sub_00150B60_0x150b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150B60_0x150b60");
#endif

    switch (ctx->pc) {
        case 0x150b80u: goto label_150b80;
        default: break;
    }

    ctx->pc = 0x150b60u;

    // 0x150b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x150b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x150b64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150b68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x150b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x150b6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x150b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x150b70: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x150b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150b74: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x150b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150b78: 0xc0542e8  jal         func_150BA0
    ctx->pc = 0x150B78u;
    SET_GPR_U32(ctx, 31, 0x150B80u);
    ctx->pc = 0x150BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150BA0u, 0x150B78u, 0x150B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150B80u;
label_150b80:
    // 0x150b80: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x150b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150b84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150b88: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x150b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x150b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x150B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150B94u;
    // 0x150b94: 0x0  nop
    ctx->pc = 0x150b94u;
    // NOP
    // 0x150b98: 0x0  nop
    ctx->pc = 0x150b98u;
    // NOP
    // 0x150b9c: 0x0  nop
    ctx->pc = 0x150b9cu;
    // NOP
    ctx->pc = 0x150ba0u;
}
