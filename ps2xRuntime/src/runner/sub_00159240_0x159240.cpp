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

// Function: sub_00159240
// Address: 0x159240 - 0x159280
void sub_00159240_0x159240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159240_0x159240");
#endif

    switch (ctx->pc) {
        case 0x15925cu: goto label_15925c;
        case 0x15926cu: goto label_15926c;
        default: break;
    }

    ctx->pc = 0x159240u;

    // 0x159240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x159240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x159244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x159248: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x159248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15924c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15924cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x159250: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x159250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159254: 0xc055390  jal         func_154E40
    ctx->pc = 0x159254u;
    SET_GPR_U32(ctx, 31, 0x15925Cu);
    ctx->pc = 0x154E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154E40u, 0x159254u, 0x15925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15925Cu;
label_15925c:
    // 0x15925c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15925cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159260: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x159260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159264: 0xc0564a0  jal         func_159280
    ctx->pc = 0x159264u;
    SET_GPR_U32(ctx, 31, 0x15926Cu);
    ctx->pc = 0x159280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159280u, 0x159264u, 0x15926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15926Cu;
label_15926c:
    // 0x15926c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15926cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159270: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x159270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x159274: 0x3e00008  jr          $ra
    ctx->pc = 0x159274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15927Cu;
    // 0x15927c: 0x0  nop
    ctx->pc = 0x15927cu;
    // NOP
    ctx->pc = 0x159280u;
}
