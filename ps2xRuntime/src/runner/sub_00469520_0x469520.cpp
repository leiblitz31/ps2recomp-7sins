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

// Function: sub_00469520
// Address: 0x469520 - 0x469560
void sub_00469520_0x469520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469520_0x469520");
#endif

    switch (ctx->pc) {
        case 0x469540u: goto label_469540;
        default: break;
    }

    ctx->pc = 0x469520u;

    // 0x469520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x469520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x469524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x469528: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x469528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46952c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46952cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x469530: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x469530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469534: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x469534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469538: 0xc11a558  jal         func_469560
    ctx->pc = 0x469538u;
    SET_GPR_U32(ctx, 31, 0x469540u);
    ctx->pc = 0x469560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469560u, 0x469538u, 0x469540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469540u;
label_469540:
    // 0x469540: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x469540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x469544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469548: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x469548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46954c: 0x3e00008  jr          $ra
    ctx->pc = 0x46954Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46954Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469554u;
    // 0x469554: 0x0  nop
    ctx->pc = 0x469554u;
    // NOP
    // 0x469558: 0x0  nop
    ctx->pc = 0x469558u;
    // NOP
    // 0x46955c: 0x0  nop
    ctx->pc = 0x46955cu;
    // NOP
    ctx->pc = 0x469560u;
}
