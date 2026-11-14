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

// Function: sub_0018C7A0
// Address: 0x18c7a0 - 0x18c7e0
void sub_0018C7A0_0x18c7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C7A0_0x18c7a0");
#endif

    switch (ctx->pc) {
        case 0x18c7c0u: goto label_18c7c0;
        default: break;
    }

    ctx->pc = 0x18c7a0u;

    // 0x18c7a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18c7a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c7a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18c7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18c7ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18c7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x18c7b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18c7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c7b4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x18c7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c7b8: 0xc0631f8  jal         func_18C7E0
    ctx->pc = 0x18C7B8u;
    SET_GPR_U32(ctx, 31, 0x18C7C0u);
    ctx->pc = 0x18C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7E0u, 0x18C7B8u, 0x18C7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C7C0u;
label_18c7c0:
    // 0x18c7c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c7c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c7c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18c7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18c7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x18C7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C7D4u;
    // 0x18c7d4: 0x0  nop
    ctx->pc = 0x18c7d4u;
    // NOP
    // 0x18c7d8: 0x0  nop
    ctx->pc = 0x18c7d8u;
    // NOP
    // 0x18c7dc: 0x0  nop
    ctx->pc = 0x18c7dcu;
    // NOP
    ctx->pc = 0x18c7e0u;
}
