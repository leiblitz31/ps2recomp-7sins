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

// Function: sub_00102E30
// Address: 0x102e30 - 0x102e80
void sub_00102E30_0x102e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102E30_0x102e30");
#endif

    switch (ctx->pc) {
        case 0x102e68u: goto label_102e68;
        default: break;
    }

    ctx->pc = 0x102e30u;

    // 0x102e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x102e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102e38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x102e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x102e3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x102e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x102e40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102e44: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x102e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x102e48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102e4c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x102e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x102e50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102e54: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x102e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x102e58: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x102e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102e5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x102e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102e60: 0xc040ba0  jal         func_102E80
    ctx->pc = 0x102E60u;
    SET_GPR_U32(ctx, 31, 0x102E68u);
    ctx->pc = 0x102E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102E80u, 0x102E60u, 0x102E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102E68u;
label_102e68:
    // 0x102e68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102e70: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x102e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x102e74: 0x3e00008  jr          $ra
    ctx->pc = 0x102E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102E7Cu;
    // 0x102e7c: 0x0  nop
    ctx->pc = 0x102e7cu;
    // NOP
    ctx->pc = 0x102e80u;
}
