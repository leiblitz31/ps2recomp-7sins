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

// Function: sub_0049AC78
// Address: 0x49ac78 - 0x49ace8
void sub_0049AC78_0x49ac78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049AC78_0x49ac78");
#endif

    switch (ctx->pc) {
        case 0x49ac90u: goto label_49ac90;
        case 0x49ac9cu: goto label_49ac9c;
        case 0x49acc8u: goto label_49acc8;
        default: break;
    }

    ctx->pc = 0x49ac78u;

    // 0x49ac78: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x49ac78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x49ac7c: 0x9447000c  lhu         $a3, 0xC($v0)
    ctx->pc = 0x49ac7cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x49ac80: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x49AC80u;
    {
        const bool branch_taken_0x49ac80 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AC80u;
        // 0x49ac84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ac80) {
            ctx->pc = 0x49ACB0u;
            goto label_49acb0;
        }
    }
    ctx->pc = 0x49AC88u;
    // 0x49ac88: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x49ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x49ac8c: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x49ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_49ac90:
    // 0x49ac90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x49ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49ac94: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x49AC94u;
    {
        const bool branch_taken_0x49ac94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x49AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AC94u;
        // 0x49ac98: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ac94) {
            ctx->pc = 0x49ACA4u;
            goto label_49aca4;
        }
    }
    ctx->pc = 0x49AC9Cu;
label_49ac9c:
    // 0x49ac9c: 0x3e00008  jr          $ra
    ctx->pc = 0x49AC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AC9Cu;
        // 0x49aca0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49AC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49ACA4u;
label_49aca4:
    // 0x49aca4: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x49aca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x49aca8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x49ACA8u;
    {
        const bool branch_taken_0x49aca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ACA8u;
        // 0x49acac: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49aca8) {
            ctx->pc = 0x49AC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ac90;
        }
    }
    ctx->pc = 0x49ACB0u;
label_49acb0:
    // 0x49acb0: 0x8ca5004c  lw          $a1, 0x4C($a1)
    ctx->pc = 0x49acb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x49acb4: 0x94a7000e  lhu         $a3, 0xE($a1)
    ctx->pc = 0x49acb4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x49acb8: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x49ACB8u;
    {
        const bool branch_taken_0x49acb8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x49ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ACB8u;
        // 0x49acbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49acb8) {
            ctx->pc = 0x49ACE0u;
            goto label_49ace0;
        }
    }
    ctx->pc = 0x49ACC0u;
    // 0x49acc0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x49acc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x49acc4: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x49acc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_49acc8:
    // 0x49acc8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49accc: 0x1046fff3  beq         $v0, $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x49ACCCu;
    {
        const bool branch_taken_0x49accc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x49ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ACCCu;
        // 0x49acd0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49accc) {
            ctx->pc = 0x49AC9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ac9c;
        }
    }
    ctx->pc = 0x49ACD4u;
    // 0x49acd4: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x49acd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x49acd8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x49ACD8u;
    {
        const bool branch_taken_0x49acd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ACD8u;
        // 0x49acdc: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49acd8) {
            ctx->pc = 0x49ACC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49acc8;
        }
    }
    ctx->pc = 0x49ACE0u;
label_49ace0:
    // 0x49ace0: 0x3e00008  jr          $ra
    ctx->pc = 0x49ACE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ACE0u;
        // 0x49ace4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49ACE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49ACE8u;
}
