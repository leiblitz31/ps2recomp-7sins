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

// Function: sub_003012E8
// Address: 0x3012e8 - 0x301390
void sub_003012E8_0x3012e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003012E8_0x3012e8");
#endif

    switch (ctx->pc) {
        case 0x301300u: goto label_301300;
        case 0x301318u: goto label_301318;
        case 0x30135cu: goto label_30135c;
        case 0x301378u: goto label_301378;
        default: break;
    }

    ctx->pc = 0x3012e8u;

    // 0x3012e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3012e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3012ec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3012ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3012f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3012f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3012f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3012f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3012f8: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x3012F8u;
    SET_GPR_U32(ctx, 31, 0x301300u);
    ctx->pc = 0x3012FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3012F8u;
    // 0x3012fc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x3012F8u, 0x301300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301300u;
label_301300:
    // 0x301300: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x301300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x301304: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x301304u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301308: 0x18800019  blez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x301308u;
    {
        const bool branch_taken_0x301308 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x30130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301308u;
        // 0x30130c: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301308) {
            ctx->pc = 0x301370u;
            goto label_301370;
        }
    }
    ctx->pc = 0x301310u;
    // 0x301310: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x301310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301314: 0x0  nop
    ctx->pc = 0x301314u;
    // NOP
label_301318:
    // 0x301318: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x301318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x30131c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30131cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x301320: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x301320u;
    {
        const bool branch_taken_0x301320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301320) {
            ctx->pc = 0x301324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301320u;
            // 0x301324: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301364u;
            goto label_301364;
        }
    }
    ctx->pc = 0x301328u;
    // 0x301328: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x301328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x30132c: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x30132cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x301330: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x301330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x301334: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x301334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x301338: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x301338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30133c: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30133Cu;
    {
        const bool branch_taken_0x30133c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x301340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30133Cu;
        // 0x301340: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30133c) {
            ctx->pc = 0x301350u;
            goto label_301350;
        }
    }
    ctx->pc = 0x301344u;
    // 0x301344: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x301344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x301348: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x301348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30134c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x30134cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_301350:
    // 0x301350: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x301350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x301354: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x301354u;
    SET_GPR_U32(ctx, 31, 0x30135Cu);
    ctx->pc = 0x301358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301354u;
    // 0x301358: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x301354u, 0x30135Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30135Cu;
label_30135c:
    // 0x30135c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30135Cu;
    {
        const bool branch_taken_0x30135c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30135Cu;
        // 0x301360: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30135c) {
            ctx->pc = 0x30137Cu;
            goto label_30137c;
        }
    }
    ctx->pc = 0x301364u;
label_301364:
    // 0x301364: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x301364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x301368: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x301368u;
    {
        const bool branch_taken_0x301368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301368u;
        // 0x30136c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301368) {
            ctx->pc = 0x301318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301318;
        }
    }
    ctx->pc = 0x301370u;
label_301370:
    // 0x301370: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x301370u;
    SET_GPR_U32(ctx, 31, 0x301378u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x301370u, 0x301378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301378u;
label_301378:
    // 0x301378: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x301378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30137c:
    // 0x30137c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30137cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x301380: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x301380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x301384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x301384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x301388: 0x3e00008  jr          $ra
    ctx->pc = 0x301388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301388u;
        // 0x30138c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301390u;
}
