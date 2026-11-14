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

// Function: sub_00268C20
// Address: 0x268c20 - 0x268c50
void sub_00268C20_0x268c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268C20_0x268c20");
#endif

    switch (ctx->pc) {
        case 0x268c3cu: goto label_268c3c;
        default: break;
    }

    ctx->pc = 0x268c20u;

    // 0x268c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x268c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x268c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x268c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x268c28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x268c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x268c2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x268c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268c30: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x268c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x268c34: 0xc09a314  jal         func_268C50
    ctx->pc = 0x268C34u;
    SET_GPR_U32(ctx, 31, 0x268C3Cu);
    ctx->pc = 0x268C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268C50u, 0x268C34u, 0x268C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268C3Cu;
label_268c3c:
    // 0x268c3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x268c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268c40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x268c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x268c44: 0x3e00008  jr          $ra
    ctx->pc = 0x268C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268C4Cu;
    // 0x268c4c: 0x0  nop
    ctx->pc = 0x268c4cu;
    // NOP
    ctx->pc = 0x268c50u;
}
