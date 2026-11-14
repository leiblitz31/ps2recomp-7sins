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

// Function: sub_001F38B0
// Address: 0x1f38b0 - 0x1f38f0
void sub_001F38B0_0x1f38b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F38B0_0x1f38b0");
#endif

    switch (ctx->pc) {
        case 0x1f38ccu: goto label_1f38cc;
        default: break;
    }

    ctx->pc = 0x1f38b0u;

    // 0x1f38b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f38b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f38b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f38b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f38b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1f38b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1f38bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1f38bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1f38c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f38c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f38c4: 0xc07ce3c  jal         func_1F38F0
    ctx->pc = 0x1F38C4u;
    SET_GPR_U32(ctx, 31, 0x1F38CCu);
    ctx->pc = 0x1F38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38F0u, 0x1F38C4u, 0x1F38CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F38CCu;
label_1f38cc:
    // 0x1f38cc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f38ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f38d0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1f38d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1f38d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f38d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f38d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f38d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f38dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f38dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f38e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f38e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f38e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1f38e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f38e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F38E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F38E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F38F0u;
}
