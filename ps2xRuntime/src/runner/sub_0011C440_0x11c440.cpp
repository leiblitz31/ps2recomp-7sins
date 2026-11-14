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

// Function: sub_0011C440
// Address: 0x11c440 - 0x11ca60
void sub_0011C440_0x11c440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C440_0x11c440");
#endif

    switch (ctx->pc) {
        case 0x11c440u: goto label_11c440;
        case 0x11c444u: goto label_11c444;
        case 0x11c448u: goto label_11c448;
        case 0x11c44cu: goto label_11c44c;
        case 0x11c450u: goto label_11c450;
        case 0x11c454u: goto label_11c454;
        case 0x11c458u: goto label_11c458;
        case 0x11c45cu: goto label_11c45c;
        case 0x11c460u: goto label_11c460;
        case 0x11c464u: goto label_11c464;
        case 0x11c468u: goto label_11c468;
        case 0x11c46cu: goto label_11c46c;
        case 0x11c470u: goto label_11c470;
        case 0x11c474u: goto label_11c474;
        case 0x11c478u: goto label_11c478;
        case 0x11c47cu: goto label_11c47c;
        case 0x11c480u: goto label_11c480;
        case 0x11c484u: goto label_11c484;
        case 0x11c488u: goto label_11c488;
        case 0x11c48cu: goto label_11c48c;
        case 0x11c490u: goto label_11c490;
        case 0x11c494u: goto label_11c494;
        case 0x11c498u: goto label_11c498;
        case 0x11c49cu: goto label_11c49c;
        case 0x11c4a0u: goto label_11c4a0;
        case 0x11c4a4u: goto label_11c4a4;
        case 0x11c4a8u: goto label_11c4a8;
        case 0x11c4acu: goto label_11c4ac;
        case 0x11c4b0u: goto label_11c4b0;
        case 0x11c4b4u: goto label_11c4b4;
        case 0x11c4b8u: goto label_11c4b8;
        case 0x11c4bcu: goto label_11c4bc;
        case 0x11c4c0u: goto label_11c4c0;
        case 0x11c4c4u: goto label_11c4c4;
        case 0x11c4c8u: goto label_11c4c8;
        case 0x11c4ccu: goto label_11c4cc;
        case 0x11c4d0u: goto label_11c4d0;
        case 0x11c4d4u: goto label_11c4d4;
        case 0x11c4d8u: goto label_11c4d8;
        case 0x11c4dcu: goto label_11c4dc;
        case 0x11c4e0u: goto label_11c4e0;
        case 0x11c4e4u: goto label_11c4e4;
        case 0x11c4e8u: goto label_11c4e8;
        case 0x11c4ecu: goto label_11c4ec;
        case 0x11c4f0u: goto label_11c4f0;
        case 0x11c4f4u: goto label_11c4f4;
        case 0x11c4f8u: goto label_11c4f8;
        case 0x11c4fcu: goto label_11c4fc;
        case 0x11c500u: goto label_11c500;
        case 0x11c504u: goto label_11c504;
        case 0x11c508u: goto label_11c508;
        case 0x11c50cu: goto label_11c50c;
        case 0x11c510u: goto label_11c510;
        case 0x11c514u: goto label_11c514;
        case 0x11c518u: goto label_11c518;
        case 0x11c51cu: goto label_11c51c;
        case 0x11c520u: goto label_11c520;
        case 0x11c524u: goto label_11c524;
        case 0x11c528u: goto label_11c528;
        case 0x11c52cu: goto label_11c52c;
        case 0x11c530u: goto label_11c530;
        case 0x11c534u: goto label_11c534;
        case 0x11c538u: goto label_11c538;
        case 0x11c53cu: goto label_11c53c;
        case 0x11c540u: goto label_11c540;
        case 0x11c544u: goto label_11c544;
        case 0x11c548u: goto label_11c548;
        case 0x11c54cu: goto label_11c54c;
        case 0x11c550u: goto label_11c550;
        case 0x11c554u: goto label_11c554;
        case 0x11c558u: goto label_11c558;
        case 0x11c55cu: goto label_11c55c;
        case 0x11c560u: goto label_11c560;
        case 0x11c564u: goto label_11c564;
        case 0x11c568u: goto label_11c568;
        case 0x11c56cu: goto label_11c56c;
        case 0x11c570u: goto label_11c570;
        case 0x11c574u: goto label_11c574;
        case 0x11c578u: goto label_11c578;
        case 0x11c57cu: goto label_11c57c;
        case 0x11c580u: goto label_11c580;
        case 0x11c584u: goto label_11c584;
        case 0x11c588u: goto label_11c588;
        case 0x11c58cu: goto label_11c58c;
        case 0x11c590u: goto label_11c590;
        case 0x11c594u: goto label_11c594;
        case 0x11c598u: goto label_11c598;
        case 0x11c59cu: goto label_11c59c;
        case 0x11c5a0u: goto label_11c5a0;
        case 0x11c5a4u: goto label_11c5a4;
        case 0x11c5a8u: goto label_11c5a8;
        case 0x11c5acu: goto label_11c5ac;
        case 0x11c5b0u: goto label_11c5b0;
        case 0x11c5b4u: goto label_11c5b4;
        case 0x11c5b8u: goto label_11c5b8;
        case 0x11c5bcu: goto label_11c5bc;
        case 0x11c5c0u: goto label_11c5c0;
        case 0x11c5c4u: goto label_11c5c4;
        case 0x11c5c8u: goto label_11c5c8;
        case 0x11c5ccu: goto label_11c5cc;
        case 0x11c5d0u: goto label_11c5d0;
        case 0x11c5d4u: goto label_11c5d4;
        case 0x11c5d8u: goto label_11c5d8;
        case 0x11c5dcu: goto label_11c5dc;
        case 0x11c5e0u: goto label_11c5e0;
        case 0x11c5e4u: goto label_11c5e4;
        case 0x11c5e8u: goto label_11c5e8;
        case 0x11c5ecu: goto label_11c5ec;
        case 0x11c5f0u: goto label_11c5f0;
        case 0x11c5f4u: goto label_11c5f4;
        case 0x11c5f8u: goto label_11c5f8;
        case 0x11c5fcu: goto label_11c5fc;
        case 0x11c600u: goto label_11c600;
        case 0x11c604u: goto label_11c604;
        case 0x11c608u: goto label_11c608;
        case 0x11c60cu: goto label_11c60c;
        case 0x11c610u: goto label_11c610;
        case 0x11c614u: goto label_11c614;
        case 0x11c618u: goto label_11c618;
        case 0x11c61cu: goto label_11c61c;
        case 0x11c620u: goto label_11c620;
        case 0x11c624u: goto label_11c624;
        case 0x11c628u: goto label_11c628;
        case 0x11c62cu: goto label_11c62c;
        case 0x11c630u: goto label_11c630;
        case 0x11c634u: goto label_11c634;
        case 0x11c638u: goto label_11c638;
        case 0x11c63cu: goto label_11c63c;
        case 0x11c640u: goto label_11c640;
        case 0x11c644u: goto label_11c644;
        case 0x11c648u: goto label_11c648;
        case 0x11c64cu: goto label_11c64c;
        case 0x11c650u: goto label_11c650;
        case 0x11c654u: goto label_11c654;
        case 0x11c658u: goto label_11c658;
        case 0x11c65cu: goto label_11c65c;
        case 0x11c660u: goto label_11c660;
        case 0x11c664u: goto label_11c664;
        case 0x11c668u: goto label_11c668;
        case 0x11c66cu: goto label_11c66c;
        case 0x11c670u: goto label_11c670;
        case 0x11c674u: goto label_11c674;
        case 0x11c678u: goto label_11c678;
        case 0x11c67cu: goto label_11c67c;
        case 0x11c680u: goto label_11c680;
        case 0x11c684u: goto label_11c684;
        case 0x11c688u: goto label_11c688;
        case 0x11c68cu: goto label_11c68c;
        case 0x11c690u: goto label_11c690;
        case 0x11c694u: goto label_11c694;
        case 0x11c698u: goto label_11c698;
        case 0x11c69cu: goto label_11c69c;
        case 0x11c6a0u: goto label_11c6a0;
        case 0x11c6a4u: goto label_11c6a4;
        case 0x11c6a8u: goto label_11c6a8;
        case 0x11c6acu: goto label_11c6ac;
        case 0x11c6b0u: goto label_11c6b0;
        case 0x11c6b4u: goto label_11c6b4;
        case 0x11c6b8u: goto label_11c6b8;
        case 0x11c6bcu: goto label_11c6bc;
        case 0x11c6c0u: goto label_11c6c0;
        case 0x11c6c4u: goto label_11c6c4;
        case 0x11c6c8u: goto label_11c6c8;
        case 0x11c6ccu: goto label_11c6cc;
        case 0x11c6d0u: goto label_11c6d0;
        case 0x11c6d4u: goto label_11c6d4;
        case 0x11c6d8u: goto label_11c6d8;
        case 0x11c6dcu: goto label_11c6dc;
        case 0x11c6e0u: goto label_11c6e0;
        case 0x11c6e4u: goto label_11c6e4;
        case 0x11c6e8u: goto label_11c6e8;
        case 0x11c6ecu: goto label_11c6ec;
        case 0x11c6f0u: goto label_11c6f0;
        case 0x11c6f4u: goto label_11c6f4;
        case 0x11c6f8u: goto label_11c6f8;
        case 0x11c6fcu: goto label_11c6fc;
        case 0x11c700u: goto label_11c700;
        case 0x11c704u: goto label_11c704;
        case 0x11c708u: goto label_11c708;
        case 0x11c70cu: goto label_11c70c;
        case 0x11c710u: goto label_11c710;
        case 0x11c714u: goto label_11c714;
        case 0x11c718u: goto label_11c718;
        case 0x11c71cu: goto label_11c71c;
        case 0x11c720u: goto label_11c720;
        case 0x11c724u: goto label_11c724;
        case 0x11c728u: goto label_11c728;
        case 0x11c72cu: goto label_11c72c;
        case 0x11c730u: goto label_11c730;
        case 0x11c734u: goto label_11c734;
        case 0x11c738u: goto label_11c738;
        case 0x11c73cu: goto label_11c73c;
        case 0x11c740u: goto label_11c740;
        case 0x11c744u: goto label_11c744;
        case 0x11c748u: goto label_11c748;
        case 0x11c74cu: goto label_11c74c;
        case 0x11c750u: goto label_11c750;
        case 0x11c754u: goto label_11c754;
        case 0x11c758u: goto label_11c758;
        case 0x11c75cu: goto label_11c75c;
        case 0x11c760u: goto label_11c760;
        case 0x11c764u: goto label_11c764;
        case 0x11c768u: goto label_11c768;
        case 0x11c76cu: goto label_11c76c;
        case 0x11c770u: goto label_11c770;
        case 0x11c774u: goto label_11c774;
        case 0x11c778u: goto label_11c778;
        case 0x11c77cu: goto label_11c77c;
        case 0x11c780u: goto label_11c780;
        case 0x11c784u: goto label_11c784;
        case 0x11c788u: goto label_11c788;
        case 0x11c78cu: goto label_11c78c;
        case 0x11c790u: goto label_11c790;
        case 0x11c794u: goto label_11c794;
        case 0x11c798u: goto label_11c798;
        case 0x11c79cu: goto label_11c79c;
        case 0x11c7a0u: goto label_11c7a0;
        case 0x11c7a4u: goto label_11c7a4;
        case 0x11c7a8u: goto label_11c7a8;
        case 0x11c7acu: goto label_11c7ac;
        case 0x11c7b0u: goto label_11c7b0;
        case 0x11c7b4u: goto label_11c7b4;
        case 0x11c7b8u: goto label_11c7b8;
        case 0x11c7bcu: goto label_11c7bc;
        case 0x11c7c0u: goto label_11c7c0;
        case 0x11c7c4u: goto label_11c7c4;
        case 0x11c7c8u: goto label_11c7c8;
        case 0x11c7ccu: goto label_11c7cc;
        case 0x11c7d0u: goto label_11c7d0;
        case 0x11c7d4u: goto label_11c7d4;
        case 0x11c7d8u: goto label_11c7d8;
        case 0x11c7dcu: goto label_11c7dc;
        case 0x11c7e0u: goto label_11c7e0;
        case 0x11c7e4u: goto label_11c7e4;
        case 0x11c7e8u: goto label_11c7e8;
        case 0x11c7ecu: goto label_11c7ec;
        case 0x11c7f0u: goto label_11c7f0;
        case 0x11c7f4u: goto label_11c7f4;
        case 0x11c7f8u: goto label_11c7f8;
        case 0x11c7fcu: goto label_11c7fc;
        case 0x11c800u: goto label_11c800;
        case 0x11c804u: goto label_11c804;
        case 0x11c808u: goto label_11c808;
        case 0x11c80cu: goto label_11c80c;
        case 0x11c810u: goto label_11c810;
        case 0x11c814u: goto label_11c814;
        case 0x11c818u: goto label_11c818;
        case 0x11c81cu: goto label_11c81c;
        case 0x11c820u: goto label_11c820;
        case 0x11c824u: goto label_11c824;
        case 0x11c828u: goto label_11c828;
        case 0x11c82cu: goto label_11c82c;
        case 0x11c830u: goto label_11c830;
        case 0x11c834u: goto label_11c834;
        case 0x11c838u: goto label_11c838;
        case 0x11c83cu: goto label_11c83c;
        case 0x11c840u: goto label_11c840;
        case 0x11c844u: goto label_11c844;
        case 0x11c848u: goto label_11c848;
        case 0x11c84cu: goto label_11c84c;
        case 0x11c850u: goto label_11c850;
        case 0x11c854u: goto label_11c854;
        case 0x11c858u: goto label_11c858;
        case 0x11c85cu: goto label_11c85c;
        case 0x11c860u: goto label_11c860;
        case 0x11c864u: goto label_11c864;
        case 0x11c868u: goto label_11c868;
        case 0x11c86cu: goto label_11c86c;
        case 0x11c870u: goto label_11c870;
        case 0x11c874u: goto label_11c874;
        case 0x11c878u: goto label_11c878;
        case 0x11c87cu: goto label_11c87c;
        case 0x11c880u: goto label_11c880;
        case 0x11c884u: goto label_11c884;
        case 0x11c888u: goto label_11c888;
        case 0x11c88cu: goto label_11c88c;
        case 0x11c890u: goto label_11c890;
        case 0x11c894u: goto label_11c894;
        case 0x11c898u: goto label_11c898;
        case 0x11c89cu: goto label_11c89c;
        case 0x11c8a0u: goto label_11c8a0;
        case 0x11c8a4u: goto label_11c8a4;
        case 0x11c8a8u: goto label_11c8a8;
        case 0x11c8acu: goto label_11c8ac;
        case 0x11c8b0u: goto label_11c8b0;
        case 0x11c8b4u: goto label_11c8b4;
        case 0x11c8b8u: goto label_11c8b8;
        case 0x11c8bcu: goto label_11c8bc;
        case 0x11c8c0u: goto label_11c8c0;
        case 0x11c8c4u: goto label_11c8c4;
        case 0x11c8c8u: goto label_11c8c8;
        case 0x11c8ccu: goto label_11c8cc;
        case 0x11c8d0u: goto label_11c8d0;
        case 0x11c8d4u: goto label_11c8d4;
        case 0x11c8d8u: goto label_11c8d8;
        case 0x11c8dcu: goto label_11c8dc;
        case 0x11c8e0u: goto label_11c8e0;
        case 0x11c8e4u: goto label_11c8e4;
        case 0x11c8e8u: goto label_11c8e8;
        case 0x11c8ecu: goto label_11c8ec;
        case 0x11c8f0u: goto label_11c8f0;
        case 0x11c8f4u: goto label_11c8f4;
        case 0x11c8f8u: goto label_11c8f8;
        case 0x11c8fcu: goto label_11c8fc;
        case 0x11c900u: goto label_11c900;
        case 0x11c904u: goto label_11c904;
        case 0x11c908u: goto label_11c908;
        case 0x11c90cu: goto label_11c90c;
        case 0x11c910u: goto label_11c910;
        case 0x11c914u: goto label_11c914;
        case 0x11c918u: goto label_11c918;
        case 0x11c91cu: goto label_11c91c;
        case 0x11c920u: goto label_11c920;
        case 0x11c924u: goto label_11c924;
        case 0x11c928u: goto label_11c928;
        case 0x11c92cu: goto label_11c92c;
        case 0x11c930u: goto label_11c930;
        case 0x11c934u: goto label_11c934;
        case 0x11c938u: goto label_11c938;
        case 0x11c93cu: goto label_11c93c;
        case 0x11c940u: goto label_11c940;
        case 0x11c944u: goto label_11c944;
        case 0x11c948u: goto label_11c948;
        case 0x11c94cu: goto label_11c94c;
        case 0x11c950u: goto label_11c950;
        case 0x11c954u: goto label_11c954;
        case 0x11c958u: goto label_11c958;
        case 0x11c95cu: goto label_11c95c;
        case 0x11c960u: goto label_11c960;
        case 0x11c964u: goto label_11c964;
        case 0x11c968u: goto label_11c968;
        case 0x11c96cu: goto label_11c96c;
        case 0x11c970u: goto label_11c970;
        case 0x11c974u: goto label_11c974;
        case 0x11c978u: goto label_11c978;
        case 0x11c97cu: goto label_11c97c;
        case 0x11c980u: goto label_11c980;
        case 0x11c984u: goto label_11c984;
        case 0x11c988u: goto label_11c988;
        case 0x11c98cu: goto label_11c98c;
        case 0x11c990u: goto label_11c990;
        case 0x11c994u: goto label_11c994;
        case 0x11c998u: goto label_11c998;
        case 0x11c99cu: goto label_11c99c;
        case 0x11c9a0u: goto label_11c9a0;
        case 0x11c9a4u: goto label_11c9a4;
        case 0x11c9a8u: goto label_11c9a8;
        case 0x11c9acu: goto label_11c9ac;
        case 0x11c9b0u: goto label_11c9b0;
        case 0x11c9b4u: goto label_11c9b4;
        case 0x11c9b8u: goto label_11c9b8;
        case 0x11c9bcu: goto label_11c9bc;
        case 0x11c9c0u: goto label_11c9c0;
        case 0x11c9c4u: goto label_11c9c4;
        case 0x11c9c8u: goto label_11c9c8;
        case 0x11c9ccu: goto label_11c9cc;
        case 0x11c9d0u: goto label_11c9d0;
        case 0x11c9d4u: goto label_11c9d4;
        case 0x11c9d8u: goto label_11c9d8;
        case 0x11c9dcu: goto label_11c9dc;
        case 0x11c9e0u: goto label_11c9e0;
        case 0x11c9e4u: goto label_11c9e4;
        case 0x11c9e8u: goto label_11c9e8;
        case 0x11c9ecu: goto label_11c9ec;
        case 0x11c9f0u: goto label_11c9f0;
        case 0x11c9f4u: goto label_11c9f4;
        case 0x11c9f8u: goto label_11c9f8;
        case 0x11c9fcu: goto label_11c9fc;
        case 0x11ca00u: goto label_11ca00;
        case 0x11ca04u: goto label_11ca04;
        case 0x11ca08u: goto label_11ca08;
        case 0x11ca0cu: goto label_11ca0c;
        case 0x11ca10u: goto label_11ca10;
        case 0x11ca14u: goto label_11ca14;
        case 0x11ca18u: goto label_11ca18;
        case 0x11ca1cu: goto label_11ca1c;
        case 0x11ca20u: goto label_11ca20;
        case 0x11ca24u: goto label_11ca24;
        case 0x11ca28u: goto label_11ca28;
        case 0x11ca2cu: goto label_11ca2c;
        case 0x11ca30u: goto label_11ca30;
        case 0x11ca34u: goto label_11ca34;
        case 0x11ca38u: goto label_11ca38;
        case 0x11ca3cu: goto label_11ca3c;
        case 0x11ca40u: goto label_11ca40;
        case 0x11ca44u: goto label_11ca44;
        case 0x11ca48u: goto label_11ca48;
        case 0x11ca4cu: goto label_11ca4c;
        case 0x11ca50u: goto label_11ca50;
        case 0x11ca54u: goto label_11ca54;
        case 0x11ca58u: goto label_11ca58;
        case 0x11ca5cu: goto label_11ca5c;
        default: break;
    }

    ctx->pc = 0x11c440u;

label_11c440:
    // 0x11c440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11c440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11c444:
    // 0x11c444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11c448:
    // 0x11c448: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11c448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_11c44c:
    // 0x11c44c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11c44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11c450:
    // 0x11c450: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11c450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11c454:
    // 0x11c454: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11c454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11c458:
    // 0x11c458: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x11c458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_11c45c:
    // 0x11c45c: 0x320f809  jalr        $t9
label_11c460:
    if (ctx->pc == 0x11C460u) {
        ctx->pc = 0x11C464u;
        goto label_11c464;
    }
    ctx->pc = 0x11C45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11C464u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C45Cu, 0x11C464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C464u;
label_11c464:
    // 0x11c464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11c468:
    // 0x11c468: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x11c468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_11c46c:
    // 0x11c46c: 0x3e00008  jr          $ra
label_11c470:
    if (ctx->pc == 0x11C470u) {
        ctx->pc = 0x11C474u;
        goto label_11c474;
    }
    ctx->pc = 0x11C46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C474u;
label_11c474:
    // 0x11c474: 0x0  nop
    ctx->pc = 0x11c474u;
    // NOP
label_11c478:
    // 0x11c478: 0x0  nop
    ctx->pc = 0x11c478u;
    // NOP
label_11c47c:
    // 0x11c47c: 0x0  nop
    ctx->pc = 0x11c47cu;
    // NOP
label_11c480:
    // 0x11c480: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x11c480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_11c484:
    // 0x11c484: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11c484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_11c488:
    // 0x11c488: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x11c488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_11c48c:
    // 0x11c48c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x11c48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_11c490:
    // 0x11c490: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x11c490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_11c494:
    // 0x11c494: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x11c494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_11c498:
    // 0x11c498: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11c498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_11c49c:
    // 0x11c49c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11c49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_11c4a0:
    // 0x11c4a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11c4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_11c4a4:
    // 0x11c4a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11c4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_11c4a8:
    // 0x11c4a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11c4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_11c4ac:
    // 0x11c4ac: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x11c4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
label_11c4b0:
    // 0x11c4b0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x11c4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_11c4b4:
    // 0x11c4b4: 0xc08eed4  jal         func_23BB50
label_11c4b8:
    if (ctx->pc == 0x11C4B8u) {
        ctx->pc = 0x11C4BCu;
        goto label_11c4bc;
    }
    ctx->pc = 0x11C4B4u;
    SET_GPR_U32(ctx, 31, 0x11C4BCu);
    ctx->pc = 0x23BB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BB50u, 0x11C4B4u, 0x11C4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C4BCu;
label_11c4bc:
    // 0x11c4bc: 0xa3a200cf  sb          $v0, 0xCF($sp)
    ctx->pc = 0x11c4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 207), (uint8_t)GPR_U32(ctx, 2));
label_11c4c0:
    // 0x11c4c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11c4c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11c4c4:
    // 0x11c4c4: 0x1000013c  b           . + 4 + (0x13C << 2)
label_11c4c8:
    if (ctx->pc == 0x11C4C8u) {
        ctx->pc = 0x11C4CCu;
        goto label_11c4cc;
    }
    ctx->pc = 0x11C4C4u;
    {
        const bool branch_taken_0x11c4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c4c4) {
            ctx->pc = 0x11C9B8u;
            goto label_11c9b8;
        }
    }
    ctx->pc = 0x11C4CCu;
label_11c4cc:
    // 0x11c4cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11c4ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11c4d0:
    // 0x11c4d0: 0x2e210016  sltiu       $at, $s1, 0x16
    ctx->pc = 0x11c4d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_11c4d4:
    // 0x11c4d4: 0x10200114  beqz        $at, . + 4 + (0x114 << 2)
label_11c4d8:
    if (ctx->pc == 0x11C4D8u) {
        ctx->pc = 0x11C4DCu;
        goto label_11c4dc;
    }
    ctx->pc = 0x11C4D4u;
    {
        const bool branch_taken_0x11c4d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c4d4) {
            ctx->pc = 0x11C928u;
            goto label_11c928;
        }
    }
    ctx->pc = 0x11C4DCu;
label_11c4dc:
    // 0x11c4dc: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x11c4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_11c4e0:
    // 0x11c4e0: 0x24637e70  addiu       $v1, $v1, 0x7E70
    ctx->pc = 0x11c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32368));
label_11c4e4:
    // 0x11c4e4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x11c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_11c4e8:
    // 0x11c4e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_11c4ec:
    // 0x11c4ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11c4f0:
    // 0x11c4f0: 0x400008  jr          $v0
label_11c4f4:
    if (ctx->pc == 0x11C4F4u) {
        ctx->pc = 0x11C4F8u;
        goto label_11c4f8;
    }
    ctx->pc = 0x11C4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C4F8u: goto label_11c4f8;
            case 0x11C540u: goto label_11c540;
            case 0x11C58Cu: goto label_11c58c;
            case 0x11C5D4u: goto label_11c5d4;
            case 0x11C61Cu: goto label_11c61c;
            case 0x11C628u: goto label_11c628;
            case 0x11C670u: goto label_11c670;
            case 0x11C6B8u: goto label_11c6b8;
            case 0x11C700u: goto label_11c700;
            case 0x11C748u: goto label_11c748;
            case 0x11C790u: goto label_11c790;
            case 0x11C7D4u: goto label_11c7d4;
            case 0x11C818u: goto label_11c818;
            case 0x11C85Cu: goto label_11c85c;
            case 0x11C8A0u: goto label_11c8a0;
            case 0x11C8E4u: goto label_11c8e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C4F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11C4F8u;
label_11c4f8:
    // 0x11c4f8: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x11c4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_11c4fc:
    // 0x11c4fc: 0xc119b68  jal         func_466DA0
label_11c500:
    if (ctx->pc == 0x11C500u) {
        ctx->pc = 0x11C504u;
        goto label_11c504;
    }
    ctx->pc = 0x11C4FCu;
    SET_GPR_U32(ctx, 31, 0x11C504u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x11C4FCu, 0x11C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C504u;
label_11c504:
    // 0x11c504: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x11c504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_11c508:
    // 0x11c508: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c50c:
    // 0x11c50c: 0xc0400e0  jal         func_100380
label_11c510:
    if (ctx->pc == 0x11C510u) {
        ctx->pc = 0x11C514u;
        goto label_11c514;
    }
    ctx->pc = 0x11C50Cu;
    SET_GPR_U32(ctx, 31, 0x11C514u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x11C50Cu, 0x11C514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C514u;
label_11c514:
    // 0x11c514: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x11c514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_11c518:
    // 0x11c518: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x11c518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_11c51c:
    // 0x11c51c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_11c520:
    if (ctx->pc == 0x11C520u) {
        ctx->pc = 0x11C524u;
        goto label_11c524;
    }
    ctx->pc = 0x11C51Cu;
    {
        const bool branch_taken_0x11c51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c51c) {
            ctx->pc = 0x11C534u;
            goto label_11c534;
        }
    }
    ctx->pc = 0x11C524u;
label_11c524:
    // 0x11c524: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x11c524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_11c528:
    // 0x11c528: 0xc0486d4  jal         func_121B50
label_11c52c:
    if (ctx->pc == 0x11C52Cu) {
        ctx->pc = 0x11C530u;
        goto label_11c530;
    }
    ctx->pc = 0x11C528u;
    SET_GPR_U32(ctx, 31, 0x11C530u);
    ctx->pc = 0x121B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121B50u, 0x11C528u, 0x11C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C530u;
label_11c530:
    // 0x11c530: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x11c530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_11c534:
    // 0x11c534: 0x8fb000c8  lw          $s0, 0xC8($sp)
    ctx->pc = 0x11c534u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_11c538:
    // 0x11c538: 0x1000010b  b           . + 4 + (0x10B << 2)
label_11c53c:
    if (ctx->pc == 0x11C53Cu) {
        ctx->pc = 0x11C540u;
        goto label_11c540;
    }
    ctx->pc = 0x11C538u;
    {
        const bool branch_taken_0x11c538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c538) {
            ctx->pc = 0x11C968u;
            goto label_11c968;
        }
    }
    ctx->pc = 0x11C540u;
label_11c540:
    // 0x11c540: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x11c540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_11c544:
    // 0x11c544: 0xc119b68  jal         func_466DA0
label_11c548:
    if (ctx->pc == 0x11C548u) {
        ctx->pc = 0x11C54Cu;
        goto label_11c54c;
    }
    ctx->pc = 0x11C544u;
    SET_GPR_U32(ctx, 31, 0x11C54Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x11C544u, 0x11C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C54Cu;
label_11c54c:
    // 0x11c54c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x11c54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_11c550:
    // 0x11c550: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c554:
    // 0x11c554: 0xc0400e0  jal         func_100380
label_11c558:
    if (ctx->pc == 0x11C558u) {
        ctx->pc = 0x11C55Cu;
        goto label_11c55c;
    }
    ctx->pc = 0x11C554u;
    SET_GPR_U32(ctx, 31, 0x11C55Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x11C554u, 0x11C55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C55Cu;
label_11c55c:
    // 0x11c55c: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x11c55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_11c560:
    // 0x11c560: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x11c560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_11c564:
    // 0x11c564: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_11c568:
    if (ctx->pc == 0x11C568u) {
        ctx->pc = 0x11C56Cu;
        goto label_11c56c;
    }
    ctx->pc = 0x11C564u;
    {
        const bool branch_taken_0x11c564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c564) {
            ctx->pc = 0x11C580u;
            goto label_11c580;
        }
    }
    ctx->pc = 0x11C56Cu;
label_11c56c:
    // 0x11c56c: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x11c56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_11c570:
    // 0x11c570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11c574:
    // 0x11c574: 0xc047ae8  jal         func_11EBA0
label_11c578:
    if (ctx->pc == 0x11C578u) {
        ctx->pc = 0x11C57Cu;
        goto label_11c57c;
    }
    ctx->pc = 0x11C574u;
    SET_GPR_U32(ctx, 31, 0x11C57Cu);
    ctx->pc = 0x11EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBA0u, 0x11C574u, 0x11C57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C57Cu;
label_11c57c:
    // 0x11c57c: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x11c57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_11c580:
    // 0x11c580: 0x8fb000c4  lw          $s0, 0xC4($sp)
    ctx->pc = 0x11c580u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_11c584:
    // 0x11c584: 0x100000f8  b           . + 4 + (0xF8 << 2)
label_11c588:
    if (ctx->pc == 0x11C588u) {
        ctx->pc = 0x11C58Cu;
        goto label_11c58c;
    }
    ctx->pc = 0x11C584u;
    {
        const bool branch_taken_0x11c584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c584) {
            ctx->pc = 0x11C968u;
            goto label_11c968;
        }
    }
    ctx->pc = 0x11C58Cu;
label_11c58c:
    // 0x11c58c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11c58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_11c590:
    // 0x11c590: 0xc119b68  jal         func_466DA0
label_11c594:
    if (ctx->pc == 0x11C594u) {
        ctx->pc = 0x11C598u;
        goto label_11c598;
    }
    ctx->pc = 0x11C590u;
    SET_GPR_U32(ctx, 31, 0x11C598u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x11C590u, 0x11C598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C598u;
label_11c598:
    // 0x11c598: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11c598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_11c59c:
    // 0x11c59c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c5a0:
    // 0x11c5a0: 0xc0400e0  jal         func_100380
label_11c5a4:
    if (ctx->pc == 0x11C5A4u) {
        ctx->pc = 0x11C5A8u;
        goto label_11c5a8;
    }
    ctx->pc = 0x11C5A0u;
    SET_GPR_U32(ctx, 31, 0x11C5A8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x11C5A0u, 0x11C5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C5A8u;
label_11c5a8:
    // 0x11c5a8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x11c5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_11c5ac:
    // 0x11c5ac: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x11c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_11c5b0:
    // 0x11c5b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_11c5b4:
    if (ctx->pc == 0x11C5B4u) {
        ctx->pc = 0x11C5B8u;
        goto label_11c5b8;
    }
    ctx->pc = 0x11C5B0u;
    {
        const bool branch_taken_0x11c5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c5b0) {
            ctx->pc = 0x11C5C8u;
            goto label_11c5c8;
        }
    }
    ctx->pc = 0x11C5B8u;
label_11c5b8:
    // 0x11c5b8: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x11c5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_11c5bc:
    // 0x11c5bc: 0xc0481ac  jal         func_1206B0
label_11c5c0:
    if (ctx->pc == 0x11C5C0u) {
        ctx->pc = 0x11C5C4u;
        goto label_11c5c4;
    }
    ctx->pc = 0x11C5BCu;
    SET_GPR_U32(ctx, 31, 0x11C5C4u);
    ctx->pc = 0x1206B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1206B0u, 0x11C5BCu, 0x11C5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C5C4u;
label_11c5c4:
    // 0x11c5c4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x11c5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_11c5c8:
    // 0x11c5c8: 0x8fb000c0  lw          $s0, 0xC0($sp)
    ctx->pc = 0x11c5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_11c5cc:
    // 0x11c5cc: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_11c5d0:
    if (ctx->pc == 0x11C5D0u) {
        ctx->pc = 0x11C5D4u;
        goto label_11c5d4;
    }
    ctx->pc = 0x11C5CCu;
    {
        const bool branch_taken_0x11c5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c5cc) {
            ctx->pc = 0x11C968u;
            goto label_11c968;
        }
    }
    ctx->pc = 0x11C5D4u;
label_11c5d4:
    // 0x11c5d4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x11c5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_11c5d8:
    // 0x11c5d8: 0xc119b68  jal         func_466DA0
label_11c5dc:
    if (ctx->pc == 0x11C5DCu) {
        ctx->pc = 0x11C5E0u;
        goto label_11c5e0;
    }
    ctx->pc = 0x11C5D8u;
    SET_GPR_U32(ctx, 31, 0x11C5E0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x11C5D8u, 0x11C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C5E0u;
label_11c5e0:
    // 0x11c5e0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x11c5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_11c5e4:
    // 0x11c5e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c5e8:
    // 0x11c5e8: 0xc0400e0  jal         func_100380
label_11c5ec:
    if (ctx->pc == 0x11C5ECu) {
        ctx->pc = 0x11C5F0u;
        goto label_11c5f0;
    }
    ctx->pc = 0x11C5E8u;
    SET_GPR_U32(ctx, 31, 0x11C5F0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x11C5E8u, 0x11C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C5F0u;
label_11c5f0:
    // 0x11c5f0: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x11c5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_11c5f4:
    // 0x11c5f4: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x11c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_11c5f8:
    // 0x11c5f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_11c5fc:
    if (ctx->pc == 0x11C5FCu) {
        ctx->pc = 0x11C600u;
        goto label_11c600;
    }
    ctx->pc = 0x11C5F8u;
    {
        const bool branch_taken_0x11c5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c5f8) {
            ctx->pc = 0x11C610u;
            goto label_11c610;
        }
    }
    ctx->pc = 0x11C600u;
label_11c600:
    // 0x11c600: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x11c600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_11c604:
    // 0x11c604: 0xc048620  jal         func_121880
label_11c608:
    if (ctx->pc == 0x11C608u) {
        ctx->pc = 0x11C60Cu;
        goto label_11c60c;
    }
    ctx->pc = 0x11C604u;
    SET_GPR_U32(ctx, 31, 0x11C60Cu);
    ctx->pc = 0x121880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121880u, 0x11C604u, 0x11C60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C60Cu;
label_11c60c:
    // 0x11c60c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x11c60cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_11c610:
    // 0x11c610: 0x8fb000bc  lw          $s0, 0xBC($sp)
    ctx->pc = 0x11c610u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_11c614:
    // 0x11c614: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_11c618:
    if (ctx->pc == 0x11C618u) {
        ctx->pc = 0x11C61Cu;
        goto label_11c61c;
    }
    ctx->pc = 0x11C614u;
    {
        const bool branch_taken_0x11c614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c614) {
            ctx->pc = 0x11C968u;
            goto label_11c968;
        }
    }
    ctx->pc = 0x11C61Cu;
label_11c61c:
    // 0x11c61c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11c61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11c620:
    // 0x11c620: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_11c624:
    if (ctx->pc == 0x11C624u) {
        ctx->pc = 0x11C628u;
        goto label_11c628;
    }
    ctx->pc = 0x11C620u;
    {
        const bool branch_taken_0x11c620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c620) {
            ctx->pc = 0x11C968u;
            goto label_11c968;
        }
    }
    ctx->pc = 0x11C628u;
label_11c628:
    // 0x11c628: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11c628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_11c62c:
    // 0x11c62c: 0xc119b68  jal         func_466DA0
label_11c630:
    if (ctx->pc == 0x11C630u) {
        ctx->pc = 0x11C634u;
        goto label_11c634;
    }
    ctx->pc = 0x11C62Cu;
    SET_GPR_U32(ctx, 31, 0x11C634u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x11C62Cu, 0x11C634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C634u;
label_11c634:
    // 0x11c634: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11c634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_11c638:
    // 0x11c638: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c63c:
    // 0x11c63c: 0xc0400e0  jal         func_100380
label_11c640:
    if (ctx->pc == 0x11C640u) {
        ctx->pc = 0x11C644u;
        goto label_11c644;
    }
    ctx->pc = 0x11C63Cu;
    SET_GPR_U32(ctx, 31, 0x11C644u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x11C63Cu, 0x11C644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C644u;
label_11c644:
    // 0x11c644: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x11c644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_11c648:
    // 0x11c648: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x11c648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_11c64c:
    // 0x11c64c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_11c650:
    if (ctx->pc == 0x11C650u) {
        ctx->pc = 0x11C654u;
        goto label_11c654;
    }
    ctx->pc = 0x11C64Cu;
    {
        const bool branch_taken_0x11c64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c64c) {
            ctx->pc = 0x11C664u;
            goto label_11c664;
        }
    }
    ctx->pc = 0x11C654u;
label_11c654:
    // 0x11c654: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x11c654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_11c658:
    // 0x11c658: 0xc0474dc  jal         func_11D370
label_11c65c:
    if (ctx->pc == 0x11C65Cu) {
        ctx->pc = 0x11C660u;
        goto label_11c660;
    }
    ctx->pc = 0x11C658u;
    SET_GPR_U32(ctx, 31, 0x11C660u);
    ctx->pc = 0x11D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D370u, 0x11C658u, 0x11C660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C660u;
label_11c660:
    // 0x11c660: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x11c660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_11c664:
    // 0x11c664: 0x8fb000b8  lw          $s0, 0xB8($sp)
    ctx->pc = 0x11c664u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_11c668:
    // 0x11c668: 0x100000bf  b           . + 4 + (0xBF << 2)
label_11c66c:
    if (ctx->pc == 0x11C66Cu) {
        ctx->pc = 0x11C670u;
        goto label_11c670;
    }
    ctx->pc = 0x11C668u;
    {
        const bool branch_taken_0x11c668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c668) {
            ctx->pc = 0x11C968u;
            goto label_11c968;
        }
    }
    ctx->pc = 0x11C670u;
label_11c670:
    // 0x11c670: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x11c670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_11c674:
    // 0x11c674: 0xc119b68  jal         func_466DA0
label_11c678:
    if (ctx->pc == 0x11C678u) {
        ctx->pc = 0x11C67Cu;
        goto label_11c67c;
    }
    ctx->pc = 0x11C674u;
    SET_GPR_U32(ctx, 31, 0x11C67Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x11C674u, 0x11C67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C67Cu;
label_11c67c:
    // 0x11c67c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x11c67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_11c680:
    // 0x11c680: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c684:
    // 0x11c684: 0xc0400e0  jal         func_100380
label_11c688:
    if (ctx->pc == 0x11C688u) {
        ctx->pc = 0x11C68Cu;
        goto label_11c68c;
    }
    ctx->pc = 0x11C684u;
    SET_GPR_U32(ctx, 31, 0x11C68Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x11C684u, 0x11C68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C68Cu;
label_11c68c:
    // 0x11c68c: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x11c68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_11c690:
    // 0x11c690: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x11c690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_11c694:
    // 0x11c694: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_11c698:
    if (ctx->pc == 0x11C698u) {
        ctx->pc = 0x11C69Cu;
        goto label_11c69c;
    }
    ctx->pc = 0x11C694u;
    {
        const bool branch_taken_0x11c694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c694) {
            ctx->pc = 0x11C6ACu;
            goto label_11c6ac;
        }
    }
    ctx->pc = 0x11C69Cu;
label_11c69c:
    // 0x11c69c: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x11c69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_11c6a0:
    // 0x11c6a0: 0xc047a70  jal         func_11E9C0
label_11c6a4:
    if (ctx->pc == 0x11C6A4u) {
        ctx->pc = 0x11C6A8u;
        goto label_11c6a8;
    }
    ctx->pc = 0x11C6A0u;
    SET_GPR_U32(ctx, 31, 0x11C6A8u);
    ctx->pc = 0x11E9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E9C0u, 0x11C6A0u, 0x11C6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C6A8u;
label_11c6a8:
    // 0x11c6a8: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x11c6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_11c6ac:
    // 0x11c6ac: 0x8fb000b4  lw          $s0, 0xB4($sp)
    ctx->pc = 0x11c6acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_11c6b0:
    // 0x11c6b0: 0x100000ad  b           . + 4 + (0xAD << 2)
label_11c6b4:
    if (ctx->pc == 0x11C6B4u) {
        ctx->pc = 0x11C6B8u;
        goto label_11c6b8;
    }
    ctx->pc = 0x11C6B0u;
    {
        const bool branch_taken_0x11c6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c6b0) {
            ctx->pc = 0x11C968u;
            goto label_11c968;
        }
    }
    ctx->pc = 0x11C6B8u;
label_11c6b8:
    // 0x11c6b8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x11c6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_11c6bc:
    // 0x11c6bc: 0xc119b68  jal         func_466DA0
label_11c6c0:
    if (ctx->pc == 0x11C6C0u) {
        ctx->pc = 0x11C6C4u;
        goto label_11c6c4;
    }
    ctx->pc = 0x11C6BCu;
    SET_GPR_U32(ctx, 31, 0x11C6C4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x11C6BCu, 0x11C6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C6C4u;
label_11c6c4:
    // 0x11c6c4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x11c6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_11c6c8:
    // 0x11c6c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c6cc:
    // 0x11c6cc: 0xc0400e0  jal         func_100380
label_11c6d0:
    if (ctx->pc == 0x11C6D0u) {
        ctx->pc = 0x11C6D4u;
        goto label_11c6d4;
    }
    ctx->pc = 0x11C6CCu;
    SET_GPR_U32(ctx, 31, 0x11C6D4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x11C6CCu, 0x11C6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C6D4u;
label_11c6d4:
    // 0x11c6d4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x11c6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_11c6d8:
    // 0x11c6d8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x11c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_11c6dc:
    // 0x11c6dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_11c6e0:
    if (ctx->pc == 0x11C6E0u) {
        ctx->pc = 0x11C6E4u;
        goto label_11c6e4;
    }
    ctx->pc = 0x11C6DCu;
    {
        const bool branch_taken_0x11c6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c6dc) {
            ctx->pc = 0x11C6F4u;
            goto label_11c6f4;
        }
    }
    ctx->pc = 0x11C6E4u;
label_11c6e4:
    // 0x11c6e4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x11c6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_11c6e8:
    // 0x11c6e8: 0xc04ab28  jal         func_12ACA0
label_11c6ec:
    if (ctx->pc == 0x11C6ECu) {
        ctx->pc = 0x11C6F0u;
        goto label_11c6f0;
    }
    ctx->pc = 0x11C6E8u;
    SET_GPR_U32(ctx, 31, 0x11C6F0u);
    ctx->pc = 0x12ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ACA0u, 0x11C6E8u, 0x11C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C6F0u;
label_11c6f0:
    // 0x11c6f0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x11c6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_11c6f4:
    // 0x11c6f4: 0x8fb000b0  lw          $s0, 0xB0($sp)
    ctx->pc = 0x11c6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_11c6f8:
    // 0x11c6f8: 0x1000009b  b           . + 4 + (0x9B << 2)
label_11c6fc:
    if (ctx->pc == 0x11C6FCu) {
        ctx->pc = 0x11C700u;
        goto label_11c700;
    }
    ctx->pc = 0x11C6F8u;
    {
        const bool branch_taken_0x11c6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c6f8) {
            ctx->pc = 0x11C968u;
            goto label_11c968;
        }
    }
    ctx->pc = 0x11C700u;
label_11c700:
    // 0x11c700: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x11c700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_11c704:
    // 0x11c704: 0xc119b68  jal         func_466DA0
label_11c708:
    if (ctx->pc == 0x11C708u) {
        ctx->pc = 0x11C70Cu;
        goto label_11c70c;
    }
    ctx->pc = 0x11C704u;
    SET_GPR_U32(ctx, 31, 0x11C70Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x11C704u, 0x11C70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C70Cu;
label_11c70c:
    // 0x11c70c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x11c70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_11c710:
    // 0x11c710: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c714:
    // 0x11c714: 0xc0400e0  jal         func_100380
label_11c718:
    if (ctx->pc == 0x11C718u) {
        ctx->pc = 0x11C71Cu;
        goto label_11c71c;
    }
    ctx->pc = 0x11C714u;
    SET_GPR_U32(ctx, 31, 0x11C71Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x11C714u, 0x11C71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C71Cu;
label_11c71c:
    // 0x11c71c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x11c71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_11c720:
    // 0x11c720: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x11c720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_11c724:
    // 0x11c724: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_11c728:
    if (ctx->pc == 0x11C728u) {
        ctx->pc = 0x11C72Cu;
        goto label_11c72c;
    }
    ctx->pc = 0x11C724u;
    {
        const bool branch_taken_0x11c724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c724) {
            ctx->pc = 0x11C73Cu;
            goto label_11c73c;
        }
    }
    ctx->pc = 0x11C72Cu;
label_11c72c:
    // 0x11c72c: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x11c72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_11c730:
    // 0x11c730: 0xc048304  jal         func_120C10
label_11c734:
    if (ctx->pc == 0x11C734u) {
        ctx->pc = 0x11C738u;
        goto label_11c738;
    }
    ctx->pc = 0x11C730u;
    SET_GPR_U32(ctx, 31, 0x11C738u);
    ctx->pc = 0x120C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120C10u, 0x11C730u, 0x11C738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C738u;
label_11c738:
    // 0x11c738: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x11c738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_11c73c:
    // 0x11c73c: 0x8fb000ac  lw          $s0, 0xAC($sp)
    ctx->pc = 0x11c73cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_11c740:
    // 0x11c740: 0x10000089  b           . + 4 + (0x89 << 2)
label_11c744:
    if (ctx->pc == 0x11C744u) {
        ctx->pc = 0x11C748u;
        goto label_11c748;
    }
    ctx->pc = 0x11C740u;
    {
        const bool branch_taken_0x11c740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c740) {
            ctx->pc = 0x11C968u;
            goto label_11c968;
        }
    }
    ctx->pc = 0x11C748u;
label_11c748:
    // 0x11c748: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x11c748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_11c74c:
    // 0x11c74c: 0xc119b68  jal         func_466DA0
label_11c750:
    if (ctx->pc == 0x11C750u) {
        ctx->pc = 0x11C754u;
        goto label_11c754;
    }
    ctx->pc = 0x11C74Cu;
    SET_GPR_U32(ctx, 31, 0x11C754u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x11C74Cu, 0x11C754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C754u;
label_11c754:
    // 0x11c754: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x11c754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_11c758:
    // 0x11c758: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c75c:
    // 0x11c75c: 0xc0400e0  jal         func_100380
label_11c760:
    if (ctx->pc == 0x11C760u) {
        ctx->pc = 0x11C764u;
        goto label_11c764;
    }
    ctx->pc = 0x11C75Cu;
    SET_GPR_U32(ctx, 31, 0x11C764u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x11C75Cu, 0x11C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C764u;
label_11c764:
    // 0x11c764: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x11c764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_11c768:
    // 0x11c768: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x11c768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_11c76c:
    // 0x11c76c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_11c770:
    if (ctx->pc == 0x11C770u) {
        ctx->pc = 0x11C774u;
        goto label_11c774;
    }
    ctx->pc = 0x11C76Cu;
    {
        const bool branch_taken_0x11c76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c76c) {
            ctx->pc = 0x11C784u;
            goto label_11c784;
        }
    }
    ctx->pc = 0x11C774u;
label_11c774:
    // 0x11c774: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x11c774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_11c778:
    // 0x11c778: 0xc0479b4  jal         func_11E6D0
label_11c77c:
    if (ctx->pc == 0x11C77Cu) {
        ctx->pc = 0x11C780u;
        goto label_11c780;
    }
    ctx->pc = 0x11C778u;
    SET_GPR_U32(ctx, 31, 0x11C780u);
    ctx->pc = 0x11E6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E6D0u, 0x11C778u, 0x11C780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C780u;
label_11c780:
    // 0x11c780: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x11c780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_11c784:
    // 0x11c784: 0x8fb000a8  lw          $s0, 0xA8($sp)
    ctx->pc = 0x11c784u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_11c788:
    // 0x11c788: 0x10000077  b           . + 4 + (0x77 << 2)
label_11c78c:
    if (ctx->pc == 0x11C78Cu) {
        ctx->pc = 0x11C790u;
        goto label_11c790;
    }
    ctx->pc = 0x11C788u;
    {
        const bool branch_taken_0x11c788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c788) {
            ctx->pc = 0x11C968u;
            goto label_11c968;
        }
    }
    ctx->pc = 0x11C790u;
label_11c790:
    // 0x11c790: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x11c790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_11c794:
    // 0x11c794: 0xc119b68  jal         func_466DA0
label_11c798:
    if (ctx->pc == 0x11C798u) {
        ctx->pc = 0x11C79Cu;
        goto label_11c79c;
    }
    ctx->pc = 0x11C794u;
    SET_GPR_U32(ctx, 31, 0x11C79Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x11C794u, 0x11C79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C79Cu;
label_11c79c:
    // 0x11c79c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x11c79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_11c7a0:
    // 0x11c7a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c7a4:
    // 0x11c7a4: 0xc0400e0  jal         func_100380
label_11c7a8:
    if (ctx->pc == 0x11C7A8u) {
        ctx->pc = 0x11C7ACu;
        goto label_11c7ac;
    }
    ctx->pc = 0x11C7A4u;
    SET_GPR_U32(ctx, 31, 0x11C7ACu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x11C7A4u, 0x11C7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7ACu;
label_11c7ac:
    // 0x11c7ac: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x11c7acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c7b0:
    // 0x11c7b0: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
label_11c7b4:
    if (ctx->pc == 0x11C7B4u) {
        ctx->pc = 0x11C7B8u;
        goto label_11c7b8;
    }
    ctx->pc = 0x11C7B0u;
    {
        const bool branch_taken_0x11c7b0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c7b0) {
            ctx->pc = 0x11C7C8u;
            goto label_11c7c8;
        }
    }
    ctx->pc = 0x11C7B8u;
label_11c7b8:
    // 0x11c7b8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x11c7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_11c7bc:
    // 0x11c7bc: 0xc048538  jal         func_1214E0
label_11c7c0:
    if (ctx->pc == 0x11C7C0u) {
        ctx->pc = 0x11C7C4u;
        goto label_11c7c4;
    }
    ctx->pc = 0x11C7BCu;
    SET_GPR_U32(ctx, 31, 0x11C7C4u);
    ctx->pc = 0x1214E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1214E0u, 0x11C7BCu, 0x11C7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7C4u;
label_11c7c4:
    // 0x11c7c4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x11c7c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c7c8:
    // 0x11c7c8: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x11c7c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_11c7cc:
    // 0x11c7cc: 0x10000066  b           . + 4 + (0x66 << 2)
label_11c7d0:
    if (ctx->pc == 0x11C7D0u) {
        ctx->pc = 0x11C7D4u;
        goto label_11c7d4;
    }
    ctx->pc = 0x11C7CCu;
    {
        const bool branch_taken_0x11c7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c7cc) {
            ctx->pc = 0x11C968u;
            goto label_11c968;
        }
    }
    ctx->pc = 0x11C7D4u;
label_11c7d4:
    // 0x11c7d4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x11c7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_11c7d8:
    // 0x11c7d8: 0xc119b68  jal         func_466DA0
label_11c7dc:
    if (ctx->pc == 0x11C7DCu) {
        ctx->pc = 0x11C7E0u;
        goto label_11c7e0;
    }
    ctx->pc = 0x11C7D8u;
    SET_GPR_U32(ctx, 31, 0x11C7E0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x11C7D8u, 0x11C7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7E0u;
label_11c7e0:
    // 0x11c7e0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x11c7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_11c7e4:
    // 0x11c7e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c7e8:
    // 0x11c7e8: 0xc0400e0  jal         func_100380
label_11c7ec:
    if (ctx->pc == 0x11C7ECu) {
        ctx->pc = 0x11C7F0u;
        goto label_11c7f0;
    }
    ctx->pc = 0x11C7E8u;
    SET_GPR_U32(ctx, 31, 0x11C7F0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x11C7E8u, 0x11C7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7F0u;
label_11c7f0:
    // 0x11c7f0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x11c7f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c7f4:
    // 0x11c7f4: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_11c7f8:
    if (ctx->pc == 0x11C7F8u) {
        ctx->pc = 0x11C7FCu;
        goto label_11c7fc;
    }
    ctx->pc = 0x11C7F4u;
    {
        const bool branch_taken_0x11c7f4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c7f4) {
            ctx->pc = 0x11C80Cu;
            goto label_11c80c;
        }
    }
    ctx->pc = 0x11C7FCu;
label_11c7fc:
    // 0x11c7fc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x11c7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_11c800:
    // 0x11c800: 0xc0473b0  jal         func_11CEC0
label_11c804:
    if (ctx->pc == 0x11C804u) {
        ctx->pc = 0x11C808u;
        goto label_11c808;
    }
    ctx->pc = 0x11C800u;
    SET_GPR_U32(ctx, 31, 0x11C808u);
    ctx->pc = 0x11CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CEC0u, 0x11C800u, 0x11C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C808u;
label_11c808:
    // 0x11c808: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x11c808u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c80c:
    // 0x11c80c: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x11c80cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_11c810:
    // 0x11c810: 0x10000055  b           . + 4 + (0x55 << 2)
label_11c814:
    if (ctx->pc == 0x11C814u) {
        ctx->pc = 0x11C818u;
        goto label_11c818;
    }
    ctx->pc = 0x11C810u;
    {
        const bool branch_taken_0x11c810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c810) {
            ctx->pc = 0x11C968u;
            goto label_11c968;
        }
    }
    ctx->pc = 0x11C818u;
label_11c818:
    // 0x11c818: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x11c818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_11c81c:
    // 0x11c81c: 0xc119b68  jal         func_466DA0
label_11c820:
    if (ctx->pc == 0x11C820u) {
        ctx->pc = 0x11C824u;
        goto label_11c824;
    }
    ctx->pc = 0x11C81Cu;
    SET_GPR_U32(ctx, 31, 0x11C824u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x11C81Cu, 0x11C824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C824u;
label_11c824:
    // 0x11c824: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x11c824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_11c828:
    // 0x11c828: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c82c:
    // 0x11c82c: 0xc0400e0  jal         func_100380
label_11c830:
    if (ctx->pc == 0x11C830u) {
        ctx->pc = 0x11C834u;
        goto label_11c834;
    }
    ctx->pc = 0x11C82Cu;
    SET_GPR_U32(ctx, 31, 0x11C834u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x11C82Cu, 0x11C834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C834u;
label_11c834:
    // 0x11c834: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11c834u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c838:
    // 0x11c838: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_11c83c:
    if (ctx->pc == 0x11C83Cu) {
        ctx->pc = 0x11C840u;
        goto label_11c840;
    }
    ctx->pc = 0x11C838u;
    {
        const bool branch_taken_0x11c838 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c838) {
            ctx->pc = 0x11C850u;
            goto label_11c850;
        }
    }
    ctx->pc = 0x11C840u;
label_11c840:
    // 0x11c840: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11c840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_11c844:
    // 0x11c844: 0xc0478a0  jal         func_11E280
label_11c848:
    if (ctx->pc == 0x11C848u) {
        ctx->pc = 0x11C84Cu;
        goto label_11c84c;
    }
    ctx->pc = 0x11C844u;
    SET_GPR_U32(ctx, 31, 0x11C84Cu);
    ctx->pc = 0x11E280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E280u, 0x11C844u, 0x11C84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C84Cu;
label_11c84c:
    // 0x11c84c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11c84cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c850:
    // 0x11c850: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x11c850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_11c854:
    // 0x11c854: 0x10000044  b           . + 4 + (0x44 << 2)
label_11c858:
    if (ctx->pc == 0x11C858u) {
        ctx->pc = 0x11C85Cu;
        goto label_11c85c;
    }
    ctx->pc = 0x11C854u;
    {
        const bool branch_taken_0x11c854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c854) {
            ctx->pc = 0x11C968u;
            goto label_11c968;
        }
    }
    ctx->pc = 0x11C85Cu;
label_11c85c:
    // 0x11c85c: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x11c85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_11c860:
    // 0x11c860: 0xc119b68  jal         func_466DA0
label_11c864:
    if (ctx->pc == 0x11C864u) {
        ctx->pc = 0x11C868u;
        goto label_11c868;
    }
    ctx->pc = 0x11C860u;
    SET_GPR_U32(ctx, 31, 0x11C868u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x11C860u, 0x11C868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C868u;
label_11c868:
    // 0x11c868: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x11c868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_11c86c:
    // 0x11c86c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c870:
    // 0x11c870: 0xc0400e0  jal         func_100380
label_11c874:
    if (ctx->pc == 0x11C874u) {
        ctx->pc = 0x11C878u;
        goto label_11c878;
    }
    ctx->pc = 0x11C870u;
    SET_GPR_U32(ctx, 31, 0x11C878u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x11C870u, 0x11C878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C878u;
label_11c878:
    // 0x11c878: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11c878u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c87c:
    // 0x11c87c: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_11c880:
    if (ctx->pc == 0x11C880u) {
        ctx->pc = 0x11C884u;
        goto label_11c884;
    }
    ctx->pc = 0x11C87Cu;
    {
        const bool branch_taken_0x11c87c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c87c) {
            ctx->pc = 0x11C894u;
            goto label_11c894;
        }
    }
    ctx->pc = 0x11C884u;
label_11c884:
    // 0x11c884: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11c884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11c888:
    // 0x11c888: 0xc048c80  jal         func_123200
label_11c88c:
    if (ctx->pc == 0x11C88Cu) {
        ctx->pc = 0x11C890u;
        goto label_11c890;
    }
    ctx->pc = 0x11C888u;
    SET_GPR_U32(ctx, 31, 0x11C890u);
    ctx->pc = 0x123200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123200u, 0x11C888u, 0x11C890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C890u;
label_11c890:
    // 0x11c890: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11c890u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c894:
    // 0x11c894: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x11c894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11c898:
    // 0x11c898: 0x10000033  b           . + 4 + (0x33 << 2)
label_11c89c:
    if (ctx->pc == 0x11C89Cu) {
        ctx->pc = 0x11C8A0u;
        goto label_11c8a0;
    }
    ctx->pc = 0x11C898u;
    {
        const bool branch_taken_0x11c898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c898) {
            ctx->pc = 0x11C968u;
            goto label_11c968;
        }
    }
    ctx->pc = 0x11C8A0u;
label_11c8a0:
    // 0x11c8a0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x11c8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_11c8a4:
    // 0x11c8a4: 0xc119b68  jal         func_466DA0
label_11c8a8:
    if (ctx->pc == 0x11C8A8u) {
        ctx->pc = 0x11C8ACu;
        goto label_11c8ac;
    }
    ctx->pc = 0x11C8A4u;
    SET_GPR_U32(ctx, 31, 0x11C8ACu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x11C8A4u, 0x11C8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8ACu;
label_11c8ac:
    // 0x11c8ac: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x11c8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_11c8b0:
    // 0x11c8b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c8b4:
    // 0x11c8b4: 0xc0400e0  jal         func_100380
label_11c8b8:
    if (ctx->pc == 0x11C8B8u) {
        ctx->pc = 0x11C8BCu;
        goto label_11c8bc;
    }
    ctx->pc = 0x11C8B4u;
    SET_GPR_U32(ctx, 31, 0x11C8BCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x11C8B4u, 0x11C8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8BCu;
label_11c8bc:
    // 0x11c8bc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11c8bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c8c0:
    // 0x11c8c0: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_11c8c4:
    if (ctx->pc == 0x11C8C4u) {
        ctx->pc = 0x11C8C8u;
        goto label_11c8c8;
    }
    ctx->pc = 0x11C8C0u;
    {
        const bool branch_taken_0x11c8c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c8c0) {
            ctx->pc = 0x11C8D8u;
            goto label_11c8d8;
        }
    }
    ctx->pc = 0x11C8C8u;
label_11c8c8:
    // 0x11c8c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11c8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11c8cc:
    // 0x11c8cc: 0xc04742c  jal         func_11D0B0
label_11c8d0:
    if (ctx->pc == 0x11C8D0u) {
        ctx->pc = 0x11C8D4u;
        goto label_11c8d4;
    }
    ctx->pc = 0x11C8CCu;
    SET_GPR_U32(ctx, 31, 0x11C8D4u);
    ctx->pc = 0x11D0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D0B0u, 0x11C8CCu, 0x11C8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8D4u;
label_11c8d4:
    // 0x11c8d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11c8d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c8d8:
    // 0x11c8d8: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x11c8d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11c8dc:
    // 0x11c8dc: 0x10000022  b           . + 4 + (0x22 << 2)
label_11c8e0:
    if (ctx->pc == 0x11C8E0u) {
        ctx->pc = 0x11C8E4u;
        goto label_11c8e4;
    }
    ctx->pc = 0x11C8DCu;
    {
        const bool branch_taken_0x11c8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c8dc) {
            ctx->pc = 0x11C968u;
            goto label_11c968;
        }
    }
    ctx->pc = 0x11C8E4u;
label_11c8e4:
    // 0x11c8e4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x11c8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_11c8e8:
    // 0x11c8e8: 0xc119b68  jal         func_466DA0
label_11c8ec:
    if (ctx->pc == 0x11C8ECu) {
        ctx->pc = 0x11C8F0u;
        goto label_11c8f0;
    }
    ctx->pc = 0x11C8E8u;
    SET_GPR_U32(ctx, 31, 0x11C8F0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x11C8E8u, 0x11C8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8F0u;
label_11c8f0:
    // 0x11c8f0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x11c8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_11c8f4:
    // 0x11c8f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c8f8:
    // 0x11c8f8: 0xc0400e0  jal         func_100380
label_11c8fc:
    if (ctx->pc == 0x11C8FCu) {
        ctx->pc = 0x11C900u;
        goto label_11c900;
    }
    ctx->pc = 0x11C8F8u;
    SET_GPR_U32(ctx, 31, 0x11C900u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x11C8F8u, 0x11C900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C900u;
label_11c900:
    // 0x11c900: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11c900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c904:
    // 0x11c904: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_11c908:
    if (ctx->pc == 0x11C908u) {
        ctx->pc = 0x11C90Cu;
        goto label_11c90c;
    }
    ctx->pc = 0x11C904u;
    {
        const bool branch_taken_0x11c904 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c904) {
            ctx->pc = 0x11C91Cu;
            goto label_11c91c;
        }
    }
    ctx->pc = 0x11C90Cu;
label_11c90c:
    // 0x11c90c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11c90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11c910:
    // 0x11c910: 0xc04733c  jal         func_11CCF0
label_11c914:
    if (ctx->pc == 0x11C914u) {
        ctx->pc = 0x11C918u;
        goto label_11c918;
    }
    ctx->pc = 0x11C910u;
    SET_GPR_U32(ctx, 31, 0x11C918u);
    ctx->pc = 0x11CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCF0u, 0x11C910u, 0x11C918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C918u;
label_11c918:
    // 0x11c918: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11c918u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c91c:
    // 0x11c91c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x11c91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11c920:
    // 0x11c920: 0x10000011  b           . + 4 + (0x11 << 2)
label_11c924:
    if (ctx->pc == 0x11C924u) {
        ctx->pc = 0x11C928u;
        goto label_11c928;
    }
    ctx->pc = 0x11C920u;
    {
        const bool branch_taken_0x11c920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c920) {
            ctx->pc = 0x11C968u;
            goto label_11c968;
        }
    }
    ctx->pc = 0x11C928u;
label_11c928:
    // 0x11c928: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x11c928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_11c92c:
    // 0x11c92c: 0xc119b68  jal         func_466DA0
label_11c930:
    if (ctx->pc == 0x11C930u) {
        ctx->pc = 0x11C934u;
        goto label_11c934;
    }
    ctx->pc = 0x11C92Cu;
    SET_GPR_U32(ctx, 31, 0x11C934u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x11C92Cu, 0x11C934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C934u;
label_11c934:
    // 0x11c934: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x11c934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_11c938:
    // 0x11c938: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c93c:
    // 0x11c93c: 0xc0400e0  jal         func_100380
label_11c940:
    if (ctx->pc == 0x11C940u) {
        ctx->pc = 0x11C944u;
        goto label_11c944;
    }
    ctx->pc = 0x11C93Cu;
    SET_GPR_U32(ctx, 31, 0x11C944u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x11C93Cu, 0x11C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C944u;
label_11c944:
    // 0x11c944: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11c944u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c948:
    // 0x11c948: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_11c94c:
    if (ctx->pc == 0x11C94Cu) {
        ctx->pc = 0x11C950u;
        goto label_11c950;
    }
    ctx->pc = 0x11C948u;
    {
        const bool branch_taken_0x11c948 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c948) {
            ctx->pc = 0x11C964u;
            goto label_11c964;
        }
    }
    ctx->pc = 0x11C950u;
label_11c950:
    // 0x11c950: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11c954:
    // 0x11c954: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x11c954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_11c958:
    // 0x11c958: 0xc047074  jal         func_11C1D0
label_11c95c:
    if (ctx->pc == 0x11C95Cu) {
        ctx->pc = 0x11C960u;
        goto label_11c960;
    }
    ctx->pc = 0x11C958u;
    SET_GPR_U32(ctx, 31, 0x11C960u);
    ctx->pc = 0x11C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C1D0u, 0x11C958u, 0x11C960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C960u;
label_11c960:
    // 0x11c960: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11c960u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c964:
    // 0x11c964: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x11c964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11c968:
    // 0x11c968: 0x10100012  beq         $zero, $s0, . + 4 + (0x12 << 2)
label_11c96c:
    if (ctx->pc == 0x11C96Cu) {
        ctx->pc = 0x11C970u;
        goto label_11c970;
    }
    ctx->pc = 0x11C968u;
    {
        const bool branch_taken_0x11c968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x11c968) {
            ctx->pc = 0x11C9B4u;
            goto label_11c9b4;
        }
    }
    ctx->pc = 0x11C970u;
label_11c970:
    // 0x11c970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c974:
    // 0x11c974: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11c974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11c978:
    // 0x11c978: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x11c978u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_11c97c:
    // 0x11c97c: 0x320f809  jalr        $t9
label_11c980:
    if (ctx->pc == 0x11C980u) {
        ctx->pc = 0x11C984u;
        goto label_11c984;
    }
    ctx->pc = 0x11C97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11C984u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C97Cu, 0x11C984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C984u;
label_11c984:
    // 0x11c984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c988:
    // 0x11c988: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11c988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11c98c:
    // 0x11c98c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x11c98cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_11c990:
    // 0x11c990: 0x320f809  jalr        $t9
label_11c994:
    if (ctx->pc == 0x11C994u) {
        ctx->pc = 0x11C998u;
        goto label_11c998;
    }
    ctx->pc = 0x11C990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11C998u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C990u, 0x11C998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C998u;
label_11c998:
    // 0x11c998: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x11c998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_11c99c:
    // 0x11c99c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11c99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11c9a0:
    // 0x11c9a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11c9a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c9a4:
    // 0x11c9a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11c9a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11c9a8:
    // 0x11c9a8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x11c9a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_11c9ac:
    // 0x11c9ac: 0x320f809  jalr        $t9
label_11c9b0:
    if (ctx->pc == 0x11C9B0u) {
        ctx->pc = 0x11C9B4u;
        goto label_11c9b4;
    }
    ctx->pc = 0x11C9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11C9B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C9ACu, 0x11C9B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C9B4u;
label_11c9b4:
    // 0x11c9b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x11c9b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_11c9b8:
    // 0x11c9b8: 0x2e220016  sltiu       $v0, $s1, 0x16
    ctx->pc = 0x11c9b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_11c9bc:
    // 0x11c9bc: 0x1440fec3  bnez        $v0, . + 4 + (-0x13D << 2)
label_11c9c0:
    if (ctx->pc == 0x11C9C0u) {
        ctx->pc = 0x11C9C4u;
        goto label_11c9c4;
    }
    ctx->pc = 0x11C9BCu;
    {
        const bool branch_taken_0x11c9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c9bc) {
            ctx->pc = 0x11C4CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c4cc;
        }
    }
    ctx->pc = 0x11C9C4u;
label_11c9c4:
    // 0x11c9c4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x11c9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_11c9c8:
    // 0x11c9c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11c9cc:
    // 0x11c9cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c9ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11c9d0:
    // 0x11c9d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11c9d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11c9d4:
    // 0x11c9d4: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x11c9d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_11c9d8:
    // 0x11c9d8: 0x320f809  jalr        $t9
label_11c9dc:
    if (ctx->pc == 0x11C9DCu) {
        ctx->pc = 0x11C9E0u;
        goto label_11c9e0;
    }
    ctx->pc = 0x11C9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11C9E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C9D8u, 0x11C9E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C9E0u;
label_11c9e0:
    // 0x11c9e0: 0x93a200cf  lbu         $v0, 0xCF($sp)
    ctx->pc = 0x11c9e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 207)));
label_11c9e4:
    // 0x11c9e4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11c9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_11c9e8:
    // 0x11c9e8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x11c9e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_11c9ec:
    // 0x11c9ec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x11c9ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_11c9f0:
    // 0x11c9f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x11c9f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_11c9f4:
    // 0x11c9f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x11c9f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_11c9f8:
    // 0x11c9f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11c9f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11c9fc:
    // 0x11c9fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11c9fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11ca00:
    // 0x11ca00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11ca00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11ca04:
    // 0x11ca04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11ca04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11ca08:
    // 0x11ca08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11ca08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11ca0c:
    // 0x11ca0c: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x11ca0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_11ca10:
    // 0x11ca10: 0x3e00008  jr          $ra
label_11ca14:
    if (ctx->pc == 0x11CA14u) {
        ctx->pc = 0x11CA18u;
        goto label_11ca18;
    }
    ctx->pc = 0x11CA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CA18u;
label_11ca18:
    // 0x11ca18: 0x0  nop
    ctx->pc = 0x11ca18u;
    // NOP
label_11ca1c:
    // 0x11ca1c: 0x0  nop
    ctx->pc = 0x11ca1cu;
    // NOP
label_11ca20:
    // 0x11ca20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11ca20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_11ca24:
    // 0x11ca24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11ca24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11ca28:
    // 0x11ca28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11ca28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_11ca2c:
    // 0x11ca2c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x11ca2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_11ca30:
    // 0x11ca30: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x11ca30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_11ca34:
    // 0x11ca34: 0xc08eee0  jal         func_23BB80
label_11ca38:
    if (ctx->pc == 0x11CA38u) {
        ctx->pc = 0x11CA3Cu;
        goto label_11ca3c;
    }
    ctx->pc = 0x11CA34u;
    SET_GPR_U32(ctx, 31, 0x11CA3Cu);
    ctx->pc = 0x23BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BB80u, 0x11CA34u, 0x11CA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA3Cu;
label_11ca3c:
    // 0x11ca3c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x11ca3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11ca40:
    // 0x11ca40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11ca40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11ca44:
    // 0x11ca44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ca44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11ca48:
    // 0x11ca48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11ca48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11ca4c:
    // 0x11ca4c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11ca4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_11ca50:
    // 0x11ca50: 0x3e00008  jr          $ra
label_11ca54:
    if (ctx->pc == 0x11CA54u) {
        ctx->pc = 0x11CA58u;
        goto label_11ca58;
    }
    ctx->pc = 0x11CA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CA58u;
label_11ca58:
    // 0x11ca58: 0x0  nop
    ctx->pc = 0x11ca58u;
    // NOP
label_11ca5c:
    // 0x11ca5c: 0x0  nop
    ctx->pc = 0x11ca5cu;
    // NOP
    ctx->pc = 0x11ca60u;
}
