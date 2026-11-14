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

// Function: sub_0048B050
// Address: 0x48b050 - 0x48b600
void sub_0048B050_0x48b050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B050_0x48b050");
#endif

    switch (ctx->pc) {
        case 0x48b050u: goto label_48b050;
        case 0x48b054u: goto label_48b054;
        case 0x48b058u: goto label_48b058;
        case 0x48b05cu: goto label_48b05c;
        case 0x48b060u: goto label_48b060;
        case 0x48b064u: goto label_48b064;
        case 0x48b068u: goto label_48b068;
        case 0x48b06cu: goto label_48b06c;
        case 0x48b070u: goto label_48b070;
        case 0x48b074u: goto label_48b074;
        case 0x48b078u: goto label_48b078;
        case 0x48b07cu: goto label_48b07c;
        case 0x48b080u: goto label_48b080;
        case 0x48b084u: goto label_48b084;
        case 0x48b088u: goto label_48b088;
        case 0x48b08cu: goto label_48b08c;
        case 0x48b090u: goto label_48b090;
        case 0x48b094u: goto label_48b094;
        case 0x48b098u: goto label_48b098;
        case 0x48b09cu: goto label_48b09c;
        case 0x48b0a0u: goto label_48b0a0;
        case 0x48b0a4u: goto label_48b0a4;
        case 0x48b0a8u: goto label_48b0a8;
        case 0x48b0acu: goto label_48b0ac;
        case 0x48b0b0u: goto label_48b0b0;
        case 0x48b0b4u: goto label_48b0b4;
        case 0x48b0b8u: goto label_48b0b8;
        case 0x48b0bcu: goto label_48b0bc;
        case 0x48b0c0u: goto label_48b0c0;
        case 0x48b0c4u: goto label_48b0c4;
        case 0x48b0c8u: goto label_48b0c8;
        case 0x48b0ccu: goto label_48b0cc;
        case 0x48b0d0u: goto label_48b0d0;
        case 0x48b0d4u: goto label_48b0d4;
        case 0x48b0d8u: goto label_48b0d8;
        case 0x48b0dcu: goto label_48b0dc;
        case 0x48b0e0u: goto label_48b0e0;
        case 0x48b0e4u: goto label_48b0e4;
        case 0x48b0e8u: goto label_48b0e8;
        case 0x48b0ecu: goto label_48b0ec;
        case 0x48b0f0u: goto label_48b0f0;
        case 0x48b0f4u: goto label_48b0f4;
        case 0x48b0f8u: goto label_48b0f8;
        case 0x48b0fcu: goto label_48b0fc;
        case 0x48b100u: goto label_48b100;
        case 0x48b104u: goto label_48b104;
        case 0x48b108u: goto label_48b108;
        case 0x48b10cu: goto label_48b10c;
        case 0x48b110u: goto label_48b110;
        case 0x48b114u: goto label_48b114;
        case 0x48b118u: goto label_48b118;
        case 0x48b11cu: goto label_48b11c;
        case 0x48b120u: goto label_48b120;
        case 0x48b124u: goto label_48b124;
        case 0x48b128u: goto label_48b128;
        case 0x48b12cu: goto label_48b12c;
        case 0x48b130u: goto label_48b130;
        case 0x48b134u: goto label_48b134;
        case 0x48b138u: goto label_48b138;
        case 0x48b13cu: goto label_48b13c;
        case 0x48b140u: goto label_48b140;
        case 0x48b144u: goto label_48b144;
        case 0x48b148u: goto label_48b148;
        case 0x48b14cu: goto label_48b14c;
        case 0x48b150u: goto label_48b150;
        case 0x48b154u: goto label_48b154;
        case 0x48b158u: goto label_48b158;
        case 0x48b15cu: goto label_48b15c;
        case 0x48b160u: goto label_48b160;
        case 0x48b164u: goto label_48b164;
        case 0x48b168u: goto label_48b168;
        case 0x48b16cu: goto label_48b16c;
        case 0x48b170u: goto label_48b170;
        case 0x48b174u: goto label_48b174;
        case 0x48b178u: goto label_48b178;
        case 0x48b17cu: goto label_48b17c;
        case 0x48b180u: goto label_48b180;
        case 0x48b184u: goto label_48b184;
        case 0x48b188u: goto label_48b188;
        case 0x48b18cu: goto label_48b18c;
        case 0x48b190u: goto label_48b190;
        case 0x48b194u: goto label_48b194;
        case 0x48b198u: goto label_48b198;
        case 0x48b19cu: goto label_48b19c;
        case 0x48b1a0u: goto label_48b1a0;
        case 0x48b1a4u: goto label_48b1a4;
        case 0x48b1a8u: goto label_48b1a8;
        case 0x48b1acu: goto label_48b1ac;
        case 0x48b1b0u: goto label_48b1b0;
        case 0x48b1b4u: goto label_48b1b4;
        case 0x48b1b8u: goto label_48b1b8;
        case 0x48b1bcu: goto label_48b1bc;
        case 0x48b1c0u: goto label_48b1c0;
        case 0x48b1c4u: goto label_48b1c4;
        case 0x48b1c8u: goto label_48b1c8;
        case 0x48b1ccu: goto label_48b1cc;
        case 0x48b1d0u: goto label_48b1d0;
        case 0x48b1d4u: goto label_48b1d4;
        case 0x48b1d8u: goto label_48b1d8;
        case 0x48b1dcu: goto label_48b1dc;
        case 0x48b1e0u: goto label_48b1e0;
        case 0x48b1e4u: goto label_48b1e4;
        case 0x48b1e8u: goto label_48b1e8;
        case 0x48b1ecu: goto label_48b1ec;
        case 0x48b1f0u: goto label_48b1f0;
        case 0x48b1f4u: goto label_48b1f4;
        case 0x48b1f8u: goto label_48b1f8;
        case 0x48b1fcu: goto label_48b1fc;
        case 0x48b200u: goto label_48b200;
        case 0x48b204u: goto label_48b204;
        case 0x48b208u: goto label_48b208;
        case 0x48b20cu: goto label_48b20c;
        case 0x48b210u: goto label_48b210;
        case 0x48b214u: goto label_48b214;
        case 0x48b218u: goto label_48b218;
        case 0x48b21cu: goto label_48b21c;
        case 0x48b220u: goto label_48b220;
        case 0x48b224u: goto label_48b224;
        case 0x48b228u: goto label_48b228;
        case 0x48b22cu: goto label_48b22c;
        case 0x48b230u: goto label_48b230;
        case 0x48b234u: goto label_48b234;
        case 0x48b238u: goto label_48b238;
        case 0x48b23cu: goto label_48b23c;
        case 0x48b240u: goto label_48b240;
        case 0x48b244u: goto label_48b244;
        case 0x48b248u: goto label_48b248;
        case 0x48b24cu: goto label_48b24c;
        case 0x48b250u: goto label_48b250;
        case 0x48b254u: goto label_48b254;
        case 0x48b258u: goto label_48b258;
        case 0x48b25cu: goto label_48b25c;
        case 0x48b260u: goto label_48b260;
        case 0x48b264u: goto label_48b264;
        case 0x48b268u: goto label_48b268;
        case 0x48b26cu: goto label_48b26c;
        case 0x48b270u: goto label_48b270;
        case 0x48b274u: goto label_48b274;
        case 0x48b278u: goto label_48b278;
        case 0x48b27cu: goto label_48b27c;
        case 0x48b280u: goto label_48b280;
        case 0x48b284u: goto label_48b284;
        case 0x48b288u: goto label_48b288;
        case 0x48b28cu: goto label_48b28c;
        case 0x48b290u: goto label_48b290;
        case 0x48b294u: goto label_48b294;
        case 0x48b298u: goto label_48b298;
        case 0x48b29cu: goto label_48b29c;
        case 0x48b2a0u: goto label_48b2a0;
        case 0x48b2a4u: goto label_48b2a4;
        case 0x48b2a8u: goto label_48b2a8;
        case 0x48b2acu: goto label_48b2ac;
        case 0x48b2b0u: goto label_48b2b0;
        case 0x48b2b4u: goto label_48b2b4;
        case 0x48b2b8u: goto label_48b2b8;
        case 0x48b2bcu: goto label_48b2bc;
        case 0x48b2c0u: goto label_48b2c0;
        case 0x48b2c4u: goto label_48b2c4;
        case 0x48b2c8u: goto label_48b2c8;
        case 0x48b2ccu: goto label_48b2cc;
        case 0x48b2d0u: goto label_48b2d0;
        case 0x48b2d4u: goto label_48b2d4;
        case 0x48b2d8u: goto label_48b2d8;
        case 0x48b2dcu: goto label_48b2dc;
        case 0x48b2e0u: goto label_48b2e0;
        case 0x48b2e4u: goto label_48b2e4;
        case 0x48b2e8u: goto label_48b2e8;
        case 0x48b2ecu: goto label_48b2ec;
        case 0x48b2f0u: goto label_48b2f0;
        case 0x48b2f4u: goto label_48b2f4;
        case 0x48b2f8u: goto label_48b2f8;
        case 0x48b2fcu: goto label_48b2fc;
        case 0x48b300u: goto label_48b300;
        case 0x48b304u: goto label_48b304;
        case 0x48b308u: goto label_48b308;
        case 0x48b30cu: goto label_48b30c;
        case 0x48b310u: goto label_48b310;
        case 0x48b314u: goto label_48b314;
        case 0x48b318u: goto label_48b318;
        case 0x48b31cu: goto label_48b31c;
        case 0x48b320u: goto label_48b320;
        case 0x48b324u: goto label_48b324;
        case 0x48b328u: goto label_48b328;
        case 0x48b32cu: goto label_48b32c;
        case 0x48b330u: goto label_48b330;
        case 0x48b334u: goto label_48b334;
        case 0x48b338u: goto label_48b338;
        case 0x48b33cu: goto label_48b33c;
        case 0x48b340u: goto label_48b340;
        case 0x48b344u: goto label_48b344;
        case 0x48b348u: goto label_48b348;
        case 0x48b34cu: goto label_48b34c;
        case 0x48b350u: goto label_48b350;
        case 0x48b354u: goto label_48b354;
        case 0x48b358u: goto label_48b358;
        case 0x48b35cu: goto label_48b35c;
        case 0x48b360u: goto label_48b360;
        case 0x48b364u: goto label_48b364;
        case 0x48b368u: goto label_48b368;
        case 0x48b36cu: goto label_48b36c;
        case 0x48b370u: goto label_48b370;
        case 0x48b374u: goto label_48b374;
        case 0x48b378u: goto label_48b378;
        case 0x48b37cu: goto label_48b37c;
        case 0x48b380u: goto label_48b380;
        case 0x48b384u: goto label_48b384;
        case 0x48b388u: goto label_48b388;
        case 0x48b38cu: goto label_48b38c;
        case 0x48b390u: goto label_48b390;
        case 0x48b394u: goto label_48b394;
        case 0x48b398u: goto label_48b398;
        case 0x48b39cu: goto label_48b39c;
        case 0x48b3a0u: goto label_48b3a0;
        case 0x48b3a4u: goto label_48b3a4;
        case 0x48b3a8u: goto label_48b3a8;
        case 0x48b3acu: goto label_48b3ac;
        case 0x48b3b0u: goto label_48b3b0;
        case 0x48b3b4u: goto label_48b3b4;
        case 0x48b3b8u: goto label_48b3b8;
        case 0x48b3bcu: goto label_48b3bc;
        case 0x48b3c0u: goto label_48b3c0;
        case 0x48b3c4u: goto label_48b3c4;
        case 0x48b3c8u: goto label_48b3c8;
        case 0x48b3ccu: goto label_48b3cc;
        case 0x48b3d0u: goto label_48b3d0;
        case 0x48b3d4u: goto label_48b3d4;
        case 0x48b3d8u: goto label_48b3d8;
        case 0x48b3dcu: goto label_48b3dc;
        case 0x48b3e0u: goto label_48b3e0;
        case 0x48b3e4u: goto label_48b3e4;
        case 0x48b3e8u: goto label_48b3e8;
        case 0x48b3ecu: goto label_48b3ec;
        case 0x48b3f0u: goto label_48b3f0;
        case 0x48b3f4u: goto label_48b3f4;
        case 0x48b3f8u: goto label_48b3f8;
        case 0x48b3fcu: goto label_48b3fc;
        case 0x48b400u: goto label_48b400;
        case 0x48b404u: goto label_48b404;
        case 0x48b408u: goto label_48b408;
        case 0x48b40cu: goto label_48b40c;
        case 0x48b410u: goto label_48b410;
        case 0x48b414u: goto label_48b414;
        case 0x48b418u: goto label_48b418;
        case 0x48b41cu: goto label_48b41c;
        case 0x48b420u: goto label_48b420;
        case 0x48b424u: goto label_48b424;
        case 0x48b428u: goto label_48b428;
        case 0x48b42cu: goto label_48b42c;
        case 0x48b430u: goto label_48b430;
        case 0x48b434u: goto label_48b434;
        case 0x48b438u: goto label_48b438;
        case 0x48b43cu: goto label_48b43c;
        case 0x48b440u: goto label_48b440;
        case 0x48b444u: goto label_48b444;
        case 0x48b448u: goto label_48b448;
        case 0x48b44cu: goto label_48b44c;
        case 0x48b450u: goto label_48b450;
        case 0x48b454u: goto label_48b454;
        case 0x48b458u: goto label_48b458;
        case 0x48b45cu: goto label_48b45c;
        case 0x48b460u: goto label_48b460;
        case 0x48b464u: goto label_48b464;
        case 0x48b468u: goto label_48b468;
        case 0x48b46cu: goto label_48b46c;
        case 0x48b470u: goto label_48b470;
        case 0x48b474u: goto label_48b474;
        case 0x48b478u: goto label_48b478;
        case 0x48b47cu: goto label_48b47c;
        case 0x48b480u: goto label_48b480;
        case 0x48b484u: goto label_48b484;
        case 0x48b488u: goto label_48b488;
        case 0x48b48cu: goto label_48b48c;
        case 0x48b490u: goto label_48b490;
        case 0x48b494u: goto label_48b494;
        case 0x48b498u: goto label_48b498;
        case 0x48b49cu: goto label_48b49c;
        case 0x48b4a0u: goto label_48b4a0;
        case 0x48b4a4u: goto label_48b4a4;
        case 0x48b4a8u: goto label_48b4a8;
        case 0x48b4acu: goto label_48b4ac;
        case 0x48b4b0u: goto label_48b4b0;
        case 0x48b4b4u: goto label_48b4b4;
        case 0x48b4b8u: goto label_48b4b8;
        case 0x48b4bcu: goto label_48b4bc;
        case 0x48b4c0u: goto label_48b4c0;
        case 0x48b4c4u: goto label_48b4c4;
        case 0x48b4c8u: goto label_48b4c8;
        case 0x48b4ccu: goto label_48b4cc;
        case 0x48b4d0u: goto label_48b4d0;
        case 0x48b4d4u: goto label_48b4d4;
        case 0x48b4d8u: goto label_48b4d8;
        case 0x48b4dcu: goto label_48b4dc;
        case 0x48b4e0u: goto label_48b4e0;
        case 0x48b4e4u: goto label_48b4e4;
        case 0x48b4e8u: goto label_48b4e8;
        case 0x48b4ecu: goto label_48b4ec;
        case 0x48b4f0u: goto label_48b4f0;
        case 0x48b4f4u: goto label_48b4f4;
        case 0x48b4f8u: goto label_48b4f8;
        case 0x48b4fcu: goto label_48b4fc;
        case 0x48b500u: goto label_48b500;
        case 0x48b504u: goto label_48b504;
        case 0x48b508u: goto label_48b508;
        case 0x48b50cu: goto label_48b50c;
        case 0x48b510u: goto label_48b510;
        case 0x48b514u: goto label_48b514;
        case 0x48b518u: goto label_48b518;
        case 0x48b51cu: goto label_48b51c;
        case 0x48b520u: goto label_48b520;
        case 0x48b524u: goto label_48b524;
        case 0x48b528u: goto label_48b528;
        case 0x48b52cu: goto label_48b52c;
        case 0x48b530u: goto label_48b530;
        case 0x48b534u: goto label_48b534;
        case 0x48b538u: goto label_48b538;
        case 0x48b53cu: goto label_48b53c;
        case 0x48b540u: goto label_48b540;
        case 0x48b544u: goto label_48b544;
        case 0x48b548u: goto label_48b548;
        case 0x48b54cu: goto label_48b54c;
        case 0x48b550u: goto label_48b550;
        case 0x48b554u: goto label_48b554;
        case 0x48b558u: goto label_48b558;
        case 0x48b55cu: goto label_48b55c;
        case 0x48b560u: goto label_48b560;
        case 0x48b564u: goto label_48b564;
        case 0x48b568u: goto label_48b568;
        case 0x48b56cu: goto label_48b56c;
        case 0x48b570u: goto label_48b570;
        case 0x48b574u: goto label_48b574;
        case 0x48b578u: goto label_48b578;
        case 0x48b57cu: goto label_48b57c;
        case 0x48b580u: goto label_48b580;
        case 0x48b584u: goto label_48b584;
        case 0x48b588u: goto label_48b588;
        case 0x48b58cu: goto label_48b58c;
        case 0x48b590u: goto label_48b590;
        case 0x48b594u: goto label_48b594;
        case 0x48b598u: goto label_48b598;
        case 0x48b59cu: goto label_48b59c;
        case 0x48b5a0u: goto label_48b5a0;
        case 0x48b5a4u: goto label_48b5a4;
        case 0x48b5a8u: goto label_48b5a8;
        case 0x48b5acu: goto label_48b5ac;
        case 0x48b5b0u: goto label_48b5b0;
        case 0x48b5b4u: goto label_48b5b4;
        case 0x48b5b8u: goto label_48b5b8;
        case 0x48b5bcu: goto label_48b5bc;
        case 0x48b5c0u: goto label_48b5c0;
        case 0x48b5c4u: goto label_48b5c4;
        case 0x48b5c8u: goto label_48b5c8;
        case 0x48b5ccu: goto label_48b5cc;
        case 0x48b5d0u: goto label_48b5d0;
        case 0x48b5d4u: goto label_48b5d4;
        case 0x48b5d8u: goto label_48b5d8;
        case 0x48b5dcu: goto label_48b5dc;
        case 0x48b5e0u: goto label_48b5e0;
        case 0x48b5e4u: goto label_48b5e4;
        case 0x48b5e8u: goto label_48b5e8;
        case 0x48b5ecu: goto label_48b5ec;
        case 0x48b5f0u: goto label_48b5f0;
        case 0x48b5f4u: goto label_48b5f4;
        case 0x48b5f8u: goto label_48b5f8;
        case 0x48b5fcu: goto label_48b5fc;
        default: break;
    }

    ctx->pc = 0x48b050u;

label_48b050:
    // 0x48b050: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x48b050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
label_48b054:
    // 0x48b054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48b054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_48b058:
    // 0x48b058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48b058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48b05c:
    // 0x48b05c: 0xafa402d0  sw          $a0, 0x2D0($sp)
    ctx->pc = 0x48b05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 4));
label_48b060:
    // 0x48b060: 0xafa502e0  sw          $a1, 0x2E0($sp)
    ctx->pc = 0x48b060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 5));
label_48b064:
    // 0x48b064: 0xe7ac02f0  swc1        $f12, 0x2F0($sp)
    ctx->pc = 0x48b064u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
label_48b068:
    // 0x48b068: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x48b068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_48b06c:
    // 0x48b06c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x48b06cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_48b070:
    // 0x48b070: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x48b070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_48b074:
    // 0x48b074: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
label_48b078:
    if (ctx->pc == 0x48B078u) {
        ctx->pc = 0x48B07Cu;
        goto label_48b07c;
    }
    ctx->pc = 0x48B074u;
    {
        const bool branch_taken_0x48b074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48b074) {
            ctx->pc = 0x48B124u;
            goto label_48b124;
        }
    }
    ctx->pc = 0x48B07Cu;
label_48b07c:
    // 0x48b07c: 0x8f83b634  lw          $v1, -0x49CC($gp)
    ctx->pc = 0x48b07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948404)));
label_48b080:
    // 0x48b080: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_48b084:
    if (ctx->pc == 0x48B084u) {
        ctx->pc = 0x48B088u;
        goto label_48b088;
    }
    ctx->pc = 0x48B080u;
    {
        const bool branch_taken_0x48b080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b080) {
            ctx->pc = 0x48B124u;
            goto label_48b124;
        }
    }
    ctx->pc = 0x48B088u;
label_48b088:
    // 0x48b088: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48b088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48b08c:
    // 0x48b08c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48b08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48b090:
    // 0x48b090: 0x27a602a0  addiu       $a2, $sp, 0x2A0
    ctx->pc = 0x48b090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_48b094:
    // 0x48b094: 0xc115ee8  jal         func_457BA0
label_48b098:
    if (ctx->pc == 0x48B098u) {
        ctx->pc = 0x48B09Cu;
        goto label_48b09c;
    }
    ctx->pc = 0x48B094u;
    SET_GPR_U32(ctx, 31, 0x48B09Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48B094u, 0x48B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B09Cu;
label_48b09c:
    // 0x48b09c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_48b0a0:
    if (ctx->pc == 0x48B0A0u) {
        ctx->pc = 0x48B0A4u;
        goto label_48b0a4;
    }
    ctx->pc = 0x48B09Cu;
    {
        const bool branch_taken_0x48b09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b09c) {
            ctx->pc = 0x48B124u;
            goto label_48b124;
        }
    }
    ctx->pc = 0x48B0A4u;
label_48b0a4:
    // 0x48b0a4: 0x8fa302a8  lw          $v1, 0x2A8($sp)
    ctx->pc = 0x48b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
label_48b0a8:
    // 0x48b0a8: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_48b0ac:
    if (ctx->pc == 0x48B0ACu) {
        ctx->pc = 0x48B0B0u;
        goto label_48b0b0;
    }
    ctx->pc = 0x48B0A8u;
    {
        const bool branch_taken_0x48b0a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b0a8) {
            ctx->pc = 0x48B124u;
            goto label_48b124;
        }
    }
    ctx->pc = 0x48B0B0u;
label_48b0b0:
    // 0x48b0b0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x48b0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_48b0b4:
    // 0x48b0b4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48b0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48b0b8:
    // 0x48b0b8: 0x8fa602a4  lw          $a2, 0x2A4($sp)
    ctx->pc = 0x48b0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_48b0bc:
    // 0x48b0bc: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48b0bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48b0c0:
    // 0x48b0c0: 0x24e74628  addiu       $a3, $a3, 0x4628
    ctx->pc = 0x48b0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17960));
label_48b0c4:
    // 0x48b0c4: 0x240801a0  addiu       $t0, $zero, 0x1A0
    ctx->pc = 0x48b0c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
label_48b0c8:
    // 0x48b0c8: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48b0c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48b0cc:
    // 0x48b0cc: 0x252947f0  addiu       $t1, $t1, 0x47F0
    ctx->pc = 0x48b0ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18416));
label_48b0d0:
    // 0x48b0d0: 0xc113940  jal         func_44E500
label_48b0d4:
    if (ctx->pc == 0x48B0D4u) {
        ctx->pc = 0x48B0D8u;
        goto label_48b0d8;
    }
    ctx->pc = 0x48B0D0u;
    SET_GPR_U32(ctx, 31, 0x48B0D8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48B0D0u, 0x48B0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B0D8u;
label_48b0d8:
    // 0x48b0d8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x48b0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_48b0dc:
    // 0x48b0dc: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48b0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48b0e0:
    // 0x48b0e0: 0x24a547a0  addiu       $a1, $a1, 0x47A0
    ctx->pc = 0x48b0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18336));
label_48b0e4:
    // 0x48b0e4: 0xc115c24  jal         func_457090
label_48b0e8:
    if (ctx->pc == 0x48B0E8u) {
        ctx->pc = 0x48B0ECu;
        goto label_48b0ec;
    }
    ctx->pc = 0x48B0E4u;
    SET_GPR_U32(ctx, 31, 0x48B0ECu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48B0E4u, 0x48B0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B0ECu;
label_48b0ec:
    // 0x48b0ec: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x48b0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_48b0f0:
    // 0x48b0f0: 0x8fa202a8  lw          $v0, 0x2A8($sp)
    ctx->pc = 0x48b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
label_48b0f4:
    // 0x48b0f4: 0x40f809  jalr        $v0
label_48b0f8:
    if (ctx->pc == 0x48B0F8u) {
        ctx->pc = 0x48B0FCu;
        goto label_48b0fc;
    }
    ctx->pc = 0x48B0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48B0FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B0F4u, 0x48B0FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48B0FCu;
label_48b0fc:
    // 0x48b0fc: 0xaf82b634  sw          $v0, -0x49CC($gp)
    ctx->pc = 0x48b0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948404), GPR_U32(ctx, 2));
label_48b100:
    // 0x48b100: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48b100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48b104:
    // 0x48b104: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48b108:
    if (ctx->pc == 0x48B108u) {
        ctx->pc = 0x48B10Cu;
        goto label_48b10c;
    }
    ctx->pc = 0x48B104u;
    {
        const bool branch_taken_0x48b104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b104) {
            ctx->pc = 0x48B114u;
            goto label_48b114;
        }
    }
    ctx->pc = 0x48B10Cu;
label_48b10c:
    // 0x48b10c: 0xd  break       0
    ctx->pc = 0x48b10cu;
    runtime->handleBreak(rdram, ctx);
label_48b110:
    // 0x48b110: 0x0  nop
    ctx->pc = 0x48b110u;
    // NOP
label_48b114:
    // 0x48b114: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x48b114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_48b118:
    // 0x48b118: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48b118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48b11c:
    // 0x48b11c: 0xc11392c  jal         func_44E4B0
label_48b120:
    if (ctx->pc == 0x48B120u) {
        ctx->pc = 0x48B124u;
        goto label_48b124;
    }
    ctx->pc = 0x48B11Cu;
    SET_GPR_U32(ctx, 31, 0x48B124u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48B11Cu, 0x48B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B124u;
label_48b124:
    // 0x48b124: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x48b124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48b128:
    // 0x48b128: 0xc7a102f0  lwc1        $f1, 0x2F0($sp)
    ctx->pc = 0x48b128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b12c:
    // 0x48b12c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48b12cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48b130:
    // 0x48b130: 0x0  nop
    ctx->pc = 0x48b130u;
    // NOP
label_48b134:
    // 0x48b134: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x48b134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_48b138:
    // 0x48b138: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_48b13c:
    if (ctx->pc == 0x48B13Cu) {
        ctx->pc = 0x48B140u;
        goto label_48b140;
    }
    ctx->pc = 0x48B138u;
    {
        const bool branch_taken_0x48b138 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x48b138) {
            ctx->pc = 0x48B164u;
            goto label_48b164;
        }
    }
    ctx->pc = 0x48B140u;
label_48b140:
    // 0x48b140: 0xc7a102f0  lwc1        $f1, 0x2F0($sp)
    ctx->pc = 0x48b140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b144:
    // 0x48b144: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x48b144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_48b148:
    // 0x48b148: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x48b148u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48b14c:
    // 0x48b14c: 0x0  nop
    ctx->pc = 0x48b14cu;
    // NOP
label_48b150:
    // 0x48b150: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x48b150u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_48b154:
    // 0x48b154: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_48b158:
    if (ctx->pc == 0x48B158u) {
        ctx->pc = 0x48B15Cu;
        goto label_48b15c;
    }
    ctx->pc = 0x48B154u;
    {
        const bool branch_taken_0x48b154 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x48b154) {
            ctx->pc = 0x48B164u;
            goto label_48b164;
        }
    }
    ctx->pc = 0x48B15Cu;
label_48b15c:
    // 0x48b15c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48b15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48b160:
    // 0x48b160: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x48b160u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_48b164:
    // 0x48b164: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x48b164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_48b168:
    // 0x48b168: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
label_48b16c:
    if (ctx->pc == 0x48B16Cu) {
        ctx->pc = 0x48B170u;
        goto label_48b170;
    }
    ctx->pc = 0x48B168u;
    {
        const bool branch_taken_0x48b168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48b168) {
            ctx->pc = 0x48B214u;
            goto label_48b214;
        }
    }
    ctx->pc = 0x48B170u;
label_48b170:
    // 0x48b170: 0x8f83b638  lw          $v1, -0x49C8($gp)
    ctx->pc = 0x48b170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948408)));
label_48b174:
    // 0x48b174: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_48b178:
    if (ctx->pc == 0x48B178u) {
        ctx->pc = 0x48B17Cu;
        goto label_48b17c;
    }
    ctx->pc = 0x48B174u;
    {
        const bool branch_taken_0x48b174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b174) {
            ctx->pc = 0x48B214u;
            goto label_48b214;
        }
    }
    ctx->pc = 0x48B17Cu;
label_48b17c:
    // 0x48b17c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48b17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48b180:
    // 0x48b180: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48b180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48b184:
    // 0x48b184: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x48b184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_48b188:
    // 0x48b188: 0xc115ee8  jal         func_457BA0
label_48b18c:
    if (ctx->pc == 0x48B18Cu) {
        ctx->pc = 0x48B190u;
        goto label_48b190;
    }
    ctx->pc = 0x48B188u;
    SET_GPR_U32(ctx, 31, 0x48B190u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48B188u, 0x48B190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B190u;
label_48b190:
    // 0x48b190: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_48b194:
    if (ctx->pc == 0x48B194u) {
        ctx->pc = 0x48B198u;
        goto label_48b198;
    }
    ctx->pc = 0x48B190u;
    {
        const bool branch_taken_0x48b190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b190) {
            ctx->pc = 0x48B214u;
            goto label_48b214;
        }
    }
    ctx->pc = 0x48B198u;
label_48b198:
    // 0x48b198: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x48b198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_48b19c:
    // 0x48b19c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_48b1a0:
    if (ctx->pc == 0x48B1A0u) {
        ctx->pc = 0x48B1A4u;
        goto label_48b1a4;
    }
    ctx->pc = 0x48B19Cu;
    {
        const bool branch_taken_0x48b19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b19c) {
            ctx->pc = 0x48B214u;
            goto label_48b214;
        }
    }
    ctx->pc = 0x48B1A4u;
label_48b1a4:
    // 0x48b1a4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x48b1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_48b1a8:
    // 0x48b1a8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48b1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48b1ac:
    // 0x48b1ac: 0x8fa60294  lw          $a2, 0x294($sp)
    ctx->pc = 0x48b1acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
label_48b1b0:
    // 0x48b1b0: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48b1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48b1b4:
    // 0x48b1b4: 0x24e74628  addiu       $a3, $a3, 0x4628
    ctx->pc = 0x48b1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17960));
label_48b1b8:
    // 0x48b1b8: 0x240801a1  addiu       $t0, $zero, 0x1A1
    ctx->pc = 0x48b1b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 417));
label_48b1bc:
    // 0x48b1bc: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48b1bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48b1c0:
    // 0x48b1c0: 0x25294810  addiu       $t1, $t1, 0x4810
    ctx->pc = 0x48b1c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18448));
label_48b1c4:
    // 0x48b1c4: 0xc113940  jal         func_44E500
label_48b1c8:
    if (ctx->pc == 0x48B1C8u) {
        ctx->pc = 0x48B1CCu;
        goto label_48b1cc;
    }
    ctx->pc = 0x48B1C4u;
    SET_GPR_U32(ctx, 31, 0x48B1CCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48B1C4u, 0x48B1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B1CCu;
label_48b1cc:
    // 0x48b1cc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x48b1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_48b1d0:
    // 0x48b1d0: 0x2785b618  addiu       $a1, $gp, -0x49E8
    ctx->pc = 0x48b1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948376));
label_48b1d4:
    // 0x48b1d4: 0xc115c24  jal         func_457090
label_48b1d8:
    if (ctx->pc == 0x48B1D8u) {
        ctx->pc = 0x48B1DCu;
        goto label_48b1dc;
    }
    ctx->pc = 0x48B1D4u;
    SET_GPR_U32(ctx, 31, 0x48B1DCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48B1D4u, 0x48B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B1DCu;
label_48b1dc:
    // 0x48b1dc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x48b1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_48b1e0:
    // 0x48b1e0: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x48b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_48b1e4:
    // 0x48b1e4: 0x40f809  jalr        $v0
label_48b1e8:
    if (ctx->pc == 0x48B1E8u) {
        ctx->pc = 0x48B1ECu;
        goto label_48b1ec;
    }
    ctx->pc = 0x48B1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48B1ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B1E4u, 0x48B1ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48B1ECu;
label_48b1ec:
    // 0x48b1ec: 0xaf82b638  sw          $v0, -0x49C8($gp)
    ctx->pc = 0x48b1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948408), GPR_U32(ctx, 2));
label_48b1f0:
    // 0x48b1f0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x48b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_48b1f4:
    // 0x48b1f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48b1f8:
    if (ctx->pc == 0x48B1F8u) {
        ctx->pc = 0x48B1FCu;
        goto label_48b1fc;
    }
    ctx->pc = 0x48B1F4u;
    {
        const bool branch_taken_0x48b1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b1f4) {
            ctx->pc = 0x48B204u;
            goto label_48b204;
        }
    }
    ctx->pc = 0x48B1FCu;
label_48b1fc:
    // 0x48b1fc: 0xd  break       0
    ctx->pc = 0x48b1fcu;
    runtime->handleBreak(rdram, ctx);
label_48b200:
    // 0x48b200: 0x0  nop
    ctx->pc = 0x48b200u;
    // NOP
label_48b204:
    // 0x48b204: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x48b204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_48b208:
    // 0x48b208: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48b208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48b20c:
    // 0x48b20c: 0xc11392c  jal         func_44E4B0
label_48b210:
    if (ctx->pc == 0x48B210u) {
        ctx->pc = 0x48B214u;
        goto label_48b214;
    }
    ctx->pc = 0x48B20Cu;
    SET_GPR_U32(ctx, 31, 0x48B214u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48B20Cu, 0x48B214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B214u;
label_48b214:
    // 0x48b214: 0xc7a102f0  lwc1        $f1, 0x2F0($sp)
    ctx->pc = 0x48b214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b218:
    // 0x48b218: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48b218u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48b21c:
    // 0x48b21c: 0x0  nop
    ctx->pc = 0x48b21cu;
    // NOP
label_48b220:
    // 0x48b220: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x48b220u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_48b224:
    // 0x48b224: 0x450100ef  bc1t        . + 4 + (0xEF << 2)
label_48b228:
    if (ctx->pc == 0x48B228u) {
        ctx->pc = 0x48B22Cu;
        goto label_48b22c;
    }
    ctx->pc = 0x48B224u;
    {
        const bool branch_taken_0x48b224 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x48b224) {
            ctx->pc = 0x48B5E4u;
            goto label_48b5e4;
        }
    }
    ctx->pc = 0x48B22Cu;
label_48b22c:
    // 0x48b22c: 0xc7a102f0  lwc1        $f1, 0x2F0($sp)
    ctx->pc = 0x48b22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b230:
    // 0x48b230: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x48b230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_48b234:
    // 0x48b234: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x48b234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48b238:
    // 0x48b238: 0x0  nop
    ctx->pc = 0x48b238u;
    // NOP
label_48b23c:
    // 0x48b23c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x48b23cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_48b240:
    // 0x48b240: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_48b244:
    if (ctx->pc == 0x48B244u) {
        ctx->pc = 0x48B248u;
        goto label_48b248;
    }
    ctx->pc = 0x48B240u;
    {
        const bool branch_taken_0x48b240 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x48b240) {
            ctx->pc = 0x48B264u;
            goto label_48b264;
        }
    }
    ctx->pc = 0x48B248u;
label_48b248:
    // 0x48b248: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x48b248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_48b24c:
    // 0x48b24c: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x48b24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_48b250:
    // 0x48b250: 0x8fa502e0  lw          $a1, 0x2E0($sp)
    ctx->pc = 0x48b250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_48b254:
    // 0x48b254: 0xc115020  jal         func_454080
label_48b258:
    if (ctx->pc == 0x48B258u) {
        ctx->pc = 0x48B25Cu;
        goto label_48b25c;
    }
    ctx->pc = 0x48B254u;
    SET_GPR_U32(ctx, 31, 0x48B25Cu);
    ctx->pc = 0x454080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x454080u, 0x48B254u, 0x48B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B25Cu;
label_48b25c:
    // 0x48b25c: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_48b260:
    if (ctx->pc == 0x48B260u) {
        ctx->pc = 0x48B264u;
        goto label_48b264;
    }
    ctx->pc = 0x48B25Cu;
    {
        const bool branch_taken_0x48b25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b25c) {
            ctx->pc = 0x48B5E4u;
            goto label_48b5e4;
        }
    }
    ctx->pc = 0x48B264u;
label_48b264:
    // 0x48b264: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x48b264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_48b268:
    // 0x48b268: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x48b268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b26c:
    // 0x48b26c: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x48b26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_48b270:
    // 0x48b270: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x48b270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b274:
    // 0x48b274: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x48b274u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_48b278:
    // 0x48b278: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_48b27c:
    if (ctx->pc == 0x48B27Cu) {
        ctx->pc = 0x48B280u;
        goto label_48b280;
    }
    ctx->pc = 0x48B278u;
    {
        const bool branch_taken_0x48b278 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x48b278) {
            ctx->pc = 0x48B2B8u;
            goto label_48b2b8;
        }
    }
    ctx->pc = 0x48B280u;
label_48b280:
    // 0x48b280: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x48b280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_48b284:
    // 0x48b284: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x48b284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b288:
    // 0x48b288: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x48b288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_48b28c:
    // 0x48b28c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x48b28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b290:
    // 0x48b290: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x48b290u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_48b294:
    // 0x48b294: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_48b298:
    if (ctx->pc == 0x48B298u) {
        ctx->pc = 0x48B29Cu;
        goto label_48b29c;
    }
    ctx->pc = 0x48B294u;
    {
        const bool branch_taken_0x48b294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x48b294) {
            ctx->pc = 0x48B2B8u;
            goto label_48b2b8;
        }
    }
    ctx->pc = 0x48B29Cu;
label_48b29c:
    // 0x48b29c: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x48b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_48b2a0:
    // 0x48b2a0: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x48b2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b2a4:
    // 0x48b2a4: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x48b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_48b2a8:
    // 0x48b2a8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x48b2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b2ac:
    // 0x48b2ac: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x48b2acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_48b2b0:
    // 0x48b2b0: 0x450100cc  bc1t        . + 4 + (0xCC << 2)
label_48b2b4:
    if (ctx->pc == 0x48B2B4u) {
        ctx->pc = 0x48B2B8u;
        goto label_48b2b8;
    }
    ctx->pc = 0x48B2B0u;
    {
        const bool branch_taken_0x48b2b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x48b2b0) {
            ctx->pc = 0x48B5E4u;
            goto label_48b5e4;
        }
    }
    ctx->pc = 0x48B2B8u;
label_48b2b8:
    // 0x48b2b8: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x48b2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_48b2bc:
    // 0x48b2bc: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x48b2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_48b2c0:
    // 0x48b2c0: 0x8fa502e0  lw          $a1, 0x2E0($sp)
    ctx->pc = 0x48b2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_48b2c4:
    // 0x48b2c4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x48b2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_48b2c8:
    // 0x48b2c8: 0xc102f1c  jal         func_40BC70
label_48b2cc:
    if (ctx->pc == 0x48B2CCu) {
        ctx->pc = 0x48B2D0u;
        goto label_48b2d0;
    }
    ctx->pc = 0x48B2C8u;
    SET_GPR_U32(ctx, 31, 0x48B2D0u);
    ctx->pc = 0x40BC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BC70u, 0x48B2C8u, 0x48B2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B2D0u;
label_48b2d0:
    // 0x48b2d0: 0xc7a102f0  lwc1        $f1, 0x2F0($sp)
    ctx->pc = 0x48b2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b2d4:
    // 0x48b2d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48b2d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48b2d8:
    // 0x48b2d8: 0x0  nop
    ctx->pc = 0x48b2d8u;
    // NOP
label_48b2dc:
    // 0x48b2dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x48b2dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_48b2e0:
    // 0x48b2e0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_48b2e4:
    if (ctx->pc == 0x48B2E4u) {
        ctx->pc = 0x48B2E8u;
        goto label_48b2e8;
    }
    ctx->pc = 0x48B2E0u;
    {
        const bool branch_taken_0x48b2e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x48b2e0) {
            ctx->pc = 0x48B308u;
            goto label_48b308;
        }
    }
    ctx->pc = 0x48B2E8u;
label_48b2e8:
    // 0x48b2e8: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x48b2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_48b2ec:
    // 0x48b2ec: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x48b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_48b2f0:
    // 0x48b2f0: 0x24640068  addiu       $a0, $v1, 0x68
    ctx->pc = 0x48b2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
label_48b2f4:
    // 0x48b2f4: 0x2445002c  addiu       $a1, $v0, 0x2C
    ctx->pc = 0x48b2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_48b2f8:
    // 0x48b2f8: 0xc115020  jal         func_454080
label_48b2fc:
    if (ctx->pc == 0x48B2FCu) {
        ctx->pc = 0x48B300u;
        goto label_48b300;
    }
    ctx->pc = 0x48B2F8u;
    SET_GPR_U32(ctx, 31, 0x48B300u);
    ctx->pc = 0x454080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x454080u, 0x48B2F8u, 0x48B300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B300u;
label_48b300:
    // 0x48b300: 0x100000b5  b           . + 4 + (0xB5 << 2)
label_48b304:
    if (ctx->pc == 0x48B304u) {
        ctx->pc = 0x48B308u;
        goto label_48b308;
    }
    ctx->pc = 0x48B300u;
    {
        const bool branch_taken_0x48b300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b300) {
            ctx->pc = 0x48B5D8u;
            goto label_48b5d8;
        }
    }
    ctx->pc = 0x48B308u;
label_48b308:
    // 0x48b308: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x48b308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_48b30c:
    // 0x48b30c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x48b30cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_48b310:
    // 0x48b310: 0xc7a002f0  lwc1        $f0, 0x2F0($sp)
    ctx->pc = 0x48b310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b314:
    // 0x48b314: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x48b314u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_48b318:
    // 0x48b318: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_48b31c:
    if (ctx->pc == 0x48B31Cu) {
        ctx->pc = 0x48B320u;
        goto label_48b320;
    }
    ctx->pc = 0x48B318u;
    {
        const bool branch_taken_0x48b318 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x48b318) {
            ctx->pc = 0x48B33Cu;
            goto label_48b33c;
        }
    }
    ctx->pc = 0x48B320u;
label_48b320:
    // 0x48b320: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x48b320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_48b324:
    // 0x48b324: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x48b324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_48b328:
    // 0x48b328: 0x8fa502e0  lw          $a1, 0x2E0($sp)
    ctx->pc = 0x48b328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_48b32c:
    // 0x48b32c: 0xc115020  jal         func_454080
label_48b330:
    if (ctx->pc == 0x48B330u) {
        ctx->pc = 0x48B334u;
        goto label_48b334;
    }
    ctx->pc = 0x48B32Cu;
    SET_GPR_U32(ctx, 31, 0x48B334u);
    ctx->pc = 0x454080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x454080u, 0x48B32Cu, 0x48B334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B334u;
label_48b334:
    // 0x48b334: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_48b338:
    if (ctx->pc == 0x48B338u) {
        ctx->pc = 0x48B33Cu;
        goto label_48b33c;
    }
    ctx->pc = 0x48B334u;
    {
        const bool branch_taken_0x48b334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b334) {
            ctx->pc = 0x48B5D8u;
            goto label_48b5d8;
        }
    }
    ctx->pc = 0x48B33Cu;
label_48b33c:
    // 0x48b33c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x48b33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_48b340:
    // 0x48b340: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x48b340u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_48b344:
    // 0x48b344: 0xc7a002f0  lwc1        $f0, 0x2F0($sp)
    ctx->pc = 0x48b344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b348:
    // 0x48b348: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x48b348u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_48b34c:
    // 0x48b34c: 0xe7a002cc  swc1        $f0, 0x2CC($sp)
    ctx->pc = 0x48b34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 716), bits); }
label_48b350:
    // 0x48b350: 0xc7a002f0  lwc1        $f0, 0x2F0($sp)
    ctx->pc = 0x48b350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b354:
    // 0x48b354: 0xe7a002c8  swc1        $f0, 0x2C8($sp)
    ctx->pc = 0x48b354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
label_48b358:
    // 0x48b358: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x48b358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_48b35c:
    // 0x48b35c: 0x14600069  bnez        $v1, . + 4 + (0x69 << 2)
label_48b360:
    if (ctx->pc == 0x48B360u) {
        ctx->pc = 0x48B364u;
        goto label_48b364;
    }
    ctx->pc = 0x48B35Cu;
    {
        const bool branch_taken_0x48b35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48b35c) {
            ctx->pc = 0x48B504u;
            goto label_48b504;
        }
    }
    ctx->pc = 0x48B364u;
label_48b364:
    // 0x48b364: 0xc7a102cc  lwc1        $f1, 0x2CC($sp)
    ctx->pc = 0x48b364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b368:
    // 0x48b368: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x48b368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b36c:
    // 0x48b36c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48b36cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48b370:
    // 0x48b370: 0xe7a002cc  swc1        $f0, 0x2CC($sp)
    ctx->pc = 0x48b370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 716), bits); }
label_48b374:
    // 0x48b374: 0xc7a102cc  lwc1        $f1, 0x2CC($sp)
    ctx->pc = 0x48b374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b378:
    // 0x48b378: 0xc7a002cc  lwc1        $f0, 0x2CC($sp)
    ctx->pc = 0x48b378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b37c:
    // 0x48b37c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48b37cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48b380:
    // 0x48b380: 0xe7a002c4  swc1        $f0, 0x2C4($sp)
    ctx->pc = 0x48b380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
label_48b384:
    // 0x48b384: 0xc7a102c4  lwc1        $f1, 0x2C4($sp)
    ctx->pc = 0x48b384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b388:
    // 0x48b388: 0xc7a002cc  lwc1        $f0, 0x2CC($sp)
    ctx->pc = 0x48b388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b38c:
    // 0x48b38c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48b38cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48b390:
    // 0x48b390: 0xe7a002c0  swc1        $f0, 0x2C0($sp)
    ctx->pc = 0x48b390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_48b394:
    // 0x48b394: 0xc78381e0  lwc1        $f3, -0x7E20($gp)
    ctx->pc = 0x48b394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_48b398:
    // 0x48b398: 0xc7a202c4  lwc1        $f2, 0x2C4($sp)
    ctx->pc = 0x48b398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48b39c:
    // 0x48b39c: 0xc78181e4  lwc1        $f1, -0x7E1C($gp)
    ctx->pc = 0x48b39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b3a0:
    // 0x48b3a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48b3a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48b3a4:
    // 0x48b3a4: 0x0  nop
    ctx->pc = 0x48b3a4u;
    // NOP
label_48b3a8:
    // 0x48b3a8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48b3a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48b3ac:
    // 0x48b3ac: 0x460218dc  madd.s      $f3, $f3, $f2
    ctx->pc = 0x48b3acu;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_48b3b0:
    // 0x48b3b0: 0xc7a202c4  lwc1        $f2, 0x2C4($sp)
    ctx->pc = 0x48b3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48b3b4:
    // 0x48b3b4: 0xc78181e8  lwc1        $f1, -0x7E18($gp)
    ctx->pc = 0x48b3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b3b8:
    // 0x48b3b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48b3b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48b3bc:
    // 0x48b3bc: 0x0  nop
    ctx->pc = 0x48b3bcu;
    // NOP
label_48b3c0:
    // 0x48b3c0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48b3c0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48b3c4:
    // 0x48b3c4: 0x460310dc  madd.s      $f3, $f2, $f3
    ctx->pc = 0x48b3c4u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_48b3c8:
    // 0x48b3c8: 0xc7a202c4  lwc1        $f2, 0x2C4($sp)
    ctx->pc = 0x48b3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48b3cc:
    // 0x48b3cc: 0xc78181ec  lwc1        $f1, -0x7E14($gp)
    ctx->pc = 0x48b3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b3d0:
    // 0x48b3d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48b3d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48b3d4:
    // 0x48b3d4: 0x0  nop
    ctx->pc = 0x48b3d4u;
    // NOP
label_48b3d8:
    // 0x48b3d8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48b3d8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48b3dc:
    // 0x48b3dc: 0x460310dc  madd.s      $f3, $f2, $f3
    ctx->pc = 0x48b3dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_48b3e0:
    // 0x48b3e0: 0xc7a202c4  lwc1        $f2, 0x2C4($sp)
    ctx->pc = 0x48b3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48b3e4:
    // 0x48b3e4: 0xc78181f0  lwc1        $f1, -0x7E10($gp)
    ctx->pc = 0x48b3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b3e8:
    // 0x48b3e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48b3e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48b3ec:
    // 0x48b3ec: 0x0  nop
    ctx->pc = 0x48b3ecu;
    // NOP
label_48b3f0:
    // 0x48b3f0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48b3f0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48b3f4:
    // 0x48b3f4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x48b3f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_48b3f8:
    // 0x48b3f8: 0xe7a002bc  swc1        $f0, 0x2BC($sp)
    ctx->pc = 0x48b3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 700), bits); }
label_48b3fc:
    // 0x48b3fc: 0xc7a302c4  lwc1        $f3, 0x2C4($sp)
    ctx->pc = 0x48b3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_48b400:
    // 0x48b400: 0xc7a202bc  lwc1        $f2, 0x2BC($sp)
    ctx->pc = 0x48b400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48b404:
    // 0x48b404: 0xc78181f4  lwc1        $f1, -0x7E0C($gp)
    ctx->pc = 0x48b404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b408:
    // 0x48b408: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48b408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48b40c:
    // 0x48b40c: 0x0  nop
    ctx->pc = 0x48b40cu;
    // NOP
label_48b410:
    // 0x48b410: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48b410u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48b414:
    // 0x48b414: 0x460218dc  madd.s      $f3, $f3, $f2
    ctx->pc = 0x48b414u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_48b418:
    // 0x48b418: 0xc7a202c0  lwc1        $f2, 0x2C0($sp)
    ctx->pc = 0x48b418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48b41c:
    // 0x48b41c: 0xc7a102cc  lwc1        $f1, 0x2CC($sp)
    ctx->pc = 0x48b41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b420:
    // 0x48b420: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48b420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48b424:
    // 0x48b424: 0x0  nop
    ctx->pc = 0x48b424u;
    // NOP
label_48b428:
    // 0x48b428: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48b428u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48b42c:
    // 0x48b42c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x48b42cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_48b430:
    // 0x48b430: 0xe7a002cc  swc1        $f0, 0x2CC($sp)
    ctx->pc = 0x48b430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 716), bits); }
label_48b434:
    // 0x48b434: 0xc7a102c8  lwc1        $f1, 0x2C8($sp)
    ctx->pc = 0x48b434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b438:
    // 0x48b438: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x48b438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b43c:
    // 0x48b43c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48b43cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48b440:
    // 0x48b440: 0xe7a002c8  swc1        $f0, 0x2C8($sp)
    ctx->pc = 0x48b440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
label_48b444:
    // 0x48b444: 0xc7a102c8  lwc1        $f1, 0x2C8($sp)
    ctx->pc = 0x48b444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b448:
    // 0x48b448: 0xc7a002c8  lwc1        $f0, 0x2C8($sp)
    ctx->pc = 0x48b448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b44c:
    // 0x48b44c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48b44cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48b450:
    // 0x48b450: 0xe7a002b8  swc1        $f0, 0x2B8($sp)
    ctx->pc = 0x48b450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
label_48b454:
    // 0x48b454: 0xc7a102b8  lwc1        $f1, 0x2B8($sp)
    ctx->pc = 0x48b454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b458:
    // 0x48b458: 0xc7a002c8  lwc1        $f0, 0x2C8($sp)
    ctx->pc = 0x48b458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b45c:
    // 0x48b45c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48b45cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48b460:
    // 0x48b460: 0xe7a002b4  swc1        $f0, 0x2B4($sp)
    ctx->pc = 0x48b460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 692), bits); }
label_48b464:
    // 0x48b464: 0xc78381e0  lwc1        $f3, -0x7E20($gp)
    ctx->pc = 0x48b464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_48b468:
    // 0x48b468: 0xc7a202b8  lwc1        $f2, 0x2B8($sp)
    ctx->pc = 0x48b468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48b46c:
    // 0x48b46c: 0xc78181e4  lwc1        $f1, -0x7E1C($gp)
    ctx->pc = 0x48b46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b470:
    // 0x48b470: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48b470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48b474:
    // 0x48b474: 0x0  nop
    ctx->pc = 0x48b474u;
    // NOP
label_48b478:
    // 0x48b478: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48b478u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48b47c:
    // 0x48b47c: 0x460218dc  madd.s      $f3, $f3, $f2
    ctx->pc = 0x48b47cu;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_48b480:
    // 0x48b480: 0xc7a202b8  lwc1        $f2, 0x2B8($sp)
    ctx->pc = 0x48b480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48b484:
    // 0x48b484: 0xc78181e8  lwc1        $f1, -0x7E18($gp)
    ctx->pc = 0x48b484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b488:
    // 0x48b488: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48b488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48b48c:
    // 0x48b48c: 0x0  nop
    ctx->pc = 0x48b48cu;
    // NOP
label_48b490:
    // 0x48b490: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48b490u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48b494:
    // 0x48b494: 0x460310dc  madd.s      $f3, $f2, $f3
    ctx->pc = 0x48b494u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_48b498:
    // 0x48b498: 0xc7a202b8  lwc1        $f2, 0x2B8($sp)
    ctx->pc = 0x48b498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48b49c:
    // 0x48b49c: 0xc78181ec  lwc1        $f1, -0x7E14($gp)
    ctx->pc = 0x48b49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b4a0:
    // 0x48b4a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48b4a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48b4a4:
    // 0x48b4a4: 0x0  nop
    ctx->pc = 0x48b4a4u;
    // NOP
label_48b4a8:
    // 0x48b4a8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48b4a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48b4ac:
    // 0x48b4ac: 0x460310dc  madd.s      $f3, $f2, $f3
    ctx->pc = 0x48b4acu;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_48b4b0:
    // 0x48b4b0: 0xc7a202b8  lwc1        $f2, 0x2B8($sp)
    ctx->pc = 0x48b4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48b4b4:
    // 0x48b4b4: 0xc78181f0  lwc1        $f1, -0x7E10($gp)
    ctx->pc = 0x48b4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b4b8:
    // 0x48b4b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48b4b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48b4bc:
    // 0x48b4bc: 0x0  nop
    ctx->pc = 0x48b4bcu;
    // NOP
label_48b4c0:
    // 0x48b4c0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48b4c0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48b4c4:
    // 0x48b4c4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x48b4c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_48b4c8:
    // 0x48b4c8: 0xe7a002b0  swc1        $f0, 0x2B0($sp)
    ctx->pc = 0x48b4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
label_48b4cc:
    // 0x48b4cc: 0xc7a302b8  lwc1        $f3, 0x2B8($sp)
    ctx->pc = 0x48b4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_48b4d0:
    // 0x48b4d0: 0xc7a202b0  lwc1        $f2, 0x2B0($sp)
    ctx->pc = 0x48b4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48b4d4:
    // 0x48b4d4: 0xc78181f4  lwc1        $f1, -0x7E0C($gp)
    ctx->pc = 0x48b4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b4d8:
    // 0x48b4d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48b4d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48b4dc:
    // 0x48b4dc: 0x0  nop
    ctx->pc = 0x48b4dcu;
    // NOP
label_48b4e0:
    // 0x48b4e0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48b4e0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48b4e4:
    // 0x48b4e4: 0x460218dc  madd.s      $f3, $f3, $f2
    ctx->pc = 0x48b4e4u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_48b4e8:
    // 0x48b4e8: 0xc7a202b4  lwc1        $f2, 0x2B4($sp)
    ctx->pc = 0x48b4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48b4ec:
    // 0x48b4ec: 0xc7a102c8  lwc1        $f1, 0x2C8($sp)
    ctx->pc = 0x48b4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b4f0:
    // 0x48b4f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48b4f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48b4f4:
    // 0x48b4f4: 0x0  nop
    ctx->pc = 0x48b4f4u;
    // NOP
label_48b4f8:
    // 0x48b4f8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48b4f8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48b4fc:
    // 0x48b4fc: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x48b4fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_48b500:
    // 0x48b500: 0xe7a002c8  swc1        $f0, 0x2C8($sp)
    ctx->pc = 0x48b500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
label_48b504:
    // 0x48b504: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x48b504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b508:
    // 0x48b508: 0xc7a002cc  lwc1        $f0, 0x2CC($sp)
    ctx->pc = 0x48b508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b50c:
    // 0x48b50c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48b50cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48b510:
    // 0x48b510: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x48b510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_48b514:
    // 0x48b514: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x48b514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
label_48b518:
    // 0x48b518: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x48b518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b51c:
    // 0x48b51c: 0xc7a002cc  lwc1        $f0, 0x2CC($sp)
    ctx->pc = 0x48b51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b520:
    // 0x48b520: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48b520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48b524:
    // 0x48b524: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x48b524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_48b528:
    // 0x48b528: 0xe460006c  swc1        $f0, 0x6C($v1)
    ctx->pc = 0x48b528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 108), bits); }
label_48b52c:
    // 0x48b52c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x48b52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b530:
    // 0x48b530: 0xc7a002cc  lwc1        $f0, 0x2CC($sp)
    ctx->pc = 0x48b530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b534:
    // 0x48b534: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48b534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48b538:
    // 0x48b538: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x48b538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_48b53c:
    // 0x48b53c: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x48b53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
label_48b540:
    // 0x48b540: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x48b540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_48b544:
    // 0x48b544: 0xc7a202c8  lwc1        $f2, 0x2C8($sp)
    ctx->pc = 0x48b544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48b548:
    // 0x48b548: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x48b548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_48b54c:
    // 0x48b54c: 0xc4610068  lwc1        $f1, 0x68($v1)
    ctx->pc = 0x48b54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b550:
    // 0x48b550: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48b550u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48b554:
    // 0x48b554: 0x0  nop
    ctx->pc = 0x48b554u;
    // NOP
label_48b558:
    // 0x48b558: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48b558u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48b55c:
    // 0x48b55c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x48b55cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_48b560:
    // 0x48b560: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x48b560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
label_48b564:
    // 0x48b564: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x48b564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_48b568:
    // 0x48b568: 0xc7a202c8  lwc1        $f2, 0x2C8($sp)
    ctx->pc = 0x48b568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48b56c:
    // 0x48b56c: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x48b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_48b570:
    // 0x48b570: 0xc461006c  lwc1        $f1, 0x6C($v1)
    ctx->pc = 0x48b570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b574:
    // 0x48b574: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48b574u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48b578:
    // 0x48b578: 0x0  nop
    ctx->pc = 0x48b578u;
    // NOP
label_48b57c:
    // 0x48b57c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48b57cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48b580:
    // 0x48b580: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x48b580u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_48b584:
    // 0x48b584: 0xe460006c  swc1        $f0, 0x6C($v1)
    ctx->pc = 0x48b584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 108), bits); }
label_48b588:
    // 0x48b588: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x48b588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_48b58c:
    // 0x48b58c: 0xc7a202c8  lwc1        $f2, 0x2C8($sp)
    ctx->pc = 0x48b58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48b590:
    // 0x48b590: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x48b590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_48b594:
    // 0x48b594: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x48b594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b598:
    // 0x48b598: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48b598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48b59c:
    // 0x48b59c: 0x0  nop
    ctx->pc = 0x48b59cu;
    // NOP
label_48b5a0:
    // 0x48b5a0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48b5a0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48b5a4:
    // 0x48b5a4: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x48b5a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_48b5a8:
    // 0x48b5a8: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x48b5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
label_48b5ac:
    // 0x48b5ac: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x48b5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_48b5b0:
    // 0x48b5b0: 0xc7a202cc  lwc1        $f2, 0x2CC($sp)
    ctx->pc = 0x48b5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48b5b4:
    // 0x48b5b4: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x48b5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b5b8:
    // 0x48b5b8: 0xc7a002c8  lwc1        $f0, 0x2C8($sp)
    ctx->pc = 0x48b5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b5bc:
    // 0x48b5bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x48b5bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48b5c0:
    // 0x48b5c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48b5c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48b5c4:
    // 0x48b5c4: 0x0  nop
    ctx->pc = 0x48b5c4u;
    // NOP
label_48b5c8:
    // 0x48b5c8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48b5c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48b5cc:
    // 0x48b5cc: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x48b5ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_48b5d0:
    // 0x48b5d0: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x48b5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_48b5d4:
    // 0x48b5d4: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x48b5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
label_48b5d8:
    // 0x48b5d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48b5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48b5dc:
    // 0x48b5dc: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x48b5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_48b5e0:
    // 0x48b5e0: 0xac640050  sw          $a0, 0x50($v1)
    ctx->pc = 0x48b5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 4));
label_48b5e4:
    // 0x48b5e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48b5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_48b5e8:
    // 0x48b5e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48b5e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48b5ec:
    // 0x48b5ec: 0x27bd0300  addiu       $sp, $sp, 0x300
    ctx->pc = 0x48b5ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_48b5f0:
    // 0x48b5f0: 0x3e00008  jr          $ra
label_48b5f4:
    if (ctx->pc == 0x48B5F4u) {
        ctx->pc = 0x48B5F8u;
        goto label_48b5f8;
    }
    ctx->pc = 0x48B5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B5F8u;
label_48b5f8:
    // 0x48b5f8: 0x0  nop
    ctx->pc = 0x48b5f8u;
    // NOP
label_48b5fc:
    // 0x48b5fc: 0x0  nop
    ctx->pc = 0x48b5fcu;
    // NOP
    ctx->pc = 0x48b600u;
}
