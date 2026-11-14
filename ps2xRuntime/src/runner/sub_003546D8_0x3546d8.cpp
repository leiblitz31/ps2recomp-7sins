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

// Function: sub_003546D8
// Address: 0x3546d8 - 0x354780
void sub_003546D8_0x3546d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003546D8_0x3546d8");
#endif

    switch (ctx->pc) {
        case 0x354724u: goto label_354724;
        default: break;
    }

    ctx->pc = 0x3546d8u;

    // 0x3546d8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3546d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3546dc: 0x10a00026  beqz        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3546DCu;
    {
        const bool branch_taken_0x3546dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3546E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3546DCu;
        // 0x3546e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3546dc) {
            ctx->pc = 0x354778u;
            goto label_354778;
        }
    }
    ctx->pc = 0x3546E4u;
    // 0x3546e4: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x3546e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x3546e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3546e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3546ec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3546ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3546f0: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x3546f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x3546f4: 0x22a02  srl         $a1, $v0, 8
    ctx->pc = 0x3546f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3546f8: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3546F8u;
    {
        const bool branch_taken_0x3546f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3546FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3546F8u;
        // 0x3546fc: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3546f8) {
            ctx->pc = 0x354724u;
            goto label_354724;
        }
    }
    ctx->pc = 0x354700u;
    // 0x354700: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x354700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x354704: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x354704u;
    {
        const bool branch_taken_0x354704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x354708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354704u;
        // 0x354708: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354704) {
            ctx->pc = 0x35471Cu;
            goto label_35471c;
        }
    }
    ctx->pc = 0x35470Cu;
    // 0x35470c: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35470Cu;
    {
        const bool branch_taken_0x35470c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x354710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35470Cu;
        // 0x354710: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35470c) {
            ctx->pc = 0x354724u;
            goto label_354724;
        }
    }
    ctx->pc = 0x354714u;
    // 0x354714: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x354714u;
    {
        const bool branch_taken_0x354714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354714u;
        // 0x354718: 0x30e2f000  andi        $v0, $a3, 0xF000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
        ctx->in_delay_slot = false;
        if (branch_taken_0x354714) {
            ctx->pc = 0x354730u;
            goto label_354730;
        }
    }
    ctx->pc = 0x35471Cu;
label_35471c:
    // 0x35471c: 0x10a80003  beq         $a1, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35471Cu;
    {
        const bool branch_taken_0x35471c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        ctx->pc = 0x354720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35471Cu;
        // 0x354720: 0x30e2f000  andi        $v0, $a3, 0xF000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35471c) {
            ctx->pc = 0x35472Cu;
            goto label_35472c;
        }
    }
    ctx->pc = 0x354724u;
label_354724:
    // 0x354724: 0x3e00008  jr          $ra
    ctx->pc = 0x354724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354724u;
        // 0x354728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35472Cu;
label_35472c:
    // 0x35472c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35472cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_354730:
    // 0x354730: 0x22b02  srl         $a1, $v0, 12
    ctx->pc = 0x354730u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x354734: 0x10a3fffb  beq         $a1, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x354734u;
    {
        const bool branch_taken_0x354734 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x354738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354734u;
        // 0x354738: 0x2ca20003  sltiu       $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x354734) {
            ctx->pc = 0x354724u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_354724;
        }
    }
    ctx->pc = 0x35473Cu;
    // 0x35473c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35473Cu;
    {
        const bool branch_taken_0x35473c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35473Cu;
        // 0x354740: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35473c) {
            ctx->pc = 0x354754u;
            goto label_354754;
        }
    }
    ctx->pc = 0x354744u;
    // 0x354744: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x354744u;
    {
        const bool branch_taken_0x354744 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x354748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354744u;
        // 0x354748: 0x2402fff3  addiu       $v0, $zero, -0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354744) {
            ctx->pc = 0x354768u;
            goto label_354768;
        }
    }
    ctx->pc = 0x35474Cu;
    // 0x35474c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x35474Cu;
    {
        const bool branch_taken_0x35474c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35474c) {
            ctx->pc = 0x354724u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_354724;
        }
    }
    ctx->pc = 0x354754u;
label_354754:
    // 0x354754: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x354754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x354758: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x354758u;
    {
        const bool branch_taken_0x354758 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x35475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354758u;
        // 0x35475c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354758) {
            ctx->pc = 0x354770u;
            goto label_354770;
        }
    }
    ctx->pc = 0x354760u;
    // 0x354760: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x354760u;
    {
        const bool branch_taken_0x354760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354760) {
            ctx->pc = 0x354724u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_354724;
        }
    }
    ctx->pc = 0x354768u;
label_354768:
    // 0x354768: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x354768u;
    {
        const bool branch_taken_0x354768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354768u;
        // 0x35476c: 0xc23024  and         $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354768) {
            ctx->pc = 0x354774u;
            goto label_354774;
        }
    }
    ctx->pc = 0x354770u;
label_354770:
    // 0x354770: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x354770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_354774:
    // 0x354774: 0xfc8600c0  sd          $a2, 0xC0($a0)
    ctx->pc = 0x354774u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 192), GPR_U64(ctx, 6));
label_354778:
    // 0x354778: 0x3e00008  jr          $ra
    ctx->pc = 0x354778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354778u;
        // 0x35477c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354780u;
}
