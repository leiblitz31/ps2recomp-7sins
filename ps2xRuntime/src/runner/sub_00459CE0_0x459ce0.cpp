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

// Function: sub_00459CE0
// Address: 0x459ce0 - 0x459d10
void sub_00459CE0_0x459ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459CE0_0x459ce0");
#endif

    switch (ctx->pc) {
        case 0x459cfcu: goto label_459cfc;
        default: break;
    }

    ctx->pc = 0x459ce0u;

    // 0x459ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x459ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x459ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x459ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x459ce8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x459ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x459cec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x459cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459cf0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x459cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x459cf4: 0xc116744  jal         func_459D10
    ctx->pc = 0x459CF4u;
    SET_GPR_U32(ctx, 31, 0x459CFCu);
    ctx->pc = 0x459D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D10u, 0x459CF4u, 0x459CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459CFCu;
label_459cfc:
    // 0x459cfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x459cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x459d00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x459d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x459d04: 0x3e00008  jr          $ra
    ctx->pc = 0x459D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x459D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x459D0Cu;
    // 0x459d0c: 0x0  nop
    ctx->pc = 0x459d0cu;
    // NOP
    ctx->pc = 0x459d10u;
}
