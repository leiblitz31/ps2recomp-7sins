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

// Function: sub_002E3B40
// Address: 0x2e3b40 - 0x2e3b80
void sub_002E3B40_0x2e3b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3B40_0x2e3b40");
#endif

    switch (ctx->pc) {
        case 0x2e3b68u: goto label_2e3b68;
        default: break;
    }

    ctx->pc = 0x2e3b40u;

    // 0x2e3b40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e3b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e3b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e3b48: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e3b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e3b4c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2e3b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2e3b50: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2e3b50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3b54: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e3b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3b58: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2e3b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e3b5c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x2e3b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2e3b60: 0xc0b8ee0  jal         func_2E3B80
    ctx->pc = 0x2E3B60u;
    SET_GPR_U32(ctx, 31, 0x2E3B68u);
    ctx->pc = 0x2E3B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3B80u, 0x2E3B60u, 0x2E3B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3B68u;
label_2e3b68:
    // 0x2e3b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3b6c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e3b6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e3b70: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3B78u;
    // 0x2e3b78: 0x0  nop
    ctx->pc = 0x2e3b78u;
    // NOP
    // 0x2e3b7c: 0x0  nop
    ctx->pc = 0x2e3b7cu;
    // NOP
    ctx->pc = 0x2e3b80u;
}
