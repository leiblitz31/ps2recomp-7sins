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

// Function: sub_0046A920
// Address: 0x46a920 - 0x46a960
void sub_0046A920_0x46a920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A920_0x46a920");
#endif

    switch (ctx->pc) {
        case 0x46a944u: goto label_46a944;
        default: break;
    }

    ctx->pc = 0x46a920u;

    // 0x46a920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46a920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46a924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46a924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46a928: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46a928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46a92c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46a92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46a930: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46a930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a934: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x46a934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x46a938: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46a938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a93c: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x46A93Cu;
    SET_GPR_U32(ctx, 31, 0x46A944u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x46A93Cu, 0x46A944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A944u;
label_46a944:
    // 0x46a944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a948: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46a948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46a94c: 0x3e00008  jr          $ra
    ctx->pc = 0x46A94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A954u;
    // 0x46a954: 0x0  nop
    ctx->pc = 0x46a954u;
    // NOP
    // 0x46a958: 0x0  nop
    ctx->pc = 0x46a958u;
    // NOP
    // 0x46a95c: 0x0  nop
    ctx->pc = 0x46a95cu;
    // NOP
    ctx->pc = 0x46a960u;
}
