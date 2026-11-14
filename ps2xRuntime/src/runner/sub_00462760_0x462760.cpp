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

// Function: sub_00462760
// Address: 0x462760 - 0x462d20
void sub_00462760_0x462760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00462760_0x462760");
#endif

    switch (ctx->pc) {
        case 0x462760u: goto label_462760;
        case 0x462764u: goto label_462764;
        case 0x462768u: goto label_462768;
        case 0x46276cu: goto label_46276c;
        case 0x462770u: goto label_462770;
        case 0x462774u: goto label_462774;
        case 0x462778u: goto label_462778;
        case 0x46277cu: goto label_46277c;
        case 0x462780u: goto label_462780;
        case 0x462784u: goto label_462784;
        case 0x462788u: goto label_462788;
        case 0x46278cu: goto label_46278c;
        case 0x462790u: goto label_462790;
        case 0x462794u: goto label_462794;
        case 0x462798u: goto label_462798;
        case 0x46279cu: goto label_46279c;
        case 0x4627a0u: goto label_4627a0;
        case 0x4627a4u: goto label_4627a4;
        case 0x4627a8u: goto label_4627a8;
        case 0x4627acu: goto label_4627ac;
        case 0x4627b0u: goto label_4627b0;
        case 0x4627b4u: goto label_4627b4;
        case 0x4627b8u: goto label_4627b8;
        case 0x4627bcu: goto label_4627bc;
        case 0x4627c0u: goto label_4627c0;
        case 0x4627c4u: goto label_4627c4;
        case 0x4627c8u: goto label_4627c8;
        case 0x4627ccu: goto label_4627cc;
        case 0x4627d0u: goto label_4627d0;
        case 0x4627d4u: goto label_4627d4;
        case 0x4627d8u: goto label_4627d8;
        case 0x4627dcu: goto label_4627dc;
        case 0x4627e0u: goto label_4627e0;
        case 0x4627e4u: goto label_4627e4;
        case 0x4627e8u: goto label_4627e8;
        case 0x4627ecu: goto label_4627ec;
        case 0x4627f0u: goto label_4627f0;
        case 0x4627f4u: goto label_4627f4;
        case 0x4627f8u: goto label_4627f8;
        case 0x4627fcu: goto label_4627fc;
        case 0x462800u: goto label_462800;
        case 0x462804u: goto label_462804;
        case 0x462808u: goto label_462808;
        case 0x46280cu: goto label_46280c;
        case 0x462810u: goto label_462810;
        case 0x462814u: goto label_462814;
        case 0x462818u: goto label_462818;
        case 0x46281cu: goto label_46281c;
        case 0x462820u: goto label_462820;
        case 0x462824u: goto label_462824;
        case 0x462828u: goto label_462828;
        case 0x46282cu: goto label_46282c;
        case 0x462830u: goto label_462830;
        case 0x462834u: goto label_462834;
        case 0x462838u: goto label_462838;
        case 0x46283cu: goto label_46283c;
        case 0x462840u: goto label_462840;
        case 0x462844u: goto label_462844;
        case 0x462848u: goto label_462848;
        case 0x46284cu: goto label_46284c;
        case 0x462850u: goto label_462850;
        case 0x462854u: goto label_462854;
        case 0x462858u: goto label_462858;
        case 0x46285cu: goto label_46285c;
        case 0x462860u: goto label_462860;
        case 0x462864u: goto label_462864;
        case 0x462868u: goto label_462868;
        case 0x46286cu: goto label_46286c;
        case 0x462870u: goto label_462870;
        case 0x462874u: goto label_462874;
        case 0x462878u: goto label_462878;
        case 0x46287cu: goto label_46287c;
        case 0x462880u: goto label_462880;
        case 0x462884u: goto label_462884;
        case 0x462888u: goto label_462888;
        case 0x46288cu: goto label_46288c;
        case 0x462890u: goto label_462890;
        case 0x462894u: goto label_462894;
        case 0x462898u: goto label_462898;
        case 0x46289cu: goto label_46289c;
        case 0x4628a0u: goto label_4628a0;
        case 0x4628a4u: goto label_4628a4;
        case 0x4628a8u: goto label_4628a8;
        case 0x4628acu: goto label_4628ac;
        case 0x4628b0u: goto label_4628b0;
        case 0x4628b4u: goto label_4628b4;
        case 0x4628b8u: goto label_4628b8;
        case 0x4628bcu: goto label_4628bc;
        case 0x4628c0u: goto label_4628c0;
        case 0x4628c4u: goto label_4628c4;
        case 0x4628c8u: goto label_4628c8;
        case 0x4628ccu: goto label_4628cc;
        case 0x4628d0u: goto label_4628d0;
        case 0x4628d4u: goto label_4628d4;
        case 0x4628d8u: goto label_4628d8;
        case 0x4628dcu: goto label_4628dc;
        case 0x4628e0u: goto label_4628e0;
        case 0x4628e4u: goto label_4628e4;
        case 0x4628e8u: goto label_4628e8;
        case 0x4628ecu: goto label_4628ec;
        case 0x4628f0u: goto label_4628f0;
        case 0x4628f4u: goto label_4628f4;
        case 0x4628f8u: goto label_4628f8;
        case 0x4628fcu: goto label_4628fc;
        case 0x462900u: goto label_462900;
        case 0x462904u: goto label_462904;
        case 0x462908u: goto label_462908;
        case 0x46290cu: goto label_46290c;
        case 0x462910u: goto label_462910;
        case 0x462914u: goto label_462914;
        case 0x462918u: goto label_462918;
        case 0x46291cu: goto label_46291c;
        case 0x462920u: goto label_462920;
        case 0x462924u: goto label_462924;
        case 0x462928u: goto label_462928;
        case 0x46292cu: goto label_46292c;
        case 0x462930u: goto label_462930;
        case 0x462934u: goto label_462934;
        case 0x462938u: goto label_462938;
        case 0x46293cu: goto label_46293c;
        case 0x462940u: goto label_462940;
        case 0x462944u: goto label_462944;
        case 0x462948u: goto label_462948;
        case 0x46294cu: goto label_46294c;
        case 0x462950u: goto label_462950;
        case 0x462954u: goto label_462954;
        case 0x462958u: goto label_462958;
        case 0x46295cu: goto label_46295c;
        case 0x462960u: goto label_462960;
        case 0x462964u: goto label_462964;
        case 0x462968u: goto label_462968;
        case 0x46296cu: goto label_46296c;
        case 0x462970u: goto label_462970;
        case 0x462974u: goto label_462974;
        case 0x462978u: goto label_462978;
        case 0x46297cu: goto label_46297c;
        case 0x462980u: goto label_462980;
        case 0x462984u: goto label_462984;
        case 0x462988u: goto label_462988;
        case 0x46298cu: goto label_46298c;
        case 0x462990u: goto label_462990;
        case 0x462994u: goto label_462994;
        case 0x462998u: goto label_462998;
        case 0x46299cu: goto label_46299c;
        case 0x4629a0u: goto label_4629a0;
        case 0x4629a4u: goto label_4629a4;
        case 0x4629a8u: goto label_4629a8;
        case 0x4629acu: goto label_4629ac;
        case 0x4629b0u: goto label_4629b0;
        case 0x4629b4u: goto label_4629b4;
        case 0x4629b8u: goto label_4629b8;
        case 0x4629bcu: goto label_4629bc;
        case 0x4629c0u: goto label_4629c0;
        case 0x4629c4u: goto label_4629c4;
        case 0x4629c8u: goto label_4629c8;
        case 0x4629ccu: goto label_4629cc;
        case 0x4629d0u: goto label_4629d0;
        case 0x4629d4u: goto label_4629d4;
        case 0x4629d8u: goto label_4629d8;
        case 0x4629dcu: goto label_4629dc;
        case 0x4629e0u: goto label_4629e0;
        case 0x4629e4u: goto label_4629e4;
        case 0x4629e8u: goto label_4629e8;
        case 0x4629ecu: goto label_4629ec;
        case 0x4629f0u: goto label_4629f0;
        case 0x4629f4u: goto label_4629f4;
        case 0x4629f8u: goto label_4629f8;
        case 0x4629fcu: goto label_4629fc;
        case 0x462a00u: goto label_462a00;
        case 0x462a04u: goto label_462a04;
        case 0x462a08u: goto label_462a08;
        case 0x462a0cu: goto label_462a0c;
        case 0x462a10u: goto label_462a10;
        case 0x462a14u: goto label_462a14;
        case 0x462a18u: goto label_462a18;
        case 0x462a1cu: goto label_462a1c;
        case 0x462a20u: goto label_462a20;
        case 0x462a24u: goto label_462a24;
        case 0x462a28u: goto label_462a28;
        case 0x462a2cu: goto label_462a2c;
        case 0x462a30u: goto label_462a30;
        case 0x462a34u: goto label_462a34;
        case 0x462a38u: goto label_462a38;
        case 0x462a3cu: goto label_462a3c;
        case 0x462a40u: goto label_462a40;
        case 0x462a44u: goto label_462a44;
        case 0x462a48u: goto label_462a48;
        case 0x462a4cu: goto label_462a4c;
        case 0x462a50u: goto label_462a50;
        case 0x462a54u: goto label_462a54;
        case 0x462a58u: goto label_462a58;
        case 0x462a5cu: goto label_462a5c;
        case 0x462a60u: goto label_462a60;
        case 0x462a64u: goto label_462a64;
        case 0x462a68u: goto label_462a68;
        case 0x462a6cu: goto label_462a6c;
        case 0x462a70u: goto label_462a70;
        case 0x462a74u: goto label_462a74;
        case 0x462a78u: goto label_462a78;
        case 0x462a7cu: goto label_462a7c;
        case 0x462a80u: goto label_462a80;
        case 0x462a84u: goto label_462a84;
        case 0x462a88u: goto label_462a88;
        case 0x462a8cu: goto label_462a8c;
        case 0x462a90u: goto label_462a90;
        case 0x462a94u: goto label_462a94;
        case 0x462a98u: goto label_462a98;
        case 0x462a9cu: goto label_462a9c;
        case 0x462aa0u: goto label_462aa0;
        case 0x462aa4u: goto label_462aa4;
        case 0x462aa8u: goto label_462aa8;
        case 0x462aacu: goto label_462aac;
        case 0x462ab0u: goto label_462ab0;
        case 0x462ab4u: goto label_462ab4;
        case 0x462ab8u: goto label_462ab8;
        case 0x462abcu: goto label_462abc;
        case 0x462ac0u: goto label_462ac0;
        case 0x462ac4u: goto label_462ac4;
        case 0x462ac8u: goto label_462ac8;
        case 0x462accu: goto label_462acc;
        case 0x462ad0u: goto label_462ad0;
        case 0x462ad4u: goto label_462ad4;
        case 0x462ad8u: goto label_462ad8;
        case 0x462adcu: goto label_462adc;
        case 0x462ae0u: goto label_462ae0;
        case 0x462ae4u: goto label_462ae4;
        case 0x462ae8u: goto label_462ae8;
        case 0x462aecu: goto label_462aec;
        case 0x462af0u: goto label_462af0;
        case 0x462af4u: goto label_462af4;
        case 0x462af8u: goto label_462af8;
        case 0x462afcu: goto label_462afc;
        case 0x462b00u: goto label_462b00;
        case 0x462b04u: goto label_462b04;
        case 0x462b08u: goto label_462b08;
        case 0x462b0cu: goto label_462b0c;
        case 0x462b10u: goto label_462b10;
        case 0x462b14u: goto label_462b14;
        case 0x462b18u: goto label_462b18;
        case 0x462b1cu: goto label_462b1c;
        case 0x462b20u: goto label_462b20;
        case 0x462b24u: goto label_462b24;
        case 0x462b28u: goto label_462b28;
        case 0x462b2cu: goto label_462b2c;
        case 0x462b30u: goto label_462b30;
        case 0x462b34u: goto label_462b34;
        case 0x462b38u: goto label_462b38;
        case 0x462b3cu: goto label_462b3c;
        case 0x462b40u: goto label_462b40;
        case 0x462b44u: goto label_462b44;
        case 0x462b48u: goto label_462b48;
        case 0x462b4cu: goto label_462b4c;
        case 0x462b50u: goto label_462b50;
        case 0x462b54u: goto label_462b54;
        case 0x462b58u: goto label_462b58;
        case 0x462b5cu: goto label_462b5c;
        case 0x462b60u: goto label_462b60;
        case 0x462b64u: goto label_462b64;
        case 0x462b68u: goto label_462b68;
        case 0x462b6cu: goto label_462b6c;
        case 0x462b70u: goto label_462b70;
        case 0x462b74u: goto label_462b74;
        case 0x462b78u: goto label_462b78;
        case 0x462b7cu: goto label_462b7c;
        case 0x462b80u: goto label_462b80;
        case 0x462b84u: goto label_462b84;
        case 0x462b88u: goto label_462b88;
        case 0x462b8cu: goto label_462b8c;
        case 0x462b90u: goto label_462b90;
        case 0x462b94u: goto label_462b94;
        case 0x462b98u: goto label_462b98;
        case 0x462b9cu: goto label_462b9c;
        case 0x462ba0u: goto label_462ba0;
        case 0x462ba4u: goto label_462ba4;
        case 0x462ba8u: goto label_462ba8;
        case 0x462bacu: goto label_462bac;
        case 0x462bb0u: goto label_462bb0;
        case 0x462bb4u: goto label_462bb4;
        case 0x462bb8u: goto label_462bb8;
        case 0x462bbcu: goto label_462bbc;
        case 0x462bc0u: goto label_462bc0;
        case 0x462bc4u: goto label_462bc4;
        case 0x462bc8u: goto label_462bc8;
        case 0x462bccu: goto label_462bcc;
        case 0x462bd0u: goto label_462bd0;
        case 0x462bd4u: goto label_462bd4;
        case 0x462bd8u: goto label_462bd8;
        case 0x462bdcu: goto label_462bdc;
        case 0x462be0u: goto label_462be0;
        case 0x462be4u: goto label_462be4;
        case 0x462be8u: goto label_462be8;
        case 0x462becu: goto label_462bec;
        case 0x462bf0u: goto label_462bf0;
        case 0x462bf4u: goto label_462bf4;
        case 0x462bf8u: goto label_462bf8;
        case 0x462bfcu: goto label_462bfc;
        case 0x462c00u: goto label_462c00;
        case 0x462c04u: goto label_462c04;
        case 0x462c08u: goto label_462c08;
        case 0x462c0cu: goto label_462c0c;
        case 0x462c10u: goto label_462c10;
        case 0x462c14u: goto label_462c14;
        case 0x462c18u: goto label_462c18;
        case 0x462c1cu: goto label_462c1c;
        case 0x462c20u: goto label_462c20;
        case 0x462c24u: goto label_462c24;
        case 0x462c28u: goto label_462c28;
        case 0x462c2cu: goto label_462c2c;
        case 0x462c30u: goto label_462c30;
        case 0x462c34u: goto label_462c34;
        case 0x462c38u: goto label_462c38;
        case 0x462c3cu: goto label_462c3c;
        case 0x462c40u: goto label_462c40;
        case 0x462c44u: goto label_462c44;
        case 0x462c48u: goto label_462c48;
        case 0x462c4cu: goto label_462c4c;
        case 0x462c50u: goto label_462c50;
        case 0x462c54u: goto label_462c54;
        case 0x462c58u: goto label_462c58;
        case 0x462c5cu: goto label_462c5c;
        case 0x462c60u: goto label_462c60;
        case 0x462c64u: goto label_462c64;
        case 0x462c68u: goto label_462c68;
        case 0x462c6cu: goto label_462c6c;
        case 0x462c70u: goto label_462c70;
        case 0x462c74u: goto label_462c74;
        case 0x462c78u: goto label_462c78;
        case 0x462c7cu: goto label_462c7c;
        case 0x462c80u: goto label_462c80;
        case 0x462c84u: goto label_462c84;
        case 0x462c88u: goto label_462c88;
        case 0x462c8cu: goto label_462c8c;
        case 0x462c90u: goto label_462c90;
        case 0x462c94u: goto label_462c94;
        case 0x462c98u: goto label_462c98;
        case 0x462c9cu: goto label_462c9c;
        case 0x462ca0u: goto label_462ca0;
        case 0x462ca4u: goto label_462ca4;
        case 0x462ca8u: goto label_462ca8;
        case 0x462cacu: goto label_462cac;
        case 0x462cb0u: goto label_462cb0;
        case 0x462cb4u: goto label_462cb4;
        case 0x462cb8u: goto label_462cb8;
        case 0x462cbcu: goto label_462cbc;
        case 0x462cc0u: goto label_462cc0;
        case 0x462cc4u: goto label_462cc4;
        case 0x462cc8u: goto label_462cc8;
        case 0x462cccu: goto label_462ccc;
        case 0x462cd0u: goto label_462cd0;
        case 0x462cd4u: goto label_462cd4;
        case 0x462cd8u: goto label_462cd8;
        case 0x462cdcu: goto label_462cdc;
        case 0x462ce0u: goto label_462ce0;
        case 0x462ce4u: goto label_462ce4;
        case 0x462ce8u: goto label_462ce8;
        case 0x462cecu: goto label_462cec;
        case 0x462cf0u: goto label_462cf0;
        case 0x462cf4u: goto label_462cf4;
        case 0x462cf8u: goto label_462cf8;
        case 0x462cfcu: goto label_462cfc;
        case 0x462d00u: goto label_462d00;
        case 0x462d04u: goto label_462d04;
        case 0x462d08u: goto label_462d08;
        case 0x462d0cu: goto label_462d0c;
        case 0x462d10u: goto label_462d10;
        case 0x462d14u: goto label_462d14;
        case 0x462d18u: goto label_462d18;
        case 0x462d1cu: goto label_462d1c;
        default: break;
    }

    ctx->pc = 0x462760u;

label_462760:
    // 0x462760: 0x27bdf970  addiu       $sp, $sp, -0x690
    ctx->pc = 0x462760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965616));
label_462764:
    // 0x462764: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x462764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_462768:
    // 0x462768: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x462768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_46276c:
    // 0x46276c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x46276cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_462770:
    // 0x462770: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x462770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_462774:
    // 0x462774: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x462774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_462778:
    // 0x462778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x462778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46277c:
    // 0x46277c: 0xafa40660  sw          $a0, 0x660($sp)
    ctx->pc = 0x46277cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1632), GPR_U32(ctx, 4));
label_462780:
    // 0x462780: 0xafa50670  sw          $a1, 0x670($sp)
    ctx->pc = 0x462780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1648), GPR_U32(ctx, 5));
label_462784:
    // 0x462784: 0xafa60680  sw          $a2, 0x680($sp)
    ctx->pc = 0x462784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1664), GPR_U32(ctx, 6));
label_462788:
    // 0x462788: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x462788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46278c:
    // 0x46278c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x46278cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462790:
    // 0x462790: 0x8f84bfb0  lw          $a0, -0x4050($gp)
    ctx->pc = 0x462790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950832)));
label_462794:
    // 0x462794: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x462794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_462798:
    // 0x462798: 0x10830067  beq         $a0, $v1, . + 4 + (0x67 << 2)
label_46279c:
    if (ctx->pc == 0x46279Cu) {
        ctx->pc = 0x4627A0u;
        goto label_4627a0;
    }
    ctx->pc = 0x462798u;
    {
        const bool branch_taken_0x462798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x462798) {
            ctx->pc = 0x462938u;
            goto label_462938;
        }
    }
    ctx->pc = 0x4627A0u;
label_4627a0:
    // 0x4627a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4627a4:
    if (ctx->pc == 0x4627A4u) {
        ctx->pc = 0x4627A8u;
        goto label_4627a8;
    }
    ctx->pc = 0x4627A0u;
    {
        const bool branch_taken_0x4627a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4627a0) {
            ctx->pc = 0x4627B0u;
            goto label_4627b0;
        }
    }
    ctx->pc = 0x4627A8u;
label_4627a8:
    // 0x4627a8: 0x1000012b  b           . + 4 + (0x12B << 2)
label_4627ac:
    if (ctx->pc == 0x4627ACu) {
        ctx->pc = 0x4627B0u;
        goto label_4627b0;
    }
    ctx->pc = 0x4627A8u;
    {
        const bool branch_taken_0x4627a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4627a8) {
            ctx->pc = 0x462C58u;
            goto label_462c58;
        }
    }
    ctx->pc = 0x4627B0u;
label_4627b0:
    // 0x4627b0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4627b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4627b4:
    // 0x4627b4: 0x244252c0  addiu       $v0, $v0, 0x52C0
    ctx->pc = 0x4627b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21184));
label_4627b8:
    // 0x4627b8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x4627b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4627bc:
    // 0x4627bc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4627bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4627c0:
    // 0x4627c0: 0x244252c0  addiu       $v0, $v0, 0x52C0
    ctx->pc = 0x4627c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21184));
label_4627c4:
    // 0x4627c4: 0x401027  not         $v0, $v0
    ctx->pc = 0x4627c4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_4627c8:
    // 0x4627c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4627c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4627cc:
    // 0x4627cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4627ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4627d0:
    // 0x4627d0: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x4627d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
label_4627d4:
    // 0x4627d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4627d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4627d8:
    // 0x4627d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4627d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4627dc:
    // 0x4627dc: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4627e0:
    if (ctx->pc == 0x4627E0u) {
        ctx->pc = 0x4627E4u;
        goto label_4627e4;
    }
    ctx->pc = 0x4627DCu;
    {
        const bool branch_taken_0x4627dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4627dc) {
            ctx->pc = 0x46288Cu;
            goto label_46288c;
        }
    }
    ctx->pc = 0x4627E4u;
label_4627e4:
    // 0x4627e4: 0x8f82b258  lw          $v0, -0x4DA8($gp)
    ctx->pc = 0x4627e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947416)));
label_4627e8:
    // 0x4627e8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4627ec:
    if (ctx->pc == 0x4627ECu) {
        ctx->pc = 0x4627F0u;
        goto label_4627f0;
    }
    ctx->pc = 0x4627E8u;
    {
        const bool branch_taken_0x4627e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4627e8) {
            ctx->pc = 0x46288Cu;
            goto label_46288c;
        }
    }
    ctx->pc = 0x4627F0u;
label_4627f0:
    // 0x4627f0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4627f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4627f4:
    // 0x4627f4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4627f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4627f8:
    // 0x4627f8: 0x27a60650  addiu       $a2, $sp, 0x650
    ctx->pc = 0x4627f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1616));
label_4627fc:
    // 0x4627fc: 0xc115ee8  jal         func_457BA0
label_462800:
    if (ctx->pc == 0x462800u) {
        ctx->pc = 0x462804u;
        goto label_462804;
    }
    ctx->pc = 0x4627FCu;
    SET_GPR_U32(ctx, 31, 0x462804u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4627FCu, 0x462804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462804u;
label_462804:
    // 0x462804: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_462808:
    if (ctx->pc == 0x462808u) {
        ctx->pc = 0x46280Cu;
        goto label_46280c;
    }
    ctx->pc = 0x462804u;
    {
        const bool branch_taken_0x462804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462804) {
            ctx->pc = 0x46288Cu;
            goto label_46288c;
        }
    }
    ctx->pc = 0x46280Cu;
label_46280c:
    // 0x46280c: 0x8fa20658  lw          $v0, 0x658($sp)
    ctx->pc = 0x46280cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1624)));
label_462810:
    // 0x462810: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_462814:
    if (ctx->pc == 0x462814u) {
        ctx->pc = 0x462818u;
        goto label_462818;
    }
    ctx->pc = 0x462810u;
    {
        const bool branch_taken_0x462810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462810) {
            ctx->pc = 0x46288Cu;
            goto label_46288c;
        }
    }
    ctx->pc = 0x462818u;
label_462818:
    // 0x462818: 0x27a404c0  addiu       $a0, $sp, 0x4C0
    ctx->pc = 0x462818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_46281c:
    // 0x46281c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46281cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_462820:
    // 0x462820: 0x8fa60654  lw          $a2, 0x654($sp)
    ctx->pc = 0x462820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
label_462824:
    // 0x462824: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x462824u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_462828:
    // 0x462828: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x462828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_46282c:
    // 0x46282c: 0x240807d9  addiu       $t0, $zero, 0x7D9
    ctx->pc = 0x46282cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2009));
label_462830:
    // 0x462830: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x462830u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_462834:
    // 0x462834: 0x2529f040  addiu       $t1, $t1, -0xFC0
    ctx->pc = 0x462834u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963264));
label_462838:
    // 0x462838: 0xc113940  jal         func_44E500
label_46283c:
    if (ctx->pc == 0x46283Cu) {
        ctx->pc = 0x462840u;
        goto label_462840;
    }
    ctx->pc = 0x462838u;
    SET_GPR_U32(ctx, 31, 0x462840u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x462838u, 0x462840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462840u;
label_462840:
    // 0x462840: 0x27a404c0  addiu       $a0, $sp, 0x4C0
    ctx->pc = 0x462840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_462844:
    // 0x462844: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x462844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_462848:
    // 0x462848: 0x24a5f070  addiu       $a1, $a1, -0xF90
    ctx->pc = 0x462848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963312));
label_46284c:
    // 0x46284c: 0xc115c24  jal         func_457090
label_462850:
    if (ctx->pc == 0x462850u) {
        ctx->pc = 0x462854u;
        goto label_462854;
    }
    ctx->pc = 0x46284Cu;
    SET_GPR_U32(ctx, 31, 0x462854u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x46284Cu, 0x462854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462854u;
label_462854:
    // 0x462854: 0x27a404c0  addiu       $a0, $sp, 0x4C0
    ctx->pc = 0x462854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_462858:
    // 0x462858: 0x8fa20658  lw          $v0, 0x658($sp)
    ctx->pc = 0x462858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1624)));
label_46285c:
    // 0x46285c: 0x40f809  jalr        $v0
label_462860:
    if (ctx->pc == 0x462860u) {
        ctx->pc = 0x462864u;
        goto label_462864;
    }
    ctx->pc = 0x46285Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x462864u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46285Cu, 0x462864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x462864u;
label_462864:
    // 0x462864: 0xaf82b258  sw          $v0, -0x4DA8($gp)
    ctx->pc = 0x462864u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947416), GPR_U32(ctx, 2));
label_462868:
    // 0x462868: 0x8fa204c0  lw          $v0, 0x4C0($sp)
    ctx->pc = 0x462868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1216)));
label_46286c:
    // 0x46286c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_462870:
    if (ctx->pc == 0x462870u) {
        ctx->pc = 0x462874u;
        goto label_462874;
    }
    ctx->pc = 0x46286Cu;
    {
        const bool branch_taken_0x46286c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46286c) {
            ctx->pc = 0x46287Cu;
            goto label_46287c;
        }
    }
    ctx->pc = 0x462874u;
label_462874:
    // 0x462874: 0xd  break       0
    ctx->pc = 0x462874u;
    runtime->handleBreak(rdram, ctx);
label_462878:
    // 0x462878: 0x0  nop
    ctx->pc = 0x462878u;
    // NOP
label_46287c:
    // 0x46287c: 0x27a404c0  addiu       $a0, $sp, 0x4C0
    ctx->pc = 0x46287cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_462880:
    // 0x462880: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x462880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_462884:
    // 0x462884: 0xc11392c  jal         func_44E4B0
label_462888:
    if (ctx->pc == 0x462888u) {
        ctx->pc = 0x46288Cu;
        goto label_46288c;
    }
    ctx->pc = 0x462884u;
    SET_GPR_U32(ctx, 31, 0x46288Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x462884u, 0x46288Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46288Cu;
label_46288c:
    // 0x46288c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x46288cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_462890:
    // 0x462890: 0x8c424e28  lw          $v0, 0x4E28($v0)
    ctx->pc = 0x462890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20008)));
label_462894:
    // 0x462894: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_462898:
    if (ctx->pc == 0x462898u) {
        ctx->pc = 0x46289Cu;
        goto label_46289c;
    }
    ctx->pc = 0x462894u;
    {
        const bool branch_taken_0x462894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462894) {
            ctx->pc = 0x4628A8u;
            goto label_4628a8;
        }
    }
    ctx->pc = 0x46289Cu;
label_46289c:
    // 0x46289c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x46289cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4628a0:
    // 0x4628a0: 0x8c424e28  lw          $v0, 0x4E28($v0)
    ctx->pc = 0x4628a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20008)));
label_4628a4:
    // 0x4628a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4628a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4628a8:
    // 0x4628a8: 0x27a405e0  addiu       $a0, $sp, 0x5E0
    ctx->pc = 0x4628a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
label_4628ac:
    // 0x4628ac: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4628acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4628b0:
    // 0x4628b0: 0x24a5f140  addiu       $a1, $a1, -0xEC0
    ctx->pc = 0x4628b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963520));
label_4628b4:
    // 0x4628b4: 0x2786bfb8  addiu       $a2, $gp, -0x4048
    ctx->pc = 0x4628b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950840));
label_4628b8:
    // 0x4628b8: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x4628b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_4628bc:
    // 0x4628bc: 0x24e74de8  addiu       $a3, $a3, 0x4DE8
    ctx->pc = 0x4628bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19944));
label_4628c0:
    // 0x4628c0: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x4628c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_4628c4:
    // 0x4628c4: 0x25084e3c  addiu       $t0, $t0, 0x4E3C
    ctx->pc = 0x4628c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20028));
label_4628c8:
    // 0x4628c8: 0xc0bc3e2  jal         func_2F0F88
label_4628cc:
    if (ctx->pc == 0x4628CCu) {
        ctx->pc = 0x4628D0u;
        goto label_4628d0;
    }
    ctx->pc = 0x4628C8u;
    SET_GPR_U32(ctx, 31, 0x4628D0u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x4628C8u, 0x4628D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4628D0u;
label_4628d0:
    // 0x4628d0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4628d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4628d4:
    // 0x4628d4: 0x8c444e00  lw          $a0, 0x4E00($v0)
    ctx->pc = 0x4628d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19968)));
label_4628d8:
    // 0x4628d8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4628d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4628dc:
    // 0x4628dc: 0x8c454e04  lw          $a1, 0x4E04($v0)
    ctx->pc = 0x4628dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19972)));
label_4628e0:
    // 0x4628e0: 0x27a605e0  addiu       $a2, $sp, 0x5E0
    ctx->pc = 0x4628e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
label_4628e4:
    // 0x4628e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4628e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4628e8:
    // 0x4628e8: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x4628e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4628ec:
    // 0x4628ec: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x4628ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
label_4628f0:
    // 0x4628f0: 0x252952c0  addiu       $t1, $t1, 0x52C0
    ctx->pc = 0x4628f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 21184));
label_4628f4:
    // 0x4628f4: 0xc0c3d52  jal         func_30F548
label_4628f8:
    if (ctx->pc == 0x4628F8u) {
        ctx->pc = 0x4628FCu;
        goto label_4628fc;
    }
    ctx->pc = 0x4628F4u;
    SET_GPR_U32(ctx, 31, 0x4628FCu);
    ctx->pc = 0x30F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F548u, 0x4628F4u, 0x4628FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4628FCu;
label_4628fc:
    // 0x4628fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4628fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_462900:
    // 0x462900: 0x6610008  bgez        $s3, . + 4 + (0x8 << 2)
label_462904:
    if (ctx->pc == 0x462904u) {
        ctx->pc = 0x462908u;
        goto label_462908;
    }
    ctx->pc = 0x462900u;
    {
        const bool branch_taken_0x462900 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x462900) {
            ctx->pc = 0x462924u;
            goto label_462924;
        }
    }
    ctx->pc = 0x462908u;
label_462908:
    // 0x462908: 0xaf93bfb4  sw          $s3, -0x404C($gp)
    ctx->pc = 0x462908u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 19));
label_46290c:
    // 0x46290c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x46290cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462910:
    // 0x462910: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x462910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_462914:
    // 0x462914: 0xc1181ac  jal         func_4606B0
label_462918:
    if (ctx->pc == 0x462918u) {
        ctx->pc = 0x46291Cu;
        goto label_46291c;
    }
    ctx->pc = 0x462914u;
    SET_GPR_U32(ctx, 31, 0x46291Cu);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x462914u, 0x46291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46291Cu;
label_46291c:
    // 0x46291c: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_462920:
    if (ctx->pc == 0x462920u) {
        ctx->pc = 0x462924u;
        goto label_462924;
    }
    ctx->pc = 0x46291Cu;
    {
        const bool branch_taken_0x46291c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46291c) {
            ctx->pc = 0x462CFCu;
            goto label_462cfc;
        }
    }
    ctx->pc = 0x462924u;
label_462924:
    // 0x462924: 0x8f83bfb0  lw          $v1, -0x4050($gp)
    ctx->pc = 0x462924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950832)));
label_462928:
    // 0x462928: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x462928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_46292c:
    // 0x46292c: 0xaf83bfb0  sw          $v1, -0x4050($gp)
    ctx->pc = 0x46292cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950832), GPR_U32(ctx, 3));
label_462930:
    // 0x462930: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_462934:
    if (ctx->pc == 0x462934u) {
        ctx->pc = 0x462938u;
        goto label_462938;
    }
    ctx->pc = 0x462930u;
    {
        const bool branch_taken_0x462930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x462930) {
            ctx->pc = 0x462CFCu;
            goto label_462cfc;
        }
    }
    ctx->pc = 0x462938u;
label_462938:
    // 0x462938: 0x8fa40680  lw          $a0, 0x680($sp)
    ctx->pc = 0x462938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1664)));
label_46293c:
    // 0x46293c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46293cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_462940:
    // 0x462940: 0x148300ee  bne         $a0, $v1, . + 4 + (0xEE << 2)
label_462944:
    if (ctx->pc == 0x462944u) {
        ctx->pc = 0x462948u;
        goto label_462948;
    }
    ctx->pc = 0x462940u;
    {
        const bool branch_taken_0x462940 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x462940) {
            ctx->pc = 0x462CFCu;
            goto label_462cfc;
        }
    }
    ctx->pc = 0x462948u;
label_462948:
    // 0x462948: 0x8fa20660  lw          $v0, 0x660($sp)
    ctx->pc = 0x462948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1632)));
label_46294c:
    // 0x46294c: 0x3842000d  xori        $v0, $v0, 0xD
    ctx->pc = 0x46294cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)13);
label_462950:
    // 0x462950: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x462950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_462954:
    // 0x462954: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x462954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_462958:
    // 0x462958: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_46295c:
    if (ctx->pc == 0x46295Cu) {
        ctx->pc = 0x462960u;
        goto label_462960;
    }
    ctx->pc = 0x462958u;
    {
        const bool branch_taken_0x462958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x462958) {
            ctx->pc = 0x462A08u;
            goto label_462a08;
        }
    }
    ctx->pc = 0x462960u;
label_462960:
    // 0x462960: 0x8f82b25c  lw          $v0, -0x4DA4($gp)
    ctx->pc = 0x462960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947420)));
label_462964:
    // 0x462964: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_462968:
    if (ctx->pc == 0x462968u) {
        ctx->pc = 0x46296Cu;
        goto label_46296c;
    }
    ctx->pc = 0x462964u;
    {
        const bool branch_taken_0x462964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462964) {
            ctx->pc = 0x462A08u;
            goto label_462a08;
        }
    }
    ctx->pc = 0x46296Cu;
label_46296c:
    // 0x46296c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x46296cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_462970:
    // 0x462970: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x462970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_462974:
    // 0x462974: 0x27a60640  addiu       $a2, $sp, 0x640
    ctx->pc = 0x462974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
label_462978:
    // 0x462978: 0xc115ee8  jal         func_457BA0
label_46297c:
    if (ctx->pc == 0x46297Cu) {
        ctx->pc = 0x462980u;
        goto label_462980;
    }
    ctx->pc = 0x462978u;
    SET_GPR_U32(ctx, 31, 0x462980u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x462978u, 0x462980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462980u;
label_462980:
    // 0x462980: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_462984:
    if (ctx->pc == 0x462984u) {
        ctx->pc = 0x462988u;
        goto label_462988;
    }
    ctx->pc = 0x462980u;
    {
        const bool branch_taken_0x462980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462980) {
            ctx->pc = 0x462A08u;
            goto label_462a08;
        }
    }
    ctx->pc = 0x462988u;
label_462988:
    // 0x462988: 0x8fa20648  lw          $v0, 0x648($sp)
    ctx->pc = 0x462988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
label_46298c:
    // 0x46298c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_462990:
    if (ctx->pc == 0x462990u) {
        ctx->pc = 0x462994u;
        goto label_462994;
    }
    ctx->pc = 0x46298Cu;
    {
        const bool branch_taken_0x46298c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46298c) {
            ctx->pc = 0x462A08u;
            goto label_462a08;
        }
    }
    ctx->pc = 0x462994u;
label_462994:
    // 0x462994: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x462994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_462998:
    // 0x462998: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x462998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46299c:
    // 0x46299c: 0x8fa60644  lw          $a2, 0x644($sp)
    ctx->pc = 0x46299cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_4629a0:
    // 0x4629a0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4629a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4629a4:
    // 0x4629a4: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x4629a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_4629a8:
    // 0x4629a8: 0x240807f7  addiu       $t0, $zero, 0x7F7
    ctx->pc = 0x4629a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2039));
label_4629ac:
    // 0x4629ac: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4629acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4629b0:
    // 0x4629b0: 0x2529f150  addiu       $t1, $t1, -0xEB0
    ctx->pc = 0x4629b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963536));
label_4629b4:
    // 0x4629b4: 0xc113940  jal         func_44E500
label_4629b8:
    if (ctx->pc == 0x4629B8u) {
        ctx->pc = 0x4629BCu;
        goto label_4629bc;
    }
    ctx->pc = 0x4629B4u;
    SET_GPR_U32(ctx, 31, 0x4629BCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4629B4u, 0x4629BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4629BCu;
label_4629bc:
    // 0x4629bc: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x4629bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_4629c0:
    // 0x4629c0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4629c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4629c4:
    // 0x4629c4: 0x24a5efb0  addiu       $a1, $a1, -0x1050
    ctx->pc = 0x4629c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
label_4629c8:
    // 0x4629c8: 0xc115c24  jal         func_457090
label_4629cc:
    if (ctx->pc == 0x4629CCu) {
        ctx->pc = 0x4629D0u;
        goto label_4629d0;
    }
    ctx->pc = 0x4629C8u;
    SET_GPR_U32(ctx, 31, 0x4629D0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4629C8u, 0x4629D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4629D0u;
label_4629d0:
    // 0x4629d0: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x4629d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_4629d4:
    // 0x4629d4: 0x8fa20648  lw          $v0, 0x648($sp)
    ctx->pc = 0x4629d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
label_4629d8:
    // 0x4629d8: 0x40f809  jalr        $v0
label_4629dc:
    if (ctx->pc == 0x4629DCu) {
        ctx->pc = 0x4629E0u;
        goto label_4629e0;
    }
    ctx->pc = 0x4629D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4629E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4629D8u, 0x4629E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4629E0u;
label_4629e0:
    // 0x4629e0: 0xaf82b25c  sw          $v0, -0x4DA4($gp)
    ctx->pc = 0x4629e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947420), GPR_U32(ctx, 2));
label_4629e4:
    // 0x4629e4: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x4629e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_4629e8:
    // 0x4629e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4629ec:
    if (ctx->pc == 0x4629ECu) {
        ctx->pc = 0x4629F0u;
        goto label_4629f0;
    }
    ctx->pc = 0x4629E8u;
    {
        const bool branch_taken_0x4629e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4629e8) {
            ctx->pc = 0x4629F8u;
            goto label_4629f8;
        }
    }
    ctx->pc = 0x4629F0u;
label_4629f0:
    // 0x4629f0: 0xd  break       0
    ctx->pc = 0x4629f0u;
    runtime->handleBreak(rdram, ctx);
label_4629f4:
    // 0x4629f4: 0x0  nop
    ctx->pc = 0x4629f4u;
    // NOP
label_4629f8:
    // 0x4629f8: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x4629f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_4629fc:
    // 0x4629fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4629fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_462a00:
    // 0x462a00: 0xc11392c  jal         func_44E4B0
label_462a04:
    if (ctx->pc == 0x462A04u) {
        ctx->pc = 0x462A08u;
        goto label_462a08;
    }
    ctx->pc = 0x462A00u;
    SET_GPR_U32(ctx, 31, 0x462A08u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x462A00u, 0x462A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462A08u;
label_462a08:
    // 0x462a08: 0x8fa20670  lw          $v0, 0x670($sp)
    ctx->pc = 0x462a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1648)));
label_462a0c:
    // 0x462a0c: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
label_462a10:
    if (ctx->pc == 0x462A10u) {
        ctx->pc = 0x462A14u;
        goto label_462a14;
    }
    ctx->pc = 0x462A0Cu;
    {
        const bool branch_taken_0x462a0c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x462a0c) {
            ctx->pc = 0x462A34u;
            goto label_462a34;
        }
    }
    ctx->pc = 0x462A14u;
label_462a14:
    // 0x462a14: 0x8fa20670  lw          $v0, 0x670($sp)
    ctx->pc = 0x462a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1648)));
label_462a18:
    // 0x462a18: 0xaf82bfb4  sw          $v0, -0x404C($gp)
    ctx->pc = 0x462a18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 2));
label_462a1c:
    // 0x462a1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x462a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462a20:
    // 0x462a20: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x462a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_462a24:
    // 0x462a24: 0xc1181ac  jal         func_4606B0
label_462a28:
    if (ctx->pc == 0x462A28u) {
        ctx->pc = 0x462A2Cu;
        goto label_462a2c;
    }
    ctx->pc = 0x462A24u;
    SET_GPR_U32(ctx, 31, 0x462A2Cu);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x462A24u, 0x462A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462A2Cu;
label_462a2c:
    // 0x462a2c: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_462a30:
    if (ctx->pc == 0x462A30u) {
        ctx->pc = 0x462A34u;
        goto label_462a34;
    }
    ctx->pc = 0x462A2Cu;
    {
        const bool branch_taken_0x462a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x462a2c) {
            ctx->pc = 0x462CFCu;
            goto label_462cfc;
        }
    }
    ctx->pc = 0x462A34u;
label_462a34:
    // 0x462a34: 0x8fb20670  lw          $s2, 0x670($sp)
    ctx->pc = 0x462a34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1648)));
label_462a38:
    // 0x462a38: 0x2a420015  slti        $v0, $s2, 0x15
    ctx->pc = 0x462a38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)21) ? 1 : 0);
label_462a3c:
    // 0x462a3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x462a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_462a40:
    // 0x462a40: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_462a44:
    if (ctx->pc == 0x462A44u) {
        ctx->pc = 0x462A48u;
        goto label_462a48;
    }
    ctx->pc = 0x462A40u;
    {
        const bool branch_taken_0x462a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x462a40) {
            ctx->pc = 0x462AF0u;
            goto label_462af0;
        }
    }
    ctx->pc = 0x462A48u;
label_462a48:
    // 0x462a48: 0x8f82b260  lw          $v0, -0x4DA0($gp)
    ctx->pc = 0x462a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947424)));
label_462a4c:
    // 0x462a4c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_462a50:
    if (ctx->pc == 0x462A50u) {
        ctx->pc = 0x462A54u;
        goto label_462a54;
    }
    ctx->pc = 0x462A4Cu;
    {
        const bool branch_taken_0x462a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462a4c) {
            ctx->pc = 0x462AF0u;
            goto label_462af0;
        }
    }
    ctx->pc = 0x462A54u;
label_462a54:
    // 0x462a54: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x462a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_462a58:
    // 0x462a58: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x462a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_462a5c:
    // 0x462a5c: 0x27a60630  addiu       $a2, $sp, 0x630
    ctx->pc = 0x462a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
label_462a60:
    // 0x462a60: 0xc115ee8  jal         func_457BA0
label_462a64:
    if (ctx->pc == 0x462A64u) {
        ctx->pc = 0x462A68u;
        goto label_462a68;
    }
    ctx->pc = 0x462A60u;
    SET_GPR_U32(ctx, 31, 0x462A68u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x462A60u, 0x462A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462A68u;
label_462a68:
    // 0x462a68: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_462a6c:
    if (ctx->pc == 0x462A6Cu) {
        ctx->pc = 0x462A70u;
        goto label_462a70;
    }
    ctx->pc = 0x462A68u;
    {
        const bool branch_taken_0x462a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462a68) {
            ctx->pc = 0x462AF0u;
            goto label_462af0;
        }
    }
    ctx->pc = 0x462A70u;
label_462a70:
    // 0x462a70: 0x8fa20638  lw          $v0, 0x638($sp)
    ctx->pc = 0x462a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1592)));
label_462a74:
    // 0x462a74: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_462a78:
    if (ctx->pc == 0x462A78u) {
        ctx->pc = 0x462A7Cu;
        goto label_462a7c;
    }
    ctx->pc = 0x462A74u;
    {
        const bool branch_taken_0x462a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462a74) {
            ctx->pc = 0x462AF0u;
            goto label_462af0;
        }
    }
    ctx->pc = 0x462A7Cu;
label_462a7c:
    // 0x462a7c: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x462a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_462a80:
    // 0x462a80: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x462a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_462a84:
    // 0x462a84: 0x8fa60634  lw          $a2, 0x634($sp)
    ctx->pc = 0x462a84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1588)));
label_462a88:
    // 0x462a88: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x462a88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_462a8c:
    // 0x462a8c: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x462a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_462a90:
    // 0x462a90: 0x24080800  addiu       $t0, $zero, 0x800
    ctx->pc = 0x462a90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_462a94:
    // 0x462a94: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x462a94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_462a98:
    // 0x462a98: 0x2529f2f0  addiu       $t1, $t1, -0xD10
    ctx->pc = 0x462a98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963952));
label_462a9c:
    // 0x462a9c: 0xc113940  jal         func_44E500
label_462aa0:
    if (ctx->pc == 0x462AA0u) {
        ctx->pc = 0x462AA4u;
        goto label_462aa4;
    }
    ctx->pc = 0x462A9Cu;
    SET_GPR_U32(ctx, 31, 0x462AA4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x462A9Cu, 0x462AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462AA4u;
label_462aa4:
    // 0x462aa4: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x462aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_462aa8:
    // 0x462aa8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x462aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_462aac:
    // 0x462aac: 0x24a5f320  addiu       $a1, $a1, -0xCE0
    ctx->pc = 0x462aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964000));
label_462ab0:
    // 0x462ab0: 0xc115c24  jal         func_457090
label_462ab4:
    if (ctx->pc == 0x462AB4u) {
        ctx->pc = 0x462AB8u;
        goto label_462ab8;
    }
    ctx->pc = 0x462AB0u;
    SET_GPR_U32(ctx, 31, 0x462AB8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x462AB0u, 0x462AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462AB8u;
label_462ab8:
    // 0x462ab8: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x462ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_462abc:
    // 0x462abc: 0x8fa20638  lw          $v0, 0x638($sp)
    ctx->pc = 0x462abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1592)));
label_462ac0:
    // 0x462ac0: 0x40f809  jalr        $v0
label_462ac4:
    if (ctx->pc == 0x462AC4u) {
        ctx->pc = 0x462AC8u;
        goto label_462ac8;
    }
    ctx->pc = 0x462AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x462AC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x462AC0u, 0x462AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x462AC8u;
label_462ac8:
    // 0x462ac8: 0xaf82b260  sw          $v0, -0x4DA0($gp)
    ctx->pc = 0x462ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947424), GPR_U32(ctx, 2));
label_462acc:
    // 0x462acc: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x462accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_462ad0:
    // 0x462ad0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_462ad4:
    if (ctx->pc == 0x462AD4u) {
        ctx->pc = 0x462AD8u;
        goto label_462ad8;
    }
    ctx->pc = 0x462AD0u;
    {
        const bool branch_taken_0x462ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462ad0) {
            ctx->pc = 0x462AE0u;
            goto label_462ae0;
        }
    }
    ctx->pc = 0x462AD8u;
label_462ad8:
    // 0x462ad8: 0xd  break       0
    ctx->pc = 0x462ad8u;
    runtime->handleBreak(rdram, ctx);
label_462adc:
    // 0x462adc: 0x0  nop
    ctx->pc = 0x462adcu;
    // NOP
label_462ae0:
    // 0x462ae0: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x462ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_462ae4:
    // 0x462ae4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x462ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_462ae8:
    // 0x462ae8: 0xc11392c  jal         func_44E4B0
label_462aec:
    if (ctx->pc == 0x462AECu) {
        ctx->pc = 0x462AF0u;
        goto label_462af0;
    }
    ctx->pc = 0x462AE8u;
    SET_GPR_U32(ctx, 31, 0x462AF0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x462AE8u, 0x462AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462AF0u;
label_462af0:
    // 0x462af0: 0x2654fffe  addiu       $s4, $s2, -0x2
    ctx->pc = 0x462af0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
label_462af4:
    // 0x462af4: 0x2a810013  slti        $at, $s4, 0x13
    ctx->pc = 0x462af4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)19) ? 1 : 0);
label_462af8:
    // 0x462af8: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
label_462afc:
    if (ctx->pc == 0x462AFCu) {
        ctx->pc = 0x462B00u;
        goto label_462b00;
    }
    ctx->pc = 0x462AF8u;
    {
        const bool branch_taken_0x462af8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x462af8) {
            ctx->pc = 0x462B5Cu;
            goto label_462b5c;
        }
    }
    ctx->pc = 0x462B00u;
label_462b00:
    // 0x462b00: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x462b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_462b04:
    // 0x462b04: 0x2484f340  addiu       $a0, $a0, -0xCC0
    ctx->pc = 0x462b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964032));
label_462b08:
    // 0x462b08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x462b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462b0c:
    // 0x462b0c: 0xc115ae4  jal         func_456B90
label_462b10:
    if (ctx->pc == 0x462B10u) {
        ctx->pc = 0x462B14u;
        goto label_462b14;
    }
    ctx->pc = 0x462B0Cu;
    SET_GPR_U32(ctx, 31, 0x462B14u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x462B0Cu, 0x462B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462B14u;
label_462b14:
    // 0x462b14: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x462b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_462b18:
    // 0x462b18: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x462b18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_462b1c:
    // 0x462b1c: 0x24a5f210  addiu       $a1, $a1, -0xDF0
    ctx->pc = 0x462b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963728));
label_462b20:
    // 0x462b20: 0x27a605e0  addiu       $a2, $sp, 0x5E0
    ctx->pc = 0x462b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
label_462b24:
    // 0x462b24: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x462b24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_462b28:
    // 0x462b28: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x462b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_462b2c:
    // 0x462b2c: 0xc0bc3e2  jal         func_2F0F88
label_462b30:
    if (ctx->pc == 0x462B30u) {
        ctx->pc = 0x462B34u;
        goto label_462b34;
    }
    ctx->pc = 0x462B2Cu;
    SET_GPR_U32(ctx, 31, 0x462B34u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x462B2Cu, 0x462B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462B34u;
label_462b34:
    // 0x462b34: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x462b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_462b38:
    // 0x462b38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x462b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462b3c:
    // 0x462b3c: 0xc115ae4  jal         func_456B90
label_462b40:
    if (ctx->pc == 0x462B40u) {
        ctx->pc = 0x462B44u;
        goto label_462b44;
    }
    ctx->pc = 0x462B3Cu;
    SET_GPR_U32(ctx, 31, 0x462B44u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x462B3Cu, 0x462B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462B44u;
label_462b44:
    // 0x462b44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x462b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462b48:
    // 0x462b48: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x462b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_462b4c:
    // 0x462b4c: 0xc1181ac  jal         func_4606B0
label_462b50:
    if (ctx->pc == 0x462B50u) {
        ctx->pc = 0x462B54u;
        goto label_462b54;
    }
    ctx->pc = 0x462B4Cu;
    SET_GPR_U32(ctx, 31, 0x462B54u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x462B4Cu, 0x462B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462B54u;
label_462b54:
    // 0x462b54: 0x10000069  b           . + 4 + (0x69 << 2)
label_462b58:
    if (ctx->pc == 0x462B58u) {
        ctx->pc = 0x462B5Cu;
        goto label_462b5c;
    }
    ctx->pc = 0x462B54u;
    {
        const bool branch_taken_0x462b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x462b54) {
            ctx->pc = 0x462CFCu;
            goto label_462cfc;
        }
    }
    ctx->pc = 0x462B5Cu;
label_462b5c:
    // 0x462b5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x462b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462b60:
    // 0x462b60: 0x10000028  b           . + 4 + (0x28 << 2)
label_462b64:
    if (ctx->pc == 0x462B64u) {
        ctx->pc = 0x462B68u;
        goto label_462b68;
    }
    ctx->pc = 0x462B60u;
    {
        const bool branch_taken_0x462b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x462b60) {
            ctx->pc = 0x462C04u;
            goto label_462c04;
        }
    }
    ctx->pc = 0x462B68u;
label_462b68:
    // 0x462b68: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x462b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_462b6c:
    // 0x462b6c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x462b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_462b70:
    // 0x462b70: 0x244252c0  addiu       $v0, $v0, 0x52C0
    ctx->pc = 0x462b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21184));
label_462b74:
    // 0x462b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x462b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_462b78:
    // 0x462b78: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x462b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_462b7c:
    // 0x462b7c: 0x24844e5c  addiu       $a0, $a0, 0x4E5C
    ctx->pc = 0x462b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20060));
label_462b80:
    // 0x462b80: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x462b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_462b84:
    // 0x462b84: 0xc0bc574  jal         func_2F15D0
label_462b88:
    if (ctx->pc == 0x462B88u) {
        ctx->pc = 0x462B8Cu;
        goto label_462b8c;
    }
    ctx->pc = 0x462B84u;
    SET_GPR_U32(ctx, 31, 0x462B8Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x462B84u, 0x462B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462B8Cu;
label_462b8c:
    // 0x462b8c: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x462b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_462b90:
    // 0x462b90: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x462b90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_462b94:
    // 0x462b94: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x462b94u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_462b98:
    // 0x462b98: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_462b9c:
    if (ctx->pc == 0x462B9Cu) {
        ctx->pc = 0x462BA0u;
        goto label_462ba0;
    }
    ctx->pc = 0x462B98u;
    {
        const bool branch_taken_0x462b98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x462b98) {
            ctx->pc = 0x462C00u;
            goto label_462c00;
        }
    }
    ctx->pc = 0x462BA0u;
label_462ba0:
    // 0x462ba0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x462ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_462ba4:
    // 0x462ba4: 0x8c424e28  lw          $v0, 0x4E28($v0)
    ctx->pc = 0x462ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20008)));
label_462ba8:
    // 0x462ba8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_462bac:
    if (ctx->pc == 0x462BACu) {
        ctx->pc = 0x462BB0u;
        goto label_462bb0;
    }
    ctx->pc = 0x462BA8u;
    {
        const bool branch_taken_0x462ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462ba8) {
            ctx->pc = 0x462BD0u;
            goto label_462bd0;
        }
    }
    ctx->pc = 0x462BB0u;
label_462bb0:
    // 0x462bb0: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x462bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_462bb4:
    // 0x462bb4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x462bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_462bb8:
    // 0x462bb8: 0x244252c0  addiu       $v0, $v0, 0x52C0
    ctx->pc = 0x462bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21184));
label_462bbc:
    // 0x462bbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x462bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_462bc0:
    // 0x462bc0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x462bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_462bc4:
    // 0x462bc4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x462bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_462bc8:
    // 0x462bc8: 0x8c424e28  lw          $v0, 0x4E28($v0)
    ctx->pc = 0x462bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20008)));
label_462bcc:
    // 0x462bcc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x462bccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_462bd0:
    // 0x462bd0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x462bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_462bd4:
    // 0x462bd4: 0x8c424e0c  lw          $v0, 0x4E0C($v0)
    ctx->pc = 0x462bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19980)));
label_462bd8:
    // 0x462bd8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_462bdc:
    if (ctx->pc == 0x462BDCu) {
        ctx->pc = 0x462BE0u;
        goto label_462be0;
    }
    ctx->pc = 0x462BD8u;
    {
        const bool branch_taken_0x462bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462bd8) {
            ctx->pc = 0x462C00u;
            goto label_462c00;
        }
    }
    ctx->pc = 0x462BE0u;
label_462be0:
    // 0x462be0: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x462be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_462be4:
    // 0x462be4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x462be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_462be8:
    // 0x462be8: 0x244252c0  addiu       $v0, $v0, 0x52C0
    ctx->pc = 0x462be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21184));
label_462bec:
    // 0x462bec: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x462becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_462bf0:
    // 0x462bf0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x462bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_462bf4:
    // 0x462bf4: 0x8c444e0c  lw          $a0, 0x4E0C($v0)
    ctx->pc = 0x462bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19980)));
label_462bf8:
    // 0x462bf8: 0xc118b48  jal         func_462D20
label_462bfc:
    if (ctx->pc == 0x462BFCu) {
        ctx->pc = 0x462C00u;
        goto label_462c00;
    }
    ctx->pc = 0x462BF8u;
    SET_GPR_U32(ctx, 31, 0x462C00u);
    ctx->pc = 0x462D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x462D20u, 0x462BF8u, 0x462C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462C00u;
label_462c00:
    // 0x462c00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x462c00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_462c04:
    // 0x462c04: 0x212082a  slt         $at, $s0, $s2
    ctx->pc = 0x462c04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_462c08:
    // 0x462c08: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_462c0c:
    if (ctx->pc == 0x462C0Cu) {
        ctx->pc = 0x462C10u;
        goto label_462c10;
    }
    ctx->pc = 0x462C08u;
    {
        const bool branch_taken_0x462c08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x462c08) {
            ctx->pc = 0x462C18u;
            goto label_462c18;
        }
    }
    ctx->pc = 0x462C10u;
label_462c10:
    // 0x462c10: 0x1220ffd5  beqz        $s1, . + 4 + (-0x2B << 2)
label_462c14:
    if (ctx->pc == 0x462C14u) {
        ctx->pc = 0x462C18u;
        goto label_462c18;
    }
    ctx->pc = 0x462C10u;
    {
        const bool branch_taken_0x462c10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x462c10) {
            ctx->pc = 0x462B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_462b68;
        }
    }
    ctx->pc = 0x462C18u;
label_462c18:
    // 0x462c18: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
label_462c1c:
    if (ctx->pc == 0x462C1Cu) {
        ctx->pc = 0x462C20u;
        goto label_462c20;
    }
    ctx->pc = 0x462C18u;
    {
        const bool branch_taken_0x462c18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x462c18) {
            ctx->pc = 0x462C40u;
            goto label_462c40;
        }
    }
    ctx->pc = 0x462C20u;
label_462c20:
    // 0x462c20: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x462c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_462c24:
    // 0x462c24: 0x8c424e28  lw          $v0, 0x4E28($v0)
    ctx->pc = 0x462c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20008)));
label_462c28:
    // 0x462c28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_462c2c:
    if (ctx->pc == 0x462C2Cu) {
        ctx->pc = 0x462C30u;
        goto label_462c30;
    }
    ctx->pc = 0x462C28u;
    {
        const bool branch_taken_0x462c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462c28) {
            ctx->pc = 0x462C40u;
            goto label_462c40;
        }
    }
    ctx->pc = 0x462C30u;
label_462c30:
    // 0x462c30: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x462c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_462c34:
    // 0x462c34: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x462c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_462c38:
    // 0x462c38: 0x8c424e28  lw          $v0, 0x4E28($v0)
    ctx->pc = 0x462c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20008)));
label_462c3c:
    // 0x462c3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x462c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_462c40:
    // 0x462c40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x462c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_462c44:
    // 0x462c44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x462c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462c48:
    // 0x462c48: 0xc1181ac  jal         func_4606B0
label_462c4c:
    if (ctx->pc == 0x462C4Cu) {
        ctx->pc = 0x462C50u;
        goto label_462c50;
    }
    ctx->pc = 0x462C48u;
    SET_GPR_U32(ctx, 31, 0x462C50u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x462C48u, 0x462C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462C50u;
label_462c50:
    // 0x462c50: 0x1000002a  b           . + 4 + (0x2A << 2)
label_462c54:
    if (ctx->pc == 0x462C54u) {
        ctx->pc = 0x462C58u;
        goto label_462c58;
    }
    ctx->pc = 0x462C50u;
    {
        const bool branch_taken_0x462c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x462c50) {
            ctx->pc = 0x462CFCu;
            goto label_462cfc;
        }
    }
    ctx->pc = 0x462C58u;
label_462c58:
    // 0x462c58: 0x8f83b264  lw          $v1, -0x4D9C($gp)
    ctx->pc = 0x462c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947428)));
label_462c5c:
    // 0x462c5c: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_462c60:
    if (ctx->pc == 0x462C60u) {
        ctx->pc = 0x462C64u;
        goto label_462c64;
    }
    ctx->pc = 0x462C5Cu;
    {
        const bool branch_taken_0x462c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x462c5c) {
            ctx->pc = 0x462CFCu;
            goto label_462cfc;
        }
    }
    ctx->pc = 0x462C64u;
label_462c64:
    // 0x462c64: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x462c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_462c68:
    // 0x462c68: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x462c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_462c6c:
    // 0x462c6c: 0x27a60620  addiu       $a2, $sp, 0x620
    ctx->pc = 0x462c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
label_462c70:
    // 0x462c70: 0xc115ee8  jal         func_457BA0
label_462c74:
    if (ctx->pc == 0x462C74u) {
        ctx->pc = 0x462C78u;
        goto label_462c78;
    }
    ctx->pc = 0x462C70u;
    SET_GPR_U32(ctx, 31, 0x462C78u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x462C70u, 0x462C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462C78u;
label_462c78:
    // 0x462c78: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_462c7c:
    if (ctx->pc == 0x462C7Cu) {
        ctx->pc = 0x462C80u;
        goto label_462c80;
    }
    ctx->pc = 0x462C78u;
    {
        const bool branch_taken_0x462c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462c78) {
            ctx->pc = 0x462CFCu;
            goto label_462cfc;
        }
    }
    ctx->pc = 0x462C80u;
label_462c80:
    // 0x462c80: 0x8fa30628  lw          $v1, 0x628($sp)
    ctx->pc = 0x462c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1576)));
label_462c84:
    // 0x462c84: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_462c88:
    if (ctx->pc == 0x462C88u) {
        ctx->pc = 0x462C8Cu;
        goto label_462c8c;
    }
    ctx->pc = 0x462C84u;
    {
        const bool branch_taken_0x462c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x462c84) {
            ctx->pc = 0x462CFCu;
            goto label_462cfc;
        }
    }
    ctx->pc = 0x462C8Cu;
label_462c8c:
    // 0x462c8c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x462c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_462c90:
    // 0x462c90: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x462c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_462c94:
    // 0x462c94: 0x8fa60624  lw          $a2, 0x624($sp)
    ctx->pc = 0x462c94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1572)));
label_462c98:
    // 0x462c98: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x462c98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_462c9c:
    // 0x462c9c: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x462c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_462ca0:
    // 0x462ca0: 0x2408083a  addiu       $t0, $zero, 0x83A
    ctx->pc = 0x462ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2106));
label_462ca4:
    // 0x462ca4: 0x2789b1cc  addiu       $t1, $gp, -0x4E34
    ctx->pc = 0x462ca4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947276));
label_462ca8:
    // 0x462ca8: 0xc113940  jal         func_44E500
label_462cac:
    if (ctx->pc == 0x462CACu) {
        ctx->pc = 0x462CB0u;
        goto label_462cb0;
    }
    ctx->pc = 0x462CA8u;
    SET_GPR_U32(ctx, 31, 0x462CB0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x462CA8u, 0x462CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462CB0u;
label_462cb0:
    // 0x462cb0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x462cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_462cb4:
    // 0x462cb4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x462cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_462cb8:
    // 0x462cb8: 0x24a5efd0  addiu       $a1, $a1, -0x1030
    ctx->pc = 0x462cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963152));
label_462cbc:
    // 0x462cbc: 0xc115c24  jal         func_457090
label_462cc0:
    if (ctx->pc == 0x462CC0u) {
        ctx->pc = 0x462CC4u;
        goto label_462cc4;
    }
    ctx->pc = 0x462CBCu;
    SET_GPR_U32(ctx, 31, 0x462CC4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x462CBCu, 0x462CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462CC4u;
label_462cc4:
    // 0x462cc4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x462cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_462cc8:
    // 0x462cc8: 0x8fa20628  lw          $v0, 0x628($sp)
    ctx->pc = 0x462cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1576)));
label_462ccc:
    // 0x462ccc: 0x40f809  jalr        $v0
label_462cd0:
    if (ctx->pc == 0x462CD0u) {
        ctx->pc = 0x462CD4u;
        goto label_462cd4;
    }
    ctx->pc = 0x462CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x462CD4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x462CCCu, 0x462CD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x462CD4u;
label_462cd4:
    // 0x462cd4: 0xaf82b264  sw          $v0, -0x4D9C($gp)
    ctx->pc = 0x462cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947428), GPR_U32(ctx, 2));
label_462cd8:
    // 0x462cd8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x462cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_462cdc:
    // 0x462cdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_462ce0:
    if (ctx->pc == 0x462CE0u) {
        ctx->pc = 0x462CE4u;
        goto label_462ce4;
    }
    ctx->pc = 0x462CDCu;
    {
        const bool branch_taken_0x462cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462cdc) {
            ctx->pc = 0x462CECu;
            goto label_462cec;
        }
    }
    ctx->pc = 0x462CE4u;
label_462ce4:
    // 0x462ce4: 0xd  break       0
    ctx->pc = 0x462ce4u;
    runtime->handleBreak(rdram, ctx);
label_462ce8:
    // 0x462ce8: 0x0  nop
    ctx->pc = 0x462ce8u;
    // NOP
label_462cec:
    // 0x462cec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x462cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_462cf0:
    // 0x462cf0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x462cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_462cf4:
    // 0x462cf4: 0xc11392c  jal         func_44E4B0
label_462cf8:
    if (ctx->pc == 0x462CF8u) {
        ctx->pc = 0x462CFCu;
        goto label_462cfc;
    }
    ctx->pc = 0x462CF4u;
    SET_GPR_U32(ctx, 31, 0x462CFCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x462CF4u, 0x462CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462CFCu;
label_462cfc:
    // 0x462cfc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x462cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_462d00:
    // 0x462d00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x462d00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_462d04:
    // 0x462d04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x462d04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_462d08:
    // 0x462d08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x462d08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_462d0c:
    // 0x462d0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x462d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_462d10:
    // 0x462d10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x462d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_462d14:
    // 0x462d14: 0x27bd0690  addiu       $sp, $sp, 0x690
    ctx->pc = 0x462d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1680));
label_462d18:
    // 0x462d18: 0x3e00008  jr          $ra
label_462d1c:
    if (ctx->pc == 0x462D1Cu) {
        ctx->pc = 0x462D20u;
        goto label_fallthrough_0x462d18;
    }
    ctx->pc = 0x462D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x462D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x462d18:
    ctx->pc = 0x462D20u;
}
