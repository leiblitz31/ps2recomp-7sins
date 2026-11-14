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

// Function: sub_00267470
// Address: 0x267470 - 0x2674b0
void sub_00267470_0x267470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267470_0x267470");
#endif

    ctx->pc = 0x267470u;

    // 0x267470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x267470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x267474: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x267474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x267478: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x267478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26747c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x26747cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x267480: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x267480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267484: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x267484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267488: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x267488u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26748c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26748cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x267490: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x267490u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x267494: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x267494u;
    {
        const bool branch_taken_0x267494 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x267494) {
            ctx->pc = 0x2674A4u;
            goto label_2674a4;
        }
    }
    ctx->pc = 0x26749Cu;
    // 0x26749c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x26749cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2674a0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2674a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2674a4:
    // 0x2674a4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2674a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2674a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2674A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2674A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2674B0u;
}
