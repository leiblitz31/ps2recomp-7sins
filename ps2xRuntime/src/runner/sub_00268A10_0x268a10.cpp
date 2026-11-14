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

// Function: sub_00268A10
// Address: 0x268a10 - 0x268a60
void sub_00268A10_0x268a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268A10_0x268a10");
#endif

    switch (ctx->pc) {
        case 0x268a48u: goto label_268a48;
        default: break;
    }

    ctx->pc = 0x268a10u;

    // 0x268a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x268a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x268a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x268a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x268a18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x268a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x268a1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x268a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x268a20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x268a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268a24: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x268a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x268a28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x268a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268a2c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x268a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x268a30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x268a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268a34: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x268a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x268a38: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x268a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268a3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x268a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a40: 0xc09a298  jal         func_268A60
    ctx->pc = 0x268A40u;
    SET_GPR_U32(ctx, 31, 0x268A48u);
    ctx->pc = 0x268A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268A60u, 0x268A40u, 0x268A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268A48u;
label_268a48:
    // 0x268a48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x268a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268a4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x268a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268a50: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x268a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x268a54: 0x3e00008  jr          $ra
    ctx->pc = 0x268A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268A5Cu;
    // 0x268a5c: 0x0  nop
    ctx->pc = 0x268a5cu;
    // NOP
    ctx->pc = 0x268a60u;
}
