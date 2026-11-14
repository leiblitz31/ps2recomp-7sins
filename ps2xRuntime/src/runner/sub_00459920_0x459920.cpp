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

// Function: sub_00459920
// Address: 0x459920 - 0x459950
void sub_00459920_0x459920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459920_0x459920");
#endif

    switch (ctx->pc) {
        case 0x459930u: goto label_459930;
        default: break;
    }

    ctx->pc = 0x459920u;

    // 0x459920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x459920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x459924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x459924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x459928: 0xc0bdeb0  jal         func_2F7AC0
    ctx->pc = 0x459928u;
    SET_GPR_U32(ctx, 31, 0x459930u);
    ctx->pc = 0x2F7AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7AC0u, 0x459928u, 0x459930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459930u;
label_459930:
    // 0x459930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x459930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x459934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x459934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x459938: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x459938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x45993c: 0x3e00008  jr          $ra
    ctx->pc = 0x45993Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45993Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x459944u;
    // 0x459944: 0x0  nop
    ctx->pc = 0x459944u;
    // NOP
    // 0x459948: 0x0  nop
    ctx->pc = 0x459948u;
    // NOP
    // 0x45994c: 0x0  nop
    ctx->pc = 0x45994cu;
    // NOP
    ctx->pc = 0x459950u;
}
