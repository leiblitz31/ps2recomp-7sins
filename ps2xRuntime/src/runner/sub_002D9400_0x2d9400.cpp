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

// Function: sub_002D9400
// Address: 0x2d9400 - 0x2d9440
void sub_002D9400_0x2d9400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9400_0x2d9400");
#endif

    switch (ctx->pc) {
        case 0x2d9428u: goto label_2d9428;
        default: break;
    }

    ctx->pc = 0x2d9400u;

label_2d9400:
    // 0x2d9400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9404: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d9404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d9408: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9410u;
    // 0x2d9410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d9410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d9414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9418: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d9418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d941c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d941cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9420: 0xc0b6500  jal         func_2D9400
    ctx->pc = 0x2D9420u;
    SET_GPR_U32(ctx, 31, 0x2D9428u);
    ctx->pc = 0x2D9400u;
    goto label_2d9400;
    ctx->pc = 0x2D9428u;
label_2d9428:
    // 0x2d9428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d942c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d942cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d9430: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9438u;
    // 0x2d9438: 0x0  nop
    ctx->pc = 0x2d9438u;
    // NOP
    // 0x2d943c: 0x0  nop
    ctx->pc = 0x2d943cu;
    // NOP
    ctx->pc = 0x2d9440u;
}
