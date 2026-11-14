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

// Function: sub_0023F670
// Address: 0x23f670 - 0x23f6c0
void sub_0023F670_0x23f670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F670_0x23f670");
#endif

    switch (ctx->pc) {
        case 0x23f6a8u: goto label_23f6a8;
        default: break;
    }

    ctx->pc = 0x23f670u;

    // 0x23f670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23f674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f678: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23f678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23f67c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23f67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23f680: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f684: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23f684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x23f688: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f68c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23f68cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x23f690: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f694: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x23f694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x23f698: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23f698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f69c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23f69cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f6a0: 0xc08fdb0  jal         func_23F6C0
    ctx->pc = 0x23F6A0u;
    SET_GPR_U32(ctx, 31, 0x23F6A8u);
    ctx->pc = 0x23F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F6C0u, 0x23F6A0u, 0x23F6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F6A8u;
label_23f6a8:
    // 0x23f6a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f6ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f6b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23f6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23f6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x23F6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F6BCu;
    // 0x23f6bc: 0x0  nop
    ctx->pc = 0x23f6bcu;
    // NOP
    ctx->pc = 0x23f6c0u;
}
