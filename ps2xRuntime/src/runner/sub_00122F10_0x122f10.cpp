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

// Function: sub_00122F10
// Address: 0x122f10 - 0x122f50
void sub_00122F10_0x122f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122F10_0x122f10");
#endif

    switch (ctx->pc) {
        case 0x122f28u: goto label_122f28;
        case 0x122f38u: goto label_122f38;
        default: break;
    }

    ctx->pc = 0x122f10u;

    // 0x122f10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x122f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x122f14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x122f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x122f18: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x122f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x122f1c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x122f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x122f20: 0xc048c14  jal         func_123050
    ctx->pc = 0x122F20u;
    SET_GPR_U32(ctx, 31, 0x122F28u);
    ctx->pc = 0x123050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123050u, 0x122F20u, 0x122F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F28u;
label_122f28:
    // 0x122f28: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x122f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122f2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x122f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f30: 0xc048bd4  jal         func_122F50
    ctx->pc = 0x122F30u;
    SET_GPR_U32(ctx, 31, 0x122F38u);
    ctx->pc = 0x122F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F50u, 0x122F30u, 0x122F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F38u;
label_122f38:
    // 0x122f38: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x122f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122f3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x122f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122f40: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x122f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x122f44: 0x3e00008  jr          $ra
    ctx->pc = 0x122F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122F4Cu;
    // 0x122f4c: 0x0  nop
    ctx->pc = 0x122f4cu;
    // NOP
    ctx->pc = 0x122f50u;
}
