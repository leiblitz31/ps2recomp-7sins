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

// Function: sub_00208310
// Address: 0x208310 - 0x208350
void sub_00208310_0x208310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208310_0x208310");
#endif

    switch (ctx->pc) {
        case 0x208328u: goto label_208328;
        case 0x208338u: goto label_208338;
        default: break;
    }

    ctx->pc = 0x208310u;

    // 0x208310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x208310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x208314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208318: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x208318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x20831c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x20831cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x208320: 0xc082114  jal         func_208450
    ctx->pc = 0x208320u;
    SET_GPR_U32(ctx, 31, 0x208328u);
    ctx->pc = 0x208450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208450u, 0x208320u, 0x208328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208328u;
label_208328:
    // 0x208328: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x208328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20832c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20832cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208330: 0xc0820d4  jal         func_208350
    ctx->pc = 0x208330u;
    SET_GPR_U32(ctx, 31, 0x208338u);
    ctx->pc = 0x208350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208350u, 0x208330u, 0x208338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208338u;
label_208338:
    // 0x208338: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x208338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20833c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20833cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208340: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x208340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x208344: 0x3e00008  jr          $ra
    ctx->pc = 0x208344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20834Cu;
    // 0x20834c: 0x0  nop
    ctx->pc = 0x20834cu;
    // NOP
    ctx->pc = 0x208350u;
}
