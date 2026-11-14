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

// Function: sub_00117920
// Address: 0x117920 - 0x117960
void sub_00117920_0x117920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117920_0x117920");
#endif

    switch (ctx->pc) {
        case 0x117938u: goto label_117938;
        case 0x117948u: goto label_117948;
        default: break;
    }

    ctx->pc = 0x117920u;

    // 0x117920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117928: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x117928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x11792c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x11792cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117930: 0xc045e58  jal         func_117960
    ctx->pc = 0x117930u;
    SET_GPR_U32(ctx, 31, 0x117938u);
    ctx->pc = 0x117960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117960u, 0x117930u, 0x117938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117938u;
label_117938:
    // 0x117938: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x117938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x11793c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11793cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117940: 0xc045ed8  jal         func_117B60
    ctx->pc = 0x117940u;
    SET_GPR_U32(ctx, 31, 0x117948u);
    ctx->pc = 0x117B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B60u, 0x117940u, 0x117948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117948u;
label_117948:
    // 0x117948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11794c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11794cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x117950: 0x3e00008  jr          $ra
    ctx->pc = 0x117950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117958u;
    // 0x117958: 0x0  nop
    ctx->pc = 0x117958u;
    // NOP
    // 0x11795c: 0x0  nop
    ctx->pc = 0x11795cu;
    // NOP
    ctx->pc = 0x117960u;
}
