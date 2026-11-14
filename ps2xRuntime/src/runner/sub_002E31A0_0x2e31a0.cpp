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

// Function: sub_002E31A0
// Address: 0x2e31a0 - 0x2e31e0
void sub_002E31A0_0x2e31a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E31A0_0x2e31a0");
#endif

    switch (ctx->pc) {
        case 0x2e31b8u: goto label_2e31b8;
        case 0x2e31c8u: goto label_2e31c8;
        default: break;
    }

    ctx->pc = 0x2e31a0u;

    // 0x2e31a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e31a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e31a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e31a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e31a8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e31a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e31ac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e31acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e31b0: 0xc0b81e0  jal         func_2E0780
    ctx->pc = 0x2E31B0u;
    SET_GPR_U32(ctx, 31, 0x2E31B8u);
    ctx->pc = 0x2E0780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0780u, 0x2E31B0u, 0x2E31B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E31B8u;
label_2e31b8:
    // 0x2e31b8: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2e31b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2e31bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e31bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e31c0: 0xc0b81d8  jal         func_2E0760
    ctx->pc = 0x2E31C0u;
    SET_GPR_U32(ctx, 31, 0x2E31C8u);
    ctx->pc = 0x2E0760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0760u, 0x2E31C0u, 0x2E31C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E31C8u;
label_2e31c8:
    // 0x2e31c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e31c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e31cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e31ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e31d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E31D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E31D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E31D8u;
    // 0x2e31d8: 0x0  nop
    ctx->pc = 0x2e31d8u;
    // NOP
    // 0x2e31dc: 0x0  nop
    ctx->pc = 0x2e31dcu;
    // NOP
    ctx->pc = 0x2e31e0u;
}
