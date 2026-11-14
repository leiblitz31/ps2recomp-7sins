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

// Function: sub_00113370
// Address: 0x113370 - 0x1133a0
void sub_00113370_0x113370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113370_0x113370");
#endif

    switch (ctx->pc) {
        case 0x113388u: goto label_113388;
        default: break;
    }

    ctx->pc = 0x113370u;

    // 0x113370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x113370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x113374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113378: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x113378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11337c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11337cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113380: 0xc044ce8  jal         func_1133A0
    ctx->pc = 0x113380u;
    SET_GPR_U32(ctx, 31, 0x113388u);
    ctx->pc = 0x1133A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1133A0u, 0x113380u, 0x113388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113388u;
label_113388:
    // 0x113388: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x113388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11338c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11338cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113390: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x113390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x113394: 0x3e00008  jr          $ra
    ctx->pc = 0x113394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11339Cu;
    // 0x11339c: 0x0  nop
    ctx->pc = 0x11339cu;
    // NOP
    ctx->pc = 0x1133a0u;
}
