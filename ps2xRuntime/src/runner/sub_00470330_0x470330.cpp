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

// Function: sub_00470330
// Address: 0x470330 - 0x4705f0
void sub_00470330_0x470330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00470330_0x470330");
#endif

    switch (ctx->pc) {
        case 0x470330u: goto label_470330;
        case 0x470334u: goto label_470334;
        case 0x470338u: goto label_470338;
        case 0x47033cu: goto label_47033c;
        case 0x470340u: goto label_470340;
        case 0x470344u: goto label_470344;
        case 0x470348u: goto label_470348;
        case 0x47034cu: goto label_47034c;
        case 0x470350u: goto label_470350;
        case 0x470354u: goto label_470354;
        case 0x470358u: goto label_470358;
        case 0x47035cu: goto label_47035c;
        case 0x470360u: goto label_470360;
        case 0x470364u: goto label_470364;
        case 0x470368u: goto label_470368;
        case 0x47036cu: goto label_47036c;
        case 0x470370u: goto label_470370;
        case 0x470374u: goto label_470374;
        case 0x470378u: goto label_470378;
        case 0x47037cu: goto label_47037c;
        case 0x470380u: goto label_470380;
        case 0x470384u: goto label_470384;
        case 0x470388u: goto label_470388;
        case 0x47038cu: goto label_47038c;
        case 0x470390u: goto label_470390;
        case 0x470394u: goto label_470394;
        case 0x470398u: goto label_470398;
        case 0x47039cu: goto label_47039c;
        case 0x4703a0u: goto label_4703a0;
        case 0x4703a4u: goto label_4703a4;
        case 0x4703a8u: goto label_4703a8;
        case 0x4703acu: goto label_4703ac;
        case 0x4703b0u: goto label_4703b0;
        case 0x4703b4u: goto label_4703b4;
        case 0x4703b8u: goto label_4703b8;
        case 0x4703bcu: goto label_4703bc;
        case 0x4703c0u: goto label_4703c0;
        case 0x4703c4u: goto label_4703c4;
        case 0x4703c8u: goto label_4703c8;
        case 0x4703ccu: goto label_4703cc;
        case 0x4703d0u: goto label_4703d0;
        case 0x4703d4u: goto label_4703d4;
        case 0x4703d8u: goto label_4703d8;
        case 0x4703dcu: goto label_4703dc;
        case 0x4703e0u: goto label_4703e0;
        case 0x4703e4u: goto label_4703e4;
        case 0x4703e8u: goto label_4703e8;
        case 0x4703ecu: goto label_4703ec;
        case 0x4703f0u: goto label_4703f0;
        case 0x4703f4u: goto label_4703f4;
        case 0x4703f8u: goto label_4703f8;
        case 0x4703fcu: goto label_4703fc;
        case 0x470400u: goto label_470400;
        case 0x470404u: goto label_470404;
        case 0x470408u: goto label_470408;
        case 0x47040cu: goto label_47040c;
        case 0x470410u: goto label_470410;
        case 0x470414u: goto label_470414;
        case 0x470418u: goto label_470418;
        case 0x47041cu: goto label_47041c;
        case 0x470420u: goto label_470420;
        case 0x470424u: goto label_470424;
        case 0x470428u: goto label_470428;
        case 0x47042cu: goto label_47042c;
        case 0x470430u: goto label_470430;
        case 0x470434u: goto label_470434;
        case 0x470438u: goto label_470438;
        case 0x47043cu: goto label_47043c;
        case 0x470440u: goto label_470440;
        case 0x470444u: goto label_470444;
        case 0x470448u: goto label_470448;
        case 0x47044cu: goto label_47044c;
        case 0x470450u: goto label_470450;
        case 0x470454u: goto label_470454;
        case 0x470458u: goto label_470458;
        case 0x47045cu: goto label_47045c;
        case 0x470460u: goto label_470460;
        case 0x470464u: goto label_470464;
        case 0x470468u: goto label_470468;
        case 0x47046cu: goto label_47046c;
        case 0x470470u: goto label_470470;
        case 0x470474u: goto label_470474;
        case 0x470478u: goto label_470478;
        case 0x47047cu: goto label_47047c;
        case 0x470480u: goto label_470480;
        case 0x470484u: goto label_470484;
        case 0x470488u: goto label_470488;
        case 0x47048cu: goto label_47048c;
        case 0x470490u: goto label_470490;
        case 0x470494u: goto label_470494;
        case 0x470498u: goto label_470498;
        case 0x47049cu: goto label_47049c;
        case 0x4704a0u: goto label_4704a0;
        case 0x4704a4u: goto label_4704a4;
        case 0x4704a8u: goto label_4704a8;
        case 0x4704acu: goto label_4704ac;
        case 0x4704b0u: goto label_4704b0;
        case 0x4704b4u: goto label_4704b4;
        case 0x4704b8u: goto label_4704b8;
        case 0x4704bcu: goto label_4704bc;
        case 0x4704c0u: goto label_4704c0;
        case 0x4704c4u: goto label_4704c4;
        case 0x4704c8u: goto label_4704c8;
        case 0x4704ccu: goto label_4704cc;
        case 0x4704d0u: goto label_4704d0;
        case 0x4704d4u: goto label_4704d4;
        case 0x4704d8u: goto label_4704d8;
        case 0x4704dcu: goto label_4704dc;
        case 0x4704e0u: goto label_4704e0;
        case 0x4704e4u: goto label_4704e4;
        case 0x4704e8u: goto label_4704e8;
        case 0x4704ecu: goto label_4704ec;
        case 0x4704f0u: goto label_4704f0;
        case 0x4704f4u: goto label_4704f4;
        case 0x4704f8u: goto label_4704f8;
        case 0x4704fcu: goto label_4704fc;
        case 0x470500u: goto label_470500;
        case 0x470504u: goto label_470504;
        case 0x470508u: goto label_470508;
        case 0x47050cu: goto label_47050c;
        case 0x470510u: goto label_470510;
        case 0x470514u: goto label_470514;
        case 0x470518u: goto label_470518;
        case 0x47051cu: goto label_47051c;
        case 0x470520u: goto label_470520;
        case 0x470524u: goto label_470524;
        case 0x470528u: goto label_470528;
        case 0x47052cu: goto label_47052c;
        case 0x470530u: goto label_470530;
        case 0x470534u: goto label_470534;
        case 0x470538u: goto label_470538;
        case 0x47053cu: goto label_47053c;
        case 0x470540u: goto label_470540;
        case 0x470544u: goto label_470544;
        case 0x470548u: goto label_470548;
        case 0x47054cu: goto label_47054c;
        case 0x470550u: goto label_470550;
        case 0x470554u: goto label_470554;
        case 0x470558u: goto label_470558;
        case 0x47055cu: goto label_47055c;
        case 0x470560u: goto label_470560;
        case 0x470564u: goto label_470564;
        case 0x470568u: goto label_470568;
        case 0x47056cu: goto label_47056c;
        case 0x470570u: goto label_470570;
        case 0x470574u: goto label_470574;
        case 0x470578u: goto label_470578;
        case 0x47057cu: goto label_47057c;
        case 0x470580u: goto label_470580;
        case 0x470584u: goto label_470584;
        case 0x470588u: goto label_470588;
        case 0x47058cu: goto label_47058c;
        case 0x470590u: goto label_470590;
        case 0x470594u: goto label_470594;
        case 0x470598u: goto label_470598;
        case 0x47059cu: goto label_47059c;
        case 0x4705a0u: goto label_4705a0;
        case 0x4705a4u: goto label_4705a4;
        case 0x4705a8u: goto label_4705a8;
        case 0x4705acu: goto label_4705ac;
        case 0x4705b0u: goto label_4705b0;
        case 0x4705b4u: goto label_4705b4;
        case 0x4705b8u: goto label_4705b8;
        case 0x4705bcu: goto label_4705bc;
        case 0x4705c0u: goto label_4705c0;
        case 0x4705c4u: goto label_4705c4;
        case 0x4705c8u: goto label_4705c8;
        case 0x4705ccu: goto label_4705cc;
        case 0x4705d0u: goto label_4705d0;
        case 0x4705d4u: goto label_4705d4;
        case 0x4705d8u: goto label_4705d8;
        case 0x4705dcu: goto label_4705dc;
        case 0x4705e0u: goto label_4705e0;
        case 0x4705e4u: goto label_4705e4;
        case 0x4705e8u: goto label_4705e8;
        case 0x4705ecu: goto label_4705ec;
        default: break;
    }

    ctx->pc = 0x470330u;

label_470330:
    // 0x470330: 0x27bdfc30  addiu       $sp, $sp, -0x3D0
    ctx->pc = 0x470330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966320));
label_470334:
    // 0x470334: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x470334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_470338:
    // 0x470338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x470338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47033c:
    // 0x47033c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47033cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_470340:
    // 0x470340: 0xafa403c0  sw          $a0, 0x3C0($sp)
    ctx->pc = 0x470340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 960), GPR_U32(ctx, 4));
label_470344:
    // 0x470344: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x470344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_470348:
    // 0x470348: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x470348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47034c:
    // 0x47034c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47034cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_470350:
    // 0x470350: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_470354:
    if (ctx->pc == 0x470354u) {
        ctx->pc = 0x470358u;
        goto label_470358;
    }
    ctx->pc = 0x470350u;
    {
        const bool branch_taken_0x470350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x470350) {
            ctx->pc = 0x470400u;
            goto label_470400;
        }
    }
    ctx->pc = 0x470358u;
label_470358:
    // 0x470358: 0x8f82b340  lw          $v0, -0x4CC0($gp)
    ctx->pc = 0x470358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947648)));
label_47035c:
    // 0x47035c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_470360:
    if (ctx->pc == 0x470360u) {
        ctx->pc = 0x470364u;
        goto label_470364;
    }
    ctx->pc = 0x47035Cu;
    {
        const bool branch_taken_0x47035c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47035c) {
            ctx->pc = 0x470400u;
            goto label_470400;
        }
    }
    ctx->pc = 0x470364u;
label_470364:
    // 0x470364: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x470364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_470368:
    // 0x470368: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x470368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47036c:
    // 0x47036c: 0x27a603b0  addiu       $a2, $sp, 0x3B0
    ctx->pc = 0x47036cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_470370:
    // 0x470370: 0xc115ee8  jal         func_457BA0
label_470374:
    if (ctx->pc == 0x470374u) {
        ctx->pc = 0x470378u;
        goto label_470378;
    }
    ctx->pc = 0x470370u;
    SET_GPR_U32(ctx, 31, 0x470378u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x470370u, 0x470378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470378u;
label_470378:
    // 0x470378: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_47037c:
    if (ctx->pc == 0x47037Cu) {
        ctx->pc = 0x470380u;
        goto label_470380;
    }
    ctx->pc = 0x470378u;
    {
        const bool branch_taken_0x470378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470378) {
            ctx->pc = 0x470400u;
            goto label_470400;
        }
    }
    ctx->pc = 0x470380u;
label_470380:
    // 0x470380: 0x8fa203b8  lw          $v0, 0x3B8($sp)
    ctx->pc = 0x470380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 952)));
label_470384:
    // 0x470384: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_470388:
    if (ctx->pc == 0x470388u) {
        ctx->pc = 0x47038Cu;
        goto label_47038c;
    }
    ctx->pc = 0x470384u;
    {
        const bool branch_taken_0x470384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470384) {
            ctx->pc = 0x470400u;
            goto label_470400;
        }
    }
    ctx->pc = 0x47038Cu;
label_47038c:
    // 0x47038c: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x47038cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_470390:
    // 0x470390: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x470390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_470394:
    // 0x470394: 0x8fa603b4  lw          $a2, 0x3B4($sp)
    ctx->pc = 0x470394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 948)));
label_470398:
    // 0x470398: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x470398u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47039c:
    // 0x47039c: 0x24e7fe30  addiu       $a3, $a3, -0x1D0
    ctx->pc = 0x47039cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966832));
label_4703a0:
    // 0x4703a0: 0x24080077  addiu       $t0, $zero, 0x77
    ctx->pc = 0x4703a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_4703a4:
    // 0x4703a4: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4703a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4703a8:
    // 0x4703a8: 0x2529fea0  addiu       $t1, $t1, -0x160
    ctx->pc = 0x4703a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966944));
label_4703ac:
    // 0x4703ac: 0xc113940  jal         func_44E500
label_4703b0:
    if (ctx->pc == 0x4703B0u) {
        ctx->pc = 0x4703B4u;
        goto label_4703b4;
    }
    ctx->pc = 0x4703ACu;
    SET_GPR_U32(ctx, 31, 0x4703B4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4703ACu, 0x4703B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4703B4u;
label_4703b4:
    // 0x4703b4: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x4703b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_4703b8:
    // 0x4703b8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4703b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4703bc:
    // 0x4703bc: 0x24a5fec0  addiu       $a1, $a1, -0x140
    ctx->pc = 0x4703bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966976));
label_4703c0:
    // 0x4703c0: 0xc115c24  jal         func_457090
label_4703c4:
    if (ctx->pc == 0x4703C4u) {
        ctx->pc = 0x4703C8u;
        goto label_4703c8;
    }
    ctx->pc = 0x4703C0u;
    SET_GPR_U32(ctx, 31, 0x4703C8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4703C0u, 0x4703C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4703C8u;
label_4703c8:
    // 0x4703c8: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x4703c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_4703cc:
    // 0x4703cc: 0x8fa203b8  lw          $v0, 0x3B8($sp)
    ctx->pc = 0x4703ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 952)));
label_4703d0:
    // 0x4703d0: 0x40f809  jalr        $v0
label_4703d4:
    if (ctx->pc == 0x4703D4u) {
        ctx->pc = 0x4703D8u;
        goto label_4703d8;
    }
    ctx->pc = 0x4703D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4703D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4703D0u, 0x4703D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4703D8u;
label_4703d8:
    // 0x4703d8: 0xaf82b340  sw          $v0, -0x4CC0($gp)
    ctx->pc = 0x4703d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947648), GPR_U32(ctx, 2));
label_4703dc:
    // 0x4703dc: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x4703dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_4703e0:
    // 0x4703e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4703e4:
    if (ctx->pc == 0x4703E4u) {
        ctx->pc = 0x4703E8u;
        goto label_4703e8;
    }
    ctx->pc = 0x4703E0u;
    {
        const bool branch_taken_0x4703e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4703e0) {
            ctx->pc = 0x4703F0u;
            goto label_4703f0;
        }
    }
    ctx->pc = 0x4703E8u;
label_4703e8:
    // 0x4703e8: 0xd  break       0
    ctx->pc = 0x4703e8u;
    runtime->handleBreak(rdram, ctx);
label_4703ec:
    // 0x4703ec: 0x0  nop
    ctx->pc = 0x4703ecu;
    // NOP
label_4703f0:
    // 0x4703f0: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x4703f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_4703f4:
    // 0x4703f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4703f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4703f8:
    // 0x4703f8: 0xc11392c  jal         func_44E4B0
label_4703fc:
    if (ctx->pc == 0x4703FCu) {
        ctx->pc = 0x470400u;
        goto label_470400;
    }
    ctx->pc = 0x4703F8u;
    SET_GPR_U32(ctx, 31, 0x470400u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4703F8u, 0x470400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470400u;
label_470400:
    // 0x470400: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x470400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_470404:
    // 0x470404: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_470408:
    if (ctx->pc == 0x470408u) {
        ctx->pc = 0x47040Cu;
        goto label_47040c;
    }
    ctx->pc = 0x470404u;
    {
        const bool branch_taken_0x470404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x470404) {
            ctx->pc = 0x470418u;
            goto label_470418;
        }
    }
    ctx->pc = 0x47040Cu;
label_47040c:
    // 0x47040c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x47040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_470410:
    // 0x470410: 0x10000070  b           . + 4 + (0x70 << 2)
label_470414:
    if (ctx->pc == 0x470414u) {
        ctx->pc = 0x470418u;
        goto label_470418;
    }
    ctx->pc = 0x470410u;
    {
        const bool branch_taken_0x470410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x470410) {
            ctx->pc = 0x4705D4u;
            goto label_4705d4;
        }
    }
    ctx->pc = 0x470418u;
label_470418:
    // 0x470418: 0xc105eea  jal         func_417BA8
label_47041c:
    if (ctx->pc == 0x47041Cu) {
        ctx->pc = 0x470420u;
        goto label_470420;
    }
    ctx->pc = 0x470418u;
    SET_GPR_U32(ctx, 31, 0x470420u);
    ctx->pc = 0x417BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417BA8u, 0x470418u, 0x470420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470420u;
label_470420:
    // 0x470420: 0xaf82c050  sw          $v0, -0x3FB0($gp)
    ctx->pc = 0x470420u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950992), GPR_U32(ctx, 2));
label_470424:
    // 0x470424: 0x8f82c050  lw          $v0, -0x3FB0($gp)
    ctx->pc = 0x470424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950992)));
label_470428:
    // 0x470428: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x470428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47042c:
    // 0x47042c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47042cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_470430:
    // 0x470430: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_470434:
    if (ctx->pc == 0x470434u) {
        ctx->pc = 0x470438u;
        goto label_470438;
    }
    ctx->pc = 0x470430u;
    {
        const bool branch_taken_0x470430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x470430) {
            ctx->pc = 0x4704E0u;
            goto label_4704e0;
        }
    }
    ctx->pc = 0x470438u;
label_470438:
    // 0x470438: 0x8f82b344  lw          $v0, -0x4CBC($gp)
    ctx->pc = 0x470438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947652)));
label_47043c:
    // 0x47043c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_470440:
    if (ctx->pc == 0x470440u) {
        ctx->pc = 0x470444u;
        goto label_470444;
    }
    ctx->pc = 0x47043Cu;
    {
        const bool branch_taken_0x47043c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47043c) {
            ctx->pc = 0x4704E0u;
            goto label_4704e0;
        }
    }
    ctx->pc = 0x470444u;
label_470444:
    // 0x470444: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x470444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_470448:
    // 0x470448: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x470448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47044c:
    // 0x47044c: 0x27a603a0  addiu       $a2, $sp, 0x3A0
    ctx->pc = 0x47044cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_470450:
    // 0x470450: 0xc115ee8  jal         func_457BA0
label_470454:
    if (ctx->pc == 0x470454u) {
        ctx->pc = 0x470458u;
        goto label_470458;
    }
    ctx->pc = 0x470450u;
    SET_GPR_U32(ctx, 31, 0x470458u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x470450u, 0x470458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470458u;
label_470458:
    // 0x470458: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_47045c:
    if (ctx->pc == 0x47045Cu) {
        ctx->pc = 0x470460u;
        goto label_470460;
    }
    ctx->pc = 0x470458u;
    {
        const bool branch_taken_0x470458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470458) {
            ctx->pc = 0x4704E0u;
            goto label_4704e0;
        }
    }
    ctx->pc = 0x470460u;
label_470460:
    // 0x470460: 0x8fa203a8  lw          $v0, 0x3A8($sp)
    ctx->pc = 0x470460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_470464:
    // 0x470464: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_470468:
    if (ctx->pc == 0x470468u) {
        ctx->pc = 0x47046Cu;
        goto label_47046c;
    }
    ctx->pc = 0x470464u;
    {
        const bool branch_taken_0x470464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470464) {
            ctx->pc = 0x4704E0u;
            goto label_4704e0;
        }
    }
    ctx->pc = 0x47046Cu;
label_47046c:
    // 0x47046c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x47046cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_470470:
    // 0x470470: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x470470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_470474:
    // 0x470474: 0x8fa603a4  lw          $a2, 0x3A4($sp)
    ctx->pc = 0x470474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 932)));
label_470478:
    // 0x470478: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x470478u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47047c:
    // 0x47047c: 0x24e7fe30  addiu       $a3, $a3, -0x1D0
    ctx->pc = 0x47047cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966832));
label_470480:
    // 0x470480: 0x2408007f  addiu       $t0, $zero, 0x7F
    ctx->pc = 0x470480u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_470484:
    // 0x470484: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x470484u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_470488:
    // 0x470488: 0x2529fef0  addiu       $t1, $t1, -0x110
    ctx->pc = 0x470488u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967024));
label_47048c:
    // 0x47048c: 0xc113940  jal         func_44E500
label_470490:
    if (ctx->pc == 0x470490u) {
        ctx->pc = 0x470494u;
        goto label_470494;
    }
    ctx->pc = 0x47048Cu;
    SET_GPR_U32(ctx, 31, 0x470494u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47048Cu, 0x470494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470494u;
label_470494:
    // 0x470494: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x470494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_470498:
    // 0x470498: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x470498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47049c:
    // 0x47049c: 0x24a5ff10  addiu       $a1, $a1, -0xF0
    ctx->pc = 0x47049cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967056));
label_4704a0:
    // 0x4704a0: 0xc115c24  jal         func_457090
label_4704a4:
    if (ctx->pc == 0x4704A4u) {
        ctx->pc = 0x4704A8u;
        goto label_4704a8;
    }
    ctx->pc = 0x4704A0u;
    SET_GPR_U32(ctx, 31, 0x4704A8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4704A0u, 0x4704A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4704A8u;
label_4704a8:
    // 0x4704a8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x4704a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4704ac:
    // 0x4704ac: 0x8fa203a8  lw          $v0, 0x3A8($sp)
    ctx->pc = 0x4704acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_4704b0:
    // 0x4704b0: 0x40f809  jalr        $v0
label_4704b4:
    if (ctx->pc == 0x4704B4u) {
        ctx->pc = 0x4704B8u;
        goto label_4704b8;
    }
    ctx->pc = 0x4704B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4704B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4704B0u, 0x4704B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4704B8u;
label_4704b8:
    // 0x4704b8: 0xaf82b344  sw          $v0, -0x4CBC($gp)
    ctx->pc = 0x4704b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947652), GPR_U32(ctx, 2));
label_4704bc:
    // 0x4704bc: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x4704bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_4704c0:
    // 0x4704c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4704c4:
    if (ctx->pc == 0x4704C4u) {
        ctx->pc = 0x4704C8u;
        goto label_4704c8;
    }
    ctx->pc = 0x4704C0u;
    {
        const bool branch_taken_0x4704c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4704c0) {
            ctx->pc = 0x4704D0u;
            goto label_4704d0;
        }
    }
    ctx->pc = 0x4704C8u;
label_4704c8:
    // 0x4704c8: 0xd  break       0
    ctx->pc = 0x4704c8u;
    runtime->handleBreak(rdram, ctx);
label_4704cc:
    // 0x4704cc: 0x0  nop
    ctx->pc = 0x4704ccu;
    // NOP
label_4704d0:
    // 0x4704d0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x4704d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4704d4:
    // 0x4704d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4704d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4704d8:
    // 0x4704d8: 0xc11392c  jal         func_44E4B0
label_4704dc:
    if (ctx->pc == 0x4704DCu) {
        ctx->pc = 0x4704E0u;
        goto label_4704e0;
    }
    ctx->pc = 0x4704D8u;
    SET_GPR_U32(ctx, 31, 0x4704E0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4704D8u, 0x4704E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4704E0u;
label_4704e0:
    // 0x4704e0: 0xc1067b0  jal         func_419EC0
label_4704e4:
    if (ctx->pc == 0x4704E4u) {
        ctx->pc = 0x4704E8u;
        goto label_4704e8;
    }
    ctx->pc = 0x4704E0u;
    SET_GPR_U32(ctx, 31, 0x4704E8u);
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x4704E0u, 0x4704E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4704E8u;
label_4704e8:
    // 0x4704e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4704e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4704ec:
    // 0x4704ec: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x4704ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4704f0:
    // 0x4704f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4704f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4704f4:
    // 0x4704f4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4704f8:
    if (ctx->pc == 0x4704F8u) {
        ctx->pc = 0x4704FCu;
        goto label_4704fc;
    }
    ctx->pc = 0x4704F4u;
    {
        const bool branch_taken_0x4704f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4704f4) {
            ctx->pc = 0x4705A4u;
            goto label_4705a4;
        }
    }
    ctx->pc = 0x4704FCu;
label_4704fc:
    // 0x4704fc: 0x8f82b348  lw          $v0, -0x4CB8($gp)
    ctx->pc = 0x4704fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947656)));
label_470500:
    // 0x470500: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_470504:
    if (ctx->pc == 0x470504u) {
        ctx->pc = 0x470508u;
        goto label_470508;
    }
    ctx->pc = 0x470500u;
    {
        const bool branch_taken_0x470500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470500) {
            ctx->pc = 0x4705A4u;
            goto label_4705a4;
        }
    }
    ctx->pc = 0x470508u;
label_470508:
    // 0x470508: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x470508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47050c:
    // 0x47050c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47050cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_470510:
    // 0x470510: 0x27a60390  addiu       $a2, $sp, 0x390
    ctx->pc = 0x470510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_470514:
    // 0x470514: 0xc115ee8  jal         func_457BA0
label_470518:
    if (ctx->pc == 0x470518u) {
        ctx->pc = 0x47051Cu;
        goto label_47051c;
    }
    ctx->pc = 0x470514u;
    SET_GPR_U32(ctx, 31, 0x47051Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x470514u, 0x47051Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47051Cu;
label_47051c:
    // 0x47051c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_470520:
    if (ctx->pc == 0x470520u) {
        ctx->pc = 0x470524u;
        goto label_470524;
    }
    ctx->pc = 0x47051Cu;
    {
        const bool branch_taken_0x47051c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47051c) {
            ctx->pc = 0x4705A4u;
            goto label_4705a4;
        }
    }
    ctx->pc = 0x470524u;
label_470524:
    // 0x470524: 0x8fa20398  lw          $v0, 0x398($sp)
    ctx->pc = 0x470524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
label_470528:
    // 0x470528: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_47052c:
    if (ctx->pc == 0x47052Cu) {
        ctx->pc = 0x470530u;
        goto label_470530;
    }
    ctx->pc = 0x470528u;
    {
        const bool branch_taken_0x470528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470528) {
            ctx->pc = 0x4705A4u;
            goto label_4705a4;
        }
    }
    ctx->pc = 0x470530u;
label_470530:
    // 0x470530: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x470530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_470534:
    // 0x470534: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x470534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_470538:
    // 0x470538: 0x8fa60394  lw          $a2, 0x394($sp)
    ctx->pc = 0x470538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 916)));
label_47053c:
    // 0x47053c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47053cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_470540:
    // 0x470540: 0x24e7fe30  addiu       $a3, $a3, -0x1D0
    ctx->pc = 0x470540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966832));
label_470544:
    // 0x470544: 0x24080082  addiu       $t0, $zero, 0x82
    ctx->pc = 0x470544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_470548:
    // 0x470548: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x470548u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47054c:
    // 0x47054c: 0x2529ff40  addiu       $t1, $t1, -0xC0
    ctx->pc = 0x47054cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967104));
label_470550:
    // 0x470550: 0xc113940  jal         func_44E500
label_470554:
    if (ctx->pc == 0x470554u) {
        ctx->pc = 0x470558u;
        goto label_470558;
    }
    ctx->pc = 0x470550u;
    SET_GPR_U32(ctx, 31, 0x470558u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x470550u, 0x470558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470558u;
label_470558:
    // 0x470558: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x470558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_47055c:
    // 0x47055c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47055cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_470560:
    // 0x470560: 0x24a5ff50  addiu       $a1, $a1, -0xB0
    ctx->pc = 0x470560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967120));
label_470564:
    // 0x470564: 0xc115c24  jal         func_457090
label_470568:
    if (ctx->pc == 0x470568u) {
        ctx->pc = 0x47056Cu;
        goto label_47056c;
    }
    ctx->pc = 0x470564u;
    SET_GPR_U32(ctx, 31, 0x47056Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x470564u, 0x47056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47056Cu;
label_47056c:
    // 0x47056c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x47056cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_470570:
    // 0x470570: 0x8fa20398  lw          $v0, 0x398($sp)
    ctx->pc = 0x470570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
label_470574:
    // 0x470574: 0x40f809  jalr        $v0
label_470578:
    if (ctx->pc == 0x470578u) {
        ctx->pc = 0x47057Cu;
        goto label_47057c;
    }
    ctx->pc = 0x470574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47057Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470574u, 0x47057Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47057Cu;
label_47057c:
    // 0x47057c: 0xaf82b348  sw          $v0, -0x4CB8($gp)
    ctx->pc = 0x47057cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947656), GPR_U32(ctx, 2));
label_470580:
    // 0x470580: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x470580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_470584:
    // 0x470584: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_470588:
    if (ctx->pc == 0x470588u) {
        ctx->pc = 0x47058Cu;
        goto label_47058c;
    }
    ctx->pc = 0x470584u;
    {
        const bool branch_taken_0x470584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470584) {
            ctx->pc = 0x470594u;
            goto label_470594;
        }
    }
    ctx->pc = 0x47058Cu;
label_47058c:
    // 0x47058c: 0xd  break       0
    ctx->pc = 0x47058cu;
    runtime->handleBreak(rdram, ctx);
label_470590:
    // 0x470590: 0x0  nop
    ctx->pc = 0x470590u;
    // NOP
label_470594:
    // 0x470594: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x470594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_470598:
    // 0x470598: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x470598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47059c:
    // 0x47059c: 0xc11392c  jal         func_44E4B0
label_4705a0:
    if (ctx->pc == 0x4705A0u) {
        ctx->pc = 0x4705A4u;
        goto label_4705a4;
    }
    ctx->pc = 0x47059Cu;
    SET_GPR_U32(ctx, 31, 0x4705A4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47059Cu, 0x4705A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4705A4u;
label_4705a4:
    // 0x4705a4: 0x8f84c050  lw          $a0, -0x3FB0($gp)
    ctx->pc = 0x4705a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950992)));
label_4705a8:
    // 0x4705a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4705a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4705ac:
    // 0x4705ac: 0xc1083aa  jal         func_420EA8
label_4705b0:
    if (ctx->pc == 0x4705B0u) {
        ctx->pc = 0x4705B4u;
        goto label_4705b4;
    }
    ctx->pc = 0x4705ACu;
    SET_GPR_U32(ctx, 31, 0x4705B4u);
    ctx->pc = 0x420EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420EA8u, 0x4705ACu, 0x4705B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4705B4u;
label_4705b4:
    // 0x4705b4: 0x2791c050  addiu       $s1, $gp, -0x3FB0
    ctx->pc = 0x4705b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950992));
label_4705b8:
    // 0x4705b8: 0x8fa403c0  lw          $a0, 0x3C0($sp)
    ctx->pc = 0x4705b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_4705bc:
    // 0x4705bc: 0xc11c17c  jal         func_4705F0
label_4705c0:
    if (ctx->pc == 0x4705C0u) {
        ctx->pc = 0x4705C4u;
        goto label_4705c4;
    }
    ctx->pc = 0x4705BCu;
    SET_GPR_U32(ctx, 31, 0x4705C4u);
    ctx->pc = 0x4705F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4705F0u, 0x4705BCu, 0x4705C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4705C4u;
label_4705c4:
    // 0x4705c4: 0xaf80c04c  sw          $zero, -0x3FB4($gp)
    ctx->pc = 0x4705c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950988), GPR_U32(ctx, 0));
label_4705c8:
    // 0x4705c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4705c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4705cc:
    // 0x4705cc: 0xaf82c048  sw          $v0, -0x3FB8($gp)
    ctx->pc = 0x4705ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950984), GPR_U32(ctx, 2));
label_4705d0:
    // 0x4705d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4705d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4705d4:
    // 0x4705d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4705d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4705d8:
    // 0x4705d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4705d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4705dc:
    // 0x4705dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4705dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4705e0:
    // 0x4705e0: 0x27bd03d0  addiu       $sp, $sp, 0x3D0
    ctx->pc = 0x4705e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_4705e4:
    // 0x4705e4: 0x3e00008  jr          $ra
label_4705e8:
    if (ctx->pc == 0x4705E8u) {
        ctx->pc = 0x4705ECu;
        goto label_4705ec;
    }
    ctx->pc = 0x4705E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4705E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4705ECu;
label_4705ec:
    // 0x4705ec: 0x0  nop
    ctx->pc = 0x4705ecu;
    // NOP
    ctx->pc = 0x4705f0u;
}
