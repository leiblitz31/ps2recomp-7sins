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

// Function: sub_00326530
// Address: 0x326530 - 0x326598
void sub_00326530_0x326530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326530_0x326530");
#endif

    switch (ctx->pc) {
        case 0x326550u: goto label_326550;
        default: break;
    }

    ctx->pc = 0x326530u;

    // 0x326530: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x326530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x326534: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x326534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326538: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x326538u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32653c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32653cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326540: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x326540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x326544: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x326544u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x326548: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x326548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x32654c: 0x0  nop
    ctx->pc = 0x32654cu;
    // NOP
label_326550:
    // 0x326550: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x326550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x326554: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x326554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x326558: 0x54690003  bnel        $v1, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x326558u;
    {
        const bool branch_taken_0x326558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x326558) {
            ctx->pc = 0x32655Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326558u;
            // 0x32655c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326568u;
            goto label_326568;
        }
    }
    ctx->pc = 0x326560u;
    // 0x326560: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x326560u;
    {
        const bool branch_taken_0x326560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326560u;
        // 0x326564: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326560) {
            ctx->pc = 0x32657Cu;
            goto label_32657c;
        }
    }
    ctx->pc = 0x326568u;
label_326568:
    // 0x326568: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x326568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32656c: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x32656cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x326570: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x326570u;
    {
        const bool branch_taken_0x326570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x326574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326570u;
        // 0x326574: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326570) {
            ctx->pc = 0x326550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326550;
        }
    }
    ctx->pc = 0x326578u;
    // 0x326578: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x326578u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32657c:
    // 0x32657c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x32657cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x326580: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x326580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326584: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x326584u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x326588: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x326588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x32658c: 0x3e00008  jr          $ra
    ctx->pc = 0x32658Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32658Cu;
        // 0x326590: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32658Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326594u;
    // 0x326594: 0x0  nop
    ctx->pc = 0x326594u;
    // NOP
    ctx->pc = 0x326598u;
}
