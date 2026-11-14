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

// Function: sub_004447F8
// Address: 0x4447f8 - 0x4448a0
void sub_004447F8_0x4447f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004447F8_0x4447f8");
#endif

    switch (ctx->pc) {
        case 0x44482cu: goto label_44482c;
        case 0x444838u: goto label_444838;
        case 0x444880u: goto label_444880;
        default: break;
    }

    ctx->pc = 0x4447f8u;

    // 0x4447f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4447f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4447fc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4447fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444800: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x444800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x444804: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x444804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x444808: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x444808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x44480c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44480cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444810: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x444810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x444814: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x444814u;
    {
        const bool branch_taken_0x444814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x444818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444814u;
        // 0x444818: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444814) {
            ctx->pc = 0x444840u;
            goto label_444840;
        }
    }
    ctx->pc = 0x44481Cu;
    // 0x44481c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44481cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x444820: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x444820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x444824: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x444824u;
    SET_GPR_U32(ctx, 31, 0x44482Cu);
    ctx->pc = 0x444828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444824u;
    // 0x444828: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x444824u, 0x44482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44482Cu;
label_44482c:
    // 0x44482c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x44482cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444830: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x444830u;
    SET_GPR_U32(ctx, 31, 0x444838u);
    ctx->pc = 0x444834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444830u;
    // 0x444834: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x444830u, 0x444838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444838u;
label_444838:
    // 0x444838: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x444838u;
    {
        const bool branch_taken_0x444838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444838u;
        // 0x44483c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444838) {
            ctx->pc = 0x444890u;
            goto label_444890;
        }
    }
    ctx->pc = 0x444840u;
label_444840:
    // 0x444840: 0x8f86bf18  lw          $a2, -0x40E8($gp)
    ctx->pc = 0x444840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444844: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x444844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x444848: 0x24a5e880  addiu       $a1, $a1, -0x1780
    ctx->pc = 0x444848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
    // 0x44484c: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x44484cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x444850: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x444850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x444854: 0x34e70018  ori         $a3, $a3, 0x18
    ctx->pc = 0x444854u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)24);
    // 0x444858: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x444858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x44485c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x44485cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x444860: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x444860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x444864: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x444864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x444868: 0xa4480040  sh          $t0, 0x40($v0)
    ctx->pc = 0x444868u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 8));
    // 0x44486c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x44486cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x444870: 0xac490050  sw          $t1, 0x50($v0)
    ctx->pc = 0x444870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 9));
    // 0x444874: 0xac47004c  sw          $a3, 0x4C($v0)
    ctx->pc = 0x444874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 7));
    // 0x444878: 0xc111718  jal         func_445C60
    ctx->pc = 0x444878u;
    SET_GPR_U32(ctx, 31, 0x444880u);
    ctx->pc = 0x44487Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444878u;
    // 0x44487c: 0xac500044  sw          $s0, 0x44($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x444878u, 0x444880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444880u;
label_444880:
    // 0x444880: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x444880u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444884: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x444884u;
    {
        const bool branch_taken_0x444884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x444888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444884u;
        // 0x444888: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444884) {
            ctx->pc = 0x444890u;
            goto label_444890;
        }
    }
    ctx->pc = 0x44488Cu;
    // 0x44488c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x44488cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_444890:
    // 0x444890: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x444890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x444894: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x444894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x444898: 0x3e00008  jr          $ra
    ctx->pc = 0x444898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444898u;
        // 0x44489c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4448A0u;
}
