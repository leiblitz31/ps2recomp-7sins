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

// Function: sub_00284990
// Address: 0x284990 - 0x2849d0
void sub_00284990_0x284990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284990_0x284990");
#endif

    switch (ctx->pc) {
        case 0x2849b0u: goto label_2849b0;
        case 0x2849bcu: goto label_2849bc;
        default: break;
    }

    ctx->pc = 0x284990u;

    // 0x284990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x284998: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x284998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28499c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28499cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2849a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2849a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2849a4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2849a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2849a8: 0xc0e6f46  jal         func_39BD18
    ctx->pc = 0x2849A8u;
    SET_GPR_U32(ctx, 31, 0x2849B0u);
    ctx->pc = 0x39BD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BD18u, 0x2849A8u, 0x2849B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2849B0u;
label_2849b0:
    // 0x2849b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2849b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2849b4: 0xc0e362e  jal         func_38D8B8
    ctx->pc = 0x2849B4u;
    SET_GPR_U32(ctx, 31, 0x2849BCu);
    ctx->pc = 0x38D8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D8B8u, 0x2849B4u, 0x2849BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2849BCu;
label_2849bc:
    // 0x2849bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2849bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2849c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2849c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2849c4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2849c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2849c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2849C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2849C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2849D0u;
}
