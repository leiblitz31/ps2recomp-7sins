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

// Function: sub_0039C828
// Address: 0x39c828 - 0x39c888
void sub_0039C828_0x39c828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C828_0x39c828");
#endif

    ctx->pc = 0x39c828u;

    // 0x39c828: 0x8f83a9e0  lw          $v1, -0x5620($gp)
    ctx->pc = 0x39c828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945248)));
    // 0x39c82c: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x39c82cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x39c830: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x39c830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x39c834: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39c834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x39c838: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x39c838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x39c83c: 0x8c880010  lw          $t0, 0x10($a0)
    ctx->pc = 0x39c83cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x39c840: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x39c840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x39c844: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x39c844u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x39c848: 0xac680018  sw          $t0, 0x18($v1)
    ctx->pc = 0x39c848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 8));
    // 0x39c84c: 0x24e7d010  addiu       $a3, $a3, -0x2FF0
    ctx->pc = 0x39c84cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955024));
    // 0x39c850: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x39c850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x39c854: 0x24a5cf98  addiu       $a1, $a1, -0x3068
    ctx->pc = 0x39c854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954904));
    // 0x39c858: 0x24c6cfd8  addiu       $a2, $a2, -0x3028
    ctx->pc = 0x39c858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954968));
    // 0x39c85c: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x39c85cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x39c860: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x39c860u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x39c864: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x39c864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c868: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x39c868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x39c86c: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x39c86cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x39c870: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x39c870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x39c874: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x39c874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x39c878: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x39c878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x39c87c: 0x3e00008  jr          $ra
    ctx->pc = 0x39C87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C87Cu;
        // 0x39c880: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C884u;
    // 0x39c884: 0x0  nop
    ctx->pc = 0x39c884u;
    // NOP
    ctx->pc = 0x39c888u;
}
