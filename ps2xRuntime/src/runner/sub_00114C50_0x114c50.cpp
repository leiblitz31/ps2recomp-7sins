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

// Function: sub_00114C50
// Address: 0x114c50 - 0x114ca0
void sub_00114C50_0x114c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114C50_0x114c50");
#endif

    switch (ctx->pc) {
        case 0x114c74u: goto label_114c74;
        default: break;
    }

    ctx->pc = 0x114c50u;

    // 0x114c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x114c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x114c54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114c58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x114c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x114c5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x114c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x114c60: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x114c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x114c64: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x114c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114c68: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x114c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114c6c: 0xc045328  jal         func_114CA0
    ctx->pc = 0x114C6Cu;
    SET_GPR_U32(ctx, 31, 0x114C74u);
    ctx->pc = 0x114CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114CA0u, 0x114C6Cu, 0x114C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C74u;
label_114c74:
    // 0x114c74: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x114c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x114c78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x114c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114c7c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x114c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x114c80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x114c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114c88: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x114c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x114c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x114C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114C94u;
    // 0x114c94: 0x0  nop
    ctx->pc = 0x114c94u;
    // NOP
    // 0x114c98: 0x0  nop
    ctx->pc = 0x114c98u;
    // NOP
    // 0x114c9c: 0x0  nop
    ctx->pc = 0x114c9cu;
    // NOP
    ctx->pc = 0x114ca0u;
}
