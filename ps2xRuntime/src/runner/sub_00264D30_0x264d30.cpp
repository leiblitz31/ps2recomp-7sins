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

// Function: sub_00264D30
// Address: 0x264d30 - 0x264d70
void sub_00264D30_0x264d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264D30_0x264d30");
#endif

    switch (ctx->pc) {
        case 0x264d48u: goto label_264d48;
        case 0x264d58u: goto label_264d58;
        default: break;
    }

    ctx->pc = 0x264d30u;

    // 0x264d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x264d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x264d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x264d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x264d38: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x264d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x264d3c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x264d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x264d40: 0xc09939c  jal         func_264E70
    ctx->pc = 0x264D40u;
    SET_GPR_U32(ctx, 31, 0x264D48u);
    ctx->pc = 0x264E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E70u, 0x264D40u, 0x264D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264D48u;
label_264d48:
    // 0x264d48: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x264d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264d4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x264d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264d50: 0xc09935c  jal         func_264D70
    ctx->pc = 0x264D50u;
    SET_GPR_U32(ctx, 31, 0x264D58u);
    ctx->pc = 0x264D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264D70u, 0x264D50u, 0x264D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264D58u;
label_264d58:
    // 0x264d58: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x264d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264d5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264d60: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x264d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x264d64: 0x3e00008  jr          $ra
    ctx->pc = 0x264D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264D6Cu;
    // 0x264d6c: 0x0  nop
    ctx->pc = 0x264d6cu;
    // NOP
    ctx->pc = 0x264d70u;
}
