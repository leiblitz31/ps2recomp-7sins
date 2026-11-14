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

// Function: sub_00113030
// Address: 0x113030 - 0x113070
void sub_00113030_0x113030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113030_0x113030");
#endif

    ctx->pc = 0x113030u;

    // 0x113030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x113030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x113034: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x113034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x113038: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x113038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x11303c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11303cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113040: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x113040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113044: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x113044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113048: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x113048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11304c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11304cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113050: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x113050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x113054: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x113054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113058: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x113058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x11305c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11305cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113060: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x113060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x113064: 0x3e00008  jr          $ra
    ctx->pc = 0x113064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11306Cu;
    // 0x11306c: 0x0  nop
    ctx->pc = 0x11306cu;
    // NOP
    ctx->pc = 0x113070u;
}
