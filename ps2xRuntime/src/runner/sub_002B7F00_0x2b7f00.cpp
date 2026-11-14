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

// Function: sub_002B7F00
// Address: 0x2b7f00 - 0x2b7f50
void sub_002B7F00_0x2b7f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7F00_0x2b7f00");
#endif

    ctx->pc = 0x2b7f00u;

    // 0x2b7f00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b7f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b7f04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2b7f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2b7f08: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2b7f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2b7f0c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2b7f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x2b7f10: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x2b7f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x2b7f14: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b7f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7f18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2b7f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7f1c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2b7f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2b7f20: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b7f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7f24: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2b7f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7f28: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2b7f28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2b7f2c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2b7f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7f30: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2b7f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7f34: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2b7f34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x2b7f38: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2b7f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b7f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7F44u;
    // 0x2b7f44: 0x0  nop
    ctx->pc = 0x2b7f44u;
    // NOP
    // 0x2b7f48: 0x0  nop
    ctx->pc = 0x2b7f48u;
    // NOP
    // 0x2b7f4c: 0x0  nop
    ctx->pc = 0x2b7f4cu;
    // NOP
    ctx->pc = 0x2b7f50u;
}
