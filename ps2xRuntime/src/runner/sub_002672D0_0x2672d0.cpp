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

// Function: sub_002672D0
// Address: 0x2672d0 - 0x267320
void sub_002672D0_0x2672d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002672D0_0x2672d0");
#endif

    ctx->pc = 0x2672d0u;

    // 0x2672d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2672d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2672d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2672d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2672d8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2672d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2672dc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2672dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x2672e0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x2672e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x2672e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2672e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2672e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2672e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2672ec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2672ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2672f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2672f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2672f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2672f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2672f8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2672f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2672fc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2672fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267300: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x267300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267304: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x267304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x267308: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x267308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26730c: 0x3e00008  jr          $ra
    ctx->pc = 0x26730Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26730Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267314u;
    // 0x267314: 0x0  nop
    ctx->pc = 0x267314u;
    // NOP
    // 0x267318: 0x0  nop
    ctx->pc = 0x267318u;
    // NOP
    // 0x26731c: 0x0  nop
    ctx->pc = 0x26731cu;
    // NOP
    ctx->pc = 0x267320u;
}
