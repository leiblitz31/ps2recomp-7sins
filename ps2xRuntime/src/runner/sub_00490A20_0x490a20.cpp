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

// Function: sub_00490A20
// Address: 0x490a20 - 0x490a60
void sub_00490A20_0x490a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490A20_0x490a20");
#endif

    switch (ctx->pc) {
        case 0x490a40u: goto label_490a40;
        default: break;
    }

    ctx->pc = 0x490a20u;

    // 0x490a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x490a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x490a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x490a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x490a28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x490a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x490a2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x490a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x490a30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x490a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490a34: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x490a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x490a38: 0xc1242c4  jal         func_490B10
    ctx->pc = 0x490A38u;
    SET_GPR_U32(ctx, 31, 0x490A40u);
    ctx->pc = 0x490B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490B10u, 0x490A38u, 0x490A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490A40u;
label_490a40:
    // 0x490a40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x490a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490a44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x490a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490a48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x490a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x490a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x490A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490A54u;
    // 0x490a54: 0x0  nop
    ctx->pc = 0x490a54u;
    // NOP
    // 0x490a58: 0x0  nop
    ctx->pc = 0x490a58u;
    // NOP
    // 0x490a5c: 0x0  nop
    ctx->pc = 0x490a5cu;
    // NOP
    ctx->pc = 0x490a60u;
}
