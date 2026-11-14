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

// Function: sub_00242A60
// Address: 0x242a60 - 0x242ab0
void sub_00242A60_0x242a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242A60_0x242a60");
#endif

    switch (ctx->pc) {
        case 0x242a84u: goto label_242a84;
        default: break;
    }

    ctx->pc = 0x242a60u;

    // 0x242a60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x242a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x242a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242a68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x242a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x242a6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x242a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x242a70: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x242a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x242a74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x242a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242a78: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x242a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242a7c: 0xc090aac  jal         func_242AB0
    ctx->pc = 0x242A7Cu;
    SET_GPR_U32(ctx, 31, 0x242A84u);
    ctx->pc = 0x242AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242AB0u, 0x242A7Cu, 0x242A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242A84u;
label_242a84:
    // 0x242a84: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x242a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x242a88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x242a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242a8c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x242a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x242a90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x242a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242a94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242a98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x242a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x242a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x242A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242AA4u;
    // 0x242aa4: 0x0  nop
    ctx->pc = 0x242aa4u;
    // NOP
    // 0x242aa8: 0x0  nop
    ctx->pc = 0x242aa8u;
    // NOP
    // 0x242aac: 0x0  nop
    ctx->pc = 0x242aacu;
    // NOP
    ctx->pc = 0x242ab0u;
}
