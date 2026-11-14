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

// Function: sub_0020AA90
// Address: 0x20aa90 - 0x20aad0
void sub_0020AA90_0x20aa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AA90_0x20aa90");
#endif

    switch (ctx->pc) {
        case 0x20aaacu: goto label_20aaac;
        default: break;
    }

    ctx->pc = 0x20aa90u;

    // 0x20aa90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20aa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20aa94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20aa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20aa98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x20aa98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x20aa9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x20aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x20aaa0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x20aaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20aaa4: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x20AAA4u;
    SET_GPR_U32(ctx, 31, 0x20AAACu);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x20AAA4u, 0x20AAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AAACu;
label_20aaac:
    // 0x20aaac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20aaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20aab0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x20aab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x20aab4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20aab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20aab8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20aab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20aabc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20aac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20aac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20aac4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x20aac4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20aac8: 0x3e00008  jr          $ra
    ctx->pc = 0x20AAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AAD0u;
}
