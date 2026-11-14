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

// Function: sub_0025D900
// Address: 0x25d900 - 0x25d940
void sub_0025D900_0x25d900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D900_0x25d900");
#endif

    switch (ctx->pc) {
        case 0x25d918u: goto label_25d918;
        case 0x25d928u: goto label_25d928;
        default: break;
    }

    ctx->pc = 0x25d900u;

    // 0x25d900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25d900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25d908: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25d908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25d90c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x25d90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x25d910: 0xc097690  jal         func_25DA40
    ctx->pc = 0x25D910u;
    SET_GPR_U32(ctx, 31, 0x25D918u);
    ctx->pc = 0x25DA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DA40u, 0x25D910u, 0x25D918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D918u;
label_25d918:
    // 0x25d918: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25d918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d91c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25d91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d920: 0xc097650  jal         func_25D940
    ctx->pc = 0x25D920u;
    SET_GPR_U32(ctx, 31, 0x25D928u);
    ctx->pc = 0x25D940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D940u, 0x25D920u, 0x25D928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D928u;
label_25d928:
    // 0x25d928: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25d928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d92c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d930: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25d930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25d934: 0x3e00008  jr          $ra
    ctx->pc = 0x25D934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D93Cu;
    // 0x25d93c: 0x0  nop
    ctx->pc = 0x25d93cu;
    // NOP
    ctx->pc = 0x25d940u;
}
