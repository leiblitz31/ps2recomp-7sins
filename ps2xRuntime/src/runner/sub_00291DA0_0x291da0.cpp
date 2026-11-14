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

// Function: sub_00291DA0
// Address: 0x291da0 - 0x291de0
void sub_00291DA0_0x291da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291DA0_0x291da0");
#endif

    switch (ctx->pc) {
        case 0x291db8u: goto label_291db8;
        case 0x291dc8u: goto label_291dc8;
        default: break;
    }

    ctx->pc = 0x291da0u;

    // 0x291da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x291da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x291da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291da8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x291da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x291dac: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x291dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x291db0: 0xc0a47b8  jal         func_291EE0
    ctx->pc = 0x291DB0u;
    SET_GPR_U32(ctx, 31, 0x291DB8u);
    ctx->pc = 0x291EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291EE0u, 0x291DB0u, 0x291DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291DB8u;
label_291db8:
    // 0x291db8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x291db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291dbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x291dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291dc0: 0xc0a4778  jal         func_291DE0
    ctx->pc = 0x291DC0u;
    SET_GPR_U32(ctx, 31, 0x291DC8u);
    ctx->pc = 0x291DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291DE0u, 0x291DC0u, 0x291DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291DC8u;
label_291dc8:
    // 0x291dc8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x291dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291dcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291dd0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x291dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x291dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x291DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291DDCu;
    // 0x291ddc: 0x0  nop
    ctx->pc = 0x291ddcu;
    // NOP
    ctx->pc = 0x291de0u;
}
