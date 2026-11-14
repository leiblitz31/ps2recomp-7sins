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

// Function: sub_00248280
// Address: 0x248280 - 0x2482b0
void sub_00248280_0x248280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248280_0x248280");
#endif

    switch (ctx->pc) {
        case 0x248298u: goto label_248298;
        default: break;
    }

    ctx->pc = 0x248280u;

    // 0x248280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x248284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248288: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x248288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24828c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24828cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248290: 0xc091ec0  jal         func_247B00
    ctx->pc = 0x248290u;
    SET_GPR_U32(ctx, 31, 0x248298u);
    ctx->pc = 0x247B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B00u, 0x248290u, 0x248298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248298u;
label_248298:
    // 0x248298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24829c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24829cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2482a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2482A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2482A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2482A8u;
    // 0x2482a8: 0x0  nop
    ctx->pc = 0x2482a8u;
    // NOP
    // 0x2482ac: 0x0  nop
    ctx->pc = 0x2482acu;
    // NOP
    ctx->pc = 0x2482b0u;
}
