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

// Function: sub_00190810
// Address: 0x190810 - 0x190860
void sub_00190810_0x190810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190810_0x190810");
#endif

    switch (ctx->pc) {
        case 0x190838u: goto label_190838;
        case 0x19084cu: goto label_19084c;
        default: break;
    }

    ctx->pc = 0x190810u;

    // 0x190810: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x190810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x190814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190818: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x190818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x19081c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x19081cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x190820: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x190820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x190824: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x190824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x190828: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x190828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19082c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x19082cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x190830: 0xc064314  jal         func_190C50
    ctx->pc = 0x190830u;
    SET_GPR_U32(ctx, 31, 0x190838u);
    ctx->pc = 0x190C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C50u, 0x190830u, 0x190838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190838u;
label_190838:
    // 0x190838: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x190838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19083c: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x19083cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x190840: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x190840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x190844: 0xc064218  jal         func_190860
    ctx->pc = 0x190844u;
    SET_GPR_U32(ctx, 31, 0x19084Cu);
    ctx->pc = 0x190860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190860u, 0x190844u, 0x19084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19084Cu;
label_19084c:
    // 0x19084c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19084cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190850: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x190850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x190854: 0x3e00008  jr          $ra
    ctx->pc = 0x190854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19085Cu;
    // 0x19085c: 0x0  nop
    ctx->pc = 0x19085cu;
    // NOP
    ctx->pc = 0x190860u;
}
