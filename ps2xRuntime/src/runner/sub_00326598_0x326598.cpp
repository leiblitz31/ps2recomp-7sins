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

// Function: sub_00326598
// Address: 0x326598 - 0x3265f0
void sub_00326598_0x326598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326598_0x326598");
#endif

    switch (ctx->pc) {
        case 0x3265b0u: goto label_3265b0;
        default: break;
    }

    ctx->pc = 0x326598u;

    // 0x326598: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x326598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x32659c: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x32659cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3265a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3265a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3265a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3265a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3265a8: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x3265a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3265ac: 0x71180  sll         $v0, $a3, 6
    ctx->pc = 0x3265acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_3265b0:
    // 0x3265b0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x3265b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3265b4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x3265b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3265b8: 0x54690003  bnel        $v1, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3265B8u;
    {
        const bool branch_taken_0x3265b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x3265b8) {
            ctx->pc = 0x3265BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3265B8u;
            // 0x3265bc: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3265C8u;
            goto label_3265c8;
        }
    }
    ctx->pc = 0x3265C0u;
    // 0x3265c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3265C0u;
    {
        const bool branch_taken_0x3265c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3265C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3265C0u;
        // 0x3265c4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3265c0) {
            ctx->pc = 0x3265DCu;
            goto label_3265dc;
        }
    }
    ctx->pc = 0x3265C8u;
label_3265c8:
    // 0x3265c8: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x3265c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3265cc: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x3265ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3265d0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3265D0u;
    {
        const bool branch_taken_0x3265d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3265D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3265D0u;
        // 0x3265d4: 0x71180  sll         $v0, $a3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3265d0) {
            ctx->pc = 0x3265B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3265b0;
        }
    }
    ctx->pc = 0x3265D8u;
    // 0x3265d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3265d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3265dc:
    // 0x3265dc: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x3265dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x3265e0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3265e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3265e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3265E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3265E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3265E4u;
        // 0x3265e8: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3265E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3265ECu;
    // 0x3265ec: 0x0  nop
    ctx->pc = 0x3265ecu;
    // NOP
    ctx->pc = 0x3265f0u;
}
