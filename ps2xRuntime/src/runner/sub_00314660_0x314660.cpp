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

// Function: sub_00314660
// Address: 0x314660 - 0x314778
void sub_00314660_0x314660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314660_0x314660");
#endif

    switch (ctx->pc) {
        case 0x314660u: goto label_314660;
        case 0x314664u: goto label_314664;
        case 0x314668u: goto label_314668;
        case 0x31466cu: goto label_31466c;
        case 0x314670u: goto label_314670;
        case 0x314674u: goto label_314674;
        case 0x314678u: goto label_314678;
        case 0x31467cu: goto label_31467c;
        case 0x314680u: goto label_314680;
        case 0x314684u: goto label_314684;
        case 0x314688u: goto label_314688;
        case 0x31468cu: goto label_31468c;
        case 0x314690u: goto label_314690;
        case 0x314694u: goto label_314694;
        case 0x314698u: goto label_314698;
        case 0x31469cu: goto label_31469c;
        case 0x3146a0u: goto label_3146a0;
        case 0x3146a4u: goto label_3146a4;
        case 0x3146a8u: goto label_3146a8;
        case 0x3146acu: goto label_3146ac;
        case 0x3146b0u: goto label_3146b0;
        case 0x3146b4u: goto label_3146b4;
        case 0x3146b8u: goto label_3146b8;
        case 0x3146bcu: goto label_3146bc;
        case 0x3146c0u: goto label_3146c0;
        case 0x3146c4u: goto label_3146c4;
        case 0x3146c8u: goto label_3146c8;
        case 0x3146ccu: goto label_3146cc;
        case 0x3146d0u: goto label_3146d0;
        case 0x3146d4u: goto label_3146d4;
        case 0x3146d8u: goto label_3146d8;
        case 0x3146dcu: goto label_3146dc;
        case 0x3146e0u: goto label_3146e0;
        case 0x3146e4u: goto label_3146e4;
        case 0x3146e8u: goto label_3146e8;
        case 0x3146ecu: goto label_3146ec;
        case 0x3146f0u: goto label_3146f0;
        case 0x3146f4u: goto label_3146f4;
        case 0x3146f8u: goto label_3146f8;
        case 0x3146fcu: goto label_3146fc;
        case 0x314700u: goto label_314700;
        case 0x314704u: goto label_314704;
        case 0x314708u: goto label_314708;
        case 0x31470cu: goto label_31470c;
        case 0x314710u: goto label_314710;
        case 0x314714u: goto label_314714;
        case 0x314718u: goto label_314718;
        case 0x31471cu: goto label_31471c;
        case 0x314720u: goto label_314720;
        case 0x314724u: goto label_314724;
        case 0x314728u: goto label_314728;
        case 0x31472cu: goto label_31472c;
        case 0x314730u: goto label_314730;
        case 0x314734u: goto label_314734;
        case 0x314738u: goto label_314738;
        case 0x31473cu: goto label_31473c;
        case 0x314740u: goto label_314740;
        case 0x314744u: goto label_314744;
        case 0x314748u: goto label_314748;
        case 0x31474cu: goto label_31474c;
        case 0x314750u: goto label_314750;
        case 0x314754u: goto label_314754;
        case 0x314758u: goto label_314758;
        case 0x31475cu: goto label_31475c;
        case 0x314760u: goto label_314760;
        case 0x314764u: goto label_314764;
        case 0x314768u: goto label_314768;
        case 0x31476cu: goto label_31476c;
        case 0x314770u: goto label_314770;
        case 0x314774u: goto label_314774;
        default: break;
    }

    ctx->pc = 0x314660u;

label_314660:
    // 0x314660: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x314660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_314664:
    // 0x314664: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x314664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_314668:
    // 0x314668: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x314668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_31466c:
    // 0x31466c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x31466cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_314670:
    // 0x314670: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x314670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_314674:
    // 0x314674: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x314674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_314678:
    // 0x314678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x314678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31467c:
    // 0x31467c: 0xc0c5016  jal         func_314058
label_314680:
    if (ctx->pc == 0x314680u) {
        ctx->pc = 0x314680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31467Cu;
        // 0x314680: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314684u;
        goto label_314684;
    }
    ctx->pc = 0x31467Cu;
    SET_GPR_U32(ctx, 31, 0x314684u);
    ctx->pc = 0x314680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31467Cu;
    // 0x314680: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314058u, 0x31467Cu, 0x314684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314684u;
label_314684:
    // 0x314684: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x314684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314688:
    // 0x314688: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
label_31468c:
    if (ctx->pc == 0x31468Cu) {
        ctx->pc = 0x31468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314688u;
        // 0x31468c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314690u;
        goto label_314690;
    }
    ctx->pc = 0x314688u;
    {
        const bool branch_taken_0x314688 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314688u;
        // 0x31468c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314688) {
            ctx->pc = 0x31475Cu;
            goto label_31475c;
        }
    }
    ctx->pc = 0x314690u;
label_314690:
    // 0x314690: 0xc0c4e40  jal         func_313900
label_314694:
    if (ctx->pc == 0x314694u) {
        ctx->pc = 0x314694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314690u;
        // 0x314694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314698u;
        goto label_314698;
    }
    ctx->pc = 0x314690u;
    SET_GPR_U32(ctx, 31, 0x314698u);
    ctx->pc = 0x314694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314690u;
    // 0x314694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313900u, 0x314690u, 0x314698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314698u;
label_314698:
    // 0x314698: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31469c:
    // 0x31469c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_3146a0:
    if (ctx->pc == 0x3146A0u) {
        ctx->pc = 0x3146A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31469Cu;
        // 0x3146a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3146A4u;
        goto label_3146a4;
    }
    ctx->pc = 0x31469Cu;
    {
        const bool branch_taken_0x31469c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3146A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31469Cu;
        // 0x3146a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31469c) {
            ctx->pc = 0x3146F4u;
            goto label_3146f4;
        }
    }
    ctx->pc = 0x3146A4u;
label_3146a4:
    // 0x3146a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3146a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3146a8:
    // 0x3146a8: 0xc0c50ec  jal         func_3143B0
label_3146ac:
    if (ctx->pc == 0x3146ACu) {
        ctx->pc = 0x3146ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146A8u;
        // 0x3146ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3146B0u;
        goto label_3146b0;
    }
    ctx->pc = 0x3146A8u;
    SET_GPR_U32(ctx, 31, 0x3146B0u);
    ctx->pc = 0x3146ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3146A8u;
    // 0x3146ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3143B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3143B0u, 0x3146A8u, 0x3146B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3146B0u;
label_3146b0:
    // 0x3146b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3146b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3146b4:
    // 0x3146b4: 0x4610007  bgez        $v1, . + 4 + (0x7 << 2)
label_3146b8:
    if (ctx->pc == 0x3146B8u) {
        ctx->pc = 0x3146B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146B4u;
        // 0x3146b8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3146BCu;
        goto label_3146bc;
    }
    ctx->pc = 0x3146B4u;
    {
        const bool branch_taken_0x3146b4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3146B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146B4u;
        // 0x3146b8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3146b4) {
            ctx->pc = 0x3146D4u;
            goto label_3146d4;
        }
    }
    ctx->pc = 0x3146BCu;
label_3146bc:
    // 0x3146bc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3146bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3146c0:
    // 0x3146c0: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x3146c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_3146c4:
    // 0x3146c4: 0x40f809  jalr        $v0
label_3146c8:
    if (ctx->pc == 0x3146C8u) {
        ctx->pc = 0x3146C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146C4u;
        // 0x3146c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3146CCu;
        goto label_3146cc;
    }
    ctx->pc = 0x3146C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3146CCu);
        ctx->pc = 0x3146C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146C4u;
        // 0x3146c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3146C4u, 0x3146CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3146CCu;
label_3146cc:
    // 0x3146cc: 0x10000009  b           . + 4 + (0x9 << 2)
label_3146d0:
    if (ctx->pc == 0x3146D0u) {
        ctx->pc = 0x3146D4u;
        goto label_3146d4;
    }
    ctx->pc = 0x3146CCu;
    {
        const bool branch_taken_0x3146cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3146cc) {
            ctx->pc = 0x3146F4u;
            goto label_3146f4;
        }
    }
    ctx->pc = 0x3146D4u;
label_3146d4:
    // 0x3146d4: 0xc0c51e8  jal         func_3147A0
label_3146d8:
    if (ctx->pc == 0x3146D8u) {
        ctx->pc = 0x3146D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146D4u;
        // 0x3146d8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3146DCu;
        goto label_3146dc;
    }
    ctx->pc = 0x3146D4u;
    SET_GPR_U32(ctx, 31, 0x3146DCu);
    ctx->pc = 0x3146D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3146D4u;
    // 0x3146d8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3147A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3147A0u, 0x3146D4u, 0x3146DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3146DCu;
label_3146dc:
    // 0x3146dc: 0xc0c51e8  jal         func_3147A0
label_3146e0:
    if (ctx->pc == 0x3146E0u) {
        ctx->pc = 0x3146E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146DCu;
        // 0x3146e0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3146E4u;
        goto label_3146e4;
    }
    ctx->pc = 0x3146DCu;
    SET_GPR_U32(ctx, 31, 0x3146E4u);
    ctx->pc = 0x3146E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3146DCu;
    // 0x3146e0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3147A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3147A0u, 0x3146DCu, 0x3146E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3146E4u;
label_3146e4:
    // 0x3146e4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3146e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3146e8:
    // 0x3146e8: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x3146e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_3146ec:
    // 0x3146ec: 0x40f809  jalr        $v0
label_3146f0:
    if (ctx->pc == 0x3146F0u) {
        ctx->pc = 0x3146F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146ECu;
        // 0x3146f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3146F4u;
        goto label_3146f4;
    }
    ctx->pc = 0x3146ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3146F4u);
        ctx->pc = 0x3146F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146ECu;
        // 0x3146f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3146ECu, 0x3146F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3146F4u;
label_3146f4:
    // 0x3146f4: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_3146f8:
    if (ctx->pc == 0x3146F8u) {
        ctx->pc = 0x3146F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146F4u;
        // 0x3146f8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3146FCu;
        goto label_3146fc;
    }
    ctx->pc = 0x3146F4u;
    {
        const bool branch_taken_0x3146f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3146F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146F4u;
        // 0x3146f8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3146f4) {
            ctx->pc = 0x31475Cu;
            goto label_31475c;
        }
    }
    ctx->pc = 0x3146FCu;
label_3146fc:
    // 0x3146fc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3146fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_314700:
    // 0x314700: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_314704:
    if (ctx->pc == 0x314704u) {
        ctx->pc = 0x314704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314700u;
        // 0x314704: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314708u;
        goto label_314708;
    }
    ctx->pc = 0x314700u;
    {
        const bool branch_taken_0x314700 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x314704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314700u;
        // 0x314704: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314700) {
            ctx->pc = 0x314718u;
            goto label_314718;
        }
    }
    ctx->pc = 0x314708u;
label_314708:
    // 0x314708: 0x2602e880  addiu       $v0, $s0, -0x1780
    ctx->pc = 0x314708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_31470c:
    // 0x31470c: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x31470cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_314710:
    // 0x314710: 0x60f809  jalr        $v1
label_314714:
    if (ctx->pc == 0x314714u) {
        ctx->pc = 0x314718u;
        goto label_314718;
    }
    ctx->pc = 0x314710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x314718u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314710u, 0x314718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x314718u;
label_314718:
    // 0x314718: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x314718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_31471c:
    // 0x31471c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_314720:
    if (ctx->pc == 0x314720u) {
        ctx->pc = 0x314720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31471Cu;
        // 0x314720: 0x2603e880  addiu       $v1, $s0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314724u;
        goto label_314724;
    }
    ctx->pc = 0x31471Cu;
    {
        const bool branch_taken_0x31471c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x314720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31471Cu;
        // 0x314720: 0x2603e880  addiu       $v1, $s0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31471c) {
            ctx->pc = 0x314730u;
            goto label_314730;
        }
    }
    ctx->pc = 0x314724u;
label_314724:
    // 0x314724: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x314724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_314728:
    // 0x314728: 0x40f809  jalr        $v0
label_31472c:
    if (ctx->pc == 0x31472Cu) {
        ctx->pc = 0x314730u;
        goto label_314730;
    }
    ctx->pc = 0x314728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x314730u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314728u, 0x314730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x314730u;
label_314730:
    // 0x314730: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x314730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_314734:
    // 0x314734: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_314738:
    if (ctx->pc == 0x314738u) {
        ctx->pc = 0x314738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314734u;
        // 0x314738: 0x2603e880  addiu       $v1, $s0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31473Cu;
        goto label_31473c;
    }
    ctx->pc = 0x314734u;
    {
        const bool branch_taken_0x314734 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x314738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314734u;
        // 0x314738: 0x2603e880  addiu       $v1, $s0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314734) {
            ctx->pc = 0x314748u;
            goto label_314748;
        }
    }
    ctx->pc = 0x31473Cu;
label_31473c:
    // 0x31473c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x31473cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_314740:
    // 0x314740: 0x40f809  jalr        $v0
label_314744:
    if (ctx->pc == 0x314744u) {
        ctx->pc = 0x314748u;
        goto label_314748;
    }
    ctx->pc = 0x314740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x314748u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314740u, 0x314748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x314748u;
label_314748:
    // 0x314748: 0x2603e880  addiu       $v1, $s0, -0x1780
    ctx->pc = 0x314748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_31474c:
    // 0x31474c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x31474cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_314750:
    // 0x314750: 0x40f809  jalr        $v0
label_314754:
    if (ctx->pc == 0x314754u) {
        ctx->pc = 0x314754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314750u;
        // 0x314754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314758u;
        goto label_314758;
    }
    ctx->pc = 0x314750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x314758u);
        ctx->pc = 0x314754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314750u;
        // 0x314754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314750u, 0x314758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x314758u;
label_314758:
    // 0x314758: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x314758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31475c:
    // 0x31475c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x31475cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_314760:
    // 0x314760: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x314760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_314764:
    // 0x314764: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x314764u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_314768:
    // 0x314768: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x314768u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31476c:
    // 0x31476c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31476cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_314770:
    // 0x314770: 0x3e00008  jr          $ra
label_314774:
    if (ctx->pc == 0x314774u) {
        ctx->pc = 0x314774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314770u;
        // 0x314774: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314778u;
        goto label_fallthrough_0x314770;
    }
    ctx->pc = 0x314770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314770u;
        // 0x314774: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x314770:
    ctx->pc = 0x314778u;
}
