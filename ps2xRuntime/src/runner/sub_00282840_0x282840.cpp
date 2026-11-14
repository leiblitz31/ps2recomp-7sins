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

// Function: sub_00282840
// Address: 0x282840 - 0x282870
void sub_00282840_0x282840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282840_0x282840");
#endif

    switch (ctx->pc) {
        case 0x28285cu: goto label_28285c;
        default: break;
    }

    ctx->pc = 0x282840u;

    // 0x282840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x282844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282848: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x282848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28284c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28284cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282850: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x282850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x282854: 0xc04e50c  jal         func_139430
    ctx->pc = 0x282854u;
    SET_GPR_U32(ctx, 31, 0x28285Cu);
    ctx->pc = 0x139430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139430u, 0x282854u, 0x28285Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28285Cu;
label_28285c:
    // 0x28285c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28285cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282860: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x282860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x282864: 0x3e00008  jr          $ra
    ctx->pc = 0x282864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28286Cu;
    // 0x28286c: 0x0  nop
    ctx->pc = 0x28286cu;
    // NOP
    ctx->pc = 0x282870u;
}
