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

// Function: sub_00466B50
// Address: 0x466b50 - 0x466b80
void sub_00466B50_0x466b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466B50_0x466b50");
#endif

    switch (ctx->pc) {
        case 0x466b70u: goto label_466b70;
        default: break;
    }

    ctx->pc = 0x466b50u;

    // 0x466b50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x466b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x466b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x466b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x466b58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x466b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x466b5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x466b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x466b60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x466b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x466b64: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x466b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x466b68: 0xc119d08  jal         func_467420
    ctx->pc = 0x466B68u;
    SET_GPR_U32(ctx, 31, 0x466B70u);
    ctx->pc = 0x467420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467420u, 0x466B68u, 0x466B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466B70u;
label_466b70:
    // 0x466b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x466b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x466b74: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x466b74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x466b78: 0x3e00008  jr          $ra
    ctx->pc = 0x466B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466B80u;
}
