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

// Function: sub_00357720
// Address: 0x357720 - 0x357840
void sub_00357720_0x357720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357720_0x357720");
#endif

    switch (ctx->pc) {
        case 0x357748u: goto label_357748;
        case 0x35775cu: goto label_35775c;
        case 0x357770u: goto label_357770;
        case 0x357784u: goto label_357784;
        case 0x35779cu: goto label_35779c;
        case 0x3577b4u: goto label_3577b4;
        case 0x3577bcu: goto label_3577bc;
        case 0x3577d8u: goto label_3577d8;
        case 0x3577f0u: goto label_3577f0;
        case 0x3577fcu: goto label_3577fc;
        case 0x35780cu: goto label_35780c;
        default: break;
    }

    ctx->pc = 0x357720u;

    // 0x357720: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x357720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x357724: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x357724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x357728: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x357728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x35772c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x35772cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357730: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x357730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x357734: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x357734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x357738: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x357738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x35773c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35773cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x357740: 0xc0d5c56  jal         func_357158
    ctx->pc = 0x357740u;
    SET_GPR_U32(ctx, 31, 0x357748u);
    ctx->pc = 0x357744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357740u;
    // 0x357744: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357158u, 0x357740u, 0x357748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357748u;
label_357748:
    // 0x357748: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x357748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35774c: 0x12600032  beqz        $s3, . + 4 + (0x32 << 2)
    ctx->pc = 0x35774Cu;
    {
        const bool branch_taken_0x35774c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x357750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35774Cu;
        // 0x357750: 0xae93000c  sw          $s3, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35774c) {
            ctx->pc = 0x357818u;
            goto label_357818;
        }
    }
    ctx->pc = 0x357754u;
    // 0x357754: 0xc1116a2  jal         func_445A88
    ctx->pc = 0x357754u;
    SET_GPR_U32(ctx, 31, 0x35775Cu);
    ctx->pc = 0x445A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445A88u, 0x357754u, 0x35775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35775Cu;
label_35775c:
    // 0x35775c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35775cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357760: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x357760u;
    {
        const bool branch_taken_0x357760 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x357764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357760u;
        // 0x357764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357760) {
            ctx->pc = 0x357810u;
            goto label_357810;
        }
    }
    ctx->pc = 0x357768u;
    // 0x357768: 0xc112074  jal         func_4481D0
    ctx->pc = 0x357768u;
    SET_GPR_U32(ctx, 31, 0x357770u);
    ctx->pc = 0x35776Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357768u;
    // 0x35776c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4481D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4481D0u, 0x357768u, 0x357770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357770u;
label_357770:
    // 0x357770: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x357770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357774: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x357774u;
    {
        const bool branch_taken_0x357774 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x357774) {
            ctx->pc = 0x357804u;
            goto label_357804;
        }
    }
    ctx->pc = 0x35777Cu;
    // 0x35777c: 0xc0e855c  jal         func_3A1570
    ctx->pc = 0x35777Cu;
    SET_GPR_U32(ctx, 31, 0x357784u);
    ctx->pc = 0x3A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1570u, 0x35777Cu, 0x357784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357784u;
label_357784:
    // 0x357784: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x357784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35778c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35778cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357790: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x357790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357794: 0xc1120d8  jal         func_448360
    ctx->pc = 0x357794u;
    SET_GPR_U32(ctx, 31, 0x35779Cu);
    ctx->pc = 0x357798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357794u;
    // 0x357798: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448360u, 0x357794u, 0x35779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35779Cu;
label_35779c:
    // 0x35779c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35779cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3577a0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3577a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3577a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3577a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3577a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3577a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3577ac: 0xc1125d8  jal         func_449760
    ctx->pc = 0x3577ACu;
    SET_GPR_U32(ctx, 31, 0x3577B4u);
    ctx->pc = 0x3577B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3577ACu;
    // 0x3577b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449760u, 0x3577ACu, 0x3577B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3577B4u;
label_3577b4:
    // 0x3577b4: 0xc111dea  jal         func_4477A8
    ctx->pc = 0x3577B4u;
    SET_GPR_U32(ctx, 31, 0x3577BCu);
    ctx->pc = 0x3577B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3577B4u;
    // 0x3577b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4477A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4477A8u, 0x3577B4u, 0x3577BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3577BCu;
label_3577bc:
    // 0x3577bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3577bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3577c0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3577C0u;
    {
        const bool branch_taken_0x3577c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3577C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3577C0u;
        // 0x3577c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3577c0) {
            ctx->pc = 0x357804u;
            goto label_357804;
        }
    }
    ctx->pc = 0x3577C8u;
    // 0x3577c8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3577c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3577cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3577ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3577d0: 0xc1125d8  jal         func_449760
    ctx->pc = 0x3577D0u;
    SET_GPR_U32(ctx, 31, 0x3577D8u);
    ctx->pc = 0x3577D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3577D0u;
    // 0x3577d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449760u, 0x3577D0u, 0x3577D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3577D8u;
label_3577d8:
    // 0x3577d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3577d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3577dc: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x3577dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x3577e0: 0x24c67388  addiu       $a2, $a2, 0x7388
    ctx->pc = 0x3577e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29576));
    // 0x3577e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3577e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3577e8: 0xc0e8560  jal         func_3A1580
    ctx->pc = 0x3577E8u;
    SET_GPR_U32(ctx, 31, 0x3577F0u);
    ctx->pc = 0x3577ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3577E8u;
    // 0x3577ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1580u, 0x3577E8u, 0x3577F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3577F0u;
label_3577f0:
    // 0x3577f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3577f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3577f4: 0xc0e8576  jal         func_3A15D8
    ctx->pc = 0x3577F4u;
    SET_GPR_U32(ctx, 31, 0x3577FCu);
    ctx->pc = 0x3577F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3577F4u;
    // 0x3577f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A15D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15D8u, 0x3577F4u, 0x3577FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3577FCu;
label_3577fc:
    // 0x3577fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3577FCu;
    {
        const bool branch_taken_0x3577fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3577FCu;
        // 0x357800: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3577fc) {
            ctx->pc = 0x357810u;
            goto label_357810;
        }
    }
    ctx->pc = 0x357804u;
label_357804:
    // 0x357804: 0xc1116c6  jal         func_445B18
    ctx->pc = 0x357804u;
    SET_GPR_U32(ctx, 31, 0x35780Cu);
    ctx->pc = 0x357808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357804u;
    // 0x357808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445B18u, 0x357804u, 0x35780Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35780Cu;
label_35780c:
    // 0x35780c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35780cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357810:
    // 0x357810: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x357810u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x357814: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x357814u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_357818:
    // 0x357818: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x357818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35781c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x35781cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x357820: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x357820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x357824: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x357824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x357828: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x357828u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35782c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x35782cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x357830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357834: 0x3e00008  jr          $ra
    ctx->pc = 0x357834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357834u;
        // 0x357838: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35783Cu;
    // 0x35783c: 0x0  nop
    ctx->pc = 0x35783cu;
    // NOP
    ctx->pc = 0x357840u;
}
