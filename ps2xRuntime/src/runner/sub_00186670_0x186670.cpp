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

// Function: sub_00186670
// Address: 0x186670 - 0x1866b0
void sub_00186670_0x186670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186670_0x186670");
#endif

    switch (ctx->pc) {
        case 0x186690u: goto label_186690;
        case 0x1866a0u: goto label_1866a0;
        default: break;
    }

    ctx->pc = 0x186670u;

    // 0x186670: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x186670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x186674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186678: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x186678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x18667c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x18667cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x186680: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x186680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x186684: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x186684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186688: 0xc0619d8  jal         func_186760
    ctx->pc = 0x186688u;
    SET_GPR_U32(ctx, 31, 0x186690u);
    ctx->pc = 0x186760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186760u, 0x186688u, 0x186690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186690u;
label_186690:
    // 0x186690: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x186690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186694: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x186694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186698: 0xc0619ac  jal         func_1866B0
    ctx->pc = 0x186698u;
    SET_GPR_U32(ctx, 31, 0x1866A0u);
    ctx->pc = 0x1866B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1866B0u, 0x186698u, 0x1866A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1866A0u;
label_1866a0:
    // 0x1866a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1866a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1866a4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1866a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1866a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1866A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1866A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1866B0u;
}
