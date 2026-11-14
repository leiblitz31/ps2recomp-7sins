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

// Function: sub_00265DE0
// Address: 0x265de0 - 0x265e20
void sub_00265DE0_0x265de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265DE0_0x265de0");
#endif

    switch (ctx->pc) {
        case 0x265df8u: goto label_265df8;
        case 0x265e08u: goto label_265e08;
        default: break;
    }

    ctx->pc = 0x265de0u;

    // 0x265de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x265de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x265de4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x265de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265de8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x265de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x265dec: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x265decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x265df0: 0xc0997c8  jal         func_265F20
    ctx->pc = 0x265DF0u;
    SET_GPR_U32(ctx, 31, 0x265DF8u);
    ctx->pc = 0x265F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265F20u, 0x265DF0u, 0x265DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265DF8u;
label_265df8:
    // 0x265df8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x265df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265dfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x265dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265e00: 0xc099788  jal         func_265E20
    ctx->pc = 0x265E00u;
    SET_GPR_U32(ctx, 31, 0x265E08u);
    ctx->pc = 0x265E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265E20u, 0x265E00u, 0x265E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265E08u;
label_265e08:
    // 0x265e08: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x265e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265e0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265e10: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x265e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x265e14: 0x3e00008  jr          $ra
    ctx->pc = 0x265E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265E1Cu;
    // 0x265e1c: 0x0  nop
    ctx->pc = 0x265e1cu;
    // NOP
    ctx->pc = 0x265e20u;
}
