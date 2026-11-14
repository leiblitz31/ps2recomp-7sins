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

// Function: sub_0024E3F0
// Address: 0x24e3f0 - 0x24e940
void sub_0024E3F0_0x24e3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E3F0_0x24e3f0");
#endif

    switch (ctx->pc) {
        case 0x24e3f0u: goto label_24e3f0;
        case 0x24e3f4u: goto label_24e3f4;
        case 0x24e3f8u: goto label_24e3f8;
        case 0x24e3fcu: goto label_24e3fc;
        case 0x24e400u: goto label_24e400;
        case 0x24e404u: goto label_24e404;
        case 0x24e408u: goto label_24e408;
        case 0x24e40cu: goto label_24e40c;
        case 0x24e410u: goto label_24e410;
        case 0x24e414u: goto label_24e414;
        case 0x24e418u: goto label_24e418;
        case 0x24e41cu: goto label_24e41c;
        case 0x24e420u: goto label_24e420;
        case 0x24e424u: goto label_24e424;
        case 0x24e428u: goto label_24e428;
        case 0x24e42cu: goto label_24e42c;
        case 0x24e430u: goto label_24e430;
        case 0x24e434u: goto label_24e434;
        case 0x24e438u: goto label_24e438;
        case 0x24e43cu: goto label_24e43c;
        case 0x24e440u: goto label_24e440;
        case 0x24e444u: goto label_24e444;
        case 0x24e448u: goto label_24e448;
        case 0x24e44cu: goto label_24e44c;
        case 0x24e450u: goto label_24e450;
        case 0x24e454u: goto label_24e454;
        case 0x24e458u: goto label_24e458;
        case 0x24e45cu: goto label_24e45c;
        case 0x24e460u: goto label_24e460;
        case 0x24e464u: goto label_24e464;
        case 0x24e468u: goto label_24e468;
        case 0x24e46cu: goto label_24e46c;
        case 0x24e470u: goto label_24e470;
        case 0x24e474u: goto label_24e474;
        case 0x24e478u: goto label_24e478;
        case 0x24e47cu: goto label_24e47c;
        case 0x24e480u: goto label_24e480;
        case 0x24e484u: goto label_24e484;
        case 0x24e488u: goto label_24e488;
        case 0x24e48cu: goto label_24e48c;
        case 0x24e490u: goto label_24e490;
        case 0x24e494u: goto label_24e494;
        case 0x24e498u: goto label_24e498;
        case 0x24e49cu: goto label_24e49c;
        case 0x24e4a0u: goto label_24e4a0;
        case 0x24e4a4u: goto label_24e4a4;
        case 0x24e4a8u: goto label_24e4a8;
        case 0x24e4acu: goto label_24e4ac;
        case 0x24e4b0u: goto label_24e4b0;
        case 0x24e4b4u: goto label_24e4b4;
        case 0x24e4b8u: goto label_24e4b8;
        case 0x24e4bcu: goto label_24e4bc;
        case 0x24e4c0u: goto label_24e4c0;
        case 0x24e4c4u: goto label_24e4c4;
        case 0x24e4c8u: goto label_24e4c8;
        case 0x24e4ccu: goto label_24e4cc;
        case 0x24e4d0u: goto label_24e4d0;
        case 0x24e4d4u: goto label_24e4d4;
        case 0x24e4d8u: goto label_24e4d8;
        case 0x24e4dcu: goto label_24e4dc;
        case 0x24e4e0u: goto label_24e4e0;
        case 0x24e4e4u: goto label_24e4e4;
        case 0x24e4e8u: goto label_24e4e8;
        case 0x24e4ecu: goto label_24e4ec;
        case 0x24e4f0u: goto label_24e4f0;
        case 0x24e4f4u: goto label_24e4f4;
        case 0x24e4f8u: goto label_24e4f8;
        case 0x24e4fcu: goto label_24e4fc;
        case 0x24e500u: goto label_24e500;
        case 0x24e504u: goto label_24e504;
        case 0x24e508u: goto label_24e508;
        case 0x24e50cu: goto label_24e50c;
        case 0x24e510u: goto label_24e510;
        case 0x24e514u: goto label_24e514;
        case 0x24e518u: goto label_24e518;
        case 0x24e51cu: goto label_24e51c;
        case 0x24e520u: goto label_24e520;
        case 0x24e524u: goto label_24e524;
        case 0x24e528u: goto label_24e528;
        case 0x24e52cu: goto label_24e52c;
        case 0x24e530u: goto label_24e530;
        case 0x24e534u: goto label_24e534;
        case 0x24e538u: goto label_24e538;
        case 0x24e53cu: goto label_24e53c;
        case 0x24e540u: goto label_24e540;
        case 0x24e544u: goto label_24e544;
        case 0x24e548u: goto label_24e548;
        case 0x24e54cu: goto label_24e54c;
        case 0x24e550u: goto label_24e550;
        case 0x24e554u: goto label_24e554;
        case 0x24e558u: goto label_24e558;
        case 0x24e55cu: goto label_24e55c;
        case 0x24e560u: goto label_24e560;
        case 0x24e564u: goto label_24e564;
        case 0x24e568u: goto label_24e568;
        case 0x24e56cu: goto label_24e56c;
        case 0x24e570u: goto label_24e570;
        case 0x24e574u: goto label_24e574;
        case 0x24e578u: goto label_24e578;
        case 0x24e57cu: goto label_24e57c;
        case 0x24e580u: goto label_24e580;
        case 0x24e584u: goto label_24e584;
        case 0x24e588u: goto label_24e588;
        case 0x24e58cu: goto label_24e58c;
        case 0x24e590u: goto label_24e590;
        case 0x24e594u: goto label_24e594;
        case 0x24e598u: goto label_24e598;
        case 0x24e59cu: goto label_24e59c;
        case 0x24e5a0u: goto label_24e5a0;
        case 0x24e5a4u: goto label_24e5a4;
        case 0x24e5a8u: goto label_24e5a8;
        case 0x24e5acu: goto label_24e5ac;
        case 0x24e5b0u: goto label_24e5b0;
        case 0x24e5b4u: goto label_24e5b4;
        case 0x24e5b8u: goto label_24e5b8;
        case 0x24e5bcu: goto label_24e5bc;
        case 0x24e5c0u: goto label_24e5c0;
        case 0x24e5c4u: goto label_24e5c4;
        case 0x24e5c8u: goto label_24e5c8;
        case 0x24e5ccu: goto label_24e5cc;
        case 0x24e5d0u: goto label_24e5d0;
        case 0x24e5d4u: goto label_24e5d4;
        case 0x24e5d8u: goto label_24e5d8;
        case 0x24e5dcu: goto label_24e5dc;
        case 0x24e5e0u: goto label_24e5e0;
        case 0x24e5e4u: goto label_24e5e4;
        case 0x24e5e8u: goto label_24e5e8;
        case 0x24e5ecu: goto label_24e5ec;
        case 0x24e5f0u: goto label_24e5f0;
        case 0x24e5f4u: goto label_24e5f4;
        case 0x24e5f8u: goto label_24e5f8;
        case 0x24e5fcu: goto label_24e5fc;
        case 0x24e600u: goto label_24e600;
        case 0x24e604u: goto label_24e604;
        case 0x24e608u: goto label_24e608;
        case 0x24e60cu: goto label_24e60c;
        case 0x24e610u: goto label_24e610;
        case 0x24e614u: goto label_24e614;
        case 0x24e618u: goto label_24e618;
        case 0x24e61cu: goto label_24e61c;
        case 0x24e620u: goto label_24e620;
        case 0x24e624u: goto label_24e624;
        case 0x24e628u: goto label_24e628;
        case 0x24e62cu: goto label_24e62c;
        case 0x24e630u: goto label_24e630;
        case 0x24e634u: goto label_24e634;
        case 0x24e638u: goto label_24e638;
        case 0x24e63cu: goto label_24e63c;
        case 0x24e640u: goto label_24e640;
        case 0x24e644u: goto label_24e644;
        case 0x24e648u: goto label_24e648;
        case 0x24e64cu: goto label_24e64c;
        case 0x24e650u: goto label_24e650;
        case 0x24e654u: goto label_24e654;
        case 0x24e658u: goto label_24e658;
        case 0x24e65cu: goto label_24e65c;
        case 0x24e660u: goto label_24e660;
        case 0x24e664u: goto label_24e664;
        case 0x24e668u: goto label_24e668;
        case 0x24e66cu: goto label_24e66c;
        case 0x24e670u: goto label_24e670;
        case 0x24e674u: goto label_24e674;
        case 0x24e678u: goto label_24e678;
        case 0x24e67cu: goto label_24e67c;
        case 0x24e680u: goto label_24e680;
        case 0x24e684u: goto label_24e684;
        case 0x24e688u: goto label_24e688;
        case 0x24e68cu: goto label_24e68c;
        case 0x24e690u: goto label_24e690;
        case 0x24e694u: goto label_24e694;
        case 0x24e698u: goto label_24e698;
        case 0x24e69cu: goto label_24e69c;
        case 0x24e6a0u: goto label_24e6a0;
        case 0x24e6a4u: goto label_24e6a4;
        case 0x24e6a8u: goto label_24e6a8;
        case 0x24e6acu: goto label_24e6ac;
        case 0x24e6b0u: goto label_24e6b0;
        case 0x24e6b4u: goto label_24e6b4;
        case 0x24e6b8u: goto label_24e6b8;
        case 0x24e6bcu: goto label_24e6bc;
        case 0x24e6c0u: goto label_24e6c0;
        case 0x24e6c4u: goto label_24e6c4;
        case 0x24e6c8u: goto label_24e6c8;
        case 0x24e6ccu: goto label_24e6cc;
        case 0x24e6d0u: goto label_24e6d0;
        case 0x24e6d4u: goto label_24e6d4;
        case 0x24e6d8u: goto label_24e6d8;
        case 0x24e6dcu: goto label_24e6dc;
        case 0x24e6e0u: goto label_24e6e0;
        case 0x24e6e4u: goto label_24e6e4;
        case 0x24e6e8u: goto label_24e6e8;
        case 0x24e6ecu: goto label_24e6ec;
        case 0x24e6f0u: goto label_24e6f0;
        case 0x24e6f4u: goto label_24e6f4;
        case 0x24e6f8u: goto label_24e6f8;
        case 0x24e6fcu: goto label_24e6fc;
        case 0x24e700u: goto label_24e700;
        case 0x24e704u: goto label_24e704;
        case 0x24e708u: goto label_24e708;
        case 0x24e70cu: goto label_24e70c;
        case 0x24e710u: goto label_24e710;
        case 0x24e714u: goto label_24e714;
        case 0x24e718u: goto label_24e718;
        case 0x24e71cu: goto label_24e71c;
        case 0x24e720u: goto label_24e720;
        case 0x24e724u: goto label_24e724;
        case 0x24e728u: goto label_24e728;
        case 0x24e72cu: goto label_24e72c;
        case 0x24e730u: goto label_24e730;
        case 0x24e734u: goto label_24e734;
        case 0x24e738u: goto label_24e738;
        case 0x24e73cu: goto label_24e73c;
        case 0x24e740u: goto label_24e740;
        case 0x24e744u: goto label_24e744;
        case 0x24e748u: goto label_24e748;
        case 0x24e74cu: goto label_24e74c;
        case 0x24e750u: goto label_24e750;
        case 0x24e754u: goto label_24e754;
        case 0x24e758u: goto label_24e758;
        case 0x24e75cu: goto label_24e75c;
        case 0x24e760u: goto label_24e760;
        case 0x24e764u: goto label_24e764;
        case 0x24e768u: goto label_24e768;
        case 0x24e76cu: goto label_24e76c;
        case 0x24e770u: goto label_24e770;
        case 0x24e774u: goto label_24e774;
        case 0x24e778u: goto label_24e778;
        case 0x24e77cu: goto label_24e77c;
        case 0x24e780u: goto label_24e780;
        case 0x24e784u: goto label_24e784;
        case 0x24e788u: goto label_24e788;
        case 0x24e78cu: goto label_24e78c;
        case 0x24e790u: goto label_24e790;
        case 0x24e794u: goto label_24e794;
        case 0x24e798u: goto label_24e798;
        case 0x24e79cu: goto label_24e79c;
        case 0x24e7a0u: goto label_24e7a0;
        case 0x24e7a4u: goto label_24e7a4;
        case 0x24e7a8u: goto label_24e7a8;
        case 0x24e7acu: goto label_24e7ac;
        case 0x24e7b0u: goto label_24e7b0;
        case 0x24e7b4u: goto label_24e7b4;
        case 0x24e7b8u: goto label_24e7b8;
        case 0x24e7bcu: goto label_24e7bc;
        case 0x24e7c0u: goto label_24e7c0;
        case 0x24e7c4u: goto label_24e7c4;
        case 0x24e7c8u: goto label_24e7c8;
        case 0x24e7ccu: goto label_24e7cc;
        case 0x24e7d0u: goto label_24e7d0;
        case 0x24e7d4u: goto label_24e7d4;
        case 0x24e7d8u: goto label_24e7d8;
        case 0x24e7dcu: goto label_24e7dc;
        case 0x24e7e0u: goto label_24e7e0;
        case 0x24e7e4u: goto label_24e7e4;
        case 0x24e7e8u: goto label_24e7e8;
        case 0x24e7ecu: goto label_24e7ec;
        case 0x24e7f0u: goto label_24e7f0;
        case 0x24e7f4u: goto label_24e7f4;
        case 0x24e7f8u: goto label_24e7f8;
        case 0x24e7fcu: goto label_24e7fc;
        case 0x24e800u: goto label_24e800;
        case 0x24e804u: goto label_24e804;
        case 0x24e808u: goto label_24e808;
        case 0x24e80cu: goto label_24e80c;
        case 0x24e810u: goto label_24e810;
        case 0x24e814u: goto label_24e814;
        case 0x24e818u: goto label_24e818;
        case 0x24e81cu: goto label_24e81c;
        case 0x24e820u: goto label_24e820;
        case 0x24e824u: goto label_24e824;
        case 0x24e828u: goto label_24e828;
        case 0x24e82cu: goto label_24e82c;
        case 0x24e830u: goto label_24e830;
        case 0x24e834u: goto label_24e834;
        case 0x24e838u: goto label_24e838;
        case 0x24e83cu: goto label_24e83c;
        case 0x24e840u: goto label_24e840;
        case 0x24e844u: goto label_24e844;
        case 0x24e848u: goto label_24e848;
        case 0x24e84cu: goto label_24e84c;
        case 0x24e850u: goto label_24e850;
        case 0x24e854u: goto label_24e854;
        case 0x24e858u: goto label_24e858;
        case 0x24e85cu: goto label_24e85c;
        case 0x24e860u: goto label_24e860;
        case 0x24e864u: goto label_24e864;
        case 0x24e868u: goto label_24e868;
        case 0x24e86cu: goto label_24e86c;
        case 0x24e870u: goto label_24e870;
        case 0x24e874u: goto label_24e874;
        case 0x24e878u: goto label_24e878;
        case 0x24e87cu: goto label_24e87c;
        case 0x24e880u: goto label_24e880;
        case 0x24e884u: goto label_24e884;
        case 0x24e888u: goto label_24e888;
        case 0x24e88cu: goto label_24e88c;
        case 0x24e890u: goto label_24e890;
        case 0x24e894u: goto label_24e894;
        case 0x24e898u: goto label_24e898;
        case 0x24e89cu: goto label_24e89c;
        case 0x24e8a0u: goto label_24e8a0;
        case 0x24e8a4u: goto label_24e8a4;
        case 0x24e8a8u: goto label_24e8a8;
        case 0x24e8acu: goto label_24e8ac;
        case 0x24e8b0u: goto label_24e8b0;
        case 0x24e8b4u: goto label_24e8b4;
        case 0x24e8b8u: goto label_24e8b8;
        case 0x24e8bcu: goto label_24e8bc;
        case 0x24e8c0u: goto label_24e8c0;
        case 0x24e8c4u: goto label_24e8c4;
        case 0x24e8c8u: goto label_24e8c8;
        case 0x24e8ccu: goto label_24e8cc;
        case 0x24e8d0u: goto label_24e8d0;
        case 0x24e8d4u: goto label_24e8d4;
        case 0x24e8d8u: goto label_24e8d8;
        case 0x24e8dcu: goto label_24e8dc;
        case 0x24e8e0u: goto label_24e8e0;
        case 0x24e8e4u: goto label_24e8e4;
        case 0x24e8e8u: goto label_24e8e8;
        case 0x24e8ecu: goto label_24e8ec;
        case 0x24e8f0u: goto label_24e8f0;
        case 0x24e8f4u: goto label_24e8f4;
        case 0x24e8f8u: goto label_24e8f8;
        case 0x24e8fcu: goto label_24e8fc;
        case 0x24e900u: goto label_24e900;
        case 0x24e904u: goto label_24e904;
        case 0x24e908u: goto label_24e908;
        case 0x24e90cu: goto label_24e90c;
        case 0x24e910u: goto label_24e910;
        case 0x24e914u: goto label_24e914;
        case 0x24e918u: goto label_24e918;
        case 0x24e91cu: goto label_24e91c;
        case 0x24e920u: goto label_24e920;
        case 0x24e924u: goto label_24e924;
        case 0x24e928u: goto label_24e928;
        case 0x24e92cu: goto label_24e92c;
        case 0x24e930u: goto label_24e930;
        case 0x24e934u: goto label_24e934;
        case 0x24e938u: goto label_24e938;
        case 0x24e93cu: goto label_24e93c;
        default: break;
    }

    ctx->pc = 0x24e3f0u;

label_24e3f0:
    // 0x24e3f0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x24e3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_24e3f4:
    // 0x24e3f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24e3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_24e3f8:
    // 0x24e3f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24e3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24e3fc:
    // 0x24e3fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24e3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24e400:
    // 0x24e400: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24e400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24e404:
    // 0x24e404: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x24e404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
label_24e408:
    // 0x24e408: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x24e408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
label_24e40c:
    // 0x24e40c: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x24e40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
label_24e410:
    // 0x24e410: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x24e410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_24e414:
    // 0x24e414: 0xc0422b8  jal         func_108AE0
label_24e418:
    if (ctx->pc == 0x24E418u) {
        ctx->pc = 0x24E41Cu;
        goto label_24e41c;
    }
    ctx->pc = 0x24E414u;
    SET_GPR_U32(ctx, 31, 0x24E41Cu);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x24E414u, 0x24E41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E41Cu;
label_24e41c:
    // 0x24e41c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24e41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e420:
    // 0x24e420: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24e420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24e424:
    // 0x24e424: 0xc08ec98  jal         func_23B260
label_24e428:
    if (ctx->pc == 0x24E428u) {
        ctx->pc = 0x24E42Cu;
        goto label_24e42c;
    }
    ctx->pc = 0x24E424u;
    SET_GPR_U32(ctx, 31, 0x24E42Cu);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x24E424u, 0x24E42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E42Cu;
label_24e42c:
    // 0x24e42c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24e430:
    // 0x24e430: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x24e430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_24e434:
    // 0x24e434: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x24e434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_24e438:
    // 0x24e438: 0xc0422b8  jal         func_108AE0
label_24e43c:
    if (ctx->pc == 0x24E43Cu) {
        ctx->pc = 0x24E440u;
        goto label_24e440;
    }
    ctx->pc = 0x24E438u;
    SET_GPR_U32(ctx, 31, 0x24E440u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x24E438u, 0x24E440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E440u;
label_24e440:
    // 0x24e440: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24e440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e444:
    // 0x24e444: 0x27a500bc  addiu       $a1, $sp, 0xBC
    ctx->pc = 0x24e444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_24e448:
    // 0x24e448: 0xc0422a8  jal         func_108AA0
label_24e44c:
    if (ctx->pc == 0x24E44Cu) {
        ctx->pc = 0x24E450u;
        goto label_24e450;
    }
    ctx->pc = 0x24E448u;
    SET_GPR_U32(ctx, 31, 0x24E450u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x24E448u, 0x24E450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E450u;
label_24e450:
    // 0x24e450: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x24e450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_24e454:
    // 0x24e454: 0xc0422b8  jal         func_108AE0
label_24e458:
    if (ctx->pc == 0x24E458u) {
        ctx->pc = 0x24E45Cu;
        goto label_24e45c;
    }
    ctx->pc = 0x24E454u;
    SET_GPR_U32(ctx, 31, 0x24E45Cu);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x24E454u, 0x24E45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E45Cu;
label_24e45c:
    // 0x24e45c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24e45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e460:
    // 0x24e460: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24e460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24e464:
    // 0x24e464: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x24e464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_24e468:
    // 0x24e468: 0x320f809  jalr        $t9
label_24e46c:
    if (ctx->pc == 0x24E46Cu) {
        ctx->pc = 0x24E470u;
        goto label_24e470;
    }
    ctx->pc = 0x24E468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24E470u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E468u, 0x24E470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24E470u;
label_24e470:
    // 0x24e470: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24e470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24e474:
    // 0x24e474: 0x1443007c  bne         $v0, $v1, . + 4 + (0x7C << 2)
label_24e478:
    if (ctx->pc == 0x24E478u) {
        ctx->pc = 0x24E47Cu;
        goto label_24e47c;
    }
    ctx->pc = 0x24E474u;
    {
        const bool branch_taken_0x24e474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24e474) {
            ctx->pc = 0x24E668u;
            goto label_24e668;
        }
    }
    ctx->pc = 0x24E47Cu;
label_24e47c:
    // 0x24e47c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x24e47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_24e480:
    // 0x24e480: 0xc0422b8  jal         func_108AE0
label_24e484:
    if (ctx->pc == 0x24E484u) {
        ctx->pc = 0x24E488u;
        goto label_24e488;
    }
    ctx->pc = 0x24E480u;
    SET_GPR_U32(ctx, 31, 0x24E488u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x24E480u, 0x24E488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E488u;
label_24e488:
    // 0x24e488: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x24e488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_24e48c:
    // 0x24e48c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24e490:
    // 0x24e490: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24e490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e494:
    // 0x24e494: 0x24650028  addiu       $a1, $v1, 0x28
    ctx->pc = 0x24e494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_24e498:
    // 0x24e498: 0xc0422a8  jal         func_108AA0
label_24e49c:
    if (ctx->pc == 0x24E49Cu) {
        ctx->pc = 0x24E4A0u;
        goto label_24e4a0;
    }
    ctx->pc = 0x24E498u;
    SET_GPR_U32(ctx, 31, 0x24E4A0u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x24E498u, 0x24E4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E4A0u;
label_24e4a0:
    // 0x24e4a0: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x24e4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_24e4a4:
    // 0x24e4a4: 0xc0422b8  jal         func_108AE0
label_24e4a8:
    if (ctx->pc == 0x24E4A8u) {
        ctx->pc = 0x24E4ACu;
        goto label_24e4ac;
    }
    ctx->pc = 0x24E4A4u;
    SET_GPR_U32(ctx, 31, 0x24E4ACu);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x24E4A4u, 0x24E4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E4ACu;
label_24e4ac:
    // 0x24e4ac: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x24e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_24e4b0:
    // 0x24e4b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24e4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24e4b4:
    // 0x24e4b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24e4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e4b8:
    // 0x24e4b8: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x24e4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_24e4bc:
    // 0x24e4bc: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x24e4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_24e4c0:
    // 0x24e4c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24e4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24e4c4:
    // 0x24e4c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24e4c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24e4c8:
    // 0x24e4c8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x24e4c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_24e4cc:
    // 0x24e4cc: 0x320f809  jalr        $t9
label_24e4d0:
    if (ctx->pc == 0x24E4D0u) {
        ctx->pc = 0x24E4D4u;
        goto label_24e4d4;
    }
    ctx->pc = 0x24E4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24E4D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E4CCu, 0x24E4D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24E4D4u;
label_24e4d4:
    // 0x24e4d4: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x24e4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_24e4d8:
    // 0x24e4d8: 0xc0422b8  jal         func_108AE0
label_24e4dc:
    if (ctx->pc == 0x24E4DCu) {
        ctx->pc = 0x24E4E0u;
        goto label_24e4e0;
    }
    ctx->pc = 0x24E4D8u;
    SET_GPR_U32(ctx, 31, 0x24E4E0u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x24E4D8u, 0x24E4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E4E0u;
label_24e4e0:
    // 0x24e4e0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x24e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_24e4e4:
    // 0x24e4e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24e4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24e4e8:
    // 0x24e4e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24e4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e4ec:
    // 0x24e4ec: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x24e4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_24e4f0:
    // 0x24e4f0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x24e4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_24e4f4:
    // 0x24e4f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24e4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24e4f8:
    // 0x24e4f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24e4f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24e4fc:
    // 0x24e4fc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x24e4fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_24e500:
    // 0x24e500: 0x320f809  jalr        $t9
label_24e504:
    if (ctx->pc == 0x24E504u) {
        ctx->pc = 0x24E508u;
        goto label_24e508;
    }
    ctx->pc = 0x24E500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24E508u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E500u, 0x24E508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24E508u;
label_24e508:
    // 0x24e508: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x24e508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_24e50c:
    // 0x24e50c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24e50cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_24e510:
    // 0x24e510: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_24e514:
    if (ctx->pc == 0x24E514u) {
        ctx->pc = 0x24E518u;
        goto label_24e518;
    }
    ctx->pc = 0x24E510u;
    {
        const bool branch_taken_0x24e510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e510) {
            ctx->pc = 0x24E5D0u;
            goto label_24e5d0;
        }
    }
    ctx->pc = 0x24E518u;
label_24e518:
    // 0x24e518: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x24e518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_24e51c:
    // 0x24e51c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24e520:
    // 0x24e520: 0x8f84bc24  lw          $a0, -0x43DC($gp)
    ctx->pc = 0x24e520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949924)));
label_24e524:
    // 0x24e524: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x24e524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_24e528:
    // 0x24e528: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24e528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24e52c:
    // 0x24e52c: 0xc0a69b0  jal         func_29A6C0
label_24e530:
    if (ctx->pc == 0x24E530u) {
        ctx->pc = 0x24E534u;
        goto label_24e534;
    }
    ctx->pc = 0x24E52Cu;
    SET_GPR_U32(ctx, 31, 0x24E534u);
    ctx->pc = 0x29A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6C0u, 0x24E52Cu, 0x24E534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E534u;
label_24e534:
    // 0x24e534: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24e534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e538:
    // 0x24e538: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x24e538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_24e53c:
    // 0x24e53c: 0xc0422b8  jal         func_108AE0
label_24e540:
    if (ctx->pc == 0x24E540u) {
        ctx->pc = 0x24E544u;
        goto label_24e544;
    }
    ctx->pc = 0x24E53Cu;
    SET_GPR_U32(ctx, 31, 0x24E544u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x24E53Cu, 0x24E544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E544u;
label_24e544:
    // 0x24e544: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24e544u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e548:
    // 0x24e548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24e548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24e54c:
    // 0x24e54c: 0xc0a66cc  jal         func_299B30
label_24e550:
    if (ctx->pc == 0x24E550u) {
        ctx->pc = 0x24E554u;
        goto label_24e554;
    }
    ctx->pc = 0x24E54Cu;
    SET_GPR_U32(ctx, 31, 0x24E554u);
    ctx->pc = 0x299B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299B30u, 0x24E54Cu, 0x24E554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E554u;
label_24e554:
    // 0x24e554: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24e554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24e558:
    // 0x24e558: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24e558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e55c:
    // 0x24e55c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x24e55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_24e560:
    // 0x24e560: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24e560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24e564:
    // 0x24e564: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24e564u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24e568:
    // 0x24e568: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x24e568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_24e56c:
    // 0x24e56c: 0x320f809  jalr        $t9
label_24e570:
    if (ctx->pc == 0x24E570u) {
        ctx->pc = 0x24E574u;
        goto label_24e574;
    }
    ctx->pc = 0x24E56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24E574u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E56Cu, 0x24E574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24E574u;
label_24e574:
    // 0x24e574: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x24e574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_24e578:
    // 0x24e578: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24e578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24e57c:
    // 0x24e57c: 0x8f84bc24  lw          $a0, -0x43DC($gp)
    ctx->pc = 0x24e57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949924)));
label_24e580:
    // 0x24e580: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x24e580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_24e584:
    // 0x24e584: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24e584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24e588:
    // 0x24e588: 0xc0a69b0  jal         func_29A6C0
label_24e58c:
    if (ctx->pc == 0x24E58Cu) {
        ctx->pc = 0x24E590u;
        goto label_24e590;
    }
    ctx->pc = 0x24E588u;
    SET_GPR_U32(ctx, 31, 0x24E590u);
    ctx->pc = 0x29A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6C0u, 0x24E588u, 0x24E590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E590u;
label_24e590:
    // 0x24e590: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24e590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e594:
    // 0x24e594: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x24e594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_24e598:
    // 0x24e598: 0xc0422b8  jal         func_108AE0
label_24e59c:
    if (ctx->pc == 0x24E59Cu) {
        ctx->pc = 0x24E5A0u;
        goto label_24e5a0;
    }
    ctx->pc = 0x24E598u;
    SET_GPR_U32(ctx, 31, 0x24E5A0u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x24E598u, 0x24E5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E5A0u;
label_24e5a0:
    // 0x24e5a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24e5a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e5a4:
    // 0x24e5a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24e5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24e5a8:
    // 0x24e5a8: 0xc0a66cc  jal         func_299B30
label_24e5ac:
    if (ctx->pc == 0x24E5ACu) {
        ctx->pc = 0x24E5B0u;
        goto label_24e5b0;
    }
    ctx->pc = 0x24E5A8u;
    SET_GPR_U32(ctx, 31, 0x24E5B0u);
    ctx->pc = 0x299B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299B30u, 0x24E5A8u, 0x24E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E5B0u;
label_24e5b0:
    // 0x24e5b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24e5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24e5b4:
    // 0x24e5b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24e5b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e5b8:
    // 0x24e5b8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x24e5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_24e5bc:
    // 0x24e5bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24e5bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24e5c0:
    // 0x24e5c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24e5c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24e5c4:
    // 0x24e5c4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x24e5c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_24e5c8:
    // 0x24e5c8: 0x320f809  jalr        $t9
label_24e5cc:
    if (ctx->pc == 0x24E5CCu) {
        ctx->pc = 0x24E5D0u;
        goto label_24e5d0;
    }
    ctx->pc = 0x24E5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24E5D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E5C8u, 0x24E5D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24E5D0u;
label_24e5d0:
    // 0x24e5d0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x24e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_24e5d4:
    // 0x24e5d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24e5d8:
    // 0x24e5d8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x24e5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_24e5dc:
    // 0x24e5dc: 0xc09246c  jal         func_2491B0
label_24e5e0:
    if (ctx->pc == 0x24E5E0u) {
        ctx->pc = 0x24E5E4u;
        goto label_24e5e4;
    }
    ctx->pc = 0x24E5DCu;
    SET_GPR_U32(ctx, 31, 0x24E5E4u);
    ctx->pc = 0x2491B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2491B0u, 0x24E5DCu, 0x24E5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E5E4u;
label_24e5e4:
    // 0x24e5e4: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x24e5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_24e5e8:
    // 0x24e5e8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x24e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_24e5ec:
    // 0x24e5ec: 0xc0422b8  jal         func_108AE0
label_24e5f0:
    if (ctx->pc == 0x24E5F0u) {
        ctx->pc = 0x24E5F4u;
        goto label_24e5f4;
    }
    ctx->pc = 0x24E5ECu;
    SET_GPR_U32(ctx, 31, 0x24E5F4u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x24E5ECu, 0x24E5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E5F4u;
label_24e5f4:
    // 0x24e5f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24e5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e5f8:
    // 0x24e5f8: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x24e5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_24e5fc:
    // 0x24e5fc: 0xc0422a8  jal         func_108AA0
label_24e600:
    if (ctx->pc == 0x24E600u) {
        ctx->pc = 0x24E604u;
        goto label_24e604;
    }
    ctx->pc = 0x24E5FCu;
    SET_GPR_U32(ctx, 31, 0x24E604u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x24E5FCu, 0x24E604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E604u;
label_24e604:
    // 0x24e604: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x24e604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_24e608:
    // 0x24e608: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24e608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24e60c:
    // 0x24e60c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x24e60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_24e610:
    // 0x24e610: 0xc092464  jal         func_249190
label_24e614:
    if (ctx->pc == 0x24E614u) {
        ctx->pc = 0x24E618u;
        goto label_24e618;
    }
    ctx->pc = 0x24E610u;
    SET_GPR_U32(ctx, 31, 0x24E618u);
    ctx->pc = 0x249190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249190u, 0x24E610u, 0x24E618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E618u;
label_24e618:
    // 0x24e618: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24e618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e61c:
    // 0x24e61c: 0x10000009  b           . + 4 + (0x9 << 2)
label_24e620:
    if (ctx->pc == 0x24E620u) {
        ctx->pc = 0x24E624u;
        goto label_24e624;
    }
    ctx->pc = 0x24E61Cu;
    {
        const bool branch_taken_0x24e61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e61c) {
            ctx->pc = 0x24E644u;
            goto label_24e644;
        }
    }
    ctx->pc = 0x24E624u;
label_24e624:
    // 0x24e624: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24e624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24e628:
    // 0x24e628: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x24e628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_24e62c:
    // 0x24e62c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x24e62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_24e630:
    // 0x24e630: 0x27a500b4  addiu       $a1, $sp, 0xB4
    ctx->pc = 0x24e630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_24e634:
    // 0x24e634: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x24e634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_24e638:
    // 0x24e638: 0xc0938fc  jal         func_24E3F0
label_24e63c:
    if (ctx->pc == 0x24E63Cu) {
        ctx->pc = 0x24E640u;
        goto label_24e640;
    }
    ctx->pc = 0x24E638u;
    SET_GPR_U32(ctx, 31, 0x24E640u);
    ctx->pc = 0x24E3F0u;
    goto label_24e3f0;
    ctx->pc = 0x24E640u;
label_24e640:
    // 0x24e640: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x24e640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_24e644:
    // 0x24e644: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x24e644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_24e648:
    // 0x24e648: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24e648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24e64c:
    // 0x24e64c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x24e64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_24e650:
    // 0x24e650: 0xc09245c  jal         func_249170
label_24e654:
    if (ctx->pc == 0x24E654u) {
        ctx->pc = 0x24E658u;
        goto label_24e658;
    }
    ctx->pc = 0x24E650u;
    SET_GPR_U32(ctx, 31, 0x24E658u);
    ctx->pc = 0x249170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249170u, 0x24E650u, 0x24E658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E658u;
label_24e658:
    // 0x24e658: 0x1602fff2  bne         $s0, $v0, . + 4 + (-0xE << 2)
label_24e65c:
    if (ctx->pc == 0x24E65Cu) {
        ctx->pc = 0x24E660u;
        goto label_24e660;
    }
    ctx->pc = 0x24E658u;
    {
        const bool branch_taken_0x24e658 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x24e658) {
            ctx->pc = 0x24E624u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e624;
        }
    }
    ctx->pc = 0x24E660u;
label_24e660:
    // 0x24e660: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_24e664:
    if (ctx->pc == 0x24E664u) {
        ctx->pc = 0x24E668u;
        goto label_24e668;
    }
    ctx->pc = 0x24E660u;
    {
        const bool branch_taken_0x24e660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e660) {
            ctx->pc = 0x24E8FCu;
            goto label_24e8fc;
        }
    }
    ctx->pc = 0x24E668u;
label_24e668:
    // 0x24e668: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x24e668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_24e66c:
    // 0x24e66c: 0xc094fd4  jal         func_253F50
label_24e670:
    if (ctx->pc == 0x24E670u) {
        ctx->pc = 0x24E674u;
        goto label_24e674;
    }
    ctx->pc = 0x24E66Cu;
    SET_GPR_U32(ctx, 31, 0x24E674u);
    ctx->pc = 0x253F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F50u, 0x24E66Cu, 0x24E674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E674u;
label_24e674:
    // 0x24e674: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x24e674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_24e678:
    // 0x24e678: 0xc0422b8  jal         func_108AE0
label_24e67c:
    if (ctx->pc == 0x24E67Cu) {
        ctx->pc = 0x24E680u;
        goto label_24e680;
    }
    ctx->pc = 0x24E678u;
    SET_GPR_U32(ctx, 31, 0x24E680u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x24E678u, 0x24E680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E680u;
label_24e680:
    // 0x24e680: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24e680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e684:
    // 0x24e684: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x24e684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_24e688:
    // 0x24e688: 0xc0422a8  jal         func_108AA0
label_24e68c:
    if (ctx->pc == 0x24E68Cu) {
        ctx->pc = 0x24E690u;
        goto label_24e690;
    }
    ctx->pc = 0x24E688u;
    SET_GPR_U32(ctx, 31, 0x24E690u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x24E688u, 0x24E690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E690u;
label_24e690:
    // 0x24e690: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x24e690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_24e694:
    // 0x24e694: 0xc0422b8  jal         func_108AE0
label_24e698:
    if (ctx->pc == 0x24E698u) {
        ctx->pc = 0x24E69Cu;
        goto label_24e69c;
    }
    ctx->pc = 0x24E694u;
    SET_GPR_U32(ctx, 31, 0x24E69Cu);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x24E694u, 0x24E69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E69Cu;
label_24e69c:
    // 0x24e69c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24e69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e6a0:
    // 0x24e6a0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x24e6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_24e6a4:
    // 0x24e6a4: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x24e6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_24e6a8:
    // 0x24e6a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24e6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24e6ac:
    // 0x24e6ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24e6acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24e6b0:
    // 0x24e6b0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x24e6b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_24e6b4:
    // 0x24e6b4: 0x320f809  jalr        $t9
label_24e6b8:
    if (ctx->pc == 0x24E6B8u) {
        ctx->pc = 0x24E6BCu;
        goto label_24e6bc;
    }
    ctx->pc = 0x24E6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24E6BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E6B4u, 0x24E6BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24E6BCu;
label_24e6bc:
    // 0x24e6bc: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x24e6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_24e6c0:
    // 0x24e6c0: 0xc0422b8  jal         func_108AE0
label_24e6c4:
    if (ctx->pc == 0x24E6C4u) {
        ctx->pc = 0x24E6C8u;
        goto label_24e6c8;
    }
    ctx->pc = 0x24E6C0u;
    SET_GPR_U32(ctx, 31, 0x24E6C8u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x24E6C0u, 0x24E6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E6C8u;
label_24e6c8:
    // 0x24e6c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24e6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e6cc:
    // 0x24e6cc: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x24e6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_24e6d0:
    // 0x24e6d0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x24e6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_24e6d4:
    // 0x24e6d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24e6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24e6d8:
    // 0x24e6d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24e6d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24e6dc:
    // 0x24e6dc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x24e6dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_24e6e0:
    // 0x24e6e0: 0x320f809  jalr        $t9
label_24e6e4:
    if (ctx->pc == 0x24E6E4u) {
        ctx->pc = 0x24E6E8u;
        goto label_24e6e8;
    }
    ctx->pc = 0x24E6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24E6E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E6E0u, 0x24E6E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24E6E8u;
label_24e6e8:
    // 0x24e6e8: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x24e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_24e6ec:
    // 0x24e6ec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24e6ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_24e6f0:
    // 0x24e6f0: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_24e6f4:
    if (ctx->pc == 0x24E6F4u) {
        ctx->pc = 0x24E6F8u;
        goto label_24e6f8;
    }
    ctx->pc = 0x24E6F0u;
    {
        const bool branch_taken_0x24e6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e6f0) {
            ctx->pc = 0x24E778u;
            goto label_24e778;
        }
    }
    ctx->pc = 0x24E6F8u;
label_24e6f8:
    // 0x24e6f8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x24e6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_24e6fc:
    // 0x24e6fc: 0xc0422b8  jal         func_108AE0
label_24e700:
    if (ctx->pc == 0x24E700u) {
        ctx->pc = 0x24E704u;
        goto label_24e704;
    }
    ctx->pc = 0x24E6FCu;
    SET_GPR_U32(ctx, 31, 0x24E704u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x24E6FCu, 0x24E704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E704u;
label_24e704:
    // 0x24e704: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24e704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e708:
    // 0x24e708: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x24e708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_24e70c:
    // 0x24e70c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x24e70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_24e710:
    // 0x24e710: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24e710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24e714:
    // 0x24e714: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24e714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24e718:
    // 0x24e718: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x24e718u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_24e71c:
    // 0x24e71c: 0x320f809  jalr        $t9
label_24e720:
    if (ctx->pc == 0x24E720u) {
        ctx->pc = 0x24E724u;
        goto label_24e724;
    }
    ctx->pc = 0x24E71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24E724u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E71Cu, 0x24E724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24E724u;
label_24e724:
    // 0x24e724: 0x8f84bc24  lw          $a0, -0x43DC($gp)
    ctx->pc = 0x24e724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949924)));
label_24e728:
    // 0x24e728: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x24e728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_24e72c:
    // 0x24e72c: 0xc0a69c4  jal         func_29A710
label_24e730:
    if (ctx->pc == 0x24E730u) {
        ctx->pc = 0x24E734u;
        goto label_24e734;
    }
    ctx->pc = 0x24E72Cu;
    SET_GPR_U32(ctx, 31, 0x24E734u);
    ctx->pc = 0x29A710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A710u, 0x24E72Cu, 0x24E734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E734u;
label_24e734:
    // 0x24e734: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x24e734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_24e738:
    // 0x24e738: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x24e738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_24e73c:
    // 0x24e73c: 0xc0422b8  jal         func_108AE0
label_24e740:
    if (ctx->pc == 0x24E740u) {
        ctx->pc = 0x24E744u;
        goto label_24e744;
    }
    ctx->pc = 0x24E73Cu;
    SET_GPR_U32(ctx, 31, 0x24E744u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x24E73Cu, 0x24E744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E744u;
label_24e744:
    // 0x24e744: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24e744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e748:
    // 0x24e748: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x24e748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_24e74c:
    // 0x24e74c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x24e74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_24e750:
    // 0x24e750: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24e750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24e754:
    // 0x24e754: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24e754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24e758:
    // 0x24e758: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x24e758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_24e75c:
    // 0x24e75c: 0x320f809  jalr        $t9
label_24e760:
    if (ctx->pc == 0x24E760u) {
        ctx->pc = 0x24E764u;
        goto label_24e764;
    }
    ctx->pc = 0x24E75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24E764u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E75Cu, 0x24E764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24E764u;
label_24e764:
    // 0x24e764: 0x8f84bc24  lw          $a0, -0x43DC($gp)
    ctx->pc = 0x24e764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949924)));
label_24e768:
    // 0x24e768: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x24e768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_24e76c:
    // 0x24e76c: 0xc0a69c4  jal         func_29A710
label_24e770:
    if (ctx->pc == 0x24E770u) {
        ctx->pc = 0x24E774u;
        goto label_24e774;
    }
    ctx->pc = 0x24E76Cu;
    SET_GPR_U32(ctx, 31, 0x24E774u);
    ctx->pc = 0x29A710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A710u, 0x24E76Cu, 0x24E774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E774u;
label_24e774:
    // 0x24e774: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x24e774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_24e778:
    // 0x24e778: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x24e778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_24e77c:
    // 0x24e77c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24e77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_24e780:
    // 0x24e780: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24e784:
    if (ctx->pc == 0x24E784u) {
        ctx->pc = 0x24E788u;
        goto label_24e788;
    }
    ctx->pc = 0x24E780u;
    {
        const bool branch_taken_0x24e780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e780) {
            ctx->pc = 0x24E798u;
            goto label_24e798;
        }
    }
    ctx->pc = 0x24E788u;
label_24e788:
    // 0x24e788: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x24e788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e78c:
    // 0x24e78c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x24e78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_24e790:
    // 0x24e790: 0x10000003  b           . + 4 + (0x3 << 2)
label_24e794:
    if (ctx->pc == 0x24E794u) {
        ctx->pc = 0x24E798u;
        goto label_24e798;
    }
    ctx->pc = 0x24E790u;
    {
        const bool branch_taken_0x24e790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e790) {
            ctx->pc = 0x24E7A0u;
            goto label_24e7a0;
        }
    }
    ctx->pc = 0x24E798u;
label_24e798:
    // 0x24e798: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x24e798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e79c:
    // 0x24e79c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x24e79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_24e7a0:
    // 0x24e7a0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x24e7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e7a4:
    // 0x24e7a4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x24e7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_24e7a8:
    // 0x24e7a8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x24e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_24e7ac:
    // 0x24e7ac: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x24e7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_24e7b0:
    // 0x24e7b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24e7b4:
    if (ctx->pc == 0x24E7B4u) {
        ctx->pc = 0x24E7B8u;
        goto label_24e7b8;
    }
    ctx->pc = 0x24E7B0u;
    {
        const bool branch_taken_0x24e7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e7b0) {
            ctx->pc = 0x24E7C8u;
            goto label_24e7c8;
        }
    }
    ctx->pc = 0x24E7B8u;
label_24e7b8:
    // 0x24e7b8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x24e7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e7bc:
    // 0x24e7bc: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x24e7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_24e7c0:
    // 0x24e7c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_24e7c4:
    if (ctx->pc == 0x24E7C4u) {
        ctx->pc = 0x24E7C8u;
        goto label_24e7c8;
    }
    ctx->pc = 0x24E7C0u;
    {
        const bool branch_taken_0x24e7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e7c0) {
            ctx->pc = 0x24E7D0u;
            goto label_24e7d0;
        }
    }
    ctx->pc = 0x24E7C8u;
label_24e7c8:
    // 0x24e7c8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x24e7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e7cc:
    // 0x24e7cc: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x24e7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_24e7d0:
    // 0x24e7d0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x24e7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e7d4:
    // 0x24e7d4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x24e7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_24e7d8:
    // 0x24e7d8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x24e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_24e7dc:
    // 0x24e7dc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24e7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_24e7e0:
    // 0x24e7e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24e7e4:
    if (ctx->pc == 0x24E7E4u) {
        ctx->pc = 0x24E7E8u;
        goto label_24e7e8;
    }
    ctx->pc = 0x24E7E0u;
    {
        const bool branch_taken_0x24e7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e7e0) {
            ctx->pc = 0x24E7F8u;
            goto label_24e7f8;
        }
    }
    ctx->pc = 0x24E7E8u;
label_24e7e8:
    // 0x24e7e8: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x24e7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e7ec:
    // 0x24e7ec: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x24e7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_24e7f0:
    // 0x24e7f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_24e7f4:
    if (ctx->pc == 0x24E7F4u) {
        ctx->pc = 0x24E7F8u;
        goto label_24e7f8;
    }
    ctx->pc = 0x24E7F0u;
    {
        const bool branch_taken_0x24e7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e7f0) {
            ctx->pc = 0x24E800u;
            goto label_24e800;
        }
    }
    ctx->pc = 0x24E7F8u;
label_24e7f8:
    // 0x24e7f8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x24e7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e7fc:
    // 0x24e7fc: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x24e7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_24e800:
    // 0x24e800: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x24e800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e804:
    // 0x24e804: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x24e804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_24e808:
    // 0x24e808: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x24e808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_24e80c:
    // 0x24e80c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x24e80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_24e810:
    // 0x24e810: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24e814:
    if (ctx->pc == 0x24E814u) {
        ctx->pc = 0x24E818u;
        goto label_24e818;
    }
    ctx->pc = 0x24E810u;
    {
        const bool branch_taken_0x24e810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e810) {
            ctx->pc = 0x24E828u;
            goto label_24e828;
        }
    }
    ctx->pc = 0x24E818u;
label_24e818:
    // 0x24e818: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x24e818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e81c:
    // 0x24e81c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x24e81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_24e820:
    // 0x24e820: 0x10000003  b           . + 4 + (0x3 << 2)
label_24e824:
    if (ctx->pc == 0x24E824u) {
        ctx->pc = 0x24E828u;
        goto label_24e828;
    }
    ctx->pc = 0x24E820u;
    {
        const bool branch_taken_0x24e820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e820) {
            ctx->pc = 0x24E830u;
            goto label_24e830;
        }
    }
    ctx->pc = 0x24E828u;
label_24e828:
    // 0x24e828: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x24e828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e82c:
    // 0x24e82c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x24e82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_24e830:
    // 0x24e830: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x24e830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e834:
    // 0x24e834: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x24e834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_24e838:
    // 0x24e838: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x24e838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_24e83c:
    // 0x24e83c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x24e83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_24e840:
    // 0x24e840: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x24e840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_24e844:
    // 0x24e844: 0x27a70088  addiu       $a3, $sp, 0x88
    ctx->pc = 0x24e844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_24e848:
    // 0x24e848: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x24e848u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24e84c:
    // 0x24e84c: 0xc092d78  jal         func_24B5E0
label_24e850:
    if (ctx->pc == 0x24E850u) {
        ctx->pc = 0x24E854u;
        goto label_24e854;
    }
    ctx->pc = 0x24E84Cu;
    SET_GPR_U32(ctx, 31, 0x24E854u);
    ctx->pc = 0x24B5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5E0u, 0x24E84Cu, 0x24E854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E854u;
label_24e854:
    // 0x24e854: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x24e854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_24e858:
    // 0x24e858: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x24e858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_24e85c:
    // 0x24e85c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x24e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_24e860:
    // 0x24e860: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24e860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24e864:
    // 0x24e864: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x24e864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_24e868:
    // 0x24e868: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x24e868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_24e86c:
    // 0x24e86c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x24e86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_24e870:
    // 0x24e870: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x24e870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
label_24e874:
    // 0x24e874: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x24e874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_24e878:
    // 0x24e878: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24e878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24e87c:
    // 0x24e87c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x24e87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_24e880:
    // 0x24e880: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x24e880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_24e884:
    // 0x24e884: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x24e884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_24e888:
    // 0x24e888: 0xc0bb778  jal         func_2EDDE0
label_24e88c:
    if (ctx->pc == 0x24E88Cu) {
        ctx->pc = 0x24E890u;
        goto label_24e890;
    }
    ctx->pc = 0x24E888u;
    SET_GPR_U32(ctx, 31, 0x24E890u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x24E888u, 0x24E890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E890u;
label_24e890:
    // 0x24e890: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x24e890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_24e894:
    // 0x24e894: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24e894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24e898:
    // 0x24e898: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x24e898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_24e89c:
    // 0x24e89c: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x24e89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_24e8a0:
    // 0x24e8a0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x24e8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_24e8a4:
    // 0x24e8a4: 0xc0bb778  jal         func_2EDDE0
label_24e8a8:
    if (ctx->pc == 0x24E8A8u) {
        ctx->pc = 0x24E8ACu;
        goto label_24e8ac;
    }
    ctx->pc = 0x24E8A4u;
    SET_GPR_U32(ctx, 31, 0x24E8ACu);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x24E8A4u, 0x24E8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E8ACu;
label_24e8ac:
    // 0x24e8ac: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x24e8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_24e8b0:
    // 0x24e8b0: 0xc0422b8  jal         func_108AE0
label_24e8b4:
    if (ctx->pc == 0x24E8B4u) {
        ctx->pc = 0x24E8B8u;
        goto label_24e8b8;
    }
    ctx->pc = 0x24E8B0u;
    SET_GPR_U32(ctx, 31, 0x24E8B8u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x24E8B0u, 0x24E8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E8B8u;
label_24e8b8:
    // 0x24e8b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24e8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e8bc:
    // 0x24e8bc: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x24e8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_24e8c0:
    // 0x24e8c0: 0xc0422a8  jal         func_108AA0
label_24e8c4:
    if (ctx->pc == 0x24E8C4u) {
        ctx->pc = 0x24E8C8u;
        goto label_24e8c8;
    }
    ctx->pc = 0x24E8C0u;
    SET_GPR_U32(ctx, 31, 0x24E8C8u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x24E8C0u, 0x24E8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E8C8u;
label_24e8c8:
    // 0x24e8c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_24e8cc:
    if (ctx->pc == 0x24E8CCu) {
        ctx->pc = 0x24E8D0u;
        goto label_24e8d0;
    }
    ctx->pc = 0x24E8C8u;
    {
        const bool branch_taken_0x24e8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e8c8) {
            ctx->pc = 0x24E8E8u;
            goto label_24e8e8;
        }
    }
    ctx->pc = 0x24E8D0u;
label_24e8d0:
    // 0x24e8d0: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x24e8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
label_24e8d4:
    // 0x24e8d4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x24e8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_24e8d8:
    // 0x24e8d8: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x24e8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_24e8dc:
    // 0x24e8dc: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x24e8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_24e8e0:
    // 0x24e8e0: 0xc0938fc  jal         func_24E3F0
label_24e8e4:
    if (ctx->pc == 0x24E8E4u) {
        ctx->pc = 0x24E8E8u;
        goto label_24e8e8;
    }
    ctx->pc = 0x24E8E0u;
    SET_GPR_U32(ctx, 31, 0x24E8E8u);
    ctx->pc = 0x24E3F0u;
    goto label_24e3f0;
    ctx->pc = 0x24E8E8u;
label_24e8e8:
    // 0x24e8e8: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x24e8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_24e8ec:
    // 0x24e8ec: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x24e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_24e8f0:
    // 0x24e8f0: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x24e8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_24e8f4:
    // 0x24e8f4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_24e8f8:
    if (ctx->pc == 0x24E8F8u) {
        ctx->pc = 0x24E8FCu;
        goto label_24e8fc;
    }
    ctx->pc = 0x24E8F4u;
    {
        const bool branch_taken_0x24e8f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e8f4) {
            ctx->pc = 0x24E8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e8d0;
        }
    }
    ctx->pc = 0x24E8FCu;
label_24e8fc:
    // 0x24e8fc: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x24e8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_24e900:
    // 0x24e900: 0xc0422b8  jal         func_108AE0
label_24e904:
    if (ctx->pc == 0x24E904u) {
        ctx->pc = 0x24E908u;
        goto label_24e908;
    }
    ctx->pc = 0x24E900u;
    SET_GPR_U32(ctx, 31, 0x24E908u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x24E900u, 0x24E908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E908u;
label_24e908:
    // 0x24e908: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24e908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e90c:
    // 0x24e90c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24e90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24e910:
    // 0x24e910: 0xc08ec98  jal         func_23B260
label_24e914:
    if (ctx->pc == 0x24E914u) {
        ctx->pc = 0x24E918u;
        goto label_24e918;
    }
    ctx->pc = 0x24E910u;
    SET_GPR_U32(ctx, 31, 0x24E918u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x24E910u, 0x24E918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E918u;
label_24e918:
    // 0x24e918: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24e918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24e91c:
    // 0x24e91c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24e91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24e920:
    // 0x24e920: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24e920u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24e924:
    // 0x24e924: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24e924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24e928:
    // 0x24e928: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24e928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24e92c:
    // 0x24e92c: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x24e92cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_24e930:
    // 0x24e930: 0x3e00008  jr          $ra
label_24e934:
    if (ctx->pc == 0x24E934u) {
        ctx->pc = 0x24E938u;
        goto label_24e938;
    }
    ctx->pc = 0x24E930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E938u;
label_24e938:
    // 0x24e938: 0x0  nop
    ctx->pc = 0x24e938u;
    // NOP
label_24e93c:
    // 0x24e93c: 0x0  nop
    ctx->pc = 0x24e93cu;
    // NOP
    ctx->pc = 0x24e940u;
}
