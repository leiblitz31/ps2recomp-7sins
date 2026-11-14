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

// Function: sub_0012A090
// Address: 0x12a090 - 0x12a6a0
void sub_0012A090_0x12a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A090_0x12a090");
#endif

    switch (ctx->pc) {
        case 0x12a090u: goto label_12a090;
        case 0x12a094u: goto label_12a094;
        case 0x12a098u: goto label_12a098;
        case 0x12a09cu: goto label_12a09c;
        case 0x12a0a0u: goto label_12a0a0;
        case 0x12a0a4u: goto label_12a0a4;
        case 0x12a0a8u: goto label_12a0a8;
        case 0x12a0acu: goto label_12a0ac;
        case 0x12a0b0u: goto label_12a0b0;
        case 0x12a0b4u: goto label_12a0b4;
        case 0x12a0b8u: goto label_12a0b8;
        case 0x12a0bcu: goto label_12a0bc;
        case 0x12a0c0u: goto label_12a0c0;
        case 0x12a0c4u: goto label_12a0c4;
        case 0x12a0c8u: goto label_12a0c8;
        case 0x12a0ccu: goto label_12a0cc;
        case 0x12a0d0u: goto label_12a0d0;
        case 0x12a0d4u: goto label_12a0d4;
        case 0x12a0d8u: goto label_12a0d8;
        case 0x12a0dcu: goto label_12a0dc;
        case 0x12a0e0u: goto label_12a0e0;
        case 0x12a0e4u: goto label_12a0e4;
        case 0x12a0e8u: goto label_12a0e8;
        case 0x12a0ecu: goto label_12a0ec;
        case 0x12a0f0u: goto label_12a0f0;
        case 0x12a0f4u: goto label_12a0f4;
        case 0x12a0f8u: goto label_12a0f8;
        case 0x12a0fcu: goto label_12a0fc;
        case 0x12a100u: goto label_12a100;
        case 0x12a104u: goto label_12a104;
        case 0x12a108u: goto label_12a108;
        case 0x12a10cu: goto label_12a10c;
        case 0x12a110u: goto label_12a110;
        case 0x12a114u: goto label_12a114;
        case 0x12a118u: goto label_12a118;
        case 0x12a11cu: goto label_12a11c;
        case 0x12a120u: goto label_12a120;
        case 0x12a124u: goto label_12a124;
        case 0x12a128u: goto label_12a128;
        case 0x12a12cu: goto label_12a12c;
        case 0x12a130u: goto label_12a130;
        case 0x12a134u: goto label_12a134;
        case 0x12a138u: goto label_12a138;
        case 0x12a13cu: goto label_12a13c;
        case 0x12a140u: goto label_12a140;
        case 0x12a144u: goto label_12a144;
        case 0x12a148u: goto label_12a148;
        case 0x12a14cu: goto label_12a14c;
        case 0x12a150u: goto label_12a150;
        case 0x12a154u: goto label_12a154;
        case 0x12a158u: goto label_12a158;
        case 0x12a15cu: goto label_12a15c;
        case 0x12a160u: goto label_12a160;
        case 0x12a164u: goto label_12a164;
        case 0x12a168u: goto label_12a168;
        case 0x12a16cu: goto label_12a16c;
        case 0x12a170u: goto label_12a170;
        case 0x12a174u: goto label_12a174;
        case 0x12a178u: goto label_12a178;
        case 0x12a17cu: goto label_12a17c;
        case 0x12a180u: goto label_12a180;
        case 0x12a184u: goto label_12a184;
        case 0x12a188u: goto label_12a188;
        case 0x12a18cu: goto label_12a18c;
        case 0x12a190u: goto label_12a190;
        case 0x12a194u: goto label_12a194;
        case 0x12a198u: goto label_12a198;
        case 0x12a19cu: goto label_12a19c;
        case 0x12a1a0u: goto label_12a1a0;
        case 0x12a1a4u: goto label_12a1a4;
        case 0x12a1a8u: goto label_12a1a8;
        case 0x12a1acu: goto label_12a1ac;
        case 0x12a1b0u: goto label_12a1b0;
        case 0x12a1b4u: goto label_12a1b4;
        case 0x12a1b8u: goto label_12a1b8;
        case 0x12a1bcu: goto label_12a1bc;
        case 0x12a1c0u: goto label_12a1c0;
        case 0x12a1c4u: goto label_12a1c4;
        case 0x12a1c8u: goto label_12a1c8;
        case 0x12a1ccu: goto label_12a1cc;
        case 0x12a1d0u: goto label_12a1d0;
        case 0x12a1d4u: goto label_12a1d4;
        case 0x12a1d8u: goto label_12a1d8;
        case 0x12a1dcu: goto label_12a1dc;
        case 0x12a1e0u: goto label_12a1e0;
        case 0x12a1e4u: goto label_12a1e4;
        case 0x12a1e8u: goto label_12a1e8;
        case 0x12a1ecu: goto label_12a1ec;
        case 0x12a1f0u: goto label_12a1f0;
        case 0x12a1f4u: goto label_12a1f4;
        case 0x12a1f8u: goto label_12a1f8;
        case 0x12a1fcu: goto label_12a1fc;
        case 0x12a200u: goto label_12a200;
        case 0x12a204u: goto label_12a204;
        case 0x12a208u: goto label_12a208;
        case 0x12a20cu: goto label_12a20c;
        case 0x12a210u: goto label_12a210;
        case 0x12a214u: goto label_12a214;
        case 0x12a218u: goto label_12a218;
        case 0x12a21cu: goto label_12a21c;
        case 0x12a220u: goto label_12a220;
        case 0x12a224u: goto label_12a224;
        case 0x12a228u: goto label_12a228;
        case 0x12a22cu: goto label_12a22c;
        case 0x12a230u: goto label_12a230;
        case 0x12a234u: goto label_12a234;
        case 0x12a238u: goto label_12a238;
        case 0x12a23cu: goto label_12a23c;
        case 0x12a240u: goto label_12a240;
        case 0x12a244u: goto label_12a244;
        case 0x12a248u: goto label_12a248;
        case 0x12a24cu: goto label_12a24c;
        case 0x12a250u: goto label_12a250;
        case 0x12a254u: goto label_12a254;
        case 0x12a258u: goto label_12a258;
        case 0x12a25cu: goto label_12a25c;
        case 0x12a260u: goto label_12a260;
        case 0x12a264u: goto label_12a264;
        case 0x12a268u: goto label_12a268;
        case 0x12a26cu: goto label_12a26c;
        case 0x12a270u: goto label_12a270;
        case 0x12a274u: goto label_12a274;
        case 0x12a278u: goto label_12a278;
        case 0x12a27cu: goto label_12a27c;
        case 0x12a280u: goto label_12a280;
        case 0x12a284u: goto label_12a284;
        case 0x12a288u: goto label_12a288;
        case 0x12a28cu: goto label_12a28c;
        case 0x12a290u: goto label_12a290;
        case 0x12a294u: goto label_12a294;
        case 0x12a298u: goto label_12a298;
        case 0x12a29cu: goto label_12a29c;
        case 0x12a2a0u: goto label_12a2a0;
        case 0x12a2a4u: goto label_12a2a4;
        case 0x12a2a8u: goto label_12a2a8;
        case 0x12a2acu: goto label_12a2ac;
        case 0x12a2b0u: goto label_12a2b0;
        case 0x12a2b4u: goto label_12a2b4;
        case 0x12a2b8u: goto label_12a2b8;
        case 0x12a2bcu: goto label_12a2bc;
        case 0x12a2c0u: goto label_12a2c0;
        case 0x12a2c4u: goto label_12a2c4;
        case 0x12a2c8u: goto label_12a2c8;
        case 0x12a2ccu: goto label_12a2cc;
        case 0x12a2d0u: goto label_12a2d0;
        case 0x12a2d4u: goto label_12a2d4;
        case 0x12a2d8u: goto label_12a2d8;
        case 0x12a2dcu: goto label_12a2dc;
        case 0x12a2e0u: goto label_12a2e0;
        case 0x12a2e4u: goto label_12a2e4;
        case 0x12a2e8u: goto label_12a2e8;
        case 0x12a2ecu: goto label_12a2ec;
        case 0x12a2f0u: goto label_12a2f0;
        case 0x12a2f4u: goto label_12a2f4;
        case 0x12a2f8u: goto label_12a2f8;
        case 0x12a2fcu: goto label_12a2fc;
        case 0x12a300u: goto label_12a300;
        case 0x12a304u: goto label_12a304;
        case 0x12a308u: goto label_12a308;
        case 0x12a30cu: goto label_12a30c;
        case 0x12a310u: goto label_12a310;
        case 0x12a314u: goto label_12a314;
        case 0x12a318u: goto label_12a318;
        case 0x12a31cu: goto label_12a31c;
        case 0x12a320u: goto label_12a320;
        case 0x12a324u: goto label_12a324;
        case 0x12a328u: goto label_12a328;
        case 0x12a32cu: goto label_12a32c;
        case 0x12a330u: goto label_12a330;
        case 0x12a334u: goto label_12a334;
        case 0x12a338u: goto label_12a338;
        case 0x12a33cu: goto label_12a33c;
        case 0x12a340u: goto label_12a340;
        case 0x12a344u: goto label_12a344;
        case 0x12a348u: goto label_12a348;
        case 0x12a34cu: goto label_12a34c;
        case 0x12a350u: goto label_12a350;
        case 0x12a354u: goto label_12a354;
        case 0x12a358u: goto label_12a358;
        case 0x12a35cu: goto label_12a35c;
        case 0x12a360u: goto label_12a360;
        case 0x12a364u: goto label_12a364;
        case 0x12a368u: goto label_12a368;
        case 0x12a36cu: goto label_12a36c;
        case 0x12a370u: goto label_12a370;
        case 0x12a374u: goto label_12a374;
        case 0x12a378u: goto label_12a378;
        case 0x12a37cu: goto label_12a37c;
        case 0x12a380u: goto label_12a380;
        case 0x12a384u: goto label_12a384;
        case 0x12a388u: goto label_12a388;
        case 0x12a38cu: goto label_12a38c;
        case 0x12a390u: goto label_12a390;
        case 0x12a394u: goto label_12a394;
        case 0x12a398u: goto label_12a398;
        case 0x12a39cu: goto label_12a39c;
        case 0x12a3a0u: goto label_12a3a0;
        case 0x12a3a4u: goto label_12a3a4;
        case 0x12a3a8u: goto label_12a3a8;
        case 0x12a3acu: goto label_12a3ac;
        case 0x12a3b0u: goto label_12a3b0;
        case 0x12a3b4u: goto label_12a3b4;
        case 0x12a3b8u: goto label_12a3b8;
        case 0x12a3bcu: goto label_12a3bc;
        case 0x12a3c0u: goto label_12a3c0;
        case 0x12a3c4u: goto label_12a3c4;
        case 0x12a3c8u: goto label_12a3c8;
        case 0x12a3ccu: goto label_12a3cc;
        case 0x12a3d0u: goto label_12a3d0;
        case 0x12a3d4u: goto label_12a3d4;
        case 0x12a3d8u: goto label_12a3d8;
        case 0x12a3dcu: goto label_12a3dc;
        case 0x12a3e0u: goto label_12a3e0;
        case 0x12a3e4u: goto label_12a3e4;
        case 0x12a3e8u: goto label_12a3e8;
        case 0x12a3ecu: goto label_12a3ec;
        case 0x12a3f0u: goto label_12a3f0;
        case 0x12a3f4u: goto label_12a3f4;
        case 0x12a3f8u: goto label_12a3f8;
        case 0x12a3fcu: goto label_12a3fc;
        case 0x12a400u: goto label_12a400;
        case 0x12a404u: goto label_12a404;
        case 0x12a408u: goto label_12a408;
        case 0x12a40cu: goto label_12a40c;
        case 0x12a410u: goto label_12a410;
        case 0x12a414u: goto label_12a414;
        case 0x12a418u: goto label_12a418;
        case 0x12a41cu: goto label_12a41c;
        case 0x12a420u: goto label_12a420;
        case 0x12a424u: goto label_12a424;
        case 0x12a428u: goto label_12a428;
        case 0x12a42cu: goto label_12a42c;
        case 0x12a430u: goto label_12a430;
        case 0x12a434u: goto label_12a434;
        case 0x12a438u: goto label_12a438;
        case 0x12a43cu: goto label_12a43c;
        case 0x12a440u: goto label_12a440;
        case 0x12a444u: goto label_12a444;
        case 0x12a448u: goto label_12a448;
        case 0x12a44cu: goto label_12a44c;
        case 0x12a450u: goto label_12a450;
        case 0x12a454u: goto label_12a454;
        case 0x12a458u: goto label_12a458;
        case 0x12a45cu: goto label_12a45c;
        case 0x12a460u: goto label_12a460;
        case 0x12a464u: goto label_12a464;
        case 0x12a468u: goto label_12a468;
        case 0x12a46cu: goto label_12a46c;
        case 0x12a470u: goto label_12a470;
        case 0x12a474u: goto label_12a474;
        case 0x12a478u: goto label_12a478;
        case 0x12a47cu: goto label_12a47c;
        case 0x12a480u: goto label_12a480;
        case 0x12a484u: goto label_12a484;
        case 0x12a488u: goto label_12a488;
        case 0x12a48cu: goto label_12a48c;
        case 0x12a490u: goto label_12a490;
        case 0x12a494u: goto label_12a494;
        case 0x12a498u: goto label_12a498;
        case 0x12a49cu: goto label_12a49c;
        case 0x12a4a0u: goto label_12a4a0;
        case 0x12a4a4u: goto label_12a4a4;
        case 0x12a4a8u: goto label_12a4a8;
        case 0x12a4acu: goto label_12a4ac;
        case 0x12a4b0u: goto label_12a4b0;
        case 0x12a4b4u: goto label_12a4b4;
        case 0x12a4b8u: goto label_12a4b8;
        case 0x12a4bcu: goto label_12a4bc;
        case 0x12a4c0u: goto label_12a4c0;
        case 0x12a4c4u: goto label_12a4c4;
        case 0x12a4c8u: goto label_12a4c8;
        case 0x12a4ccu: goto label_12a4cc;
        case 0x12a4d0u: goto label_12a4d0;
        case 0x12a4d4u: goto label_12a4d4;
        case 0x12a4d8u: goto label_12a4d8;
        case 0x12a4dcu: goto label_12a4dc;
        case 0x12a4e0u: goto label_12a4e0;
        case 0x12a4e4u: goto label_12a4e4;
        case 0x12a4e8u: goto label_12a4e8;
        case 0x12a4ecu: goto label_12a4ec;
        case 0x12a4f0u: goto label_12a4f0;
        case 0x12a4f4u: goto label_12a4f4;
        case 0x12a4f8u: goto label_12a4f8;
        case 0x12a4fcu: goto label_12a4fc;
        case 0x12a500u: goto label_12a500;
        case 0x12a504u: goto label_12a504;
        case 0x12a508u: goto label_12a508;
        case 0x12a50cu: goto label_12a50c;
        case 0x12a510u: goto label_12a510;
        case 0x12a514u: goto label_12a514;
        case 0x12a518u: goto label_12a518;
        case 0x12a51cu: goto label_12a51c;
        case 0x12a520u: goto label_12a520;
        case 0x12a524u: goto label_12a524;
        case 0x12a528u: goto label_12a528;
        case 0x12a52cu: goto label_12a52c;
        case 0x12a530u: goto label_12a530;
        case 0x12a534u: goto label_12a534;
        case 0x12a538u: goto label_12a538;
        case 0x12a53cu: goto label_12a53c;
        case 0x12a540u: goto label_12a540;
        case 0x12a544u: goto label_12a544;
        case 0x12a548u: goto label_12a548;
        case 0x12a54cu: goto label_12a54c;
        case 0x12a550u: goto label_12a550;
        case 0x12a554u: goto label_12a554;
        case 0x12a558u: goto label_12a558;
        case 0x12a55cu: goto label_12a55c;
        case 0x12a560u: goto label_12a560;
        case 0x12a564u: goto label_12a564;
        case 0x12a568u: goto label_12a568;
        case 0x12a56cu: goto label_12a56c;
        case 0x12a570u: goto label_12a570;
        case 0x12a574u: goto label_12a574;
        case 0x12a578u: goto label_12a578;
        case 0x12a57cu: goto label_12a57c;
        case 0x12a580u: goto label_12a580;
        case 0x12a584u: goto label_12a584;
        case 0x12a588u: goto label_12a588;
        case 0x12a58cu: goto label_12a58c;
        case 0x12a590u: goto label_12a590;
        case 0x12a594u: goto label_12a594;
        case 0x12a598u: goto label_12a598;
        case 0x12a59cu: goto label_12a59c;
        case 0x12a5a0u: goto label_12a5a0;
        case 0x12a5a4u: goto label_12a5a4;
        case 0x12a5a8u: goto label_12a5a8;
        case 0x12a5acu: goto label_12a5ac;
        case 0x12a5b0u: goto label_12a5b0;
        case 0x12a5b4u: goto label_12a5b4;
        case 0x12a5b8u: goto label_12a5b8;
        case 0x12a5bcu: goto label_12a5bc;
        case 0x12a5c0u: goto label_12a5c0;
        case 0x12a5c4u: goto label_12a5c4;
        case 0x12a5c8u: goto label_12a5c8;
        case 0x12a5ccu: goto label_12a5cc;
        case 0x12a5d0u: goto label_12a5d0;
        case 0x12a5d4u: goto label_12a5d4;
        case 0x12a5d8u: goto label_12a5d8;
        case 0x12a5dcu: goto label_12a5dc;
        case 0x12a5e0u: goto label_12a5e0;
        case 0x12a5e4u: goto label_12a5e4;
        case 0x12a5e8u: goto label_12a5e8;
        case 0x12a5ecu: goto label_12a5ec;
        case 0x12a5f0u: goto label_12a5f0;
        case 0x12a5f4u: goto label_12a5f4;
        case 0x12a5f8u: goto label_12a5f8;
        case 0x12a5fcu: goto label_12a5fc;
        case 0x12a600u: goto label_12a600;
        case 0x12a604u: goto label_12a604;
        case 0x12a608u: goto label_12a608;
        case 0x12a60cu: goto label_12a60c;
        case 0x12a610u: goto label_12a610;
        case 0x12a614u: goto label_12a614;
        case 0x12a618u: goto label_12a618;
        case 0x12a61cu: goto label_12a61c;
        case 0x12a620u: goto label_12a620;
        case 0x12a624u: goto label_12a624;
        case 0x12a628u: goto label_12a628;
        case 0x12a62cu: goto label_12a62c;
        case 0x12a630u: goto label_12a630;
        case 0x12a634u: goto label_12a634;
        case 0x12a638u: goto label_12a638;
        case 0x12a63cu: goto label_12a63c;
        case 0x12a640u: goto label_12a640;
        case 0x12a644u: goto label_12a644;
        case 0x12a648u: goto label_12a648;
        case 0x12a64cu: goto label_12a64c;
        case 0x12a650u: goto label_12a650;
        case 0x12a654u: goto label_12a654;
        case 0x12a658u: goto label_12a658;
        case 0x12a65cu: goto label_12a65c;
        case 0x12a660u: goto label_12a660;
        case 0x12a664u: goto label_12a664;
        case 0x12a668u: goto label_12a668;
        case 0x12a66cu: goto label_12a66c;
        case 0x12a670u: goto label_12a670;
        case 0x12a674u: goto label_12a674;
        case 0x12a678u: goto label_12a678;
        case 0x12a67cu: goto label_12a67c;
        case 0x12a680u: goto label_12a680;
        case 0x12a684u: goto label_12a684;
        case 0x12a688u: goto label_12a688;
        case 0x12a68cu: goto label_12a68c;
        case 0x12a690u: goto label_12a690;
        case 0x12a694u: goto label_12a694;
        case 0x12a698u: goto label_12a698;
        case 0x12a69cu: goto label_12a69c;
        default: break;
    }

    ctx->pc = 0x12a090u;

label_12a090:
    // 0x12a090: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x12a090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_12a094:
    // 0x12a094: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x12a094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_12a098:
    // 0x12a098: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x12a098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_12a09c:
    // 0x12a09c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x12a09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_12a0a0:
    // 0x12a0a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12a0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_12a0a4:
    // 0x12a0a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12a0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_12a0a8:
    // 0x12a0a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12a0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_12a0ac:
    // 0x12a0ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12a0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_12a0b0:
    // 0x12a0b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12a0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_12a0b4:
    // 0x12a0b4: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x12a0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_12a0b8:
    // 0x12a0b8: 0xa3a50150  sb          $a1, 0x150($sp)
    ctx->pc = 0x12a0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 336), (uint8_t)GPR_U32(ctx, 5));
label_12a0bc:
    // 0x12a0bc: 0xafa60160  sw          $a2, 0x160($sp)
    ctx->pc = 0x12a0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 6));
label_12a0c0:
    // 0x12a0c0: 0xafa70170  sw          $a3, 0x170($sp)
    ctx->pc = 0x12a0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 7));
label_12a0c4:
    // 0x12a0c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12a0c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a0c8:
    // 0x12a0c8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x12a0c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a0cc:
    // 0x12a0cc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x12a0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_12a0d0:
    // 0x12a0d0: 0xc04a814  jal         func_12A050
label_12a0d4:
    if (ctx->pc == 0x12A0D4u) {
        ctx->pc = 0x12A0D8u;
        goto label_12a0d8;
    }
    ctx->pc = 0x12A0D0u;
    SET_GPR_U32(ctx, 31, 0x12A0D8u);
    ctx->pc = 0x12A050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A050u, 0x12A0D0u, 0x12A0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A0D8u;
label_12a0d8:
    // 0x12a0d8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x12a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_12a0dc:
    // 0x12a0dc: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x12a0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_12a0e0:
    // 0x12a0e0: 0xc04a9d0  jal         func_12A740
label_12a0e4:
    if (ctx->pc == 0x12A0E4u) {
        ctx->pc = 0x12A0E8u;
        goto label_12a0e8;
    }
    ctx->pc = 0x12A0E0u;
    SET_GPR_U32(ctx, 31, 0x12A0E8u);
    ctx->pc = 0x12A740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A740u, 0x12A0E0u, 0x12A0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A0E8u;
label_12a0e8:
    // 0x12a0e8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x12a0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_12a0ec:
    // 0x12a0ec: 0xc041b48  jal         func_106D20
label_12a0f0:
    if (ctx->pc == 0x12A0F0u) {
        ctx->pc = 0x12A0F4u;
        goto label_12a0f4;
    }
    ctx->pc = 0x12A0ECu;
    SET_GPR_U32(ctx, 31, 0x12A0F4u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x12A0ECu, 0x12A0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A0F4u;
label_12a0f4:
    // 0x12a0f4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x12a0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_12a0f8:
    // 0x12a0f8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x12a0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_12a0fc:
    // 0x12a0fc: 0x24a524b8  addiu       $a1, $a1, 0x24B8
    ctx->pc = 0x12a0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9400));
label_12a100:
    // 0x12a100: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x12a100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_12a104:
    // 0x12a104: 0x27878b50  addiu       $a3, $gp, -0x74B0
    ctx->pc = 0x12a104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937424));
label_12a108:
    // 0x12a108: 0xc0424a8  jal         func_1092A0
label_12a10c:
    if (ctx->pc == 0x12A10Cu) {
        ctx->pc = 0x12A110u;
        goto label_12a110;
    }
    ctx->pc = 0x12A108u;
    SET_GPR_U32(ctx, 31, 0x12A110u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x12A108u, 0x12A110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A110u;
label_12a110:
    // 0x12a110: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x12a110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_12a114:
    // 0x12a114: 0xa040b4bd  sb          $zero, -0x4B43($v0)
    ctx->pc = 0x12a114u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948029), (uint8_t)GPR_U32(ctx, 0));
label_12a118:
    // 0x12a118: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x12a118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_12a11c:
    // 0x12a11c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x12a11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_12a120:
    // 0x12a120: 0xc049ff0  jal         func_127FC0
label_12a124:
    if (ctx->pc == 0x12A124u) {
        ctx->pc = 0x12A128u;
        goto label_12a128;
    }
    ctx->pc = 0x12A120u;
    SET_GPR_U32(ctx, 31, 0x12A128u);
    ctx->pc = 0x127FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127FC0u, 0x12A120u, 0x12A128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A128u;
label_12a128:
    // 0x12a128: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_12a12c:
    if (ctx->pc == 0x12A12Cu) {
        ctx->pc = 0x12A130u;
        goto label_12a130;
    }
    ctx->pc = 0x12A128u;
    {
        const bool branch_taken_0x12a128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a128) {
            ctx->pc = 0x12A150u;
            goto label_12a150;
        }
    }
    ctx->pc = 0x12A130u;
label_12a130:
    // 0x12a130: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x12a130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_12a134:
    // 0x12a134: 0xc041b38  jal         func_106CE0
label_12a138:
    if (ctx->pc == 0x12A138u) {
        ctx->pc = 0x12A13Cu;
        goto label_12a13c;
    }
    ctx->pc = 0x12A134u;
    SET_GPR_U32(ctx, 31, 0x12A13Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x12A134u, 0x12A13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A13Cu;
label_12a13c:
    // 0x12a13c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x12a13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_12a140:
    // 0x12a140: 0x2484b4bd  addiu       $a0, $a0, -0x4B43
    ctx->pc = 0x12a140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948029));
label_12a144:
    // 0x12a144: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12a144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a148:
    // 0x12a148: 0xc0bc5c6  jal         func_2F1718
label_12a14c:
    if (ctx->pc == 0x12A14Cu) {
        ctx->pc = 0x12A150u;
        goto label_12a150;
    }
    ctx->pc = 0x12A148u;
    SET_GPR_U32(ctx, 31, 0x12A150u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x12A148u, 0x12A150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A150u;
label_12a150:
    // 0x12a150: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x12a150u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a154:
    // 0x12a154: 0x1000000b  b           . + 4 + (0xB << 2)
label_12a158:
    if (ctx->pc == 0x12A158u) {
        ctx->pc = 0x12A15Cu;
        goto label_12a15c;
    }
    ctx->pc = 0x12A154u;
    {
        const bool branch_taken_0x12a154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a154) {
            ctx->pc = 0x12A184u;
            goto label_12a184;
        }
    }
    ctx->pc = 0x12A15Cu;
label_12a15c:
    // 0x12a15c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x12a15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_12a160:
    // 0x12a160: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12a160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12a164:
    // 0x12a164: 0xc04a9c0  jal         func_12A700
label_12a168:
    if (ctx->pc == 0x12A168u) {
        ctx->pc = 0x12A16Cu;
        goto label_12a16c;
    }
    ctx->pc = 0x12A164u;
    SET_GPR_U32(ctx, 31, 0x12A16Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x12A164u, 0x12A16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A16Cu;
label_12a16c:
    // 0x12a16c: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x12a16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_12a170:
    // 0x12a170: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12a170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12a174:
    // 0x12a174: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12a174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a178:
    // 0x12a178: 0xc04a630  jal         func_1298C0
label_12a17c:
    if (ctx->pc == 0x12A17Cu) {
        ctx->pc = 0x12A180u;
        goto label_12a180;
    }
    ctx->pc = 0x12A178u;
    SET_GPR_U32(ctx, 31, 0x12A180u);
    ctx->pc = 0x1298C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298C0u, 0x12A178u, 0x12A180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A180u;
label_12a180:
    // 0x12a180: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12a180u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_12a184:
    // 0x12a184: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x12a184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_12a188:
    // 0x12a188: 0xc044598  jal         func_111660
label_12a18c:
    if (ctx->pc == 0x12A18Cu) {
        ctx->pc = 0x12A190u;
        goto label_12a190;
    }
    ctx->pc = 0x12A188u;
    SET_GPR_U32(ctx, 31, 0x12A190u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x12A188u, 0x12A190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A190u;
label_12a190:
    // 0x12a190: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x12a190u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_12a194:
    // 0x12a194: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_12a198:
    if (ctx->pc == 0x12A198u) {
        ctx->pc = 0x12A19Cu;
        goto label_12a19c;
    }
    ctx->pc = 0x12A194u;
    {
        const bool branch_taken_0x12a194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a194) {
            ctx->pc = 0x12A15Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a15c;
        }
    }
    ctx->pc = 0x12A19Cu;
label_12a19c:
    // 0x12a19c: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x12a19cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_12a1a0:
    // 0x12a1a0: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x12a1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_12a1a4:
    // 0x12a1a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12a1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12a1a8:
    // 0x12a1a8: 0xc04a630  jal         func_1298C0
label_12a1ac:
    if (ctx->pc == 0x12A1ACu) {
        ctx->pc = 0x12A1B0u;
        goto label_12a1b0;
    }
    ctx->pc = 0x12A1A8u;
    SET_GPR_U32(ctx, 31, 0x12A1B0u);
    ctx->pc = 0x1298C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298C0u, 0x12A1A8u, 0x12A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A1B0u;
label_12a1b0:
    // 0x12a1b0: 0x93a20150  lbu         $v0, 0x150($sp)
    ctx->pc = 0x12a1b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
label_12a1b4:
    // 0x12a1b4: 0x104000f3  beqz        $v0, . + 4 + (0xF3 << 2)
label_12a1b8:
    if (ctx->pc == 0x12A1B8u) {
        ctx->pc = 0x12A1BCu;
        goto label_12a1bc;
    }
    ctx->pc = 0x12A1B4u;
    {
        const bool branch_taken_0x12a1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a1b4) {
            ctx->pc = 0x12A584u;
            goto label_12a584;
        }
    }
    ctx->pc = 0x12A1BCu;
label_12a1bc:
    // 0x12a1bc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x12a1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_12a1c0:
    // 0x12a1c0: 0xc04a804  jal         func_12A010
label_12a1c4:
    if (ctx->pc == 0x12A1C4u) {
        ctx->pc = 0x12A1C8u;
        goto label_12a1c8;
    }
    ctx->pc = 0x12A1C0u;
    SET_GPR_U32(ctx, 31, 0x12A1C8u);
    ctx->pc = 0x12A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A010u, 0x12A1C0u, 0x12A1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A1C8u;
label_12a1c8:
    // 0x12a1c8: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x12a1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_12a1cc:
    // 0x12a1cc: 0xc119b68  jal         func_466DA0
label_12a1d0:
    if (ctx->pc == 0x12A1D0u) {
        ctx->pc = 0x12A1D4u;
        goto label_12a1d4;
    }
    ctx->pc = 0x12A1CCu;
    SET_GPR_U32(ctx, 31, 0x12A1D4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x12A1CCu, 0x12A1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A1D4u;
label_12a1d4:
    // 0x12a1d4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x12a1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_12a1d8:
    // 0x12a1d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12a1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a1dc:
    // 0x12a1dc: 0xc0400e0  jal         func_100380
label_12a1e0:
    if (ctx->pc == 0x12A1E0u) {
        ctx->pc = 0x12A1E4u;
        goto label_12a1e4;
    }
    ctx->pc = 0x12A1DCu;
    SET_GPR_U32(ctx, 31, 0x12A1E4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x12A1DCu, 0x12A1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A1E4u;
label_12a1e4:
    // 0x12a1e4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12a1e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a1e8:
    // 0x12a1e8: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_12a1ec:
    if (ctx->pc == 0x12A1ECu) {
        ctx->pc = 0x12A1F0u;
        goto label_12a1f0;
    }
    ctx->pc = 0x12A1E8u;
    {
        const bool branch_taken_0x12a1e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a1e8) {
            ctx->pc = 0x12A200u;
            goto label_12a200;
        }
    }
    ctx->pc = 0x12A1F0u;
label_12a1f0:
    // 0x12a1f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12a1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12a1f4:
    // 0x12a1f4: 0xc119f38  jal         func_467CE0
label_12a1f8:
    if (ctx->pc == 0x12A1F8u) {
        ctx->pc = 0x12A1FCu;
        goto label_12a1fc;
    }
    ctx->pc = 0x12A1F4u;
    SET_GPR_U32(ctx, 31, 0x12A1FCu);
    ctx->pc = 0x467CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467CE0u, 0x12A1F4u, 0x12A1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A1FCu;
label_12a1fc:
    // 0x12a1fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12a1fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a200:
    // 0x12a200: 0xaf94ba2c  sw          $s4, -0x45D4($gp)
    ctx->pc = 0x12a200u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949420), GPR_U32(ctx, 20));
label_12a204:
    // 0x12a204: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x12a204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_12a208:
    // 0x12a208: 0x8c502220  lw          $s0, 0x2220($v0)
    ctx->pc = 0x12a208u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8736)));
label_12a20c:
    // 0x12a20c: 0x8f84ba2c  lw          $a0, -0x45D4($gp)
    ctx->pc = 0x12a20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949420)));
label_12a210:
    // 0x12a210: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12a210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12a214:
    // 0x12a214: 0xc119f5c  jal         func_467D70
label_12a218:
    if (ctx->pc == 0x12A218u) {
        ctx->pc = 0x12A21Cu;
        goto label_12a21c;
    }
    ctx->pc = 0x12A214u;
    SET_GPR_U32(ctx, 31, 0x12A21Cu);
    ctx->pc = 0x467D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467D70u, 0x12A214u, 0x12A21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A21Cu;
label_12a21c:
    // 0x12a21c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x12a21cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_12a220:
    // 0x12a220: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12a220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_12a224:
    // 0x12a224: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12a224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_12a228:
    // 0x12a228: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x12a228u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12a22c:
    // 0x12a22c: 0x8f84ba2c  lw          $a0, -0x45D4($gp)
    ctx->pc = 0x12a22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949420)));
label_12a230:
    // 0x12a230: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12a230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12a234:
    // 0x12a234: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12a234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12a238:
    // 0x12a238: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x12a238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_12a23c:
    // 0x12a23c: 0x320f809  jalr        $t9
label_12a240:
    if (ctx->pc == 0x12A240u) {
        ctx->pc = 0x12A244u;
        goto label_12a244;
    }
    ctx->pc = 0x12A23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12A244u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A23Cu, 0x12A244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12A244u;
label_12a244:
    // 0x12a244: 0x8f84ba2c  lw          $a0, -0x45D4($gp)
    ctx->pc = 0x12a244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949420)));
label_12a248:
    // 0x12a248: 0xc049394  jal         func_124E50
label_12a24c:
    if (ctx->pc == 0x12A24Cu) {
        ctx->pc = 0x12A250u;
        goto label_12a250;
    }
    ctx->pc = 0x12A248u;
    SET_GPR_U32(ctx, 31, 0x12A250u);
    ctx->pc = 0x124E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E50u, 0x12A248u, 0x12A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A250u;
label_12a250:
    // 0x12a250: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12a250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a254:
    // 0x12a254: 0x8f858b38  lw          $a1, -0x74C8($gp)
    ctx->pc = 0x12a254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937400)));
label_12a258:
    // 0x12a258: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x12a258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_12a25c:
    // 0x12a25c: 0x8c462220  lw          $a2, 0x2220($v0)
    ctx->pc = 0x12a25cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8736)));
label_12a260:
    // 0x12a260: 0xc0bb778  jal         func_2EDDE0
label_12a264:
    if (ctx->pc == 0x12A264u) {
        ctx->pc = 0x12A268u;
        goto label_12a268;
    }
    ctx->pc = 0x12A260u;
    SET_GPR_U32(ctx, 31, 0x12A268u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x12A260u, 0x12A268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A268u;
label_12a268:
    // 0x12a268: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x12a268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_12a26c:
    // 0x12a26c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x12a26cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_12a270:
    // 0x12a270: 0x24a52280  addiu       $a1, $a1, 0x2280
    ctx->pc = 0x12a270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8832));
label_12a274:
    // 0x12a274: 0xc118058  jal         func_460160
label_12a278:
    if (ctx->pc == 0x12A278u) {
        ctx->pc = 0x12A27Cu;
        goto label_12a27c;
    }
    ctx->pc = 0x12A274u;
    SET_GPR_U32(ctx, 31, 0x12A27Cu);
    ctx->pc = 0x460160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x460160u, 0x12A274u, 0x12A27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A27Cu;
label_12a27c:
    // 0x12a27c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x12a27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_12a280:
    // 0x12a280: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x12a280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_12a284:
    // 0x12a284: 0xc0430e4  jal         func_10C390
label_12a288:
    if (ctx->pc == 0x12A288u) {
        ctx->pc = 0x12A28Cu;
        goto label_12a28c;
    }
    ctx->pc = 0x12A284u;
    SET_GPR_U32(ctx, 31, 0x12A28Cu);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x12A284u, 0x12A28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A28Cu;
label_12a28c:
    // 0x12a28c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x12a28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_12a290:
    // 0x12a290: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x12a290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12a294:
    // 0x12a294: 0xc0402d4  jal         func_100B50
label_12a298:
    if (ctx->pc == 0x12A298u) {
        ctx->pc = 0x12A29Cu;
        goto label_12a29c;
    }
    ctx->pc = 0x12A294u;
    SET_GPR_U32(ctx, 31, 0x12A29Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x12A294u, 0x12A29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A29Cu;
label_12a29c:
    // 0x12a29c: 0xafb000cc  sw          $s0, 0xCC($sp)
    ctx->pc = 0x12a29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 16));
label_12a2a0:
    // 0x12a2a0: 0x8f84ba2c  lw          $a0, -0x45D4($gp)
    ctx->pc = 0x12a2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949420)));
label_12a2a4:
    // 0x12a2a4: 0xc049394  jal         func_124E50
label_12a2a8:
    if (ctx->pc == 0x12A2A8u) {
        ctx->pc = 0x12A2ACu;
        goto label_12a2ac;
    }
    ctx->pc = 0x12A2A4u;
    SET_GPR_U32(ctx, 31, 0x12A2ACu);
    ctx->pc = 0x124E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E50u, 0x12A2A4u, 0x12A2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A2ACu;
label_12a2ac:
    // 0x12a2ac: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x12a2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_12a2b0:
    // 0x12a2b0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x12a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_12a2b4:
    // 0x12a2b4: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x12a2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_12a2b8:
    // 0x12a2b8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x12a2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_12a2bc:
    // 0x12a2bc: 0xc04a6e8  jal         func_129BA0
label_12a2c0:
    if (ctx->pc == 0x12A2C0u) {
        ctx->pc = 0x12A2C4u;
        goto label_12a2c4;
    }
    ctx->pc = 0x12A2BCu;
    SET_GPR_U32(ctx, 31, 0x12A2C4u);
    ctx->pc = 0x129BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129BA0u, 0x12A2BCu, 0x12A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A2C4u;
label_12a2c4:
    // 0x12a2c4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x12a2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_12a2c8:
    // 0x12a2c8: 0xc04a804  jal         func_12A010
label_12a2cc:
    if (ctx->pc == 0x12A2CCu) {
        ctx->pc = 0x12A2D0u;
        goto label_12a2d0;
    }
    ctx->pc = 0x12A2C8u;
    SET_GPR_U32(ctx, 31, 0x12A2D0u);
    ctx->pc = 0x12A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A010u, 0x12A2C8u, 0x12A2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A2D0u;
label_12a2d0:
    // 0x12a2d0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x12a2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_12a2d4:
    // 0x12a2d4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x12a2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_12a2d8:
    // 0x12a2d8: 0x24a524d0  addiu       $a1, $a1, 0x24D0
    ctx->pc = 0x12a2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9424));
label_12a2dc:
    // 0x12a2dc: 0xc040304  jal         func_100C10
label_12a2e0:
    if (ctx->pc == 0x12A2E0u) {
        ctx->pc = 0x12A2E4u;
        goto label_12a2e4;
    }
    ctx->pc = 0x12A2DCu;
    SET_GPR_U32(ctx, 31, 0x12A2E4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x12A2DCu, 0x12A2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A2E4u;
label_12a2e4:
    // 0x12a2e4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x12a2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_12a2e8:
    // 0x12a2e8: 0x27858b98  addiu       $a1, $gp, -0x7468
    ctx->pc = 0x12a2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937496));
label_12a2ec:
    // 0x12a2ec: 0xc040304  jal         func_100C10
label_12a2f0:
    if (ctx->pc == 0x12A2F0u) {
        ctx->pc = 0x12A2F4u;
        goto label_12a2f4;
    }
    ctx->pc = 0x12A2ECu;
    SET_GPR_U32(ctx, 31, 0x12A2F4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x12A2ECu, 0x12A2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A2F4u;
label_12a2f4:
    // 0x12a2f4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x12a2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_12a2f8:
    // 0x12a2f8: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x12a2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_12a2fc:
    // 0x12a2fc: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x12a2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_12a300:
    // 0x12a300: 0xc119d74  jal         func_4675D0
label_12a304:
    if (ctx->pc == 0x12A304u) {
        ctx->pc = 0x12A308u;
        goto label_12a308;
    }
    ctx->pc = 0x12A300u;
    SET_GPR_U32(ctx, 31, 0x12A308u);
    ctx->pc = 0x4675D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4675D0u, 0x12A300u, 0x12A308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A308u;
label_12a308:
    // 0x12a308: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x12a308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_12a30c:
    // 0x12a30c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x12a30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12a310:
    // 0x12a310: 0xc0402d4  jal         func_100B50
label_12a314:
    if (ctx->pc == 0x12A314u) {
        ctx->pc = 0x12A318u;
        goto label_12a318;
    }
    ctx->pc = 0x12A310u;
    SET_GPR_U32(ctx, 31, 0x12A318u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x12A310u, 0x12A318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A318u;
label_12a318:
    // 0x12a318: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x12a318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_12a31c:
    // 0x12a31c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x12a31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12a320:
    // 0x12a320: 0xc0402d4  jal         func_100B50
label_12a324:
    if (ctx->pc == 0x12A324u) {
        ctx->pc = 0x12A328u;
        goto label_12a328;
    }
    ctx->pc = 0x12A320u;
    SET_GPR_U32(ctx, 31, 0x12A328u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x12A320u, 0x12A328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A328u;
label_12a328:
    // 0x12a328: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x12a328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_12a32c:
    // 0x12a32c: 0xc119b68  jal         func_466DA0
label_12a330:
    if (ctx->pc == 0x12A330u) {
        ctx->pc = 0x12A334u;
        goto label_12a334;
    }
    ctx->pc = 0x12A32Cu;
    SET_GPR_U32(ctx, 31, 0x12A334u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x12A32Cu, 0x12A334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A334u;
label_12a334:
    // 0x12a334: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x12a334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_12a338:
    // 0x12a338: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12a338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a33c:
    // 0x12a33c: 0xc0400e0  jal         func_100380
label_12a340:
    if (ctx->pc == 0x12A340u) {
        ctx->pc = 0x12A344u;
        goto label_12a344;
    }
    ctx->pc = 0x12A33Cu;
    SET_GPR_U32(ctx, 31, 0x12A344u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x12A33Cu, 0x12A344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A344u;
label_12a344:
    // 0x12a344: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12a344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a348:
    // 0x12a348: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_12a34c:
    if (ctx->pc == 0x12A34Cu) {
        ctx->pc = 0x12A350u;
        goto label_12a350;
    }
    ctx->pc = 0x12A348u;
    {
        const bool branch_taken_0x12a348 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a348) {
            ctx->pc = 0x12A360u;
            goto label_12a360;
        }
    }
    ctx->pc = 0x12A350u;
label_12a350:
    // 0x12a350: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12a350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12a354:
    // 0x12a354: 0xc119f38  jal         func_467CE0
label_12a358:
    if (ctx->pc == 0x12A358u) {
        ctx->pc = 0x12A35Cu;
        goto label_12a35c;
    }
    ctx->pc = 0x12A354u;
    SET_GPR_U32(ctx, 31, 0x12A35Cu);
    ctx->pc = 0x467CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467CE0u, 0x12A354u, 0x12A35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A35Cu;
label_12a35c:
    // 0x12a35c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12a35cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a360:
    // 0x12a360: 0xaf93ba30  sw          $s3, -0x45D0($gp)
    ctx->pc = 0x12a360u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949424), GPR_U32(ctx, 19));
label_12a364:
    // 0x12a364: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x12a364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_12a368:
    // 0x12a368: 0xc119e50  jal         func_467940
label_12a36c:
    if (ctx->pc == 0x12A36Cu) {
        ctx->pc = 0x12A370u;
        goto label_12a370;
    }
    ctx->pc = 0x12A368u;
    SET_GPR_U32(ctx, 31, 0x12A370u);
    ctx->pc = 0x467940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467940u, 0x12A368u, 0x12A370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A370u;
label_12a370:
    // 0x12a370: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12a370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a374:
    // 0x12a374: 0x8f84ba30  lw          $a0, -0x45D0($gp)
    ctx->pc = 0x12a374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949424)));
label_12a378:
    // 0x12a378: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12a378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12a37c:
    // 0x12a37c: 0xc119f5c  jal         func_467D70
label_12a380:
    if (ctx->pc == 0x12A380u) {
        ctx->pc = 0x12A384u;
        goto label_12a384;
    }
    ctx->pc = 0x12A37Cu;
    SET_GPR_U32(ctx, 31, 0x12A384u);
    ctx->pc = 0x467D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467D70u, 0x12A37Cu, 0x12A384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A384u;
label_12a384:
    // 0x12a384: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x12a384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_12a388:
    // 0x12a388: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12a388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_12a38c:
    // 0x12a38c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12a38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_12a390:
    // 0x12a390: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x12a390u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12a394:
    // 0x12a394: 0x8f84ba30  lw          $a0, -0x45D0($gp)
    ctx->pc = 0x12a394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949424)));
label_12a398:
    // 0x12a398: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12a398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12a39c:
    // 0x12a39c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12a39cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12a3a0:
    // 0x12a3a0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x12a3a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_12a3a4:
    // 0x12a3a4: 0x320f809  jalr        $t9
label_12a3a8:
    if (ctx->pc == 0x12A3A8u) {
        ctx->pc = 0x12A3ACu;
        goto label_12a3ac;
    }
    ctx->pc = 0x12A3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12A3ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A3A4u, 0x12A3ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12A3ACu;
label_12a3ac:
    // 0x12a3ac: 0x8f84ba30  lw          $a0, -0x45D0($gp)
    ctx->pc = 0x12a3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949424)));
label_12a3b0:
    // 0x12a3b0: 0xc049394  jal         func_124E50
label_12a3b4:
    if (ctx->pc == 0x12A3B4u) {
        ctx->pc = 0x12A3B8u;
        goto label_12a3b8;
    }
    ctx->pc = 0x12A3B0u;
    SET_GPR_U32(ctx, 31, 0x12A3B8u);
    ctx->pc = 0x124E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E50u, 0x12A3B0u, 0x12A3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A3B8u;
label_12a3b8:
    // 0x12a3b8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x12a3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_12a3bc:
    // 0x12a3bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12a3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a3c0:
    // 0x12a3c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12a3c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12a3c4:
    // 0x12a3c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12a3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12a3c8:
    // 0x12a3c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12a3c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12a3cc:
    // 0x12a3cc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x12a3ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_12a3d0:
    // 0x12a3d0: 0x320f809  jalr        $t9
label_12a3d4:
    if (ctx->pc == 0x12A3D4u) {
        ctx->pc = 0x12A3D8u;
        goto label_12a3d8;
    }
    ctx->pc = 0x12A3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12A3D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A3D0u, 0x12A3D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12A3D8u;
label_12a3d8:
    // 0x12a3d8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x12a3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_12a3dc:
    // 0x12a3dc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x12a3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_12a3e0:
    // 0x12a3e0: 0x24a52468  addiu       $a1, $a1, 0x2468
    ctx->pc = 0x12a3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9320));
label_12a3e4:
    // 0x12a3e4: 0xc041ba4  jal         func_106E90
label_12a3e8:
    if (ctx->pc == 0x12A3E8u) {
        ctx->pc = 0x12A3ECu;
        goto label_12a3ec;
    }
    ctx->pc = 0x12A3E4u;
    SET_GPR_U32(ctx, 31, 0x12A3ECu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x12A3E4u, 0x12A3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A3ECu;
label_12a3ec:
    // 0x12a3ec: 0xafb000cc  sw          $s0, 0xCC($sp)
    ctx->pc = 0x12a3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 16));
label_12a3f0:
    // 0x12a3f0: 0x8f84ba30  lw          $a0, -0x45D0($gp)
    ctx->pc = 0x12a3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949424)));
label_12a3f4:
    // 0x12a3f4: 0xc049394  jal         func_124E50
label_12a3f8:
    if (ctx->pc == 0x12A3F8u) {
        ctx->pc = 0x12A3FCu;
        goto label_12a3fc;
    }
    ctx->pc = 0x12A3F4u;
    SET_GPR_U32(ctx, 31, 0x12A3FCu);
    ctx->pc = 0x124E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E50u, 0x12A3F4u, 0x12A3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A3FCu;
label_12a3fc:
    // 0x12a3fc: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x12a3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_12a400:
    // 0x12a400: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x12a400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_12a404:
    // 0x12a404: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x12a404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_12a408:
    // 0x12a408: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x12a408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_12a40c:
    // 0x12a40c: 0xc04a6e8  jal         func_129BA0
label_12a410:
    if (ctx->pc == 0x12A410u) {
        ctx->pc = 0x12A414u;
        goto label_12a414;
    }
    ctx->pc = 0x12A40Cu;
    SET_GPR_U32(ctx, 31, 0x12A414u);
    ctx->pc = 0x129BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129BA0u, 0x12A40Cu, 0x12A414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A414u;
label_12a414:
    // 0x12a414: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x12a414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_12a418:
    // 0x12a418: 0xc04a804  jal         func_12A010
label_12a41c:
    if (ctx->pc == 0x12A41Cu) {
        ctx->pc = 0x12A420u;
        goto label_12a420;
    }
    ctx->pc = 0x12A418u;
    SET_GPR_U32(ctx, 31, 0x12A420u);
    ctx->pc = 0x12A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A010u, 0x12A418u, 0x12A420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A420u;
label_12a420:
    // 0x12a420: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x12a420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_12a424:
    // 0x12a424: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x12a424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_12a428:
    // 0x12a428: 0x24a524f0  addiu       $a1, $a1, 0x24F0
    ctx->pc = 0x12a428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9456));
label_12a42c:
    // 0x12a42c: 0xc040304  jal         func_100C10
label_12a430:
    if (ctx->pc == 0x12A430u) {
        ctx->pc = 0x12A434u;
        goto label_12a434;
    }
    ctx->pc = 0x12A42Cu;
    SET_GPR_U32(ctx, 31, 0x12A434u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x12A42Cu, 0x12A434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A434u;
label_12a434:
    // 0x12a434: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x12a434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_12a438:
    // 0x12a438: 0x27858b98  addiu       $a1, $gp, -0x7468
    ctx->pc = 0x12a438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937496));
label_12a43c:
    // 0x12a43c: 0xc040304  jal         func_100C10
label_12a440:
    if (ctx->pc == 0x12A440u) {
        ctx->pc = 0x12A444u;
        goto label_12a444;
    }
    ctx->pc = 0x12A43Cu;
    SET_GPR_U32(ctx, 31, 0x12A444u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x12A43Cu, 0x12A444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A444u;
label_12a444:
    // 0x12a444: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x12a444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_12a448:
    // 0x12a448: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x12a448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_12a44c:
    // 0x12a44c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x12a44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_12a450:
    // 0x12a450: 0xc119d74  jal         func_4675D0
label_12a454:
    if (ctx->pc == 0x12A454u) {
        ctx->pc = 0x12A458u;
        goto label_12a458;
    }
    ctx->pc = 0x12A450u;
    SET_GPR_U32(ctx, 31, 0x12A458u);
    ctx->pc = 0x4675D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4675D0u, 0x12A450u, 0x12A458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A458u;
label_12a458:
    // 0x12a458: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x12a458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_12a45c:
    // 0x12a45c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x12a45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12a460:
    // 0x12a460: 0xc0402d4  jal         func_100B50
label_12a464:
    if (ctx->pc == 0x12A464u) {
        ctx->pc = 0x12A468u;
        goto label_12a468;
    }
    ctx->pc = 0x12A460u;
    SET_GPR_U32(ctx, 31, 0x12A468u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x12A460u, 0x12A468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A468u;
label_12a468:
    // 0x12a468: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x12a468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_12a46c:
    // 0x12a46c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x12a46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12a470:
    // 0x12a470: 0xc0402d4  jal         func_100B50
label_12a474:
    if (ctx->pc == 0x12A474u) {
        ctx->pc = 0x12A478u;
        goto label_12a478;
    }
    ctx->pc = 0x12A470u;
    SET_GPR_U32(ctx, 31, 0x12A478u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x12A470u, 0x12A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A478u;
label_12a478:
    // 0x12a478: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x12a478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_12a47c:
    // 0x12a47c: 0xc119b68  jal         func_466DA0
label_12a480:
    if (ctx->pc == 0x12A480u) {
        ctx->pc = 0x12A484u;
        goto label_12a484;
    }
    ctx->pc = 0x12A47Cu;
    SET_GPR_U32(ctx, 31, 0x12A484u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x12A47Cu, 0x12A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A484u;
label_12a484:
    // 0x12a484: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x12a484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_12a488:
    // 0x12a488: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12a488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a48c:
    // 0x12a48c: 0xc0400e0  jal         func_100380
label_12a490:
    if (ctx->pc == 0x12A490u) {
        ctx->pc = 0x12A494u;
        goto label_12a494;
    }
    ctx->pc = 0x12A48Cu;
    SET_GPR_U32(ctx, 31, 0x12A494u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x12A48Cu, 0x12A494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A494u;
label_12a494:
    // 0x12a494: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12a494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a498:
    // 0x12a498: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_12a49c:
    if (ctx->pc == 0x12A49Cu) {
        ctx->pc = 0x12A4A0u;
        goto label_12a4a0;
    }
    ctx->pc = 0x12A498u;
    {
        const bool branch_taken_0x12a498 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a498) {
            ctx->pc = 0x12A4B0u;
            goto label_12a4b0;
        }
    }
    ctx->pc = 0x12A4A0u;
label_12a4a0:
    // 0x12a4a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12a4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12a4a4:
    // 0x12a4a4: 0xc119f38  jal         func_467CE0
label_12a4a8:
    if (ctx->pc == 0x12A4A8u) {
        ctx->pc = 0x12A4ACu;
        goto label_12a4ac;
    }
    ctx->pc = 0x12A4A4u;
    SET_GPR_U32(ctx, 31, 0x12A4ACu);
    ctx->pc = 0x467CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467CE0u, 0x12A4A4u, 0x12A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A4ACu;
label_12a4ac:
    // 0x12a4ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12a4acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a4b0:
    // 0x12a4b0: 0xaf92ba34  sw          $s2, -0x45CC($gp)
    ctx->pc = 0x12a4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949428), GPR_U32(ctx, 18));
label_12a4b4:
    // 0x12a4b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x12a4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_12a4b8:
    // 0x12a4b8: 0xc119e50  jal         func_467940
label_12a4bc:
    if (ctx->pc == 0x12A4BCu) {
        ctx->pc = 0x12A4C0u;
        goto label_12a4c0;
    }
    ctx->pc = 0x12A4B8u;
    SET_GPR_U32(ctx, 31, 0x12A4C0u);
    ctx->pc = 0x467940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467940u, 0x12A4B8u, 0x12A4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A4C0u;
label_12a4c0:
    // 0x12a4c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12a4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a4c4:
    // 0x12a4c4: 0x8f84ba34  lw          $a0, -0x45CC($gp)
    ctx->pc = 0x12a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949428)));
label_12a4c8:
    // 0x12a4c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12a4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12a4cc:
    // 0x12a4cc: 0xc119f5c  jal         func_467D70
label_12a4d0:
    if (ctx->pc == 0x12A4D0u) {
        ctx->pc = 0x12A4D4u;
        goto label_12a4d4;
    }
    ctx->pc = 0x12A4CCu;
    SET_GPR_U32(ctx, 31, 0x12A4D4u);
    ctx->pc = 0x467D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467D70u, 0x12A4CCu, 0x12A4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A4D4u;
label_12a4d4:
    // 0x12a4d4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x12a4d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_12a4d8:
    // 0x12a4d8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12a4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_12a4dc:
    // 0x12a4dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12a4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_12a4e0:
    // 0x12a4e0: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x12a4e0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12a4e4:
    // 0x12a4e4: 0x8f84ba34  lw          $a0, -0x45CC($gp)
    ctx->pc = 0x12a4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949428)));
label_12a4e8:
    // 0x12a4e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12a4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12a4ec:
    // 0x12a4ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12a4ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12a4f0:
    // 0x12a4f0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x12a4f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_12a4f4:
    // 0x12a4f4: 0x320f809  jalr        $t9
label_12a4f8:
    if (ctx->pc == 0x12A4F8u) {
        ctx->pc = 0x12A4FCu;
        goto label_12a4fc;
    }
    ctx->pc = 0x12A4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12A4FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A4F4u, 0x12A4FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12A4FCu;
label_12a4fc:
    // 0x12a4fc: 0x8f84ba34  lw          $a0, -0x45CC($gp)
    ctx->pc = 0x12a4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949428)));
label_12a500:
    // 0x12a500: 0xc049394  jal         func_124E50
label_12a504:
    if (ctx->pc == 0x12A504u) {
        ctx->pc = 0x12A508u;
        goto label_12a508;
    }
    ctx->pc = 0x12A500u;
    SET_GPR_U32(ctx, 31, 0x12A508u);
    ctx->pc = 0x124E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E50u, 0x12A500u, 0x12A508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A508u;
label_12a508:
    // 0x12a508: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x12a508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_12a50c:
    // 0x12a50c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12a50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a510:
    // 0x12a510: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12a510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12a514:
    // 0x12a514: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12a514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12a518:
    // 0x12a518: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12a518u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12a51c:
    // 0x12a51c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x12a51cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_12a520:
    // 0x12a520: 0x320f809  jalr        $t9
label_12a524:
    if (ctx->pc == 0x12A524u) {
        ctx->pc = 0x12A528u;
        goto label_12a528;
    }
    ctx->pc = 0x12A520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12A528u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A520u, 0x12A528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12A528u;
label_12a528:
    // 0x12a528: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x12a528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_12a52c:
    // 0x12a52c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x12a52cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_12a530:
    // 0x12a530: 0x24a52458  addiu       $a1, $a1, 0x2458
    ctx->pc = 0x12a530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9304));
label_12a534:
    // 0x12a534: 0xc041ba4  jal         func_106E90
label_12a538:
    if (ctx->pc == 0x12A538u) {
        ctx->pc = 0x12A53Cu;
        goto label_12a53c;
    }
    ctx->pc = 0x12A534u;
    SET_GPR_U32(ctx, 31, 0x12A53Cu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x12A534u, 0x12A53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A53Cu;
label_12a53c:
    // 0x12a53c: 0xafb000cc  sw          $s0, 0xCC($sp)
    ctx->pc = 0x12a53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 16));
label_12a540:
    // 0x12a540: 0x8f84ba34  lw          $a0, -0x45CC($gp)
    ctx->pc = 0x12a540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949428)));
label_12a544:
    // 0x12a544: 0xc049394  jal         func_124E50
label_12a548:
    if (ctx->pc == 0x12A548u) {
        ctx->pc = 0x12A54Cu;
        goto label_12a54c;
    }
    ctx->pc = 0x12A544u;
    SET_GPR_U32(ctx, 31, 0x12A54Cu);
    ctx->pc = 0x124E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E50u, 0x12A544u, 0x12A54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A54Cu;
label_12a54c:
    // 0x12a54c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x12a54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_12a550:
    // 0x12a550: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x12a550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_12a554:
    // 0x12a554: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x12a554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_12a558:
    // 0x12a558: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x12a558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_12a55c:
    // 0x12a55c: 0xc04a6e8  jal         func_129BA0
label_12a560:
    if (ctx->pc == 0x12A560u) {
        ctx->pc = 0x12A564u;
        goto label_12a564;
    }
    ctx->pc = 0x12A55Cu;
    SET_GPR_U32(ctx, 31, 0x12A564u);
    ctx->pc = 0x129BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129BA0u, 0x12A55Cu, 0x12A564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A564u;
label_12a564:
    // 0x12a564: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x12a564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_12a568:
    // 0x12a568: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x12a568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12a56c:
    // 0x12a56c: 0xc119d90  jal         func_467640
label_12a570:
    if (ctx->pc == 0x12A570u) {
        ctx->pc = 0x12A574u;
        goto label_12a574;
    }
    ctx->pc = 0x12A56Cu;
    SET_GPR_U32(ctx, 31, 0x12A574u);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x12A56Cu, 0x12A574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A574u;
label_12a574:
    // 0x12a574: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x12a574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_12a578:
    // 0x12a578: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x12a578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12a57c:
    // 0x12a57c: 0xc119d90  jal         func_467640
label_12a580:
    if (ctx->pc == 0x12A580u) {
        ctx->pc = 0x12A584u;
        goto label_12a584;
    }
    ctx->pc = 0x12A57Cu;
    SET_GPR_U32(ctx, 31, 0x12A584u);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x12A57Cu, 0x12A584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A584u;
label_12a584:
    // 0x12a584: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12a584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a588:
    // 0x12a588: 0x10000028  b           . + 4 + (0x28 << 2)
label_12a58c:
    if (ctx->pc == 0x12A58Cu) {
        ctx->pc = 0x12A590u;
        goto label_12a590;
    }
    ctx->pc = 0x12A588u;
    {
        const bool branch_taken_0x12a588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a588) {
            ctx->pc = 0x12A62Cu;
            goto label_12a62c;
        }
    }
    ctx->pc = 0x12A590u;
label_12a590:
    // 0x12a590: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x12a590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_12a594:
    // 0x12a594: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x12a594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_12a598:
    // 0x12a598: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12a598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12a59c:
    // 0x12a59c: 0xc04a9a8  jal         func_12A6A0
label_12a5a0:
    if (ctx->pc == 0x12A5A0u) {
        ctx->pc = 0x12A5A4u;
        goto label_12a5a4;
    }
    ctx->pc = 0x12A59Cu;
    SET_GPR_U32(ctx, 31, 0x12A5A4u);
    ctx->pc = 0x12A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A6A0u, 0x12A59Cu, 0x12A5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A5A4u;
label_12a5a4:
    // 0x12a5a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12a5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a5a8:
    // 0x12a5a8: 0xc041b38  jal         func_106CE0
label_12a5ac:
    if (ctx->pc == 0x12A5ACu) {
        ctx->pc = 0x12A5B0u;
        goto label_12a5b0;
    }
    ctx->pc = 0x12A5A8u;
    SET_GPR_U32(ctx, 31, 0x12A5B0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x12A5A8u, 0x12A5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A5B0u;
label_12a5b0:
    // 0x12a5b0: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x12a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_12a5b4:
    // 0x12a5b4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x12a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_12a5b8:
    // 0x12a5b8: 0x2463b4b0  addiu       $v1, $v1, -0x4B50
    ctx->pc = 0x12a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948016));
label_12a5bc:
    // 0x12a5bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_12a5c0:
    // 0x12a5c0: 0x24640054  addiu       $a0, $v1, 0x54
    ctx->pc = 0x12a5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
label_12a5c4:
    // 0x12a5c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12a5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a5c8:
    // 0x12a5c8: 0xc0bc5c6  jal         func_2F1718
label_12a5cc:
    if (ctx->pc == 0x12A5CCu) {
        ctx->pc = 0x12A5D0u;
        goto label_12a5d0;
    }
    ctx->pc = 0x12A5C8u;
    SET_GPR_U32(ctx, 31, 0x12A5D0u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x12A5C8u, 0x12A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A5D0u;
label_12a5d0:
    // 0x12a5d0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x12a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_12a5d4:
    // 0x12a5d4: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x12a5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_12a5d8:
    // 0x12a5d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12a5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12a5dc:
    // 0x12a5dc: 0xc04a9a8  jal         func_12A6A0
label_12a5e0:
    if (ctx->pc == 0x12A5E0u) {
        ctx->pc = 0x12A5E4u;
        goto label_12a5e4;
    }
    ctx->pc = 0x12A5DCu;
    SET_GPR_U32(ctx, 31, 0x12A5E4u);
    ctx->pc = 0x12A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A6A0u, 0x12A5DCu, 0x12A5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A5E4u;
label_12a5e4:
    // 0x12a5e4: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x12a5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_12a5e8:
    // 0x12a5e8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x12a5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_12a5ec:
    // 0x12a5ec: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x12a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_12a5f0:
    // 0x12a5f0: 0x2442b4b0  addiu       $v0, $v0, -0x4B50
    ctx->pc = 0x12a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948016));
label_12a5f4:
    // 0x12a5f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12a5f8:
    // 0x12a5f8: 0xac4402dc  sw          $a0, 0x2DC($v0)
    ctx->pc = 0x12a5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 732), GPR_U32(ctx, 4));
label_12a5fc:
    // 0x12a5fc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x12a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_12a600:
    // 0x12a600: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x12a600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_12a604:
    // 0x12a604: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12a604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12a608:
    // 0x12a608: 0xc04a9a8  jal         func_12A6A0
label_12a60c:
    if (ctx->pc == 0x12A60Cu) {
        ctx->pc = 0x12A610u;
        goto label_12a610;
    }
    ctx->pc = 0x12A608u;
    SET_GPR_U32(ctx, 31, 0x12A610u);
    ctx->pc = 0x12A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A6A0u, 0x12A608u, 0x12A610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A610u;
label_12a610:
    // 0x12a610: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12a610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_12a614:
    // 0x12a614: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x12a614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_12a618:
    // 0x12a618: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x12a618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_12a61c:
    // 0x12a61c: 0x2442b4b0  addiu       $v0, $v0, -0x4B50
    ctx->pc = 0x12a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948016));
label_12a620:
    // 0x12a620: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12a620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12a624:
    // 0x12a624: 0xac440294  sw          $a0, 0x294($v0)
    ctx->pc = 0x12a624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 660), GPR_U32(ctx, 4));
label_12a628:
    // 0x12a628: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12a628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12a62c:
    // 0x12a62c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x12a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_12a630:
    // 0x12a630: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x12a630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_12a634:
    // 0x12a634: 0xc049b20  jal         func_126C80
label_12a638:
    if (ctx->pc == 0x12A638u) {
        ctx->pc = 0x12A63Cu;
        goto label_12a63c;
    }
    ctx->pc = 0x12A634u;
    SET_GPR_U32(ctx, 31, 0x12A63Cu);
    ctx->pc = 0x126C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126C80u, 0x12A634u, 0x12A63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A63Cu;
label_12a63c:
    // 0x12a63c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x12a63cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_12a640:
    // 0x12a640: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_12a644:
    if (ctx->pc == 0x12A644u) {
        ctx->pc = 0x12A648u;
        goto label_12a648;
    }
    ctx->pc = 0x12A640u;
    {
        const bool branch_taken_0x12a640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a640) {
            ctx->pc = 0x12A590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a590;
        }
    }
    ctx->pc = 0x12A648u;
label_12a648:
    // 0x12a648: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x12a648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_12a64c:
    // 0x12a64c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x12a64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12a650:
    // 0x12a650: 0xc0402d4  jal         func_100B50
label_12a654:
    if (ctx->pc == 0x12A654u) {
        ctx->pc = 0x12A658u;
        goto label_12a658;
    }
    ctx->pc = 0x12A650u;
    SET_GPR_U32(ctx, 31, 0x12A658u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x12A650u, 0x12A658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A658u;
label_12a658:
    // 0x12a658: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x12a658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_12a65c:
    // 0x12a65c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x12a65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12a660:
    // 0x12a660: 0xc048d3c  jal         func_1234F0
label_12a664:
    if (ctx->pc == 0x12A664u) {
        ctx->pc = 0x12A668u;
        goto label_12a668;
    }
    ctx->pc = 0x12A660u;
    SET_GPR_U32(ctx, 31, 0x12A668u);
    ctx->pc = 0x1234F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1234F0u, 0x12A660u, 0x12A668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A668u;
label_12a668:
    // 0x12a668: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x12a668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_12a66c:
    // 0x12a66c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x12a66cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_12a670:
    // 0x12a670: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12a670u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12a674:
    // 0x12a674: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12a674u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12a678:
    // 0x12a678: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12a678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_12a67c:
    // 0x12a67c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12a67cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12a680:
    // 0x12a680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12a680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12a684:
    // 0x12a684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12a684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12a688:
    // 0x12a688: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x12a688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_12a68c:
    // 0x12a68c: 0x3e00008  jr          $ra
label_12a690:
    if (ctx->pc == 0x12A690u) {
        ctx->pc = 0x12A694u;
        goto label_12a694;
    }
    ctx->pc = 0x12A68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A694u;
label_12a694:
    // 0x12a694: 0x0  nop
    ctx->pc = 0x12a694u;
    // NOP
label_12a698:
    // 0x12a698: 0x0  nop
    ctx->pc = 0x12a698u;
    // NOP
label_12a69c:
    // 0x12a69c: 0x0  nop
    ctx->pc = 0x12a69cu;
    // NOP
    ctx->pc = 0x12a6a0u;
}
