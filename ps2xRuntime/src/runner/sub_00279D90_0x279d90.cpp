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

// Function: sub_00279D90
// Address: 0x279d90 - 0x279dd0
void sub_00279D90_0x279d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279D90_0x279d90");
#endif

    switch (ctx->pc) {
        case 0x279db8u: goto label_279db8;
        default: break;
    }

    ctx->pc = 0x279d90u;

    // 0x279d90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x279d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x279d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279d98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x279d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x279d9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x279d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x279da0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x279da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x279da4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x279da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279da8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x279da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279dac: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x279dacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279db0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x279DB0u;
    SET_GPR_U32(ctx, 31, 0x279DB8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x279DB0u, 0x279DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279DB8u;
label_279db8:
    // 0x279db8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279dbc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x279dbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x279dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x279DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279DC8u;
    // 0x279dc8: 0x0  nop
    ctx->pc = 0x279dc8u;
    // NOP
    // 0x279dcc: 0x0  nop
    ctx->pc = 0x279dccu;
    // NOP
    ctx->pc = 0x279dd0u;
}
