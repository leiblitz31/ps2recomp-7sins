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

// Function: sub_0010E980
// Address: 0x10e980 - 0x10e9c0
void sub_0010E980_0x10e980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E980_0x10e980");
#endif

    switch (ctx->pc) {
        case 0x10e9a0u: goto label_10e9a0;
        default: break;
    }

    ctx->pc = 0x10e980u;

    // 0x10e980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10e980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10e984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e988: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10e988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10e98c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10e98cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10e990: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10e990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e994: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x10e994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e998: 0xc042b9c  jal         func_10AE70
    ctx->pc = 0x10E998u;
    SET_GPR_U32(ctx, 31, 0x10E9A0u);
    ctx->pc = 0x10AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE70u, 0x10E998u, 0x10E9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E9A0u;
label_10e9a0:
    // 0x10e9a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e9a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e9a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10e9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10e9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x10E9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E9B4u;
    // 0x10e9b4: 0x0  nop
    ctx->pc = 0x10e9b4u;
    // NOP
    // 0x10e9b8: 0x0  nop
    ctx->pc = 0x10e9b8u;
    // NOP
    // 0x10e9bc: 0x0  nop
    ctx->pc = 0x10e9bcu;
    // NOP
    ctx->pc = 0x10e9c0u;
}
