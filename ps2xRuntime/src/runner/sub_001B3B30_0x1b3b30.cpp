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

// Function: sub_001B3B30
// Address: 0x1b3b30 - 0x1b3b80
void sub_001B3B30_0x1b3b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3B30_0x1b3b30");
#endif

    switch (ctx->pc) {
        case 0x1b3b60u: goto label_1b3b60;
        default: break;
    }

    ctx->pc = 0x1b3b30u;

    // 0x1b3b30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b3b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b3b34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b3b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b3b38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b3b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b3b3c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1b3b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1b3b40: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1b3b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1b3b44: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x1b3b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x1b3b48: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x1b3b48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1b3b4c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b3b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3b50: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1b3b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3b54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b3b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3b58: 0xc06cee0  jal         func_1B3B80
    ctx->pc = 0x1B3B58u;
    SET_GPR_U32(ctx, 31, 0x1B3B60u);
    ctx->pc = 0x1B3B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3B80u, 0x1B3B58u, 0x1B3B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3B60u;
label_1b3b60:
    // 0x1b3b60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b3b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3b64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b3b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3b68: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1b3b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b3b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3B74u;
    // 0x1b3b74: 0x0  nop
    ctx->pc = 0x1b3b74u;
    // NOP
    // 0x1b3b78: 0x0  nop
    ctx->pc = 0x1b3b78u;
    // NOP
    // 0x1b3b7c: 0x0  nop
    ctx->pc = 0x1b3b7cu;
    // NOP
    ctx->pc = 0x1b3b80u;
}
