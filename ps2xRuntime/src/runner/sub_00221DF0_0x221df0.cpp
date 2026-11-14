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

// Function: sub_00221DF0
// Address: 0x221df0 - 0x221e40
void sub_00221DF0_0x221df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221DF0_0x221df0");
#endif

    switch (ctx->pc) {
        case 0x221e28u: goto label_221e28;
        default: break;
    }

    ctx->pc = 0x221df0u;

    // 0x221df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x221df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x221df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221df8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x221df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x221dfc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x221dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x221e00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x221e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221e04: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x221e04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x221e08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x221e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221e0c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x221e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x221e10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x221e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221e14: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x221e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x221e18: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x221e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221e1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e20: 0xc088790  jal         func_221E40
    ctx->pc = 0x221E20u;
    SET_GPR_U32(ctx, 31, 0x221E28u);
    ctx->pc = 0x221E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221E40u, 0x221E20u, 0x221E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221E28u;
label_221e28:
    // 0x221e28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x221e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221e2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221e30: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x221e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x221e34: 0x3e00008  jr          $ra
    ctx->pc = 0x221E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221E3Cu;
    // 0x221e3c: 0x0  nop
    ctx->pc = 0x221e3cu;
    // NOP
    ctx->pc = 0x221e40u;
}
