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

// Function: sub_001BEE60
// Address: 0x1bee60 - 0x1beeb0
void sub_001BEE60_0x1bee60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEE60_0x1bee60");
#endif

    ctx->pc = 0x1bee60u;

    // 0x1bee60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bee60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bee64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1bee64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1bee68: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1bee68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1bee6c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1bee6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1bee70: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x1bee70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x1bee74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1bee74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bee78: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1bee78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bee7c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1bee7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1bee80: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1bee80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bee84: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1bee84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bee88: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1bee88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1bee8c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1bee8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bee90: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1bee90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bee94: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1bee94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x1bee98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1bee98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bee9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEEA4u;
    // 0x1beea4: 0x0  nop
    ctx->pc = 0x1beea4u;
    // NOP
    // 0x1beea8: 0x0  nop
    ctx->pc = 0x1beea8u;
    // NOP
    // 0x1beeac: 0x0  nop
    ctx->pc = 0x1beeacu;
    // NOP
    ctx->pc = 0x1beeb0u;
}
