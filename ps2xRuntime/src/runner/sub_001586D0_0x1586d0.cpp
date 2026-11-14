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

// Function: sub_001586D0
// Address: 0x1586d0 - 0x158720
void sub_001586D0_0x1586d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001586D0_0x1586d0");
#endif

    ctx->pc = 0x1586d0u;

    // 0x1586d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1586d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1586d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1586d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1586d8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1586d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1586dc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1586dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1586e0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x1586e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x1586e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1586e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1586e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1586e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1586ec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1586ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1586f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1586f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1586f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1586f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1586f8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1586f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1586fc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1586fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158700: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x158700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158704: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x158704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x158708: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x158708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15870c: 0x3e00008  jr          $ra
    ctx->pc = 0x15870Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15870Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158714u;
    // 0x158714: 0x0  nop
    ctx->pc = 0x158714u;
    // NOP
    // 0x158718: 0x0  nop
    ctx->pc = 0x158718u;
    // NOP
    // 0x15871c: 0x0  nop
    ctx->pc = 0x15871cu;
    // NOP
    ctx->pc = 0x158720u;
}
