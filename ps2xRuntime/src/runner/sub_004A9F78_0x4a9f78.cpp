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

// Function: sub_004A9F78
// Address: 0x4a9f78 - 0x4a9fc0
void sub_004A9F78_0x4a9f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9F78_0x4a9f78");
#endif

    ctx->pc = 0x4a9f78u;

    // 0x4a9f78: 0x24850040  addiu       $a1, $a0, 0x40
    ctx->pc = 0x4a9f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x4a9f7c: 0x2787c1f8  addiu       $a3, $gp, -0x3E08
    ctx->pc = 0x4a9f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951416));
    // 0x4a9f80: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x4a9f80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x4a9f84: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a9f84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a9f88: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x4a9f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x4a9f8c: 0x34c6fffe  ori         $a2, $a2, 0xFFFE
    ctx->pc = 0x4a9f8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65534);
    // 0x4a9f90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a9f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a9f94: 0x8f83c1f8  lw          $v1, -0x3E08($gp)
    ctx->pc = 0x4a9f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951416)));
    // 0x4a9f98: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x4a9f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x4a9f9c: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x4a9f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x4a9fa0: 0x8f83c1f8  lw          $v1, -0x3E08($gp)
    ctx->pc = 0x4a9fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951416)));
    // 0x4a9fa4: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x4a9fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x4a9fa8: 0xaf85c1f8  sw          $a1, -0x3E08($gp)
    ctx->pc = 0x4a9fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951416), GPR_U32(ctx, 5));
    // 0x4a9fac: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x4a9facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4a9fb0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4a9fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4a9fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9FB4u;
        // 0x4a9fb8: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9FBCu;
    // 0x4a9fbc: 0x0  nop
    ctx->pc = 0x4a9fbcu;
    // NOP
    ctx->pc = 0x4a9fc0u;
}
