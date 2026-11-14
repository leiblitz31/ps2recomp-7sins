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

// Function: sub_001EAF20
// Address: 0x1eaf20 - 0x1eaf50
void sub_001EAF20_0x1eaf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EAF20_0x1eaf20");
#endif

    switch (ctx->pc) {
        case 0x1eaf3cu: goto label_1eaf3c;
        default: break;
    }

    ctx->pc = 0x1eaf20u;

    // 0x1eaf20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eaf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eaf24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eaf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eaf28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1eaf28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1eaf2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1eaf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eaf30: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1eaf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eaf34: 0xc07abd4  jal         func_1EAF50
    ctx->pc = 0x1EAF34u;
    SET_GPR_U32(ctx, 31, 0x1EAF3Cu);
    ctx->pc = 0x1EAF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAF50u, 0x1EAF34u, 0x1EAF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAF3Cu;
label_1eaf3c:
    // 0x1eaf3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eaf3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eaf40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1eaf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1eaf44: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAF4Cu;
    // 0x1eaf4c: 0x0  nop
    ctx->pc = 0x1eaf4cu;
    // NOP
    ctx->pc = 0x1eaf50u;
}
