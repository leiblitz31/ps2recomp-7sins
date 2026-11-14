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

// Function: sub_001233F0
// Address: 0x1233f0 - 0x123430
void sub_001233F0_0x1233f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001233F0_0x1233f0");
#endif

    switch (ctx->pc) {
        case 0x123414u: goto label_123414;
        default: break;
    }

    ctx->pc = 0x1233f0u;

    // 0x1233f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1233f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1233f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1233f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1233f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1233f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1233fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1233fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x123400: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x123400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123404: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x123404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123408: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x123408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12340c: 0xc048d0c  jal         func_123430
    ctx->pc = 0x12340Cu;
    SET_GPR_U32(ctx, 31, 0x123414u);
    ctx->pc = 0x123430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123430u, 0x12340Cu, 0x123414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123414u;
label_123414:
    // 0x123414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123418: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x123418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12341c: 0x3e00008  jr          $ra
    ctx->pc = 0x12341Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12341Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123424u;
    // 0x123424: 0x0  nop
    ctx->pc = 0x123424u;
    // NOP
    // 0x123428: 0x0  nop
    ctx->pc = 0x123428u;
    // NOP
    // 0x12342c: 0x0  nop
    ctx->pc = 0x12342cu;
    // NOP
    ctx->pc = 0x123430u;
}
