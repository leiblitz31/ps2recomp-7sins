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

// Function: sub_001007F0
// Address: 0x1007f0 - 0x100820
void sub_001007F0_0x1007f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001007F0_0x1007f0");
#endif

    switch (ctx->pc) {
        case 0x10080cu: goto label_10080c;
        default: break;
    }

    ctx->pc = 0x1007f0u;

    // 0x1007f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1007f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1007f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1007f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1007f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1007f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1007fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1007fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100800: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x100800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x100804: 0xc089b48  jal         func_226D20
    ctx->pc = 0x100804u;
    SET_GPR_U32(ctx, 31, 0x10080Cu);
    ctx->pc = 0x226D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226D20u, 0x100804u, 0x10080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10080Cu;
label_10080c:
    // 0x10080c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10080cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100810: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x100810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x100814: 0x3e00008  jr          $ra
    ctx->pc = 0x100814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10081Cu;
    // 0x10081c: 0x0  nop
    ctx->pc = 0x10081cu;
    // NOP
    ctx->pc = 0x100820u;
}
