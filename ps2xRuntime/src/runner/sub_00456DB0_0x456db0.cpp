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

// Function: sub_00456DB0
// Address: 0x456db0 - 0x456de0
void sub_00456DB0_0x456db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00456DB0_0x456db0");
#endif

    switch (ctx->pc) {
        case 0x456dccu: goto label_456dcc;
        default: break;
    }

    ctx->pc = 0x456db0u;

    // 0x456db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x456db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x456db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x456db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x456db8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x456db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x456dbc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x456dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x456dc0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x456dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x456dc4: 0xc051460  jal         func_145180
    ctx->pc = 0x456DC4u;
    SET_GPR_U32(ctx, 31, 0x456DCCu);
    ctx->pc = 0x145180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145180u, 0x456DC4u, 0x456DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456DCCu;
label_456dcc:
    // 0x456dcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x456dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x456dd0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x456dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x456dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x456DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x456DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x456DDCu;
    // 0x456ddc: 0x0  nop
    ctx->pc = 0x456ddcu;
    // NOP
    ctx->pc = 0x456de0u;
}
