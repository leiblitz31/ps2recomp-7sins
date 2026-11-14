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

// Function: sub_00138510
// Address: 0x138510 - 0x138770
void sub_00138510_0x138510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138510_0x138510");
#endif

    switch (ctx->pc) {
        case 0x138510u: goto label_138510;
        case 0x138514u: goto label_138514;
        case 0x138518u: goto label_138518;
        case 0x13851cu: goto label_13851c;
        case 0x138520u: goto label_138520;
        case 0x138524u: goto label_138524;
        case 0x138528u: goto label_138528;
        case 0x13852cu: goto label_13852c;
        case 0x138530u: goto label_138530;
        case 0x138534u: goto label_138534;
        case 0x138538u: goto label_138538;
        case 0x13853cu: goto label_13853c;
        case 0x138540u: goto label_138540;
        case 0x138544u: goto label_138544;
        case 0x138548u: goto label_138548;
        case 0x13854cu: goto label_13854c;
        case 0x138550u: goto label_138550;
        case 0x138554u: goto label_138554;
        case 0x138558u: goto label_138558;
        case 0x13855cu: goto label_13855c;
        case 0x138560u: goto label_138560;
        case 0x138564u: goto label_138564;
        case 0x138568u: goto label_138568;
        case 0x13856cu: goto label_13856c;
        case 0x138570u: goto label_138570;
        case 0x138574u: goto label_138574;
        case 0x138578u: goto label_138578;
        case 0x13857cu: goto label_13857c;
        case 0x138580u: goto label_138580;
        case 0x138584u: goto label_138584;
        case 0x138588u: goto label_138588;
        case 0x13858cu: goto label_13858c;
        case 0x138590u: goto label_138590;
        case 0x138594u: goto label_138594;
        case 0x138598u: goto label_138598;
        case 0x13859cu: goto label_13859c;
        case 0x1385a0u: goto label_1385a0;
        case 0x1385a4u: goto label_1385a4;
        case 0x1385a8u: goto label_1385a8;
        case 0x1385acu: goto label_1385ac;
        case 0x1385b0u: goto label_1385b0;
        case 0x1385b4u: goto label_1385b4;
        case 0x1385b8u: goto label_1385b8;
        case 0x1385bcu: goto label_1385bc;
        case 0x1385c0u: goto label_1385c0;
        case 0x1385c4u: goto label_1385c4;
        case 0x1385c8u: goto label_1385c8;
        case 0x1385ccu: goto label_1385cc;
        case 0x1385d0u: goto label_1385d0;
        case 0x1385d4u: goto label_1385d4;
        case 0x1385d8u: goto label_1385d8;
        case 0x1385dcu: goto label_1385dc;
        case 0x1385e0u: goto label_1385e0;
        case 0x1385e4u: goto label_1385e4;
        case 0x1385e8u: goto label_1385e8;
        case 0x1385ecu: goto label_1385ec;
        case 0x1385f0u: goto label_1385f0;
        case 0x1385f4u: goto label_1385f4;
        case 0x1385f8u: goto label_1385f8;
        case 0x1385fcu: goto label_1385fc;
        case 0x138600u: goto label_138600;
        case 0x138604u: goto label_138604;
        case 0x138608u: goto label_138608;
        case 0x13860cu: goto label_13860c;
        case 0x138610u: goto label_138610;
        case 0x138614u: goto label_138614;
        case 0x138618u: goto label_138618;
        case 0x13861cu: goto label_13861c;
        case 0x138620u: goto label_138620;
        case 0x138624u: goto label_138624;
        case 0x138628u: goto label_138628;
        case 0x13862cu: goto label_13862c;
        case 0x138630u: goto label_138630;
        case 0x138634u: goto label_138634;
        case 0x138638u: goto label_138638;
        case 0x13863cu: goto label_13863c;
        case 0x138640u: goto label_138640;
        case 0x138644u: goto label_138644;
        case 0x138648u: goto label_138648;
        case 0x13864cu: goto label_13864c;
        case 0x138650u: goto label_138650;
        case 0x138654u: goto label_138654;
        case 0x138658u: goto label_138658;
        case 0x13865cu: goto label_13865c;
        case 0x138660u: goto label_138660;
        case 0x138664u: goto label_138664;
        case 0x138668u: goto label_138668;
        case 0x13866cu: goto label_13866c;
        case 0x138670u: goto label_138670;
        case 0x138674u: goto label_138674;
        case 0x138678u: goto label_138678;
        case 0x13867cu: goto label_13867c;
        case 0x138680u: goto label_138680;
        case 0x138684u: goto label_138684;
        case 0x138688u: goto label_138688;
        case 0x13868cu: goto label_13868c;
        case 0x138690u: goto label_138690;
        case 0x138694u: goto label_138694;
        case 0x138698u: goto label_138698;
        case 0x13869cu: goto label_13869c;
        case 0x1386a0u: goto label_1386a0;
        case 0x1386a4u: goto label_1386a4;
        case 0x1386a8u: goto label_1386a8;
        case 0x1386acu: goto label_1386ac;
        case 0x1386b0u: goto label_1386b0;
        case 0x1386b4u: goto label_1386b4;
        case 0x1386b8u: goto label_1386b8;
        case 0x1386bcu: goto label_1386bc;
        case 0x1386c0u: goto label_1386c0;
        case 0x1386c4u: goto label_1386c4;
        case 0x1386c8u: goto label_1386c8;
        case 0x1386ccu: goto label_1386cc;
        case 0x1386d0u: goto label_1386d0;
        case 0x1386d4u: goto label_1386d4;
        case 0x1386d8u: goto label_1386d8;
        case 0x1386dcu: goto label_1386dc;
        case 0x1386e0u: goto label_1386e0;
        case 0x1386e4u: goto label_1386e4;
        case 0x1386e8u: goto label_1386e8;
        case 0x1386ecu: goto label_1386ec;
        case 0x1386f0u: goto label_1386f0;
        case 0x1386f4u: goto label_1386f4;
        case 0x1386f8u: goto label_1386f8;
        case 0x1386fcu: goto label_1386fc;
        case 0x138700u: goto label_138700;
        case 0x138704u: goto label_138704;
        case 0x138708u: goto label_138708;
        case 0x13870cu: goto label_13870c;
        case 0x138710u: goto label_138710;
        case 0x138714u: goto label_138714;
        case 0x138718u: goto label_138718;
        case 0x13871cu: goto label_13871c;
        case 0x138720u: goto label_138720;
        case 0x138724u: goto label_138724;
        case 0x138728u: goto label_138728;
        case 0x13872cu: goto label_13872c;
        case 0x138730u: goto label_138730;
        case 0x138734u: goto label_138734;
        case 0x138738u: goto label_138738;
        case 0x13873cu: goto label_13873c;
        case 0x138740u: goto label_138740;
        case 0x138744u: goto label_138744;
        case 0x138748u: goto label_138748;
        case 0x13874cu: goto label_13874c;
        case 0x138750u: goto label_138750;
        case 0x138754u: goto label_138754;
        case 0x138758u: goto label_138758;
        case 0x13875cu: goto label_13875c;
        case 0x138760u: goto label_138760;
        case 0x138764u: goto label_138764;
        case 0x138768u: goto label_138768;
        case 0x13876cu: goto label_13876c;
        default: break;
    }

    ctx->pc = 0x138510u;

label_138510:
    // 0x138510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x138510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_138514:
    // 0x138514: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x138514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_138518:
    // 0x138518: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x138518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13851c:
    // 0x13851c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x13851cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_138520:
    // 0x138520: 0x3e00008  jr          $ra
label_138524:
    if (ctx->pc == 0x138524u) {
        ctx->pc = 0x138528u;
        goto label_138528;
    }
    ctx->pc = 0x138520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138528u;
label_138528:
    // 0x138528: 0x0  nop
    ctx->pc = 0x138528u;
    // NOP
label_13852c:
    // 0x13852c: 0x0  nop
    ctx->pc = 0x13852cu;
    // NOP
label_138530:
    // 0x138530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x138530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_138534:
    // 0x138534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_138538:
    // 0x138538: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x138538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_13853c:
    // 0x13853c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x13853cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_138540:
    // 0x138540: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x138540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_138544:
    // 0x138544: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_138548:
    if (ctx->pc == 0x138548u) {
        ctx->pc = 0x13854Cu;
        goto label_13854c;
    }
    ctx->pc = 0x138544u;
    {
        const bool branch_taken_0x138544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138544) {
            ctx->pc = 0x1385E8u;
            goto label_1385e8;
        }
    }
    ctx->pc = 0x13854Cu;
label_13854c:
    // 0x13854c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x13854cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_138550:
    // 0x138550: 0x24633760  addiu       $v1, $v1, 0x3760
    ctx->pc = 0x138550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14176));
label_138554:
    // 0x138554: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x138554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_138558:
    // 0x138558: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x138558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_13855c:
    // 0x13855c: 0xaf80ba74  sw          $zero, -0x458C($gp)
    ctx->pc = 0x13855cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949492), GPR_U32(ctx, 0));
label_138560:
    // 0x138560: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x138560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_138564:
    // 0x138564: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x138564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_138568:
    // 0x138568: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x138568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_13856c:
    // 0x13856c: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x13856cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
label_138570:
    // 0x138570: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x138570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_138574:
    // 0x138574: 0xc04df88  jal         func_137E20
label_138578:
    if (ctx->pc == 0x138578u) {
        ctx->pc = 0x13857Cu;
        goto label_13857c;
    }
    ctx->pc = 0x138574u;
    SET_GPR_U32(ctx, 31, 0x13857Cu);
    ctx->pc = 0x137E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137E20u, 0x138574u, 0x13857Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13857Cu;
label_13857c:
    // 0x13857c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13857cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_138580:
    // 0x138580: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x138580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_138584:
    // 0x138584: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x138584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_138588:
    // 0x138588: 0xc04df88  jal         func_137E20
label_13858c:
    if (ctx->pc == 0x13858Cu) {
        ctx->pc = 0x138590u;
        goto label_138590;
    }
    ctx->pc = 0x138588u;
    SET_GPR_U32(ctx, 31, 0x138590u);
    ctx->pc = 0x137E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137E20u, 0x138588u, 0x138590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138590u;
label_138590:
    // 0x138590: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x138590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_138594:
    // 0x138594: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x138594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_138598:
    // 0x138598: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x138598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13859c:
    // 0x13859c: 0xc04df88  jal         func_137E20
label_1385a0:
    if (ctx->pc == 0x1385A0u) {
        ctx->pc = 0x1385A4u;
        goto label_1385a4;
    }
    ctx->pc = 0x13859Cu;
    SET_GPR_U32(ctx, 31, 0x1385A4u);
    ctx->pc = 0x137E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137E20u, 0x13859Cu, 0x1385A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1385A4u;
label_1385a4:
    // 0x1385a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1385a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1385a8:
    // 0x1385a8: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1385a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1385ac:
    // 0x1385ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1385acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1385b0:
    // 0x1385b0: 0xc0402d4  jal         func_100B50
label_1385b4:
    if (ctx->pc == 0x1385B4u) {
        ctx->pc = 0x1385B8u;
        goto label_1385b8;
    }
    ctx->pc = 0x1385B0u;
    SET_GPR_U32(ctx, 31, 0x1385B8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1385B0u, 0x1385B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1385B8u;
label_1385b8:
    // 0x1385b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1385b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1385bc:
    // 0x1385bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1385bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1385c0:
    // 0x1385c0: 0xc0ad678  jal         func_2B59E0
label_1385c4:
    if (ctx->pc == 0x1385C4u) {
        ctx->pc = 0x1385C8u;
        goto label_1385c8;
    }
    ctx->pc = 0x1385C0u;
    SET_GPR_U32(ctx, 31, 0x1385C8u);
    ctx->pc = 0x2B59E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B59E0u, 0x1385C0u, 0x1385C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1385C8u;
label_1385c8:
    // 0x1385c8: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1385c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_1385cc:
    // 0x1385cc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1385ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1385d0:
    // 0x1385d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1385d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1385d4:
    // 0x1385d4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1385d8:
    if (ctx->pc == 0x1385D8u) {
        ctx->pc = 0x1385DCu;
        goto label_1385dc;
    }
    ctx->pc = 0x1385D4u;
    {
        const bool branch_taken_0x1385d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1385d4) {
            ctx->pc = 0x1385E8u;
            goto label_1385e8;
        }
    }
    ctx->pc = 0x1385DCu;
label_1385dc:
    // 0x1385dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1385dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1385e0:
    // 0x1385e0: 0xc0ba070  jal         func_2E81C0
label_1385e4:
    if (ctx->pc == 0x1385E4u) {
        ctx->pc = 0x1385E8u;
        goto label_1385e8;
    }
    ctx->pc = 0x1385E0u;
    SET_GPR_U32(ctx, 31, 0x1385E8u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1385E0u, 0x1385E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1385E8u;
label_1385e8:
    // 0x1385e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1385e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1385ec:
    // 0x1385ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1385ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1385f0:
    // 0x1385f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1385f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1385f4:
    // 0x1385f4: 0x3e00008  jr          $ra
label_1385f8:
    if (ctx->pc == 0x1385F8u) {
        ctx->pc = 0x1385FCu;
        goto label_1385fc;
    }
    ctx->pc = 0x1385F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1385F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1385FCu;
label_1385fc:
    // 0x1385fc: 0x0  nop
    ctx->pc = 0x1385fcu;
    // NOP
label_138600:
    // 0x138600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x138600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_138604:
    // 0x138604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x138604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_138608:
    // 0x138608: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x138608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13860c:
    // 0x13860c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13860cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_138610:
    // 0x138610: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x138610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_138614:
    // 0x138614: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x138614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138618:
    // 0x138618: 0x8f83ba70  lw          $v1, -0x4590($gp)
    ctx->pc = 0x138618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949488)));
label_13861c:
    // 0x13861c: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
label_138620:
    if (ctx->pc == 0x138620u) {
        ctx->pc = 0x138624u;
        goto label_138624;
    }
    ctx->pc = 0x13861Cu;
    {
        const bool branch_taken_0x13861c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13861c) {
            ctx->pc = 0x13874Cu;
            goto label_13874c;
        }
    }
    ctx->pc = 0x138624u;
label_138624:
    // 0x138624: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x138624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_138628:
    // 0x138628: 0x8042bda0  lb          $v0, -0x4260($v0)
    ctx->pc = 0x138628u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950304)));
label_13862c:
    // 0x13862c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x13862cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_138630:
    // 0x138630: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x138630u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_138634:
    // 0x138634: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_138638:
    if (ctx->pc == 0x138638u) {
        ctx->pc = 0x13863Cu;
        goto label_13863c;
    }
    ctx->pc = 0x138634u;
    {
        const bool branch_taken_0x138634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138634) {
            ctx->pc = 0x1386A0u;
            goto label_1386a0;
        }
    }
    ctx->pc = 0x13863Cu;
label_13863c:
    // 0x13863c: 0x8f82ba74  lw          $v0, -0x458C($gp)
    ctx->pc = 0x13863cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
label_138640:
    // 0x138640: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x138640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_138644:
    // 0x138644: 0xc0ac170  jal         func_2B05C0
label_138648:
    if (ctx->pc == 0x138648u) {
        ctx->pc = 0x13864Cu;
        goto label_13864c;
    }
    ctx->pc = 0x138644u;
    SET_GPR_U32(ctx, 31, 0x13864Cu);
    ctx->pc = 0x2B05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B05C0u, 0x138644u, 0x13864Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13864Cu;
label_13864c:
    // 0x13864c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_138650:
    if (ctx->pc == 0x138650u) {
        ctx->pc = 0x138654u;
        goto label_138654;
    }
    ctx->pc = 0x13864Cu;
    {
        const bool branch_taken_0x13864c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13864c) {
            ctx->pc = 0x1386A0u;
            goto label_1386a0;
        }
    }
    ctx->pc = 0x138654u;
label_138654:
    // 0x138654: 0x8f82ba74  lw          $v0, -0x458C($gp)
    ctx->pc = 0x138654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
label_138658:
    // 0x138658: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x138658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_13865c:
    // 0x13865c: 0x8c450064  lw          $a1, 0x64($v0)
    ctx->pc = 0x13865cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_138660:
    // 0x138660: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x138660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_138664:
    // 0x138664: 0xc08f71c  jal         func_23DC70
label_138668:
    if (ctx->pc == 0x138668u) {
        ctx->pc = 0x13866Cu;
        goto label_13866c;
    }
    ctx->pc = 0x138664u;
    SET_GPR_U32(ctx, 31, 0x13866Cu);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x138664u, 0x13866Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13866Cu;
label_13866c:
    // 0x13866c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13866cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_138670:
    // 0x138670: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x138670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_138674:
    // 0x138674: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x138674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_138678:
    // 0x138678: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x138678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_13867c:
    // 0x13867c: 0x24a5bda0  addiu       $a1, $a1, -0x4260
    ctx->pc = 0x13867cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950304));
label_138680:
    // 0x138680: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138684:
    // 0x138684: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x138684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_138688:
    // 0x138688: 0xc08f6a0  jal         func_23DA80
label_13868c:
    if (ctx->pc == 0x13868Cu) {
        ctx->pc = 0x138690u;
        goto label_138690;
    }
    ctx->pc = 0x138688u;
    SET_GPR_U32(ctx, 31, 0x138690u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x138688u, 0x138690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138690u;
label_138690:
    // 0x138690: 0x8f83ba74  lw          $v1, -0x458C($gp)
    ctx->pc = 0x138690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
label_138694:
    // 0x138694: 0xac620064  sw          $v0, 0x64($v1)
    ctx->pc = 0x138694u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
label_138698:
    // 0x138698: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x138698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_13869c:
    // 0x13869c: 0xa040bda0  sb          $zero, -0x4260($v0)
    ctx->pc = 0x13869cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950304), (uint8_t)GPR_U32(ctx, 0));
label_1386a0:
    // 0x1386a0: 0x8f84ba70  lw          $a0, -0x4590($gp)
    ctx->pc = 0x1386a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949488)));
label_1386a4:
    // 0x1386a4: 0xc11411c  jal         func_450470
label_1386a8:
    if (ctx->pc == 0x1386A8u) {
        ctx->pc = 0x1386ACu;
        goto label_1386ac;
    }
    ctx->pc = 0x1386A4u;
    SET_GPR_U32(ctx, 31, 0x1386ACu);
    ctx->pc = 0x450470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450470u, 0x1386A4u, 0x1386ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1386ACu;
label_1386ac:
    // 0x1386ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1386acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1386b0:
    // 0x1386b0: 0xc05548c  jal         func_155230
label_1386b4:
    if (ctx->pc == 0x1386B4u) {
        ctx->pc = 0x1386B8u;
        goto label_1386b8;
    }
    ctx->pc = 0x1386B0u;
    SET_GPR_U32(ctx, 31, 0x1386B8u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x1386B0u, 0x1386B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1386B8u;
label_1386b8:
    // 0x1386b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1386b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1386bc:
    // 0x1386bc: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x1386bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1386c0:
    // 0x1386c0: 0xc0553d4  jal         func_154F50
label_1386c4:
    if (ctx->pc == 0x1386C4u) {
        ctx->pc = 0x1386C8u;
        goto label_1386c8;
    }
    ctx->pc = 0x1386C0u;
    SET_GPR_U32(ctx, 31, 0x1386C8u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x1386C0u, 0x1386C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1386C8u;
label_1386c8:
    // 0x1386c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1386c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1386cc:
    // 0x1386cc: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1386d0:
    if (ctx->pc == 0x1386D0u) {
        ctx->pc = 0x1386D4u;
        goto label_1386d4;
    }
    ctx->pc = 0x1386CCu;
    {
        const bool branch_taken_0x1386cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1386cc) {
            ctx->pc = 0x1386FCu;
            goto label_1386fc;
        }
    }
    ctx->pc = 0x1386D4u;
label_1386d4:
    // 0x1386d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1386d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1386d8:
    // 0x1386d8: 0xc0413bc  jal         func_104EF0
label_1386dc:
    if (ctx->pc == 0x1386DCu) {
        ctx->pc = 0x1386E0u;
        goto label_1386e0;
    }
    ctx->pc = 0x1386D8u;
    SET_GPR_U32(ctx, 31, 0x1386E0u);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x1386D8u, 0x1386E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1386E0u;
label_1386e0:
    // 0x1386e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1386e4:
    if (ctx->pc == 0x1386E4u) {
        ctx->pc = 0x1386E8u;
        goto label_1386e8;
    }
    ctx->pc = 0x1386E0u;
    {
        const bool branch_taken_0x1386e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1386e0) {
            ctx->pc = 0x1386FCu;
            goto label_1386fc;
        }
    }
    ctx->pc = 0x1386E8u;
label_1386e8:
    // 0x1386e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1386e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1386ec:
    // 0x1386ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1386ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1386f0:
    // 0x1386f0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1386f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1386f4:
    // 0x1386f4: 0x320f809  jalr        $t9
label_1386f8:
    if (ctx->pc == 0x1386F8u) {
        ctx->pc = 0x1386FCu;
        goto label_1386fc;
    }
    ctx->pc = 0x1386F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1386FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1386F4u, 0x1386FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1386FCu;
label_1386fc:
    // 0x1386fc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1386fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_138700:
    // 0x138700: 0x8c640068  lw          $a0, 0x68($v1)
    ctx->pc = 0x138700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_138704:
    // 0x138704: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x138704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_138708:
    // 0x138708: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_13870c:
    if (ctx->pc == 0x13870Cu) {
        ctx->pc = 0x138710u;
        goto label_138710;
    }
    ctx->pc = 0x138708u;
    {
        const bool branch_taken_0x138708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x138708) {
            ctx->pc = 0x138738u;
            goto label_138738;
        }
    }
    ctx->pc = 0x138710u;
label_138710:
    // 0x138710: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x138710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_138714:
    // 0x138714: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
label_138718:
    if (ctx->pc == 0x138718u) {
        ctx->pc = 0x13871Cu;
        goto label_13871c;
    }
    ctx->pc = 0x138714u;
    {
        const bool branch_taken_0x138714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x138714) {
            ctx->pc = 0x13874Cu;
            goto label_13874c;
        }
    }
    ctx->pc = 0x13871Cu;
label_13871c:
    // 0x13871c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13871cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_138720:
    // 0x138720: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_138724:
    if (ctx->pc == 0x138724u) {
        ctx->pc = 0x138728u;
        goto label_138728;
    }
    ctx->pc = 0x138720u;
    {
        const bool branch_taken_0x138720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x138720) {
            ctx->pc = 0x13874Cu;
            goto label_13874c;
        }
    }
    ctx->pc = 0x138728u;
label_138728:
    // 0x138728: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_13872c:
    if (ctx->pc == 0x13872Cu) {
        ctx->pc = 0x138730u;
        goto label_138730;
    }
    ctx->pc = 0x138728u;
    {
        const bool branch_taken_0x138728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x138728) {
            ctx->pc = 0x13874Cu;
            goto label_13874c;
        }
    }
    ctx->pc = 0x138730u;
label_138730:
    // 0x138730: 0x10000006  b           . + 4 + (0x6 << 2)
label_138734:
    if (ctx->pc == 0x138734u) {
        ctx->pc = 0x138738u;
        goto label_138738;
    }
    ctx->pc = 0x138730u;
    {
        const bool branch_taken_0x138730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138730) {
            ctx->pc = 0x13874Cu;
            goto label_13874c;
        }
    }
    ctx->pc = 0x138738u;
label_138738:
    // 0x138738: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_13873c:
    if (ctx->pc == 0x13873Cu) {
        ctx->pc = 0x138740u;
        goto label_138740;
    }
    ctx->pc = 0x138738u;
    {
        const bool branch_taken_0x138738 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x138738) {
            ctx->pc = 0x13874Cu;
            goto label_13874c;
        }
    }
    ctx->pc = 0x138740u;
label_138740:
    // 0x138740: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x138740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_138744:
    // 0x138744: 0xc04e558  jal         func_139560
label_138748:
    if (ctx->pc == 0x138748u) {
        ctx->pc = 0x13874Cu;
        goto label_13874c;
    }
    ctx->pc = 0x138744u;
    SET_GPR_U32(ctx, 31, 0x13874Cu);
    ctx->pc = 0x139560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139560u, 0x138744u, 0x13874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13874Cu;
label_13874c:
    // 0x13874c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13874cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_138750:
    // 0x138750: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x138750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_138754:
    // 0x138754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x138754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_138758:
    // 0x138758: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x138758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13875c:
    // 0x13875c: 0x3e00008  jr          $ra
label_138760:
    if (ctx->pc == 0x138760u) {
        ctx->pc = 0x138764u;
        goto label_138764;
    }
    ctx->pc = 0x13875Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13875Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138764u;
label_138764:
    // 0x138764: 0x0  nop
    ctx->pc = 0x138764u;
    // NOP
label_138768:
    // 0x138768: 0x0  nop
    ctx->pc = 0x138768u;
    // NOP
label_13876c:
    // 0x13876c: 0x0  nop
    ctx->pc = 0x13876cu;
    // NOP
    ctx->pc = 0x138770u;
}
