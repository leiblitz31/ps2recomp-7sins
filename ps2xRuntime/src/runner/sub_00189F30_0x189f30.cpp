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

// Function: sub_00189F30
// Address: 0x189f30 - 0x189f80
void sub_00189F30_0x189f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189F30_0x189f30");
#endif

    ctx->pc = 0x189f30u;

    // 0x189f30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x189f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x189f34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x189f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x189f38: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x189f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x189f3c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x189f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x189f40: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x189f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x189f44: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x189f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189f48: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x189f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189f4c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x189f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x189f50: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x189f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189f54: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x189f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189f58: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x189f58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x189f5c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x189f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189f60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x189f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189f64: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x189f64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x189f68: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x189f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x189f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x189F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189F74u;
    // 0x189f74: 0x0  nop
    ctx->pc = 0x189f74u;
    // NOP
    // 0x189f78: 0x0  nop
    ctx->pc = 0x189f78u;
    // NOP
    // 0x189f7c: 0x0  nop
    ctx->pc = 0x189f7cu;
    // NOP
    ctx->pc = 0x189f80u;
}
