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

// Function: sub_00162400
// Address: 0x162400 - 0x162440
void sub_00162400_0x162400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162400_0x162400");
#endif

    switch (ctx->pc) {
        case 0x162420u: goto label_162420;
        default: break;
    }

    ctx->pc = 0x162400u;

    // 0x162400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x162400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x162404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162408: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x162408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16240c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x16240cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x162410: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x162410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162414: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x162414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162418: 0xc058910  jal         func_162440
    ctx->pc = 0x162418u;
    SET_GPR_U32(ctx, 31, 0x162420u);
    ctx->pc = 0x162440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162440u, 0x162418u, 0x162420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162420u;
label_162420:
    // 0x162420: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x162420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162428: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x162428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16242c: 0x3e00008  jr          $ra
    ctx->pc = 0x16242Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16242Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162434u;
    // 0x162434: 0x0  nop
    ctx->pc = 0x162434u;
    // NOP
    // 0x162438: 0x0  nop
    ctx->pc = 0x162438u;
    // NOP
    // 0x16243c: 0x0  nop
    ctx->pc = 0x16243cu;
    // NOP
    ctx->pc = 0x162440u;
}
