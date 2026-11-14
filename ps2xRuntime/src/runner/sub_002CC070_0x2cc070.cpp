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

// Function: sub_002CC070
// Address: 0x2cc070 - 0x2cc0c0
void sub_002CC070_0x2cc070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC070_0x2cc070");
#endif

    ctx->pc = 0x2cc070u;

    // 0x2cc070: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cc070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cc074: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2cc074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2cc078: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2cc078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2cc07c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2cc07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x2cc080: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x2cc080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x2cc084: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cc084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc088: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2cc088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc08c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2cc08cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2cc090: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2cc090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc094: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2cc094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc098: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2cc098u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2cc09c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2cc09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc0a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2cc0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc0a4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2cc0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x2cc0a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2cc0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cc0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC0B4u;
    // 0x2cc0b4: 0x0  nop
    ctx->pc = 0x2cc0b4u;
    // NOP
    // 0x2cc0b8: 0x0  nop
    ctx->pc = 0x2cc0b8u;
    // NOP
    // 0x2cc0bc: 0x0  nop
    ctx->pc = 0x2cc0bcu;
    // NOP
    ctx->pc = 0x2cc0c0u;
}
