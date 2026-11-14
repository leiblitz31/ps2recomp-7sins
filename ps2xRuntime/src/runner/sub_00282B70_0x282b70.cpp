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

// Function: sub_00282B70
// Address: 0x282b70 - 0x282bb0
void sub_00282B70_0x282b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282B70_0x282b70");
#endif

    switch (ctx->pc) {
        case 0x282b8cu: goto label_282b8c;
        case 0x282b9cu: goto label_282b9c;
        default: break;
    }

    ctx->pc = 0x282b70u;

    // 0x282b70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x282b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x282b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282b78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x282b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x282b7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x282b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x282b80: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x282b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282b84: 0xc09e5a8  jal         func_2796A0
    ctx->pc = 0x282B84u;
    SET_GPR_U32(ctx, 31, 0x282B8Cu);
    ctx->pc = 0x2796A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2796A0u, 0x282B84u, 0x282B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282B8Cu;
label_282b8c:
    // 0x282b8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x282b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282b90: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x282b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282b94: 0xc0a0aec  jal         func_282BB0
    ctx->pc = 0x282B94u;
    SET_GPR_U32(ctx, 31, 0x282B9Cu);
    ctx->pc = 0x282BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282BB0u, 0x282B94u, 0x282B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282B9Cu;
label_282b9c:
    // 0x282b9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282ba0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x282ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x282ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x282BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282BACu;
    // 0x282bac: 0x0  nop
    ctx->pc = 0x282bacu;
    // NOP
    ctx->pc = 0x282bb0u;
}
