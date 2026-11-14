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

// Function: sub_001A3B70
// Address: 0x1a3b70 - 0x1a3bb0
void sub_001A3B70_0x1a3b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3B70_0x1a3b70");
#endif

    switch (ctx->pc) {
        case 0x1a3b98u: goto label_1a3b98;
        default: break;
    }

    ctx->pc = 0x1a3b70u;

    // 0x1a3b70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a3b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a3b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a3b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a3b78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a3b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a3b7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a3b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a3b80: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1a3b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1a3b84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a3b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3b88: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1a3b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3b8c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1a3b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3b90: 0xc041934  jal         func_1064D0
    ctx->pc = 0x1A3B90u;
    SET_GPR_U32(ctx, 31, 0x1A3B98u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x1A3B90u, 0x1A3B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3B98u;
label_1a3b98:
    // 0x1a3b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a3b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3b9c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a3b9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a3ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3BA8u;
    // 0x1a3ba8: 0x0  nop
    ctx->pc = 0x1a3ba8u;
    // NOP
    // 0x1a3bac: 0x0  nop
    ctx->pc = 0x1a3bacu;
    // NOP
    ctx->pc = 0x1a3bb0u;
}
