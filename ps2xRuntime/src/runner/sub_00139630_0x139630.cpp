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

// Function: sub_00139630
// Address: 0x139630 - 0x139660
void sub_00139630_0x139630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139630_0x139630");
#endif

    switch (ctx->pc) {
        case 0x139648u: goto label_139648;
        default: break;
    }

    ctx->pc = 0x139630u;

    // 0x139630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x139630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x139634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139638: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x139638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13963c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13963cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139640: 0xc04f374  jal         func_13CDD0
    ctx->pc = 0x139640u;
    SET_GPR_U32(ctx, 31, 0x139648u);
    ctx->pc = 0x13CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CDD0u, 0x139640u, 0x139648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139648u;
label_139648:
    // 0x139648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13964c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13964cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x139650: 0x3e00008  jr          $ra
    ctx->pc = 0x139650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139658u;
    // 0x139658: 0x0  nop
    ctx->pc = 0x139658u;
    // NOP
    // 0x13965c: 0x0  nop
    ctx->pc = 0x13965cu;
    // NOP
    ctx->pc = 0x139660u;
}
