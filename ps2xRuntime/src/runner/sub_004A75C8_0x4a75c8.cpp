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

// Function: sub_004A75C8
// Address: 0x4a75c8 - 0x4a7ae8
void sub_004A75C8_0x4a75c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A75C8_0x4a75c8");
#endif

    switch (ctx->pc) {
        case 0x4a75c8u: goto label_4a75c8;
        case 0x4a75ccu: goto label_4a75cc;
        case 0x4a75d0u: goto label_4a75d0;
        case 0x4a75d4u: goto label_4a75d4;
        case 0x4a75d8u: goto label_4a75d8;
        case 0x4a75dcu: goto label_4a75dc;
        case 0x4a75e0u: goto label_4a75e0;
        case 0x4a75e4u: goto label_4a75e4;
        case 0x4a75e8u: goto label_4a75e8;
        case 0x4a75ecu: goto label_4a75ec;
        case 0x4a75f0u: goto label_4a75f0;
        case 0x4a75f4u: goto label_4a75f4;
        case 0x4a75f8u: goto label_4a75f8;
        case 0x4a75fcu: goto label_4a75fc;
        case 0x4a7600u: goto label_4a7600;
        case 0x4a7604u: goto label_4a7604;
        case 0x4a7608u: goto label_4a7608;
        case 0x4a760cu: goto label_4a760c;
        case 0x4a7610u: goto label_4a7610;
        case 0x4a7614u: goto label_4a7614;
        case 0x4a7618u: goto label_4a7618;
        case 0x4a761cu: goto label_4a761c;
        case 0x4a7620u: goto label_4a7620;
        case 0x4a7624u: goto label_4a7624;
        case 0x4a7628u: goto label_4a7628;
        case 0x4a762cu: goto label_4a762c;
        case 0x4a7630u: goto label_4a7630;
        case 0x4a7634u: goto label_4a7634;
        case 0x4a7638u: goto label_4a7638;
        case 0x4a763cu: goto label_4a763c;
        case 0x4a7640u: goto label_4a7640;
        case 0x4a7644u: goto label_4a7644;
        case 0x4a7648u: goto label_4a7648;
        case 0x4a764cu: goto label_4a764c;
        case 0x4a7650u: goto label_4a7650;
        case 0x4a7654u: goto label_4a7654;
        case 0x4a7658u: goto label_4a7658;
        case 0x4a765cu: goto label_4a765c;
        case 0x4a7660u: goto label_4a7660;
        case 0x4a7664u: goto label_4a7664;
        case 0x4a7668u: goto label_4a7668;
        case 0x4a766cu: goto label_4a766c;
        case 0x4a7670u: goto label_4a7670;
        case 0x4a7674u: goto label_4a7674;
        case 0x4a7678u: goto label_4a7678;
        case 0x4a767cu: goto label_4a767c;
        case 0x4a7680u: goto label_4a7680;
        case 0x4a7684u: goto label_4a7684;
        case 0x4a7688u: goto label_4a7688;
        case 0x4a768cu: goto label_4a768c;
        case 0x4a7690u: goto label_4a7690;
        case 0x4a7694u: goto label_4a7694;
        case 0x4a7698u: goto label_4a7698;
        case 0x4a769cu: goto label_4a769c;
        case 0x4a76a0u: goto label_4a76a0;
        case 0x4a76a4u: goto label_4a76a4;
        case 0x4a76a8u: goto label_4a76a8;
        case 0x4a76acu: goto label_4a76ac;
        case 0x4a76b0u: goto label_4a76b0;
        case 0x4a76b4u: goto label_4a76b4;
        case 0x4a76b8u: goto label_4a76b8;
        case 0x4a76bcu: goto label_4a76bc;
        case 0x4a76c0u: goto label_4a76c0;
        case 0x4a76c4u: goto label_4a76c4;
        case 0x4a76c8u: goto label_4a76c8;
        case 0x4a76ccu: goto label_4a76cc;
        case 0x4a76d0u: goto label_4a76d0;
        case 0x4a76d4u: goto label_4a76d4;
        case 0x4a76d8u: goto label_4a76d8;
        case 0x4a76dcu: goto label_4a76dc;
        case 0x4a76e0u: goto label_4a76e0;
        case 0x4a76e4u: goto label_4a76e4;
        case 0x4a76e8u: goto label_4a76e8;
        case 0x4a76ecu: goto label_4a76ec;
        case 0x4a76f0u: goto label_4a76f0;
        case 0x4a76f4u: goto label_4a76f4;
        case 0x4a76f8u: goto label_4a76f8;
        case 0x4a76fcu: goto label_4a76fc;
        case 0x4a7700u: goto label_4a7700;
        case 0x4a7704u: goto label_4a7704;
        case 0x4a7708u: goto label_4a7708;
        case 0x4a770cu: goto label_4a770c;
        case 0x4a7710u: goto label_4a7710;
        case 0x4a7714u: goto label_4a7714;
        case 0x4a7718u: goto label_4a7718;
        case 0x4a771cu: goto label_4a771c;
        case 0x4a7720u: goto label_4a7720;
        case 0x4a7724u: goto label_4a7724;
        case 0x4a7728u: goto label_4a7728;
        case 0x4a772cu: goto label_4a772c;
        case 0x4a7730u: goto label_4a7730;
        case 0x4a7734u: goto label_4a7734;
        case 0x4a7738u: goto label_4a7738;
        case 0x4a773cu: goto label_4a773c;
        case 0x4a7740u: goto label_4a7740;
        case 0x4a7744u: goto label_4a7744;
        case 0x4a7748u: goto label_4a7748;
        case 0x4a774cu: goto label_4a774c;
        case 0x4a7750u: goto label_4a7750;
        case 0x4a7754u: goto label_4a7754;
        case 0x4a7758u: goto label_4a7758;
        case 0x4a775cu: goto label_4a775c;
        case 0x4a7760u: goto label_4a7760;
        case 0x4a7764u: goto label_4a7764;
        case 0x4a7768u: goto label_4a7768;
        case 0x4a776cu: goto label_4a776c;
        case 0x4a7770u: goto label_4a7770;
        case 0x4a7774u: goto label_4a7774;
        case 0x4a7778u: goto label_4a7778;
        case 0x4a777cu: goto label_4a777c;
        case 0x4a7780u: goto label_4a7780;
        case 0x4a7784u: goto label_4a7784;
        case 0x4a7788u: goto label_4a7788;
        case 0x4a778cu: goto label_4a778c;
        case 0x4a7790u: goto label_4a7790;
        case 0x4a7794u: goto label_4a7794;
        case 0x4a7798u: goto label_4a7798;
        case 0x4a779cu: goto label_4a779c;
        case 0x4a77a0u: goto label_4a77a0;
        case 0x4a77a4u: goto label_4a77a4;
        case 0x4a77a8u: goto label_4a77a8;
        case 0x4a77acu: goto label_4a77ac;
        case 0x4a77b0u: goto label_4a77b0;
        case 0x4a77b4u: goto label_4a77b4;
        case 0x4a77b8u: goto label_4a77b8;
        case 0x4a77bcu: goto label_4a77bc;
        case 0x4a77c0u: goto label_4a77c0;
        case 0x4a77c4u: goto label_4a77c4;
        case 0x4a77c8u: goto label_4a77c8;
        case 0x4a77ccu: goto label_4a77cc;
        case 0x4a77d0u: goto label_4a77d0;
        case 0x4a77d4u: goto label_4a77d4;
        case 0x4a77d8u: goto label_4a77d8;
        case 0x4a77dcu: goto label_4a77dc;
        case 0x4a77e0u: goto label_4a77e0;
        case 0x4a77e4u: goto label_4a77e4;
        case 0x4a77e8u: goto label_4a77e8;
        case 0x4a77ecu: goto label_4a77ec;
        case 0x4a77f0u: goto label_4a77f0;
        case 0x4a77f4u: goto label_4a77f4;
        case 0x4a77f8u: goto label_4a77f8;
        case 0x4a77fcu: goto label_4a77fc;
        case 0x4a7800u: goto label_4a7800;
        case 0x4a7804u: goto label_4a7804;
        case 0x4a7808u: goto label_4a7808;
        case 0x4a780cu: goto label_4a780c;
        case 0x4a7810u: goto label_4a7810;
        case 0x4a7814u: goto label_4a7814;
        case 0x4a7818u: goto label_4a7818;
        case 0x4a781cu: goto label_4a781c;
        case 0x4a7820u: goto label_4a7820;
        case 0x4a7824u: goto label_4a7824;
        case 0x4a7828u: goto label_4a7828;
        case 0x4a782cu: goto label_4a782c;
        case 0x4a7830u: goto label_4a7830;
        case 0x4a7834u: goto label_4a7834;
        case 0x4a7838u: goto label_4a7838;
        case 0x4a783cu: goto label_4a783c;
        case 0x4a7840u: goto label_4a7840;
        case 0x4a7844u: goto label_4a7844;
        case 0x4a7848u: goto label_4a7848;
        case 0x4a784cu: goto label_4a784c;
        case 0x4a7850u: goto label_4a7850;
        case 0x4a7854u: goto label_4a7854;
        case 0x4a7858u: goto label_4a7858;
        case 0x4a785cu: goto label_4a785c;
        case 0x4a7860u: goto label_4a7860;
        case 0x4a7864u: goto label_4a7864;
        case 0x4a7868u: goto label_4a7868;
        case 0x4a786cu: goto label_4a786c;
        case 0x4a7870u: goto label_4a7870;
        case 0x4a7874u: goto label_4a7874;
        case 0x4a7878u: goto label_4a7878;
        case 0x4a787cu: goto label_4a787c;
        case 0x4a7880u: goto label_4a7880;
        case 0x4a7884u: goto label_4a7884;
        case 0x4a7888u: goto label_4a7888;
        case 0x4a788cu: goto label_4a788c;
        case 0x4a7890u: goto label_4a7890;
        case 0x4a7894u: goto label_4a7894;
        case 0x4a7898u: goto label_4a7898;
        case 0x4a789cu: goto label_4a789c;
        case 0x4a78a0u: goto label_4a78a0;
        case 0x4a78a4u: goto label_4a78a4;
        case 0x4a78a8u: goto label_4a78a8;
        case 0x4a78acu: goto label_4a78ac;
        case 0x4a78b0u: goto label_4a78b0;
        case 0x4a78b4u: goto label_4a78b4;
        case 0x4a78b8u: goto label_4a78b8;
        case 0x4a78bcu: goto label_4a78bc;
        case 0x4a78c0u: goto label_4a78c0;
        case 0x4a78c4u: goto label_4a78c4;
        case 0x4a78c8u: goto label_4a78c8;
        case 0x4a78ccu: goto label_4a78cc;
        case 0x4a78d0u: goto label_4a78d0;
        case 0x4a78d4u: goto label_4a78d4;
        case 0x4a78d8u: goto label_4a78d8;
        case 0x4a78dcu: goto label_4a78dc;
        case 0x4a78e0u: goto label_4a78e0;
        case 0x4a78e4u: goto label_4a78e4;
        case 0x4a78e8u: goto label_4a78e8;
        case 0x4a78ecu: goto label_4a78ec;
        case 0x4a78f0u: goto label_4a78f0;
        case 0x4a78f4u: goto label_4a78f4;
        case 0x4a78f8u: goto label_4a78f8;
        case 0x4a78fcu: goto label_4a78fc;
        case 0x4a7900u: goto label_4a7900;
        case 0x4a7904u: goto label_4a7904;
        case 0x4a7908u: goto label_4a7908;
        case 0x4a790cu: goto label_4a790c;
        case 0x4a7910u: goto label_4a7910;
        case 0x4a7914u: goto label_4a7914;
        case 0x4a7918u: goto label_4a7918;
        case 0x4a791cu: goto label_4a791c;
        case 0x4a7920u: goto label_4a7920;
        case 0x4a7924u: goto label_4a7924;
        case 0x4a7928u: goto label_4a7928;
        case 0x4a792cu: goto label_4a792c;
        case 0x4a7930u: goto label_4a7930;
        case 0x4a7934u: goto label_4a7934;
        case 0x4a7938u: goto label_4a7938;
        case 0x4a793cu: goto label_4a793c;
        case 0x4a7940u: goto label_4a7940;
        case 0x4a7944u: goto label_4a7944;
        case 0x4a7948u: goto label_4a7948;
        case 0x4a794cu: goto label_4a794c;
        case 0x4a7950u: goto label_4a7950;
        case 0x4a7954u: goto label_4a7954;
        case 0x4a7958u: goto label_4a7958;
        case 0x4a795cu: goto label_4a795c;
        case 0x4a7960u: goto label_4a7960;
        case 0x4a7964u: goto label_4a7964;
        case 0x4a7968u: goto label_4a7968;
        case 0x4a796cu: goto label_4a796c;
        case 0x4a7970u: goto label_4a7970;
        case 0x4a7974u: goto label_4a7974;
        case 0x4a7978u: goto label_4a7978;
        case 0x4a797cu: goto label_4a797c;
        case 0x4a7980u: goto label_4a7980;
        case 0x4a7984u: goto label_4a7984;
        case 0x4a7988u: goto label_4a7988;
        case 0x4a798cu: goto label_4a798c;
        case 0x4a7990u: goto label_4a7990;
        case 0x4a7994u: goto label_4a7994;
        case 0x4a7998u: goto label_4a7998;
        case 0x4a799cu: goto label_4a799c;
        case 0x4a79a0u: goto label_4a79a0;
        case 0x4a79a4u: goto label_4a79a4;
        case 0x4a79a8u: goto label_4a79a8;
        case 0x4a79acu: goto label_4a79ac;
        case 0x4a79b0u: goto label_4a79b0;
        case 0x4a79b4u: goto label_4a79b4;
        case 0x4a79b8u: goto label_4a79b8;
        case 0x4a79bcu: goto label_4a79bc;
        case 0x4a79c0u: goto label_4a79c0;
        case 0x4a79c4u: goto label_4a79c4;
        case 0x4a79c8u: goto label_4a79c8;
        case 0x4a79ccu: goto label_4a79cc;
        case 0x4a79d0u: goto label_4a79d0;
        case 0x4a79d4u: goto label_4a79d4;
        case 0x4a79d8u: goto label_4a79d8;
        case 0x4a79dcu: goto label_4a79dc;
        case 0x4a79e0u: goto label_4a79e0;
        case 0x4a79e4u: goto label_4a79e4;
        case 0x4a79e8u: goto label_4a79e8;
        case 0x4a79ecu: goto label_4a79ec;
        case 0x4a79f0u: goto label_4a79f0;
        case 0x4a79f4u: goto label_4a79f4;
        case 0x4a79f8u: goto label_4a79f8;
        case 0x4a79fcu: goto label_4a79fc;
        case 0x4a7a00u: goto label_4a7a00;
        case 0x4a7a04u: goto label_4a7a04;
        case 0x4a7a08u: goto label_4a7a08;
        case 0x4a7a0cu: goto label_4a7a0c;
        case 0x4a7a10u: goto label_4a7a10;
        case 0x4a7a14u: goto label_4a7a14;
        case 0x4a7a18u: goto label_4a7a18;
        case 0x4a7a1cu: goto label_4a7a1c;
        case 0x4a7a20u: goto label_4a7a20;
        case 0x4a7a24u: goto label_4a7a24;
        case 0x4a7a28u: goto label_4a7a28;
        case 0x4a7a2cu: goto label_4a7a2c;
        case 0x4a7a30u: goto label_4a7a30;
        case 0x4a7a34u: goto label_4a7a34;
        case 0x4a7a38u: goto label_4a7a38;
        case 0x4a7a3cu: goto label_4a7a3c;
        case 0x4a7a40u: goto label_4a7a40;
        case 0x4a7a44u: goto label_4a7a44;
        case 0x4a7a48u: goto label_4a7a48;
        case 0x4a7a4cu: goto label_4a7a4c;
        case 0x4a7a50u: goto label_4a7a50;
        case 0x4a7a54u: goto label_4a7a54;
        case 0x4a7a58u: goto label_4a7a58;
        case 0x4a7a5cu: goto label_4a7a5c;
        case 0x4a7a60u: goto label_4a7a60;
        case 0x4a7a64u: goto label_4a7a64;
        case 0x4a7a68u: goto label_4a7a68;
        case 0x4a7a6cu: goto label_4a7a6c;
        case 0x4a7a70u: goto label_4a7a70;
        case 0x4a7a74u: goto label_4a7a74;
        case 0x4a7a78u: goto label_4a7a78;
        case 0x4a7a7cu: goto label_4a7a7c;
        case 0x4a7a80u: goto label_4a7a80;
        case 0x4a7a84u: goto label_4a7a84;
        case 0x4a7a88u: goto label_4a7a88;
        case 0x4a7a8cu: goto label_4a7a8c;
        case 0x4a7a90u: goto label_4a7a90;
        case 0x4a7a94u: goto label_4a7a94;
        case 0x4a7a98u: goto label_4a7a98;
        case 0x4a7a9cu: goto label_4a7a9c;
        case 0x4a7aa0u: goto label_4a7aa0;
        case 0x4a7aa4u: goto label_4a7aa4;
        case 0x4a7aa8u: goto label_4a7aa8;
        case 0x4a7aacu: goto label_4a7aac;
        case 0x4a7ab0u: goto label_4a7ab0;
        case 0x4a7ab4u: goto label_4a7ab4;
        case 0x4a7ab8u: goto label_4a7ab8;
        case 0x4a7abcu: goto label_4a7abc;
        case 0x4a7ac0u: goto label_4a7ac0;
        case 0x4a7ac4u: goto label_4a7ac4;
        case 0x4a7ac8u: goto label_4a7ac8;
        case 0x4a7accu: goto label_4a7acc;
        case 0x4a7ad0u: goto label_4a7ad0;
        case 0x4a7ad4u: goto label_4a7ad4;
        case 0x4a7ad8u: goto label_4a7ad8;
        case 0x4a7adcu: goto label_4a7adc;
        case 0x4a7ae0u: goto label_4a7ae0;
        case 0x4a7ae4u: goto label_4a7ae4;
        default: break;
    }

    ctx->pc = 0x4a75c8u;

label_4a75c8:
    // 0x4a75c8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x4a75c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_4a75cc:
    // 0x4a75cc: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x4a75ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_4a75d0:
    // 0x4a75d0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4a75d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4a75d4:
    // 0x4a75d4: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x4a75d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_4a75d8:
    // 0x4a75d8: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x4a75d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_4a75dc:
    // 0x4a75dc: 0x111103  sra         $v0, $s1, 4
    ctx->pc = 0x4a75dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 4));
label_4a75e0:
    // 0x4a75e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a75e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4a75e4:
    // 0x4a75e4: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x4a75e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_4a75e8:
    // 0x4a75e8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4a75e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4a75ec:
    // 0x4a75ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4a75ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a75f0:
    // 0x4a75f0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4a75f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a75f4:
    // 0x4a75f4: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x4a75f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_4a75f8:
    // 0x4a75f8: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x4a75f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_4a75fc:
    // 0x4a75fc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4a75fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a7600:
    // 0x4a7600: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x4a7600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_4a7604:
    // 0x4a7604: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4a7604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a7608:
    // 0x4a7608: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x4a7608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_4a760c:
    // 0x4a760c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4a760cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a7610:
    // 0x4a7610: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4a7610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4a7614:
    // 0x4a7614: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x4a7614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_4a7618:
    // 0x4a7618: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x4a7618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_4a761c:
    // 0x4a761c: 0x8f97b830  lw          $s7, -0x47D0($gp)
    ctx->pc = 0x4a761cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948912)));
label_4a7620:
    // 0x4a7620: 0xc12af4a  jal         func_4ABD28
label_4a7624:
    if (ctx->pc == 0x4A7624u) {
        ctx->pc = 0x4A7624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7620u;
        // 0x4a7624: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7628u;
        goto label_4a7628;
    }
    ctx->pc = 0x4A7620u;
    SET_GPR_U32(ctx, 31, 0x4A7628u);
    ctx->pc = 0x4A7624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7620u;
    // 0x4a7624: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ABD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ABD28u, 0x4A7620u, 0x4A7628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7628u;
label_4a7628:
    // 0x4a7628: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_4a762c:
    if (ctx->pc == 0x4A762Cu) {
        ctx->pc = 0x4A762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7628u;
        // 0x4a762c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7630u;
        goto label_4a7630;
    }
    ctx->pc = 0x4A7628u;
    {
        const bool branch_taken_0x4a7628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7628u;
        // 0x4a762c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7628) {
            ctx->pc = 0x4A766Cu;
            goto label_4a766c;
        }
    }
    ctx->pc = 0x4A7630u;
label_4a7630:
    // 0x4a7630: 0x24020803  addiu       $v0, $zero, 0x803
    ctx->pc = 0x4a7630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
label_4a7634:
    // 0x4a7634: 0x14620120  bne         $v1, $v0, . + 4 + (0x120 << 2)
label_4a7638:
    if (ctx->pc == 0x4A7638u) {
        ctx->pc = 0x4A7638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7634u;
        // 0x4a7638: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A763Cu;
        goto label_4a763c;
    }
    ctx->pc = 0x4A7634u;
    {
        const bool branch_taken_0x4a7634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A7638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7634u;
        // 0x4a7638: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7634) {
            ctx->pc = 0x4A7AB8u;
            goto label_4a7ab8;
        }
    }
    ctx->pc = 0x4A763Cu;
label_4a763c:
    // 0x4a763c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x4a763cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4a7640:
    // 0x4a7640: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4a7644:
    if (ctx->pc == 0x4A7644u) {
        ctx->pc = 0x4A7644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7640u;
        // 0x4a7644: 0x8f82b830  lw          $v0, -0x47D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948912)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7648u;
        goto label_4a7648;
    }
    ctx->pc = 0x4A7640u;
    {
        const bool branch_taken_0x4a7640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7640u;
        // 0x4a7644: 0x8f82b830  lw          $v0, -0x47D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7640) {
            ctx->pc = 0x4A766Cu;
            goto label_4a766c;
        }
    }
    ctx->pc = 0x4A7648u;
label_4a7648:
    // 0x4a7648: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_4a764c:
    if (ctx->pc == 0x4A764Cu) {
        ctx->pc = 0x4A764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7648u;
        // 0x4a764c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7650u;
        goto label_4a7650;
    }
    ctx->pc = 0x4A7648u;
    {
        const bool branch_taken_0x4a7648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7648u;
        // 0x4a764c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7648) {
            ctx->pc = 0x4A7674u;
            goto label_4a7674;
        }
    }
    ctx->pc = 0x4A7650u;
label_4a7650:
    // 0x4a7650: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4a7650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4a7654:
    // 0x4a7654: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a7654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4a7658:
    // 0x4a7658: 0xc127ca4  jal         func_49F290
label_4a765c:
    if (ctx->pc == 0x4A765Cu) {
        ctx->pc = 0x4A765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7658u;
        // 0x4a765c: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7660u;
        goto label_4a7660;
    }
    ctx->pc = 0x4A7658u;
    SET_GPR_U32(ctx, 31, 0x4A7660u);
    ctx->pc = 0x4A765Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7658u;
    // 0x4a765c: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x4A7658u, 0x4A7660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7660u;
label_4a7660:
    // 0x4a7660: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a7660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a7664:
    // 0x4a7664: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_4a7668:
    if (ctx->pc == 0x4A7668u) {
        ctx->pc = 0x4A7668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7664u;
        // 0x4a7668: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A766Cu;
        goto label_4a766c;
    }
    ctx->pc = 0x4A7664u;
    {
        const bool branch_taken_0x4a7664 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7664u;
        // 0x4a7668: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7664) {
            ctx->pc = 0x4A7678u;
            goto label_4a7678;
        }
    }
    ctx->pc = 0x4A766Cu;
label_4a766c:
    // 0x4a766c: 0x10000112  b           . + 4 + (0x112 << 2)
label_4a7670:
    if (ctx->pc == 0x4A7670u) {
        ctx->pc = 0x4A7670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A766Cu;
        // 0x4a7670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7674u;
        goto label_4a7674;
    }
    ctx->pc = 0x4A766Cu;
    {
        const bool branch_taken_0x4a766c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A766Cu;
        // 0x4a7670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a766c) {
            ctx->pc = 0x4A7AB8u;
            goto label_4a7ab8;
        }
    }
    ctx->pc = 0x4A7674u;
label_4a7674:
    // 0x4a7674: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4a7674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4a7678:
    // 0x4a7678: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a7678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a767c:
    // 0x4a767c: 0xc10480a  jal         func_412028
label_4a7680:
    if (ctx->pc == 0x4A7680u) {
        ctx->pc = 0x4A7680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A767Cu;
        // 0x4a7680: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7684u;
        goto label_4a7684;
    }
    ctx->pc = 0x4A767Cu;
    SET_GPR_U32(ctx, 31, 0x4A7684u);
    ctx->pc = 0x4A7680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A767Cu;
    // 0x4a7680: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x4A767Cu, 0x4A7684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7684u;
label_4a7684:
    // 0x4a7684: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4a7684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4a7688:
    // 0x4a7688: 0x1462010b  bne         $v1, $v0, . + 4 + (0x10B << 2)
label_4a768c:
    if (ctx->pc == 0x4A768Cu) {
        ctx->pc = 0x4A768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7688u;
        // 0x4a768c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7690u;
        goto label_4a7690;
    }
    ctx->pc = 0x4A7688u;
    {
        const bool branch_taken_0x4a7688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7688u;
        // 0x4a768c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7688) {
            ctx->pc = 0x4A7AB8u;
            goto label_4a7ab8;
        }
    }
    ctx->pc = 0x4A7690u;
label_4a7690:
    // 0x4a7690: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4a7690u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a7694:
    // 0x4a7694: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4a7694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a7698:
    // 0x4a7698: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4a7698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a769c:
    // 0x4a769c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x4a769cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a76a0:
    // 0x4a76a0: 0xc129f3c  jal         func_4A7CF0
label_4a76a4:
    if (ctx->pc == 0x4A76A4u) {
        ctx->pc = 0x4A76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A76A0u;
        // 0x4a76a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A76A8u;
        goto label_4a76a8;
    }
    ctx->pc = 0x4A76A0u;
    SET_GPR_U32(ctx, 31, 0x4A76A8u);
    ctx->pc = 0x4A76A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A76A0u;
    // 0x4a76a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7CF0u, 0x4A76A0u, 0x4A76A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A76A8u;
label_4a76a8:
    // 0x4a76a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4a76a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a76ac:
    // 0x4a76ac: 0x8f82b830  lw          $v0, -0x47D0($gp)
    ctx->pc = 0x4a76acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948912)));
label_4a76b0:
    // 0x4a76b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4a76b4:
    if (ctx->pc == 0x4A76B4u) {
        ctx->pc = 0x4A76B8u;
        goto label_4a76b8;
    }
    ctx->pc = 0x4A76B0u;
    {
        const bool branch_taken_0x4a76b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a76b0) {
            ctx->pc = 0x4A76C0u;
            goto label_4a76c0;
        }
    }
    ctx->pc = 0x4A76B8u;
label_4a76b8:
    // 0x4a76b8: 0xc127cae  jal         func_49F2B8
label_4a76bc:
    if (ctx->pc == 0x4A76BCu) {
        ctx->pc = 0x4A76BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A76B8u;
        // 0x4a76bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A76C0u;
        goto label_4a76c0;
    }
    ctx->pc = 0x4A76B8u;
    SET_GPR_U32(ctx, 31, 0x4A76C0u);
    ctx->pc = 0x4A76BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A76B8u;
    // 0x4a76bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A76B8u, 0x4A76C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A76C0u;
label_4a76c0:
    // 0x4a76c0: 0x1240ffea  beqz        $s2, . + 4 + (-0x16 << 2)
label_4a76c4:
    if (ctx->pc == 0x4A76C4u) {
        ctx->pc = 0x4A76C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A76C0u;
        // 0x4a76c4: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A76C8u;
        goto label_4a76c8;
    }
    ctx->pc = 0x4A76C0u;
    {
        const bool branch_taken_0x4a76c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A76C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A76C0u;
        // 0x4a76c4: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a76c0) {
            ctx->pc = 0x4A766Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a766c;
        }
    }
    ctx->pc = 0x4A76C8u;
label_4a76c8:
    // 0x4a76c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4a76c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a76cc:
    // 0x4a76cc: 0xc12af4a  jal         func_4ABD28
label_4a76d0:
    if (ctx->pc == 0x4A76D0u) {
        ctx->pc = 0x4A76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A76CCu;
        // 0x4a76d0: 0x8fa60048  lw          $a2, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A76D4u;
        goto label_4a76d4;
    }
    ctx->pc = 0x4A76CCu;
    SET_GPR_U32(ctx, 31, 0x4A76D4u);
    ctx->pc = 0x4A76D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A76CCu;
    // 0x4a76d0: 0x8fa60048  lw          $a2, 0x48($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ABD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ABD28u, 0x4A76CCu, 0x4A76D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A76D4u;
label_4a76d4:
    // 0x4a76d4: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_4a76d8:
    if (ctx->pc == 0x4A76D8u) {
        ctx->pc = 0x4A76D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A76D4u;
        // 0x4a76d8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A76DCu;
        goto label_4a76dc;
    }
    ctx->pc = 0x4A76D4u;
    {
        const bool branch_taken_0x4a76d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A76D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A76D4u;
        // 0x4a76d8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a76d4) {
            ctx->pc = 0x4A7770u;
            goto label_4a7770;
        }
    }
    ctx->pc = 0x4A76DCu;
label_4a76dc:
    // 0x4a76dc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x4a76dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4a76e0:
    // 0x4a76e0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x4a76e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4a76e4:
    // 0x4a76e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4a76e8:
    if (ctx->pc == 0x4A76E8u) {
        ctx->pc = 0x4A76ECu;
        goto label_4a76ec;
    }
    ctx->pc = 0x4A76E4u;
    {
        const bool branch_taken_0x4a76e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a76e4) {
            ctx->pc = 0x4A76F4u;
            goto label_4a76f4;
        }
    }
    ctx->pc = 0x4A76ECu;
label_4a76ec:
    // 0x4a76ec: 0x40f809  jalr        $v0
label_4a76f0:
    if (ctx->pc == 0x4A76F0u) {
        ctx->pc = 0x4A76F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A76ECu;
        // 0x4a76f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A76F4u;
        goto label_4a76f4;
    }
    ctx->pc = 0x4A76ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A76F4u);
        ctx->pc = 0x4A76F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A76ECu;
        // 0x4a76f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A76ECu, 0x4A76F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A76F4u;
label_4a76f4:
    // 0x4a76f4: 0xc129822  jal         func_4A6088
label_4a76f8:
    if (ctx->pc == 0x4A76F8u) {
        ctx->pc = 0x4A76F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A76F4u;
        // 0x4a76f8: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A76FCu;
        goto label_4a76fc;
    }
    ctx->pc = 0x4A76F4u;
    SET_GPR_U32(ctx, 31, 0x4A76FCu);
    ctx->pc = 0x4A76F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A76F4u;
    // 0x4a76f8: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6088u, 0x4A76F4u, 0x4A76FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A76FCu;
label_4a76fc:
    // 0x4a76fc: 0xc129822  jal         func_4A6088
label_4a7700:
    if (ctx->pc == 0x4A7700u) {
        ctx->pc = 0x4A7700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A76FCu;
        // 0x4a7700: 0x2644002c  addiu       $a0, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7704u;
        goto label_4a7704;
    }
    ctx->pc = 0x4A76FCu;
    SET_GPR_U32(ctx, 31, 0x4A7704u);
    ctx->pc = 0x4A7700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A76FCu;
    // 0x4a7700: 0x2644002c  addiu       $a0, $s2, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6088u, 0x4A76FCu, 0x4A7704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7704u;
label_4a7704:
    // 0x4a7704: 0xc1283e8  jal         func_4A0FA0
label_4a7708:
    if (ctx->pc == 0x4A7708u) {
        ctx->pc = 0x4A7708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7704u;
        // 0x4a7708: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A770Cu;
        goto label_4a770c;
    }
    ctx->pc = 0x4A7704u;
    SET_GPR_U32(ctx, 31, 0x4A770Cu);
    ctx->pc = 0x4A7708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7704u;
    // 0x4a7708: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0FA0u, 0x4A7704u, 0x4A770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A770Cu;
label_4a770c:
    // 0x4a770c: 0xc12a492  jal         func_4A9248
label_4a7710:
    if (ctx->pc == 0x4A7710u) {
        ctx->pc = 0x4A7710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A770Cu;
        // 0x4a7710: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7714u;
        goto label_4a7714;
    }
    ctx->pc = 0x4A770Cu;
    SET_GPR_U32(ctx, 31, 0x4A7714u);
    ctx->pc = 0x4A7710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A770Cu;
    // 0x4a7710: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x4A770Cu, 0x4A7714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7714u;
label_4a7714:
    // 0x4a7714: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x4a7714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_4a7718:
    // 0x4a7718: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4a7718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4a771c:
    // 0x4a771c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4a7720:
    if (ctx->pc == 0x4A7720u) {
        ctx->pc = 0x4A7720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A771Cu;
        // 0x4a7720: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7724u;
        goto label_4a7724;
    }
    ctx->pc = 0x4A771Cu;
    {
        const bool branch_taken_0x4a771c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A771Cu;
        // 0x4a7720: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a771c) {
            ctx->pc = 0x4A7758u;
            goto label_4a7758;
        }
    }
    ctx->pc = 0x4A7724u;
label_4a7724:
    // 0x4a7724: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x4a7724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4a7728:
    // 0x4a7728: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x4a7728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_4a772c:
    // 0x4a772c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_4a7730:
    if (ctx->pc == 0x4A7730u) {
        ctx->pc = 0x4A7730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A772Cu;
        // 0x4a7730: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7734u;
        goto label_4a7734;
    }
    ctx->pc = 0x4A772Cu;
    {
        const bool branch_taken_0x4a772c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a772c) {
            ctx->pc = 0x4A7730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A772Cu;
            // 0x4a7730: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7744u;
            goto label_4a7744;
        }
    }
    ctx->pc = 0x4A7734u;
label_4a7734:
    // 0x4a7734: 0xc12a9a0  jal         func_4AA680
label_4a7738:
    if (ctx->pc == 0x4A7738u) {
        ctx->pc = 0x4A7738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7734u;
        // 0x4a7738: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A773Cu;
        goto label_4a773c;
    }
    ctx->pc = 0x4A7734u;
    SET_GPR_U32(ctx, 31, 0x4A773Cu);
    ctx->pc = 0x4A7738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7734u;
    // 0x4a7738: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4A7734u, 0x4A773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A773Cu;
label_4a773c:
    // 0x4a773c: 0x100000de  b           . + 4 + (0xDE << 2)
label_4a7740:
    if (ctx->pc == 0x4A7740u) {
        ctx->pc = 0x4A7740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A773Cu;
        // 0x4a7740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7744u;
        goto label_4a7744;
    }
    ctx->pc = 0x4A773Cu;
    {
        const bool branch_taken_0x4a773c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A773Cu;
        // 0x4a7740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a773c) {
            ctx->pc = 0x4A7AB8u;
            goto label_4a7ab8;
        }
    }
    ctx->pc = 0x4A7744u;
label_4a7744:
    // 0x4a7744: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a7744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a7748:
    // 0x4a7748: 0xc12a9a0  jal         func_4AA680
label_4a774c:
    if (ctx->pc == 0x4A774Cu) {
        ctx->pc = 0x4A774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7748u;
        // 0x4a774c: 0x24848880  addiu       $a0, $a0, -0x7780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7750u;
        goto label_4a7750;
    }
    ctx->pc = 0x4A7748u;
    SET_GPR_U32(ctx, 31, 0x4A7750u);
    ctx->pc = 0x4A774Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7748u;
    // 0x4a774c: 0x24848880  addiu       $a0, $a0, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4A7748u, 0x4A7750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7750u;
label_4a7750:
    // 0x4a7750: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_4a7754:
    if (ctx->pc == 0x4A7754u) {
        ctx->pc = 0x4A7754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7750u;
        // 0x4a7754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7758u;
        goto label_4a7758;
    }
    ctx->pc = 0x4A7750u;
    {
        const bool branch_taken_0x4a7750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7750u;
        // 0x4a7754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7750) {
            ctx->pc = 0x4A7AB8u;
            goto label_4a7ab8;
        }
    }
    ctx->pc = 0x4A7758u;
label_4a7758:
    // 0x4a7758: 0x144000d7  bnez        $v0, . + 4 + (0xD7 << 2)
label_4a775c:
    if (ctx->pc == 0x4A775Cu) {
        ctx->pc = 0x4A775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7758u;
        // 0x4a775c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7760u;
        goto label_4a7760;
    }
    ctx->pc = 0x4A7758u;
    {
        const bool branch_taken_0x4a7758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7758u;
        // 0x4a775c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7758) {
            ctx->pc = 0x4A7AB8u;
            goto label_4a7ab8;
        }
    }
    ctx->pc = 0x4A7760u;
label_4a7760:
    // 0x4a7760: 0xc127cae  jal         func_49F2B8
label_4a7764:
    if (ctx->pc == 0x4A7764u) {
        ctx->pc = 0x4A7764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7760u;
        // 0x4a7764: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7768u;
        goto label_4a7768;
    }
    ctx->pc = 0x4A7760u;
    SET_GPR_U32(ctx, 31, 0x4A7768u);
    ctx->pc = 0x4A7764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7760u;
    // 0x4a7764: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A7760u, 0x4A7768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7768u;
label_4a7768:
    // 0x4a7768: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_4a776c:
    if (ctx->pc == 0x4A776Cu) {
        ctx->pc = 0x4A776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7768u;
        // 0x4a776c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7770u;
        goto label_4a7770;
    }
    ctx->pc = 0x4A7768u;
    {
        const bool branch_taken_0x4a7768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7768u;
        // 0x4a776c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7768) {
            ctx->pc = 0x4A7AB8u;
            goto label_4a7ab8;
        }
    }
    ctx->pc = 0x4A7770u;
label_4a7770:
    // 0x4a7770: 0x24020804  addiu       $v0, $zero, 0x804
    ctx->pc = 0x4a7770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
label_4a7774:
    // 0x4a7774: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_4a7778:
    if (ctx->pc == 0x4A7778u) {
        ctx->pc = 0x4A7778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7774u;
        // 0x4a7778: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A777Cu;
        goto label_4a777c;
    }
    ctx->pc = 0x4A7774u;
    {
        const bool branch_taken_0x4a7774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a7774) {
            ctx->pc = 0x4A7778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7774u;
            // 0x4a7778: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A778Cu;
            goto label_4a778c;
        }
    }
    ctx->pc = 0x4A777Cu;
label_4a777c:
    // 0x4a777c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x4a777cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4a7780:
    // 0x4a7780: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
label_4a7784:
    if (ctx->pc == 0x4A7784u) {
        ctx->pc = 0x4A7784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7780u;
        // 0x4a7784: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7788u;
        goto label_4a7788;
    }
    ctx->pc = 0x4A7780u;
    {
        const bool branch_taken_0x4a7780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7780) {
            ctx->pc = 0x4A7784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7780u;
            // 0x4a7784: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A781Cu;
            goto label_4a781c;
        }
    }
    ctx->pc = 0x4A7788u;
label_4a7788:
    // 0x4a7788: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x4a7788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4a778c:
    // 0x4a778c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x4a778cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4a7790:
    // 0x4a7790: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4a7794:
    if (ctx->pc == 0x4A7794u) {
        ctx->pc = 0x4A7798u;
        goto label_4a7798;
    }
    ctx->pc = 0x4A7790u;
    {
        const bool branch_taken_0x4a7790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7790) {
            ctx->pc = 0x4A77A0u;
            goto label_4a77a0;
        }
    }
    ctx->pc = 0x4A7798u;
label_4a7798:
    // 0x4a7798: 0x40f809  jalr        $v0
label_4a779c:
    if (ctx->pc == 0x4A779Cu) {
        ctx->pc = 0x4A779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7798u;
        // 0x4a779c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A77A0u;
        goto label_4a77a0;
    }
    ctx->pc = 0x4A7798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A77A0u);
        ctx->pc = 0x4A779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7798u;
        // 0x4a779c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A7798u, 0x4A77A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A77A0u;
label_4a77a0:
    // 0x4a77a0: 0xc129822  jal         func_4A6088
label_4a77a4:
    if (ctx->pc == 0x4A77A4u) {
        ctx->pc = 0x4A77A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A77A0u;
        // 0x4a77a4: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A77A8u;
        goto label_4a77a8;
    }
    ctx->pc = 0x4A77A0u;
    SET_GPR_U32(ctx, 31, 0x4A77A8u);
    ctx->pc = 0x4A77A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A77A0u;
    // 0x4a77a4: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6088u, 0x4A77A0u, 0x4A77A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A77A8u;
label_4a77a8:
    // 0x4a77a8: 0xc129822  jal         func_4A6088
label_4a77ac:
    if (ctx->pc == 0x4A77ACu) {
        ctx->pc = 0x4A77ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A77A8u;
        // 0x4a77ac: 0x2644002c  addiu       $a0, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A77B0u;
        goto label_4a77b0;
    }
    ctx->pc = 0x4A77A8u;
    SET_GPR_U32(ctx, 31, 0x4A77B0u);
    ctx->pc = 0x4A77ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A77A8u;
    // 0x4a77ac: 0x2644002c  addiu       $a0, $s2, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6088u, 0x4A77A8u, 0x4A77B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A77B0u;
label_4a77b0:
    // 0x4a77b0: 0xc1283e8  jal         func_4A0FA0
label_4a77b4:
    if (ctx->pc == 0x4A77B4u) {
        ctx->pc = 0x4A77B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A77B0u;
        // 0x4a77b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A77B8u;
        goto label_4a77b8;
    }
    ctx->pc = 0x4A77B0u;
    SET_GPR_U32(ctx, 31, 0x4A77B8u);
    ctx->pc = 0x4A77B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A77B0u;
    // 0x4a77b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0FA0u, 0x4A77B0u, 0x4A77B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A77B8u;
label_4a77b8:
    // 0x4a77b8: 0xc12a492  jal         func_4A9248
label_4a77bc:
    if (ctx->pc == 0x4A77BCu) {
        ctx->pc = 0x4A77BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A77B8u;
        // 0x4a77bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A77C0u;
        goto label_4a77c0;
    }
    ctx->pc = 0x4A77B8u;
    SET_GPR_U32(ctx, 31, 0x4A77C0u);
    ctx->pc = 0x4A77BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A77B8u;
    // 0x4a77bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x4A77B8u, 0x4A77C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A77C0u;
label_4a77c0:
    // 0x4a77c0: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x4a77c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_4a77c4:
    // 0x4a77c4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4a77c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4a77c8:
    // 0x4a77c8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4a77cc:
    if (ctx->pc == 0x4A77CCu) {
        ctx->pc = 0x4A77CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A77C8u;
        // 0x4a77cc: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A77D0u;
        goto label_4a77d0;
    }
    ctx->pc = 0x4A77C8u;
    {
        const bool branch_taken_0x4a77c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A77CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A77C8u;
        // 0x4a77cc: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a77c8) {
            ctx->pc = 0x4A7804u;
            goto label_4a7804;
        }
    }
    ctx->pc = 0x4A77D0u;
label_4a77d0:
    // 0x4a77d0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x4a77d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4a77d4:
    // 0x4a77d4: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x4a77d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_4a77d8:
    // 0x4a77d8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_4a77dc:
    if (ctx->pc == 0x4A77DCu) {
        ctx->pc = 0x4A77DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A77D8u;
        // 0x4a77dc: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A77E0u;
        goto label_4a77e0;
    }
    ctx->pc = 0x4A77D8u;
    {
        const bool branch_taken_0x4a77d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a77d8) {
            ctx->pc = 0x4A77DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A77D8u;
            // 0x4a77dc: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A77F0u;
            goto label_4a77f0;
        }
    }
    ctx->pc = 0x4A77E0u;
label_4a77e0:
    // 0x4a77e0: 0xc12a9a0  jal         func_4AA680
label_4a77e4:
    if (ctx->pc == 0x4A77E4u) {
        ctx->pc = 0x4A77E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A77E0u;
        // 0x4a77e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A77E8u;
        goto label_4a77e8;
    }
    ctx->pc = 0x4A77E0u;
    SET_GPR_U32(ctx, 31, 0x4A77E8u);
    ctx->pc = 0x4A77E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A77E0u;
    // 0x4a77e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4A77E0u, 0x4A77E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A77E8u;
label_4a77e8:
    // 0x4a77e8: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_4a77ec:
    if (ctx->pc == 0x4A77ECu) {
        ctx->pc = 0x4A77ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A77E8u;
        // 0x4a77ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A77F0u;
        goto label_4a77f0;
    }
    ctx->pc = 0x4A77E8u;
    {
        const bool branch_taken_0x4a77e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A77ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A77E8u;
        // 0x4a77ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a77e8) {
            ctx->pc = 0x4A7AB8u;
            goto label_4a7ab8;
        }
    }
    ctx->pc = 0x4A77F0u;
label_4a77f0:
    // 0x4a77f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a77f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a77f4:
    // 0x4a77f4: 0xc12a9a0  jal         func_4AA680
label_4a77f8:
    if (ctx->pc == 0x4A77F8u) {
        ctx->pc = 0x4A77F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A77F4u;
        // 0x4a77f8: 0x24848880  addiu       $a0, $a0, -0x7780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A77FCu;
        goto label_4a77fc;
    }
    ctx->pc = 0x4A77F4u;
    SET_GPR_U32(ctx, 31, 0x4A77FCu);
    ctx->pc = 0x4A77F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A77F4u;
    // 0x4a77f8: 0x24848880  addiu       $a0, $a0, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4A77F4u, 0x4A77FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A77FCu;
label_4a77fc:
    // 0x4a77fc: 0x100000ae  b           . + 4 + (0xAE << 2)
label_4a7800:
    if (ctx->pc == 0x4A7800u) {
        ctx->pc = 0x4A7800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A77FCu;
        // 0x4a7800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7804u;
        goto label_4a7804;
    }
    ctx->pc = 0x4A77FCu;
    {
        const bool branch_taken_0x4a77fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A77FCu;
        // 0x4a7800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a77fc) {
            ctx->pc = 0x4A7AB8u;
            goto label_4a7ab8;
        }
    }
    ctx->pc = 0x4A7804u;
label_4a7804:
    // 0x4a7804: 0x144000ac  bnez        $v0, . + 4 + (0xAC << 2)
label_4a7808:
    if (ctx->pc == 0x4A7808u) {
        ctx->pc = 0x4A7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7804u;
        // 0x4a7808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A780Cu;
        goto label_4a780c;
    }
    ctx->pc = 0x4A7804u;
    {
        const bool branch_taken_0x4a7804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7804u;
        // 0x4a7808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7804) {
            ctx->pc = 0x4A7AB8u;
            goto label_4a7ab8;
        }
    }
    ctx->pc = 0x4A780Cu;
label_4a780c:
    // 0x4a780c: 0xc127cae  jal         func_49F2B8
label_4a7810:
    if (ctx->pc == 0x4A7810u) {
        ctx->pc = 0x4A7810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A780Cu;
        // 0x4a7810: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7814u;
        goto label_4a7814;
    }
    ctx->pc = 0x4A780Cu;
    SET_GPR_U32(ctx, 31, 0x4A7814u);
    ctx->pc = 0x4A7810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A780Cu;
    // 0x4a7810: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A780Cu, 0x4A7814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7814u;
label_4a7814:
    // 0x4a7814: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_4a7818:
    if (ctx->pc == 0x4A7818u) {
        ctx->pc = 0x4A7818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7814u;
        // 0x4a7818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A781Cu;
        goto label_4a781c;
    }
    ctx->pc = 0x4A7814u;
    {
        const bool branch_taken_0x4a7814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7814u;
        // 0x4a7818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7814) {
            ctx->pc = 0x4A7AB8u;
            goto label_4a7ab8;
        }
    }
    ctx->pc = 0x4A781Cu;
label_4a781c:
    // 0x4a781c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4a781cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7820:
    // 0x4a7820: 0xc12a3ec  jal         func_4A8FB0
label_4a7824:
    if (ctx->pc == 0x4A7824u) {
        ctx->pc = 0x4A7824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7820u;
        // 0x4a7824: 0x8e450030  lw          $a1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7828u;
        goto label_4a7828;
    }
    ctx->pc = 0x4A7820u;
    SET_GPR_U32(ctx, 31, 0x4A7828u);
    ctx->pc = 0x4A7824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7820u;
    // 0x4a7824: 0x8e450030  lw          $a1, 0x30($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A7820u, 0x4A7828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7828u;
label_4a7828:
    // 0x4a7828: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4a7828u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a782c:
    // 0x4a782c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x4a782cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_4a7830:
    // 0x4a7830: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4a7830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_4a7834:
    // 0x4a7834: 0x24512600  addiu       $s1, $v0, 0x2600
    ctx->pc = 0x4a7834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 9728));
label_4a7838:
    // 0x4a7838: 0xc12a3ec  jal         func_4A8FB0
label_4a783c:
    if (ctx->pc == 0x4A783Cu) {
        ctx->pc = 0x4A783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7838u;
        // 0x4a783c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7840u;
        goto label_4a7840;
    }
    ctx->pc = 0x4A7838u;
    SET_GPR_U32(ctx, 31, 0x4A7840u);
    ctx->pc = 0x4A783Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7838u;
    // 0x4a783c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A7838u, 0x4A7840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7840u;
label_4a7840:
    // 0x4a7840: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_4a7844:
    if (ctx->pc == 0x4A7844u) {
        ctx->pc = 0x4A7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7840u;
        // 0x4a7844: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7848u;
        goto label_4a7848;
    }
    ctx->pc = 0x4A7840u;
    {
        const bool branch_taken_0x4a7840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7840u;
        // 0x4a7844: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7840) {
            ctx->pc = 0x4A7888u;
            goto label_4a7888;
        }
    }
    ctx->pc = 0x4A7848u;
label_4a7848:
    // 0x4a7848: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x4a7848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_4a784c:
    // 0x4a784c: 0x24502630  addiu       $s0, $v0, 0x2630
    ctx->pc = 0x4a784cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9776));
label_4a7850:
    // 0x4a7850: 0xc12a3ec  jal         func_4A8FB0
label_4a7854:
    if (ctx->pc == 0x4A7854u) {
        ctx->pc = 0x4A7854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7850u;
        // 0x4a7854: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7858u;
        goto label_4a7858;
    }
    ctx->pc = 0x4A7850u;
    SET_GPR_U32(ctx, 31, 0x4A7858u);
    ctx->pc = 0x4A7854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7850u;
    // 0x4a7854: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A7850u, 0x4A7858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7858u;
label_4a7858:
    // 0x4a7858: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_4a785c:
    if (ctx->pc == 0x4A785Cu) {
        ctx->pc = 0x4A785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7858u;
        // 0x4a785c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7860u;
        goto label_4a7860;
    }
    ctx->pc = 0x4A7858u;
    {
        const bool branch_taken_0x4a7858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7858) {
            ctx->pc = 0x4A785Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7858u;
            // 0x4a785c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A788Cu;
            goto label_4a788c;
        }
    }
    ctx->pc = 0x4A7860u;
label_4a7860:
    // 0x4a7860: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x4a7860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_4a7864:
    // 0x4a7864: 0xc12a3ec  jal         func_4A8FB0
label_4a7868:
    if (ctx->pc == 0x4A7868u) {
        ctx->pc = 0x4A7868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7864u;
        // 0x4a7868: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A786Cu;
        goto label_4a786c;
    }
    ctx->pc = 0x4A7864u;
    SET_GPR_U32(ctx, 31, 0x4A786Cu);
    ctx->pc = 0x4A7868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7864u;
    // 0x4a7868: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A7864u, 0x4A786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A786Cu;
label_4a786c:
    // 0x4a786c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_4a7870:
    if (ctx->pc == 0x4A7870u) {
        ctx->pc = 0x4A7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A786Cu;
        // 0x4a7870: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7874u;
        goto label_4a7874;
    }
    ctx->pc = 0x4A786Cu;
    {
        const bool branch_taken_0x4a786c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a786c) {
            ctx->pc = 0x4A7870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A786Cu;
            // 0x4a7870: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A788Cu;
            goto label_4a788c;
        }
    }
    ctx->pc = 0x4A7874u;
label_4a7874:
    // 0x4a7874: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x4a7874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_4a7878:
    // 0x4a7878: 0xc12a3ec  jal         func_4A8FB0
label_4a787c:
    if (ctx->pc == 0x4A787Cu) {
        ctx->pc = 0x4A787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7878u;
        // 0x4a787c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7880u;
        goto label_4a7880;
    }
    ctx->pc = 0x4A7878u;
    SET_GPR_U32(ctx, 31, 0x4A7880u);
    ctx->pc = 0x4A787Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7878u;
    // 0x4a787c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A7878u, 0x4A7880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7880u;
label_4a7880:
    // 0x4a7880: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a7884:
    if (ctx->pc == 0x4A7884u) {
        ctx->pc = 0x4A7888u;
        goto label_4a7888;
    }
    ctx->pc = 0x4A7880u;
    {
        const bool branch_taken_0x4a7880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7880) {
            ctx->pc = 0x4A788Cu;
            goto label_4a788c;
        }
    }
    ctx->pc = 0x4A7888u;
label_4a7888:
    // 0x4a7888: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x4a7888u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a788c:
    // 0x4a788c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_4a7890:
    if (ctx->pc == 0x4A7890u) {
        ctx->pc = 0x4A7894u;
        goto label_4a7894;
    }
    ctx->pc = 0x4A788Cu;
    {
        const bool branch_taken_0x4a788c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a788c) {
            ctx->pc = 0x4A789Cu;
            goto label_4a789c;
        }
    }
    ctx->pc = 0x4A7894u;
label_4a7894:
    // 0x4a7894: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
label_4a7898:
    if (ctx->pc == 0x4A7898u) {
        ctx->pc = 0x4A7898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7894u;
        // 0x4a7898: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A789Cu;
        goto label_4a789c;
    }
    ctx->pc = 0x4A7894u;
    {
        const bool branch_taken_0x4a7894 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7894u;
        // 0x4a7898: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7894) {
            ctx->pc = 0x4A78A8u;
            goto label_4a78a8;
        }
    }
    ctx->pc = 0x4A789Cu;
label_4a789c:
    // 0x4a789c: 0x16e00009  bnez        $s7, . + 4 + (0x9 << 2)
label_4a78a0:
    if (ctx->pc == 0x4A78A0u) {
        ctx->pc = 0x4A78A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A789Cu;
        // 0x4a78a0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A78A4u;
        goto label_4a78a4;
    }
    ctx->pc = 0x4A789Cu;
    {
        const bool branch_taken_0x4a789c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A78A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A789Cu;
        // 0x4a78a0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a789c) {
            ctx->pc = 0x4A78C4u;
            goto label_4a78c4;
        }
    }
    ctx->pc = 0x4A78A4u;
label_4a78a4:
    // 0x4a78a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a78a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a78a8:
    // 0x4a78a8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4a78a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4a78ac:
    // 0x4a78ac: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a78acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4a78b0:
    // 0x4a78b0: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x4a78b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_4a78b4:
    // 0x4a78b4: 0xc127ccc  jal         func_49F330
label_4a78b8:
    if (ctx->pc == 0x4A78B8u) {
        ctx->pc = 0x4A78B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A78B4u;
        // 0x4a78b8: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A78BCu;
        goto label_4a78bc;
    }
    ctx->pc = 0x4A78B4u;
    SET_GPR_U32(ctx, 31, 0x4A78BCu);
    ctx->pc = 0x4A78B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A78B4u;
    // 0x4a78b8: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F330u, 0x4A78B4u, 0x4A78BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A78BCu;
label_4a78bc:
    // 0x4a78bc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4a78bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a78c0:
    // 0x4a78c0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4a78c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4a78c4:
    // 0x4a78c4: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x4a78c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_4a78c8:
    // 0x4a78c8: 0x10000061  b           . + 4 + (0x61 << 2)
label_4a78cc:
    if (ctx->pc == 0x4A78CCu) {
        ctx->pc = 0x4A78CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A78C8u;
        // 0x4a78cc: 0xafa40050  sw          $a0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A78D0u;
        goto label_4a78d0;
    }
    ctx->pc = 0x4A78C8u;
    {
        const bool branch_taken_0x4a78c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A78CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A78C8u;
        // 0x4a78cc: 0xafa40050  sw          $a0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a78c8) {
            ctx->pc = 0x4A7A50u;
            goto label_4a7a50;
        }
    }
    ctx->pc = 0x4A78D0u;
label_4a78d0:
    // 0x4a78d0: 0x5100000a  beql        $t0, $zero, . + 4 + (0xA << 2)
label_4a78d4:
    if (ctx->pc == 0x4A78D4u) {
        ctx->pc = 0x4A78D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A78D0u;
        // 0x4a78d4: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A78D8u;
        goto label_4a78d8;
    }
    ctx->pc = 0x4A78D0u;
    {
        const bool branch_taken_0x4a78d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a78d0) {
            ctx->pc = 0x4A78D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A78D0u;
            // 0x4a78d4: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A78FCu;
            goto label_4a78fc;
        }
    }
    ctx->pc = 0x4A78D8u;
label_4a78d8:
    // 0x4a78d8: 0x9246001c  lbu         $a2, 0x1C($s2)
    ctx->pc = 0x4a78d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
label_4a78dc:
    // 0x4a78dc: 0x2cc20009  sltiu       $v0, $a2, 0x9
    ctx->pc = 0x4a78dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_4a78e0:
    // 0x4a78e0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_4a78e4:
    if (ctx->pc == 0x4A78E4u) {
        ctx->pc = 0x4A78E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A78E0u;
        // 0x4a78e4: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A78E8u;
        goto label_4a78e8;
    }
    ctx->pc = 0x4A78E0u;
    {
        const bool branch_taken_0x4a78e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a78e0) {
            ctx->pc = 0x4A78E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A78E0u;
            // 0x4a78e4: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A78FCu;
            goto label_4a78fc;
        }
    }
    ctx->pc = 0x4A78E8u;
label_4a78e8:
    // 0x4a78e8: 0x630c2  srl         $a2, $a2, 3
    ctx->pc = 0x4a78e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
label_4a78ec:
    // 0x4a78ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4a78ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4a78f0:
    // 0x4a78f0: 0xc12aca0  jal         func_4AB280
label_4a78f4:
    if (ctx->pc == 0x4A78F4u) {
        ctx->pc = 0x4A78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A78F0u;
        // 0x4a78f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A78F8u;
        goto label_4a78f8;
    }
    ctx->pc = 0x4A78F0u;
    SET_GPR_U32(ctx, 31, 0x4A78F8u);
    ctx->pc = 0x4A78F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A78F0u;
    // 0x4a78f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB280u, 0x4A78F0u, 0x4A78F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A78F8u;
label_4a78f8:
    // 0x4a78f8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x4a78f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4a78fc:
    // 0x4a78fc: 0x2e0a82d  daddu       $s5, $s7, $zero
    ctx->pc = 0x4a78fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4a7900:
    // 0x4a7900: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4a7900u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7904:
    // 0x4a7904: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x4a7904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_4a7908:
    // 0x4a7908: 0x8c5e0014  lw          $fp, 0x14($v0)
    ctx->pc = 0x4a7908u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4a790c:
    // 0x4a790c: 0x13c0002f  beqz        $fp, . + 4 + (0x2F << 2)
label_4a7910:
    if (ctx->pc == 0x4A7910u) {
        ctx->pc = 0x4A7910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A790Cu;
        // 0x4a7910: 0x2651002c  addiu       $s1, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7914u;
        goto label_4a7914;
    }
    ctx->pc = 0x4A790Cu;
    {
        const bool branch_taken_0x4a790c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A790Cu;
        // 0x4a7910: 0x2651002c  addiu       $s1, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a790c) {
            ctx->pc = 0x4A79CCu;
            goto label_4a79cc;
        }
    }
    ctx->pc = 0x4A7914u;
label_4a7914:
    // 0x4a7914: 0xc12976a  jal         func_4A5DA8
label_4a7918:
    if (ctx->pc == 0x4A7918u) {
        ctx->pc = 0x4A7918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7914u;
        // 0x4a7918: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A791Cu;
        goto label_4a791c;
    }
    ctx->pc = 0x4A7914u;
    SET_GPR_U32(ctx, 31, 0x4A791Cu);
    ctx->pc = 0x4A7918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7914u;
    // 0x4a7918: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5DA8u, 0x4A7914u, 0x4A791Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A791Cu;
label_4a791c:
    // 0x4a791c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_4a7920:
    if (ctx->pc == 0x4A7920u) {
        ctx->pc = 0x4A7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A791Cu;
        // 0x4a7920: 0x8fb6004c  lw          $s6, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7924u;
        goto label_4a7924;
    }
    ctx->pc = 0x4A791Cu;
    {
        const bool branch_taken_0x4a791c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A791Cu;
        // 0x4a7920: 0x8fb6004c  lw          $s6, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a791c) {
            ctx->pc = 0x4A79D4u;
            goto label_4a79d4;
        }
    }
    ctx->pc = 0x4A7924u;
label_4a7924:
    // 0x4a7924: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x4a7924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_4a7928:
    // 0x4a7928: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4a7928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4a792c:
    // 0x4a792c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4a792cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a7930:
    // 0x4a7930: 0x6a490017  ldl         $t1, 0x17($s2)
    ctx->pc = 0x4a7930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_4a7934:
    // 0x4a7934: 0x6e490010  ldr         $t1, 0x10($s2)
    ctx->pc = 0x4a7934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4a7938:
    // 0x4a7938: 0x6a42001f  ldl         $v0, 0x1F($s2)
    ctx->pc = 0x4a7938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4a793c:
    // 0x4a793c: 0x6e420018  ldr         $v0, 0x18($s2)
    ctx->pc = 0x4a793cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4a7940:
    // 0x4a7940: 0x6a430027  ldl         $v1, 0x27($s2)
    ctx->pc = 0x4a7940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4a7944:
    // 0x4a7944: 0x6e430020  ldr         $v1, 0x20($s2)
    ctx->pc = 0x4a7944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4a7948:
    // 0x4a7948: 0x8e480028  lw          $t0, 0x28($s2)
    ctx->pc = 0x4a7948u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_4a794c:
    // 0x4a794c: 0xb3a90027  sdl         $t1, 0x27($sp)
    ctx->pc = 0x4a794cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a7950:
    // 0x4a7950: 0xb7a90020  sdr         $t1, 0x20($sp)
    ctx->pc = 0x4a7950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a7954:
    // 0x4a7954: 0xb3a2002f  sdl         $v0, 0x2F($sp)
    ctx->pc = 0x4a7954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a7958:
    // 0x4a7958: 0xb7a20028  sdr         $v0, 0x28($sp)
    ctx->pc = 0x4a7958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a795c:
    // 0x4a795c: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x4a795cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a7960:
    // 0x4a7960: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x4a7960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a7964:
    // 0x4a7964: 0xafa80038  sw          $t0, 0x38($sp)
    ctx->pc = 0x4a7964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 8));
label_4a7968:
    // 0x4a7968: 0xc12930e  jal         func_4A4C38
label_4a796c:
    if (ctx->pc == 0x4A796Cu) {
        ctx->pc = 0x4A796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7968u;
        // 0x4a796c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7970u;
        goto label_4a7970;
    }
    ctx->pc = 0x4A7968u;
    SET_GPR_U32(ctx, 31, 0x4A7970u);
    ctx->pc = 0x4A796Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7968u;
    // 0x4a796c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4C38u, 0x4A7968u, 0x4A7970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7970u;
label_4a7970:
    // 0x4a7970: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4a7970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4a7974:
    // 0x4a7974: 0xafb30028  sw          $s3, 0x28($sp)
    ctx->pc = 0x4a7974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 19));
label_4a7978:
    // 0x4a7978: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4a7978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4a797c:
    // 0x4a797c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4a797cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a7980:
    // 0x4a7980: 0xc12931a  jal         func_4A4C68
label_4a7984:
    if (ctx->pc == 0x4A7984u) {
        ctx->pc = 0x4A7984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7980u;
        // 0x4a7984: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7988u;
        goto label_4a7988;
    }
    ctx->pc = 0x4A7980u;
    SET_GPR_U32(ctx, 31, 0x4A7988u);
    ctx->pc = 0x4A7984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7980u;
    // 0x4a7984: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4C68u, 0x4A7980u, 0x4A7988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7988u;
label_4a7988:
    // 0x4a7988: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a7988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a798c:
    // 0x4a798c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a798cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4a7990:
    // 0x4a7990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a7990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a7994:
    // 0x4a7994: 0xc127ccc  jal         func_49F330
label_4a7998:
    if (ctx->pc == 0x4A7998u) {
        ctx->pc = 0x4A7998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7994u;
        // 0x4a7998: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A799Cu;
        goto label_4a799c;
    }
    ctx->pc = 0x4A7994u;
    SET_GPR_U32(ctx, 31, 0x4A799Cu);
    ctx->pc = 0x4A7998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7994u;
    // 0x4a7998: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F330u, 0x4A7994u, 0x4A799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A799Cu;
label_4a799c:
    // 0x4a799c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4a799cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a79a0:
    // 0x4a79a0: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_4a79a4:
    if (ctx->pc == 0x4A79A4u) {
        ctx->pc = 0x4A79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A79A0u;
        // 0x4a79a4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A79A8u;
        goto label_4a79a8;
    }
    ctx->pc = 0x4A79A0u;
    {
        const bool branch_taken_0x4a79a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A79A0u;
        // 0x4a79a4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a79a0) {
            ctx->pc = 0x4A79CCu;
            goto label_4a79cc;
        }
    }
    ctx->pc = 0x4A79A8u;
label_4a79a8:
    // 0x4a79a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4a79a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4a79ac:
    // 0x4a79ac: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4a79acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4a79b0:
    // 0x4a79b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a79b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a79b4:
    // 0x4a79b4: 0xc128660  jal         func_4A1980
label_4a79b8:
    if (ctx->pc == 0x4A79B8u) {
        ctx->pc = 0x4A79B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A79B4u;
        // 0x4a79b8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A79BCu;
        goto label_4a79bc;
    }
    ctx->pc = 0x4A79B4u;
    SET_GPR_U32(ctx, 31, 0x4A79BCu);
    ctx->pc = 0x4A79B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A79B4u;
    // 0x4a79b8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1980u, 0x4A79B4u, 0x4A79BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A79BCu;
label_4a79bc:
    // 0x4a79bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_4a79c0:
    if (ctx->pc == 0x4A79C0u) {
        ctx->pc = 0x4A79C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A79BCu;
        // 0x4a79c0: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A79C4u;
        goto label_4a79c4;
    }
    ctx->pc = 0x4A79BCu;
    {
        const bool branch_taken_0x4a79bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A79C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A79BCu;
        // 0x4a79c0: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a79bc) {
            ctx->pc = 0x4A79D8u;
            goto label_4a79d8;
        }
    }
    ctx->pc = 0x4A79C4u;
label_4a79c4:
    // 0x4a79c4: 0xc127cdc  jal         func_49F370
label_4a79c8:
    if (ctx->pc == 0x4A79C8u) {
        ctx->pc = 0x4A79C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A79C4u;
        // 0x4a79c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A79CCu;
        goto label_4a79cc;
    }
    ctx->pc = 0x4A79C4u;
    SET_GPR_U32(ctx, 31, 0x4A79CCu);
    ctx->pc = 0x4A79C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A79C4u;
    // 0x4a79c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F370u, 0x4A79C4u, 0x4A79CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A79CCu;
label_4a79cc:
    // 0x4a79cc: 0x10000011  b           . + 4 + (0x11 << 2)
label_4a79d0:
    if (ctx->pc == 0x4A79D0u) {
        ctx->pc = 0x4A79D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A79CCu;
        // 0x4a79d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A79D4u;
        goto label_4a79d4;
    }
    ctx->pc = 0x4A79CCu;
    {
        const bool branch_taken_0x4a79cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A79D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A79CCu;
        // 0x4a79d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a79cc) {
            ctx->pc = 0x4A7A14u;
            goto label_4a7a14;
        }
    }
    ctx->pc = 0x4A79D4u;
label_4a79d4:
    // 0x4a79d4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x4a79d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a79d8:
    // 0x4a79d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4a79d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a79dc:
    // 0x4a79dc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4a79dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4a79e0:
    // 0x4a79e0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4a79e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a79e4:
    // 0x4a79e4: 0x3c0f809  jalr        $fp
label_4a79e8:
    if (ctx->pc == 0x4A79E8u) {
        ctx->pc = 0x4A79E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A79E4u;
        // 0x4a79e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A79ECu;
        goto label_4a79ec;
    }
    ctx->pc = 0x4A79E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x4A79ECu);
        ctx->pc = 0x4A79E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A79E4u;
        // 0x4a79e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A79E4u, 0x4A79ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A79ECu;
label_4a79ec:
    // 0x4a79ec: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_4a79f0:
    if (ctx->pc == 0x4A79F0u) {
        ctx->pc = 0x4A79F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A79ECu;
        // 0x4a79f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A79F4u;
        goto label_4a79f4;
    }
    ctx->pc = 0x4A79ECu;
    {
        const bool branch_taken_0x4a79ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A79F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A79ECu;
        // 0x4a79f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a79ec) {
            ctx->pc = 0x4A7A10u;
            goto label_4a7a10;
        }
    }
    ctx->pc = 0x4A79F4u;
label_4a79f4:
    // 0x4a79f4: 0x0  nop
    ctx->pc = 0x4a79f4u;
    // NOP
label_4a79f8:
    // 0x4a79f8: 0xc12a1ce  jal         func_4A8738
label_4a79fc:
    if (ctx->pc == 0x4A79FCu) {
        ctx->pc = 0x4A79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A79F8u;
        // 0x4a79fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7A00u;
        goto label_4a7a00;
    }
    ctx->pc = 0x4A79F8u;
    SET_GPR_U32(ctx, 31, 0x4A7A00u);
    ctx->pc = 0x4A79FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A79F8u;
    // 0x4a79fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8738u, 0x4A79F8u, 0x4A7A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7A00u;
label_4a7a00:
    // 0x4a7a00: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
label_4a7a04:
    if (ctx->pc == 0x4A7A04u) {
        ctx->pc = 0x4A7A08u;
        goto label_4a7a08;
    }
    ctx->pc = 0x4A7A00u;
    {
        const bool branch_taken_0x4a7a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7a00) {
            ctx->pc = 0x4A79F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a79f8;
        }
    }
    ctx->pc = 0x4A7A08u;
label_4a7a08:
    // 0x4a7a08: 0xc127cdc  jal         func_49F370
label_4a7a0c:
    if (ctx->pc == 0x4A7A0Cu) {
        ctx->pc = 0x4A7A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7A08u;
        // 0x4a7a0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7A10u;
        goto label_4a7a10;
    }
    ctx->pc = 0x4A7A08u;
    SET_GPR_U32(ctx, 31, 0x4A7A10u);
    ctx->pc = 0x4A7A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7A08u;
    // 0x4a7a0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F370u, 0x4A7A08u, 0x4A7A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7A10u;
label_4a7a10:
    // 0x4a7a10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a7a10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a7a14:
    // 0x4a7a14: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_4a7a18:
    if (ctx->pc == 0x4A7A18u) {
        ctx->pc = 0x4A7A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7A14u;
        // 0x4a7a18: 0x8fa9004c  lw          $t1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7A1Cu;
        goto label_4a7a1c;
    }
    ctx->pc = 0x4A7A14u;
    {
        const bool branch_taken_0x4a7a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7A14u;
        // 0x4a7a18: 0x8fa9004c  lw          $t1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7a14) {
            ctx->pc = 0x4A7AA0u;
            goto label_4a7aa0;
        }
    }
    ctx->pc = 0x4A7A1Cu;
label_4a7a1c:
    // 0x4a7a1c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x4a7a1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a7a20:
    // 0x4a7a20: 0x1338021  addu        $s0, $t1, $s3
    ctx->pc = 0x4a7a20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
label_4a7a24:
    // 0x4a7a24: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x4a7a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4a7a28:
    // 0x4a7a28: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x4a7a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_4a7a2c:
    // 0x4a7a2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4a7a30:
    if (ctx->pc == 0x4A7A30u) {
        ctx->pc = 0x4A7A34u;
        goto label_4a7a34;
    }
    ctx->pc = 0x4A7A2Cu;
    {
        const bool branch_taken_0x4a7a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7a2c) {
            ctx->pc = 0x4A7A3Cu;
            goto label_4a7a3c;
        }
    }
    ctx->pc = 0x4A7A34u;
label_4a7a34:
    // 0x4a7a34: 0x10000003  b           . + 4 + (0x3 << 2)
label_4a7a38:
    if (ctx->pc == 0x4A7A38u) {
        ctx->pc = 0x4A7A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7A34u;
        // 0x4a7a38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7A3Cu;
        goto label_4a7a3c;
    }
    ctx->pc = 0x4A7A34u;
    {
        const bool branch_taken_0x4a7a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7A34u;
        // 0x4a7a38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7a34) {
            ctx->pc = 0x4A7A44u;
            goto label_4a7a44;
        }
    }
    ctx->pc = 0x4A7A3Cu;
label_4a7a3c:
    // 0x4a7a3c: 0x40f809  jalr        $v0
label_4a7a40:
    if (ctx->pc == 0x4A7A40u) {
        ctx->pc = 0x4A7A44u;
        goto label_4a7a44;
    }
    ctx->pc = 0x4A7A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A7A44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A7A3Cu, 0x4A7A44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A7A44u;
label_4a7a44:
    // 0x4a7a44: 0x5051fff8  beql        $v0, $s1, . + 4 + (-0x8 << 2)
label_4a7a48:
    if (ctx->pc == 0x4A7A48u) {
        ctx->pc = 0x4A7A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7A44u;
        // 0x4a7a48: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7A4Cu;
        goto label_4a7a4c;
    }
    ctx->pc = 0x4A7A44u;
    {
        const bool branch_taken_0x4a7a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x4a7a44) {
            ctx->pc = 0x4A7A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7A44u;
            // 0x4a7a48: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7a28;
        }
    }
    ctx->pc = 0x4A7A4Cu;
label_4a7a4c:
    // 0x4a7a4c: 0xafb0004c  sw          $s0, 0x4C($sp)
    ctx->pc = 0x4a7a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 16));
label_4a7a50:
    // 0x4a7a50: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x4a7a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_4a7a54:
    // 0x4a7a54: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x4a7a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_4a7a58:
    // 0x4a7a58: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x4a7a58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4a7a5c:
    // 0x4a7a5c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_4a7a60:
    if (ctx->pc == 0x4A7A60u) {
        ctx->pc = 0x4A7A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7A5Cu;
        // 0x4a7a60: 0x8fa80044  lw          $t0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7A64u;
        goto label_4a7a64;
    }
    ctx->pc = 0x4A7A5Cu;
    {
        const bool branch_taken_0x4a7a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7A5Cu;
        // 0x4a7a60: 0x8fa80044  lw          $t0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7a5c) {
            ctx->pc = 0x4A7AA0u;
            goto label_4a7aa0;
        }
    }
    ctx->pc = 0x4A7A64u;
label_4a7a64:
    // 0x4a7a64: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
label_4a7a68:
    if (ctx->pc == 0x4A7A68u) {
        ctx->pc = 0x4A7A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7A64u;
        // 0x4a7a68: 0x8fb30004  lw          $s3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7A6Cu;
        goto label_4a7a6c;
    }
    ctx->pc = 0x4A7A64u;
    {
        const bool branch_taken_0x4a7a64 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7A64u;
        // 0x4a7a68: 0x8fb30004  lw          $s3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7a64) {
            ctx->pc = 0x4A7A88u;
            goto label_4a7a88;
        }
    }
    ctx->pc = 0x4A7A6Cu;
label_4a7a6c:
    // 0x4a7a6c: 0x8fa90050  lw          $t1, 0x50($sp)
    ctx->pc = 0x4a7a6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_4a7a70:
    // 0x4a7a70: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x4a7a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_4a7a74:
    // 0x4a7a74: 0x8f93b834  lw          $s3, -0x47CC($gp)
    ctx->pc = 0x4a7a74u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948916)));
label_4a7a78:
    // 0x4a7a78: 0x1221823  subu        $v1, $t1, $v0
    ctx->pc = 0x4a7a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_4a7a7c:
    // 0x4a7a7c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4a7a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_4a7a80:
    // 0x4a7a80: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x4a7a80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a7a84:
    // 0x4a7a84: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x4a7a84u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_4a7a88:
    // 0x4a7a88: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x4a7a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4a7a8c:
    // 0x4a7a8c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4a7a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4a7a90:
    // 0x4a7a90: 0xc10480a  jal         func_412028
label_4a7a94:
    if (ctx->pc == 0x4A7A94u) {
        ctx->pc = 0x4A7A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7A90u;
        // 0x4a7a94: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7A98u;
        goto label_4a7a98;
    }
    ctx->pc = 0x4A7A90u;
    SET_GPR_U32(ctx, 31, 0x4A7A98u);
    ctx->pc = 0x4A7A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7A90u;
    // 0x4a7a94: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x4A7A90u, 0x4A7A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7A98u;
label_4a7a98:
    // 0x4a7a98: 0x1262ff8d  beq         $s3, $v0, . + 4 + (-0x73 << 2)
label_4a7a9c:
    if (ctx->pc == 0x4A7A9Cu) {
        ctx->pc = 0x4A7A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7A98u;
        // 0x4a7a9c: 0x8fa80048  lw          $t0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7AA0u;
        goto label_4a7aa0;
    }
    ctx->pc = 0x4A7A98u;
    {
        const bool branch_taken_0x4a7a98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A7A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7A98u;
        // 0x4a7a9c: 0x8fa80048  lw          $t0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7a98) {
            ctx->pc = 0x4A78D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a78d0;
        }
    }
    ctx->pc = 0x4A7AA0u;
label_4a7aa0:
    // 0x4a7aa0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x4a7aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_4a7aa4:
    // 0x4a7aa4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_4a7aa8:
    if (ctx->pc == 0x4A7AA8u) {
        ctx->pc = 0x4A7AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7AA4u;
        // 0x4a7aa8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7AACu;
        goto label_4a7aac;
    }
    ctx->pc = 0x4A7AA4u;
    {
        const bool branch_taken_0x4a7aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7AA4u;
        // 0x4a7aa8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7aa4) {
            ctx->pc = 0x4A7AB8u;
            goto label_4a7ab8;
        }
    }
    ctx->pc = 0x4A7AACu;
label_4a7aac:
    // 0x4a7aac: 0xc127cdc  jal         func_49F370
label_4a7ab0:
    if (ctx->pc == 0x4A7AB0u) {
        ctx->pc = 0x4A7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7AACu;
        // 0x4a7ab0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7AB4u;
        goto label_4a7ab4;
    }
    ctx->pc = 0x4A7AACu;
    SET_GPR_U32(ctx, 31, 0x4A7AB4u);
    ctx->pc = 0x4A7AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7AACu;
    // 0x4a7ab0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F370u, 0x4A7AACu, 0x4A7AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7AB4u;
label_4a7ab4:
    // 0x4a7ab4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4a7ab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a7ab8:
    // 0x4a7ab8: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x4a7ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_4a7abc:
    // 0x4a7abc: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x4a7abcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_4a7ac0:
    // 0x4a7ac0: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x4a7ac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4a7ac4:
    // 0x4a7ac4: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x4a7ac4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4a7ac8:
    // 0x4a7ac8: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x4a7ac8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4a7acc:
    // 0x4a7acc: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x4a7accu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4a7ad0:
    // 0x4a7ad0: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x4a7ad0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4a7ad4:
    // 0x4a7ad4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4a7ad4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4a7ad8:
    // 0x4a7ad8: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x4a7ad8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a7adc:
    // 0x4a7adc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4a7adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4a7ae0:
    // 0x4a7ae0: 0x3e00008  jr          $ra
label_4a7ae4:
    if (ctx->pc == 0x4A7AE4u) {
        ctx->pc = 0x4A7AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7AE0u;
        // 0x4a7ae4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7AE8u;
        goto label_fallthrough_0x4a7ae0;
    }
    ctx->pc = 0x4A7AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A7AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7AE0u;
        // 0x4a7ae4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A7AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a7ae0:
    ctx->pc = 0x4A7AE8u;
}
