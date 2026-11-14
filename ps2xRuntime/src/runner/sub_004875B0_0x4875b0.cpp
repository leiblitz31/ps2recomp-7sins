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

// Function: sub_004875B0
// Address: 0x4875b0 - 0x4877c0
void sub_004875B0_0x4875b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004875B0_0x4875b0");
#endif

    switch (ctx->pc) {
        case 0x4875b0u: goto label_4875b0;
        case 0x4875b4u: goto label_4875b4;
        case 0x4875b8u: goto label_4875b8;
        case 0x4875bcu: goto label_4875bc;
        case 0x4875c0u: goto label_4875c0;
        case 0x4875c4u: goto label_4875c4;
        case 0x4875c8u: goto label_4875c8;
        case 0x4875ccu: goto label_4875cc;
        case 0x4875d0u: goto label_4875d0;
        case 0x4875d4u: goto label_4875d4;
        case 0x4875d8u: goto label_4875d8;
        case 0x4875dcu: goto label_4875dc;
        case 0x4875e0u: goto label_4875e0;
        case 0x4875e4u: goto label_4875e4;
        case 0x4875e8u: goto label_4875e8;
        case 0x4875ecu: goto label_4875ec;
        case 0x4875f0u: goto label_4875f0;
        case 0x4875f4u: goto label_4875f4;
        case 0x4875f8u: goto label_4875f8;
        case 0x4875fcu: goto label_4875fc;
        case 0x487600u: goto label_487600;
        case 0x487604u: goto label_487604;
        case 0x487608u: goto label_487608;
        case 0x48760cu: goto label_48760c;
        case 0x487610u: goto label_487610;
        case 0x487614u: goto label_487614;
        case 0x487618u: goto label_487618;
        case 0x48761cu: goto label_48761c;
        case 0x487620u: goto label_487620;
        case 0x487624u: goto label_487624;
        case 0x487628u: goto label_487628;
        case 0x48762cu: goto label_48762c;
        case 0x487630u: goto label_487630;
        case 0x487634u: goto label_487634;
        case 0x487638u: goto label_487638;
        case 0x48763cu: goto label_48763c;
        case 0x487640u: goto label_487640;
        case 0x487644u: goto label_487644;
        case 0x487648u: goto label_487648;
        case 0x48764cu: goto label_48764c;
        case 0x487650u: goto label_487650;
        case 0x487654u: goto label_487654;
        case 0x487658u: goto label_487658;
        case 0x48765cu: goto label_48765c;
        case 0x487660u: goto label_487660;
        case 0x487664u: goto label_487664;
        case 0x487668u: goto label_487668;
        case 0x48766cu: goto label_48766c;
        case 0x487670u: goto label_487670;
        case 0x487674u: goto label_487674;
        case 0x487678u: goto label_487678;
        case 0x48767cu: goto label_48767c;
        case 0x487680u: goto label_487680;
        case 0x487684u: goto label_487684;
        case 0x487688u: goto label_487688;
        case 0x48768cu: goto label_48768c;
        case 0x487690u: goto label_487690;
        case 0x487694u: goto label_487694;
        case 0x487698u: goto label_487698;
        case 0x48769cu: goto label_48769c;
        case 0x4876a0u: goto label_4876a0;
        case 0x4876a4u: goto label_4876a4;
        case 0x4876a8u: goto label_4876a8;
        case 0x4876acu: goto label_4876ac;
        case 0x4876b0u: goto label_4876b0;
        case 0x4876b4u: goto label_4876b4;
        case 0x4876b8u: goto label_4876b8;
        case 0x4876bcu: goto label_4876bc;
        case 0x4876c0u: goto label_4876c0;
        case 0x4876c4u: goto label_4876c4;
        case 0x4876c8u: goto label_4876c8;
        case 0x4876ccu: goto label_4876cc;
        case 0x4876d0u: goto label_4876d0;
        case 0x4876d4u: goto label_4876d4;
        case 0x4876d8u: goto label_4876d8;
        case 0x4876dcu: goto label_4876dc;
        case 0x4876e0u: goto label_4876e0;
        case 0x4876e4u: goto label_4876e4;
        case 0x4876e8u: goto label_4876e8;
        case 0x4876ecu: goto label_4876ec;
        case 0x4876f0u: goto label_4876f0;
        case 0x4876f4u: goto label_4876f4;
        case 0x4876f8u: goto label_4876f8;
        case 0x4876fcu: goto label_4876fc;
        case 0x487700u: goto label_487700;
        case 0x487704u: goto label_487704;
        case 0x487708u: goto label_487708;
        case 0x48770cu: goto label_48770c;
        case 0x487710u: goto label_487710;
        case 0x487714u: goto label_487714;
        case 0x487718u: goto label_487718;
        case 0x48771cu: goto label_48771c;
        case 0x487720u: goto label_487720;
        case 0x487724u: goto label_487724;
        case 0x487728u: goto label_487728;
        case 0x48772cu: goto label_48772c;
        case 0x487730u: goto label_487730;
        case 0x487734u: goto label_487734;
        case 0x487738u: goto label_487738;
        case 0x48773cu: goto label_48773c;
        case 0x487740u: goto label_487740;
        case 0x487744u: goto label_487744;
        case 0x487748u: goto label_487748;
        case 0x48774cu: goto label_48774c;
        case 0x487750u: goto label_487750;
        case 0x487754u: goto label_487754;
        case 0x487758u: goto label_487758;
        case 0x48775cu: goto label_48775c;
        case 0x487760u: goto label_487760;
        case 0x487764u: goto label_487764;
        case 0x487768u: goto label_487768;
        case 0x48776cu: goto label_48776c;
        case 0x487770u: goto label_487770;
        case 0x487774u: goto label_487774;
        case 0x487778u: goto label_487778;
        case 0x48777cu: goto label_48777c;
        case 0x487780u: goto label_487780;
        case 0x487784u: goto label_487784;
        case 0x487788u: goto label_487788;
        case 0x48778cu: goto label_48778c;
        case 0x487790u: goto label_487790;
        case 0x487794u: goto label_487794;
        case 0x487798u: goto label_487798;
        case 0x48779cu: goto label_48779c;
        case 0x4877a0u: goto label_4877a0;
        case 0x4877a4u: goto label_4877a4;
        case 0x4877a8u: goto label_4877a8;
        case 0x4877acu: goto label_4877ac;
        case 0x4877b0u: goto label_4877b0;
        case 0x4877b4u: goto label_4877b4;
        case 0x4877b8u: goto label_4877b8;
        case 0x4877bcu: goto label_4877bc;
        default: break;
    }

    ctx->pc = 0x4875b0u;

label_4875b0:
    // 0x4875b0: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x4875b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
label_4875b4:
    // 0x4875b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4875b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4875b8:
    // 0x4875b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4875b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4875bc:
    // 0x4875bc: 0xafa40280  sw          $a0, 0x280($sp)
    ctx->pc = 0x4875bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 4));
label_4875c0:
    // 0x4875c0: 0xafa50290  sw          $a1, 0x290($sp)
    ctx->pc = 0x4875c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 5));
label_4875c4:
    // 0x4875c4: 0xafa602a0  sw          $a2, 0x2A0($sp)
    ctx->pc = 0x4875c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 6));
label_4875c8:
    // 0x4875c8: 0xe7ac02b0  swc1        $f12, 0x2B0($sp)
    ctx->pc = 0x4875c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
label_4875cc:
    // 0x4875cc: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x4875ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_4875d0:
    // 0x4875d0: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x4875d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4875d4:
    // 0x4875d4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4875d8:
    if (ctx->pc == 0x4875D8u) {
        ctx->pc = 0x4875DCu;
        goto label_4875dc;
    }
    ctx->pc = 0x4875D4u;
    {
        const bool branch_taken_0x4875d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4875d4) {
            ctx->pc = 0x487684u;
            goto label_487684;
        }
    }
    ctx->pc = 0x4875DCu;
label_4875dc:
    // 0x4875dc: 0x8f82b5d8  lw          $v0, -0x4A28($gp)
    ctx->pc = 0x4875dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948312)));
label_4875e0:
    // 0x4875e0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4875e4:
    if (ctx->pc == 0x4875E4u) {
        ctx->pc = 0x4875E8u;
        goto label_4875e8;
    }
    ctx->pc = 0x4875E0u;
    {
        const bool branch_taken_0x4875e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4875e0) {
            ctx->pc = 0x487684u;
            goto label_487684;
        }
    }
    ctx->pc = 0x4875E8u;
label_4875e8:
    // 0x4875e8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4875e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4875ec:
    // 0x4875ec: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4875ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4875f0:
    // 0x4875f0: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x4875f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_4875f4:
    // 0x4875f4: 0xc115ee8  jal         func_457BA0
label_4875f8:
    if (ctx->pc == 0x4875F8u) {
        ctx->pc = 0x4875FCu;
        goto label_4875fc;
    }
    ctx->pc = 0x4875F4u;
    SET_GPR_U32(ctx, 31, 0x4875FCu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4875F4u, 0x4875FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4875FCu;
label_4875fc:
    // 0x4875fc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_487600:
    if (ctx->pc == 0x487600u) {
        ctx->pc = 0x487604u;
        goto label_487604;
    }
    ctx->pc = 0x4875FCu;
    {
        const bool branch_taken_0x4875fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4875fc) {
            ctx->pc = 0x487684u;
            goto label_487684;
        }
    }
    ctx->pc = 0x487604u;
label_487604:
    // 0x487604: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x487604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_487608:
    // 0x487608: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_48760c:
    if (ctx->pc == 0x48760Cu) {
        ctx->pc = 0x487610u;
        goto label_487610;
    }
    ctx->pc = 0x487608u;
    {
        const bool branch_taken_0x487608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x487608) {
            ctx->pc = 0x487684u;
            goto label_487684;
        }
    }
    ctx->pc = 0x487610u;
label_487610:
    // 0x487610: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x487610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_487614:
    // 0x487614: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x487614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_487618:
    // 0x487618: 0x8fa60274  lw          $a2, 0x274($sp)
    ctx->pc = 0x487618u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_48761c:
    // 0x48761c: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48761cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_487620:
    // 0x487620: 0x24e73d50  addiu       $a3, $a3, 0x3D50
    ctx->pc = 0x487620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15696));
label_487624:
    // 0x487624: 0x240802ea  addiu       $t0, $zero, 0x2EA
    ctx->pc = 0x487624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 746));
label_487628:
    // 0x487628: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x487628u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48762c:
    // 0x48762c: 0x25293f38  addiu       $t1, $t1, 0x3F38
    ctx->pc = 0x48762cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16184));
label_487630:
    // 0x487630: 0xc113940  jal         func_44E500
label_487634:
    if (ctx->pc == 0x487634u) {
        ctx->pc = 0x487638u;
        goto label_487638;
    }
    ctx->pc = 0x487630u;
    SET_GPR_U32(ctx, 31, 0x487638u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x487630u, 0x487638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487638u;
label_487638:
    // 0x487638: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x487638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_48763c:
    // 0x48763c: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48763cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_487640:
    // 0x487640: 0x24a53f50  addiu       $a1, $a1, 0x3F50
    ctx->pc = 0x487640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16208));
label_487644:
    // 0x487644: 0xc115c24  jal         func_457090
label_487648:
    if (ctx->pc == 0x487648u) {
        ctx->pc = 0x48764Cu;
        goto label_48764c;
    }
    ctx->pc = 0x487644u;
    SET_GPR_U32(ctx, 31, 0x48764Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x487644u, 0x48764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48764Cu;
label_48764c:
    // 0x48764c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x48764cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_487650:
    // 0x487650: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x487650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_487654:
    // 0x487654: 0x40f809  jalr        $v0
label_487658:
    if (ctx->pc == 0x487658u) {
        ctx->pc = 0x48765Cu;
        goto label_48765c;
    }
    ctx->pc = 0x487654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48765Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487654u, 0x48765Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48765Cu;
label_48765c:
    // 0x48765c: 0xaf82b5d8  sw          $v0, -0x4A28($gp)
    ctx->pc = 0x48765cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948312), GPR_U32(ctx, 2));
label_487660:
    // 0x487660: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x487660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_487664:
    // 0x487664: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_487668:
    if (ctx->pc == 0x487668u) {
        ctx->pc = 0x48766Cu;
        goto label_48766c;
    }
    ctx->pc = 0x487664u;
    {
        const bool branch_taken_0x487664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x487664) {
            ctx->pc = 0x487674u;
            goto label_487674;
        }
    }
    ctx->pc = 0x48766Cu;
label_48766c:
    // 0x48766c: 0xd  break       0
    ctx->pc = 0x48766cu;
    runtime->handleBreak(rdram, ctx);
label_487670:
    // 0x487670: 0x0  nop
    ctx->pc = 0x487670u;
    // NOP
label_487674:
    // 0x487674: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x487674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_487678:
    // 0x487678: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x487678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48767c:
    // 0x48767c: 0xc11392c  jal         func_44E4B0
label_487680:
    if (ctx->pc == 0x487680u) {
        ctx->pc = 0x487684u;
        goto label_487684;
    }
    ctx->pc = 0x48767Cu;
    SET_GPR_U32(ctx, 31, 0x487684u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48767Cu, 0x487684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487684u;
label_487684:
    // 0x487684: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x487684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_487688:
    // 0x487688: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x487688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_48768c:
    // 0x48768c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48768cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_487690:
    // 0x487690: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_487694:
    if (ctx->pc == 0x487694u) {
        ctx->pc = 0x487698u;
        goto label_487698;
    }
    ctx->pc = 0x487690u;
    {
        const bool branch_taken_0x487690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x487690) {
            ctx->pc = 0x4876ACu;
            goto label_4876ac;
        }
    }
    ctx->pc = 0x487698u;
label_487698:
    // 0x487698: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x487698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_48769c:
    // 0x48769c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4876a0:
    if (ctx->pc == 0x4876A0u) {
        ctx->pc = 0x4876A4u;
        goto label_4876a4;
    }
    ctx->pc = 0x48769Cu;
    {
        const bool branch_taken_0x48769c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48769c) {
            ctx->pc = 0x4876ACu;
            goto label_4876ac;
        }
    }
    ctx->pc = 0x4876A4u;
label_4876a4:
    // 0x4876a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4876a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4876a8:
    // 0x4876a8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x4876a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4876ac:
    // 0x4876ac: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x4876acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_4876b0:
    // 0x4876b0: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4876b4:
    if (ctx->pc == 0x4876B4u) {
        ctx->pc = 0x4876B8u;
        goto label_4876b8;
    }
    ctx->pc = 0x4876B0u;
    {
        const bool branch_taken_0x4876b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4876b0) {
            ctx->pc = 0x487760u;
            goto label_487760;
        }
    }
    ctx->pc = 0x4876B8u;
label_4876b8:
    // 0x4876b8: 0x8f82b5dc  lw          $v0, -0x4A24($gp)
    ctx->pc = 0x4876b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948316)));
label_4876bc:
    // 0x4876bc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4876c0:
    if (ctx->pc == 0x4876C0u) {
        ctx->pc = 0x4876C4u;
        goto label_4876c4;
    }
    ctx->pc = 0x4876BCu;
    {
        const bool branch_taken_0x4876bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4876bc) {
            ctx->pc = 0x487760u;
            goto label_487760;
        }
    }
    ctx->pc = 0x4876C4u;
label_4876c4:
    // 0x4876c4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4876c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4876c8:
    // 0x4876c8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4876c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4876cc:
    // 0x4876cc: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x4876ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_4876d0:
    // 0x4876d0: 0xc115ee8  jal         func_457BA0
label_4876d4:
    if (ctx->pc == 0x4876D4u) {
        ctx->pc = 0x4876D8u;
        goto label_4876d8;
    }
    ctx->pc = 0x4876D0u;
    SET_GPR_U32(ctx, 31, 0x4876D8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4876D0u, 0x4876D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4876D8u;
label_4876d8:
    // 0x4876d8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4876dc:
    if (ctx->pc == 0x4876DCu) {
        ctx->pc = 0x4876E0u;
        goto label_4876e0;
    }
    ctx->pc = 0x4876D8u;
    {
        const bool branch_taken_0x4876d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4876d8) {
            ctx->pc = 0x487760u;
            goto label_487760;
        }
    }
    ctx->pc = 0x4876E0u;
label_4876e0:
    // 0x4876e0: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x4876e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_4876e4:
    // 0x4876e4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4876e8:
    if (ctx->pc == 0x4876E8u) {
        ctx->pc = 0x4876ECu;
        goto label_4876ec;
    }
    ctx->pc = 0x4876E4u;
    {
        const bool branch_taken_0x4876e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4876e4) {
            ctx->pc = 0x487760u;
            goto label_487760;
        }
    }
    ctx->pc = 0x4876ECu;
label_4876ec:
    // 0x4876ec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4876ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4876f0:
    // 0x4876f0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4876f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4876f4:
    // 0x4876f4: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x4876f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_4876f8:
    // 0x4876f8: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4876f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_4876fc:
    // 0x4876fc: 0x24e73d50  addiu       $a3, $a3, 0x3D50
    ctx->pc = 0x4876fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15696));
label_487700:
    // 0x487700: 0x240802eb  addiu       $t0, $zero, 0x2EB
    ctx->pc = 0x487700u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 747));
label_487704:
    // 0x487704: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x487704u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_487708:
    // 0x487708: 0x25293f90  addiu       $t1, $t1, 0x3F90
    ctx->pc = 0x487708u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16272));
label_48770c:
    // 0x48770c: 0xc113940  jal         func_44E500
label_487710:
    if (ctx->pc == 0x487710u) {
        ctx->pc = 0x487714u;
        goto label_487714;
    }
    ctx->pc = 0x48770Cu;
    SET_GPR_U32(ctx, 31, 0x487714u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48770Cu, 0x487714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487714u;
label_487714:
    // 0x487714: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x487714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_487718:
    // 0x487718: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x487718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48771c:
    // 0x48771c: 0x24a53d70  addiu       $a1, $a1, 0x3D70
    ctx->pc = 0x48771cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15728));
label_487720:
    // 0x487720: 0xc115c24  jal         func_457090
label_487724:
    if (ctx->pc == 0x487724u) {
        ctx->pc = 0x487728u;
        goto label_487728;
    }
    ctx->pc = 0x487720u;
    SET_GPR_U32(ctx, 31, 0x487728u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x487720u, 0x487728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487728u;
label_487728:
    // 0x487728: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x487728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_48772c:
    // 0x48772c: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x48772cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_487730:
    // 0x487730: 0x40f809  jalr        $v0
label_487734:
    if (ctx->pc == 0x487734u) {
        ctx->pc = 0x487738u;
        goto label_487738;
    }
    ctx->pc = 0x487730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x487738u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487730u, 0x487738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x487738u;
label_487738:
    // 0x487738: 0xaf82b5dc  sw          $v0, -0x4A24($gp)
    ctx->pc = 0x487738u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948316), GPR_U32(ctx, 2));
label_48773c:
    // 0x48773c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48773cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_487740:
    // 0x487740: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_487744:
    if (ctx->pc == 0x487744u) {
        ctx->pc = 0x487748u;
        goto label_487748;
    }
    ctx->pc = 0x487740u;
    {
        const bool branch_taken_0x487740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x487740) {
            ctx->pc = 0x487750u;
            goto label_487750;
        }
    }
    ctx->pc = 0x487748u;
label_487748:
    // 0x487748: 0xd  break       0
    ctx->pc = 0x487748u;
    runtime->handleBreak(rdram, ctx);
label_48774c:
    // 0x48774c: 0x0  nop
    ctx->pc = 0x48774cu;
    // NOP
label_487750:
    // 0x487750: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x487750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_487754:
    // 0x487754: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x487754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_487758:
    // 0x487758: 0xc11392c  jal         func_44E4B0
label_48775c:
    if (ctx->pc == 0x48775Cu) {
        ctx->pc = 0x487760u;
        goto label_487760;
    }
    ctx->pc = 0x487758u;
    SET_GPR_U32(ctx, 31, 0x487760u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x487758u, 0x487760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487760u;
label_487760:
    // 0x487760: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x487760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_487764:
    // 0x487764: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x487764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_487768:
    // 0x487768: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x487768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48776c:
    // 0x48776c: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x48776cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_487770:
    // 0x487770: 0x8fa602a0  lw          $a2, 0x2A0($sp)
    ctx->pc = 0x487770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_487774:
    // 0x487774: 0xc7ac02b0  lwc1        $f12, 0x2B0($sp)
    ctx->pc = 0x487774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_487778:
    // 0x487778: 0x8c470074  lw          $a3, 0x74($v0)
    ctx->pc = 0x487778u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_48777c:
    // 0x48777c: 0xc1215e0  jal         func_485780
label_487780:
    if (ctx->pc == 0x487780u) {
        ctx->pc = 0x487784u;
        goto label_487784;
    }
    ctx->pc = 0x48777Cu;
    SET_GPR_U32(ctx, 31, 0x487784u);
    ctx->pc = 0x485780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485780u, 0x48777Cu, 0x487784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487784u;
label_487784:
    // 0x487784: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x487784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_487788:
    // 0x487788: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x487788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_48778c:
    // 0x48778c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_487790:
    if (ctx->pc == 0x487790u) {
        ctx->pc = 0x487794u;
        goto label_487794;
    }
    ctx->pc = 0x48778Cu;
    {
        const bool branch_taken_0x48778c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48778c) {
            ctx->pc = 0x4877ACu;
            goto label_4877ac;
        }
    }
    ctx->pc = 0x487794u;
label_487794:
    // 0x487794: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x487794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_487798:
    // 0x487798: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x487798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_48779c:
    // 0x48779c: 0x24a579a0  addiu       $a1, $a1, 0x79A0
    ctx->pc = 0x48779cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31136));
label_4877a0:
    // 0x4877a0: 0x2786c0bc  addiu       $a2, $gp, -0x3F44
    ctx->pc = 0x4877a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951100));
label_4877a4:
    // 0x4877a4: 0xc0e2628  jal         func_3898A0
label_4877a8:
    if (ctx->pc == 0x4877A8u) {
        ctx->pc = 0x4877ACu;
        goto label_4877ac;
    }
    ctx->pc = 0x4877A4u;
    SET_GPR_U32(ctx, 31, 0x4877ACu);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x4877A4u, 0x4877ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4877ACu;
label_4877ac:
    // 0x4877ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4877acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4877b0:
    // 0x4877b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4877b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4877b4:
    // 0x4877b4: 0x27bd02c0  addiu       $sp, $sp, 0x2C0
    ctx->pc = 0x4877b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_4877b8:
    // 0x4877b8: 0x3e00008  jr          $ra
label_4877bc:
    if (ctx->pc == 0x4877BCu) {
        ctx->pc = 0x4877C0u;
        goto label_fallthrough_0x4877b8;
    }
    ctx->pc = 0x4877B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4877B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4877b8:
    ctx->pc = 0x4877C0u;
}
