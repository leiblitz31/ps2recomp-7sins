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

// Function: sub_002E4B50
// Address: 0x2e4b50 - 0x2e4ba0
void sub_002E4B50_0x2e4b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4B50_0x2e4b50");
#endif

    ctx->pc = 0x2e4b50u;

    // 0x2e4b50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e4b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e4b54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e4b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e4b58: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2e4b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2e4b5c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2e4b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x2e4b60: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x2e4b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x2e4b64: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e4b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4b68: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e4b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4b6c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2e4b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2e4b70: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e4b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4b74: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e4b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4b78: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2e4b78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2e4b7c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2e4b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4b80: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2e4b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4b84: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2e4b84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x2e4b88: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e4b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e4b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4B94u;
    // 0x2e4b94: 0x0  nop
    ctx->pc = 0x2e4b94u;
    // NOP
    // 0x2e4b98: 0x0  nop
    ctx->pc = 0x2e4b98u;
    // NOP
    // 0x2e4b9c: 0x0  nop
    ctx->pc = 0x2e4b9cu;
    // NOP
    ctx->pc = 0x2e4ba0u;
}
