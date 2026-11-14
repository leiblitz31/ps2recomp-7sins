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

// Function: sub_00264A60
// Address: 0x264a60 - 0x264ab0
void sub_00264A60_0x264a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264A60_0x264a60");
#endif

    ctx->pc = 0x264a60u;

    // 0x264a60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x264a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x264a64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x264a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x264a68: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x264a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x264a6c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x264a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x264a70: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x264a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x264a74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x264a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264a78: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x264a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264a7c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x264a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x264a80: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x264a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264a84: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x264a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264a88: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x264a88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x264a8c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x264a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264a90: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x264a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264a94: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x264a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x264a98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x264a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x264a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x264A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264AA4u;
    // 0x264aa4: 0x0  nop
    ctx->pc = 0x264aa4u;
    // NOP
    // 0x264aa8: 0x0  nop
    ctx->pc = 0x264aa8u;
    // NOP
    // 0x264aac: 0x0  nop
    ctx->pc = 0x264aacu;
    // NOP
    ctx->pc = 0x264ab0u;
}
