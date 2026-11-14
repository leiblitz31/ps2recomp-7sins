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

// Function: sub_00102D60
// Address: 0x102d60 - 0x102da0
void sub_00102D60_0x102d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102D60_0x102d60");
#endif

    switch (ctx->pc) {
        case 0x102d88u: goto label_102d88;
        default: break;
    }

    ctx->pc = 0x102d60u;

    // 0x102d60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x102d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x102d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102d68: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x102d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x102d6c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x102d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x102d70: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x102d70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x102d74: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x102d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102d78: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x102d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102d7c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x102d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x102d80: 0xc040b68  jal         func_102DA0
    ctx->pc = 0x102D80u;
    SET_GPR_U32(ctx, 31, 0x102D88u);
    ctx->pc = 0x102DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102DA0u, 0x102D80u, 0x102D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102D88u;
label_102d88:
    // 0x102d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102d8c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x102d8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x102d90: 0x3e00008  jr          $ra
    ctx->pc = 0x102D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102D98u;
    // 0x102d98: 0x0  nop
    ctx->pc = 0x102d98u;
    // NOP
    // 0x102d9c: 0x0  nop
    ctx->pc = 0x102d9cu;
    // NOP
    ctx->pc = 0x102da0u;
}
