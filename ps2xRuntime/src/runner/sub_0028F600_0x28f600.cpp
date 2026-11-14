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

// Function: sub_0028F600
// Address: 0x28f600 - 0x28f640
void sub_0028F600_0x28f600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F600_0x28f600");
#endif

    switch (ctx->pc) {
        case 0x28f61cu: goto label_28f61c;
        case 0x28f62cu: goto label_28f62c;
        default: break;
    }

    ctx->pc = 0x28f600u;

    // 0x28f600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28f600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28f604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28f608: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x28f608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28f60c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28f60cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x28f610: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28f610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f614: 0xc0a2a9c  jal         func_28AA70
    ctx->pc = 0x28F614u;
    SET_GPR_U32(ctx, 31, 0x28F61Cu);
    ctx->pc = 0x28AA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA70u, 0x28F614u, 0x28F61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F61Cu;
label_28f61c:
    // 0x28f61c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28f61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f620: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x28f620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f624: 0xc0a3d90  jal         func_28F640
    ctx->pc = 0x28F624u;
    SET_GPR_U32(ctx, 31, 0x28F62Cu);
    ctx->pc = 0x28F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F640u, 0x28F624u, 0x28F62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F62Cu;
label_28f62c:
    // 0x28f62c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f630: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28f630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28f634: 0x3e00008  jr          $ra
    ctx->pc = 0x28F634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F63Cu;
    // 0x28f63c: 0x0  nop
    ctx->pc = 0x28f63cu;
    // NOP
    ctx->pc = 0x28f640u;
}
