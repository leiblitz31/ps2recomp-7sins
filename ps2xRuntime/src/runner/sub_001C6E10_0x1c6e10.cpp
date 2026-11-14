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

// Function: sub_001C6E10
// Address: 0x1c6e10 - 0x1c6e50
void sub_001C6E10_0x1c6e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6E10_0x1c6e10");
#endif

    switch (ctx->pc) {
        case 0x1c6e28u: goto label_1c6e28;
        case 0x1c6e38u: goto label_1c6e38;
        default: break;
    }

    ctx->pc = 0x1c6e10u;

    // 0x1c6e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c6e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6e14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6e18: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1c6e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1c6e1c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1c6e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c6e20: 0xc071c20  jal         func_1C7080
    ctx->pc = 0x1C6E20u;
    SET_GPR_U32(ctx, 31, 0x1C6E28u);
    ctx->pc = 0x1C7080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7080u, 0x1C6E20u, 0x1C6E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E28u;
label_1c6e28:
    // 0x1c6e28: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c6e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6e2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e30: 0xc071be0  jal         func_1C6F80
    ctx->pc = 0x1C6E30u;
    SET_GPR_U32(ctx, 31, 0x1C6E38u);
    ctx->pc = 0x1C6F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6F80u, 0x1C6E30u, 0x1C6E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E38u;
label_1c6e38:
    // 0x1c6e38: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c6e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6e40: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c6e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c6e44: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6E4Cu;
    // 0x1c6e4c: 0x0  nop
    ctx->pc = 0x1c6e4cu;
    // NOP
    ctx->pc = 0x1c6e50u;
}
