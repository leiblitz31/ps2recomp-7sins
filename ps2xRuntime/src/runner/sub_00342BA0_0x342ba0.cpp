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

// Function: sub_00342BA0
// Address: 0x342ba0 - 0x342be8
void sub_00342BA0_0x342ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342BA0_0x342ba0");
#endif

    ctx->pc = 0x342ba0u;

    // 0x342ba0: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x342BA0u;
    {
        const bool branch_taken_0x342ba0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x342ba0) {
            ctx->pc = 0x342BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342BA0u;
            // 0x342ba4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342BB0u;
            goto label_342bb0;
        }
    }
    ctx->pc = 0x342BA8u;
    // 0x342ba8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x342BA8u;
    {
        const bool branch_taken_0x342ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342BA8u;
        // 0x342bac: 0xaca50000  sw          $a1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342ba8) {
            ctx->pc = 0x342BB8u;
            goto label_342bb8;
        }
    }
    ctx->pc = 0x342BB0u;
label_342bb0:
    // 0x342bb0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x342bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x342bb4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x342bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_342bb8:
    // 0x342bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x342BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342BB8u;
        // 0x342bbc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342BC0u;
    // 0x342bc0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x342bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x342bc4: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x342BC4u;
    {
        const bool branch_taken_0x342bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x342bc4) {
            ctx->pc = 0x342BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342BC4u;
            // 0x342bc8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342BD4u;
            goto label_342bd4;
        }
    }
    ctx->pc = 0x342BCCu;
    // 0x342bcc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x342BCCu;
    {
        const bool branch_taken_0x342bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342BCCu;
        // 0x342bd0: 0xaca50000  sw          $a1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342bcc) {
            ctx->pc = 0x342BDCu;
            goto label_342bdc;
        }
    }
    ctx->pc = 0x342BD4u;
label_342bd4:
    // 0x342bd4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x342bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x342bd8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x342bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_342bdc:
    // 0x342bdc: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x342bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x342be0: 0x3e00008  jr          $ra
    ctx->pc = 0x342BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342BE0u;
        // 0x342be4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342BE8u;
}
