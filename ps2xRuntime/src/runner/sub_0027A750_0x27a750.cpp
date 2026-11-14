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

// Function: sub_0027A750
// Address: 0x27a750 - 0x27a7a0
void sub_0027A750_0x27a750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A750_0x27a750");
#endif

    ctx->pc = 0x27a750u;

    // 0x27a750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27a750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27a754: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x27a754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x27a758: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x27a758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x27a75c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x27a75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x27a760: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x27a760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x27a764: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27a764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a768: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27a768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a76c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x27a76cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x27a770: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x27a770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a774: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27a774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a778: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x27a778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x27a77c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x27a77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a780: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27a780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a784: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x27a784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x27a788: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27a788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27a78c: 0x3e00008  jr          $ra
    ctx->pc = 0x27A78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A794u;
    // 0x27a794: 0x0  nop
    ctx->pc = 0x27a794u;
    // NOP
    // 0x27a798: 0x0  nop
    ctx->pc = 0x27a798u;
    // NOP
    // 0x27a79c: 0x0  nop
    ctx->pc = 0x27a79cu;
    // NOP
    ctx->pc = 0x27a7a0u;
}
