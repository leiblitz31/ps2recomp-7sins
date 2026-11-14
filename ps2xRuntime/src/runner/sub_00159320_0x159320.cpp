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

// Function: sub_00159320
// Address: 0x159320 - 0x159360
void sub_00159320_0x159320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159320_0x159320");
#endif

    switch (ctx->pc) {
        case 0x159338u: goto label_159338;
        case 0x159348u: goto label_159348;
        default: break;
    }

    ctx->pc = 0x159320u;

    // 0x159320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x159320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x159324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x159328: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x159328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x15932c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15932cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159330: 0xc056458  jal         func_159160
    ctx->pc = 0x159330u;
    SET_GPR_U32(ctx, 31, 0x159338u);
    ctx->pc = 0x159160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159160u, 0x159330u, 0x159338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159338u;
label_159338:
    // 0x159338: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x159338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x15933c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15933cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159340: 0xc0564d8  jal         func_159360
    ctx->pc = 0x159340u;
    SET_GPR_U32(ctx, 31, 0x159348u);
    ctx->pc = 0x159360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159360u, 0x159340u, 0x159348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159348u;
label_159348:
    // 0x159348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15934c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15934cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x159350: 0x3e00008  jr          $ra
    ctx->pc = 0x159350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159358u;
    // 0x159358: 0x0  nop
    ctx->pc = 0x159358u;
    // NOP
    // 0x15935c: 0x0  nop
    ctx->pc = 0x15935cu;
    // NOP
    ctx->pc = 0x159360u;
}
