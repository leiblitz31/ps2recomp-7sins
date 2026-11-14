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

// Function: sub_002E3C60
// Address: 0x2e3c60 - 0x2e3cb0
void sub_002E3C60_0x2e3c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3C60_0x2e3c60");
#endif

    switch (ctx->pc) {
        case 0x2e3c84u: goto label_2e3c84;
        default: break;
    }

    ctx->pc = 0x2e3c60u;

    // 0x2e3c60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e3c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e3c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e3c68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e3c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e3c6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2e3c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2e3c70: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2e3c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2e3c74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e3c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3c78: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2e3c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3c7c: 0xc0b8f2c  jal         func_2E3CB0
    ctx->pc = 0x2E3C7Cu;
    SET_GPR_U32(ctx, 31, 0x2E3C84u);
    ctx->pc = 0x2E3CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3CB0u, 0x2E3C7Cu, 0x2E3C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C84u;
label_2e3c84:
    // 0x2e3c84: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2e3c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e3c88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e3c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3c8c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2e3c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2e3c90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e3c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3c94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3c98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e3c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e3c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3CA4u;
    // 0x2e3ca4: 0x0  nop
    ctx->pc = 0x2e3ca4u;
    // NOP
    // 0x2e3ca8: 0x0  nop
    ctx->pc = 0x2e3ca8u;
    // NOP
    // 0x2e3cac: 0x0  nop
    ctx->pc = 0x2e3cacu;
    // NOP
    ctx->pc = 0x2e3cb0u;
}
