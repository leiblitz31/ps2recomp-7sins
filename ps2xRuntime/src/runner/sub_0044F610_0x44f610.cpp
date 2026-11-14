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

// Function: sub_0044F610
// Address: 0x44f610 - 0x44f650
void sub_0044F610_0x44f610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F610_0x44f610");
#endif

    switch (ctx->pc) {
        case 0x44f638u: goto label_44f638;
        default: break;
    }

    ctx->pc = 0x44f610u;

    // 0x44f610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x44f610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x44f614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44f614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44f618: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x44f618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x44f61c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x44f61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x44f620: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x44f620u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x44f624: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x44f624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44f628: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x44f628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44f62c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x44f62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x44f630: 0xc113d94  jal         func_44F650
    ctx->pc = 0x44F630u;
    SET_GPR_U32(ctx, 31, 0x44F638u);
    ctx->pc = 0x44F650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F650u, 0x44F630u, 0x44F638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F638u;
label_44f638:
    // 0x44f638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44f638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44f63c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x44f63cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x44f640: 0x3e00008  jr          $ra
    ctx->pc = 0x44F640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F648u;
    // 0x44f648: 0x0  nop
    ctx->pc = 0x44f648u;
    // NOP
    // 0x44f64c: 0x0  nop
    ctx->pc = 0x44f64cu;
    // NOP
    ctx->pc = 0x44f650u;
}
