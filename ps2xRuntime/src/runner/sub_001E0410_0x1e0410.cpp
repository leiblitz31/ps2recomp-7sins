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

// Function: sub_001E0410
// Address: 0x1e0410 - 0x1e0450
void sub_001E0410_0x1e0410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0410_0x1e0410");
#endif

    switch (ctx->pc) {
        case 0x1e0428u: goto label_1e0428;
        case 0x1e0438u: goto label_1e0438;
        default: break;
    }

    ctx->pc = 0x1e0410u;

    // 0x1e0410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e0410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e0414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0418: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e0418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e041c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1e041cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1e0420: 0xc078154  jal         func_1E0550
    ctx->pc = 0x1E0420u;
    SET_GPR_U32(ctx, 31, 0x1E0428u);
    ctx->pc = 0x1E0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0550u, 0x1E0420u, 0x1E0428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0428u;
label_1e0428:
    // 0x1e0428: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e0428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e042c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e042cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0430: 0xc078114  jal         func_1E0450
    ctx->pc = 0x1E0430u;
    SET_GPR_U32(ctx, 31, 0x1E0438u);
    ctx->pc = 0x1E0450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0450u, 0x1E0430u, 0x1E0438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0438u;
label_1e0438:
    // 0x1e0438: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e0438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e043c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e043cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0440: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e0440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e0444: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E044Cu;
    // 0x1e044c: 0x0  nop
    ctx->pc = 0x1e044cu;
    // NOP
    ctx->pc = 0x1e0450u;
}
