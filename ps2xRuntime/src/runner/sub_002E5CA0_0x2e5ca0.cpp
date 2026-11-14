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

// Function: sub_002E5CA0
// Address: 0x2e5ca0 - 0x2e5ce0
void sub_002E5CA0_0x2e5ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5CA0_0x2e5ca0");
#endif

    switch (ctx->pc) {
        case 0x2e5cb8u: goto label_2e5cb8;
        case 0x2e5cc8u: goto label_2e5cc8;
        default: break;
    }

    ctx->pc = 0x2e5ca0u;

    // 0x2e5ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e5ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e5ca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e5ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e5ca8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e5ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e5cac: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2e5cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2e5cb0: 0xc0b9778  jal         func_2E5DE0
    ctx->pc = 0x2E5CB0u;
    SET_GPR_U32(ctx, 31, 0x2E5CB8u);
    ctx->pc = 0x2E5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5DE0u, 0x2E5CB0u, 0x2E5CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5CB8u;
label_2e5cb8:
    // 0x2e5cb8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e5cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5cbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e5cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5cc0: 0xc0b9738  jal         func_2E5CE0
    ctx->pc = 0x2E5CC0u;
    SET_GPR_U32(ctx, 31, 0x2E5CC8u);
    ctx->pc = 0x2E5CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5CE0u, 0x2E5CC0u, 0x2E5CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5CC8u;
label_2e5cc8:
    // 0x2e5cc8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e5cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5ccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e5cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5cd0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e5cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e5cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5CDCu;
    // 0x2e5cdc: 0x0  nop
    ctx->pc = 0x2e5cdcu;
    // NOP
    ctx->pc = 0x2e5ce0u;
}
