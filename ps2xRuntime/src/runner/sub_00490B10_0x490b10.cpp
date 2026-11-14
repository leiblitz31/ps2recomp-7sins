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

// Function: sub_00490B10
// Address: 0x490b10 - 0x490b60
void sub_00490B10_0x490b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490B10_0x490b10");
#endif

    switch (ctx->pc) {
        case 0x490b48u: goto label_490b48;
        default: break;
    }

    ctx->pc = 0x490b10u;

    // 0x490b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x490b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x490b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x490b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x490b18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x490b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x490b1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x490b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x490b20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x490b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490b24: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x490b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x490b28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x490b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490b2c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x490b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x490b30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x490b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490b34: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x490b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x490b38: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x490b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x490b3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x490b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490b40: 0xc1242d8  jal         func_490B60
    ctx->pc = 0x490B40u;
    SET_GPR_U32(ctx, 31, 0x490B48u);
    ctx->pc = 0x490B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490B60u, 0x490B40u, 0x490B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490B48u;
label_490b48:
    // 0x490b48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x490b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490b4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x490b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490b50: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x490b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x490b54: 0x3e00008  jr          $ra
    ctx->pc = 0x490B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490B5Cu;
    // 0x490b5c: 0x0  nop
    ctx->pc = 0x490b5cu;
    // NOP
    ctx->pc = 0x490b60u;
}
