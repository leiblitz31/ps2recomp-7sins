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

// Function: sub_00291DE0
// Address: 0x291de0 - 0x291e20
void sub_00291DE0_0x291de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291DE0_0x291de0");
#endif

    switch (ctx->pc) {
        case 0x291e00u: goto label_291e00;
        default: break;
    }

    ctx->pc = 0x291de0u;

    // 0x291de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x291de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x291de4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291de8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x291de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x291dec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x291decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x291df0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x291df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291df4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x291df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291df8: 0xc0a4788  jal         func_291E20
    ctx->pc = 0x291DF8u;
    SET_GPR_U32(ctx, 31, 0x291E00u);
    ctx->pc = 0x291E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291E20u, 0x291DF8u, 0x291E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291E00u;
label_291e00:
    // 0x291e00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291e04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291e08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x291e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x291e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x291E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291E14u;
    // 0x291e14: 0x0  nop
    ctx->pc = 0x291e14u;
    // NOP
    // 0x291e18: 0x0  nop
    ctx->pc = 0x291e18u;
    // NOP
    // 0x291e1c: 0x0  nop
    ctx->pc = 0x291e1cu;
    // NOP
    ctx->pc = 0x291e20u;
}
