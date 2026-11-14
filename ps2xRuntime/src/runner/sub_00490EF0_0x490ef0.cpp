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

// Function: sub_00490EF0
// Address: 0x490ef0 - 0x490f30
void sub_00490EF0_0x490ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490EF0_0x490ef0");
#endif

    switch (ctx->pc) {
        case 0x490f18u: goto label_490f18;
        default: break;
    }

    ctx->pc = 0x490ef0u;

    // 0x490ef0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x490ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x490ef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x490ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x490ef8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x490ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x490efc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x490efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x490f00: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x490f00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x490f04: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x490f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x490f08: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x490f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x490f0c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x490f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x490f10: 0xc1243cc  jal         func_490F30
    ctx->pc = 0x490F10u;
    SET_GPR_U32(ctx, 31, 0x490F18u);
    ctx->pc = 0x490F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490F30u, 0x490F10u, 0x490F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490F18u;
label_490f18:
    // 0x490f18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x490f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490f1c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x490f1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x490f20: 0x3e00008  jr          $ra
    ctx->pc = 0x490F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490F28u;
    // 0x490f28: 0x0  nop
    ctx->pc = 0x490f28u;
    // NOP
    // 0x490f2c: 0x0  nop
    ctx->pc = 0x490f2cu;
    // NOP
    ctx->pc = 0x490f30u;
}
