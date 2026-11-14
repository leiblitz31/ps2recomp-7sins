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

// Function: sub_001B9B60
// Address: 0x1b9b60 - 0x1b9bb0
void sub_001B9B60_0x1b9b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9B60_0x1b9b60");
#endif

    switch (ctx->pc) {
        case 0x1b9b84u: goto label_1b9b84;
        default: break;
    }

    ctx->pc = 0x1b9b60u;

    // 0x1b9b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b9b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b9b64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9b68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b9b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b9b6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1b9b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1b9b70: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1b9b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1b9b74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b9b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9b78: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1b9b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9b7c: 0xc06e6ec  jal         func_1B9BB0
    ctx->pc = 0x1B9B7Cu;
    SET_GPR_U32(ctx, 31, 0x1B9B84u);
    ctx->pc = 0x1B9BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9BB0u, 0x1B9B7Cu, 0x1B9B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9B84u;
label_1b9b84:
    // 0x1b9b84: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b9b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b9b88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9b8c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1b9b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1b9b90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9b98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b9b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b9b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9BA4u;
    // 0x1b9ba4: 0x0  nop
    ctx->pc = 0x1b9ba4u;
    // NOP
    // 0x1b9ba8: 0x0  nop
    ctx->pc = 0x1b9ba8u;
    // NOP
    // 0x1b9bac: 0x0  nop
    ctx->pc = 0x1b9bacu;
    // NOP
    ctx->pc = 0x1b9bb0u;
}
