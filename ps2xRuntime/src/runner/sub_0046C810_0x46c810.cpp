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

// Function: sub_0046C810
// Address: 0x46c810 - 0x46c860
void sub_0046C810_0x46c810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C810_0x46c810");
#endif

    ctx->pc = 0x46c810u;

    // 0x46c810: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46c810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46c814: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x46c814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x46c818: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x46c818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x46c81c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x46c81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x46c820: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x46c820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x46c824: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46c824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c828: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x46c828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46c82c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x46c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x46c830: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x46c830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c834: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x46c834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46c838: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x46c838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x46c83c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x46c83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46c840: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x46c840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46c844: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x46c844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x46c848: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46c848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46c84c: 0x3e00008  jr          $ra
    ctx->pc = 0x46C84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C854u;
    // 0x46c854: 0x0  nop
    ctx->pc = 0x46c854u;
    // NOP
    // 0x46c858: 0x0  nop
    ctx->pc = 0x46c858u;
    // NOP
    // 0x46c85c: 0x0  nop
    ctx->pc = 0x46c85cu;
    // NOP
    ctx->pc = 0x46c860u;
}
