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

// Function: sub_002C21D0
// Address: 0x2c21d0 - 0x2c25e0
void sub_002C21D0_0x2c21d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C21D0_0x2c21d0");
#endif

    switch (ctx->pc) {
        case 0x2c21d0u: goto label_2c21d0;
        case 0x2c21d4u: goto label_2c21d4;
        case 0x2c21d8u: goto label_2c21d8;
        case 0x2c21dcu: goto label_2c21dc;
        case 0x2c21e0u: goto label_2c21e0;
        case 0x2c21e4u: goto label_2c21e4;
        case 0x2c21e8u: goto label_2c21e8;
        case 0x2c21ecu: goto label_2c21ec;
        case 0x2c21f0u: goto label_2c21f0;
        case 0x2c21f4u: goto label_2c21f4;
        case 0x2c21f8u: goto label_2c21f8;
        case 0x2c21fcu: goto label_2c21fc;
        case 0x2c2200u: goto label_2c2200;
        case 0x2c2204u: goto label_2c2204;
        case 0x2c2208u: goto label_2c2208;
        case 0x2c220cu: goto label_2c220c;
        case 0x2c2210u: goto label_2c2210;
        case 0x2c2214u: goto label_2c2214;
        case 0x2c2218u: goto label_2c2218;
        case 0x2c221cu: goto label_2c221c;
        case 0x2c2220u: goto label_2c2220;
        case 0x2c2224u: goto label_2c2224;
        case 0x2c2228u: goto label_2c2228;
        case 0x2c222cu: goto label_2c222c;
        case 0x2c2230u: goto label_2c2230;
        case 0x2c2234u: goto label_2c2234;
        case 0x2c2238u: goto label_2c2238;
        case 0x2c223cu: goto label_2c223c;
        case 0x2c2240u: goto label_2c2240;
        case 0x2c2244u: goto label_2c2244;
        case 0x2c2248u: goto label_2c2248;
        case 0x2c224cu: goto label_2c224c;
        case 0x2c2250u: goto label_2c2250;
        case 0x2c2254u: goto label_2c2254;
        case 0x2c2258u: goto label_2c2258;
        case 0x2c225cu: goto label_2c225c;
        case 0x2c2260u: goto label_2c2260;
        case 0x2c2264u: goto label_2c2264;
        case 0x2c2268u: goto label_2c2268;
        case 0x2c226cu: goto label_2c226c;
        case 0x2c2270u: goto label_2c2270;
        case 0x2c2274u: goto label_2c2274;
        case 0x2c2278u: goto label_2c2278;
        case 0x2c227cu: goto label_2c227c;
        case 0x2c2280u: goto label_2c2280;
        case 0x2c2284u: goto label_2c2284;
        case 0x2c2288u: goto label_2c2288;
        case 0x2c228cu: goto label_2c228c;
        case 0x2c2290u: goto label_2c2290;
        case 0x2c2294u: goto label_2c2294;
        case 0x2c2298u: goto label_2c2298;
        case 0x2c229cu: goto label_2c229c;
        case 0x2c22a0u: goto label_2c22a0;
        case 0x2c22a4u: goto label_2c22a4;
        case 0x2c22a8u: goto label_2c22a8;
        case 0x2c22acu: goto label_2c22ac;
        case 0x2c22b0u: goto label_2c22b0;
        case 0x2c22b4u: goto label_2c22b4;
        case 0x2c22b8u: goto label_2c22b8;
        case 0x2c22bcu: goto label_2c22bc;
        case 0x2c22c0u: goto label_2c22c0;
        case 0x2c22c4u: goto label_2c22c4;
        case 0x2c22c8u: goto label_2c22c8;
        case 0x2c22ccu: goto label_2c22cc;
        case 0x2c22d0u: goto label_2c22d0;
        case 0x2c22d4u: goto label_2c22d4;
        case 0x2c22d8u: goto label_2c22d8;
        case 0x2c22dcu: goto label_2c22dc;
        case 0x2c22e0u: goto label_2c22e0;
        case 0x2c22e4u: goto label_2c22e4;
        case 0x2c22e8u: goto label_2c22e8;
        case 0x2c22ecu: goto label_2c22ec;
        case 0x2c22f0u: goto label_2c22f0;
        case 0x2c22f4u: goto label_2c22f4;
        case 0x2c22f8u: goto label_2c22f8;
        case 0x2c22fcu: goto label_2c22fc;
        case 0x2c2300u: goto label_2c2300;
        case 0x2c2304u: goto label_2c2304;
        case 0x2c2308u: goto label_2c2308;
        case 0x2c230cu: goto label_2c230c;
        case 0x2c2310u: goto label_2c2310;
        case 0x2c2314u: goto label_2c2314;
        case 0x2c2318u: goto label_2c2318;
        case 0x2c231cu: goto label_2c231c;
        case 0x2c2320u: goto label_2c2320;
        case 0x2c2324u: goto label_2c2324;
        case 0x2c2328u: goto label_2c2328;
        case 0x2c232cu: goto label_2c232c;
        case 0x2c2330u: goto label_2c2330;
        case 0x2c2334u: goto label_2c2334;
        case 0x2c2338u: goto label_2c2338;
        case 0x2c233cu: goto label_2c233c;
        case 0x2c2340u: goto label_2c2340;
        case 0x2c2344u: goto label_2c2344;
        case 0x2c2348u: goto label_2c2348;
        case 0x2c234cu: goto label_2c234c;
        case 0x2c2350u: goto label_2c2350;
        case 0x2c2354u: goto label_2c2354;
        case 0x2c2358u: goto label_2c2358;
        case 0x2c235cu: goto label_2c235c;
        case 0x2c2360u: goto label_2c2360;
        case 0x2c2364u: goto label_2c2364;
        case 0x2c2368u: goto label_2c2368;
        case 0x2c236cu: goto label_2c236c;
        case 0x2c2370u: goto label_2c2370;
        case 0x2c2374u: goto label_2c2374;
        case 0x2c2378u: goto label_2c2378;
        case 0x2c237cu: goto label_2c237c;
        case 0x2c2380u: goto label_2c2380;
        case 0x2c2384u: goto label_2c2384;
        case 0x2c2388u: goto label_2c2388;
        case 0x2c238cu: goto label_2c238c;
        case 0x2c2390u: goto label_2c2390;
        case 0x2c2394u: goto label_2c2394;
        case 0x2c2398u: goto label_2c2398;
        case 0x2c239cu: goto label_2c239c;
        case 0x2c23a0u: goto label_2c23a0;
        case 0x2c23a4u: goto label_2c23a4;
        case 0x2c23a8u: goto label_2c23a8;
        case 0x2c23acu: goto label_2c23ac;
        case 0x2c23b0u: goto label_2c23b0;
        case 0x2c23b4u: goto label_2c23b4;
        case 0x2c23b8u: goto label_2c23b8;
        case 0x2c23bcu: goto label_2c23bc;
        case 0x2c23c0u: goto label_2c23c0;
        case 0x2c23c4u: goto label_2c23c4;
        case 0x2c23c8u: goto label_2c23c8;
        case 0x2c23ccu: goto label_2c23cc;
        case 0x2c23d0u: goto label_2c23d0;
        case 0x2c23d4u: goto label_2c23d4;
        case 0x2c23d8u: goto label_2c23d8;
        case 0x2c23dcu: goto label_2c23dc;
        case 0x2c23e0u: goto label_2c23e0;
        case 0x2c23e4u: goto label_2c23e4;
        case 0x2c23e8u: goto label_2c23e8;
        case 0x2c23ecu: goto label_2c23ec;
        case 0x2c23f0u: goto label_2c23f0;
        case 0x2c23f4u: goto label_2c23f4;
        case 0x2c23f8u: goto label_2c23f8;
        case 0x2c23fcu: goto label_2c23fc;
        case 0x2c2400u: goto label_2c2400;
        case 0x2c2404u: goto label_2c2404;
        case 0x2c2408u: goto label_2c2408;
        case 0x2c240cu: goto label_2c240c;
        case 0x2c2410u: goto label_2c2410;
        case 0x2c2414u: goto label_2c2414;
        case 0x2c2418u: goto label_2c2418;
        case 0x2c241cu: goto label_2c241c;
        case 0x2c2420u: goto label_2c2420;
        case 0x2c2424u: goto label_2c2424;
        case 0x2c2428u: goto label_2c2428;
        case 0x2c242cu: goto label_2c242c;
        case 0x2c2430u: goto label_2c2430;
        case 0x2c2434u: goto label_2c2434;
        case 0x2c2438u: goto label_2c2438;
        case 0x2c243cu: goto label_2c243c;
        case 0x2c2440u: goto label_2c2440;
        case 0x2c2444u: goto label_2c2444;
        case 0x2c2448u: goto label_2c2448;
        case 0x2c244cu: goto label_2c244c;
        case 0x2c2450u: goto label_2c2450;
        case 0x2c2454u: goto label_2c2454;
        case 0x2c2458u: goto label_2c2458;
        case 0x2c245cu: goto label_2c245c;
        case 0x2c2460u: goto label_2c2460;
        case 0x2c2464u: goto label_2c2464;
        case 0x2c2468u: goto label_2c2468;
        case 0x2c246cu: goto label_2c246c;
        case 0x2c2470u: goto label_2c2470;
        case 0x2c2474u: goto label_2c2474;
        case 0x2c2478u: goto label_2c2478;
        case 0x2c247cu: goto label_2c247c;
        case 0x2c2480u: goto label_2c2480;
        case 0x2c2484u: goto label_2c2484;
        case 0x2c2488u: goto label_2c2488;
        case 0x2c248cu: goto label_2c248c;
        case 0x2c2490u: goto label_2c2490;
        case 0x2c2494u: goto label_2c2494;
        case 0x2c2498u: goto label_2c2498;
        case 0x2c249cu: goto label_2c249c;
        case 0x2c24a0u: goto label_2c24a0;
        case 0x2c24a4u: goto label_2c24a4;
        case 0x2c24a8u: goto label_2c24a8;
        case 0x2c24acu: goto label_2c24ac;
        case 0x2c24b0u: goto label_2c24b0;
        case 0x2c24b4u: goto label_2c24b4;
        case 0x2c24b8u: goto label_2c24b8;
        case 0x2c24bcu: goto label_2c24bc;
        case 0x2c24c0u: goto label_2c24c0;
        case 0x2c24c4u: goto label_2c24c4;
        case 0x2c24c8u: goto label_2c24c8;
        case 0x2c24ccu: goto label_2c24cc;
        case 0x2c24d0u: goto label_2c24d0;
        case 0x2c24d4u: goto label_2c24d4;
        case 0x2c24d8u: goto label_2c24d8;
        case 0x2c24dcu: goto label_2c24dc;
        case 0x2c24e0u: goto label_2c24e0;
        case 0x2c24e4u: goto label_2c24e4;
        case 0x2c24e8u: goto label_2c24e8;
        case 0x2c24ecu: goto label_2c24ec;
        case 0x2c24f0u: goto label_2c24f0;
        case 0x2c24f4u: goto label_2c24f4;
        case 0x2c24f8u: goto label_2c24f8;
        case 0x2c24fcu: goto label_2c24fc;
        case 0x2c2500u: goto label_2c2500;
        case 0x2c2504u: goto label_2c2504;
        case 0x2c2508u: goto label_2c2508;
        case 0x2c250cu: goto label_2c250c;
        case 0x2c2510u: goto label_2c2510;
        case 0x2c2514u: goto label_2c2514;
        case 0x2c2518u: goto label_2c2518;
        case 0x2c251cu: goto label_2c251c;
        case 0x2c2520u: goto label_2c2520;
        case 0x2c2524u: goto label_2c2524;
        case 0x2c2528u: goto label_2c2528;
        case 0x2c252cu: goto label_2c252c;
        case 0x2c2530u: goto label_2c2530;
        case 0x2c2534u: goto label_2c2534;
        case 0x2c2538u: goto label_2c2538;
        case 0x2c253cu: goto label_2c253c;
        case 0x2c2540u: goto label_2c2540;
        case 0x2c2544u: goto label_2c2544;
        case 0x2c2548u: goto label_2c2548;
        case 0x2c254cu: goto label_2c254c;
        case 0x2c2550u: goto label_2c2550;
        case 0x2c2554u: goto label_2c2554;
        case 0x2c2558u: goto label_2c2558;
        case 0x2c255cu: goto label_2c255c;
        case 0x2c2560u: goto label_2c2560;
        case 0x2c2564u: goto label_2c2564;
        case 0x2c2568u: goto label_2c2568;
        case 0x2c256cu: goto label_2c256c;
        case 0x2c2570u: goto label_2c2570;
        case 0x2c2574u: goto label_2c2574;
        case 0x2c2578u: goto label_2c2578;
        case 0x2c257cu: goto label_2c257c;
        case 0x2c2580u: goto label_2c2580;
        case 0x2c2584u: goto label_2c2584;
        case 0x2c2588u: goto label_2c2588;
        case 0x2c258cu: goto label_2c258c;
        case 0x2c2590u: goto label_2c2590;
        case 0x2c2594u: goto label_2c2594;
        case 0x2c2598u: goto label_2c2598;
        case 0x2c259cu: goto label_2c259c;
        case 0x2c25a0u: goto label_2c25a0;
        case 0x2c25a4u: goto label_2c25a4;
        case 0x2c25a8u: goto label_2c25a8;
        case 0x2c25acu: goto label_2c25ac;
        case 0x2c25b0u: goto label_2c25b0;
        case 0x2c25b4u: goto label_2c25b4;
        case 0x2c25b8u: goto label_2c25b8;
        case 0x2c25bcu: goto label_2c25bc;
        case 0x2c25c0u: goto label_2c25c0;
        case 0x2c25c4u: goto label_2c25c4;
        case 0x2c25c8u: goto label_2c25c8;
        case 0x2c25ccu: goto label_2c25cc;
        case 0x2c25d0u: goto label_2c25d0;
        case 0x2c25d4u: goto label_2c25d4;
        case 0x2c25d8u: goto label_2c25d8;
        case 0x2c25dcu: goto label_2c25dc;
        default: break;
    }

    ctx->pc = 0x2c21d0u;

label_2c21d0:
    // 0x2c21d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2c21d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2c21d4:
    // 0x2c21d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2c21d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2c21d8:
    // 0x2c21d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2c21d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2c21dc:
    // 0x2c21dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2c21dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2c21e0:
    // 0x2c21e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c21e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2c21e4:
    // 0x2c21e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c21e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2c21e8:
    // 0x2c21e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c21e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2c21ec:
    // 0x2c21ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c21ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2c21f0:
    // 0x2c21f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c21f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c21f4:
    // 0x2c21f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c21f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c21f8:
    // 0x2c21f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c21f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c21fc:
    // 0x2c21fc: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x2c21fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
label_2c2200:
    // 0x2c2200: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c2200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c2204:
    // 0x2c2204: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x2c2204u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c2208:
    // 0x2c2208: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2c2208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c220c:
    // 0x2c220c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c220cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2c2210:
    // 0x2c2210: 0xc085538  jal         func_2154E0
label_2c2214:
    if (ctx->pc == 0x2C2214u) {
        ctx->pc = 0x2C2218u;
        goto label_2c2218;
    }
    ctx->pc = 0x2C2210u;
    SET_GPR_U32(ctx, 31, 0x2C2218u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C2210u, 0x2C2218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2218u;
label_2c2218:
    // 0x2c2218: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c2218u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c221c:
    // 0x2c221c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2c221cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c2220:
    // 0x2c2220: 0xc096880  jal         func_25A200
label_2c2224:
    if (ctx->pc == 0x2C2224u) {
        ctx->pc = 0x2C2228u;
        goto label_2c2228;
    }
    ctx->pc = 0x2C2220u;
    SET_GPR_U32(ctx, 31, 0x2C2228u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2C2220u, 0x2C2228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2228u;
label_2c2228:
    // 0x2c2228: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c2228u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c222c:
    // 0x2c222c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c222cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c2230:
    // 0x2c2230: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c2230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2c2234:
    // 0x2c2234: 0xc085538  jal         func_2154E0
label_2c2238:
    if (ctx->pc == 0x2C2238u) {
        ctx->pc = 0x2C223Cu;
        goto label_2c223c;
    }
    ctx->pc = 0x2C2234u;
    SET_GPR_U32(ctx, 31, 0x2C223Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C2234u, 0x2C223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C223Cu;
label_2c223c:
    // 0x2c223c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c223cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2240:
    // 0x2c2240: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c2240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c2244:
    // 0x2c2244: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2c2244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2c2248:
    // 0x2c2248: 0xc085538  jal         func_2154E0
label_2c224c:
    if (ctx->pc == 0x2C224Cu) {
        ctx->pc = 0x2C2250u;
        goto label_2c2250;
    }
    ctx->pc = 0x2C2248u;
    SET_GPR_U32(ctx, 31, 0x2C2250u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C2248u, 0x2C2250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2250u;
label_2c2250:
    // 0x2c2250: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c2250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2254:
    // 0x2c2254: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c2254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c2258:
    // 0x2c2258: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c2258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c225c:
    // 0x2c225c: 0xc096eac  jal         func_25BAB0
label_2c2260:
    if (ctx->pc == 0x2C2260u) {
        ctx->pc = 0x2C2264u;
        goto label_2c2264;
    }
    ctx->pc = 0x2C225Cu;
    SET_GPR_U32(ctx, 31, 0x2C2264u);
    ctx->pc = 0x25BAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BAB0u, 0x2C225Cu, 0x2C2264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2264u;
label_2c2264:
    // 0x2c2264: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2c2264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c2268:
    // 0x2c2268: 0xc096814  jal         func_25A050
label_2c226c:
    if (ctx->pc == 0x2C226Cu) {
        ctx->pc = 0x2C2270u;
        goto label_2c2270;
    }
    ctx->pc = 0x2C2268u;
    SET_GPR_U32(ctx, 31, 0x2C2270u);
    ctx->pc = 0x25A050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A050u, 0x2C2268u, 0x2C2270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2270u;
label_2c2270:
    // 0x2c2270: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x2c2270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_2c2274:
    // 0x2c2274: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2c2274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2c2278:
    // 0x2c2278: 0xc0afd1c  jal         func_2BF470
label_2c227c:
    if (ctx->pc == 0x2C227Cu) {
        ctx->pc = 0x2C2280u;
        goto label_2c2280;
    }
    ctx->pc = 0x2C2278u;
    SET_GPR_U32(ctx, 31, 0x2C2280u);
    ctx->pc = 0x2BF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF470u, 0x2C2278u, 0x2C2280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2280u;
label_2c2280:
    // 0x2c2280: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x2c2280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2c2284:
    // 0x2c2284: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c2284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2288:
    // 0x2c2288: 0xc09ac70  jal         func_26B1C0
label_2c228c:
    if (ctx->pc == 0x2C228Cu) {
        ctx->pc = 0x2C2290u;
        goto label_2c2290;
    }
    ctx->pc = 0x2C2288u;
    SET_GPR_U32(ctx, 31, 0x2C2290u);
    ctx->pc = 0x26B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1C0u, 0x2C2288u, 0x2C2290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2290u;
label_2c2290:
    // 0x2c2290: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c2290u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2294:
    // 0x2c2294: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2c2294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2c2298:
    // 0x2c2298: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2c2298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c229c:
    // 0x2c229c: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x2c229cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2c22a0:
    // 0x2c22a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c22a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c22a4:
    // 0x2c22a4: 0xc0aff64  jal         func_2BFD90
label_2c22a8:
    if (ctx->pc == 0x2C22A8u) {
        ctx->pc = 0x2C22ACu;
        goto label_2c22ac;
    }
    ctx->pc = 0x2C22A4u;
    SET_GPR_U32(ctx, 31, 0x2C22ACu);
    ctx->pc = 0x2BFD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFD90u, 0x2C22A4u, 0x2C22ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C22ACu;
label_2c22ac:
    // 0x2c22ac: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2c22acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2c22b0:
    // 0x2c22b0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2c22b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2c22b4:
    // 0x2c22b4: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x2c22b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_2c22b8:
    // 0x2c22b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2c22bc:
    if (ctx->pc == 0x2C22BCu) {
        ctx->pc = 0x2C22C0u;
        goto label_2c22c0;
    }
    ctx->pc = 0x2C22B8u;
    {
        const bool branch_taken_0x2c22b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c22b8) {
            ctx->pc = 0x2C22CCu;
            goto label_2c22cc;
        }
    }
    ctx->pc = 0x2C22C0u;
label_2c22c0:
    // 0x2c22c0: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2c22c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c22c4:
    // 0x2c22c4: 0x10000074  b           . + 4 + (0x74 << 2)
label_2c22c8:
    if (ctx->pc == 0x2C22C8u) {
        ctx->pc = 0x2C22CCu;
        goto label_2c22cc;
    }
    ctx->pc = 0x2C22C4u;
    {
        const bool branch_taken_0x2c22c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c22c4) {
            ctx->pc = 0x2C2498u;
            goto label_2c2498;
        }
    }
    ctx->pc = 0x2C22CCu;
label_2c22cc:
    // 0x2c22cc: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2c22ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2c22d0:
    // 0x2c22d0: 0xc048094  jal         func_120250
label_2c22d4:
    if (ctx->pc == 0x2C22D4u) {
        ctx->pc = 0x2C22D8u;
        goto label_2c22d8;
    }
    ctx->pc = 0x2C22D0u;
    SET_GPR_U32(ctx, 31, 0x2C22D8u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2C22D0u, 0x2C22D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C22D8u;
label_2c22d8:
    // 0x2c22d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c22d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c22dc:
    // 0x2c22dc: 0x24050482  addiu       $a1, $zero, 0x482
    ctx->pc = 0x2c22dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1154));
label_2c22e0:
    // 0x2c22e0: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x2c22e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2c22e4:
    // 0x2c22e4: 0xc040ab0  jal         func_102AC0
label_2c22e8:
    if (ctx->pc == 0x2C22E8u) {
        ctx->pc = 0x2C22ECu;
        goto label_2c22ec;
    }
    ctx->pc = 0x2C22E4u;
    SET_GPR_U32(ctx, 31, 0x2C22ECu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2C22E4u, 0x2C22ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C22ECu;
label_2c22ec:
    // 0x2c22ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c22ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c22f0:
    // 0x2c22f0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2c22f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c22f4:
    // 0x2c22f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c22f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c22f8:
    // 0x2c22f8: 0xc096f14  jal         func_25BC50
label_2c22fc:
    if (ctx->pc == 0x2C22FCu) {
        ctx->pc = 0x2C2300u;
        goto label_2c2300;
    }
    ctx->pc = 0x2C22F8u;
    SET_GPR_U32(ctx, 31, 0x2C2300u);
    ctx->pc = 0x25BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BC50u, 0x2C22F8u, 0x2C2300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2300u;
label_2c2300:
    // 0x2c2300: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c2300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2304:
    // 0x2c2304: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2c2304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2c2308:
    // 0x2c2308: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x2c2308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_2c230c:
    // 0x2c230c: 0x1840004b  blez        $v0, . + 4 + (0x4B << 2)
label_2c2310:
    if (ctx->pc == 0x2C2310u) {
        ctx->pc = 0x2C2314u;
        goto label_2c2314;
    }
    ctx->pc = 0x2C230Cu;
    {
        const bool branch_taken_0x2c230c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c230c) {
            ctx->pc = 0x2C243Cu;
            goto label_2c243c;
        }
    }
    ctx->pc = 0x2C2314u;
label_2c2314:
    // 0x2c2314: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2c2314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c2318:
    // 0x2c2318: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c2318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c231c:
    // 0x2c231c: 0x0  nop
    ctx->pc = 0x2c231cu;
    // NOP
label_2c2320:
    // 0x2c2320: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c2320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c2324:
    // 0x2c2324: 0x4501005b  bc1t        . + 4 + (0x5B << 2)
label_2c2328:
    if (ctx->pc == 0x2C2328u) {
        ctx->pc = 0x2C232Cu;
        goto label_2c232c;
    }
    ctx->pc = 0x2C2324u;
    {
        const bool branch_taken_0x2c2324 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c2324) {
            ctx->pc = 0x2C2494u;
            goto label_2c2494;
        }
    }
    ctx->pc = 0x2C232Cu;
label_2c232c:
    // 0x2c232c: 0x2a220012  slti        $v0, $s1, 0x12
    ctx->pc = 0x2c232cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)18) ? 1 : 0);
label_2c2330:
    // 0x2c2330: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2c2334:
    if (ctx->pc == 0x2C2334u) {
        ctx->pc = 0x2C2338u;
        goto label_2c2338;
    }
    ctx->pc = 0x2C2330u;
    {
        const bool branch_taken_0x2c2330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2330) {
            ctx->pc = 0x2C2344u;
            goto label_2c2344;
        }
    }
    ctx->pc = 0x2C2338u;
label_2c2338:
    // 0x2c2338: 0x2a210017  slti        $at, $s1, 0x17
    ctx->pc = 0x2c2338u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)23) ? 1 : 0);
label_2c233c:
    // 0x2c233c: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
label_2c2340:
    if (ctx->pc == 0x2C2340u) {
        ctx->pc = 0x2C2344u;
        goto label_2c2344;
    }
    ctx->pc = 0x2C233Cu;
    {
        const bool branch_taken_0x2c233c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c233c) {
            ctx->pc = 0x2C23ACu;
            goto label_2c23ac;
        }
    }
    ctx->pc = 0x2C2344u;
label_2c2344:
    // 0x2c2344: 0xc0de0d2  jal         func_378348
label_2c2348:
    if (ctx->pc == 0x2C2348u) {
        ctx->pc = 0x2C234Cu;
        goto label_2c234c;
    }
    ctx->pc = 0x2C2344u;
    SET_GPR_U32(ctx, 31, 0x2C234Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2C2344u, 0x2C234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C234Cu;
label_2c234c:
    // 0x2c234c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2c2350:
    if (ctx->pc == 0x2C2350u) {
        ctx->pc = 0x2C2354u;
        goto label_2c2354;
    }
    ctx->pc = 0x2C234Cu;
    {
        const bool branch_taken_0x2c234c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2c234c) {
            ctx->pc = 0x2C2368u;
            goto label_2c2368;
        }
    }
    ctx->pc = 0x2C2354u;
label_2c2354:
    // 0x2c2354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c2358:
    // 0x2c2358: 0x0  nop
    ctx->pc = 0x2c2358u;
    // NOP
label_2c235c:
    // 0x2c235c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2c235cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2c2360:
    // 0x2c2360: 0x10000008  b           . + 4 + (0x8 << 2)
label_2c2364:
    if (ctx->pc == 0x2C2364u) {
        ctx->pc = 0x2C2368u;
        goto label_2c2368;
    }
    ctx->pc = 0x2C2360u;
    {
        const bool branch_taken_0x2c2360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2360) {
            ctx->pc = 0x2C2384u;
            goto label_2c2384;
        }
    }
    ctx->pc = 0x2C2368u;
label_2c2368:
    // 0x2c2368: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2c2368u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2c236c:
    // 0x2c236c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c236cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2c2370:
    // 0x2c2370: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c2370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2c2374:
    // 0x2c2374: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c2378:
    // 0x2c2378: 0x0  nop
    ctx->pc = 0x2c2378u;
    // NOP
label_2c237c:
    // 0x2c237c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2c237cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2c2380:
    // 0x2c2380: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2c2380u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2c2384:
    // 0x2c2384: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2c2384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2c2388:
    // 0x2c2388: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c238c:
    // 0x2c238c: 0x0  nop
    ctx->pc = 0x2c238cu;
    // NOP
label_2c2390:
    // 0x2c2390: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2c2390u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2c2394:
    // 0x2c2394: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2c2394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2c2398:
    // 0x2c2398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c239c:
    // 0x2c239c: 0x0  nop
    ctx->pc = 0x2c239cu;
    // NOP
label_2c23a0:
    // 0x2c23a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c23a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c23a4:
    // 0x2c23a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2c23a8:
    if (ctx->pc == 0x2C23A8u) {
        ctx->pc = 0x2C23ACu;
        goto label_2c23ac;
    }
    ctx->pc = 0x2C23A4u;
    {
        const bool branch_taken_0x2c23a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c23a4) {
            ctx->pc = 0x2C23BCu;
            goto label_2c23bc;
        }
    }
    ctx->pc = 0x2C23ACu;
label_2c23ac:
    // 0x2c23ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c23acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c23b0:
    // 0x2c23b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c23b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c23b4:
    // 0x2c23b4: 0xc096eac  jal         func_25BAB0
label_2c23b8:
    if (ctx->pc == 0x2C23B8u) {
        ctx->pc = 0x2C23BCu;
        goto label_2c23bc;
    }
    ctx->pc = 0x2C23B4u;
    SET_GPR_U32(ctx, 31, 0x2C23BCu);
    ctx->pc = 0x25BAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BAB0u, 0x2C23B4u, 0x2C23BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C23BCu;
label_2c23bc:
    // 0x2c23bc: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_2c23c0:
    if (ctx->pc == 0x2C23C0u) {
        ctx->pc = 0x2C23C4u;
        goto label_2c23c4;
    }
    ctx->pc = 0x2C23BCu;
    {
        const bool branch_taken_0x2c23bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c23bc) {
            ctx->pc = 0x2C23DCu;
            goto label_2c23dc;
        }
    }
    ctx->pc = 0x2C23C4u;
label_2c23c4:
    // 0x2c23c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c23c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c23c8:
    // 0x2c23c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c23c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c23cc:
    // 0x2c23cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c23ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c23d0:
    // 0x2c23d0: 0x24070fa0  addiu       $a3, $zero, 0xFA0
    ctx->pc = 0x2c23d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
label_2c23d4:
    // 0x2c23d4: 0xc0a8b8c  jal         func_2A2E30
label_2c23d8:
    if (ctx->pc == 0x2C23D8u) {
        ctx->pc = 0x2C23DCu;
        goto label_2c23dc;
    }
    ctx->pc = 0x2C23D4u;
    SET_GPR_U32(ctx, 31, 0x2C23DCu);
    ctx->pc = 0x2A2E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2E30u, 0x2C23D4u, 0x2C23DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C23DCu;
label_2c23dc:
    // 0x2c23dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c23dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c23e0:
    // 0x2c23e0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2c23e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2c23e4:
    // 0x2c23e4: 0xc085538  jal         func_2154E0
label_2c23e8:
    if (ctx->pc == 0x2C23E8u) {
        ctx->pc = 0x2C23ECu;
        goto label_2c23ec;
    }
    ctx->pc = 0x2C23E4u;
    SET_GPR_U32(ctx, 31, 0x2C23ECu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C23E4u, 0x2C23ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C23ECu;
label_2c23ec:
    // 0x2c23ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c23ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c23f0:
    // 0x2c23f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c23f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c23f4:
    // 0x2c23f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c23f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c23f8:
    // 0x2c23f8: 0xc0980d0  jal         func_260340
label_2c23fc:
    if (ctx->pc == 0x2C23FCu) {
        ctx->pc = 0x2C2400u;
        goto label_2c2400;
    }
    ctx->pc = 0x2C23F8u;
    SET_GPR_U32(ctx, 31, 0x2C2400u);
    ctx->pc = 0x260340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260340u, 0x2C23F8u, 0x2C2400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2400u;
label_2c2400:
    // 0x2c2400: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c2400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c2404:
    // 0x2c2404: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_2c2408:
    if (ctx->pc == 0x2C2408u) {
        ctx->pc = 0x2C240Cu;
        goto label_2c240c;
    }
    ctx->pc = 0x2C2404u;
    {
        const bool branch_taken_0x2c2404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2404) {
            ctx->pc = 0x2C2494u;
            goto label_2c2494;
        }
    }
    ctx->pc = 0x2C240Cu;
label_2c240c:
    // 0x2c240c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c240cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c2410:
    // 0x2c2410: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c2410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2414:
    // 0x2c2414: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c2414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c2418:
    // 0x2c2418: 0xc0980bc  jal         func_2602F0
label_2c241c:
    if (ctx->pc == 0x2C241Cu) {
        ctx->pc = 0x2C2420u;
        goto label_2c2420;
    }
    ctx->pc = 0x2C2418u;
    SET_GPR_U32(ctx, 31, 0x2C2420u);
    ctx->pc = 0x2602F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2602F0u, 0x2C2418u, 0x2C2420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2420u;
label_2c2420:
    // 0x2c2420: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c2420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c2424:
    // 0x2c2424: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c2424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c2428:
    // 0x2c2428: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c2428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c242c:
    // 0x2c242c: 0xc08d69c  jal         func_235A70
label_2c2430:
    if (ctx->pc == 0x2C2430u) {
        ctx->pc = 0x2C2434u;
        goto label_2c2434;
    }
    ctx->pc = 0x2C242Cu;
    SET_GPR_U32(ctx, 31, 0x2C2434u);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x2C242Cu, 0x2C2434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2434u;
label_2c2434:
    // 0x2c2434: 0x10000017  b           . + 4 + (0x17 << 2)
label_2c2438:
    if (ctx->pc == 0x2C2438u) {
        ctx->pc = 0x2C243Cu;
        goto label_2c243c;
    }
    ctx->pc = 0x2C2434u;
    {
        const bool branch_taken_0x2c2434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2434) {
            ctx->pc = 0x2C2494u;
            goto label_2c2494;
        }
    }
    ctx->pc = 0x2C243Cu;
label_2c243c:
    // 0x2c243c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2c243cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2c2440:
    // 0x2c2440: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x2c2440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_2c2444:
    // 0x2c2444: 0x4410013  bgez        $v0, . + 4 + (0x13 << 2)
label_2c2448:
    if (ctx->pc == 0x2C2448u) {
        ctx->pc = 0x2C244Cu;
        goto label_2c244c;
    }
    ctx->pc = 0x2C2444u;
    {
        const bool branch_taken_0x2c2444 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2c2444) {
            ctx->pc = 0x2C2494u;
            goto label_2c2494;
        }
    }
    ctx->pc = 0x2C244Cu;
label_2c244c:
    // 0x2c244c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2c244cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c2450:
    // 0x2c2450: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c2450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c2454:
    // 0x2c2454: 0x0  nop
    ctx->pc = 0x2c2454u;
    // NOP
label_2c2458:
    // 0x2c2458: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c2458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c245c:
    // 0x2c245c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_2c2460:
    if (ctx->pc == 0x2C2460u) {
        ctx->pc = 0x2C2464u;
        goto label_2c2464;
    }
    ctx->pc = 0x2C245Cu;
    {
        const bool branch_taken_0x2c245c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c245c) {
            ctx->pc = 0x2C2494u;
            goto label_2c2494;
        }
    }
    ctx->pc = 0x2C2464u;
label_2c2464:
    // 0x2c2464: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c2464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c2468:
    // 0x2c2468: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c2468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c246c:
    // 0x2c246c: 0xc096eac  jal         func_25BAB0
label_2c2470:
    if (ctx->pc == 0x2C2470u) {
        ctx->pc = 0x2C2474u;
        goto label_2c2474;
    }
    ctx->pc = 0x2C246Cu;
    SET_GPR_U32(ctx, 31, 0x2C2474u);
    ctx->pc = 0x25BAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BAB0u, 0x2C246Cu, 0x2C2474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2474u;
label_2c2474:
    // 0x2c2474: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_2c2478:
    if (ctx->pc == 0x2C2478u) {
        ctx->pc = 0x2C247Cu;
        goto label_2c247c;
    }
    ctx->pc = 0x2C2474u;
    {
        const bool branch_taken_0x2c2474 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2474) {
            ctx->pc = 0x2C2494u;
            goto label_2c2494;
        }
    }
    ctx->pc = 0x2C247Cu;
label_2c247c:
    // 0x2c247c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c247cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c2480:
    // 0x2c2480: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c2480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2484:
    // 0x2c2484: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2c2484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c2488:
    // 0x2c2488: 0x24070fa0  addiu       $a3, $zero, 0xFA0
    ctx->pc = 0x2c2488u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
label_2c248c:
    // 0x2c248c: 0xc0a8b8c  jal         func_2A2E30
label_2c2490:
    if (ctx->pc == 0x2C2490u) {
        ctx->pc = 0x2C2494u;
        goto label_2c2494;
    }
    ctx->pc = 0x2C248Cu;
    SET_GPR_U32(ctx, 31, 0x2C2494u);
    ctx->pc = 0x2A2E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2E30u, 0x2C248Cu, 0x2C2494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2494u;
label_2c2494:
    // 0x2c2494: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2c2494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c2498:
    // 0x2c2498: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2c2498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2c249c:
    // 0x2c249c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2c249cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c24a0:
    // 0x2c24a0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2c24a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c24a4:
    // 0x2c24a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c24a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c24a8:
    // 0x2c24a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c24a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c24ac:
    // 0x2c24ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c24acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c24b0:
    // 0x2c24b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c24b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c24b4:
    // 0x2c24b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c24b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c24b8:
    // 0x2c24b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c24b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c24bc:
    // 0x2c24bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c24bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c24c0:
    // 0x2c24c0: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2c24c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2c24c4:
    // 0x2c24c4: 0x3e00008  jr          $ra
label_2c24c8:
    if (ctx->pc == 0x2C24C8u) {
        ctx->pc = 0x2C24CCu;
        goto label_2c24cc;
    }
    ctx->pc = 0x2C24C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C24C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C24CCu;
label_2c24cc:
    // 0x2c24cc: 0x0  nop
    ctx->pc = 0x2c24ccu;
    // NOP
label_2c24d0:
    // 0x2c24d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c24d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2c24d4:
    // 0x2c24d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2c24d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2c24d8:
    // 0x2c24d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c24d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2c24dc:
    // 0x2c24dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c24dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2c24e0:
    // 0x2c24e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c24e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2c24e4:
    // 0x2c24e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c24e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c24e8:
    // 0x2c24e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c24e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c24ec:
    // 0x2c24ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c24ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c24f0:
    // 0x2c24f0: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2c24f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_2c24f4:
    // 0x2c24f4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2c24f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2c24f8:
    // 0x2c24f8: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2c24f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_2c24fc:
    // 0x2c24fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c24fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c2500:
    // 0x2c2500: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2c2500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2c2504:
    // 0x2c2504: 0x320f809  jalr        $t9
label_2c2508:
    if (ctx->pc == 0x2C2508u) {
        ctx->pc = 0x2C250Cu;
        goto label_2c250c;
    }
    ctx->pc = 0x2C2504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C250Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2504u, 0x2C250Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C250Cu;
label_2c250c:
    // 0x2c250c: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x2c250cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c2510:
    // 0x2c2510: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2c2510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2c2514:
    // 0x2c2514: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2c2514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2c2518:
    // 0x2c2518: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c2518u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c251c:
    // 0x2c251c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2c251cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2c2520:
    // 0x2c2520: 0x320f809  jalr        $t9
label_2c2524:
    if (ctx->pc == 0x2C2524u) {
        ctx->pc = 0x2C2528u;
        goto label_2c2528;
    }
    ctx->pc = 0x2C2520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C2528u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2520u, 0x2C2528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C2528u;
label_2c2528:
    // 0x2c2528: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2c2528u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c252c:
    // 0x2c252c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2c252cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2c2530:
    // 0x2c2530: 0x8c440098  lw          $a0, 0x98($v0)
    ctx->pc = 0x2c2530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_2c2534:
    // 0x2c2534: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c2534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c2538:
    // 0x2c2538: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2c2538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2c253c:
    // 0x2c253c: 0x320f809  jalr        $t9
label_2c2540:
    if (ctx->pc == 0x2C2540u) {
        ctx->pc = 0x2C2544u;
        goto label_2c2544;
    }
    ctx->pc = 0x2C253Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C2544u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C253Cu, 0x2C2544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C2544u;
label_2c2544:
    // 0x2c2544: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x2c2544u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c2548:
    // 0x2c2548: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c2548u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c254c:
    // 0x2c254c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c254cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2550:
    // 0x2c2550: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c2550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2554:
    // 0x2c2554: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_2c2558:
    if (ctx->pc == 0x2C2558u) {
        ctx->pc = 0x2C255Cu;
        goto label_2c255c;
    }
    ctx->pc = 0x2C2554u;
    {
        const bool branch_taken_0x2c2554 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2554) {
            ctx->pc = 0x2C256Cu;
            goto label_2c256c;
        }
    }
    ctx->pc = 0x2C255Cu;
label_2c255c:
    // 0x2c255c: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_2c2560:
    if (ctx->pc == 0x2C2560u) {
        ctx->pc = 0x2C2564u;
        goto label_2c2564;
    }
    ctx->pc = 0x2C255Cu;
    {
        const bool branch_taken_0x2c255c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c255c) {
            ctx->pc = 0x2C256Cu;
            goto label_2c256c;
        }
    }
    ctx->pc = 0x2C2564u;
label_2c2564:
    // 0x2c2564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c2564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c2568:
    // 0x2c2568: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2c2568u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c256c:
    // 0x2c256c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2c2570:
    if (ctx->pc == 0x2C2570u) {
        ctx->pc = 0x2C2574u;
        goto label_2c2574;
    }
    ctx->pc = 0x2C256Cu;
    {
        const bool branch_taken_0x2c256c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c256c) {
            ctx->pc = 0x2C2584u;
            goto label_2c2584;
        }
    }
    ctx->pc = 0x2C2574u;
label_2c2574:
    // 0x2c2574: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_2c2578:
    if (ctx->pc == 0x2C2578u) {
        ctx->pc = 0x2C257Cu;
        goto label_2c257c;
    }
    ctx->pc = 0x2C2574u;
    {
        const bool branch_taken_0x2c2574 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2574) {
            ctx->pc = 0x2C2584u;
            goto label_2c2584;
        }
    }
    ctx->pc = 0x2C257Cu;
label_2c257c:
    // 0x2c257c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c257cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c2580:
    // 0x2c2580: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2c2580u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c2584:
    // 0x2c2584: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2c2588:
    if (ctx->pc == 0x2C2588u) {
        ctx->pc = 0x2C258Cu;
        goto label_2c258c;
    }
    ctx->pc = 0x2C2584u;
    {
        const bool branch_taken_0x2c2584 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2584) {
            ctx->pc = 0x2C25A8u;
            goto label_2c25a8;
        }
    }
    ctx->pc = 0x2C258Cu;
label_2c258c:
    // 0x2c258c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2c258cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2c2590:
    // 0x2c2590: 0xc08ec5c  jal         func_23B170
label_2c2594:
    if (ctx->pc == 0x2C2594u) {
        ctx->pc = 0x2C2598u;
        goto label_2c2598;
    }
    ctx->pc = 0x2C2590u;
    SET_GPR_U32(ctx, 31, 0x2C2598u);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x2C2590u, 0x2C2598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2598u;
label_2c2598:
    // 0x2c2598: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2c259c:
    if (ctx->pc == 0x2C259Cu) {
        ctx->pc = 0x2C25A0u;
        goto label_2c25a0;
    }
    ctx->pc = 0x2C2598u;
    {
        const bool branch_taken_0x2c2598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2598) {
            ctx->pc = 0x2C25A8u;
            goto label_2c25a8;
        }
    }
    ctx->pc = 0x2C25A0u;
label_2c25a0:
    // 0x2c25a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c25a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c25a4:
    // 0x2c25a4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2c25a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c25a8:
    // 0x2c25a8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2c25a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c25ac:
    // 0x2c25ac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2c25acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2c25b0:
    // 0x2c25b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c25b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c25b4:
    // 0x2c25b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c25b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c25b8:
    // 0x2c25b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c25b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c25bc:
    // 0x2c25bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c25bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c25c0:
    // 0x2c25c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c25c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c25c4:
    // 0x2c25c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c25c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c25c8:
    // 0x2c25c8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2c25c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2c25cc:
    // 0x2c25cc: 0x3e00008  jr          $ra
label_2c25d0:
    if (ctx->pc == 0x2C25D0u) {
        ctx->pc = 0x2C25D4u;
        goto label_2c25d4;
    }
    ctx->pc = 0x2C25CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C25CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C25D4u;
label_2c25d4:
    // 0x2c25d4: 0x0  nop
    ctx->pc = 0x2c25d4u;
    // NOP
label_2c25d8:
    // 0x2c25d8: 0x0  nop
    ctx->pc = 0x2c25d8u;
    // NOP
label_2c25dc:
    // 0x2c25dc: 0x0  nop
    ctx->pc = 0x2c25dcu;
    // NOP
    ctx->pc = 0x2c25e0u;
}
