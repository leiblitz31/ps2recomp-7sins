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

// Function: sub_0044F820
// Address: 0x44f820 - 0x44f860
void sub_0044F820_0x44f820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F820_0x44f820");
#endif

    switch (ctx->pc) {
        case 0x44f840u: goto label_44f840;
        default: break;
    }

    ctx->pc = 0x44f820u;

    // 0x44f820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44f820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44f824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44f824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44f828: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44f828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x44f82c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x44f82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x44f830: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f834: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x44f834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44f838: 0xc113e18  jal         func_44F860
    ctx->pc = 0x44F838u;
    SET_GPR_U32(ctx, 31, 0x44F840u);
    ctx->pc = 0x44F860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F860u, 0x44F838u, 0x44F840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F840u;
label_44f840:
    // 0x44f840: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f844: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44f844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44f848: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x44f848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x44f84c: 0x3e00008  jr          $ra
    ctx->pc = 0x44F84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F854u;
    // 0x44f854: 0x0  nop
    ctx->pc = 0x44f854u;
    // NOP
    // 0x44f858: 0x0  nop
    ctx->pc = 0x44f858u;
    // NOP
    // 0x44f85c: 0x0  nop
    ctx->pc = 0x44f85cu;
    // NOP
    ctx->pc = 0x44f860u;
}
