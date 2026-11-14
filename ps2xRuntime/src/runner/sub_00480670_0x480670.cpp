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

// Function: sub_00480670
// Address: 0x480670 - 0x4807d0
void sub_00480670_0x480670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480670_0x480670");
#endif

    switch (ctx->pc) {
        case 0x480670u: goto label_480670;
        case 0x480674u: goto label_480674;
        case 0x480678u: goto label_480678;
        case 0x48067cu: goto label_48067c;
        case 0x480680u: goto label_480680;
        case 0x480684u: goto label_480684;
        case 0x480688u: goto label_480688;
        case 0x48068cu: goto label_48068c;
        case 0x480690u: goto label_480690;
        case 0x480694u: goto label_480694;
        case 0x480698u: goto label_480698;
        case 0x48069cu: goto label_48069c;
        case 0x4806a0u: goto label_4806a0;
        case 0x4806a4u: goto label_4806a4;
        case 0x4806a8u: goto label_4806a8;
        case 0x4806acu: goto label_4806ac;
        case 0x4806b0u: goto label_4806b0;
        case 0x4806b4u: goto label_4806b4;
        case 0x4806b8u: goto label_4806b8;
        case 0x4806bcu: goto label_4806bc;
        case 0x4806c0u: goto label_4806c0;
        case 0x4806c4u: goto label_4806c4;
        case 0x4806c8u: goto label_4806c8;
        case 0x4806ccu: goto label_4806cc;
        case 0x4806d0u: goto label_4806d0;
        case 0x4806d4u: goto label_4806d4;
        case 0x4806d8u: goto label_4806d8;
        case 0x4806dcu: goto label_4806dc;
        case 0x4806e0u: goto label_4806e0;
        case 0x4806e4u: goto label_4806e4;
        case 0x4806e8u: goto label_4806e8;
        case 0x4806ecu: goto label_4806ec;
        case 0x4806f0u: goto label_4806f0;
        case 0x4806f4u: goto label_4806f4;
        case 0x4806f8u: goto label_4806f8;
        case 0x4806fcu: goto label_4806fc;
        case 0x480700u: goto label_480700;
        case 0x480704u: goto label_480704;
        case 0x480708u: goto label_480708;
        case 0x48070cu: goto label_48070c;
        case 0x480710u: goto label_480710;
        case 0x480714u: goto label_480714;
        case 0x480718u: goto label_480718;
        case 0x48071cu: goto label_48071c;
        case 0x480720u: goto label_480720;
        case 0x480724u: goto label_480724;
        case 0x480728u: goto label_480728;
        case 0x48072cu: goto label_48072c;
        case 0x480730u: goto label_480730;
        case 0x480734u: goto label_480734;
        case 0x480738u: goto label_480738;
        case 0x48073cu: goto label_48073c;
        case 0x480740u: goto label_480740;
        case 0x480744u: goto label_480744;
        case 0x480748u: goto label_480748;
        case 0x48074cu: goto label_48074c;
        case 0x480750u: goto label_480750;
        case 0x480754u: goto label_480754;
        case 0x480758u: goto label_480758;
        case 0x48075cu: goto label_48075c;
        case 0x480760u: goto label_480760;
        case 0x480764u: goto label_480764;
        case 0x480768u: goto label_480768;
        case 0x48076cu: goto label_48076c;
        case 0x480770u: goto label_480770;
        case 0x480774u: goto label_480774;
        case 0x480778u: goto label_480778;
        case 0x48077cu: goto label_48077c;
        case 0x480780u: goto label_480780;
        case 0x480784u: goto label_480784;
        case 0x480788u: goto label_480788;
        case 0x48078cu: goto label_48078c;
        case 0x480790u: goto label_480790;
        case 0x480794u: goto label_480794;
        case 0x480798u: goto label_480798;
        case 0x48079cu: goto label_48079c;
        case 0x4807a0u: goto label_4807a0;
        case 0x4807a4u: goto label_4807a4;
        case 0x4807a8u: goto label_4807a8;
        case 0x4807acu: goto label_4807ac;
        case 0x4807b0u: goto label_4807b0;
        case 0x4807b4u: goto label_4807b4;
        case 0x4807b8u: goto label_4807b8;
        case 0x4807bcu: goto label_4807bc;
        case 0x4807c0u: goto label_4807c0;
        case 0x4807c4u: goto label_4807c4;
        case 0x4807c8u: goto label_4807c8;
        case 0x4807ccu: goto label_4807cc;
        default: break;
    }

    ctx->pc = 0x480670u;

label_480670:
    // 0x480670: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x480670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_480674:
    // 0x480674: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x480674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_480678:
    // 0x480678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x480678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48067c:
    // 0x48067c: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x48067cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_480680:
    // 0x480680: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x480680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_480684:
    // 0x480684: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x480684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_480688:
    // 0x480688: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x480688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_48068c:
    // 0x48068c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48068cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_480690:
    // 0x480690: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_480694:
    if (ctx->pc == 0x480694u) {
        ctx->pc = 0x480698u;
        goto label_480698;
    }
    ctx->pc = 0x480690u;
    {
        const bool branch_taken_0x480690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x480690) {
            ctx->pc = 0x480740u;
            goto label_480740;
        }
    }
    ctx->pc = 0x480698u;
label_480698:
    // 0x480698: 0x8f82b560  lw          $v0, -0x4AA0($gp)
    ctx->pc = 0x480698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948192)));
label_48069c:
    // 0x48069c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4806a0:
    if (ctx->pc == 0x4806A0u) {
        ctx->pc = 0x4806A4u;
        goto label_4806a4;
    }
    ctx->pc = 0x48069Cu;
    {
        const bool branch_taken_0x48069c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48069c) {
            ctx->pc = 0x480740u;
            goto label_480740;
        }
    }
    ctx->pc = 0x4806A4u;
label_4806a4:
    // 0x4806a4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4806a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4806a8:
    // 0x4806a8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4806a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4806ac:
    // 0x4806ac: 0x27a60148  addiu       $a2, $sp, 0x148
    ctx->pc = 0x4806acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_4806b0:
    // 0x4806b0: 0xc115ee8  jal         func_457BA0
label_4806b4:
    if (ctx->pc == 0x4806B4u) {
        ctx->pc = 0x4806B8u;
        goto label_4806b8;
    }
    ctx->pc = 0x4806B0u;
    SET_GPR_U32(ctx, 31, 0x4806B8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4806B0u, 0x4806B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4806B8u;
label_4806b8:
    // 0x4806b8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4806bc:
    if (ctx->pc == 0x4806BCu) {
        ctx->pc = 0x4806C0u;
        goto label_4806c0;
    }
    ctx->pc = 0x4806B8u;
    {
        const bool branch_taken_0x4806b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4806b8) {
            ctx->pc = 0x480740u;
            goto label_480740;
        }
    }
    ctx->pc = 0x4806C0u;
label_4806c0:
    // 0x4806c0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x4806c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_4806c4:
    // 0x4806c4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4806c8:
    if (ctx->pc == 0x4806C8u) {
        ctx->pc = 0x4806CCu;
        goto label_4806cc;
    }
    ctx->pc = 0x4806C4u;
    {
        const bool branch_taken_0x4806c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4806c4) {
            ctx->pc = 0x480740u;
            goto label_480740;
        }
    }
    ctx->pc = 0x4806CCu;
label_4806cc:
    // 0x4806cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4806ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4806d0:
    // 0x4806d0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4806d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4806d4:
    // 0x4806d4: 0x8fa6014c  lw          $a2, 0x14C($sp)
    ctx->pc = 0x4806d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_4806d8:
    // 0x4806d8: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4806d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4806dc:
    // 0x4806dc: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x4806dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_4806e0:
    // 0x4806e0: 0x240801c6  addiu       $t0, $zero, 0x1C6
    ctx->pc = 0x4806e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 454));
label_4806e4:
    // 0x4806e4: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4806e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4806e8:
    // 0x4806e8: 0x25291b90  addiu       $t1, $t1, 0x1B90
    ctx->pc = 0x4806e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 7056));
label_4806ec:
    // 0x4806ec: 0xc113940  jal         func_44E500
label_4806f0:
    if (ctx->pc == 0x4806F0u) {
        ctx->pc = 0x4806F4u;
        goto label_4806f4;
    }
    ctx->pc = 0x4806ECu;
    SET_GPR_U32(ctx, 31, 0x4806F4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4806ECu, 0x4806F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4806F4u;
label_4806f4:
    // 0x4806f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4806f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4806f8:
    // 0x4806f8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4806f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4806fc:
    // 0x4806fc: 0x24a51bb0  addiu       $a1, $a1, 0x1BB0
    ctx->pc = 0x4806fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7088));
label_480700:
    // 0x480700: 0xc115c24  jal         func_457090
label_480704:
    if (ctx->pc == 0x480704u) {
        ctx->pc = 0x480708u;
        goto label_480708;
    }
    ctx->pc = 0x480700u;
    SET_GPR_U32(ctx, 31, 0x480708u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x480700u, 0x480708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480708u;
label_480708:
    // 0x480708: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x480708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_48070c:
    // 0x48070c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48070cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_480710:
    // 0x480710: 0x40f809  jalr        $v0
label_480714:
    if (ctx->pc == 0x480714u) {
        ctx->pc = 0x480718u;
        goto label_480718;
    }
    ctx->pc = 0x480710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x480718u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480710u, 0x480718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x480718u;
label_480718:
    // 0x480718: 0xaf82b560  sw          $v0, -0x4AA0($gp)
    ctx->pc = 0x480718u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948192), GPR_U32(ctx, 2));
label_48071c:
    // 0x48071c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48071cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_480720:
    // 0x480720: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_480724:
    if (ctx->pc == 0x480724u) {
        ctx->pc = 0x480728u;
        goto label_480728;
    }
    ctx->pc = 0x480720u;
    {
        const bool branch_taken_0x480720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480720) {
            ctx->pc = 0x480730u;
            goto label_480730;
        }
    }
    ctx->pc = 0x480728u;
label_480728:
    // 0x480728: 0xd  break       0
    ctx->pc = 0x480728u;
    runtime->handleBreak(rdram, ctx);
label_48072c:
    // 0x48072c: 0x0  nop
    ctx->pc = 0x48072cu;
    // NOP
label_480730:
    // 0x480730: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x480730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_480734:
    // 0x480734: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x480734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_480738:
    // 0x480738: 0xc11392c  jal         func_44E4B0
label_48073c:
    if (ctx->pc == 0x48073Cu) {
        ctx->pc = 0x480740u;
        goto label_480740;
    }
    ctx->pc = 0x480738u;
    SET_GPR_U32(ctx, 31, 0x480740u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x480738u, 0x480740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480740u;
label_480740:
    // 0x480740: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x480740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_480744:
    // 0x480744: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x480744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_480748:
    // 0x480748: 0x24500050  addiu       $s0, $v0, 0x50
    ctx->pc = 0x480748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_48074c:
    // 0x48074c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x48074cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_480750:
    // 0x480750: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x480750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_480754:
    // 0x480754: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x480754u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_480758:
    // 0x480758: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x480758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_48075c:
    // 0x48075c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x48075cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_480760:
    // 0x480760: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x480760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_480764:
    // 0x480764: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x480764u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_480768:
    // 0x480768: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x480768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_48076c:
    // 0x48076c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x48076cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_480770:
    // 0x480770: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x480770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_480774:
    // 0x480774: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x480774u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_480778:
    // 0x480778: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x480778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_48077c:
    // 0x48077c: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x48077cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_480780:
    // 0x480780: 0xc104d24  jal         func_413490
label_480784:
    if (ctx->pc == 0x480784u) {
        ctx->pc = 0x480788u;
        goto label_480788;
    }
    ctx->pc = 0x480780u;
    SET_GPR_U32(ctx, 31, 0x480788u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x480780u, 0x480788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480788u;
label_480788:
    // 0x480788: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x480788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_48078c:
    // 0x48078c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x48078cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_480790:
    // 0x480790: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x480790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_480794:
    // 0x480794: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x480794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_480798:
    // 0x480798: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x480798u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_48079c:
    // 0x48079c: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x48079cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_4807a0:
    // 0x4807a0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x4807a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4807a4:
    // 0x4807a4: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x4807a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4807a8:
    // 0x4807a8: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x4807a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4807ac:
    // 0x4807ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4807acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4807b0:
    // 0x4807b0: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x4807b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_4807b4:
    // 0x4807b4: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x4807b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4807b8:
    // 0x4807b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4807b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4807bc:
    // 0x4807bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4807bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4807c0:
    // 0x4807c0: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x4807c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_4807c4:
    // 0x4807c4: 0x3e00008  jr          $ra
label_4807c8:
    if (ctx->pc == 0x4807C8u) {
        ctx->pc = 0x4807CCu;
        goto label_4807cc;
    }
    ctx->pc = 0x4807C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4807C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4807CCu;
label_4807cc:
    // 0x4807cc: 0x0  nop
    ctx->pc = 0x4807ccu;
    // NOP
    ctx->pc = 0x4807d0u;
}
