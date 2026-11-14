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

// Function: sub_004775F0
// Address: 0x4775f0 - 0x477800
void sub_004775F0_0x4775f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004775F0_0x4775f0");
#endif

    switch (ctx->pc) {
        case 0x477610u: goto label_477610;
        case 0x477620u: goto label_477620;
        case 0x47762cu: goto label_47762c;
        case 0x477638u: goto label_477638;
        case 0x477648u: goto label_477648;
        case 0x477658u: goto label_477658;
        case 0x47766cu: goto label_47766c;
        case 0x477684u: goto label_477684;
        case 0x477690u: goto label_477690;
        case 0x4776a0u: goto label_4776a0;
        case 0x4776b0u: goto label_4776b0;
        case 0x4776c8u: goto label_4776c8;
        case 0x4776d8u: goto label_4776d8;
        case 0x4776f0u: goto label_4776f0;
        case 0x4776fcu: goto label_4776fc;
        case 0x477708u: goto label_477708;
        case 0x477718u: goto label_477718;
        case 0x477728u: goto label_477728;
        case 0x47773cu: goto label_47773c;
        case 0x477748u: goto label_477748;
        case 0x477760u: goto label_477760;
        case 0x47776cu: goto label_47776c;
        case 0x47777cu: goto label_47777c;
        case 0x47778cu: goto label_47778c;
        case 0x4777a4u: goto label_4777a4;
        case 0x4777b4u: goto label_4777b4;
        case 0x4777ccu: goto label_4777cc;
        case 0x4777dcu: goto label_4777dc;
        default: break;
    }

    ctx->pc = 0x4775f0u;

    // 0x4775f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4775f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4775f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4775f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4775f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4775f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4775fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4775fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x477600: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x477600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x477604: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x477604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x477608: 0xc11dc54  jal         func_477150
    ctx->pc = 0x477608u;
    SET_GPR_U32(ctx, 31, 0x477610u);
    ctx->pc = 0x477150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477150u, 0x477608u, 0x477610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477610u;
label_477610:
    // 0x477610: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x477610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x477614: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x477614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477618: 0xc11dbe8  jal         func_476FA0
    ctx->pc = 0x477618u;
    SET_GPR_U32(ctx, 31, 0x477620u);
    ctx->pc = 0x476FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476FA0u, 0x477618u, 0x477620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477620u;
label_477620:
    // 0x477620: 0x8f84c068  lw          $a0, -0x3F98($gp)
    ctx->pc = 0x477620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951016)));
    // 0x477624: 0xc11dd74  jal         func_4775D0
    ctx->pc = 0x477624u;
    SET_GPR_U32(ctx, 31, 0x47762Cu);
    ctx->pc = 0x4775D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4775D0u, 0x477624u, 0x47762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47762Cu;
label_47762c:
    // 0x47762c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47762cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477630: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x477630u;
    {
        const bool branch_taken_0x477630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x477630) {
            ctx->pc = 0x47764Cu;
            goto label_47764c;
        }
    }
    ctx->pc = 0x477638u;
label_477638:
    // 0x477638: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x477638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x47763c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47763cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477640: 0xc11de00  jal         func_477800
    ctx->pc = 0x477640u;
    SET_GPR_U32(ctx, 31, 0x477648u);
    ctx->pc = 0x477800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477800u, 0x477640u, 0x477648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477648u;
label_477648:
    // 0x477648: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x477648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_47764c:
    // 0x47764c: 0x8f84c068  lw          $a0, -0x3F98($gp)
    ctx->pc = 0x47764cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951016)));
    // 0x477650: 0xc11dd6c  jal         func_4775B0
    ctx->pc = 0x477650u;
    SET_GPR_U32(ctx, 31, 0x477658u);
    ctx->pc = 0x4775B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4775B0u, 0x477650u, 0x477658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477658u;
label_477658:
    // 0x477658: 0x1602fff7  bne         $s0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x477658u;
    {
        const bool branch_taken_0x477658 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x477658) {
            ctx->pc = 0x477638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_477638;
        }
    }
    ctx->pc = 0x477660u;
    // 0x477660: 0x8f84c068  lw          $a0, -0x3F98($gp)
    ctx->pc = 0x477660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951016)));
    // 0x477664: 0xc11dcf4  jal         func_4773D0
    ctx->pc = 0x477664u;
    SET_GPR_U32(ctx, 31, 0x47766Cu);
    ctx->pc = 0x4773D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4773D0u, 0x477664u, 0x47766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47766Cu;
label_47766c:
    // 0x47766c: 0x8f82c068  lw          $v0, -0x3F98($gp)
    ctx->pc = 0x47766cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951016)));
    // 0x477670: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x477670u;
    {
        const bool branch_taken_0x477670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x477670) {
            ctx->pc = 0x477694u;
            goto label_477694;
        }
    }
    ctx->pc = 0x477678u;
    // 0x477678: 0x8f84c068  lw          $a0, -0x3F98($gp)
    ctx->pc = 0x477678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951016)));
    // 0x47767c: 0xc11dc78  jal         func_4771E0
    ctx->pc = 0x47767Cu;
    SET_GPR_U32(ctx, 31, 0x477684u);
    ctx->pc = 0x4771E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4771E0u, 0x47767Cu, 0x477684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477684u;
label_477684:
    // 0x477684: 0x8f84c068  lw          $a0, -0x3F98($gp)
    ctx->pc = 0x477684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951016)));
    // 0x477688: 0xc119c5c  jal         func_467170
    ctx->pc = 0x477688u;
    SET_GPR_U32(ctx, 31, 0x477690u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x477688u, 0x477690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477690u;
label_477690:
    // 0x477690: 0xaf80c068  sw          $zero, -0x3F98($gp)
    ctx->pc = 0x477690u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951016), GPR_U32(ctx, 0));
label_477694:
    // 0x477694: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x477694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x477698: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x477698u;
    SET_GPR_U32(ctx, 31, 0x4776A0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x477698u, 0x4776A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4776A0u;
label_4776a0:
    // 0x4776a0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x4776a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4776a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4776a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4776a8: 0xc0400e0  jal         func_100380
    ctx->pc = 0x4776A8u;
    SET_GPR_U32(ctx, 31, 0x4776B0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x4776A8u, 0x4776B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4776B0u;
label_4776b0:
    // 0x4776b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4776b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4776b4: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x4776B4u;
    {
        const bool branch_taken_0x4776b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4776b4) {
            ctx->pc = 0x4776DCu;
            goto label_4776dc;
        }
    }
    ctx->pc = 0x4776BCu;
    // 0x4776bc: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x4776bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x4776c0: 0xc11dc54  jal         func_477150
    ctx->pc = 0x4776C0u;
    SET_GPR_U32(ctx, 31, 0x4776C8u);
    ctx->pc = 0x477150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477150u, 0x4776C0u, 0x4776C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4776C8u;
label_4776c8:
    // 0x4776c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4776c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4776cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4776ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4776d0: 0xc11dbe8  jal         func_476FA0
    ctx->pc = 0x4776D0u;
    SET_GPR_U32(ctx, 31, 0x4776D8u);
    ctx->pc = 0x476FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476FA0u, 0x4776D0u, 0x4776D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4776D8u;
label_4776d8:
    // 0x4776d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4776d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4776dc:
    // 0x4776dc: 0xaf92c068  sw          $s2, -0x3F98($gp)
    ctx->pc = 0x4776dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951016), GPR_U32(ctx, 18));
    // 0x4776e0: 0x8f84c068  lw          $a0, -0x3F98($gp)
    ctx->pc = 0x4776e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951016)));
    // 0x4776e4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x4776e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4776e8: 0xc11e27c  jal         func_4789F0
    ctx->pc = 0x4776E8u;
    SET_GPR_U32(ctx, 31, 0x4776F0u);
    ctx->pc = 0x4789F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4789F0u, 0x4776E8u, 0x4776F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4776F0u;
label_4776f0:
    // 0x4776f0: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x4776f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x4776f4: 0xc11dd74  jal         func_4775D0
    ctx->pc = 0x4776F4u;
    SET_GPR_U32(ctx, 31, 0x4776FCu);
    ctx->pc = 0x4775D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4775D0u, 0x4776F4u, 0x4776FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4776FCu;
label_4776fc:
    // 0x4776fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4776fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477700: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x477700u;
    {
        const bool branch_taken_0x477700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x477700) {
            ctx->pc = 0x47771Cu;
            goto label_47771c;
        }
    }
    ctx->pc = 0x477708u;
label_477708:
    // 0x477708: 0x8f84c068  lw          $a0, -0x3F98($gp)
    ctx->pc = 0x477708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951016)));
    // 0x47770c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47770cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477710: 0xc11de00  jal         func_477800
    ctx->pc = 0x477710u;
    SET_GPR_U32(ctx, 31, 0x477718u);
    ctx->pc = 0x477800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477800u, 0x477710u, 0x477718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477718u;
label_477718:
    // 0x477718: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x477718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_47771c:
    // 0x47771c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x47771cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x477720: 0xc11dd6c  jal         func_4775B0
    ctx->pc = 0x477720u;
    SET_GPR_U32(ctx, 31, 0x477728u);
    ctx->pc = 0x4775B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4775B0u, 0x477720u, 0x477728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477728u;
label_477728:
    // 0x477728: 0x1602fff7  bne         $s0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x477728u;
    {
        const bool branch_taken_0x477728 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x477728) {
            ctx->pc = 0x477708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_477708;
        }
    }
    ctx->pc = 0x477730u;
    // 0x477730: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x477730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x477734: 0xc11dcf4  jal         func_4773D0
    ctx->pc = 0x477734u;
    SET_GPR_U32(ctx, 31, 0x47773Cu);
    ctx->pc = 0x4773D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4773D0u, 0x477734u, 0x47773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47773Cu;
label_47773c:
    // 0x47773c: 0x8f84c06c  lw          $a0, -0x3F94($gp)
    ctx->pc = 0x47773cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951020)));
    // 0x477740: 0xc11dcf4  jal         func_4773D0
    ctx->pc = 0x477740u;
    SET_GPR_U32(ctx, 31, 0x477748u);
    ctx->pc = 0x4773D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4773D0u, 0x477740u, 0x477748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477748u;
label_477748:
    // 0x477748: 0x8f82c06c  lw          $v0, -0x3F94($gp)
    ctx->pc = 0x477748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951020)));
    // 0x47774c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x47774Cu;
    {
        const bool branch_taken_0x47774c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47774c) {
            ctx->pc = 0x477770u;
            goto label_477770;
        }
    }
    ctx->pc = 0x477754u;
    // 0x477754: 0x8f84c06c  lw          $a0, -0x3F94($gp)
    ctx->pc = 0x477754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951020)));
    // 0x477758: 0xc11dc78  jal         func_4771E0
    ctx->pc = 0x477758u;
    SET_GPR_U32(ctx, 31, 0x477760u);
    ctx->pc = 0x4771E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4771E0u, 0x477758u, 0x477760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477760u;
label_477760:
    // 0x477760: 0x8f84c06c  lw          $a0, -0x3F94($gp)
    ctx->pc = 0x477760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951020)));
    // 0x477764: 0xc119c5c  jal         func_467170
    ctx->pc = 0x477764u;
    SET_GPR_U32(ctx, 31, 0x47776Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x477764u, 0x47776Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47776Cu;
label_47776c:
    // 0x47776c: 0xaf80c06c  sw          $zero, -0x3F94($gp)
    ctx->pc = 0x47776cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951020), GPR_U32(ctx, 0));
label_477770:
    // 0x477770: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x477770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x477774: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x477774u;
    SET_GPR_U32(ctx, 31, 0x47777Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x477774u, 0x47777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47777Cu;
label_47777c:
    // 0x47777c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x47777cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x477780: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x477780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477784: 0xc0400e0  jal         func_100380
    ctx->pc = 0x477784u;
    SET_GPR_U32(ctx, 31, 0x47778Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x477784u, 0x47778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47778Cu;
label_47778c:
    // 0x47778c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x47778cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477790: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x477790u;
    {
        const bool branch_taken_0x477790 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x477790) {
            ctx->pc = 0x4777B8u;
            goto label_4777b8;
        }
    }
    ctx->pc = 0x477798u;
    // 0x477798: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x477798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x47779c: 0xc11dc54  jal         func_477150
    ctx->pc = 0x47779Cu;
    SET_GPR_U32(ctx, 31, 0x4777A4u);
    ctx->pc = 0x477150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477150u, 0x47779Cu, 0x4777A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4777A4u;
label_4777a4:
    // 0x4777a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4777a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4777a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4777a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4777ac: 0xc11dbe8  jal         func_476FA0
    ctx->pc = 0x4777ACu;
    SET_GPR_U32(ctx, 31, 0x4777B4u);
    ctx->pc = 0x476FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476FA0u, 0x4777ACu, 0x4777B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4777B4u;
label_4777b4:
    // 0x4777b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4777b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4777b8:
    // 0x4777b8: 0xaf91c06c  sw          $s1, -0x3F94($gp)
    ctx->pc = 0x4777b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951020), GPR_U32(ctx, 17));
    // 0x4777bc: 0x8f84c06c  lw          $a0, -0x3F94($gp)
    ctx->pc = 0x4777bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951020)));
    // 0x4777c0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x4777c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4777c4: 0xc11e27c  jal         func_4789F0
    ctx->pc = 0x4777C4u;
    SET_GPR_U32(ctx, 31, 0x4777CCu);
    ctx->pc = 0x4789F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4789F0u, 0x4777C4u, 0x4777CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4777CCu;
label_4777cc:
    // 0x4777cc: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x4777ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x4777d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4777d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4777d4: 0xc11dc84  jal         func_477210
    ctx->pc = 0x4777D4u;
    SET_GPR_U32(ctx, 31, 0x4777DCu);
    ctx->pc = 0x477210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477210u, 0x4777D4u, 0x4777DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4777DCu;
label_4777dc:
    // 0x4777dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4777dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4777e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4777e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4777e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4777e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4777e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4777e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4777ec: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x4777ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4777f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4777F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4777F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4777F8u;
    // 0x4777f8: 0x0  nop
    ctx->pc = 0x4777f8u;
    // NOP
    // 0x4777fc: 0x0  nop
    ctx->pc = 0x4777fcu;
    // NOP
    ctx->pc = 0x477800u;
}
