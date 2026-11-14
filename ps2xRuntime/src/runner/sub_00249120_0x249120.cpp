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

// Function: sub_00249120
// Address: 0x249120 - 0x249160
void sub_00249120_0x249120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249120_0x249120");
#endif

    switch (ctx->pc) {
        case 0x249148u: goto label_249148;
        default: break;
    }

    ctx->pc = 0x249120u;

    // 0x249120: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x249120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x249124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x249128: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x249128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x24912c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x24912cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x249130: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x249130u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x249134: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x249134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x249138: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x249138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24913c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x24913cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x249140: 0xc092458  jal         func_249160
    ctx->pc = 0x249140u;
    SET_GPR_U32(ctx, 31, 0x249148u);
    ctx->pc = 0x249160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249160u, 0x249140u, 0x249148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249148u;
label_249148:
    // 0x249148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24914c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x24914cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x249150: 0x3e00008  jr          $ra
    ctx->pc = 0x249150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249158u;
    // 0x249158: 0x0  nop
    ctx->pc = 0x249158u;
    // NOP
    // 0x24915c: 0x0  nop
    ctx->pc = 0x24915cu;
    // NOP
    ctx->pc = 0x249160u;
}
