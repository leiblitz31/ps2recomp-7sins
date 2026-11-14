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

// Function: sub_002DE200
// Address: 0x2de200 - 0x2de250
void sub_002DE200_0x2de200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE200_0x2de200");
#endif

    ctx->pc = 0x2de200u;

    // 0x2de200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2de200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2de204: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2de204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2de208: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2de208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2de20c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2de20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x2de210: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x2de210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x2de214: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2de214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de218: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2de218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de21c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2de21cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2de220: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2de220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de224: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2de224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de228: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2de228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2de22c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2de22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de230: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2de230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de234: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2de234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x2de238: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2de238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2de23c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE244u;
    // 0x2de244: 0x0  nop
    ctx->pc = 0x2de244u;
    // NOP
    // 0x2de248: 0x0  nop
    ctx->pc = 0x2de248u;
    // NOP
    // 0x2de24c: 0x0  nop
    ctx->pc = 0x2de24cu;
    // NOP
    ctx->pc = 0x2de250u;
}
