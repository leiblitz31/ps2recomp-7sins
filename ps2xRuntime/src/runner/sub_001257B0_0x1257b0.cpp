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

// Function: sub_001257B0
// Address: 0x1257b0 - 0x1257f0
void sub_001257B0_0x1257b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001257B0_0x1257b0");
#endif

    ctx->pc = 0x1257b0u;

    // 0x1257b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1257b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1257b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1257b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1257b8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1257b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1257bc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1257bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1257c0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1257c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1257c4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1257c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1257c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1257c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1257cc: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1257ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1257d0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1257d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1257d4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1257d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1257d8: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1257d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x1257dc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1257dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1257e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1257E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1257E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1257E8u;
    // 0x1257e8: 0x0  nop
    ctx->pc = 0x1257e8u;
    // NOP
    // 0x1257ec: 0x0  nop
    ctx->pc = 0x1257ecu;
    // NOP
    ctx->pc = 0x1257f0u;
}
