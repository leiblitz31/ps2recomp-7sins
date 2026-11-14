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

// Function: sub_00210990
// Address: 0x210990 - 0x2109d0
void sub_00210990_0x210990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210990_0x210990");
#endif

    switch (ctx->pc) {
        case 0x2109a8u: goto label_2109a8;
        case 0x2109b8u: goto label_2109b8;
        default: break;
    }

    ctx->pc = 0x210990u;

    // 0x210990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x210990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x210994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x210994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x210998: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x210998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x21099c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x21099cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2109a0: 0xc084298  jal         func_210A60
    ctx->pc = 0x2109A0u;
    SET_GPR_U32(ctx, 31, 0x2109A8u);
    ctx->pc = 0x210A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210A60u, 0x2109A0u, 0x2109A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2109A8u;
label_2109a8:
    // 0x2109a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2109a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2109ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2109acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2109b0: 0xc084274  jal         func_2109D0
    ctx->pc = 0x2109B0u;
    SET_GPR_U32(ctx, 31, 0x2109B8u);
    ctx->pc = 0x2109D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2109D0u, 0x2109B0u, 0x2109B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2109B8u;
label_2109b8:
    // 0x2109b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2109b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2109bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2109bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2109c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2109c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2109c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2109C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2109C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2109CCu;
    // 0x2109cc: 0x0  nop
    ctx->pc = 0x2109ccu;
    // NOP
    ctx->pc = 0x2109d0u;
}
