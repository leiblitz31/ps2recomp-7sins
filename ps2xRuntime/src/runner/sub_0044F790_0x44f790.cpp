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

// Function: sub_0044F790
// Address: 0x44f790 - 0x44f7d0
void sub_0044F790_0x44f790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F790_0x44f790");
#endif

    switch (ctx->pc) {
        case 0x44f7b4u: goto label_44f7b4;
        default: break;
    }

    ctx->pc = 0x44f790u;

    // 0x44f790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44f790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44f794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44f794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44f798: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44f798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x44f79c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x44f79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x44f7a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f7a4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x44f7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44f7a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x44f7a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f7ac: 0xc113df4  jal         func_44F7D0
    ctx->pc = 0x44F7ACu;
    SET_GPR_U32(ctx, 31, 0x44F7B4u);
    ctx->pc = 0x44F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F7D0u, 0x44F7ACu, 0x44F7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F7B4u;
label_44f7b4:
    // 0x44f7b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44f7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44f7b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x44f7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x44f7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x44F7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F7C4u;
    // 0x44f7c4: 0x0  nop
    ctx->pc = 0x44f7c4u;
    // NOP
    // 0x44f7c8: 0x0  nop
    ctx->pc = 0x44f7c8u;
    // NOP
    // 0x44f7cc: 0x0  nop
    ctx->pc = 0x44f7ccu;
    // NOP
    ctx->pc = 0x44f7d0u;
}
