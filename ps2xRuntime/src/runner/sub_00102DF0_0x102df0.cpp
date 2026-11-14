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

// Function: sub_00102DF0
// Address: 0x102df0 - 0x102e30
void sub_00102DF0_0x102df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102DF0_0x102df0");
#endif

    switch (ctx->pc) {
        case 0x102e10u: goto label_102e10;
        default: break;
    }

    ctx->pc = 0x102df0u;

    // 0x102df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x102df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102df8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x102df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x102dfc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x102dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x102e00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x102e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102e04: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x102e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102e08: 0xc040b8c  jal         func_102E30
    ctx->pc = 0x102E08u;
    SET_GPR_U32(ctx, 31, 0x102E10u);
    ctx->pc = 0x102E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102E30u, 0x102E08u, 0x102E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102E10u;
label_102e10:
    // 0x102e10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102e18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x102e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x102e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x102E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102E24u;
    // 0x102e24: 0x0  nop
    ctx->pc = 0x102e24u;
    // NOP
    // 0x102e28: 0x0  nop
    ctx->pc = 0x102e28u;
    // NOP
    // 0x102e2c: 0x0  nop
    ctx->pc = 0x102e2cu;
    // NOP
    ctx->pc = 0x102e30u;
}
