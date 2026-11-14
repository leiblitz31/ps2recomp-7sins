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

// Function: sub_00167820
// Address: 0x167820 - 0x167870
void sub_00167820_0x167820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167820_0x167820");
#endif

    ctx->pc = 0x167820u;

    // 0x167820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x167820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x167824: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x167824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x167828: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x167828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x16782c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x16782cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x167830: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x167830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x167834: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x167834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167838: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x167838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16783c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x16783cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x167840: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x167840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167844: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x167844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167848: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x167848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x16784c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x16784cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167850: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x167850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167854: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x167854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x167858: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x167858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16785c: 0x3e00008  jr          $ra
    ctx->pc = 0x16785Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16785Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167864u;
    // 0x167864: 0x0  nop
    ctx->pc = 0x167864u;
    // NOP
    // 0x167868: 0x0  nop
    ctx->pc = 0x167868u;
    // NOP
    // 0x16786c: 0x0  nop
    ctx->pc = 0x16786cu;
    // NOP
    ctx->pc = 0x167870u;
}
