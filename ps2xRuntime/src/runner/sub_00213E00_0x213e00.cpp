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

// Function: sub_00213E00
// Address: 0x213e00 - 0x213e40
void sub_00213E00_0x213e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213E00_0x213e00");
#endif

    switch (ctx->pc) {
        case 0x213e24u: goto label_213e24;
        default: break;
    }

    ctx->pc = 0x213e00u;

    // 0x213e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x213e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x213e08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x213e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x213e0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x213e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x213e10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x213e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213e14: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x213e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213e18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x213e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e1c: 0xc084f90  jal         func_213E40
    ctx->pc = 0x213E1Cu;
    SET_GPR_U32(ctx, 31, 0x213E24u);
    ctx->pc = 0x213E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213E40u, 0x213E1Cu, 0x213E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E24u;
label_213e24:
    // 0x213e24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x213e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213e28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x213e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x213e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x213E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213E34u;
    // 0x213e34: 0x0  nop
    ctx->pc = 0x213e34u;
    // NOP
    // 0x213e38: 0x0  nop
    ctx->pc = 0x213e38u;
    // NOP
    // 0x213e3c: 0x0  nop
    ctx->pc = 0x213e3cu;
    // NOP
    ctx->pc = 0x213e40u;
}
