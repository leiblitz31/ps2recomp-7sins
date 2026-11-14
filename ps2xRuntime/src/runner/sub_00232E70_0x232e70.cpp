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

// Function: sub_00232E70
// Address: 0x232e70 - 0x232ec0
void sub_00232E70_0x232e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232E70_0x232e70");
#endif

    switch (ctx->pc) {
        case 0x232ea8u: goto label_232ea8;
        default: break;
    }

    ctx->pc = 0x232e70u;

    // 0x232e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x232e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232e78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x232e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x232e7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x232e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x232e80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232e84: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x232e84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x232e88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232e8c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x232e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x232e90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232e94: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x232e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x232e98: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x232e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232e9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x232e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232ea0: 0xc08cbb0  jal         func_232EC0
    ctx->pc = 0x232EA0u;
    SET_GPR_U32(ctx, 31, 0x232EA8u);
    ctx->pc = 0x232EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232EC0u, 0x232EA0u, 0x232EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232EA8u;
label_232ea8:
    // 0x232ea8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232eac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232eb0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x232eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x232eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x232EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232EBCu;
    // 0x232ebc: 0x0  nop
    ctx->pc = 0x232ebcu;
    // NOP
    ctx->pc = 0x232ec0u;
}
