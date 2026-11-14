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

// Function: sub_002EE7C0
// Address: 0x2ee7c0 - 0x2ee8c0
void sub_002EE7C0_0x2ee7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE7C0_0x2ee7c0");
#endif

    switch (ctx->pc) {
        case 0x2ee804u: goto label_2ee804;
        case 0x2ee82cu: goto label_2ee82c;
        case 0x2ee840u: goto label_2ee840;
        case 0x2ee858u: goto label_2ee858;
        case 0x2ee884u: goto label_2ee884;
        case 0x2ee894u: goto label_2ee894;
        default: break;
    }

    ctx->pc = 0x2ee7c0u;

    // 0x2ee7c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ee7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ee7c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ee7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ee7c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ee7c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee7cc: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x2ee7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x2ee7d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ee7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ee7d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ee7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ee7d8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ee7d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee7dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ee7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ee7e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ee7e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee7e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE7E4u;
    {
        const bool branch_taken_0x2ee7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7E4u;
        // 0x2ee7e8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee7e4) {
            ctx->pc = 0x2EE808u;
            goto label_2ee808;
        }
    }
    ctx->pc = 0x2EE7ECu;
    // 0x2ee7ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ee7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ee7f0: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x2ee7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x2ee7f4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2ee7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ee7f8: 0x8cc69134  lw          $a2, -0x6ECC($a2)
    ctx->pc = 0x2ee7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294938932)));
    // 0x2ee7fc: 0xc0bb880  jal         func_2EE200
    ctx->pc = 0x2EE7FCu;
    SET_GPR_U32(ctx, 31, 0x2EE804u);
    ctx->pc = 0x2EE800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE7FCu;
    // 0x2ee800: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE200u, 0x2EE7FCu, 0x2EE804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE804u;
label_2ee804:
    // 0x2ee804: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ee804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee808:
    // 0x2ee808: 0x118883  sra         $s1, $s1, 2
    ctx->pc = 0x2ee808u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
    // 0x2ee80c: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2EE80Cu;
    {
        const bool branch_taken_0x2ee80c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE80Cu;
        // 0x2ee810: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee80c) {
            ctx->pc = 0x2EE8A0u;
            goto label_2ee8a0;
        }
    }
    ctx->pc = 0x2EE814u;
    // 0x2ee814: 0x8e700048  lw          $s0, 0x48($s3)
    ctx->pc = 0x2ee814u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2ee818: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EE818u;
    {
        const bool branch_taken_0x2ee818 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE818u;
        // 0x2ee81c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee818) {
            ctx->pc = 0x2EE86Cu;
            goto label_2ee86c;
        }
    }
    ctx->pc = 0x2EE820u;
    // 0x2ee820: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ee820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee824: 0xc0bb95e  jal         func_2EE578
    ctx->pc = 0x2EE824u;
    SET_GPR_U32(ctx, 31, 0x2EE82Cu);
    ctx->pc = 0x2EE828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE824u;
    // 0x2ee828: 0x24050271  addiu       $a1, $zero, 0x271 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE578u, 0x2EE824u, 0x2EE82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE82Cu;
label_2ee82c:
    // 0x2ee82c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ee82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee830: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x2ee830u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x2ee834: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2EE834u;
    {
        const bool branch_taken_0x2ee834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE834u;
        // 0x2ee838: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee834) {
            ctx->pc = 0x2EE868u;
            goto label_2ee868;
        }
    }
    ctx->pc = 0x2EE83Cu;
    // 0x2ee83c: 0x0  nop
    ctx->pc = 0x2ee83cu;
    // NOP
label_2ee840:
    // 0x2ee840: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE840u;
    {
        const bool branch_taken_0x2ee840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee840) {
            ctx->pc = 0x2EE844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE840u;
            // 0x2ee844: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE868u;
            goto label_2ee868;
        }
    }
    ctx->pc = 0x2EE848u;
    // 0x2ee848: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ee848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee84c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ee84cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee850: 0xc0bb96c  jal         func_2EE5B0
    ctx->pc = 0x2EE850u;
    SET_GPR_U32(ctx, 31, 0x2EE858u);
    ctx->pc = 0x2EE854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE850u;
    // 0x2ee854: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5B0u, 0x2EE850u, 0x2EE858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE858u;
label_2ee858:
    // 0x2ee858: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ee858u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee85c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ee85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ee860: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2ee860u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2ee864: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2ee864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ee868:
    // 0x2ee868: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2ee868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_2ee86c:
    // 0x2ee86c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE86Cu;
    {
        const bool branch_taken_0x2ee86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE86Cu;
        // 0x2ee870: 0x118843  sra         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee86c) {
            ctx->pc = 0x2EE894u;
            goto label_2ee894;
        }
    }
    ctx->pc = 0x2EE874u;
    // 0x2ee874: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ee874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee878: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ee878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee87c: 0xc0bb96c  jal         func_2EE5B0
    ctx->pc = 0x2EE87Cu;
    SET_GPR_U32(ctx, 31, 0x2EE884u);
    ctx->pc = 0x2EE880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE87Cu;
    // 0x2ee880: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5B0u, 0x2EE87Cu, 0x2EE884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE884u;
label_2ee884:
    // 0x2ee884: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ee884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee888: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ee888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee88c: 0xc0bb874  jal         func_2EE1D0
    ctx->pc = 0x2EE88Cu;
    SET_GPR_U32(ctx, 31, 0x2EE894u);
    ctx->pc = 0x2EE890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE88Cu;
    // 0x2ee890: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1D0u, 0x2EE88Cu, 0x2EE894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE894u;
label_2ee894:
    // 0x2ee894: 0x5620ffea  bnel        $s1, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2EE894u;
    {
        const bool branch_taken_0x2ee894 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee894) {
            ctx->pc = 0x2EE898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE894u;
            // 0x2ee898: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee840;
        }
    }
    ctx->pc = 0x2EE89Cu;
    // 0x2ee89c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2ee89cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ee8a0:
    // 0x2ee8a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ee8a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee8a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ee8a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ee8a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ee8a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee8ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ee8acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ee8b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ee8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ee8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8B4u;
        // 0x2ee8b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE8BCu;
    // 0x2ee8bc: 0x0  nop
    ctx->pc = 0x2ee8bcu;
    // NOP
    ctx->pc = 0x2ee8c0u;
}
