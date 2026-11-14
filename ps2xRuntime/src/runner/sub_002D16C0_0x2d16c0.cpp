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

// Function: sub_002D16C0
// Address: 0x2d16c0 - 0x2d1710
void sub_002D16C0_0x2d16c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D16C0_0x2d16c0");
#endif

    ctx->pc = 0x2d16c0u;

    // 0x2d16c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d16c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d16c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2d16c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2d16c8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2d16c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2d16cc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2d16ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x2d16d0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x2d16d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x2d16d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d16d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d16d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d16d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d16dc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2d16dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2d16e0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d16e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d16e4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d16e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d16e8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2d16e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2d16ec: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2d16ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d16f0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d16f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d16f4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2d16f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x2d16f8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d16f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d16fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D16FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D16FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1704u;
    // 0x2d1704: 0x0  nop
    ctx->pc = 0x2d1704u;
    // NOP
    // 0x2d1708: 0x0  nop
    ctx->pc = 0x2d1708u;
    // NOP
    // 0x2d170c: 0x0  nop
    ctx->pc = 0x2d170cu;
    // NOP
    ctx->pc = 0x2d1710u;
}
