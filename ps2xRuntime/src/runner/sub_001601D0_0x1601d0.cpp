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

// Function: sub_001601D0
// Address: 0x1601d0 - 0x160200
void sub_001601D0_0x1601d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001601D0_0x1601d0");
#endif

    switch (ctx->pc) {
        case 0x1601ecu: goto label_1601ec;
        default: break;
    }

    ctx->pc = 0x1601d0u;

    // 0x1601d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1601d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1601d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1601d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1601d8: 0xa3a40010  sb          $a0, 0x10($sp)
    ctx->pc = 0x1601d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x1601dc: 0x8f84baac  lw          $a0, -0x4554($gp)
    ctx->pc = 0x1601dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x1601e0: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x1601e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1601e4: 0xc058080  jal         func_160200
    ctx->pc = 0x1601E4u;
    SET_GPR_U32(ctx, 31, 0x1601ECu);
    ctx->pc = 0x160200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160200u, 0x1601E4u, 0x1601ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1601ECu;
label_1601ec:
    // 0x1601ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1601ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1601f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1601f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1601f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1601F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1601F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1601FCu;
    // 0x1601fc: 0x0  nop
    ctx->pc = 0x1601fcu;
    // NOP
    ctx->pc = 0x160200u;
}
