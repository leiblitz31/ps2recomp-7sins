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

// Function: sub_00186140
// Address: 0x186140 - 0x186190
void sub_00186140_0x186140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186140_0x186140");
#endif

    ctx->pc = 0x186140u;

    // 0x186140: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x186140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x186144: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x186144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x186148: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x186148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x18614c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x18614cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x186150: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x186150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x186154: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x186154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186158: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x186158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18615c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x18615cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x186160: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x186160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186164: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x186164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186168: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x186168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x18616c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x18616cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186170: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x186170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186174: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x186174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x186178: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x186178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18617c: 0x3e00008  jr          $ra
    ctx->pc = 0x18617Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18617Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186184u;
    // 0x186184: 0x0  nop
    ctx->pc = 0x186184u;
    // NOP
    // 0x186188: 0x0  nop
    ctx->pc = 0x186188u;
    // NOP
    // 0x18618c: 0x0  nop
    ctx->pc = 0x18618cu;
    // NOP
    ctx->pc = 0x186190u;
}
