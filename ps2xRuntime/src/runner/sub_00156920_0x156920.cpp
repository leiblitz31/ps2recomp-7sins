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

// Function: sub_00156920
// Address: 0x156920 - 0x156950
void sub_00156920_0x156920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156920_0x156920");
#endif

    switch (ctx->pc) {
        case 0x156938u: goto label_156938;
        default: break;
    }

    ctx->pc = 0x156920u;

    // 0x156920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x156920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x156924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156928: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x156928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15692c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15692cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156930: 0xc055874  jal         func_1561D0
    ctx->pc = 0x156930u;
    SET_GPR_U32(ctx, 31, 0x156938u);
    ctx->pc = 0x1561D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1561D0u, 0x156930u, 0x156938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156938u;
label_156938:
    // 0x156938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15693c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15693cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x156940: 0x3e00008  jr          $ra
    ctx->pc = 0x156940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156948u;
    // 0x156948: 0x0  nop
    ctx->pc = 0x156948u;
    // NOP
    // 0x15694c: 0x0  nop
    ctx->pc = 0x15694cu;
    // NOP
    ctx->pc = 0x156950u;
}
