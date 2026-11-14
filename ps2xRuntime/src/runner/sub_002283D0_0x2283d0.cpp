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

// Function: sub_002283D0
// Address: 0x2283d0 - 0x228400
void sub_002283D0_0x2283d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002283D0_0x2283d0");
#endif

    switch (ctx->pc) {
        case 0x2283ecu: goto label_2283ec;
        default: break;
    }

    ctx->pc = 0x2283d0u;

    // 0x2283d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2283d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2283d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2283d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2283d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2283d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2283dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2283dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2283e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2283e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2283e4: 0xc08a100  jal         func_228400
    ctx->pc = 0x2283E4u;
    SET_GPR_U32(ctx, 31, 0x2283ECu);
    ctx->pc = 0x228400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228400u, 0x2283E4u, 0x2283ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2283ECu;
label_2283ec:
    // 0x2283ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2283ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2283f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2283f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2283f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2283F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2283F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2283FCu;
    // 0x2283fc: 0x0  nop
    ctx->pc = 0x2283fcu;
    // NOP
    ctx->pc = 0x228400u;
}
