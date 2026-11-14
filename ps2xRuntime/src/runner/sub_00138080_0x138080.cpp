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

// Function: sub_00138080
// Address: 0x138080 - 0x1380c0
void sub_00138080_0x138080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138080_0x138080");
#endif

    switch (ctx->pc) {
        case 0x1380a4u: goto label_1380a4;
        default: break;
    }

    ctx->pc = 0x138080u;

    // 0x138080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x138080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x138084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138088: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x138088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13808c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13808cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x138090: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x138090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138094: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x138094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138098: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13809c: 0xc04e030  jal         func_1380C0
    ctx->pc = 0x13809Cu;
    SET_GPR_U32(ctx, 31, 0x1380A4u);
    ctx->pc = 0x1380C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1380C0u, 0x13809Cu, 0x1380A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1380A4u;
label_1380a4:
    // 0x1380a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1380a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1380a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1380a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1380ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1380ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1380ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1380B4u;
    // 0x1380b4: 0x0  nop
    ctx->pc = 0x1380b4u;
    // NOP
    // 0x1380b8: 0x0  nop
    ctx->pc = 0x1380b8u;
    // NOP
    // 0x1380bc: 0x0  nop
    ctx->pc = 0x1380bcu;
    // NOP
    ctx->pc = 0x1380c0u;
}
