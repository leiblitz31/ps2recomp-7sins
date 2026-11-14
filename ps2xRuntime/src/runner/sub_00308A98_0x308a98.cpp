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

// Function: sub_00308A98
// Address: 0x308a98 - 0x308ad0
void sub_00308A98_0x308a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308A98_0x308a98");
#endif

    ctx->pc = 0x308a98u;

    // 0x308a98: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x308a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x308a9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308A9Cu;
    {
        const bool branch_taken_0x308a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A9Cu;
        // 0x308aa0: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308a9c) {
            ctx->pc = 0x308AACu;
            goto label_308aac;
        }
    }
    ctx->pc = 0x308AA4u;
    // 0x308aa4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x308AA4u;
    {
        const bool branch_taken_0x308aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AA4u;
        // 0x308aa8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308aa4) {
            ctx->pc = 0x308AB4u;
            goto label_308ab4;
        }
    }
    ctx->pc = 0x308AACu;
label_308aac:
    // 0x308aac: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x308aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x308ab0: 0xac432240  sw          $v1, 0x2240($v0)
    ctx->pc = 0x308ab0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4F2240u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4F2240u, _value); } while (0);
label_308ab4:
    // 0x308ab4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x308AB4u;
    {
        const bool branch_taken_0x308ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x308ab4) {
            ctx->pc = 0x308AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308AB4u;
            // 0x308ab8: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308AC8u;
            goto label_308ac8;
        }
    }
    ctx->pc = 0x308ABCu;
    // 0x308abc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x308abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x308ac0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x308ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x308ac4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x308ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_308ac8:
    // 0x308ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x308AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AC8u;
        // 0x308acc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308AD0u;
}
