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

// Function: sub_0046F6A0
// Address: 0x46f6a0 - 0x46f8b0
void sub_0046F6A0_0x46f6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046F6A0_0x46f6a0");
#endif

    switch (ctx->pc) {
        case 0x46f6a0u: goto label_46f6a0;
        case 0x46f6a4u: goto label_46f6a4;
        case 0x46f6a8u: goto label_46f6a8;
        case 0x46f6acu: goto label_46f6ac;
        case 0x46f6b0u: goto label_46f6b0;
        case 0x46f6b4u: goto label_46f6b4;
        case 0x46f6b8u: goto label_46f6b8;
        case 0x46f6bcu: goto label_46f6bc;
        case 0x46f6c0u: goto label_46f6c0;
        case 0x46f6c4u: goto label_46f6c4;
        case 0x46f6c8u: goto label_46f6c8;
        case 0x46f6ccu: goto label_46f6cc;
        case 0x46f6d0u: goto label_46f6d0;
        case 0x46f6d4u: goto label_46f6d4;
        case 0x46f6d8u: goto label_46f6d8;
        case 0x46f6dcu: goto label_46f6dc;
        case 0x46f6e0u: goto label_46f6e0;
        case 0x46f6e4u: goto label_46f6e4;
        case 0x46f6e8u: goto label_46f6e8;
        case 0x46f6ecu: goto label_46f6ec;
        case 0x46f6f0u: goto label_46f6f0;
        case 0x46f6f4u: goto label_46f6f4;
        case 0x46f6f8u: goto label_46f6f8;
        case 0x46f6fcu: goto label_46f6fc;
        case 0x46f700u: goto label_46f700;
        case 0x46f704u: goto label_46f704;
        case 0x46f708u: goto label_46f708;
        case 0x46f70cu: goto label_46f70c;
        case 0x46f710u: goto label_46f710;
        case 0x46f714u: goto label_46f714;
        case 0x46f718u: goto label_46f718;
        case 0x46f71cu: goto label_46f71c;
        case 0x46f720u: goto label_46f720;
        case 0x46f724u: goto label_46f724;
        case 0x46f728u: goto label_46f728;
        case 0x46f72cu: goto label_46f72c;
        case 0x46f730u: goto label_46f730;
        case 0x46f734u: goto label_46f734;
        case 0x46f738u: goto label_46f738;
        case 0x46f73cu: goto label_46f73c;
        case 0x46f740u: goto label_46f740;
        case 0x46f744u: goto label_46f744;
        case 0x46f748u: goto label_46f748;
        case 0x46f74cu: goto label_46f74c;
        case 0x46f750u: goto label_46f750;
        case 0x46f754u: goto label_46f754;
        case 0x46f758u: goto label_46f758;
        case 0x46f75cu: goto label_46f75c;
        case 0x46f760u: goto label_46f760;
        case 0x46f764u: goto label_46f764;
        case 0x46f768u: goto label_46f768;
        case 0x46f76cu: goto label_46f76c;
        case 0x46f770u: goto label_46f770;
        case 0x46f774u: goto label_46f774;
        case 0x46f778u: goto label_46f778;
        case 0x46f77cu: goto label_46f77c;
        case 0x46f780u: goto label_46f780;
        case 0x46f784u: goto label_46f784;
        case 0x46f788u: goto label_46f788;
        case 0x46f78cu: goto label_46f78c;
        case 0x46f790u: goto label_46f790;
        case 0x46f794u: goto label_46f794;
        case 0x46f798u: goto label_46f798;
        case 0x46f79cu: goto label_46f79c;
        case 0x46f7a0u: goto label_46f7a0;
        case 0x46f7a4u: goto label_46f7a4;
        case 0x46f7a8u: goto label_46f7a8;
        case 0x46f7acu: goto label_46f7ac;
        case 0x46f7b0u: goto label_46f7b0;
        case 0x46f7b4u: goto label_46f7b4;
        case 0x46f7b8u: goto label_46f7b8;
        case 0x46f7bcu: goto label_46f7bc;
        case 0x46f7c0u: goto label_46f7c0;
        case 0x46f7c4u: goto label_46f7c4;
        case 0x46f7c8u: goto label_46f7c8;
        case 0x46f7ccu: goto label_46f7cc;
        case 0x46f7d0u: goto label_46f7d0;
        case 0x46f7d4u: goto label_46f7d4;
        case 0x46f7d8u: goto label_46f7d8;
        case 0x46f7dcu: goto label_46f7dc;
        case 0x46f7e0u: goto label_46f7e0;
        case 0x46f7e4u: goto label_46f7e4;
        case 0x46f7e8u: goto label_46f7e8;
        case 0x46f7ecu: goto label_46f7ec;
        case 0x46f7f0u: goto label_46f7f0;
        case 0x46f7f4u: goto label_46f7f4;
        case 0x46f7f8u: goto label_46f7f8;
        case 0x46f7fcu: goto label_46f7fc;
        case 0x46f800u: goto label_46f800;
        case 0x46f804u: goto label_46f804;
        case 0x46f808u: goto label_46f808;
        case 0x46f80cu: goto label_46f80c;
        case 0x46f810u: goto label_46f810;
        case 0x46f814u: goto label_46f814;
        case 0x46f818u: goto label_46f818;
        case 0x46f81cu: goto label_46f81c;
        case 0x46f820u: goto label_46f820;
        case 0x46f824u: goto label_46f824;
        case 0x46f828u: goto label_46f828;
        case 0x46f82cu: goto label_46f82c;
        case 0x46f830u: goto label_46f830;
        case 0x46f834u: goto label_46f834;
        case 0x46f838u: goto label_46f838;
        case 0x46f83cu: goto label_46f83c;
        case 0x46f840u: goto label_46f840;
        case 0x46f844u: goto label_46f844;
        case 0x46f848u: goto label_46f848;
        case 0x46f84cu: goto label_46f84c;
        case 0x46f850u: goto label_46f850;
        case 0x46f854u: goto label_46f854;
        case 0x46f858u: goto label_46f858;
        case 0x46f85cu: goto label_46f85c;
        case 0x46f860u: goto label_46f860;
        case 0x46f864u: goto label_46f864;
        case 0x46f868u: goto label_46f868;
        case 0x46f86cu: goto label_46f86c;
        case 0x46f870u: goto label_46f870;
        case 0x46f874u: goto label_46f874;
        case 0x46f878u: goto label_46f878;
        case 0x46f87cu: goto label_46f87c;
        case 0x46f880u: goto label_46f880;
        case 0x46f884u: goto label_46f884;
        case 0x46f888u: goto label_46f888;
        case 0x46f88cu: goto label_46f88c;
        case 0x46f890u: goto label_46f890;
        case 0x46f894u: goto label_46f894;
        case 0x46f898u: goto label_46f898;
        case 0x46f89cu: goto label_46f89c;
        case 0x46f8a0u: goto label_46f8a0;
        case 0x46f8a4u: goto label_46f8a4;
        case 0x46f8a8u: goto label_46f8a8;
        case 0x46f8acu: goto label_46f8ac;
        default: break;
    }

    ctx->pc = 0x46f6a0u;

label_46f6a0:
    // 0x46f6a0: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x46f6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_46f6a4:
    // 0x46f6a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x46f6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_46f6a8:
    // 0x46f6a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46f6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_46f6ac:
    // 0x46f6ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46f6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46f6b0:
    // 0x46f6b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46f6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46f6b4:
    // 0x46f6b4: 0xafa40170  sw          $a0, 0x170($sp)
    ctx->pc = 0x46f6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 4));
label_46f6b8:
    // 0x46f6b8: 0xe7ac0180  swc1        $f12, 0x180($sp)
    ctx->pc = 0x46f6b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_46f6bc:
    // 0x46f6bc: 0xafa50190  sw          $a1, 0x190($sp)
    ctx->pc = 0x46f6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 5));
label_46f6c0:
    // 0x46f6c0: 0xafa601a0  sw          $a2, 0x1A0($sp)
    ctx->pc = 0x46f6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 6));
label_46f6c4:
    // 0x46f6c4: 0xafa701b0  sw          $a3, 0x1B0($sp)
    ctx->pc = 0x46f6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 7));
label_46f6c8:
    // 0x46f6c8: 0xafa801c0  sw          $t0, 0x1C0($sp)
    ctx->pc = 0x46f6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 8));
label_46f6cc:
    // 0x46f6cc: 0xafa901d0  sw          $t1, 0x1D0($sp)
    ctx->pc = 0x46f6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 9));
label_46f6d0:
    // 0x46f6d0: 0xafaa01e0  sw          $t2, 0x1E0($sp)
    ctx->pc = 0x46f6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 10));
label_46f6d4:
    // 0x46f6d4: 0xafab01f0  sw          $t3, 0x1F0($sp)
    ctx->pc = 0x46f6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 11));
label_46f6d8:
    // 0x46f6d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x46f6d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46f6dc:
    // 0x46f6dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x46f6dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46f6e0:
    // 0x46f6e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x46f6e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46f6e4:
    // 0x46f6e4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x46f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_46f6e8:
    // 0x46f6e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_46f6ec:
    if (ctx->pc == 0x46F6ECu) {
        ctx->pc = 0x46F6F0u;
        goto label_46f6f0;
    }
    ctx->pc = 0x46F6E8u;
    {
        const bool branch_taken_0x46f6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f6e8) {
            ctx->pc = 0x46F704u;
            goto label_46f704;
        }
    }
    ctx->pc = 0x46F6F0u;
label_46f6f0:
    // 0x46f6f0: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x46f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_46f6f4:
    // 0x46f6f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46f6f8:
    if (ctx->pc == 0x46F6F8u) {
        ctx->pc = 0x46F6FCu;
        goto label_46f6fc;
    }
    ctx->pc = 0x46F6F4u;
    {
        const bool branch_taken_0x46f6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f6f4) {
            ctx->pc = 0x46F704u;
            goto label_46f704;
        }
    }
    ctx->pc = 0x46F6FCu;
label_46f6fc:
    // 0x46f6fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f700:
    // 0x46f700: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x46f700u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46f704:
    // 0x46f704: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_46f708:
    if (ctx->pc == 0x46F708u) {
        ctx->pc = 0x46F70Cu;
        goto label_46f70c;
    }
    ctx->pc = 0x46F704u;
    {
        const bool branch_taken_0x46f704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f704) {
            ctx->pc = 0x46F720u;
            goto label_46f720;
        }
    }
    ctx->pc = 0x46F70Cu;
label_46f70c:
    // 0x46f70c: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x46f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_46f710:
    // 0x46f710: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46f714:
    if (ctx->pc == 0x46F714u) {
        ctx->pc = 0x46F718u;
        goto label_46f718;
    }
    ctx->pc = 0x46F710u;
    {
        const bool branch_taken_0x46f710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f710) {
            ctx->pc = 0x46F720u;
            goto label_46f720;
        }
    }
    ctx->pc = 0x46F718u;
label_46f718:
    // 0x46f718: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46f718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f71c:
    // 0x46f71c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x46f71cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46f720:
    // 0x46f720: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_46f724:
    if (ctx->pc == 0x46F724u) {
        ctx->pc = 0x46F728u;
        goto label_46f728;
    }
    ctx->pc = 0x46F720u;
    {
        const bool branch_taken_0x46f720 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f720) {
            ctx->pc = 0x46F73Cu;
            goto label_46f73c;
        }
    }
    ctx->pc = 0x46F728u;
label_46f728:
    // 0x46f728: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x46f728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_46f72c:
    // 0x46f72c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46f730:
    if (ctx->pc == 0x46F730u) {
        ctx->pc = 0x46F734u;
        goto label_46f734;
    }
    ctx->pc = 0x46F72Cu;
    {
        const bool branch_taken_0x46f72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f72c) {
            ctx->pc = 0x46F73Cu;
            goto label_46f73c;
        }
    }
    ctx->pc = 0x46F734u;
label_46f734:
    // 0x46f734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46f734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f738:
    // 0x46f738: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x46f738u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46f73c:
    // 0x46f73c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x46f73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_46f740:
    // 0x46f740: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_46f744:
    if (ctx->pc == 0x46F744u) {
        ctx->pc = 0x46F748u;
        goto label_46f748;
    }
    ctx->pc = 0x46F740u;
    {
        const bool branch_taken_0x46f740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46f740) {
            ctx->pc = 0x46F7F0u;
            goto label_46f7f0;
        }
    }
    ctx->pc = 0x46F748u;
label_46f748:
    // 0x46f748: 0x8f82b320  lw          $v0, -0x4CE0($gp)
    ctx->pc = 0x46f748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947616)));
label_46f74c:
    // 0x46f74c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_46f750:
    if (ctx->pc == 0x46F750u) {
        ctx->pc = 0x46F754u;
        goto label_46f754;
    }
    ctx->pc = 0x46F74Cu;
    {
        const bool branch_taken_0x46f74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f74c) {
            ctx->pc = 0x46F7F0u;
            goto label_46f7f0;
        }
    }
    ctx->pc = 0x46F754u;
label_46f754:
    // 0x46f754: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x46f754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_46f758:
    // 0x46f758: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46f758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46f75c:
    // 0x46f75c: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x46f75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_46f760:
    // 0x46f760: 0xc115ee8  jal         func_457BA0
label_46f764:
    if (ctx->pc == 0x46F764u) {
        ctx->pc = 0x46F768u;
        goto label_46f768;
    }
    ctx->pc = 0x46F760u;
    SET_GPR_U32(ctx, 31, 0x46F768u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x46F760u, 0x46F768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F768u;
label_46f768:
    // 0x46f768: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_46f76c:
    if (ctx->pc == 0x46F76Cu) {
        ctx->pc = 0x46F770u;
        goto label_46f770;
    }
    ctx->pc = 0x46F768u;
    {
        const bool branch_taken_0x46f768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f768) {
            ctx->pc = 0x46F7F0u;
            goto label_46f7f0;
        }
    }
    ctx->pc = 0x46F770u;
label_46f770:
    // 0x46f770: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x46f770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_46f774:
    // 0x46f774: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_46f778:
    if (ctx->pc == 0x46F778u) {
        ctx->pc = 0x46F77Cu;
        goto label_46f77c;
    }
    ctx->pc = 0x46F774u;
    {
        const bool branch_taken_0x46f774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f774) {
            ctx->pc = 0x46F7F0u;
            goto label_46f7f0;
        }
    }
    ctx->pc = 0x46F77Cu;
label_46f77c:
    // 0x46f77c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x46f77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_46f780:
    // 0x46f780: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46f780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46f784:
    // 0x46f784: 0x8fa60164  lw          $a2, 0x164($sp)
    ctx->pc = 0x46f784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_46f788:
    // 0x46f788: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x46f788u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_46f78c:
    // 0x46f78c: 0x24e7fbf0  addiu       $a3, $a3, -0x410
    ctx->pc = 0x46f78cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966256));
label_46f790:
    // 0x46f790: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x46f790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_46f794:
    // 0x46f794: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x46f794u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_46f798:
    // 0x46f798: 0x2529fc00  addiu       $t1, $t1, -0x400
    ctx->pc = 0x46f798u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966272));
label_46f79c:
    // 0x46f79c: 0xc113940  jal         func_44E500
label_46f7a0:
    if (ctx->pc == 0x46F7A0u) {
        ctx->pc = 0x46F7A4u;
        goto label_46f7a4;
    }
    ctx->pc = 0x46F79Cu;
    SET_GPR_U32(ctx, 31, 0x46F7A4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x46F79Cu, 0x46F7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F7A4u;
label_46f7a4:
    // 0x46f7a4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x46f7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_46f7a8:
    // 0x46f7a8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x46f7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_46f7ac:
    // 0x46f7ac: 0x24a5fc50  addiu       $a1, $a1, -0x3B0
    ctx->pc = 0x46f7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966352));
label_46f7b0:
    // 0x46f7b0: 0xc115c24  jal         func_457090
label_46f7b4:
    if (ctx->pc == 0x46F7B4u) {
        ctx->pc = 0x46F7B8u;
        goto label_46f7b8;
    }
    ctx->pc = 0x46F7B0u;
    SET_GPR_U32(ctx, 31, 0x46F7B8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x46F7B0u, 0x46F7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F7B8u;
label_46f7b8:
    // 0x46f7b8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x46f7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_46f7bc:
    // 0x46f7bc: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x46f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_46f7c0:
    // 0x46f7c0: 0x40f809  jalr        $v0
label_46f7c4:
    if (ctx->pc == 0x46F7C4u) {
        ctx->pc = 0x46F7C8u;
        goto label_46f7c8;
    }
    ctx->pc = 0x46F7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46F7C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F7C0u, 0x46F7C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46F7C8u;
label_46f7c8:
    // 0x46f7c8: 0xaf82b320  sw          $v0, -0x4CE0($gp)
    ctx->pc = 0x46f7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947616), GPR_U32(ctx, 2));
label_46f7cc:
    // 0x46f7cc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x46f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_46f7d0:
    // 0x46f7d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46f7d4:
    if (ctx->pc == 0x46F7D4u) {
        ctx->pc = 0x46F7D8u;
        goto label_46f7d8;
    }
    ctx->pc = 0x46F7D0u;
    {
        const bool branch_taken_0x46f7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f7d0) {
            ctx->pc = 0x46F7E0u;
            goto label_46f7e0;
        }
    }
    ctx->pc = 0x46F7D8u;
label_46f7d8:
    // 0x46f7d8: 0xd  break       0
    ctx->pc = 0x46f7d8u;
    runtime->handleBreak(rdram, ctx);
label_46f7dc:
    // 0x46f7dc: 0x0  nop
    ctx->pc = 0x46f7dcu;
    // NOP
label_46f7e0:
    // 0x46f7e0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x46f7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_46f7e4:
    // 0x46f7e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46f7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46f7e8:
    // 0x46f7e8: 0xc11392c  jal         func_44E4B0
label_46f7ec:
    if (ctx->pc == 0x46F7ECu) {
        ctx->pc = 0x46F7F0u;
        goto label_46f7f0;
    }
    ctx->pc = 0x46F7E8u;
    SET_GPR_U32(ctx, 31, 0x46F7F0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x46F7E8u, 0x46F7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F7F0u;
label_46f7f0:
    // 0x46f7f0: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x46f7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46f7f4:
    // 0x46f7f4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x46f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_46f7f8:
    // 0x46f7f8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x46f7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_46f7fc:
    // 0x46f7fc: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x46f7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_46f800:
    // 0x46f800: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x46f800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_46f804:
    // 0x46f804: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x46f804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_46f808:
    // 0x46f808: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x46f808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_46f80c:
    // 0x46f80c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x46f80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_46f810:
    // 0x46f810: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x46f810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_46f814:
    // 0x46f814: 0xc052608  jal         func_149820
label_46f818:
    if (ctx->pc == 0x46F818u) {
        ctx->pc = 0x46F81Cu;
        goto label_46f81c;
    }
    ctx->pc = 0x46F814u;
    SET_GPR_U32(ctx, 31, 0x46F81Cu);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x46F814u, 0x46F81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F81Cu;
label_46f81c:
    // 0x46f81c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x46f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_46f820:
    // 0x46f820: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x46f820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_46f824:
    // 0x46f824: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x46f824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_46f828:
    // 0x46f828: 0xc052608  jal         func_149820
label_46f82c:
    if (ctx->pc == 0x46F82Cu) {
        ctx->pc = 0x46F830u;
        goto label_46f830;
    }
    ctx->pc = 0x46F828u;
    SET_GPR_U32(ctx, 31, 0x46F830u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x46F828u, 0x46F830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F830u;
label_46f830:
    // 0x46f830: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x46f830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_46f834:
    // 0x46f834: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x46f834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_46f838:
    // 0x46f838: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x46f838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_46f83c:
    // 0x46f83c: 0xc052608  jal         func_149820
label_46f840:
    if (ctx->pc == 0x46F840u) {
        ctx->pc = 0x46F844u;
        goto label_46f844;
    }
    ctx->pc = 0x46F83Cu;
    SET_GPR_U32(ctx, 31, 0x46F844u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x46F83Cu, 0x46F844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F844u;
label_46f844:
    // 0x46f844: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x46f844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_46f848:
    // 0x46f848: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x46f848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_46f84c:
    // 0x46f84c: 0x8fa501d0  lw          $a1, 0x1D0($sp)
    ctx->pc = 0x46f84cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_46f850:
    // 0x46f850: 0xc052608  jal         func_149820
label_46f854:
    if (ctx->pc == 0x46F854u) {
        ctx->pc = 0x46F858u;
        goto label_46f858;
    }
    ctx->pc = 0x46F850u;
    SET_GPR_U32(ctx, 31, 0x46F858u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x46F850u, 0x46F858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F858u;
label_46f858:
    // 0x46f858: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x46f858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_46f85c:
    // 0x46f85c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x46f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_46f860:
    // 0x46f860: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x46f860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_46f864:
    // 0x46f864: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x46f864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_46f868:
    // 0x46f868: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x46f868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_46f86c:
    // 0x46f86c: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x46f86cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
label_46f870:
    // 0x46f870: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46f870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f874:
    // 0x46f874: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x46f874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_46f878:
    // 0x46f878: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x46f878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_46f87c:
    // 0x46f87c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x46f87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_46f880:
    // 0x46f880: 0xc11be50  jal         func_46F940
label_46f884:
    if (ctx->pc == 0x46F884u) {
        ctx->pc = 0x46F888u;
        goto label_46f888;
    }
    ctx->pc = 0x46F880u;
    SET_GPR_U32(ctx, 31, 0x46F888u);
    ctx->pc = 0x46F940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F940u, 0x46F880u, 0x46F888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F888u;
label_46f888:
    // 0x46f888: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x46f888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_46f88c:
    // 0x46f88c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x46f88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_46f890:
    // 0x46f890: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46f890u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46f894:
    // 0x46f894: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46f894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46f898:
    // 0x46f898: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46f898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46f89c:
    // 0x46f89c: 0x27bd0200  addiu       $sp, $sp, 0x200
    ctx->pc = 0x46f89cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_46f8a0:
    // 0x46f8a0: 0x3e00008  jr          $ra
label_46f8a4:
    if (ctx->pc == 0x46F8A4u) {
        ctx->pc = 0x46F8A8u;
        goto label_46f8a8;
    }
    ctx->pc = 0x46F8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46F8A8u;
label_46f8a8:
    // 0x46f8a8: 0x0  nop
    ctx->pc = 0x46f8a8u;
    // NOP
label_46f8ac:
    // 0x46f8ac: 0x0  nop
    ctx->pc = 0x46f8acu;
    // NOP
    ctx->pc = 0x46f8b0u;
}
