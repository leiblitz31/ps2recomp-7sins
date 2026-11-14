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

// Function: sub_001D60D0
// Address: 0x1d60d0 - 0x1d6100
void sub_001D60D0_0x1d60d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D60D0_0x1d60d0");
#endif

    switch (ctx->pc) {
        case 0x1d60ecu: goto label_1d60ec;
        default: break;
    }

    ctx->pc = 0x1d60d0u;

    // 0x1d60d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d60d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d60d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d60d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d60d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d60d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d60dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d60dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d60e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d60e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d60e4: 0xc075840  jal         func_1D6100
    ctx->pc = 0x1D60E4u;
    SET_GPR_U32(ctx, 31, 0x1D60ECu);
    ctx->pc = 0x1D6100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6100u, 0x1D60E4u, 0x1D60ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D60ECu;
label_1d60ec:
    // 0x1d60ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d60ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d60f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d60f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d60f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D60F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D60F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D60FCu;
    // 0x1d60fc: 0x0  nop
    ctx->pc = 0x1d60fcu;
    // NOP
    ctx->pc = 0x1d6100u;
}
