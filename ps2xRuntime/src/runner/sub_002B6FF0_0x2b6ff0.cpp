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

// Function: sub_002B6FF0
// Address: 0x2b6ff0 - 0x2b7030
void sub_002B6FF0_0x2b6ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6FF0_0x2b6ff0");
#endif

    switch (ctx->pc) {
        case 0x2b7018u: goto label_2b7018;
        default: break;
    }

    ctx->pc = 0x2b6ff0u;

    // 0x2b6ff0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b6ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b6ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6ff8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b6ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b6ffc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2b6ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2b7000: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2b7000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2b7004: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b7004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7008: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2b7008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b700c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2b700cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7010: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2B7010u;
    SET_GPR_U32(ctx, 31, 0x2B7018u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2B7010u, 0x2B7018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7018u;
label_2b7018:
    // 0x2b7018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b7018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b701c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2b701cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b7020: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7028u;
    // 0x2b7028: 0x0  nop
    ctx->pc = 0x2b7028u;
    // NOP
    // 0x2b702c: 0x0  nop
    ctx->pc = 0x2b702cu;
    // NOP
    ctx->pc = 0x2b7030u;
}
