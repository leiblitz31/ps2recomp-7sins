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

// Function: sub_00228090
// Address: 0x228090 - 0x2280d0
void sub_00228090_0x228090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228090_0x228090");
#endif

    switch (ctx->pc) {
        case 0x2280b0u: goto label_2280b0;
        default: break;
    }

    ctx->pc = 0x228090u;

    // 0x228090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x228090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x228094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228098: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x228098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22809c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22809cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2280a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2280a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2280a4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2280a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2280a8: 0xc08a034  jal         func_2280D0
    ctx->pc = 0x2280A8u;
    SET_GPR_U32(ctx, 31, 0x2280B0u);
    ctx->pc = 0x2280D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2280D0u, 0x2280A8u, 0x2280B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2280B0u;
label_2280b0:
    // 0x2280b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2280b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2280b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2280b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2280b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2280b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2280bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2280BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2280BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2280C4u;
    // 0x2280c4: 0x0  nop
    ctx->pc = 0x2280c4u;
    // NOP
    // 0x2280c8: 0x0  nop
    ctx->pc = 0x2280c8u;
    // NOP
    // 0x2280cc: 0x0  nop
    ctx->pc = 0x2280ccu;
    // NOP
    ctx->pc = 0x2280d0u;
}
