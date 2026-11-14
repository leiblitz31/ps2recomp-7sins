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

// Function: sub_00321740
// Address: 0x321740 - 0x321870
void sub_00321740_0x321740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321740_0x321740");
#endif

    switch (ctx->pc) {
        case 0x32176cu: goto label_32176c;
        case 0x3217f8u: goto label_3217f8;
        case 0x321840u: goto label_321840;
        case 0x321850u: goto label_321850;
        default: break;
    }

    ctx->pc = 0x321740u;

    // 0x321740: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x321740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x321744: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x321744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x321748: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x321748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32174c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32174cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321750: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x321750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x321754: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x321754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x321758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32175c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x32175cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x321760: 0x3c130032  lui         $s3, 0x32
    ctx->pc = 0x321760u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)50 << 16));
    // 0x321764: 0xc0c85a4  jal         func_321690
    ctx->pc = 0x321764u;
    SET_GPR_U32(ctx, 31, 0x32176Cu);
    ctx->pc = 0x321768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321764u;
    // 0x321768: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321690u, 0x321764u, 0x32176Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32176Cu;
label_32176c:
    // 0x32176c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32176cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321770: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x321770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x321774: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x321774u;
    {
        const bool branch_taken_0x321774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x321774) {
            ctx->pc = 0x321838u;
            goto label_321838;
        }
    }
    ctx->pc = 0x32177Cu;
    // 0x32177c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32177cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x321780: 0x1840002d  blez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x321780u;
    {
        const bool branch_taken_0x321780 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x321784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321780u;
        // 0x321784: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321780) {
            ctx->pc = 0x321838u;
            goto label_321838;
        }
    }
    ctx->pc = 0x321788u;
    // 0x321788: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x321788u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32178c: 0x51023  negu        $v0, $a1
    ctx->pc = 0x32178cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x321790: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x321790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321794: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x321794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x321798: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x321798u;
    {
        const bool branch_taken_0x321798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321798u;
        // 0x32179c: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321798) {
            ctx->pc = 0x3217F4u;
            goto label_3217f4;
        }
    }
    ctx->pc = 0x3217A0u;
    // 0x3217a0: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3217a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3217a4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3217A4u;
    {
        const bool branch_taken_0x3217a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3217A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3217A4u;
        // 0x3217a8: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3217a4) {
            ctx->pc = 0x3217DCu;
            goto label_3217dc;
        }
    }
    ctx->pc = 0x3217ACu;
    // 0x3217ac: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3217ACu;
    {
        const bool branch_taken_0x3217ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3217ac) {
            ctx->pc = 0x3217B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3217ACu;
            // 0x3217b0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3217CCu;
            goto label_3217cc;
        }
    }
    ctx->pc = 0x3217B4u;
    // 0x3217b4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3217b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3217b8: 0x50460001  beql        $v0, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x3217B8u;
    {
        const bool branch_taken_0x3217b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x3217b8) {
            ctx->pc = 0x3217BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3217B8u;
            // 0x3217bc: 0xacf0000c  sw          $s0, 0xC($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3217C0u;
            goto label_3217c0;
        }
    }
    ctx->pc = 0x3217C0u;
label_3217c0:
    // 0x3217c0: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x3217c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3217c4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3217c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3217c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3217c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3217cc:
    // 0x3217cc: 0x50460001  beql        $v0, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x3217CCu;
    {
        const bool branch_taken_0x3217cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x3217cc) {
            ctx->pc = 0x3217D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3217CCu;
            // 0x3217d0: 0xac70000c  sw          $s0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3217D4u;
            goto label_3217d4;
        }
    }
    ctx->pc = 0x3217D4u;
label_3217d4:
    // 0x3217d4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3217d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3217d8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3217d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3217dc:
    // 0x3217dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3217dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3217e0: 0x50460001  beql        $v0, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x3217E0u;
    {
        const bool branch_taken_0x3217e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x3217e0) {
            ctx->pc = 0x3217E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3217E0u;
            // 0x3217e4: 0xac70000c  sw          $s0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3217E8u;
            goto label_3217e8;
        }
    }
    ctx->pc = 0x3217E8u;
label_3217e8:
    // 0x3217e8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3217e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3217ec: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3217ECu;
    {
        const bool branch_taken_0x3217ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3217F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3217ECu;
        // 0x3217f0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3217ec) {
            ctx->pc = 0x321838u;
            goto label_321838;
        }
    }
    ctx->pc = 0x3217F4u;
label_3217f4:
    // 0x3217f4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3217f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3217f8:
    // 0x3217f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3217f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3217fc: 0x50460001  beql        $v0, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x3217FCu;
    {
        const bool branch_taken_0x3217fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x3217fc) {
            ctx->pc = 0x321800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3217FCu;
            // 0x321800: 0xac70000c  sw          $s0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321804u;
            goto label_321804;
        }
    }
    ctx->pc = 0x321804u;
label_321804:
    // 0x321804: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x321804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x321808: 0x50460001  beql        $v0, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x321808u;
    {
        const bool branch_taken_0x321808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x321808) {
            ctx->pc = 0x32180Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321808u;
            // 0x32180c: 0xac70001c  sw          $s0, 0x1C($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321810u;
            goto label_321810;
        }
    }
    ctx->pc = 0x321810u;
label_321810:
    // 0x321810: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x321810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x321814: 0x50460001  beql        $v0, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x321814u;
    {
        const bool branch_taken_0x321814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x321814) {
            ctx->pc = 0x321818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321814u;
            // 0x321818: 0xac70002c  sw          $s0, 0x2C($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32181Cu;
            goto label_32181c;
        }
    }
    ctx->pc = 0x32181Cu;
label_32181c:
    // 0x32181c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x32181cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x321820: 0x50460001  beql        $v0, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x321820u;
    {
        const bool branch_taken_0x321820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x321820) {
            ctx->pc = 0x321824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321820u;
            // 0x321824: 0xac70003c  sw          $s0, 0x3C($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321828u;
            goto label_321828;
        }
    }
    ctx->pc = 0x321828u;
label_321828:
    // 0x321828: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x321828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x32182c: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x32182cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x321830: 0x14a0fff1  bnez        $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x321830u;
    {
        const bool branch_taken_0x321830 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x321834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321830u;
        // 0x321834: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321830) {
            ctx->pc = 0x3217F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3217f8;
        }
    }
    ctx->pc = 0x321838u;
label_321838:
    // 0x321838: 0xc106794  jal         func_419E50
    ctx->pc = 0x321838u;
    SET_GPR_U32(ctx, 31, 0x321840u);
    ctx->pc = 0x32183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321838u;
    // 0x32183c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x321838u, 0x321840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321840u;
label_321840:
    // 0x321840: 0x26651740  addiu       $a1, $s3, 0x1740
    ctx->pc = 0x321840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 5952));
    // 0x321844: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x321844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321848: 0xc1066c2  jal         func_419B08
    ctx->pc = 0x321848u;
    SET_GPR_U32(ctx, 31, 0x321850u);
    ctx->pc = 0x32184Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321848u;
    // 0x32184c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B08u, 0x321848u, 0x321850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321850u;
label_321850:
    // 0x321850: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x321850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321854: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x321854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x321858: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x321858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32185c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32185cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321860: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x321860u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x321864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321868: 0x3e00008  jr          $ra
    ctx->pc = 0x321868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321868u;
        // 0x32186c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321870u;
}
