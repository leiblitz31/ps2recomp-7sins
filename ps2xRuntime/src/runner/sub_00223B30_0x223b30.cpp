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

// Function: sub_00223B30
// Address: 0x223b30 - 0x223b60
void sub_00223B30_0x223b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223B30_0x223b30");
#endif

    switch (ctx->pc) {
        case 0x223b4cu: goto label_223b4c;
        default: break;
    }

    ctx->pc = 0x223b30u;

    // 0x223b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223b38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x223b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x223b3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x223b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223b40: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x223b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x223b44: 0xc041b48  jal         func_106D20
    ctx->pc = 0x223B44u;
    SET_GPR_U32(ctx, 31, 0x223B4Cu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x223B44u, 0x223B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223B4Cu;
label_223b4c:
    // 0x223b4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x223b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223b50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223b54: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x223b54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x223b58: 0x3e00008  jr          $ra
    ctx->pc = 0x223B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223B60u;
}
