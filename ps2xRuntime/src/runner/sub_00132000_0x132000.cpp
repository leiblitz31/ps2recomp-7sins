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

// Function: sub_00132000
// Address: 0x132000 - 0x132050
void sub_00132000_0x132000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132000_0x132000");
#endif

    switch (ctx->pc) {
        case 0x132020u: goto label_132020;
        case 0x132038u: goto label_132038;
        default: break;
    }

    ctx->pc = 0x132000u;

    // 0x132000: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x132000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x132004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132008: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x132008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13200c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x13200cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x132010: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x132010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x132014: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x132014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x132018: 0xc04c84c  jal         func_132130
    ctx->pc = 0x132018u;
    SET_GPR_U32(ctx, 31, 0x132020u);
    ctx->pc = 0x132130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132130u, 0x132018u, 0x132020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132020u;
label_132020:
    // 0x132020: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x132020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132024: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x132024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x132028: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x132028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13202c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x13202cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x132030: 0xc04c814  jal         func_132050
    ctx->pc = 0x132030u;
    SET_GPR_U32(ctx, 31, 0x132038u);
    ctx->pc = 0x132050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132050u, 0x132030u, 0x132038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132038u;
label_132038:
    // 0x132038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13203c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x13203cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x132040: 0x3e00008  jr          $ra
    ctx->pc = 0x132040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132048u;
    // 0x132048: 0x0  nop
    ctx->pc = 0x132048u;
    // NOP
    // 0x13204c: 0x0  nop
    ctx->pc = 0x13204cu;
    // NOP
    ctx->pc = 0x132050u;
}
