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

// Function: sub_00490E00
// Address: 0x490e00 - 0x490e30
void sub_00490E00_0x490e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490E00_0x490e00");
#endif

    switch (ctx->pc) {
        case 0x490e1cu: goto label_490e1c;
        default: break;
    }

    ctx->pc = 0x490e00u;

    // 0x490e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x490e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x490e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x490e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x490e08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x490e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x490e0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x490e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490e10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x490e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x490e14: 0xc12438c  jal         func_490E30
    ctx->pc = 0x490E14u;
    SET_GPR_U32(ctx, 31, 0x490E1Cu);
    ctx->pc = 0x490E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490E30u, 0x490E14u, 0x490E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490E1Cu;
label_490e1c:
    // 0x490e1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x490e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490e20: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x490e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x490e24: 0x3e00008  jr          $ra
    ctx->pc = 0x490E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490E2Cu;
    // 0x490e2c: 0x0  nop
    ctx->pc = 0x490e2cu;
    // NOP
    ctx->pc = 0x490e30u;
}
