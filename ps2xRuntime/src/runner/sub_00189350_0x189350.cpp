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

// Function: sub_00189350
// Address: 0x189350 - 0x189390
void sub_00189350_0x189350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189350_0x189350");
#endif

    switch (ctx->pc) {
        case 0x189368u: goto label_189368;
        case 0x189378u: goto label_189378;
        default: break;
    }

    ctx->pc = 0x189350u;

    // 0x189350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x189350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x189354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189358: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x189358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x18935c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x18935cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x189360: 0xc062524  jal         func_189490
    ctx->pc = 0x189360u;
    SET_GPR_U32(ctx, 31, 0x189368u);
    ctx->pc = 0x189490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189490u, 0x189360u, 0x189368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189368u;
label_189368:
    // 0x189368: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x189368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18936c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18936cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189370: 0xc0624e4  jal         func_189390
    ctx->pc = 0x189370u;
    SET_GPR_U32(ctx, 31, 0x189378u);
    ctx->pc = 0x189390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189390u, 0x189370u, 0x189378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189378u;
label_189378:
    // 0x189378: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x189378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18937c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18937cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189380: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x189380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x189384: 0x3e00008  jr          $ra
    ctx->pc = 0x189384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18938Cu;
    // 0x18938c: 0x0  nop
    ctx->pc = 0x18938cu;
    // NOP
    ctx->pc = 0x189390u;
}
