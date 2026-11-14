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

// Function: sub_00218B50
// Address: 0x218b50 - 0x218bb0
void sub_00218B50_0x218b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218B50_0x218b50");
#endif

    switch (ctx->pc) {
        case 0x218b78u: goto label_218b78;
        case 0x218b90u: goto label_218b90;
        default: break;
    }

    ctx->pc = 0x218b50u;

    // 0x218b50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x218b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x218b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218b58: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x218b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x218b5c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x218b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x218b60: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x218b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x218b64: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x218b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x218b68: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x218b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x218b6c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x218b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218b70: 0xc0862ec  jal         func_218BB0
    ctx->pc = 0x218B70u;
    SET_GPR_U32(ctx, 31, 0x218B78u);
    ctx->pc = 0x218BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BB0u, 0x218B70u, 0x218B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B78u;
label_218b78:
    // 0x218b78: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x218b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218b7c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x218b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218b80: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x218b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b84: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x218b84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218b88: 0xc088204  jal         func_220810
    ctx->pc = 0x218B88u;
    SET_GPR_U32(ctx, 31, 0x218B90u);
    ctx->pc = 0x220810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220810u, 0x218B88u, 0x218B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B90u;
label_218b90:
    // 0x218b90: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x218b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218b98: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x218b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x218b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x218B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218BA4u;
    // 0x218ba4: 0x0  nop
    ctx->pc = 0x218ba4u;
    // NOP
    // 0x218ba8: 0x0  nop
    ctx->pc = 0x218ba8u;
    // NOP
    // 0x218bac: 0x0  nop
    ctx->pc = 0x218bacu;
    // NOP
    ctx->pc = 0x218bb0u;
}
