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

// Function: sub_0018C640
// Address: 0x18c640 - 0x18c680
void sub_0018C640_0x18c640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C640_0x18c640");
#endif

    switch (ctx->pc) {
        case 0x18c660u: goto label_18c660;
        default: break;
    }

    ctx->pc = 0x18c640u;

    // 0x18c640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18c644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c648: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18c648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18c64c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18c64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x18c650: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18c650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c654: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x18c654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c658: 0xc0631a0  jal         func_18C680
    ctx->pc = 0x18C658u;
    SET_GPR_U32(ctx, 31, 0x18C660u);
    ctx->pc = 0x18C680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C680u, 0x18C658u, 0x18C660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C660u;
label_18c660:
    // 0x18c660: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c668: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18c668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18c66c: 0x3e00008  jr          $ra
    ctx->pc = 0x18C66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C674u;
    // 0x18c674: 0x0  nop
    ctx->pc = 0x18c674u;
    // NOP
    // 0x18c678: 0x0  nop
    ctx->pc = 0x18c678u;
    // NOP
    // 0x18c67c: 0x0  nop
    ctx->pc = 0x18c67cu;
    // NOP
    ctx->pc = 0x18c680u;
}
