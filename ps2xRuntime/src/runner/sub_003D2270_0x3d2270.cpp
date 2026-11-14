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

// Function: sub_003D2270
// Address: 0x3d2270 - 0x3d29b0
void sub_003D2270_0x3d2270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2270_0x3d2270");
#endif

    switch (ctx->pc) {
        case 0x3d2270u: goto label_3d2270;
        case 0x3d2274u: goto label_3d2274;
        case 0x3d2278u: goto label_3d2278;
        case 0x3d227cu: goto label_3d227c;
        case 0x3d2280u: goto label_3d2280;
        case 0x3d2284u: goto label_3d2284;
        case 0x3d2288u: goto label_3d2288;
        case 0x3d228cu: goto label_3d228c;
        case 0x3d2290u: goto label_3d2290;
        case 0x3d2294u: goto label_3d2294;
        case 0x3d2298u: goto label_3d2298;
        case 0x3d229cu: goto label_3d229c;
        case 0x3d22a0u: goto label_3d22a0;
        case 0x3d22a4u: goto label_3d22a4;
        case 0x3d22a8u: goto label_3d22a8;
        case 0x3d22acu: goto label_3d22ac;
        case 0x3d22b0u: goto label_3d22b0;
        case 0x3d22b4u: goto label_3d22b4;
        case 0x3d22b8u: goto label_3d22b8;
        case 0x3d22bcu: goto label_3d22bc;
        case 0x3d22c0u: goto label_3d22c0;
        case 0x3d22c4u: goto label_3d22c4;
        case 0x3d22c8u: goto label_3d22c8;
        case 0x3d22ccu: goto label_3d22cc;
        case 0x3d22d0u: goto label_3d22d0;
        case 0x3d22d4u: goto label_3d22d4;
        case 0x3d22d8u: goto label_3d22d8;
        case 0x3d22dcu: goto label_3d22dc;
        case 0x3d22e0u: goto label_3d22e0;
        case 0x3d22e4u: goto label_3d22e4;
        case 0x3d22e8u: goto label_3d22e8;
        case 0x3d22ecu: goto label_3d22ec;
        case 0x3d22f0u: goto label_3d22f0;
        case 0x3d22f4u: goto label_3d22f4;
        case 0x3d22f8u: goto label_3d22f8;
        case 0x3d22fcu: goto label_3d22fc;
        case 0x3d2300u: goto label_3d2300;
        case 0x3d2304u: goto label_3d2304;
        case 0x3d2308u: goto label_3d2308;
        case 0x3d230cu: goto label_3d230c;
        case 0x3d2310u: goto label_3d2310;
        case 0x3d2314u: goto label_3d2314;
        case 0x3d2318u: goto label_3d2318;
        case 0x3d231cu: goto label_3d231c;
        case 0x3d2320u: goto label_3d2320;
        case 0x3d2324u: goto label_3d2324;
        case 0x3d2328u: goto label_3d2328;
        case 0x3d232cu: goto label_3d232c;
        case 0x3d2330u: goto label_3d2330;
        case 0x3d2334u: goto label_3d2334;
        case 0x3d2338u: goto label_3d2338;
        case 0x3d233cu: goto label_3d233c;
        case 0x3d2340u: goto label_3d2340;
        case 0x3d2344u: goto label_3d2344;
        case 0x3d2348u: goto label_3d2348;
        case 0x3d234cu: goto label_3d234c;
        case 0x3d2350u: goto label_3d2350;
        case 0x3d2354u: goto label_3d2354;
        case 0x3d2358u: goto label_3d2358;
        case 0x3d235cu: goto label_3d235c;
        case 0x3d2360u: goto label_3d2360;
        case 0x3d2364u: goto label_3d2364;
        case 0x3d2368u: goto label_3d2368;
        case 0x3d236cu: goto label_3d236c;
        case 0x3d2370u: goto label_3d2370;
        case 0x3d2374u: goto label_3d2374;
        case 0x3d2378u: goto label_3d2378;
        case 0x3d237cu: goto label_3d237c;
        case 0x3d2380u: goto label_3d2380;
        case 0x3d2384u: goto label_3d2384;
        case 0x3d2388u: goto label_3d2388;
        case 0x3d238cu: goto label_3d238c;
        case 0x3d2390u: goto label_3d2390;
        case 0x3d2394u: goto label_3d2394;
        case 0x3d2398u: goto label_3d2398;
        case 0x3d239cu: goto label_3d239c;
        case 0x3d23a0u: goto label_3d23a0;
        case 0x3d23a4u: goto label_3d23a4;
        case 0x3d23a8u: goto label_3d23a8;
        case 0x3d23acu: goto label_3d23ac;
        case 0x3d23b0u: goto label_3d23b0;
        case 0x3d23b4u: goto label_3d23b4;
        case 0x3d23b8u: goto label_3d23b8;
        case 0x3d23bcu: goto label_3d23bc;
        case 0x3d23c0u: goto label_3d23c0;
        case 0x3d23c4u: goto label_3d23c4;
        case 0x3d23c8u: goto label_3d23c8;
        case 0x3d23ccu: goto label_3d23cc;
        case 0x3d23d0u: goto label_3d23d0;
        case 0x3d23d4u: goto label_3d23d4;
        case 0x3d23d8u: goto label_3d23d8;
        case 0x3d23dcu: goto label_3d23dc;
        case 0x3d23e0u: goto label_3d23e0;
        case 0x3d23e4u: goto label_3d23e4;
        case 0x3d23e8u: goto label_3d23e8;
        case 0x3d23ecu: goto label_3d23ec;
        case 0x3d23f0u: goto label_3d23f0;
        case 0x3d23f4u: goto label_3d23f4;
        case 0x3d23f8u: goto label_3d23f8;
        case 0x3d23fcu: goto label_3d23fc;
        case 0x3d2400u: goto label_3d2400;
        case 0x3d2404u: goto label_3d2404;
        case 0x3d2408u: goto label_3d2408;
        case 0x3d240cu: goto label_3d240c;
        case 0x3d2410u: goto label_3d2410;
        case 0x3d2414u: goto label_3d2414;
        case 0x3d2418u: goto label_3d2418;
        case 0x3d241cu: goto label_3d241c;
        case 0x3d2420u: goto label_3d2420;
        case 0x3d2424u: goto label_3d2424;
        case 0x3d2428u: goto label_3d2428;
        case 0x3d242cu: goto label_3d242c;
        case 0x3d2430u: goto label_3d2430;
        case 0x3d2434u: goto label_3d2434;
        case 0x3d2438u: goto label_3d2438;
        case 0x3d243cu: goto label_3d243c;
        case 0x3d2440u: goto label_3d2440;
        case 0x3d2444u: goto label_3d2444;
        case 0x3d2448u: goto label_3d2448;
        case 0x3d244cu: goto label_3d244c;
        case 0x3d2450u: goto label_3d2450;
        case 0x3d2454u: goto label_3d2454;
        case 0x3d2458u: goto label_3d2458;
        case 0x3d245cu: goto label_3d245c;
        case 0x3d2460u: goto label_3d2460;
        case 0x3d2464u: goto label_3d2464;
        case 0x3d2468u: goto label_3d2468;
        case 0x3d246cu: goto label_3d246c;
        case 0x3d2470u: goto label_3d2470;
        case 0x3d2474u: goto label_3d2474;
        case 0x3d2478u: goto label_3d2478;
        case 0x3d247cu: goto label_3d247c;
        case 0x3d2480u: goto label_3d2480;
        case 0x3d2484u: goto label_3d2484;
        case 0x3d2488u: goto label_3d2488;
        case 0x3d248cu: goto label_3d248c;
        case 0x3d2490u: goto label_3d2490;
        case 0x3d2494u: goto label_3d2494;
        case 0x3d2498u: goto label_3d2498;
        case 0x3d249cu: goto label_3d249c;
        case 0x3d24a0u: goto label_3d24a0;
        case 0x3d24a4u: goto label_3d24a4;
        case 0x3d24a8u: goto label_3d24a8;
        case 0x3d24acu: goto label_3d24ac;
        case 0x3d24b0u: goto label_3d24b0;
        case 0x3d24b4u: goto label_3d24b4;
        case 0x3d24b8u: goto label_3d24b8;
        case 0x3d24bcu: goto label_3d24bc;
        case 0x3d24c0u: goto label_3d24c0;
        case 0x3d24c4u: goto label_3d24c4;
        case 0x3d24c8u: goto label_3d24c8;
        case 0x3d24ccu: goto label_3d24cc;
        case 0x3d24d0u: goto label_3d24d0;
        case 0x3d24d4u: goto label_3d24d4;
        case 0x3d24d8u: goto label_3d24d8;
        case 0x3d24dcu: goto label_3d24dc;
        case 0x3d24e0u: goto label_3d24e0;
        case 0x3d24e4u: goto label_3d24e4;
        case 0x3d24e8u: goto label_3d24e8;
        case 0x3d24ecu: goto label_3d24ec;
        case 0x3d24f0u: goto label_3d24f0;
        case 0x3d24f4u: goto label_3d24f4;
        case 0x3d24f8u: goto label_3d24f8;
        case 0x3d24fcu: goto label_3d24fc;
        case 0x3d2500u: goto label_3d2500;
        case 0x3d2504u: goto label_3d2504;
        case 0x3d2508u: goto label_3d2508;
        case 0x3d250cu: goto label_3d250c;
        case 0x3d2510u: goto label_3d2510;
        case 0x3d2514u: goto label_3d2514;
        case 0x3d2518u: goto label_3d2518;
        case 0x3d251cu: goto label_3d251c;
        case 0x3d2520u: goto label_3d2520;
        case 0x3d2524u: goto label_3d2524;
        case 0x3d2528u: goto label_3d2528;
        case 0x3d252cu: goto label_3d252c;
        case 0x3d2530u: goto label_3d2530;
        case 0x3d2534u: goto label_3d2534;
        case 0x3d2538u: goto label_3d2538;
        case 0x3d253cu: goto label_3d253c;
        case 0x3d2540u: goto label_3d2540;
        case 0x3d2544u: goto label_3d2544;
        case 0x3d2548u: goto label_3d2548;
        case 0x3d254cu: goto label_3d254c;
        case 0x3d2550u: goto label_3d2550;
        case 0x3d2554u: goto label_3d2554;
        case 0x3d2558u: goto label_3d2558;
        case 0x3d255cu: goto label_3d255c;
        case 0x3d2560u: goto label_3d2560;
        case 0x3d2564u: goto label_3d2564;
        case 0x3d2568u: goto label_3d2568;
        case 0x3d256cu: goto label_3d256c;
        case 0x3d2570u: goto label_3d2570;
        case 0x3d2574u: goto label_3d2574;
        case 0x3d2578u: goto label_3d2578;
        case 0x3d257cu: goto label_3d257c;
        case 0x3d2580u: goto label_3d2580;
        case 0x3d2584u: goto label_3d2584;
        case 0x3d2588u: goto label_3d2588;
        case 0x3d258cu: goto label_3d258c;
        case 0x3d2590u: goto label_3d2590;
        case 0x3d2594u: goto label_3d2594;
        case 0x3d2598u: goto label_3d2598;
        case 0x3d259cu: goto label_3d259c;
        case 0x3d25a0u: goto label_3d25a0;
        case 0x3d25a4u: goto label_3d25a4;
        case 0x3d25a8u: goto label_3d25a8;
        case 0x3d25acu: goto label_3d25ac;
        case 0x3d25b0u: goto label_3d25b0;
        case 0x3d25b4u: goto label_3d25b4;
        case 0x3d25b8u: goto label_3d25b8;
        case 0x3d25bcu: goto label_3d25bc;
        case 0x3d25c0u: goto label_3d25c0;
        case 0x3d25c4u: goto label_3d25c4;
        case 0x3d25c8u: goto label_3d25c8;
        case 0x3d25ccu: goto label_3d25cc;
        case 0x3d25d0u: goto label_3d25d0;
        case 0x3d25d4u: goto label_3d25d4;
        case 0x3d25d8u: goto label_3d25d8;
        case 0x3d25dcu: goto label_3d25dc;
        case 0x3d25e0u: goto label_3d25e0;
        case 0x3d25e4u: goto label_3d25e4;
        case 0x3d25e8u: goto label_3d25e8;
        case 0x3d25ecu: goto label_3d25ec;
        case 0x3d25f0u: goto label_3d25f0;
        case 0x3d25f4u: goto label_3d25f4;
        case 0x3d25f8u: goto label_3d25f8;
        case 0x3d25fcu: goto label_3d25fc;
        case 0x3d2600u: goto label_3d2600;
        case 0x3d2604u: goto label_3d2604;
        case 0x3d2608u: goto label_3d2608;
        case 0x3d260cu: goto label_3d260c;
        case 0x3d2610u: goto label_3d2610;
        case 0x3d2614u: goto label_3d2614;
        case 0x3d2618u: goto label_3d2618;
        case 0x3d261cu: goto label_3d261c;
        case 0x3d2620u: goto label_3d2620;
        case 0x3d2624u: goto label_3d2624;
        case 0x3d2628u: goto label_3d2628;
        case 0x3d262cu: goto label_3d262c;
        case 0x3d2630u: goto label_3d2630;
        case 0x3d2634u: goto label_3d2634;
        case 0x3d2638u: goto label_3d2638;
        case 0x3d263cu: goto label_3d263c;
        case 0x3d2640u: goto label_3d2640;
        case 0x3d2644u: goto label_3d2644;
        case 0x3d2648u: goto label_3d2648;
        case 0x3d264cu: goto label_3d264c;
        case 0x3d2650u: goto label_3d2650;
        case 0x3d2654u: goto label_3d2654;
        case 0x3d2658u: goto label_3d2658;
        case 0x3d265cu: goto label_3d265c;
        case 0x3d2660u: goto label_3d2660;
        case 0x3d2664u: goto label_3d2664;
        case 0x3d2668u: goto label_3d2668;
        case 0x3d266cu: goto label_3d266c;
        case 0x3d2670u: goto label_3d2670;
        case 0x3d2674u: goto label_3d2674;
        case 0x3d2678u: goto label_3d2678;
        case 0x3d267cu: goto label_3d267c;
        case 0x3d2680u: goto label_3d2680;
        case 0x3d2684u: goto label_3d2684;
        case 0x3d2688u: goto label_3d2688;
        case 0x3d268cu: goto label_3d268c;
        case 0x3d2690u: goto label_3d2690;
        case 0x3d2694u: goto label_3d2694;
        case 0x3d2698u: goto label_3d2698;
        case 0x3d269cu: goto label_3d269c;
        case 0x3d26a0u: goto label_3d26a0;
        case 0x3d26a4u: goto label_3d26a4;
        case 0x3d26a8u: goto label_3d26a8;
        case 0x3d26acu: goto label_3d26ac;
        case 0x3d26b0u: goto label_3d26b0;
        case 0x3d26b4u: goto label_3d26b4;
        case 0x3d26b8u: goto label_3d26b8;
        case 0x3d26bcu: goto label_3d26bc;
        case 0x3d26c0u: goto label_3d26c0;
        case 0x3d26c4u: goto label_3d26c4;
        case 0x3d26c8u: goto label_3d26c8;
        case 0x3d26ccu: goto label_3d26cc;
        case 0x3d26d0u: goto label_3d26d0;
        case 0x3d26d4u: goto label_3d26d4;
        case 0x3d26d8u: goto label_3d26d8;
        case 0x3d26dcu: goto label_3d26dc;
        case 0x3d26e0u: goto label_3d26e0;
        case 0x3d26e4u: goto label_3d26e4;
        case 0x3d26e8u: goto label_3d26e8;
        case 0x3d26ecu: goto label_3d26ec;
        case 0x3d26f0u: goto label_3d26f0;
        case 0x3d26f4u: goto label_3d26f4;
        case 0x3d26f8u: goto label_3d26f8;
        case 0x3d26fcu: goto label_3d26fc;
        case 0x3d2700u: goto label_3d2700;
        case 0x3d2704u: goto label_3d2704;
        case 0x3d2708u: goto label_3d2708;
        case 0x3d270cu: goto label_3d270c;
        case 0x3d2710u: goto label_3d2710;
        case 0x3d2714u: goto label_3d2714;
        case 0x3d2718u: goto label_3d2718;
        case 0x3d271cu: goto label_3d271c;
        case 0x3d2720u: goto label_3d2720;
        case 0x3d2724u: goto label_3d2724;
        case 0x3d2728u: goto label_3d2728;
        case 0x3d272cu: goto label_3d272c;
        case 0x3d2730u: goto label_3d2730;
        case 0x3d2734u: goto label_3d2734;
        case 0x3d2738u: goto label_3d2738;
        case 0x3d273cu: goto label_3d273c;
        case 0x3d2740u: goto label_3d2740;
        case 0x3d2744u: goto label_3d2744;
        case 0x3d2748u: goto label_3d2748;
        case 0x3d274cu: goto label_3d274c;
        case 0x3d2750u: goto label_3d2750;
        case 0x3d2754u: goto label_3d2754;
        case 0x3d2758u: goto label_3d2758;
        case 0x3d275cu: goto label_3d275c;
        case 0x3d2760u: goto label_3d2760;
        case 0x3d2764u: goto label_3d2764;
        case 0x3d2768u: goto label_3d2768;
        case 0x3d276cu: goto label_3d276c;
        case 0x3d2770u: goto label_3d2770;
        case 0x3d2774u: goto label_3d2774;
        case 0x3d2778u: goto label_3d2778;
        case 0x3d277cu: goto label_3d277c;
        case 0x3d2780u: goto label_3d2780;
        case 0x3d2784u: goto label_3d2784;
        case 0x3d2788u: goto label_3d2788;
        case 0x3d278cu: goto label_3d278c;
        case 0x3d2790u: goto label_3d2790;
        case 0x3d2794u: goto label_3d2794;
        case 0x3d2798u: goto label_3d2798;
        case 0x3d279cu: goto label_3d279c;
        case 0x3d27a0u: goto label_3d27a0;
        case 0x3d27a4u: goto label_3d27a4;
        case 0x3d27a8u: goto label_3d27a8;
        case 0x3d27acu: goto label_3d27ac;
        case 0x3d27b0u: goto label_3d27b0;
        case 0x3d27b4u: goto label_3d27b4;
        case 0x3d27b8u: goto label_3d27b8;
        case 0x3d27bcu: goto label_3d27bc;
        case 0x3d27c0u: goto label_3d27c0;
        case 0x3d27c4u: goto label_3d27c4;
        case 0x3d27c8u: goto label_3d27c8;
        case 0x3d27ccu: goto label_3d27cc;
        case 0x3d27d0u: goto label_3d27d0;
        case 0x3d27d4u: goto label_3d27d4;
        case 0x3d27d8u: goto label_3d27d8;
        case 0x3d27dcu: goto label_3d27dc;
        case 0x3d27e0u: goto label_3d27e0;
        case 0x3d27e4u: goto label_3d27e4;
        case 0x3d27e8u: goto label_3d27e8;
        case 0x3d27ecu: goto label_3d27ec;
        case 0x3d27f0u: goto label_3d27f0;
        case 0x3d27f4u: goto label_3d27f4;
        case 0x3d27f8u: goto label_3d27f8;
        case 0x3d27fcu: goto label_3d27fc;
        case 0x3d2800u: goto label_3d2800;
        case 0x3d2804u: goto label_3d2804;
        case 0x3d2808u: goto label_3d2808;
        case 0x3d280cu: goto label_3d280c;
        case 0x3d2810u: goto label_3d2810;
        case 0x3d2814u: goto label_3d2814;
        case 0x3d2818u: goto label_3d2818;
        case 0x3d281cu: goto label_3d281c;
        case 0x3d2820u: goto label_3d2820;
        case 0x3d2824u: goto label_3d2824;
        case 0x3d2828u: goto label_3d2828;
        case 0x3d282cu: goto label_3d282c;
        case 0x3d2830u: goto label_3d2830;
        case 0x3d2834u: goto label_3d2834;
        case 0x3d2838u: goto label_3d2838;
        case 0x3d283cu: goto label_3d283c;
        case 0x3d2840u: goto label_3d2840;
        case 0x3d2844u: goto label_3d2844;
        case 0x3d2848u: goto label_3d2848;
        case 0x3d284cu: goto label_3d284c;
        case 0x3d2850u: goto label_3d2850;
        case 0x3d2854u: goto label_3d2854;
        case 0x3d2858u: goto label_3d2858;
        case 0x3d285cu: goto label_3d285c;
        case 0x3d2860u: goto label_3d2860;
        case 0x3d2864u: goto label_3d2864;
        case 0x3d2868u: goto label_3d2868;
        case 0x3d286cu: goto label_3d286c;
        case 0x3d2870u: goto label_3d2870;
        case 0x3d2874u: goto label_3d2874;
        case 0x3d2878u: goto label_3d2878;
        case 0x3d287cu: goto label_3d287c;
        case 0x3d2880u: goto label_3d2880;
        case 0x3d2884u: goto label_3d2884;
        case 0x3d2888u: goto label_3d2888;
        case 0x3d288cu: goto label_3d288c;
        case 0x3d2890u: goto label_3d2890;
        case 0x3d2894u: goto label_3d2894;
        case 0x3d2898u: goto label_3d2898;
        case 0x3d289cu: goto label_3d289c;
        case 0x3d28a0u: goto label_3d28a0;
        case 0x3d28a4u: goto label_3d28a4;
        case 0x3d28a8u: goto label_3d28a8;
        case 0x3d28acu: goto label_3d28ac;
        case 0x3d28b0u: goto label_3d28b0;
        case 0x3d28b4u: goto label_3d28b4;
        case 0x3d28b8u: goto label_3d28b8;
        case 0x3d28bcu: goto label_3d28bc;
        case 0x3d28c0u: goto label_3d28c0;
        case 0x3d28c4u: goto label_3d28c4;
        case 0x3d28c8u: goto label_3d28c8;
        case 0x3d28ccu: goto label_3d28cc;
        case 0x3d28d0u: goto label_3d28d0;
        case 0x3d28d4u: goto label_3d28d4;
        case 0x3d28d8u: goto label_3d28d8;
        case 0x3d28dcu: goto label_3d28dc;
        case 0x3d28e0u: goto label_3d28e0;
        case 0x3d28e4u: goto label_3d28e4;
        case 0x3d28e8u: goto label_3d28e8;
        case 0x3d28ecu: goto label_3d28ec;
        case 0x3d28f0u: goto label_3d28f0;
        case 0x3d28f4u: goto label_3d28f4;
        case 0x3d28f8u: goto label_3d28f8;
        case 0x3d28fcu: goto label_3d28fc;
        case 0x3d2900u: goto label_3d2900;
        case 0x3d2904u: goto label_3d2904;
        case 0x3d2908u: goto label_3d2908;
        case 0x3d290cu: goto label_3d290c;
        case 0x3d2910u: goto label_3d2910;
        case 0x3d2914u: goto label_3d2914;
        case 0x3d2918u: goto label_3d2918;
        case 0x3d291cu: goto label_3d291c;
        case 0x3d2920u: goto label_3d2920;
        case 0x3d2924u: goto label_3d2924;
        case 0x3d2928u: goto label_3d2928;
        case 0x3d292cu: goto label_3d292c;
        case 0x3d2930u: goto label_3d2930;
        case 0x3d2934u: goto label_3d2934;
        case 0x3d2938u: goto label_3d2938;
        case 0x3d293cu: goto label_3d293c;
        case 0x3d2940u: goto label_3d2940;
        case 0x3d2944u: goto label_3d2944;
        case 0x3d2948u: goto label_3d2948;
        case 0x3d294cu: goto label_3d294c;
        case 0x3d2950u: goto label_3d2950;
        case 0x3d2954u: goto label_3d2954;
        case 0x3d2958u: goto label_3d2958;
        case 0x3d295cu: goto label_3d295c;
        case 0x3d2960u: goto label_3d2960;
        case 0x3d2964u: goto label_3d2964;
        case 0x3d2968u: goto label_3d2968;
        case 0x3d296cu: goto label_3d296c;
        case 0x3d2970u: goto label_3d2970;
        case 0x3d2974u: goto label_3d2974;
        case 0x3d2978u: goto label_3d2978;
        case 0x3d297cu: goto label_3d297c;
        case 0x3d2980u: goto label_3d2980;
        case 0x3d2984u: goto label_3d2984;
        case 0x3d2988u: goto label_3d2988;
        case 0x3d298cu: goto label_3d298c;
        case 0x3d2990u: goto label_3d2990;
        case 0x3d2994u: goto label_3d2994;
        case 0x3d2998u: goto label_3d2998;
        case 0x3d299cu: goto label_3d299c;
        case 0x3d29a0u: goto label_3d29a0;
        case 0x3d29a4u: goto label_3d29a4;
        case 0x3d29a8u: goto label_3d29a8;
        case 0x3d29acu: goto label_3d29ac;
        default: break;
    }

    ctx->pc = 0x3d2270u;

label_3d2270:
    // 0x3d2270: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3d2270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3d2274:
    // 0x3d2274: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x3d2274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_3d2278:
    // 0x3d2278: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x3d2278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_3d227c:
    // 0x3d227c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3d227cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d2280:
    // 0x3d2280: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x3d2280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_3d2284:
    // 0x3d2284: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x3d2284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_3d2288:
    // 0x3d2288: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x3d2288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_3d228c:
    // 0x3d228c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x3d228cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_3d2290:
    // 0x3d2290: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3d2290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3d2294:
    // 0x3d2294: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x3d2294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_3d2298:
    // 0x3d2298: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x3d2298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_3d229c:
    // 0x3d229c: 0x108001b6  beqz        $a0, . + 4 + (0x1B6 << 2)
label_3d22a0:
    if (ctx->pc == 0x3D22A0u) {
        ctx->pc = 0x3D22A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D229Cu;
        // 0x3d22a0: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D22A4u;
        goto label_3d22a4;
    }
    ctx->pc = 0x3D229Cu;
    {
        const bool branch_taken_0x3d229c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D22A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D229Cu;
        // 0x3d22a0: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d229c) {
            ctx->pc = 0x3D2978u;
            goto label_3d2978;
        }
    }
    ctx->pc = 0x3D22A4u;
label_3d22a4:
    // 0x3d22a4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3d22a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d22a8:
    // 0x3d22a8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3d22a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_3d22ac:
    // 0x3d22ac: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3d22acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3d22b0:
    // 0x3d22b0: 0x8eb30004  lw          $s3, 0x4($s5)
    ctx->pc = 0x3d22b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3d22b4:
    // 0x3d22b4: 0x8c94000c  lw          $s4, 0xC($a0)
    ctx->pc = 0x3d22b4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3d22b8:
    // 0x3d22b8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3d22b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_3d22bc:
    // 0x3d22bc: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x3d22bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3d22c0:
    // 0x3d22c0: 0x6600005  bltz        $s3, . + 4 + (0x5 << 2)
label_3d22c4:
    if (ctx->pc == 0x3D22C4u) {
        ctx->pc = 0x3D22C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D22C0u;
        // 0x3d22c4: 0xafa6000c  sw          $a2, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D22C8u;
        goto label_3d22c8;
    }
    ctx->pc = 0x3D22C0u;
    {
        const bool branch_taken_0x3d22c0 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x3D22C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D22C0u;
        // 0x3d22c4: 0xafa6000c  sw          $a2, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d22c0) {
            ctx->pc = 0x3D22D8u;
            goto label_3d22d8;
        }
    }
    ctx->pc = 0x3D22C8u;
label_3d22c8:
    // 0x3d22c8: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x3d22c8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d22cc:
    // 0x3d22cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3d22ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3d22d0:
    // 0x3d22d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d22d4:
    if (ctx->pc == 0x3D22D4u) {
        ctx->pc = 0x3D22D8u;
        goto label_3d22d8;
    }
    ctx->pc = 0x3D22D0u;
    {
        const bool branch_taken_0x3d22d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d22d0) {
            ctx->pc = 0x3D22F0u;
            goto label_3d22f0;
        }
    }
    ctx->pc = 0x3D22D8u;
label_3d22d8:
    // 0x3d22d8: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x3d22d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_3d22dc:
    // 0x3d22dc: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x3d22dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_3d22e0:
    // 0x3d22e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d22e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3d22e4:
    // 0x3d22e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d22e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d22e8:
    // 0x3d22e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3d22e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3d22ec:
    // 0x3d22ec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3d22ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3d22f0:
    // 0x3d22f0: 0x6800005  bltz        $s4, . + 4 + (0x5 << 2)
label_3d22f4:
    if (ctx->pc == 0x3D22F4u) {
        ctx->pc = 0x3D22F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D22F0u;
        // 0x3d22f4: 0x32820001  andi        $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D22F8u;
        goto label_3d22f8;
    }
    ctx->pc = 0x3D22F0u;
    {
        const bool branch_taken_0x3d22f0 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x3D22F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D22F0u;
        // 0x3d22f4: 0x32820001  andi        $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d22f0) {
            ctx->pc = 0x3D2308u;
            goto label_3d2308;
        }
    }
    ctx->pc = 0x3D22F8u;
label_3d22f8:
    // 0x3d22f8: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x3d22f8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d22fc:
    // 0x3d22fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d22fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3d2300:
    // 0x3d2300: 0x10000006  b           . + 4 + (0x6 << 2)
label_3d2304:
    if (ctx->pc == 0x3D2304u) {
        ctx->pc = 0x3D2308u;
        goto label_3d2308;
    }
    ctx->pc = 0x3D2300u;
    {
        const bool branch_taken_0x3d2300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2300) {
            ctx->pc = 0x3D231Cu;
            goto label_3d231c;
        }
    }
    ctx->pc = 0x3D2308u;
label_3d2308:
    // 0x3d2308: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x3d2308u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
label_3d230c:
    // 0x3d230c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d230cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3d2310:
    // 0x3d2310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d2310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d2314:
    // 0x3d2314: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d2314u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3d2318:
    // 0x3d2318: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d2318u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3d231c:
    // 0x3d231c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3d231cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_3d2320:
    // 0x3d2320: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x3d2320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3d2324:
    // 0x3d2324: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d2324u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3d2328:
    // 0x3d2328: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x3d2328u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_3d232c:
    // 0x3d232c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3d232cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3d2330:
    // 0x3d2330: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d2330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d2334:
    // 0x3d2334: 0xc107034  jal         func_41C0D0
label_3d2338:
    if (ctx->pc == 0x3D2338u) {
        ctx->pc = 0x3D2338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2334u;
        // 0x3d2338: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D233Cu;
        goto label_3d233c;
    }
    ctx->pc = 0x3D2334u;
    SET_GPR_U32(ctx, 31, 0x3D233Cu);
    ctx->pc = 0x3D2338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2334u;
    // 0x3d2338: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x3D2334u, 0x3D233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D233Cu;
label_3d233c:
    // 0x3d233c: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x3d233cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d2340:
    // 0x3d2340: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3d2340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_3d2344:
    // 0x3d2344: 0xc107078  jal         func_41C1E0
label_3d2348:
    if (ctx->pc == 0x3D2348u) {
        ctx->pc = 0x3D2348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2344u;
        // 0x3d2348: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D234Cu;
        goto label_3d234c;
    }
    ctx->pc = 0x3D2344u;
    SET_GPR_U32(ctx, 31, 0x3D234Cu);
    ctx->pc = 0x3D2348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2344u;
    // 0x3d2348: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x3D2344u, 0x3D234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D234Cu;
label_3d234c:
    // 0x3d234c: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x3d234cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_3d2350:
    // 0x3d2350: 0x2410001c  addiu       $s0, $zero, 0x1C
    ctx->pc = 0x3d2350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3d2354:
    // 0x3d2354: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3d2354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3d2358:
    // 0x3d2358: 0x2708018  mult        $s0, $s3, $s0
    ctx->pc = 0x3d2358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_3d235c:
    // 0x3d235c: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x3d235cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
label_3d2360:
    // 0x3d2360: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3d2360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3d2364:
    // 0x3d2364: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3d2364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3d2368:
    // 0x3d2368: 0x2623e880  addiu       $v1, $s1, -0x1780
    ctx->pc = 0x3d2368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_3d236c:
    // 0x3d236c: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x3d236cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3d2370:
    // 0x3d2370: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x3d2370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
label_3d2374:
    // 0x3d2374: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x3d2374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_3d2378:
    // 0x3d2378: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3d2378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3d237c:
    // 0x3d237c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x3d237cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_3d2380:
    // 0x3d2380: 0x8eb50014  lw          $s5, 0x14($s5)
    ctx->pc = 0x3d2380u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_3d2384:
    // 0x3d2384: 0xafb50014  sw          $s5, 0x14($sp)
    ctx->pc = 0x3d2384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 21));
label_3d2388:
    // 0x3d2388: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3d2388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3d238c:
    // 0x3d238c: 0x40f809  jalr        $v0
label_3d2390:
    if (ctx->pc == 0x3D2390u) {
        ctx->pc = 0x3D2390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D238Cu;
        // 0x3d2390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2394u;
        goto label_3d2394;
    }
    ctx->pc = 0x3D238Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D2394u);
        ctx->pc = 0x3D2390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D238Cu;
        // 0x3d2390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D238Cu, 0x3D2394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D2394u;
label_3d2394:
    // 0x3d2394: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3d2394u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d2398:
    // 0x3d2398: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d2398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d239c:
    // 0x3d239c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d239cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d23a0:
    // 0x3d23a0: 0xc0bb7e6  jal         func_2EDF98
label_3d23a4:
    if (ctx->pc == 0x3D23A4u) {
        ctx->pc = 0x3D23A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D23A0u;
        // 0x3d23a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D23A8u;
        goto label_3d23a8;
    }
    ctx->pc = 0x3D23A0u;
    SET_GPR_U32(ctx, 31, 0x3D23A8u);
    ctx->pc = 0x3D23A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D23A0u;
    // 0x3d23a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3D23A0u, 0x3D23A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D23A8u;
label_3d23a8:
    // 0x3d23a8: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x3d23a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_3d23ac:
    // 0x3d23ac: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x3d23acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3d23b0:
    // 0x3d23b0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x3d23b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d23b4:
    // 0x3d23b4: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x3d23b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_3d23b8:
    // 0x3d23b8: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x3d23b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3d23bc:
    // 0x3d23bc: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x3d23bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
label_3d23c0:
    // 0x3d23c0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x3d23c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d23c4:
    // 0x3d23c4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x3d23c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_3d23c8:
    // 0x3d23c8: 0x82f021  addu        $fp, $a0, $v0
    ctx->pc = 0x3d23c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3d23cc:
    // 0x3d23cc: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x3d23ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
label_3d23d0:
    // 0x3d23d0: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x3d23d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_3d23d4:
    // 0x3d23d4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3d23d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_3d23d8:
    // 0x3d23d8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3d23d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3d23dc:
    // 0x3d23dc: 0x10400158  beqz        $v0, . + 4 + (0x158 << 2)
label_3d23e0:
    if (ctx->pc == 0x3D23E0u) {
        ctx->pc = 0x3D23E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D23DCu;
        // 0x3d23e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D23E4u;
        goto label_3d23e4;
    }
    ctx->pc = 0x3D23DCu;
    {
        const bool branch_taken_0x3d23dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D23E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D23DCu;
        // 0x3d23e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d23dc) {
            ctx->pc = 0x3D2940u;
            goto label_3d2940;
        }
    }
    ctx->pc = 0x3D23E4u;
label_3d23e4:
    // 0x3d23e4: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x3d23e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3d23e8:
    // 0x3d23e8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3d23e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d23ec:
    // 0x3d23ec: 0x12400099  beqz        $s2, . + 4 + (0x99 << 2)
label_3d23f0:
    if (ctx->pc == 0x3D23F0u) {
        ctx->pc = 0x3D23F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D23ECu;
        // 0x3d23f0: 0xafa40038  sw          $a0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D23F4u;
        goto label_3d23f4;
    }
    ctx->pc = 0x3D23ECu;
    {
        const bool branch_taken_0x3d23ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D23F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D23ECu;
        // 0x3d23f0: 0xafa40038  sw          $a0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d23ec) {
            ctx->pc = 0x3D2654u;
            goto label_3d2654;
        }
    }
    ctx->pc = 0x3D23F4u;
label_3d23f4:
    // 0x3d23f4: 0x2771018  mult        $v0, $s3, $s7
    ctx->pc = 0x3d23f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3d23f8:
    // 0x3d23f8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3d23f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_3d23fc:
    // 0x3d23fc: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x3d23fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_3d2400:
    // 0x3d2400: 0x24760001  addiu       $s6, $v1, 0x1
    ctx->pc = 0x3d2400u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d2404:
    // 0x3d2404: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d2404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d2408:
    // 0x3d2408: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x3d2408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3d240c:
    // 0x3d240c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3d240cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3d2410:
    // 0x3d2410: 0x600013  mtlo        $v1
    ctx->pc = 0x3d2410u;
    ctx->lo = GPR_U64(ctx, 3);
label_3d2414:
    // 0x3d2414: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x3d2414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3d2418:
    // 0x3d2418: 0x1280008a  beqz        $s4, . + 4 + (0x8A << 2)
label_3d241c:
    if (ctx->pc == 0x3D241Cu) {
        ctx->pc = 0x3D241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2418u;
        // 0x3d241c: 0x70433800  madd        $a3, $v0, $v1 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2420u;
        goto label_3d2420;
    }
    ctx->pc = 0x3D2418u;
    {
        const bool branch_taken_0x3d2418 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2418u;
        // 0x3d241c: 0x70433800  madd        $a3, $v0, $v1 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2418) {
            ctx->pc = 0x3D2644u;
            goto label_3d2644;
        }
    }
    ctx->pc = 0x3D2420u;
label_3d2420:
    // 0x3d2420: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3d2420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d2424:
    // 0x3d2424: 0x0  nop
    ctx->pc = 0x3d2424u;
    // NOP
label_3d2428:
    // 0x3d2428: 0x12400082  beqz        $s2, . + 4 + (0x82 << 2)
label_3d242c:
    if (ctx->pc == 0x3D242Cu) {
        ctx->pc = 0x3D242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2428u;
        // 0x3d242c: 0x24d10001  addiu       $s1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2430u;
        goto label_3d2430;
    }
    ctx->pc = 0x3D2428u;
    {
        const bool branch_taken_0x3d2428 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2428u;
        // 0x3d242c: 0x24d10001  addiu       $s1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2428) {
            ctx->pc = 0x3D2634u;
            goto label_3d2634;
        }
    }
    ctx->pc = 0x3D2430u;
label_3d2430:
    // 0x3d2430: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3d2430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3d2434:
    // 0x3d2434: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3d2434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3d2438:
    // 0x3d2438: 0x5e7021  addu        $t6, $v0, $fp
    ctx->pc = 0x3d2438u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_3d243c:
    // 0x3d243c: 0x555021  addu        $t2, $v0, $s5
    ctx->pc = 0x3d243cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_3d2440:
    // 0x3d2440: 0x44c821  addu        $t9, $v0, $a0
    ctx->pc = 0x3d2440u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3d2444:
    // 0x3d2444: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3d2444u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3d2448:
    // 0x3d2448: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x3d2448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3d244c:
    // 0x3d244c: 0x447821  addu        $t7, $v0, $a0
    ctx->pc = 0x3d244cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3d2450:
    // 0x3d2450: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x3d2450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3d2454:
    // 0x3d2454: 0x446021  addu        $t4, $v0, $a0
    ctx->pc = 0x3d2454u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3d2458:
    // 0x3d2458: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3d2458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3d245c:
    // 0x3d245c: 0x444821  addu        $t1, $v0, $a0
    ctx->pc = 0x3d245cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3d2460:
    // 0x3d2460: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x3d2460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3d2464:
    // 0x3d2464: 0x444021  addu        $t0, $v0, $a0
    ctx->pc = 0x3d2464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3d2468:
    // 0x3d2468: 0x1a400003  blez        $s2, . + 4 + (0x3 << 2)
label_3d246c:
    if (ctx->pc == 0x3D246Cu) {
        ctx->pc = 0x3D246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2468u;
        // 0x3d246c: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2470u;
        goto label_3d2470;
    }
    ctx->pc = 0x3D2468u;
    {
        const bool branch_taken_0x3d2468 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3D246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2468u;
        // 0x3d246c: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2468) {
            ctx->pc = 0x3D2478u;
            goto label_3d2478;
        }
    }
    ctx->pc = 0x3D2470u;
label_3d2470:
    // 0x3d2470: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_3d2474:
    if (ctx->pc == 0x3D2474u) {
        ctx->pc = 0x3D2474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2470u;
        // 0x3d2474: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2478u;
        goto label_3d2478;
    }
    ctx->pc = 0x3D2470u;
    {
        const bool branch_taken_0x3d2470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2470) {
            ctx->pc = 0x3D2474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2470u;
            // 0x3d2474: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D250Cu;
            goto label_3d250c;
        }
    }
    ctx->pc = 0x3D2478u;
label_3d2478:
    // 0x3d2478: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3d2478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_3d247c:
    // 0x3d247c: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x3d247cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_3d2480:
    // 0x3d2480: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d2480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d2484:
    // 0x3d2484: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x3d2484u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
label_3d2488:
    // 0x3d2488: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x3d2488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_3d248c:
    // 0x3d248c: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x3d248cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_3d2490:
    // 0x3d2490: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d2490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d2494:
    // 0x3d2494: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x3d2494u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
label_3d2498:
    // 0x3d2498: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x3d2498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_3d249c:
    // 0x3d249c: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x3d249cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_3d24a0:
    // 0x3d24a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d24a4:
    // 0x3d24a4: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x3d24a4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
label_3d24a8:
    // 0x3d24a8: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x3d24a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_3d24ac:
    // 0x3d24ac: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_3d24b0:
    if (ctx->pc == 0x3D24B0u) {
        ctx->pc = 0x3D24B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D24ACu;
        // 0x3d24b0: 0x24e20004  addiu       $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D24B4u;
        goto label_3d24b4;
    }
    ctx->pc = 0x3D24ACu;
    {
        const bool branch_taken_0x3d24ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D24B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D24ACu;
        // 0x3d24b0: 0x24e20004  addiu       $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d24ac) {
            ctx->pc = 0x3D24F4u;
            goto label_3d24f4;
        }
    }
    ctx->pc = 0x3D24B4u;
label_3d24b4:
    // 0x3d24b4: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3d24b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_3d24b8:
    // 0x3d24b8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x3d24b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_3d24bc:
    // 0x3d24bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d24bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d24c0:
    // 0x3d24c0: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x3d24c0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
label_3d24c4:
    // 0x3d24c4: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x3d24c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_3d24c8:
    // 0x3d24c8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x3d24c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_3d24cc:
    // 0x3d24cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d24d0:
    // 0x3d24d0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x3d24d0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_3d24d4:
    // 0x3d24d4: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x3d24d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_3d24d8:
    // 0x3d24d8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3d24d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3d24dc:
    // 0x3d24dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d24dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d24e0:
    // 0x3d24e0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x3d24e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_3d24e4:
    // 0x3d24e4: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x3d24e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
label_3d24e8:
    // 0x3d24e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d24e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d24ec:
    // 0x3d24ec: 0xaf230000  sw          $v1, 0x0($t9)
    ctx->pc = 0x3d24ecu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 3));
label_3d24f0:
    // 0x3d24f0: 0x24e20004  addiu       $v0, $a3, 0x4
    ctx->pc = 0x3d24f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3d24f4:
    // 0x3d24f4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3d24f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d24f8:
    // 0x3d24f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3d24f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d24fc:
    // 0x3d24fc: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x3d24fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_3d2500:
    // 0x3d2500: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_3d2504:
    if (ctx->pc == 0x3D2504u) {
        ctx->pc = 0x3D2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2500u;
        // 0x3d2504: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2508u;
        goto label_3d2508;
    }
    ctx->pc = 0x3D2500u;
    {
        const bool branch_taken_0x3d2500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2500u;
        // 0x3d2504: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2500) {
            ctx->pc = 0x3D2634u;
            goto label_3d2634;
        }
    }
    ctx->pc = 0x3D2508u;
label_3d2508:
    // 0x3d2508: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3d2508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3d250c:
    // 0x3d250c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3d250cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d2510:
    // 0x3d2510: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3d2510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d2514:
    // 0x3d2514: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x3d2514u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d2518:
    // 0x3d2518: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x3d2518u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d251c:
    // 0x3d251c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x3d251cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d2520:
    // 0x3d2520: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3d2520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3d2524:
    // 0x3d2524: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x3d2524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_3d2528:
    // 0x3d2528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d2528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d252c:
    // 0x3d252c: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x3d252cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
label_3d2530:
    // 0x3d2530: 0x91630001  lbu         $v1, 0x1($t3)
    ctx->pc = 0x3d2530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
label_3d2534:
    // 0x3d2534: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x3d2534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_3d2538:
    // 0x3d2538: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d2538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d253c:
    // 0x3d253c: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x3d253cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
label_3d2540:
    // 0x3d2540: 0x91a30002  lbu         $v1, 0x2($t5)
    ctx->pc = 0x3d2540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
label_3d2544:
    // 0x3d2544: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x3d2544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_3d2548:
    // 0x3d2548: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d2548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d254c:
    // 0x3d254c: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x3d254cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
label_3d2550:
    // 0x3d2550: 0x93030003  lbu         $v1, 0x3($t8)
    ctx->pc = 0x3d2550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
label_3d2554:
    // 0x3d2554: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
label_3d2558:
    if (ctx->pc == 0x3D2558u) {
        ctx->pc = 0x3D2558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2554u;
        // 0x3d2558: 0x90c30004  lbu         $v1, 0x4($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D255Cu;
        goto label_3d255c;
    }
    ctx->pc = 0x3D2554u;
    {
        const bool branch_taken_0x3d2554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2554) {
            ctx->pc = 0x3D2558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2554u;
            // 0x3d2558: 0x90c30004  lbu         $v1, 0x4($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D259Cu;
            goto label_3d259c;
        }
    }
    ctx->pc = 0x3D255Cu;
label_3d255c:
    // 0x3d255c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3d255cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3d2560:
    // 0x3d2560: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x3d2560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_3d2564:
    // 0x3d2564: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d2564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d2568:
    // 0x3d2568: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x3d2568u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
label_3d256c:
    // 0x3d256c: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x3d256cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_3d2570:
    // 0x3d2570: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x3d2570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_3d2574:
    // 0x3d2574: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d2574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d2578:
    // 0x3d2578: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x3d2578u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_3d257c:
    // 0x3d257c: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x3d257cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_3d2580:
    // 0x3d2580: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3d2580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3d2584:
    // 0x3d2584: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d2584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d2588:
    // 0x3d2588: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x3d2588u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_3d258c:
    // 0x3d258c: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x3d258cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
label_3d2590:
    // 0x3d2590: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d2590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d2594:
    // 0x3d2594: 0xaf230000  sw          $v1, 0x0($t9)
    ctx->pc = 0x3d2594u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 3));
label_3d2598:
    // 0x3d2598: 0x90c30004  lbu         $v1, 0x4($a2)
    ctx->pc = 0x3d2598u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
label_3d259c:
    // 0x3d259c: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x3d259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_3d25a0:
    // 0x3d25a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d25a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d25a4:
    // 0x3d25a4: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x3d25a4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
label_3d25a8:
    // 0x3d25a8: 0x91630005  lbu         $v1, 0x5($t3)
    ctx->pc = 0x3d25a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 5)));
label_3d25ac:
    // 0x3d25ac: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x3d25acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_3d25b0:
    // 0x3d25b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d25b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d25b4:
    // 0x3d25b4: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x3d25b4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
label_3d25b8:
    // 0x3d25b8: 0x91a30006  lbu         $v1, 0x6($t5)
    ctx->pc = 0x3d25b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 6)));
label_3d25bc:
    // 0x3d25bc: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x3d25bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_3d25c0:
    // 0x3d25c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d25c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d25c4:
    // 0x3d25c4: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x3d25c4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
label_3d25c8:
    // 0x3d25c8: 0x93030007  lbu         $v1, 0x7($t8)
    ctx->pc = 0x3d25c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 7)));
label_3d25cc:
    // 0x3d25cc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_3d25d0:
    if (ctx->pc == 0x3D25D0u) {
        ctx->pc = 0x3D25D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D25CCu;
        // 0x3d25d0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D25D4u;
        goto label_3d25d4;
    }
    ctx->pc = 0x3D25CCu;
    {
        const bool branch_taken_0x3d25cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D25D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D25CCu;
        // 0x3d25d0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d25cc) {
            ctx->pc = 0x3D2610u;
            goto label_3d2610;
        }
    }
    ctx->pc = 0x3D25D4u;
label_3d25d4:
    // 0x3d25d4: 0x90c30004  lbu         $v1, 0x4($a2)
    ctx->pc = 0x3d25d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
label_3d25d8:
    // 0x3d25d8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x3d25d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_3d25dc:
    // 0x3d25dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d25dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d25e0:
    // 0x3d25e0: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x3d25e0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
label_3d25e4:
    // 0x3d25e4: 0x90830005  lbu         $v1, 0x5($a0)
    ctx->pc = 0x3d25e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
label_3d25e8:
    // 0x3d25e8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x3d25e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_3d25ec:
    // 0x3d25ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d25ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d25f0:
    // 0x3d25f0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x3d25f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_3d25f4:
    // 0x3d25f4: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x3d25f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
label_3d25f8:
    // 0x3d25f8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3d25f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3d25fc:
    // 0x3d25fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d25fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d2600:
    // 0x3d2600: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x3d2600u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_3d2604:
    // 0x3d2604: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x3d2604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
label_3d2608:
    // 0x3d2608: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d2608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d260c:
    // 0x3d260c: 0xaf230000  sw          $v1, 0x0($t9)
    ctx->pc = 0x3d260cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 3));
label_3d2610:
    // 0x3d2610: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3d2610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_3d2614:
    // 0x3d2614: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3d2614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3d2618:
    // 0x3d2618: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3d2618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_3d261c:
    // 0x3d261c: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x3d261cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
label_3d2620:
    // 0x3d2620: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x3d2620u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_3d2624:
    // 0x3d2624: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x3d2624u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
label_3d2628:
    // 0x3d2628: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x3d2628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_3d262c:
    // 0x3d262c: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
label_3d2630:
    if (ctx->pc == 0x3D2630u) {
        ctx->pc = 0x3D2630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D262Cu;
        // 0x3d2630: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2634u;
        goto label_3d2634;
    }
    ctx->pc = 0x3D262Cu;
    {
        const bool branch_taken_0x3d262c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D262Cu;
        // 0x3d2630: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d262c) {
            ctx->pc = 0x3D2520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d2520;
        }
    }
    ctx->pc = 0x3D2634u;
label_3d2634:
    // 0x3d2634: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d2634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d2638:
    // 0x3d2638: 0xd4102b  sltu        $v0, $a2, $s4
    ctx->pc = 0x3d2638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_3d263c:
    // 0x3d263c: 0x5440ff7a  bnel        $v0, $zero, . + 4 + (-0x86 << 2)
label_3d2640:
    if (ctx->pc == 0x3D2640u) {
        ctx->pc = 0x3D2640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D263Cu;
        // 0x3d2640: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2644u;
        goto label_3d2644;
    }
    ctx->pc = 0x3D263Cu;
    {
        const bool branch_taken_0x3d263c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d263c) {
            ctx->pc = 0x3D2640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D263Cu;
            // 0x3d2640: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d2428;
        }
    }
    ctx->pc = 0x3D2644u;
label_3d2644:
    // 0x3d2644: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x3d2644u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d2648:
    // 0x3d2648: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x3d2648u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_3d264c:
    // 0x3d264c: 0x5440ff6c  bnel        $v0, $zero, . + 4 + (-0x94 << 2)
label_3d2650:
    if (ctx->pc == 0x3D2650u) {
        ctx->pc = 0x3D2650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D264Cu;
        // 0x3d2650: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2654u;
        goto label_3d2654;
    }
    ctx->pc = 0x3D264Cu;
    {
        const bool branch_taken_0x3d264c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d264c) {
            ctx->pc = 0x3D2650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D264Cu;
            // 0x3d2650: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d2400;
        }
    }
    ctx->pc = 0x3D2654u;
label_3d2654:
    // 0x3d2654: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3d2654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3d2658:
    // 0x3d2658: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d2658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d265c:
    // 0x3d265c: 0x600013  mtlo        $v1
    ctx->pc = 0x3d265cu;
    ctx->lo = GPR_U64(ctx, 3);
label_3d2660:
    // 0x3d2660: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3d2660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3d2664:
    // 0x3d2664: 0x128000b1  beqz        $s4, . + 4 + (0xB1 << 2)
label_3d2668:
    if (ctx->pc == 0x3D2668u) {
        ctx->pc = 0x3D2668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2664u;
        // 0x3d2668: 0x72631000  madd        $v0, $s3, $v1 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D266Cu;
        goto label_3d266c;
    }
    ctx->pc = 0x3D2664u;
    {
        const bool branch_taken_0x3d2664 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2664u;
        // 0x3d2668: 0x72631000  madd        $v0, $s3, $v1 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2664) {
            ctx->pc = 0x3D292Cu;
            goto label_3d292c;
        }
    }
    ctx->pc = 0x3D266Cu;
label_3d266c:
    // 0x3d266c: 0x2740018  mult        $zero, $s3, $s4
    ctx->pc = 0x3d266cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3d2670:
    // 0x3d2670: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d2670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d2674:
    // 0x3d2674: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3d2674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3d2678:
    // 0x3d2678: 0x8fad0020  lw          $t5, 0x20($sp)
    ctx->pc = 0x3d2678u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3d267c:
    // 0x3d267c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d267cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d2680:
    // 0x3d2680: 0x8fac0024  lw          $t4, 0x24($sp)
    ctx->pc = 0x3d2680u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3d2684:
    // 0x3d2684: 0x241300ff  addiu       $s3, $zero, 0xFF
    ctx->pc = 0x3d2684u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3d2688:
    // 0x3d2688: 0x8fab0028  lw          $t3, 0x28($sp)
    ctx->pc = 0x3d2688u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3d268c:
    // 0x3d268c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x3d268cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d2690:
    // 0x3d2690: 0x8faa002c  lw          $t2, 0x2C($sp)
    ctx->pc = 0x3d2690u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3d2694:
    // 0x3d2694: 0x3812  mflo        $a3
    ctx->pc = 0x3d2694u;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_3d2698:
    // 0x3d2698: 0x8fa80030  lw          $t0, 0x30($sp)
    ctx->pc = 0x3d2698u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3d269c:
    // 0x3d269c: 0x2a0702d  daddu       $t6, $s5, $zero
    ctx->pc = 0x3d269cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d26a0:
    // 0x3d26a0: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x3d26a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3d26a4:
    // 0x3d26a4: 0x0  nop
    ctx->pc = 0x3d26a4u;
    // NOP
label_3d26a8:
    // 0x3d26a8: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x3d26a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_3d26ac:
    // 0x3d26ac: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
label_3d26b0:
    if (ctx->pc == 0x3D26B0u) {
        ctx->pc = 0x3D26B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D26ACu;
        // 0x3d26b0: 0x2f71018  mult        $v0, $s7, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D26B4u;
        goto label_3d26b4;
    }
    ctx->pc = 0x3D26ACu;
    {
        const bool branch_taken_0x3d26ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d26ac) {
            ctx->pc = 0x3D26B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D26ACu;
            // 0x3d26b0: 0x2f71018  mult        $v0, $s7, $s7 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D27C8u;
            goto label_3d27c8;
        }
    }
    ctx->pc = 0x3D26B4u;
label_3d26b4:
    // 0x3d26b4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3d26b8:
    if (ctx->pc == 0x3D26B8u) {
        ctx->pc = 0x3D26B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D26B4u;
        // 0x3d26b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D26BCu;
        goto label_3d26bc;
    }
    ctx->pc = 0x3D26B4u;
    {
        const bool branch_taken_0x3d26b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3D26B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D26B4u;
        // 0x3d26b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d26b4) {
            ctx->pc = 0x3D26CCu;
            goto label_3d26cc;
        }
    }
    ctx->pc = 0x3D26BCu;
label_3d26bc:
    // 0x3d26bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d26bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d26c0:
    // 0x3d26c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d26c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3d26c4:
    // 0x3d26c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d26c8:
    if (ctx->pc == 0x3D26C8u) {
        ctx->pc = 0x3D26C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D26C4u;
        // 0x3d26c8: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D26CCu;
        goto label_3d26cc;
    }
    ctx->pc = 0x3D26C4u;
    {
        const bool branch_taken_0x3d26c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D26C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D26C4u;
        // 0x3d26c8: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d26c4) {
            ctx->pc = 0x3D26E4u;
            goto label_3d26e4;
        }
    }
    ctx->pc = 0x3D26CCu;
label_3d26cc:
    // 0x3d26cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d26ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d26d0:
    // 0x3d26d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d26d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3d26d4:
    // 0x3d26d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d26d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d26d8:
    // 0x3d26d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d26d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3d26dc:
    // 0x3d26dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d26dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3d26e0:
    // 0x3d26e0: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x3d26e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_3d26e4:
    // 0x3d26e4: 0x46001043  div.s       $f1, $f2, $f0
    ctx->pc = 0x3d26e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_3d26e8:
    // 0x3d26e8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3d26ec:
    if (ctx->pc == 0x3D26ECu) {
        ctx->pc = 0x3D26ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D26E8u;
        // 0x3d26ec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D26F0u;
        goto label_3d26f0;
    }
    ctx->pc = 0x3D26E8u;
    {
        const bool branch_taken_0x3d26e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3D26ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D26E8u;
        // 0x3d26ec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d26e8) {
            ctx->pc = 0x3D2700u;
            goto label_3d2700;
        }
    }
    ctx->pc = 0x3D26F0u;
label_3d26f0:
    // 0x3d26f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d26f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d26f4:
    // 0x3d26f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d26f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3d26f8:
    // 0x3d26f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d26fc:
    if (ctx->pc == 0x3D26FCu) {
        ctx->pc = 0x3D26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D26F8u;
        // 0x3d26fc: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2700u;
        goto label_3d2700;
    }
    ctx->pc = 0x3D26F8u;
    {
        const bool branch_taken_0x3d26f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D26F8u;
        // 0x3d26fc: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d26f8) {
            ctx->pc = 0x3D2718u;
            goto label_3d2718;
        }
    }
    ctx->pc = 0x3D2700u;
label_3d2700:
    // 0x3d2700: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d2700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d2704:
    // 0x3d2704: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d2704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3d2708:
    // 0x3d2708: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d2708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d270c:
    // 0x3d270c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d270cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3d2710:
    // 0x3d2710: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d2710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3d2714:
    // 0x3d2714: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d2714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d2718:
    // 0x3d2718: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d2718u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3d271c:
    // 0x3d271c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3d271cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3d2720:
    // 0x3d2720: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3d2720u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_3d2724:
    // 0x3d2724: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x3d2724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_3d2728:
    // 0x3d2728: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3d272c:
    if (ctx->pc == 0x3D272Cu) {
        ctx->pc = 0x3D272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2728u;
        // 0x3d272c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2730u;
        goto label_3d2730;
    }
    ctx->pc = 0x3D2728u;
    {
        const bool branch_taken_0x3d2728 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3D272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2728u;
        // 0x3d272c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2728) {
            ctx->pc = 0x3D2740u;
            goto label_3d2740;
        }
    }
    ctx->pc = 0x3D2730u;
label_3d2730:
    // 0x3d2730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d2730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d2734:
    // 0x3d2734: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d2734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3d2738:
    // 0x3d2738: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d273c:
    if (ctx->pc == 0x3D273Cu) {
        ctx->pc = 0x3D273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2738u;
        // 0x3d273c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2740u;
        goto label_3d2740;
    }
    ctx->pc = 0x3D2738u;
    {
        const bool branch_taken_0x3d2738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2738u;
        // 0x3d273c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2738) {
            ctx->pc = 0x3D2758u;
            goto label_3d2758;
        }
    }
    ctx->pc = 0x3D2740u;
label_3d2740:
    // 0x3d2740: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d2740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d2744:
    // 0x3d2744: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d2744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3d2748:
    // 0x3d2748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d2748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d274c:
    // 0x3d274c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d274cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3d2750:
    // 0x3d2750: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d2750u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3d2754:
    // 0x3d2754: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d2754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d2758:
    // 0x3d2758: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d2758u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3d275c:
    // 0x3d275c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3d275cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3d2760:
    // 0x3d2760: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3d2760u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_3d2764:
    // 0x3d2764: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x3d2764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_3d2768:
    // 0x3d2768: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
label_3d276c:
    if (ctx->pc == 0x3D276Cu) {
        ctx->pc = 0x3D276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2768u;
        // 0x3d276c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2770u;
        goto label_3d2770;
    }
    ctx->pc = 0x3D2768u;
    {
        const bool branch_taken_0x3d2768 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3d2768) {
            ctx->pc = 0x3D276Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2768u;
            // 0x3d276c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2780u;
            goto label_3d2780;
        }
    }
    ctx->pc = 0x3D2770u;
label_3d2770:
    // 0x3d2770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d2770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d2774:
    // 0x3d2774: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d2774u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3d2778:
    // 0x3d2778: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d277c:
    if (ctx->pc == 0x3D277Cu) {
        ctx->pc = 0x3D277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2778u;
        // 0x3d277c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2780u;
        goto label_3d2780;
    }
    ctx->pc = 0x3D2778u;
    {
        const bool branch_taken_0x3d2778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2778u;
        // 0x3d277c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2778) {
            ctx->pc = 0x3D2798u;
            goto label_3d2798;
        }
    }
    ctx->pc = 0x3D2780u;
label_3d2780:
    // 0x3d2780: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d2780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d2784:
    // 0x3d2784: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d2784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3d2788:
    // 0x3d2788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d2788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d278c:
    // 0x3d278c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d278cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3d2790:
    // 0x3d2790: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d2790u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3d2794:
    // 0x3d2794: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d2794u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d2798:
    // 0x3d2798: 0xa0b30003  sb          $s3, 0x3($a1)
    ctx->pc = 0x3d2798u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 19));
label_3d279c:
    // 0x3d279c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d279cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3d27a0:
    // 0x3d27a0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3d27a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3d27a4:
    // 0x3d27a4: 0x720c2  srl         $a0, $a3, 3
    ctx->pc = 0x3d27a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 3));
label_3d27a8:
    // 0x3d27a8: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x3d27a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
label_3d27ac:
    // 0x3d27ac: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x3d27acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3d27b0:
    // 0x3d27b0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x3d27b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3d27b4:
    // 0x3d27b4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3d27b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3d27b8:
    // 0x3d27b8: 0x30e20007  andi        $v0, $a3, 0x7
    ctx->pc = 0x3d27b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
label_3d27bc:
    // 0x3d27bc: 0x4f1004  sllv        $v0, $t7, $v0
    ctx->pc = 0x3d27bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 2) & 0x1F));
label_3d27c0:
    // 0x3d27c0: 0x10000046  b           . + 4 + (0x46 << 2)
label_3d27c4:
    if (ctx->pc == 0x3D27C4u) {
        ctx->pc = 0x3D27C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D27C0u;
        // 0x3d27c4: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D27C8u;
        goto label_3d27c8;
    }
    ctx->pc = 0x3D27C0u;
    {
        const bool branch_taken_0x3d27c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D27C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D27C0u;
        // 0x3d27c4: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d27c0) {
            ctx->pc = 0x3D28DCu;
            goto label_3d28dc;
        }
    }
    ctx->pc = 0x3D27C8u;
label_3d27c8:
    // 0x3d27c8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3d27cc:
    if (ctx->pc == 0x3D27CCu) {
        ctx->pc = 0x3D27CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D27C8u;
        // 0x3d27cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D27D0u;
        goto label_3d27d0;
    }
    ctx->pc = 0x3D27C8u;
    {
        const bool branch_taken_0x3d27c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3D27CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D27C8u;
        // 0x3d27cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d27c8) {
            ctx->pc = 0x3D27E0u;
            goto label_3d27e0;
        }
    }
    ctx->pc = 0x3D27D0u;
label_3d27d0:
    // 0x3d27d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d27d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d27d4:
    // 0x3d27d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d27d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3d27d8:
    // 0x3d27d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d27dc:
    if (ctx->pc == 0x3D27DCu) {
        ctx->pc = 0x3D27DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D27D8u;
        // 0x3d27dc: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D27E0u;
        goto label_3d27e0;
    }
    ctx->pc = 0x3D27D8u;
    {
        const bool branch_taken_0x3d27d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D27DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D27D8u;
        // 0x3d27dc: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d27d8) {
            ctx->pc = 0x3D27F8u;
            goto label_3d27f8;
        }
    }
    ctx->pc = 0x3D27E0u;
label_3d27e0:
    // 0x3d27e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d27e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d27e4:
    // 0x3d27e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d27e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3d27e8:
    // 0x3d27e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d27e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d27ec:
    // 0x3d27ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d27ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3d27f0:
    // 0x3d27f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d27f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3d27f4:
    // 0x3d27f4: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x3d27f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_3d27f8:
    // 0x3d27f8: 0x46001043  div.s       $f1, $f2, $f0
    ctx->pc = 0x3d27f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_3d27fc:
    // 0x3d27fc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3d2800:
    if (ctx->pc == 0x3D2800u) {
        ctx->pc = 0x3D2800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D27FCu;
        // 0x3d2800: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2804u;
        goto label_3d2804;
    }
    ctx->pc = 0x3D27FCu;
    {
        const bool branch_taken_0x3d27fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3D2800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D27FCu;
        // 0x3d2800: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d27fc) {
            ctx->pc = 0x3D2814u;
            goto label_3d2814;
        }
    }
    ctx->pc = 0x3D2804u;
label_3d2804:
    // 0x3d2804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d2804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d2808:
    // 0x3d2808: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d2808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3d280c:
    // 0x3d280c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d2810:
    if (ctx->pc == 0x3D2810u) {
        ctx->pc = 0x3D2810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D280Cu;
        // 0x3d2810: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2814u;
        goto label_3d2814;
    }
    ctx->pc = 0x3D280Cu;
    {
        const bool branch_taken_0x3d280c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D280Cu;
        // 0x3d2810: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d280c) {
            ctx->pc = 0x3D282Cu;
            goto label_3d282c;
        }
    }
    ctx->pc = 0x3D2814u;
label_3d2814:
    // 0x3d2814: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d2814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d2818:
    // 0x3d2818: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d2818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3d281c:
    // 0x3d281c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d281cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d2820:
    // 0x3d2820: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d2820u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3d2824:
    // 0x3d2824: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d2824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3d2828:
    // 0x3d2828: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d2828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d282c:
    // 0x3d282c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d282cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3d2830:
    // 0x3d2830: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3d2830u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3d2834:
    // 0x3d2834: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3d2834u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_3d2838:
    // 0x3d2838: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x3d2838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_3d283c:
    // 0x3d283c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3d2840:
    if (ctx->pc == 0x3D2840u) {
        ctx->pc = 0x3D2840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D283Cu;
        // 0x3d2840: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2844u;
        goto label_3d2844;
    }
    ctx->pc = 0x3D283Cu;
    {
        const bool branch_taken_0x3d283c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3D2840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D283Cu;
        // 0x3d2840: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d283c) {
            ctx->pc = 0x3D2854u;
            goto label_3d2854;
        }
    }
    ctx->pc = 0x3D2844u;
label_3d2844:
    // 0x3d2844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d2844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d2848:
    // 0x3d2848: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d2848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3d284c:
    // 0x3d284c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d2850:
    if (ctx->pc == 0x3D2850u) {
        ctx->pc = 0x3D2850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D284Cu;
        // 0x3d2850: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2854u;
        goto label_3d2854;
    }
    ctx->pc = 0x3D284Cu;
    {
        const bool branch_taken_0x3d284c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D284Cu;
        // 0x3d2850: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d284c) {
            ctx->pc = 0x3D286Cu;
            goto label_3d286c;
        }
    }
    ctx->pc = 0x3D2854u;
label_3d2854:
    // 0x3d2854: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d2854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d2858:
    // 0x3d2858: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d2858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3d285c:
    // 0x3d285c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d285cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d2860:
    // 0x3d2860: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d2860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3d2864:
    // 0x3d2864: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d2864u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3d2868:
    // 0x3d2868: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d2868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d286c:
    // 0x3d286c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d286cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3d2870:
    // 0x3d2870: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3d2870u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3d2874:
    // 0x3d2874: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3d2874u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_3d2878:
    // 0x3d2878: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3d2878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3d287c:
    // 0x3d287c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3d2880:
    if (ctx->pc == 0x3D2880u) {
        ctx->pc = 0x3D2880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D287Cu;
        // 0x3d2880: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2884u;
        goto label_3d2884;
    }
    ctx->pc = 0x3D287Cu;
    {
        const bool branch_taken_0x3d287c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3D2880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D287Cu;
        // 0x3d2880: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d287c) {
            ctx->pc = 0x3D2894u;
            goto label_3d2894;
        }
    }
    ctx->pc = 0x3D2884u;
label_3d2884:
    // 0x3d2884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d2884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d2888:
    // 0x3d2888: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d2888u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3d288c:
    // 0x3d288c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d2890:
    if (ctx->pc == 0x3D2890u) {
        ctx->pc = 0x3D2890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D288Cu;
        // 0x3d2890: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2894u;
        goto label_3d2894;
    }
    ctx->pc = 0x3D288Cu;
    {
        const bool branch_taken_0x3d288c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D288Cu;
        // 0x3d2890: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d288c) {
            ctx->pc = 0x3D28ACu;
            goto label_3d28ac;
        }
    }
    ctx->pc = 0x3D2894u;
label_3d2894:
    // 0x3d2894: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d2894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d2898:
    // 0x3d2898: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d2898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3d289c:
    // 0x3d289c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d289cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d28a0:
    // 0x3d28a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d28a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3d28a4:
    // 0x3d28a4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d28a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3d28a8:
    // 0x3d28a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d28a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d28ac:
    // 0x3d28ac: 0xa0b30003  sb          $s3, 0x3($a1)
    ctx->pc = 0x3d28acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 19));
label_3d28b0:
    // 0x3d28b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d28b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3d28b4:
    // 0x3d28b4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3d28b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3d28b8:
    // 0x3d28b8: 0x720c2  srl         $a0, $a3, 3
    ctx->pc = 0x3d28b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 3));
label_3d28bc:
    // 0x3d28bc: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x3d28bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
label_3d28c0:
    // 0x3d28c0: 0x30e20007  andi        $v0, $a3, 0x7
    ctx->pc = 0x3d28c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
label_3d28c4:
    // 0x3d28c4: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x3d28c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3d28c8:
    // 0x3d28c8: 0x4f1004  sllv        $v0, $t7, $v0
    ctx->pc = 0x3d28c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 2) & 0x1F));
label_3d28cc:
    // 0x3d28cc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3d28ccu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_3d28d0:
    // 0x3d28d0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3d28d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3d28d4:
    // 0x3d28d4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3d28d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3d28d8:
    // 0x3d28d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3d28d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3d28dc:
    // 0x3d28dc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3d28dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_3d28e0:
    // 0x3d28e0: 0xadc00000  sw          $zero, 0x0($t6)
    ctx->pc = 0x3d28e0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 0));
label_3d28e4:
    // 0x3d28e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3d28e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3d28e8:
    // 0x3d28e8: 0xada00000  sw          $zero, 0x0($t5)
    ctx->pc = 0x3d28e8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
label_3d28ec:
    // 0x3d28ec: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3d28ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3d28f0:
    // 0x3d28f0: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x3d28f0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
label_3d28f4:
    // 0x3d28f4: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x3d28f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_3d28f8:
    // 0x3d28f8: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x3d28f8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
label_3d28fc:
    // 0x3d28fc: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x3d28fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_3d2900:
    // 0x3d2900: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x3d2900u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
label_3d2904:
    // 0x3d2904: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x3d2904u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_3d2908:
    // 0x3d2908: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x3d2908u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
label_3d290c:
    // 0x3d290c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3d290cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_3d2910:
    // 0x3d2910: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x3d2910u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_3d2914:
    // 0x3d2914: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x3d2914u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_3d2918:
    // 0x3d2918: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3d2918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_3d291c:
    // 0x3d291c: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x3d291cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
label_3d2920:
    // 0x3d2920: 0xd4102b  sltu        $v0, $a2, $s4
    ctx->pc = 0x3d2920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_3d2924:
    // 0x3d2924: 0x1440ff60  bnez        $v0, . + 4 + (-0xA0 << 2)
label_3d2928:
    if (ctx->pc == 0x3D2928u) {
        ctx->pc = 0x3D2928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2924u;
        // 0x3d2928: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D292Cu;
        goto label_3d292c;
    }
    ctx->pc = 0x3D2924u;
    {
        const bool branch_taken_0x3d2924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2924u;
        // 0x3d2928: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2924) {
            ctx->pc = 0x3D26A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d26a8;
        }
    }
    ctx->pc = 0x3D292Cu;
label_3d292c:
    // 0x3d292c: 0x8fb30038  lw          $s3, 0x38($sp)
    ctx->pc = 0x3d292cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3d2930:
    // 0x3d2930: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x3d2930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3d2934:
    // 0x3d2934: 0x264102b  sltu        $v0, $s3, $a0
    ctx->pc = 0x3d2934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3d2938:
    // 0x3d2938: 0x1440feab  bnez        $v0, . + 4 + (-0x155 << 2)
label_3d293c:
    if (ctx->pc == 0x3D293Cu) {
        ctx->pc = 0x3D293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2938u;
        // 0x3d293c: 0x26640001  addiu       $a0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2940u;
        goto label_3d2940;
    }
    ctx->pc = 0x3D2938u;
    {
        const bool branch_taken_0x3d2938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2938u;
        // 0x3d293c: 0x26640001  addiu       $a0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2938) {
            ctx->pc = 0x3D23E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d23e8;
        }
    }
    ctx->pc = 0x3D2940u;
label_3d2940:
    // 0x3d2940: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_3d2944:
    if (ctx->pc == 0x3D2944u) {
        ctx->pc = 0x3D2944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2940u;
        // 0x3d2944: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2948u;
        goto label_3d2948;
    }
    ctx->pc = 0x3D2940u;
    {
        const bool branch_taken_0x3d2940 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2940u;
        // 0x3d2944: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2940) {
            ctx->pc = 0x3D2958u;
            goto label_3d2958;
        }
    }
    ctx->pc = 0x3D2948u;
label_3d2948:
    // 0x3d2948: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x3d2948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3d294c:
    // 0x3d294c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3d294cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3d2950:
    // 0x3d2950: 0x40f809  jalr        $v0
label_3d2954:
    if (ctx->pc == 0x3D2954u) {
        ctx->pc = 0x3D2954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2950u;
        // 0x3d2954: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2958u;
        goto label_3d2958;
    }
    ctx->pc = 0x3D2950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D2958u);
        ctx->pc = 0x3D2954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2950u;
        // 0x3d2954: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2950u, 0x3D2958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D2958u;
label_3d2958:
    // 0x3d2958: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3d2958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3d295c:
    // 0x3d295c: 0xc1073c2  jal         func_41CF08
label_3d2960:
    if (ctx->pc == 0x3D2960u) {
        ctx->pc = 0x3D2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D295Cu;
        // 0x3d2960: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2964u;
        goto label_3d2964;
    }
    ctx->pc = 0x3D295Cu;
    SET_GPR_U32(ctx, 31, 0x3D2964u);
    ctx->pc = 0x3D2960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D295Cu;
    // 0x3d2960: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x3D295Cu, 0x3D2964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2964u;
label_3d2964:
    // 0x3d2964: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3d2964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3d2968:
    // 0x3d2968: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3d296c:
    if (ctx->pc == 0x3D296Cu) {
        ctx->pc = 0x3D296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2968u;
        // 0x3d296c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2970u;
        goto label_3d2970;
    }
    ctx->pc = 0x3D2968u;
    {
        const bool branch_taken_0x3d2968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2968u;
        // 0x3d296c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2968) {
            ctx->pc = 0x3D297Cu;
            goto label_3d297c;
        }
    }
    ctx->pc = 0x3D2970u;
label_3d2970:
    // 0x3d2970: 0xc10705c  jal         func_41C170
label_3d2974:
    if (ctx->pc == 0x3D2974u) {
        ctx->pc = 0x3D2974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2970u;
        // 0x3d2974: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2978u;
        goto label_3d2978;
    }
    ctx->pc = 0x3D2970u;
    SET_GPR_U32(ctx, 31, 0x3D2978u);
    ctx->pc = 0x3D2974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2970u;
    // 0x3d2974: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D2970u, 0x3D2978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2978u;
label_3d2978:
    // 0x3d2978: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x3d2978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3d297c:
    // 0x3d297c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d297cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d2980:
    // 0x3d2980: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x3d2980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3d2984:
    // 0x3d2984: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x3d2984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3d2988:
    // 0x3d2988: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x3d2988u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3d298c:
    // 0x3d298c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x3d298cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3d2990:
    // 0x3d2990: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x3d2990u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3d2994:
    // 0x3d2994: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3d2994u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3d2998:
    // 0x3d2998: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x3d2998u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d299c:
    // 0x3d299c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x3d299cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d29a0:
    // 0x3d29a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d29a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3d29a4:
    // 0x3d29a4: 0x3e00008  jr          $ra
label_3d29a8:
    if (ctx->pc == 0x3D29A8u) {
        ctx->pc = 0x3D29A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D29A4u;
        // 0x3d29a8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D29ACu;
        goto label_3d29ac;
    }
    ctx->pc = 0x3D29A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D29A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D29A4u;
        // 0x3d29a8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D29A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D29ACu;
label_3d29ac:
    // 0x3d29ac: 0x0  nop
    ctx->pc = 0x3d29acu;
    // NOP
    ctx->pc = 0x3d29b0u;
}
