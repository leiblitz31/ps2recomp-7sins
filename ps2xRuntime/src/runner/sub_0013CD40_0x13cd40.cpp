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

// Function: sub_0013CD40
// Address: 0x13cd40 - 0x13cd90
void sub_0013CD40_0x13cd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CD40_0x13cd40");
#endif

    switch (ctx->pc) {
        case 0x13cd60u: goto label_13cd60;
        case 0x13cd74u: goto label_13cd74;
        default: break;
    }

    ctx->pc = 0x13cd40u;

    // 0x13cd40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13cd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13cd44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13cd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13cd48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13cd4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13cd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x13cd50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cd54: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x13cd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13cd58: 0xc04e50c  jal         func_139430
    ctx->pc = 0x13CD58u;
    SET_GPR_U32(ctx, 31, 0x13CD60u);
    ctx->pc = 0x139430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139430u, 0x13CD58u, 0x13CD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CD60u;
label_13cd60:
    // 0x13cd60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13cd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cd64: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x13cd64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13cd68: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13cd68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd6c: 0xc04f364  jal         func_13CD90
    ctx->pc = 0x13CD6Cu;
    SET_GPR_U32(ctx, 31, 0x13CD74u);
    ctx->pc = 0x13CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CD90u, 0x13CD6Cu, 0x13CD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CD74u;
label_13cd74:
    // 0x13cd74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13cd74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cd78: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13cd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13cd7c: 0x3e00008  jr          $ra
    ctx->pc = 0x13CD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CD84u;
    // 0x13cd84: 0x0  nop
    ctx->pc = 0x13cd84u;
    // NOP
    // 0x13cd88: 0x0  nop
    ctx->pc = 0x13cd88u;
    // NOP
    // 0x13cd8c: 0x0  nop
    ctx->pc = 0x13cd8cu;
    // NOP
    ctx->pc = 0x13cd90u;
}
