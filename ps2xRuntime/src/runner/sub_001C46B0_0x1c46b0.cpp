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

// Function: sub_001C46B0
// Address: 0x1c46b0 - 0x1c4700
void sub_001C46B0_0x1c46b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C46B0_0x1c46b0");
#endif

    ctx->pc = 0x1c46b0u;

    // 0x1c46b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c46b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c46b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1c46b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1c46b8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1c46b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1c46bc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1c46bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1c46c0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x1c46c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x1c46c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c46c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c46c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1c46c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c46cc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1c46ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1c46d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c46d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c46d4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1c46d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c46d8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c46d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1c46dc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1c46dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c46e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1c46e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c46e4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1c46e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x1c46e8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c46e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c46ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C46ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C46ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C46F4u;
    // 0x1c46f4: 0x0  nop
    ctx->pc = 0x1c46f4u;
    // NOP
    // 0x1c46f8: 0x0  nop
    ctx->pc = 0x1c46f8u;
    // NOP
    // 0x1c46fc: 0x0  nop
    ctx->pc = 0x1c46fcu;
    // NOP
    ctx->pc = 0x1c4700u;
}
