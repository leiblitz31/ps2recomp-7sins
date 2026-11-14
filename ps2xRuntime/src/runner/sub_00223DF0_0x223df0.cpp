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

// Function: sub_00223DF0
// Address: 0x223df0 - 0x223e40
void sub_00223DF0_0x223df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223DF0_0x223df0");
#endif

    switch (ctx->pc) {
        case 0x223e28u: goto label_223e28;
        default: break;
    }

    ctx->pc = 0x223df0u;

    // 0x223df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x223df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223df8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x223df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x223dfc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x223dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x223e00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x223e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223e04: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x223e04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x223e08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x223e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223e0c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x223e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x223e10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x223e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223e14: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x223e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x223e18: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x223e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223e1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223e20: 0xc088f90  jal         func_223E40
    ctx->pc = 0x223E20u;
    SET_GPR_U32(ctx, 31, 0x223E28u);
    ctx->pc = 0x223E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E40u, 0x223E20u, 0x223E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223E28u;
label_223e28:
    // 0x223e28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x223e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223e2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223e30: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x223e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x223e34: 0x3e00008  jr          $ra
    ctx->pc = 0x223E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223E3Cu;
    // 0x223e3c: 0x0  nop
    ctx->pc = 0x223e3cu;
    // NOP
    ctx->pc = 0x223e40u;
}
