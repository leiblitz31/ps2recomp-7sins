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

// Function: sub_00158990
// Address: 0x158990 - 0x1589d0
void sub_00158990_0x158990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158990_0x158990");
#endif

    switch (ctx->pc) {
        case 0x1589b0u: goto label_1589b0;
        default: break;
    }

    ctx->pc = 0x158990u;

    // 0x158990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x158990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x158994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x158998: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x158998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15899c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15899cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1589a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1589a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1589a4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1589a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1589a8: 0xc056274  jal         func_1589D0
    ctx->pc = 0x1589A8u;
    SET_GPR_U32(ctx, 31, 0x1589B0u);
    ctx->pc = 0x1589D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1589D0u, 0x1589A8u, 0x1589B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1589B0u;
label_1589b0:
    // 0x1589b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1589b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1589b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1589b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1589b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1589b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1589bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1589BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1589BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1589C4u;
    // 0x1589c4: 0x0  nop
    ctx->pc = 0x1589c4u;
    // NOP
    // 0x1589c8: 0x0  nop
    ctx->pc = 0x1589c8u;
    // NOP
    // 0x1589cc: 0x0  nop
    ctx->pc = 0x1589ccu;
    // NOP
    ctx->pc = 0x1589d0u;
}
