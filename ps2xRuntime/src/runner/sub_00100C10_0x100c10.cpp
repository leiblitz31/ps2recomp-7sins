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

// Function: sub_00100C10
// Address: 0x100c10 - 0x100c50
void sub_00100C10_0x100c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100C10_0x100c10");
#endif

    switch (ctx->pc) {
        case 0x100c2cu: goto label_100c2c;
        case 0x100c3cu: goto label_100c3c;
        default: break;
    }

    ctx->pc = 0x100c10u;

    // 0x100c10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x100c14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100c18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x100c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x100c1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x100c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x100c20: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x100c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100c24: 0xc040314  jal         func_100C50
    ctx->pc = 0x100C24u;
    SET_GPR_U32(ctx, 31, 0x100C2Cu);
    ctx->pc = 0x100C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C50u, 0x100C24u, 0x100C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100C2Cu;
label_100c2c:
    // 0x100c2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x100c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100c30: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x100c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100c34: 0xc040488  jal         func_101220
    ctx->pc = 0x100C34u;
    SET_GPR_U32(ctx, 31, 0x100C3Cu);
    ctx->pc = 0x101220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101220u, 0x100C34u, 0x100C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100C3Cu;
label_100c3c:
    // 0x100c3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x100c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100c40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100c44: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x100c44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x100c48: 0x3e00008  jr          $ra
    ctx->pc = 0x100C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100C50u;
}
