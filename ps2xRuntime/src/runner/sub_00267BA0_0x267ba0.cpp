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

// Function: sub_00267BA0
// Address: 0x267ba0 - 0x267bf0
void sub_00267BA0_0x267ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267BA0_0x267ba0");
#endif

    ctx->pc = 0x267ba0u;

    // 0x267ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x267ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x267ba4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x267ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x267ba8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x267ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x267bac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x267bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267bb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x267bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267bb4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x267bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267bb8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x267bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x267bbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x267bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267bc0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x267bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x267bc4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x267bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267bc8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x267bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x267bcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x267bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267bd0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x267bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x267bd4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x267bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267bd8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x267bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x267bdc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x267bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267be0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x267be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x267be4: 0x3e00008  jr          $ra
    ctx->pc = 0x267BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267BECu;
    // 0x267bec: 0x0  nop
    ctx->pc = 0x267becu;
    // NOP
    ctx->pc = 0x267bf0u;
}
