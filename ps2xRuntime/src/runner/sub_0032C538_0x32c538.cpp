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

// Function: sub_0032C538
// Address: 0x32c538 - 0x32ca98
void sub_0032C538_0x32c538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C538_0x32c538");
#endif

    switch (ctx->pc) {
        case 0x32c538u: goto label_32c538;
        case 0x32c53cu: goto label_32c53c;
        case 0x32c540u: goto label_32c540;
        case 0x32c544u: goto label_32c544;
        case 0x32c548u: goto label_32c548;
        case 0x32c54cu: goto label_32c54c;
        case 0x32c550u: goto label_32c550;
        case 0x32c554u: goto label_32c554;
        case 0x32c558u: goto label_32c558;
        case 0x32c55cu: goto label_32c55c;
        case 0x32c560u: goto label_32c560;
        case 0x32c564u: goto label_32c564;
        case 0x32c568u: goto label_32c568;
        case 0x32c56cu: goto label_32c56c;
        case 0x32c570u: goto label_32c570;
        case 0x32c574u: goto label_32c574;
        case 0x32c578u: goto label_32c578;
        case 0x32c57cu: goto label_32c57c;
        case 0x32c580u: goto label_32c580;
        case 0x32c584u: goto label_32c584;
        case 0x32c588u: goto label_32c588;
        case 0x32c58cu: goto label_32c58c;
        case 0x32c590u: goto label_32c590;
        case 0x32c594u: goto label_32c594;
        case 0x32c598u: goto label_32c598;
        case 0x32c59cu: goto label_32c59c;
        case 0x32c5a0u: goto label_32c5a0;
        case 0x32c5a4u: goto label_32c5a4;
        case 0x32c5a8u: goto label_32c5a8;
        case 0x32c5acu: goto label_32c5ac;
        case 0x32c5b0u: goto label_32c5b0;
        case 0x32c5b4u: goto label_32c5b4;
        case 0x32c5b8u: goto label_32c5b8;
        case 0x32c5bcu: goto label_32c5bc;
        case 0x32c5c0u: goto label_32c5c0;
        case 0x32c5c4u: goto label_32c5c4;
        case 0x32c5c8u: goto label_32c5c8;
        case 0x32c5ccu: goto label_32c5cc;
        case 0x32c5d0u: goto label_32c5d0;
        case 0x32c5d4u: goto label_32c5d4;
        case 0x32c5d8u: goto label_32c5d8;
        case 0x32c5dcu: goto label_32c5dc;
        case 0x32c5e0u: goto label_32c5e0;
        case 0x32c5e4u: goto label_32c5e4;
        case 0x32c5e8u: goto label_32c5e8;
        case 0x32c5ecu: goto label_32c5ec;
        case 0x32c5f0u: goto label_32c5f0;
        case 0x32c5f4u: goto label_32c5f4;
        case 0x32c5f8u: goto label_32c5f8;
        case 0x32c5fcu: goto label_32c5fc;
        case 0x32c600u: goto label_32c600;
        case 0x32c604u: goto label_32c604;
        case 0x32c608u: goto label_32c608;
        case 0x32c60cu: goto label_32c60c;
        case 0x32c610u: goto label_32c610;
        case 0x32c614u: goto label_32c614;
        case 0x32c618u: goto label_32c618;
        case 0x32c61cu: goto label_32c61c;
        case 0x32c620u: goto label_32c620;
        case 0x32c624u: goto label_32c624;
        case 0x32c628u: goto label_32c628;
        case 0x32c62cu: goto label_32c62c;
        case 0x32c630u: goto label_32c630;
        case 0x32c634u: goto label_32c634;
        case 0x32c638u: goto label_32c638;
        case 0x32c63cu: goto label_32c63c;
        case 0x32c640u: goto label_32c640;
        case 0x32c644u: goto label_32c644;
        case 0x32c648u: goto label_32c648;
        case 0x32c64cu: goto label_32c64c;
        case 0x32c650u: goto label_32c650;
        case 0x32c654u: goto label_32c654;
        case 0x32c658u: goto label_32c658;
        case 0x32c65cu: goto label_32c65c;
        case 0x32c660u: goto label_32c660;
        case 0x32c664u: goto label_32c664;
        case 0x32c668u: goto label_32c668;
        case 0x32c66cu: goto label_32c66c;
        case 0x32c670u: goto label_32c670;
        case 0x32c674u: goto label_32c674;
        case 0x32c678u: goto label_32c678;
        case 0x32c67cu: goto label_32c67c;
        case 0x32c680u: goto label_32c680;
        case 0x32c684u: goto label_32c684;
        case 0x32c688u: goto label_32c688;
        case 0x32c68cu: goto label_32c68c;
        case 0x32c690u: goto label_32c690;
        case 0x32c694u: goto label_32c694;
        case 0x32c698u: goto label_32c698;
        case 0x32c69cu: goto label_32c69c;
        case 0x32c6a0u: goto label_32c6a0;
        case 0x32c6a4u: goto label_32c6a4;
        case 0x32c6a8u: goto label_32c6a8;
        case 0x32c6acu: goto label_32c6ac;
        case 0x32c6b0u: goto label_32c6b0;
        case 0x32c6b4u: goto label_32c6b4;
        case 0x32c6b8u: goto label_32c6b8;
        case 0x32c6bcu: goto label_32c6bc;
        case 0x32c6c0u: goto label_32c6c0;
        case 0x32c6c4u: goto label_32c6c4;
        case 0x32c6c8u: goto label_32c6c8;
        case 0x32c6ccu: goto label_32c6cc;
        case 0x32c6d0u: goto label_32c6d0;
        case 0x32c6d4u: goto label_32c6d4;
        case 0x32c6d8u: goto label_32c6d8;
        case 0x32c6dcu: goto label_32c6dc;
        case 0x32c6e0u: goto label_32c6e0;
        case 0x32c6e4u: goto label_32c6e4;
        case 0x32c6e8u: goto label_32c6e8;
        case 0x32c6ecu: goto label_32c6ec;
        case 0x32c6f0u: goto label_32c6f0;
        case 0x32c6f4u: goto label_32c6f4;
        case 0x32c6f8u: goto label_32c6f8;
        case 0x32c6fcu: goto label_32c6fc;
        case 0x32c700u: goto label_32c700;
        case 0x32c704u: goto label_32c704;
        case 0x32c708u: goto label_32c708;
        case 0x32c70cu: goto label_32c70c;
        case 0x32c710u: goto label_32c710;
        case 0x32c714u: goto label_32c714;
        case 0x32c718u: goto label_32c718;
        case 0x32c71cu: goto label_32c71c;
        case 0x32c720u: goto label_32c720;
        case 0x32c724u: goto label_32c724;
        case 0x32c728u: goto label_32c728;
        case 0x32c72cu: goto label_32c72c;
        case 0x32c730u: goto label_32c730;
        case 0x32c734u: goto label_32c734;
        case 0x32c738u: goto label_32c738;
        case 0x32c73cu: goto label_32c73c;
        case 0x32c740u: goto label_32c740;
        case 0x32c744u: goto label_32c744;
        case 0x32c748u: goto label_32c748;
        case 0x32c74cu: goto label_32c74c;
        case 0x32c750u: goto label_32c750;
        case 0x32c754u: goto label_32c754;
        case 0x32c758u: goto label_32c758;
        case 0x32c75cu: goto label_32c75c;
        case 0x32c760u: goto label_32c760;
        case 0x32c764u: goto label_32c764;
        case 0x32c768u: goto label_32c768;
        case 0x32c76cu: goto label_32c76c;
        case 0x32c770u: goto label_32c770;
        case 0x32c774u: goto label_32c774;
        case 0x32c778u: goto label_32c778;
        case 0x32c77cu: goto label_32c77c;
        case 0x32c780u: goto label_32c780;
        case 0x32c784u: goto label_32c784;
        case 0x32c788u: goto label_32c788;
        case 0x32c78cu: goto label_32c78c;
        case 0x32c790u: goto label_32c790;
        case 0x32c794u: goto label_32c794;
        case 0x32c798u: goto label_32c798;
        case 0x32c79cu: goto label_32c79c;
        case 0x32c7a0u: goto label_32c7a0;
        case 0x32c7a4u: goto label_32c7a4;
        case 0x32c7a8u: goto label_32c7a8;
        case 0x32c7acu: goto label_32c7ac;
        case 0x32c7b0u: goto label_32c7b0;
        case 0x32c7b4u: goto label_32c7b4;
        case 0x32c7b8u: goto label_32c7b8;
        case 0x32c7bcu: goto label_32c7bc;
        case 0x32c7c0u: goto label_32c7c0;
        case 0x32c7c4u: goto label_32c7c4;
        case 0x32c7c8u: goto label_32c7c8;
        case 0x32c7ccu: goto label_32c7cc;
        case 0x32c7d0u: goto label_32c7d0;
        case 0x32c7d4u: goto label_32c7d4;
        case 0x32c7d8u: goto label_32c7d8;
        case 0x32c7dcu: goto label_32c7dc;
        case 0x32c7e0u: goto label_32c7e0;
        case 0x32c7e4u: goto label_32c7e4;
        case 0x32c7e8u: goto label_32c7e8;
        case 0x32c7ecu: goto label_32c7ec;
        case 0x32c7f0u: goto label_32c7f0;
        case 0x32c7f4u: goto label_32c7f4;
        case 0x32c7f8u: goto label_32c7f8;
        case 0x32c7fcu: goto label_32c7fc;
        case 0x32c800u: goto label_32c800;
        case 0x32c804u: goto label_32c804;
        case 0x32c808u: goto label_32c808;
        case 0x32c80cu: goto label_32c80c;
        case 0x32c810u: goto label_32c810;
        case 0x32c814u: goto label_32c814;
        case 0x32c818u: goto label_32c818;
        case 0x32c81cu: goto label_32c81c;
        case 0x32c820u: goto label_32c820;
        case 0x32c824u: goto label_32c824;
        case 0x32c828u: goto label_32c828;
        case 0x32c82cu: goto label_32c82c;
        case 0x32c830u: goto label_32c830;
        case 0x32c834u: goto label_32c834;
        case 0x32c838u: goto label_32c838;
        case 0x32c83cu: goto label_32c83c;
        case 0x32c840u: goto label_32c840;
        case 0x32c844u: goto label_32c844;
        case 0x32c848u: goto label_32c848;
        case 0x32c84cu: goto label_32c84c;
        case 0x32c850u: goto label_32c850;
        case 0x32c854u: goto label_32c854;
        case 0x32c858u: goto label_32c858;
        case 0x32c85cu: goto label_32c85c;
        case 0x32c860u: goto label_32c860;
        case 0x32c864u: goto label_32c864;
        case 0x32c868u: goto label_32c868;
        case 0x32c86cu: goto label_32c86c;
        case 0x32c870u: goto label_32c870;
        case 0x32c874u: goto label_32c874;
        case 0x32c878u: goto label_32c878;
        case 0x32c87cu: goto label_32c87c;
        case 0x32c880u: goto label_32c880;
        case 0x32c884u: goto label_32c884;
        case 0x32c888u: goto label_32c888;
        case 0x32c88cu: goto label_32c88c;
        case 0x32c890u: goto label_32c890;
        case 0x32c894u: goto label_32c894;
        case 0x32c898u: goto label_32c898;
        case 0x32c89cu: goto label_32c89c;
        case 0x32c8a0u: goto label_32c8a0;
        case 0x32c8a4u: goto label_32c8a4;
        case 0x32c8a8u: goto label_32c8a8;
        case 0x32c8acu: goto label_32c8ac;
        case 0x32c8b0u: goto label_32c8b0;
        case 0x32c8b4u: goto label_32c8b4;
        case 0x32c8b8u: goto label_32c8b8;
        case 0x32c8bcu: goto label_32c8bc;
        case 0x32c8c0u: goto label_32c8c0;
        case 0x32c8c4u: goto label_32c8c4;
        case 0x32c8c8u: goto label_32c8c8;
        case 0x32c8ccu: goto label_32c8cc;
        case 0x32c8d0u: goto label_32c8d0;
        case 0x32c8d4u: goto label_32c8d4;
        case 0x32c8d8u: goto label_32c8d8;
        case 0x32c8dcu: goto label_32c8dc;
        case 0x32c8e0u: goto label_32c8e0;
        case 0x32c8e4u: goto label_32c8e4;
        case 0x32c8e8u: goto label_32c8e8;
        case 0x32c8ecu: goto label_32c8ec;
        case 0x32c8f0u: goto label_32c8f0;
        case 0x32c8f4u: goto label_32c8f4;
        case 0x32c8f8u: goto label_32c8f8;
        case 0x32c8fcu: goto label_32c8fc;
        case 0x32c900u: goto label_32c900;
        case 0x32c904u: goto label_32c904;
        case 0x32c908u: goto label_32c908;
        case 0x32c90cu: goto label_32c90c;
        case 0x32c910u: goto label_32c910;
        case 0x32c914u: goto label_32c914;
        case 0x32c918u: goto label_32c918;
        case 0x32c91cu: goto label_32c91c;
        case 0x32c920u: goto label_32c920;
        case 0x32c924u: goto label_32c924;
        case 0x32c928u: goto label_32c928;
        case 0x32c92cu: goto label_32c92c;
        case 0x32c930u: goto label_32c930;
        case 0x32c934u: goto label_32c934;
        case 0x32c938u: goto label_32c938;
        case 0x32c93cu: goto label_32c93c;
        case 0x32c940u: goto label_32c940;
        case 0x32c944u: goto label_32c944;
        case 0x32c948u: goto label_32c948;
        case 0x32c94cu: goto label_32c94c;
        case 0x32c950u: goto label_32c950;
        case 0x32c954u: goto label_32c954;
        case 0x32c958u: goto label_32c958;
        case 0x32c95cu: goto label_32c95c;
        case 0x32c960u: goto label_32c960;
        case 0x32c964u: goto label_32c964;
        case 0x32c968u: goto label_32c968;
        case 0x32c96cu: goto label_32c96c;
        case 0x32c970u: goto label_32c970;
        case 0x32c974u: goto label_32c974;
        case 0x32c978u: goto label_32c978;
        case 0x32c97cu: goto label_32c97c;
        case 0x32c980u: goto label_32c980;
        case 0x32c984u: goto label_32c984;
        case 0x32c988u: goto label_32c988;
        case 0x32c98cu: goto label_32c98c;
        case 0x32c990u: goto label_32c990;
        case 0x32c994u: goto label_32c994;
        case 0x32c998u: goto label_32c998;
        case 0x32c99cu: goto label_32c99c;
        case 0x32c9a0u: goto label_32c9a0;
        case 0x32c9a4u: goto label_32c9a4;
        case 0x32c9a8u: goto label_32c9a8;
        case 0x32c9acu: goto label_32c9ac;
        case 0x32c9b0u: goto label_32c9b0;
        case 0x32c9b4u: goto label_32c9b4;
        case 0x32c9b8u: goto label_32c9b8;
        case 0x32c9bcu: goto label_32c9bc;
        case 0x32c9c0u: goto label_32c9c0;
        case 0x32c9c4u: goto label_32c9c4;
        case 0x32c9c8u: goto label_32c9c8;
        case 0x32c9ccu: goto label_32c9cc;
        case 0x32c9d0u: goto label_32c9d0;
        case 0x32c9d4u: goto label_32c9d4;
        case 0x32c9d8u: goto label_32c9d8;
        case 0x32c9dcu: goto label_32c9dc;
        case 0x32c9e0u: goto label_32c9e0;
        case 0x32c9e4u: goto label_32c9e4;
        case 0x32c9e8u: goto label_32c9e8;
        case 0x32c9ecu: goto label_32c9ec;
        case 0x32c9f0u: goto label_32c9f0;
        case 0x32c9f4u: goto label_32c9f4;
        case 0x32c9f8u: goto label_32c9f8;
        case 0x32c9fcu: goto label_32c9fc;
        case 0x32ca00u: goto label_32ca00;
        case 0x32ca04u: goto label_32ca04;
        case 0x32ca08u: goto label_32ca08;
        case 0x32ca0cu: goto label_32ca0c;
        case 0x32ca10u: goto label_32ca10;
        case 0x32ca14u: goto label_32ca14;
        case 0x32ca18u: goto label_32ca18;
        case 0x32ca1cu: goto label_32ca1c;
        case 0x32ca20u: goto label_32ca20;
        case 0x32ca24u: goto label_32ca24;
        case 0x32ca28u: goto label_32ca28;
        case 0x32ca2cu: goto label_32ca2c;
        case 0x32ca30u: goto label_32ca30;
        case 0x32ca34u: goto label_32ca34;
        case 0x32ca38u: goto label_32ca38;
        case 0x32ca3cu: goto label_32ca3c;
        case 0x32ca40u: goto label_32ca40;
        case 0x32ca44u: goto label_32ca44;
        case 0x32ca48u: goto label_32ca48;
        case 0x32ca4cu: goto label_32ca4c;
        case 0x32ca50u: goto label_32ca50;
        case 0x32ca54u: goto label_32ca54;
        case 0x32ca58u: goto label_32ca58;
        case 0x32ca5cu: goto label_32ca5c;
        case 0x32ca60u: goto label_32ca60;
        case 0x32ca64u: goto label_32ca64;
        case 0x32ca68u: goto label_32ca68;
        case 0x32ca6cu: goto label_32ca6c;
        case 0x32ca70u: goto label_32ca70;
        case 0x32ca74u: goto label_32ca74;
        case 0x32ca78u: goto label_32ca78;
        case 0x32ca7cu: goto label_32ca7c;
        case 0x32ca80u: goto label_32ca80;
        case 0x32ca84u: goto label_32ca84;
        case 0x32ca88u: goto label_32ca88;
        case 0x32ca8cu: goto label_32ca8c;
        case 0x32ca90u: goto label_32ca90;
        case 0x32ca94u: goto label_32ca94;
        default: break;
    }

    ctx->pc = 0x32c538u;

label_32c538:
    // 0x32c538: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x32c538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_32c53c:
    // 0x32c53c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x32c53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_32c540:
    // 0x32c540: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x32c540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_32c544:
    // 0x32c544: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32c544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32c548:
    // 0x32c548: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x32c548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_32c54c:
    // 0x32c54c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x32c54cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_32c550:
    // 0x32c550: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x32c550u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_32c554:
    // 0x32c554: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32c554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32c558:
    // 0x32c558: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x32c558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_32c55c:
    // 0x32c55c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x32c55cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_32c560:
    // 0x32c560: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x32c560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_32c564:
    // 0x32c564: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x32c564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_32c568:
    // 0x32c568: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x32c568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_32c56c:
    // 0x32c56c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x32c56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_32c570:
    // 0x32c570: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x32c570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_32c574:
    // 0x32c574: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32c574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_32c578:
    // 0x32c578: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x32c578u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_32c57c:
    // 0x32c57c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x32c57cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_32c580:
    // 0x32c580: 0x124000ad  beqz        $s2, . + 4 + (0xAD << 2)
label_32c584:
    if (ctx->pc == 0x32C584u) {
        ctx->pc = 0x32C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C580u;
        // 0x32c584: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C588u;
        goto label_32c588;
    }
    ctx->pc = 0x32C580u;
    {
        const bool branch_taken_0x32c580 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C580u;
        // 0x32c584: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c580) {
            ctx->pc = 0x32C838u;
            goto label_32c838;
        }
    }
    ctx->pc = 0x32C588u;
label_32c588:
    // 0x32c588: 0x120000ac  beqz        $s0, . + 4 + (0xAC << 2)
label_32c58c:
    if (ctx->pc == 0x32C58Cu) {
        ctx->pc = 0x32C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C588u;
        // 0x32c58c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C590u;
        goto label_32c590;
    }
    ctx->pc = 0x32C588u;
    {
        const bool branch_taken_0x32c588 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C588u;
        // 0x32c58c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c588) {
            ctx->pc = 0x32C83Cu;
            goto label_32c83c;
        }
    }
    ctx->pc = 0x32C590u;
label_32c590:
    // 0x32c590: 0xc1036d2  jal         func_40DB48
label_32c594:
    if (ctx->pc == 0x32C594u) {
        ctx->pc = 0x32C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C590u;
        // 0x32c594: 0x8e440134  lw          $a0, 0x134($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C598u;
        goto label_32c598;
    }
    ctx->pc = 0x32C590u;
    SET_GPR_U32(ctx, 31, 0x32C598u);
    ctx->pc = 0x32C594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C590u;
    // 0x32c594: 0x8e440134  lw          $a0, 0x134($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x32C590u, 0x32C598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C598u;
label_32c598:
    // 0x32c598: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x32c598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_32c59c:
    // 0x32c59c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x32c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_32c5a0:
    // 0x32c5a0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32c5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_32c5a4:
    // 0x32c5a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_32c5a8:
    if (ctx->pc == 0x32C5A8u) {
        ctx->pc = 0x32C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C5A4u;
        // 0x32c5a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C5ACu;
        goto label_32c5ac;
    }
    ctx->pc = 0x32C5A4u;
    {
        const bool branch_taken_0x32c5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C5A4u;
        // 0x32c5a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c5a4) {
            ctx->pc = 0x32C5C0u;
            goto label_32c5c0;
        }
    }
    ctx->pc = 0x32C5ACu;
label_32c5ac:
    // 0x32c5ac: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x32c5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_32c5b0:
    // 0x32c5b0: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x32c5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_32c5b4:
    // 0x32c5b4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x32c5b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32c5b8:
    // 0x32c5b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_32c5bc:
    if (ctx->pc == 0x32C5BCu) {
        ctx->pc = 0x32C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C5B8u;
        // 0x32c5bc: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C5C0u;
        goto label_32c5c0;
    }
    ctx->pc = 0x32C5B8u;
    {
        const bool branch_taken_0x32c5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C5B8u;
        // 0x32c5bc: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c5b8) {
            ctx->pc = 0x32C5D0u;
            goto label_32c5d0;
        }
    }
    ctx->pc = 0x32C5C0u;
label_32c5c0:
    // 0x32c5c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32c5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32c5c4:
    // 0x32c5c4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x32c5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_32c5c8:
    // 0x32c5c8: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x32c5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_32c5cc:
    // 0x32c5cc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x32c5ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32c5d0:
    // 0x32c5d0: 0xc0eb7e6  jal         func_3ADF98
label_32c5d4:
    if (ctx->pc == 0x32C5D4u) {
        ctx->pc = 0x32C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C5D0u;
        // 0x32c5d4: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C5D8u;
        goto label_32c5d8;
    }
    ctx->pc = 0x32C5D0u;
    SET_GPR_U32(ctx, 31, 0x32C5D8u);
    ctx->pc = 0x32C5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C5D0u;
    // 0x32c5d4: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADF98u, 0x32C5D0u, 0x32C5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C5D8u;
label_32c5d8:
    // 0x32c5d8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x32c5d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_32c5dc:
    // 0x32c5dc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x32c5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32c5e0:
    // 0x32c5e0: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x32c5e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_32c5e4:
    // 0x32c5e4: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x32c5e4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_32c5e8:
    // 0x32c5e8: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x32c5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_32c5ec:
    // 0x32c5ec: 0x2610ce80  addiu       $s0, $s0, -0x3180
    ctx->pc = 0x32c5ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954624));
label_32c5f0:
    // 0x32c5f0: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x32c5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_32c5f4:
    // 0x32c5f4: 0xc0eb910  jal         func_3AE440
label_32c5f8:
    if (ctx->pc == 0x32C5F8u) {
        ctx->pc = 0x32C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C5F4u;
        // 0x32c5f8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C5FCu;
        goto label_32c5fc;
    }
    ctx->pc = 0x32C5F4u;
    SET_GPR_U32(ctx, 31, 0x32C5FCu);
    ctx->pc = 0x32C5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C5F4u;
    // 0x32c5f8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE440u, 0x32C5F4u, 0x32C5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C5FCu;
label_32c5fc:
    // 0x32c5fc: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x32c5fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_32c600:
    // 0x32c600: 0xc0eb8f8  jal         func_3AE3E0
label_32c604:
    if (ctx->pc == 0x32C604u) {
        ctx->pc = 0x32C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C600u;
        // 0x32c604: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C608u;
        goto label_32c608;
    }
    ctx->pc = 0x32C600u;
    SET_GPR_U32(ctx, 31, 0x32C608u);
    ctx->pc = 0x32C604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C600u;
    // 0x32c604: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE3E0u, 0x32C600u, 0x32C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C608u;
label_32c608:
    // 0x32c608: 0xc64d0008  lwc1        $f13, 0x8($s2)
    ctx->pc = 0x32c608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_32c60c:
    // 0x32c60c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x32c60cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_32c610:
    // 0x32c610: 0xc0eb910  jal         func_3AE440
label_32c614:
    if (ctx->pc == 0x32C614u) {
        ctx->pc = 0x32C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C610u;
        // 0x32c614: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C618u;
        goto label_32c618;
    }
    ctx->pc = 0x32C610u;
    SET_GPR_U32(ctx, 31, 0x32C618u);
    ctx->pc = 0x32C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C610u;
    // 0x32c614: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE440u, 0x32C610u, 0x32C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C618u;
label_32c618:
    // 0x32c618: 0xc0eb85a  jal         func_3AE168
label_32c61c:
    if (ctx->pc == 0x32C61Cu) {
        ctx->pc = 0x32C620u;
        goto label_32c620;
    }
    ctx->pc = 0x32C618u;
    SET_GPR_U32(ctx, 31, 0x32C620u);
    ctx->pc = 0x3AE168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE168u, 0x32C618u, 0x32C620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C620u;
label_32c620:
    // 0x32c620: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32c620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_32c624:
    // 0x32c624: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x32c624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_32c628:
    // 0x32c628: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32c628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32c62c:
    // 0x32c62c: 0xc0eb3c8  jal         func_3ACF20
label_32c630:
    if (ctx->pc == 0x32C630u) {
        ctx->pc = 0x32C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C62Cu;
        // 0x32c630: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C634u;
        goto label_32c634;
    }
    ctx->pc = 0x32C62Cu;
    SET_GPR_U32(ctx, 31, 0x32C634u);
    ctx->pc = 0x32C630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C62Cu;
    // 0x32c630: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACF20u, 0x32C62Cu, 0x32C634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C634u;
label_32c634:
    // 0x32c634: 0xae110728  sw          $s1, 0x728($s0)
    ctx->pc = 0x32c634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1832), GPR_U32(ctx, 17));
label_32c638:
    // 0x32c638: 0xe6000744  swc1        $f0, 0x744($s0)
    ctx->pc = 0x32c638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1860), bits); }
label_32c63c:
    // 0x32c63c: 0xe6150740  swc1        $f21, 0x740($s0)
    ctx->pc = 0x32c63cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1856), bits); }
label_32c640:
    // 0x32c640: 0xc1111f8  jal         func_4447E0
label_32c644:
    if (ctx->pc == 0x32C644u) {
        ctx->pc = 0x32C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C640u;
        // 0x32c644: 0xae12072c  sw          $s2, 0x72C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1836), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C648u;
        goto label_32c648;
    }
    ctx->pc = 0x32C640u;
    SET_GPR_U32(ctx, 31, 0x32C648u);
    ctx->pc = 0x32C644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C640u;
    // 0x32c644: 0xae12072c  sw          $s2, 0x72C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1836), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4447E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4447E0u, 0x32C640u, 0x32C648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C648u;
label_32c648:
    // 0x32c648: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x32c648u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32c64c:
    // 0x32c64c: 0x8e030504  lw          $v1, 0x504($s0)
    ctx->pc = 0x32c64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1284)));
label_32c650:
    // 0x32c650: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x32c650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_32c654:
    // 0x32c654: 0x2752021  addu        $a0, $s3, $s5
    ctx->pc = 0x32c654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_32c658:
    // 0x32c658: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x32c658u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_32c65c:
    // 0x32c65c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32c65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32c660:
    // 0x32c660: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x32c660u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_32c664:
    // 0x32c664: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x32c664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_32c668:
    // 0x32c668: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x32c668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_32c66c:
    // 0x32c66c: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x32c66cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_32c670:
    // 0x32c670: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x32c670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_32c674:
    // 0x32c674: 0xae130734  sw          $s3, 0x734($s0)
    ctx->pc = 0x32c674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1844), GPR_U32(ctx, 19));
label_32c678:
    // 0x32c678: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x32c678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_32c67c:
    // 0x32c67c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32c67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_32c680:
    // 0x32c680: 0x18600055  blez        $v1, . + 4 + (0x55 << 2)
label_32c684:
    if (ctx->pc == 0x32C684u) {
        ctx->pc = 0x32C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C680u;
        // 0x32c684: 0xe6150748  swc1        $f21, 0x748($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1864), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C688u;
        goto label_32c688;
    }
    ctx->pc = 0x32C680u;
    {
        const bool branch_taken_0x32c680 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x32C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C680u;
        // 0x32c684: 0xe6150748  swc1        $f21, 0x748($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1864), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c680) {
            ctx->pc = 0x32C7D8u;
            goto label_32c7d8;
        }
    }
    ctx->pc = 0x32C688u;
label_32c688:
    // 0x32c688: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x32c688u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32c68c:
    // 0x32c68c: 0x265e0024  addiu       $fp, $s2, 0x24
    ctx->pc = 0x32c68cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_32c690:
    // 0x32c690: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x32c690u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32c694:
    // 0x32c694: 0x0  nop
    ctx->pc = 0x32c694u;
    // NOP
label_32c698:
    // 0x32c698: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x32c698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
label_32c69c:
    // 0x32c69c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_32c6a0:
    if (ctx->pc == 0x32C6A0u) {
        ctx->pc = 0x32C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C69Cu;
        // 0x32c6a0: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C6A4u;
        goto label_32c6a4;
    }
    ctx->pc = 0x32C69Cu;
    {
        const bool branch_taken_0x32c69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C69Cu;
        // 0x32c6a0: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c69c) {
            ctx->pc = 0x32C6D0u;
            goto label_32c6d0;
        }
    }
    ctx->pc = 0x32C6A4u;
label_32c6a4:
    // 0x32c6a4: 0x8e420124  lw          $v0, 0x124($s2)
    ctx->pc = 0x32c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
label_32c6a8:
    // 0x32c6a8: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x32c6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_32c6ac:
    // 0x32c6ac: 0x482000a  bltzl       $a0, . + 4 + (0xA << 2)
label_32c6b0:
    if (ctx->pc == 0x32C6B0u) {
        ctx->pc = 0x32C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6ACu;
        // 0x32c6b0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C6B4u;
        goto label_32c6b4;
    }
    ctx->pc = 0x32C6ACu;
    {
        const bool branch_taken_0x32c6ac = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x32c6ac) {
            ctx->pc = 0x32C6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C6ACu;
            // 0x32c6b0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C6D8u;
            goto label_32c6d8;
        }
    }
    ctx->pc = 0x32C6B4u;
label_32c6b4:
    // 0x32c6b4: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x32c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
label_32c6b8:
    // 0x32c6b8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x32c6b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32c6bc:
    // 0x32c6bc: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
label_32c6c0:
    if (ctx->pc == 0x32C6C0u) {
        ctx->pc = 0x32C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6BCu;
        // 0x32c6c0: 0x8e43012c  lw          $v1, 0x12C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C6C4u;
        goto label_32c6c4;
    }
    ctx->pc = 0x32C6BCu;
    {
        const bool branch_taken_0x32c6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c6bc) {
            ctx->pc = 0x32C6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C6BCu;
            // 0x32c6c0: 0x8e43012c  lw          $v1, 0x12C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C744u;
            goto label_32c744;
        }
    }
    ctx->pc = 0x32C6C4u;
label_32c6c4:
    // 0x32c6c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_32c6c8:
    if (ctx->pc == 0x32C6C8u) {
        ctx->pc = 0x32C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6C4u;
        // 0x32c6c8: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C6CCu;
        goto label_32c6cc;
    }
    ctx->pc = 0x32C6C4u;
    {
        const bool branch_taken_0x32c6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6C4u;
        // 0x32c6c8: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c6c4) {
            ctx->pc = 0x32C6D8u;
            goto label_32c6d8;
        }
    }
    ctx->pc = 0x32C6CCu;
label_32c6cc:
    // 0x32c6cc: 0x0  nop
    ctx->pc = 0x32c6ccu;
    // NOP
label_32c6d0:
    // 0x32c6d0: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x32c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_32c6d4:
    // 0x32c6d4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x32c6d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_32c6d8:
    // 0x32c6d8: 0x4800032  bltz        $a0, . + 4 + (0x32 << 2)
label_32c6dc:
    if (ctx->pc == 0x32C6DCu) {
        ctx->pc = 0x32C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6D8u;
        // 0x32c6dc: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C6E0u;
        goto label_32c6e0;
    }
    ctx->pc = 0x32C6D8u;
    {
        const bool branch_taken_0x32c6d8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x32C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6D8u;
        // 0x32c6dc: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c6d8) {
            ctx->pc = 0x32C7A4u;
            goto label_32c7a4;
        }
    }
    ctx->pc = 0x32C6E0u;
label_32c6e0:
    // 0x32c6e0: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x32c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_32c6e4:
    // 0x32c6e4: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x32c6e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_32c6e8:
    // 0x32c6e8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x32c6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32c6ec:
    // 0x32c6ec: 0x5065002a  beql        $v1, $a1, . + 4 + (0x2A << 2)
label_32c6f0:
    if (ctx->pc == 0x32C6F0u) {
        ctx->pc = 0x32C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6ECu;
        // 0x32c6f0: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C6F4u;
        goto label_32c6f4;
    }
    ctx->pc = 0x32C6ECu;
    {
        const bool branch_taken_0x32c6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x32c6ec) {
            ctx->pc = 0x32C6F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C6ECu;
            // 0x32c6f0: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C798u;
            goto label_32c798;
        }
    }
    ctx->pc = 0x32C6F4u;
label_32c6f4:
    // 0x32c6f4: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
label_32c6f8:
    if (ctx->pc == 0x32C6F8u) {
        ctx->pc = 0x32C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6F4u;
        // 0x32c6f8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C6FCu;
        goto label_32c6fc;
    }
    ctx->pc = 0x32C6F4u;
    {
        const bool branch_taken_0x32c6f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6F4u;
        // 0x32c6f8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c6f4) {
            ctx->pc = 0x32C758u;
            goto label_32c758;
        }
    }
    ctx->pc = 0x32C6FCu;
label_32c6fc:
    // 0x32c6fc: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x32c6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_32c700:
    // 0x32c700: 0x2e2001a  div         $zero, $s7, $v0
    ctx->pc = 0x32c700u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 23);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_32c704:
    // 0x32c704: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_32c708:
    if (ctx->pc == 0x32C708u) {
        ctx->pc = 0x32C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C704u;
        // 0x32c708: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C70Cu;
        goto label_32c70c;
    }
    ctx->pc = 0x32C704u;
    {
        const bool branch_taken_0x32c704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c704) {
            ctx->pc = 0x32C708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C704u;
            // 0x32c708: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C70Cu;
            goto label_32c70c;
        }
    }
    ctx->pc = 0x32C70Cu;
label_32c70c:
    // 0x32c70c: 0x2490ce80  addiu       $s0, $a0, -0x3180
    ctx->pc = 0x32c70cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954624));
label_32c710:
    // 0x32c710: 0x2685000c  addiu       $a1, $s4, 0xC
    ctx->pc = 0x32c710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_32c714:
    // 0x32c714: 0xae170764  sw          $s7, 0x764($s0)
    ctx->pc = 0x32c714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1892), GPR_U32(ctx, 23));
label_32c718:
    // 0x32c718: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32c718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32c71c:
    // 0x32c71c: 0x8e0407e8  lw          $a0, 0x7E8($s0)
    ctx->pc = 0x32c71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2024)));
label_32c720:
    // 0x32c720: 0x96020764  lhu         $v0, 0x764($s0)
    ctx->pc = 0x32c720u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1892)));
label_32c724:
    // 0x32c724: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x32c724u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_32c728:
    // 0x32c728: 0x1812  mflo        $v1
    ctx->pc = 0x32c728u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_32c72c:
    // 0x32c72c: 0xc111718  jal         func_445C60
label_32c730:
    if (ctx->pc == 0x32C730u) {
        ctx->pc = 0x32C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C72Cu;
        // 0x32c730: 0xae030768  sw          $v1, 0x768($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1896), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C734u;
        goto label_32c734;
    }
    ctx->pc = 0x32C72Cu;
    SET_GPR_U32(ctx, 31, 0x32C734u);
    ctx->pc = 0x32C730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C72Cu;
    // 0x32c730: 0xae030768  sw          $v1, 0x768($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x32C72Cu, 0x32C734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C734u;
label_32c734:
    // 0x32c734: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_32c738:
    if (ctx->pc == 0x32C738u) {
        ctx->pc = 0x32C738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C734u;
        // 0x32c738: 0xae130734  sw          $s3, 0x734($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1844), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C73Cu;
        goto label_32c73c;
    }
    ctx->pc = 0x32C734u;
    {
        const bool branch_taken_0x32c734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c734) {
            ctx->pc = 0x32C738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C734u;
            // 0x32c738: 0xae130734  sw          $s3, 0x734($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1844), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C750u;
            goto label_32c750;
        }
    }
    ctx->pc = 0x32C73Cu;
label_32c73c:
    // 0x32c73c: 0x1000003f  b           . + 4 + (0x3F << 2)
label_32c740:
    if (ctx->pc == 0x32C740u) {
        ctx->pc = 0x32C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C73Cu;
        // 0x32c740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C744u;
        goto label_32c744;
    }
    ctx->pc = 0x32C73Cu;
    {
        const bool branch_taken_0x32c73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C73Cu;
        // 0x32c740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c73c) {
            ctx->pc = 0x32C83Cu;
            goto label_32c83c;
        }
    }
    ctx->pc = 0x32C744u;
label_32c744:
    // 0x32c744: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x32c744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_32c748:
    // 0x32c748: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
label_32c74c:
    if (ctx->pc == 0x32C74Cu) {
        ctx->pc = 0x32C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C748u;
        // 0x32c74c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C750u;
        goto label_32c750;
    }
    ctx->pc = 0x32C748u;
    {
        const bool branch_taken_0x32c748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C748u;
        // 0x32c74c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c748) {
            ctx->pc = 0x32C6D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32c6d4;
        }
    }
    ctx->pc = 0x32C750u;
label_32c750:
    // 0x32c750: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x32c750u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32c754:
    // 0x32c754: 0xe6150748  swc1        $f21, 0x748($s0)
    ctx->pc = 0x32c754u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1864), bits); }
label_32c758:
    // 0x32c758: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x32c758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_32c75c:
    // 0x32c75c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x32c75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32c760:
    // 0x32c760: 0x24a5e880  addiu       $a1, $a1, -0x1780
    ctx->pc = 0x32c760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
label_32c764:
    // 0x32c764: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x32c764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_32c768:
    // 0x32c768: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x32c768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_32c76c:
    // 0x32c76c: 0x40f809  jalr        $v0
label_32c770:
    if (ctx->pc == 0x32C770u) {
        ctx->pc = 0x32C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C76Cu;
        // 0x32c770: 0x90650050  lbu         $a1, 0x50($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C774u;
        goto label_32c774;
    }
    ctx->pc = 0x32C76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C774u);
        ctx->pc = 0x32C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C76Cu;
        // 0x32c770: 0x90650050  lbu         $a1, 0x50($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C76Cu, 0x32C774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C774u;
label_32c774:
    // 0x32c774: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x32c774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32c778:
    // 0x32c778: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x32c778u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_32c77c:
    // 0x32c77c: 0x24c6e880  addiu       $a2, $a2, -0x1780
    ctx->pc = 0x32c77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961280));
label_32c780:
    // 0x32c780: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32c780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32c784:
    // 0x32c784: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x32c784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_32c788:
    // 0x32c788: 0x40f809  jalr        $v0
label_32c78c:
    if (ctx->pc == 0x32C78Cu) {
        ctx->pc = 0x32C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C788u;
        // 0x32c78c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C790u;
        goto label_32c790;
    }
    ctx->pc = 0x32C788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C790u);
        ctx->pc = 0x32C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C788u;
        // 0x32c78c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C788u, 0x32C790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C790u;
label_32c790:
    // 0x32c790: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x32c790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32c794:
    // 0x32c794: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x32c794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32c798:
    // 0x32c798: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x32c798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32c79c:
    // 0x32c79c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32c79cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_32c7a0:
    // 0x32c7a0: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x32c7a0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_32c7a4:
    // 0x32c7a4: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x32c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_32c7a8:
    // 0x32c7a8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x32c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_32c7ac:
    // 0x32c7ac: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x32c7acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_32c7b0:
    // 0x32c7b0: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x32c7b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_32c7b4:
    // 0x32c7b4: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x32c7b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_32c7b8:
    // 0x32c7b8: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x32c7b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_32c7bc:
    // 0x32c7bc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x32c7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_32c7c0:
    // 0x32c7c0: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x32c7c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_32c7c4:
    // 0x32c7c4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x32c7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_32c7c8:
    // 0x32c7c8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x32c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_32c7cc:
    // 0x32c7cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32c7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_32c7d0:
    // 0x32c7d0: 0x1c60ffb1  bgtz        $v1, . + 4 + (-0x4F << 2)
label_32c7d4:
    if (ctx->pc == 0x32C7D4u) {
        ctx->pc = 0x32C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C7D0u;
        // 0x32c7d4: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C7D8u;
        goto label_32c7d8;
    }
    ctx->pc = 0x32C7D0u;
    {
        const bool branch_taken_0x32c7d0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x32C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C7D0u;
        // 0x32c7d4: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c7d0) {
            ctx->pc = 0x32C698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32c698;
        }
    }
    ctx->pc = 0x32C7D8u;
label_32c7d8:
    // 0x32c7d8: 0x1ae00011  blez        $s7, . + 4 + (0x11 << 2)
label_32c7dc:
    if (ctx->pc == 0x32C7DCu) {
        ctx->pc = 0x32C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C7D8u;
        // 0x32c7dc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C7E0u;
        goto label_32c7e0;
    }
    ctx->pc = 0x32C7D8u;
    {
        const bool branch_taken_0x32c7d8 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x32C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C7D8u;
        // 0x32c7dc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c7d8) {
            ctx->pc = 0x32C820u;
            goto label_32c820;
        }
    }
    ctx->pc = 0x32C7E0u;
label_32c7e0:
    // 0x32c7e0: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x32c7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_32c7e4:
    // 0x32c7e4: 0x2e2001a  div         $zero, $s7, $v0
    ctx->pc = 0x32c7e4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 23);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_32c7e8:
    // 0x32c7e8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_32c7ec:
    if (ctx->pc == 0x32C7ECu) {
        ctx->pc = 0x32C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C7E8u;
        // 0x32c7ec: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C7F0u;
        goto label_32c7f0;
    }
    ctx->pc = 0x32C7E8u;
    {
        const bool branch_taken_0x32c7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c7e8) {
            ctx->pc = 0x32C7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C7E8u;
            // 0x32c7ec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C7F0u;
            goto label_32c7f0;
        }
    }
    ctx->pc = 0x32C7F0u;
label_32c7f0:
    // 0x32c7f0: 0x2483ce80  addiu       $v1, $a0, -0x3180
    ctx->pc = 0x32c7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954624));
label_32c7f4:
    // 0x32c7f4: 0x2685000c  addiu       $a1, $s4, 0xC
    ctx->pc = 0x32c7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_32c7f8:
    // 0x32c7f8: 0xac770764  sw          $s7, 0x764($v1)
    ctx->pc = 0x32c7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1892), GPR_U32(ctx, 23));
label_32c7fc:
    // 0x32c7fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32c7fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32c800:
    // 0x32c800: 0x8c6407e8  lw          $a0, 0x7E8($v1)
    ctx->pc = 0x32c800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2024)));
label_32c804:
    // 0x32c804: 0x94620764  lhu         $v0, 0x764($v1)
    ctx->pc = 0x32c804u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1892)));
label_32c808:
    // 0x32c808: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x32c808u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_32c80c:
    // 0x32c80c: 0x3812  mflo        $a3
    ctx->pc = 0x32c80cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_32c810:
    // 0x32c810: 0xc111718  jal         func_445C60
label_32c814:
    if (ctx->pc == 0x32C814u) {
        ctx->pc = 0x32C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C810u;
        // 0x32c814: 0xac670768  sw          $a3, 0x768($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1896), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C818u;
        goto label_32c818;
    }
    ctx->pc = 0x32C810u;
    SET_GPR_U32(ctx, 31, 0x32C818u);
    ctx->pc = 0x32C814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C810u;
    // 0x32c814: 0xac670768  sw          $a3, 0x768($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 1896), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x32C810u, 0x32C818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C818u;
label_32c818:
    // 0x32c818: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_32c81c:
    if (ctx->pc == 0x32C81Cu) {
        ctx->pc = 0x32C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C818u;
        // 0x32c81c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C820u;
        goto label_32c820;
    }
    ctx->pc = 0x32C818u;
    {
        const bool branch_taken_0x32c818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C818u;
        // 0x32c81c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c818) {
            ctx->pc = 0x32C83Cu;
            goto label_32c83c;
        }
    }
    ctx->pc = 0x32C820u;
label_32c820:
    // 0x32c820: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x32c820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32c824:
    // 0x32c824: 0x4616a842  mul.s       $f1, $f21, $f22
    ctx->pc = 0x32c824u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
label_32c828:
    // 0x32c828: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x32c828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32c82c:
    // 0x32c82c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32c82cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_32c830:
    // 0x32c830: 0xc0eb8ec  jal         func_3AE3B0
label_32c834:
    if (ctx->pc == 0x32C834u) {
        ctx->pc = 0x32C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C830u;
        // 0x32c834: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C838u;
        goto label_32c838;
    }
    ctx->pc = 0x32C830u;
    SET_GPR_U32(ctx, 31, 0x32C838u);
    ctx->pc = 0x32C834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C830u;
    // 0x32c834: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE3B0u, 0x32C830u, 0x32C838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C838u;
label_32c838:
    // 0x32c838: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x32c838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32c83c:
    // 0x32c83c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x32c83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_32c840:
    // 0x32c840: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x32c840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_32c844:
    // 0x32c844: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x32c844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_32c848:
    // 0x32c848: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x32c848u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_32c84c:
    // 0x32c84c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x32c84cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_32c850:
    // 0x32c850: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x32c850u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32c854:
    // 0x32c854: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x32c854u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32c858:
    // 0x32c858: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x32c858u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32c85c:
    // 0x32c85c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x32c85cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32c860:
    // 0x32c860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32c860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32c864:
    // 0x32c864: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x32c864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_32c868:
    // 0x32c868: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x32c868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_32c86c:
    // 0x32c86c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x32c86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_32c870:
    // 0x32c870: 0x3e00008  jr          $ra
label_32c874:
    if (ctx->pc == 0x32C874u) {
        ctx->pc = 0x32C874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C870u;
        // 0x32c874: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C878u;
        goto label_32c878;
    }
    ctx->pc = 0x32C870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C870u;
        // 0x32c874: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C878u;
label_32c878:
    // 0x32c878: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32c878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_32c87c:
    // 0x32c87c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x32c87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_32c880:
    // 0x32c880: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x32c880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_32c884:
    // 0x32c884: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32c884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32c888:
    // 0x32c888: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32c888u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32c88c:
    // 0x32c88c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x32c88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_32c890:
    // 0x32c890: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32c890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_32c894:
    // 0x32c894: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x32c894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_32c898:
    // 0x32c898: 0xc10a322  jal         func_428C88
label_32c89c:
    if (ctx->pc == 0x32C89Cu) {
        ctx->pc = 0x32C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C898u;
        // 0x32c89c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C8A0u;
        goto label_32c8a0;
    }
    ctx->pc = 0x32C898u;
    SET_GPR_U32(ctx, 31, 0x32C8A0u);
    ctx->pc = 0x32C89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C898u;
    // 0x32c89c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x32C898u, 0x32C8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C8A0u;
label_32c8a0:
    // 0x32c8a0: 0x8f90be20  lw          $s0, -0x41E0($gp)
    ctx->pc = 0x32c8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_32c8a4:
    // 0x32c8a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32c8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_32c8a8:
    // 0x32c8a8: 0x34630009  ori         $v1, $v1, 0x9
    ctx->pc = 0x32c8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9);
label_32c8ac:
    // 0x32c8ac: 0x3c026c09  lui         $v0, 0x6C09
    ctx->pc = 0x32c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27657 << 16));
label_32c8b0:
    // 0x32c8b0: 0x344203e3  ori         $v0, $v0, 0x3E3
    ctx->pc = 0x32c8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)995);
label_32c8b4:
    // 0x32c8b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32c8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_32c8b8:
    // 0x32c8b8: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x32c8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_32c8bc:
    // 0x32c8bc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32c8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_32c8c0:
    // 0x32c8c0: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x32c8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
label_32c8c4:
    // 0x32c8c4: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x32c8c4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_32c8c8:
    // 0x32c8c8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x32c8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_32c8cc:
    // 0x32c8cc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x32c8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_32c8d0:
    // 0x32c8d0: 0x6a42001f  ldl         $v0, 0x1F($s2)
    ctx->pc = 0x32c8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_32c8d4:
    // 0x32c8d4: 0x6e420018  ldr         $v0, 0x18($s2)
    ctx->pc = 0x32c8d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_32c8d8:
    // 0x32c8d8: 0x6a430027  ldl         $v1, 0x27($s2)
    ctx->pc = 0x32c8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_32c8dc:
    // 0x32c8dc: 0x6e430020  ldr         $v1, 0x20($s2)
    ctx->pc = 0x32c8dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_32c8e0:
    // 0x32c8e0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x32c8e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_32c8e4:
    // 0x32c8e4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x32c8e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_32c8e8:
    // 0x32c8e8: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x32c8e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_32c8ec:
    // 0x32c8ec: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x32c8ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_32c8f0:
    // 0x32c8f0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x32c8f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32c8f4:
    // 0x32c8f4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x32c8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_32c8f8:
    // 0x32c8f8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x32c8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_32c8fc:
    // 0x32c8fc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x32c8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32c900:
    // 0x32c900: 0x68a6001f  ldl         $a2, 0x1F($a1)
    ctx->pc = 0x32c900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_32c904:
    // 0x32c904: 0x6ca60018  ldr         $a2, 0x18($a1)
    ctx->pc = 0x32c904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_32c908:
    // 0x32c908: 0x68a70027  ldl         $a3, 0x27($a1)
    ctx->pc = 0x32c908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_32c90c:
    // 0x32c90c: 0x6ca70020  ldr         $a3, 0x20($a1)
    ctx->pc = 0x32c90cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_32c910:
    // 0x32c910: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x32c910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_32c914:
    // 0x32c914: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x32c914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_32c918:
    // 0x32c918: 0xb3a7000f  sdl         $a3, 0xF($sp)
    ctx->pc = 0x32c918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_32c91c:
    // 0x32c91c: 0xb7a70008  sdr         $a3, 0x8($sp)
    ctx->pc = 0x32c91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_32c920:
    // 0x32c920: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x32c920u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32c924:
    // 0x32c924: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x32c924u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_32c928:
    // 0x32c928: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x32c928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_32c92c:
    // 0x32c92c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x32c92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32c930:
    // 0x32c930: 0x6864001f  ldl         $a0, 0x1F($v1)
    ctx->pc = 0x32c930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_32c934:
    // 0x32c934: 0x6c640018  ldr         $a0, 0x18($v1)
    ctx->pc = 0x32c934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_32c938:
    // 0x32c938: 0x68660027  ldl         $a2, 0x27($v1)
    ctx->pc = 0x32c938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_32c93c:
    // 0x32c93c: 0x6c660020  ldr         $a2, 0x20($v1)
    ctx->pc = 0x32c93cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_32c940:
    // 0x32c940: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x32c940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_32c944:
    // 0x32c944: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x32c944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_32c948:
    // 0x32c948: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x32c948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_32c94c:
    // 0x32c94c: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x32c94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_32c950:
    // 0x32c950: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x32c950u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32c954:
    // 0x32c954: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x32c954u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_32c958:
    // 0x32c958: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x32c958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_32c95c:
    // 0x32c95c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x32c95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_32c960:
    // 0x32c960: 0x6864001f  ldl         $a0, 0x1F($v1)
    ctx->pc = 0x32c960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_32c964:
    // 0x32c964: 0x6c640018  ldr         $a0, 0x18($v1)
    ctx->pc = 0x32c964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_32c968:
    // 0x32c968: 0x68660027  ldl         $a2, 0x27($v1)
    ctx->pc = 0x32c968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_32c96c:
    // 0x32c96c: 0x6c660020  ldr         $a2, 0x20($v1)
    ctx->pc = 0x32c96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_32c970:
    // 0x32c970: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x32c970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_32c974:
    // 0x32c974: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x32c974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_32c978:
    // 0x32c978: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x32c978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_32c97c:
    // 0x32c97c: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x32c97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_32c980:
    // 0x32c980: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x32c980u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32c984:
    // 0x32c984: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x32c984u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_32c988:
    // 0x32c988: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x32c988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_32c98c:
    // 0x32c98c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x32c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_32c990:
    // 0x32c990: 0x6864001f  ldl         $a0, 0x1F($v1)
    ctx->pc = 0x32c990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_32c994:
    // 0x32c994: 0x6c640018  ldr         $a0, 0x18($v1)
    ctx->pc = 0x32c994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_32c998:
    // 0x32c998: 0x68660027  ldl         $a2, 0x27($v1)
    ctx->pc = 0x32c998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_32c99c:
    // 0x32c99c: 0x6c660020  ldr         $a2, 0x20($v1)
    ctx->pc = 0x32c99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_32c9a0:
    // 0x32c9a0: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x32c9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_32c9a4:
    // 0x32c9a4: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x32c9a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_32c9a8:
    // 0x32c9a8: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x32c9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_32c9ac:
    // 0x32c9ac: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x32c9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_32c9b0:
    // 0x32c9b0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x32c9b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32c9b4:
    // 0x32c9b4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x32c9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_32c9b8:
    // 0x32c9b8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x32c9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_32c9bc:
    // 0x32c9bc: 0xc106784  jal         func_419E10
label_32c9c0:
    if (ctx->pc == 0x32C9C0u) {
        ctx->pc = 0x32C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C9BCu;
        // 0x32c9c0: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C9C4u;
        goto label_32c9c4;
    }
    ctx->pc = 0x32C9BCu;
    SET_GPR_U32(ctx, 31, 0x32C9C4u);
    ctx->pc = 0x32C9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C9BCu;
    // 0x32c9c0: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x32C9BCu, 0x32C9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C9C4u;
label_32c9c4:
    // 0x32c9c4: 0x68430027  ldl         $v1, 0x27($v0)
    ctx->pc = 0x32c9c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_32c9c8:
    // 0x32c9c8: 0x6c430020  ldr         $v1, 0x20($v0)
    ctx->pc = 0x32c9c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_32c9cc:
    // 0x32c9cc: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x32c9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_32c9d0:
    // 0x32c9d0: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x32c9d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_32c9d4:
    // 0x32c9d4: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x32c9d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_32c9d8:
    // 0x32c9d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x32c9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_32c9dc:
    // 0x32c9dc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x32c9dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32c9e0:
    // 0x32c9e0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x32c9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_32c9e4:
    // 0x32c9e4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x32c9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_32c9e8:
    // 0x32c9e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32c9ec:
    // 0x32c9ec: 0xc106784  jal         func_419E10
label_32c9f0:
    if (ctx->pc == 0x32C9F0u) {
        ctx->pc = 0x32C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C9ECu;
        // 0x32c9f0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C9F4u;
        goto label_32c9f4;
    }
    ctx->pc = 0x32C9ECu;
    SET_GPR_U32(ctx, 31, 0x32C9F4u);
    ctx->pc = 0x32C9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C9ECu;
    // 0x32c9f0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x32C9ECu, 0x32C9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C9F4u;
label_32c9f4:
    // 0x32c9f4: 0x68470027  ldl         $a3, 0x27($v0)
    ctx->pc = 0x32c9f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_32c9f8:
    // 0x32c9f8: 0x6c470020  ldr         $a3, 0x20($v0)
    ctx->pc = 0x32c9f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_32c9fc:
    // 0x32c9fc: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x32c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_32ca00:
    // 0x32ca00: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x32ca00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_32ca04:
    // 0x32ca04: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x32ca04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_32ca08:
    // 0x32ca08: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x32ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_32ca0c:
    // 0x32ca0c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x32ca0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32ca10:
    // 0x32ca10: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x32ca10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_32ca14:
    // 0x32ca14: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x32ca14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_32ca18:
    // 0x32ca18: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x32ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_32ca1c:
    // 0x32ca1c: 0xc106784  jal         func_419E10
label_32ca20:
    if (ctx->pc == 0x32CA20u) {
        ctx->pc = 0x32CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CA1Cu;
        // 0x32ca20: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CA24u;
        goto label_32ca24;
    }
    ctx->pc = 0x32CA1Cu;
    SET_GPR_U32(ctx, 31, 0x32CA24u);
    ctx->pc = 0x32CA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CA1Cu;
    // 0x32ca20: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x32CA1Cu, 0x32CA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CA24u;
label_32ca24:
    // 0x32ca24: 0x68460027  ldl         $a2, 0x27($v0)
    ctx->pc = 0x32ca24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_32ca28:
    // 0x32ca28: 0x6c460020  ldr         $a2, 0x20($v0)
    ctx->pc = 0x32ca28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_32ca2c:
    // 0x32ca2c: 0x8c470028  lw          $a3, 0x28($v0)
    ctx->pc = 0x32ca2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_32ca30:
    // 0x32ca30: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x32ca30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_32ca34:
    // 0x32ca34: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x32ca34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_32ca38:
    // 0x32ca38: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x32ca38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
label_32ca3c:
    // 0x32ca3c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x32ca3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32ca40:
    // 0x32ca40: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x32ca40u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_32ca44:
    // 0x32ca44: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x32ca44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_32ca48:
    // 0x32ca48: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x32ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_32ca4c:
    // 0x32ca4c: 0xc106784  jal         func_419E10
label_32ca50:
    if (ctx->pc == 0x32CA50u) {
        ctx->pc = 0x32CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CA4Cu;
        // 0x32ca50: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CA54u;
        goto label_32ca54;
    }
    ctx->pc = 0x32CA4Cu;
    SET_GPR_U32(ctx, 31, 0x32CA54u);
    ctx->pc = 0x32CA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CA4Cu;
    // 0x32ca50: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x32CA4Cu, 0x32CA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CA54u;
label_32ca54:
    // 0x32ca54: 0x68450027  ldl         $a1, 0x27($v0)
    ctx->pc = 0x32ca54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_32ca58:
    // 0x32ca58: 0x6c450020  ldr         $a1, 0x20($v0)
    ctx->pc = 0x32ca58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_32ca5c:
    // 0x32ca5c: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x32ca5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_32ca60:
    // 0x32ca60: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x32ca60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_32ca64:
    // 0x32ca64: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x32ca64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_32ca68:
    // 0x32ca68: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x32ca68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
label_32ca6c:
    // 0x32ca6c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x32ca6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32ca70:
    // 0x32ca70: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x32ca70u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_32ca74:
    // 0x32ca74: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x32ca74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_32ca78:
    // 0x32ca78: 0xaf90be20  sw          $s0, -0x41E0($gp)
    ctx->pc = 0x32ca78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 16));
label_32ca7c:
    // 0x32ca7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32ca80:
    // 0x32ca80: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x32ca80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32ca84:
    // 0x32ca84: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x32ca84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32ca88:
    // 0x32ca88: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x32ca88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32ca8c:
    // 0x32ca8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32ca8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32ca90:
    // 0x32ca90: 0x3e00008  jr          $ra
label_32ca94:
    if (ctx->pc == 0x32CA94u) {
        ctx->pc = 0x32CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CA90u;
        // 0x32ca94: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CA98u;
        goto label_fallthrough_0x32ca90;
    }
    ctx->pc = 0x32CA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CA90u;
        // 0x32ca94: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x32ca90:
    ctx->pc = 0x32CA98u;
}
