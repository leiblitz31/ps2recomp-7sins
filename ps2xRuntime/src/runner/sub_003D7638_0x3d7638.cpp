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

// Function: sub_003D7638
// Address: 0x3d7638 - 0x3d7e90
void sub_003D7638_0x3d7638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7638_0x3d7638");
#endif

    switch (ctx->pc) {
        case 0x3d7638u: goto label_3d7638;
        case 0x3d763cu: goto label_3d763c;
        case 0x3d7640u: goto label_3d7640;
        case 0x3d7644u: goto label_3d7644;
        case 0x3d7648u: goto label_3d7648;
        case 0x3d764cu: goto label_3d764c;
        case 0x3d7650u: goto label_3d7650;
        case 0x3d7654u: goto label_3d7654;
        case 0x3d7658u: goto label_3d7658;
        case 0x3d765cu: goto label_3d765c;
        case 0x3d7660u: goto label_3d7660;
        case 0x3d7664u: goto label_3d7664;
        case 0x3d7668u: goto label_3d7668;
        case 0x3d766cu: goto label_3d766c;
        case 0x3d7670u: goto label_3d7670;
        case 0x3d7674u: goto label_3d7674;
        case 0x3d7678u: goto label_3d7678;
        case 0x3d767cu: goto label_3d767c;
        case 0x3d7680u: goto label_3d7680;
        case 0x3d7684u: goto label_3d7684;
        case 0x3d7688u: goto label_3d7688;
        case 0x3d768cu: goto label_3d768c;
        case 0x3d7690u: goto label_3d7690;
        case 0x3d7694u: goto label_3d7694;
        case 0x3d7698u: goto label_3d7698;
        case 0x3d769cu: goto label_3d769c;
        case 0x3d76a0u: goto label_3d76a0;
        case 0x3d76a4u: goto label_3d76a4;
        case 0x3d76a8u: goto label_3d76a8;
        case 0x3d76acu: goto label_3d76ac;
        case 0x3d76b0u: goto label_3d76b0;
        case 0x3d76b4u: goto label_3d76b4;
        case 0x3d76b8u: goto label_3d76b8;
        case 0x3d76bcu: goto label_3d76bc;
        case 0x3d76c0u: goto label_3d76c0;
        case 0x3d76c4u: goto label_3d76c4;
        case 0x3d76c8u: goto label_3d76c8;
        case 0x3d76ccu: goto label_3d76cc;
        case 0x3d76d0u: goto label_3d76d0;
        case 0x3d76d4u: goto label_3d76d4;
        case 0x3d76d8u: goto label_3d76d8;
        case 0x3d76dcu: goto label_3d76dc;
        case 0x3d76e0u: goto label_3d76e0;
        case 0x3d76e4u: goto label_3d76e4;
        case 0x3d76e8u: goto label_3d76e8;
        case 0x3d76ecu: goto label_3d76ec;
        case 0x3d76f0u: goto label_3d76f0;
        case 0x3d76f4u: goto label_3d76f4;
        case 0x3d76f8u: goto label_3d76f8;
        case 0x3d76fcu: goto label_3d76fc;
        case 0x3d7700u: goto label_3d7700;
        case 0x3d7704u: goto label_3d7704;
        case 0x3d7708u: goto label_3d7708;
        case 0x3d770cu: goto label_3d770c;
        case 0x3d7710u: goto label_3d7710;
        case 0x3d7714u: goto label_3d7714;
        case 0x3d7718u: goto label_3d7718;
        case 0x3d771cu: goto label_3d771c;
        case 0x3d7720u: goto label_3d7720;
        case 0x3d7724u: goto label_3d7724;
        case 0x3d7728u: goto label_3d7728;
        case 0x3d772cu: goto label_3d772c;
        case 0x3d7730u: goto label_3d7730;
        case 0x3d7734u: goto label_3d7734;
        case 0x3d7738u: goto label_3d7738;
        case 0x3d773cu: goto label_3d773c;
        case 0x3d7740u: goto label_3d7740;
        case 0x3d7744u: goto label_3d7744;
        case 0x3d7748u: goto label_3d7748;
        case 0x3d774cu: goto label_3d774c;
        case 0x3d7750u: goto label_3d7750;
        case 0x3d7754u: goto label_3d7754;
        case 0x3d7758u: goto label_3d7758;
        case 0x3d775cu: goto label_3d775c;
        case 0x3d7760u: goto label_3d7760;
        case 0x3d7764u: goto label_3d7764;
        case 0x3d7768u: goto label_3d7768;
        case 0x3d776cu: goto label_3d776c;
        case 0x3d7770u: goto label_3d7770;
        case 0x3d7774u: goto label_3d7774;
        case 0x3d7778u: goto label_3d7778;
        case 0x3d777cu: goto label_3d777c;
        case 0x3d7780u: goto label_3d7780;
        case 0x3d7784u: goto label_3d7784;
        case 0x3d7788u: goto label_3d7788;
        case 0x3d778cu: goto label_3d778c;
        case 0x3d7790u: goto label_3d7790;
        case 0x3d7794u: goto label_3d7794;
        case 0x3d7798u: goto label_3d7798;
        case 0x3d779cu: goto label_3d779c;
        case 0x3d77a0u: goto label_3d77a0;
        case 0x3d77a4u: goto label_3d77a4;
        case 0x3d77a8u: goto label_3d77a8;
        case 0x3d77acu: goto label_3d77ac;
        case 0x3d77b0u: goto label_3d77b0;
        case 0x3d77b4u: goto label_3d77b4;
        case 0x3d77b8u: goto label_3d77b8;
        case 0x3d77bcu: goto label_3d77bc;
        case 0x3d77c0u: goto label_3d77c0;
        case 0x3d77c4u: goto label_3d77c4;
        case 0x3d77c8u: goto label_3d77c8;
        case 0x3d77ccu: goto label_3d77cc;
        case 0x3d77d0u: goto label_3d77d0;
        case 0x3d77d4u: goto label_3d77d4;
        case 0x3d77d8u: goto label_3d77d8;
        case 0x3d77dcu: goto label_3d77dc;
        case 0x3d77e0u: goto label_3d77e0;
        case 0x3d77e4u: goto label_3d77e4;
        case 0x3d77e8u: goto label_3d77e8;
        case 0x3d77ecu: goto label_3d77ec;
        case 0x3d77f0u: goto label_3d77f0;
        case 0x3d77f4u: goto label_3d77f4;
        case 0x3d77f8u: goto label_3d77f8;
        case 0x3d77fcu: goto label_3d77fc;
        case 0x3d7800u: goto label_3d7800;
        case 0x3d7804u: goto label_3d7804;
        case 0x3d7808u: goto label_3d7808;
        case 0x3d780cu: goto label_3d780c;
        case 0x3d7810u: goto label_3d7810;
        case 0x3d7814u: goto label_3d7814;
        case 0x3d7818u: goto label_3d7818;
        case 0x3d781cu: goto label_3d781c;
        case 0x3d7820u: goto label_3d7820;
        case 0x3d7824u: goto label_3d7824;
        case 0x3d7828u: goto label_3d7828;
        case 0x3d782cu: goto label_3d782c;
        case 0x3d7830u: goto label_3d7830;
        case 0x3d7834u: goto label_3d7834;
        case 0x3d7838u: goto label_3d7838;
        case 0x3d783cu: goto label_3d783c;
        case 0x3d7840u: goto label_3d7840;
        case 0x3d7844u: goto label_3d7844;
        case 0x3d7848u: goto label_3d7848;
        case 0x3d784cu: goto label_3d784c;
        case 0x3d7850u: goto label_3d7850;
        case 0x3d7854u: goto label_3d7854;
        case 0x3d7858u: goto label_3d7858;
        case 0x3d785cu: goto label_3d785c;
        case 0x3d7860u: goto label_3d7860;
        case 0x3d7864u: goto label_3d7864;
        case 0x3d7868u: goto label_3d7868;
        case 0x3d786cu: goto label_3d786c;
        case 0x3d7870u: goto label_3d7870;
        case 0x3d7874u: goto label_3d7874;
        case 0x3d7878u: goto label_3d7878;
        case 0x3d787cu: goto label_3d787c;
        case 0x3d7880u: goto label_3d7880;
        case 0x3d7884u: goto label_3d7884;
        case 0x3d7888u: goto label_3d7888;
        case 0x3d788cu: goto label_3d788c;
        case 0x3d7890u: goto label_3d7890;
        case 0x3d7894u: goto label_3d7894;
        case 0x3d7898u: goto label_3d7898;
        case 0x3d789cu: goto label_3d789c;
        case 0x3d78a0u: goto label_3d78a0;
        case 0x3d78a4u: goto label_3d78a4;
        case 0x3d78a8u: goto label_3d78a8;
        case 0x3d78acu: goto label_3d78ac;
        case 0x3d78b0u: goto label_3d78b0;
        case 0x3d78b4u: goto label_3d78b4;
        case 0x3d78b8u: goto label_3d78b8;
        case 0x3d78bcu: goto label_3d78bc;
        case 0x3d78c0u: goto label_3d78c0;
        case 0x3d78c4u: goto label_3d78c4;
        case 0x3d78c8u: goto label_3d78c8;
        case 0x3d78ccu: goto label_3d78cc;
        case 0x3d78d0u: goto label_3d78d0;
        case 0x3d78d4u: goto label_3d78d4;
        case 0x3d78d8u: goto label_3d78d8;
        case 0x3d78dcu: goto label_3d78dc;
        case 0x3d78e0u: goto label_3d78e0;
        case 0x3d78e4u: goto label_3d78e4;
        case 0x3d78e8u: goto label_3d78e8;
        case 0x3d78ecu: goto label_3d78ec;
        case 0x3d78f0u: goto label_3d78f0;
        case 0x3d78f4u: goto label_3d78f4;
        case 0x3d78f8u: goto label_3d78f8;
        case 0x3d78fcu: goto label_3d78fc;
        case 0x3d7900u: goto label_3d7900;
        case 0x3d7904u: goto label_3d7904;
        case 0x3d7908u: goto label_3d7908;
        case 0x3d790cu: goto label_3d790c;
        case 0x3d7910u: goto label_3d7910;
        case 0x3d7914u: goto label_3d7914;
        case 0x3d7918u: goto label_3d7918;
        case 0x3d791cu: goto label_3d791c;
        case 0x3d7920u: goto label_3d7920;
        case 0x3d7924u: goto label_3d7924;
        case 0x3d7928u: goto label_3d7928;
        case 0x3d792cu: goto label_3d792c;
        case 0x3d7930u: goto label_3d7930;
        case 0x3d7934u: goto label_3d7934;
        case 0x3d7938u: goto label_3d7938;
        case 0x3d793cu: goto label_3d793c;
        case 0x3d7940u: goto label_3d7940;
        case 0x3d7944u: goto label_3d7944;
        case 0x3d7948u: goto label_3d7948;
        case 0x3d794cu: goto label_3d794c;
        case 0x3d7950u: goto label_3d7950;
        case 0x3d7954u: goto label_3d7954;
        case 0x3d7958u: goto label_3d7958;
        case 0x3d795cu: goto label_3d795c;
        case 0x3d7960u: goto label_3d7960;
        case 0x3d7964u: goto label_3d7964;
        case 0x3d7968u: goto label_3d7968;
        case 0x3d796cu: goto label_3d796c;
        case 0x3d7970u: goto label_3d7970;
        case 0x3d7974u: goto label_3d7974;
        case 0x3d7978u: goto label_3d7978;
        case 0x3d797cu: goto label_3d797c;
        case 0x3d7980u: goto label_3d7980;
        case 0x3d7984u: goto label_3d7984;
        case 0x3d7988u: goto label_3d7988;
        case 0x3d798cu: goto label_3d798c;
        case 0x3d7990u: goto label_3d7990;
        case 0x3d7994u: goto label_3d7994;
        case 0x3d7998u: goto label_3d7998;
        case 0x3d799cu: goto label_3d799c;
        case 0x3d79a0u: goto label_3d79a0;
        case 0x3d79a4u: goto label_3d79a4;
        case 0x3d79a8u: goto label_3d79a8;
        case 0x3d79acu: goto label_3d79ac;
        case 0x3d79b0u: goto label_3d79b0;
        case 0x3d79b4u: goto label_3d79b4;
        case 0x3d79b8u: goto label_3d79b8;
        case 0x3d79bcu: goto label_3d79bc;
        case 0x3d79c0u: goto label_3d79c0;
        case 0x3d79c4u: goto label_3d79c4;
        case 0x3d79c8u: goto label_3d79c8;
        case 0x3d79ccu: goto label_3d79cc;
        case 0x3d79d0u: goto label_3d79d0;
        case 0x3d79d4u: goto label_3d79d4;
        case 0x3d79d8u: goto label_3d79d8;
        case 0x3d79dcu: goto label_3d79dc;
        case 0x3d79e0u: goto label_3d79e0;
        case 0x3d79e4u: goto label_3d79e4;
        case 0x3d79e8u: goto label_3d79e8;
        case 0x3d79ecu: goto label_3d79ec;
        case 0x3d79f0u: goto label_3d79f0;
        case 0x3d79f4u: goto label_3d79f4;
        case 0x3d79f8u: goto label_3d79f8;
        case 0x3d79fcu: goto label_3d79fc;
        case 0x3d7a00u: goto label_3d7a00;
        case 0x3d7a04u: goto label_3d7a04;
        case 0x3d7a08u: goto label_3d7a08;
        case 0x3d7a0cu: goto label_3d7a0c;
        case 0x3d7a10u: goto label_3d7a10;
        case 0x3d7a14u: goto label_3d7a14;
        case 0x3d7a18u: goto label_3d7a18;
        case 0x3d7a1cu: goto label_3d7a1c;
        case 0x3d7a20u: goto label_3d7a20;
        case 0x3d7a24u: goto label_3d7a24;
        case 0x3d7a28u: goto label_3d7a28;
        case 0x3d7a2cu: goto label_3d7a2c;
        case 0x3d7a30u: goto label_3d7a30;
        case 0x3d7a34u: goto label_3d7a34;
        case 0x3d7a38u: goto label_3d7a38;
        case 0x3d7a3cu: goto label_3d7a3c;
        case 0x3d7a40u: goto label_3d7a40;
        case 0x3d7a44u: goto label_3d7a44;
        case 0x3d7a48u: goto label_3d7a48;
        case 0x3d7a4cu: goto label_3d7a4c;
        case 0x3d7a50u: goto label_3d7a50;
        case 0x3d7a54u: goto label_3d7a54;
        case 0x3d7a58u: goto label_3d7a58;
        case 0x3d7a5cu: goto label_3d7a5c;
        case 0x3d7a60u: goto label_3d7a60;
        case 0x3d7a64u: goto label_3d7a64;
        case 0x3d7a68u: goto label_3d7a68;
        case 0x3d7a6cu: goto label_3d7a6c;
        case 0x3d7a70u: goto label_3d7a70;
        case 0x3d7a74u: goto label_3d7a74;
        case 0x3d7a78u: goto label_3d7a78;
        case 0x3d7a7cu: goto label_3d7a7c;
        case 0x3d7a80u: goto label_3d7a80;
        case 0x3d7a84u: goto label_3d7a84;
        case 0x3d7a88u: goto label_3d7a88;
        case 0x3d7a8cu: goto label_3d7a8c;
        case 0x3d7a90u: goto label_3d7a90;
        case 0x3d7a94u: goto label_3d7a94;
        case 0x3d7a98u: goto label_3d7a98;
        case 0x3d7a9cu: goto label_3d7a9c;
        case 0x3d7aa0u: goto label_3d7aa0;
        case 0x3d7aa4u: goto label_3d7aa4;
        case 0x3d7aa8u: goto label_3d7aa8;
        case 0x3d7aacu: goto label_3d7aac;
        case 0x3d7ab0u: goto label_3d7ab0;
        case 0x3d7ab4u: goto label_3d7ab4;
        case 0x3d7ab8u: goto label_3d7ab8;
        case 0x3d7abcu: goto label_3d7abc;
        case 0x3d7ac0u: goto label_3d7ac0;
        case 0x3d7ac4u: goto label_3d7ac4;
        case 0x3d7ac8u: goto label_3d7ac8;
        case 0x3d7accu: goto label_3d7acc;
        case 0x3d7ad0u: goto label_3d7ad0;
        case 0x3d7ad4u: goto label_3d7ad4;
        case 0x3d7ad8u: goto label_3d7ad8;
        case 0x3d7adcu: goto label_3d7adc;
        case 0x3d7ae0u: goto label_3d7ae0;
        case 0x3d7ae4u: goto label_3d7ae4;
        case 0x3d7ae8u: goto label_3d7ae8;
        case 0x3d7aecu: goto label_3d7aec;
        case 0x3d7af0u: goto label_3d7af0;
        case 0x3d7af4u: goto label_3d7af4;
        case 0x3d7af8u: goto label_3d7af8;
        case 0x3d7afcu: goto label_3d7afc;
        case 0x3d7b00u: goto label_3d7b00;
        case 0x3d7b04u: goto label_3d7b04;
        case 0x3d7b08u: goto label_3d7b08;
        case 0x3d7b0cu: goto label_3d7b0c;
        case 0x3d7b10u: goto label_3d7b10;
        case 0x3d7b14u: goto label_3d7b14;
        case 0x3d7b18u: goto label_3d7b18;
        case 0x3d7b1cu: goto label_3d7b1c;
        case 0x3d7b20u: goto label_3d7b20;
        case 0x3d7b24u: goto label_3d7b24;
        case 0x3d7b28u: goto label_3d7b28;
        case 0x3d7b2cu: goto label_3d7b2c;
        case 0x3d7b30u: goto label_3d7b30;
        case 0x3d7b34u: goto label_3d7b34;
        case 0x3d7b38u: goto label_3d7b38;
        case 0x3d7b3cu: goto label_3d7b3c;
        case 0x3d7b40u: goto label_3d7b40;
        case 0x3d7b44u: goto label_3d7b44;
        case 0x3d7b48u: goto label_3d7b48;
        case 0x3d7b4cu: goto label_3d7b4c;
        case 0x3d7b50u: goto label_3d7b50;
        case 0x3d7b54u: goto label_3d7b54;
        case 0x3d7b58u: goto label_3d7b58;
        case 0x3d7b5cu: goto label_3d7b5c;
        case 0x3d7b60u: goto label_3d7b60;
        case 0x3d7b64u: goto label_3d7b64;
        case 0x3d7b68u: goto label_3d7b68;
        case 0x3d7b6cu: goto label_3d7b6c;
        case 0x3d7b70u: goto label_3d7b70;
        case 0x3d7b74u: goto label_3d7b74;
        case 0x3d7b78u: goto label_3d7b78;
        case 0x3d7b7cu: goto label_3d7b7c;
        case 0x3d7b80u: goto label_3d7b80;
        case 0x3d7b84u: goto label_3d7b84;
        case 0x3d7b88u: goto label_3d7b88;
        case 0x3d7b8cu: goto label_3d7b8c;
        case 0x3d7b90u: goto label_3d7b90;
        case 0x3d7b94u: goto label_3d7b94;
        case 0x3d7b98u: goto label_3d7b98;
        case 0x3d7b9cu: goto label_3d7b9c;
        case 0x3d7ba0u: goto label_3d7ba0;
        case 0x3d7ba4u: goto label_3d7ba4;
        case 0x3d7ba8u: goto label_3d7ba8;
        case 0x3d7bacu: goto label_3d7bac;
        case 0x3d7bb0u: goto label_3d7bb0;
        case 0x3d7bb4u: goto label_3d7bb4;
        case 0x3d7bb8u: goto label_3d7bb8;
        case 0x3d7bbcu: goto label_3d7bbc;
        case 0x3d7bc0u: goto label_3d7bc0;
        case 0x3d7bc4u: goto label_3d7bc4;
        case 0x3d7bc8u: goto label_3d7bc8;
        case 0x3d7bccu: goto label_3d7bcc;
        case 0x3d7bd0u: goto label_3d7bd0;
        case 0x3d7bd4u: goto label_3d7bd4;
        case 0x3d7bd8u: goto label_3d7bd8;
        case 0x3d7bdcu: goto label_3d7bdc;
        case 0x3d7be0u: goto label_3d7be0;
        case 0x3d7be4u: goto label_3d7be4;
        case 0x3d7be8u: goto label_3d7be8;
        case 0x3d7becu: goto label_3d7bec;
        case 0x3d7bf0u: goto label_3d7bf0;
        case 0x3d7bf4u: goto label_3d7bf4;
        case 0x3d7bf8u: goto label_3d7bf8;
        case 0x3d7bfcu: goto label_3d7bfc;
        case 0x3d7c00u: goto label_3d7c00;
        case 0x3d7c04u: goto label_3d7c04;
        case 0x3d7c08u: goto label_3d7c08;
        case 0x3d7c0cu: goto label_3d7c0c;
        case 0x3d7c10u: goto label_3d7c10;
        case 0x3d7c14u: goto label_3d7c14;
        case 0x3d7c18u: goto label_3d7c18;
        case 0x3d7c1cu: goto label_3d7c1c;
        case 0x3d7c20u: goto label_3d7c20;
        case 0x3d7c24u: goto label_3d7c24;
        case 0x3d7c28u: goto label_3d7c28;
        case 0x3d7c2cu: goto label_3d7c2c;
        case 0x3d7c30u: goto label_3d7c30;
        case 0x3d7c34u: goto label_3d7c34;
        case 0x3d7c38u: goto label_3d7c38;
        case 0x3d7c3cu: goto label_3d7c3c;
        case 0x3d7c40u: goto label_3d7c40;
        case 0x3d7c44u: goto label_3d7c44;
        case 0x3d7c48u: goto label_3d7c48;
        case 0x3d7c4cu: goto label_3d7c4c;
        case 0x3d7c50u: goto label_3d7c50;
        case 0x3d7c54u: goto label_3d7c54;
        case 0x3d7c58u: goto label_3d7c58;
        case 0x3d7c5cu: goto label_3d7c5c;
        case 0x3d7c60u: goto label_3d7c60;
        case 0x3d7c64u: goto label_3d7c64;
        case 0x3d7c68u: goto label_3d7c68;
        case 0x3d7c6cu: goto label_3d7c6c;
        case 0x3d7c70u: goto label_3d7c70;
        case 0x3d7c74u: goto label_3d7c74;
        case 0x3d7c78u: goto label_3d7c78;
        case 0x3d7c7cu: goto label_3d7c7c;
        case 0x3d7c80u: goto label_3d7c80;
        case 0x3d7c84u: goto label_3d7c84;
        case 0x3d7c88u: goto label_3d7c88;
        case 0x3d7c8cu: goto label_3d7c8c;
        case 0x3d7c90u: goto label_3d7c90;
        case 0x3d7c94u: goto label_3d7c94;
        case 0x3d7c98u: goto label_3d7c98;
        case 0x3d7c9cu: goto label_3d7c9c;
        case 0x3d7ca0u: goto label_3d7ca0;
        case 0x3d7ca4u: goto label_3d7ca4;
        case 0x3d7ca8u: goto label_3d7ca8;
        case 0x3d7cacu: goto label_3d7cac;
        case 0x3d7cb0u: goto label_3d7cb0;
        case 0x3d7cb4u: goto label_3d7cb4;
        case 0x3d7cb8u: goto label_3d7cb8;
        case 0x3d7cbcu: goto label_3d7cbc;
        case 0x3d7cc0u: goto label_3d7cc0;
        case 0x3d7cc4u: goto label_3d7cc4;
        case 0x3d7cc8u: goto label_3d7cc8;
        case 0x3d7cccu: goto label_3d7ccc;
        case 0x3d7cd0u: goto label_3d7cd0;
        case 0x3d7cd4u: goto label_3d7cd4;
        case 0x3d7cd8u: goto label_3d7cd8;
        case 0x3d7cdcu: goto label_3d7cdc;
        case 0x3d7ce0u: goto label_3d7ce0;
        case 0x3d7ce4u: goto label_3d7ce4;
        case 0x3d7ce8u: goto label_3d7ce8;
        case 0x3d7cecu: goto label_3d7cec;
        case 0x3d7cf0u: goto label_3d7cf0;
        case 0x3d7cf4u: goto label_3d7cf4;
        case 0x3d7cf8u: goto label_3d7cf8;
        case 0x3d7cfcu: goto label_3d7cfc;
        case 0x3d7d00u: goto label_3d7d00;
        case 0x3d7d04u: goto label_3d7d04;
        case 0x3d7d08u: goto label_3d7d08;
        case 0x3d7d0cu: goto label_3d7d0c;
        case 0x3d7d10u: goto label_3d7d10;
        case 0x3d7d14u: goto label_3d7d14;
        case 0x3d7d18u: goto label_3d7d18;
        case 0x3d7d1cu: goto label_3d7d1c;
        case 0x3d7d20u: goto label_3d7d20;
        case 0x3d7d24u: goto label_3d7d24;
        case 0x3d7d28u: goto label_3d7d28;
        case 0x3d7d2cu: goto label_3d7d2c;
        case 0x3d7d30u: goto label_3d7d30;
        case 0x3d7d34u: goto label_3d7d34;
        case 0x3d7d38u: goto label_3d7d38;
        case 0x3d7d3cu: goto label_3d7d3c;
        case 0x3d7d40u: goto label_3d7d40;
        case 0x3d7d44u: goto label_3d7d44;
        case 0x3d7d48u: goto label_3d7d48;
        case 0x3d7d4cu: goto label_3d7d4c;
        case 0x3d7d50u: goto label_3d7d50;
        case 0x3d7d54u: goto label_3d7d54;
        case 0x3d7d58u: goto label_3d7d58;
        case 0x3d7d5cu: goto label_3d7d5c;
        case 0x3d7d60u: goto label_3d7d60;
        case 0x3d7d64u: goto label_3d7d64;
        case 0x3d7d68u: goto label_3d7d68;
        case 0x3d7d6cu: goto label_3d7d6c;
        case 0x3d7d70u: goto label_3d7d70;
        case 0x3d7d74u: goto label_3d7d74;
        case 0x3d7d78u: goto label_3d7d78;
        case 0x3d7d7cu: goto label_3d7d7c;
        case 0x3d7d80u: goto label_3d7d80;
        case 0x3d7d84u: goto label_3d7d84;
        case 0x3d7d88u: goto label_3d7d88;
        case 0x3d7d8cu: goto label_3d7d8c;
        case 0x3d7d90u: goto label_3d7d90;
        case 0x3d7d94u: goto label_3d7d94;
        case 0x3d7d98u: goto label_3d7d98;
        case 0x3d7d9cu: goto label_3d7d9c;
        case 0x3d7da0u: goto label_3d7da0;
        case 0x3d7da4u: goto label_3d7da4;
        case 0x3d7da8u: goto label_3d7da8;
        case 0x3d7dacu: goto label_3d7dac;
        case 0x3d7db0u: goto label_3d7db0;
        case 0x3d7db4u: goto label_3d7db4;
        case 0x3d7db8u: goto label_3d7db8;
        case 0x3d7dbcu: goto label_3d7dbc;
        case 0x3d7dc0u: goto label_3d7dc0;
        case 0x3d7dc4u: goto label_3d7dc4;
        case 0x3d7dc8u: goto label_3d7dc8;
        case 0x3d7dccu: goto label_3d7dcc;
        case 0x3d7dd0u: goto label_3d7dd0;
        case 0x3d7dd4u: goto label_3d7dd4;
        case 0x3d7dd8u: goto label_3d7dd8;
        case 0x3d7ddcu: goto label_3d7ddc;
        case 0x3d7de0u: goto label_3d7de0;
        case 0x3d7de4u: goto label_3d7de4;
        case 0x3d7de8u: goto label_3d7de8;
        case 0x3d7decu: goto label_3d7dec;
        case 0x3d7df0u: goto label_3d7df0;
        case 0x3d7df4u: goto label_3d7df4;
        case 0x3d7df8u: goto label_3d7df8;
        case 0x3d7dfcu: goto label_3d7dfc;
        case 0x3d7e00u: goto label_3d7e00;
        case 0x3d7e04u: goto label_3d7e04;
        case 0x3d7e08u: goto label_3d7e08;
        case 0x3d7e0cu: goto label_3d7e0c;
        case 0x3d7e10u: goto label_3d7e10;
        case 0x3d7e14u: goto label_3d7e14;
        case 0x3d7e18u: goto label_3d7e18;
        case 0x3d7e1cu: goto label_3d7e1c;
        case 0x3d7e20u: goto label_3d7e20;
        case 0x3d7e24u: goto label_3d7e24;
        case 0x3d7e28u: goto label_3d7e28;
        case 0x3d7e2cu: goto label_3d7e2c;
        case 0x3d7e30u: goto label_3d7e30;
        case 0x3d7e34u: goto label_3d7e34;
        case 0x3d7e38u: goto label_3d7e38;
        case 0x3d7e3cu: goto label_3d7e3c;
        case 0x3d7e40u: goto label_3d7e40;
        case 0x3d7e44u: goto label_3d7e44;
        case 0x3d7e48u: goto label_3d7e48;
        case 0x3d7e4cu: goto label_3d7e4c;
        case 0x3d7e50u: goto label_3d7e50;
        case 0x3d7e54u: goto label_3d7e54;
        case 0x3d7e58u: goto label_3d7e58;
        case 0x3d7e5cu: goto label_3d7e5c;
        case 0x3d7e60u: goto label_3d7e60;
        case 0x3d7e64u: goto label_3d7e64;
        case 0x3d7e68u: goto label_3d7e68;
        case 0x3d7e6cu: goto label_3d7e6c;
        case 0x3d7e70u: goto label_3d7e70;
        case 0x3d7e74u: goto label_3d7e74;
        case 0x3d7e78u: goto label_3d7e78;
        case 0x3d7e7cu: goto label_3d7e7c;
        case 0x3d7e80u: goto label_3d7e80;
        case 0x3d7e84u: goto label_3d7e84;
        case 0x3d7e88u: goto label_3d7e88;
        case 0x3d7e8cu: goto label_3d7e8c;
        default: break;
    }

    ctx->pc = 0x3d7638u;

label_3d7638:
    // 0x3d7638: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d7638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3d763c:
    // 0x3d763c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3d763cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3d7640:
    // 0x3d7640: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3d7640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3d7644:
    // 0x3d7644: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d7644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d7648:
    // 0x3d7648: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3d7648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3d764c:
    // 0x3d764c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3d764cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d7650:
    // 0x3d7650: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d7650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d7654:
    // 0x3d7654: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_3d7658:
    if (ctx->pc == 0x3D7658u) {
        ctx->pc = 0x3D7658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7654u;
        // 0x3d7658: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D765Cu;
        goto label_3d765c;
    }
    ctx->pc = 0x3D7654u;
    {
        const bool branch_taken_0x3d7654 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7654u;
        // 0x3d7658: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7654) {
            ctx->pc = 0x3D7678u;
            goto label_3d7678;
        }
    }
    ctx->pc = 0x3D765Cu;
label_3d765c:
    // 0x3d765c: 0x8e320024  lw          $s2, 0x24($s1)
    ctx->pc = 0x3d765cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3d7660:
    // 0x3d7660: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_3d7664:
    if (ctx->pc == 0x3D7664u) {
        ctx->pc = 0x3D7664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7660u;
        // 0x3d7664: 0x2a620005  slti        $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7668u;
        goto label_3d7668;
    }
    ctx->pc = 0x3D7660u;
    {
        const bool branch_taken_0x3d7660 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7660u;
        // 0x3d7664: 0x2a620005  slti        $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7660) {
            ctx->pc = 0x3D7678u;
            goto label_3d7678;
        }
    }
    ctx->pc = 0x3D7668u;
label_3d7668:
    // 0x3d7668: 0x10400146  beqz        $v0, . + 4 + (0x146 << 2)
label_3d766c:
    if (ctx->pc == 0x3D766Cu) {
        ctx->pc = 0x3D766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7668u;
        // 0x3d766c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7670u;
        goto label_3d7670;
    }
    ctx->pc = 0x3D7668u;
    {
        const bool branch_taken_0x3d7668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7668u;
        // 0x3d766c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7668) {
            ctx->pc = 0x3D7B84u;
            goto label_3d7b84;
        }
    }
    ctx->pc = 0x3D7670u;
label_3d7670:
    // 0x3d7670: 0x6630003  bgezl       $s3, . + 4 + (0x3 << 2)
label_3d7674:
    if (ctx->pc == 0x3D7674u) {
        ctx->pc = 0x3D7674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7670u;
        // 0x3d7674: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7678u;
        goto label_3d7678;
    }
    ctx->pc = 0x3D7670u;
    {
        const bool branch_taken_0x3d7670 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x3d7670) {
            ctx->pc = 0x3D7674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7670u;
            // 0x3d7674: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7680u;
            goto label_3d7680;
        }
    }
    ctx->pc = 0x3D7678u;
label_3d7678:
    // 0x3d7678: 0x10000142  b           . + 4 + (0x142 << 2)
label_3d767c:
    if (ctx->pc == 0x3D767Cu) {
        ctx->pc = 0x3D767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7678u;
        // 0x3d767c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7680u;
        goto label_3d7680;
    }
    ctx->pc = 0x3D7678u;
    {
        const bool branch_taken_0x3d7678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7678u;
        // 0x3d767c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7678) {
            ctx->pc = 0x3D7B84u;
            goto label_3d7b84;
        }
    }
    ctx->pc = 0x3D7680u;
label_3d7680:
    // 0x3d7680: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3d7684:
    if (ctx->pc == 0x3D7684u) {
        ctx->pc = 0x3D7684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7680u;
        // 0x3d7684: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7688u;
        goto label_3d7688;
    }
    ctx->pc = 0x3D7680u;
    {
        const bool branch_taken_0x3d7680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7680u;
        // 0x3d7684: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7680) {
            ctx->pc = 0x3D76BCu;
            goto label_3d76bc;
        }
    }
    ctx->pc = 0x3D7688u;
label_3d7688:
    // 0x3d7688: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3d7688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d768c:
    // 0x3d768c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_3d7690:
    if (ctx->pc == 0x3D7690u) {
        ctx->pc = 0x3D7690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D768Cu;
        // 0x3d7690: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7694u;
        goto label_3d7694;
    }
    ctx->pc = 0x3D768Cu;
    {
        const bool branch_taken_0x3d768c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d768c) {
            ctx->pc = 0x3D7690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D768Cu;
            // 0x3d7690: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D76A4u;
            goto label_3d76a4;
        }
    }
    ctx->pc = 0x3D7694u;
label_3d7694:
    // 0x3d7694: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3d7694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3d7698:
    // 0x3d7698: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3d769c:
    if (ctx->pc == 0x3D769Cu) {
        ctx->pc = 0x3D769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7698u;
        // 0x3d769c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D76A0u;
        goto label_3d76a0;
    }
    ctx->pc = 0x3D7698u;
    {
        const bool branch_taken_0x3d7698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7698u;
        // 0x3d769c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7698) {
            ctx->pc = 0x3D76C0u;
            goto label_3d76c0;
        }
    }
    ctx->pc = 0x3D76A0u;
label_3d76a0:
    // 0x3d76a0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3d76a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3d76a4:
    // 0x3d76a4: 0x2402029a  addiu       $v0, $zero, 0x29A
    ctx->pc = 0x3d76a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
label_3d76a8:
    // 0x3d76a8: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_3d76ac:
    if (ctx->pc == 0x3D76ACu) {
        ctx->pc = 0x3D76ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D76A8u;
        // 0x3d76ac: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D76B0u;
        goto label_3d76b0;
    }
    ctx->pc = 0x3D76A8u;
    {
        const bool branch_taken_0x3d76a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d76a8) {
            ctx->pc = 0x3D76ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D76A8u;
            // 0x3d76ac: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D76D0u;
            goto label_3d76d0;
        }
    }
    ctx->pc = 0x3D76B0u;
label_3d76b0:
    // 0x3d76b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3d76b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d76b4:
    // 0x3d76b4: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
label_3d76b8:
    if (ctx->pc == 0x3D76B8u) {
        ctx->pc = 0x3D76B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D76B4u;
        // 0x3d76b8: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D76BCu;
        goto label_3d76bc;
    }
    ctx->pc = 0x3D76B4u;
    {
        const bool branch_taken_0x3d76b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D76B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D76B4u;
        // 0x3d76b8: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d76b4) {
            ctx->pc = 0x3D76CCu;
            goto label_3d76cc;
        }
    }
    ctx->pc = 0x3D76BCu;
label_3d76bc:
    // 0x3d76bc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3d76bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3d76c0:
    // 0x3d76c0: 0x8c83b3e8  lw          $v1, -0x4C18($a0)
    ctx->pc = 0x3d76c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947816)));
label_3d76c4:
    // 0x3d76c4: 0x1000012f  b           . + 4 + (0x12F << 2)
label_3d76c8:
    if (ctx->pc == 0x3D76C8u) {
        ctx->pc = 0x3D76C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D76C4u;
        // 0x3d76c8: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D76CCu;
        goto label_3d76cc;
    }
    ctx->pc = 0x3D76C4u;
    {
        const bool branch_taken_0x3d76c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D76C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D76C4u;
        // 0x3d76c8: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d76c4) {
            ctx->pc = 0x3D7B84u;
            goto label_3d7b84;
        }
    }
    ctx->pc = 0x3D76CCu;
label_3d76cc:
    // 0x3d76cc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3d76ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3d76d0:
    // 0x3d76d0: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
label_3d76d4:
    if (ctx->pc == 0x3D76D4u) {
        ctx->pc = 0x3D76D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D76D0u;
        // 0x3d76d4: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D76D8u;
        goto label_3d76d8;
    }
    ctx->pc = 0x3D76D0u;
    {
        const bool branch_taken_0x3d76d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D76D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D76D0u;
        // 0x3d76d4: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d76d0) {
            ctx->pc = 0x3D78D0u;
            goto label_3d78d0;
        }
    }
    ctx->pc = 0x3D76D8u;
label_3d76d8:
    // 0x3d76d8: 0x8e4a0028  lw          $t2, 0x28($s2)
    ctx->pc = 0x3d76d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_3d76dc:
    // 0x3d76dc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3d76dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3d76e0:
    // 0x3d76e0: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x3d76e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_3d76e4:
    // 0x3d76e4: 0x14430045  bne         $v0, $v1, . + 4 + (0x45 << 2)
label_3d76e8:
    if (ctx->pc == 0x3D76E8u) {
        ctx->pc = 0x3D76E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D76E4u;
        // 0x3d76e8: 0xae530028  sw          $s3, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D76ECu;
        goto label_3d76ec;
    }
    ctx->pc = 0x3D76E4u;
    {
        const bool branch_taken_0x3d76e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D76E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D76E4u;
        // 0x3d76e8: 0xae530028  sw          $s3, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d76e4) {
            ctx->pc = 0x3D77FCu;
            goto label_3d77fc;
        }
    }
    ctx->pc = 0x3D76ECu;
label_3d76ec:
    // 0x3d76ec: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x3d76ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_3d76f0:
    // 0x3d76f0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3d76f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d76f4:
    // 0x3d76f4: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x3d76f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_3d76f8:
    // 0x3d76f8: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x3d76f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_3d76fc:
    // 0x3d76fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d76fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d7700:
    // 0x3d7700: 0x8e47007c  lw          $a3, 0x7C($s2)
    ctx->pc = 0x3d7700u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_3d7704:
    // 0x3d7704: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3d7704u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_3d7708:
    // 0x3d7708: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x3d7708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_3d770c:
    // 0x3d770c: 0x2c440004  sltiu       $a0, $v0, 0x4
    ctx->pc = 0x3d770cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_3d7710:
    // 0x3d7710: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x3d7710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
label_3d7714:
    // 0x3d7714: 0xc4100a  movz        $v0, $a2, $a0
    ctx->pc = 0x3d7714u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
label_3d7718:
    // 0x3d7718: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_3d771c:
    if (ctx->pc == 0x3D771Cu) {
        ctx->pc = 0x3D771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7718u;
        // 0x3d771c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7720u;
        goto label_3d7720;
    }
    ctx->pc = 0x3D7718u;
    {
        const bool branch_taken_0x3d7718 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7718) {
            ctx->pc = 0x3D771Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7718u;
            // 0x3d771c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7720u;
            goto label_3d7720;
        }
    }
    ctx->pc = 0x3D7720u;
label_3d7720:
    // 0x3d7720: 0x34660800  ori         $a2, $v1, 0x800
    ctx->pc = 0x3d7720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
label_3d7724:
    // 0x3d7724: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3d7724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_3d7728:
    // 0x3d7728: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3d7728u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_3d772c:
    // 0x3d772c: 0x8e48001c  lw          $t0, 0x1C($s2)
    ctx->pc = 0x3d772cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3d7730:
    // 0x3d7730: 0x34c20020  ori         $v0, $a2, 0x20
    ctx->pc = 0x3d7730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
label_3d7734:
    // 0x3d7734: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3d7734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3d7738:
    // 0x3d7738: 0x47300b  movn        $a2, $v0, $a3
    ctx->pc = 0x3d7738u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_3d773c:
    // 0x3d773c: 0x24040071  addiu       $a0, $zero, 0x71
    ctx->pc = 0x3d773cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
label_3d7740:
    // 0x3d7740: 0xc5001b  divu        $zero, $a2, $a1
    ctx->pc = 0x3d7740u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_3d7744:
    // 0x3d7744: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x3d7744u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
label_3d7748:
    // 0x3d7748: 0x24c6001f  addiu       $a2, $a2, 0x1F
    ctx->pc = 0x3d7748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31));
label_3d774c:
    // 0x3d774c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3d774cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_3d7750:
    // 0x3d7750: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3d7750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3d7754:
    // 0x3d7754: 0x25090001  addiu       $t1, $t0, 0x1
    ctx->pc = 0x3d7754u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3d7758:
    // 0x3d7758: 0x3810  mfhi        $a3
    ctx->pc = 0x3d7758u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_3d775c:
    // 0x3d775c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x3d775cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3d7760:
    // 0x3d7760: 0x61202  srl         $v0, $a2, 8
    ctx->pc = 0x3d7760u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
label_3d7764:
    // 0x3d7764: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3d7764u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_3d7768:
    // 0x3d7768: 0xae48001c  sw          $t0, 0x1C($s2)
    ctx->pc = 0x3d7768u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 8));
label_3d776c:
    // 0x3d776c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3d776cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3d7770:
    // 0x3d7770: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3d7770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_3d7774:
    // 0x3d7774: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x3d7774u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
label_3d7778:
    // 0x3d7778: 0xae49001c  sw          $t1, 0x1C($s2)
    ctx->pc = 0x3d7778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 9));
label_3d777c:
    // 0x3d777c: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x3d777cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_3d7780:
    // 0x3d7780: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_3d7784:
    if (ctx->pc == 0x3D7784u) {
        ctx->pc = 0x3D7784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7780u;
        // 0x3d7784: 0x25050002  addiu       $a1, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7788u;
        goto label_3d7788;
    }
    ctx->pc = 0x3D7780u;
    {
        const bool branch_taken_0x3d7780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7780u;
        // 0x3d7784: 0x25050002  addiu       $a1, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7780) {
            ctx->pc = 0x3D77F4u;
            goto label_3d77f4;
        }
    }
    ctx->pc = 0x3D7788u;
label_3d7788:
    // 0x3d7788: 0xde240038  ld          $a0, 0x38($s1)
    ctx->pc = 0x3d7788u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 56)));
label_3d778c:
    // 0x3d778c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3d778cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3d7790:
    // 0x3d7790: 0x25060003  addiu       $a2, $t0, 0x3
    ctx->pc = 0x3d7790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_3d7794:
    // 0x3d7794: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3d7794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_3d7798:
    // 0x3d7798: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3d7798u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_3d779c:
    // 0x3d779c: 0x25070004  addiu       $a3, $t0, 0x4
    ctx->pc = 0x3d779cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_3d77a0:
    // 0x3d77a0: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x3d77a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_3d77a4:
    // 0x3d77a4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3d77a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3d77a8:
    // 0x3d77a8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3d77a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_3d77ac:
    // 0x3d77ac: 0x25080005  addiu       $t0, $t0, 0x5
    ctx->pc = 0x3d77acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
label_3d77b0:
    // 0x3d77b0: 0xae45001c  sw          $a1, 0x1C($s2)
    ctx->pc = 0x3d77b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 5));
label_3d77b4:
    // 0x3d77b4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3d77b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3d77b8:
    // 0x3d77b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3d77b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3d77bc:
    // 0x3d77bc: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x3d77bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_3d77c0:
    // 0x3d77c0: 0xae46001c  sw          $a2, 0x1C($s2)
    ctx->pc = 0x3d77c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 6));
label_3d77c4:
    // 0x3d77c4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3d77c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3d77c8:
    // 0x3d77c8: 0x96240038  lhu         $a0, 0x38($s1)
    ctx->pc = 0x3d77c8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
label_3d77cc:
    // 0x3d77cc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3d77ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3d77d0:
    // 0x3d77d0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3d77d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_3d77d4:
    // 0x3d77d4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3d77d4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_3d77d8:
    // 0x3d77d8: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x3d77d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_3d77dc:
    // 0x3d77dc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3d77dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_3d77e0:
    // 0x3d77e0: 0xae47001c  sw          $a3, 0x1C($s2)
    ctx->pc = 0x3d77e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 7));
label_3d77e4:
    // 0x3d77e4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3d77e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3d77e8:
    // 0x3d77e8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3d77e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3d77ec:
    // 0x3d77ec: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x3d77ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_3d77f0:
    // 0x3d77f0: 0xae48001c  sw          $t0, 0x1C($s2)
    ctx->pc = 0x3d77f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 8));
label_3d77f4:
    // 0x3d77f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d77f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d77f8:
    // 0x3d77f8: 0xfe220038  sd          $v0, 0x38($s1)
    ctx->pc = 0x3d77f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 2));
label_3d77fc:
    // 0x3d77fc: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x3d77fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3d7800:
    // 0x3d7800: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_3d7804:
    if (ctx->pc == 0x3D7804u) {
        ctx->pc = 0x3D7804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7800u;
        // 0x3d7804: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7808u;
        goto label_3d7808;
    }
    ctx->pc = 0x3D7800u;
    {
        const bool branch_taken_0x3d7800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7800) {
            ctx->pc = 0x3D7804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7800u;
            // 0x3d7804: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7898u;
            goto label_3d7898;
        }
    }
    ctx->pc = 0x3D7808u;
label_3d7808:
    // 0x3d7808: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x3d7808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3d780c:
    // 0x3d780c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3d780cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3d7810:
    // 0x3d7810: 0x8c90001c  lw          $s0, 0x1C($a0)
    ctx->pc = 0x3d7810u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_3d7814:
    // 0x3d7814: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x3d7814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3d7818:
    // 0x3d7818: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x3d7818u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3d781c:
    // 0x3d781c: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_3d7820:
    if (ctx->pc == 0x3D7820u) {
        ctx->pc = 0x3D7820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D781Cu;
        // 0x3d7820: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7824u;
        goto label_3d7824;
    }
    ctx->pc = 0x3D781Cu;
    {
        const bool branch_taken_0x3d781c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D781Cu;
        // 0x3d7820: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d781c) {
            ctx->pc = 0x3D7884u;
            goto label_3d7884;
        }
    }
    ctx->pc = 0x3D7824u;
label_3d7824:
    // 0x3d7824: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x3d7824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3d7828:
    // 0x3d7828: 0xc0bb778  jal         func_2EDDE0
label_3d782c:
    if (ctx->pc == 0x3D782Cu) {
        ctx->pc = 0x3D782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7828u;
        // 0x3d782c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7830u;
        goto label_3d7830;
    }
    ctx->pc = 0x3D7828u;
    SET_GPR_U32(ctx, 31, 0x3D7830u);
    ctx->pc = 0x3D782Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7828u;
    // 0x3d782c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3D7828u, 0x3D7830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7830u;
label_3d7830:
    // 0x3d7830: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3d7830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3d7834:
    // 0x3d7834: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x3d7834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
label_3d7838:
    // 0x3d7838: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3d7838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3d783c:
    // 0x3d783c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3d783cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_3d7840:
    // 0x3d7840: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3d7840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3d7844:
    // 0x3d7844: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x3d7844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3d7848:
    // 0x3d7848: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3d7848u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3d784c:
    // 0x3d784c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x3d784cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_3d7850:
    // 0x3d7850: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x3d7850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_3d7854:
    // 0x3d7854: 0xde240018  ld          $a0, 0x18($s1)
    ctx->pc = 0x3d7854u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 24)));
label_3d7858:
    // 0x3d7858: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x3d7858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_3d785c:
    // 0x3d785c: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x3d785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_3d7860:
    // 0x3d7860: 0x85202d  daddu       $a0, $a0, $a1
    ctx->pc = 0x3d7860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 5));
label_3d7864:
    // 0x3d7864: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3d7864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3d7868:
    // 0x3d7868: 0xfe240018  sd          $a0, 0x18($s1)
    ctx->pc = 0x3d7868u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 4));
label_3d786c:
    // 0x3d786c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3d786cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3d7870:
    // 0x3d7870: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x3d7870u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
label_3d7874:
    // 0x3d7874: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3d7878:
    if (ctx->pc == 0x3D7878u) {
        ctx->pc = 0x3D7878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7874u;
        // 0x3d7878: 0xacc2001c  sw          $v0, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D787Cu;
        goto label_3d787c;
    }
    ctx->pc = 0x3D7874u;
    {
        const bool branch_taken_0x3d7874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7874u;
        // 0x3d7878: 0xacc2001c  sw          $v0, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7874) {
            ctx->pc = 0x3D7884u;
            goto label_3d7884;
        }
    }
    ctx->pc = 0x3D787Cu;
label_3d787c:
    // 0x3d787c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3d787cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3d7880:
    // 0x3d7880: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x3d7880u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
label_3d7884:
    // 0x3d7884: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3d7884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3d7888:
    // 0x3d7888: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_3d788c:
    if (ctx->pc == 0x3D788Cu) {
        ctx->pc = 0x3D788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7888u;
        // 0x3d788c: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7890u;
        goto label_3d7890;
    }
    ctx->pc = 0x3D7888u;
    {
        const bool branch_taken_0x3d7888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d7888) {
            ctx->pc = 0x3D788Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7888u;
            // 0x3d788c: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D78BCu;
            goto label_3d78bc;
        }
    }
    ctx->pc = 0x3D7890u;
label_3d7890:
    // 0x3d7890: 0x10000072  b           . + 4 + (0x72 << 2)
label_3d7894:
    if (ctx->pc == 0x3D7894u) {
        ctx->pc = 0x3D7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7890u;
        // 0x3d7894: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7898u;
        goto label_3d7898;
    }
    ctx->pc = 0x3D7890u;
    {
        const bool branch_taken_0x3d7890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7890u;
        // 0x3d7894: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7890) {
            ctx->pc = 0x3D7A5Cu;
            goto label_3d7a5c;
        }
    }
    ctx->pc = 0x3D7898u;
label_3d7898:
    // 0x3d7898: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_3d789c:
    if (ctx->pc == 0x3D789Cu) {
        ctx->pc = 0x3D789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7898u;
        // 0x3d789c: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D78A0u;
        goto label_3d78a0;
    }
    ctx->pc = 0x3D7898u;
    {
        const bool branch_taken_0x3d7898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d7898) {
            ctx->pc = 0x3D789Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7898u;
            // 0x3d789c: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D78BCu;
            goto label_3d78bc;
        }
    }
    ctx->pc = 0x3D78A0u;
label_3d78a0:
    // 0x3d78a0: 0x153102a  slt         $v0, $t2, $s3
    ctx->pc = 0x3d78a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_3d78a4:
    // 0x3d78a4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_3d78a8:
    if (ctx->pc == 0x3D78A8u) {
        ctx->pc = 0x3D78A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D78A4u;
        // 0x3d78a8: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D78ACu;
        goto label_3d78ac;
    }
    ctx->pc = 0x3D78A4u;
    {
        const bool branch_taken_0x3d78a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d78a4) {
            ctx->pc = 0x3D78A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D78A4u;
            // 0x3d78a8: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D78BCu;
            goto label_3d78bc;
        }
    }
    ctx->pc = 0x3D78ACu;
label_3d78ac:
    // 0x3d78ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3d78acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d78b0:
    // 0x3d78b0: 0x16620008  bne         $s3, $v0, . + 4 + (0x8 << 2)
label_3d78b4:
    if (ctx->pc == 0x3D78B4u) {
        ctx->pc = 0x3D78B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D78B0u;
        // 0x3d78b4: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D78B8u;
        goto label_3d78b8;
    }
    ctx->pc = 0x3D78B0u;
    {
        const bool branch_taken_0x3d78b0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D78B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D78B0u;
        // 0x3d78b4: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d78b0) {
            ctx->pc = 0x3D78D4u;
            goto label_3d78d4;
        }
    }
    ctx->pc = 0x3D78B8u;
label_3d78b8:
    // 0x3d78b8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3d78b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3d78bc:
    // 0x3d78bc: 0x2402029a  addiu       $v0, $zero, 0x29A
    ctx->pc = 0x3d78bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
label_3d78c0:
    // 0x3d78c0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_3d78c4:
    if (ctx->pc == 0x3D78C4u) {
        ctx->pc = 0x3D78C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D78C0u;
        // 0x3d78c4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D78C8u;
        goto label_3d78c8;
    }
    ctx->pc = 0x3D78C0u;
    {
        const bool branch_taken_0x3d78c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D78C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D78C0u;
        // 0x3d78c4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d78c0) {
            ctx->pc = 0x3D78E4u;
            goto label_3d78e4;
        }
    }
    ctx->pc = 0x3D78C8u;
label_3d78c8:
    // 0x3d78c8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3d78cc:
    if (ctx->pc == 0x3D78CCu) {
        ctx->pc = 0x3D78CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D78C8u;
        // 0x3d78cc: 0x8e420084  lw          $v0, 0x84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D78D0u;
        goto label_3d78d0;
    }
    ctx->pc = 0x3D78C8u;
    {
        const bool branch_taken_0x3d78c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d78c8) {
            ctx->pc = 0x3D78CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D78C8u;
            // 0x3d78cc: 0x8e420084  lw          $v0, 0x84($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D78F0u;
            goto label_3d78f0;
        }
    }
    ctx->pc = 0x3D78D0u;
label_3d78d0:
    // 0x3d78d0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x3d78d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_3d78d4:
    // 0x3d78d4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3d78d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3d78d8:
    // 0x3d78d8: 0x8c83b3f4  lw          $v1, -0x4C0C($a0)
    ctx->pc = 0x3d78d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947828)));
label_3d78dc:
    // 0x3d78dc: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_3d78e0:
    if (ctx->pc == 0x3D78E0u) {
        ctx->pc = 0x3D78E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D78DCu;
        // 0x3d78e0: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D78E4u;
        goto label_3d78e4;
    }
    ctx->pc = 0x3D78DCu;
    {
        const bool branch_taken_0x3d78dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D78E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D78DCu;
        // 0x3d78e0: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d78dc) {
            ctx->pc = 0x3D7B84u;
            goto label_3d7b84;
        }
    }
    ctx->pc = 0x3D78E4u;
label_3d78e4:
    // 0x3d78e4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3d78e8:
    if (ctx->pc == 0x3D78E8u) {
        ctx->pc = 0x3D78E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D78E4u;
        // 0x3d78e8: 0x8e420094  lw          $v0, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D78ECu;
        goto label_3d78ec;
    }
    ctx->pc = 0x3D78E4u;
    {
        const bool branch_taken_0x3d78e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d78e4) {
            ctx->pc = 0x3D78E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D78E4u;
            // 0x3d78e8: 0x8e420094  lw          $v0, 0x94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D790Cu;
            goto label_3d790c;
        }
    }
    ctx->pc = 0x3D78ECu;
label_3d78ec:
    // 0x3d78ec: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x3d78ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_3d78f0:
    // 0x3d78f0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3d78f4:
    if (ctx->pc == 0x3D78F4u) {
        ctx->pc = 0x3D78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D78F0u;
        // 0x3d78f4: 0x8e420094  lw          $v0, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D78F8u;
        goto label_3d78f8;
    }
    ctx->pc = 0x3D78F0u;
    {
        const bool branch_taken_0x3d78f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d78f0) {
            ctx->pc = 0x3D78F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D78F0u;
            // 0x3d78f4: 0x8e420094  lw          $v0, 0x94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D790Cu;
            goto label_3d790c;
        }
    }
    ctx->pc = 0x3D78F8u;
label_3d78f8:
    // 0x3d78f8: 0x1260005b  beqz        $s3, . + 4 + (0x5B << 2)
label_3d78fc:
    if (ctx->pc == 0x3D78FCu) {
        ctx->pc = 0x3D78FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D78F8u;
        // 0x3d78fc: 0x2402029a  addiu       $v0, $zero, 0x29A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7900u;
        goto label_3d7900;
    }
    ctx->pc = 0x3D78F8u;
    {
        const bool branch_taken_0x3d78f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D78FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D78F8u;
        // 0x3d78fc: 0x2402029a  addiu       $v0, $zero, 0x29A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d78f8) {
            ctx->pc = 0x3D7A68u;
            goto label_3d7a68;
        }
    }
    ctx->pc = 0x3D7900u;
label_3d7900:
    // 0x3d7900: 0x1062005a  beq         $v1, $v0, . + 4 + (0x5A << 2)
label_3d7904:
    if (ctx->pc == 0x3D7904u) {
        ctx->pc = 0x3D7904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7900u;
        // 0x3d7904: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7908u;
        goto label_3d7908;
    }
    ctx->pc = 0x3D7900u;
    {
        const bool branch_taken_0x3d7900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D7904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7900u;
        // 0x3d7904: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7900) {
            ctx->pc = 0x3D7A6Cu;
            goto label_3d7a6c;
        }
    }
    ctx->pc = 0x3D7908u;
label_3d7908:
    // 0x3d7908: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x3d7908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_3d790c:
    // 0x3d790c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3d790cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3d7910:
    // 0x3d7910: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3d7910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3d7914:
    // 0x3d7914: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d7914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d7918:
    // 0x3d7918: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x3d7918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3d791c:
    // 0x3d791c: 0x2463c7d0  addiu       $v1, $v1, -0x3830
    ctx->pc = 0x3d791cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952912));
label_3d7920:
    // 0x3d7920: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d7920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d7924:
    // 0x3d7924: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3d7924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3d7928:
    // 0x3d7928: 0x40f809  jalr        $v0
label_3d792c:
    if (ctx->pc == 0x3D792Cu) {
        ctx->pc = 0x3D792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7928u;
        // 0x3d792c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7930u;
        goto label_3d7930;
    }
    ctx->pc = 0x3D7928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D7930u);
        ctx->pc = 0x3D792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7928u;
        // 0x3d792c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7928u, 0x3D7930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7930u;
label_3d7930:
    // 0x3d7930: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3d7930u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d7934:
    // 0x3d7934: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x3d7934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_3d7938:
    // 0x3d7938: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3d7938u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3d793c:
    // 0x3d793c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3d7940:
    if (ctx->pc == 0x3D7940u) {
        ctx->pc = 0x3D7940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D793Cu;
        // 0x3d7940: 0x2402029a  addiu       $v0, $zero, 0x29A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7944u;
        goto label_3d7944;
    }
    ctx->pc = 0x3D793Cu;
    {
        const bool branch_taken_0x3d793c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D793Cu;
        // 0x3d7940: 0x2402029a  addiu       $v0, $zero, 0x29A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d793c) {
            ctx->pc = 0x3D7948u;
            goto label_3d7948;
        }
    }
    ctx->pc = 0x3D7944u;
label_3d7944:
    // 0x3d7944: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3d7944u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3d7948:
    // 0x3d7948: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3d794c:
    if (ctx->pc == 0x3D794Cu) {
        ctx->pc = 0x3D794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7948u;
        // 0x3d794c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7950u;
        goto label_3d7950;
    }
    ctx->pc = 0x3D7948u;
    {
        const bool branch_taken_0x3d7948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7948u;
        // 0x3d794c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7948) {
            ctx->pc = 0x3D7958u;
            goto label_3d7958;
        }
    }
    ctx->pc = 0x3D7950u;
label_3d7950:
    // 0x3d7950: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_3d7954:
    if (ctx->pc == 0x3D7954u) {
        ctx->pc = 0x3D7954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7950u;
        // 0x3d7954: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7958u;
        goto label_3d7958;
    }
    ctx->pc = 0x3D7950u;
    {
        const bool branch_taken_0x3d7950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D7954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7950u;
        // 0x3d7954: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7950) {
            ctx->pc = 0x3D7970u;
            goto label_3d7970;
        }
    }
    ctx->pc = 0x3D7958u;
label_3d7958:
    // 0x3d7958: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3d7958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3d795c:
    // 0x3d795c: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
label_3d7960:
    if (ctx->pc == 0x3D7960u) {
        ctx->pc = 0x3D7960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D795Cu;
        // 0x3d7960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7964u;
        goto label_3d7964;
    }
    ctx->pc = 0x3D795Cu;
    {
        const bool branch_taken_0x3d795c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D795Cu;
        // 0x3d7960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d795c) {
            ctx->pc = 0x3D7B84u;
            goto label_3d7b84;
        }
    }
    ctx->pc = 0x3D7964u;
label_3d7964:
    // 0x3d7964: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d7964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d7968:
    // 0x3d7968: 0x10000042  b           . + 4 + (0x42 << 2)
label_3d796c:
    if (ctx->pc == 0x3D796Cu) {
        ctx->pc = 0x3D796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7968u;
        // 0x3d796c: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7970u;
        goto label_3d7970;
    }
    ctx->pc = 0x3D7968u;
    {
        const bool branch_taken_0x3d7968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7968u;
        // 0x3d796c: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7968) {
            ctx->pc = 0x3D7A74u;
            goto label_3d7a74;
        }
    }
    ctx->pc = 0x3D7970u;
label_3d7970:
    // 0x3d7970: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
label_3d7974:
    if (ctx->pc == 0x3D7974u) {
        ctx->pc = 0x3D7974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7970u;
        // 0x3d7974: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7978u;
        goto label_3d7978;
    }
    ctx->pc = 0x3D7970u;
    {
        const bool branch_taken_0x3d7970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D7974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7970u;
        // 0x3d7974: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7970) {
            ctx->pc = 0x3D7A6Cu;
            goto label_3d7a6c;
        }
    }
    ctx->pc = 0x3D7978u;
label_3d7978:
    // 0x3d7978: 0x16630005  bne         $s3, $v1, . + 4 + (0x5 << 2)
label_3d797c:
    if (ctx->pc == 0x3D797Cu) {
        ctx->pc = 0x3D797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7978u;
        // 0x3d797c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7980u;
        goto label_3d7980;
    }
    ctx->pc = 0x3D7978u;
    {
        const bool branch_taken_0x3d7978 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7978u;
        // 0x3d797c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7978) {
            ctx->pc = 0x3D7990u;
            goto label_3d7990;
        }
    }
    ctx->pc = 0x3D7980u;
label_3d7980:
    // 0x3d7980: 0xc0f6c26  jal         func_3DB098
label_3d7984:
    if (ctx->pc == 0x3D7984u) {
        ctx->pc = 0x3D7984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7980u;
        // 0x3d7984: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7988u;
        goto label_3d7988;
    }
    ctx->pc = 0x3D7980u;
    SET_GPR_U32(ctx, 31, 0x3D7988u);
    ctx->pc = 0x3D7984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7980u;
    // 0x3d7984: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB098u, 0x3D7980u, 0x3D7988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7988u;
label_3d7988:
    // 0x3d7988: 0x10000012  b           . + 4 + (0x12 << 2)
label_3d798c:
    if (ctx->pc == 0x3D798Cu) {
        ctx->pc = 0x3D798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7988u;
        // 0x3d798c: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7990u;
        goto label_3d7990;
    }
    ctx->pc = 0x3D7988u;
    {
        const bool branch_taken_0x3d7988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7988u;
        // 0x3d798c: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7988) {
            ctx->pc = 0x3D79D4u;
            goto label_3d79d4;
        }
    }
    ctx->pc = 0x3D7990u;
label_3d7990:
    // 0x3d7990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d7990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7994:
    // 0x3d7994: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d7994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7998:
    // 0x3d7998: 0xc0f6fa8  jal         func_3DBEA0
label_3d799c:
    if (ctx->pc == 0x3D799Cu) {
        ctx->pc = 0x3D799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7998u;
        // 0x3d799c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D79A0u;
        goto label_3d79a0;
    }
    ctx->pc = 0x3D7998u;
    SET_GPR_U32(ctx, 31, 0x3D79A0u);
    ctx->pc = 0x3D799Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7998u;
    // 0x3d799c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBEA0u, 0x3D7998u, 0x3D79A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D79A0u;
label_3d79a0:
    // 0x3d79a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3d79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d79a4:
    // 0x3d79a4: 0x5662000b  bnel        $s3, $v0, . + 4 + (0xB << 2)
label_3d79a8:
    if (ctx->pc == 0x3D79A8u) {
        ctx->pc = 0x3D79A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D79A4u;
        // 0x3d79a8: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D79ACu;
        goto label_3d79ac;
    }
    ctx->pc = 0x3D79A4u;
    {
        const bool branch_taken_0x3d79a4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d79a4) {
            ctx->pc = 0x3D79A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D79A4u;
            // 0x3d79a8: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D79D4u;
            goto label_3d79d4;
        }
    }
    ctx->pc = 0x3D79ACu;
label_3d79ac:
    // 0x3d79ac: 0x8e460054  lw          $a2, 0x54($s2)
    ctx->pc = 0x3d79acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3d79b0:
    // 0x3d79b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d79b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d79b4:
    // 0x3d79b4: 0x8e44004c  lw          $a0, 0x4C($s2)
    ctx->pc = 0x3d79b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_3d79b8:
    // 0x3d79b8: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x3d79b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_3d79bc:
    // 0x3d79bc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3d79bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3d79c0:
    // 0x3d79c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d79c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3d79c4:
    // 0x3d79c4: 0xa440fffe  sh          $zero, -0x2($v0)
    ctx->pc = 0x3d79c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967294), (uint16_t)GPR_U32(ctx, 0));
label_3d79c8:
    // 0x3d79c8: 0xc0bb7e6  jal         func_2EDF98
label_3d79cc:
    if (ctx->pc == 0x3D79CCu) {
        ctx->pc = 0x3D79CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D79C8u;
        // 0x3d79cc: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D79D0u;
        goto label_3d79d0;
    }
    ctx->pc = 0x3D79C8u;
    SET_GPR_U32(ctx, 31, 0x3D79D0u);
    ctx->pc = 0x3D79CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D79C8u;
    // 0x3d79cc: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3D79C8u, 0x3D79D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D79D0u;
label_3d79d0:
    // 0x3d79d0: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x3d79d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3d79d4:
    // 0x3d79d4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3d79d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3d79d8:
    // 0x3d79d8: 0x8c90001c  lw          $s0, 0x1C($a0)
    ctx->pc = 0x3d79d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_3d79dc:
    // 0x3d79dc: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x3d79dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3d79e0:
    // 0x3d79e0: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x3d79e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3d79e4:
    // 0x3d79e4: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_3d79e8:
    if (ctx->pc == 0x3D79E8u) {
        ctx->pc = 0x3D79E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D79E4u;
        // 0x3d79e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D79ECu;
        goto label_3d79ec;
    }
    ctx->pc = 0x3D79E4u;
    {
        const bool branch_taken_0x3d79e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D79E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D79E4u;
        // 0x3d79e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d79e4) {
            ctx->pc = 0x3D7A4Cu;
            goto label_3d7a4c;
        }
    }
    ctx->pc = 0x3D79ECu;
label_3d79ec:
    // 0x3d79ec: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x3d79ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3d79f0:
    // 0x3d79f0: 0xc0bb778  jal         func_2EDDE0
label_3d79f4:
    if (ctx->pc == 0x3D79F4u) {
        ctx->pc = 0x3D79F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D79F0u;
        // 0x3d79f4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D79F8u;
        goto label_3d79f8;
    }
    ctx->pc = 0x3D79F0u;
    SET_GPR_U32(ctx, 31, 0x3D79F8u);
    ctx->pc = 0x3D79F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D79F0u;
    // 0x3d79f4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3D79F0u, 0x3D79F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D79F8u;
label_3d79f8:
    // 0x3d79f8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3d79f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3d79fc:
    // 0x3d79fc: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x3d79fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
label_3d7a00:
    // 0x3d7a00: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3d7a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3d7a04:
    // 0x3d7a04: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3d7a04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_3d7a08:
    // 0x3d7a08: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3d7a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3d7a0c:
    // 0x3d7a0c: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x3d7a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3d7a10:
    // 0x3d7a10: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3d7a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3d7a14:
    // 0x3d7a14: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x3d7a14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_3d7a18:
    // 0x3d7a18: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x3d7a18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_3d7a1c:
    // 0x3d7a1c: 0xde240018  ld          $a0, 0x18($s1)
    ctx->pc = 0x3d7a1cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 24)));
label_3d7a20:
    // 0x3d7a20: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x3d7a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_3d7a24:
    // 0x3d7a24: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x3d7a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_3d7a28:
    // 0x3d7a28: 0x85202d  daddu       $a0, $a0, $a1
    ctx->pc = 0x3d7a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 5));
label_3d7a2c:
    // 0x3d7a2c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3d7a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3d7a30:
    // 0x3d7a30: 0xfe240018  sd          $a0, 0x18($s1)
    ctx->pc = 0x3d7a30u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 4));
label_3d7a34:
    // 0x3d7a34: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3d7a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3d7a38:
    // 0x3d7a38: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x3d7a38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
label_3d7a3c:
    // 0x3d7a3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3d7a40:
    if (ctx->pc == 0x3D7A40u) {
        ctx->pc = 0x3D7A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A3Cu;
        // 0x3d7a40: 0xacc2001c  sw          $v0, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7A44u;
        goto label_3d7a44;
    }
    ctx->pc = 0x3D7A3Cu;
    {
        const bool branch_taken_0x3d7a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A3Cu;
        // 0x3d7a40: 0xacc2001c  sw          $v0, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7a3c) {
            ctx->pc = 0x3D7A4Cu;
            goto label_3d7a4c;
        }
    }
    ctx->pc = 0x3D7A44u;
label_3d7a44:
    // 0x3d7a44: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3d7a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3d7a48:
    // 0x3d7a48: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x3d7a48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
label_3d7a4c:
    // 0x3d7a4c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3d7a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3d7a50:
    // 0x3d7a50: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3d7a54:
    if (ctx->pc == 0x3D7A54u) {
        ctx->pc = 0x3D7A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A50u;
        // 0x3d7a54: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7A58u;
        goto label_3d7a58;
    }
    ctx->pc = 0x3D7A50u;
    {
        const bool branch_taken_0x3d7a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A50u;
        // 0x3d7a54: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7a50) {
            ctx->pc = 0x3D7A6Cu;
            goto label_3d7a6c;
        }
    }
    ctx->pc = 0x3D7A58u;
label_3d7a58:
    // 0x3d7a58: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d7a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d7a5c:
    // 0x3d7a5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d7a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7a60:
    // 0x3d7a60: 0x10000048  b           . + 4 + (0x48 << 2)
label_3d7a64:
    if (ctx->pc == 0x3D7A64u) {
        ctx->pc = 0x3D7A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A60u;
        // 0x3d7a64: 0xae430028  sw          $v1, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7A68u;
        goto label_3d7a68;
    }
    ctx->pc = 0x3D7A60u;
    {
        const bool branch_taken_0x3d7a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A60u;
        // 0x3d7a64: 0xae430028  sw          $v1, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7a60) {
            ctx->pc = 0x3D7B84u;
            goto label_3d7b84;
        }
    }
    ctx->pc = 0x3D7A68u;
label_3d7a68:
    // 0x3d7a68: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3d7a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d7a6c:
    // 0x3d7a6c: 0x52620003  beql        $s3, $v0, . + 4 + (0x3 << 2)
label_3d7a70:
    if (ctx->pc == 0x3D7A70u) {
        ctx->pc = 0x3D7A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A6Cu;
        // 0x3d7a70: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7A74u;
        goto label_3d7a74;
    }
    ctx->pc = 0x3D7A6Cu;
    {
        const bool branch_taken_0x3d7a6c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d7a6c) {
            ctx->pc = 0x3D7A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7A6Cu;
            // 0x3d7a70: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7A7Cu;
            goto label_3d7a7c;
        }
    }
    ctx->pc = 0x3D7A74u;
label_3d7a74:
    // 0x3d7a74: 0x10000043  b           . + 4 + (0x43 << 2)
label_3d7a78:
    if (ctx->pc == 0x3D7A78u) {
        ctx->pc = 0x3D7A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A74u;
        // 0x3d7a78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7A7Cu;
        goto label_3d7a7c;
    }
    ctx->pc = 0x3D7A74u;
    {
        const bool branch_taken_0x3d7a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A74u;
        // 0x3d7a78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7a74) {
            ctx->pc = 0x3D7B84u;
            goto label_3d7b84;
        }
    }
    ctx->pc = 0x3D7A7Cu;
label_3d7a7c:
    // 0x3d7a7c: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
label_3d7a80:
    if (ctx->pc == 0x3D7A80u) {
        ctx->pc = 0x3D7A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A7Cu;
        // 0x3d7a80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7A84u;
        goto label_3d7a84;
    }
    ctx->pc = 0x3D7A7Cu;
    {
        const bool branch_taken_0x3d7a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A7Cu;
        // 0x3d7a80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7a7c) {
            ctx->pc = 0x3D7B84u;
            goto label_3d7b84;
        }
    }
    ctx->pc = 0x3D7A84u;
label_3d7a84:
    // 0x3d7a84: 0xde250038  ld          $a1, 0x38($s1)
    ctx->pc = 0x3d7a84u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 56)));
label_3d7a88:
    // 0x3d7a88: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x3d7a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3d7a8c:
    // 0x3d7a8c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3d7a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3d7a90:
    // 0x3d7a90: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3d7a90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_3d7a94:
    // 0x3d7a94: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3d7a94u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_3d7a98:
    // 0x3d7a98: 0x52202  srl         $a0, $a1, 8
    ctx->pc = 0x3d7a98u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
label_3d7a9c:
    // 0x3d7a9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d7a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d7aa0:
    // 0x3d7aa0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3d7aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_3d7aa4:
    // 0x3d7aa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d7aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d7aa8:
    // 0x3d7aa8: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x3d7aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_3d7aac:
    // 0x3d7aac: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x3d7aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d7ab0:
    // 0x3d7ab0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3d7ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3d7ab4:
    // 0x3d7ab4: 0x24470002  addiu       $a3, $v0, 0x2
    ctx->pc = 0x3d7ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_3d7ab8:
    // 0x3d7ab8: 0x24480003  addiu       $t0, $v0, 0x3
    ctx->pc = 0x3d7ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_3d7abc:
    // 0x3d7abc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d7abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d7ac0:
    // 0x3d7ac0: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x3d7ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_3d7ac4:
    // 0x3d7ac4: 0xae46001c  sw          $a2, 0x1C($s2)
    ctx->pc = 0x3d7ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 6));
label_3d7ac8:
    // 0x3d7ac8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3d7ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3d7acc:
    // 0x3d7acc: 0x96240038  lhu         $a0, 0x38($s1)
    ctx->pc = 0x3d7accu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
label_3d7ad0:
    // 0x3d7ad0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3d7ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3d7ad4:
    // 0x3d7ad4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3d7ad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_3d7ad8:
    // 0x3d7ad8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3d7ad8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_3d7adc:
    // 0x3d7adc: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x3d7adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_3d7ae0:
    // 0x3d7ae0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3d7ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_3d7ae4:
    // 0x3d7ae4: 0xae47001c  sw          $a3, 0x1C($s2)
    ctx->pc = 0x3d7ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 7));
label_3d7ae8:
    // 0x3d7ae8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3d7ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3d7aec:
    // 0x3d7aec: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3d7aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3d7af0:
    // 0x3d7af0: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x3d7af0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_3d7af4:
    // 0x3d7af4: 0xae48001c  sw          $t0, 0x1C($s2)
    ctx->pc = 0x3d7af4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 8));
label_3d7af8:
    // 0x3d7af8: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x3d7af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3d7afc:
    // 0x3d7afc: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3d7afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3d7b00:
    // 0x3d7b00: 0x8c90001c  lw          $s0, 0x1C($a0)
    ctx->pc = 0x3d7b00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_3d7b04:
    // 0x3d7b04: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x3d7b04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3d7b08:
    // 0x3d7b08: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x3d7b08u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3d7b0c:
    // 0x3d7b0c: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_3d7b10:
    if (ctx->pc == 0x3D7B10u) {
        ctx->pc = 0x3D7B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B0Cu;
        // 0x3d7b10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7B14u;
        goto label_3d7b14;
    }
    ctx->pc = 0x3D7B0Cu;
    {
        const bool branch_taken_0x3d7b0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B0Cu;
        // 0x3d7b10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7b0c) {
            ctx->pc = 0x3D7B74u;
            goto label_3d7b74;
        }
    }
    ctx->pc = 0x3D7B14u;
label_3d7b14:
    // 0x3d7b14: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x3d7b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3d7b18:
    // 0x3d7b18: 0xc0bb778  jal         func_2EDDE0
label_3d7b1c:
    if (ctx->pc == 0x3D7B1Cu) {
        ctx->pc = 0x3D7B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B18u;
        // 0x3d7b1c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7B20u;
        goto label_3d7b20;
    }
    ctx->pc = 0x3D7B18u;
    SET_GPR_U32(ctx, 31, 0x3D7B20u);
    ctx->pc = 0x3D7B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7B18u;
    // 0x3d7b1c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3D7B18u, 0x3D7B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7B20u;
label_3d7b20:
    // 0x3d7b20: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3d7b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3d7b24:
    // 0x3d7b24: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x3d7b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
label_3d7b28:
    // 0x3d7b28: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3d7b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3d7b2c:
    // 0x3d7b2c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3d7b2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_3d7b30:
    // 0x3d7b30: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3d7b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3d7b34:
    // 0x3d7b34: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x3d7b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3d7b38:
    // 0x3d7b38: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3d7b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3d7b3c:
    // 0x3d7b3c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x3d7b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_3d7b40:
    // 0x3d7b40: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x3d7b40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_3d7b44:
    // 0x3d7b44: 0xde240018  ld          $a0, 0x18($s1)
    ctx->pc = 0x3d7b44u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 24)));
label_3d7b48:
    // 0x3d7b48: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x3d7b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_3d7b4c:
    // 0x3d7b4c: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x3d7b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_3d7b50:
    // 0x3d7b50: 0x85202d  daddu       $a0, $a0, $a1
    ctx->pc = 0x3d7b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 5));
label_3d7b54:
    // 0x3d7b54: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3d7b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3d7b58:
    // 0x3d7b58: 0xfe240018  sd          $a0, 0x18($s1)
    ctx->pc = 0x3d7b58u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 4));
label_3d7b5c:
    // 0x3d7b5c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3d7b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3d7b60:
    // 0x3d7b60: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x3d7b60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
label_3d7b64:
    // 0x3d7b64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3d7b68:
    if (ctx->pc == 0x3D7B68u) {
        ctx->pc = 0x3D7B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B64u;
        // 0x3d7b68: 0xacc2001c  sw          $v0, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7B6Cu;
        goto label_3d7b6c;
    }
    ctx->pc = 0x3D7B64u;
    {
        const bool branch_taken_0x3d7b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B64u;
        // 0x3d7b68: 0xacc2001c  sw          $v0, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7b64) {
            ctx->pc = 0x3D7B74u;
            goto label_3d7b74;
        }
    }
    ctx->pc = 0x3D7B6Cu;
label_3d7b6c:
    // 0x3d7b6c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3d7b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3d7b70:
    // 0x3d7b70: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x3d7b70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
label_3d7b74:
    // 0x3d7b74: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x3d7b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3d7b78:
    // 0x3d7b78: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d7b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d7b7c:
    // 0x3d7b7c: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x3d7b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
label_3d7b80:
    // 0x3d7b80: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3d7b80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3d7b84:
    // 0x3d7b84: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3d7b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d7b88:
    // 0x3d7b88: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3d7b88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d7b8c:
    // 0x3d7b8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d7b8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7b90:
    // 0x3d7b90: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3d7b90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d7b94:
    // 0x3d7b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d7b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d7b98:
    // 0x3d7b98: 0x3e00008  jr          $ra
label_3d7b9c:
    if (ctx->pc == 0x3D7B9Cu) {
        ctx->pc = 0x3D7B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B98u;
        // 0x3d7b9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7BA0u;
        goto label_3d7ba0;
    }
    ctx->pc = 0x3D7B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B98u;
        // 0x3d7b9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7BA0u;
label_3d7ba0:
    // 0x3d7ba0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d7ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3d7ba4:
    // 0x3d7ba4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3d7ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3d7ba8:
    // 0x3d7ba8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3d7ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3d7bac:
    // 0x3d7bac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d7bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d7bb0:
    // 0x3d7bb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d7bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d7bb4:
    // 0x3d7bb4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3d7bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3d7bb8:
    // 0x3d7bb8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_3d7bbc:
    if (ctx->pc == 0x3D7BBCu) {
        ctx->pc = 0x3D7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7BB8u;
        // 0x3d7bbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7BC0u;
        goto label_3d7bc0;
    }
    ctx->pc = 0x3D7BB8u;
    {
        const bool branch_taken_0x3d7bb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7BB8u;
        // 0x3d7bbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7bb8) {
            ctx->pc = 0x3D7BD4u;
            goto label_3d7bd4;
        }
    }
    ctx->pc = 0x3D7BC0u;
label_3d7bc0:
    // 0x3d7bc0: 0x122000ab  beqz        $s1, . + 4 + (0xAB << 2)
label_3d7bc4:
    if (ctx->pc == 0x3D7BC4u) {
        ctx->pc = 0x3D7BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7BC0u;
        // 0x3d7bc4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7BC8u;
        goto label_3d7bc8;
    }
    ctx->pc = 0x3D7BC0u;
    {
        const bool branch_taken_0x3d7bc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7BC0u;
        // 0x3d7bc4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7bc0) {
            ctx->pc = 0x3D7E70u;
            goto label_3d7e70;
        }
    }
    ctx->pc = 0x3D7BC8u;
label_3d7bc8:
    // 0x3d7bc8: 0x8cb20024  lw          $s2, 0x24($a1)
    ctx->pc = 0x3d7bc8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_3d7bcc:
    // 0x3d7bcc: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_3d7bd0:
    if (ctx->pc == 0x3D7BD0u) {
        ctx->pc = 0x3D7BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7BCCu;
        // 0x3d7bd0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7BD4u;
        goto label_3d7bd4;
    }
    ctx->pc = 0x3D7BCCu;
    {
        const bool branch_taken_0x3d7bcc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7BCCu;
        // 0x3d7bd0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7bcc) {
            ctx->pc = 0x3D7BDCu;
            goto label_3d7bdc;
        }
    }
    ctx->pc = 0x3D7BD4u;
label_3d7bd4:
    // 0x3d7bd4: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_3d7bd8:
    if (ctx->pc == 0x3D7BD8u) {
        ctx->pc = 0x3D7BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7BD4u;
        // 0x3d7bd8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7BDCu;
        goto label_3d7bdc;
    }
    ctx->pc = 0x3D7BD4u;
    {
        const bool branch_taken_0x3d7bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7BD4u;
        // 0x3d7bd8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7bd4) {
            ctx->pc = 0x3D7E70u;
            goto label_3d7e70;
        }
    }
    ctx->pc = 0x3D7BDCu;
label_3d7bdc:
    // 0x3d7bdc: 0x24a30040  addiu       $v1, $a1, 0x40
    ctx->pc = 0x3d7bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_3d7be0:
    // 0x3d7be0: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x3d7be0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_3d7be4:
    // 0x3d7be4: 0xdca60008  ld          $a2, 0x8($a1)
    ctx->pc = 0x3d7be4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_3d7be8:
    // 0x3d7be8: 0xdca70010  ld          $a3, 0x10($a1)
    ctx->pc = 0x3d7be8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_3d7bec:
    // 0x3d7bec: 0xdca80018  ld          $t0, 0x18($a1)
    ctx->pc = 0x3d7becu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_3d7bf0:
    // 0x3d7bf0: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x3d7bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
label_3d7bf4:
    // 0x3d7bf4: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x3d7bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
label_3d7bf8:
    // 0x3d7bf8: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x3d7bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
label_3d7bfc:
    // 0x3d7bfc: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x3d7bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
label_3d7c00:
    // 0x3d7c00: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x3d7c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_3d7c04:
    // 0x3d7c04: 0x14a3fff6  bne         $a1, $v1, . + 4 + (-0xA << 2)
label_3d7c08:
    if (ctx->pc == 0x3D7C08u) {
        ctx->pc = 0x3D7C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C04u;
        // 0x3d7c08: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7C0Cu;
        goto label_3d7c0c;
    }
    ctx->pc = 0x3D7C04u;
    {
        const bool branch_taken_0x3d7c04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D7C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C04u;
        // 0x3d7c08: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7c04) {
            ctx->pc = 0x3D7BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d7be0;
        }
    }
    ctx->pc = 0x3D7C0Cu;
label_3d7c0c:
    // 0x3d7c0c: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x3d7c0cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_3d7c10:
    // 0x3d7c10: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x3d7c10u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_3d7c14:
    // 0x3d7c14: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3d7c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3d7c18:
    // 0x3d7c18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d7c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d7c1c:
    // 0x3d7c1c: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3d7c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3d7c20:
    // 0x3d7c20: 0x40f809  jalr        $v0
label_3d7c24:
    if (ctx->pc == 0x3D7C24u) {
        ctx->pc = 0x3D7C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C20u;
        // 0x3d7c24: 0x240616d8  addiu       $a2, $zero, 0x16D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7C28u;
        goto label_3d7c28;
    }
    ctx->pc = 0x3D7C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D7C28u);
        ctx->pc = 0x3D7C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C20u;
        // 0x3d7c24: 0x240616d8  addiu       $a2, $zero, 0x16D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5848));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7C20u, 0x3D7C28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7C28u;
label_3d7c28:
    // 0x3d7c28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d7c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d7c2c:
    // 0x3d7c2c: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_3d7c30:
    if (ctx->pc == 0x3D7C30u) {
        ctx->pc = 0x3D7C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C2Cu;
        // 0x3d7c30: 0xae300024  sw          $s0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7C34u;
        goto label_3d7c34;
    }
    ctx->pc = 0x3D7C2Cu;
    {
        const bool branch_taken_0x3d7c2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d7c2c) {
            ctx->pc = 0x3D7C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7C2Cu;
            // 0x3d7c30: 0xae300024  sw          $s0, 0x24($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7C3Cu;
            goto label_3d7c3c;
        }
    }
    ctx->pc = 0x3D7C34u;
label_3d7c34:
    // 0x3d7c34: 0x1000008e  b           . + 4 + (0x8E << 2)
label_3d7c38:
    if (ctx->pc == 0x3D7C38u) {
        ctx->pc = 0x3D7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C34u;
        // 0x3d7c38: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7C3Cu;
        goto label_3d7c3c;
    }
    ctx->pc = 0x3D7C34u;
    {
        const bool branch_taken_0x3d7c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C34u;
        // 0x3d7c38: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7c34) {
            ctx->pc = 0x3D7E70u;
            goto label_3d7e70;
        }
    }
    ctx->pc = 0x3D7C3Cu;
label_3d7c3c:
    // 0x3d7c3c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3d7c3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d7c40:
    // 0x3d7c40: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3d7c40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d7c44:
    // 0x3d7c44: 0x264416c0  addiu       $a0, $s2, 0x16C0
    ctx->pc = 0x3d7c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5824));
label_3d7c48:
    // 0x3d7c48: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x3d7c48u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_3d7c4c:
    // 0x3d7c4c: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x3d7c4cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_3d7c50:
    // 0x3d7c50: 0xdc460010  ld          $a2, 0x10($v0)
    ctx->pc = 0x3d7c50u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_3d7c54:
    // 0x3d7c54: 0xdc470018  ld          $a3, 0x18($v0)
    ctx->pc = 0x3d7c54u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 24)));
label_3d7c58:
    // 0x3d7c58: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x3d7c58u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
label_3d7c5c:
    // 0x3d7c5c: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x3d7c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
label_3d7c60:
    // 0x3d7c60: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x3d7c60u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
label_3d7c64:
    // 0x3d7c64: 0xfc670018  sd          $a3, 0x18($v1)
    ctx->pc = 0x3d7c64u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
label_3d7c68:
    // 0x3d7c68: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3d7c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_3d7c6c:
    // 0x3d7c6c: 0x1444fff6  bne         $v0, $a0, . + 4 + (-0xA << 2)
label_3d7c70:
    if (ctx->pc == 0x3D7C70u) {
        ctx->pc = 0x3D7C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C6Cu;
        // 0x3d7c70: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7C74u;
        goto label_3d7c74;
    }
    ctx->pc = 0x3D7C6Cu;
    {
        const bool branch_taken_0x3d7c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3D7C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C6Cu;
        // 0x3d7c70: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7c6c) {
            ctx->pc = 0x3D7C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d7c48;
        }
    }
    ctx->pc = 0x3D7C74u;
label_3d7c74:
    // 0x3d7c74: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x3d7c74u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_3d7c78:
    // 0x3d7c78: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x3d7c78u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_3d7c7c:
    // 0x3d7c7c: 0xdc450010  ld          $a1, 0x10($v0)
    ctx->pc = 0x3d7c7cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_3d7c80:
    // 0x3d7c80: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x3d7c80u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
label_3d7c84:
    // 0x3d7c84: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x3d7c84u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
label_3d7c88:
    // 0x3d7c88: 0xfc650010  sd          $a1, 0x10($v1)
    ctx->pc = 0x3d7c88u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 5));
label_3d7c8c:
    // 0x3d7c8c: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3d7c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3d7c90:
    // 0x3d7c90: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x3d7c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3d7c94:
    // 0x3d7c94: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x3d7c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_3d7c98:
    // 0x3d7c98: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3d7c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3d7c9c:
    // 0x3d7c9c: 0x40f809  jalr        $v0
label_3d7ca0:
    if (ctx->pc == 0x3D7CA0u) {
        ctx->pc = 0x3D7CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C9Cu;
        // 0x3d7ca0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7CA4u;
        goto label_3d7ca4;
    }
    ctx->pc = 0x3D7C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D7CA4u);
        ctx->pc = 0x3D7CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C9Cu;
        // 0x3d7ca0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7C9Cu, 0x3D7CA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7CA4u;
label_3d7ca4:
    // 0x3d7ca4: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3d7ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3d7ca8:
    // 0x3d7ca8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3d7ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d7cac:
    // 0x3d7cac: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x3d7cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3d7cb0:
    // 0x3d7cb0: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x3d7cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3d7cb4:
    // 0x3d7cb4: 0x60f809  jalr        $v1
label_3d7cb8:
    if (ctx->pc == 0x3D7CB8u) {
        ctx->pc = 0x3D7CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7CB4u;
        // 0x3d7cb8: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7CBCu;
        goto label_3d7cbc;
    }
    ctx->pc = 0x3D7CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D7CBCu);
        ctx->pc = 0x3D7CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7CB4u;
        // 0x3d7cb8: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7CB4u, 0x3D7CBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7CBCu;
label_3d7cbc:
    // 0x3d7cbc: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3d7cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3d7cc0:
    // 0x3d7cc0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3d7cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d7cc4:
    // 0x3d7cc4: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x3d7cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3d7cc8:
    // 0x3d7cc8: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x3d7cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3d7ccc:
    // 0x3d7ccc: 0x60f809  jalr        $v1
label_3d7cd0:
    if (ctx->pc == 0x3D7CD0u) {
        ctx->pc = 0x3D7CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7CCCu;
        // 0x3d7cd0: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7CD4u;
        goto label_3d7cd4;
    }
    ctx->pc = 0x3D7CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D7CD4u);
        ctx->pc = 0x3D7CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7CCCu;
        // 0x3d7cd0: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7CCCu, 0x3D7CD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7CD4u;
label_3d7cd4:
    // 0x3d7cd4: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3d7cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3d7cd8:
    // 0x3d7cd8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3d7cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d7cdc:
    // 0x3d7cdc: 0x8e270028  lw          $a3, 0x28($s1)
    ctx->pc = 0x3d7cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3d7ce0:
    // 0x3d7ce0: 0x8e0516ac  lw          $a1, 0x16AC($s0)
    ctx->pc = 0x3d7ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5804)));
label_3d7ce4:
    // 0x3d7ce4: 0xe0f809  jalr        $a3
label_3d7ce8:
    if (ctx->pc == 0x3D7CE8u) {
        ctx->pc = 0x3D7CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7CE4u;
        // 0x3d7ce8: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7CECu;
        goto label_3d7cec;
    }
    ctx->pc = 0x3D7CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x3D7CECu);
        ctx->pc = 0x3D7CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7CE4u;
        // 0x3d7ce8: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7CE4u, 0x3D7CECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7CECu;
label_3d7cec:
    // 0x3d7cec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d7cecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d7cf0:
    // 0x3d7cf0: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x3d7cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_3d7cf4:
    // 0x3d7cf4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_3d7cf8:
    if (ctx->pc == 0x3D7CF8u) {
        ctx->pc = 0x3D7CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7CF4u;
        // 0x3d7cf8: 0xae130008  sw          $s3, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7CFCu;
        goto label_3d7cfc;
    }
    ctx->pc = 0x3D7CF4u;
    {
        const bool branch_taken_0x3d7cf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7CF4u;
        // 0x3d7cf8: 0xae130008  sw          $s3, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7cf4) {
            ctx->pc = 0x3D7D1Cu;
            goto label_3d7d1c;
        }
    }
    ctx->pc = 0x3D7CFCu;
label_3d7cfc:
    // 0x3d7cfc: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x3d7cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_3d7d00:
    // 0x3d7d00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3d7d04:
    if (ctx->pc == 0x3D7D04u) {
        ctx->pc = 0x3D7D08u;
        goto label_3d7d08;
    }
    ctx->pc = 0x3D7D00u;
    {
        const bool branch_taken_0x3d7d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7d00) {
            ctx->pc = 0x3D7D1Cu;
            goto label_3d7d1c;
        }
    }
    ctx->pc = 0x3D7D08u;
label_3d7d08:
    // 0x3d7d08: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3d7d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_3d7d0c:
    // 0x3d7d0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3d7d10:
    if (ctx->pc == 0x3D7D10u) {
        ctx->pc = 0x3D7D14u;
        goto label_3d7d14;
    }
    ctx->pc = 0x3D7D0Cu;
    {
        const bool branch_taken_0x3d7d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7d0c) {
            ctx->pc = 0x3D7D1Cu;
            goto label_3d7d1c;
        }
    }
    ctx->pc = 0x3D7D14u;
label_3d7d14:
    // 0x3d7d14: 0x5660002f  bnel        $s3, $zero, . + 4 + (0x2F << 2)
label_3d7d18:
    if (ctx->pc == 0x3D7D18u) {
        ctx->pc = 0x3D7D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D14u;
        // 0x3d7d18: 0x8e06002c  lw          $a2, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D1Cu;
        goto label_3d7d1c;
    }
    ctx->pc = 0x3D7D14u;
    {
        const bool branch_taken_0x3d7d14 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d7d14) {
            ctx->pc = 0x3D7D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7D14u;
            // 0x3d7d18: 0x8e06002c  lw          $a2, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7DD4u;
            goto label_3d7dd4;
        }
    }
    ctx->pc = 0x3D7D1Cu;
label_3d7d1c:
    // 0x3d7d1c: 0x12200054  beqz        $s1, . + 4 + (0x54 << 2)
label_3d7d20:
    if (ctx->pc == 0x3D7D20u) {
        ctx->pc = 0x3D7D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D1Cu;
        // 0x3d7d20: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D24u;
        goto label_3d7d24;
    }
    ctx->pc = 0x3D7D1Cu;
    {
        const bool branch_taken_0x3d7d1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D1Cu;
        // 0x3d7d20: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7d1c) {
            ctx->pc = 0x3D7E70u;
            goto label_3d7e70;
        }
    }
    ctx->pc = 0x3D7D24u;
label_3d7d24:
    // 0x3d7d24: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3d7d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3d7d28:
    // 0x3d7d28: 0x50400051  beql        $v0, $zero, . + 4 + (0x51 << 2)
label_3d7d2c:
    if (ctx->pc == 0x3D7D2Cu) {
        ctx->pc = 0x3D7D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D28u;
        // 0x3d7d2c: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D30u;
        goto label_3d7d30;
    }
    ctx->pc = 0x3D7D28u;
    {
        const bool branch_taken_0x3d7d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7d28) {
            ctx->pc = 0x3D7D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7D28u;
            // 0x3d7d2c: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7E70u;
            goto label_3d7e70;
        }
    }
    ctx->pc = 0x3D7D30u;
label_3d7d30:
    // 0x3d7d30: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3d7d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d7d34:
    // 0x3d7d34: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x3d7d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_3d7d38:
    // 0x3d7d38: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_3d7d3c:
    if (ctx->pc == 0x3D7D3Cu) {
        ctx->pc = 0x3D7D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D38u;
        // 0x3d7d3c: 0x24020071  addiu       $v0, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D40u;
        goto label_3d7d40;
    }
    ctx->pc = 0x3D7D38u;
    {
        const bool branch_taken_0x3d7d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D7D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D38u;
        // 0x3d7d3c: 0x24020071  addiu       $v0, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7d38) {
            ctx->pc = 0x3D7D50u;
            goto label_3d7d50;
        }
    }
    ctx->pc = 0x3D7D40u;
label_3d7d40:
    // 0x3d7d40: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_3d7d44:
    if (ctx->pc == 0x3D7D44u) {
        ctx->pc = 0x3D7D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D40u;
        // 0x3d7d44: 0x2402029a  addiu       $v0, $zero, 0x29A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D48u;
        goto label_3d7d48;
    }
    ctx->pc = 0x3D7D40u;
    {
        const bool branch_taken_0x3d7d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D7D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D40u;
        // 0x3d7d44: 0x2402029a  addiu       $v0, $zero, 0x29A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7d40) {
            ctx->pc = 0x3D7D50u;
            goto label_3d7d50;
        }
    }
    ctx->pc = 0x3D7D48u;
label_3d7d48:
    // 0x3d7d48: 0x14620049  bne         $v1, $v0, . + 4 + (0x49 << 2)
label_3d7d4c:
    if (ctx->pc == 0x3D7D4Cu) {
        ctx->pc = 0x3D7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D48u;
        // 0x3d7d4c: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D50u;
        goto label_3d7d50;
    }
    ctx->pc = 0x3D7D48u;
    {
        const bool branch_taken_0x3d7d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D48u;
        // 0x3d7d4c: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7d48) {
            ctx->pc = 0x3D7E70u;
            goto label_3d7e70;
        }
    }
    ctx->pc = 0x3D7D50u;
label_3d7d50:
    // 0x3d7d50: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3d7d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3d7d54:
    // 0x3d7d54: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3d7d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3d7d58:
    // 0x3d7d58: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_3d7d5c:
    if (ctx->pc == 0x3D7D5Cu) {
        ctx->pc = 0x3D7D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D58u;
        // 0x3d7d5c: 0x8c45004c  lw          $a1, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D60u;
        goto label_3d7d60;
    }
    ctx->pc = 0x3D7D58u;
    {
        const bool branch_taken_0x3d7d58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7d58) {
            ctx->pc = 0x3D7D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7D58u;
            // 0x3d7d5c: 0x8c45004c  lw          $a1, 0x4C($v0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7D74u;
            goto label_3d7d74;
        }
    }
    ctx->pc = 0x3D7D60u;
label_3d7d60:
    // 0x3d7d60: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3d7d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3d7d64:
    // 0x3d7d64: 0x40f809  jalr        $v0
label_3d7d68:
    if (ctx->pc == 0x3D7D68u) {
        ctx->pc = 0x3D7D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D64u;
        // 0x3d7d68: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D6Cu;
        goto label_3d7d6c;
    }
    ctx->pc = 0x3D7D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D7D6Cu);
        ctx->pc = 0x3D7D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D64u;
        // 0x3d7d68: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7D64u, 0x3D7D6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7D6Cu;
label_3d7d6c:
    // 0x3d7d6c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3d7d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3d7d70:
    // 0x3d7d70: 0x8c45004c  lw          $a1, 0x4C($v0)
    ctx->pc = 0x3d7d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3d7d74:
    // 0x3d7d74: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_3d7d78:
    if (ctx->pc == 0x3D7D78u) {
        ctx->pc = 0x3D7D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D74u;
        // 0x3d7d78: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D7Cu;
        goto label_3d7d7c;
    }
    ctx->pc = 0x3D7D74u;
    {
        const bool branch_taken_0x3d7d74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7d74) {
            ctx->pc = 0x3D7D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7D74u;
            // 0x3d7d78: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7D8Cu;
            goto label_3d7d8c;
        }
    }
    ctx->pc = 0x3D7D7Cu;
label_3d7d7c:
    // 0x3d7d7c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3d7d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3d7d80:
    // 0x3d7d80: 0x40f809  jalr        $v0
label_3d7d84:
    if (ctx->pc == 0x3D7D84u) {
        ctx->pc = 0x3D7D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D80u;
        // 0x3d7d84: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D88u;
        goto label_3d7d88;
    }
    ctx->pc = 0x3D7D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D7D88u);
        ctx->pc = 0x3D7D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D80u;
        // 0x3d7d84: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7D80u, 0x3D7D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7D88u;
label_3d7d88:
    // 0x3d7d88: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3d7d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3d7d8c:
    // 0x3d7d8c: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x3d7d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_3d7d90:
    // 0x3d7d90: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_3d7d94:
    if (ctx->pc == 0x3D7D94u) {
        ctx->pc = 0x3D7D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D90u;
        // 0x3d7d94: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D98u;
        goto label_3d7d98;
    }
    ctx->pc = 0x3D7D90u;
    {
        const bool branch_taken_0x3d7d90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7d90) {
            ctx->pc = 0x3D7D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7D90u;
            // 0x3d7d94: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7DA8u;
            goto label_3d7da8;
        }
    }
    ctx->pc = 0x3D7D98u;
label_3d7d98:
    // 0x3d7d98: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3d7d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3d7d9c:
    // 0x3d7d9c: 0x40f809  jalr        $v0
label_3d7da0:
    if (ctx->pc == 0x3D7DA0u) {
        ctx->pc = 0x3D7DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D9Cu;
        // 0x3d7da0: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7DA4u;
        goto label_3d7da4;
    }
    ctx->pc = 0x3D7D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D7DA4u);
        ctx->pc = 0x3D7DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D9Cu;
        // 0x3d7da0: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7D9Cu, 0x3D7DA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7DA4u;
label_3d7da4:
    // 0x3d7da4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3d7da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3d7da8:
    // 0x3d7da8: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x3d7da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_3d7dac:
    // 0x3d7dac: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_3d7db0:
    if (ctx->pc == 0x3D7DB0u) {
        ctx->pc = 0x3D7DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7DACu;
        // 0x3d7db0: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7DB4u;
        goto label_3d7db4;
    }
    ctx->pc = 0x3D7DACu;
    {
        const bool branch_taken_0x3d7dac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7DACu;
        // 0x3d7db0: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7dac) {
            ctx->pc = 0x3D7DC0u;
            goto label_3d7dc0;
        }
    }
    ctx->pc = 0x3D7DB4u;
label_3d7db4:
    // 0x3d7db4: 0x40f809  jalr        $v0
label_3d7db8:
    if (ctx->pc == 0x3D7DB8u) {
        ctx->pc = 0x3D7DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7DB4u;
        // 0x3d7db8: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7DBCu;
        goto label_3d7dbc;
    }
    ctx->pc = 0x3D7DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D7DBCu);
        ctx->pc = 0x3D7DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7DB4u;
        // 0x3d7db8: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7DB4u, 0x3D7DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7DBCu;
label_3d7dbc:
    // 0x3d7dbc: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3d7dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3d7dc0:
    // 0x3d7dc0: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3d7dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3d7dc4:
    // 0x3d7dc4: 0x40f809  jalr        $v0
label_3d7dc8:
    if (ctx->pc == 0x3D7DC8u) {
        ctx->pc = 0x3D7DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7DC4u;
        // 0x3d7dc8: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7DCCu;
        goto label_3d7dcc;
    }
    ctx->pc = 0x3D7DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D7DCCu);
        ctx->pc = 0x3D7DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7DC4u;
        // 0x3d7dc8: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7DC4u, 0x3D7DCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7DCCu;
label_3d7dcc:
    // 0x3d7dcc: 0x1000ff99  b           . + 4 + (-0x67 << 2)
label_3d7dd0:
    if (ctx->pc == 0x3D7DD0u) {
        ctx->pc = 0x3D7DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7DCCu;
        // 0x3d7dd0: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7DD4u;
        goto label_3d7dd4;
    }
    ctx->pc = 0x3D7DCCu;
    {
        const bool branch_taken_0x3d7dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7DCCu;
        // 0x3d7dd0: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7dcc) {
            ctx->pc = 0x3D7C34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d7c34;
        }
    }
    ctx->pc = 0x3D7DD4u;
label_3d7dd4:
    // 0x3d7dd4: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x3d7dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_3d7dd8:
    // 0x3d7dd8: 0xc0bb778  jal         func_2EDDE0
label_3d7ddc:
    if (ctx->pc == 0x3D7DDCu) {
        ctx->pc = 0x3D7DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7DD8u;
        // 0x3d7ddc: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7DE0u;
        goto label_3d7de0;
    }
    ctx->pc = 0x3D7DD8u;
    SET_GPR_U32(ctx, 31, 0x3D7DE0u);
    ctx->pc = 0x3D7DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7DD8u;
    // 0x3d7ddc: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3D7DD8u, 0x3D7DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7DE0u;
label_3d7de0:
    // 0x3d7de0: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x3d7de0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3d7de4:
    // 0x3d7de4: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x3d7de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_3d7de8:
    // 0x3d7de8: 0x8e450048  lw          $a1, 0x48($s2)
    ctx->pc = 0x3d7de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_3d7dec:
    // 0x3d7dec: 0xc0bb778  jal         func_2EDDE0
label_3d7df0:
    if (ctx->pc == 0x3D7DF0u) {
        ctx->pc = 0x3D7DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7DECu;
        // 0x3d7df0: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7DF4u;
        goto label_3d7df4;
    }
    ctx->pc = 0x3D7DECu;
    SET_GPR_U32(ctx, 31, 0x3D7DF4u);
    ctx->pc = 0x3D7DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7DECu;
    // 0x3d7df0: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3D7DECu, 0x3D7DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7DF4u;
label_3d7df4:
    // 0x3d7df4: 0x8e060054  lw          $a2, 0x54($s0)
    ctx->pc = 0x3d7df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3d7df8:
    // 0x3d7df8: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x3d7df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_3d7dfc:
    // 0x3d7dfc: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x3d7dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_3d7e00:
    // 0x3d7e00: 0xc0bb778  jal         func_2EDDE0
label_3d7e04:
    if (ctx->pc == 0x3D7E04u) {
        ctx->pc = 0x3D7E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7E00u;
        // 0x3d7e04: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7E08u;
        goto label_3d7e08;
    }
    ctx->pc = 0x3D7E00u;
    SET_GPR_U32(ctx, 31, 0x3D7E08u);
    ctx->pc = 0x3D7E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7E00u;
    // 0x3d7e04: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3D7E00u, 0x3D7E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7E08u;
label_3d7e08:
    // 0x3d7e08: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3d7e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3d7e0c:
    // 0x3d7e0c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x3d7e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3d7e10:
    // 0x3d7e10: 0xc0bb778  jal         func_2EDDE0
label_3d7e14:
    if (ctx->pc == 0x3D7E14u) {
        ctx->pc = 0x3D7E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7E10u;
        // 0x3d7e14: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7E18u;
        goto label_3d7e18;
    }
    ctx->pc = 0x3D7E10u;
    SET_GPR_U32(ctx, 31, 0x3D7E18u);
    ctx->pc = 0x3D7E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7E10u;
    // 0x3d7e14: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3D7E10u, 0x3D7E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7E18u;
label_3d7e18:
    // 0x3d7e18: 0x8e0416ac  lw          $a0, 0x16AC($s0)
    ctx->pc = 0x3d7e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5804)));
label_3d7e1c:
    // 0x3d7e1c: 0x260900a4  addiu       $t1, $s0, 0xA4
    ctx->pc = 0x3d7e1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
label_3d7e20:
    // 0x3d7e20: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x3d7e20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3d7e24:
    // 0x3d7e24: 0x26080998  addiu       $t0, $s0, 0x998
    ctx->pc = 0x3d7e24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 2456));
label_3d7e28:
    // 0x3d7e28: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x3d7e28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3d7e2c:
    // 0x3d7e2c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3d7e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3d7e30:
    // 0x3d7e30: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3d7e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3d7e34:
    // 0x3d7e34: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x3d7e34u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_3d7e38:
    // 0x3d7e38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d7e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3d7e3c:
    // 0x3d7e3c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x3d7e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3d7e40:
    // 0x3d7e40: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3d7e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d7e44:
    // 0x3d7e44: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3d7e44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3d7e48:
    // 0x3d7e48: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3d7e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3d7e4c:
    // 0x3d7e4c: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x3d7e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_3d7e50:
    // 0x3d7e50: 0x26040a8c  addiu       $a0, $s0, 0xA8C
    ctx->pc = 0x3d7e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2700));
label_3d7e54:
    // 0x3d7e54: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x3d7e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_3d7e58:
    // 0x3d7e58: 0xae040b40  sw          $a0, 0xB40($s0)
    ctx->pc = 0x3d7e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2880), GPR_U32(ctx, 4));
label_3d7e5c:
    // 0x3d7e5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d7e5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7e60:
    // 0x3d7e60: 0xae0516b4  sw          $a1, 0x16B4($s0)
    ctx->pc = 0x3d7e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5812), GPR_U32(ctx, 5));
label_3d7e64:
    // 0x3d7e64: 0xae0316a8  sw          $v1, 0x16A8($s0)
    ctx->pc = 0x3d7e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5800), GPR_U32(ctx, 3));
label_3d7e68:
    // 0x3d7e68: 0xae090b28  sw          $t1, 0xB28($s0)
    ctx->pc = 0x3d7e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2856), GPR_U32(ctx, 9));
label_3d7e6c:
    // 0x3d7e6c: 0xae080b34  sw          $t0, 0xB34($s0)
    ctx->pc = 0x3d7e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2868), GPR_U32(ctx, 8));
label_3d7e70:
    // 0x3d7e70: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3d7e70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d7e74:
    // 0x3d7e74: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3d7e74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d7e78:
    // 0x3d7e78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d7e78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7e7c:
    // 0x3d7e7c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3d7e7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d7e80:
    // 0x3d7e80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d7e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d7e84:
    // 0x3d7e84: 0x3e00008  jr          $ra
label_3d7e88:
    if (ctx->pc == 0x3D7E88u) {
        ctx->pc = 0x3D7E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7E84u;
        // 0x3d7e88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7E8Cu;
        goto label_3d7e8c;
    }
    ctx->pc = 0x3D7E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7E84u;
        // 0x3d7e88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7E8Cu;
label_3d7e8c:
    // 0x3d7e8c: 0x0  nop
    ctx->pc = 0x3d7e8cu;
    // NOP
    ctx->pc = 0x3d7e90u;
}
