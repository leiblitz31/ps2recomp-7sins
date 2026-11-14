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

// Function: sub_00345150
// Address: 0x345150 - 0x345198
void sub_00345150_0x345150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345150_0x345150");
#endif

    ctx->pc = 0x345150u;

    // 0x345150: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x345150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x345154: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x345154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345158: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x345158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x34515c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34515cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345160: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x345160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x345164: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x345164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345168: 0xac86002c  sw          $a2, 0x2C($a0)
    ctx->pc = 0x345168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
    // 0x34516c: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x34516cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x345170: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x345170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x345174: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x345174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x345178: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x345178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x34517c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x34517cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x345180: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x345180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x345184: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x345184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x345188: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x345188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x34518c: 0x3e00008  jr          $ra
    ctx->pc = 0x34518Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34518Cu;
        // 0x345190: 0xac860028  sw          $a2, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34518Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345194u;
    // 0x345194: 0x0  nop
    ctx->pc = 0x345194u;
    // NOP
    ctx->pc = 0x345198u;
}
