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

// Function: sub_002288C0
// Address: 0x2288c0 - 0x228900
void sub_002288C0_0x2288c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002288C0_0x2288c0");
#endif

    switch (ctx->pc) {
        case 0x2288dcu: goto label_2288dc;
        case 0x2288ecu: goto label_2288ec;
        default: break;
    }

    ctx->pc = 0x2288c0u;

    // 0x2288c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2288c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2288c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2288c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2288c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2288c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2288cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2288ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2288d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2288d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2288d4: 0xc089e9c  jal         func_227A70
    ctx->pc = 0x2288D4u;
    SET_GPR_U32(ctx, 31, 0x2288DCu);
    ctx->pc = 0x227A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A70u, 0x2288D4u, 0x2288DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2288DCu;
label_2288dc:
    // 0x2288dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2288dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2288e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2288e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2288e4: 0xc08a1d4  jal         func_228750
    ctx->pc = 0x2288E4u;
    SET_GPR_U32(ctx, 31, 0x2288ECu);
    ctx->pc = 0x228750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228750u, 0x2288E4u, 0x2288ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2288ECu;
label_2288ec:
    // 0x2288ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2288ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2288f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2288f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2288f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2288F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2288F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2288FCu;
    // 0x2288fc: 0x0  nop
    ctx->pc = 0x2288fcu;
    // NOP
    ctx->pc = 0x228900u;
}
