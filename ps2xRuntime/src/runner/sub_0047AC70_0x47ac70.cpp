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

// Function: sub_0047AC70
// Address: 0x47ac70 - 0x47acb0
void sub_0047AC70_0x47ac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047AC70_0x47ac70");
#endif

    switch (ctx->pc) {
        case 0x47ac90u: goto label_47ac90;
        default: break;
    }

    ctx->pc = 0x47ac70u;

    // 0x47ac70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47ac70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47ac74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47ac74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47ac78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x47ac78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47ac7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x47ac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x47ac80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x47ac80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47ac84: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x47ac84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47ac88: 0xc11eb2c  jal         func_47ACB0
    ctx->pc = 0x47AC88u;
    SET_GPR_U32(ctx, 31, 0x47AC90u);
    ctx->pc = 0x47ACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ACB0u, 0x47AC88u, 0x47AC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47AC90u;
label_47ac90:
    // 0x47ac90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47ac94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47ac94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47ac98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x47ac98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x47ac9c: 0x3e00008  jr          $ra
    ctx->pc = 0x47AC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47AC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47ACA4u;
    // 0x47aca4: 0x0  nop
    ctx->pc = 0x47aca4u;
    // NOP
    // 0x47aca8: 0x0  nop
    ctx->pc = 0x47aca8u;
    // NOP
    // 0x47acac: 0x0  nop
    ctx->pc = 0x47acacu;
    // NOP
    ctx->pc = 0x47acb0u;
}
