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

// Function: sub_002B0E50
// Address: 0x2b0e50 - 0x2b0ea0
void sub_002B0E50_0x2b0e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0E50_0x2b0e50");
#endif

    switch (ctx->pc) {
        case 0x2b0e70u: goto label_2b0e70;
        case 0x2b0e88u: goto label_2b0e88;
        default: break;
    }

    ctx->pc = 0x2b0e50u;

    // 0x2b0e50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b0e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b0e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b0e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b0e58: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b0e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2b0e5c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2b0e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2b0e60: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2b0e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2b0e64: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2b0e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2b0e68: 0xc0ac3d0  jal         func_2B0F40
    ctx->pc = 0x2B0E68u;
    SET_GPR_U32(ctx, 31, 0x2B0E70u);
    ctx->pc = 0x2B0F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0F40u, 0x2B0E68u, 0x2B0E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E70u;
label_2b0e70:
    // 0x2b0e70: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b0e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0e74: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2b0e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0e78: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2b0e78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b0e7c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2b0e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2b0e80: 0xc0ac3a8  jal         func_2B0EA0
    ctx->pc = 0x2B0E80u;
    SET_GPR_U32(ctx, 31, 0x2B0E88u);
    ctx->pc = 0x2B0EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0EA0u, 0x2B0E80u, 0x2B0E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E88u;
label_2b0e88:
    // 0x2b0e88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b0e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0e8c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2b0e8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b0e90: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0E98u;
    // 0x2b0e98: 0x0  nop
    ctx->pc = 0x2b0e98u;
    // NOP
    // 0x2b0e9c: 0x0  nop
    ctx->pc = 0x2b0e9cu;
    // NOP
    ctx->pc = 0x2b0ea0u;
}
