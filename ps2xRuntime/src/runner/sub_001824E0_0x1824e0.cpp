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

// Function: sub_001824E0
// Address: 0x1824e0 - 0x182520
void sub_001824E0_0x1824e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001824E0_0x1824e0");
#endif

    switch (ctx->pc) {
        case 0x182500u: goto label_182500;
        default: break;
    }

    ctx->pc = 0x1824e0u;

    // 0x1824e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1824e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1824e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1824e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1824e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1824e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1824ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1824ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1824f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1824f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1824f4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1824f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1824f8: 0xc060948  jal         func_182520
    ctx->pc = 0x1824F8u;
    SET_GPR_U32(ctx, 31, 0x182500u);
    ctx->pc = 0x182520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182520u, 0x1824F8u, 0x182500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182500u;
label_182500:
    // 0x182500: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x182500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182508: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x182508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18250c: 0x3e00008  jr          $ra
    ctx->pc = 0x18250Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18250Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182514u;
    // 0x182514: 0x0  nop
    ctx->pc = 0x182514u;
    // NOP
    // 0x182518: 0x0  nop
    ctx->pc = 0x182518u;
    // NOP
    // 0x18251c: 0x0  nop
    ctx->pc = 0x18251cu;
    // NOP
    ctx->pc = 0x182520u;
}
