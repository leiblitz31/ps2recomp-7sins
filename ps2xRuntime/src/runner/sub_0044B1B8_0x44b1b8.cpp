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

// Function: sub_0044B1B8
// Address: 0x44b1b8 - 0x44b760
void sub_0044B1B8_0x44b1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044B1B8_0x44b1b8");
#endif

    switch (ctx->pc) {
        case 0x44b1b8u: goto label_44b1b8;
        case 0x44b1bcu: goto label_44b1bc;
        case 0x44b1c0u: goto label_44b1c0;
        case 0x44b1c4u: goto label_44b1c4;
        case 0x44b1c8u: goto label_44b1c8;
        case 0x44b1ccu: goto label_44b1cc;
        case 0x44b1d0u: goto label_44b1d0;
        case 0x44b1d4u: goto label_44b1d4;
        case 0x44b1d8u: goto label_44b1d8;
        case 0x44b1dcu: goto label_44b1dc;
        case 0x44b1e0u: goto label_44b1e0;
        case 0x44b1e4u: goto label_44b1e4;
        case 0x44b1e8u: goto label_44b1e8;
        case 0x44b1ecu: goto label_44b1ec;
        case 0x44b1f0u: goto label_44b1f0;
        case 0x44b1f4u: goto label_44b1f4;
        case 0x44b1f8u: goto label_44b1f8;
        case 0x44b1fcu: goto label_44b1fc;
        case 0x44b200u: goto label_44b200;
        case 0x44b204u: goto label_44b204;
        case 0x44b208u: goto label_44b208;
        case 0x44b20cu: goto label_44b20c;
        case 0x44b210u: goto label_44b210;
        case 0x44b214u: goto label_44b214;
        case 0x44b218u: goto label_44b218;
        case 0x44b21cu: goto label_44b21c;
        case 0x44b220u: goto label_44b220;
        case 0x44b224u: goto label_44b224;
        case 0x44b228u: goto label_44b228;
        case 0x44b22cu: goto label_44b22c;
        case 0x44b230u: goto label_44b230;
        case 0x44b234u: goto label_44b234;
        case 0x44b238u: goto label_44b238;
        case 0x44b23cu: goto label_44b23c;
        case 0x44b240u: goto label_44b240;
        case 0x44b244u: goto label_44b244;
        case 0x44b248u: goto label_44b248;
        case 0x44b24cu: goto label_44b24c;
        case 0x44b250u: goto label_44b250;
        case 0x44b254u: goto label_44b254;
        case 0x44b258u: goto label_44b258;
        case 0x44b25cu: goto label_44b25c;
        case 0x44b260u: goto label_44b260;
        case 0x44b264u: goto label_44b264;
        case 0x44b268u: goto label_44b268;
        case 0x44b26cu: goto label_44b26c;
        case 0x44b270u: goto label_44b270;
        case 0x44b274u: goto label_44b274;
        case 0x44b278u: goto label_44b278;
        case 0x44b27cu: goto label_44b27c;
        case 0x44b280u: goto label_44b280;
        case 0x44b284u: goto label_44b284;
        case 0x44b288u: goto label_44b288;
        case 0x44b28cu: goto label_44b28c;
        case 0x44b290u: goto label_44b290;
        case 0x44b294u: goto label_44b294;
        case 0x44b298u: goto label_44b298;
        case 0x44b29cu: goto label_44b29c;
        case 0x44b2a0u: goto label_44b2a0;
        case 0x44b2a4u: goto label_44b2a4;
        case 0x44b2a8u: goto label_44b2a8;
        case 0x44b2acu: goto label_44b2ac;
        case 0x44b2b0u: goto label_44b2b0;
        case 0x44b2b4u: goto label_44b2b4;
        case 0x44b2b8u: goto label_44b2b8;
        case 0x44b2bcu: goto label_44b2bc;
        case 0x44b2c0u: goto label_44b2c0;
        case 0x44b2c4u: goto label_44b2c4;
        case 0x44b2c8u: goto label_44b2c8;
        case 0x44b2ccu: goto label_44b2cc;
        case 0x44b2d0u: goto label_44b2d0;
        case 0x44b2d4u: goto label_44b2d4;
        case 0x44b2d8u: goto label_44b2d8;
        case 0x44b2dcu: goto label_44b2dc;
        case 0x44b2e0u: goto label_44b2e0;
        case 0x44b2e4u: goto label_44b2e4;
        case 0x44b2e8u: goto label_44b2e8;
        case 0x44b2ecu: goto label_44b2ec;
        case 0x44b2f0u: goto label_44b2f0;
        case 0x44b2f4u: goto label_44b2f4;
        case 0x44b2f8u: goto label_44b2f8;
        case 0x44b2fcu: goto label_44b2fc;
        case 0x44b300u: goto label_44b300;
        case 0x44b304u: goto label_44b304;
        case 0x44b308u: goto label_44b308;
        case 0x44b30cu: goto label_44b30c;
        case 0x44b310u: goto label_44b310;
        case 0x44b314u: goto label_44b314;
        case 0x44b318u: goto label_44b318;
        case 0x44b31cu: goto label_44b31c;
        case 0x44b320u: goto label_44b320;
        case 0x44b324u: goto label_44b324;
        case 0x44b328u: goto label_44b328;
        case 0x44b32cu: goto label_44b32c;
        case 0x44b330u: goto label_44b330;
        case 0x44b334u: goto label_44b334;
        case 0x44b338u: goto label_44b338;
        case 0x44b33cu: goto label_44b33c;
        case 0x44b340u: goto label_44b340;
        case 0x44b344u: goto label_44b344;
        case 0x44b348u: goto label_44b348;
        case 0x44b34cu: goto label_44b34c;
        case 0x44b350u: goto label_44b350;
        case 0x44b354u: goto label_44b354;
        case 0x44b358u: goto label_44b358;
        case 0x44b35cu: goto label_44b35c;
        case 0x44b360u: goto label_44b360;
        case 0x44b364u: goto label_44b364;
        case 0x44b368u: goto label_44b368;
        case 0x44b36cu: goto label_44b36c;
        case 0x44b370u: goto label_44b370;
        case 0x44b374u: goto label_44b374;
        case 0x44b378u: goto label_44b378;
        case 0x44b37cu: goto label_44b37c;
        case 0x44b380u: goto label_44b380;
        case 0x44b384u: goto label_44b384;
        case 0x44b388u: goto label_44b388;
        case 0x44b38cu: goto label_44b38c;
        case 0x44b390u: goto label_44b390;
        case 0x44b394u: goto label_44b394;
        case 0x44b398u: goto label_44b398;
        case 0x44b39cu: goto label_44b39c;
        case 0x44b3a0u: goto label_44b3a0;
        case 0x44b3a4u: goto label_44b3a4;
        case 0x44b3a8u: goto label_44b3a8;
        case 0x44b3acu: goto label_44b3ac;
        case 0x44b3b0u: goto label_44b3b0;
        case 0x44b3b4u: goto label_44b3b4;
        case 0x44b3b8u: goto label_44b3b8;
        case 0x44b3bcu: goto label_44b3bc;
        case 0x44b3c0u: goto label_44b3c0;
        case 0x44b3c4u: goto label_44b3c4;
        case 0x44b3c8u: goto label_44b3c8;
        case 0x44b3ccu: goto label_44b3cc;
        case 0x44b3d0u: goto label_44b3d0;
        case 0x44b3d4u: goto label_44b3d4;
        case 0x44b3d8u: goto label_44b3d8;
        case 0x44b3dcu: goto label_44b3dc;
        case 0x44b3e0u: goto label_44b3e0;
        case 0x44b3e4u: goto label_44b3e4;
        case 0x44b3e8u: goto label_44b3e8;
        case 0x44b3ecu: goto label_44b3ec;
        case 0x44b3f0u: goto label_44b3f0;
        case 0x44b3f4u: goto label_44b3f4;
        case 0x44b3f8u: goto label_44b3f8;
        case 0x44b3fcu: goto label_44b3fc;
        case 0x44b400u: goto label_44b400;
        case 0x44b404u: goto label_44b404;
        case 0x44b408u: goto label_44b408;
        case 0x44b40cu: goto label_44b40c;
        case 0x44b410u: goto label_44b410;
        case 0x44b414u: goto label_44b414;
        case 0x44b418u: goto label_44b418;
        case 0x44b41cu: goto label_44b41c;
        case 0x44b420u: goto label_44b420;
        case 0x44b424u: goto label_44b424;
        case 0x44b428u: goto label_44b428;
        case 0x44b42cu: goto label_44b42c;
        case 0x44b430u: goto label_44b430;
        case 0x44b434u: goto label_44b434;
        case 0x44b438u: goto label_44b438;
        case 0x44b43cu: goto label_44b43c;
        case 0x44b440u: goto label_44b440;
        case 0x44b444u: goto label_44b444;
        case 0x44b448u: goto label_44b448;
        case 0x44b44cu: goto label_44b44c;
        case 0x44b450u: goto label_44b450;
        case 0x44b454u: goto label_44b454;
        case 0x44b458u: goto label_44b458;
        case 0x44b45cu: goto label_44b45c;
        case 0x44b460u: goto label_44b460;
        case 0x44b464u: goto label_44b464;
        case 0x44b468u: goto label_44b468;
        case 0x44b46cu: goto label_44b46c;
        case 0x44b470u: goto label_44b470;
        case 0x44b474u: goto label_44b474;
        case 0x44b478u: goto label_44b478;
        case 0x44b47cu: goto label_44b47c;
        case 0x44b480u: goto label_44b480;
        case 0x44b484u: goto label_44b484;
        case 0x44b488u: goto label_44b488;
        case 0x44b48cu: goto label_44b48c;
        case 0x44b490u: goto label_44b490;
        case 0x44b494u: goto label_44b494;
        case 0x44b498u: goto label_44b498;
        case 0x44b49cu: goto label_44b49c;
        case 0x44b4a0u: goto label_44b4a0;
        case 0x44b4a4u: goto label_44b4a4;
        case 0x44b4a8u: goto label_44b4a8;
        case 0x44b4acu: goto label_44b4ac;
        case 0x44b4b0u: goto label_44b4b0;
        case 0x44b4b4u: goto label_44b4b4;
        case 0x44b4b8u: goto label_44b4b8;
        case 0x44b4bcu: goto label_44b4bc;
        case 0x44b4c0u: goto label_44b4c0;
        case 0x44b4c4u: goto label_44b4c4;
        case 0x44b4c8u: goto label_44b4c8;
        case 0x44b4ccu: goto label_44b4cc;
        case 0x44b4d0u: goto label_44b4d0;
        case 0x44b4d4u: goto label_44b4d4;
        case 0x44b4d8u: goto label_44b4d8;
        case 0x44b4dcu: goto label_44b4dc;
        case 0x44b4e0u: goto label_44b4e0;
        case 0x44b4e4u: goto label_44b4e4;
        case 0x44b4e8u: goto label_44b4e8;
        case 0x44b4ecu: goto label_44b4ec;
        case 0x44b4f0u: goto label_44b4f0;
        case 0x44b4f4u: goto label_44b4f4;
        case 0x44b4f8u: goto label_44b4f8;
        case 0x44b4fcu: goto label_44b4fc;
        case 0x44b500u: goto label_44b500;
        case 0x44b504u: goto label_44b504;
        case 0x44b508u: goto label_44b508;
        case 0x44b50cu: goto label_44b50c;
        case 0x44b510u: goto label_44b510;
        case 0x44b514u: goto label_44b514;
        case 0x44b518u: goto label_44b518;
        case 0x44b51cu: goto label_44b51c;
        case 0x44b520u: goto label_44b520;
        case 0x44b524u: goto label_44b524;
        case 0x44b528u: goto label_44b528;
        case 0x44b52cu: goto label_44b52c;
        case 0x44b530u: goto label_44b530;
        case 0x44b534u: goto label_44b534;
        case 0x44b538u: goto label_44b538;
        case 0x44b53cu: goto label_44b53c;
        case 0x44b540u: goto label_44b540;
        case 0x44b544u: goto label_44b544;
        case 0x44b548u: goto label_44b548;
        case 0x44b54cu: goto label_44b54c;
        case 0x44b550u: goto label_44b550;
        case 0x44b554u: goto label_44b554;
        case 0x44b558u: goto label_44b558;
        case 0x44b55cu: goto label_44b55c;
        case 0x44b560u: goto label_44b560;
        case 0x44b564u: goto label_44b564;
        case 0x44b568u: goto label_44b568;
        case 0x44b56cu: goto label_44b56c;
        case 0x44b570u: goto label_44b570;
        case 0x44b574u: goto label_44b574;
        case 0x44b578u: goto label_44b578;
        case 0x44b57cu: goto label_44b57c;
        case 0x44b580u: goto label_44b580;
        case 0x44b584u: goto label_44b584;
        case 0x44b588u: goto label_44b588;
        case 0x44b58cu: goto label_44b58c;
        case 0x44b590u: goto label_44b590;
        case 0x44b594u: goto label_44b594;
        case 0x44b598u: goto label_44b598;
        case 0x44b59cu: goto label_44b59c;
        case 0x44b5a0u: goto label_44b5a0;
        case 0x44b5a4u: goto label_44b5a4;
        case 0x44b5a8u: goto label_44b5a8;
        case 0x44b5acu: goto label_44b5ac;
        case 0x44b5b0u: goto label_44b5b0;
        case 0x44b5b4u: goto label_44b5b4;
        case 0x44b5b8u: goto label_44b5b8;
        case 0x44b5bcu: goto label_44b5bc;
        case 0x44b5c0u: goto label_44b5c0;
        case 0x44b5c4u: goto label_44b5c4;
        case 0x44b5c8u: goto label_44b5c8;
        case 0x44b5ccu: goto label_44b5cc;
        case 0x44b5d0u: goto label_44b5d0;
        case 0x44b5d4u: goto label_44b5d4;
        case 0x44b5d8u: goto label_44b5d8;
        case 0x44b5dcu: goto label_44b5dc;
        case 0x44b5e0u: goto label_44b5e0;
        case 0x44b5e4u: goto label_44b5e4;
        case 0x44b5e8u: goto label_44b5e8;
        case 0x44b5ecu: goto label_44b5ec;
        case 0x44b5f0u: goto label_44b5f0;
        case 0x44b5f4u: goto label_44b5f4;
        case 0x44b5f8u: goto label_44b5f8;
        case 0x44b5fcu: goto label_44b5fc;
        case 0x44b600u: goto label_44b600;
        case 0x44b604u: goto label_44b604;
        case 0x44b608u: goto label_44b608;
        case 0x44b60cu: goto label_44b60c;
        case 0x44b610u: goto label_44b610;
        case 0x44b614u: goto label_44b614;
        case 0x44b618u: goto label_44b618;
        case 0x44b61cu: goto label_44b61c;
        case 0x44b620u: goto label_44b620;
        case 0x44b624u: goto label_44b624;
        case 0x44b628u: goto label_44b628;
        case 0x44b62cu: goto label_44b62c;
        case 0x44b630u: goto label_44b630;
        case 0x44b634u: goto label_44b634;
        case 0x44b638u: goto label_44b638;
        case 0x44b63cu: goto label_44b63c;
        case 0x44b640u: goto label_44b640;
        case 0x44b644u: goto label_44b644;
        case 0x44b648u: goto label_44b648;
        case 0x44b64cu: goto label_44b64c;
        case 0x44b650u: goto label_44b650;
        case 0x44b654u: goto label_44b654;
        case 0x44b658u: goto label_44b658;
        case 0x44b65cu: goto label_44b65c;
        case 0x44b660u: goto label_44b660;
        case 0x44b664u: goto label_44b664;
        case 0x44b668u: goto label_44b668;
        case 0x44b66cu: goto label_44b66c;
        case 0x44b670u: goto label_44b670;
        case 0x44b674u: goto label_44b674;
        case 0x44b678u: goto label_44b678;
        case 0x44b67cu: goto label_44b67c;
        case 0x44b680u: goto label_44b680;
        case 0x44b684u: goto label_44b684;
        case 0x44b688u: goto label_44b688;
        case 0x44b68cu: goto label_44b68c;
        case 0x44b690u: goto label_44b690;
        case 0x44b694u: goto label_44b694;
        case 0x44b698u: goto label_44b698;
        case 0x44b69cu: goto label_44b69c;
        case 0x44b6a0u: goto label_44b6a0;
        case 0x44b6a4u: goto label_44b6a4;
        case 0x44b6a8u: goto label_44b6a8;
        case 0x44b6acu: goto label_44b6ac;
        case 0x44b6b0u: goto label_44b6b0;
        case 0x44b6b4u: goto label_44b6b4;
        case 0x44b6b8u: goto label_44b6b8;
        case 0x44b6bcu: goto label_44b6bc;
        case 0x44b6c0u: goto label_44b6c0;
        case 0x44b6c4u: goto label_44b6c4;
        case 0x44b6c8u: goto label_44b6c8;
        case 0x44b6ccu: goto label_44b6cc;
        case 0x44b6d0u: goto label_44b6d0;
        case 0x44b6d4u: goto label_44b6d4;
        case 0x44b6d8u: goto label_44b6d8;
        case 0x44b6dcu: goto label_44b6dc;
        case 0x44b6e0u: goto label_44b6e0;
        case 0x44b6e4u: goto label_44b6e4;
        case 0x44b6e8u: goto label_44b6e8;
        case 0x44b6ecu: goto label_44b6ec;
        case 0x44b6f0u: goto label_44b6f0;
        case 0x44b6f4u: goto label_44b6f4;
        case 0x44b6f8u: goto label_44b6f8;
        case 0x44b6fcu: goto label_44b6fc;
        case 0x44b700u: goto label_44b700;
        case 0x44b704u: goto label_44b704;
        case 0x44b708u: goto label_44b708;
        case 0x44b70cu: goto label_44b70c;
        case 0x44b710u: goto label_44b710;
        case 0x44b714u: goto label_44b714;
        case 0x44b718u: goto label_44b718;
        case 0x44b71cu: goto label_44b71c;
        case 0x44b720u: goto label_44b720;
        case 0x44b724u: goto label_44b724;
        case 0x44b728u: goto label_44b728;
        case 0x44b72cu: goto label_44b72c;
        case 0x44b730u: goto label_44b730;
        case 0x44b734u: goto label_44b734;
        case 0x44b738u: goto label_44b738;
        case 0x44b73cu: goto label_44b73c;
        case 0x44b740u: goto label_44b740;
        case 0x44b744u: goto label_44b744;
        case 0x44b748u: goto label_44b748;
        case 0x44b74cu: goto label_44b74c;
        case 0x44b750u: goto label_44b750;
        case 0x44b754u: goto label_44b754;
        case 0x44b758u: goto label_44b758;
        case 0x44b75cu: goto label_44b75c;
        default: break;
    }

    ctx->pc = 0x44b1b8u;

label_44b1b8:
    // 0x44b1b8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x44b1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_44b1bc:
    // 0x44b1bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x44b1bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44b1c0:
    // 0x44b1c0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x44b1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_44b1c4:
    // 0x44b1c4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x44b1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_44b1c8:
    // 0x44b1c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44b1c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44b1cc:
    // 0x44b1cc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x44b1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_44b1d0:
    // 0x44b1d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x44b1d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44b1d4:
    // 0x44b1d4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x44b1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_44b1d8:
    // 0x44b1d8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x44b1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_44b1dc:
    // 0x44b1dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x44b1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_44b1e0:
    // 0x44b1e0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x44b1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_44b1e4:
    // 0x44b1e4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x44b1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_44b1e8:
    // 0x44b1e8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x44b1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_44b1ec:
    // 0x44b1ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44b1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44b1f0:
    // 0x44b1f0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x44b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_44b1f4:
    // 0x44b1f4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x44b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_44b1f8:
    // 0x44b1f8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x44b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_44b1fc:
    // 0x44b1fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44b1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44b200:
    // 0x44b200: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
label_44b204:
    if (ctx->pc == 0x44B204u) {
        ctx->pc = 0x44B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B200u;
        // 0x44b204: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B208u;
        goto label_44b208;
    }
    ctx->pc = 0x44B200u;
    {
        const bool branch_taken_0x44b200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B200u;
        // 0x44b204: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b200) {
            ctx->pc = 0x44B300u;
            goto label_44b300;
        }
    }
    ctx->pc = 0x44B208u;
label_44b208:
    // 0x44b208: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x44b208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_44b20c:
    // 0x44b20c: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x44b20cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_44b210:
    // 0x44b210: 0x31230003  andi        $v1, $t1, 0x3
    ctx->pc = 0x44b210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
label_44b214:
    // 0x44b214: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x44b214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44b218:
    // 0x44b218: 0x19200016  blez        $t1, . + 4 + (0x16 << 2)
label_44b21c:
    if (ctx->pc == 0x44B21Cu) {
        ctx->pc = 0x44B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B218u;
        // 0x44b21c: 0x24850004  addiu       $a1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B220u;
        goto label_44b220;
    }
    ctx->pc = 0x44B218u;
    {
        const bool branch_taken_0x44b218 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x44B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B218u;
        // 0x44b21c: 0x24850004  addiu       $a1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b218) {
            ctx->pc = 0x44B274u;
            goto label_44b274;
        }
    }
    ctx->pc = 0x44B220u;
label_44b220:
    // 0x44b220: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_44b224:
    if (ctx->pc == 0x44B224u) {
        ctx->pc = 0x44B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B220u;
        // 0x44b224: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B228u;
        goto label_44b228;
    }
    ctx->pc = 0x44B220u;
    {
        const bool branch_taken_0x44b220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B220u;
        // 0x44b224: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b220) {
            ctx->pc = 0x44B298u;
            goto label_44b298;
        }
    }
    ctx->pc = 0x44B228u;
label_44b228:
    // 0x44b228: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_44b22c:
    if (ctx->pc == 0x44B22Cu) {
        ctx->pc = 0x44B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B228u;
        // 0x44b22c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B230u;
        goto label_44b230;
    }
    ctx->pc = 0x44B228u;
    {
        const bool branch_taken_0x44b228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44b228) {
            ctx->pc = 0x44B22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B228u;
            // 0x44b22c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B278u;
            goto label_44b278;
        }
    }
    ctx->pc = 0x44B230u;
label_44b230:
    // 0x44b230: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x44b230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_44b234:
    // 0x44b234: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_44b238:
    if (ctx->pc == 0x44B238u) {
        ctx->pc = 0x44B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B234u;
        // 0x44b238: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B23Cu;
        goto label_44b23c;
    }
    ctx->pc = 0x44B234u;
    {
        const bool branch_taken_0x44b234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44b234) {
            ctx->pc = 0x44B238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B234u;
            // 0x44b238: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B25Cu;
            goto label_44b25c;
        }
    }
    ctx->pc = 0x44B23Cu;
label_44b23c:
    // 0x44b23c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x44b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_44b240:
    // 0x44b240: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x44b240u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_44b244:
    // 0x44b244: 0x24850028  addiu       $a1, $a0, 0x28
    ctx->pc = 0x44b244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_44b248:
    // 0x44b248: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x44b248u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44b24c:
    // 0x44b24c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x44b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_44b250:
    // 0x44b250: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x44b250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44b254:
    // 0x44b254: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x44b254u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_44b258:
    // 0x44b258: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x44b258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_44b25c:
    // 0x44b25c: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x44b25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_44b260:
    // 0x44b260: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x44b260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
label_44b264:
    // 0x44b264: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x44b264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_44b268:
    // 0x44b268: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x44b268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_44b26c:
    // 0x44b26c: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x44b26cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44b270:
    // 0x44b270: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x44b270u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_44b274:
    // 0x44b274: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x44b274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_44b278:
    // 0x44b278: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x44b278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_44b27c:
    // 0x44b27c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x44b27cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_44b280:
    // 0x44b280: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x44b280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
label_44b284:
    // 0x44b284: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x44b284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_44b288:
    // 0x44b288: 0x109202b  sltu        $a0, $t0, $t1
    ctx->pc = 0x44b288u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_44b28c:
    // 0x44b28c: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x44b28cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44b290:
    // 0x44b290: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_44b294:
    if (ctx->pc == 0x44B294u) {
        ctx->pc = 0x44B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B290u;
        // 0x44b294: 0x62900a  movz        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B298u;
        goto label_44b298;
    }
    ctx->pc = 0x44B290u;
    {
        const bool branch_taken_0x44b290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B290u;
        // 0x44b294: 0x62900a  movz        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b290) {
            ctx->pc = 0x44B300u;
            goto label_44b300;
        }
    }
    ctx->pc = 0x44B298u;
label_44b298:
    // 0x44b298: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x44b298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_44b29c:
    // 0x44b29c: 0x0  nop
    ctx->pc = 0x44b29cu;
    // NOP
label_44b2a0:
    // 0x44b2a0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x44b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_44b2a4:
    // 0x44b2a4: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x44b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_44b2a8:
    // 0x44b2a8: 0x8cc40024  lw          $a0, 0x24($a2)
    ctx->pc = 0x44b2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_44b2ac:
    // 0x44b2ac: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x44b2acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_44b2b0:
    // 0x44b2b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x44b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_44b2b4:
    // 0x44b2b4: 0x8cc50048  lw          $a1, 0x48($a2)
    ctx->pc = 0x44b2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
label_44b2b8:
    // 0x44b2b8: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x44b2b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44b2bc:
    // 0x44b2bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x44b2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_44b2c0:
    // 0x44b2c0: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x44b2c0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_44b2c4:
    // 0x44b2c4: 0xe4202b  sltu        $a0, $a3, $a0
    ctx->pc = 0x44b2c4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_44b2c8:
    // 0x44b2c8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x44b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_44b2cc:
    // 0x44b2cc: 0x8cc3006c  lw          $v1, 0x6C($a2)
    ctx->pc = 0x44b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
label_44b2d0:
    // 0x44b2d0: 0x44900a  movz        $s2, $v0, $a0
    ctx->pc = 0x44b2d0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_44b2d4:
    // 0x44b2d4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x44b2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_44b2d8:
    // 0x44b2d8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x44b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_44b2dc:
    // 0x44b2dc: 0xe5282b  sltu        $a1, $a3, $a1
    ctx->pc = 0x44b2dcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_44b2e0:
    // 0x44b2e0: 0x45900a  movz        $s2, $v0, $a1
    ctx->pc = 0x44b2e0u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_44b2e4:
    // 0x44b2e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x44b2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_44b2e8:
    // 0x44b2e8: 0xe3182b  sltu        $v1, $a3, $v1
    ctx->pc = 0x44b2e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_44b2ec:
    // 0x44b2ec: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x44b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_44b2f0:
    // 0x44b2f0: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x44b2f0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_44b2f4:
    // 0x44b2f4: 0x109202b  sltu        $a0, $t0, $t1
    ctx->pc = 0x44b2f4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_44b2f8:
    // 0x44b2f8: 0x1480ffe9  bnez        $a0, . + 4 + (-0x17 << 2)
label_44b2fc:
    if (ctx->pc == 0x44B2FCu) {
        ctx->pc = 0x44B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B2F8u;
        // 0x44b2fc: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B300u;
        goto label_44b300;
    }
    ctx->pc = 0x44B2F8u;
    {
        const bool branch_taken_0x44b2f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B2F8u;
        // 0x44b2fc: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b2f8) {
            ctx->pc = 0x44B2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b2a0;
        }
    }
    ctx->pc = 0x44B300u;
label_44b300:
    // 0x44b300: 0x240f02d  daddu       $fp, $s2, $zero
    ctx->pc = 0x44b300u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44b304:
    // 0x44b304: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x44b304u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44b308:
    // 0x44b308: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
label_44b30c:
    if (ctx->pc == 0x44B30Cu) {
        ctx->pc = 0x44B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B308u;
        // 0x44b30c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B310u;
        goto label_44b310;
    }
    ctx->pc = 0x44B308u;
    {
        const bool branch_taken_0x44b308 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B308u;
        // 0x44b30c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b308) {
            ctx->pc = 0x44B36Cu;
            goto label_44b36c;
        }
    }
    ctx->pc = 0x44B310u;
label_44b310:
    // 0x44b310: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x44b310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_44b314:
    // 0x44b314: 0x26c90001  addiu       $t1, $s6, 0x1
    ctx->pc = 0x44b314u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_44b318:
    // 0x44b318: 0x12860010  beq         $s4, $a2, . + 4 + (0x10 << 2)
label_44b31c:
    if (ctx->pc == 0x44B31Cu) {
        ctx->pc = 0x44B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B318u;
        // 0x44b31c: 0x8cc80008  lw          $t0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B320u;
        goto label_44b320;
    }
    ctx->pc = 0x44B318u;
    {
        const bool branch_taken_0x44b318 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 6));
        ctx->pc = 0x44B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B318u;
        // 0x44b31c: 0x8cc80008  lw          $t0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b318) {
            ctx->pc = 0x44B35Cu;
            goto label_44b35c;
        }
    }
    ctx->pc = 0x44B320u;
label_44b320:
    // 0x44b320: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x44b320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_44b324:
    // 0x44b324: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x44b324u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_44b328:
    // 0x44b328: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x44b328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44b32c:
    // 0x44b32c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x44b32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_44b330:
    // 0x44b330: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_44b334:
    if (ctx->pc == 0x44B334u) {
        ctx->pc = 0x44B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B330u;
        // 0x44b334: 0xa61026  xor         $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B338u;
        goto label_44b338;
    }
    ctx->pc = 0x44B330u;
    {
        const bool branch_taken_0x44b330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x44B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B330u;
        // 0x44b334: 0xa61026  xor         $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b330) {
            ctx->pc = 0x44B360u;
            goto label_44b360;
        }
    }
    ctx->pc = 0x44B338u;
label_44b338:
    // 0x44b338: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x44b338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_44b33c:
    // 0x44b33c: 0x0  nop
    ctx->pc = 0x44b33cu;
    // NOP
label_44b340:
    // 0x44b340: 0x10a60007  beq         $a1, $a2, . + 4 + (0x7 << 2)
label_44b344:
    if (ctx->pc == 0x44B344u) {
        ctx->pc = 0x44B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B340u;
        // 0x44b344: 0xa61026  xor         $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B348u;
        goto label_44b348;
    }
    ctx->pc = 0x44B340u;
    {
        const bool branch_taken_0x44b340 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x44B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B340u;
        // 0x44b344: 0xa61026  xor         $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b340) {
            ctx->pc = 0x44B360u;
            goto label_44b360;
        }
    }
    ctx->pc = 0x44B348u;
label_44b348:
    // 0x44b348: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x44b348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_44b34c:
    // 0x44b34c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x44b34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_44b350:
    // 0x44b350: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44b350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44b354:
    // 0x44b354: 0x5464fffa  bnel        $v1, $a0, . + 4 + (-0x6 << 2)
label_44b358:
    if (ctx->pc == 0x44B358u) {
        ctx->pc = 0x44B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B354u;
        // 0x44b358: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B35Cu;
        goto label_44b35c;
    }
    ctx->pc = 0x44B354u;
    {
        const bool branch_taken_0x44b354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x44b354) {
            ctx->pc = 0x44B358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B354u;
            // 0x44b358: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b340;
        }
    }
    ctx->pc = 0x44B35Cu;
label_44b35c:
    // 0x44b35c: 0xa61026  xor         $v0, $a1, $a2
    ctx->pc = 0x44b35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
label_44b360:
    // 0x44b360: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x44b360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_44b364:
    // 0x44b364: 0x14c0ffea  bnez        $a2, . + 4 + (-0x16 << 2)
label_44b368:
    if (ctx->pc == 0x44B368u) {
        ctx->pc = 0x44B368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B364u;
        // 0x44b368: 0x122b00a  movz        $s6, $t1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B36Cu;
        goto label_44b36c;
    }
    ctx->pc = 0x44B364u;
    {
        const bool branch_taken_0x44b364 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B364u;
        // 0x44b368: 0x122b00a  movz        $s6, $t1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b364) {
            ctx->pc = 0x44B310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b310;
        }
    }
    ctx->pc = 0x44B36Cu;
label_44b36c:
    // 0x44b36c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x44b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_44b370:
    // 0x44b370: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x44b370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44b374:
    // 0x44b374: 0x2457b898  addiu       $s7, $v0, -0x4768
    ctx->pc = 0x44b374u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949016));
label_44b378:
    // 0x44b378: 0xc112414  jal         func_449050
label_44b37c:
    if (ctx->pc == 0x44B37Cu) {
        ctx->pc = 0x44B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B378u;
        // 0x44b37c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B380u;
        goto label_44b380;
    }
    ctx->pc = 0x44B378u;
    SET_GPR_U32(ctx, 31, 0x44B380u);
    ctx->pc = 0x44B37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B378u;
    // 0x44b37c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449050u, 0x44B378u, 0x44B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B380u;
label_44b380:
    // 0x44b380: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x44b380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_44b384:
    // 0x44b384: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x44b384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44b388:
    // 0x44b388: 0xc112430  jal         func_4490C0
label_44b38c:
    if (ctx->pc == 0x44B38Cu) {
        ctx->pc = 0x44B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B388u;
        // 0x44b38c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B390u;
        goto label_44b390;
    }
    ctx->pc = 0x44B388u;
    SET_GPR_U32(ctx, 31, 0x44B390u);
    ctx->pc = 0x44B38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B388u;
    // 0x44b38c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4490C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4490C0u, 0x44B388u, 0x44B390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B390u;
label_44b390:
    // 0x44b390: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x44b390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44b394:
    // 0x44b394: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44b394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44b398:
    // 0x44b398: 0xc0bb7e6  jal         func_2EDF98
label_44b39c:
    if (ctx->pc == 0x44B39Cu) {
        ctx->pc = 0x44B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B398u;
        // 0x44b39c: 0x2043023  subu        $a2, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B3A0u;
        goto label_44b3a0;
    }
    ctx->pc = 0x44B398u;
    SET_GPR_U32(ctx, 31, 0x44B3A0u);
    ctx->pc = 0x44B39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B398u;
    // 0x44b39c: 0x2043023  subu        $a2, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x44B398u, 0x44B3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B3A0u;
label_44b3a0:
    // 0x44b3a0: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x44b3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_44b3a4:
    // 0x44b3a4: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x44b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_44b3a8:
    // 0x44b3a8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x44b3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_44b3ac:
    // 0x44b3ac: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x44b3acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_44b3b0:
    // 0x44b3b0: 0xc112430  jal         func_4490C0
label_44b3b4:
    if (ctx->pc == 0x44B3B4u) {
        ctx->pc = 0x44B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B3B0u;
        // 0x44b3b4: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B3B8u;
        goto label_44b3b8;
    }
    ctx->pc = 0x44B3B0u;
    SET_GPR_U32(ctx, 31, 0x44B3B8u);
    ctx->pc = 0x44B3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B3B0u;
    // 0x44b3b4: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4490C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4490C0u, 0x44B3B0u, 0x44B3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B3B8u;
label_44b3b8:
    // 0x44b3b8: 0x9663000c  lhu         $v1, 0xC($s3)
    ctx->pc = 0x44b3b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
label_44b3bc:
    // 0x44b3bc: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x44b3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_44b3c0:
    // 0x44b3c0: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x44b3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_44b3c4:
    // 0x44b3c4: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x44b3c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
label_44b3c8:
    // 0x44b3c8: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x44b3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
label_44b3cc:
    // 0x44b3cc: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x44b3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_44b3d0:
    // 0x44b3d0: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_44b3d4:
    if (ctx->pc == 0x44B3D4u) {
        ctx->pc = 0x44B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B3D0u;
        // 0x44b3d4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B3D8u;
        goto label_44b3d8;
    }
    ctx->pc = 0x44B3D0u;
    {
        const bool branch_taken_0x44b3d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B3D0u;
        // 0x44b3d4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b3d0) {
            ctx->pc = 0x44B454u;
            goto label_44b454;
        }
    }
    ctx->pc = 0x44B3D8u;
label_44b3d8:
    // 0x44b3d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x44b3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_44b3dc:
    // 0x44b3dc: 0x0  nop
    ctx->pc = 0x44b3dcu;
    // NOP
label_44b3e0:
    // 0x44b3e0: 0x10b10012  beq         $a1, $s1, . + 4 + (0x12 << 2)
label_44b3e4:
    if (ctx->pc == 0x44B3E4u) {
        ctx->pc = 0x44B3E8u;
        goto label_44b3e8;
    }
    ctx->pc = 0x44B3E0u;
    {
        const bool branch_taken_0x44b3e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        if (branch_taken_0x44b3e0) {
            ctx->pc = 0x44B42Cu;
            goto label_44b42c;
        }
    }
    ctx->pc = 0x44B3E8u;
label_44b3e8:
    // 0x44b3e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x44b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_44b3ec:
    // 0x44b3ec: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x44b3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_44b3f0:
    // 0x44b3f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x44b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44b3f4:
    // 0x44b3f4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x44b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_44b3f8:
    // 0x44b3f8: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_44b3fc:
    if (ctx->pc == 0x44B3FCu) {
        ctx->pc = 0x44B400u;
        goto label_44b400;
    }
    ctx->pc = 0x44B3F8u;
    {
        const bool branch_taken_0x44b3f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x44b3f8) {
            ctx->pc = 0x44B424u;
            goto label_44b424;
        }
    }
    ctx->pc = 0x44B400u;
label_44b400:
    // 0x44b400: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x44b400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_44b404:
    // 0x44b404: 0x0  nop
    ctx->pc = 0x44b404u;
    // NOP
label_44b408:
    // 0x44b408: 0x10b10008  beq         $a1, $s1, . + 4 + (0x8 << 2)
label_44b40c:
    if (ctx->pc == 0x44B40Cu) {
        ctx->pc = 0x44B410u;
        goto label_44b410;
    }
    ctx->pc = 0x44B408u;
    {
        const bool branch_taken_0x44b408 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        if (branch_taken_0x44b408) {
            ctx->pc = 0x44B42Cu;
            goto label_44b42c;
        }
    }
    ctx->pc = 0x44B410u;
label_44b410:
    // 0x44b410: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x44b410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_44b414:
    // 0x44b414: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x44b414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_44b418:
    // 0x44b418: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44b418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44b41c:
    // 0x44b41c: 0x5464fffa  bnel        $v1, $a0, . + 4 + (-0x6 << 2)
label_44b420:
    if (ctx->pc == 0x44B420u) {
        ctx->pc = 0x44B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B41Cu;
        // 0x44b420: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B424u;
        goto label_44b424;
    }
    ctx->pc = 0x44B41Cu;
    {
        const bool branch_taken_0x44b41c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x44b41c) {
            ctx->pc = 0x44B420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B41Cu;
            // 0x44b420: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b408;
        }
    }
    ctx->pc = 0x44B424u;
label_44b424:
    // 0x44b424: 0x54b10009  bnel        $a1, $s1, . + 4 + (0x9 << 2)
label_44b428:
    if (ctx->pc == 0x44B428u) {
        ctx->pc = 0x44B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B424u;
        // 0x44b428: 0x8e310008  lw          $s1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B42Cu;
        goto label_44b42c;
    }
    ctx->pc = 0x44B424u;
    {
        const bool branch_taken_0x44b424 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        if (branch_taken_0x44b424) {
            ctx->pc = 0x44B428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B424u;
            // 0x44b428: 0x8e310008  lw          $s1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B44Cu;
            goto label_44b44c;
        }
    }
    ctx->pc = 0x44B42Cu;
label_44b42c:
    // 0x44b42c: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_44b430:
    if (ctx->pc == 0x44B430u) {
        ctx->pc = 0x44B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B42Cu;
        // 0x44b430: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B434u;
        goto label_44b434;
    }
    ctx->pc = 0x44B42Cu;
    {
        const bool branch_taken_0x44b42c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B42Cu;
        // 0x44b430: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b42c) {
            ctx->pc = 0x44B444u;
            goto label_44b444;
        }
    }
    ctx->pc = 0x44B434u;
label_44b434:
    // 0x44b434: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x44b434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_44b438:
    // 0x44b438: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x44b438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44b43c:
    // 0x44b43c: 0x2e0f809  jalr        $s7
label_44b440:
    if (ctx->pc == 0x44B440u) {
        ctx->pc = 0x44B440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B43Cu;
        // 0x44b440: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B444u;
        goto label_44b444;
    }
    ctx->pc = 0x44B43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x44B444u);
        ctx->pc = 0x44B440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B43Cu;
        // 0x44b440: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44B43Cu, 0x44B444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44B444u;
label_44b444:
    // 0x44b444: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x44b444u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_44b448:
    // 0x44b448: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x44b448u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_44b44c:
    // 0x44b44c: 0x1620ffe4  bnez        $s1, . + 4 + (-0x1C << 2)
label_44b450:
    if (ctx->pc == 0x44B450u) {
        ctx->pc = 0x44B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B44Cu;
        // 0x44b450: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B454u;
        goto label_44b454;
    }
    ctx->pc = 0x44B44Cu;
    {
        const bool branch_taken_0x44b44c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B44Cu;
        // 0x44b450: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b44c) {
            ctx->pc = 0x44B3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b3e0;
        }
    }
    ctx->pc = 0x44B454u;
label_44b454:
    // 0x44b454: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x44b454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_44b458:
    // 0x44b458: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
label_44b45c:
    if (ctx->pc == 0x44B45Cu) {
        ctx->pc = 0x44B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B458u;
        // 0x44b45c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B460u;
        goto label_44b460;
    }
    ctx->pc = 0x44B458u;
    {
        const bool branch_taken_0x44b458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B458u;
        // 0x44b45c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b458) {
            ctx->pc = 0x44B678u;
            goto label_44b678;
        }
    }
    ctx->pc = 0x44B460u;
label_44b460:
    // 0x44b460: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x44b460u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
label_44b464:
    // 0x44b464: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x44b464u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_44b468:
    // 0x44b468: 0x3694fffc  ori         $s4, $s4, 0xFFFC
    ctx->pc = 0x44b468u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65532);
label_44b46c:
    // 0x44b46c: 0x2351818  mult        $v1, $s1, $s5
    ctx->pc = 0x44b46cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_44b470:
    // 0x44b470: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x44b470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_44b474:
    // 0x44b474: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x44b474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_44b478:
    // 0x44b478: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_44b47c:
    if (ctx->pc == 0x44B47Cu) {
        ctx->pc = 0x44B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B478u;
        // 0x44b47c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B480u;
        goto label_44b480;
    }
    ctx->pc = 0x44B478u;
    {
        const bool branch_taken_0x44b478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B478u;
        // 0x44b47c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b478) {
            ctx->pc = 0x44B490u;
            goto label_44b490;
        }
    }
    ctx->pc = 0x44B480u;
label_44b480:
    // 0x44b480: 0xc112430  jal         func_4490C0
label_44b484:
    if (ctx->pc == 0x44B484u) {
        ctx->pc = 0x44B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B480u;
        // 0x44b484: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B488u;
        goto label_44b488;
    }
    ctx->pc = 0x44B480u;
    SET_GPR_U32(ctx, 31, 0x44B488u);
    ctx->pc = 0x44B484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B480u;
    // 0x44b484: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4490C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4490C0u, 0x44B480u, 0x44B488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B488u;
label_44b488:
    // 0x44b488: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x44b488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_44b48c:
    // 0x44b48c: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x44b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_44b490:
    // 0x44b490: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x44b490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_44b494:
    // 0x44b494: 0xc112430  jal         func_4490C0
label_44b498:
    if (ctx->pc == 0x44B498u) {
        ctx->pc = 0x44B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B494u;
        // 0x44b498: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B49Cu;
        goto label_44b49c;
    }
    ctx->pc = 0x44B494u;
    SET_GPR_U32(ctx, 31, 0x44B49Cu);
    ctx->pc = 0x44B498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B494u;
    // 0x44b498: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4490C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4490C0u, 0x44B494u, 0x44B49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B49Cu;
label_44b49c:
    // 0x44b49c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x44b49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44b4a0:
    // 0x44b4a0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x44b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_44b4a4:
    // 0x44b4a4: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x44b4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_44b4a8:
    // 0x44b4a8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_44b4ac:
    if (ctx->pc == 0x44B4ACu) {
        ctx->pc = 0x44B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B4A8u;
        // 0x44b4ac: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B4B0u;
        goto label_44b4b0;
    }
    ctx->pc = 0x44B4A8u;
    {
        const bool branch_taken_0x44b4a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b4a8) {
            ctx->pc = 0x44B4ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B4A8u;
            // 0x44b4ac: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B4C0u;
            goto label_44b4c0;
        }
    }
    ctx->pc = 0x44B4B0u;
label_44b4b0:
    // 0x44b4b0: 0xc112430  jal         func_4490C0
label_44b4b4:
    if (ctx->pc == 0x44B4B4u) {
        ctx->pc = 0x44B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B4B0u;
        // 0x44b4b4: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B4B8u;
        goto label_44b4b8;
    }
    ctx->pc = 0x44B4B0u;
    SET_GPR_U32(ctx, 31, 0x44B4B8u);
    ctx->pc = 0x44B4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B4B0u;
    // 0x44b4b4: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4490C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4490C0u, 0x44B4B0u, 0x44B4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B4B8u;
label_44b4b8:
    // 0x44b4b8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x44b4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_44b4bc:
    // 0x44b4bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x44b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44b4c0:
    // 0x44b4c0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x44b4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_44b4c4:
    // 0x44b4c4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_44b4c8:
    if (ctx->pc == 0x44B4C8u) {
        ctx->pc = 0x44B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B4C4u;
        // 0x44b4c8: 0x24840003  addiu       $a0, $a0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B4CCu;
        goto label_44b4cc;
    }
    ctx->pc = 0x44B4C4u;
    {
        const bool branch_taken_0x44b4c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B4C4u;
        // 0x44b4c8: 0x24840003  addiu       $a0, $a0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b4c4) {
            ctx->pc = 0x44B4D8u;
            goto label_44b4d8;
        }
    }
    ctx->pc = 0x44B4CCu;
label_44b4cc:
    // 0x44b4cc: 0xc112430  jal         func_4490C0
label_44b4d0:
    if (ctx->pc == 0x44B4D0u) {
        ctx->pc = 0x44B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B4CCu;
        // 0x44b4d0: 0x942024  and         $a0, $a0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B4D4u;
        goto label_44b4d4;
    }
    ctx->pc = 0x44B4CCu;
    SET_GPR_U32(ctx, 31, 0x44B4D4u);
    ctx->pc = 0x44B4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B4CCu;
    // 0x44b4d0: 0x942024  and         $a0, $a0, $s4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4490C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4490C0u, 0x44B4CCu, 0x44B4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B4D4u;
label_44b4d4:
    // 0x44b4d4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x44b4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_44b4d8:
    // 0x44b4d8: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x44b4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_44b4dc:
    // 0x44b4dc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x44b4dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_44b4e0:
    // 0x44b4e0: 0x262e0001  addiu       $t6, $s1, 0x1
    ctx->pc = 0x44b4e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_44b4e4:
    // 0x44b4e4: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x44b4e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_44b4e8:
    // 0x44b4e8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x44b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_44b4ec:
    // 0x44b4ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_44b4f0:
    // 0x44b4f0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_44b4f4:
    if (ctx->pc == 0x44B4F4u) {
        ctx->pc = 0x44B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B4F0u;
        // 0x44b4f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B4F8u;
        goto label_44b4f8;
    }
    ctx->pc = 0x44B4F0u;
    {
        const bool branch_taken_0x44b4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B4F0u;
        // 0x44b4f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b4f0) {
            ctx->pc = 0x44B5B8u;
            goto label_44b5b8;
        }
    }
    ctx->pc = 0x44B4F8u;
label_44b4f8:
    // 0x44b4f8: 0x240d0024  addiu       $t5, $zero, 0x24
    ctx->pc = 0x44b4f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_44b4fc:
    // 0x44b4fc: 0x0  nop
    ctx->pc = 0x44b4fcu;
    // NOP
label_44b500:
    // 0x44b500: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x44b500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_44b504:
    // 0x44b504: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x44b504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44b508:
    // 0x44b508: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x44b508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44b50c:
    // 0x44b50c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_44b510:
    if (ctx->pc == 0x44B510u) {
        ctx->pc = 0x44B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B50Cu;
        // 0x44b510: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B514u;
        goto label_44b514;
    }
    ctx->pc = 0x44B50Cu;
    {
        const bool branch_taken_0x44b50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B50Cu;
        // 0x44b510: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b50c) {
            ctx->pc = 0x44B524u;
            goto label_44b524;
        }
    }
    ctx->pc = 0x44B514u;
label_44b514:
    // 0x44b514: 0xed1818  mult        $v1, $a3, $t5
    ctx->pc = 0x44b514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_44b518:
    // 0x44b518: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x44b518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_44b51c:
    // 0x44b51c: 0x10000002  b           . + 4 + (0x2 << 2)
label_44b520:
    if (ctx->pc == 0x44B520u) {
        ctx->pc = 0x44B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B51Cu;
        // 0x44b520: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B524u;
        goto label_44b524;
    }
    ctx->pc = 0x44B51Cu;
    {
        const bool branch_taken_0x44b51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B51Cu;
        // 0x44b520: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b51c) {
            ctx->pc = 0x44B528u;
            goto label_44b528;
        }
    }
    ctx->pc = 0x44B524u;
label_44b524:
    // 0x44b524: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x44b524u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44b528:
    // 0x44b528: 0x24ea0001  addiu       $t2, $a3, 0x1
    ctx->pc = 0x44b528u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_44b52c:
    // 0x44b52c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x44b52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44b530:
    // 0x44b530: 0x8d07001c  lw          $a3, 0x1C($t0)
    ctx->pc = 0x44b530u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_44b534:
    // 0x44b534: 0x12c00011  beqz        $s6, . + 4 + (0x11 << 2)
label_44b538:
    if (ctx->pc == 0x44B538u) {
        ctx->pc = 0x44B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B534u;
        // 0x44b538: 0x8e0b000c  lw          $t3, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B53Cu;
        goto label_44b53c;
    }
    ctx->pc = 0x44B534u;
    {
        const bool branch_taken_0x44b534 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B534u;
        // 0x44b538: 0x8e0b000c  lw          $t3, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b534) {
            ctx->pc = 0x44B57Cu;
            goto label_44b57c;
        }
    }
    ctx->pc = 0x44B53Cu;
label_44b53c:
    // 0x44b53c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44b53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44b540:
    // 0x44b540: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x44b540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_44b544:
    // 0x44b544: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44b544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_44b548:
    // 0x44b548: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
label_44b54c:
    if (ctx->pc == 0x44B54Cu) {
        ctx->pc = 0x44B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B548u;
        // 0x44b54c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B550u;
        goto label_44b550;
    }
    ctx->pc = 0x44B548u;
    {
        const bool branch_taken_0x44b548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x44B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B548u;
        // 0x44b54c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b548) {
            ctx->pc = 0x44B558u;
            goto label_44b558;
        }
    }
    ctx->pc = 0x44B550u;
label_44b550:
    // 0x44b550: 0x1000000a  b           . + 4 + (0xA << 2)
label_44b554:
    if (ctx->pc == 0x44B554u) {
        ctx->pc = 0x44B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B550u;
        // 0x44b554: 0x80602d  daddu       $t4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B558u;
        goto label_44b558;
    }
    ctx->pc = 0x44B550u;
    {
        const bool branch_taken_0x44b550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B550u;
        // 0x44b554: 0x80602d  daddu       $t4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b550) {
            ctx->pc = 0x44B57Cu;
            goto label_44b57c;
        }
    }
    ctx->pc = 0x44B558u;
label_44b558:
    // 0x44b558: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x44b558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_44b55c:
    // 0x44b55c: 0xd6102b  sltu        $v0, $a2, $s6
    ctx->pc = 0x44b55cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_44b560:
    // 0x44b560: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_44b564:
    if (ctx->pc == 0x44B564u) {
        ctx->pc = 0x44B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B560u;
        // 0x44b564: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B568u;
        goto label_44b568;
    }
    ctx->pc = 0x44B560u;
    {
        const bool branch_taken_0x44b560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B560u;
        // 0x44b564: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b560) {
            ctx->pc = 0x44B57Cu;
            goto label_44b57c;
        }
    }
    ctx->pc = 0x44B568u;
label_44b568:
    // 0x44b568: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x44b568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_44b56c:
    // 0x44b56c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44b570:
    // 0x44b570: 0x1465fffa  bne         $v1, $a1, . + 4 + (-0x6 << 2)
label_44b574:
    if (ctx->pc == 0x44B574u) {
        ctx->pc = 0x44B574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B570u;
        // 0x44b574: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B578u;
        goto label_44b578;
    }
    ctx->pc = 0x44B570u;
    {
        const bool branch_taken_0x44b570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x44B574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B570u;
        // 0x44b574: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b570) {
            ctx->pc = 0x44B55Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b55c;
        }
    }
    ctx->pc = 0x44B578u;
label_44b578:
    // 0x44b578: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x44b578u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44b57c:
    // 0x44b57c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x44b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_44b580:
    // 0x44b580: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x44b580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_44b584:
    // 0x44b584: 0x8d030018  lw          $v1, 0x18($t0)
    ctx->pc = 0x44b584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_44b588:
    // 0x44b588: 0x4b2821  addu        $a1, $v0, $t3
    ctx->pc = 0x44b588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_44b58c:
    // 0x44b58c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x44b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_44b590:
    // 0x44b590: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x44b590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_44b594:
    // 0x44b594: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x44b594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_44b598:
    // 0x44b598: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x44b598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_44b59c:
    // 0x44b59c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x44b59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_44b5a0:
    // 0x44b5a0: 0x8d040018  lw          $a0, 0x18($t0)
    ctx->pc = 0x44b5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_44b5a4:
    // 0x44b5a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_44b5a8:
    // 0x44b5a8: 0xacac0000  sw          $t4, 0x0($a1)
    ctx->pc = 0x44b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
label_44b5ac:
    // 0x44b5ac: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x44b5acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44b5b0:
    // 0x44b5b0: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_44b5b4:
    if (ctx->pc == 0x44B5B4u) {
        ctx->pc = 0x44B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B5B0u;
        // 0x44b5b4: 0x1244824  and         $t1, $t1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B5B8u;
        goto label_44b5b8;
    }
    ctx->pc = 0x44B5B0u;
    {
        const bool branch_taken_0x44b5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B5B0u;
        // 0x44b5b4: 0x1244824  and         $t1, $t1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b5b0) {
            ctx->pc = 0x44B500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b500;
        }
    }
    ctx->pc = 0x44B5B8u;
label_44b5b8:
    // 0x44b5b8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x44b5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_44b5bc:
    // 0x44b5bc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x44b5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44b5c0:
    // 0x44b5c0: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x44b5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_44b5c4:
    // 0x44b5c4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x44b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_44b5c8:
    // 0x44b5c8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_44b5cc:
    if (ctx->pc == 0x44B5CCu) {
        ctx->pc = 0x44B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B5C8u;
        // 0x44b5cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B5D0u;
        goto label_44b5d0;
    }
    ctx->pc = 0x44B5C8u;
    {
        const bool branch_taken_0x44b5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B5C8u;
        // 0x44b5cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b5c8) {
            ctx->pc = 0x44B664u;
            goto label_44b664;
        }
    }
    ctx->pc = 0x44B5D0u;
label_44b5d0:
    // 0x44b5d0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x44b5d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_44b5d4:
    // 0x44b5d4: 0x8e0c0018  lw          $t4, 0x18($s0)
    ctx->pc = 0x44b5d4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_44b5d8:
    // 0x44b5d8: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x44b5d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44b5dc:
    // 0x44b5dc: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x44b5dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_44b5e0:
    // 0x44b5e0: 0x240d000c  addiu       $t5, $zero, 0xC
    ctx->pc = 0x44b5e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_44b5e4:
    // 0x44b5e4: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x44b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_44b5e8:
    // 0x44b5e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x44b5e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44b5ec:
    // 0x44b5ec: 0x6c1021  addu        $v0, $v1, $t4
    ctx->pc = 0x44b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_44b5f0:
    // 0x44b5f0: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x44b5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_44b5f4:
    // 0x44b5f4: 0x24ea0001  addiu       $t2, $a3, 0x1
    ctx->pc = 0x44b5f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_44b5f8:
    // 0x44b5f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_44b5fc:
    if (ctx->pc == 0x44B5FCu) {
        ctx->pc = 0x44B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B5F8u;
        // 0x44b5fc: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B600u;
        goto label_44b600;
    }
    ctx->pc = 0x44B5F8u;
    {
        const bool branch_taken_0x44b5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B5F8u;
        // 0x44b5fc: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b5f8) {
            ctx->pc = 0x44B604u;
            goto label_44b604;
        }
    }
    ctx->pc = 0x44B600u;
label_44b600:
    // 0x44b600: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x44b600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_44b604:
    // 0x44b604: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x44b604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_44b608:
    // 0x44b608: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x44b608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44b60c:
    // 0x44b60c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_44b610:
    if (ctx->pc == 0x44B610u) {
        ctx->pc = 0x44B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B60Cu;
        // 0x44b610: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B614u;
        goto label_44b614;
    }
    ctx->pc = 0x44B60Cu;
    {
        const bool branch_taken_0x44b60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B60Cu;
        // 0x44b610: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b60c) {
            ctx->pc = 0x44B650u;
            goto label_44b650;
        }
    }
    ctx->pc = 0x44B614u;
label_44b614:
    // 0x44b614: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x44b614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_44b618:
    // 0x44b618: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44b618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_44b61c:
    // 0x44b61c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x44b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44b620:
    // 0x44b620: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_44b624:
    if (ctx->pc == 0x44B624u) {
        ctx->pc = 0x44B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B620u;
        // 0x44b624: 0xed2018  mult        $a0, $a3, $t5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B628u;
        goto label_44b628;
    }
    ctx->pc = 0x44B620u;
    {
        const bool branch_taken_0x44b620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B620u;
        // 0x44b624: 0xed2018  mult        $a0, $a3, $t5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b620) {
            ctx->pc = 0x44B600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b600;
        }
    }
    ctx->pc = 0x44B628u;
label_44b628:
    // 0x44b628: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x44b628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44b62c:
    // 0x44b62c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x44b62cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44b630:
    // 0x44b630: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x44b630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_44b634:
    // 0x44b634: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x44b634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_44b638:
    // 0x44b638: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x44b638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44b63c:
    // 0x44b63c: 0x54a3fff1  bnel        $a1, $v1, . + 4 + (-0xF << 2)
label_44b640:
    if (ctx->pc == 0x44B640u) {
        ctx->pc = 0x44B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B63Cu;
        // 0x44b640: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B644u;
        goto label_44b644;
    }
    ctx->pc = 0x44B63Cu;
    {
        const bool branch_taken_0x44b63c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x44b63c) {
            ctx->pc = 0x44B640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B63Cu;
            // 0x44b640: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B604u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b604;
        }
    }
    ctx->pc = 0x44B644u;
label_44b644:
    // 0x44b644: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x44b644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_44b648:
    // 0x44b648: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x44b648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_44b64c:
    // 0x44b64c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x44b64cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_44b650:
    // 0x44b650: 0x8d620020  lw          $v0, 0x20($t3)
    ctx->pc = 0x44b650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 32)));
label_44b654:
    // 0x44b654: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x44b654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_44b658:
    // 0x44b658: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x44b658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44b65c:
    // 0x44b65c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_44b660:
    if (ctx->pc == 0x44B660u) {
        ctx->pc = 0x44B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B65Cu;
        // 0x44b660: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B664u;
        goto label_44b664;
    }
    ctx->pc = 0x44B65Cu;
    {
        const bool branch_taken_0x44b65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B65Cu;
        // 0x44b660: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b65c) {
            ctx->pc = 0x44B5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b5e8;
        }
    }
    ctx->pc = 0x44B664u;
label_44b664:
    // 0x44b664: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x44b664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_44b668:
    // 0x44b668: 0x1c0882d  daddu       $s1, $t6, $zero
    ctx->pc = 0x44b668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_44b66c:
    // 0x44b66c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x44b66cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44b670:
    // 0x44b670: 0x1440ff7f  bnez        $v0, . + 4 + (-0x81 << 2)
label_44b674:
    if (ctx->pc == 0x44B674u) {
        ctx->pc = 0x44B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B670u;
        // 0x44b674: 0x2351818  mult        $v1, $s1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B678u;
        goto label_44b678;
    }
    ctx->pc = 0x44B670u;
    {
        const bool branch_taken_0x44b670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B670u;
        // 0x44b674: 0x2351818  mult        $v1, $s1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b670) {
            ctx->pc = 0x44B470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b470;
        }
    }
    ctx->pc = 0x44B678u;
label_44b678:
    // 0x44b678: 0x52400006  beql        $s2, $zero, . + 4 + (0x6 << 2)
label_44b67c:
    if (ctx->pc == 0x44B67Cu) {
        ctx->pc = 0x44B67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B678u;
        // 0x44b67c: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B680u;
        goto label_44b680;
    }
    ctx->pc = 0x44B678u;
    {
        const bool branch_taken_0x44b678 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b678) {
            ctx->pc = 0x44B67Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B678u;
            // 0x44b67c: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B694u;
            goto label_44b694;
        }
    }
    ctx->pc = 0x44B680u;
label_44b680:
    // 0x44b680: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x44b680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_44b684:
    // 0x44b684: 0xc112430  jal         func_4490C0
label_44b688:
    if (ctx->pc == 0x44B688u) {
        ctx->pc = 0x44B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B684u;
        // 0x44b688: 0x3c42018  mult        $a0, $fp, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B68Cu;
        goto label_44b68c;
    }
    ctx->pc = 0x44B684u;
    SET_GPR_U32(ctx, 31, 0x44B68Cu);
    ctx->pc = 0x44B688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B684u;
    // 0x44b688: 0x3c42018  mult        $a0, $fp, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4490C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4490C0u, 0x44B684u, 0x44B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B68Cu;
label_44b68c:
    // 0x44b68c: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x44b68cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_44b690:
    // 0x44b690: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x44b690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_44b694:
    // 0x44b694: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x44b694u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44b698:
    // 0x44b698: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x44b698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_44b69c:
    // 0x44b69c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x44b69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_44b6a0:
    // 0x44b6a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_44b6a4:
    // 0x44b6a4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_44b6a8:
    if (ctx->pc == 0x44B6A8u) {
        ctx->pc = 0x44B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B6A4u;
        // 0x44b6a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B6ACu;
        goto label_44b6ac;
    }
    ctx->pc = 0x44B6A4u;
    {
        const bool branch_taken_0x44b6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B6A4u;
        // 0x44b6a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b6a4) {
            ctx->pc = 0x44B704u;
            goto label_44b704;
        }
    }
    ctx->pc = 0x44B6ACu;
label_44b6ac:
    // 0x44b6ac: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x44b6acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_44b6b0:
    // 0x44b6b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x44b6b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44b6b4:
    // 0x44b6b4: 0x8d05000c  lw          $a1, 0xC($t0)
    ctx->pc = 0x44b6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_44b6b8:
    // 0x44b6b8: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x44b6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_44b6bc:
    // 0x44b6bc: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x44b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_44b6c0:
    // 0x44b6c0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x44b6c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_44b6c4:
    // 0x44b6c4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_44b6c8:
    if (ctx->pc == 0x44B6C8u) {
        ctx->pc = 0x44B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B6C4u;
        // 0x44b6c8: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B6CCu;
        goto label_44b6cc;
    }
    ctx->pc = 0x44B6C4u;
    {
        const bool branch_taken_0x44b6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b6c4) {
            ctx->pc = 0x44B6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B6C4u;
            // 0x44b6c8: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B6F4u;
            goto label_44b6f4;
        }
    }
    ctx->pc = 0x44B6CCu;
label_44b6cc:
    // 0x44b6cc: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x44b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_44b6d0:
    // 0x44b6d0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x44b6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_44b6d4:
    // 0x44b6d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x44b6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_44b6d8:
    // 0x44b6d8: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x44b6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_44b6dc:
    // 0x44b6dc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x44b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_44b6e0:
    // 0x44b6e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44b6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_44b6e4:
    // 0x44b6e4: 0x2529000c  addiu       $t1, $t1, 0xC
    ctx->pc = 0x44b6e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
label_44b6e8:
    // 0x44b6e8: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x44b6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_44b6ec:
    // 0x44b6ec: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x44b6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
label_44b6f0:
    // 0x44b6f0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x44b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_44b6f4:
    // 0x44b6f4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x44b6f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_44b6f8:
    // 0x44b6f8: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x44b6f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44b6fc:
    // 0x44b6fc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_44b700:
    if (ctx->pc == 0x44B700u) {
        ctx->pc = 0x44B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B6FCu;
        // 0x44b700: 0x24a50024  addiu       $a1, $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B704u;
        goto label_44b704;
    }
    ctx->pc = 0x44B6FCu;
    {
        const bool branch_taken_0x44b6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B6FCu;
        // 0x44b700: 0x24a50024  addiu       $a1, $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b6fc) {
            ctx->pc = 0x44B6B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b6b8;
        }
    }
    ctx->pc = 0x44B704u;
label_44b704:
    // 0x44b704: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x44b704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_44b708:
    // 0x44b708: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x44b708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_44b70c:
    // 0x44b70c: 0xae670018  sw          $a3, 0x18($s3)
    ctx->pc = 0x44b70cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 7));
label_44b710:
    // 0x44b710: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x44b710u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_44b714:
    // 0x44b714: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x44b714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_44b718:
    // 0x44b718: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x44b718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44b71c:
    // 0x44b71c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x44b71cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44b720:
    // 0x44b720: 0xc1133a8  jal         func_44CEA0
label_44b724:
    if (ctx->pc == 0x44B724u) {
        ctx->pc = 0x44B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B720u;
        // 0x44b724: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B728u;
        goto label_44b728;
    }
    ctx->pc = 0x44B720u;
    SET_GPR_U32(ctx, 31, 0x44B728u);
    ctx->pc = 0x44B724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B720u;
    // 0x44b724: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x44CEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44CEA0u, 0x44B720u, 0x44B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B728u;
label_44b728:
    // 0x44b728: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x44b728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_44b72c:
    // 0x44b72c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x44b72cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44b730:
    // 0x44b730: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x44b730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_44b734:
    // 0x44b734: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x44b734u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_44b738:
    // 0x44b738: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x44b738u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_44b73c:
    // 0x44b73c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x44b73cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_44b740:
    // 0x44b740: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x44b740u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_44b744:
    // 0x44b744: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x44b744u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44b748:
    // 0x44b748: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x44b748u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44b74c:
    // 0x44b74c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x44b74cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44b750:
    // 0x44b750: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44b750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44b754:
    // 0x44b754: 0x3e00008  jr          $ra
label_44b758:
    if (ctx->pc == 0x44B758u) {
        ctx->pc = 0x44B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B754u;
        // 0x44b758: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44B75Cu;
        goto label_44b75c;
    }
    ctx->pc = 0x44B754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B754u;
        // 0x44b758: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44B754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44B75Cu;
label_44b75c:
    // 0x44b75c: 0x0  nop
    ctx->pc = 0x44b75cu;
    // NOP
    ctx->pc = 0x44b760u;
}
