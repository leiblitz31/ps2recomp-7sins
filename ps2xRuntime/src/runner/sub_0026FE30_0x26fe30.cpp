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

// Function: sub_0026FE30
// Address: 0x26fe30 - 0x26fe80
void sub_0026FE30_0x26fe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FE30_0x26fe30");
#endif

    switch (ctx->pc) {
        case 0x26fe68u: goto label_26fe68;
        default: break;
    }

    ctx->pc = 0x26fe30u;

    // 0x26fe30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26fe30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26fe34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26fe34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26fe38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x26fe38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26fe3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x26fe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x26fe40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fe44: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x26fe44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x26fe48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fe4c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x26fe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x26fe50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fe54: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x26fe54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x26fe58: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x26fe58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26fe5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26fe5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fe60: 0xc09bfa0  jal         func_26FE80
    ctx->pc = 0x26FE60u;
    SET_GPR_U32(ctx, 31, 0x26FE68u);
    ctx->pc = 0x26FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FE80u, 0x26FE60u, 0x26FE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE68u;
label_26fe68:
    // 0x26fe68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fe6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26fe6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fe70: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26fe70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26fe74: 0x3e00008  jr          $ra
    ctx->pc = 0x26FE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FE7Cu;
    // 0x26fe7c: 0x0  nop
    ctx->pc = 0x26fe7cu;
    // NOP
    ctx->pc = 0x26fe80u;
}
