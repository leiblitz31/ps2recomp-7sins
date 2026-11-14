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

// Function: sub_002693F0
// Address: 0x2693f0 - 0x269440
void sub_002693F0_0x2693f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002693F0_0x2693f0");
#endif

    ctx->pc = 0x2693f0u;

    // 0x2693f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2693f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2693f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2693f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2693f8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2693f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2693fc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2693fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x269400: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x269400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x269404: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x269404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269408: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x269408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26940c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26940cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x269410: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x269410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269414: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x269414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269418: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x269418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x26941c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x26941cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269420: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x269420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269424: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x269424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x269428: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x269428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26942c: 0x3e00008  jr          $ra
    ctx->pc = 0x26942Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26942Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269434u;
    // 0x269434: 0x0  nop
    ctx->pc = 0x269434u;
    // NOP
    // 0x269438: 0x0  nop
    ctx->pc = 0x269438u;
    // NOP
    // 0x26943c: 0x0  nop
    ctx->pc = 0x26943cu;
    // NOP
    ctx->pc = 0x269440u;
}
