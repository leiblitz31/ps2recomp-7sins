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

// Function: sub_00259400
// Address: 0x259400 - 0x259440
void sub_00259400_0x259400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259400_0x259400");
#endif

    switch (ctx->pc) {
        case 0x259420u: goto label_259420;
        default: break;
    }

    ctx->pc = 0x259400u;

    // 0x259400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259408: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x259408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25940c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25940cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x259410: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x259410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259414: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x259414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259418: 0xc096510  jal         func_259440
    ctx->pc = 0x259418u;
    SET_GPR_U32(ctx, 31, 0x259420u);
    ctx->pc = 0x259440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259440u, 0x259418u, 0x259420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259420u;
label_259420:
    // 0x259420: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x259420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259428: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x259428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25942c: 0x3e00008  jr          $ra
    ctx->pc = 0x25942Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25942Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259434u;
    // 0x259434: 0x0  nop
    ctx->pc = 0x259434u;
    // NOP
    // 0x259438: 0x0  nop
    ctx->pc = 0x259438u;
    // NOP
    // 0x25943c: 0x0  nop
    ctx->pc = 0x25943cu;
    // NOP
    ctx->pc = 0x259440u;
}
