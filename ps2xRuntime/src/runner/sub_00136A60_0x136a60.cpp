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

// Function: sub_00136A60
// Address: 0x136a60 - 0x136ab0
void sub_00136A60_0x136a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136A60_0x136a60");
#endif

    ctx->pc = 0x136a60u;

    // 0x136a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x136a64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x136a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x136a68: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x136a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136a6c: 0xa0600040  sb          $zero, 0x40($v1)
    ctx->pc = 0x136a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x136a70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x136a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136a74: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x136a74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x136a78: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x136a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x136a7c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x136a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136a80: 0xac640034  sw          $a0, 0x34($v1)
    ctx->pc = 0x136a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 4));
    // 0x136a84: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x136a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x136a88: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x136a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136a8c: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x136a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x136a90: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x136a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136a94: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x136a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x136a98: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x136a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136a9c: 0xa0600048  sb          $zero, 0x48($v1)
    ctx->pc = 0x136a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x136aa0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x136aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x136aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x136AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136AACu;
    // 0x136aac: 0x0  nop
    ctx->pc = 0x136aacu;
    // NOP
    ctx->pc = 0x136ab0u;
}
