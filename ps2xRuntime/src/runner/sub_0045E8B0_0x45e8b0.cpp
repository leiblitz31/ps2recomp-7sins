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

// Function: sub_0045E8B0
// Address: 0x45e8b0 - 0x45e900
void sub_0045E8B0_0x45e8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045E8B0_0x45e8b0");
#endif

    ctx->pc = 0x45e8b0u;

    // 0x45e8b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x45e8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x45e8b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x45e8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x45e8b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x45e8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45e8bc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x45E8BCu;
    {
        const bool branch_taken_0x45e8bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e8bc) {
            ctx->pc = 0x45E8F4u;
            goto label_45e8f4;
        }
    }
    ctx->pc = 0x45E8C4u;
    // 0x45e8c4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x45e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45e8c8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x45e8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x45e8cc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x45e8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45e8d0: 0xac600108  sw          $zero, 0x108($v1)
    ctx->pc = 0x45e8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 264), GPR_U32(ctx, 0));
    // 0x45e8d4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x45e8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45e8d8: 0xac60010c  sw          $zero, 0x10C($v1)
    ctx->pc = 0x45e8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 268), GPR_U32(ctx, 0));
    // 0x45e8dc: 0x8f83bf98  lw          $v1, -0x4068($gp)
    ctx->pc = 0x45e8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950808)));
    // 0x45e8e0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x45E8E0u;
    {
        const bool branch_taken_0x45e8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e8e0) {
            ctx->pc = 0x45E8F4u;
            goto label_45e8f4;
        }
    }
    ctx->pc = 0x45E8E8u;
    // 0x45e8e8: 0x8f83bf98  lw          $v1, -0x4068($gp)
    ctx->pc = 0x45e8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950808)));
    // 0x45e8ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x45e8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x45e8f0: 0xaf83bf98  sw          $v1, -0x4068($gp)
    ctx->pc = 0x45e8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950808), GPR_U32(ctx, 3));
label_45e8f4:
    // 0x45e8f4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x45e8f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x45e8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x45E8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45E8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45E900u;
}
