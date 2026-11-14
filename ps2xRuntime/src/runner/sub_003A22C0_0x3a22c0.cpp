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

// Function: sub_003A22C0
// Address: 0x3a22c0 - 0x3a2a58
void sub_003A22C0_0x3a22c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A22C0_0x3a22c0");
#endif

    switch (ctx->pc) {
        case 0x3a22c0u: goto label_3a22c0;
        case 0x3a22c4u: goto label_3a22c4;
        case 0x3a22c8u: goto label_3a22c8;
        case 0x3a22ccu: goto label_3a22cc;
        case 0x3a22d0u: goto label_3a22d0;
        case 0x3a22d4u: goto label_3a22d4;
        case 0x3a22d8u: goto label_3a22d8;
        case 0x3a22dcu: goto label_3a22dc;
        case 0x3a22e0u: goto label_3a22e0;
        case 0x3a22e4u: goto label_3a22e4;
        case 0x3a22e8u: goto label_3a22e8;
        case 0x3a22ecu: goto label_3a22ec;
        case 0x3a22f0u: goto label_3a22f0;
        case 0x3a22f4u: goto label_3a22f4;
        case 0x3a22f8u: goto label_3a22f8;
        case 0x3a22fcu: goto label_3a22fc;
        case 0x3a2300u: goto label_3a2300;
        case 0x3a2304u: goto label_3a2304;
        case 0x3a2308u: goto label_3a2308;
        case 0x3a230cu: goto label_3a230c;
        case 0x3a2310u: goto label_3a2310;
        case 0x3a2314u: goto label_3a2314;
        case 0x3a2318u: goto label_3a2318;
        case 0x3a231cu: goto label_3a231c;
        case 0x3a2320u: goto label_3a2320;
        case 0x3a2324u: goto label_3a2324;
        case 0x3a2328u: goto label_3a2328;
        case 0x3a232cu: goto label_3a232c;
        case 0x3a2330u: goto label_3a2330;
        case 0x3a2334u: goto label_3a2334;
        case 0x3a2338u: goto label_3a2338;
        case 0x3a233cu: goto label_3a233c;
        case 0x3a2340u: goto label_3a2340;
        case 0x3a2344u: goto label_3a2344;
        case 0x3a2348u: goto label_3a2348;
        case 0x3a234cu: goto label_3a234c;
        case 0x3a2350u: goto label_3a2350;
        case 0x3a2354u: goto label_3a2354;
        case 0x3a2358u: goto label_3a2358;
        case 0x3a235cu: goto label_3a235c;
        case 0x3a2360u: goto label_3a2360;
        case 0x3a2364u: goto label_3a2364;
        case 0x3a2368u: goto label_3a2368;
        case 0x3a236cu: goto label_3a236c;
        case 0x3a2370u: goto label_3a2370;
        case 0x3a2374u: goto label_3a2374;
        case 0x3a2378u: goto label_3a2378;
        case 0x3a237cu: goto label_3a237c;
        case 0x3a2380u: goto label_3a2380;
        case 0x3a2384u: goto label_3a2384;
        case 0x3a2388u: goto label_3a2388;
        case 0x3a238cu: goto label_3a238c;
        case 0x3a2390u: goto label_3a2390;
        case 0x3a2394u: goto label_3a2394;
        case 0x3a2398u: goto label_3a2398;
        case 0x3a239cu: goto label_3a239c;
        case 0x3a23a0u: goto label_3a23a0;
        case 0x3a23a4u: goto label_3a23a4;
        case 0x3a23a8u: goto label_3a23a8;
        case 0x3a23acu: goto label_3a23ac;
        case 0x3a23b0u: goto label_3a23b0;
        case 0x3a23b4u: goto label_3a23b4;
        case 0x3a23b8u: goto label_3a23b8;
        case 0x3a23bcu: goto label_3a23bc;
        case 0x3a23c0u: goto label_3a23c0;
        case 0x3a23c4u: goto label_3a23c4;
        case 0x3a23c8u: goto label_3a23c8;
        case 0x3a23ccu: goto label_3a23cc;
        case 0x3a23d0u: goto label_3a23d0;
        case 0x3a23d4u: goto label_3a23d4;
        case 0x3a23d8u: goto label_3a23d8;
        case 0x3a23dcu: goto label_3a23dc;
        case 0x3a23e0u: goto label_3a23e0;
        case 0x3a23e4u: goto label_3a23e4;
        case 0x3a23e8u: goto label_3a23e8;
        case 0x3a23ecu: goto label_3a23ec;
        case 0x3a23f0u: goto label_3a23f0;
        case 0x3a23f4u: goto label_3a23f4;
        case 0x3a23f8u: goto label_3a23f8;
        case 0x3a23fcu: goto label_3a23fc;
        case 0x3a2400u: goto label_3a2400;
        case 0x3a2404u: goto label_3a2404;
        case 0x3a2408u: goto label_3a2408;
        case 0x3a240cu: goto label_3a240c;
        case 0x3a2410u: goto label_3a2410;
        case 0x3a2414u: goto label_3a2414;
        case 0x3a2418u: goto label_3a2418;
        case 0x3a241cu: goto label_3a241c;
        case 0x3a2420u: goto label_3a2420;
        case 0x3a2424u: goto label_3a2424;
        case 0x3a2428u: goto label_3a2428;
        case 0x3a242cu: goto label_3a242c;
        case 0x3a2430u: goto label_3a2430;
        case 0x3a2434u: goto label_3a2434;
        case 0x3a2438u: goto label_3a2438;
        case 0x3a243cu: goto label_3a243c;
        case 0x3a2440u: goto label_3a2440;
        case 0x3a2444u: goto label_3a2444;
        case 0x3a2448u: goto label_3a2448;
        case 0x3a244cu: goto label_3a244c;
        case 0x3a2450u: goto label_3a2450;
        case 0x3a2454u: goto label_3a2454;
        case 0x3a2458u: goto label_3a2458;
        case 0x3a245cu: goto label_3a245c;
        case 0x3a2460u: goto label_3a2460;
        case 0x3a2464u: goto label_3a2464;
        case 0x3a2468u: goto label_3a2468;
        case 0x3a246cu: goto label_3a246c;
        case 0x3a2470u: goto label_3a2470;
        case 0x3a2474u: goto label_3a2474;
        case 0x3a2478u: goto label_3a2478;
        case 0x3a247cu: goto label_3a247c;
        case 0x3a2480u: goto label_3a2480;
        case 0x3a2484u: goto label_3a2484;
        case 0x3a2488u: goto label_3a2488;
        case 0x3a248cu: goto label_3a248c;
        case 0x3a2490u: goto label_3a2490;
        case 0x3a2494u: goto label_3a2494;
        case 0x3a2498u: goto label_3a2498;
        case 0x3a249cu: goto label_3a249c;
        case 0x3a24a0u: goto label_3a24a0;
        case 0x3a24a4u: goto label_3a24a4;
        case 0x3a24a8u: goto label_3a24a8;
        case 0x3a24acu: goto label_3a24ac;
        case 0x3a24b0u: goto label_3a24b0;
        case 0x3a24b4u: goto label_3a24b4;
        case 0x3a24b8u: goto label_3a24b8;
        case 0x3a24bcu: goto label_3a24bc;
        case 0x3a24c0u: goto label_3a24c0;
        case 0x3a24c4u: goto label_3a24c4;
        case 0x3a24c8u: goto label_3a24c8;
        case 0x3a24ccu: goto label_3a24cc;
        case 0x3a24d0u: goto label_3a24d0;
        case 0x3a24d4u: goto label_3a24d4;
        case 0x3a24d8u: goto label_3a24d8;
        case 0x3a24dcu: goto label_3a24dc;
        case 0x3a24e0u: goto label_3a24e0;
        case 0x3a24e4u: goto label_3a24e4;
        case 0x3a24e8u: goto label_3a24e8;
        case 0x3a24ecu: goto label_3a24ec;
        case 0x3a24f0u: goto label_3a24f0;
        case 0x3a24f4u: goto label_3a24f4;
        case 0x3a24f8u: goto label_3a24f8;
        case 0x3a24fcu: goto label_3a24fc;
        case 0x3a2500u: goto label_3a2500;
        case 0x3a2504u: goto label_3a2504;
        case 0x3a2508u: goto label_3a2508;
        case 0x3a250cu: goto label_3a250c;
        case 0x3a2510u: goto label_3a2510;
        case 0x3a2514u: goto label_3a2514;
        case 0x3a2518u: goto label_3a2518;
        case 0x3a251cu: goto label_3a251c;
        case 0x3a2520u: goto label_3a2520;
        case 0x3a2524u: goto label_3a2524;
        case 0x3a2528u: goto label_3a2528;
        case 0x3a252cu: goto label_3a252c;
        case 0x3a2530u: goto label_3a2530;
        case 0x3a2534u: goto label_3a2534;
        case 0x3a2538u: goto label_3a2538;
        case 0x3a253cu: goto label_3a253c;
        case 0x3a2540u: goto label_3a2540;
        case 0x3a2544u: goto label_3a2544;
        case 0x3a2548u: goto label_3a2548;
        case 0x3a254cu: goto label_3a254c;
        case 0x3a2550u: goto label_3a2550;
        case 0x3a2554u: goto label_3a2554;
        case 0x3a2558u: goto label_3a2558;
        case 0x3a255cu: goto label_3a255c;
        case 0x3a2560u: goto label_3a2560;
        case 0x3a2564u: goto label_3a2564;
        case 0x3a2568u: goto label_3a2568;
        case 0x3a256cu: goto label_3a256c;
        case 0x3a2570u: goto label_3a2570;
        case 0x3a2574u: goto label_3a2574;
        case 0x3a2578u: goto label_3a2578;
        case 0x3a257cu: goto label_3a257c;
        case 0x3a2580u: goto label_3a2580;
        case 0x3a2584u: goto label_3a2584;
        case 0x3a2588u: goto label_3a2588;
        case 0x3a258cu: goto label_3a258c;
        case 0x3a2590u: goto label_3a2590;
        case 0x3a2594u: goto label_3a2594;
        case 0x3a2598u: goto label_3a2598;
        case 0x3a259cu: goto label_3a259c;
        case 0x3a25a0u: goto label_3a25a0;
        case 0x3a25a4u: goto label_3a25a4;
        case 0x3a25a8u: goto label_3a25a8;
        case 0x3a25acu: goto label_3a25ac;
        case 0x3a25b0u: goto label_3a25b0;
        case 0x3a25b4u: goto label_3a25b4;
        case 0x3a25b8u: goto label_3a25b8;
        case 0x3a25bcu: goto label_3a25bc;
        case 0x3a25c0u: goto label_3a25c0;
        case 0x3a25c4u: goto label_3a25c4;
        case 0x3a25c8u: goto label_3a25c8;
        case 0x3a25ccu: goto label_3a25cc;
        case 0x3a25d0u: goto label_3a25d0;
        case 0x3a25d4u: goto label_3a25d4;
        case 0x3a25d8u: goto label_3a25d8;
        case 0x3a25dcu: goto label_3a25dc;
        case 0x3a25e0u: goto label_3a25e0;
        case 0x3a25e4u: goto label_3a25e4;
        case 0x3a25e8u: goto label_3a25e8;
        case 0x3a25ecu: goto label_3a25ec;
        case 0x3a25f0u: goto label_3a25f0;
        case 0x3a25f4u: goto label_3a25f4;
        case 0x3a25f8u: goto label_3a25f8;
        case 0x3a25fcu: goto label_3a25fc;
        case 0x3a2600u: goto label_3a2600;
        case 0x3a2604u: goto label_3a2604;
        case 0x3a2608u: goto label_3a2608;
        case 0x3a260cu: goto label_3a260c;
        case 0x3a2610u: goto label_3a2610;
        case 0x3a2614u: goto label_3a2614;
        case 0x3a2618u: goto label_3a2618;
        case 0x3a261cu: goto label_3a261c;
        case 0x3a2620u: goto label_3a2620;
        case 0x3a2624u: goto label_3a2624;
        case 0x3a2628u: goto label_3a2628;
        case 0x3a262cu: goto label_3a262c;
        case 0x3a2630u: goto label_3a2630;
        case 0x3a2634u: goto label_3a2634;
        case 0x3a2638u: goto label_3a2638;
        case 0x3a263cu: goto label_3a263c;
        case 0x3a2640u: goto label_3a2640;
        case 0x3a2644u: goto label_3a2644;
        case 0x3a2648u: goto label_3a2648;
        case 0x3a264cu: goto label_3a264c;
        case 0x3a2650u: goto label_3a2650;
        case 0x3a2654u: goto label_3a2654;
        case 0x3a2658u: goto label_3a2658;
        case 0x3a265cu: goto label_3a265c;
        case 0x3a2660u: goto label_3a2660;
        case 0x3a2664u: goto label_3a2664;
        case 0x3a2668u: goto label_3a2668;
        case 0x3a266cu: goto label_3a266c;
        case 0x3a2670u: goto label_3a2670;
        case 0x3a2674u: goto label_3a2674;
        case 0x3a2678u: goto label_3a2678;
        case 0x3a267cu: goto label_3a267c;
        case 0x3a2680u: goto label_3a2680;
        case 0x3a2684u: goto label_3a2684;
        case 0x3a2688u: goto label_3a2688;
        case 0x3a268cu: goto label_3a268c;
        case 0x3a2690u: goto label_3a2690;
        case 0x3a2694u: goto label_3a2694;
        case 0x3a2698u: goto label_3a2698;
        case 0x3a269cu: goto label_3a269c;
        case 0x3a26a0u: goto label_3a26a0;
        case 0x3a26a4u: goto label_3a26a4;
        case 0x3a26a8u: goto label_3a26a8;
        case 0x3a26acu: goto label_3a26ac;
        case 0x3a26b0u: goto label_3a26b0;
        case 0x3a26b4u: goto label_3a26b4;
        case 0x3a26b8u: goto label_3a26b8;
        case 0x3a26bcu: goto label_3a26bc;
        case 0x3a26c0u: goto label_3a26c0;
        case 0x3a26c4u: goto label_3a26c4;
        case 0x3a26c8u: goto label_3a26c8;
        case 0x3a26ccu: goto label_3a26cc;
        case 0x3a26d0u: goto label_3a26d0;
        case 0x3a26d4u: goto label_3a26d4;
        case 0x3a26d8u: goto label_3a26d8;
        case 0x3a26dcu: goto label_3a26dc;
        case 0x3a26e0u: goto label_3a26e0;
        case 0x3a26e4u: goto label_3a26e4;
        case 0x3a26e8u: goto label_3a26e8;
        case 0x3a26ecu: goto label_3a26ec;
        case 0x3a26f0u: goto label_3a26f0;
        case 0x3a26f4u: goto label_3a26f4;
        case 0x3a26f8u: goto label_3a26f8;
        case 0x3a26fcu: goto label_3a26fc;
        case 0x3a2700u: goto label_3a2700;
        case 0x3a2704u: goto label_3a2704;
        case 0x3a2708u: goto label_3a2708;
        case 0x3a270cu: goto label_3a270c;
        case 0x3a2710u: goto label_3a2710;
        case 0x3a2714u: goto label_3a2714;
        case 0x3a2718u: goto label_3a2718;
        case 0x3a271cu: goto label_3a271c;
        case 0x3a2720u: goto label_3a2720;
        case 0x3a2724u: goto label_3a2724;
        case 0x3a2728u: goto label_3a2728;
        case 0x3a272cu: goto label_3a272c;
        case 0x3a2730u: goto label_3a2730;
        case 0x3a2734u: goto label_3a2734;
        case 0x3a2738u: goto label_3a2738;
        case 0x3a273cu: goto label_3a273c;
        case 0x3a2740u: goto label_3a2740;
        case 0x3a2744u: goto label_3a2744;
        case 0x3a2748u: goto label_3a2748;
        case 0x3a274cu: goto label_3a274c;
        case 0x3a2750u: goto label_3a2750;
        case 0x3a2754u: goto label_3a2754;
        case 0x3a2758u: goto label_3a2758;
        case 0x3a275cu: goto label_3a275c;
        case 0x3a2760u: goto label_3a2760;
        case 0x3a2764u: goto label_3a2764;
        case 0x3a2768u: goto label_3a2768;
        case 0x3a276cu: goto label_3a276c;
        case 0x3a2770u: goto label_3a2770;
        case 0x3a2774u: goto label_3a2774;
        case 0x3a2778u: goto label_3a2778;
        case 0x3a277cu: goto label_3a277c;
        case 0x3a2780u: goto label_3a2780;
        case 0x3a2784u: goto label_3a2784;
        case 0x3a2788u: goto label_3a2788;
        case 0x3a278cu: goto label_3a278c;
        case 0x3a2790u: goto label_3a2790;
        case 0x3a2794u: goto label_3a2794;
        case 0x3a2798u: goto label_3a2798;
        case 0x3a279cu: goto label_3a279c;
        case 0x3a27a0u: goto label_3a27a0;
        case 0x3a27a4u: goto label_3a27a4;
        case 0x3a27a8u: goto label_3a27a8;
        case 0x3a27acu: goto label_3a27ac;
        case 0x3a27b0u: goto label_3a27b0;
        case 0x3a27b4u: goto label_3a27b4;
        case 0x3a27b8u: goto label_3a27b8;
        case 0x3a27bcu: goto label_3a27bc;
        case 0x3a27c0u: goto label_3a27c0;
        case 0x3a27c4u: goto label_3a27c4;
        case 0x3a27c8u: goto label_3a27c8;
        case 0x3a27ccu: goto label_3a27cc;
        case 0x3a27d0u: goto label_3a27d0;
        case 0x3a27d4u: goto label_3a27d4;
        case 0x3a27d8u: goto label_3a27d8;
        case 0x3a27dcu: goto label_3a27dc;
        case 0x3a27e0u: goto label_3a27e0;
        case 0x3a27e4u: goto label_3a27e4;
        case 0x3a27e8u: goto label_3a27e8;
        case 0x3a27ecu: goto label_3a27ec;
        case 0x3a27f0u: goto label_3a27f0;
        case 0x3a27f4u: goto label_3a27f4;
        case 0x3a27f8u: goto label_3a27f8;
        case 0x3a27fcu: goto label_3a27fc;
        case 0x3a2800u: goto label_3a2800;
        case 0x3a2804u: goto label_3a2804;
        case 0x3a2808u: goto label_3a2808;
        case 0x3a280cu: goto label_3a280c;
        case 0x3a2810u: goto label_3a2810;
        case 0x3a2814u: goto label_3a2814;
        case 0x3a2818u: goto label_3a2818;
        case 0x3a281cu: goto label_3a281c;
        case 0x3a2820u: goto label_3a2820;
        case 0x3a2824u: goto label_3a2824;
        case 0x3a2828u: goto label_3a2828;
        case 0x3a282cu: goto label_3a282c;
        case 0x3a2830u: goto label_3a2830;
        case 0x3a2834u: goto label_3a2834;
        case 0x3a2838u: goto label_3a2838;
        case 0x3a283cu: goto label_3a283c;
        case 0x3a2840u: goto label_3a2840;
        case 0x3a2844u: goto label_3a2844;
        case 0x3a2848u: goto label_3a2848;
        case 0x3a284cu: goto label_3a284c;
        case 0x3a2850u: goto label_3a2850;
        case 0x3a2854u: goto label_3a2854;
        case 0x3a2858u: goto label_3a2858;
        case 0x3a285cu: goto label_3a285c;
        case 0x3a2860u: goto label_3a2860;
        case 0x3a2864u: goto label_3a2864;
        case 0x3a2868u: goto label_3a2868;
        case 0x3a286cu: goto label_3a286c;
        case 0x3a2870u: goto label_3a2870;
        case 0x3a2874u: goto label_3a2874;
        case 0x3a2878u: goto label_3a2878;
        case 0x3a287cu: goto label_3a287c;
        case 0x3a2880u: goto label_3a2880;
        case 0x3a2884u: goto label_3a2884;
        case 0x3a2888u: goto label_3a2888;
        case 0x3a288cu: goto label_3a288c;
        case 0x3a2890u: goto label_3a2890;
        case 0x3a2894u: goto label_3a2894;
        case 0x3a2898u: goto label_3a2898;
        case 0x3a289cu: goto label_3a289c;
        case 0x3a28a0u: goto label_3a28a0;
        case 0x3a28a4u: goto label_3a28a4;
        case 0x3a28a8u: goto label_3a28a8;
        case 0x3a28acu: goto label_3a28ac;
        case 0x3a28b0u: goto label_3a28b0;
        case 0x3a28b4u: goto label_3a28b4;
        case 0x3a28b8u: goto label_3a28b8;
        case 0x3a28bcu: goto label_3a28bc;
        case 0x3a28c0u: goto label_3a28c0;
        case 0x3a28c4u: goto label_3a28c4;
        case 0x3a28c8u: goto label_3a28c8;
        case 0x3a28ccu: goto label_3a28cc;
        case 0x3a28d0u: goto label_3a28d0;
        case 0x3a28d4u: goto label_3a28d4;
        case 0x3a28d8u: goto label_3a28d8;
        case 0x3a28dcu: goto label_3a28dc;
        case 0x3a28e0u: goto label_3a28e0;
        case 0x3a28e4u: goto label_3a28e4;
        case 0x3a28e8u: goto label_3a28e8;
        case 0x3a28ecu: goto label_3a28ec;
        case 0x3a28f0u: goto label_3a28f0;
        case 0x3a28f4u: goto label_3a28f4;
        case 0x3a28f8u: goto label_3a28f8;
        case 0x3a28fcu: goto label_3a28fc;
        case 0x3a2900u: goto label_3a2900;
        case 0x3a2904u: goto label_3a2904;
        case 0x3a2908u: goto label_3a2908;
        case 0x3a290cu: goto label_3a290c;
        case 0x3a2910u: goto label_3a2910;
        case 0x3a2914u: goto label_3a2914;
        case 0x3a2918u: goto label_3a2918;
        case 0x3a291cu: goto label_3a291c;
        case 0x3a2920u: goto label_3a2920;
        case 0x3a2924u: goto label_3a2924;
        case 0x3a2928u: goto label_3a2928;
        case 0x3a292cu: goto label_3a292c;
        case 0x3a2930u: goto label_3a2930;
        case 0x3a2934u: goto label_3a2934;
        case 0x3a2938u: goto label_3a2938;
        case 0x3a293cu: goto label_3a293c;
        case 0x3a2940u: goto label_3a2940;
        case 0x3a2944u: goto label_3a2944;
        case 0x3a2948u: goto label_3a2948;
        case 0x3a294cu: goto label_3a294c;
        case 0x3a2950u: goto label_3a2950;
        case 0x3a2954u: goto label_3a2954;
        case 0x3a2958u: goto label_3a2958;
        case 0x3a295cu: goto label_3a295c;
        case 0x3a2960u: goto label_3a2960;
        case 0x3a2964u: goto label_3a2964;
        case 0x3a2968u: goto label_3a2968;
        case 0x3a296cu: goto label_3a296c;
        case 0x3a2970u: goto label_3a2970;
        case 0x3a2974u: goto label_3a2974;
        case 0x3a2978u: goto label_3a2978;
        case 0x3a297cu: goto label_3a297c;
        case 0x3a2980u: goto label_3a2980;
        case 0x3a2984u: goto label_3a2984;
        case 0x3a2988u: goto label_3a2988;
        case 0x3a298cu: goto label_3a298c;
        case 0x3a2990u: goto label_3a2990;
        case 0x3a2994u: goto label_3a2994;
        case 0x3a2998u: goto label_3a2998;
        case 0x3a299cu: goto label_3a299c;
        case 0x3a29a0u: goto label_3a29a0;
        case 0x3a29a4u: goto label_3a29a4;
        case 0x3a29a8u: goto label_3a29a8;
        case 0x3a29acu: goto label_3a29ac;
        case 0x3a29b0u: goto label_3a29b0;
        case 0x3a29b4u: goto label_3a29b4;
        case 0x3a29b8u: goto label_3a29b8;
        case 0x3a29bcu: goto label_3a29bc;
        case 0x3a29c0u: goto label_3a29c0;
        case 0x3a29c4u: goto label_3a29c4;
        case 0x3a29c8u: goto label_3a29c8;
        case 0x3a29ccu: goto label_3a29cc;
        case 0x3a29d0u: goto label_3a29d0;
        case 0x3a29d4u: goto label_3a29d4;
        case 0x3a29d8u: goto label_3a29d8;
        case 0x3a29dcu: goto label_3a29dc;
        case 0x3a29e0u: goto label_3a29e0;
        case 0x3a29e4u: goto label_3a29e4;
        case 0x3a29e8u: goto label_3a29e8;
        case 0x3a29ecu: goto label_3a29ec;
        case 0x3a29f0u: goto label_3a29f0;
        case 0x3a29f4u: goto label_3a29f4;
        case 0x3a29f8u: goto label_3a29f8;
        case 0x3a29fcu: goto label_3a29fc;
        case 0x3a2a00u: goto label_3a2a00;
        case 0x3a2a04u: goto label_3a2a04;
        case 0x3a2a08u: goto label_3a2a08;
        case 0x3a2a0cu: goto label_3a2a0c;
        case 0x3a2a10u: goto label_3a2a10;
        case 0x3a2a14u: goto label_3a2a14;
        case 0x3a2a18u: goto label_3a2a18;
        case 0x3a2a1cu: goto label_3a2a1c;
        case 0x3a2a20u: goto label_3a2a20;
        case 0x3a2a24u: goto label_3a2a24;
        case 0x3a2a28u: goto label_3a2a28;
        case 0x3a2a2cu: goto label_3a2a2c;
        case 0x3a2a30u: goto label_3a2a30;
        case 0x3a2a34u: goto label_3a2a34;
        case 0x3a2a38u: goto label_3a2a38;
        case 0x3a2a3cu: goto label_3a2a3c;
        case 0x3a2a40u: goto label_3a2a40;
        case 0x3a2a44u: goto label_3a2a44;
        case 0x3a2a48u: goto label_3a2a48;
        case 0x3a2a4cu: goto label_3a2a4c;
        case 0x3a2a50u: goto label_3a2a50;
        case 0x3a2a54u: goto label_3a2a54;
        default: break;
    }

    ctx->pc = 0x3a22c0u;

label_3a22c0:
    // 0x3a22c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a22c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3a22c4:
    // 0x3a22c4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3a22c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3a22c8:
    // 0x3a22c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3a22c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3a22cc:
    // 0x3a22cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a22ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3a22d0:
    // 0x3a22d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a22d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a22d4:
    // 0x3a22d4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3a22d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3a22d8:
    // 0x3a22d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3a22d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a22dc:
    // 0x3a22dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a22dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a22e0:
    // 0x3a22e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3a22e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3a22e4:
    // 0x3a22e4: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x3a22e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3a22e8:
    // 0x3a22e8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3a22e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_3a22ec:
    // 0x3a22ec: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
label_3a22f0:
    if (ctx->pc == 0x3A22F0u) {
        ctx->pc = 0x3A22F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A22ECu;
        // 0x3a22f0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A22F4u;
        goto label_3a22f4;
    }
    ctx->pc = 0x3A22ECu;
    {
        const bool branch_taken_0x3a22ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A22F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A22ECu;
        // 0x3a22f0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a22ec) {
            ctx->pc = 0x3A235Cu;
            goto label_3a235c;
        }
    }
    ctx->pc = 0x3A22F4u;
label_3a22f4:
    // 0x3a22f4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3a22f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3a22f8:
    // 0x3a22f8: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x3a22f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_3a22fc:
    // 0x3a22fc: 0x2445e880  addiu       $a1, $v0, -0x1780
    ctx->pc = 0x3a22fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3a2300:
    // 0x3a2300: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3a2300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3a2304:
    // 0x3a2304: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3a2304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3a2308:
    // 0x3a2308: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3a2308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_3a230c:
    // 0x3a230c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3a2310:
    if (ctx->pc == 0x3A2310u) {
        ctx->pc = 0x3A2310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A230Cu;
        // 0x3a2310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2314u;
        goto label_3a2314;
    }
    ctx->pc = 0x3A230Cu;
    {
        const bool branch_taken_0x3a230c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A230Cu;
        // 0x3a2310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a230c) {
            ctx->pc = 0x3A238Cu;
            goto label_3a238c;
        }
    }
    ctx->pc = 0x3A2314u;
label_3a2314:
    // 0x3a2314: 0x8ca20108  lw          $v0, 0x108($a1)
    ctx->pc = 0x3a2314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
label_3a2318:
    // 0x3a2318: 0x26440018  addiu       $a0, $s2, 0x18
    ctx->pc = 0x3a2318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_3a231c:
    // 0x3a231c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a2320:
    if (ctx->pc == 0x3A2320u) {
        ctx->pc = 0x3A2320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A231Cu;
        // 0x3a2320: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2324u;
        goto label_3a2324;
    }
    ctx->pc = 0x3A231Cu;
    {
        const bool branch_taken_0x3a231c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A231Cu;
        // 0x3a2320: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a231c) {
            ctx->pc = 0x3A2334u;
            goto label_3a2334;
        }
    }
    ctx->pc = 0x3A2324u;
label_3a2324:
    // 0x3a2324: 0x0  nop
    ctx->pc = 0x3a2324u;
    // NOP
label_3a2328:
    // 0x3a2328: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3a2328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3a232c:
    // 0x3a232c: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3a232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3a2330:
    // 0x3a2330: 0x26440018  addiu       $a0, $s2, 0x18
    ctx->pc = 0x3a2330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_3a2334:
    // 0x3a2334: 0x40f809  jalr        $v0
label_3a2338:
    if (ctx->pc == 0x3A2338u) {
        ctx->pc = 0x3A2338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2334u;
        // 0x3a2338: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A233Cu;
        goto label_3a233c;
    }
    ctx->pc = 0x3A2334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A233Cu);
        ctx->pc = 0x3A2338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2334u;
        // 0x3a2338: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2334u, 0x3A233Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A233Cu;
label_3a233c:
    // 0x3a233c: 0xac530014  sw          $s3, 0x14($v0)
    ctx->pc = 0x3a233cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
label_3a2340:
    // 0x3a2340: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x3a2340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
label_3a2344:
    // 0x3a2344: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x3a2344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
label_3a2348:
    // 0x3a2348: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3a2348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3a234c:
    // 0x3a234c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3a234cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_3a2350:
    // 0x3a2350: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3a2350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_3a2354:
    // 0x3a2354: 0x10000010  b           . + 4 + (0x10 << 2)
label_3a2358:
    if (ctx->pc == 0x3A2358u) {
        ctx->pc = 0x3A2358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2354u;
        // 0x3a2358: 0xac510010  sw          $s1, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A235Cu;
        goto label_3a235c;
    }
    ctx->pc = 0x3A2354u;
    {
        const bool branch_taken_0x3a2354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2354u;
        // 0x3a2358: 0xac510010  sw          $s1, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2354) {
            ctx->pc = 0x3A2398u;
            goto label_3a2398;
        }
    }
    ctx->pc = 0x3A235Cu;
label_3a235c:
    // 0x3a235c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x3a235cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_3a2360:
    // 0x3a2360: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3a2364:
    if (ctx->pc == 0x3A2364u) {
        ctx->pc = 0x3A2364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2360u;
        // 0x3a2364: 0x3c030200  lui         $v1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2368u;
        goto label_3a2368;
    }
    ctx->pc = 0x3A2360u;
    {
        const bool branch_taken_0x3a2360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2360u;
        // 0x3a2364: 0x3c030200  lui         $v1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2360) {
            ctx->pc = 0x3A2380u;
            goto label_3a2380;
        }
    }
    ctx->pc = 0x3A2368u;
label_3a2368:
    // 0x3a2368: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x3a2368u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3a236c:
    // 0x3a236c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3a236cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3a2370:
    // 0x3a2370: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a2370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3a2374:
    // 0x3a2374: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_3a2378:
    if (ctx->pc == 0x3A2378u) {
        ctx->pc = 0x3A2378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2374u;
        // 0x3a2378: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A237Cu;
        goto label_3a237c;
    }
    ctx->pc = 0x3A2374u;
    {
        const bool branch_taken_0x3a2374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2374u;
        // 0x3a2378: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2374) {
            ctx->pc = 0x3A2328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2328;
        }
    }
    ctx->pc = 0x3A237Cu;
label_3a237c:
    // 0x3a237c: 0x0  nop
    ctx->pc = 0x3a237cu;
    // NOP
label_3a2380:
    // 0x3a2380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a2380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a2384:
    // 0x3a2384: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a2384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a2388:
    // 0x3a2388: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3a2388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a238c:
    // 0x3a238c: 0xc1045e4  jal         func_411790
label_3a2390:
    if (ctx->pc == 0x3A2390u) {
        ctx->pc = 0x3A2390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A238Cu;
        // 0x3a2390: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2394u;
        goto label_3a2394;
    }
    ctx->pc = 0x3A238Cu;
    SET_GPR_U32(ctx, 31, 0x3A2394u);
    ctx->pc = 0x3A2390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A238Cu;
    // 0x3a2390: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x411790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411790u, 0x3A238Cu, 0x3A2394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2394u;
label_3a2394:
    // 0x3a2394: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3a2394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3a2398:
    // 0x3a2398: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3a2398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a239c:
    // 0x3a239c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3a239cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a23a0:
    // 0x3a23a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3a23a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a23a4:
    // 0x3a23a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a23a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a23a8:
    // 0x3a23a8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3a23a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a23ac:
    // 0x3a23ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a23acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a23b0:
    // 0x3a23b0: 0x3e00008  jr          $ra
label_3a23b4:
    if (ctx->pc == 0x3A23B4u) {
        ctx->pc = 0x3A23B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A23B0u;
        // 0x3a23b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A23B8u;
        goto label_3a23b8;
    }
    ctx->pc = 0x3A23B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A23B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A23B0u;
        // 0x3a23b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A23B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A23B8u;
label_3a23b8:
    // 0x3a23b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a23b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3a23bc:
    // 0x3a23bc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3a23bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3a23c0:
    // 0x3a23c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3a23c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3a23c4:
    // 0x3a23c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3a23c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a23c8:
    // 0x3a23c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a23c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3a23cc:
    // 0x3a23cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a23ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a23d0:
    // 0x3a23d0: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x3a23d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_3a23d4:
    // 0x3a23d4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3a23d8:
    if (ctx->pc == 0x3A23D8u) {
        ctx->pc = 0x3A23D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A23D4u;
        // 0x3a23d8: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A23DCu;
        goto label_3a23dc;
    }
    ctx->pc = 0x3A23D4u;
    {
        const bool branch_taken_0x3a23d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a23d4) {
            ctx->pc = 0x3A23D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A23D4u;
            // 0x3a23d8: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A23E8u;
            goto label_3a23e8;
        }
    }
    ctx->pc = 0x3A23DCu;
label_3a23dc:
    // 0x3a23dc: 0xc110e98  jal         func_443A60
label_3a23e0:
    if (ctx->pc == 0x3A23E0u) {
        ctx->pc = 0x3A23E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A23DCu;
        // 0x3a23e0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A23E4u;
        goto label_3a23e4;
    }
    ctx->pc = 0x3A23DCu;
    SET_GPR_U32(ctx, 31, 0x3A23E4u);
    ctx->pc = 0x3A23E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A23DCu;
    // 0x3a23e0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x3A23DCu, 0x3A23E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A23E4u;
label_3a23e4:
    // 0x3a23e4: 0x8e510040  lw          $s1, 0x40($s2)
    ctx->pc = 0x3a23e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_3a23e8:
    // 0x3a23e8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_3a23ec:
    if (ctx->pc == 0x3A23ECu) {
        ctx->pc = 0x3A23ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A23E8u;
        // 0x3a23ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A23F0u;
        goto label_3a23f0;
    }
    ctx->pc = 0x3A23E8u;
    {
        const bool branch_taken_0x3a23e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A23ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A23E8u;
        // 0x3a23ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a23e8) {
            ctx->pc = 0x3A23F4u;
            goto label_3a23f4;
        }
    }
    ctx->pc = 0x3A23F0u;
label_3a23f0:
    // 0x3a23f0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x3a23f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a23f4:
    // 0x3a23f4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_3a23f8:
    if (ctx->pc == 0x3A23F8u) {
        ctx->pc = 0x3A23F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A23F4u;
        // 0x3a23f8: 0xaf80bec4  sw          $zero, -0x413C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A23FCu;
        goto label_3a23fc;
    }
    ctx->pc = 0x3A23F4u;
    {
        const bool branch_taken_0x3a23f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A23F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A23F4u;
        // 0x3a23f8: 0xaf80bec4  sw          $zero, -0x413C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a23f4) {
            ctx->pc = 0x3A241Cu;
            goto label_3a241c;
        }
    }
    ctx->pc = 0x3A23FCu;
label_3a23fc:
    // 0x3a23fc: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x3a23fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
label_3a2400:
    // 0x3a2400: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3a2400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_3a2404:
    // 0x3a2404: 0x38430005  xori        $v1, $v0, 0x5
    ctx->pc = 0x3a2404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_3a2408:
    // 0x3a2408: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a2408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3a240c:
    // 0x3a240c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3a240cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3a2410:
    // 0x3a2410: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3a2410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3a2414:
    // 0x3a2414: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a2414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3a2418:
    // 0x3a2418: 0xaf82bec4  sw          $v0, -0x413C($gp)
    ctx->pc = 0x3a2418u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 2));
label_3a241c:
    // 0x3a241c: 0x8f82bec0  lw          $v0, -0x4140($gp)
    ctx->pc = 0x3a241cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950592)));
label_3a2420:
    // 0x3a2420: 0x12020038  beq         $s0, $v0, . + 4 + (0x38 << 2)
label_3a2424:
    if (ctx->pc == 0x3A2424u) {
        ctx->pc = 0x3A2424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2420u;
        // 0x3a2424: 0x8f82bec4  lw          $v0, -0x413C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2428u;
        goto label_3a2428;
    }
    ctx->pc = 0x3A2420u;
    {
        const bool branch_taken_0x3a2420 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A2424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2420u;
        // 0x3a2424: 0x8f82bec4  lw          $v0, -0x413C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2420) {
            ctx->pc = 0x3A2504u;
            goto label_3a2504;
        }
    }
    ctx->pc = 0x3A2428u;
label_3a2428:
    // 0x3a2428: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_3a242c:
    if (ctx->pc == 0x3A242Cu) {
        ctx->pc = 0x3A242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2428u;
        // 0x3a242c: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2430u;
        goto label_3a2430;
    }
    ctx->pc = 0x3A2428u;
    {
        const bool branch_taken_0x3a2428 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2428u;
        // 0x3a242c: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2428) {
            ctx->pc = 0x3A2450u;
            goto label_3a2450;
        }
    }
    ctx->pc = 0x3A2430u;
label_3a2430:
    // 0x3a2430: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3a2430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3a2434:
    // 0x3a2434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a2434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a2438:
    // 0x3a2438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a2438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a243c:
    // 0x3a243c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a243cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3a2440:
    // 0x3a2440: 0xc110b7e  jal         func_442DF8
label_3a2444:
    if (ctx->pc == 0x3A2444u) {
        ctx->pc = 0x3A2444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2440u;
        // 0x3a2444: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2448u;
        goto label_3a2448;
    }
    ctx->pc = 0x3A2440u;
    SET_GPR_U32(ctx, 31, 0x3A2448u);
    ctx->pc = 0x3A2444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2440u;
    // 0x3a2444: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x3A2440u, 0x3A2448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2448u;
label_3a2448:
    // 0x3a2448: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a244c:
    if (ctx->pc == 0x3A244Cu) {
        ctx->pc = 0x3A244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2448u;
        // 0x3a244c: 0xaf90bec0  sw          $s0, -0x4140($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2450u;
        goto label_3a2450;
    }
    ctx->pc = 0x3A2448u;
    {
        const bool branch_taken_0x3a2448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2448u;
        // 0x3a244c: 0xaf90bec0  sw          $s0, -0x4140($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2448) {
            ctx->pc = 0x3A2460u;
            goto label_3a2460;
        }
    }
    ctx->pc = 0x3A2450u;
label_3a2450:
    // 0x3a2450: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x3a2450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_3a2454:
    // 0x3a2454: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a2454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3a2458:
    // 0x3a2458: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x3a2458u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
label_3a245c:
    // 0x3a245c: 0xaf90bec0  sw          $s0, -0x4140($gp)
    ctx->pc = 0x3a245cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 16));
label_3a2460:
    // 0x3a2460: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
label_3a2464:
    if (ctx->pc == 0x3A2464u) {
        ctx->pc = 0x3A2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2460u;
        // 0x3a2464: 0x2404fe1f  addiu       $a0, $zero, -0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2468u;
        goto label_3a2468;
    }
    ctx->pc = 0x3A2460u;
    {
        const bool branch_taken_0x3a2460 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2460u;
        // 0x3a2464: 0x2404fe1f  addiu       $a0, $zero, -0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2460) {
            ctx->pc = 0x3A2500u;
            goto label_3a2500;
        }
    }
    ctx->pc = 0x3A2468u;
label_3a2468:
    // 0x3a2468: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x3a2468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3a246c:
    // 0x3a246c: 0xdf82ae68  ld          $v0, -0x5198($gp)
    ctx->pc = 0x3a246cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
label_3a2470:
    // 0x3a2470: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3a2470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3a2474:
    // 0x3a2474: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3a2474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_3a2478:
    // 0x3a2478: 0x34010006  ori         $at, $zero, 0x6
    ctx->pc = 0x3a2478u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)6);
label_3a247c:
    // 0x3a247c: 0x5023000e  beql        $at, $v1, . + 4 + (0xE << 2)
label_3a2480:
    if (ctx->pc == 0x3A2480u) {
        ctx->pc = 0x3A2480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A247Cu;
        // 0x3a2480: 0x34420160  ori         $v0, $v0, 0x160 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)352);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2484u;
        goto label_3a2484;
    }
    ctx->pc = 0x3A247Cu;
    {
        const bool branch_taken_0x3a247c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a247c) {
            ctx->pc = 0x3A2480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A247Cu;
            // 0x3a2480: 0x34420160  ori         $v0, $v0, 0x160 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)352);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A24B8u;
            goto label_3a24b8;
        }
    }
    ctx->pc = 0x3A2484u;
label_3a2484:
    // 0x3a2484: 0x34010005  ori         $at, $zero, 0x5
    ctx->pc = 0x3a2484u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)5);
label_3a2488:
    // 0x3a2488: 0x5023000b  beql        $at, $v1, . + 4 + (0xB << 2)
label_3a248c:
    if (ctx->pc == 0x3A248Cu) {
        ctx->pc = 0x3A248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2488u;
        // 0x3a248c: 0x344200c0  ori         $v0, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2490u;
        goto label_3a2490;
    }
    ctx->pc = 0x3A2488u;
    {
        const bool branch_taken_0x3a2488 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a2488) {
            ctx->pc = 0x3A248Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2488u;
            // 0x3a248c: 0x344200c0  ori         $v0, $v0, 0xC0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A24B8u;
            goto label_3a24b8;
        }
    }
    ctx->pc = 0x3A2490u;
label_3a2490:
    // 0x3a2490: 0x34010004  ori         $at, $zero, 0x4
    ctx->pc = 0x3a2490u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)4);
label_3a2494:
    // 0x3a2494: 0x50230008  beql        $at, $v1, . + 4 + (0x8 << 2)
label_3a2498:
    if (ctx->pc == 0x3A2498u) {
        ctx->pc = 0x3A2498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2494u;
        // 0x3a2498: 0x34420120  ori         $v0, $v0, 0x120 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A249Cu;
        goto label_3a249c;
    }
    ctx->pc = 0x3A2494u;
    {
        const bool branch_taken_0x3a2494 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a2494) {
            ctx->pc = 0x3A2498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2494u;
            // 0x3a2498: 0x34420120  ori         $v0, $v0, 0x120 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A24B8u;
            goto label_3a24b8;
        }
    }
    ctx->pc = 0x3A249Cu;
label_3a249c:
    // 0x3a249c: 0x34010003  ori         $at, $zero, 0x3
    ctx->pc = 0x3a249cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)3);
label_3a24a0:
    // 0x3a24a0: 0x50230005  beql        $at, $v1, . + 4 + (0x5 << 2)
label_3a24a4:
    if (ctx->pc == 0x3A24A4u) {
        ctx->pc = 0x3A24A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A24A0u;
        // 0x3a24a4: 0x34420080  ori         $v0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A24A8u;
        goto label_3a24a8;
    }
    ctx->pc = 0x3A24A0u;
    {
        const bool branch_taken_0x3a24a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a24a0) {
            ctx->pc = 0x3A24A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A24A0u;
            // 0x3a24a4: 0x34420080  ori         $v0, $v0, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A24B8u;
            goto label_3a24b8;
        }
    }
    ctx->pc = 0x3A24A8u;
label_3a24a8:
    // 0x3a24a8: 0x34010002  ori         $at, $zero, 0x2
    ctx->pc = 0x3a24a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)2);
label_3a24ac:
    // 0x3a24ac: 0x50230002  beql        $at, $v1, . + 4 + (0x2 << 2)
label_3a24b0:
    if (ctx->pc == 0x3A24B0u) {
        ctx->pc = 0x3A24B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A24ACu;
        // 0x3a24b0: 0x34420060  ori         $v0, $v0, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A24B4u;
        goto label_3a24b4;
    }
    ctx->pc = 0x3A24ACu;
    {
        const bool branch_taken_0x3a24ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a24ac) {
            ctx->pc = 0x3A24B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A24ACu;
            // 0x3a24b0: 0x34420060  ori         $v0, $v0, 0x60 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A24B8u;
            goto label_3a24b8;
        }
    }
    ctx->pc = 0x3A24B4u;
label_3a24b4:
    // 0x3a24b4: 0x34420000  ori         $v0, $v0, 0x0
    ctx->pc = 0x3a24b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)0);
label_3a24b8:
    // 0x3a24b8: 0x0  nop
    ctx->pc = 0x3a24b8u;
    // NOP
label_3a24bc:
    // 0x3a24bc: 0xff82ae68  sd          $v0, -0x5198($gp)
    ctx->pc = 0x3a24bcu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946408), GPR_U64(ctx, 2));
label_3a24c0:
    // 0x3a24c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a24c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a24c4:
    // 0x3a24c4: 0x30a20f00  andi        $v0, $a1, 0xF00
    ctx->pc = 0x3a24c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3840);
label_3a24c8:
    // 0x3a24c8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3a24c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_3a24cc:
    // 0x3a24cc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_3a24d0:
    if (ctx->pc == 0x3A24D0u) {
        ctx->pc = 0x3A24D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A24CCu;
        // 0x3a24d0: 0xff80ae60  sd          $zero, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A24D4u;
        goto label_3a24d4;
    }
    ctx->pc = 0x3A24CCu;
    {
        const bool branch_taken_0x3a24cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A24D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A24CCu;
        // 0x3a24d0: 0xff80ae60  sd          $zero, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a24cc) {
            ctx->pc = 0x3A24E0u;
            goto label_3a24e0;
        }
    }
    ctx->pc = 0x3A24D4u;
label_3a24d4:
    // 0x3a24d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a24d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a24d8:
    // 0x3a24d8: 0xff82ae60  sd          $v0, -0x51A0($gp)
    ctx->pc = 0x3a24d8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
label_3a24dc:
    // 0x3a24dc: 0x0  nop
    ctx->pc = 0x3a24dcu;
    // NOP
label_3a24e0:
    // 0x3a24e0: 0x30a2f000  andi        $v0, $a1, 0xF000
    ctx->pc = 0x3a24e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)61440);
label_3a24e4:
    // 0x3a24e4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3a24e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3a24e8:
    // 0x3a24e8: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_3a24ec:
    if (ctx->pc == 0x3A24ECu) {
        ctx->pc = 0x3A24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A24E8u;
        // 0x3a24ec: 0x8f82bec4  lw          $v0, -0x413C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A24F0u;
        goto label_3a24f0;
    }
    ctx->pc = 0x3A24E8u;
    {
        const bool branch_taken_0x3a24e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A24E8u;
        // 0x3a24ec: 0x8f82bec4  lw          $v0, -0x413C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a24e8) {
            ctx->pc = 0x3A2504u;
            goto label_3a2504;
        }
    }
    ctx->pc = 0x3A24F0u;
label_3a24f0:
    // 0x3a24f0: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x3a24f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
label_3a24f4:
    // 0x3a24f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a24f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a24f8:
    // 0x3a24f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a24f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3a24fc:
    // 0x3a24fc: 0xff82ae60  sd          $v0, -0x51A0($gp)
    ctx->pc = 0x3a24fcu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
label_3a2500:
    // 0x3a2500: 0x8f82bec4  lw          $v0, -0x413C($gp)
    ctx->pc = 0x3a2500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
label_3a2504:
    // 0x3a2504: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3a2508:
    if (ctx->pc == 0x3A2508u) {
        ctx->pc = 0x3A2508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2504u;
        // 0x3a2508: 0xdf82ae48  ld          $v0, -0x51B8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A250Cu;
        goto label_3a250c;
    }
    ctx->pc = 0x3A2504u;
    {
        const bool branch_taken_0x3a2504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2504u;
        // 0x3a2508: 0xdf82ae48  ld          $v0, -0x51B8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2504) {
            ctx->pc = 0x3A2518u;
            goto label_3a2518;
        }
    }
    ctx->pc = 0x3A250Cu;
label_3a250c:
    // 0x3a250c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a250cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a2510:
    // 0x3a2510: 0x10000003  b           . + 4 + (0x3 << 2)
label_3a2514:
    if (ctx->pc == 0x3A2514u) {
        ctx->pc = 0x3A2514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2510u;
        // 0x3a2514: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2518u;
        goto label_3a2518;
    }
    ctx->pc = 0x3A2510u;
    {
        const bool branch_taken_0x3a2510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2510u;
        // 0x3a2514: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2510) {
            ctx->pc = 0x3A2520u;
            goto label_3a2520;
        }
    }
    ctx->pc = 0x3A2518u;
label_3a2518:
    // 0x3a2518: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3a2518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3a251c:
    // 0x3a251c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a251cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3a2520:
    // 0x3a2520: 0xff82ae48  sd          $v0, -0x51B8($gp)
    ctx->pc = 0x3a2520u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
label_3a2524:
    // 0x3a2524: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a2524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2528:
    // 0x3a2528: 0xc10a322  jal         func_428C88
label_3a252c:
    if (ctx->pc == 0x3A252Cu) {
        ctx->pc = 0x3A252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2528u;
        // 0x3a252c: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2530u;
        goto label_3a2530;
    }
    ctx->pc = 0x3A2528u;
    SET_GPR_U32(ctx, 31, 0x3A2530u);
    ctx->pc = 0x3A252Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2528u;
    // 0x3a252c: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x3A2528u, 0x3A2530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2530u;
label_3a2530:
    // 0x3a2530: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3a2530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_3a2534:
    // 0x3a2534: 0x3463000f  ori         $v1, $v1, 0xF
    ctx->pc = 0x3a2534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
label_3a2538:
    // 0x3a2538: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a2538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a253c:
    // 0x3a253c: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x3a253cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_3a2540:
    // 0x3a2540: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x3a2540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_3a2544:
    // 0x3a2544: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3a2544u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_3a2548:
    // 0x3a2548: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3a2548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3a254c:
    // 0x3a254c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3a254cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_3a2550:
    // 0x3a2550: 0x3c066c01  lui         $a2, 0x6C01
    ctx->pc = 0x3a2550u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27649 << 16));
label_3a2554:
    // 0x3a2554: 0x34c603fa  ori         $a2, $a2, 0x3FA
    ctx->pc = 0x3a2554u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1018);
label_3a2558:
    // 0x3a2558: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3a2558u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_3a255c:
    // 0x3a255c: 0x34c60100  ori         $a2, $a2, 0x100
    ctx->pc = 0x3a255cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
label_3a2560:
    // 0x3a2560: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3a2560u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_3a2564:
    // 0x3a2564: 0x34c60404  ori         $a2, $a2, 0x404
    ctx->pc = 0x3a2564u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1028);
label_3a2568:
    // 0x3a2568: 0x70c42389  pcpyld      $a0, $a2, $a0
    ctx->pc = 0x3a2568u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
label_3a256c:
    // 0x3a256c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x3a256cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_3a2570:
    // 0x3a2570: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3a2570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3a2574:
    // 0x3a2574: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3a2574u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_3a2578:
    // 0x3a2578: 0x92430047  lbu         $v1, 0x47($s2)
    ctx->pc = 0x3a2578u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
label_3a257c:
    // 0x3a257c: 0x8f82bec4  lw          $v0, -0x413C($gp)
    ctx->pc = 0x3a257cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
label_3a2580:
    // 0x3a2580: 0x386300ff  xori        $v1, $v1, 0xFF
    ctx->pc = 0x3a2580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)255);
label_3a2584:
    // 0x3a2584: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3a2584u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3a2588:
    // 0x3a2588: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3a2588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3a258c:
    // 0x3a258c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3a2590:
    if (ctx->pc == 0x3A2590u) {
        ctx->pc = 0x3A2590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A258Cu;
        // 0x3a2590: 0xaf83bec8  sw          $v1, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2594u;
        goto label_3a2594;
    }
    ctx->pc = 0x3A258Cu;
    {
        const bool branch_taken_0x3a258c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A258Cu;
        // 0x3a2590: 0xaf83bec8  sw          $v1, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a258c) {
            ctx->pc = 0x3A25A8u;
            goto label_3a25a8;
        }
    }
    ctx->pc = 0x3A2594u;
label_3a2594:
    // 0x3a2594: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x3a2594u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_3a2598:
    // 0x3a2598: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x3a2598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3a259c:
    // 0x3a259c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a25a0:
    if (ctx->pc == 0x3A25A0u) {
        ctx->pc = 0x3A25A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A259Cu;
        // 0x3a25a0: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A25A4u;
        goto label_3a25a4;
    }
    ctx->pc = 0x3A259Cu;
    {
        const bool branch_taken_0x3a259c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A25A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A259Cu;
        // 0x3a25a0: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a259c) {
            ctx->pc = 0x3A25B4u;
            goto label_3a25b4;
        }
    }
    ctx->pc = 0x3A25A4u;
label_3a25a4:
    // 0x3a25a4: 0x0  nop
    ctx->pc = 0x3a25a4u;
    // NOP
label_3a25a8:
    // 0x3a25a8: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x3a25a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_3a25ac:
    // 0x3a25ac: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x3a25acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_3a25b0:
    // 0x3a25b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a25b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3a25b4:
    // 0x3a25b4: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x3a25b4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
label_3a25b8:
    // 0x3a25b8: 0x92460029  lbu         $a2, 0x29($s2)
    ctx->pc = 0x3a25b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 41)));
label_3a25bc:
    // 0x3a25bc: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3a25bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_3a25c0:
    // 0x3a25c0: 0x8f82ae80  lw          $v0, -0x5180($gp)
    ctx->pc = 0x3a25c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_3a25c4:
    // 0x3a25c4: 0x3c07fc00  lui         $a3, 0xFC00
    ctx->pc = 0x3a25c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64512 << 16));
label_3a25c8:
    // 0x3a25c8: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x3a25c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
label_3a25cc:
    // 0x3a25cc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3a25ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_3a25d0:
    // 0x3a25d0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x3a25d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_3a25d4:
    // 0x3a25d4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3a25d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_3a25d8:
    // 0x3a25d8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x3a25d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_3a25dc:
    // 0x3a25dc: 0xdc64d5d0  ld          $a0, -0x2A30($v1)
    ctx->pc = 0x3a25dcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294956496)));
label_3a25e0:
    // 0x3a25e0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3a25e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_3a25e4:
    // 0x3a25e4: 0x2463d5d0  addiu       $v1, $v1, -0x2A30
    ctx->pc = 0x3a25e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956496));
label_3a25e8:
    // 0x3a25e8: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x3a25e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
label_3a25ec:
    // 0x3a25ec: 0x873024  and         $a2, $a0, $a3
    ctx->pc = 0x3a25ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
label_3a25f0:
    // 0x3a25f0: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x3a25f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
label_3a25f4:
    // 0x3a25f4: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x3a25f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_3a25f8:
    // 0x3a25f8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3a25f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_3a25fc:
    // 0x3a25fc: 0x70a62389  pcpyld      $a0, $a1, $a2
    ctx->pc = 0x3a25fcu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
label_3a2600:
    // 0x3a2600: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3a2600u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_3a2604:
    // 0x3a2604: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x3a2604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_3a2608:
    // 0x3a2608: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x3a2608u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
label_3a260c:
    // 0x3a260c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3a260cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_3a2610:
    // 0x3a2610: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x3a2610u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
label_3a2614:
    // 0x3a2614: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x3a2614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
label_3a2618:
    // 0x3a2618: 0x344203fb  ori         $v0, $v0, 0x3FB
    ctx->pc = 0x3a2618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1019);
label_3a261c:
    // 0x3a261c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3a261cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_3a2620:
    // 0x3a2620: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3a2620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3a2624:
    // 0x3a2624: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3a2624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_3a2628:
    // 0x3a2628: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x3a2628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
label_3a262c:
    // 0x3a262c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a262cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2630:
    // 0x3a2630: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x3a2630u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
label_3a2634:
    // 0x3a2634: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3a2634u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_3a2638:
    // 0x3a2638: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x3a2638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_3a263c:
    // 0x3a263c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3a263cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_3a2640:
    // 0x3a2640: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x3a2640u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_3a2644:
    // 0x3a2644: 0xc7858054  lwc1        $f5, -0x7FAC($gp)
    ctx->pc = 0x3a2644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a2648:
    // 0x3a2648: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3a2648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3a264c:
    // 0x3a264c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3a2650:
    if (ctx->pc == 0x3A2650u) {
        ctx->pc = 0x3A2650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A264Cu;
        // 0x3a2650: 0x92420044  lbu         $v0, 0x44($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2654u;
        goto label_3a2654;
    }
    ctx->pc = 0x3A264Cu;
    {
        const bool branch_taken_0x3a264c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A264Cu;
        // 0x3a2650: 0x92420044  lbu         $v0, 0x44($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a264c) {
            ctx->pc = 0x3A2658u;
            goto label_3a2658;
        }
    }
    ctx->pc = 0x3A2654u;
label_3a2654:
    // 0x3a2654: 0xc785823c  lwc1        $f5, -0x7DC4($gp)
    ctx->pc = 0x3a2654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a2658:
    // 0x3a2658: 0x92430045  lbu         $v1, 0x45($s2)
    ctx->pc = 0x3a2658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
label_3a265c:
    // 0x3a265c: 0x92440046  lbu         $a0, 0x46($s2)
    ctx->pc = 0x3a265cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 70)));
label_3a2660:
    // 0x3a2660: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3a2660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3a2664:
    // 0x3a2664: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3a2664u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_3a2668:
    // 0x3a2668: 0x92450047  lbu         $a1, 0x47($s2)
    ctx->pc = 0x3a2668u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
label_3a266c:
    // 0x3a266c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3a266cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3a2670:
    // 0x3a2670: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3a2670u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3a2674:
    // 0x3a2674: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3a2674u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3a2678:
    // 0x3a2678: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3a2678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3a267c:
    // 0x3a267c: 0xc781823c  lwc1        $f1, -0x7DC4($gp)
    ctx->pc = 0x3a267cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a2680:
    // 0x3a2680: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3a2680u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a2684:
    // 0x3a2684: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a2684u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3a2688:
    // 0x3a2688: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x3a2688u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3a268c:
    // 0x3a268c: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x3a268cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_3a2690:
    // 0x3a2690: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x3a2690u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3a2694:
    // 0x3a2694: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x3a2694u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3a2698:
    // 0x3a2698: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x3a2698u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
label_3a269c:
    // 0x3a269c: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x3a269cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
label_3a26a0:
    // 0x3a26a0: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x3a26a0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_3a26a4:
    // 0x3a26a4: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x3a26a4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_3a26a8:
    // 0x3a26a8: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x3a26a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3a26ac:
    // 0x3a26ac: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x3a26acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3a26b0:
    // 0x3a26b0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x3a26b0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_3a26b4:
    // 0x3a26b4: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x3a26b4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
label_3a26b8:
    // 0x3a26b8: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x3a26b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_3a26bc:
    // 0x3a26bc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3a26bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_3a26c0:
    // 0x3a26c0: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x3a26c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
label_3a26c4:
    // 0x3a26c4: 0x344203fc  ori         $v0, $v0, 0x3FC
    ctx->pc = 0x3a26c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1020);
label_3a26c8:
    // 0x3a26c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3a26c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_3a26cc:
    // 0x3a26cc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3a26ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3a26d0:
    // 0x3a26d0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3a26d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_3a26d4:
    // 0x3a26d4: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x3a26d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
label_3a26d8:
    // 0x3a26d8: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x3a26d8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
label_3a26dc:
    // 0x3a26dc: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x3a26dcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
label_3a26e0:
    // 0x3a26e0: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x3a26e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_3a26e4:
    // 0x3a26e4: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3a26e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_3a26e8:
    // 0x3a26e8: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x3a26e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_3a26ec:
    // 0x3a26ec: 0xc7848240  lwc1        $f4, -0x7DC0($gp)
    ctx->pc = 0x3a26ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a26f0:
    // 0x3a26f0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x3a26f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a26f4:
    // 0x3a26f4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3a26f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a26f8:
    // 0x3a26f8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3a26f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a26fc:
    // 0x3a26fc: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x3a26fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a2700:
    // 0x3a2700: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x3a2700u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_3a2704:
    // 0x3a2704: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3a2704u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3a2708:
    // 0x3a2708: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x3a2708u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3a270c:
    // 0x3a270c: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x3a270cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
label_3a2710:
    // 0x3a2710: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x3a2710u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
label_3a2714:
    // 0x3a2714: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x3a2714u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3a2718:
    // 0x3a2718: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x3a2718u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_3a271c:
    // 0x3a271c: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x3a271cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3a2720:
    // 0x3a2720: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x3a2720u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3a2724:
    // 0x3a2724: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x3a2724u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_3a2728:
    // 0x3a2728: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x3a2728u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
label_3a272c:
    // 0x3a272c: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x3a272cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_3a2730:
    // 0x3a2730: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3a2730u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_3a2734:
    // 0x3a2734: 0x92420028  lbu         $v0, 0x28($s2)
    ctx->pc = 0x3a2734u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
label_3a2738:
    // 0x3a2738: 0x3c046c03  lui         $a0, 0x6C03
    ctx->pc = 0x3a2738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27651 << 16));
label_3a273c:
    // 0x3a273c: 0x348403fd  ori         $a0, $a0, 0x3FD
    ctx->pc = 0x3a273cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1021);
label_3a2740:
    // 0x3a2740: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3a2740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_3a2744:
    // 0x3a2744: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x3a2744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_3a2748:
    // 0x3a2748: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3a2748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_3a274c:
    // 0x3a274c: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x3a274cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
label_3a2750:
    // 0x3a2750: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x3a2750u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
label_3a2754:
    // 0x3a2754: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x3a2754u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_3a2758:
    // 0x3a2758: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x3a2758u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
label_3a275c:
    // 0x3a275c: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x3a275cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
label_3a2760:
    // 0x3a2760: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3a2760u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_3a2764:
    // 0x3a2764: 0x8f83aee0  lw          $v1, -0x5120($gp)
    ctx->pc = 0x3a2764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946528)));
label_3a2768:
    // 0x3a2768: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3a276c:
    if (ctx->pc == 0x3A276Cu) {
        ctx->pc = 0x3A276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2768u;
        // 0x3a276c: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2770u;
        goto label_3a2770;
    }
    ctx->pc = 0x3A2768u;
    {
        const bool branch_taken_0x3a2768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2768u;
        // 0x3a276c: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2768) {
            ctx->pc = 0x3A2778u;
            goto label_3a2778;
        }
    }
    ctx->pc = 0x3A2770u;
label_3a2770:
    // 0x3a2770: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3a2774:
    if (ctx->pc == 0x3A2774u) {
        ctx->pc = 0x3A2774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2770u;
        // 0x3a2774: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2778u;
        goto label_3a2778;
    }
    ctx->pc = 0x3A2770u;
    {
        const bool branch_taken_0x3a2770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2770) {
            ctx->pc = 0x3A2774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2770u;
            // 0x3a2774: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2790u;
            goto label_3a2790;
        }
    }
    ctx->pc = 0x3A2778u;
label_3a2778:
    // 0x3a2778: 0x8f82aee4  lw          $v0, -0x511C($gp)
    ctx->pc = 0x3a2778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946532)));
label_3a277c:
    // 0x3a277c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3a2780:
    if (ctx->pc == 0x3A2780u) {
        ctx->pc = 0x3A2780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A277Cu;
        // 0x3a2780: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2784u;
        goto label_3a2784;
    }
    ctx->pc = 0x3A277Cu;
    {
        const bool branch_taken_0x3a277c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A277Cu;
        // 0x3a2780: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a277c) {
            ctx->pc = 0x3A27B8u;
            goto label_3a27b8;
        }
    }
    ctx->pc = 0x3A2784u;
label_3a2784:
    // 0x3a2784: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_3a2788:
    if (ctx->pc == 0x3A2788u) {
        ctx->pc = 0x3A2788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2784u;
        // 0x3a2788: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A278Cu;
        goto label_3a278c;
    }
    ctx->pc = 0x3A2784u;
    {
        const bool branch_taken_0x3a2784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2784) {
            ctx->pc = 0x3A2788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2784u;
            // 0x3a2788: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A27C0u;
            goto label_3a27c0;
        }
    }
    ctx->pc = 0x3A278Cu;
label_3a278c:
    // 0x3a278c: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x3a278cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_3a2790:
    // 0x3a2790: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x3a2790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_3a2794:
    // 0x3a2794: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3a2794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_3a2798:
    // 0x3a2798: 0x2463d670  addiu       $v1, $v1, -0x2990
    ctx->pc = 0x3a2798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956656));
label_3a279c:
    // 0x3a279c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3a279cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3a27a0:
    // 0x3a27a0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3a27a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_3a27a4:
    // 0x3a27a4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3a27a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3a27a8:
    // 0x3a27a8: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x3a27a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_3a27ac:
    // 0x3a27ac: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3a27acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_3a27b0:
    // 0x3a27b0: 0x1000000b  b           . + 4 + (0xB << 2)
label_3a27b4:
    if (ctx->pc == 0x3A27B4u) {
        ctx->pc = 0x3A27B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A27B0u;
        // 0x3a27b4: 0x2463d680  addiu       $v1, $v1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A27B8u;
        goto label_3a27b8;
    }
    ctx->pc = 0x3A27B0u;
    {
        const bool branch_taken_0x3a27b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A27B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A27B0u;
        // 0x3a27b4: 0x2463d680  addiu       $v1, $v1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a27b0) {
            ctx->pc = 0x3A27E0u;
            goto label_3a27e0;
        }
    }
    ctx->pc = 0x3A27B8u;
label_3a27b8:
    // 0x3a27b8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3a27b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_3a27bc:
    // 0x3a27bc: 0x0  nop
    ctx->pc = 0x3a27bcu;
    // NOP
label_3a27c0:
    // 0x3a27c0: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x3a27c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_3a27c4:
    // 0x3a27c4: 0x2463d650  addiu       $v1, $v1, -0x29B0
    ctx->pc = 0x3a27c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
label_3a27c8:
    // 0x3a27c8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3a27c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3a27cc:
    // 0x3a27cc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3a27ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_3a27d0:
    // 0x3a27d0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3a27d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3a27d4:
    // 0x3a27d4: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x3a27d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_3a27d8:
    // 0x3a27d8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3a27d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_3a27dc:
    // 0x3a27dc: 0x2463d660  addiu       $v1, $v1, -0x29A0
    ctx->pc = 0x3a27dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956640));
label_3a27e0:
    // 0x3a27e0: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x3a27e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3a27e4:
    // 0x3a27e4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3a27e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3a27e8:
    // 0x3a27e8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3a27e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_3a27ec:
    // 0x3a27ec: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x3a27ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
label_3a27f0:
    // 0x3a27f0: 0x8f83becc  lw          $v1, -0x4134($gp)
    ctx->pc = 0x3a27f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950604)));
label_3a27f4:
    // 0x3a27f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a27f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a27f8:
    // 0x3a27f8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_3a27fc:
    if (ctx->pc == 0x3A27FCu) {
        ctx->pc = 0x3A27FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A27F8u;
        // 0x3a27fc: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2800u;
        goto label_3a2800;
    }
    ctx->pc = 0x3A27F8u;
    {
        const bool branch_taken_0x3a27f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A27FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A27F8u;
        // 0x3a27fc: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a27f8) {
            ctx->pc = 0x3A2808u;
            goto label_3a2808;
        }
    }
    ctx->pc = 0x3A2800u;
label_3a2800:
    // 0x3a2800: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3a2800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3a2804:
    // 0x3a2804: 0xaf82aed8  sw          $v0, -0x5128($gp)
    ctx->pc = 0x3a2804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 2));
label_3a2808:
    // 0x3a2808: 0x9f82aedc  lwu         $v0, -0x5124($gp)
    ctx->pc = 0x3a2808u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294946524)));
label_3a280c:
    // 0x3a280c: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x3a280cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
label_3a2810:
    // 0x3a2810: 0x9f84aed8  lwu         $a0, -0x5128($gp)
    ctx->pc = 0x3a2810u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294946520)));
label_3a2814:
    // 0x3a2814: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3a2814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_3a2818:
    // 0x3a2818: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3a2818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3a281c:
    // 0x3a281c: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x3a281cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3a2820:
    // 0x3a2820: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x3a2820u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_3a2824:
    // 0x3a2824: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x3a2824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_3a2828:
    // 0x3a2828: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3a2828u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_3a282c:
    // 0x3a282c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3a282cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3a2830:
    // 0x3a2830: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x3a2830u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_3a2834:
    // 0x3a2834: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x3a2834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_3a2838:
    // 0x3a2838: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3a283c:
    if (ctx->pc == 0x3A283Cu) {
        ctx->pc = 0x3A283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2838u;
        // 0x3a283c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2840u;
        goto label_3a2840;
    }
    ctx->pc = 0x3A2838u;
    {
        const bool branch_taken_0x3a2838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2838u;
        // 0x3a283c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2838) {
            ctx->pc = 0x3A28B8u;
            goto label_3a28b8;
        }
    }
    ctx->pc = 0x3A2840u;
label_3a2840:
    // 0x3a2840: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x3a2840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_3a2844:
    // 0x3a2844: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x3a2844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_3a2848:
    // 0x3a2848: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3a2848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_3a284c:
    // 0x3a284c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x3a284cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_3a2850:
    // 0x3a2850: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3a2850u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_3a2854:
    // 0x3a2854: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x3a2854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3a2858:
    // 0x3a2858: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3a2858u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_3a285c:
    // 0x3a285c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3a285cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3a2860:
    // 0x3a2860: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3a2860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3a2864:
    // 0x3a2864: 0x34428003  ori         $v0, $v0, 0x8003
    ctx->pc = 0x3a2864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
label_3a2868:
    // 0x3a2868: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3a2868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3a286c:
    // 0x3a286c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x3a286cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_3a2870:
    // 0x3a2870: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x3a2870u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_3a2874:
    // 0x3a2874: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x3a2874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_3a2878:
    // 0x3a2878: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3a2878u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_3a287c:
    // 0x3a287c: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x3a287cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_3a2880:
    // 0x3a2880: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x3a2880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_3a2884:
    // 0x3a2884: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x3a2884u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_3a2888:
    // 0x3a2888: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x3a2888u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_3a288c:
    // 0x3a288c: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x3a288cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_3a2890:
    // 0x3a2890: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3a2890u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_3a2894:
    // 0x3a2894: 0xdf82ae68  ld          $v0, -0x5198($gp)
    ctx->pc = 0x3a2894u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
label_3a2898:
    // 0x3a2898: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3a2898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3a289c:
    // 0x3a289c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x3a289cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_3a28a0:
    // 0x3a28a0: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x3a28a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_3a28a4:
    // 0x3a28a4: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x3a28a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_3a28a8:
    // 0x3a28a8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3a28a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_3a28ac:
    // 0x3a28ac: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x3a28acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
label_3a28b0:
    // 0x3a28b0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_3a28b4:
    if (ctx->pc == 0x3A28B4u) {
        ctx->pc = 0x3A28B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A28B0u;
        // 0x3a28b4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A28B8u;
        goto label_3a28b8;
    }
    ctx->pc = 0x3A28B0u;
    {
        const bool branch_taken_0x3a28b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A28B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A28B0u;
        // 0x3a28b4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a28b0) {
            ctx->pc = 0x3A2920u;
            goto label_3a2920;
        }
    }
    ctx->pc = 0x3A28B8u;
label_3a28b8:
    // 0x3a28b8: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x3a28b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3a28bc:
    // 0x3a28bc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3a28bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_3a28c0:
    // 0x3a28c0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x3a28c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3a28c4:
    // 0x3a28c4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3a28c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_3a28c8:
    // 0x3a28c8: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x3a28c8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3a28cc:
    // 0x3a28cc: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x3a28ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
label_3a28d0:
    // 0x3a28d0: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x3a28d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_3a28d4:
    // 0x3a28d4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3a28d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_3a28d8:
    // 0x3a28d8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x3a28d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_3a28dc:
    // 0x3a28dc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3a28dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_3a28e0:
    // 0x3a28e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3a28e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_3a28e4:
    // 0x3a28e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a28e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a28e8:
    // 0x3a28e8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x3a28e8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_3a28ec:
    // 0x3a28ec: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x3a28ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_3a28f0:
    // 0x3a28f0: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x3a28f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_3a28f4:
    // 0x3a28f4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3a28f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_3a28f8:
    // 0x3a28f8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3a28f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3a28fc:
    // 0x3a28fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3a28fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3a2900:
    // 0x3a2900: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x3a2900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
label_3a2904:
    // 0x3a2904: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3a2904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3a2908:
    // 0x3a2908: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x3a2908u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_3a290c:
    // 0x3a290c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x3a290cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_3a2910:
    // 0x3a2910: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x3a2910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_3a2914:
    // 0x3a2914: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3a2914u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_3a2918:
    // 0x3a2918: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x3a2918u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_3a291c:
    // 0x3a291c: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x3a291cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_3a2920:
    // 0x3a2920: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x3a2920u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_3a2924:
    // 0x3a2924: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x3a2924u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_3a2928:
    // 0x3a2928: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x3a2928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_3a292c:
    // 0x3a292c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3a292cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_3a2930:
    // 0x3a2930: 0x92430028  lbu         $v1, 0x28($s2)
    ctx->pc = 0x3a2930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
label_3a2934:
    // 0x3a2934: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x3a2934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_3a2938:
    // 0x3a2938: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x3a2938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_3a293c:
    // 0x3a293c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3a293cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3a2940:
    // 0x3a2940: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x3a2940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_3a2944:
    // 0x3a2944: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x3a2944u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_3a2948:
    // 0x3a2948: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x3a2948u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_3a294c:
    // 0x3a294c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a294cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3a2950:
    // 0x3a2950: 0xa242002b  sb          $v0, 0x2B($s2)
    ctx->pc = 0x3a2950u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 43), (uint8_t)GPR_U32(ctx, 2));
label_3a2954:
    // 0x3a2954: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3a2954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a2958:
    // 0x3a2958: 0x8f85aed4  lw          $a1, -0x512C($gp)
    ctx->pc = 0x3a2958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
label_3a295c:
    // 0x3a295c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3a295cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3a2960:
    // 0x3a2960: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x3a2960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3a2964:
    // 0x3a2964: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a2964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a2968:
    // 0x3a2968: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a2968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a296c:
    // 0x3a296c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3a296cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a2970:
    // 0x3a2970: 0x10a6000b  beq         $a1, $a2, . + 4 + (0xB << 2)
label_3a2974:
    if (ctx->pc == 0x3A2974u) {
        ctx->pc = 0x3A2974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2970u;
        // 0x3a2974: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2978u;
        goto label_3a2978;
    }
    ctx->pc = 0x3A2970u;
    {
        const bool branch_taken_0x3a2970 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x3A2974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2970u;
        // 0x3a2974: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2970) {
            ctx->pc = 0x3A29A0u;
            goto label_3a29a0;
        }
    }
    ctx->pc = 0x3A2978u;
label_3a2978:
    // 0x3a2978: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x3a2978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_3a297c:
    // 0x3a297c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3a297cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3a2980:
    // 0x3a2980: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a2980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2984:
    // 0x3a2984: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x3a2984u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_3a2988:
    // 0x3a2988: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x3a2988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_3a298c:
    // 0x3a298c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3a298cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_3a2990:
    // 0x3a2990: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3a2990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3a2994:
    // 0x3a2994: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3a2994u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_3a2998:
    // 0x3a2998: 0xaf86aed4  sw          $a2, -0x512C($gp)
    ctx->pc = 0x3a2998u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946516), GPR_U32(ctx, 6));
label_3a299c:
    // 0x3a299c: 0x0  nop
    ctx->pc = 0x3a299cu;
    // NOP
label_3a29a0:
    // 0x3a29a0: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x3a29a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_3a29a4:
    // 0x3a29a4: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x3a29a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
label_3a29a8:
    // 0x3a29a8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3a29a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a29ac:
    // 0x3a29ac: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x3a29acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
label_3a29b0:
    // 0x3a29b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3a29b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a29b4:
    // 0x3a29b4: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x3a29b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
label_3a29b8:
    // 0x3a29b8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3a29b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3a29bc:
    // 0x3a29bc: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x3a29bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_3a29c0:
    // 0x3a29c0: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x3a29c0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_3a29c4:
    // 0x3a29c4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x3a29c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_3a29c8:
    // 0x3a29c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3a29c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3a29cc:
    // 0x3a29cc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3a29ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_3a29d0:
    // 0x3a29d0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3a29d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_3a29d4:
    // 0x3a29d4: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x3a29d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
label_3a29d8:
    // 0x3a29d8: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x3a29d8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_3a29dc:
    // 0x3a29dc: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x3a29dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_3a29e0:
    // 0x3a29e0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3a29e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_3a29e4:
    // 0x3a29e4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3a29e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3a29e8:
    // 0x3a29e8: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3a29e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_3a29ec:
    // 0x3a29ec: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3a29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3a29f0:
    // 0x3a29f0: 0x42000039  di
    ctx->pc = 0x3a29f0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_3a29f4:
    // 0x3a29f4: 0x40f  sync.p
    ctx->pc = 0x3a29f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3a29f8:
    // 0x3a29f8: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x3a29f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
label_3a29fc:
    // 0x3a29fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a29fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3a2a00:
    // 0x3a2a00: 0x0  nop
    ctx->pc = 0x3a2a00u;
    // NOP
label_3a2a04:
    // 0x3a2a04: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_3a2a08:
    if (ctx->pc == 0x3A2A08u) {
        ctx->pc = 0x3A2A0Cu;
        goto label_3a2a0c;
    }
    ctx->pc = 0x3A2A04u;
    {
        const bool branch_taken_0x3a2a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a2a04) {
            ctx->pc = 0x3A29F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a29f0;
        }
    }
    ctx->pc = 0x3A2A0Cu;
label_3a2a0c:
    // 0x3a2a0c: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x3a2a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_3a2a10:
    // 0x3a2a10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a2a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3a2a14:
    // 0x3a2a14: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x3a2a14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_3a2a18:
    // 0x3a2a18: 0x42000038  ei
    ctx->pc = 0x3a2a18u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_3a2a1c:
    // 0x3a2a1c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x3a2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_3a2a20:
    // 0x3a2a20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a2a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a2a24:
    // 0x3a2a24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a2a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3a2a28:
    // 0x3a2a28: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_3a2a2c:
    if (ctx->pc == 0x3A2A2Cu) {
        ctx->pc = 0x3A2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2A28u;
        // 0x3a2a2c: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2A30u;
        goto label_3a2a30;
    }
    ctx->pc = 0x3A2A28u;
    {
        const bool branch_taken_0x3a2a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2A28u;
        // 0x3a2a2c: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2a28) {
            ctx->pc = 0x3A2A38u;
            goto label_3a2a38;
        }
    }
    ctx->pc = 0x3A2A30u;
label_3a2a30:
    // 0x3a2a30: 0xc10a762  jal         func_429D88
label_3a2a34:
    if (ctx->pc == 0x3A2A34u) {
        ctx->pc = 0x3A2A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2A30u;
        // 0x3a2a34: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2A38u;
        goto label_3a2a38;
    }
    ctx->pc = 0x3A2A30u;
    SET_GPR_U32(ctx, 31, 0x3A2A38u);
    ctx->pc = 0x3A2A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2A30u;
    // 0x3a2a34: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D88u, 0x3A2A30u, 0x3A2A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2A38u;
label_3a2a38:
    // 0x3a2a38: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3a2a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a2a3c:
    // 0x3a2a3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a2a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a2a40:
    // 0x3a2a40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a2a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a2a44:
    // 0x3a2a44: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3a2a44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a2a48:
    // 0x3a2a48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a2a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a2a4c:
    // 0x3a2a4c: 0x3e00008  jr          $ra
label_3a2a50:
    if (ctx->pc == 0x3A2A50u) {
        ctx->pc = 0x3A2A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2A4Cu;
        // 0x3a2a50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2A54u;
        goto label_3a2a54;
    }
    ctx->pc = 0x3A2A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2A4Cu;
        // 0x3a2a50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2A54u;
label_3a2a54:
    // 0x3a2a54: 0x0  nop
    ctx->pc = 0x3a2a54u;
    // NOP
    ctx->pc = 0x3a2a58u;
}
