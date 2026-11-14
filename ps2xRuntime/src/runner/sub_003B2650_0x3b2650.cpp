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

// Function: sub_003B2650
// Address: 0x3b2650 - 0x3b2c10
void sub_003B2650_0x3b2650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2650_0x3b2650");
#endif

    switch (ctx->pc) {
        case 0x3b2650u: goto label_3b2650;
        case 0x3b2654u: goto label_3b2654;
        case 0x3b2658u: goto label_3b2658;
        case 0x3b265cu: goto label_3b265c;
        case 0x3b2660u: goto label_3b2660;
        case 0x3b2664u: goto label_3b2664;
        case 0x3b2668u: goto label_3b2668;
        case 0x3b266cu: goto label_3b266c;
        case 0x3b2670u: goto label_3b2670;
        case 0x3b2674u: goto label_3b2674;
        case 0x3b2678u: goto label_3b2678;
        case 0x3b267cu: goto label_3b267c;
        case 0x3b2680u: goto label_3b2680;
        case 0x3b2684u: goto label_3b2684;
        case 0x3b2688u: goto label_3b2688;
        case 0x3b268cu: goto label_3b268c;
        case 0x3b2690u: goto label_3b2690;
        case 0x3b2694u: goto label_3b2694;
        case 0x3b2698u: goto label_3b2698;
        case 0x3b269cu: goto label_3b269c;
        case 0x3b26a0u: goto label_3b26a0;
        case 0x3b26a4u: goto label_3b26a4;
        case 0x3b26a8u: goto label_3b26a8;
        case 0x3b26acu: goto label_3b26ac;
        case 0x3b26b0u: goto label_3b26b0;
        case 0x3b26b4u: goto label_3b26b4;
        case 0x3b26b8u: goto label_3b26b8;
        case 0x3b26bcu: goto label_3b26bc;
        case 0x3b26c0u: goto label_3b26c0;
        case 0x3b26c4u: goto label_3b26c4;
        case 0x3b26c8u: goto label_3b26c8;
        case 0x3b26ccu: goto label_3b26cc;
        case 0x3b26d0u: goto label_3b26d0;
        case 0x3b26d4u: goto label_3b26d4;
        case 0x3b26d8u: goto label_3b26d8;
        case 0x3b26dcu: goto label_3b26dc;
        case 0x3b26e0u: goto label_3b26e0;
        case 0x3b26e4u: goto label_3b26e4;
        case 0x3b26e8u: goto label_3b26e8;
        case 0x3b26ecu: goto label_3b26ec;
        case 0x3b26f0u: goto label_3b26f0;
        case 0x3b26f4u: goto label_3b26f4;
        case 0x3b26f8u: goto label_3b26f8;
        case 0x3b26fcu: goto label_3b26fc;
        case 0x3b2700u: goto label_3b2700;
        case 0x3b2704u: goto label_3b2704;
        case 0x3b2708u: goto label_3b2708;
        case 0x3b270cu: goto label_3b270c;
        case 0x3b2710u: goto label_3b2710;
        case 0x3b2714u: goto label_3b2714;
        case 0x3b2718u: goto label_3b2718;
        case 0x3b271cu: goto label_3b271c;
        case 0x3b2720u: goto label_3b2720;
        case 0x3b2724u: goto label_3b2724;
        case 0x3b2728u: goto label_3b2728;
        case 0x3b272cu: goto label_3b272c;
        case 0x3b2730u: goto label_3b2730;
        case 0x3b2734u: goto label_3b2734;
        case 0x3b2738u: goto label_3b2738;
        case 0x3b273cu: goto label_3b273c;
        case 0x3b2740u: goto label_3b2740;
        case 0x3b2744u: goto label_3b2744;
        case 0x3b2748u: goto label_3b2748;
        case 0x3b274cu: goto label_3b274c;
        case 0x3b2750u: goto label_3b2750;
        case 0x3b2754u: goto label_3b2754;
        case 0x3b2758u: goto label_3b2758;
        case 0x3b275cu: goto label_3b275c;
        case 0x3b2760u: goto label_3b2760;
        case 0x3b2764u: goto label_3b2764;
        case 0x3b2768u: goto label_3b2768;
        case 0x3b276cu: goto label_3b276c;
        case 0x3b2770u: goto label_3b2770;
        case 0x3b2774u: goto label_3b2774;
        case 0x3b2778u: goto label_3b2778;
        case 0x3b277cu: goto label_3b277c;
        case 0x3b2780u: goto label_3b2780;
        case 0x3b2784u: goto label_3b2784;
        case 0x3b2788u: goto label_3b2788;
        case 0x3b278cu: goto label_3b278c;
        case 0x3b2790u: goto label_3b2790;
        case 0x3b2794u: goto label_3b2794;
        case 0x3b2798u: goto label_3b2798;
        case 0x3b279cu: goto label_3b279c;
        case 0x3b27a0u: goto label_3b27a0;
        case 0x3b27a4u: goto label_3b27a4;
        case 0x3b27a8u: goto label_3b27a8;
        case 0x3b27acu: goto label_3b27ac;
        case 0x3b27b0u: goto label_3b27b0;
        case 0x3b27b4u: goto label_3b27b4;
        case 0x3b27b8u: goto label_3b27b8;
        case 0x3b27bcu: goto label_3b27bc;
        case 0x3b27c0u: goto label_3b27c0;
        case 0x3b27c4u: goto label_3b27c4;
        case 0x3b27c8u: goto label_3b27c8;
        case 0x3b27ccu: goto label_3b27cc;
        case 0x3b27d0u: goto label_3b27d0;
        case 0x3b27d4u: goto label_3b27d4;
        case 0x3b27d8u: goto label_3b27d8;
        case 0x3b27dcu: goto label_3b27dc;
        case 0x3b27e0u: goto label_3b27e0;
        case 0x3b27e4u: goto label_3b27e4;
        case 0x3b27e8u: goto label_3b27e8;
        case 0x3b27ecu: goto label_3b27ec;
        case 0x3b27f0u: goto label_3b27f0;
        case 0x3b27f4u: goto label_3b27f4;
        case 0x3b27f8u: goto label_3b27f8;
        case 0x3b27fcu: goto label_3b27fc;
        case 0x3b2800u: goto label_3b2800;
        case 0x3b2804u: goto label_3b2804;
        case 0x3b2808u: goto label_3b2808;
        case 0x3b280cu: goto label_3b280c;
        case 0x3b2810u: goto label_3b2810;
        case 0x3b2814u: goto label_3b2814;
        case 0x3b2818u: goto label_3b2818;
        case 0x3b281cu: goto label_3b281c;
        case 0x3b2820u: goto label_3b2820;
        case 0x3b2824u: goto label_3b2824;
        case 0x3b2828u: goto label_3b2828;
        case 0x3b282cu: goto label_3b282c;
        case 0x3b2830u: goto label_3b2830;
        case 0x3b2834u: goto label_3b2834;
        case 0x3b2838u: goto label_3b2838;
        case 0x3b283cu: goto label_3b283c;
        case 0x3b2840u: goto label_3b2840;
        case 0x3b2844u: goto label_3b2844;
        case 0x3b2848u: goto label_3b2848;
        case 0x3b284cu: goto label_3b284c;
        case 0x3b2850u: goto label_3b2850;
        case 0x3b2854u: goto label_3b2854;
        case 0x3b2858u: goto label_3b2858;
        case 0x3b285cu: goto label_3b285c;
        case 0x3b2860u: goto label_3b2860;
        case 0x3b2864u: goto label_3b2864;
        case 0x3b2868u: goto label_3b2868;
        case 0x3b286cu: goto label_3b286c;
        case 0x3b2870u: goto label_3b2870;
        case 0x3b2874u: goto label_3b2874;
        case 0x3b2878u: goto label_3b2878;
        case 0x3b287cu: goto label_3b287c;
        case 0x3b2880u: goto label_3b2880;
        case 0x3b2884u: goto label_3b2884;
        case 0x3b2888u: goto label_3b2888;
        case 0x3b288cu: goto label_3b288c;
        case 0x3b2890u: goto label_3b2890;
        case 0x3b2894u: goto label_3b2894;
        case 0x3b2898u: goto label_3b2898;
        case 0x3b289cu: goto label_3b289c;
        case 0x3b28a0u: goto label_3b28a0;
        case 0x3b28a4u: goto label_3b28a4;
        case 0x3b28a8u: goto label_3b28a8;
        case 0x3b28acu: goto label_3b28ac;
        case 0x3b28b0u: goto label_3b28b0;
        case 0x3b28b4u: goto label_3b28b4;
        case 0x3b28b8u: goto label_3b28b8;
        case 0x3b28bcu: goto label_3b28bc;
        case 0x3b28c0u: goto label_3b28c0;
        case 0x3b28c4u: goto label_3b28c4;
        case 0x3b28c8u: goto label_3b28c8;
        case 0x3b28ccu: goto label_3b28cc;
        case 0x3b28d0u: goto label_3b28d0;
        case 0x3b28d4u: goto label_3b28d4;
        case 0x3b28d8u: goto label_3b28d8;
        case 0x3b28dcu: goto label_3b28dc;
        case 0x3b28e0u: goto label_3b28e0;
        case 0x3b28e4u: goto label_3b28e4;
        case 0x3b28e8u: goto label_3b28e8;
        case 0x3b28ecu: goto label_3b28ec;
        case 0x3b28f0u: goto label_3b28f0;
        case 0x3b28f4u: goto label_3b28f4;
        case 0x3b28f8u: goto label_3b28f8;
        case 0x3b28fcu: goto label_3b28fc;
        case 0x3b2900u: goto label_3b2900;
        case 0x3b2904u: goto label_3b2904;
        case 0x3b2908u: goto label_3b2908;
        case 0x3b290cu: goto label_3b290c;
        case 0x3b2910u: goto label_3b2910;
        case 0x3b2914u: goto label_3b2914;
        case 0x3b2918u: goto label_3b2918;
        case 0x3b291cu: goto label_3b291c;
        case 0x3b2920u: goto label_3b2920;
        case 0x3b2924u: goto label_3b2924;
        case 0x3b2928u: goto label_3b2928;
        case 0x3b292cu: goto label_3b292c;
        case 0x3b2930u: goto label_3b2930;
        case 0x3b2934u: goto label_3b2934;
        case 0x3b2938u: goto label_3b2938;
        case 0x3b293cu: goto label_3b293c;
        case 0x3b2940u: goto label_3b2940;
        case 0x3b2944u: goto label_3b2944;
        case 0x3b2948u: goto label_3b2948;
        case 0x3b294cu: goto label_3b294c;
        case 0x3b2950u: goto label_3b2950;
        case 0x3b2954u: goto label_3b2954;
        case 0x3b2958u: goto label_3b2958;
        case 0x3b295cu: goto label_3b295c;
        case 0x3b2960u: goto label_3b2960;
        case 0x3b2964u: goto label_3b2964;
        case 0x3b2968u: goto label_3b2968;
        case 0x3b296cu: goto label_3b296c;
        case 0x3b2970u: goto label_3b2970;
        case 0x3b2974u: goto label_3b2974;
        case 0x3b2978u: goto label_3b2978;
        case 0x3b297cu: goto label_3b297c;
        case 0x3b2980u: goto label_3b2980;
        case 0x3b2984u: goto label_3b2984;
        case 0x3b2988u: goto label_3b2988;
        case 0x3b298cu: goto label_3b298c;
        case 0x3b2990u: goto label_3b2990;
        case 0x3b2994u: goto label_3b2994;
        case 0x3b2998u: goto label_3b2998;
        case 0x3b299cu: goto label_3b299c;
        case 0x3b29a0u: goto label_3b29a0;
        case 0x3b29a4u: goto label_3b29a4;
        case 0x3b29a8u: goto label_3b29a8;
        case 0x3b29acu: goto label_3b29ac;
        case 0x3b29b0u: goto label_3b29b0;
        case 0x3b29b4u: goto label_3b29b4;
        case 0x3b29b8u: goto label_3b29b8;
        case 0x3b29bcu: goto label_3b29bc;
        case 0x3b29c0u: goto label_3b29c0;
        case 0x3b29c4u: goto label_3b29c4;
        case 0x3b29c8u: goto label_3b29c8;
        case 0x3b29ccu: goto label_3b29cc;
        case 0x3b29d0u: goto label_3b29d0;
        case 0x3b29d4u: goto label_3b29d4;
        case 0x3b29d8u: goto label_3b29d8;
        case 0x3b29dcu: goto label_3b29dc;
        case 0x3b29e0u: goto label_3b29e0;
        case 0x3b29e4u: goto label_3b29e4;
        case 0x3b29e8u: goto label_3b29e8;
        case 0x3b29ecu: goto label_3b29ec;
        case 0x3b29f0u: goto label_3b29f0;
        case 0x3b29f4u: goto label_3b29f4;
        case 0x3b29f8u: goto label_3b29f8;
        case 0x3b29fcu: goto label_3b29fc;
        case 0x3b2a00u: goto label_3b2a00;
        case 0x3b2a04u: goto label_3b2a04;
        case 0x3b2a08u: goto label_3b2a08;
        case 0x3b2a0cu: goto label_3b2a0c;
        case 0x3b2a10u: goto label_3b2a10;
        case 0x3b2a14u: goto label_3b2a14;
        case 0x3b2a18u: goto label_3b2a18;
        case 0x3b2a1cu: goto label_3b2a1c;
        case 0x3b2a20u: goto label_3b2a20;
        case 0x3b2a24u: goto label_3b2a24;
        case 0x3b2a28u: goto label_3b2a28;
        case 0x3b2a2cu: goto label_3b2a2c;
        case 0x3b2a30u: goto label_3b2a30;
        case 0x3b2a34u: goto label_3b2a34;
        case 0x3b2a38u: goto label_3b2a38;
        case 0x3b2a3cu: goto label_3b2a3c;
        case 0x3b2a40u: goto label_3b2a40;
        case 0x3b2a44u: goto label_3b2a44;
        case 0x3b2a48u: goto label_3b2a48;
        case 0x3b2a4cu: goto label_3b2a4c;
        case 0x3b2a50u: goto label_3b2a50;
        case 0x3b2a54u: goto label_3b2a54;
        case 0x3b2a58u: goto label_3b2a58;
        case 0x3b2a5cu: goto label_3b2a5c;
        case 0x3b2a60u: goto label_3b2a60;
        case 0x3b2a64u: goto label_3b2a64;
        case 0x3b2a68u: goto label_3b2a68;
        case 0x3b2a6cu: goto label_3b2a6c;
        case 0x3b2a70u: goto label_3b2a70;
        case 0x3b2a74u: goto label_3b2a74;
        case 0x3b2a78u: goto label_3b2a78;
        case 0x3b2a7cu: goto label_3b2a7c;
        case 0x3b2a80u: goto label_3b2a80;
        case 0x3b2a84u: goto label_3b2a84;
        case 0x3b2a88u: goto label_3b2a88;
        case 0x3b2a8cu: goto label_3b2a8c;
        case 0x3b2a90u: goto label_3b2a90;
        case 0x3b2a94u: goto label_3b2a94;
        case 0x3b2a98u: goto label_3b2a98;
        case 0x3b2a9cu: goto label_3b2a9c;
        case 0x3b2aa0u: goto label_3b2aa0;
        case 0x3b2aa4u: goto label_3b2aa4;
        case 0x3b2aa8u: goto label_3b2aa8;
        case 0x3b2aacu: goto label_3b2aac;
        case 0x3b2ab0u: goto label_3b2ab0;
        case 0x3b2ab4u: goto label_3b2ab4;
        case 0x3b2ab8u: goto label_3b2ab8;
        case 0x3b2abcu: goto label_3b2abc;
        case 0x3b2ac0u: goto label_3b2ac0;
        case 0x3b2ac4u: goto label_3b2ac4;
        case 0x3b2ac8u: goto label_3b2ac8;
        case 0x3b2accu: goto label_3b2acc;
        case 0x3b2ad0u: goto label_3b2ad0;
        case 0x3b2ad4u: goto label_3b2ad4;
        case 0x3b2ad8u: goto label_3b2ad8;
        case 0x3b2adcu: goto label_3b2adc;
        case 0x3b2ae0u: goto label_3b2ae0;
        case 0x3b2ae4u: goto label_3b2ae4;
        case 0x3b2ae8u: goto label_3b2ae8;
        case 0x3b2aecu: goto label_3b2aec;
        case 0x3b2af0u: goto label_3b2af0;
        case 0x3b2af4u: goto label_3b2af4;
        case 0x3b2af8u: goto label_3b2af8;
        case 0x3b2afcu: goto label_3b2afc;
        case 0x3b2b00u: goto label_3b2b00;
        case 0x3b2b04u: goto label_3b2b04;
        case 0x3b2b08u: goto label_3b2b08;
        case 0x3b2b0cu: goto label_3b2b0c;
        case 0x3b2b10u: goto label_3b2b10;
        case 0x3b2b14u: goto label_3b2b14;
        case 0x3b2b18u: goto label_3b2b18;
        case 0x3b2b1cu: goto label_3b2b1c;
        case 0x3b2b20u: goto label_3b2b20;
        case 0x3b2b24u: goto label_3b2b24;
        case 0x3b2b28u: goto label_3b2b28;
        case 0x3b2b2cu: goto label_3b2b2c;
        case 0x3b2b30u: goto label_3b2b30;
        case 0x3b2b34u: goto label_3b2b34;
        case 0x3b2b38u: goto label_3b2b38;
        case 0x3b2b3cu: goto label_3b2b3c;
        case 0x3b2b40u: goto label_3b2b40;
        case 0x3b2b44u: goto label_3b2b44;
        case 0x3b2b48u: goto label_3b2b48;
        case 0x3b2b4cu: goto label_3b2b4c;
        case 0x3b2b50u: goto label_3b2b50;
        case 0x3b2b54u: goto label_3b2b54;
        case 0x3b2b58u: goto label_3b2b58;
        case 0x3b2b5cu: goto label_3b2b5c;
        case 0x3b2b60u: goto label_3b2b60;
        case 0x3b2b64u: goto label_3b2b64;
        case 0x3b2b68u: goto label_3b2b68;
        case 0x3b2b6cu: goto label_3b2b6c;
        case 0x3b2b70u: goto label_3b2b70;
        case 0x3b2b74u: goto label_3b2b74;
        case 0x3b2b78u: goto label_3b2b78;
        case 0x3b2b7cu: goto label_3b2b7c;
        case 0x3b2b80u: goto label_3b2b80;
        case 0x3b2b84u: goto label_3b2b84;
        case 0x3b2b88u: goto label_3b2b88;
        case 0x3b2b8cu: goto label_3b2b8c;
        case 0x3b2b90u: goto label_3b2b90;
        case 0x3b2b94u: goto label_3b2b94;
        case 0x3b2b98u: goto label_3b2b98;
        case 0x3b2b9cu: goto label_3b2b9c;
        case 0x3b2ba0u: goto label_3b2ba0;
        case 0x3b2ba4u: goto label_3b2ba4;
        case 0x3b2ba8u: goto label_3b2ba8;
        case 0x3b2bacu: goto label_3b2bac;
        case 0x3b2bb0u: goto label_3b2bb0;
        case 0x3b2bb4u: goto label_3b2bb4;
        case 0x3b2bb8u: goto label_3b2bb8;
        case 0x3b2bbcu: goto label_3b2bbc;
        case 0x3b2bc0u: goto label_3b2bc0;
        case 0x3b2bc4u: goto label_3b2bc4;
        case 0x3b2bc8u: goto label_3b2bc8;
        case 0x3b2bccu: goto label_3b2bcc;
        case 0x3b2bd0u: goto label_3b2bd0;
        case 0x3b2bd4u: goto label_3b2bd4;
        case 0x3b2bd8u: goto label_3b2bd8;
        case 0x3b2bdcu: goto label_3b2bdc;
        case 0x3b2be0u: goto label_3b2be0;
        case 0x3b2be4u: goto label_3b2be4;
        case 0x3b2be8u: goto label_3b2be8;
        case 0x3b2becu: goto label_3b2bec;
        case 0x3b2bf0u: goto label_3b2bf0;
        case 0x3b2bf4u: goto label_3b2bf4;
        case 0x3b2bf8u: goto label_3b2bf8;
        case 0x3b2bfcu: goto label_3b2bfc;
        case 0x3b2c00u: goto label_3b2c00;
        case 0x3b2c04u: goto label_3b2c04;
        case 0x3b2c08u: goto label_3b2c08;
        case 0x3b2c0cu: goto label_3b2c0c;
        default: break;
    }

    ctx->pc = 0x3b2650u;

label_3b2650:
    // 0x3b2650: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x3b2650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_3b2654:
    // 0x3b2654: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x3b2654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_3b2658:
    // 0x3b2658: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x3b2658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_3b265c:
    // 0x3b265c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3b265cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b2660:
    // 0x3b2660: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x3b2660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_3b2664:
    // 0x3b2664: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3b2664u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b2668:
    // 0x3b2668: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x3b2668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_3b266c:
    // 0x3b266c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x3b266cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_3b2670:
    // 0x3b2670: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x3b2670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_3b2674:
    // 0x3b2674: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x3b2674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_3b2678:
    // 0x3b2678: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3b2678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3b267c:
    // 0x3b267c: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x3b267cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_3b2680:
    // 0x3b2680: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3b2680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3b2684:
    // 0x3b2684: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x3b2684u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_3b2688:
    // 0x3b2688: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x3b2688u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_3b268c:
    // 0x3b268c: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x3b268cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_3b2690:
    // 0x3b2690: 0x12a0014d  beqz        $s5, . + 4 + (0x14D << 2)
label_3b2694:
    if (ctx->pc == 0x3B2694u) {
        ctx->pc = 0x3B2694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2690u;
        // 0x3b2694: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2698u;
        goto label_3b2698;
    }
    ctx->pc = 0x3B2690u;
    {
        const bool branch_taken_0x3b2690 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2690u;
        // 0x3b2694: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2690) {
            ctx->pc = 0x3B2BC8u;
            goto label_3b2bc8;
        }
    }
    ctx->pc = 0x3B2698u;
label_3b2698:
    // 0x3b2698: 0xc0eb85a  jal         func_3AE168
label_3b269c:
    if (ctx->pc == 0x3B269Cu) {
        ctx->pc = 0x3B269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2698u;
        // 0x3b269c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B26A0u;
        goto label_3b26a0;
    }
    ctx->pc = 0x3B2698u;
    SET_GPR_U32(ctx, 31, 0x3B26A0u);
    ctx->pc = 0x3B269Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2698u;
    // 0x3b269c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE168u, 0x3B2698u, 0x3B26A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B26A0u;
label_3b26a0:
    // 0x3b26a0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3b26a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b26a4:
    // 0x3b26a4: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x3b26a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_3b26a8:
    // 0x3b26a8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3b26a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3b26ac:
    // 0x3b26ac: 0xc6770070  lwc1        $f23, 0x70($s3)
    ctx->pc = 0x3b26acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3b26b0:
    // 0x3b26b0: 0x2442ce80  addiu       $v0, $v0, -0x3180
    ctx->pc = 0x3b26b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
label_3b26b4:
    // 0x3b26b4: 0xc6b60010  lwc1        $f22, 0x10($s5)
    ctx->pc = 0x3b26b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3b26b8:
    // 0x3b26b8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3b26bc:
    if (ctx->pc == 0x3B26BCu) {
        ctx->pc = 0x3B26BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B26B8u;
        // 0x3b26bc: 0xc45506f8  lwc1        $f21, 0x6F8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B26C0u;
        goto label_3b26c0;
    }
    ctx->pc = 0x3B26B8u;
    {
        const bool branch_taken_0x3b26b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B26BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B26B8u;
        // 0x3b26bc: 0xc45506f8  lwc1        $f21, 0x6F8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b26b8) {
            ctx->pc = 0x3B26D8u;
            goto label_3b26d8;
        }
    }
    ctx->pc = 0x3B26C0u;
label_3b26c0:
    // 0x3b26c0: 0xc0ec7e8  jal         func_3B1FA0
label_3b26c4:
    if (ctx->pc == 0x3B26C4u) {
        ctx->pc = 0x3B26C8u;
        goto label_3b26c8;
    }
    ctx->pc = 0x3B26C0u;
    SET_GPR_U32(ctx, 31, 0x3B26C8u);
    ctx->pc = 0x3B1FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1FA0u, 0x3B26C0u, 0x3B26C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B26C8u;
label_3b26c8:
    // 0x3b26c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b26c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b26cc:
    // 0x3b26cc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3b26ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b26d0:
    // 0x3b26d0: 0xc0ebf52  jal         func_3AFD48
label_3b26d4:
    if (ctx->pc == 0x3B26D4u) {
        ctx->pc = 0x3B26D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B26D0u;
        // 0x3b26d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B26D8u;
        goto label_3b26d8;
    }
    ctx->pc = 0x3B26D0u;
    SET_GPR_U32(ctx, 31, 0x3B26D8u);
    ctx->pc = 0x3B26D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B26D0u;
    // 0x3b26d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFD48u, 0x3B26D0u, 0x3B26D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B26D8u;
label_3b26d8:
    // 0x3b26d8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3b26d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b26dc:
    // 0x3b26dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b26dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b26e0:
    // 0x3b26e0: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_3b26e4:
    if (ctx->pc == 0x3B26E4u) {
        ctx->pc = 0x3B26E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B26E0u;
        // 0x3b26e4: 0x8e140000  lw          $s4, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B26E8u;
        goto label_3b26e8;
    }
    ctx->pc = 0x3B26E0u;
    {
        const bool branch_taken_0x3b26e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b26e0) {
            ctx->pc = 0x3B26E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B26E0u;
            // 0x3b26e4: 0x8e140000  lw          $s4, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B26FCu;
            goto label_3b26fc;
        }
    }
    ctx->pc = 0x3B26E8u;
label_3b26e8:
    // 0x3b26e8: 0xc1036d2  jal         func_40DB48
label_3b26ec:
    if (ctx->pc == 0x3B26ECu) {
        ctx->pc = 0x3B26ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B26E8u;
        // 0x3b26ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B26F0u;
        goto label_3b26f0;
    }
    ctx->pc = 0x3B26E8u;
    SET_GPR_U32(ctx, 31, 0x3B26F0u);
    ctx->pc = 0x3B26ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B26E8u;
    // 0x3b26ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B26E8u, 0x3B26F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B26F0u;
label_3b26f0:
    // 0x3b26f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3b26f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b26f4:
    // 0x3b26f4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3b26f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b26f8:
    // 0x3b26f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b26f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b26fc:
    // 0x3b26fc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_3b2700:
    if (ctx->pc == 0x3B2700u) {
        ctx->pc = 0x3B2700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B26FCu;
        // 0x3b2700: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2704u;
        goto label_3b2704;
    }
    ctx->pc = 0x3B26FCu;
    {
        const bool branch_taken_0x3b26fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B2700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B26FCu;
        // 0x3b2700: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b26fc) {
            ctx->pc = 0x3B2710u;
            goto label_3b2710;
        }
    }
    ctx->pc = 0x3B2704u;
label_3b2704:
    // 0x3b2704: 0xc10376a  jal         func_40DDA8
label_3b2708:
    if (ctx->pc == 0x3B2708u) {
        ctx->pc = 0x3B2708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2704u;
        // 0x3b2708: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B270Cu;
        goto label_3b270c;
    }
    ctx->pc = 0x3B2704u;
    SET_GPR_U32(ctx, 31, 0x3B270Cu);
    ctx->pc = 0x3B2708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2704u;
    // 0x3b2708: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B2704u, 0x3B270Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B270Cu;
label_3b270c:
    // 0x3b270c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3b270cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b2710:
    // 0x3b2710: 0x8e650068  lw          $a1, 0x68($s3)
    ctx->pc = 0x3b2710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_3b2714:
    // 0x3b2714: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
label_3b2718:
    if (ctx->pc == 0x3B2718u) {
        ctx->pc = 0x3B2718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2714u;
        // 0x3b2718: 0x3c120062  lui         $s2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B271Cu;
        goto label_3b271c;
    }
    ctx->pc = 0x3B2714u;
    {
        const bool branch_taken_0x3b2714 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2714u;
        // 0x3b2718: 0x3c120062  lui         $s2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2714) {
            ctx->pc = 0x3B2778u;
            goto label_3b2778;
        }
    }
    ctx->pc = 0x3B271Cu;
label_3b271c:
    // 0x3b271c: 0x8cb10050  lw          $s1, 0x50($a1)
    ctx->pc = 0x3b271cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_3b2720:
    // 0x3b2720: 0x2652e880  addiu       $s2, $s2, -0x1780
    ctx->pc = 0x3b2720u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961280));
label_3b2724:
    // 0x3b2724: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3b2724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3b2728:
    // 0x3b2728: 0x3223f000  andi        $v1, $s1, 0xF000
    ctx->pc = 0x3b2728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)61440);
label_3b272c:
    // 0x3b272c: 0x32300f00  andi        $s0, $s1, 0xF00
    ctx->pc = 0x3b272cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3840);
label_3b2730:
    // 0x3b2730: 0x108202  srl         $s0, $s0, 8
    ctx->pc = 0x3b2730u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
label_3b2734:
    // 0x3b2734: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x3b2734u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_3b2738:
    // 0x3b2738: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x3b2738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
label_3b273c:
    // 0x3b273c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x3b273cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3b2740:
    // 0x3b2740: 0x3800b  movn        $s0, $zero, $v1
    ctx->pc = 0x3b2740u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_3b2744:
    // 0x3b2744: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x3b2744u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3b2748:
    // 0x3b2748: 0x40f809  jalr        $v0
label_3b274c:
    if (ctx->pc == 0x3B274Cu) {
        ctx->pc = 0x3B274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2748u;
        // 0x3b274c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2750u;
        goto label_3b2750;
    }
    ctx->pc = 0x3B2748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B2750u);
        ctx->pc = 0x3B274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2748u;
        // 0x3b274c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2748u, 0x3B2750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B2750u;
label_3b2750:
    // 0x3b2750: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x3b2750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3b2754:
    // 0x3b2754: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b2754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b2758:
    // 0x3b2758: 0x40f809  jalr        $v0
label_3b275c:
    if (ctx->pc == 0x3B275Cu) {
        ctx->pc = 0x3B275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2758u;
        // 0x3b275c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2760u;
        goto label_3b2760;
    }
    ctx->pc = 0x3B2758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B2760u);
        ctx->pc = 0x3B275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2758u;
        // 0x3b275c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2758u, 0x3B2760u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B2760u;
label_3b2760:
    // 0x3b2760: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x3b2760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3b2764:
    // 0x3b2764: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b2764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b2768:
    // 0x3b2768: 0x40f809  jalr        $v0
label_3b276c:
    if (ctx->pc == 0x3B276Cu) {
        ctx->pc = 0x3B276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2768u;
        // 0x3b276c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2770u;
        goto label_3b2770;
    }
    ctx->pc = 0x3B2768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B2770u);
        ctx->pc = 0x3B276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2768u;
        // 0x3b276c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2768u, 0x3B2770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B2770u;
label_3b2770:
    // 0x3b2770: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b2774:
    if (ctx->pc == 0x3B2774u) {
        ctx->pc = 0x3B2774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2770u;
        // 0x3b2774: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2778u;
        goto label_3b2778;
    }
    ctx->pc = 0x3B2770u;
    {
        const bool branch_taken_0x3b2770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2770u;
        // 0x3b2774: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2770) {
            ctx->pc = 0x3B2790u;
            goto label_3b2790;
        }
    }
    ctx->pc = 0x3B2778u;
label_3b2778:
    // 0x3b2778: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b2778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b277c:
    // 0x3b277c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3b277cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b2780:
    // 0x3b2780: 0x8c62e8a0  lw          $v0, -0x1760($v1)
    ctx->pc = 0x3b2780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961312)));
label_3b2784:
    // 0x3b2784: 0x40f809  jalr        $v0
label_3b2788:
    if (ctx->pc == 0x3B2788u) {
        ctx->pc = 0x3B2788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2784u;
        // 0x3b2788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B278Cu;
        goto label_3b278c;
    }
    ctx->pc = 0x3B2784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B278Cu);
        ctx->pc = 0x3B2788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2784u;
        // 0x3b2788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2784u, 0x3B278Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B278Cu;
label_3b278c:
    // 0x3b278c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x3b278cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3b2790:
    // 0x3b2790: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b2790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3b2794:
    // 0x3b2794: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b2794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b2798:
    // 0x3b2798: 0x2e31018  mult        $v0, $s7, $v1
    ctx->pc = 0x3b2798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3b279c:
    // 0x3b279c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3b279cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3b27a0:
    // 0x3b27a0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3b27a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b27a4:
    // 0x3b27a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3b27a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b27a8:
    // 0x3b27a8: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x3b27a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_3b27ac:
    // 0x3b27ac: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x3b27acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b27b0:
    // 0x3b27b0: 0x2482ce80  addiu       $v0, $a0, -0x3180
    ctx->pc = 0x3b27b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954624));
label_3b27b4:
    // 0x3b27b4: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x3b27b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_3b27b8:
    // 0x3b27b8: 0x1ae000ee  blez        $s7, . + 4 + (0xEE << 2)
label_3b27bc:
    if (ctx->pc == 0x3B27BCu) {
        ctx->pc = 0x3B27BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B27B8u;
        // 0x3b27bc: 0x8c450504  lw          $a1, 0x504($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B27C0u;
        goto label_3b27c0;
    }
    ctx->pc = 0x3B27B8u;
    {
        const bool branch_taken_0x3b27b8 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x3B27BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B27B8u;
        // 0x3b27bc: 0x8c450504  lw          $a1, 0x504($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b27b8) {
            ctx->pc = 0x3B2B74u;
            goto label_3b2b74;
        }
    }
    ctx->pc = 0x3B27C0u;
label_3b27c0:
    // 0x3b27c0: 0x26900014  addiu       $s0, $s4, 0x14
    ctx->pc = 0x3b27c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_3b27c4:
    // 0x3b27c4: 0x0  nop
    ctx->pc = 0x3b27c4u;
    // NOP
label_3b27c8:
    // 0x3b27c8: 0x2a4200fe  slti        $v0, $s2, 0xFE
    ctx->pc = 0x3b27c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)254) ? 1 : 0);
label_3b27cc:
    // 0x3b27cc: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_3b27d0:
    if (ctx->pc == 0x3B27D0u) {
        ctx->pc = 0x3B27D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B27CCu;
        // 0x3b27d0: 0x4616b840  add.s       $f1, $f23, $f22 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B27D4u;
        goto label_3b27d4;
    }
    ctx->pc = 0x3B27CCu;
    {
        const bool branch_taken_0x3b27cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b27cc) {
            ctx->pc = 0x3B27D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B27CCu;
            // 0x3b27d0: 0x4616b840  add.s       $f1, $f23, $f22 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2830u;
            goto label_3b2830;
        }
    }
    ctx->pc = 0x3B27D4u;
label_3b27d4:
    // 0x3b27d4: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x3b27d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_3b27d8:
    // 0x3b27d8: 0x8e670068  lw          $a3, 0x68($s3)
    ctx->pc = 0x3b27d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_3b27dc:
    // 0x3b27dc: 0x24d1ce80  addiu       $s1, $a2, -0x3180
    ctx->pc = 0x3b27dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954624));
label_3b27e0:
    // 0x3b27e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b27e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b27e4:
    // 0x3b27e4: 0x8e2206f4  lw          $v0, 0x6F4($s1)
    ctx->pc = 0x3b27e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1780)));
label_3b27e8:
    // 0x3b27e8: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x3b27e8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_3b27ec:
    // 0x3b27ec: 0x8e240504  lw          $a0, 0x504($s1)
    ctx->pc = 0x3b27ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1284)));
label_3b27f0:
    // 0x3b27f0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3b27f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b27f4:
    // 0x3b27f4: 0xc1111fe  jal         func_4447F8
label_3b27f8:
    if (ctx->pc == 0x3B27F8u) {
        ctx->pc = 0x3B27F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B27F4u;
        // 0x3b27f8: 0x473825  or          $a3, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B27FCu;
        goto label_3b27fc;
    }
    ctx->pc = 0x3B27F4u;
    SET_GPR_U32(ctx, 31, 0x3B27FCu);
    ctx->pc = 0x3B27F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B27F4u;
    // 0x3b27f8: 0x473825  or          $a3, $v0, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4447F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4447F8u, 0x3B27F4u, 0x3B27FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B27FCu;
label_3b27fc:
    // 0x3b27fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3b2800:
    if (ctx->pc == 0x3B2800u) {
        ctx->pc = 0x3B2800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B27FCu;
        // 0x3b2800: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2804u;
        goto label_3b2804;
    }
    ctx->pc = 0x3B27FCu;
    {
        const bool branch_taken_0x3b27fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B27FCu;
        // 0x3b2800: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b27fc) {
            ctx->pc = 0x3B2818u;
            goto label_3b2818;
        }
    }
    ctx->pc = 0x3B2804u;
label_3b2804:
    // 0x3b2804: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3b2804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b2808:
    // 0x3b2808: 0xc111044  jal         func_444110
label_3b280c:
    if (ctx->pc == 0x3B280Cu) {
        ctx->pc = 0x3B280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2808u;
        // 0x3b280c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2810u;
        goto label_3b2810;
    }
    ctx->pc = 0x3B2808u;
    SET_GPR_U32(ctx, 31, 0x3B2810u);
    ctx->pc = 0x3B280Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2808u;
    // 0x3b280c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444110u, 0x3B2808u, 0x3B2810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2810u;
label_3b2810:
    // 0x3b2810: 0xc111228  jal         func_4448A0
label_3b2814:
    if (ctx->pc == 0x3B2814u) {
        ctx->pc = 0x3B2818u;
        goto label_3b2818;
    }
    ctx->pc = 0x3B2810u;
    SET_GPR_U32(ctx, 31, 0x3B2818u);
    ctx->pc = 0x4448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4448A0u, 0x3B2810u, 0x3B2818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2818u;
label_3b2818:
    // 0x3b2818: 0x8e250504  lw          $a1, 0x504($s1)
    ctx->pc = 0x3b2818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1284)));
label_3b281c:
    // 0x3b281c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3b281cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b2820:
    // 0x3b2820: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x3b2820u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_3b2824:
    // 0x3b2824: 0x2610ffe8  addiu       $s0, $s0, -0x18
    ctx->pc = 0x3b2824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
label_3b2828:
    // 0x3b2828: 0x4616b840  add.s       $f1, $f23, $f22
    ctx->pc = 0x3b2828u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
label_3b282c:
    // 0x3b282c: 0x0  nop
    ctx->pc = 0x3b282cu;
    // NOP
label_3b2830:
    // 0x3b2830: 0xc600fff8  lwc1        $f0, -0x8($s0)
    ctx->pc = 0x3b2830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b2834:
    // 0x3b2834: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3b2834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3b2838:
    // 0x3b2838: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3b2838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3b283c:
    // 0x3b283c: 0xc602fffc  lwc1        $f2, -0x4($s0)
    ctx->pc = 0x3b283cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b2840:
    // 0x3b2840: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3b2840u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3b2844:
    // 0x3b2844: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x3b2844u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3b2848:
    // 0x3b2848: 0xc601fff0  lwc1        $f1, -0x10($s0)
    ctx->pc = 0x3b2848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b284c:
    // 0x3b284c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b284cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3b2850:
    // 0x3b2850: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3b2850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3b2854:
    // 0x3b2854: 0xc600fff4  lwc1        $f0, -0xC($s0)
    ctx->pc = 0x3b2854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b2858:
    // 0x3b2858: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3b2858u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_3b285c:
    // 0x3b285c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3b285cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3b2860:
    // 0x3b2860: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x3b2860u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3b2864:
    // 0x3b2864: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3b2864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3b2868:
    // 0x3b2868: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x3b2868u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3b286c:
    // 0x3b286c: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x3b286cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3b2870:
    // 0x3b2870: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x3b2870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3b2874:
    // 0x3b2874: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3b2874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3b2878:
    // 0x3b2878: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x3b2878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b287c:
    // 0x3b287c: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x3b287cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b2880:
    // 0x3b2880: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3b2880u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_3b2884:
    // 0x3b2884: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x3b2884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_3b2888:
    // 0x3b2888: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b2888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b288c:
    // 0x3b288c: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
label_3b2890:
    if (ctx->pc == 0x3B2890u) {
        ctx->pc = 0x3B2890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B288Cu;
        // 0x3b2890: 0x92630060  lbu         $v1, 0x60($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2894u;
        goto label_3b2894;
    }
    ctx->pc = 0x3B288Cu;
    {
        const bool branch_taken_0x3b288c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b288c) {
            ctx->pc = 0x3B2890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B288Cu;
            // 0x3b2890: 0x92630060  lbu         $v1, 0x60($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2948u;
            goto label_3b2948;
        }
    }
    ctx->pc = 0x3B2894u;
label_3b2894:
    // 0x3b2894: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b2894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b2898:
    // 0x3b2898: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x3b2898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b289c:
    // 0x3b289c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3b289cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3b28a0:
    // 0x3b28a0: 0xc664001c  lwc1        $f4, 0x1C($s3)
    ctx->pc = 0x3b28a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3b28a4:
    // 0x3b28a4: 0xc6650020  lwc1        $f5, 0x20($s3)
    ctx->pc = 0x3b28a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3b28a8:
    // 0x3b28a8: 0xc6660024  lwc1        $f6, 0x24($s3)
    ctx->pc = 0x3b28a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3b28ac:
    // 0x3b28ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3b28acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3b28b0:
    // 0x3b28b0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3b28b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3b28b4:
    // 0x3b28b4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b28b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b28b8:
    // 0x3b28b8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3b28b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3b28bc:
    // 0x3b28bc: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x3b28bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_3b28c0:
    // 0x3b28c0: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x3b28c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3b28c4:
    // 0x3b28c4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b28c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b28c8:
    // 0x3b28c8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3b28c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3b28cc:
    // 0x3b28cc: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x3b28ccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_3b28d0:
    // 0x3b28d0: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x3b28d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3b28d4:
    // 0x3b28d4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b28d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b28d8:
    // 0x3b28d8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3b28d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3b28dc:
    // 0x3b28dc: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x3b28dcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_3b28e0:
    // 0x3b28e0: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x3b28e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b28e4:
    // 0x3b28e4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3b28e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3b28e8:
    // 0x3b28e8: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x3b28e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b28ec:
    // 0x3b28ec: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x3b28ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b28f0:
    // 0x3b28f0: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x3b28f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b28f4:
    // 0x3b28f4: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x3b28f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_3b28f8:
    // 0x3b28f8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3b28f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_3b28fc:
    // 0x3b28fc: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x3b28fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3b2900:
    // 0x3b2900: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x3b2900u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_3b2904:
    // 0x3b2904: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x3b2904u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3b2908:
    // 0x3b2908: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x3b2908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3b290c:
    // 0x3b290c: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x3b290cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_3b2910:
    // 0x3b2910: 0x46001124  .word       0x46001124                   # cvt.w.s     $f4, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b2910u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
label_3b2914:
    // 0x3b2914: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x3b2914u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3b2918:
    // 0x3b2918: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b2918u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_3b291c:
    // 0x3b291c: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x3b291cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_3b2920:
    // 0x3b2920: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b2920u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_3b2924:
    // 0x3b2924: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x3b2924u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3b2928:
    // 0x3b2928: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b2928u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b292c:
    // 0x3b292c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b292cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3b2930:
    // 0x3b2930: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x3b2930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_3b2934:
    // 0x3b2934: 0xa0a4000c  sb          $a0, 0xC($a1)
    ctx->pc = 0x3b2934u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 4));
label_3b2938:
    // 0x3b2938: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x3b2938u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_3b293c:
    // 0x3b293c: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x3b293cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
label_3b2940:
    // 0x3b2940: 0x10000009  b           . + 4 + (0x9 << 2)
label_3b2944:
    if (ctx->pc == 0x3B2944u) {
        ctx->pc = 0x3B2944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2940u;
        // 0x3b2944: 0xa0470002  sb          $a3, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2948u;
        goto label_3b2948;
    }
    ctx->pc = 0x3B2940u;
    {
        const bool branch_taken_0x3b2940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2940u;
        // 0x3b2944: 0xa0470002  sb          $a3, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2940) {
            ctx->pc = 0x3B2968u;
            goto label_3b2968;
        }
    }
    ctx->pc = 0x3B2948u;
label_3b2948:
    // 0x3b2948: 0x24a4000c  addiu       $a0, $a1, 0xC
    ctx->pc = 0x3b2948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_3b294c:
    // 0x3b294c: 0xa0a3000c  sb          $v1, 0xC($a1)
    ctx->pc = 0x3b294cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 3));
label_3b2950:
    // 0x3b2950: 0x92620061  lbu         $v0, 0x61($s3)
    ctx->pc = 0x3b2950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 97)));
label_3b2954:
    // 0x3b2954: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x3b2954u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_3b2958:
    // 0x3b2958: 0x92630062  lbu         $v1, 0x62($s3)
    ctx->pc = 0x3b2958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 98)));
label_3b295c:
    // 0x3b295c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3b295cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_3b2960:
    // 0x3b2960: 0x92620063  lbu         $v0, 0x63($s3)
    ctx->pc = 0x3b2960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 99)));
label_3b2964:
    // 0x3b2964: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x3b2964u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_3b2968:
    // 0x3b2968: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x3b2968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_3b296c:
    // 0x3b296c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b296cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3b2970:
    // 0x3b2970: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_3b2974:
    if (ctx->pc == 0x3B2974u) {
        ctx->pc = 0x3B2974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2970u;
        // 0x3b2974: 0x24a50024  addiu       $a1, $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2978u;
        goto label_3b2978;
    }
    ctx->pc = 0x3B2970u;
    {
        const bool branch_taken_0x3b2970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2970) {
            ctx->pc = 0x3B2974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2970u;
            // 0x3b2974: 0x24a50024  addiu       $a1, $a1, 0x24 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B29C8u;
            goto label_3b29c8;
        }
    }
    ctx->pc = 0x3B2978u;
label_3b2978:
    // 0x3b2978: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b2978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b297c:
    // 0x3b297c: 0xc6620028  lwc1        $f2, 0x28($s3)
    ctx->pc = 0x3b297cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b2980:
    // 0x3b2980: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3b2980u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3b2984:
    // 0x3b2984: 0xc663002c  lwc1        $f3, 0x2C($s3)
    ctx->pc = 0x3b2984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b2988:
    // 0x3b2988: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3b2988u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3b298c:
    // 0x3b298c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x3b298cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3b2990:
    // 0x3b2990: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b2990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b2994:
    // 0x3b2994: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3b2994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3b2998:
    // 0x3b2998: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3b2998u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3b299c:
    // 0x3b299c: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x3b299cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b29a0:
    // 0x3b29a0: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x3b29a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b29a4:
    // 0x3b29a4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3b29a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3b29a8:
    // 0x3b29a8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3b29a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3b29ac:
    // 0x3b29ac: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x3b29acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3b29b0:
    // 0x3b29b0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3b29b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3b29b4:
    // 0x3b29b4: 0xe4a1001c  swc1        $f1, 0x1C($a1)
    ctx->pc = 0x3b29b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_3b29b8:
    // 0x3b29b8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x3b29b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b29bc:
    // 0x3b29bc: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x3b29bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_3b29c0:
    // 0x3b29c0: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x3b29c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
label_3b29c4:
    // 0x3b29c4: 0x0  nop
    ctx->pc = 0x3b29c4u;
    // NOP
label_3b29c8:
    // 0x3b29c8: 0x4616b841  sub.s       $f1, $f23, $f22
    ctx->pc = 0x3b29c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[22]);
label_3b29cc:
    // 0x3b29cc: 0xc600fff8  lwc1        $f0, -0x8($s0)
    ctx->pc = 0x3b29ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b29d0:
    // 0x3b29d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3b29d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3b29d4:
    // 0x3b29d4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3b29d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3b29d8:
    // 0x3b29d8: 0xc602fffc  lwc1        $f2, -0x4($s0)
    ctx->pc = 0x3b29d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b29dc:
    // 0x3b29dc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3b29dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3b29e0:
    // 0x3b29e0: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x3b29e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3b29e4:
    // 0x3b29e4: 0xc601fff0  lwc1        $f1, -0x10($s0)
    ctx->pc = 0x3b29e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b29e8:
    // 0x3b29e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3b29e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3b29ec:
    // 0x3b29ec: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3b29ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3b29f0:
    // 0x3b29f0: 0xc600fff4  lwc1        $f0, -0xC($s0)
    ctx->pc = 0x3b29f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b29f4:
    // 0x3b29f4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3b29f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3b29f8:
    // 0x3b29f8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3b29f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3b29fc:
    // 0x3b29fc: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x3b29fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3b2a00:
    // 0x3b2a00: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3b2a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3b2a04:
    // 0x3b2a04: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x3b2a04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3b2a08:
    // 0x3b2a08: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x3b2a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3b2a0c:
    // 0x3b2a0c: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x3b2a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3b2a10:
    // 0x3b2a10: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3b2a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3b2a14:
    // 0x3b2a14: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x3b2a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b2a18:
    // 0x3b2a18: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x3b2a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b2a1c:
    // 0x3b2a1c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3b2a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_3b2a20:
    // 0x3b2a20: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x3b2a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_3b2a24:
    // 0x3b2a24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b2a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b2a28:
    // 0x3b2a28: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
label_3b2a2c:
    if (ctx->pc == 0x3B2A2Cu) {
        ctx->pc = 0x3B2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2A28u;
        // 0x3b2a2c: 0x92630060  lbu         $v1, 0x60($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2A30u;
        goto label_3b2a30;
    }
    ctx->pc = 0x3B2A28u;
    {
        const bool branch_taken_0x3b2a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2a28) {
            ctx->pc = 0x3B2A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2A28u;
            // 0x3b2a2c: 0x92630060  lbu         $v1, 0x60($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2AE8u;
            goto label_3b2ae8;
        }
    }
    ctx->pc = 0x3B2A30u;
label_3b2a30:
    // 0x3b2a30: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b2a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b2a34:
    // 0x3b2a34: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x3b2a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b2a38:
    // 0x3b2a38: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3b2a38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3b2a3c:
    // 0x3b2a3c: 0xc664004c  lwc1        $f4, 0x4C($s3)
    ctx->pc = 0x3b2a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3b2a40:
    // 0x3b2a40: 0xc6650050  lwc1        $f5, 0x50($s3)
    ctx->pc = 0x3b2a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3b2a44:
    // 0x3b2a44: 0xc6660054  lwc1        $f6, 0x54($s3)
    ctx->pc = 0x3b2a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3b2a48:
    // 0x3b2a48: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3b2a48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3b2a4c:
    // 0x3b2a4c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3b2a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3b2a50:
    // 0x3b2a50: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b2a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b2a54:
    // 0x3b2a54: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3b2a54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3b2a58:
    // 0x3b2a58: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x3b2a58u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_3b2a5c:
    // 0x3b2a5c: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x3b2a5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3b2a60:
    // 0x3b2a60: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b2a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b2a64:
    // 0x3b2a64: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3b2a64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3b2a68:
    // 0x3b2a68: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x3b2a68u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_3b2a6c:
    // 0x3b2a6c: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x3b2a6cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3b2a70:
    // 0x3b2a70: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b2a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b2a74:
    // 0x3b2a74: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3b2a74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3b2a78:
    // 0x3b2a78: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x3b2a78u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_3b2a7c:
    // 0x3b2a7c: 0xc6620030  lwc1        $f2, 0x30($s3)
    ctx->pc = 0x3b2a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b2a80:
    // 0x3b2a80: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3b2a80u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3b2a84:
    // 0x3b2a84: 0xc6630034  lwc1        $f3, 0x34($s3)
    ctx->pc = 0x3b2a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b2a88:
    // 0x3b2a88: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x3b2a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b2a8c:
    // 0x3b2a8c: 0xc661003c  lwc1        $f1, 0x3C($s3)
    ctx->pc = 0x3b2a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b2a90:
    // 0x3b2a90: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x3b2a90u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_3b2a94:
    // 0x3b2a94: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3b2a94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_3b2a98:
    // 0x3b2a98: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x3b2a98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3b2a9c:
    // 0x3b2a9c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x3b2a9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_3b2aa0:
    // 0x3b2aa0: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x3b2aa0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3b2aa4:
    // 0x3b2aa4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x3b2aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3b2aa8:
    // 0x3b2aa8: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x3b2aa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_3b2aac:
    // 0x3b2aac: 0x46001124  .word       0x46001124                   # cvt.w.s     $f4, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b2aacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
label_3b2ab0:
    // 0x3b2ab0: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x3b2ab0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3b2ab4:
    // 0x3b2ab4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b2ab4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_3b2ab8:
    // 0x3b2ab8: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x3b2ab8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_3b2abc:
    // 0x3b2abc: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b2abcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_3b2ac0:
    // 0x3b2ac0: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x3b2ac0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3b2ac4:
    // 0x3b2ac4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b2ac4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b2ac8:
    // 0x3b2ac8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b2ac8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3b2acc:
    // 0x3b2acc: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x3b2accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_3b2ad0:
    // 0x3b2ad0: 0xa0a4000c  sb          $a0, 0xC($a1)
    ctx->pc = 0x3b2ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 4));
label_3b2ad4:
    // 0x3b2ad4: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x3b2ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_3b2ad8:
    // 0x3b2ad8: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x3b2ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
label_3b2adc:
    // 0x3b2adc: 0x1000000a  b           . + 4 + (0xA << 2)
label_3b2ae0:
    if (ctx->pc == 0x3B2AE0u) {
        ctx->pc = 0x3B2AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2ADCu;
        // 0x3b2ae0: 0xa0470002  sb          $a3, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2AE4u;
        goto label_3b2ae4;
    }
    ctx->pc = 0x3B2ADCu;
    {
        const bool branch_taken_0x3b2adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2ADCu;
        // 0x3b2ae0: 0xa0470002  sb          $a3, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2adc) {
            ctx->pc = 0x3B2B08u;
            goto label_3b2b08;
        }
    }
    ctx->pc = 0x3B2AE4u;
label_3b2ae4:
    // 0x3b2ae4: 0x0  nop
    ctx->pc = 0x3b2ae4u;
    // NOP
label_3b2ae8:
    // 0x3b2ae8: 0x24a4000c  addiu       $a0, $a1, 0xC
    ctx->pc = 0x3b2ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_3b2aec:
    // 0x3b2aec: 0xa0a3000c  sb          $v1, 0xC($a1)
    ctx->pc = 0x3b2aecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 3));
label_3b2af0:
    // 0x3b2af0: 0x92620061  lbu         $v0, 0x61($s3)
    ctx->pc = 0x3b2af0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 97)));
label_3b2af4:
    // 0x3b2af4: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x3b2af4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_3b2af8:
    // 0x3b2af8: 0x92630062  lbu         $v1, 0x62($s3)
    ctx->pc = 0x3b2af8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 98)));
label_3b2afc:
    // 0x3b2afc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3b2afcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_3b2b00:
    // 0x3b2b00: 0x92620063  lbu         $v0, 0x63($s3)
    ctx->pc = 0x3b2b00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 99)));
label_3b2b04:
    // 0x3b2b04: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x3b2b04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_3b2b08:
    // 0x3b2b08: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x3b2b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_3b2b0c:
    // 0x3b2b0c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b2b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3b2b10:
    // 0x3b2b10: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_3b2b14:
    if (ctx->pc == 0x3B2B14u) {
        ctx->pc = 0x3B2B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B10u;
        // 0x3b2b14: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2B18u;
        goto label_3b2b18;
    }
    ctx->pc = 0x3B2B10u;
    {
        const bool branch_taken_0x3b2b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B10u;
        // 0x3b2b14: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2b10) {
            ctx->pc = 0x3B2B60u;
            goto label_3b2b60;
        }
    }
    ctx->pc = 0x3B2B18u;
label_3b2b18:
    // 0x3b2b18: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b2b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b2b1c:
    // 0x3b2b1c: 0xc6620058  lwc1        $f2, 0x58($s3)
    ctx->pc = 0x3b2b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b2b20:
    // 0x3b2b20: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3b2b20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3b2b24:
    // 0x3b2b24: 0xc663005c  lwc1        $f3, 0x5C($s3)
    ctx->pc = 0x3b2b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b2b28:
    // 0x3b2b28: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3b2b28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3b2b2c:
    // 0x3b2b2c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x3b2b2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3b2b30:
    // 0x3b2b30: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3b2b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b2b34:
    // 0x3b2b34: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3b2b34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3b2b38:
    // 0x3b2b38: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3b2b38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3b2b3c:
    // 0x3b2b3c: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x3b2b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b2b40:
    // 0x3b2b40: 0xc6600044  lwc1        $f0, 0x44($s3)
    ctx->pc = 0x3b2b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b2b44:
    // 0x3b2b44: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3b2b44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3b2b48:
    // 0x3b2b48: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3b2b48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3b2b4c:
    // 0x3b2b4c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x3b2b4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3b2b50:
    // 0x3b2b50: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3b2b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3b2b54:
    // 0x3b2b54: 0xe4a1001c  swc1        $f1, 0x1C($a1)
    ctx->pc = 0x3b2b54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_3b2b58:
    // 0x3b2b58: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x3b2b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b2b5c:
    // 0x3b2b5c: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x3b2b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_3b2b60:
    // 0x3b2b60: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x3b2b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
label_3b2b64:
    // 0x3b2b64: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3b2b64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_3b2b68:
    // 0x3b2b68: 0x2d7102a  slt         $v0, $s6, $s7
    ctx->pc = 0x3b2b68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_3b2b6c:
    // 0x3b2b6c: 0x1440ff16  bnez        $v0, . + 4 + (-0xEA << 2)
label_3b2b70:
    if (ctx->pc == 0x3B2B70u) {
        ctx->pc = 0x3B2B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B6Cu;
        // 0x3b2b70: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2B74u;
        goto label_3b2b74;
    }
    ctx->pc = 0x3B2B6Cu;
    {
        const bool branch_taken_0x3b2b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B6Cu;
        // 0x3b2b70: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2b6c) {
            ctx->pc = 0x3B27C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b27c8;
        }
    }
    ctx->pc = 0x3B2B74u;
label_3b2b74:
    // 0x3b2b74: 0x1a400011  blez        $s2, . + 4 + (0x11 << 2)
label_3b2b78:
    if (ctx->pc == 0x3B2B78u) {
        ctx->pc = 0x3B2B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B74u;
        // 0x3b2b78: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2B7Cu;
        goto label_3b2b7c;
    }
    ctx->pc = 0x3B2B74u;
    {
        const bool branch_taken_0x3b2b74 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3B2B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B74u;
        // 0x3b2b78: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2b74) {
            ctx->pc = 0x3B2BBCu;
            goto label_3b2bbc;
        }
    }
    ctx->pc = 0x3B2B7Cu;
label_3b2b7c:
    // 0x3b2b7c: 0x8e670068  lw          $a3, 0x68($s3)
    ctx->pc = 0x3b2b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_3b2b80:
    // 0x3b2b80: 0x2450ce80  addiu       $s0, $v0, -0x3180
    ctx->pc = 0x3b2b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
label_3b2b84:
    // 0x3b2b84: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3b2b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b2b88:
    // 0x3b2b88: 0x8e0206f4  lw          $v0, 0x6F4($s0)
    ctx->pc = 0x3b2b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1780)));
label_3b2b8c:
    // 0x3b2b8c: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x3b2b8cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_3b2b90:
    // 0x3b2b90: 0x8e040504  lw          $a0, 0x504($s0)
    ctx->pc = 0x3b2b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1284)));
label_3b2b94:
    // 0x3b2b94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b2b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b2b98:
    // 0x3b2b98: 0xc1111fe  jal         func_4447F8
label_3b2b9c:
    if (ctx->pc == 0x3B2B9Cu) {
        ctx->pc = 0x3B2B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B98u;
        // 0x3b2b9c: 0x473825  or          $a3, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2BA0u;
        goto label_3b2ba0;
    }
    ctx->pc = 0x3B2B98u;
    SET_GPR_U32(ctx, 31, 0x3B2BA0u);
    ctx->pc = 0x3B2B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2B98u;
    // 0x3b2b9c: 0x473825  or          $a3, $v0, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4447F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4447F8u, 0x3B2B98u, 0x3B2BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2BA0u;
label_3b2ba0:
    // 0x3b2ba0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3b2ba4:
    if (ctx->pc == 0x3B2BA4u) {
        ctx->pc = 0x3B2BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2BA0u;
        // 0x3b2ba4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2BA8u;
        goto label_3b2ba8;
    }
    ctx->pc = 0x3B2BA0u;
    {
        const bool branch_taken_0x3b2ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2BA0u;
        // 0x3b2ba4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2ba0) {
            ctx->pc = 0x3B2BBCu;
            goto label_3b2bbc;
        }
    }
    ctx->pc = 0x3B2BA8u;
label_3b2ba8:
    // 0x3b2ba8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b2ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b2bac:
    // 0x3b2bac: 0xc111044  jal         func_444110
label_3b2bb0:
    if (ctx->pc == 0x3B2BB0u) {
        ctx->pc = 0x3B2BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2BACu;
        // 0x3b2bb0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2BB4u;
        goto label_3b2bb4;
    }
    ctx->pc = 0x3B2BACu;
    SET_GPR_U32(ctx, 31, 0x3B2BB4u);
    ctx->pc = 0x3B2BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2BACu;
    // 0x3b2bb0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444110u, 0x3B2BACu, 0x3B2BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2BB4u;
label_3b2bb4:
    // 0x3b2bb4: 0xc111228  jal         func_4448A0
label_3b2bb8:
    if (ctx->pc == 0x3B2BB8u) {
        ctx->pc = 0x3B2BBCu;
        goto label_3b2bbc;
    }
    ctx->pc = 0x3B2BB4u;
    SET_GPR_U32(ctx, 31, 0x3B2BBCu);
    ctx->pc = 0x4448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4448A0u, 0x3B2BB4u, 0x3B2BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2BBCu;
label_3b2bbc:
    // 0x3b2bbc: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x3b2bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_3b2bc0:
    // 0x3b2bc0: 0xc0ec994  jal         func_3B2650
label_3b2bc4:
    if (ctx->pc == 0x3B2BC4u) {
        ctx->pc = 0x3B2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2BC0u;
        // 0x3b2bc4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2BC8u;
        goto label_3b2bc8;
    }
    ctx->pc = 0x3B2BC0u;
    SET_GPR_U32(ctx, 31, 0x3B2BC8u);
    ctx->pc = 0x3B2BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2BC0u;
    // 0x3b2bc4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2650u;
    goto label_3b2650;
    ctx->pc = 0x3B2BC8u;
label_3b2bc8:
    // 0x3b2bc8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3b2bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b2bcc:
    // 0x3b2bcc: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x3b2bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3b2bd0:
    // 0x3b2bd0: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x3b2bd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3b2bd4:
    // 0x3b2bd4: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x3b2bd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3b2bd8:
    // 0x3b2bd8: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x3b2bd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3b2bdc:
    // 0x3b2bdc: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x3b2bdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b2be0:
    // 0x3b2be0: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x3b2be0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b2be4:
    // 0x3b2be4: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x3b2be4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b2be8:
    // 0x3b2be8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3b2be8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b2bec:
    // 0x3b2bec: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x3b2becu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b2bf0:
    // 0x3b2bf0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3b2bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3b2bf4:
    // 0x3b2bf4: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x3b2bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3b2bf8:
    // 0x3b2bf8: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x3b2bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3b2bfc:
    // 0x3b2bfc: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x3b2bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3b2c00:
    // 0x3b2c00: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x3b2c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3b2c04:
    // 0x3b2c04: 0x3e00008  jr          $ra
label_3b2c08:
    if (ctx->pc == 0x3B2C08u) {
        ctx->pc = 0x3B2C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C04u;
        // 0x3b2c08: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2C0Cu;
        goto label_3b2c0c;
    }
    ctx->pc = 0x3B2C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C04u;
        // 0x3b2c08: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2C0Cu;
label_3b2c0c:
    // 0x3b2c0c: 0x0  nop
    ctx->pc = 0x3b2c0cu;
    // NOP
    ctx->pc = 0x3b2c10u;
}
