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

// Function: sub_0045F760
// Address: 0x45f760 - 0x45f980
void sub_0045F760_0x45f760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045F760_0x45f760");
#endif

    switch (ctx->pc) {
        case 0x45f760u: goto label_45f760;
        case 0x45f764u: goto label_45f764;
        case 0x45f768u: goto label_45f768;
        case 0x45f76cu: goto label_45f76c;
        case 0x45f770u: goto label_45f770;
        case 0x45f774u: goto label_45f774;
        case 0x45f778u: goto label_45f778;
        case 0x45f77cu: goto label_45f77c;
        case 0x45f780u: goto label_45f780;
        case 0x45f784u: goto label_45f784;
        case 0x45f788u: goto label_45f788;
        case 0x45f78cu: goto label_45f78c;
        case 0x45f790u: goto label_45f790;
        case 0x45f794u: goto label_45f794;
        case 0x45f798u: goto label_45f798;
        case 0x45f79cu: goto label_45f79c;
        case 0x45f7a0u: goto label_45f7a0;
        case 0x45f7a4u: goto label_45f7a4;
        case 0x45f7a8u: goto label_45f7a8;
        case 0x45f7acu: goto label_45f7ac;
        case 0x45f7b0u: goto label_45f7b0;
        case 0x45f7b4u: goto label_45f7b4;
        case 0x45f7b8u: goto label_45f7b8;
        case 0x45f7bcu: goto label_45f7bc;
        case 0x45f7c0u: goto label_45f7c0;
        case 0x45f7c4u: goto label_45f7c4;
        case 0x45f7c8u: goto label_45f7c8;
        case 0x45f7ccu: goto label_45f7cc;
        case 0x45f7d0u: goto label_45f7d0;
        case 0x45f7d4u: goto label_45f7d4;
        case 0x45f7d8u: goto label_45f7d8;
        case 0x45f7dcu: goto label_45f7dc;
        case 0x45f7e0u: goto label_45f7e0;
        case 0x45f7e4u: goto label_45f7e4;
        case 0x45f7e8u: goto label_45f7e8;
        case 0x45f7ecu: goto label_45f7ec;
        case 0x45f7f0u: goto label_45f7f0;
        case 0x45f7f4u: goto label_45f7f4;
        case 0x45f7f8u: goto label_45f7f8;
        case 0x45f7fcu: goto label_45f7fc;
        case 0x45f800u: goto label_45f800;
        case 0x45f804u: goto label_45f804;
        case 0x45f808u: goto label_45f808;
        case 0x45f80cu: goto label_45f80c;
        case 0x45f810u: goto label_45f810;
        case 0x45f814u: goto label_45f814;
        case 0x45f818u: goto label_45f818;
        case 0x45f81cu: goto label_45f81c;
        case 0x45f820u: goto label_45f820;
        case 0x45f824u: goto label_45f824;
        case 0x45f828u: goto label_45f828;
        case 0x45f82cu: goto label_45f82c;
        case 0x45f830u: goto label_45f830;
        case 0x45f834u: goto label_45f834;
        case 0x45f838u: goto label_45f838;
        case 0x45f83cu: goto label_45f83c;
        case 0x45f840u: goto label_45f840;
        case 0x45f844u: goto label_45f844;
        case 0x45f848u: goto label_45f848;
        case 0x45f84cu: goto label_45f84c;
        case 0x45f850u: goto label_45f850;
        case 0x45f854u: goto label_45f854;
        case 0x45f858u: goto label_45f858;
        case 0x45f85cu: goto label_45f85c;
        case 0x45f860u: goto label_45f860;
        case 0x45f864u: goto label_45f864;
        case 0x45f868u: goto label_45f868;
        case 0x45f86cu: goto label_45f86c;
        case 0x45f870u: goto label_45f870;
        case 0x45f874u: goto label_45f874;
        case 0x45f878u: goto label_45f878;
        case 0x45f87cu: goto label_45f87c;
        case 0x45f880u: goto label_45f880;
        case 0x45f884u: goto label_45f884;
        case 0x45f888u: goto label_45f888;
        case 0x45f88cu: goto label_45f88c;
        case 0x45f890u: goto label_45f890;
        case 0x45f894u: goto label_45f894;
        case 0x45f898u: goto label_45f898;
        case 0x45f89cu: goto label_45f89c;
        case 0x45f8a0u: goto label_45f8a0;
        case 0x45f8a4u: goto label_45f8a4;
        case 0x45f8a8u: goto label_45f8a8;
        case 0x45f8acu: goto label_45f8ac;
        case 0x45f8b0u: goto label_45f8b0;
        case 0x45f8b4u: goto label_45f8b4;
        case 0x45f8b8u: goto label_45f8b8;
        case 0x45f8bcu: goto label_45f8bc;
        case 0x45f8c0u: goto label_45f8c0;
        case 0x45f8c4u: goto label_45f8c4;
        case 0x45f8c8u: goto label_45f8c8;
        case 0x45f8ccu: goto label_45f8cc;
        case 0x45f8d0u: goto label_45f8d0;
        case 0x45f8d4u: goto label_45f8d4;
        case 0x45f8d8u: goto label_45f8d8;
        case 0x45f8dcu: goto label_45f8dc;
        case 0x45f8e0u: goto label_45f8e0;
        case 0x45f8e4u: goto label_45f8e4;
        case 0x45f8e8u: goto label_45f8e8;
        case 0x45f8ecu: goto label_45f8ec;
        case 0x45f8f0u: goto label_45f8f0;
        case 0x45f8f4u: goto label_45f8f4;
        case 0x45f8f8u: goto label_45f8f8;
        case 0x45f8fcu: goto label_45f8fc;
        case 0x45f900u: goto label_45f900;
        case 0x45f904u: goto label_45f904;
        case 0x45f908u: goto label_45f908;
        case 0x45f90cu: goto label_45f90c;
        case 0x45f910u: goto label_45f910;
        case 0x45f914u: goto label_45f914;
        case 0x45f918u: goto label_45f918;
        case 0x45f91cu: goto label_45f91c;
        case 0x45f920u: goto label_45f920;
        case 0x45f924u: goto label_45f924;
        case 0x45f928u: goto label_45f928;
        case 0x45f92cu: goto label_45f92c;
        case 0x45f930u: goto label_45f930;
        case 0x45f934u: goto label_45f934;
        case 0x45f938u: goto label_45f938;
        case 0x45f93cu: goto label_45f93c;
        case 0x45f940u: goto label_45f940;
        case 0x45f944u: goto label_45f944;
        case 0x45f948u: goto label_45f948;
        case 0x45f94cu: goto label_45f94c;
        case 0x45f950u: goto label_45f950;
        case 0x45f954u: goto label_45f954;
        case 0x45f958u: goto label_45f958;
        case 0x45f95cu: goto label_45f95c;
        case 0x45f960u: goto label_45f960;
        case 0x45f964u: goto label_45f964;
        case 0x45f968u: goto label_45f968;
        case 0x45f96cu: goto label_45f96c;
        case 0x45f970u: goto label_45f970;
        case 0x45f974u: goto label_45f974;
        case 0x45f978u: goto label_45f978;
        case 0x45f97cu: goto label_45f97c;
        default: break;
    }

    ctx->pc = 0x45f760u;

label_45f760:
    // 0x45f760: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x45f760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
label_45f764:
    // 0x45f764: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45f764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_45f768:
    // 0x45f768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45f768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45f76c:
    // 0x45f76c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45f76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45f770:
    // 0x45f770: 0xafa40290  sw          $a0, 0x290($sp)
    ctx->pc = 0x45f770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 4));
label_45f774:
    // 0x45f774: 0xafa502a0  sw          $a1, 0x2A0($sp)
    ctx->pc = 0x45f774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 5));
label_45f778:
    // 0x45f778: 0xafa602b0  sw          $a2, 0x2B0($sp)
    ctx->pc = 0x45f778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 6));
label_45f77c:
    // 0x45f77c: 0xafa702c0  sw          $a3, 0x2C0($sp)
    ctx->pc = 0x45f77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 7));
label_45f780:
    // 0x45f780: 0xafa802d0  sw          $t0, 0x2D0($sp)
    ctx->pc = 0x45f780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 8));
label_45f784:
    // 0x45f784: 0xafa902e0  sw          $t1, 0x2E0($sp)
    ctx->pc = 0x45f784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 9));
label_45f788:
    // 0x45f788: 0xafaa02f0  sw          $t2, 0x2F0($sp)
    ctx->pc = 0x45f788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 10));
label_45f78c:
    // 0x45f78c: 0x8fb10290  lw          $s1, 0x290($sp)
    ctx->pc = 0x45f78cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_45f790:
    // 0x45f790: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x45f790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_45f794:
    // 0x45f794: 0xafa20290  sw          $v0, 0x290($sp)
    ctx->pc = 0x45f794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
label_45f798:
    // 0x45f798: 0xafb102a0  sw          $s1, 0x2A0($sp)
    ctx->pc = 0x45f798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 17));
label_45f79c:
    // 0x45f79c: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x45f79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_45f7a0:
    // 0x45f7a0: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x45f7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_45f7a4:
    // 0x45f7a4: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x45f7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_45f7a8:
    // 0x45f7a8: 0xc11818c  jal         func_460630
label_45f7ac:
    if (ctx->pc == 0x45F7ACu) {
        ctx->pc = 0x45F7B0u;
        goto label_45f7b0;
    }
    ctx->pc = 0x45F7A8u;
    SET_GPR_U32(ctx, 31, 0x45F7B0u);
    ctx->pc = 0x460630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x460630u, 0x45F7A8u, 0x45F7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F7B0u;
label_45f7b0:
    // 0x45f7b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45f7b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45f7b4:
    // 0x45f7b4: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x45f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_45f7b8:
    // 0x45f7b8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_45f7bc:
    if (ctx->pc == 0x45F7BCu) {
        ctx->pc = 0x45F7C0u;
        goto label_45f7c0;
    }
    ctx->pc = 0x45F7B8u;
    {
        const bool branch_taken_0x45f7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45f7b8) {
            ctx->pc = 0x45F868u;
            goto label_45f868;
        }
    }
    ctx->pc = 0x45F7C0u;
label_45f7c0:
    // 0x45f7c0: 0x8f82b1a8  lw          $v0, -0x4E58($gp)
    ctx->pc = 0x45f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947240)));
label_45f7c4:
    // 0x45f7c4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_45f7c8:
    if (ctx->pc == 0x45F7C8u) {
        ctx->pc = 0x45F7CCu;
        goto label_45f7cc;
    }
    ctx->pc = 0x45F7C4u;
    {
        const bool branch_taken_0x45f7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f7c4) {
            ctx->pc = 0x45F868u;
            goto label_45f868;
        }
    }
    ctx->pc = 0x45F7CCu;
label_45f7cc:
    // 0x45f7cc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45f7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_45f7d0:
    // 0x45f7d0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45f7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45f7d4:
    // 0x45f7d4: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x45f7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_45f7d8:
    // 0x45f7d8: 0xc115ee8  jal         func_457BA0
label_45f7dc:
    if (ctx->pc == 0x45F7DCu) {
        ctx->pc = 0x45F7E0u;
        goto label_45f7e0;
    }
    ctx->pc = 0x45F7D8u;
    SET_GPR_U32(ctx, 31, 0x45F7E0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x45F7D8u, 0x45F7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F7E0u;
label_45f7e0:
    // 0x45f7e0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_45f7e4:
    if (ctx->pc == 0x45F7E4u) {
        ctx->pc = 0x45F7E8u;
        goto label_45f7e8;
    }
    ctx->pc = 0x45F7E0u;
    {
        const bool branch_taken_0x45f7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f7e0) {
            ctx->pc = 0x45F868u;
            goto label_45f868;
        }
    }
    ctx->pc = 0x45F7E8u;
label_45f7e8:
    // 0x45f7e8: 0x8fa20288  lw          $v0, 0x288($sp)
    ctx->pc = 0x45f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_45f7ec:
    // 0x45f7ec: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_45f7f0:
    if (ctx->pc == 0x45F7F0u) {
        ctx->pc = 0x45F7F4u;
        goto label_45f7f4;
    }
    ctx->pc = 0x45F7ECu;
    {
        const bool branch_taken_0x45f7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f7ec) {
            ctx->pc = 0x45F868u;
            goto label_45f868;
        }
    }
    ctx->pc = 0x45F7F4u;
label_45f7f4:
    // 0x45f7f4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x45f7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_45f7f8:
    // 0x45f7f8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45f7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45f7fc:
    // 0x45f7fc: 0x8fa60284  lw          $a2, 0x284($sp)
    ctx->pc = 0x45f7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
label_45f800:
    // 0x45f800: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x45f800u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_45f804:
    // 0x45f804: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x45f804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_45f808:
    // 0x45f808: 0x2408038f  addiu       $t0, $zero, 0x38F
    ctx->pc = 0x45f808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 911));
label_45f80c:
    // 0x45f80c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x45f80cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_45f810:
    // 0x45f810: 0x2529ee60  addiu       $t1, $t1, -0x11A0
    ctx->pc = 0x45f810u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294962784));
label_45f814:
    // 0x45f814: 0xc113940  jal         func_44E500
label_45f818:
    if (ctx->pc == 0x45F818u) {
        ctx->pc = 0x45F81Cu;
        goto label_45f81c;
    }
    ctx->pc = 0x45F814u;
    SET_GPR_U32(ctx, 31, 0x45F81Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x45F814u, 0x45F81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F81Cu;
label_45f81c:
    // 0x45f81c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x45f81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_45f820:
    // 0x45f820: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x45f820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_45f824:
    // 0x45f824: 0x24a5ee40  addiu       $a1, $a1, -0x11C0
    ctx->pc = 0x45f824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962752));
label_45f828:
    // 0x45f828: 0xc115c24  jal         func_457090
label_45f82c:
    if (ctx->pc == 0x45F82Cu) {
        ctx->pc = 0x45F830u;
        goto label_45f830;
    }
    ctx->pc = 0x45F828u;
    SET_GPR_U32(ctx, 31, 0x45F830u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x45F828u, 0x45F830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F830u;
label_45f830:
    // 0x45f830: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x45f830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_45f834:
    // 0x45f834: 0x8fa20288  lw          $v0, 0x288($sp)
    ctx->pc = 0x45f834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_45f838:
    // 0x45f838: 0x40f809  jalr        $v0
label_45f83c:
    if (ctx->pc == 0x45F83Cu) {
        ctx->pc = 0x45F840u;
        goto label_45f840;
    }
    ctx->pc = 0x45F838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45F840u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45F838u, 0x45F840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45F840u;
label_45f840:
    // 0x45f840: 0xaf82b1a8  sw          $v0, -0x4E58($gp)
    ctx->pc = 0x45f840u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947240), GPR_U32(ctx, 2));
label_45f844:
    // 0x45f844: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x45f844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_45f848:
    // 0x45f848: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_45f84c:
    if (ctx->pc == 0x45F84Cu) {
        ctx->pc = 0x45F850u;
        goto label_45f850;
    }
    ctx->pc = 0x45F848u;
    {
        const bool branch_taken_0x45f848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f848) {
            ctx->pc = 0x45F858u;
            goto label_45f858;
        }
    }
    ctx->pc = 0x45F850u;
label_45f850:
    // 0x45f850: 0xd  break       0
    ctx->pc = 0x45f850u;
    runtime->handleBreak(rdram, ctx);
label_45f854:
    // 0x45f854: 0x0  nop
    ctx->pc = 0x45f854u;
    // NOP
label_45f858:
    // 0x45f858: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x45f858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_45f85c:
    // 0x45f85c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45f85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45f860:
    // 0x45f860: 0xc11392c  jal         func_44E4B0
label_45f864:
    if (ctx->pc == 0x45F864u) {
        ctx->pc = 0x45F868u;
        goto label_45f868;
    }
    ctx->pc = 0x45F860u;
    SET_GPR_U32(ctx, 31, 0x45F868u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x45F860u, 0x45F868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F868u;
label_45f868:
    // 0x45f868: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x45f868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_45f86c:
    // 0x45f86c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_45f870:
    if (ctx->pc == 0x45F870u) {
        ctx->pc = 0x45F874u;
        goto label_45f874;
    }
    ctx->pc = 0x45F86Cu;
    {
        const bool branch_taken_0x45f86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45f86c) {
            ctx->pc = 0x45F91Cu;
            goto label_45f91c;
        }
    }
    ctx->pc = 0x45F874u;
label_45f874:
    // 0x45f874: 0x8f82b1ac  lw          $v0, -0x4E54($gp)
    ctx->pc = 0x45f874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947244)));
label_45f878:
    // 0x45f878: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_45f87c:
    if (ctx->pc == 0x45F87Cu) {
        ctx->pc = 0x45F880u;
        goto label_45f880;
    }
    ctx->pc = 0x45F878u;
    {
        const bool branch_taken_0x45f878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f878) {
            ctx->pc = 0x45F91Cu;
            goto label_45f91c;
        }
    }
    ctx->pc = 0x45F880u;
label_45f880:
    // 0x45f880: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45f880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_45f884:
    // 0x45f884: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45f884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45f888:
    // 0x45f888: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x45f888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_45f88c:
    // 0x45f88c: 0xc115ee8  jal         func_457BA0
label_45f890:
    if (ctx->pc == 0x45F890u) {
        ctx->pc = 0x45F894u;
        goto label_45f894;
    }
    ctx->pc = 0x45F88Cu;
    SET_GPR_U32(ctx, 31, 0x45F894u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x45F88Cu, 0x45F894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F894u;
label_45f894:
    // 0x45f894: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_45f898:
    if (ctx->pc == 0x45F898u) {
        ctx->pc = 0x45F89Cu;
        goto label_45f89c;
    }
    ctx->pc = 0x45F894u;
    {
        const bool branch_taken_0x45f894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f894) {
            ctx->pc = 0x45F91Cu;
            goto label_45f91c;
        }
    }
    ctx->pc = 0x45F89Cu;
label_45f89c:
    // 0x45f89c: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x45f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_45f8a0:
    // 0x45f8a0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_45f8a4:
    if (ctx->pc == 0x45F8A4u) {
        ctx->pc = 0x45F8A8u;
        goto label_45f8a8;
    }
    ctx->pc = 0x45F8A0u;
    {
        const bool branch_taken_0x45f8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f8a0) {
            ctx->pc = 0x45F91Cu;
            goto label_45f91c;
        }
    }
    ctx->pc = 0x45F8A8u;
label_45f8a8:
    // 0x45f8a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x45f8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45f8ac:
    // 0x45f8ac: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45f8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45f8b0:
    // 0x45f8b0: 0x8fa60274  lw          $a2, 0x274($sp)
    ctx->pc = 0x45f8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_45f8b4:
    // 0x45f8b4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x45f8b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_45f8b8:
    // 0x45f8b8: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x45f8b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_45f8bc:
    // 0x45f8bc: 0x24080390  addiu       $t0, $zero, 0x390
    ctx->pc = 0x45f8bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
label_45f8c0:
    // 0x45f8c0: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x45f8c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_45f8c4:
    // 0x45f8c4: 0x2529ee78  addiu       $t1, $t1, -0x1188
    ctx->pc = 0x45f8c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294962808));
label_45f8c8:
    // 0x45f8c8: 0xc113940  jal         func_44E500
label_45f8cc:
    if (ctx->pc == 0x45F8CCu) {
        ctx->pc = 0x45F8D0u;
        goto label_45f8d0;
    }
    ctx->pc = 0x45F8C8u;
    SET_GPR_U32(ctx, 31, 0x45F8D0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x45F8C8u, 0x45F8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F8D0u;
label_45f8d0:
    // 0x45f8d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x45f8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45f8d4:
    // 0x45f8d4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x45f8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_45f8d8:
    // 0x45f8d8: 0x24a5ee40  addiu       $a1, $a1, -0x11C0
    ctx->pc = 0x45f8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962752));
label_45f8dc:
    // 0x45f8dc: 0xc115c24  jal         func_457090
label_45f8e0:
    if (ctx->pc == 0x45F8E0u) {
        ctx->pc = 0x45F8E4u;
        goto label_45f8e4;
    }
    ctx->pc = 0x45F8DCu;
    SET_GPR_U32(ctx, 31, 0x45F8E4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x45F8DCu, 0x45F8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F8E4u;
label_45f8e4:
    // 0x45f8e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x45f8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45f8e8:
    // 0x45f8e8: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x45f8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_45f8ec:
    // 0x45f8ec: 0x40f809  jalr        $v0
label_45f8f0:
    if (ctx->pc == 0x45F8F0u) {
        ctx->pc = 0x45F8F4u;
        goto label_45f8f4;
    }
    ctx->pc = 0x45F8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45F8F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45F8ECu, 0x45F8F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45F8F4u;
label_45f8f4:
    // 0x45f8f4: 0xaf82b1ac  sw          $v0, -0x4E54($gp)
    ctx->pc = 0x45f8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947244), GPR_U32(ctx, 2));
label_45f8f8:
    // 0x45f8f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x45f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_45f8fc:
    // 0x45f8fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_45f900:
    if (ctx->pc == 0x45F900u) {
        ctx->pc = 0x45F904u;
        goto label_45f904;
    }
    ctx->pc = 0x45F8FCu;
    {
        const bool branch_taken_0x45f8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f8fc) {
            ctx->pc = 0x45F90Cu;
            goto label_45f90c;
        }
    }
    ctx->pc = 0x45F904u;
label_45f904:
    // 0x45f904: 0xd  break       0
    ctx->pc = 0x45f904u;
    runtime->handleBreak(rdram, ctx);
label_45f908:
    // 0x45f908: 0x0  nop
    ctx->pc = 0x45f908u;
    // NOP
label_45f90c:
    // 0x45f90c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x45f90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45f910:
    // 0x45f910: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45f910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45f914:
    // 0x45f914: 0xc11392c  jal         func_44E4B0
label_45f918:
    if (ctx->pc == 0x45F918u) {
        ctx->pc = 0x45F91Cu;
        goto label_45f91c;
    }
    ctx->pc = 0x45F914u;
    SET_GPR_U32(ctx, 31, 0x45F91Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x45F914u, 0x45F91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F91Cu;
label_45f91c:
    // 0x45f91c: 0x8fa302c0  lw          $v1, 0x2C0($sp)
    ctx->pc = 0x45f91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_45f920:
    // 0x45f920: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45f920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45f924:
    // 0x45f924: 0xac434e2c  sw          $v1, 0x4E2C($v0)
    ctx->pc = 0x45f924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20012), GPR_U32(ctx, 3));
label_45f928:
    // 0x45f928: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x45f928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_45f92c:
    // 0x45f92c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45f930:
    // 0x45f930: 0xac434e30  sw          $v1, 0x4E30($v0)
    ctx->pc = 0x45f930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20016), GPR_U32(ctx, 3));
label_45f934:
    // 0x45f934: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x45f934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_45f938:
    // 0x45f938: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45f938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45f93c:
    // 0x45f93c: 0xac434e34  sw          $v1, 0x4E34($v0)
    ctx->pc = 0x45f93cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20020), GPR_U32(ctx, 3));
label_45f940:
    // 0x45f940: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x45f940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_45f944:
    // 0x45f944: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45f944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45f948:
    // 0x45f948: 0xac434e08  sw          $v1, 0x4E08($v0)
    ctx->pc = 0x45f948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 19976), GPR_U32(ctx, 3));
label_45f94c:
    // 0x45f94c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x45f94cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_45f950:
    // 0x45f950: 0x24844e7c  addiu       $a0, $a0, 0x4E7C
    ctx->pc = 0x45f950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20092));
label_45f954:
    // 0x45f954: 0x8fa502b0  lw          $a1, 0x2B0($sp)
    ctx->pc = 0x45f954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_45f958:
    // 0x45f958: 0xc0bc5c6  jal         func_2F1718
label_45f95c:
    if (ctx->pc == 0x45F95Cu) {
        ctx->pc = 0x45F960u;
        goto label_45f960;
    }
    ctx->pc = 0x45F958u;
    SET_GPR_U32(ctx, 31, 0x45F960u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x45F958u, 0x45F960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F960u;
label_45f960:
    // 0x45f960: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x45f960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45f964:
    // 0x45f964: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45f964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_45f968:
    // 0x45f968: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45f968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45f96c:
    // 0x45f96c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45f96cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45f970:
    // 0x45f970: 0x27bd0300  addiu       $sp, $sp, 0x300
    ctx->pc = 0x45f970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_45f974:
    // 0x45f974: 0x3e00008  jr          $ra
label_45f978:
    if (ctx->pc == 0x45F978u) {
        ctx->pc = 0x45F97Cu;
        goto label_45f97c;
    }
    ctx->pc = 0x45F974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45F974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45F97Cu;
label_45f97c:
    // 0x45f97c: 0x0  nop
    ctx->pc = 0x45f97cu;
    // NOP
    ctx->pc = 0x45f980u;
}
