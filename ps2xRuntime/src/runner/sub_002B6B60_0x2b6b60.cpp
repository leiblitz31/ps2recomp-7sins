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

// Function: sub_002B6B60
// Address: 0x2b6b60 - 0x2b6bb0
void sub_002B6B60_0x2b6b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6B60_0x2b6b60");
#endif

    switch (ctx->pc) {
        case 0x2b6b98u: goto label_2b6b98;
        default: break;
    }

    ctx->pc = 0x2b6b60u;

    // 0x2b6b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b6b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b6b64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6b68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b6b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b6b6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2b6b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2b6b70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6b74: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b6b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b6b78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6b7c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2b6b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2b6b80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6b84: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2b6b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2b6b88: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2b6b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6b8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b6b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6b90: 0xc0adaec  jal         func_2B6BB0
    ctx->pc = 0x2B6B90u;
    SET_GPR_U32(ctx, 31, 0x2B6B98u);
    ctx->pc = 0x2B6BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6BB0u, 0x2B6B90u, 0x2B6B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6B98u;
label_2b6b98:
    // 0x2b6b98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6b9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6ba0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b6ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b6ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6BACu;
    // 0x2b6bac: 0x0  nop
    ctx->pc = 0x2b6bacu;
    // NOP
    ctx->pc = 0x2b6bb0u;
}
