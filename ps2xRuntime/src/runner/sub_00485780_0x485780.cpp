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

// Function: sub_00485780
// Address: 0x485780 - 0x485aa0
void sub_00485780_0x485780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485780_0x485780");
#endif

    switch (ctx->pc) {
        case 0x485780u: goto label_485780;
        case 0x485784u: goto label_485784;
        case 0x485788u: goto label_485788;
        case 0x48578cu: goto label_48578c;
        case 0x485790u: goto label_485790;
        case 0x485794u: goto label_485794;
        case 0x485798u: goto label_485798;
        case 0x48579cu: goto label_48579c;
        case 0x4857a0u: goto label_4857a0;
        case 0x4857a4u: goto label_4857a4;
        case 0x4857a8u: goto label_4857a8;
        case 0x4857acu: goto label_4857ac;
        case 0x4857b0u: goto label_4857b0;
        case 0x4857b4u: goto label_4857b4;
        case 0x4857b8u: goto label_4857b8;
        case 0x4857bcu: goto label_4857bc;
        case 0x4857c0u: goto label_4857c0;
        case 0x4857c4u: goto label_4857c4;
        case 0x4857c8u: goto label_4857c8;
        case 0x4857ccu: goto label_4857cc;
        case 0x4857d0u: goto label_4857d0;
        case 0x4857d4u: goto label_4857d4;
        case 0x4857d8u: goto label_4857d8;
        case 0x4857dcu: goto label_4857dc;
        case 0x4857e0u: goto label_4857e0;
        case 0x4857e4u: goto label_4857e4;
        case 0x4857e8u: goto label_4857e8;
        case 0x4857ecu: goto label_4857ec;
        case 0x4857f0u: goto label_4857f0;
        case 0x4857f4u: goto label_4857f4;
        case 0x4857f8u: goto label_4857f8;
        case 0x4857fcu: goto label_4857fc;
        case 0x485800u: goto label_485800;
        case 0x485804u: goto label_485804;
        case 0x485808u: goto label_485808;
        case 0x48580cu: goto label_48580c;
        case 0x485810u: goto label_485810;
        case 0x485814u: goto label_485814;
        case 0x485818u: goto label_485818;
        case 0x48581cu: goto label_48581c;
        case 0x485820u: goto label_485820;
        case 0x485824u: goto label_485824;
        case 0x485828u: goto label_485828;
        case 0x48582cu: goto label_48582c;
        case 0x485830u: goto label_485830;
        case 0x485834u: goto label_485834;
        case 0x485838u: goto label_485838;
        case 0x48583cu: goto label_48583c;
        case 0x485840u: goto label_485840;
        case 0x485844u: goto label_485844;
        case 0x485848u: goto label_485848;
        case 0x48584cu: goto label_48584c;
        case 0x485850u: goto label_485850;
        case 0x485854u: goto label_485854;
        case 0x485858u: goto label_485858;
        case 0x48585cu: goto label_48585c;
        case 0x485860u: goto label_485860;
        case 0x485864u: goto label_485864;
        case 0x485868u: goto label_485868;
        case 0x48586cu: goto label_48586c;
        case 0x485870u: goto label_485870;
        case 0x485874u: goto label_485874;
        case 0x485878u: goto label_485878;
        case 0x48587cu: goto label_48587c;
        case 0x485880u: goto label_485880;
        case 0x485884u: goto label_485884;
        case 0x485888u: goto label_485888;
        case 0x48588cu: goto label_48588c;
        case 0x485890u: goto label_485890;
        case 0x485894u: goto label_485894;
        case 0x485898u: goto label_485898;
        case 0x48589cu: goto label_48589c;
        case 0x4858a0u: goto label_4858a0;
        case 0x4858a4u: goto label_4858a4;
        case 0x4858a8u: goto label_4858a8;
        case 0x4858acu: goto label_4858ac;
        case 0x4858b0u: goto label_4858b0;
        case 0x4858b4u: goto label_4858b4;
        case 0x4858b8u: goto label_4858b8;
        case 0x4858bcu: goto label_4858bc;
        case 0x4858c0u: goto label_4858c0;
        case 0x4858c4u: goto label_4858c4;
        case 0x4858c8u: goto label_4858c8;
        case 0x4858ccu: goto label_4858cc;
        case 0x4858d0u: goto label_4858d0;
        case 0x4858d4u: goto label_4858d4;
        case 0x4858d8u: goto label_4858d8;
        case 0x4858dcu: goto label_4858dc;
        case 0x4858e0u: goto label_4858e0;
        case 0x4858e4u: goto label_4858e4;
        case 0x4858e8u: goto label_4858e8;
        case 0x4858ecu: goto label_4858ec;
        case 0x4858f0u: goto label_4858f0;
        case 0x4858f4u: goto label_4858f4;
        case 0x4858f8u: goto label_4858f8;
        case 0x4858fcu: goto label_4858fc;
        case 0x485900u: goto label_485900;
        case 0x485904u: goto label_485904;
        case 0x485908u: goto label_485908;
        case 0x48590cu: goto label_48590c;
        case 0x485910u: goto label_485910;
        case 0x485914u: goto label_485914;
        case 0x485918u: goto label_485918;
        case 0x48591cu: goto label_48591c;
        case 0x485920u: goto label_485920;
        case 0x485924u: goto label_485924;
        case 0x485928u: goto label_485928;
        case 0x48592cu: goto label_48592c;
        case 0x485930u: goto label_485930;
        case 0x485934u: goto label_485934;
        case 0x485938u: goto label_485938;
        case 0x48593cu: goto label_48593c;
        case 0x485940u: goto label_485940;
        case 0x485944u: goto label_485944;
        case 0x485948u: goto label_485948;
        case 0x48594cu: goto label_48594c;
        case 0x485950u: goto label_485950;
        case 0x485954u: goto label_485954;
        case 0x485958u: goto label_485958;
        case 0x48595cu: goto label_48595c;
        case 0x485960u: goto label_485960;
        case 0x485964u: goto label_485964;
        case 0x485968u: goto label_485968;
        case 0x48596cu: goto label_48596c;
        case 0x485970u: goto label_485970;
        case 0x485974u: goto label_485974;
        case 0x485978u: goto label_485978;
        case 0x48597cu: goto label_48597c;
        case 0x485980u: goto label_485980;
        case 0x485984u: goto label_485984;
        case 0x485988u: goto label_485988;
        case 0x48598cu: goto label_48598c;
        case 0x485990u: goto label_485990;
        case 0x485994u: goto label_485994;
        case 0x485998u: goto label_485998;
        case 0x48599cu: goto label_48599c;
        case 0x4859a0u: goto label_4859a0;
        case 0x4859a4u: goto label_4859a4;
        case 0x4859a8u: goto label_4859a8;
        case 0x4859acu: goto label_4859ac;
        case 0x4859b0u: goto label_4859b0;
        case 0x4859b4u: goto label_4859b4;
        case 0x4859b8u: goto label_4859b8;
        case 0x4859bcu: goto label_4859bc;
        case 0x4859c0u: goto label_4859c0;
        case 0x4859c4u: goto label_4859c4;
        case 0x4859c8u: goto label_4859c8;
        case 0x4859ccu: goto label_4859cc;
        case 0x4859d0u: goto label_4859d0;
        case 0x4859d4u: goto label_4859d4;
        case 0x4859d8u: goto label_4859d8;
        case 0x4859dcu: goto label_4859dc;
        case 0x4859e0u: goto label_4859e0;
        case 0x4859e4u: goto label_4859e4;
        case 0x4859e8u: goto label_4859e8;
        case 0x4859ecu: goto label_4859ec;
        case 0x4859f0u: goto label_4859f0;
        case 0x4859f4u: goto label_4859f4;
        case 0x4859f8u: goto label_4859f8;
        case 0x4859fcu: goto label_4859fc;
        case 0x485a00u: goto label_485a00;
        case 0x485a04u: goto label_485a04;
        case 0x485a08u: goto label_485a08;
        case 0x485a0cu: goto label_485a0c;
        case 0x485a10u: goto label_485a10;
        case 0x485a14u: goto label_485a14;
        case 0x485a18u: goto label_485a18;
        case 0x485a1cu: goto label_485a1c;
        case 0x485a20u: goto label_485a20;
        case 0x485a24u: goto label_485a24;
        case 0x485a28u: goto label_485a28;
        case 0x485a2cu: goto label_485a2c;
        case 0x485a30u: goto label_485a30;
        case 0x485a34u: goto label_485a34;
        case 0x485a38u: goto label_485a38;
        case 0x485a3cu: goto label_485a3c;
        case 0x485a40u: goto label_485a40;
        case 0x485a44u: goto label_485a44;
        case 0x485a48u: goto label_485a48;
        case 0x485a4cu: goto label_485a4c;
        case 0x485a50u: goto label_485a50;
        case 0x485a54u: goto label_485a54;
        case 0x485a58u: goto label_485a58;
        case 0x485a5cu: goto label_485a5c;
        case 0x485a60u: goto label_485a60;
        case 0x485a64u: goto label_485a64;
        case 0x485a68u: goto label_485a68;
        case 0x485a6cu: goto label_485a6c;
        case 0x485a70u: goto label_485a70;
        case 0x485a74u: goto label_485a74;
        case 0x485a78u: goto label_485a78;
        case 0x485a7cu: goto label_485a7c;
        case 0x485a80u: goto label_485a80;
        case 0x485a84u: goto label_485a84;
        case 0x485a88u: goto label_485a88;
        case 0x485a8cu: goto label_485a8c;
        case 0x485a90u: goto label_485a90;
        case 0x485a94u: goto label_485a94;
        case 0x485a98u: goto label_485a98;
        case 0x485a9cu: goto label_485a9c;
        default: break;
    }

    ctx->pc = 0x485780u;

label_485780:
    // 0x485780: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x485780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
label_485784:
    // 0x485784: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x485784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_485788:
    // 0x485788: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x485788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_48578c:
    // 0x48578c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x48578cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_485790:
    // 0x485790: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x485790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_485794:
    // 0x485794: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x485794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_485798:
    // 0x485798: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x485798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_48579c:
    // 0x48579c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48579cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4857a0:
    // 0x4857a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4857a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4857a4:
    // 0x4857a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4857a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4857a8:
    // 0x4857a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4857a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4857ac:
    // 0x4857ac: 0xafa401e0  sw          $a0, 0x1E0($sp)
    ctx->pc = 0x4857acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 4));
label_4857b0:
    // 0x4857b0: 0xafa501f0  sw          $a1, 0x1F0($sp)
    ctx->pc = 0x4857b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 5));
label_4857b4:
    // 0x4857b4: 0xafa60200  sw          $a2, 0x200($sp)
    ctx->pc = 0x4857b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 6));
label_4857b8:
    // 0x4857b8: 0xe7ac0210  swc1        $f12, 0x210($sp)
    ctx->pc = 0x4857b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_4857bc:
    // 0x4857bc: 0xafa70220  sw          $a3, 0x220($sp)
    ctx->pc = 0x4857bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 7));
label_4857c0:
    // 0x4857c0: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x4857c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_4857c4:
    // 0x4857c4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_4857c8:
    if (ctx->pc == 0x4857C8u) {
        ctx->pc = 0x4857CCu;
        goto label_4857cc;
    }
    ctx->pc = 0x4857C4u;
    {
        const bool branch_taken_0x4857c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4857c4) {
            ctx->pc = 0x485870u;
            goto label_485870;
        }
    }
    ctx->pc = 0x4857CCu;
label_4857cc:
    // 0x4857cc: 0x8f82b5a4  lw          $v0, -0x4A5C($gp)
    ctx->pc = 0x4857ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948260)));
label_4857d0:
    // 0x4857d0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_4857d4:
    if (ctx->pc == 0x4857D4u) {
        ctx->pc = 0x4857D8u;
        goto label_4857d8;
    }
    ctx->pc = 0x4857D0u;
    {
        const bool branch_taken_0x4857d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4857d0) {
            ctx->pc = 0x485870u;
            goto label_485870;
        }
    }
    ctx->pc = 0x4857D8u;
label_4857d8:
    // 0x4857d8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4857d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4857dc:
    // 0x4857dc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4857dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4857e0:
    // 0x4857e0: 0x27a601b8  addiu       $a2, $sp, 0x1B8
    ctx->pc = 0x4857e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_4857e4:
    // 0x4857e4: 0xc115ee8  jal         func_457BA0
label_4857e8:
    if (ctx->pc == 0x4857E8u) {
        ctx->pc = 0x4857ECu;
        goto label_4857ec;
    }
    ctx->pc = 0x4857E4u;
    SET_GPR_U32(ctx, 31, 0x4857ECu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4857E4u, 0x4857ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4857ECu;
label_4857ec:
    // 0x4857ec: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_4857f0:
    if (ctx->pc == 0x4857F0u) {
        ctx->pc = 0x4857F4u;
        goto label_4857f4;
    }
    ctx->pc = 0x4857ECu;
    {
        const bool branch_taken_0x4857ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4857ec) {
            ctx->pc = 0x485870u;
            goto label_485870;
        }
    }
    ctx->pc = 0x4857F4u;
label_4857f4:
    // 0x4857f4: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x4857f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_4857f8:
    // 0x4857f8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_4857fc:
    if (ctx->pc == 0x4857FCu) {
        ctx->pc = 0x485800u;
        goto label_485800;
    }
    ctx->pc = 0x4857F8u;
    {
        const bool branch_taken_0x4857f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4857f8) {
            ctx->pc = 0x485870u;
            goto label_485870;
        }
    }
    ctx->pc = 0x485800u;
label_485800:
    // 0x485800: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x485800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_485804:
    // 0x485804: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x485804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_485808:
    // 0x485808: 0x8fa601bc  lw          $a2, 0x1BC($sp)
    ctx->pc = 0x485808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_48580c:
    // 0x48580c: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48580cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_485810:
    // 0x485810: 0x24e73d00  addiu       $a3, $a3, 0x3D00
    ctx->pc = 0x485810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15616));
label_485814:
    // 0x485814: 0x2408009b  addiu       $t0, $zero, 0x9B
    ctx->pc = 0x485814u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
label_485818:
    // 0x485818: 0x2789b5a8  addiu       $t1, $gp, -0x4A58
    ctx->pc = 0x485818u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948264));
label_48581c:
    // 0x48581c: 0xc113940  jal         func_44E500
label_485820:
    if (ctx->pc == 0x485820u) {
        ctx->pc = 0x485824u;
        goto label_485824;
    }
    ctx->pc = 0x48581Cu;
    SET_GPR_U32(ctx, 31, 0x485824u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48581Cu, 0x485824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485824u;
label_485824:
    // 0x485824: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x485824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_485828:
    // 0x485828: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x485828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48582c:
    // 0x48582c: 0x24a53d20  addiu       $a1, $a1, 0x3D20
    ctx->pc = 0x48582cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15648));
label_485830:
    // 0x485830: 0xc115c24  jal         func_457090
label_485834:
    if (ctx->pc == 0x485834u) {
        ctx->pc = 0x485838u;
        goto label_485838;
    }
    ctx->pc = 0x485830u;
    SET_GPR_U32(ctx, 31, 0x485838u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x485830u, 0x485838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485838u;
label_485838:
    // 0x485838: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x485838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_48583c:
    // 0x48583c: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x48583cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_485840:
    // 0x485840: 0x40f809  jalr        $v0
label_485844:
    if (ctx->pc == 0x485844u) {
        ctx->pc = 0x485848u;
        goto label_485848;
    }
    ctx->pc = 0x485840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x485848u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485840u, 0x485848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x485848u;
label_485848:
    // 0x485848: 0xaf82b5a4  sw          $v0, -0x4A5C($gp)
    ctx->pc = 0x485848u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948260), GPR_U32(ctx, 2));
label_48584c:
    // 0x48584c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x48584cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_485850:
    // 0x485850: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_485854:
    if (ctx->pc == 0x485854u) {
        ctx->pc = 0x485858u;
        goto label_485858;
    }
    ctx->pc = 0x485850u;
    {
        const bool branch_taken_0x485850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x485850) {
            ctx->pc = 0x485860u;
            goto label_485860;
        }
    }
    ctx->pc = 0x485858u;
label_485858:
    // 0x485858: 0xd  break       0
    ctx->pc = 0x485858u;
    runtime->handleBreak(rdram, ctx);
label_48585c:
    // 0x48585c: 0x0  nop
    ctx->pc = 0x48585cu;
    // NOP
label_485860:
    // 0x485860: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x485860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_485864:
    // 0x485864: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x485864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_485868:
    // 0x485868: 0xc11392c  jal         func_44E4B0
label_48586c:
    if (ctx->pc == 0x48586Cu) {
        ctx->pc = 0x485870u;
        goto label_485870;
    }
    ctx->pc = 0x485868u;
    SET_GPR_U32(ctx, 31, 0x485870u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x485868u, 0x485870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485870u;
label_485870:
    // 0x485870: 0xafa001dc  sw          $zero, 0x1DC($sp)
    ctx->pc = 0x485870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 0));
label_485874:
    // 0x485874: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x485874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_485878:
    // 0x485878: 0xc0e2876  jal         func_38A1D8
label_48587c:
    if (ctx->pc == 0x48587Cu) {
        ctx->pc = 0x485880u;
        goto label_485880;
    }
    ctx->pc = 0x485878u;
    SET_GPR_U32(ctx, 31, 0x485880u);
    ctx->pc = 0x38A1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A1D8u, 0x485878u, 0x485880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485880u;
label_485880:
    // 0x485880: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x485880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
label_485884:
    // 0x485884: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x485884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_485888:
    // 0x485888: 0x10000068  b           . + 4 + (0x68 << 2)
label_48588c:
    if (ctx->pc == 0x48588Cu) {
        ctx->pc = 0x485890u;
        goto label_485890;
    }
    ctx->pc = 0x485888u;
    {
        const bool branch_taken_0x485888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x485888) {
            ctx->pc = 0x485A2Cu;
            goto label_485a2c;
        }
    }
    ctx->pc = 0x485890u;
label_485890:
    // 0x485890: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x485890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_485894:
    // 0x485894: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x485894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485898:
    // 0x485898: 0xc124e74  jal         func_4939D0
label_48589c:
    if (ctx->pc == 0x48589Cu) {
        ctx->pc = 0x4858A0u;
        goto label_4858a0;
    }
    ctx->pc = 0x485898u;
    SET_GPR_U32(ctx, 31, 0x4858A0u);
    ctx->pc = 0x4939D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4939D0u, 0x485898u, 0x4858A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4858A0u;
label_4858a0:
    // 0x4858a0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4858a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4858a4:
    // 0x4858a4: 0x8e7e0004  lw          $fp, 0x4($s3)
    ctx->pc = 0x4858a4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4858a8:
    // 0x4858a8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x4858a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4858ac:
    // 0x4858ac: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4858acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4858b0:
    // 0x4858b0: 0xc0e0c3a  jal         func_3830E8
label_4858b4:
    if (ctx->pc == 0x4858B4u) {
        ctx->pc = 0x4858B8u;
        goto label_4858b8;
    }
    ctx->pc = 0x4858B0u;
    SET_GPR_U32(ctx, 31, 0x4858B8u);
    ctx->pc = 0x3830E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3830E8u, 0x4858B0u, 0x4858B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4858B8u;
label_4858b8:
    // 0x4858b8: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x4858b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
label_4858bc:
    // 0x4858bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4858bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4858c0:
    // 0x4858c0: 0x10000033  b           . + 4 + (0x33 << 2)
label_4858c4:
    if (ctx->pc == 0x4858C4u) {
        ctx->pc = 0x4858C8u;
        goto label_4858c8;
    }
    ctx->pc = 0x4858C0u;
    {
        const bool branch_taken_0x4858c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4858c0) {
            ctx->pc = 0x485990u;
            goto label_485990;
        }
    }
    ctx->pc = 0x4858C8u;
label_4858c8:
    // 0x4858c8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4858c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4858cc:
    // 0x4858cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4858ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4858d0:
    // 0x4858d0: 0xc0e0c2e  jal         func_3830B8
label_4858d4:
    if (ctx->pc == 0x4858D4u) {
        ctx->pc = 0x4858D8u;
        goto label_4858d8;
    }
    ctx->pc = 0x4858D0u;
    SET_GPR_U32(ctx, 31, 0x4858D8u);
    ctx->pc = 0x3830B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3830B8u, 0x4858D0u, 0x4858D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4858D8u;
label_4858d8:
    // 0x4858d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4858d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4858dc:
    // 0x4858dc: 0x1220002b  beqz        $s1, . + 4 + (0x2B << 2)
label_4858e0:
    if (ctx->pc == 0x4858E0u) {
        ctx->pc = 0x4858E4u;
        goto label_4858e4;
    }
    ctx->pc = 0x4858DCu;
    {
        const bool branch_taken_0x4858dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4858dc) {
            ctx->pc = 0x48598Cu;
            goto label_48598c;
        }
    }
    ctx->pc = 0x4858E4u;
label_4858e4:
    // 0x4858e4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4858e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4858e8:
    // 0x4858e8: 0x2785b5b0  addiu       $a1, $gp, -0x4A50
    ctx->pc = 0x4858e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948272));
label_4858ec:
    // 0x4858ec: 0xc0bc48e  jal         func_2F1238
label_4858f0:
    if (ctx->pc == 0x4858F0u) {
        ctx->pc = 0x4858F4u;
        goto label_4858f4;
    }
    ctx->pc = 0x4858ECu;
    SET_GPR_U32(ctx, 31, 0x4858F4u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x4858ECu, 0x4858F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4858F4u;
label_4858f4:
    // 0x4858f4: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_4858f8:
    if (ctx->pc == 0x4858F8u) {
        ctx->pc = 0x4858FCu;
        goto label_4858fc;
    }
    ctx->pc = 0x4858F4u;
    {
        const bool branch_taken_0x4858f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4858f4) {
            ctx->pc = 0x48598Cu;
            goto label_48598c;
        }
    }
    ctx->pc = 0x4858FCu;
label_4858fc:
    // 0x4858fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4858fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_485900:
    // 0x485900: 0xc0e0db8  jal         func_3836E0
label_485904:
    if (ctx->pc == 0x485904u) {
        ctx->pc = 0x485908u;
        goto label_485908;
    }
    ctx->pc = 0x485900u;
    SET_GPR_U32(ctx, 31, 0x485908u);
    ctx->pc = 0x3836E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3836E0u, 0x485900u, 0x485908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485908u;
label_485908:
    // 0x485908: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x485908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_48590c:
    // 0x48590c: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x48590cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_485910:
    // 0x485910: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_485914:
    if (ctx->pc == 0x485914u) {
        ctx->pc = 0x485918u;
        goto label_485918;
    }
    ctx->pc = 0x485910u;
    {
        const bool branch_taken_0x485910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x485910) {
            ctx->pc = 0x4859A0u;
            goto label_4859a0;
        }
    }
    ctx->pc = 0x485918u;
label_485918:
    // 0x485918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x485918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48591c:
    // 0x48591c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48591cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_485920:
    // 0x485920: 0xc0e0dc6  jal         func_383718
label_485924:
    if (ctx->pc == 0x485924u) {
        ctx->pc = 0x485928u;
        goto label_485928;
    }
    ctx->pc = 0x485920u;
    SET_GPR_U32(ctx, 31, 0x485928u);
    ctx->pc = 0x383718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383718u, 0x485920u, 0x485928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485928u;
label_485928:
    // 0x485928: 0xafa201cc  sw          $v0, 0x1CC($sp)
    ctx->pc = 0x485928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
label_48592c:
    // 0x48592c: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x48592cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_485930:
    // 0x485930: 0x8fa501cc  lw          $a1, 0x1CC($sp)
    ctx->pc = 0x485930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
label_485934:
    // 0x485934: 0xc124fec  jal         func_493FB0
label_485938:
    if (ctx->pc == 0x485938u) {
        ctx->pc = 0x48593Cu;
        goto label_48593c;
    }
    ctx->pc = 0x485934u;
    SET_GPR_U32(ctx, 31, 0x48593Cu);
    ctx->pc = 0x493FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493FB0u, 0x485934u, 0x48593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48593Cu;
label_48593c:
    // 0x48593c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x48593cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_485940:
    // 0x485940: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
label_485944:
    if (ctx->pc == 0x485944u) {
        ctx->pc = 0x485948u;
        goto label_485948;
    }
    ctx->pc = 0x485940u;
    {
        const bool branch_taken_0x485940 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x485940) {
            ctx->pc = 0x485960u;
            goto label_485960;
        }
    }
    ctx->pc = 0x485948u;
label_485948:
    // 0x485948: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x485948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_48594c:
    // 0x48594c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x48594cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_485950:
    // 0x485950: 0x24a55aa0  addiu       $a1, $a1, 0x5AA0
    ctx->pc = 0x485950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23200));
label_485954:
    // 0x485954: 0x27a601dc  addiu       $a2, $sp, 0x1DC
    ctx->pc = 0x485954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
label_485958:
    // 0x485958: 0xc10657a  jal         func_4195E8
label_48595c:
    if (ctx->pc == 0x48595Cu) {
        ctx->pc = 0x485960u;
        goto label_485960;
    }
    ctx->pc = 0x485958u;
    SET_GPR_U32(ctx, 31, 0x485960u);
    ctx->pc = 0x4195E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4195E8u, 0x485958u, 0x485960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485960u;
label_485960:
    // 0x485960: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x485960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_485964:
    // 0x485964: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_485968:
    if (ctx->pc == 0x485968u) {
        ctx->pc = 0x48596Cu;
        goto label_48596c;
    }
    ctx->pc = 0x485964u;
    {
        const bool branch_taken_0x485964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x485964) {
            ctx->pc = 0x48597Cu;
            goto label_48597c;
        }
    }
    ctx->pc = 0x48596Cu;
label_48596c:
    // 0x48596c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_485970:
    // 0x485970: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x485970u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_485974:
    // 0x485974: 0x10000002  b           . + 4 + (0x2 << 2)
label_485978:
    if (ctx->pc == 0x485978u) {
        ctx->pc = 0x48597Cu;
        goto label_48597c;
    }
    ctx->pc = 0x485974u;
    {
        const bool branch_taken_0x485974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x485974) {
            ctx->pc = 0x485980u;
            goto label_485980;
        }
    }
    ctx->pc = 0x48597Cu;
label_48597c:
    // 0x48597c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x48597cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_485980:
    // 0x485980: 0x32b700ff  andi        $s7, $s5, 0xFF
    ctx->pc = 0x485980u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_485984:
    // 0x485984: 0x10000006  b           . + 4 + (0x6 << 2)
label_485988:
    if (ctx->pc == 0x485988u) {
        ctx->pc = 0x48598Cu;
        goto label_48598c;
    }
    ctx->pc = 0x485984u;
    {
        const bool branch_taken_0x485984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x485984) {
            ctx->pc = 0x4859A0u;
            goto label_4859a0;
        }
    }
    ctx->pc = 0x48598Cu;
label_48598c:
    // 0x48598c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x48598cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_485990:
    // 0x485990: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x485990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_485994:
    // 0x485994: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x485994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_485998:
    // 0x485998: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
label_48599c:
    if (ctx->pc == 0x48599Cu) {
        ctx->pc = 0x4859A0u;
        goto label_4859a0;
    }
    ctx->pc = 0x485998u;
    {
        const bool branch_taken_0x485998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x485998) {
            ctx->pc = 0x4858C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4858c8;
        }
    }
    ctx->pc = 0x4859A0u;
label_4859a0:
    // 0x4859a0: 0x16e0000c  bnez        $s7, . + 4 + (0xC << 2)
label_4859a4:
    if (ctx->pc == 0x4859A4u) {
        ctx->pc = 0x4859A8u;
        goto label_4859a8;
    }
    ctx->pc = 0x4859A0u;
    {
        const bool branch_taken_0x4859a0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x4859a0) {
            ctx->pc = 0x4859D4u;
            goto label_4859d4;
        }
    }
    ctx->pc = 0x4859A8u;
label_4859a8:
    // 0x4859a8: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x4859a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_4859ac:
    // 0x4859ac: 0xc0e2876  jal         func_38A1D8
label_4859b0:
    if (ctx->pc == 0x4859B0u) {
        ctx->pc = 0x4859B4u;
        goto label_4859b4;
    }
    ctx->pc = 0x4859ACu;
    SET_GPR_U32(ctx, 31, 0x4859B4u);
    ctx->pc = 0x38A1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A1D8u, 0x4859ACu, 0x4859B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4859B4u;
label_4859b4:
    // 0x4859b4: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x4859b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4859b8:
    // 0x4859b8: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_4859bc:
    if (ctx->pc == 0x4859BCu) {
        ctx->pc = 0x4859C0u;
        goto label_4859c0;
    }
    ctx->pc = 0x4859B8u;
    {
        const bool branch_taken_0x4859b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4859b8) {
            ctx->pc = 0x4859D4u;
            goto label_4859d4;
        }
    }
    ctx->pc = 0x4859C0u;
label_4859c0:
    // 0x4859c0: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x4859c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_4859c4:
    // 0x4859c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4859c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4859c8:
    // 0x4859c8: 0xc124e74  jal         func_4939D0
label_4859cc:
    if (ctx->pc == 0x4859CCu) {
        ctx->pc = 0x4859D0u;
        goto label_4859d0;
    }
    ctx->pc = 0x4859C8u;
    SET_GPR_U32(ctx, 31, 0x4859D0u);
    ctx->pc = 0x4939D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4939D0u, 0x4859C8u, 0x4859D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4859D0u;
label_4859d0:
    // 0x4859d0: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x4859d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
label_4859d4:
    // 0x4859d4: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x4859d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_4859d8:
    // 0x4859d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4859dc:
    if (ctx->pc == 0x4859DCu) {
        ctx->pc = 0x4859E0u;
        goto label_4859e0;
    }
    ctx->pc = 0x4859D8u;
    {
        const bool branch_taken_0x4859d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4859d8) {
            ctx->pc = 0x4859F0u;
            goto label_4859f0;
        }
    }
    ctx->pc = 0x4859E0u;
label_4859e0:
    // 0x4859e0: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x4859e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_4859e4:
    // 0x4859e4: 0x8c540018  lw          $s4, 0x18($v0)
    ctx->pc = 0x4859e4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_4859e8:
    // 0x4859e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_4859ec:
    if (ctx->pc == 0x4859ECu) {
        ctx->pc = 0x4859F0u;
        goto label_4859f0;
    }
    ctx->pc = 0x4859E8u;
    {
        const bool branch_taken_0x4859e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4859e8) {
            ctx->pc = 0x4859F4u;
            goto label_4859f4;
        }
    }
    ctx->pc = 0x4859F0u;
label_4859f0:
    // 0x4859f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4859f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4859f4:
    // 0x4859f4: 0xafb401c8  sw          $s4, 0x1C8($sp)
    ctx->pc = 0x4859f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 20));
label_4859f8:
    // 0x4859f8: 0x8fa50200  lw          $a1, 0x200($sp)
    ctx->pc = 0x4859f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_4859fc:
    // 0x4859fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4859fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_485a00:
    // 0x485a00: 0x8fa601c8  lw          $a2, 0x1C8($sp)
    ctx->pc = 0x485a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_485a04:
    // 0x485a04: 0xc0c8784  jal         func_321E10
label_485a08:
    if (ctx->pc == 0x485A08u) {
        ctx->pc = 0x485A0Cu;
        goto label_485a0c;
    }
    ctx->pc = 0x485A04u;
    SET_GPR_U32(ctx, 31, 0x485A0Cu);
    ctx->pc = 0x321E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321E10u, 0x485A04u, 0x485A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485A0Cu;
label_485a0c:
    // 0x485a0c: 0xc7a00210  lwc1        $f0, 0x210($sp)
    ctx->pc = 0x485a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_485a10:
    // 0x485a10: 0x8f83b6d8  lw          $v1, -0x4928($gp)
    ctx->pc = 0x485a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
label_485a14:
    // 0x485a14: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x485a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_485a18:
    // 0x485a18: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x485a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_485a1c:
    // 0x485a1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x485a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_485a20:
    // 0x485a20: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x485a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_485a24:
    // 0x485a24: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x485a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_485a28:
    // 0x485a28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x485a28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_485a2c:
    // 0x485a2c: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x485a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_485a30:
    // 0x485a30: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x485a30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_485a34:
    // 0x485a34: 0x1460ff96  bnez        $v1, . + 4 + (-0x6A << 2)
label_485a38:
    if (ctx->pc == 0x485A38u) {
        ctx->pc = 0x485A3Cu;
        goto label_485a3c;
    }
    ctx->pc = 0x485A34u;
    {
        const bool branch_taken_0x485a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x485a34) {
            ctx->pc = 0x485890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_485890;
        }
    }
    ctx->pc = 0x485A3Cu;
label_485a3c:
    // 0x485a3c: 0x8fa30220  lw          $v1, 0x220($sp)
    ctx->pc = 0x485a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_485a40:
    // 0x485a40: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_485a44:
    if (ctx->pc == 0x485A44u) {
        ctx->pc = 0x485A48u;
        goto label_485a48;
    }
    ctx->pc = 0x485A40u;
    {
        const bool branch_taken_0x485a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x485a40) {
            ctx->pc = 0x485A60u;
            goto label_485a60;
        }
    }
    ctx->pc = 0x485A48u;
label_485a48:
    // 0x485a48: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x485a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_485a4c:
    // 0x485a4c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x485a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_485a50:
    // 0x485a50: 0x24a55b70  addiu       $a1, $a1, 0x5B70
    ctx->pc = 0x485a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23408));
label_485a54:
    // 0x485a54: 0x8fa60220  lw          $a2, 0x220($sp)
    ctx->pc = 0x485a54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_485a58:
    // 0x485a58: 0xc0e2628  jal         func_3898A0
label_485a5c:
    if (ctx->pc == 0x485A5Cu) {
        ctx->pc = 0x485A60u;
        goto label_485a60;
    }
    ctx->pc = 0x485A58u;
    SET_GPR_U32(ctx, 31, 0x485A60u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x485A58u, 0x485A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485A60u;
label_485a60:
    // 0x485a60: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x485a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_485a64:
    // 0x485a64: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x485a64u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_485a68:
    // 0x485a68: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x485a68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_485a6c:
    // 0x485a6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x485a6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_485a70:
    // 0x485a70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x485a70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_485a74:
    // 0x485a74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x485a74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_485a78:
    // 0x485a78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x485a78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_485a7c:
    // 0x485a7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x485a7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_485a80:
    // 0x485a80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x485a80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_485a84:
    // 0x485a84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x485a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_485a88:
    // 0x485a88: 0x27bd0230  addiu       $sp, $sp, 0x230
    ctx->pc = 0x485a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_485a8c:
    // 0x485a8c: 0x3e00008  jr          $ra
label_485a90:
    if (ctx->pc == 0x485A90u) {
        ctx->pc = 0x485A94u;
        goto label_485a94;
    }
    ctx->pc = 0x485A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485A94u;
label_485a94:
    // 0x485a94: 0x0  nop
    ctx->pc = 0x485a94u;
    // NOP
label_485a98:
    // 0x485a98: 0x0  nop
    ctx->pc = 0x485a98u;
    // NOP
label_485a9c:
    // 0x485a9c: 0x0  nop
    ctx->pc = 0x485a9cu;
    // NOP
    ctx->pc = 0x485aa0u;
}
