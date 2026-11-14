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

// Function: sub_0014AEF0
// Address: 0x14aef0 - 0x14af30
void sub_0014AEF0_0x14aef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AEF0_0x14aef0");
#endif

    switch (ctx->pc) {
        case 0x14af08u: goto label_14af08;
        case 0x14af18u: goto label_14af18;
        default: break;
    }

    ctx->pc = 0x14aef0u;

    // 0x14aef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14aef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14aef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14aef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14aef8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x14aef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x14aefc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14aefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14af00: 0xc052bd4  jal         func_14AF50
    ctx->pc = 0x14AF00u;
    SET_GPR_U32(ctx, 31, 0x14AF08u);
    ctx->pc = 0x14AF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF50u, 0x14AF00u, 0x14AF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF08u;
label_14af08:
    // 0x14af08: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x14af08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x14af0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14af0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af10: 0xc052bcc  jal         func_14AF30
    ctx->pc = 0x14AF10u;
    SET_GPR_U32(ctx, 31, 0x14AF18u);
    ctx->pc = 0x14AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF30u, 0x14AF10u, 0x14AF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF18u;
label_14af18:
    // 0x14af18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14af18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14af1c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14af1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14af20: 0x3e00008  jr          $ra
    ctx->pc = 0x14AF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AF28u;
    // 0x14af28: 0x0  nop
    ctx->pc = 0x14af28u;
    // NOP
    // 0x14af2c: 0x0  nop
    ctx->pc = 0x14af2cu;
    // NOP
    ctx->pc = 0x14af30u;
}
