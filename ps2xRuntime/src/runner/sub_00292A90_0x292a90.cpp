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

// Function: sub_00292A90
// Address: 0x292a90 - 0x292ad0
void sub_00292A90_0x292a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292A90_0x292a90");
#endif

    switch (ctx->pc) {
        case 0x292aacu: goto label_292aac;
        default: break;
    }

    ctx->pc = 0x292a90u;

    // 0x292a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x292a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x292a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x292a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x292a98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x292a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x292a9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x292a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x292aa0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x292aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292aa4: 0xc0a4ab4  jal         func_292AD0
    ctx->pc = 0x292AA4u;
    SET_GPR_U32(ctx, 31, 0x292AACu);
    ctx->pc = 0x292AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292AD0u, 0x292AA4u, 0x292AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292AACu;
label_292aac:
    // 0x292aac: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x292aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292ab0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x292ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x292ab4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x292ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292ab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x292ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292abc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x292abcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x292ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x292AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292AC8u;
    // 0x292ac8: 0x0  nop
    ctx->pc = 0x292ac8u;
    // NOP
    // 0x292acc: 0x0  nop
    ctx->pc = 0x292accu;
    // NOP
    ctx->pc = 0x292ad0u;
}
