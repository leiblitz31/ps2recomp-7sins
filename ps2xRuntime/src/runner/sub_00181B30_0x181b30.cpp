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

// Function: sub_00181B30
// Address: 0x181b30 - 0x181b80
void sub_00181B30_0x181b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181B30_0x181b30");
#endif

    ctx->pc = 0x181b30u;

    // 0x181b30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x181b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x181b34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x181b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x181b38: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x181b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x181b3c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x181b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x181b40: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x181b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x181b44: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x181b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181b48: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x181b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181b4c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x181b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x181b50: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x181b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181b54: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x181b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181b58: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x181b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x181b5c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x181b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181b60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x181b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181b64: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x181b64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x181b68: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x181b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x181b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x181B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181B74u;
    // 0x181b74: 0x0  nop
    ctx->pc = 0x181b74u;
    // NOP
    // 0x181b78: 0x0  nop
    ctx->pc = 0x181b78u;
    // NOP
    // 0x181b7c: 0x0  nop
    ctx->pc = 0x181b7cu;
    // NOP
    ctx->pc = 0x181b80u;
}
