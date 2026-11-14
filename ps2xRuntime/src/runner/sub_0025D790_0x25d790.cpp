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

// Function: sub_0025D790
// Address: 0x25d790 - 0x25d7d0
void sub_0025D790_0x25d790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D790_0x25d790");
#endif

    switch (ctx->pc) {
        case 0x25d7b4u: goto label_25d7b4;
        default: break;
    }

    ctx->pc = 0x25d790u;

    // 0x25d790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25d790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25d798: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25d798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25d79c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25d79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25d7a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25d7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d7a4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x25d7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d7a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25d7a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d7ac: 0xc0975f4  jal         func_25D7D0
    ctx->pc = 0x25D7ACu;
    SET_GPR_U32(ctx, 31, 0x25D7B4u);
    ctx->pc = 0x25D7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D7D0u, 0x25D7ACu, 0x25D7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D7B4u;
label_25d7b4:
    // 0x25d7b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d7b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25d7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25d7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x25D7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D7C4u;
    // 0x25d7c4: 0x0  nop
    ctx->pc = 0x25d7c4u;
    // NOP
    // 0x25d7c8: 0x0  nop
    ctx->pc = 0x25d7c8u;
    // NOP
    // 0x25d7cc: 0x0  nop
    ctx->pc = 0x25d7ccu;
    // NOP
    ctx->pc = 0x25d7d0u;
}
