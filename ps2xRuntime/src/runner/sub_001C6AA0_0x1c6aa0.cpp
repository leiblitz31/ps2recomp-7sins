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

// Function: sub_001C6AA0
// Address: 0x1c6aa0 - 0x1c6af0
void sub_001C6AA0_0x1c6aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6AA0_0x1c6aa0");
#endif

    ctx->pc = 0x1c6aa0u;

    // 0x1c6aa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c6aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c6aa4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1c6aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1c6aa8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1c6aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1c6aac: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1c6aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1c6ab0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x1c6ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x1c6ab4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c6ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6ab8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1c6ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6abc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1c6abcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1c6ac0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c6ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6ac4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1c6ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6ac8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c6ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1c6acc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1c6accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6ad0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1c6ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6ad4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1c6ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x1c6ad8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c6ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c6adc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6AE4u;
    // 0x1c6ae4: 0x0  nop
    ctx->pc = 0x1c6ae4u;
    // NOP
    // 0x1c6ae8: 0x0  nop
    ctx->pc = 0x1c6ae8u;
    // NOP
    // 0x1c6aec: 0x0  nop
    ctx->pc = 0x1c6aecu;
    // NOP
    ctx->pc = 0x1c6af0u;
}
