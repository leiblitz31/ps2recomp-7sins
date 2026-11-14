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

// Function: sub_0022ED50
// Address: 0x22ed50 - 0x22eda0
void sub_0022ED50_0x22ed50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022ED50_0x22ed50");
#endif

    ctx->pc = 0x22ed50u;

    // 0x22ed50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22ed50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22ed54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x22ed54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x22ed58: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x22ed58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x22ed5c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x22ed5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x22ed60: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x22ed60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x22ed64: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ed68: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x22ed68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ed6c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x22ed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x22ed70: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22ed70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ed74: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x22ed74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ed78: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x22ed78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x22ed7c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x22ed7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ed80: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x22ed80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ed84: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x22ed84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x22ed88: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22ed88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22ed8c: 0x3e00008  jr          $ra
    ctx->pc = 0x22ED8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ED8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22ED94u;
    // 0x22ed94: 0x0  nop
    ctx->pc = 0x22ed94u;
    // NOP
    // 0x22ed98: 0x0  nop
    ctx->pc = 0x22ed98u;
    // NOP
    // 0x22ed9c: 0x0  nop
    ctx->pc = 0x22ed9cu;
    // NOP
    ctx->pc = 0x22eda0u;
}
