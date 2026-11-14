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

// Function: sub_0018C680
// Address: 0x18c680 - 0x18c6d0
void sub_0018C680_0x18c680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C680_0x18c680");
#endif

    switch (ctx->pc) {
        case 0x18c6b8u: goto label_18c6b8;
        default: break;
    }

    ctx->pc = 0x18c680u;

    // 0x18c680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18c684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c688: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18c688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18c68c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18c68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x18c690: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c694: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x18c694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x18c698: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c69c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x18c69cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x18c6a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c6a4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x18c6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18c6a8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x18c6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c6ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18c6acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c6b0: 0xc0631b4  jal         func_18C6D0
    ctx->pc = 0x18C6B0u;
    SET_GPR_U32(ctx, 31, 0x18C6B8u);
    ctx->pc = 0x18C6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C6D0u, 0x18C6B0u, 0x18C6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C6B8u;
label_18c6b8:
    // 0x18c6b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c6bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c6c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18c6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18c6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x18C6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C6CCu;
    // 0x18c6cc: 0x0  nop
    ctx->pc = 0x18c6ccu;
    // NOP
    ctx->pc = 0x18c6d0u;
}
