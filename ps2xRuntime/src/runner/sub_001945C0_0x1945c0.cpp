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

// Function: sub_001945C0
// Address: 0x1945c0 - 0x194600
void sub_001945C0_0x1945c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001945C0_0x1945c0");
#endif

    switch (ctx->pc) {
        case 0x1945dcu: goto label_1945dc;
        case 0x1945ecu: goto label_1945ec;
        default: break;
    }

    ctx->pc = 0x1945c0u;

    // 0x1945c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1945c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1945c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1945c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1945c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1945c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1945cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1945ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1945d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1945d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1945d4: 0xc0406e4  jal         func_101B90
    ctx->pc = 0x1945D4u;
    SET_GPR_U32(ctx, 31, 0x1945DCu);
    ctx->pc = 0x101B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B90u, 0x1945D4u, 0x1945DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1945DCu;
label_1945dc:
    // 0x1945dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1945dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1945e0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1945e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1945e4: 0xc04071c  jal         func_101C70
    ctx->pc = 0x1945E4u;
    SET_GPR_U32(ctx, 31, 0x1945ECu);
    ctx->pc = 0x101C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101C70u, 0x1945E4u, 0x1945ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1945ECu;
label_1945ec:
    // 0x1945ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1945ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1945f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1945f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1945f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1945f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1945f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1945F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1945F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194600u;
}
