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

// Function: sub_00213B60
// Address: 0x213b60 - 0x213b90
void sub_00213B60_0x213b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213B60_0x213b60");
#endif

    switch (ctx->pc) {
        case 0x213b78u: goto label_213b78;
        default: break;
    }

    ctx->pc = 0x213b60u;

    // 0x213b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x213b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x213b64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x213b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x213b68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x213b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x213b6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x213b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213b70: 0xc08ec5c  jal         func_23B170
    ctx->pc = 0x213B70u;
    SET_GPR_U32(ctx, 31, 0x213B78u);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x213B70u, 0x213B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213B78u;
label_213b78:
    // 0x213b78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x213b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213b7c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x213b7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x213b80: 0x3e00008  jr          $ra
    ctx->pc = 0x213B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213B88u;
    // 0x213b88: 0x0  nop
    ctx->pc = 0x213b88u;
    // NOP
    // 0x213b8c: 0x0  nop
    ctx->pc = 0x213b8cu;
    // NOP
    ctx->pc = 0x213b90u;
}
