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

// Function: sub_004606B0
// Address: 0x4606b0 - 0x460830
void sub_004606B0_0x4606b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004606B0_0x4606b0");
#endif

    switch (ctx->pc) {
        case 0x4606b0u: goto label_4606b0;
        case 0x4606b4u: goto label_4606b4;
        case 0x4606b8u: goto label_4606b8;
        case 0x4606bcu: goto label_4606bc;
        case 0x4606c0u: goto label_4606c0;
        case 0x4606c4u: goto label_4606c4;
        case 0x4606c8u: goto label_4606c8;
        case 0x4606ccu: goto label_4606cc;
        case 0x4606d0u: goto label_4606d0;
        case 0x4606d4u: goto label_4606d4;
        case 0x4606d8u: goto label_4606d8;
        case 0x4606dcu: goto label_4606dc;
        case 0x4606e0u: goto label_4606e0;
        case 0x4606e4u: goto label_4606e4;
        case 0x4606e8u: goto label_4606e8;
        case 0x4606ecu: goto label_4606ec;
        case 0x4606f0u: goto label_4606f0;
        case 0x4606f4u: goto label_4606f4;
        case 0x4606f8u: goto label_4606f8;
        case 0x4606fcu: goto label_4606fc;
        case 0x460700u: goto label_460700;
        case 0x460704u: goto label_460704;
        case 0x460708u: goto label_460708;
        case 0x46070cu: goto label_46070c;
        case 0x460710u: goto label_460710;
        case 0x460714u: goto label_460714;
        case 0x460718u: goto label_460718;
        case 0x46071cu: goto label_46071c;
        case 0x460720u: goto label_460720;
        case 0x460724u: goto label_460724;
        case 0x460728u: goto label_460728;
        case 0x46072cu: goto label_46072c;
        case 0x460730u: goto label_460730;
        case 0x460734u: goto label_460734;
        case 0x460738u: goto label_460738;
        case 0x46073cu: goto label_46073c;
        case 0x460740u: goto label_460740;
        case 0x460744u: goto label_460744;
        case 0x460748u: goto label_460748;
        case 0x46074cu: goto label_46074c;
        case 0x460750u: goto label_460750;
        case 0x460754u: goto label_460754;
        case 0x460758u: goto label_460758;
        case 0x46075cu: goto label_46075c;
        case 0x460760u: goto label_460760;
        case 0x460764u: goto label_460764;
        case 0x460768u: goto label_460768;
        case 0x46076cu: goto label_46076c;
        case 0x460770u: goto label_460770;
        case 0x460774u: goto label_460774;
        case 0x460778u: goto label_460778;
        case 0x46077cu: goto label_46077c;
        case 0x460780u: goto label_460780;
        case 0x460784u: goto label_460784;
        case 0x460788u: goto label_460788;
        case 0x46078cu: goto label_46078c;
        case 0x460790u: goto label_460790;
        case 0x460794u: goto label_460794;
        case 0x460798u: goto label_460798;
        case 0x46079cu: goto label_46079c;
        case 0x4607a0u: goto label_4607a0;
        case 0x4607a4u: goto label_4607a4;
        case 0x4607a8u: goto label_4607a8;
        case 0x4607acu: goto label_4607ac;
        case 0x4607b0u: goto label_4607b0;
        case 0x4607b4u: goto label_4607b4;
        case 0x4607b8u: goto label_4607b8;
        case 0x4607bcu: goto label_4607bc;
        case 0x4607c0u: goto label_4607c0;
        case 0x4607c4u: goto label_4607c4;
        case 0x4607c8u: goto label_4607c8;
        case 0x4607ccu: goto label_4607cc;
        case 0x4607d0u: goto label_4607d0;
        case 0x4607d4u: goto label_4607d4;
        case 0x4607d8u: goto label_4607d8;
        case 0x4607dcu: goto label_4607dc;
        case 0x4607e0u: goto label_4607e0;
        case 0x4607e4u: goto label_4607e4;
        case 0x4607e8u: goto label_4607e8;
        case 0x4607ecu: goto label_4607ec;
        case 0x4607f0u: goto label_4607f0;
        case 0x4607f4u: goto label_4607f4;
        case 0x4607f8u: goto label_4607f8;
        case 0x4607fcu: goto label_4607fc;
        case 0x460800u: goto label_460800;
        case 0x460804u: goto label_460804;
        case 0x460808u: goto label_460808;
        case 0x46080cu: goto label_46080c;
        case 0x460810u: goto label_460810;
        case 0x460814u: goto label_460814;
        case 0x460818u: goto label_460818;
        case 0x46081cu: goto label_46081c;
        case 0x460820u: goto label_460820;
        case 0x460824u: goto label_460824;
        case 0x460828u: goto label_460828;
        case 0x46082cu: goto label_46082c;
        default: break;
    }

    ctx->pc = 0x4606b0u;

label_4606b0:
    // 0x4606b0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x4606b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_4606b4:
    // 0x4606b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4606b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4606b8:
    // 0x4606b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4606b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4606bc:
    // 0x4606bc: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x4606bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
label_4606c0:
    // 0x4606c0: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x4606c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
label_4606c4:
    // 0x4606c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4606c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4606c8:
    // 0x4606c8: 0x8f82bfa8  lw          $v0, -0x4058($gp)
    ctx->pc = 0x4606c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950824)));
label_4606cc:
    // 0x4606cc: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_4606d0:
    if (ctx->pc == 0x4606D0u) {
        ctx->pc = 0x4606D4u;
        goto label_4606d4;
    }
    ctx->pc = 0x4606CCu;
    {
        const bool branch_taken_0x4606cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4606cc) {
            ctx->pc = 0x4606ECu;
            goto label_4606ec;
        }
    }
    ctx->pc = 0x4606D4u;
label_4606d4:
    // 0x4606d4: 0x8f82bfa8  lw          $v0, -0x4058($gp)
    ctx->pc = 0x4606d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950824)));
label_4606d8:
    // 0x4606d8: 0x2841000f  slti        $at, $v0, 0xF
    ctx->pc = 0x4606d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
label_4606dc:
    // 0x4606dc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4606e0:
    if (ctx->pc == 0x4606E0u) {
        ctx->pc = 0x4606E4u;
        goto label_4606e4;
    }
    ctx->pc = 0x4606DCu;
    {
        const bool branch_taken_0x4606dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4606dc) {
            ctx->pc = 0x4606ECu;
            goto label_4606ec;
        }
    }
    ctx->pc = 0x4606E4u;
label_4606e4:
    // 0x4606e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4606e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4606e8:
    // 0x4606e8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x4606e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4606ec:
    // 0x4606ec: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x4606ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_4606f0:
    // 0x4606f0: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4606f4:
    if (ctx->pc == 0x4606F4u) {
        ctx->pc = 0x4606F8u;
        goto label_4606f8;
    }
    ctx->pc = 0x4606F0u;
    {
        const bool branch_taken_0x4606f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4606f0) {
            ctx->pc = 0x4607A0u;
            goto label_4607a0;
        }
    }
    ctx->pc = 0x4606F8u;
label_4606f8:
    // 0x4606f8: 0x8f82b1e8  lw          $v0, -0x4E18($gp)
    ctx->pc = 0x4606f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947304)));
label_4606fc:
    // 0x4606fc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_460700:
    if (ctx->pc == 0x460700u) {
        ctx->pc = 0x460704u;
        goto label_460704;
    }
    ctx->pc = 0x4606FCu;
    {
        const bool branch_taken_0x4606fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4606fc) {
            ctx->pc = 0x4607A0u;
            goto label_4607a0;
        }
    }
    ctx->pc = 0x460704u;
label_460704:
    // 0x460704: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x460704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_460708:
    // 0x460708: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x460708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46070c:
    // 0x46070c: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x46070cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_460710:
    // 0x460710: 0xc115ee8  jal         func_457BA0
label_460714:
    if (ctx->pc == 0x460714u) {
        ctx->pc = 0x460718u;
        goto label_460718;
    }
    ctx->pc = 0x460710u;
    SET_GPR_U32(ctx, 31, 0x460718u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x460710u, 0x460718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460718u;
label_460718:
    // 0x460718: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_46071c:
    if (ctx->pc == 0x46071Cu) {
        ctx->pc = 0x460720u;
        goto label_460720;
    }
    ctx->pc = 0x460718u;
    {
        const bool branch_taken_0x460718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460718) {
            ctx->pc = 0x4607A0u;
            goto label_4607a0;
        }
    }
    ctx->pc = 0x460720u;
label_460720:
    // 0x460720: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x460720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_460724:
    // 0x460724: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_460728:
    if (ctx->pc == 0x460728u) {
        ctx->pc = 0x46072Cu;
        goto label_46072c;
    }
    ctx->pc = 0x460724u;
    {
        const bool branch_taken_0x460724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460724) {
            ctx->pc = 0x4607A0u;
            goto label_4607a0;
        }
    }
    ctx->pc = 0x46072Cu;
label_46072c:
    // 0x46072c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x46072cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_460730:
    // 0x460730: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x460730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_460734:
    // 0x460734: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x460734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_460738:
    // 0x460738: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x460738u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_46073c:
    // 0x46073c: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x46073cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_460740:
    // 0x460740: 0x24080560  addiu       $t0, $zero, 0x560
    ctx->pc = 0x460740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
label_460744:
    // 0x460744: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x460744u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_460748:
    // 0x460748: 0x2529ef20  addiu       $t1, $t1, -0x10E0
    ctx->pc = 0x460748u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294962976));
label_46074c:
    // 0x46074c: 0xc113940  jal         func_44E500
label_460750:
    if (ctx->pc == 0x460750u) {
        ctx->pc = 0x460754u;
        goto label_460754;
    }
    ctx->pc = 0x46074Cu;
    SET_GPR_U32(ctx, 31, 0x460754u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x46074Cu, 0x460754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460754u;
label_460754:
    // 0x460754: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x460754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_460758:
    // 0x460758: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x460758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_46075c:
    // 0x46075c: 0x24a5ef60  addiu       $a1, $a1, -0x10A0
    ctx->pc = 0x46075cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963040));
label_460760:
    // 0x460760: 0xc115c24  jal         func_457090
label_460764:
    if (ctx->pc == 0x460764u) {
        ctx->pc = 0x460768u;
        goto label_460768;
    }
    ctx->pc = 0x460760u;
    SET_GPR_U32(ctx, 31, 0x460768u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x460760u, 0x460768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460768u;
label_460768:
    // 0x460768: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x460768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_46076c:
    // 0x46076c: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x46076cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_460770:
    // 0x460770: 0x40f809  jalr        $v0
label_460774:
    if (ctx->pc == 0x460774u) {
        ctx->pc = 0x460778u;
        goto label_460778;
    }
    ctx->pc = 0x460770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x460778u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460770u, 0x460778u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x460778u;
label_460778:
    // 0x460778: 0xaf82b1e8  sw          $v0, -0x4E18($gp)
    ctx->pc = 0x460778u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947304), GPR_U32(ctx, 2));
label_46077c:
    // 0x46077c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_460780:
    // 0x460780: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_460784:
    if (ctx->pc == 0x460784u) {
        ctx->pc = 0x460788u;
        goto label_460788;
    }
    ctx->pc = 0x460780u;
    {
        const bool branch_taken_0x460780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460780) {
            ctx->pc = 0x460790u;
            goto label_460790;
        }
    }
    ctx->pc = 0x460788u;
label_460788:
    // 0x460788: 0xd  break       0
    ctx->pc = 0x460788u;
    runtime->handleBreak(rdram, ctx);
label_46078c:
    // 0x46078c: 0x0  nop
    ctx->pc = 0x46078cu;
    // NOP
label_460790:
    // 0x460790: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x460790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_460794:
    // 0x460794: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x460794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_460798:
    // 0x460798: 0xc11392c  jal         func_44E4B0
label_46079c:
    if (ctx->pc == 0x46079Cu) {
        ctx->pc = 0x4607A0u;
        goto label_4607a0;
    }
    ctx->pc = 0x460798u;
    SET_GPR_U32(ctx, 31, 0x4607A0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x460798u, 0x4607A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4607A0u;
label_4607a0:
    // 0x4607a0: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x4607a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_4607a4:
    // 0x4607a4: 0x8f83bfa8  lw          $v1, -0x4058($gp)
    ctx->pc = 0x4607a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950824)));
label_4607a8:
    // 0x4607a8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4607a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4607ac:
    // 0x4607ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4607acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4607b0:
    // 0x4607b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4607b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4607b4:
    // 0x4607b4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4607b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4607b8:
    // 0x4607b8: 0x24424d20  addiu       $v0, $v0, 0x4D20
    ctx->pc = 0x4607b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19744));
label_4607bc:
    // 0x4607bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4607bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4607c0:
    // 0x4607c0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4607c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_4607c4:
    // 0x4607c4: 0x8f84bfb0  lw          $a0, -0x4050($gp)
    ctx->pc = 0x4607c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950832)));
label_4607c8:
    // 0x4607c8: 0x8f83bfa8  lw          $v1, -0x4058($gp)
    ctx->pc = 0x4607c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950824)));
label_4607cc:
    // 0x4607cc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4607ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4607d0:
    // 0x4607d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4607d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4607d4:
    // 0x4607d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4607d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4607d8:
    // 0x4607d8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4607d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4607dc:
    // 0x4607dc: 0x24424d20  addiu       $v0, $v0, 0x4D20
    ctx->pc = 0x4607dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19744));
label_4607e0:
    // 0x4607e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4607e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4607e4:
    // 0x4607e4: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x4607e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_4607e8:
    // 0x4607e8: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x4607e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4607ec:
    // 0x4607ec: 0x8f83bfa8  lw          $v1, -0x4058($gp)
    ctx->pc = 0x4607ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950824)));
label_4607f0:
    // 0x4607f0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4607f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4607f4:
    // 0x4607f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4607f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4607f8:
    // 0x4607f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4607f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4607fc:
    // 0x4607fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4607fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_460800:
    // 0x460800: 0x24424d20  addiu       $v0, $v0, 0x4D20
    ctx->pc = 0x460800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19744));
label_460804:
    // 0x460804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x460804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_460808:
    // 0x460808: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x460808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_46080c:
    // 0x46080c: 0xc1180fc  jal         func_4603F0
label_460810:
    if (ctx->pc == 0x460810u) {
        ctx->pc = 0x460814u;
        goto label_460814;
    }
    ctx->pc = 0x46080Cu;
    SET_GPR_U32(ctx, 31, 0x460814u);
    ctx->pc = 0x4603F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4603F0u, 0x46080Cu, 0x460814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460814u;
label_460814:
    // 0x460814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x460814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_460818:
    // 0x460818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x460818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46081c:
    // 0x46081c: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x46081cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_460820:
    // 0x460820: 0x3e00008  jr          $ra
label_460824:
    if (ctx->pc == 0x460824u) {
        ctx->pc = 0x460828u;
        goto label_460828;
    }
    ctx->pc = 0x460820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x460828u;
label_460828:
    // 0x460828: 0x0  nop
    ctx->pc = 0x460828u;
    // NOP
label_46082c:
    // 0x46082c: 0x0  nop
    ctx->pc = 0x46082cu;
    // NOP
    ctx->pc = 0x460830u;
}
