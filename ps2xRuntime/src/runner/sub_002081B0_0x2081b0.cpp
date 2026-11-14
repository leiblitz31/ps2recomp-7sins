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

// Function: sub_002081B0
// Address: 0x2081b0 - 0x2081f0
void sub_002081B0_0x2081b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002081B0_0x2081b0");
#endif

    switch (ctx->pc) {
        case 0x2081c8u: goto label_2081c8;
        case 0x2081d8u: goto label_2081d8;
        default: break;
    }

    ctx->pc = 0x2081b0u;

    // 0x2081b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2081b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2081b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2081b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2081b8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2081b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2081bc: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2081bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2081c0: 0xc0820bc  jal         func_2082F0
    ctx->pc = 0x2081C0u;
    SET_GPR_U32(ctx, 31, 0x2081C8u);
    ctx->pc = 0x2082F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2082F0u, 0x2081C0u, 0x2081C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2081C8u;
label_2081c8:
    // 0x2081c8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2081c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2081cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2081ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081d0: 0xc08207c  jal         func_2081F0
    ctx->pc = 0x2081D0u;
    SET_GPR_U32(ctx, 31, 0x2081D8u);
    ctx->pc = 0x2081F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2081F0u, 0x2081D0u, 0x2081D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2081D8u;
label_2081d8:
    // 0x2081d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2081d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2081dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2081dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2081e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2081e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2081e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2081E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2081E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2081ECu;
    // 0x2081ec: 0x0  nop
    ctx->pc = 0x2081ecu;
    // NOP
    ctx->pc = 0x2081f0u;
}
