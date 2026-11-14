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

// Function: sub_0014B4A0
// Address: 0x14b4a0 - 0x14b4d0
void sub_0014B4A0_0x14b4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B4A0_0x14b4a0");
#endif

    ctx->pc = 0x14b4a0u;

    // 0x14b4a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14b4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14b4a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x14b4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x14b4a8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x14b4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x14b4ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b4b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b4b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b4b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14b4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14b4bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b4c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14b4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14b4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x14B4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B4CCu;
    // 0x14b4cc: 0x0  nop
    ctx->pc = 0x14b4ccu;
    // NOP
    ctx->pc = 0x14b4d0u;
}
