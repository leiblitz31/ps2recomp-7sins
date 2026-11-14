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

// Function: sub_00102680
// Address: 0x102680 - 0x1027f0
void sub_00102680_0x102680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102680_0x102680");
#endif

    switch (ctx->pc) {
        case 0x102680u: goto label_102680;
        case 0x102684u: goto label_102684;
        case 0x102688u: goto label_102688;
        case 0x10268cu: goto label_10268c;
        case 0x102690u: goto label_102690;
        case 0x102694u: goto label_102694;
        case 0x102698u: goto label_102698;
        case 0x10269cu: goto label_10269c;
        case 0x1026a0u: goto label_1026a0;
        case 0x1026a4u: goto label_1026a4;
        case 0x1026a8u: goto label_1026a8;
        case 0x1026acu: goto label_1026ac;
        case 0x1026b0u: goto label_1026b0;
        case 0x1026b4u: goto label_1026b4;
        case 0x1026b8u: goto label_1026b8;
        case 0x1026bcu: goto label_1026bc;
        case 0x1026c0u: goto label_1026c0;
        case 0x1026c4u: goto label_1026c4;
        case 0x1026c8u: goto label_1026c8;
        case 0x1026ccu: goto label_1026cc;
        case 0x1026d0u: goto label_1026d0;
        case 0x1026d4u: goto label_1026d4;
        case 0x1026d8u: goto label_1026d8;
        case 0x1026dcu: goto label_1026dc;
        case 0x1026e0u: goto label_1026e0;
        case 0x1026e4u: goto label_1026e4;
        case 0x1026e8u: goto label_1026e8;
        case 0x1026ecu: goto label_1026ec;
        case 0x1026f0u: goto label_1026f0;
        case 0x1026f4u: goto label_1026f4;
        case 0x1026f8u: goto label_1026f8;
        case 0x1026fcu: goto label_1026fc;
        case 0x102700u: goto label_102700;
        case 0x102704u: goto label_102704;
        case 0x102708u: goto label_102708;
        case 0x10270cu: goto label_10270c;
        case 0x102710u: goto label_102710;
        case 0x102714u: goto label_102714;
        case 0x102718u: goto label_102718;
        case 0x10271cu: goto label_10271c;
        case 0x102720u: goto label_102720;
        case 0x102724u: goto label_102724;
        case 0x102728u: goto label_102728;
        case 0x10272cu: goto label_10272c;
        case 0x102730u: goto label_102730;
        case 0x102734u: goto label_102734;
        case 0x102738u: goto label_102738;
        case 0x10273cu: goto label_10273c;
        case 0x102740u: goto label_102740;
        case 0x102744u: goto label_102744;
        case 0x102748u: goto label_102748;
        case 0x10274cu: goto label_10274c;
        case 0x102750u: goto label_102750;
        case 0x102754u: goto label_102754;
        case 0x102758u: goto label_102758;
        case 0x10275cu: goto label_10275c;
        case 0x102760u: goto label_102760;
        case 0x102764u: goto label_102764;
        case 0x102768u: goto label_102768;
        case 0x10276cu: goto label_10276c;
        case 0x102770u: goto label_102770;
        case 0x102774u: goto label_102774;
        case 0x102778u: goto label_102778;
        case 0x10277cu: goto label_10277c;
        case 0x102780u: goto label_102780;
        case 0x102784u: goto label_102784;
        case 0x102788u: goto label_102788;
        case 0x10278cu: goto label_10278c;
        case 0x102790u: goto label_102790;
        case 0x102794u: goto label_102794;
        case 0x102798u: goto label_102798;
        case 0x10279cu: goto label_10279c;
        case 0x1027a0u: goto label_1027a0;
        case 0x1027a4u: goto label_1027a4;
        case 0x1027a8u: goto label_1027a8;
        case 0x1027acu: goto label_1027ac;
        case 0x1027b0u: goto label_1027b0;
        case 0x1027b4u: goto label_1027b4;
        case 0x1027b8u: goto label_1027b8;
        case 0x1027bcu: goto label_1027bc;
        case 0x1027c0u: goto label_1027c0;
        case 0x1027c4u: goto label_1027c4;
        case 0x1027c8u: goto label_1027c8;
        case 0x1027ccu: goto label_1027cc;
        case 0x1027d0u: goto label_1027d0;
        case 0x1027d4u: goto label_1027d4;
        case 0x1027d8u: goto label_1027d8;
        case 0x1027dcu: goto label_1027dc;
        case 0x1027e0u: goto label_1027e0;
        case 0x1027e4u: goto label_1027e4;
        case 0x1027e8u: goto label_1027e8;
        case 0x1027ecu: goto label_1027ec;
        default: break;
    }

    ctx->pc = 0x102680u;

label_102680:
    // 0x102680: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x102680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_102684:
    // 0x102684: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x102684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_102688:
    // 0x102688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x102688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10268c:
    // 0x10268c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10268cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_102690:
    // 0x102690: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x102690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102694:
    // 0x102694: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x102694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_102698:
    // 0x102698: 0xc088560  jal         func_221580
label_10269c:
    if (ctx->pc == 0x10269Cu) {
        ctx->pc = 0x1026A0u;
        goto label_1026a0;
    }
    ctx->pc = 0x102698u;
    SET_GPR_U32(ctx, 31, 0x1026A0u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x102698u, 0x1026A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1026A0u;
label_1026a0:
    // 0x1026a0: 0x8f82b998  lw          $v0, -0x4668($gp)
    ctx->pc = 0x1026a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949272)));
label_1026a4:
    // 0x1026a4: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1026a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1026a8:
    // 0x1026a8: 0xc040eb4  jal         func_103AD0
label_1026ac:
    if (ctx->pc == 0x1026ACu) {
        ctx->pc = 0x1026B0u;
        goto label_1026b0;
    }
    ctx->pc = 0x1026A8u;
    SET_GPR_U32(ctx, 31, 0x1026B0u);
    ctx->pc = 0x103AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103AD0u, 0x1026A8u, 0x1026B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1026B0u;
label_1026b0:
    // 0x1026b0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1026b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1026b4:
    // 0x1026b4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1026b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1026b8:
    // 0x1026b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1026b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1026bc:
    // 0x1026bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1026bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1026c0:
    // 0x1026c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1026c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1026c4:
    // 0x1026c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1026c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1026c8:
    // 0x1026c8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1026c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1026cc:
    // 0x1026cc: 0xc12242c  jal         func_4890B0
label_1026d0:
    if (ctx->pc == 0x1026D0u) {
        ctx->pc = 0x1026D4u;
        goto label_1026d4;
    }
    ctx->pc = 0x1026CCu;
    SET_GPR_U32(ctx, 31, 0x1026D4u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x1026CCu, 0x1026D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1026D4u;
label_1026d4:
    // 0x1026d4: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1026d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
label_1026d8:
    // 0x1026d8: 0x24841290  addiu       $a0, $a0, 0x1290
    ctx->pc = 0x1026d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4752));
label_1026dc:
    // 0x1026dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1026dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1026e0:
    // 0x1026e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1026e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1026e4:
    // 0x1026e4: 0xc08df08  jal         func_237C20
label_1026e8:
    if (ctx->pc == 0x1026E8u) {
        ctx->pc = 0x1026ECu;
        goto label_1026ec;
    }
    ctx->pc = 0x1026E4u;
    SET_GPR_U32(ctx, 31, 0x1026ECu);
    ctx->pc = 0x237C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237C20u, 0x1026E4u, 0x1026ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1026ECu;
label_1026ec:
    // 0x1026ec: 0x8f82b998  lw          $v0, -0x4668($gp)
    ctx->pc = 0x1026ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949272)));
label_1026f0:
    // 0x1026f0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1026f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1026f4:
    // 0x1026f4: 0xc046670  jal         func_1199C0
label_1026f8:
    if (ctx->pc == 0x1026F8u) {
        ctx->pc = 0x1026FCu;
        goto label_1026fc;
    }
    ctx->pc = 0x1026F4u;
    SET_GPR_U32(ctx, 31, 0x1026FCu);
    ctx->pc = 0x1199C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1199C0u, 0x1026F4u, 0x1026FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1026FCu;
label_1026fc:
    // 0x1026fc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1026fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_102700:
    // 0x102700: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x102700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_102704:
    // 0x102704: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x102704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_102708:
    // 0x102708: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x102708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10270c:
    // 0x10270c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10270cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_102710:
    // 0x102710: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x102710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_102714:
    // 0x102714: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x102714u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_102718:
    // 0x102718: 0x8f83b998  lw          $v1, -0x4668($gp)
    ctx->pc = 0x102718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949272)));
label_10271c:
    // 0x10271c: 0x8f82b998  lw          $v0, -0x4668($gp)
    ctx->pc = 0x10271cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949272)));
label_102720:
    // 0x102720: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x102720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_102724:
    // 0x102724: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x102724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_102728:
    // 0x102728: 0xc043434  jal         func_10D0D0
label_10272c:
    if (ctx->pc == 0x10272Cu) {
        ctx->pc = 0x102730u;
        goto label_102730;
    }
    ctx->pc = 0x102728u;
    SET_GPR_U32(ctx, 31, 0x102730u);
    ctx->pc = 0x10D0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D0D0u, 0x102728u, 0x102730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102730u;
label_102730:
    // 0x102730: 0x8f82b998  lw          $v0, -0x4668($gp)
    ctx->pc = 0x102730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949272)));
label_102734:
    // 0x102734: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x102734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_102738:
    // 0x102738: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x102738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10273c:
    // 0x10273c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x10273cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_102740:
    // 0x102740: 0x320f809  jalr        $t9
label_102744:
    if (ctx->pc == 0x102744u) {
        ctx->pc = 0x102748u;
        goto label_102748;
    }
    ctx->pc = 0x102740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x102748u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102740u, 0x102748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102748u;
label_102748:
    // 0x102748: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x102748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10274c:
    // 0x10274c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10274cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_102750:
    // 0x102750: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x102750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_102754:
    // 0x102754: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x102754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_102758:
    // 0x102758: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x102758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10275c:
    // 0x10275c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10275cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_102760:
    // 0x102760: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x102760u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_102764:
    // 0x102764: 0x8f82b998  lw          $v0, -0x4668($gp)
    ctx->pc = 0x102764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949272)));
label_102768:
    // 0x102768: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x102768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_10276c:
    // 0x10276c: 0xc050ef8  jal         func_143BE0
label_102770:
    if (ctx->pc == 0x102770u) {
        ctx->pc = 0x102774u;
        goto label_102774;
    }
    ctx->pc = 0x10276Cu;
    SET_GPR_U32(ctx, 31, 0x102774u);
    ctx->pc = 0x143BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143BE0u, 0x10276Cu, 0x102774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102774u;
label_102774:
    // 0x102774: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x102774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_102778:
    // 0x102778: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x102778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_10277c:
    // 0x10277c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10277cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_102780:
    // 0x102780: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x102780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_102784:
    // 0x102784: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x102784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_102788:
    // 0x102788: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x102788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10278c:
    // 0x10278c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10278cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_102790:
    // 0x102790: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x102790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_102794:
    // 0x102794: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x102794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
label_102798:
    // 0x102798: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x102798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10279c:
    // 0x10279c: 0xc040924  jal         func_102490
label_1027a0:
    if (ctx->pc == 0x1027A0u) {
        ctx->pc = 0x1027A4u;
        goto label_1027a4;
    }
    ctx->pc = 0x10279Cu;
    SET_GPR_U32(ctx, 31, 0x1027A4u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x10279Cu, 0x1027A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1027A4u;
label_1027a4:
    // 0x1027a4: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1027a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1027a8:
    // 0x1027a8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1027a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1027ac:
    // 0x1027ac: 0xc08ef28  jal         func_23BCA0
label_1027b0:
    if (ctx->pc == 0x1027B0u) {
        ctx->pc = 0x1027B4u;
        goto label_1027b4;
    }
    ctx->pc = 0x1027ACu;
    SET_GPR_U32(ctx, 31, 0x1027B4u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x1027ACu, 0x1027B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1027B4u;
label_1027b4:
    // 0x1027b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1027b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1027b8:
    // 0x1027b8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1027b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1027bc:
    // 0x1027bc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1027bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1027c0:
    // 0x1027c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1027c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1027c4:
    // 0x1027c4: 0xc0887b4  jal         func_221ED0
label_1027c8:
    if (ctx->pc == 0x1027C8u) {
        ctx->pc = 0x1027CCu;
        goto label_1027cc;
    }
    ctx->pc = 0x1027C4u;
    SET_GPR_U32(ctx, 31, 0x1027CCu);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x1027C4u, 0x1027CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1027CCu;
label_1027cc:
    // 0x1027cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1027ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1027d0:
    // 0x1027d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1027d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1027d4:
    // 0x1027d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1027d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1027d8:
    // 0x1027d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1027d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1027dc:
    // 0x1027dc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1027dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1027e0:
    // 0x1027e0: 0x3e00008  jr          $ra
label_1027e4:
    if (ctx->pc == 0x1027E4u) {
        ctx->pc = 0x1027E8u;
        goto label_1027e8;
    }
    ctx->pc = 0x1027E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1027E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1027E8u;
label_1027e8:
    // 0x1027e8: 0x0  nop
    ctx->pc = 0x1027e8u;
    // NOP
label_1027ec:
    // 0x1027ec: 0x0  nop
    ctx->pc = 0x1027ecu;
    // NOP
    ctx->pc = 0x1027f0u;
}
