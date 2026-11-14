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

// Function: sub_0028AFB0
// Address: 0x28afb0 - 0x28c700
void sub_0028AFB0_0x28afb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AFB0_0x28afb0");
#endif

    switch (ctx->pc) {
        case 0x28afb0u: goto label_28afb0;
        case 0x28afb4u: goto label_28afb4;
        case 0x28afb8u: goto label_28afb8;
        case 0x28afbcu: goto label_28afbc;
        case 0x28afc0u: goto label_28afc0;
        case 0x28afc4u: goto label_28afc4;
        case 0x28afc8u: goto label_28afc8;
        case 0x28afccu: goto label_28afcc;
        case 0x28afd0u: goto label_28afd0;
        case 0x28afd4u: goto label_28afd4;
        case 0x28afd8u: goto label_28afd8;
        case 0x28afdcu: goto label_28afdc;
        case 0x28afe0u: goto label_28afe0;
        case 0x28afe4u: goto label_28afe4;
        case 0x28afe8u: goto label_28afe8;
        case 0x28afecu: goto label_28afec;
        case 0x28aff0u: goto label_28aff0;
        case 0x28aff4u: goto label_28aff4;
        case 0x28aff8u: goto label_28aff8;
        case 0x28affcu: goto label_28affc;
        case 0x28b000u: goto label_28b000;
        case 0x28b004u: goto label_28b004;
        case 0x28b008u: goto label_28b008;
        case 0x28b00cu: goto label_28b00c;
        case 0x28b010u: goto label_28b010;
        case 0x28b014u: goto label_28b014;
        case 0x28b018u: goto label_28b018;
        case 0x28b01cu: goto label_28b01c;
        case 0x28b020u: goto label_28b020;
        case 0x28b024u: goto label_28b024;
        case 0x28b028u: goto label_28b028;
        case 0x28b02cu: goto label_28b02c;
        case 0x28b030u: goto label_28b030;
        case 0x28b034u: goto label_28b034;
        case 0x28b038u: goto label_28b038;
        case 0x28b03cu: goto label_28b03c;
        case 0x28b040u: goto label_28b040;
        case 0x28b044u: goto label_28b044;
        case 0x28b048u: goto label_28b048;
        case 0x28b04cu: goto label_28b04c;
        case 0x28b050u: goto label_28b050;
        case 0x28b054u: goto label_28b054;
        case 0x28b058u: goto label_28b058;
        case 0x28b05cu: goto label_28b05c;
        case 0x28b060u: goto label_28b060;
        case 0x28b064u: goto label_28b064;
        case 0x28b068u: goto label_28b068;
        case 0x28b06cu: goto label_28b06c;
        case 0x28b070u: goto label_28b070;
        case 0x28b074u: goto label_28b074;
        case 0x28b078u: goto label_28b078;
        case 0x28b07cu: goto label_28b07c;
        case 0x28b080u: goto label_28b080;
        case 0x28b084u: goto label_28b084;
        case 0x28b088u: goto label_28b088;
        case 0x28b08cu: goto label_28b08c;
        case 0x28b090u: goto label_28b090;
        case 0x28b094u: goto label_28b094;
        case 0x28b098u: goto label_28b098;
        case 0x28b09cu: goto label_28b09c;
        case 0x28b0a0u: goto label_28b0a0;
        case 0x28b0a4u: goto label_28b0a4;
        case 0x28b0a8u: goto label_28b0a8;
        case 0x28b0acu: goto label_28b0ac;
        case 0x28b0b0u: goto label_28b0b0;
        case 0x28b0b4u: goto label_28b0b4;
        case 0x28b0b8u: goto label_28b0b8;
        case 0x28b0bcu: goto label_28b0bc;
        case 0x28b0c0u: goto label_28b0c0;
        case 0x28b0c4u: goto label_28b0c4;
        case 0x28b0c8u: goto label_28b0c8;
        case 0x28b0ccu: goto label_28b0cc;
        case 0x28b0d0u: goto label_28b0d0;
        case 0x28b0d4u: goto label_28b0d4;
        case 0x28b0d8u: goto label_28b0d8;
        case 0x28b0dcu: goto label_28b0dc;
        case 0x28b0e0u: goto label_28b0e0;
        case 0x28b0e4u: goto label_28b0e4;
        case 0x28b0e8u: goto label_28b0e8;
        case 0x28b0ecu: goto label_28b0ec;
        case 0x28b0f0u: goto label_28b0f0;
        case 0x28b0f4u: goto label_28b0f4;
        case 0x28b0f8u: goto label_28b0f8;
        case 0x28b0fcu: goto label_28b0fc;
        case 0x28b100u: goto label_28b100;
        case 0x28b104u: goto label_28b104;
        case 0x28b108u: goto label_28b108;
        case 0x28b10cu: goto label_28b10c;
        case 0x28b110u: goto label_28b110;
        case 0x28b114u: goto label_28b114;
        case 0x28b118u: goto label_28b118;
        case 0x28b11cu: goto label_28b11c;
        case 0x28b120u: goto label_28b120;
        case 0x28b124u: goto label_28b124;
        case 0x28b128u: goto label_28b128;
        case 0x28b12cu: goto label_28b12c;
        case 0x28b130u: goto label_28b130;
        case 0x28b134u: goto label_28b134;
        case 0x28b138u: goto label_28b138;
        case 0x28b13cu: goto label_28b13c;
        case 0x28b140u: goto label_28b140;
        case 0x28b144u: goto label_28b144;
        case 0x28b148u: goto label_28b148;
        case 0x28b14cu: goto label_28b14c;
        case 0x28b150u: goto label_28b150;
        case 0x28b154u: goto label_28b154;
        case 0x28b158u: goto label_28b158;
        case 0x28b15cu: goto label_28b15c;
        case 0x28b160u: goto label_28b160;
        case 0x28b164u: goto label_28b164;
        case 0x28b168u: goto label_28b168;
        case 0x28b16cu: goto label_28b16c;
        case 0x28b170u: goto label_28b170;
        case 0x28b174u: goto label_28b174;
        case 0x28b178u: goto label_28b178;
        case 0x28b17cu: goto label_28b17c;
        case 0x28b180u: goto label_28b180;
        case 0x28b184u: goto label_28b184;
        case 0x28b188u: goto label_28b188;
        case 0x28b18cu: goto label_28b18c;
        case 0x28b190u: goto label_28b190;
        case 0x28b194u: goto label_28b194;
        case 0x28b198u: goto label_28b198;
        case 0x28b19cu: goto label_28b19c;
        case 0x28b1a0u: goto label_28b1a0;
        case 0x28b1a4u: goto label_28b1a4;
        case 0x28b1a8u: goto label_28b1a8;
        case 0x28b1acu: goto label_28b1ac;
        case 0x28b1b0u: goto label_28b1b0;
        case 0x28b1b4u: goto label_28b1b4;
        case 0x28b1b8u: goto label_28b1b8;
        case 0x28b1bcu: goto label_28b1bc;
        case 0x28b1c0u: goto label_28b1c0;
        case 0x28b1c4u: goto label_28b1c4;
        case 0x28b1c8u: goto label_28b1c8;
        case 0x28b1ccu: goto label_28b1cc;
        case 0x28b1d0u: goto label_28b1d0;
        case 0x28b1d4u: goto label_28b1d4;
        case 0x28b1d8u: goto label_28b1d8;
        case 0x28b1dcu: goto label_28b1dc;
        case 0x28b1e0u: goto label_28b1e0;
        case 0x28b1e4u: goto label_28b1e4;
        case 0x28b1e8u: goto label_28b1e8;
        case 0x28b1ecu: goto label_28b1ec;
        case 0x28b1f0u: goto label_28b1f0;
        case 0x28b1f4u: goto label_28b1f4;
        case 0x28b1f8u: goto label_28b1f8;
        case 0x28b1fcu: goto label_28b1fc;
        case 0x28b200u: goto label_28b200;
        case 0x28b204u: goto label_28b204;
        case 0x28b208u: goto label_28b208;
        case 0x28b20cu: goto label_28b20c;
        case 0x28b210u: goto label_28b210;
        case 0x28b214u: goto label_28b214;
        case 0x28b218u: goto label_28b218;
        case 0x28b21cu: goto label_28b21c;
        case 0x28b220u: goto label_28b220;
        case 0x28b224u: goto label_28b224;
        case 0x28b228u: goto label_28b228;
        case 0x28b22cu: goto label_28b22c;
        case 0x28b230u: goto label_28b230;
        case 0x28b234u: goto label_28b234;
        case 0x28b238u: goto label_28b238;
        case 0x28b23cu: goto label_28b23c;
        case 0x28b240u: goto label_28b240;
        case 0x28b244u: goto label_28b244;
        case 0x28b248u: goto label_28b248;
        case 0x28b24cu: goto label_28b24c;
        case 0x28b250u: goto label_28b250;
        case 0x28b254u: goto label_28b254;
        case 0x28b258u: goto label_28b258;
        case 0x28b25cu: goto label_28b25c;
        case 0x28b260u: goto label_28b260;
        case 0x28b264u: goto label_28b264;
        case 0x28b268u: goto label_28b268;
        case 0x28b26cu: goto label_28b26c;
        case 0x28b270u: goto label_28b270;
        case 0x28b274u: goto label_28b274;
        case 0x28b278u: goto label_28b278;
        case 0x28b27cu: goto label_28b27c;
        case 0x28b280u: goto label_28b280;
        case 0x28b284u: goto label_28b284;
        case 0x28b288u: goto label_28b288;
        case 0x28b28cu: goto label_28b28c;
        case 0x28b290u: goto label_28b290;
        case 0x28b294u: goto label_28b294;
        case 0x28b298u: goto label_28b298;
        case 0x28b29cu: goto label_28b29c;
        case 0x28b2a0u: goto label_28b2a0;
        case 0x28b2a4u: goto label_28b2a4;
        case 0x28b2a8u: goto label_28b2a8;
        case 0x28b2acu: goto label_28b2ac;
        case 0x28b2b0u: goto label_28b2b0;
        case 0x28b2b4u: goto label_28b2b4;
        case 0x28b2b8u: goto label_28b2b8;
        case 0x28b2bcu: goto label_28b2bc;
        case 0x28b2c0u: goto label_28b2c0;
        case 0x28b2c4u: goto label_28b2c4;
        case 0x28b2c8u: goto label_28b2c8;
        case 0x28b2ccu: goto label_28b2cc;
        case 0x28b2d0u: goto label_28b2d0;
        case 0x28b2d4u: goto label_28b2d4;
        case 0x28b2d8u: goto label_28b2d8;
        case 0x28b2dcu: goto label_28b2dc;
        case 0x28b2e0u: goto label_28b2e0;
        case 0x28b2e4u: goto label_28b2e4;
        case 0x28b2e8u: goto label_28b2e8;
        case 0x28b2ecu: goto label_28b2ec;
        case 0x28b2f0u: goto label_28b2f0;
        case 0x28b2f4u: goto label_28b2f4;
        case 0x28b2f8u: goto label_28b2f8;
        case 0x28b2fcu: goto label_28b2fc;
        case 0x28b300u: goto label_28b300;
        case 0x28b304u: goto label_28b304;
        case 0x28b308u: goto label_28b308;
        case 0x28b30cu: goto label_28b30c;
        case 0x28b310u: goto label_28b310;
        case 0x28b314u: goto label_28b314;
        case 0x28b318u: goto label_28b318;
        case 0x28b31cu: goto label_28b31c;
        case 0x28b320u: goto label_28b320;
        case 0x28b324u: goto label_28b324;
        case 0x28b328u: goto label_28b328;
        case 0x28b32cu: goto label_28b32c;
        case 0x28b330u: goto label_28b330;
        case 0x28b334u: goto label_28b334;
        case 0x28b338u: goto label_28b338;
        case 0x28b33cu: goto label_28b33c;
        case 0x28b340u: goto label_28b340;
        case 0x28b344u: goto label_28b344;
        case 0x28b348u: goto label_28b348;
        case 0x28b34cu: goto label_28b34c;
        case 0x28b350u: goto label_28b350;
        case 0x28b354u: goto label_28b354;
        case 0x28b358u: goto label_28b358;
        case 0x28b35cu: goto label_28b35c;
        case 0x28b360u: goto label_28b360;
        case 0x28b364u: goto label_28b364;
        case 0x28b368u: goto label_28b368;
        case 0x28b36cu: goto label_28b36c;
        case 0x28b370u: goto label_28b370;
        case 0x28b374u: goto label_28b374;
        case 0x28b378u: goto label_28b378;
        case 0x28b37cu: goto label_28b37c;
        case 0x28b380u: goto label_28b380;
        case 0x28b384u: goto label_28b384;
        case 0x28b388u: goto label_28b388;
        case 0x28b38cu: goto label_28b38c;
        case 0x28b390u: goto label_28b390;
        case 0x28b394u: goto label_28b394;
        case 0x28b398u: goto label_28b398;
        case 0x28b39cu: goto label_28b39c;
        case 0x28b3a0u: goto label_28b3a0;
        case 0x28b3a4u: goto label_28b3a4;
        case 0x28b3a8u: goto label_28b3a8;
        case 0x28b3acu: goto label_28b3ac;
        case 0x28b3b0u: goto label_28b3b0;
        case 0x28b3b4u: goto label_28b3b4;
        case 0x28b3b8u: goto label_28b3b8;
        case 0x28b3bcu: goto label_28b3bc;
        case 0x28b3c0u: goto label_28b3c0;
        case 0x28b3c4u: goto label_28b3c4;
        case 0x28b3c8u: goto label_28b3c8;
        case 0x28b3ccu: goto label_28b3cc;
        case 0x28b3d0u: goto label_28b3d0;
        case 0x28b3d4u: goto label_28b3d4;
        case 0x28b3d8u: goto label_28b3d8;
        case 0x28b3dcu: goto label_28b3dc;
        case 0x28b3e0u: goto label_28b3e0;
        case 0x28b3e4u: goto label_28b3e4;
        case 0x28b3e8u: goto label_28b3e8;
        case 0x28b3ecu: goto label_28b3ec;
        case 0x28b3f0u: goto label_28b3f0;
        case 0x28b3f4u: goto label_28b3f4;
        case 0x28b3f8u: goto label_28b3f8;
        case 0x28b3fcu: goto label_28b3fc;
        case 0x28b400u: goto label_28b400;
        case 0x28b404u: goto label_28b404;
        case 0x28b408u: goto label_28b408;
        case 0x28b40cu: goto label_28b40c;
        case 0x28b410u: goto label_28b410;
        case 0x28b414u: goto label_28b414;
        case 0x28b418u: goto label_28b418;
        case 0x28b41cu: goto label_28b41c;
        case 0x28b420u: goto label_28b420;
        case 0x28b424u: goto label_28b424;
        case 0x28b428u: goto label_28b428;
        case 0x28b42cu: goto label_28b42c;
        case 0x28b430u: goto label_28b430;
        case 0x28b434u: goto label_28b434;
        case 0x28b438u: goto label_28b438;
        case 0x28b43cu: goto label_28b43c;
        case 0x28b440u: goto label_28b440;
        case 0x28b444u: goto label_28b444;
        case 0x28b448u: goto label_28b448;
        case 0x28b44cu: goto label_28b44c;
        case 0x28b450u: goto label_28b450;
        case 0x28b454u: goto label_28b454;
        case 0x28b458u: goto label_28b458;
        case 0x28b45cu: goto label_28b45c;
        case 0x28b460u: goto label_28b460;
        case 0x28b464u: goto label_28b464;
        case 0x28b468u: goto label_28b468;
        case 0x28b46cu: goto label_28b46c;
        case 0x28b470u: goto label_28b470;
        case 0x28b474u: goto label_28b474;
        case 0x28b478u: goto label_28b478;
        case 0x28b47cu: goto label_28b47c;
        case 0x28b480u: goto label_28b480;
        case 0x28b484u: goto label_28b484;
        case 0x28b488u: goto label_28b488;
        case 0x28b48cu: goto label_28b48c;
        case 0x28b490u: goto label_28b490;
        case 0x28b494u: goto label_28b494;
        case 0x28b498u: goto label_28b498;
        case 0x28b49cu: goto label_28b49c;
        case 0x28b4a0u: goto label_28b4a0;
        case 0x28b4a4u: goto label_28b4a4;
        case 0x28b4a8u: goto label_28b4a8;
        case 0x28b4acu: goto label_28b4ac;
        case 0x28b4b0u: goto label_28b4b0;
        case 0x28b4b4u: goto label_28b4b4;
        case 0x28b4b8u: goto label_28b4b8;
        case 0x28b4bcu: goto label_28b4bc;
        case 0x28b4c0u: goto label_28b4c0;
        case 0x28b4c4u: goto label_28b4c4;
        case 0x28b4c8u: goto label_28b4c8;
        case 0x28b4ccu: goto label_28b4cc;
        case 0x28b4d0u: goto label_28b4d0;
        case 0x28b4d4u: goto label_28b4d4;
        case 0x28b4d8u: goto label_28b4d8;
        case 0x28b4dcu: goto label_28b4dc;
        case 0x28b4e0u: goto label_28b4e0;
        case 0x28b4e4u: goto label_28b4e4;
        case 0x28b4e8u: goto label_28b4e8;
        case 0x28b4ecu: goto label_28b4ec;
        case 0x28b4f0u: goto label_28b4f0;
        case 0x28b4f4u: goto label_28b4f4;
        case 0x28b4f8u: goto label_28b4f8;
        case 0x28b4fcu: goto label_28b4fc;
        case 0x28b500u: goto label_28b500;
        case 0x28b504u: goto label_28b504;
        case 0x28b508u: goto label_28b508;
        case 0x28b50cu: goto label_28b50c;
        case 0x28b510u: goto label_28b510;
        case 0x28b514u: goto label_28b514;
        case 0x28b518u: goto label_28b518;
        case 0x28b51cu: goto label_28b51c;
        case 0x28b520u: goto label_28b520;
        case 0x28b524u: goto label_28b524;
        case 0x28b528u: goto label_28b528;
        case 0x28b52cu: goto label_28b52c;
        case 0x28b530u: goto label_28b530;
        case 0x28b534u: goto label_28b534;
        case 0x28b538u: goto label_28b538;
        case 0x28b53cu: goto label_28b53c;
        case 0x28b540u: goto label_28b540;
        case 0x28b544u: goto label_28b544;
        case 0x28b548u: goto label_28b548;
        case 0x28b54cu: goto label_28b54c;
        case 0x28b550u: goto label_28b550;
        case 0x28b554u: goto label_28b554;
        case 0x28b558u: goto label_28b558;
        case 0x28b55cu: goto label_28b55c;
        case 0x28b560u: goto label_28b560;
        case 0x28b564u: goto label_28b564;
        case 0x28b568u: goto label_28b568;
        case 0x28b56cu: goto label_28b56c;
        case 0x28b570u: goto label_28b570;
        case 0x28b574u: goto label_28b574;
        case 0x28b578u: goto label_28b578;
        case 0x28b57cu: goto label_28b57c;
        case 0x28b580u: goto label_28b580;
        case 0x28b584u: goto label_28b584;
        case 0x28b588u: goto label_28b588;
        case 0x28b58cu: goto label_28b58c;
        case 0x28b590u: goto label_28b590;
        case 0x28b594u: goto label_28b594;
        case 0x28b598u: goto label_28b598;
        case 0x28b59cu: goto label_28b59c;
        case 0x28b5a0u: goto label_28b5a0;
        case 0x28b5a4u: goto label_28b5a4;
        case 0x28b5a8u: goto label_28b5a8;
        case 0x28b5acu: goto label_28b5ac;
        case 0x28b5b0u: goto label_28b5b0;
        case 0x28b5b4u: goto label_28b5b4;
        case 0x28b5b8u: goto label_28b5b8;
        case 0x28b5bcu: goto label_28b5bc;
        case 0x28b5c0u: goto label_28b5c0;
        case 0x28b5c4u: goto label_28b5c4;
        case 0x28b5c8u: goto label_28b5c8;
        case 0x28b5ccu: goto label_28b5cc;
        case 0x28b5d0u: goto label_28b5d0;
        case 0x28b5d4u: goto label_28b5d4;
        case 0x28b5d8u: goto label_28b5d8;
        case 0x28b5dcu: goto label_28b5dc;
        case 0x28b5e0u: goto label_28b5e0;
        case 0x28b5e4u: goto label_28b5e4;
        case 0x28b5e8u: goto label_28b5e8;
        case 0x28b5ecu: goto label_28b5ec;
        case 0x28b5f0u: goto label_28b5f0;
        case 0x28b5f4u: goto label_28b5f4;
        case 0x28b5f8u: goto label_28b5f8;
        case 0x28b5fcu: goto label_28b5fc;
        case 0x28b600u: goto label_28b600;
        case 0x28b604u: goto label_28b604;
        case 0x28b608u: goto label_28b608;
        case 0x28b60cu: goto label_28b60c;
        case 0x28b610u: goto label_28b610;
        case 0x28b614u: goto label_28b614;
        case 0x28b618u: goto label_28b618;
        case 0x28b61cu: goto label_28b61c;
        case 0x28b620u: goto label_28b620;
        case 0x28b624u: goto label_28b624;
        case 0x28b628u: goto label_28b628;
        case 0x28b62cu: goto label_28b62c;
        case 0x28b630u: goto label_28b630;
        case 0x28b634u: goto label_28b634;
        case 0x28b638u: goto label_28b638;
        case 0x28b63cu: goto label_28b63c;
        case 0x28b640u: goto label_28b640;
        case 0x28b644u: goto label_28b644;
        case 0x28b648u: goto label_28b648;
        case 0x28b64cu: goto label_28b64c;
        case 0x28b650u: goto label_28b650;
        case 0x28b654u: goto label_28b654;
        case 0x28b658u: goto label_28b658;
        case 0x28b65cu: goto label_28b65c;
        case 0x28b660u: goto label_28b660;
        case 0x28b664u: goto label_28b664;
        case 0x28b668u: goto label_28b668;
        case 0x28b66cu: goto label_28b66c;
        case 0x28b670u: goto label_28b670;
        case 0x28b674u: goto label_28b674;
        case 0x28b678u: goto label_28b678;
        case 0x28b67cu: goto label_28b67c;
        case 0x28b680u: goto label_28b680;
        case 0x28b684u: goto label_28b684;
        case 0x28b688u: goto label_28b688;
        case 0x28b68cu: goto label_28b68c;
        case 0x28b690u: goto label_28b690;
        case 0x28b694u: goto label_28b694;
        case 0x28b698u: goto label_28b698;
        case 0x28b69cu: goto label_28b69c;
        case 0x28b6a0u: goto label_28b6a0;
        case 0x28b6a4u: goto label_28b6a4;
        case 0x28b6a8u: goto label_28b6a8;
        case 0x28b6acu: goto label_28b6ac;
        case 0x28b6b0u: goto label_28b6b0;
        case 0x28b6b4u: goto label_28b6b4;
        case 0x28b6b8u: goto label_28b6b8;
        case 0x28b6bcu: goto label_28b6bc;
        case 0x28b6c0u: goto label_28b6c0;
        case 0x28b6c4u: goto label_28b6c4;
        case 0x28b6c8u: goto label_28b6c8;
        case 0x28b6ccu: goto label_28b6cc;
        case 0x28b6d0u: goto label_28b6d0;
        case 0x28b6d4u: goto label_28b6d4;
        case 0x28b6d8u: goto label_28b6d8;
        case 0x28b6dcu: goto label_28b6dc;
        case 0x28b6e0u: goto label_28b6e0;
        case 0x28b6e4u: goto label_28b6e4;
        case 0x28b6e8u: goto label_28b6e8;
        case 0x28b6ecu: goto label_28b6ec;
        case 0x28b6f0u: goto label_28b6f0;
        case 0x28b6f4u: goto label_28b6f4;
        case 0x28b6f8u: goto label_28b6f8;
        case 0x28b6fcu: goto label_28b6fc;
        case 0x28b700u: goto label_28b700;
        case 0x28b704u: goto label_28b704;
        case 0x28b708u: goto label_28b708;
        case 0x28b70cu: goto label_28b70c;
        case 0x28b710u: goto label_28b710;
        case 0x28b714u: goto label_28b714;
        case 0x28b718u: goto label_28b718;
        case 0x28b71cu: goto label_28b71c;
        case 0x28b720u: goto label_28b720;
        case 0x28b724u: goto label_28b724;
        case 0x28b728u: goto label_28b728;
        case 0x28b72cu: goto label_28b72c;
        case 0x28b730u: goto label_28b730;
        case 0x28b734u: goto label_28b734;
        case 0x28b738u: goto label_28b738;
        case 0x28b73cu: goto label_28b73c;
        case 0x28b740u: goto label_28b740;
        case 0x28b744u: goto label_28b744;
        case 0x28b748u: goto label_28b748;
        case 0x28b74cu: goto label_28b74c;
        case 0x28b750u: goto label_28b750;
        case 0x28b754u: goto label_28b754;
        case 0x28b758u: goto label_28b758;
        case 0x28b75cu: goto label_28b75c;
        case 0x28b760u: goto label_28b760;
        case 0x28b764u: goto label_28b764;
        case 0x28b768u: goto label_28b768;
        case 0x28b76cu: goto label_28b76c;
        case 0x28b770u: goto label_28b770;
        case 0x28b774u: goto label_28b774;
        case 0x28b778u: goto label_28b778;
        case 0x28b77cu: goto label_28b77c;
        case 0x28b780u: goto label_28b780;
        case 0x28b784u: goto label_28b784;
        case 0x28b788u: goto label_28b788;
        case 0x28b78cu: goto label_28b78c;
        case 0x28b790u: goto label_28b790;
        case 0x28b794u: goto label_28b794;
        case 0x28b798u: goto label_28b798;
        case 0x28b79cu: goto label_28b79c;
        case 0x28b7a0u: goto label_28b7a0;
        case 0x28b7a4u: goto label_28b7a4;
        case 0x28b7a8u: goto label_28b7a8;
        case 0x28b7acu: goto label_28b7ac;
        case 0x28b7b0u: goto label_28b7b0;
        case 0x28b7b4u: goto label_28b7b4;
        case 0x28b7b8u: goto label_28b7b8;
        case 0x28b7bcu: goto label_28b7bc;
        case 0x28b7c0u: goto label_28b7c0;
        case 0x28b7c4u: goto label_28b7c4;
        case 0x28b7c8u: goto label_28b7c8;
        case 0x28b7ccu: goto label_28b7cc;
        case 0x28b7d0u: goto label_28b7d0;
        case 0x28b7d4u: goto label_28b7d4;
        case 0x28b7d8u: goto label_28b7d8;
        case 0x28b7dcu: goto label_28b7dc;
        case 0x28b7e0u: goto label_28b7e0;
        case 0x28b7e4u: goto label_28b7e4;
        case 0x28b7e8u: goto label_28b7e8;
        case 0x28b7ecu: goto label_28b7ec;
        case 0x28b7f0u: goto label_28b7f0;
        case 0x28b7f4u: goto label_28b7f4;
        case 0x28b7f8u: goto label_28b7f8;
        case 0x28b7fcu: goto label_28b7fc;
        case 0x28b800u: goto label_28b800;
        case 0x28b804u: goto label_28b804;
        case 0x28b808u: goto label_28b808;
        case 0x28b80cu: goto label_28b80c;
        case 0x28b810u: goto label_28b810;
        case 0x28b814u: goto label_28b814;
        case 0x28b818u: goto label_28b818;
        case 0x28b81cu: goto label_28b81c;
        case 0x28b820u: goto label_28b820;
        case 0x28b824u: goto label_28b824;
        case 0x28b828u: goto label_28b828;
        case 0x28b82cu: goto label_28b82c;
        case 0x28b830u: goto label_28b830;
        case 0x28b834u: goto label_28b834;
        case 0x28b838u: goto label_28b838;
        case 0x28b83cu: goto label_28b83c;
        case 0x28b840u: goto label_28b840;
        case 0x28b844u: goto label_28b844;
        case 0x28b848u: goto label_28b848;
        case 0x28b84cu: goto label_28b84c;
        case 0x28b850u: goto label_28b850;
        case 0x28b854u: goto label_28b854;
        case 0x28b858u: goto label_28b858;
        case 0x28b85cu: goto label_28b85c;
        case 0x28b860u: goto label_28b860;
        case 0x28b864u: goto label_28b864;
        case 0x28b868u: goto label_28b868;
        case 0x28b86cu: goto label_28b86c;
        case 0x28b870u: goto label_28b870;
        case 0x28b874u: goto label_28b874;
        case 0x28b878u: goto label_28b878;
        case 0x28b87cu: goto label_28b87c;
        case 0x28b880u: goto label_28b880;
        case 0x28b884u: goto label_28b884;
        case 0x28b888u: goto label_28b888;
        case 0x28b88cu: goto label_28b88c;
        case 0x28b890u: goto label_28b890;
        case 0x28b894u: goto label_28b894;
        case 0x28b898u: goto label_28b898;
        case 0x28b89cu: goto label_28b89c;
        case 0x28b8a0u: goto label_28b8a0;
        case 0x28b8a4u: goto label_28b8a4;
        case 0x28b8a8u: goto label_28b8a8;
        case 0x28b8acu: goto label_28b8ac;
        case 0x28b8b0u: goto label_28b8b0;
        case 0x28b8b4u: goto label_28b8b4;
        case 0x28b8b8u: goto label_28b8b8;
        case 0x28b8bcu: goto label_28b8bc;
        case 0x28b8c0u: goto label_28b8c0;
        case 0x28b8c4u: goto label_28b8c4;
        case 0x28b8c8u: goto label_28b8c8;
        case 0x28b8ccu: goto label_28b8cc;
        case 0x28b8d0u: goto label_28b8d0;
        case 0x28b8d4u: goto label_28b8d4;
        case 0x28b8d8u: goto label_28b8d8;
        case 0x28b8dcu: goto label_28b8dc;
        case 0x28b8e0u: goto label_28b8e0;
        case 0x28b8e4u: goto label_28b8e4;
        case 0x28b8e8u: goto label_28b8e8;
        case 0x28b8ecu: goto label_28b8ec;
        case 0x28b8f0u: goto label_28b8f0;
        case 0x28b8f4u: goto label_28b8f4;
        case 0x28b8f8u: goto label_28b8f8;
        case 0x28b8fcu: goto label_28b8fc;
        case 0x28b900u: goto label_28b900;
        case 0x28b904u: goto label_28b904;
        case 0x28b908u: goto label_28b908;
        case 0x28b90cu: goto label_28b90c;
        case 0x28b910u: goto label_28b910;
        case 0x28b914u: goto label_28b914;
        case 0x28b918u: goto label_28b918;
        case 0x28b91cu: goto label_28b91c;
        case 0x28b920u: goto label_28b920;
        case 0x28b924u: goto label_28b924;
        case 0x28b928u: goto label_28b928;
        case 0x28b92cu: goto label_28b92c;
        case 0x28b930u: goto label_28b930;
        case 0x28b934u: goto label_28b934;
        case 0x28b938u: goto label_28b938;
        case 0x28b93cu: goto label_28b93c;
        case 0x28b940u: goto label_28b940;
        case 0x28b944u: goto label_28b944;
        case 0x28b948u: goto label_28b948;
        case 0x28b94cu: goto label_28b94c;
        case 0x28b950u: goto label_28b950;
        case 0x28b954u: goto label_28b954;
        case 0x28b958u: goto label_28b958;
        case 0x28b95cu: goto label_28b95c;
        case 0x28b960u: goto label_28b960;
        case 0x28b964u: goto label_28b964;
        case 0x28b968u: goto label_28b968;
        case 0x28b96cu: goto label_28b96c;
        case 0x28b970u: goto label_28b970;
        case 0x28b974u: goto label_28b974;
        case 0x28b978u: goto label_28b978;
        case 0x28b97cu: goto label_28b97c;
        case 0x28b980u: goto label_28b980;
        case 0x28b984u: goto label_28b984;
        case 0x28b988u: goto label_28b988;
        case 0x28b98cu: goto label_28b98c;
        case 0x28b990u: goto label_28b990;
        case 0x28b994u: goto label_28b994;
        case 0x28b998u: goto label_28b998;
        case 0x28b99cu: goto label_28b99c;
        case 0x28b9a0u: goto label_28b9a0;
        case 0x28b9a4u: goto label_28b9a4;
        case 0x28b9a8u: goto label_28b9a8;
        case 0x28b9acu: goto label_28b9ac;
        case 0x28b9b0u: goto label_28b9b0;
        case 0x28b9b4u: goto label_28b9b4;
        case 0x28b9b8u: goto label_28b9b8;
        case 0x28b9bcu: goto label_28b9bc;
        case 0x28b9c0u: goto label_28b9c0;
        case 0x28b9c4u: goto label_28b9c4;
        case 0x28b9c8u: goto label_28b9c8;
        case 0x28b9ccu: goto label_28b9cc;
        case 0x28b9d0u: goto label_28b9d0;
        case 0x28b9d4u: goto label_28b9d4;
        case 0x28b9d8u: goto label_28b9d8;
        case 0x28b9dcu: goto label_28b9dc;
        case 0x28b9e0u: goto label_28b9e0;
        case 0x28b9e4u: goto label_28b9e4;
        case 0x28b9e8u: goto label_28b9e8;
        case 0x28b9ecu: goto label_28b9ec;
        case 0x28b9f0u: goto label_28b9f0;
        case 0x28b9f4u: goto label_28b9f4;
        case 0x28b9f8u: goto label_28b9f8;
        case 0x28b9fcu: goto label_28b9fc;
        case 0x28ba00u: goto label_28ba00;
        case 0x28ba04u: goto label_28ba04;
        case 0x28ba08u: goto label_28ba08;
        case 0x28ba0cu: goto label_28ba0c;
        case 0x28ba10u: goto label_28ba10;
        case 0x28ba14u: goto label_28ba14;
        case 0x28ba18u: goto label_28ba18;
        case 0x28ba1cu: goto label_28ba1c;
        case 0x28ba20u: goto label_28ba20;
        case 0x28ba24u: goto label_28ba24;
        case 0x28ba28u: goto label_28ba28;
        case 0x28ba2cu: goto label_28ba2c;
        case 0x28ba30u: goto label_28ba30;
        case 0x28ba34u: goto label_28ba34;
        case 0x28ba38u: goto label_28ba38;
        case 0x28ba3cu: goto label_28ba3c;
        case 0x28ba40u: goto label_28ba40;
        case 0x28ba44u: goto label_28ba44;
        case 0x28ba48u: goto label_28ba48;
        case 0x28ba4cu: goto label_28ba4c;
        case 0x28ba50u: goto label_28ba50;
        case 0x28ba54u: goto label_28ba54;
        case 0x28ba58u: goto label_28ba58;
        case 0x28ba5cu: goto label_28ba5c;
        case 0x28ba60u: goto label_28ba60;
        case 0x28ba64u: goto label_28ba64;
        case 0x28ba68u: goto label_28ba68;
        case 0x28ba6cu: goto label_28ba6c;
        case 0x28ba70u: goto label_28ba70;
        case 0x28ba74u: goto label_28ba74;
        case 0x28ba78u: goto label_28ba78;
        case 0x28ba7cu: goto label_28ba7c;
        case 0x28ba80u: goto label_28ba80;
        case 0x28ba84u: goto label_28ba84;
        case 0x28ba88u: goto label_28ba88;
        case 0x28ba8cu: goto label_28ba8c;
        case 0x28ba90u: goto label_28ba90;
        case 0x28ba94u: goto label_28ba94;
        case 0x28ba98u: goto label_28ba98;
        case 0x28ba9cu: goto label_28ba9c;
        case 0x28baa0u: goto label_28baa0;
        case 0x28baa4u: goto label_28baa4;
        case 0x28baa8u: goto label_28baa8;
        case 0x28baacu: goto label_28baac;
        case 0x28bab0u: goto label_28bab0;
        case 0x28bab4u: goto label_28bab4;
        case 0x28bab8u: goto label_28bab8;
        case 0x28babcu: goto label_28babc;
        case 0x28bac0u: goto label_28bac0;
        case 0x28bac4u: goto label_28bac4;
        case 0x28bac8u: goto label_28bac8;
        case 0x28baccu: goto label_28bacc;
        case 0x28bad0u: goto label_28bad0;
        case 0x28bad4u: goto label_28bad4;
        case 0x28bad8u: goto label_28bad8;
        case 0x28badcu: goto label_28badc;
        case 0x28bae0u: goto label_28bae0;
        case 0x28bae4u: goto label_28bae4;
        case 0x28bae8u: goto label_28bae8;
        case 0x28baecu: goto label_28baec;
        case 0x28baf0u: goto label_28baf0;
        case 0x28baf4u: goto label_28baf4;
        case 0x28baf8u: goto label_28baf8;
        case 0x28bafcu: goto label_28bafc;
        case 0x28bb00u: goto label_28bb00;
        case 0x28bb04u: goto label_28bb04;
        case 0x28bb08u: goto label_28bb08;
        case 0x28bb0cu: goto label_28bb0c;
        case 0x28bb10u: goto label_28bb10;
        case 0x28bb14u: goto label_28bb14;
        case 0x28bb18u: goto label_28bb18;
        case 0x28bb1cu: goto label_28bb1c;
        case 0x28bb20u: goto label_28bb20;
        case 0x28bb24u: goto label_28bb24;
        case 0x28bb28u: goto label_28bb28;
        case 0x28bb2cu: goto label_28bb2c;
        case 0x28bb30u: goto label_28bb30;
        case 0x28bb34u: goto label_28bb34;
        case 0x28bb38u: goto label_28bb38;
        case 0x28bb3cu: goto label_28bb3c;
        case 0x28bb40u: goto label_28bb40;
        case 0x28bb44u: goto label_28bb44;
        case 0x28bb48u: goto label_28bb48;
        case 0x28bb4cu: goto label_28bb4c;
        case 0x28bb50u: goto label_28bb50;
        case 0x28bb54u: goto label_28bb54;
        case 0x28bb58u: goto label_28bb58;
        case 0x28bb5cu: goto label_28bb5c;
        case 0x28bb60u: goto label_28bb60;
        case 0x28bb64u: goto label_28bb64;
        case 0x28bb68u: goto label_28bb68;
        case 0x28bb6cu: goto label_28bb6c;
        case 0x28bb70u: goto label_28bb70;
        case 0x28bb74u: goto label_28bb74;
        case 0x28bb78u: goto label_28bb78;
        case 0x28bb7cu: goto label_28bb7c;
        case 0x28bb80u: goto label_28bb80;
        case 0x28bb84u: goto label_28bb84;
        case 0x28bb88u: goto label_28bb88;
        case 0x28bb8cu: goto label_28bb8c;
        case 0x28bb90u: goto label_28bb90;
        case 0x28bb94u: goto label_28bb94;
        case 0x28bb98u: goto label_28bb98;
        case 0x28bb9cu: goto label_28bb9c;
        case 0x28bba0u: goto label_28bba0;
        case 0x28bba4u: goto label_28bba4;
        case 0x28bba8u: goto label_28bba8;
        case 0x28bbacu: goto label_28bbac;
        case 0x28bbb0u: goto label_28bbb0;
        case 0x28bbb4u: goto label_28bbb4;
        case 0x28bbb8u: goto label_28bbb8;
        case 0x28bbbcu: goto label_28bbbc;
        case 0x28bbc0u: goto label_28bbc0;
        case 0x28bbc4u: goto label_28bbc4;
        case 0x28bbc8u: goto label_28bbc8;
        case 0x28bbccu: goto label_28bbcc;
        case 0x28bbd0u: goto label_28bbd0;
        case 0x28bbd4u: goto label_28bbd4;
        case 0x28bbd8u: goto label_28bbd8;
        case 0x28bbdcu: goto label_28bbdc;
        case 0x28bbe0u: goto label_28bbe0;
        case 0x28bbe4u: goto label_28bbe4;
        case 0x28bbe8u: goto label_28bbe8;
        case 0x28bbecu: goto label_28bbec;
        case 0x28bbf0u: goto label_28bbf0;
        case 0x28bbf4u: goto label_28bbf4;
        case 0x28bbf8u: goto label_28bbf8;
        case 0x28bbfcu: goto label_28bbfc;
        case 0x28bc00u: goto label_28bc00;
        case 0x28bc04u: goto label_28bc04;
        case 0x28bc08u: goto label_28bc08;
        case 0x28bc0cu: goto label_28bc0c;
        case 0x28bc10u: goto label_28bc10;
        case 0x28bc14u: goto label_28bc14;
        case 0x28bc18u: goto label_28bc18;
        case 0x28bc1cu: goto label_28bc1c;
        case 0x28bc20u: goto label_28bc20;
        case 0x28bc24u: goto label_28bc24;
        case 0x28bc28u: goto label_28bc28;
        case 0x28bc2cu: goto label_28bc2c;
        case 0x28bc30u: goto label_28bc30;
        case 0x28bc34u: goto label_28bc34;
        case 0x28bc38u: goto label_28bc38;
        case 0x28bc3cu: goto label_28bc3c;
        case 0x28bc40u: goto label_28bc40;
        case 0x28bc44u: goto label_28bc44;
        case 0x28bc48u: goto label_28bc48;
        case 0x28bc4cu: goto label_28bc4c;
        case 0x28bc50u: goto label_28bc50;
        case 0x28bc54u: goto label_28bc54;
        case 0x28bc58u: goto label_28bc58;
        case 0x28bc5cu: goto label_28bc5c;
        case 0x28bc60u: goto label_28bc60;
        case 0x28bc64u: goto label_28bc64;
        case 0x28bc68u: goto label_28bc68;
        case 0x28bc6cu: goto label_28bc6c;
        case 0x28bc70u: goto label_28bc70;
        case 0x28bc74u: goto label_28bc74;
        case 0x28bc78u: goto label_28bc78;
        case 0x28bc7cu: goto label_28bc7c;
        case 0x28bc80u: goto label_28bc80;
        case 0x28bc84u: goto label_28bc84;
        case 0x28bc88u: goto label_28bc88;
        case 0x28bc8cu: goto label_28bc8c;
        case 0x28bc90u: goto label_28bc90;
        case 0x28bc94u: goto label_28bc94;
        case 0x28bc98u: goto label_28bc98;
        case 0x28bc9cu: goto label_28bc9c;
        case 0x28bca0u: goto label_28bca0;
        case 0x28bca4u: goto label_28bca4;
        case 0x28bca8u: goto label_28bca8;
        case 0x28bcacu: goto label_28bcac;
        case 0x28bcb0u: goto label_28bcb0;
        case 0x28bcb4u: goto label_28bcb4;
        case 0x28bcb8u: goto label_28bcb8;
        case 0x28bcbcu: goto label_28bcbc;
        case 0x28bcc0u: goto label_28bcc0;
        case 0x28bcc4u: goto label_28bcc4;
        case 0x28bcc8u: goto label_28bcc8;
        case 0x28bcccu: goto label_28bccc;
        case 0x28bcd0u: goto label_28bcd0;
        case 0x28bcd4u: goto label_28bcd4;
        case 0x28bcd8u: goto label_28bcd8;
        case 0x28bcdcu: goto label_28bcdc;
        case 0x28bce0u: goto label_28bce0;
        case 0x28bce4u: goto label_28bce4;
        case 0x28bce8u: goto label_28bce8;
        case 0x28bcecu: goto label_28bcec;
        case 0x28bcf0u: goto label_28bcf0;
        case 0x28bcf4u: goto label_28bcf4;
        case 0x28bcf8u: goto label_28bcf8;
        case 0x28bcfcu: goto label_28bcfc;
        case 0x28bd00u: goto label_28bd00;
        case 0x28bd04u: goto label_28bd04;
        case 0x28bd08u: goto label_28bd08;
        case 0x28bd0cu: goto label_28bd0c;
        case 0x28bd10u: goto label_28bd10;
        case 0x28bd14u: goto label_28bd14;
        case 0x28bd18u: goto label_28bd18;
        case 0x28bd1cu: goto label_28bd1c;
        case 0x28bd20u: goto label_28bd20;
        case 0x28bd24u: goto label_28bd24;
        case 0x28bd28u: goto label_28bd28;
        case 0x28bd2cu: goto label_28bd2c;
        case 0x28bd30u: goto label_28bd30;
        case 0x28bd34u: goto label_28bd34;
        case 0x28bd38u: goto label_28bd38;
        case 0x28bd3cu: goto label_28bd3c;
        case 0x28bd40u: goto label_28bd40;
        case 0x28bd44u: goto label_28bd44;
        case 0x28bd48u: goto label_28bd48;
        case 0x28bd4cu: goto label_28bd4c;
        case 0x28bd50u: goto label_28bd50;
        case 0x28bd54u: goto label_28bd54;
        case 0x28bd58u: goto label_28bd58;
        case 0x28bd5cu: goto label_28bd5c;
        case 0x28bd60u: goto label_28bd60;
        case 0x28bd64u: goto label_28bd64;
        case 0x28bd68u: goto label_28bd68;
        case 0x28bd6cu: goto label_28bd6c;
        case 0x28bd70u: goto label_28bd70;
        case 0x28bd74u: goto label_28bd74;
        case 0x28bd78u: goto label_28bd78;
        case 0x28bd7cu: goto label_28bd7c;
        case 0x28bd80u: goto label_28bd80;
        case 0x28bd84u: goto label_28bd84;
        case 0x28bd88u: goto label_28bd88;
        case 0x28bd8cu: goto label_28bd8c;
        case 0x28bd90u: goto label_28bd90;
        case 0x28bd94u: goto label_28bd94;
        case 0x28bd98u: goto label_28bd98;
        case 0x28bd9cu: goto label_28bd9c;
        case 0x28bda0u: goto label_28bda0;
        case 0x28bda4u: goto label_28bda4;
        case 0x28bda8u: goto label_28bda8;
        case 0x28bdacu: goto label_28bdac;
        case 0x28bdb0u: goto label_28bdb0;
        case 0x28bdb4u: goto label_28bdb4;
        case 0x28bdb8u: goto label_28bdb8;
        case 0x28bdbcu: goto label_28bdbc;
        case 0x28bdc0u: goto label_28bdc0;
        case 0x28bdc4u: goto label_28bdc4;
        case 0x28bdc8u: goto label_28bdc8;
        case 0x28bdccu: goto label_28bdcc;
        case 0x28bdd0u: goto label_28bdd0;
        case 0x28bdd4u: goto label_28bdd4;
        case 0x28bdd8u: goto label_28bdd8;
        case 0x28bddcu: goto label_28bddc;
        case 0x28bde0u: goto label_28bde0;
        case 0x28bde4u: goto label_28bde4;
        case 0x28bde8u: goto label_28bde8;
        case 0x28bdecu: goto label_28bdec;
        case 0x28bdf0u: goto label_28bdf0;
        case 0x28bdf4u: goto label_28bdf4;
        case 0x28bdf8u: goto label_28bdf8;
        case 0x28bdfcu: goto label_28bdfc;
        case 0x28be00u: goto label_28be00;
        case 0x28be04u: goto label_28be04;
        case 0x28be08u: goto label_28be08;
        case 0x28be0cu: goto label_28be0c;
        case 0x28be10u: goto label_28be10;
        case 0x28be14u: goto label_28be14;
        case 0x28be18u: goto label_28be18;
        case 0x28be1cu: goto label_28be1c;
        case 0x28be20u: goto label_28be20;
        case 0x28be24u: goto label_28be24;
        case 0x28be28u: goto label_28be28;
        case 0x28be2cu: goto label_28be2c;
        case 0x28be30u: goto label_28be30;
        case 0x28be34u: goto label_28be34;
        case 0x28be38u: goto label_28be38;
        case 0x28be3cu: goto label_28be3c;
        case 0x28be40u: goto label_28be40;
        case 0x28be44u: goto label_28be44;
        case 0x28be48u: goto label_28be48;
        case 0x28be4cu: goto label_28be4c;
        case 0x28be50u: goto label_28be50;
        case 0x28be54u: goto label_28be54;
        case 0x28be58u: goto label_28be58;
        case 0x28be5cu: goto label_28be5c;
        case 0x28be60u: goto label_28be60;
        case 0x28be64u: goto label_28be64;
        case 0x28be68u: goto label_28be68;
        case 0x28be6cu: goto label_28be6c;
        case 0x28be70u: goto label_28be70;
        case 0x28be74u: goto label_28be74;
        case 0x28be78u: goto label_28be78;
        case 0x28be7cu: goto label_28be7c;
        case 0x28be80u: goto label_28be80;
        case 0x28be84u: goto label_28be84;
        case 0x28be88u: goto label_28be88;
        case 0x28be8cu: goto label_28be8c;
        case 0x28be90u: goto label_28be90;
        case 0x28be94u: goto label_28be94;
        case 0x28be98u: goto label_28be98;
        case 0x28be9cu: goto label_28be9c;
        case 0x28bea0u: goto label_28bea0;
        case 0x28bea4u: goto label_28bea4;
        case 0x28bea8u: goto label_28bea8;
        case 0x28beacu: goto label_28beac;
        case 0x28beb0u: goto label_28beb0;
        case 0x28beb4u: goto label_28beb4;
        case 0x28beb8u: goto label_28beb8;
        case 0x28bebcu: goto label_28bebc;
        case 0x28bec0u: goto label_28bec0;
        case 0x28bec4u: goto label_28bec4;
        case 0x28bec8u: goto label_28bec8;
        case 0x28beccu: goto label_28becc;
        case 0x28bed0u: goto label_28bed0;
        case 0x28bed4u: goto label_28bed4;
        case 0x28bed8u: goto label_28bed8;
        case 0x28bedcu: goto label_28bedc;
        case 0x28bee0u: goto label_28bee0;
        case 0x28bee4u: goto label_28bee4;
        case 0x28bee8u: goto label_28bee8;
        case 0x28beecu: goto label_28beec;
        case 0x28bef0u: goto label_28bef0;
        case 0x28bef4u: goto label_28bef4;
        case 0x28bef8u: goto label_28bef8;
        case 0x28befcu: goto label_28befc;
        case 0x28bf00u: goto label_28bf00;
        case 0x28bf04u: goto label_28bf04;
        case 0x28bf08u: goto label_28bf08;
        case 0x28bf0cu: goto label_28bf0c;
        case 0x28bf10u: goto label_28bf10;
        case 0x28bf14u: goto label_28bf14;
        case 0x28bf18u: goto label_28bf18;
        case 0x28bf1cu: goto label_28bf1c;
        case 0x28bf20u: goto label_28bf20;
        case 0x28bf24u: goto label_28bf24;
        case 0x28bf28u: goto label_28bf28;
        case 0x28bf2cu: goto label_28bf2c;
        case 0x28bf30u: goto label_28bf30;
        case 0x28bf34u: goto label_28bf34;
        case 0x28bf38u: goto label_28bf38;
        case 0x28bf3cu: goto label_28bf3c;
        case 0x28bf40u: goto label_28bf40;
        case 0x28bf44u: goto label_28bf44;
        case 0x28bf48u: goto label_28bf48;
        case 0x28bf4cu: goto label_28bf4c;
        case 0x28bf50u: goto label_28bf50;
        case 0x28bf54u: goto label_28bf54;
        case 0x28bf58u: goto label_28bf58;
        case 0x28bf5cu: goto label_28bf5c;
        case 0x28bf60u: goto label_28bf60;
        case 0x28bf64u: goto label_28bf64;
        case 0x28bf68u: goto label_28bf68;
        case 0x28bf6cu: goto label_28bf6c;
        case 0x28bf70u: goto label_28bf70;
        case 0x28bf74u: goto label_28bf74;
        case 0x28bf78u: goto label_28bf78;
        case 0x28bf7cu: goto label_28bf7c;
        case 0x28bf80u: goto label_28bf80;
        case 0x28bf84u: goto label_28bf84;
        case 0x28bf88u: goto label_28bf88;
        case 0x28bf8cu: goto label_28bf8c;
        case 0x28bf90u: goto label_28bf90;
        case 0x28bf94u: goto label_28bf94;
        case 0x28bf98u: goto label_28bf98;
        case 0x28bf9cu: goto label_28bf9c;
        case 0x28bfa0u: goto label_28bfa0;
        case 0x28bfa4u: goto label_28bfa4;
        case 0x28bfa8u: goto label_28bfa8;
        case 0x28bfacu: goto label_28bfac;
        case 0x28bfb0u: goto label_28bfb0;
        case 0x28bfb4u: goto label_28bfb4;
        case 0x28bfb8u: goto label_28bfb8;
        case 0x28bfbcu: goto label_28bfbc;
        case 0x28bfc0u: goto label_28bfc0;
        case 0x28bfc4u: goto label_28bfc4;
        case 0x28bfc8u: goto label_28bfc8;
        case 0x28bfccu: goto label_28bfcc;
        case 0x28bfd0u: goto label_28bfd0;
        case 0x28bfd4u: goto label_28bfd4;
        case 0x28bfd8u: goto label_28bfd8;
        case 0x28bfdcu: goto label_28bfdc;
        case 0x28bfe0u: goto label_28bfe0;
        case 0x28bfe4u: goto label_28bfe4;
        case 0x28bfe8u: goto label_28bfe8;
        case 0x28bfecu: goto label_28bfec;
        case 0x28bff0u: goto label_28bff0;
        case 0x28bff4u: goto label_28bff4;
        case 0x28bff8u: goto label_28bff8;
        case 0x28bffcu: goto label_28bffc;
        case 0x28c000u: goto label_28c000;
        case 0x28c004u: goto label_28c004;
        case 0x28c008u: goto label_28c008;
        case 0x28c00cu: goto label_28c00c;
        case 0x28c010u: goto label_28c010;
        case 0x28c014u: goto label_28c014;
        case 0x28c018u: goto label_28c018;
        case 0x28c01cu: goto label_28c01c;
        case 0x28c020u: goto label_28c020;
        case 0x28c024u: goto label_28c024;
        case 0x28c028u: goto label_28c028;
        case 0x28c02cu: goto label_28c02c;
        case 0x28c030u: goto label_28c030;
        case 0x28c034u: goto label_28c034;
        case 0x28c038u: goto label_28c038;
        case 0x28c03cu: goto label_28c03c;
        case 0x28c040u: goto label_28c040;
        case 0x28c044u: goto label_28c044;
        case 0x28c048u: goto label_28c048;
        case 0x28c04cu: goto label_28c04c;
        case 0x28c050u: goto label_28c050;
        case 0x28c054u: goto label_28c054;
        case 0x28c058u: goto label_28c058;
        case 0x28c05cu: goto label_28c05c;
        case 0x28c060u: goto label_28c060;
        case 0x28c064u: goto label_28c064;
        case 0x28c068u: goto label_28c068;
        case 0x28c06cu: goto label_28c06c;
        case 0x28c070u: goto label_28c070;
        case 0x28c074u: goto label_28c074;
        case 0x28c078u: goto label_28c078;
        case 0x28c07cu: goto label_28c07c;
        case 0x28c080u: goto label_28c080;
        case 0x28c084u: goto label_28c084;
        case 0x28c088u: goto label_28c088;
        case 0x28c08cu: goto label_28c08c;
        case 0x28c090u: goto label_28c090;
        case 0x28c094u: goto label_28c094;
        case 0x28c098u: goto label_28c098;
        case 0x28c09cu: goto label_28c09c;
        case 0x28c0a0u: goto label_28c0a0;
        case 0x28c0a4u: goto label_28c0a4;
        case 0x28c0a8u: goto label_28c0a8;
        case 0x28c0acu: goto label_28c0ac;
        case 0x28c0b0u: goto label_28c0b0;
        case 0x28c0b4u: goto label_28c0b4;
        case 0x28c0b8u: goto label_28c0b8;
        case 0x28c0bcu: goto label_28c0bc;
        case 0x28c0c0u: goto label_28c0c0;
        case 0x28c0c4u: goto label_28c0c4;
        case 0x28c0c8u: goto label_28c0c8;
        case 0x28c0ccu: goto label_28c0cc;
        case 0x28c0d0u: goto label_28c0d0;
        case 0x28c0d4u: goto label_28c0d4;
        case 0x28c0d8u: goto label_28c0d8;
        case 0x28c0dcu: goto label_28c0dc;
        case 0x28c0e0u: goto label_28c0e0;
        case 0x28c0e4u: goto label_28c0e4;
        case 0x28c0e8u: goto label_28c0e8;
        case 0x28c0ecu: goto label_28c0ec;
        case 0x28c0f0u: goto label_28c0f0;
        case 0x28c0f4u: goto label_28c0f4;
        case 0x28c0f8u: goto label_28c0f8;
        case 0x28c0fcu: goto label_28c0fc;
        case 0x28c100u: goto label_28c100;
        case 0x28c104u: goto label_28c104;
        case 0x28c108u: goto label_28c108;
        case 0x28c10cu: goto label_28c10c;
        case 0x28c110u: goto label_28c110;
        case 0x28c114u: goto label_28c114;
        case 0x28c118u: goto label_28c118;
        case 0x28c11cu: goto label_28c11c;
        case 0x28c120u: goto label_28c120;
        case 0x28c124u: goto label_28c124;
        case 0x28c128u: goto label_28c128;
        case 0x28c12cu: goto label_28c12c;
        case 0x28c130u: goto label_28c130;
        case 0x28c134u: goto label_28c134;
        case 0x28c138u: goto label_28c138;
        case 0x28c13cu: goto label_28c13c;
        case 0x28c140u: goto label_28c140;
        case 0x28c144u: goto label_28c144;
        case 0x28c148u: goto label_28c148;
        case 0x28c14cu: goto label_28c14c;
        case 0x28c150u: goto label_28c150;
        case 0x28c154u: goto label_28c154;
        case 0x28c158u: goto label_28c158;
        case 0x28c15cu: goto label_28c15c;
        case 0x28c160u: goto label_28c160;
        case 0x28c164u: goto label_28c164;
        case 0x28c168u: goto label_28c168;
        case 0x28c16cu: goto label_28c16c;
        case 0x28c170u: goto label_28c170;
        case 0x28c174u: goto label_28c174;
        case 0x28c178u: goto label_28c178;
        case 0x28c17cu: goto label_28c17c;
        case 0x28c180u: goto label_28c180;
        case 0x28c184u: goto label_28c184;
        case 0x28c188u: goto label_28c188;
        case 0x28c18cu: goto label_28c18c;
        case 0x28c190u: goto label_28c190;
        case 0x28c194u: goto label_28c194;
        case 0x28c198u: goto label_28c198;
        case 0x28c19cu: goto label_28c19c;
        case 0x28c1a0u: goto label_28c1a0;
        case 0x28c1a4u: goto label_28c1a4;
        case 0x28c1a8u: goto label_28c1a8;
        case 0x28c1acu: goto label_28c1ac;
        case 0x28c1b0u: goto label_28c1b0;
        case 0x28c1b4u: goto label_28c1b4;
        case 0x28c1b8u: goto label_28c1b8;
        case 0x28c1bcu: goto label_28c1bc;
        case 0x28c1c0u: goto label_28c1c0;
        case 0x28c1c4u: goto label_28c1c4;
        case 0x28c1c8u: goto label_28c1c8;
        case 0x28c1ccu: goto label_28c1cc;
        case 0x28c1d0u: goto label_28c1d0;
        case 0x28c1d4u: goto label_28c1d4;
        case 0x28c1d8u: goto label_28c1d8;
        case 0x28c1dcu: goto label_28c1dc;
        case 0x28c1e0u: goto label_28c1e0;
        case 0x28c1e4u: goto label_28c1e4;
        case 0x28c1e8u: goto label_28c1e8;
        case 0x28c1ecu: goto label_28c1ec;
        case 0x28c1f0u: goto label_28c1f0;
        case 0x28c1f4u: goto label_28c1f4;
        case 0x28c1f8u: goto label_28c1f8;
        case 0x28c1fcu: goto label_28c1fc;
        case 0x28c200u: goto label_28c200;
        case 0x28c204u: goto label_28c204;
        case 0x28c208u: goto label_28c208;
        case 0x28c20cu: goto label_28c20c;
        case 0x28c210u: goto label_28c210;
        case 0x28c214u: goto label_28c214;
        case 0x28c218u: goto label_28c218;
        case 0x28c21cu: goto label_28c21c;
        case 0x28c220u: goto label_28c220;
        case 0x28c224u: goto label_28c224;
        case 0x28c228u: goto label_28c228;
        case 0x28c22cu: goto label_28c22c;
        case 0x28c230u: goto label_28c230;
        case 0x28c234u: goto label_28c234;
        case 0x28c238u: goto label_28c238;
        case 0x28c23cu: goto label_28c23c;
        case 0x28c240u: goto label_28c240;
        case 0x28c244u: goto label_28c244;
        case 0x28c248u: goto label_28c248;
        case 0x28c24cu: goto label_28c24c;
        case 0x28c250u: goto label_28c250;
        case 0x28c254u: goto label_28c254;
        case 0x28c258u: goto label_28c258;
        case 0x28c25cu: goto label_28c25c;
        case 0x28c260u: goto label_28c260;
        case 0x28c264u: goto label_28c264;
        case 0x28c268u: goto label_28c268;
        case 0x28c26cu: goto label_28c26c;
        case 0x28c270u: goto label_28c270;
        case 0x28c274u: goto label_28c274;
        case 0x28c278u: goto label_28c278;
        case 0x28c27cu: goto label_28c27c;
        case 0x28c280u: goto label_28c280;
        case 0x28c284u: goto label_28c284;
        case 0x28c288u: goto label_28c288;
        case 0x28c28cu: goto label_28c28c;
        case 0x28c290u: goto label_28c290;
        case 0x28c294u: goto label_28c294;
        case 0x28c298u: goto label_28c298;
        case 0x28c29cu: goto label_28c29c;
        case 0x28c2a0u: goto label_28c2a0;
        case 0x28c2a4u: goto label_28c2a4;
        case 0x28c2a8u: goto label_28c2a8;
        case 0x28c2acu: goto label_28c2ac;
        case 0x28c2b0u: goto label_28c2b0;
        case 0x28c2b4u: goto label_28c2b4;
        case 0x28c2b8u: goto label_28c2b8;
        case 0x28c2bcu: goto label_28c2bc;
        case 0x28c2c0u: goto label_28c2c0;
        case 0x28c2c4u: goto label_28c2c4;
        case 0x28c2c8u: goto label_28c2c8;
        case 0x28c2ccu: goto label_28c2cc;
        case 0x28c2d0u: goto label_28c2d0;
        case 0x28c2d4u: goto label_28c2d4;
        case 0x28c2d8u: goto label_28c2d8;
        case 0x28c2dcu: goto label_28c2dc;
        case 0x28c2e0u: goto label_28c2e0;
        case 0x28c2e4u: goto label_28c2e4;
        case 0x28c2e8u: goto label_28c2e8;
        case 0x28c2ecu: goto label_28c2ec;
        case 0x28c2f0u: goto label_28c2f0;
        case 0x28c2f4u: goto label_28c2f4;
        case 0x28c2f8u: goto label_28c2f8;
        case 0x28c2fcu: goto label_28c2fc;
        case 0x28c300u: goto label_28c300;
        case 0x28c304u: goto label_28c304;
        case 0x28c308u: goto label_28c308;
        case 0x28c30cu: goto label_28c30c;
        case 0x28c310u: goto label_28c310;
        case 0x28c314u: goto label_28c314;
        case 0x28c318u: goto label_28c318;
        case 0x28c31cu: goto label_28c31c;
        case 0x28c320u: goto label_28c320;
        case 0x28c324u: goto label_28c324;
        case 0x28c328u: goto label_28c328;
        case 0x28c32cu: goto label_28c32c;
        case 0x28c330u: goto label_28c330;
        case 0x28c334u: goto label_28c334;
        case 0x28c338u: goto label_28c338;
        case 0x28c33cu: goto label_28c33c;
        case 0x28c340u: goto label_28c340;
        case 0x28c344u: goto label_28c344;
        case 0x28c348u: goto label_28c348;
        case 0x28c34cu: goto label_28c34c;
        case 0x28c350u: goto label_28c350;
        case 0x28c354u: goto label_28c354;
        case 0x28c358u: goto label_28c358;
        case 0x28c35cu: goto label_28c35c;
        case 0x28c360u: goto label_28c360;
        case 0x28c364u: goto label_28c364;
        case 0x28c368u: goto label_28c368;
        case 0x28c36cu: goto label_28c36c;
        case 0x28c370u: goto label_28c370;
        case 0x28c374u: goto label_28c374;
        case 0x28c378u: goto label_28c378;
        case 0x28c37cu: goto label_28c37c;
        case 0x28c380u: goto label_28c380;
        case 0x28c384u: goto label_28c384;
        case 0x28c388u: goto label_28c388;
        case 0x28c38cu: goto label_28c38c;
        case 0x28c390u: goto label_28c390;
        case 0x28c394u: goto label_28c394;
        case 0x28c398u: goto label_28c398;
        case 0x28c39cu: goto label_28c39c;
        case 0x28c3a0u: goto label_28c3a0;
        case 0x28c3a4u: goto label_28c3a4;
        case 0x28c3a8u: goto label_28c3a8;
        case 0x28c3acu: goto label_28c3ac;
        case 0x28c3b0u: goto label_28c3b0;
        case 0x28c3b4u: goto label_28c3b4;
        case 0x28c3b8u: goto label_28c3b8;
        case 0x28c3bcu: goto label_28c3bc;
        case 0x28c3c0u: goto label_28c3c0;
        case 0x28c3c4u: goto label_28c3c4;
        case 0x28c3c8u: goto label_28c3c8;
        case 0x28c3ccu: goto label_28c3cc;
        case 0x28c3d0u: goto label_28c3d0;
        case 0x28c3d4u: goto label_28c3d4;
        case 0x28c3d8u: goto label_28c3d8;
        case 0x28c3dcu: goto label_28c3dc;
        case 0x28c3e0u: goto label_28c3e0;
        case 0x28c3e4u: goto label_28c3e4;
        case 0x28c3e8u: goto label_28c3e8;
        case 0x28c3ecu: goto label_28c3ec;
        case 0x28c3f0u: goto label_28c3f0;
        case 0x28c3f4u: goto label_28c3f4;
        case 0x28c3f8u: goto label_28c3f8;
        case 0x28c3fcu: goto label_28c3fc;
        case 0x28c400u: goto label_28c400;
        case 0x28c404u: goto label_28c404;
        case 0x28c408u: goto label_28c408;
        case 0x28c40cu: goto label_28c40c;
        case 0x28c410u: goto label_28c410;
        case 0x28c414u: goto label_28c414;
        case 0x28c418u: goto label_28c418;
        case 0x28c41cu: goto label_28c41c;
        case 0x28c420u: goto label_28c420;
        case 0x28c424u: goto label_28c424;
        case 0x28c428u: goto label_28c428;
        case 0x28c42cu: goto label_28c42c;
        case 0x28c430u: goto label_28c430;
        case 0x28c434u: goto label_28c434;
        case 0x28c438u: goto label_28c438;
        case 0x28c43cu: goto label_28c43c;
        case 0x28c440u: goto label_28c440;
        case 0x28c444u: goto label_28c444;
        case 0x28c448u: goto label_28c448;
        case 0x28c44cu: goto label_28c44c;
        case 0x28c450u: goto label_28c450;
        case 0x28c454u: goto label_28c454;
        case 0x28c458u: goto label_28c458;
        case 0x28c45cu: goto label_28c45c;
        case 0x28c460u: goto label_28c460;
        case 0x28c464u: goto label_28c464;
        case 0x28c468u: goto label_28c468;
        case 0x28c46cu: goto label_28c46c;
        case 0x28c470u: goto label_28c470;
        case 0x28c474u: goto label_28c474;
        case 0x28c478u: goto label_28c478;
        case 0x28c47cu: goto label_28c47c;
        case 0x28c480u: goto label_28c480;
        case 0x28c484u: goto label_28c484;
        case 0x28c488u: goto label_28c488;
        case 0x28c48cu: goto label_28c48c;
        case 0x28c490u: goto label_28c490;
        case 0x28c494u: goto label_28c494;
        case 0x28c498u: goto label_28c498;
        case 0x28c49cu: goto label_28c49c;
        case 0x28c4a0u: goto label_28c4a0;
        case 0x28c4a4u: goto label_28c4a4;
        case 0x28c4a8u: goto label_28c4a8;
        case 0x28c4acu: goto label_28c4ac;
        case 0x28c4b0u: goto label_28c4b0;
        case 0x28c4b4u: goto label_28c4b4;
        case 0x28c4b8u: goto label_28c4b8;
        case 0x28c4bcu: goto label_28c4bc;
        case 0x28c4c0u: goto label_28c4c0;
        case 0x28c4c4u: goto label_28c4c4;
        case 0x28c4c8u: goto label_28c4c8;
        case 0x28c4ccu: goto label_28c4cc;
        case 0x28c4d0u: goto label_28c4d0;
        case 0x28c4d4u: goto label_28c4d4;
        case 0x28c4d8u: goto label_28c4d8;
        case 0x28c4dcu: goto label_28c4dc;
        case 0x28c4e0u: goto label_28c4e0;
        case 0x28c4e4u: goto label_28c4e4;
        case 0x28c4e8u: goto label_28c4e8;
        case 0x28c4ecu: goto label_28c4ec;
        case 0x28c4f0u: goto label_28c4f0;
        case 0x28c4f4u: goto label_28c4f4;
        case 0x28c4f8u: goto label_28c4f8;
        case 0x28c4fcu: goto label_28c4fc;
        case 0x28c500u: goto label_28c500;
        case 0x28c504u: goto label_28c504;
        case 0x28c508u: goto label_28c508;
        case 0x28c50cu: goto label_28c50c;
        case 0x28c510u: goto label_28c510;
        case 0x28c514u: goto label_28c514;
        case 0x28c518u: goto label_28c518;
        case 0x28c51cu: goto label_28c51c;
        case 0x28c520u: goto label_28c520;
        case 0x28c524u: goto label_28c524;
        case 0x28c528u: goto label_28c528;
        case 0x28c52cu: goto label_28c52c;
        case 0x28c530u: goto label_28c530;
        case 0x28c534u: goto label_28c534;
        case 0x28c538u: goto label_28c538;
        case 0x28c53cu: goto label_28c53c;
        case 0x28c540u: goto label_28c540;
        case 0x28c544u: goto label_28c544;
        case 0x28c548u: goto label_28c548;
        case 0x28c54cu: goto label_28c54c;
        case 0x28c550u: goto label_28c550;
        case 0x28c554u: goto label_28c554;
        case 0x28c558u: goto label_28c558;
        case 0x28c55cu: goto label_28c55c;
        case 0x28c560u: goto label_28c560;
        case 0x28c564u: goto label_28c564;
        case 0x28c568u: goto label_28c568;
        case 0x28c56cu: goto label_28c56c;
        case 0x28c570u: goto label_28c570;
        case 0x28c574u: goto label_28c574;
        case 0x28c578u: goto label_28c578;
        case 0x28c57cu: goto label_28c57c;
        case 0x28c580u: goto label_28c580;
        case 0x28c584u: goto label_28c584;
        case 0x28c588u: goto label_28c588;
        case 0x28c58cu: goto label_28c58c;
        case 0x28c590u: goto label_28c590;
        case 0x28c594u: goto label_28c594;
        case 0x28c598u: goto label_28c598;
        case 0x28c59cu: goto label_28c59c;
        case 0x28c5a0u: goto label_28c5a0;
        case 0x28c5a4u: goto label_28c5a4;
        case 0x28c5a8u: goto label_28c5a8;
        case 0x28c5acu: goto label_28c5ac;
        case 0x28c5b0u: goto label_28c5b0;
        case 0x28c5b4u: goto label_28c5b4;
        case 0x28c5b8u: goto label_28c5b8;
        case 0x28c5bcu: goto label_28c5bc;
        case 0x28c5c0u: goto label_28c5c0;
        case 0x28c5c4u: goto label_28c5c4;
        case 0x28c5c8u: goto label_28c5c8;
        case 0x28c5ccu: goto label_28c5cc;
        case 0x28c5d0u: goto label_28c5d0;
        case 0x28c5d4u: goto label_28c5d4;
        case 0x28c5d8u: goto label_28c5d8;
        case 0x28c5dcu: goto label_28c5dc;
        case 0x28c5e0u: goto label_28c5e0;
        case 0x28c5e4u: goto label_28c5e4;
        case 0x28c5e8u: goto label_28c5e8;
        case 0x28c5ecu: goto label_28c5ec;
        case 0x28c5f0u: goto label_28c5f0;
        case 0x28c5f4u: goto label_28c5f4;
        case 0x28c5f8u: goto label_28c5f8;
        case 0x28c5fcu: goto label_28c5fc;
        case 0x28c600u: goto label_28c600;
        case 0x28c604u: goto label_28c604;
        case 0x28c608u: goto label_28c608;
        case 0x28c60cu: goto label_28c60c;
        case 0x28c610u: goto label_28c610;
        case 0x28c614u: goto label_28c614;
        case 0x28c618u: goto label_28c618;
        case 0x28c61cu: goto label_28c61c;
        case 0x28c620u: goto label_28c620;
        case 0x28c624u: goto label_28c624;
        case 0x28c628u: goto label_28c628;
        case 0x28c62cu: goto label_28c62c;
        case 0x28c630u: goto label_28c630;
        case 0x28c634u: goto label_28c634;
        case 0x28c638u: goto label_28c638;
        case 0x28c63cu: goto label_28c63c;
        case 0x28c640u: goto label_28c640;
        case 0x28c644u: goto label_28c644;
        case 0x28c648u: goto label_28c648;
        case 0x28c64cu: goto label_28c64c;
        case 0x28c650u: goto label_28c650;
        case 0x28c654u: goto label_28c654;
        case 0x28c658u: goto label_28c658;
        case 0x28c65cu: goto label_28c65c;
        case 0x28c660u: goto label_28c660;
        case 0x28c664u: goto label_28c664;
        case 0x28c668u: goto label_28c668;
        case 0x28c66cu: goto label_28c66c;
        case 0x28c670u: goto label_28c670;
        case 0x28c674u: goto label_28c674;
        case 0x28c678u: goto label_28c678;
        case 0x28c67cu: goto label_28c67c;
        case 0x28c680u: goto label_28c680;
        case 0x28c684u: goto label_28c684;
        case 0x28c688u: goto label_28c688;
        case 0x28c68cu: goto label_28c68c;
        case 0x28c690u: goto label_28c690;
        case 0x28c694u: goto label_28c694;
        case 0x28c698u: goto label_28c698;
        case 0x28c69cu: goto label_28c69c;
        case 0x28c6a0u: goto label_28c6a0;
        case 0x28c6a4u: goto label_28c6a4;
        case 0x28c6a8u: goto label_28c6a8;
        case 0x28c6acu: goto label_28c6ac;
        case 0x28c6b0u: goto label_28c6b0;
        case 0x28c6b4u: goto label_28c6b4;
        case 0x28c6b8u: goto label_28c6b8;
        case 0x28c6bcu: goto label_28c6bc;
        case 0x28c6c0u: goto label_28c6c0;
        case 0x28c6c4u: goto label_28c6c4;
        case 0x28c6c8u: goto label_28c6c8;
        case 0x28c6ccu: goto label_28c6cc;
        case 0x28c6d0u: goto label_28c6d0;
        case 0x28c6d4u: goto label_28c6d4;
        case 0x28c6d8u: goto label_28c6d8;
        case 0x28c6dcu: goto label_28c6dc;
        case 0x28c6e0u: goto label_28c6e0;
        case 0x28c6e4u: goto label_28c6e4;
        case 0x28c6e8u: goto label_28c6e8;
        case 0x28c6ecu: goto label_28c6ec;
        case 0x28c6f0u: goto label_28c6f0;
        case 0x28c6f4u: goto label_28c6f4;
        case 0x28c6f8u: goto label_28c6f8;
        case 0x28c6fcu: goto label_28c6fc;
        default: break;
    }

    ctx->pc = 0x28afb0u;

label_28afb0:
    // 0x28afb0: 0x27bdfcc0  addiu       $sp, $sp, -0x340
    ctx->pc = 0x28afb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966464));
label_28afb4:
    // 0x28afb4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x28afb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_28afb8:
    // 0x28afb8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x28afb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_28afbc:
    // 0x28afbc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28afbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_28afc0:
    // 0x28afc0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28afc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_28afc4:
    // 0x28afc4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28afc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_28afc8:
    // 0x28afc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28afc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_28afcc:
    // 0x28afcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28afccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_28afd0:
    // 0x28afd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28afd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_28afd4:
    // 0x28afd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28afd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28afd8:
    // 0x28afd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28afd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28afdc:
    // 0x28afdc: 0xafa40300  sw          $a0, 0x300($sp)
    ctx->pc = 0x28afdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 4));
label_28afe0:
    // 0x28afe0: 0xafa50310  sw          $a1, 0x310($sp)
    ctx->pc = 0x28afe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 5));
label_28afe4:
    // 0x28afe4: 0xe7ac0320  swc1        $f12, 0x320($sp)
    ctx->pc = 0x28afe4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
label_28afe8:
    // 0x28afe8: 0xe7ad0330  swc1        $f13, 0x330($sp)
    ctx->pc = 0x28afe8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 816), bits); }
label_28afec:
    // 0x28afec: 0xc7a10320  lwc1        $f1, 0x320($sp)
    ctx->pc = 0x28afecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28aff0:
    // 0x28aff0: 0xc7a00330  lwc1        $f0, 0x330($sp)
    ctx->pc = 0x28aff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28aff4:
    // 0x28aff4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28aff4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28aff8:
    // 0x28aff8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_28affc:
    if (ctx->pc == 0x28AFFCu) {
        ctx->pc = 0x28B000u;
        goto label_28b000;
    }
    ctx->pc = 0x28AFF8u;
    {
        const bool branch_taken_0x28aff8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28aff8) {
            ctx->pc = 0x28B010u;
            goto label_28b010;
        }
    }
    ctx->pc = 0x28B000u;
label_28b000:
    // 0x28b000: 0xc7a00320  lwc1        $f0, 0x320($sp)
    ctx->pc = 0x28b000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b004:
    // 0x28b004: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x28b004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
label_28b008:
    // 0x28b008: 0x10000003  b           . + 4 + (0x3 << 2)
label_28b00c:
    if (ctx->pc == 0x28B00Cu) {
        ctx->pc = 0x28B010u;
        goto label_28b010;
    }
    ctx->pc = 0x28B008u;
    {
        const bool branch_taken_0x28b008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b008) {
            ctx->pc = 0x28B018u;
            goto label_28b018;
        }
    }
    ctx->pc = 0x28B010u;
label_28b010:
    // 0x28b010: 0xc7a00330  lwc1        $f0, 0x330($sp)
    ctx->pc = 0x28b010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b014:
    // 0x28b014: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x28b014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
label_28b018:
    // 0x28b018: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x28b018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b01c:
    // 0x28b01c: 0xe7a002fc  swc1        $f0, 0x2FC($sp)
    ctx->pc = 0x28b01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 764), bits); }
label_28b020:
    // 0x28b020: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x28b020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
label_28b024:
    // 0x28b024: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28b024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28b028:
    // 0x28b028: 0xc7a002fc  lwc1        $f0, 0x2FC($sp)
    ctx->pc = 0x28b028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b02c:
    // 0x28b02c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28b02cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28b030:
    // 0x28b030: 0xe7a002f8  swc1        $f0, 0x2F8($sp)
    ctx->pc = 0x28b030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 760), bits); }
label_28b034:
    // 0x28b034: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28b034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b038:
    // 0x28b038: 0x0  nop
    ctx->pc = 0x28b038u;
    // NOP
label_28b03c:
    // 0x28b03c: 0xe7a002f4  swc1        $f0, 0x2F4($sp)
    ctx->pc = 0x28b03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 756), bits); }
label_28b040:
    // 0x28b040: 0xc7a002fc  lwc1        $f0, 0x2FC($sp)
    ctx->pc = 0x28b040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b044:
    // 0x28b044: 0xe7a002f0  swc1        $f0, 0x2F0($sp)
    ctx->pc = 0x28b044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
label_28b048:
    // 0x28b048: 0xc7a10320  lwc1        $f1, 0x320($sp)
    ctx->pc = 0x28b048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b04c:
    // 0x28b04c: 0xc7a00330  lwc1        $f0, 0x330($sp)
    ctx->pc = 0x28b04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b050:
    // 0x28b050: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x28b050u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b054:
    // 0x28b054: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_28b058:
    if (ctx->pc == 0x28B058u) {
        ctx->pc = 0x28B05Cu;
        goto label_28b05c;
    }
    ctx->pc = 0x28B054u;
    {
        const bool branch_taken_0x28b054 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b054) {
            ctx->pc = 0x28B084u;
            goto label_28b084;
        }
    }
    ctx->pc = 0x28B05Cu;
label_28b05c:
    // 0x28b05c: 0xc7a102fc  lwc1        $f1, 0x2FC($sp)
    ctx->pc = 0x28b05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b060:
    // 0x28b060: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x28b060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
label_28b064:
    // 0x28b064: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28b064u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b068:
    // 0x28b068: 0x0  nop
    ctx->pc = 0x28b068u;
    // NOP
label_28b06c:
    // 0x28b06c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28b06cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28b070:
    // 0x28b070: 0xe7a002fc  swc1        $f0, 0x2FC($sp)
    ctx->pc = 0x28b070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 764), bits); }
label_28b074:
    // 0x28b074: 0x3c064100  lui         $a2, 0x4100
    ctx->pc = 0x28b074u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16640 << 16));
label_28b078:
    // 0x28b078: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x28b078u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b07c:
    // 0x28b07c: 0x0  nop
    ctx->pc = 0x28b07cu;
    // NOP
label_28b080:
    // 0x28b080: 0xe7a002f4  swc1        $f0, 0x2F4($sp)
    ctx->pc = 0x28b080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 756), bits); }
label_28b084:
    // 0x28b084: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x28b084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_28b088:
    // 0x28b088: 0xc0a2b50  jal         func_28AD40
label_28b08c:
    if (ctx->pc == 0x28B08Cu) {
        ctx->pc = 0x28B090u;
        goto label_28b090;
    }
    ctx->pc = 0x28B088u;
    SET_GPR_U32(ctx, 31, 0x28B090u);
    ctx->pc = 0x28AD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AD40u, 0x28B088u, 0x28B090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B090u;
label_28b090:
    // 0x28b090: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28b090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28b094:
    // 0x28b094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28b094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b098:
    // 0x28b098: 0x0  nop
    ctx->pc = 0x28b098u;
    // NOP
label_28b09c:
    // 0x28b09c: 0xe7a002ec  swc1        $f0, 0x2EC($sp)
    ctx->pc = 0x28b09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 748), bits); }
label_28b0a0:
    // 0x28b0a0: 0x10000014  b           . + 4 + (0x14 << 2)
label_28b0a4:
    if (ctx->pc == 0x28B0A4u) {
        ctx->pc = 0x28B0A8u;
        goto label_28b0a8;
    }
    ctx->pc = 0x28B0A0u;
    {
        const bool branch_taken_0x28b0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b0a0) {
            ctx->pc = 0x28B0F4u;
            goto label_28b0f4;
        }
    }
    ctx->pc = 0x28B0A8u;
label_28b0a8:
    // 0x28b0a8: 0x3c1e42a0  lui         $fp, 0x42A0
    ctx->pc = 0x28b0a8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)17056 << 16));
label_28b0ac:
    // 0x28b0ac: 0x449e0800  mtc1        $fp, $f1
    ctx->pc = 0x28b0acu;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28b0b0:
    // 0x28b0b0: 0xc7a002ec  lwc1        $f0, 0x2EC($sp)
    ctx->pc = 0x28b0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b0b4:
    // 0x28b0b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28b0b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28b0b8:
    // 0x28b0b8: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x28b0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
label_28b0bc:
    // 0x28b0bc: 0x27a40248  addiu       $a0, $sp, 0x248
    ctx->pc = 0x28b0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
label_28b0c0:
    // 0x28b0c0: 0xafa40218  sw          $a0, 0x218($sp)
    ctx->pc = 0x28b0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 4));
label_28b0c4:
    // 0x28b0c4: 0x27a50168  addiu       $a1, $sp, 0x168
    ctx->pc = 0x28b0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_28b0c8:
    // 0x28b0c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28b0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28b0cc:
    // 0x28b0cc: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x28b0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_28b0d0:
    // 0x28b0d0: 0x8fa60218  lw          $a2, 0x218($sp)
    ctx->pc = 0x28b0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
label_28b0d4:
    // 0x28b0d4: 0xc0a2b28  jal         func_28ACA0
label_28b0d8:
    if (ctx->pc == 0x28B0D8u) {
        ctx->pc = 0x28B0DCu;
        goto label_28b0dc;
    }
    ctx->pc = 0x28B0D4u;
    SET_GPR_U32(ctx, 31, 0x28B0DCu);
    ctx->pc = 0x28ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ACA0u, 0x28B0D4u, 0x28B0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B0DCu;
label_28b0dc:
    // 0x28b0dc: 0xc7a102ec  lwc1        $f1, 0x2EC($sp)
    ctx->pc = 0x28b0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b0e0:
    // 0x28b0e0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x28b0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_28b0e4:
    // 0x28b0e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28b0e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b0e8:
    // 0x28b0e8: 0x0  nop
    ctx->pc = 0x28b0e8u;
    // NOP
label_28b0ec:
    // 0x28b0ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28b0ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28b0f0:
    // 0x28b0f0: 0xe7a002ec  swc1        $f0, 0x2EC($sp)
    ctx->pc = 0x28b0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 748), bits); }
label_28b0f4:
    // 0x28b0f4: 0xc7a102ec  lwc1        $f1, 0x2EC($sp)
    ctx->pc = 0x28b0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b0f8:
    // 0x28b0f8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x28b0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_28b0fc:
    // 0x28b0fc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28b0fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b100:
    // 0x28b100: 0x0  nop
    ctx->pc = 0x28b100u;
    // NOP
label_28b104:
    // 0x28b104: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28b104u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b108:
    // 0x28b108: 0x4501ffe7  bc1t        . + 4 + (-0x19 << 2)
label_28b10c:
    if (ctx->pc == 0x28B10Cu) {
        ctx->pc = 0x28B110u;
        goto label_28b110;
    }
    ctx->pc = 0x28B108u;
    {
        const bool branch_taken_0x28b108 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b108) {
            ctx->pc = 0x28B0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b0a8;
        }
    }
    ctx->pc = 0x28B110u;
label_28b110:
    // 0x28b110: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x28b110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_28b114:
    // 0x28b114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28b114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b118:
    // 0x28b118: 0x0  nop
    ctx->pc = 0x28b118u;
    // NOP
label_28b11c:
    // 0x28b11c: 0xe7a002e8  swc1        $f0, 0x2E8($sp)
    ctx->pc = 0x28b11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 744), bits); }
label_28b120:
    // 0x28b120: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28b120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b124:
    // 0x28b124: 0x0  nop
    ctx->pc = 0x28b124u;
    // NOP
label_28b128:
    // 0x28b128: 0xe7a002e4  swc1        $f0, 0x2E4($sp)
    ctx->pc = 0x28b128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 740), bits); }
label_28b12c:
    // 0x28b12c: 0x8fa40310  lw          $a0, 0x310($sp)
    ctx->pc = 0x28b12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_28b130:
    // 0x28b130: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x28b130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_28b134:
    // 0x28b134: 0x10050055  beq         $zero, $a1, . + 4 + (0x55 << 2)
label_28b138:
    if (ctx->pc == 0x28B138u) {
        ctx->pc = 0x28B13Cu;
        goto label_28b13c;
    }
    ctx->pc = 0x28B134u;
    {
        const bool branch_taken_0x28b134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        if (branch_taken_0x28b134) {
            ctx->pc = 0x28B28Cu;
            goto label_28b28c;
        }
    }
    ctx->pc = 0x28B13Cu;
label_28b13c:
    // 0x28b13c: 0x8fa20310  lw          $v0, 0x310($sp)
    ctx->pc = 0x28b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_28b140:
    // 0x28b140: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x28b140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_28b144:
    // 0x28b144: 0x22602  srl         $a0, $v0, 24
    ctx->pc = 0x28b144u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
label_28b148:
    // 0x28b148: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x28b148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_28b14c:
    // 0x28b14c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28b14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_28b150:
    // 0x28b150: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_28b154:
    if (ctx->pc == 0x28B154u) {
        ctx->pc = 0x28B158u;
        goto label_28b158;
    }
    ctx->pc = 0x28B150u;
    {
        const bool branch_taken_0x28b150 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28b150) {
            ctx->pc = 0x28B16Cu;
            goto label_28b16c;
        }
    }
    ctx->pc = 0x28B158u;
label_28b158:
    // 0x28b158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28b158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b15c:
    // 0x28b15c: 0x0  nop
    ctx->pc = 0x28b15cu;
    // NOP
label_28b160:
    // 0x28b160: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28b160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28b164:
    // 0x28b164: 0x10000008  b           . + 4 + (0x8 << 2)
label_28b168:
    if (ctx->pc == 0x28B168u) {
        ctx->pc = 0x28B16Cu;
        goto label_28b16c;
    }
    ctx->pc = 0x28B164u;
    {
        const bool branch_taken_0x28b164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b164) {
            ctx->pc = 0x28B188u;
            goto label_28b188;
        }
    }
    ctx->pc = 0x28B16Cu;
label_28b16c:
    // 0x28b16c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x28b16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_28b170:
    // 0x28b170: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x28b170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28b174:
    // 0x28b174: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x28b174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_28b178:
    // 0x28b178: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28b178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b17c:
    // 0x28b17c: 0x0  nop
    ctx->pc = 0x28b17cu;
    // NOP
label_28b180:
    // 0x28b180: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28b180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28b184:
    // 0x28b184: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28b184u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28b188:
    // 0x28b188: 0xe7a002e0  swc1        $f0, 0x2E0($sp)
    ctx->pc = 0x28b188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
label_28b18c:
    // 0x28b18c: 0x8fa50310  lw          $a1, 0x310($sp)
    ctx->pc = 0x28b18cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_28b190:
    // 0x28b190: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x28b190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_28b194:
    // 0x28b194: 0x22402  srl         $a0, $v0, 16
    ctx->pc = 0x28b194u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_28b198:
    // 0x28b198: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x28b198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_28b19c:
    // 0x28b19c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x28b19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_28b1a0:
    // 0x28b1a0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_28b1a4:
    if (ctx->pc == 0x28B1A4u) {
        ctx->pc = 0x28B1A8u;
        goto label_28b1a8;
    }
    ctx->pc = 0x28B1A0u;
    {
        const bool branch_taken_0x28b1a0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28b1a0) {
            ctx->pc = 0x28B1BCu;
            goto label_28b1bc;
        }
    }
    ctx->pc = 0x28B1A8u;
label_28b1a8:
    // 0x28b1a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28b1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b1ac:
    // 0x28b1ac: 0x0  nop
    ctx->pc = 0x28b1acu;
    // NOP
label_28b1b0:
    // 0x28b1b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28b1b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28b1b4:
    // 0x28b1b4: 0x10000008  b           . + 4 + (0x8 << 2)
label_28b1b8:
    if (ctx->pc == 0x28B1B8u) {
        ctx->pc = 0x28B1BCu;
        goto label_28b1bc;
    }
    ctx->pc = 0x28B1B4u;
    {
        const bool branch_taken_0x28b1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b1b4) {
            ctx->pc = 0x28B1D8u;
            goto label_28b1d8;
        }
    }
    ctx->pc = 0x28B1BCu;
label_28b1bc:
    // 0x28b1bc: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x28b1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_28b1c0:
    // 0x28b1c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28b1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28b1c4:
    // 0x28b1c4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x28b1c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_28b1c8:
    // 0x28b1c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28b1c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b1cc:
    // 0x28b1cc: 0x0  nop
    ctx->pc = 0x28b1ccu;
    // NOP
label_28b1d0:
    // 0x28b1d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28b1d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28b1d4:
    // 0x28b1d4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28b1d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28b1d8:
    // 0x28b1d8: 0xe7a002dc  swc1        $f0, 0x2DC($sp)
    ctx->pc = 0x28b1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 732), bits); }
label_28b1dc:
    // 0x28b1dc: 0xc7a102e0  lwc1        $f1, 0x2E0($sp)
    ctx->pc = 0x28b1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b1e0:
    // 0x28b1e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28b1e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b1e4:
    // 0x28b1e4: 0x0  nop
    ctx->pc = 0x28b1e4u;
    // NOP
label_28b1e8:
    // 0x28b1e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28b1e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b1ec:
    // 0x28b1ec: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_28b1f0:
    if (ctx->pc == 0x28B1F0u) {
        ctx->pc = 0x28B1F4u;
        goto label_28b1f4;
    }
    ctx->pc = 0x28B1ECu;
    {
        const bool branch_taken_0x28b1ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b1ec) {
            ctx->pc = 0x28B208u;
            goto label_28b208;
        }
    }
    ctx->pc = 0x28B1F4u;
label_28b1f4:
    // 0x28b1f4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x28b1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_28b1f8:
    // 0x28b1f8: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x28b1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_28b1fc:
    // 0x28b1fc: 0x27a602e0  addiu       $a2, $sp, 0x2E0
    ctx->pc = 0x28b1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_28b200:
    // 0x28b200: 0xc0a2b28  jal         func_28ACA0
label_28b204:
    if (ctx->pc == 0x28B204u) {
        ctx->pc = 0x28B208u;
        goto label_28b208;
    }
    ctx->pc = 0x28B200u;
    SET_GPR_U32(ctx, 31, 0x28B208u);
    ctx->pc = 0x28ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ACA0u, 0x28B200u, 0x28B208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B208u;
label_28b208:
    // 0x28b208: 0xc7a102e8  lwc1        $f1, 0x2E8($sp)
    ctx->pc = 0x28b208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b20c:
    // 0x28b20c: 0xc7a002e0  lwc1        $f0, 0x2E0($sp)
    ctx->pc = 0x28b20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b210:
    // 0x28b210: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28b210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b214:
    // 0x28b214: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_28b218:
    if (ctx->pc == 0x28B218u) {
        ctx->pc = 0x28B21Cu;
        goto label_28b21c;
    }
    ctx->pc = 0x28B214u;
    {
        const bool branch_taken_0x28b214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b214) {
            ctx->pc = 0x28B22Cu;
            goto label_28b22c;
        }
    }
    ctx->pc = 0x28B21Cu;
label_28b21c:
    // 0x28b21c: 0xc7a002e8  lwc1        $f0, 0x2E8($sp)
    ctx->pc = 0x28b21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b220:
    // 0x28b220: 0xe7a00214  swc1        $f0, 0x214($sp)
    ctx->pc = 0x28b220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
label_28b224:
    // 0x28b224: 0x10000003  b           . + 4 + (0x3 << 2)
label_28b228:
    if (ctx->pc == 0x28B228u) {
        ctx->pc = 0x28B22Cu;
        goto label_28b22c;
    }
    ctx->pc = 0x28B224u;
    {
        const bool branch_taken_0x28b224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b224) {
            ctx->pc = 0x28B234u;
            goto label_28b234;
        }
    }
    ctx->pc = 0x28B22Cu;
label_28b22c:
    // 0x28b22c: 0xc7a002e0  lwc1        $f0, 0x2E0($sp)
    ctx->pc = 0x28b22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b230:
    // 0x28b230: 0xe7a00214  swc1        $f0, 0x214($sp)
    ctx->pc = 0x28b230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
label_28b234:
    // 0x28b234: 0xc7a00214  lwc1        $f0, 0x214($sp)
    ctx->pc = 0x28b234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b238:
    // 0x28b238: 0xe7a002e8  swc1        $f0, 0x2E8($sp)
    ctx->pc = 0x28b238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 744), bits); }
label_28b23c:
    // 0x28b23c: 0x27a20158  addiu       $v0, $sp, 0x158
    ctx->pc = 0x28b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_28b240:
    // 0x28b240: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x28b240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_28b244:
    // 0x28b244: 0x7ba40100  lq          $a0, 0x100($sp)
    ctx->pc = 0x28b244u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_28b248:
    // 0x28b248: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x28b248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_28b24c:
    // 0x28b24c: 0x27a602dc  addiu       $a2, $sp, 0x2DC
    ctx->pc = 0x28b24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 732));
label_28b250:
    // 0x28b250: 0xc0a2b28  jal         func_28ACA0
label_28b254:
    if (ctx->pc == 0x28B254u) {
        ctx->pc = 0x28B258u;
        goto label_28b258;
    }
    ctx->pc = 0x28B250u;
    SET_GPR_U32(ctx, 31, 0x28B258u);
    ctx->pc = 0x28ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ACA0u, 0x28B250u, 0x28B258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B258u;
label_28b258:
    // 0x28b258: 0xc7a102e4  lwc1        $f1, 0x2E4($sp)
    ctx->pc = 0x28b258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b25c:
    // 0x28b25c: 0xc7a002dc  lwc1        $f0, 0x2DC($sp)
    ctx->pc = 0x28b25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b260:
    // 0x28b260: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28b260u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b264:
    // 0x28b264: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_28b268:
    if (ctx->pc == 0x28B268u) {
        ctx->pc = 0x28B26Cu;
        goto label_28b26c;
    }
    ctx->pc = 0x28B264u;
    {
        const bool branch_taken_0x28b264 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b264) {
            ctx->pc = 0x28B27Cu;
            goto label_28b27c;
        }
    }
    ctx->pc = 0x28B26Cu;
label_28b26c:
    // 0x28b26c: 0xc7a002e4  lwc1        $f0, 0x2E4($sp)
    ctx->pc = 0x28b26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b270:
    // 0x28b270: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x28b270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_28b274:
    // 0x28b274: 0x10000003  b           . + 4 + (0x3 << 2)
label_28b278:
    if (ctx->pc == 0x28B278u) {
        ctx->pc = 0x28B27Cu;
        goto label_28b27c;
    }
    ctx->pc = 0x28B274u;
    {
        const bool branch_taken_0x28b274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b274) {
            ctx->pc = 0x28B284u;
            goto label_28b284;
        }
    }
    ctx->pc = 0x28B27Cu;
label_28b27c:
    // 0x28b27c: 0xc7a002dc  lwc1        $f0, 0x2DC($sp)
    ctx->pc = 0x28b27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b280:
    // 0x28b280: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x28b280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_28b284:
    // 0x28b284: 0xc7a00210  lwc1        $f0, 0x210($sp)
    ctx->pc = 0x28b284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b288:
    // 0x28b288: 0xe7a002e4  swc1        $f0, 0x2E4($sp)
    ctx->pc = 0x28b288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 740), bits); }
label_28b28c:
    // 0x28b28c: 0x27a201d0  addiu       $v0, $sp, 0x1D0
    ctx->pc = 0x28b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_28b290:
    // 0x28b290: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x28b290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_28b294:
    // 0x28b294: 0x7ba400f0  lq          $a0, 0xF0($sp)
    ctx->pc = 0x28b294u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_28b298:
    // 0x28b298: 0xc0a2b50  jal         func_28AD40
label_28b29c:
    if (ctx->pc == 0x28B29Cu) {
        ctx->pc = 0x28B2A0u;
        goto label_28b2a0;
    }
    ctx->pc = 0x28B298u;
    SET_GPR_U32(ctx, 31, 0x28B2A0u);
    ctx->pc = 0x28AD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AD40u, 0x28B298u, 0x28B2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B2A0u;
label_28b2a0:
    // 0x28b2a0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x28b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_28b2a4:
    // 0x28b2a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28b2a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28b2a8:
    // 0x28b2a8: 0xc7a002fc  lwc1        $f0, 0x2FC($sp)
    ctx->pc = 0x28b2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b2ac:
    // 0x28b2ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28b2acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28b2b0:
    // 0x28b2b0: 0xe7a002d8  swc1        $f0, 0x2D8($sp)
    ctx->pc = 0x28b2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 728), bits); }
label_28b2b4:
    // 0x28b2b4: 0x10000007  b           . + 4 + (0x7 << 2)
label_28b2b8:
    if (ctx->pc == 0x28B2B8u) {
        ctx->pc = 0x28B2BCu;
        goto label_28b2bc;
    }
    ctx->pc = 0x28B2B4u;
    {
        const bool branch_taken_0x28b2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b2b4) {
            ctx->pc = 0x28B2D4u;
            goto label_28b2d4;
        }
    }
    ctx->pc = 0x28B2BCu;
label_28b2bc:
    // 0x28b2bc: 0xc7a102d8  lwc1        $f1, 0x2D8($sp)
    ctx->pc = 0x28b2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b2c0:
    // 0x28b2c0: 0x3c0442a0  lui         $a0, 0x42A0
    ctx->pc = 0x28b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17056 << 16));
label_28b2c4:
    // 0x28b2c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28b2c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b2c8:
    // 0x28b2c8: 0x0  nop
    ctx->pc = 0x28b2c8u;
    // NOP
label_28b2cc:
    // 0x28b2cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28b2ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28b2d0:
    // 0x28b2d0: 0xe7a002d8  swc1        $f0, 0x2D8($sp)
    ctx->pc = 0x28b2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 728), bits); }
label_28b2d4:
    // 0x28b2d4: 0xc7a102d8  lwc1        $f1, 0x2D8($sp)
    ctx->pc = 0x28b2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b2d8:
    // 0x28b2d8: 0xc7a002f8  lwc1        $f0, 0x2F8($sp)
    ctx->pc = 0x28b2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b2dc:
    // 0x28b2dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28b2dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b2e0:
    // 0x28b2e0: 0x4501fff6  bc1t        . + 4 + (-0xA << 2)
label_28b2e4:
    if (ctx->pc == 0x28B2E4u) {
        ctx->pc = 0x28B2E8u;
        goto label_28b2e8;
    }
    ctx->pc = 0x28B2E0u;
    {
        const bool branch_taken_0x28b2e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b2e0) {
            ctx->pc = 0x28B2BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b2bc;
        }
    }
    ctx->pc = 0x28B2E8u;
label_28b2e8:
    // 0x28b2e8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x28b2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_28b2ec:
    // 0x28b2ec: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x28b2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_28b2f0:
    // 0x28b2f0: 0x27a602f8  addiu       $a2, $sp, 0x2F8
    ctx->pc = 0x28b2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 760));
label_28b2f4:
    // 0x28b2f4: 0xc0a2b28  jal         func_28ACA0
label_28b2f8:
    if (ctx->pc == 0x28B2F8u) {
        ctx->pc = 0x28B2FCu;
        goto label_28b2fc;
    }
    ctx->pc = 0x28B2F4u;
    SET_GPR_U32(ctx, 31, 0x28B2FCu);
    ctx->pc = 0x28ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ACA0u, 0x28B2F4u, 0x28B2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B2FCu;
label_28b2fc:
    // 0x28b2fc: 0xc7a002f8  lwc1        $f0, 0x2F8($sp)
    ctx->pc = 0x28b2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b300:
    // 0x28b300: 0xe7a002d4  swc1        $f0, 0x2D4($sp)
    ctx->pc = 0x28b300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 724), bits); }
label_28b304:
    // 0x28b304: 0xc7a002fc  lwc1        $f0, 0x2FC($sp)
    ctx->pc = 0x28b304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b308:
    // 0x28b308: 0xe7a002d0  swc1        $f0, 0x2D0($sp)
    ctx->pc = 0x28b308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
label_28b30c:
    // 0x28b30c: 0x8fa80310  lw          $t0, 0x310($sp)
    ctx->pc = 0x28b30cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_28b310:
    // 0x28b310: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x28b310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_28b314:
    // 0x28b314: 0x1002006d  beq         $zero, $v0, . + 4 + (0x6D << 2)
label_28b318:
    if (ctx->pc == 0x28B318u) {
        ctx->pc = 0x28B31Cu;
        goto label_28b31c;
    }
    ctx->pc = 0x28B314u;
    {
        const bool branch_taken_0x28b314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x28b314) {
            ctx->pc = 0x28B4CCu;
            goto label_28b4cc;
        }
    }
    ctx->pc = 0x28B31Cu;
label_28b31c:
    // 0x28b31c: 0xc7a10320  lwc1        $f1, 0x320($sp)
    ctx->pc = 0x28b31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b320:
    // 0x28b320: 0xc7a00330  lwc1        $f0, 0x330($sp)
    ctx->pc = 0x28b320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b324:
    // 0x28b324: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28b324u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b328:
    // 0x28b328: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_28b32c:
    if (ctx->pc == 0x28B32Cu) {
        ctx->pc = 0x28B330u;
        goto label_28b330;
    }
    ctx->pc = 0x28B328u;
    {
        const bool branch_taken_0x28b328 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b328) {
            ctx->pc = 0x28B340u;
            goto label_28b340;
        }
    }
    ctx->pc = 0x28B330u;
label_28b330:
    // 0x28b330: 0xc7a00320  lwc1        $f0, 0x320($sp)
    ctx->pc = 0x28b330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b334:
    // 0x28b334: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x28b334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
label_28b338:
    // 0x28b338: 0x10000003  b           . + 4 + (0x3 << 2)
label_28b33c:
    if (ctx->pc == 0x28B33Cu) {
        ctx->pc = 0x28B340u;
        goto label_28b340;
    }
    ctx->pc = 0x28B338u;
    {
        const bool branch_taken_0x28b338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b338) {
            ctx->pc = 0x28B348u;
            goto label_28b348;
        }
    }
    ctx->pc = 0x28B340u;
label_28b340:
    // 0x28b340: 0xc7a00330  lwc1        $f0, 0x330($sp)
    ctx->pc = 0x28b340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b344:
    // 0x28b344: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x28b344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
label_28b348:
    // 0x28b348: 0x8fa50310  lw          $a1, 0x310($sp)
    ctx->pc = 0x28b348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_28b34c:
    // 0x28b34c: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x28b34cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_28b350:
    // 0x28b350: 0x61202  srl         $v0, $a2, 8
    ctx->pc = 0x28b350u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
label_28b354:
    // 0x28b354: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x28b354u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_28b358:
    // 0x28b358: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x28b358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_28b35c:
    // 0x28b35c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_28b360:
    if (ctx->pc == 0x28B360u) {
        ctx->pc = 0x28B364u;
        goto label_28b364;
    }
    ctx->pc = 0x28B35Cu;
    {
        const bool branch_taken_0x28b35c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28b35c) {
            ctx->pc = 0x28B378u;
            goto label_28b378;
        }
    }
    ctx->pc = 0x28B364u;
label_28b364:
    // 0x28b364: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28b364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b368:
    // 0x28b368: 0x0  nop
    ctx->pc = 0x28b368u;
    // NOP
label_28b36c:
    // 0x28b36c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x28b36cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28b370:
    // 0x28b370: 0x10000008  b           . + 4 + (0x8 << 2)
label_28b374:
    if (ctx->pc == 0x28B374u) {
        ctx->pc = 0x28B378u;
        goto label_28b378;
    }
    ctx->pc = 0x28B370u;
    {
        const bool branch_taken_0x28b370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b370) {
            ctx->pc = 0x28B394u;
            goto label_28b394;
        }
    }
    ctx->pc = 0x28B378u;
label_28b378:
    // 0x28b378: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x28b378u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_28b37c:
    // 0x28b37c: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x28b37cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28b380:
    // 0x28b380: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x28b380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_28b384:
    // 0x28b384: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28b384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b388:
    // 0x28b388: 0x0  nop
    ctx->pc = 0x28b388u;
    // NOP
label_28b38c:
    // 0x28b38c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x28b38cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28b390:
    // 0x28b390: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28b390u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28b394:
    // 0x28b394: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x28b394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b398:
    // 0x28b398: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28b398u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28b39c:
    // 0x28b39c: 0xe7a002cc  swc1        $f0, 0x2CC($sp)
    ctx->pc = 0x28b39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 716), bits); }
label_28b3a0:
    // 0x28b3a0: 0xc7a10320  lwc1        $f1, 0x320($sp)
    ctx->pc = 0x28b3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b3a4:
    // 0x28b3a4: 0xc7a00330  lwc1        $f0, 0x330($sp)
    ctx->pc = 0x28b3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b3a8:
    // 0x28b3a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28b3a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b3ac:
    // 0x28b3ac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_28b3b0:
    if (ctx->pc == 0x28B3B0u) {
        ctx->pc = 0x28B3B4u;
        goto label_28b3b4;
    }
    ctx->pc = 0x28B3ACu;
    {
        const bool branch_taken_0x28b3ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b3ac) {
            ctx->pc = 0x28B3C4u;
            goto label_28b3c4;
        }
    }
    ctx->pc = 0x28B3B4u;
label_28b3b4:
    // 0x28b3b4: 0xc7a00320  lwc1        $f0, 0x320($sp)
    ctx->pc = 0x28b3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b3b8:
    // 0x28b3b8: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x28b3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_28b3bc:
    // 0x28b3bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_28b3c0:
    if (ctx->pc == 0x28B3C0u) {
        ctx->pc = 0x28B3C4u;
        goto label_28b3c4;
    }
    ctx->pc = 0x28B3BCu;
    {
        const bool branch_taken_0x28b3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b3bc) {
            ctx->pc = 0x28B3CCu;
            goto label_28b3cc;
        }
    }
    ctx->pc = 0x28B3C4u;
label_28b3c4:
    // 0x28b3c4: 0xc7a00330  lwc1        $f0, 0x330($sp)
    ctx->pc = 0x28b3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b3c8:
    // 0x28b3c8: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x28b3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_28b3cc:
    // 0x28b3cc: 0x8fa60310  lw          $a2, 0x310($sp)
    ctx->pc = 0x28b3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_28b3d0:
    // 0x28b3d0: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x28b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_28b3d4:
    // 0x28b3d4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x28b3d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_28b3d8:
    // 0x28b3d8: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x28b3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_28b3dc:
    // 0x28b3dc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_28b3e0:
    if (ctx->pc == 0x28B3E0u) {
        ctx->pc = 0x28B3E4u;
        goto label_28b3e4;
    }
    ctx->pc = 0x28B3DCu;
    {
        const bool branch_taken_0x28b3dc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28b3dc) {
            ctx->pc = 0x28B3F8u;
            goto label_28b3f8;
        }
    }
    ctx->pc = 0x28B3E4u;
label_28b3e4:
    // 0x28b3e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28b3e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b3e8:
    // 0x28b3e8: 0x0  nop
    ctx->pc = 0x28b3e8u;
    // NOP
label_28b3ec:
    // 0x28b3ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x28b3ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28b3f0:
    // 0x28b3f0: 0x10000008  b           . + 4 + (0x8 << 2)
label_28b3f4:
    if (ctx->pc == 0x28B3F4u) {
        ctx->pc = 0x28B3F8u;
        goto label_28b3f8;
    }
    ctx->pc = 0x28B3F0u;
    {
        const bool branch_taken_0x28b3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b3f0) {
            ctx->pc = 0x28B414u;
            goto label_28b414;
        }
    }
    ctx->pc = 0x28B3F8u;
label_28b3f8:
    // 0x28b3f8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x28b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_28b3fc:
    // 0x28b3fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28b3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28b400:
    // 0x28b400: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28b400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_28b404:
    // 0x28b404: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28b404u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b408:
    // 0x28b408: 0x0  nop
    ctx->pc = 0x28b408u;
    // NOP
label_28b40c:
    // 0x28b40c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x28b40cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28b410:
    // 0x28b410: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28b410u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28b414:
    // 0x28b414: 0xc7a00208  lwc1        $f0, 0x208($sp)
    ctx->pc = 0x28b414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b418:
    // 0x28b418: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28b418u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28b41c:
    // 0x28b41c: 0xe7a002c8  swc1        $f0, 0x2C8($sp)
    ctx->pc = 0x28b41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
label_28b420:
    // 0x28b420: 0xc7a102cc  lwc1        $f1, 0x2CC($sp)
    ctx->pc = 0x28b420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b424:
    // 0x28b424: 0xc7a002f0  lwc1        $f0, 0x2F0($sp)
    ctx->pc = 0x28b424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b428:
    // 0x28b428: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28b428u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b42c:
    // 0x28b42c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_28b430:
    if (ctx->pc == 0x28B430u) {
        ctx->pc = 0x28B434u;
        goto label_28b434;
    }
    ctx->pc = 0x28B42Cu;
    {
        const bool branch_taken_0x28b42c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b42c) {
            ctx->pc = 0x28B44Cu;
            goto label_28b44c;
        }
    }
    ctx->pc = 0x28B434u;
label_28b434:
    // 0x28b434: 0x27a40148  addiu       $a0, $sp, 0x148
    ctx->pc = 0x28b434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_28b438:
    // 0x28b438: 0x27a701d0  addiu       $a3, $sp, 0x1D0
    ctx->pc = 0x28b438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_28b43c:
    // 0x28b43c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x28b43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_28b440:
    // 0x28b440: 0x27a602cc  addiu       $a2, $sp, 0x2CC
    ctx->pc = 0x28b440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 716));
label_28b444:
    // 0x28b444: 0xc0a2b28  jal         func_28ACA0
label_28b448:
    if (ctx->pc == 0x28B448u) {
        ctx->pc = 0x28B44Cu;
        goto label_28b44c;
    }
    ctx->pc = 0x28B444u;
    SET_GPR_U32(ctx, 31, 0x28B44Cu);
    ctx->pc = 0x28ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ACA0u, 0x28B444u, 0x28B44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B44Cu;
label_28b44c:
    // 0x28b44c: 0xc7a102d4  lwc1        $f1, 0x2D4($sp)
    ctx->pc = 0x28b44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b450:
    // 0x28b450: 0xc7a002cc  lwc1        $f0, 0x2CC($sp)
    ctx->pc = 0x28b450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b454:
    // 0x28b454: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28b454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b458:
    // 0x28b458: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_28b45c:
    if (ctx->pc == 0x28B45Cu) {
        ctx->pc = 0x28B460u;
        goto label_28b460;
    }
    ctx->pc = 0x28B458u;
    {
        const bool branch_taken_0x28b458 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b458) {
            ctx->pc = 0x28B470u;
            goto label_28b470;
        }
    }
    ctx->pc = 0x28B460u;
label_28b460:
    // 0x28b460: 0xc7a002d4  lwc1        $f0, 0x2D4($sp)
    ctx->pc = 0x28b460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b464:
    // 0x28b464: 0xe7a00204  swc1        $f0, 0x204($sp)
    ctx->pc = 0x28b464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
label_28b468:
    // 0x28b468: 0x10000003  b           . + 4 + (0x3 << 2)
label_28b46c:
    if (ctx->pc == 0x28B46Cu) {
        ctx->pc = 0x28B470u;
        goto label_28b470;
    }
    ctx->pc = 0x28B468u;
    {
        const bool branch_taken_0x28b468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b468) {
            ctx->pc = 0x28B478u;
            goto label_28b478;
        }
    }
    ctx->pc = 0x28B470u;
label_28b470:
    // 0x28b470: 0xc7a002cc  lwc1        $f0, 0x2CC($sp)
    ctx->pc = 0x28b470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b474:
    // 0x28b474: 0xe7a00204  swc1        $f0, 0x204($sp)
    ctx->pc = 0x28b474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
label_28b478:
    // 0x28b478: 0xc7a00204  lwc1        $f0, 0x204($sp)
    ctx->pc = 0x28b478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b47c:
    // 0x28b47c: 0xe7a002d4  swc1        $f0, 0x2D4($sp)
    ctx->pc = 0x28b47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 724), bits); }
label_28b480:
    // 0x28b480: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x28b480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_28b484:
    // 0x28b484: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28b484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b488:
    // 0x28b488: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x28b488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_28b48c:
    // 0x28b48c: 0x27a602c8  addiu       $a2, $sp, 0x2C8
    ctx->pc = 0x28b48cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
label_28b490:
    // 0x28b490: 0xc0a2b28  jal         func_28ACA0
label_28b494:
    if (ctx->pc == 0x28B494u) {
        ctx->pc = 0x28B498u;
        goto label_28b498;
    }
    ctx->pc = 0x28B490u;
    SET_GPR_U32(ctx, 31, 0x28B498u);
    ctx->pc = 0x28ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ACA0u, 0x28B490u, 0x28B498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B498u;
label_28b498:
    // 0x28b498: 0xc7a102d0  lwc1        $f1, 0x2D0($sp)
    ctx->pc = 0x28b498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b49c:
    // 0x28b49c: 0xc7a002c8  lwc1        $f0, 0x2C8($sp)
    ctx->pc = 0x28b49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b4a0:
    // 0x28b4a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28b4a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b4a4:
    // 0x28b4a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_28b4a8:
    if (ctx->pc == 0x28B4A8u) {
        ctx->pc = 0x28B4ACu;
        goto label_28b4ac;
    }
    ctx->pc = 0x28B4A4u;
    {
        const bool branch_taken_0x28b4a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b4a4) {
            ctx->pc = 0x28B4BCu;
            goto label_28b4bc;
        }
    }
    ctx->pc = 0x28B4ACu;
label_28b4ac:
    // 0x28b4ac: 0xc7a002d0  lwc1        $f0, 0x2D0($sp)
    ctx->pc = 0x28b4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b4b0:
    // 0x28b4b0: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x28b4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_28b4b4:
    // 0x28b4b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_28b4b8:
    if (ctx->pc == 0x28B4B8u) {
        ctx->pc = 0x28B4BCu;
        goto label_28b4bc;
    }
    ctx->pc = 0x28B4B4u;
    {
        const bool branch_taken_0x28b4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b4b4) {
            ctx->pc = 0x28B4C4u;
            goto label_28b4c4;
        }
    }
    ctx->pc = 0x28B4BCu;
label_28b4bc:
    // 0x28b4bc: 0xc7a002c8  lwc1        $f0, 0x2C8($sp)
    ctx->pc = 0x28b4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b4c0:
    // 0x28b4c0: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x28b4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_28b4c4:
    // 0x28b4c4: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x28b4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b4c8:
    // 0x28b4c8: 0xe7a002d0  swc1        $f0, 0x2D0($sp)
    ctx->pc = 0x28b4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
label_28b4cc:
    // 0x28b4cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28b4ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b4d0:
    // 0x28b4d0: 0x0  nop
    ctx->pc = 0x28b4d0u;
    // NOP
label_28b4d4:
    // 0x28b4d4: 0xe7a002c0  swc1        $f0, 0x2C0($sp)
    ctx->pc = 0x28b4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_28b4d8:
    // 0x28b4d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28b4d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b4dc:
    // 0x28b4dc: 0x0  nop
    ctx->pc = 0x28b4dcu;
    // NOP
label_28b4e0:
    // 0x28b4e0: 0xe7a002b8  swc1        $f0, 0x2B8($sp)
    ctx->pc = 0x28b4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
label_28b4e4:
    // 0x28b4e4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x28b4e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b4e8:
    // 0x28b4e8: 0x27a602b4  addiu       $a2, $sp, 0x2B4
    ctx->pc = 0x28b4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
label_28b4ec:
    // 0x28b4ec: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x28b4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28b4f0:
    // 0x28b4f0: 0xc0a2b20  jal         func_28AC80
label_28b4f4:
    if (ctx->pc == 0x28B4F4u) {
        ctx->pc = 0x28B4F8u;
        goto label_28b4f8;
    }
    ctx->pc = 0x28B4F0u;
    SET_GPR_U32(ctx, 31, 0x28B4F8u);
    ctx->pc = 0x28AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AC80u, 0x28B4F0u, 0x28B4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B4F8u;
label_28b4f8:
    // 0x28b4f8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x28b4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_28b4fc:
    // 0x28b4fc: 0xc0a2b20  jal         func_28AC80
label_28b500:
    if (ctx->pc == 0x28B500u) {
        ctx->pc = 0x28B504u;
        goto label_28b504;
    }
    ctx->pc = 0x28B4FCu;
    SET_GPR_U32(ctx, 31, 0x28B504u);
    ctx->pc = 0x28AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AC80u, 0x28B4FCu, 0x28B504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B504u;
label_28b504:
    // 0x28b504: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x28b504u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b508:
    // 0x28b508: 0xc7a002fc  lwc1        $f0, 0x2FC($sp)
    ctx->pc = 0x28b508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b50c:
    // 0x28b50c: 0xe7a002c0  swc1        $f0, 0x2C0($sp)
    ctx->pc = 0x28b50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_28b510:
    // 0x28b510: 0x27a40244  addiu       $a0, $sp, 0x244
    ctx->pc = 0x28b510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
label_28b514:
    // 0x28b514: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x28b514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_28b518:
    // 0x28b518: 0xc0a2b00  jal         func_28AC00
label_28b51c:
    if (ctx->pc == 0x28B51Cu) {
        ctx->pc = 0x28B520u;
        goto label_28b520;
    }
    ctx->pc = 0x28B518u;
    SET_GPR_U32(ctx, 31, 0x28B520u);
    ctx->pc = 0x28AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AC00u, 0x28B518u, 0x28B520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B520u;
label_28b520:
    // 0x28b520: 0x27a402b4  addiu       $a0, $sp, 0x2B4
    ctx->pc = 0x28b520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
label_28b524:
    // 0x28b524: 0x27a50244  addiu       $a1, $sp, 0x244
    ctx->pc = 0x28b524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
label_28b528:
    // 0x28b528: 0xc0a2af0  jal         func_28ABC0
label_28b52c:
    if (ctx->pc == 0x28B52Cu) {
        ctx->pc = 0x28B530u;
        goto label_28b530;
    }
    ctx->pc = 0x28B528u;
    SET_GPR_U32(ctx, 31, 0x28B530u);
    ctx->pc = 0x28ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABC0u, 0x28B528u, 0x28B530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B530u;
label_28b530:
    // 0x28b530: 0x10000045  b           . + 4 + (0x45 << 2)
label_28b534:
    if (ctx->pc == 0x28B534u) {
        ctx->pc = 0x28B538u;
        goto label_28b538;
    }
    ctx->pc = 0x28B530u;
    {
        const bool branch_taken_0x28b530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b530) {
            ctx->pc = 0x28B648u;
            goto label_28b648;
        }
    }
    ctx->pc = 0x28B538u;
label_28b538:
    // 0x28b538: 0x27a402b4  addiu       $a0, $sp, 0x2B4
    ctx->pc = 0x28b538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
label_28b53c:
    // 0x28b53c: 0xc0a2ae8  jal         func_28ABA0
label_28b540:
    if (ctx->pc == 0x28B540u) {
        ctx->pc = 0x28B544u;
        goto label_28b544;
    }
    ctx->pc = 0x28B53Cu;
    SET_GPR_U32(ctx, 31, 0x28B544u);
    ctx->pc = 0x28ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABA0u, 0x28B53Cu, 0x28B544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B544u;
label_28b544:
    // 0x28b544: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28b544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b548:
    // 0x28b548: 0xe7a002c4  swc1        $f0, 0x2C4($sp)
    ctx->pc = 0x28b548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
label_28b54c:
    // 0x28b54c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28b54cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b550:
    // 0x28b550: 0x0  nop
    ctx->pc = 0x28b550u;
    // NOP
label_28b554:
    // 0x28b554: 0xe7a002b8  swc1        $f0, 0x2B8($sp)
    ctx->pc = 0x28b554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
label_28b558:
    // 0x28b558: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x28b558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_28b55c:
    // 0x28b55c: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x28b55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_28b560:
    // 0x28b560: 0xc0a2b00  jal         func_28AC00
label_28b564:
    if (ctx->pc == 0x28B564u) {
        ctx->pc = 0x28B568u;
        goto label_28b568;
    }
    ctx->pc = 0x28B560u;
    SET_GPR_U32(ctx, 31, 0x28B568u);
    ctx->pc = 0x28AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AC00u, 0x28B560u, 0x28B568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B568u;
label_28b568:
    // 0x28b568: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x28b568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_28b56c:
    // 0x28b56c: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x28b56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_28b570:
    // 0x28b570: 0xc0a2af0  jal         func_28ABC0
label_28b574:
    if (ctx->pc == 0x28B574u) {
        ctx->pc = 0x28B578u;
        goto label_28b578;
    }
    ctx->pc = 0x28B570u;
    SET_GPR_U32(ctx, 31, 0x28B578u);
    ctx->pc = 0x28ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABC0u, 0x28B570u, 0x28B578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B578u;
label_28b578:
    // 0x28b578: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x28b578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_28b57c:
    // 0x28b57c: 0x10000022  b           . + 4 + (0x22 << 2)
label_28b580:
    if (ctx->pc == 0x28B580u) {
        ctx->pc = 0x28B584u;
        goto label_28b584;
    }
    ctx->pc = 0x28B57Cu;
    {
        const bool branch_taken_0x28b57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b57c) {
            ctx->pc = 0x28B608u;
            goto label_28b608;
        }
    }
    ctx->pc = 0x28B584u;
label_28b584:
    // 0x28b584: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x28b584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_28b588:
    // 0x28b588: 0xc0a2ae8  jal         func_28ABA0
label_28b58c:
    if (ctx->pc == 0x28B58Cu) {
        ctx->pc = 0x28B590u;
        goto label_28b590;
    }
    ctx->pc = 0x28B588u;
    SET_GPR_U32(ctx, 31, 0x28B590u);
    ctx->pc = 0x28ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABA0u, 0x28B588u, 0x28B590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B590u;
label_28b590:
    // 0x28b590: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28b590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b594:
    // 0x28b594: 0xe7a002bc  swc1        $f0, 0x2BC($sp)
    ctx->pc = 0x28b594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 700), bits); }
label_28b598:
    // 0x28b598: 0xc7a102b8  lwc1        $f1, 0x2B8($sp)
    ctx->pc = 0x28b598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b59c:
    // 0x28b59c: 0xc7a002e8  lwc1        $f0, 0x2E8($sp)
    ctx->pc = 0x28b59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b5a0:
    // 0x28b5a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28b5a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b5a4:
    // 0x28b5a4: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_28b5a8:
    if (ctx->pc == 0x28B5A8u) {
        ctx->pc = 0x28B5ACu;
        goto label_28b5ac;
    }
    ctx->pc = 0x28B5A4u;
    {
        const bool branch_taken_0x28b5a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b5a4) {
            ctx->pc = 0x28B5E8u;
            goto label_28b5e8;
        }
    }
    ctx->pc = 0x28B5ACu;
label_28b5ac:
    // 0x28b5ac: 0xc7a102bc  lwc1        $f1, 0x2BC($sp)
    ctx->pc = 0x28b5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b5b0:
    // 0x28b5b0: 0xc7a002e4  lwc1        $f0, 0x2E4($sp)
    ctx->pc = 0x28b5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b5b4:
    // 0x28b5b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28b5b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b5b8:
    // 0x28b5b8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_28b5bc:
    if (ctx->pc == 0x28B5BCu) {
        ctx->pc = 0x28B5C0u;
        goto label_28b5c0;
    }
    ctx->pc = 0x28B5B8u;
    {
        const bool branch_taken_0x28b5b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b5b8) {
            ctx->pc = 0x28B5E8u;
            goto label_28b5e8;
        }
    }
    ctx->pc = 0x28B5C0u;
label_28b5c0:
    // 0x28b5c0: 0xc7a102c0  lwc1        $f1, 0x2C0($sp)
    ctx->pc = 0x28b5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b5c4:
    // 0x28b5c4: 0xc7a002d4  lwc1        $f0, 0x2D4($sp)
    ctx->pc = 0x28b5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b5c8:
    // 0x28b5c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28b5c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b5cc:
    // 0x28b5cc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_28b5d0:
    if (ctx->pc == 0x28B5D0u) {
        ctx->pc = 0x28B5D4u;
        goto label_28b5d4;
    }
    ctx->pc = 0x28B5CCu;
    {
        const bool branch_taken_0x28b5cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b5cc) {
            ctx->pc = 0x28B5E8u;
            goto label_28b5e8;
        }
    }
    ctx->pc = 0x28B5D4u;
label_28b5d4:
    // 0x28b5d4: 0xc7a102c4  lwc1        $f1, 0x2C4($sp)
    ctx->pc = 0x28b5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b5d8:
    // 0x28b5d8: 0xc7a002d0  lwc1        $f0, 0x2D0($sp)
    ctx->pc = 0x28b5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b5dc:
    // 0x28b5dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28b5dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b5e0:
    // 0x28b5e0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_28b5e4:
    if (ctx->pc == 0x28B5E4u) {
        ctx->pc = 0x28B5E8u;
        goto label_28b5e8;
    }
    ctx->pc = 0x28B5E0u;
    {
        const bool branch_taken_0x28b5e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b5e0) {
            ctx->pc = 0x28B5F0u;
            goto label_28b5f0;
        }
    }
    ctx->pc = 0x28B5E8u;
label_28b5e8:
    // 0x28b5e8: 0x26e50002  addiu       $a1, $s7, 0x2
    ctx->pc = 0x28b5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
label_28b5ec:
    // 0x28b5ec: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x28b5ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28b5f0:
    // 0x28b5f0: 0xc7a002bc  lwc1        $f0, 0x2BC($sp)
    ctx->pc = 0x28b5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b5f4:
    // 0x28b5f4: 0xe7a002b8  swc1        $f0, 0x2B8($sp)
    ctx->pc = 0x28b5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
label_28b5f8:
    // 0x28b5f8: 0x27a602b0  addiu       $a2, $sp, 0x2B0
    ctx->pc = 0x28b5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_28b5fc:
    // 0x28b5fc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x28b5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28b600:
    // 0x28b600: 0xc0a2ad8  jal         func_28AB60
label_28b604:
    if (ctx->pc == 0x28B604u) {
        ctx->pc = 0x28B608u;
        goto label_28b608;
    }
    ctx->pc = 0x28B600u;
    SET_GPR_U32(ctx, 31, 0x28B608u);
    ctx->pc = 0x28AB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB60u, 0x28B600u, 0x28B608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B608u;
label_28b608:
    // 0x28b608: 0x27a4023c  addiu       $a0, $sp, 0x23C
    ctx->pc = 0x28b608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 572));
label_28b60c:
    // 0x28b60c: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x28b60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_28b610:
    // 0x28b610: 0xc0a2aac  jal         func_28AAB0
label_28b614:
    if (ctx->pc == 0x28B614u) {
        ctx->pc = 0x28B618u;
        goto label_28b618;
    }
    ctx->pc = 0x28B610u;
    SET_GPR_U32(ctx, 31, 0x28B618u);
    ctx->pc = 0x28AAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAB0u, 0x28B610u, 0x28B618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B618u;
label_28b618:
    // 0x28b618: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x28b618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_28b61c:
    // 0x28b61c: 0x27a7023c  addiu       $a3, $sp, 0x23C
    ctx->pc = 0x28b61cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 572));
label_28b620:
    // 0x28b620: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x28b620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_28b624:
    // 0x28b624: 0xc041998  jal         func_106660
label_28b628:
    if (ctx->pc == 0x28B628u) {
        ctx->pc = 0x28B62Cu;
        goto label_28b62c;
    }
    ctx->pc = 0x28B624u;
    SET_GPR_U32(ctx, 31, 0x28B62Cu);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x28B624u, 0x28B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B62Cu;
label_28b62c:
    // 0x28b62c: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_28b630:
    if (ctx->pc == 0x28B630u) {
        ctx->pc = 0x28B634u;
        goto label_28b634;
    }
    ctx->pc = 0x28B62Cu;
    {
        const bool branch_taken_0x28b62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b62c) {
            ctx->pc = 0x28B584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b584;
        }
    }
    ctx->pc = 0x28B634u;
label_28b634:
    // 0x28b634: 0xc7a002c4  lwc1        $f0, 0x2C4($sp)
    ctx->pc = 0x28b634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b638:
    // 0x28b638: 0xe7a002c0  swc1        $f0, 0x2C0($sp)
    ctx->pc = 0x28b638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_28b63c:
    // 0x28b63c: 0x27a402b4  addiu       $a0, $sp, 0x2B4
    ctx->pc = 0x28b63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
label_28b640:
    // 0x28b640: 0xc0a2ad8  jal         func_28AB60
label_28b644:
    if (ctx->pc == 0x28B644u) {
        ctx->pc = 0x28B648u;
        goto label_28b648;
    }
    ctx->pc = 0x28B640u;
    SET_GPR_U32(ctx, 31, 0x28B648u);
    ctx->pc = 0x28AB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB60u, 0x28B640u, 0x28B648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B648u;
label_28b648:
    // 0x28b648: 0x27a60238  addiu       $a2, $sp, 0x238
    ctx->pc = 0x28b648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
label_28b64c:
    // 0x28b64c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x28b64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28b650:
    // 0x28b650: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x28b650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_28b654:
    // 0x28b654: 0xc0a2aac  jal         func_28AAB0
label_28b658:
    if (ctx->pc == 0x28B658u) {
        ctx->pc = 0x28B65Cu;
        goto label_28b65c;
    }
    ctx->pc = 0x28B654u;
    SET_GPR_U32(ctx, 31, 0x28B65Cu);
    ctx->pc = 0x28AAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAB0u, 0x28B654u, 0x28B65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B65Cu;
label_28b65c:
    // 0x28b65c: 0x27a402b4  addiu       $a0, $sp, 0x2B4
    ctx->pc = 0x28b65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
label_28b660:
    // 0x28b660: 0x27a30238  addiu       $v1, $sp, 0x238
    ctx->pc = 0x28b660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
label_28b664:
    // 0x28b664: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x28b664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28b668:
    // 0x28b668: 0xc041998  jal         func_106660
label_28b66c:
    if (ctx->pc == 0x28B66Cu) {
        ctx->pc = 0x28B670u;
        goto label_28b670;
    }
    ctx->pc = 0x28B668u;
    SET_GPR_U32(ctx, 31, 0x28B670u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x28B668u, 0x28B670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B670u;
label_28b670:
    // 0x28b670: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
label_28b674:
    if (ctx->pc == 0x28B674u) {
        ctx->pc = 0x28B678u;
        goto label_28b678;
    }
    ctx->pc = 0x28B670u;
    {
        const bool branch_taken_0x28b670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b670) {
            ctx->pc = 0x28B538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b538;
        }
    }
    ctx->pc = 0x28B678u;
label_28b678:
    // 0x28b678: 0x16e0000f  bnez        $s7, . + 4 + (0xF << 2)
label_28b67c:
    if (ctx->pc == 0x28B67Cu) {
        ctx->pc = 0x28B680u;
        goto label_28b680;
    }
    ctx->pc = 0x28B678u;
    {
        const bool branch_taken_0x28b678 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b678) {
            ctx->pc = 0x28B6B8u;
            goto label_28b6b8;
        }
    }
    ctx->pc = 0x28B680u;
label_28b680:
    // 0x28b680: 0xafa00250  sw          $zero, 0x250($sp)
    ctx->pc = 0x28b680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
label_28b684:
    // 0x28b684: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x28b684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_28b688:
    // 0x28b688: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28b688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28b68c:
    // 0x28b68c: 0xc0a2a04  jal         func_28A810
label_28b690:
    if (ctx->pc == 0x28B690u) {
        ctx->pc = 0x28B694u;
        goto label_28b694;
    }
    ctx->pc = 0x28B68Cu;
    SET_GPR_U32(ctx, 31, 0x28B694u);
    ctx->pc = 0x28A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A810u, 0x28B68Cu, 0x28B694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B694u;
label_28b694:
    // 0x28b694: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x28b694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_28b698:
    // 0x28b698: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x28b698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_28b69c:
    // 0x28b69c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28b69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28b6a0:
    // 0x28b6a0: 0xc0a2a04  jal         func_28A810
label_28b6a4:
    if (ctx->pc == 0x28B6A4u) {
        ctx->pc = 0x28B6A8u;
        goto label_28b6a8;
    }
    ctx->pc = 0x28B6A0u;
    SET_GPR_U32(ctx, 31, 0x28B6A8u);
    ctx->pc = 0x28A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A810u, 0x28B6A0u, 0x28B6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B6A8u;
label_28b6a8:
    // 0x28b6a8: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x28b6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_28b6ac:
    // 0x28b6ac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x28b6acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28b6b0:
    // 0x28b6b0: 0x10000404  b           . + 4 + (0x404 << 2)
label_28b6b4:
    if (ctx->pc == 0x28B6B4u) {
        ctx->pc = 0x28B6B8u;
        goto label_28b6b8;
    }
    ctx->pc = 0x28B6B0u;
    {
        const bool branch_taken_0x28b6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b6b0) {
            ctx->pc = 0x28C6C4u;
            goto label_28c6c4;
        }
    }
    ctx->pc = 0x28B6B8u;
label_28b6b8:
    // 0x28b6b8: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x28b6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_28b6bc:
    // 0x28b6bc: 0xc0a29f0  jal         func_28A7C0
label_28b6c0:
    if (ctx->pc == 0x28B6C0u) {
        ctx->pc = 0x28B6C4u;
        goto label_28b6c4;
    }
    ctx->pc = 0x28B6BCu;
    SET_GPR_U32(ctx, 31, 0x28B6C4u);
    ctx->pc = 0x28A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7C0u, 0x28B6BCu, 0x28B6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B6C4u;
label_28b6c4:
    // 0x28b6c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28b6c8:
    // 0x28b6c8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x28b6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_28b6cc:
    // 0x28b6cc: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x28b6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_28b6d0:
    // 0x28b6d0: 0xc0a29f0  jal         func_28A7C0
label_28b6d4:
    if (ctx->pc == 0x28B6D4u) {
        ctx->pc = 0x28B6D8u;
        goto label_28b6d8;
    }
    ctx->pc = 0x28B6D0u;
    SET_GPR_U32(ctx, 31, 0x28B6D8u);
    ctx->pc = 0x28A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7C0u, 0x28B6D0u, 0x28B6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B6D8u;
label_28b6d8:
    // 0x28b6d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28b6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b6dc:
    // 0x28b6dc: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x28b6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_28b6e0:
    // 0x28b6e0: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x28b6e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_28b6e4:
    // 0x28b6e4: 0x433018  mult        $a2, $v0, $v1
    ctx->pc = 0x28b6e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_28b6e8:
    // 0x28b6e8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x28b6e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28b6ec:
    // 0x28b6ec: 0x144040  sll         $t0, $s4, 1
    ctx->pc = 0x28b6ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_28b6f0:
    // 0x28b6f0: 0xafa802ac  sw          $t0, 0x2AC($sp)
    ctx->pc = 0x28b6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 8));
label_28b6f4:
    // 0x28b6f4: 0x171040  sll         $v0, $s7, 1
    ctx->pc = 0x28b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
label_28b6f8:
    // 0x28b6f8: 0xafa202a8  sw          $v0, 0x2A8($sp)
    ctx->pc = 0x28b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 2));
label_28b6fc:
    // 0x28b6fc: 0x8fa302ac  lw          $v1, 0x2AC($sp)
    ctx->pc = 0x28b6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
label_28b700:
    // 0x28b700: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x28b700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_28b704:
    // 0x28b704: 0xafa202ac  sw          $v0, 0x2AC($sp)
    ctx->pc = 0x28b704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 2));
label_28b708:
    // 0x28b708: 0x8fa502a8  lw          $a1, 0x2A8($sp)
    ctx->pc = 0x28b708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
label_28b70c:
    // 0x28b70c: 0x24a60002  addiu       $a2, $a1, 0x2
    ctx->pc = 0x28b70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_28b710:
    // 0x28b710: 0xafa602a8  sw          $a2, 0x2A8($sp)
    ctx->pc = 0x28b710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 6));
label_28b714:
    // 0x28b714: 0x8fa202ac  lw          $v0, 0x2AC($sp)
    ctx->pc = 0x28b714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
label_28b718:
    // 0x28b718: 0x8fa502a8  lw          $a1, 0x2A8($sp)
    ctx->pc = 0x28b718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
label_28b71c:
    // 0x28b71c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28b71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b720:
    // 0x28b720: 0x240600f9  addiu       $a2, $zero, 0xF9
    ctx->pc = 0x28b720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
label_28b724:
    // 0x28b724: 0xc0e2dbc  jal         func_38B6F0
label_28b728:
    if (ctx->pc == 0x28B728u) {
        ctx->pc = 0x28B72Cu;
        goto label_28b72c;
    }
    ctx->pc = 0x28B724u;
    SET_GPR_U32(ctx, 31, 0x28B72Cu);
    ctx->pc = 0x38B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B6F0u, 0x28B724u, 0x28B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B72Cu;
label_28b72c:
    // 0x28b72c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28b72cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b730:
    // 0x28b730: 0x8e25005c  lw          $a1, 0x5C($s1)
    ctx->pc = 0x28b730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_28b734:
    // 0x28b734: 0xafa502a4  sw          $a1, 0x2A4($sp)
    ctx->pc = 0x28b734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 5));
label_28b738:
    // 0x28b738: 0x8fa202a4  lw          $v0, 0x2A4($sp)
    ctx->pc = 0x28b738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_28b73c:
    // 0x28b73c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x28b73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_28b740:
    // 0x28b740: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x28b740u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_28b744:
    // 0x28b744: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x28b744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_28b748:
    // 0x28b748: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28b748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28b74c:
    // 0x28b74c: 0x8fa202a4  lw          $v0, 0x2A4($sp)
    ctx->pc = 0x28b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_28b750:
    // 0x28b750: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x28b750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_28b754:
    // 0x28b754: 0xafa202a0  sw          $v0, 0x2A0($sp)
    ctx->pc = 0x28b754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 2));
label_28b758:
    // 0x28b758: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x28b758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_28b75c:
    // 0x28b75c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x28b75cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28b760:
    // 0x28b760: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x28b760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_28b764:
    // 0x28b764: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x28b764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_28b768:
    // 0x28b768: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x28b768u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_28b76c:
    // 0x28b76c: 0xafa2029c  sw          $v0, 0x29C($sp)
    ctx->pc = 0x28b76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
label_28b770:
    // 0x28b770: 0x27a40298  addiu       $a0, $sp, 0x298
    ctx->pc = 0x28b770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
label_28b774:
    // 0x28b774: 0xc780a298  lwc1        $f0, -0x5D68($gp)
    ctx->pc = 0x28b774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b778:
    // 0x28b778: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x28b778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_28b77c:
    // 0x28b77c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x28b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_28b780:
    // 0x28b780: 0x2442d490  addiu       $v0, $v0, -0x2B70
    ctx->pc = 0x28b780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956176));
label_28b784:
    // 0x28b784: 0x27b001c0  addiu       $s0, $sp, 0x1C0
    ctx->pc = 0x28b784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_28b788:
    // 0x28b788: 0xdc520000  ld          $s2, 0x0($v0)
    ctx->pc = 0x28b788u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_28b78c:
    // 0x28b78c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x28b78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b790:
    // 0x28b790: 0xfe120000  sd          $s2, 0x0($s0)
    ctx->pc = 0x28b790u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 18));
label_28b794:
    // 0x28b794: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x28b794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_28b798:
    // 0x28b798: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x28b798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_28b79c:
    // 0x28b79c: 0x24a5d4a0  addiu       $a1, $a1, -0x2B60
    ctx->pc = 0x28b79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956192));
label_28b7a0:
    // 0x28b7a0: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x28b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_28b7a4:
    // 0x28b7a4: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x28b7a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_28b7a8:
    // 0x28b7a8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x28b7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b7ac:
    // 0x28b7ac: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x28b7acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
label_28b7b0:
    // 0x28b7b0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x28b7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_28b7b4:
    // 0x28b7b4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x28b7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_28b7b8:
    // 0x28b7b8: 0x24a5d4b0  addiu       $a1, $a1, -0x2B50
    ctx->pc = 0x28b7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956208));
label_28b7bc:
    // 0x28b7bc: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x28b7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_28b7c0:
    // 0x28b7c0: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x28b7c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_28b7c4:
    // 0x28b7c4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x28b7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b7c8:
    // 0x28b7c8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x28b7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_28b7cc:
    // 0x28b7cc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x28b7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_28b7d0:
    // 0x28b7d0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x28b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_28b7d4:
    // 0x28b7d4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x28b7d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b7d8:
    // 0x28b7d8: 0x8fa20310  lw          $v0, 0x310($sp)
    ctx->pc = 0x28b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_28b7dc:
    // 0x28b7dc: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x28b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_28b7e0:
    // 0x28b7e0: 0xafa20294  sw          $v0, 0x294($sp)
    ctx->pc = 0x28b7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 2));
label_28b7e4:
    // 0x28b7e4: 0x8fa20310  lw          $v0, 0x310($sp)
    ctx->pc = 0x28b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_28b7e8:
    // 0x28b7e8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x28b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_28b7ec:
    // 0x28b7ec: 0xafa20290  sw          $v0, 0x290($sp)
    ctx->pc = 0x28b7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
label_28b7f0:
    // 0x28b7f0: 0x8f84bc24  lw          $a0, -0x43DC($gp)
    ctx->pc = 0x28b7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949924)));
label_28b7f4:
    // 0x28b7f4: 0x8fa50294  lw          $a1, 0x294($sp)
    ctx->pc = 0x28b7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
label_28b7f8:
    // 0x28b7f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28b7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28b7fc:
    // 0x28b7fc: 0xc0a69b0  jal         func_29A6C0
label_28b800:
    if (ctx->pc == 0x28B800u) {
        ctx->pc = 0x28B804u;
        goto label_28b804;
    }
    ctx->pc = 0x28B7FCu;
    SET_GPR_U32(ctx, 31, 0x28B804u);
    ctx->pc = 0x29A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6C0u, 0x28B7FCu, 0x28B804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B804u;
label_28b804:
    // 0x28b804: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28b804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b808:
    // 0x28b808: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28b808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28b80c:
    // 0x28b80c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x28b80cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_28b810:
    // 0x28b810: 0x320f809  jalr        $t9
label_28b814:
    if (ctx->pc == 0x28B814u) {
        ctx->pc = 0x28B818u;
        goto label_28b818;
    }
    ctx->pc = 0x28B810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28B818u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B810u, 0x28B818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B818u;
label_28b818:
    // 0x28b818: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28b818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b81c:
    // 0x28b81c: 0xc0e3736  jal         func_38DCD8
label_28b820:
    if (ctx->pc == 0x28B820u) {
        ctx->pc = 0x28B824u;
        goto label_28b824;
    }
    ctx->pc = 0x28B81Cu;
    SET_GPR_U32(ctx, 31, 0x28B824u);
    ctx->pc = 0x38DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DCD8u, 0x28B81Cu, 0x28B824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B824u;
label_28b824:
    // 0x28b824: 0xafa2028c  sw          $v0, 0x28C($sp)
    ctx->pc = 0x28b824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 2));
label_28b828:
    // 0x28b828: 0x8f84bc24  lw          $a0, -0x43DC($gp)
    ctx->pc = 0x28b828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949924)));
label_28b82c:
    // 0x28b82c: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x28b82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_28b830:
    // 0x28b830: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28b830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28b834:
    // 0x28b834: 0xc0a69b0  jal         func_29A6C0
label_28b838:
    if (ctx->pc == 0x28B838u) {
        ctx->pc = 0x28B83Cu;
        goto label_28b83c;
    }
    ctx->pc = 0x28B834u;
    SET_GPR_U32(ctx, 31, 0x28B83Cu);
    ctx->pc = 0x29A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6C0u, 0x28B834u, 0x28B83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B83Cu;
label_28b83c:
    // 0x28b83c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28b83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b840:
    // 0x28b840: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28b840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28b844:
    // 0x28b844: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x28b844u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_28b848:
    // 0x28b848: 0x320f809  jalr        $t9
label_28b84c:
    if (ctx->pc == 0x28B84Cu) {
        ctx->pc = 0x28B850u;
        goto label_28b850;
    }
    ctx->pc = 0x28B848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28B850u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B848u, 0x28B850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B850u;
label_28b850:
    // 0x28b850: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28b850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b854:
    // 0x28b854: 0xc0e3736  jal         func_38DCD8
label_28b858:
    if (ctx->pc == 0x28B858u) {
        ctx->pc = 0x28B85Cu;
        goto label_28b85c;
    }
    ctx->pc = 0x28B854u;
    SET_GPR_U32(ctx, 31, 0x28B85Cu);
    ctx->pc = 0x38DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DCD8u, 0x28B854u, 0x28B85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B85Cu;
label_28b85c:
    // 0x28b85c: 0xafa20288  sw          $v0, 0x288($sp)
    ctx->pc = 0x28b85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 2));
label_28b860:
    // 0x28b860: 0x8f84bc24  lw          $a0, -0x43DC($gp)
    ctx->pc = 0x28b860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949924)));
label_28b864:
    // 0x28b864: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x28b864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_28b868:
    // 0x28b868: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x28b868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28b86c:
    // 0x28b86c: 0xc0a69b0  jal         func_29A6C0
label_28b870:
    if (ctx->pc == 0x28B870u) {
        ctx->pc = 0x28B874u;
        goto label_28b874;
    }
    ctx->pc = 0x28B86Cu;
    SET_GPR_U32(ctx, 31, 0x28B874u);
    ctx->pc = 0x29A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6C0u, 0x28B86Cu, 0x28B874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B874u;
label_28b874:
    // 0x28b874: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28b874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b878:
    // 0x28b878: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28b878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28b87c:
    // 0x28b87c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x28b87cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_28b880:
    // 0x28b880: 0x320f809  jalr        $t9
label_28b884:
    if (ctx->pc == 0x28B884u) {
        ctx->pc = 0x28B888u;
        goto label_28b888;
    }
    ctx->pc = 0x28B880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28B888u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B880u, 0x28B888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B888u;
label_28b888:
    // 0x28b888: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28b888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b88c:
    // 0x28b88c: 0xc0e3736  jal         func_38DCD8
label_28b890:
    if (ctx->pc == 0x28B890u) {
        ctx->pc = 0x28B894u;
        goto label_28b894;
    }
    ctx->pc = 0x28B88Cu;
    SET_GPR_U32(ctx, 31, 0x28B894u);
    ctx->pc = 0x38DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DCD8u, 0x28B88Cu, 0x28B894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B894u;
label_28b894:
    // 0x28b894: 0xafa20284  sw          $v0, 0x284($sp)
    ctx->pc = 0x28b894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 2));
label_28b898:
    // 0x28b898: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28b898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b89c:
    // 0x28b89c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28b89cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b8a0:
    // 0x28b8a0: 0x27a40234  addiu       $a0, $sp, 0x234
    ctx->pc = 0x28b8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 564));
label_28b8a4:
    // 0x28b8a4: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x28b8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_28b8a8:
    // 0x28b8a8: 0xc0a2b00  jal         func_28AC00
label_28b8ac:
    if (ctx->pc == 0x28B8ACu) {
        ctx->pc = 0x28B8B0u;
        goto label_28b8b0;
    }
    ctx->pc = 0x28B8A8u;
    SET_GPR_U32(ctx, 31, 0x28B8B0u);
    ctx->pc = 0x28AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AC00u, 0x28B8A8u, 0x28B8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B8B0u;
label_28b8b0:
    // 0x28b8b0: 0x27a402b4  addiu       $a0, $sp, 0x2B4
    ctx->pc = 0x28b8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
label_28b8b4:
    // 0x28b8b4: 0x27a50234  addiu       $a1, $sp, 0x234
    ctx->pc = 0x28b8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 564));
label_28b8b8:
    // 0x28b8b8: 0xc0a2af0  jal         func_28ABC0
label_28b8bc:
    if (ctx->pc == 0x28B8BCu) {
        ctx->pc = 0x28B8C0u;
        goto label_28b8c0;
    }
    ctx->pc = 0x28B8B8u;
    SET_GPR_U32(ctx, 31, 0x28B8C0u);
    ctx->pc = 0x28ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABC0u, 0x28B8B8u, 0x28B8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B8C0u;
label_28b8c0:
    // 0x28b8c0: 0xc7a002fc  lwc1        $f0, 0x2FC($sp)
    ctx->pc = 0x28b8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b8c4:
    // 0x28b8c4: 0xe7a002c0  swc1        $f0, 0x2C0($sp)
    ctx->pc = 0x28b8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_28b8c8:
    // 0x28b8c8: 0xafa00280  sw          $zero, 0x280($sp)
    ctx->pc = 0x28b8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 0));
label_28b8cc:
    // 0x28b8cc: 0x1000016c  b           . + 4 + (0x16C << 2)
label_28b8d0:
    if (ctx->pc == 0x28B8D0u) {
        ctx->pc = 0x28B8D4u;
        goto label_28b8d4;
    }
    ctx->pc = 0x28B8CCu;
    {
        const bool branch_taken_0x28b8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b8cc) {
            ctx->pc = 0x28BE80u;
            goto label_28be80;
        }
    }
    ctx->pc = 0x28B8D4u;
label_28b8d4:
    // 0x28b8d4: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x28b8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_28b8d8:
    // 0x28b8d8: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x28b8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_28b8dc:
    // 0x28b8dc: 0xc0a2b00  jal         func_28AC00
label_28b8e0:
    if (ctx->pc == 0x28B8E0u) {
        ctx->pc = 0x28B8E4u;
        goto label_28b8e4;
    }
    ctx->pc = 0x28B8DCu;
    SET_GPR_U32(ctx, 31, 0x28B8E4u);
    ctx->pc = 0x28AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AC00u, 0x28B8DCu, 0x28B8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B8E4u;
label_28b8e4:
    // 0x28b8e4: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x28b8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_28b8e8:
    // 0x28b8e8: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x28b8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_28b8ec:
    // 0x28b8ec: 0xc0a2af0  jal         func_28ABC0
label_28b8f0:
    if (ctx->pc == 0x28B8F0u) {
        ctx->pc = 0x28B8F4u;
        goto label_28b8f4;
    }
    ctx->pc = 0x28B8ECu;
    SET_GPR_U32(ctx, 31, 0x28B8F4u);
    ctx->pc = 0x28ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABC0u, 0x28B8ECu, 0x28B8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B8F4u;
label_28b8f4:
    // 0x28b8f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28b8f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b8f8:
    // 0x28b8f8: 0x0  nop
    ctx->pc = 0x28b8f8u;
    // NOP
label_28b8fc:
    // 0x28b8fc: 0xe7a002b8  swc1        $f0, 0x2B8($sp)
    ctx->pc = 0x28b8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
label_28b900:
    // 0x28b900: 0x27a4022c  addiu       $a0, $sp, 0x22C
    ctx->pc = 0x28b900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
label_28b904:
    // 0x28b904: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x28b904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_28b908:
    // 0x28b908: 0xc0a2aac  jal         func_28AAB0
label_28b90c:
    if (ctx->pc == 0x28B90Cu) {
        ctx->pc = 0x28B910u;
        goto label_28b910;
    }
    ctx->pc = 0x28B908u;
    SET_GPR_U32(ctx, 31, 0x28B910u);
    ctx->pc = 0x28AAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAB0u, 0x28B908u, 0x28B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B910u;
label_28b910:
    // 0x28b910: 0x27a402b4  addiu       $a0, $sp, 0x2B4
    ctx->pc = 0x28b910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
label_28b914:
    // 0x28b914: 0x27a5022c  addiu       $a1, $sp, 0x22C
    ctx->pc = 0x28b914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
label_28b918:
    // 0x28b918: 0xc041998  jal         func_106660
label_28b91c:
    if (ctx->pc == 0x28B91Cu) {
        ctx->pc = 0x28B920u;
        goto label_28b920;
    }
    ctx->pc = 0x28B918u;
    SET_GPR_U32(ctx, 31, 0x28B920u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x28B918u, 0x28B920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B920u;
label_28b920:
    // 0x28b920: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_28b924:
    if (ctx->pc == 0x28B924u) {
        ctx->pc = 0x28B928u;
        goto label_28b928;
    }
    ctx->pc = 0x28B920u;
    {
        const bool branch_taken_0x28b920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b920) {
            ctx->pc = 0x28B950u;
            goto label_28b950;
        }
    }
    ctx->pc = 0x28B928u;
label_28b928:
    // 0x28b928: 0x27a40228  addiu       $a0, $sp, 0x228
    ctx->pc = 0x28b928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
label_28b92c:
    // 0x28b92c: 0x27a502b4  addiu       $a1, $sp, 0x2B4
    ctx->pc = 0x28b92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
label_28b930:
    // 0x28b930: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b934:
    // 0x28b934: 0xc0a29cc  jal         func_28A730
label_28b938:
    if (ctx->pc == 0x28B938u) {
        ctx->pc = 0x28B93Cu;
        goto label_28b93c;
    }
    ctx->pc = 0x28B934u;
    SET_GPR_U32(ctx, 31, 0x28B93Cu);
    ctx->pc = 0x28A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A730u, 0x28B934u, 0x28B93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B93Cu;
label_28b93c:
    // 0x28b93c: 0x27a40228  addiu       $a0, $sp, 0x228
    ctx->pc = 0x28b93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
label_28b940:
    // 0x28b940: 0xc0a2ae8  jal         func_28ABA0
label_28b944:
    if (ctx->pc == 0x28B944u) {
        ctx->pc = 0x28B948u;
        goto label_28b948;
    }
    ctx->pc = 0x28B940u;
    SET_GPR_U32(ctx, 31, 0x28B948u);
    ctx->pc = 0x28ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABA0u, 0x28B940u, 0x28B948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B948u;
label_28b948:
    // 0x28b948: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28b948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b94c:
    // 0x28b94c: 0xe7a002c4  swc1        $f0, 0x2C4($sp)
    ctx->pc = 0x28b94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
label_28b950:
    // 0x28b950: 0xafa0027c  sw          $zero, 0x27C($sp)
    ctx->pc = 0x28b950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 0));
label_28b954:
    // 0x28b954: 0x1000013c  b           . + 4 + (0x13C << 2)
label_28b958:
    if (ctx->pc == 0x28B958u) {
        ctx->pc = 0x28B95Cu;
        goto label_28b95c;
    }
    ctx->pc = 0x28B954u;
    {
        const bool branch_taken_0x28b954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b954) {
            ctx->pc = 0x28BE48u;
            goto label_28be48;
        }
    }
    ctx->pc = 0x28B95Cu;
label_28b95c:
    // 0x28b95c: 0x27a40224  addiu       $a0, $sp, 0x224
    ctx->pc = 0x28b95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 548));
label_28b960:
    // 0x28b960: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x28b960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_28b964:
    // 0x28b964: 0xc0a2aac  jal         func_28AAB0
label_28b968:
    if (ctx->pc == 0x28B968u) {
        ctx->pc = 0x28B96Cu;
        goto label_28b96c;
    }
    ctx->pc = 0x28B964u;
    SET_GPR_U32(ctx, 31, 0x28B96Cu);
    ctx->pc = 0x28AAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAB0u, 0x28B964u, 0x28B96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B96Cu;
label_28b96c:
    // 0x28b96c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x28b96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_28b970:
    // 0x28b970: 0x27a50224  addiu       $a1, $sp, 0x224
    ctx->pc = 0x28b970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 548));
label_28b974:
    // 0x28b974: 0xc041998  jal         func_106660
label_28b978:
    if (ctx->pc == 0x28B978u) {
        ctx->pc = 0x28B97Cu;
        goto label_28b97c;
    }
    ctx->pc = 0x28B974u;
    SET_GPR_U32(ctx, 31, 0x28B97Cu);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x28B974u, 0x28B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B97Cu;
label_28b97c:
    // 0x28b97c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_28b980:
    if (ctx->pc == 0x28B980u) {
        ctx->pc = 0x28B984u;
        goto label_28b984;
    }
    ctx->pc = 0x28B97Cu;
    {
        const bool branch_taken_0x28b97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b97c) {
            ctx->pc = 0x28B9ACu;
            goto label_28b9ac;
        }
    }
    ctx->pc = 0x28B984u;
label_28b984:
    // 0x28b984: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x28b984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_28b988:
    // 0x28b988: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x28b988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_28b98c:
    // 0x28b98c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b98cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b990:
    // 0x28b990: 0xc0a29cc  jal         func_28A730
label_28b994:
    if (ctx->pc == 0x28B994u) {
        ctx->pc = 0x28B998u;
        goto label_28b998;
    }
    ctx->pc = 0x28B990u;
    SET_GPR_U32(ctx, 31, 0x28B998u);
    ctx->pc = 0x28A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A730u, 0x28B990u, 0x28B998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B998u;
label_28b998:
    // 0x28b998: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x28b998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_28b99c:
    // 0x28b99c: 0xc0a2ae8  jal         func_28ABA0
label_28b9a0:
    if (ctx->pc == 0x28B9A0u) {
        ctx->pc = 0x28B9A4u;
        goto label_28b9a4;
    }
    ctx->pc = 0x28B99Cu;
    SET_GPR_U32(ctx, 31, 0x28B9A4u);
    ctx->pc = 0x28ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABA0u, 0x28B99Cu, 0x28B9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B9A4u;
label_28b9a4:
    // 0x28b9a4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28b9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b9a8:
    // 0x28b9a8: 0xe7a002bc  swc1        $f0, 0x2BC($sp)
    ctx->pc = 0x28b9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 700), bits); }
label_28b9ac:
    // 0x28b9ac: 0x3c0543a0  lui         $a1, 0x43A0
    ctx->pc = 0x28b9acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17312 << 16));
label_28b9b0:
    // 0x28b9b0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x28b9b0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28b9b4:
    // 0x28b9b4: 0xc7a002f4  lwc1        $f0, 0x2F4($sp)
    ctx->pc = 0x28b9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b9b8:
    // 0x28b9b8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x28b9b8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_28b9bc:
    // 0x28b9bc: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x28b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_28b9c0:
    // 0x28b9c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28b9c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b9c4:
    // 0x28b9c4: 0x0  nop
    ctx->pc = 0x28b9c4u;
    // NOP
label_28b9c8:
    // 0x28b9c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28b9c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_28b9cc:
    // 0x28b9cc: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x28b9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_28b9d0:
    // 0x28b9d0: 0xc7a102c0  lwc1        $f1, 0x2C0($sp)
    ctx->pc = 0x28b9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b9d4:
    // 0x28b9d4: 0xc7a002fc  lwc1        $f0, 0x2FC($sp)
    ctx->pc = 0x28b9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b9d8:
    // 0x28b9d8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28b9d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_28b9dc:
    // 0x28b9dc: 0xc7a00278  lwc1        $f0, 0x278($sp)
    ctx->pc = 0x28b9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b9e0:
    // 0x28b9e0: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x28b9e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28b9e4:
    // 0x28b9e4: 0xc7a102f8  lwc1        $f1, 0x2F8($sp)
    ctx->pc = 0x28b9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b9e8:
    // 0x28b9e8: 0xc7a002fc  lwc1        $f0, 0x2FC($sp)
    ctx->pc = 0x28b9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b9ec:
    // 0x28b9ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28b9ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_28b9f0:
    // 0x28b9f0: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x28b9f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_28b9f4:
    // 0x28b9f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_28b9f8:
    // 0x28b9f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28b9f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28b9fc:
    // 0x28b9fc: 0xc7a00278  lwc1        $f0, 0x278($sp)
    ctx->pc = 0x28b9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ba00:
    // 0x28ba00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28ba00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_28ba04:
    // 0x28ba04: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28ba04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_28ba08:
    // 0x28ba08: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x28ba08u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_28ba0c:
    // 0x28ba0c: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x28ba0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_28ba10:
    // 0x28ba10: 0xc7a002b8  lwc1        $f0, 0x2B8($sp)
    ctx->pc = 0x28ba10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ba14:
    // 0x28ba14: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x28ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_28ba18:
    // 0x28ba18: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x28ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_28ba1c:
    // 0x28ba1c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x28ba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28ba20:
    // 0x28ba20: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x28ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_28ba24:
    // 0x28ba24: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28ba24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_28ba28:
    // 0x28ba28: 0xc7a002c0  lwc1        $f0, 0x2C0($sp)
    ctx->pc = 0x28ba28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ba2c:
    // 0x28ba2c: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x28ba2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_28ba30:
    // 0x28ba30: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x28ba30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_28ba34:
    // 0x28ba34: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x28ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_28ba38:
    // 0x28ba38: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x28ba38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_28ba3c:
    // 0x28ba3c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x28ba3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_28ba40:
    // 0x28ba40: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x28ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_28ba44:
    // 0x28ba44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ba44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ba48:
    // 0x28ba48: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x28ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_28ba4c:
    // 0x28ba4c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x28ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_28ba50:
    // 0x28ba50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28ba54:
    // 0x28ba54: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x28ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_28ba58:
    // 0x28ba58: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x28ba58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_28ba5c:
    // 0x28ba5c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x28ba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_28ba60:
    // 0x28ba60: 0x8fa2029c  lw          $v0, 0x29C($sp)
    ctx->pc = 0x28ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_28ba64:
    // 0x28ba64: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x28ba64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28ba68:
    // 0x28ba68: 0x27a50298  addiu       $a1, $sp, 0x298
    ctx->pc = 0x28ba68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
label_28ba6c:
    // 0x28ba6c: 0xc052608  jal         func_149820
label_28ba70:
    if (ctx->pc == 0x28BA70u) {
        ctx->pc = 0x28BA74u;
        goto label_28ba74;
    }
    ctx->pc = 0x28BA6Cu;
    SET_GPR_U32(ctx, 31, 0x28BA74u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x28BA6Cu, 0x28BA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA74u;
label_28ba74:
    // 0x28ba74: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x28ba74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_28ba78:
    // 0x28ba78: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x28ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_28ba7c:
    // 0x28ba7c: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x28ba7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_28ba80:
    // 0x28ba80: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x28ba80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_28ba84:
    // 0x28ba84: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x28ba84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_28ba88:
    // 0x28ba88: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x28ba88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_28ba8c:
    // 0x28ba8c: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x28ba8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_28ba90:
    // 0x28ba90: 0xc041d58  jal         func_107560
label_28ba94:
    if (ctx->pc == 0x28BA94u) {
        ctx->pc = 0x28BA98u;
        goto label_28ba98;
    }
    ctx->pc = 0x28BA90u;
    SET_GPR_U32(ctx, 31, 0x28BA98u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x28BA90u, 0x28BA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA98u;
label_28ba98:
    // 0x28ba98: 0x3c0542a0  lui         $a1, 0x42A0
    ctx->pc = 0x28ba98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17056 << 16));
label_28ba9c:
    // 0x28ba9c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x28ba9cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28baa0:
    // 0x28baa0: 0xc7a002b8  lwc1        $f0, 0x2B8($sp)
    ctx->pc = 0x28baa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28baa4:
    // 0x28baa4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x28baa4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_28baa8:
    // 0x28baa8: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x28baa8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_28baac:
    // 0x28baac: 0x2c61021  addu        $v0, $s6, $a2
    ctx->pc = 0x28baacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
label_28bab0:
    // 0x28bab0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28bab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_28bab4:
    // 0x28bab4: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x28bab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bab8:
    // 0x28bab8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x28bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_28babc:
    // 0x28babc: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x28babcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_28bac0:
    // 0x28bac0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28bac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28bac4:
    // 0x28bac4: 0xc7a002b8  lwc1        $f0, 0x2B8($sp)
    ctx->pc = 0x28bac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bac8:
    // 0x28bac8: 0x2902821  addu        $a1, $s4, $s0
    ctx->pc = 0x28bac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_28bacc:
    // 0x28bacc: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x28baccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_28bad0:
    // 0x28bad0: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x28bad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_28bad4:
    // 0x28bad4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x28bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_28bad8:
    // 0x28bad8: 0x2623821  addu        $a3, $s3, $v0
    ctx->pc = 0x28bad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_28badc:
    // 0x28badc: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x28badcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_28bae0:
    // 0x28bae0: 0xc7a002c0  lwc1        $f0, 0x2C0($sp)
    ctx->pc = 0x28bae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bae4:
    // 0x28bae4: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x28bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_28bae8:
    // 0x28bae8: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x28bae8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_28baec:
    // 0x28baec: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x28baecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_28baf0:
    // 0x28baf0: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x28baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_28baf4:
    // 0x28baf4: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x28baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_28baf8:
    // 0x28baf8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28baf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28bafc:
    // 0x28bafc: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x28bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
label_28bb00:
    // 0x28bb00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28bb00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28bb04:
    // 0x28bb04: 0x290f021  addu        $fp, $s4, $s0
    ctx->pc = 0x28bb04u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_28bb08:
    // 0x28bb08: 0x1e2040  sll         $a0, $fp, 1
    ctx->pc = 0x28bb08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_28bb0c:
    // 0x28bb0c: 0x9e2821  addu        $a1, $a0, $fp
    ctx->pc = 0x28bb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
label_28bb10:
    // 0x28bb10: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x28bb10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_28bb14:
    // 0x28bb14: 0x2653021  addu        $a2, $s3, $a1
    ctx->pc = 0x28bb14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_28bb18:
    // 0x28bb18: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x28bb18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_28bb1c:
    // 0x28bb1c: 0x2902021  addu        $a0, $s4, $s0
    ctx->pc = 0x28bb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_28bb20:
    // 0x28bb20: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x28bb20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_28bb24:
    // 0x28bb24: 0x8fa2029c  lw          $v0, 0x29C($sp)
    ctx->pc = 0x28bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_28bb28:
    // 0x28bb28: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x28bb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_28bb2c:
    // 0x28bb2c: 0x27a50298  addiu       $a1, $sp, 0x298
    ctx->pc = 0x28bb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
label_28bb30:
    // 0x28bb30: 0xc052608  jal         func_149820
label_28bb34:
    if (ctx->pc == 0x28BB34u) {
        ctx->pc = 0x28BB38u;
        goto label_28bb38;
    }
    ctx->pc = 0x28BB30u;
    SET_GPR_U32(ctx, 31, 0x28BB38u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x28BB30u, 0x28BB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BB38u;
label_28bb38:
    // 0x28bb38: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x28bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_28bb3c:
    // 0x28bb3c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x28bb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_28bb40:
    // 0x28bb40: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x28bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_28bb44:
    // 0x28bb44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28bb48:
    // 0x28bb48: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x28bb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_28bb4c:
    // 0x28bb4c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x28bb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28bb50:
    // 0x28bb50: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x28bb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_28bb54:
    // 0x28bb54: 0xc041d58  jal         func_107560
label_28bb58:
    if (ctx->pc == 0x28BB58u) {
        ctx->pc = 0x28BB5Cu;
        goto label_28bb5c;
    }
    ctx->pc = 0x28BB54u;
    SET_GPR_U32(ctx, 31, 0x28BB5Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x28BB54u, 0x28BB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BB5Cu;
label_28bb5c:
    // 0x28bb5c: 0x3c0442a0  lui         $a0, 0x42A0
    ctx->pc = 0x28bb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17056 << 16));
label_28bb60:
    // 0x28bb60: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28bb60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28bb64:
    // 0x28bb64: 0xc7a002b8  lwc1        $f0, 0x2B8($sp)
    ctx->pc = 0x28bb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bb68:
    // 0x28bb68: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x28bb68u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_28bb6c:
    // 0x28bb6c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x28bb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_28bb70:
    // 0x28bb70: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28bb70u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28bb74:
    // 0x28bb74: 0x0  nop
    ctx->pc = 0x28bb74u;
    // NOP
label_28bb78:
    // 0x28bb78: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28bb78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_28bb7c:
    // 0x28bb7c: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x28bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_28bb80:
    // 0x28bb80: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x28bb80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_28bb84:
    // 0x28bb84: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x28bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_28bb88:
    // 0x28bb88: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28bb88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_28bb8c:
    // 0x28bb8c: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x28bb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bb90:
    // 0x28bb90: 0x2902021  addu        $a0, $s4, $s0
    ctx->pc = 0x28bb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_28bb94:
    // 0x28bb94: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x28bb94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_28bb98:
    // 0x28bb98: 0x2c53021  addu        $a2, $s6, $a1
    ctx->pc = 0x28bb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_28bb9c:
    // 0x28bb9c: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x28bb9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_28bba0:
    // 0x28bba0: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x28bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_28bba4:
    // 0x28bba4: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x28bba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_28bba8:
    // 0x28bba8: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x28bba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_28bbac:
    // 0x28bbac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28bbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28bbb0:
    // 0x28bbb0: 0xc0a29f0  jal         func_28A7C0
label_28bbb4:
    if (ctx->pc == 0x28BBB4u) {
        ctx->pc = 0x28BBB8u;
        goto label_28bbb8;
    }
    ctx->pc = 0x28BBB0u;
    SET_GPR_U32(ctx, 31, 0x28BBB8u);
    ctx->pc = 0x28A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7C0u, 0x28BBB0u, 0x28BBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BBB8u;
label_28bbb8:
    // 0x28bbb8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28bbb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bbbc:
    // 0x28bbbc: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x28bbbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_28bbc0:
    // 0x28bbc0: 0x46082b  sltu        $at, $v0, $a2
    ctx->pc = 0x28bbc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_28bbc4:
    // 0x28bbc4: 0x10200099  beqz        $at, . + 4 + (0x99 << 2)
label_28bbc8:
    if (ctx->pc == 0x28BBC8u) {
        ctx->pc = 0x28BBCCu;
        goto label_28bbcc;
    }
    ctx->pc = 0x28BBC4u;
    {
        const bool branch_taken_0x28bbc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bbc4) {
            ctx->pc = 0x28BE2Cu;
            goto label_28be2c;
        }
    }
    ctx->pc = 0x28BBCCu;
label_28bbcc:
    // 0x28bbcc: 0x8fa2027c  lw          $v0, 0x27C($sp)
    ctx->pc = 0x28bbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
label_28bbd0:
    // 0x28bbd0: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x28bbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_28bbd4:
    // 0x28bbd4: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x28bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_28bbd8:
    // 0x28bbd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28bbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bbdc:
    // 0x28bbdc: 0xc0a29f0  jal         func_28A7C0
label_28bbe0:
    if (ctx->pc == 0x28BBE0u) {
        ctx->pc = 0x28BBE4u;
        goto label_28bbe4;
    }
    ctx->pc = 0x28BBDCu;
    SET_GPR_U32(ctx, 31, 0x28BBE4u);
    ctx->pc = 0x28A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7C0u, 0x28BBDCu, 0x28BBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BBE4u;
label_28bbe4:
    // 0x28bbe4: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x28bbe4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_28bbe8:
    // 0x28bbe8: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x28bbe8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_28bbec:
    // 0x28bbec: 0x1020008f  beqz        $at, . + 4 + (0x8F << 2)
label_28bbf0:
    if (ctx->pc == 0x28BBF0u) {
        ctx->pc = 0x28BBF4u;
        goto label_28bbf4;
    }
    ctx->pc = 0x28BBECu;
    {
        const bool branch_taken_0x28bbec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bbec) {
            ctx->pc = 0x28BE2Cu;
            goto label_28be2c;
        }
    }
    ctx->pc = 0x28BBF4u;
label_28bbf4:
    // 0x28bbf4: 0xc7a102b8  lwc1        $f1, 0x2B8($sp)
    ctx->pc = 0x28bbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28bbf8:
    // 0x28bbf8: 0xc7a002e8  lwc1        $f0, 0x2E8($sp)
    ctx->pc = 0x28bbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bbfc:
    // 0x28bbfc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28bbfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28bc00:
    // 0x28bc00: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_28bc04:
    if (ctx->pc == 0x28BC04u) {
        ctx->pc = 0x28BC08u;
        goto label_28bc08;
    }
    ctx->pc = 0x28BC00u;
    {
        const bool branch_taken_0x28bc00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28bc00) {
            ctx->pc = 0x28BC44u;
            goto label_28bc44;
        }
    }
    ctx->pc = 0x28BC08u;
label_28bc08:
    // 0x28bc08: 0xc7a102bc  lwc1        $f1, 0x2BC($sp)
    ctx->pc = 0x28bc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28bc0c:
    // 0x28bc0c: 0xc7a002e4  lwc1        $f0, 0x2E4($sp)
    ctx->pc = 0x28bc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bc10:
    // 0x28bc10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28bc10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28bc14:
    // 0x28bc14: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_28bc18:
    if (ctx->pc == 0x28BC18u) {
        ctx->pc = 0x28BC1Cu;
        goto label_28bc1c;
    }
    ctx->pc = 0x28BC14u;
    {
        const bool branch_taken_0x28bc14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28bc14) {
            ctx->pc = 0x28BC44u;
            goto label_28bc44;
        }
    }
    ctx->pc = 0x28BC1Cu;
label_28bc1c:
    // 0x28bc1c: 0xc7a102c0  lwc1        $f1, 0x2C0($sp)
    ctx->pc = 0x28bc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28bc20:
    // 0x28bc20: 0xc7a002d4  lwc1        $f0, 0x2D4($sp)
    ctx->pc = 0x28bc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bc24:
    // 0x28bc24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28bc24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28bc28:
    // 0x28bc28: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_28bc2c:
    if (ctx->pc == 0x28BC2Cu) {
        ctx->pc = 0x28BC30u;
        goto label_28bc30;
    }
    ctx->pc = 0x28BC28u;
    {
        const bool branch_taken_0x28bc28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28bc28) {
            ctx->pc = 0x28BC44u;
            goto label_28bc44;
        }
    }
    ctx->pc = 0x28BC30u;
label_28bc30:
    // 0x28bc30: 0xc7a102c4  lwc1        $f1, 0x2C4($sp)
    ctx->pc = 0x28bc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28bc34:
    // 0x28bc34: 0xc7a002d0  lwc1        $f0, 0x2D0($sp)
    ctx->pc = 0x28bc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bc38:
    // 0x28bc38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28bc38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28bc3c:
    // 0x28bc3c: 0x4501007b  bc1t        . + 4 + (0x7B << 2)
label_28bc40:
    if (ctx->pc == 0x28BC40u) {
        ctx->pc = 0x28BC44u;
        goto label_28bc44;
    }
    ctx->pc = 0x28BC3Cu;
    {
        const bool branch_taken_0x28bc3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28bc3c) {
            ctx->pc = 0x28BE2Cu;
            goto label_28be2c;
        }
    }
    ctx->pc = 0x28BC44u;
label_28bc44:
    // 0x28bc44: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x28bc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_28bc48:
    // 0x28bc48: 0xc0a29f0  jal         func_28A7C0
label_28bc4c:
    if (ctx->pc == 0x28BC4Cu) {
        ctx->pc = 0x28BC50u;
        goto label_28bc50;
    }
    ctx->pc = 0x28BC48u;
    SET_GPR_U32(ctx, 31, 0x28BC50u);
    ctx->pc = 0x28A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7C0u, 0x28BC48u, 0x28BC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC50u;
label_28bc50:
    // 0x28bc50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28bc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bc54:
    // 0x28bc54: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x28bc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_28bc58:
    // 0x28bc58: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x28bc58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_28bc5c:
    // 0x28bc5c: 0x30c8ffff  andi        $t0, $a2, 0xFFFF
    ctx->pc = 0x28bc5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_28bc60:
    // 0x28bc60: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x28bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_28bc64:
    // 0x28bc64: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x28bc64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_28bc68:
    // 0x28bc68: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x28bc68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_28bc6c:
    // 0x28bc6c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x28bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28bc70:
    // 0x28bc70: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x28bc70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_28bc74:
    // 0x28bc74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28bc78:
    // 0x28bc78: 0xc0e3356  jal         func_38CD58
label_28bc7c:
    if (ctx->pc == 0x28BC7Cu) {
        ctx->pc = 0x28BC80u;
        goto label_28bc80;
    }
    ctx->pc = 0x28BC78u;
    SET_GPR_U32(ctx, 31, 0x28BC80u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x28BC78u, 0x28BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC80u;
label_28bc80:
    // 0x28bc80: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x28bc80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_28bc84:
    // 0x28bc84: 0x2a32821  addu        $a1, $s5, $v1
    ctx->pc = 0x28bc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_28bc88:
    // 0x28bc88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28bc8c:
    // 0x28bc8c: 0x8fa6028c  lw          $a2, 0x28C($sp)
    ctx->pc = 0x28bc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
label_28bc90:
    // 0x28bc90: 0xc0e335c  jal         func_38CD70
label_28bc94:
    if (ctx->pc == 0x28BC94u) {
        ctx->pc = 0x28BC98u;
        goto label_28bc98;
    }
    ctx->pc = 0x28BC90u;
    SET_GPR_U32(ctx, 31, 0x28BC98u);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x28BC90u, 0x28BC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC98u;
label_28bc98:
    // 0x28bc98: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x28bc98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_28bc9c:
    // 0x28bc9c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x28bc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28bca0:
    // 0x28bca0: 0xc0a29f0  jal         func_28A7C0
label_28bca4:
    if (ctx->pc == 0x28BCA4u) {
        ctx->pc = 0x28BCA8u;
        goto label_28bca8;
    }
    ctx->pc = 0x28BCA0u;
    SET_GPR_U32(ctx, 31, 0x28BCA8u);
    ctx->pc = 0x28A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7C0u, 0x28BCA0u, 0x28BCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BCA8u;
label_28bca8:
    // 0x28bca8: 0x2901821  addu        $v1, $s4, $s0
    ctx->pc = 0x28bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_28bcac:
    // 0x28bcac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x28bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28bcb0:
    // 0x28bcb0: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x28bcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28bcb4:
    // 0x28bcb4: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x28bcb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_28bcb8:
    // 0x28bcb8: 0x2f23021  addu        $a2, $s7, $s2
    ctx->pc = 0x28bcb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_28bcbc:
    // 0x28bcbc: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x28bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_28bcc0:
    // 0x28bcc0: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x28bcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_28bcc4:
    // 0x28bcc4: 0x2903021  addu        $a2, $s4, $s0
    ctx->pc = 0x28bcc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_28bcc8:
    // 0x28bcc8: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x28bcc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_28bccc:
    // 0x28bccc: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x28bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_28bcd0:
    // 0x28bcd0: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x28bcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28bcd4:
    // 0x28bcd4: 0x3088ffff  andi        $t0, $a0, 0xFFFF
    ctx->pc = 0x28bcd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_28bcd8:
    // 0x28bcd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28bcdc:
    // 0x28bcdc: 0xc0e3356  jal         func_38CD58
label_28bce0:
    if (ctx->pc == 0x28BCE0u) {
        ctx->pc = 0x28BCE4u;
        goto label_28bce4;
    }
    ctx->pc = 0x28BCDCu;
    SET_GPR_U32(ctx, 31, 0x28BCE4u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x28BCDCu, 0x28BCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BCE4u;
label_28bce4:
    // 0x28bce4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28bce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bce8:
    // 0x28bce8: 0x2f22821  addu        $a1, $s7, $s2
    ctx->pc = 0x28bce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_28bcec:
    // 0x28bcec: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x28bcecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_28bcf0:
    // 0x28bcf0: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x28bcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_28bcf4:
    // 0x28bcf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28bcf8:
    // 0x28bcf8: 0x8fa20288  lw          $v0, 0x288($sp)
    ctx->pc = 0x28bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_28bcfc:
    // 0x28bcfc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28bcfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bd00:
    // 0x28bd00: 0xc0e335c  jal         func_38CD70
label_28bd04:
    if (ctx->pc == 0x28BD04u) {
        ctx->pc = 0x28BD08u;
        goto label_28bd08;
    }
    ctx->pc = 0x28BD00u;
    SET_GPR_U32(ctx, 31, 0x28BD08u);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x28BD00u, 0x28BD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD08u;
label_28bd08:
    // 0x28bd08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28bd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bd0c:
    // 0x28bd0c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x28bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_28bd10:
    // 0x28bd10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28bd10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bd14:
    // 0x28bd14: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x28bd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_28bd18:
    // 0x28bd18: 0xc0a29f0  jal         func_28A7C0
label_28bd1c:
    if (ctx->pc == 0x28BD1Cu) {
        ctx->pc = 0x28BD20u;
        goto label_28bd20;
    }
    ctx->pc = 0x28BD18u;
    SET_GPR_U32(ctx, 31, 0x28BD20u);
    ctx->pc = 0x28A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7C0u, 0x28BD18u, 0x28BD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD20u;
label_28bd20:
    // 0x28bd20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28bd20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bd24:
    // 0x28bd24: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x28bd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_28bd28:
    // 0x28bd28: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x28bd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_28bd2c:
    // 0x28bd2c: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x28bd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_28bd30:
    // 0x28bd30: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x28bd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_28bd34:
    // 0x28bd34: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x28bd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_28bd38:
    // 0x28bd38: 0xc0a29f0  jal         func_28A7C0
label_28bd3c:
    if (ctx->pc == 0x28BD3Cu) {
        ctx->pc = 0x28BD40u;
        goto label_28bd40;
    }
    ctx->pc = 0x28BD38u;
    SET_GPR_U32(ctx, 31, 0x28BD40u);
    ctx->pc = 0x28A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7C0u, 0x28BD38u, 0x28BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD40u;
label_28bd40:
    // 0x28bd40: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x28bd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28bd44:
    // 0x28bd44: 0x24a60002  addiu       $a2, $a1, 0x2
    ctx->pc = 0x28bd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_28bd48:
    // 0x28bd48: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x28bd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_28bd4c:
    // 0x28bd4c: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x28bd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_28bd50:
    // 0x28bd50: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x28bd50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_28bd54:
    // 0x28bd54: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x28bd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28bd58:
    // 0x28bd58: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x28bd58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_28bd5c:
    // 0x28bd5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28bd60:
    // 0x28bd60: 0x7ba600e0  lq          $a2, 0xE0($sp)
    ctx->pc = 0x28bd60u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_28bd64:
    // 0x28bd64: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x28bd64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bd68:
    // 0x28bd68: 0xc0e3356  jal         func_38CD58
label_28bd6c:
    if (ctx->pc == 0x28BD6Cu) {
        ctx->pc = 0x28BD70u;
        goto label_28bd70;
    }
    ctx->pc = 0x28BD68u;
    SET_GPR_U32(ctx, 31, 0x28BD70u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x28BD68u, 0x28BD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD70u;
label_28bd70:
    // 0x28bd70: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x28bd70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_28bd74:
    // 0x28bd74: 0x2a41021  addu        $v0, $s5, $a0
    ctx->pc = 0x28bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_28bd78:
    // 0x28bd78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28bd7c:
    // 0x28bd7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28bd7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bd80:
    // 0x28bd80: 0x8fa6028c  lw          $a2, 0x28C($sp)
    ctx->pc = 0x28bd80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
label_28bd84:
    // 0x28bd84: 0xc0e335c  jal         func_38CD70
label_28bd88:
    if (ctx->pc == 0x28BD88u) {
        ctx->pc = 0x28BD8Cu;
        goto label_28bd8c;
    }
    ctx->pc = 0x28BD84u;
    SET_GPR_U32(ctx, 31, 0x28BD8Cu);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x28BD84u, 0x28BD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD8Cu;
label_28bd8c:
    // 0x28bd8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28bd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bd90:
    // 0x28bd90: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x28bd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_28bd94:
    // 0x28bd94: 0xc0a29f0  jal         func_28A7C0
label_28bd98:
    if (ctx->pc == 0x28BD98u) {
        ctx->pc = 0x28BD9Cu;
        goto label_28bd9c;
    }
    ctx->pc = 0x28BD94u;
    SET_GPR_U32(ctx, 31, 0x28BD9Cu);
    ctx->pc = 0x28A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7C0u, 0x28BD94u, 0x28BD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD9Cu;
label_28bd9c:
    // 0x28bd9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28bd9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bda0:
    // 0x28bda0: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x28bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_28bda4:
    // 0x28bda4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x28bda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28bda8:
    // 0x28bda8: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x28bda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_28bdac:
    // 0x28bdac: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x28bdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_28bdb0:
    // 0x28bdb0: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x28bdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_28bdb4:
    // 0x28bdb4: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x28bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_28bdb8:
    // 0x28bdb8: 0xc0a29f0  jal         func_28A7C0
label_28bdbc:
    if (ctx->pc == 0x28BDBCu) {
        ctx->pc = 0x28BDC0u;
        goto label_28bdc0;
    }
    ctx->pc = 0x28BDB8u;
    SET_GPR_U32(ctx, 31, 0x28BDC0u);
    ctx->pc = 0x28A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7C0u, 0x28BDB8u, 0x28BDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BDC0u;
label_28bdc0:
    // 0x28bdc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28bdc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bdc4:
    // 0x28bdc4: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x28bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_28bdc8:
    // 0x28bdc8: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x28bdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_28bdcc:
    // 0x28bdcc: 0x24640002  addiu       $a0, $v1, 0x2
    ctx->pc = 0x28bdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_28bdd0:
    // 0x28bdd0: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x28bdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_28bdd4:
    // 0x28bdd4: 0x2f21821  addu        $v1, $s7, $s2
    ctx->pc = 0x28bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_28bdd8:
    // 0x28bdd8: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x28bdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_28bddc:
    // 0x28bddc: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x28bddcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_28bde0:
    // 0x28bde0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x28bde0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_28bde4:
    // 0x28bde4: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x28bde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_28bde8:
    // 0x28bde8: 0x2901821  addu        $v1, $s4, $s0
    ctx->pc = 0x28bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_28bdec:
    // 0x28bdec: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x28bdecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_28bdf0:
    // 0x28bdf0: 0x30c8ffff  andi        $t0, $a2, 0xFFFF
    ctx->pc = 0x28bdf0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_28bdf4:
    // 0x28bdf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28bdf8:
    // 0x28bdf8: 0x7ba600d0  lq          $a2, 0xD0($sp)
    ctx->pc = 0x28bdf8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_28bdfc:
    // 0x28bdfc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28bdfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28be00:
    // 0x28be00: 0xc0e3356  jal         func_38CD58
label_28be04:
    if (ctx->pc == 0x28BE04u) {
        ctx->pc = 0x28BE08u;
        goto label_28be08;
    }
    ctx->pc = 0x28BE00u;
    SET_GPR_U32(ctx, 31, 0x28BE08u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x28BE00u, 0x28BE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BE08u;
label_28be08:
    // 0x28be08: 0x2f21821  addu        $v1, $s7, $s2
    ctx->pc = 0x28be08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_28be0c:
    // 0x28be0c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x28be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_28be10:
    // 0x28be10: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x28be10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_28be14:
    // 0x28be14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28be14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28be18:
    // 0x28be18: 0x8fa60288  lw          $a2, 0x288($sp)
    ctx->pc = 0x28be18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_28be1c:
    // 0x28be1c: 0xc0e335c  jal         func_38CD70
label_28be20:
    if (ctx->pc == 0x28BE20u) {
        ctx->pc = 0x28BE24u;
        goto label_28be24;
    }
    ctx->pc = 0x28BE1Cu;
    SET_GPR_U32(ctx, 31, 0x28BE24u);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x28BE1Cu, 0x28BE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BE24u;
label_28be24:
    // 0x28be24: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x28be24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_28be28:
    // 0x28be28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28be28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28be2c:
    // 0x28be2c: 0xc7a002bc  lwc1        $f0, 0x2BC($sp)
    ctx->pc = 0x28be2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28be30:
    // 0x28be30: 0xe7a002b8  swc1        $f0, 0x2B8($sp)
    ctx->pc = 0x28be30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
label_28be34:
    // 0x28be34: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x28be34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28be38:
    // 0x28be38: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x28be38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28be3c:
    // 0x28be3c: 0x8fa2027c  lw          $v0, 0x27C($sp)
    ctx->pc = 0x28be3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
label_28be40:
    // 0x28be40: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x28be40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28be44:
    // 0x28be44: 0xafa5027c  sw          $a1, 0x27C($sp)
    ctx->pc = 0x28be44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 5));
label_28be48:
    // 0x28be48: 0x8fa2027c  lw          $v0, 0x27C($sp)
    ctx->pc = 0x28be48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
label_28be4c:
    // 0x28be4c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x28be4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_28be50:
    // 0x28be50: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x28be50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_28be54:
    // 0x28be54: 0xc0a29f0  jal         func_28A7C0
label_28be58:
    if (ctx->pc == 0x28BE58u) {
        ctx->pc = 0x28BE5Cu;
        goto label_28be5c;
    }
    ctx->pc = 0x28BE54u;
    SET_GPR_U32(ctx, 31, 0x28BE5Cu);
    ctx->pc = 0x28A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7C0u, 0x28BE54u, 0x28BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BE5Cu;
label_28be5c:
    // 0x28be5c: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x28be5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_28be60:
    // 0x28be60: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x28be60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_28be64:
    // 0x28be64: 0x1020febd  beqz        $at, . + 4 + (-0x143 << 2)
label_28be68:
    if (ctx->pc == 0x28BE68u) {
        ctx->pc = 0x28BE6Cu;
        goto label_28be6c;
    }
    ctx->pc = 0x28BE64u;
    {
        const bool branch_taken_0x28be64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28be64) {
            ctx->pc = 0x28B95Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b95c;
        }
    }
    ctx->pc = 0x28BE6Cu;
label_28be6c:
    // 0x28be6c: 0xc7a002c4  lwc1        $f0, 0x2C4($sp)
    ctx->pc = 0x28be6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28be70:
    // 0x28be70: 0xe7a002c0  swc1        $f0, 0x2C0($sp)
    ctx->pc = 0x28be70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_28be74:
    // 0x28be74: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x28be74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_28be78:
    // 0x28be78: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x28be78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28be7c:
    // 0x28be7c: 0xafa40280  sw          $a0, 0x280($sp)
    ctx->pc = 0x28be7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 4));
label_28be80:
    // 0x28be80: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x28be80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_28be84:
    // 0x28be84: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x28be84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_28be88:
    // 0x28be88: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x28be88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_28be8c:
    // 0x28be8c: 0xc0a29f0  jal         func_28A7C0
label_28be90:
    if (ctx->pc == 0x28BE90u) {
        ctx->pc = 0x28BE94u;
        goto label_28be94;
    }
    ctx->pc = 0x28BE8Cu;
    SET_GPR_U32(ctx, 31, 0x28BE94u);
    ctx->pc = 0x28A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7C0u, 0x28BE8Cu, 0x28BE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BE94u;
label_28be94:
    // 0x28be94: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x28be94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_28be98:
    // 0x28be98: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x28be98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_28be9c:
    // 0x28be9c: 0x1020fe8d  beqz        $at, . + 4 + (-0x173 << 2)
label_28bea0:
    if (ctx->pc == 0x28BEA0u) {
        ctx->pc = 0x28BEA4u;
        goto label_28bea4;
    }
    ctx->pc = 0x28BE9Cu;
    {
        const bool branch_taken_0x28be9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28be9c) {
            ctx->pc = 0x28B8D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b8d4;
        }
    }
    ctx->pc = 0x28BEA4u;
label_28bea4:
    // 0x28bea4: 0x148040  sll         $s0, $s4, 1
    ctx->pc = 0x28bea4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_28bea8:
    // 0x28bea8: 0x179040  sll         $s2, $s7, 1
    ctx->pc = 0x28bea8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
label_28beac:
    // 0x28beac: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x28beacu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28beb0:
    // 0x28beb0: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_28beb4:
    if (ctx->pc == 0x28BEB4u) {
        ctx->pc = 0x28BEB8u;
        goto label_28beb8;
    }
    ctx->pc = 0x28BEB0u;
    {
        const bool branch_taken_0x28beb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28beb0) {
            ctx->pc = 0x28C1D0u;
            goto label_28c1d0;
        }
    }
    ctx->pc = 0x28BEB8u;
label_28beb8:
    // 0x28beb8: 0x3c0542a0  lui         $a1, 0x42A0
    ctx->pc = 0x28beb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17056 << 16));
label_28bebc:
    // 0x28bebc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x28bebcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28bec0:
    // 0x28bec0: 0x7c00006  bltz        $fp, . + 4 + (0x6 << 2)
label_28bec4:
    if (ctx->pc == 0x28BEC4u) {
        ctx->pc = 0x28BEC8u;
        goto label_28bec8;
    }
    ctx->pc = 0x28BEC0u;
    {
        const bool branch_taken_0x28bec0 = (GPR_S32(ctx, 30) < 0);
        if (branch_taken_0x28bec0) {
            ctx->pc = 0x28BEDCu;
            goto label_28bedc;
        }
    }
    ctx->pc = 0x28BEC8u;
label_28bec8:
    // 0x28bec8: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x28bec8u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28becc:
    // 0x28becc: 0x0  nop
    ctx->pc = 0x28beccu;
    // NOP
label_28bed0:
    // 0x28bed0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28bed0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28bed4:
    // 0x28bed4: 0x10000008  b           . + 4 + (0x8 << 2)
label_28bed8:
    if (ctx->pc == 0x28BED8u) {
        ctx->pc = 0x28BEDCu;
        goto label_28bedc;
    }
    ctx->pc = 0x28BED4u;
    {
        const bool branch_taken_0x28bed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bed4) {
            ctx->pc = 0x28BEF8u;
            goto label_28bef8;
        }
    }
    ctx->pc = 0x28BEDCu;
label_28bedc:
    // 0x28bedc: 0x1e1042  srl         $v0, $fp, 1
    ctx->pc = 0x28bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 30), 1));
label_28bee0:
    // 0x28bee0: 0x33c40001  andi        $a0, $fp, 0x1
    ctx->pc = 0x28bee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_28bee4:
    // 0x28bee4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x28bee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_28bee8:
    // 0x28bee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28bee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28beec:
    // 0x28beec: 0x0  nop
    ctx->pc = 0x28beecu;
    // NOP
label_28bef0:
    // 0x28bef0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28bef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28bef4:
    // 0x28bef4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28bef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28bef8:
    // 0x28bef8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28bef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28befc:
    // 0x28befc: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x28befcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_28bf00:
    // 0x28bf00: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x28bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_28bf04:
    // 0x28bf04: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x28bf04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28bf08:
    // 0x28bf08: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x28bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_28bf0c:
    // 0x28bf0c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28bf0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_28bf10:
    // 0x28bf10: 0xc7a002f8  lwc1        $f0, 0x2F8($sp)
    ctx->pc = 0x28bf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bf14:
    // 0x28bf14: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x28bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_28bf18:
    // 0x28bf18: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x28bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_28bf1c:
    // 0x28bf1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28bf20:
    // 0x28bf20: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x28bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_28bf24:
    // 0x28bf24: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28bf24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28bf28:
    // 0x28bf28: 0x3c04c080  lui         $a0, 0xC080
    ctx->pc = 0x28bf28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49280 << 16));
label_28bf2c:
    // 0x28bf2c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28bf2cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28bf30:
    // 0x28bf30: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x28bf30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_28bf34:
    // 0x28bf34: 0xb03021  addu        $a2, $a1, $s0
    ctx->pc = 0x28bf34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_28bf38:
    // 0x28bf38: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x28bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_28bf3c:
    // 0x28bf3c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x28bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_28bf40:
    // 0x28bf40: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x28bf40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_28bf44:
    // 0x28bf44: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x28bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_28bf48:
    // 0x28bf48: 0x8fa4029c  lw          $a0, 0x29C($sp)
    ctx->pc = 0x28bf48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_28bf4c:
    // 0x28bf4c: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x28bf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_28bf50:
    // 0x28bf50: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28bf50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28bf54:
    // 0x28bf54: 0x27a60298  addiu       $a2, $sp, 0x298
    ctx->pc = 0x28bf54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
label_28bf58:
    // 0x28bf58: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x28bf58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28bf5c:
    // 0x28bf5c: 0xc052608  jal         func_149820
label_28bf60:
    if (ctx->pc == 0x28BF60u) {
        ctx->pc = 0x28BF64u;
        goto label_28bf64;
    }
    ctx->pc = 0x28BF5Cu;
    SET_GPR_U32(ctx, 31, 0x28BF64u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x28BF5Cu, 0x28BF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BF64u;
label_28bf64:
    // 0x28bf64: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x28bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_28bf68:
    // 0x28bf68: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x28bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_28bf6c:
    // 0x28bf6c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x28bf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28bf70:
    // 0x28bf70: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x28bf70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_28bf74:
    // 0x28bf74: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x28bf74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_28bf78:
    // 0x28bf78: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x28bf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28bf7c:
    // 0x28bf7c: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x28bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_28bf80:
    // 0x28bf80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28bf80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bf84:
    // 0x28bf84: 0xc041d58  jal         func_107560
label_28bf88:
    if (ctx->pc == 0x28BF88u) {
        ctx->pc = 0x28BF8Cu;
        goto label_28bf8c;
    }
    ctx->pc = 0x28BF84u;
    SET_GPR_U32(ctx, 31, 0x28BF8Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x28BF84u, 0x28BF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BF8Cu;
label_28bf8c:
    // 0x28bf8c: 0x7c00006  bltz        $fp, . + 4 + (0x6 << 2)
label_28bf90:
    if (ctx->pc == 0x28BF90u) {
        ctx->pc = 0x28BF94u;
        goto label_28bf94;
    }
    ctx->pc = 0x28BF8Cu;
    {
        const bool branch_taken_0x28bf8c = (GPR_S32(ctx, 30) < 0);
        if (branch_taken_0x28bf8c) {
            ctx->pc = 0x28BFA8u;
            goto label_28bfa8;
        }
    }
    ctx->pc = 0x28BF94u;
label_28bf94:
    // 0x28bf94: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x28bf94u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28bf98:
    // 0x28bf98: 0x0  nop
    ctx->pc = 0x28bf98u;
    // NOP
label_28bf9c:
    // 0x28bf9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28bf9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28bfa0:
    // 0x28bfa0: 0x10000008  b           . + 4 + (0x8 << 2)
label_28bfa4:
    if (ctx->pc == 0x28BFA4u) {
        ctx->pc = 0x28BFA8u;
        goto label_28bfa8;
    }
    ctx->pc = 0x28BFA0u;
    {
        const bool branch_taken_0x28bfa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bfa0) {
            ctx->pc = 0x28BFC4u;
            goto label_28bfc4;
        }
    }
    ctx->pc = 0x28BFA8u;
label_28bfa8:
    // 0x28bfa8: 0x1e1042  srl         $v0, $fp, 1
    ctx->pc = 0x28bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 30), 1));
label_28bfac:
    // 0x28bfac: 0x33c40001  andi        $a0, $fp, 0x1
    ctx->pc = 0x28bfacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_28bfb0:
    // 0x28bfb0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x28bfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_28bfb4:
    // 0x28bfb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28bfb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28bfb8:
    // 0x28bfb8: 0x0  nop
    ctx->pc = 0x28bfb8u;
    // NOP
label_28bfbc:
    // 0x28bfbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28bfbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28bfc0:
    // 0x28bfc0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28bfc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28bfc4:
    // 0x28bfc4: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x28bfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_28bfc8:
    // 0x28bfc8: 0x2c52021  addu        $a0, $s6, $a1
    ctx->pc = 0x28bfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_28bfcc:
    // 0x28bfcc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x28bfccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_28bfd0:
    // 0x28bfd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28bfd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28bfd4:
    // 0x28bfd4: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x28bfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_28bfd8:
    // 0x28bfd8: 0x2c51021  addu        $v0, $s6, $a1
    ctx->pc = 0x28bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_28bfdc:
    // 0x28bfdc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28bfdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28bfe0:
    // 0x28bfe0: 0x3c0442a0  lui         $a0, 0x42A0
    ctx->pc = 0x28bfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17056 << 16));
label_28bfe4:
    // 0x28bfe4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28bfe4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28bfe8:
    // 0x28bfe8: 0x7c00006  bltz        $fp, . + 4 + (0x6 << 2)
label_28bfec:
    if (ctx->pc == 0x28BFECu) {
        ctx->pc = 0x28BFF0u;
        goto label_28bff0;
    }
    ctx->pc = 0x28BFE8u;
    {
        const bool branch_taken_0x28bfe8 = (GPR_S32(ctx, 30) < 0);
        if (branch_taken_0x28bfe8) {
            ctx->pc = 0x28C004u;
            goto label_28c004;
        }
    }
    ctx->pc = 0x28BFF0u;
label_28bff0:
    // 0x28bff0: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x28bff0u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28bff4:
    // 0x28bff4: 0x0  nop
    ctx->pc = 0x28bff4u;
    // NOP
label_28bff8:
    // 0x28bff8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28bff8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28bffc:
    // 0x28bffc: 0x10000008  b           . + 4 + (0x8 << 2)
label_28c000:
    if (ctx->pc == 0x28C000u) {
        ctx->pc = 0x28C004u;
        goto label_28c004;
    }
    ctx->pc = 0x28BFFCu;
    {
        const bool branch_taken_0x28bffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bffc) {
            ctx->pc = 0x28C020u;
            goto label_28c020;
        }
    }
    ctx->pc = 0x28C004u;
label_28c004:
    // 0x28c004: 0x1e2842  srl         $a1, $fp, 1
    ctx->pc = 0x28c004u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 30), 1));
label_28c008:
    // 0x28c008: 0x33c40001  andi        $a0, $fp, 0x1
    ctx->pc = 0x28c008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_28c00c:
    // 0x28c00c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28c00cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_28c010:
    // 0x28c010: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28c010u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c014:
    // 0x28c014: 0x0  nop
    ctx->pc = 0x28c014u;
    // NOP
label_28c018:
    // 0x28c018: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28c01c:
    // 0x28c01c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28c01cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28c020:
    // 0x28c020: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28c020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28c024:
    // 0x28c024: 0x26050002  addiu       $a1, $s0, 0x2
    ctx->pc = 0x28c024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28c028:
    // 0x28c028: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x28c028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_28c02c:
    // 0x28c02c: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x28c02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_28c030:
    // 0x28c030: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x28c030u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_28c034:
    // 0x28c034: 0x2652021  addu        $a0, $s3, $a1
    ctx->pc = 0x28c034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_28c038:
    // 0x28c038: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x28c038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_28c03c:
    // 0x28c03c: 0xc7a002f8  lwc1        $f0, 0x2F8($sp)
    ctx->pc = 0x28c03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c040:
    // 0x28c040: 0x26050002  addiu       $a1, $s0, 0x2
    ctx->pc = 0x28c040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28c044:
    // 0x28c044: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x28c044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_28c048:
    // 0x28c048: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x28c048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_28c04c:
    // 0x28c04c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x28c04cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_28c050:
    // 0x28c050: 0x2652021  addu        $a0, $s3, $a1
    ctx->pc = 0x28c050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_28c054:
    // 0x28c054: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x28c054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_28c058:
    // 0x28c058: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x28c058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_28c05c:
    // 0x28c05c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c05cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c060:
    // 0x28c060: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x28c060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28c064:
    // 0x28c064: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x28c064u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_28c068:
    // 0x28c068: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x28c068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_28c06c:
    // 0x28c06c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x28c06cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_28c070:
    // 0x28c070: 0x2651021  addu        $v0, $s3, $a1
    ctx->pc = 0x28c070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_28c074:
    // 0x28c074: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x28c074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_28c078:
    // 0x28c078: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x28c078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28c07c:
    // 0x28c07c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x28c07cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_28c080:
    // 0x28c080: 0x8fa4029c  lw          $a0, 0x29C($sp)
    ctx->pc = 0x28c080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_28c084:
    // 0x28c084: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x28c084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_28c088:
    // 0x28c088: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c08c:
    // 0x28c08c: 0x27a50298  addiu       $a1, $sp, 0x298
    ctx->pc = 0x28c08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
label_28c090:
    // 0x28c090: 0xc052608  jal         func_149820
label_28c094:
    if (ctx->pc == 0x28C094u) {
        ctx->pc = 0x28C098u;
        goto label_28c098;
    }
    ctx->pc = 0x28C090u;
    SET_GPR_U32(ctx, 31, 0x28C098u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x28C090u, 0x28C098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C098u;
label_28c098:
    // 0x28c098: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x28c098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28c09c:
    // 0x28c09c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28c09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_28c0a0:
    // 0x28c0a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28c0a4:
    // 0x28c0a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x28c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28c0a8:
    // 0x28c0a8: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x28c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_28c0ac:
    // 0x28c0ac: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x28c0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28c0b0:
    // 0x28c0b0: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x28c0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_28c0b4:
    // 0x28c0b4: 0xc041d58  jal         func_107560
label_28c0b8:
    if (ctx->pc == 0x28C0B8u) {
        ctx->pc = 0x28C0BCu;
        goto label_28c0bc;
    }
    ctx->pc = 0x28C0B4u;
    SET_GPR_U32(ctx, 31, 0x28C0BCu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x28C0B4u, 0x28C0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C0BCu;
label_28c0bc:
    // 0x28c0bc: 0x7c00006  bltz        $fp, . + 4 + (0x6 << 2)
label_28c0c0:
    if (ctx->pc == 0x28C0C0u) {
        ctx->pc = 0x28C0C4u;
        goto label_28c0c4;
    }
    ctx->pc = 0x28C0BCu;
    {
        const bool branch_taken_0x28c0bc = (GPR_S32(ctx, 30) < 0);
        if (branch_taken_0x28c0bc) {
            ctx->pc = 0x28C0D8u;
            goto label_28c0d8;
        }
    }
    ctx->pc = 0x28C0C4u;
label_28c0c4:
    // 0x28c0c4: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x28c0c4u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c0c8:
    // 0x28c0c8: 0x0  nop
    ctx->pc = 0x28c0c8u;
    // NOP
label_28c0cc:
    // 0x28c0cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c0ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28c0d0:
    // 0x28c0d0: 0x10000008  b           . + 4 + (0x8 << 2)
label_28c0d4:
    if (ctx->pc == 0x28C0D4u) {
        ctx->pc = 0x28C0D8u;
        goto label_28c0d8;
    }
    ctx->pc = 0x28C0D0u;
    {
        const bool branch_taken_0x28c0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c0d0) {
            ctx->pc = 0x28C0F4u;
            goto label_28c0f4;
        }
    }
    ctx->pc = 0x28C0D8u;
label_28c0d8:
    // 0x28c0d8: 0x1e1842  srl         $v1, $fp, 1
    ctx->pc = 0x28c0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 1));
label_28c0dc:
    // 0x28c0dc: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x28c0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_28c0e0:
    // 0x28c0e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28c0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_28c0e4:
    // 0x28c0e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28c0e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c0e8:
    // 0x28c0e8: 0x0  nop
    ctx->pc = 0x28c0e8u;
    // NOP
label_28c0ec:
    // 0x28c0ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c0ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28c0f0:
    // 0x28c0f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28c0f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28c0f4:
    // 0x28c0f4: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x28c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28c0f8:
    // 0x28c0f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_28c0fc:
    // 0x28c0fc: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x28c0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_28c100:
    // 0x28c100: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28c100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_28c104:
    // 0x28c104: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28c104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28c108:
    // 0x28c108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c10c:
    // 0x28c10c: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x28c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28c110:
    // 0x28c110: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x28c110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_28c114:
    // 0x28c114: 0x2c22021  addu        $a0, $s6, $v0
    ctx->pc = 0x28c114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_28c118:
    // 0x28c118: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x28c118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_28c11c:
    // 0x28c11c: 0x17c00029  bnez        $fp, . + 4 + (0x29 << 2)
label_28c120:
    if (ctx->pc == 0x28C120u) {
        ctx->pc = 0x28C124u;
        goto label_28c124;
    }
    ctx->pc = 0x28C11Cu;
    {
        const bool branch_taken_0x28c11c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c11c) {
            ctx->pc = 0x28C1C4u;
            goto label_28c1c4;
        }
    }
    ctx->pc = 0x28C124u;
label_28c124:
    // 0x28c124: 0x1228c0  sll         $a1, $s2, 3
    ctx->pc = 0x28c124u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_28c128:
    // 0x28c128: 0x2a51021  addu        $v0, $s5, $a1
    ctx->pc = 0x28c128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_28c12c:
    // 0x28c12c: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x28c12cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_28c130:
    // 0x28c130: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x28c130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28c134:
    // 0x28c134: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x28c134u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_28c138:
    // 0x28c138: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x28c138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28c13c:
    // 0x28c13c: 0x3068ffff  andi        $t0, $v1, 0xFFFF
    ctx->pc = 0x28c13cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_28c140:
    // 0x28c140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28c144:
    // 0x28c144: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28c144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c148:
    // 0x28c148: 0xc0e3356  jal         func_38CD58
label_28c14c:
    if (ctx->pc == 0x28C14Cu) {
        ctx->pc = 0x28C150u;
        goto label_28c150;
    }
    ctx->pc = 0x28C148u;
    SET_GPR_U32(ctx, 31, 0x28C150u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x28C148u, 0x28C150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C150u;
label_28c150:
    // 0x28c150: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28c150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c154:
    // 0x28c154: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x28c154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_28c158:
    // 0x28c158: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x28c158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_28c15c:
    // 0x28c15c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28c160:
    // 0x28c160: 0x8fa60284  lw          $a2, 0x284($sp)
    ctx->pc = 0x28c160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
label_28c164:
    // 0x28c164: 0xc0e335c  jal         func_38CD70
label_28c168:
    if (ctx->pc == 0x28C168u) {
        ctx->pc = 0x28C16Cu;
        goto label_28c16c;
    }
    ctx->pc = 0x28C164u;
    SET_GPR_U32(ctx, 31, 0x28C16Cu);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x28C164u, 0x28C16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C16Cu;
label_28c16c:
    // 0x28c16c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x28c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_28c170:
    // 0x28c170: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28c170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c174:
    // 0x28c174: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x28c174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_28c178:
    // 0x28c178: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x28c178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_28c17c:
    // 0x28c17c: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x28c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28c180:
    // 0x28c180: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x28c180u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_28c184:
    // 0x28c184: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x28c184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_28c188:
    // 0x28c188: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x28c188u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_28c18c:
    // 0x28c18c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x28c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28c190:
    // 0x28c190: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x28c190u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_28c194:
    // 0x28c194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28c198:
    // 0x28c198: 0xc0e3356  jal         func_38CD58
label_28c19c:
    if (ctx->pc == 0x28C19Cu) {
        ctx->pc = 0x28C1A0u;
        goto label_28c1a0;
    }
    ctx->pc = 0x28C198u;
    SET_GPR_U32(ctx, 31, 0x28C1A0u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x28C198u, 0x28C1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C1A0u;
label_28c1a0:
    // 0x28c1a0: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x28c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_28c1a4:
    // 0x28c1a4: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x28c1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_28c1a8:
    // 0x28c1a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28c1ac:
    // 0x28c1ac: 0x8fa60284  lw          $a2, 0x284($sp)
    ctx->pc = 0x28c1acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
label_28c1b0:
    // 0x28c1b0: 0xc0e335c  jal         func_38CD70
label_28c1b4:
    if (ctx->pc == 0x28C1B4u) {
        ctx->pc = 0x28C1B8u;
        goto label_28c1b8;
    }
    ctx->pc = 0x28C1B0u;
    SET_GPR_U32(ctx, 31, 0x28C1B8u);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x28C1B0u, 0x28C1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C1B8u;
label_28c1b8:
    // 0x28c1b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c1bc:
    // 0x28c1bc: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x28c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_28c1c0:
    // 0x28c1c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28c1c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c1c4:
    // 0x28c1c4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x28c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28c1c8:
    // 0x28c1c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28c1c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c1cc:
    // 0x28c1cc: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x28c1ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_28c1d0:
    // 0x28c1d0: 0x2fc10002  sltiu       $at, $fp, 0x2
    ctx->pc = 0x28c1d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_28c1d4:
    // 0x28c1d4: 0x1420ff38  bnez        $at, . + 4 + (-0xC8 << 2)
label_28c1d8:
    if (ctx->pc == 0x28C1D8u) {
        ctx->pc = 0x28C1DCu;
        goto label_28c1dc;
    }
    ctx->pc = 0x28C1D4u;
    {
        const bool branch_taken_0x28c1d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c1d4) {
            ctx->pc = 0x28BEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28beb8;
        }
    }
    ctx->pc = 0x28C1DCu;
label_28c1dc:
    // 0x28c1dc: 0x8fa402a4  lw          $a0, 0x2A4($sp)
    ctx->pc = 0x28c1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_28c1e0:
    // 0x28c1e0: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x28c1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_28c1e4:
    // 0x28c1e4: 0xc0e2ab0  jal         func_38AAC0
label_28c1e8:
    if (ctx->pc == 0x28C1E8u) {
        ctx->pc = 0x28C1ECu;
        goto label_28c1ec;
    }
    ctx->pc = 0x28C1E4u;
    SET_GPR_U32(ctx, 31, 0x28C1ECu);
    ctx->pc = 0x38AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AAC0u, 0x28C1E4u, 0x28C1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C1ECu;
label_28c1ec:
    // 0x28c1ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28c1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c1f0:
    // 0x28c1f0: 0x8fa602a4  lw          $a2, 0x2A4($sp)
    ctx->pc = 0x28c1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_28c1f4:
    // 0x28c1f4: 0x24c40004  addiu       $a0, $a2, 0x4
    ctx->pc = 0x28c1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_28c1f8:
    // 0x28c1f8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x28c1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_28c1fc:
    // 0x28c1fc: 0xc046270  jal         func_1189C0
label_28c200:
    if (ctx->pc == 0x28C200u) {
        ctx->pc = 0x28C204u;
        goto label_28c204;
    }
    ctx->pc = 0x28C1FCu;
    SET_GPR_U32(ctx, 31, 0x28C204u);
    ctx->pc = 0x1189C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C0u, 0x28C1FCu, 0x28C204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C204u;
label_28c204:
    // 0x28c204: 0x27a402a4  addiu       $a0, $sp, 0x2A4
    ctx->pc = 0x28c204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 676));
label_28c208:
    // 0x28c208: 0xafa401fc  sw          $a0, 0x1FC($sp)
    ctx->pc = 0x28c208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 4));
label_28c20c:
    // 0x28c20c: 0x8fa501fc  lw          $a1, 0x1FC($sp)
    ctx->pc = 0x28c20cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_28c210:
    // 0x28c210: 0xafb10270  sw          $s1, 0x270($sp)
    ctx->pc = 0x28c210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 17));
label_28c214:
    // 0x28c214: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x28c214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_28c218:
    // 0x28c218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c21c:
    // 0x28c21c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28c21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c220:
    // 0x28c220: 0xc0e751e  jal         func_39D478
label_28c224:
    if (ctx->pc == 0x28C224u) {
        ctx->pc = 0x28C228u;
        goto label_28c228;
    }
    ctx->pc = 0x28C220u;
    SET_GPR_U32(ctx, 31, 0x28C228u);
    ctx->pc = 0x39D478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39D478u, 0x28C220u, 0x28C228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C228u;
label_28c228:
    // 0x28c228: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28c228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c22c:
    // 0x28c22c: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x28c22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_28c230:
    // 0x28c230: 0xc0e3414  jal         func_38D050
label_28c234:
    if (ctx->pc == 0x28C234u) {
        ctx->pc = 0x28C238u;
        goto label_28c238;
    }
    ctx->pc = 0x28C230u;
    SET_GPR_U32(ctx, 31, 0x28C238u);
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x28C230u, 0x28C238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C238u;
label_28c238:
    // 0x28c238: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28c23c:
    // 0x28c23c: 0xc0e2d08  jal         func_38B420
label_28c240:
    if (ctx->pc == 0x28C240u) {
        ctx->pc = 0x28C244u;
        goto label_28c244;
    }
    ctx->pc = 0x28C23Cu;
    SET_GPR_U32(ctx, 31, 0x28C244u);
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x28C23Cu, 0x28C244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C244u;
label_28c244:
    // 0x28c244: 0xc0e2094  jal         func_388250
label_28c248:
    if (ctx->pc == 0x28C248u) {
        ctx->pc = 0x28C24Cu;
        goto label_28c24c;
    }
    ctx->pc = 0x28C244u;
    SET_GPR_U32(ctx, 31, 0x28C24Cu);
    ctx->pc = 0x388250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388250u, 0x28C244u, 0x28C24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C24Cu;
label_28c24c:
    // 0x28c24c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28c24cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c250:
    // 0x28c250: 0xafa3026c  sw          $v1, 0x26C($sp)
    ctx->pc = 0x28c250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
label_28c254:
    // 0x28c254: 0xc1067b0  jal         func_419EC0
label_28c258:
    if (ctx->pc == 0x28C258u) {
        ctx->pc = 0x28C25Cu;
        goto label_28c25c;
    }
    ctx->pc = 0x28C254u;
    SET_GPR_U32(ctx, 31, 0x28C25Cu);
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x28C254u, 0x28C25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C25Cu;
label_28c25c:
    // 0x28c25c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c260:
    // 0x28c260: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x28c260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
label_28c264:
    // 0x28c264: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x28c264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_28c268:
    // 0x28c268: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28c268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28c26c:
    // 0x28c26c: 0xc106638  jal         func_4198E0
label_28c270:
    if (ctx->pc == 0x28C270u) {
        ctx->pc = 0x28C274u;
        goto label_28c274;
    }
    ctx->pc = 0x28C26Cu;
    SET_GPR_U32(ctx, 31, 0x28C274u);
    ctx->pc = 0x4198E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4198E0u, 0x28C26Cu, 0x28C274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C274u;
label_28c274:
    // 0x28c274: 0x8fa4026c  lw          $a0, 0x26C($sp)
    ctx->pc = 0x28c274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_28c278:
    // 0x28c278: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x28c278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_28c27c:
    // 0x28c27c: 0xc0e2686  jal         func_389A18
label_28c280:
    if (ctx->pc == 0x28C280u) {
        ctx->pc = 0x28C284u;
        goto label_28c284;
    }
    ctx->pc = 0x28C27Cu;
    SET_GPR_U32(ctx, 31, 0x28C284u);
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x28C27Cu, 0x28C284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C284u;
label_28c284:
    // 0x28c284: 0x8fa4026c  lw          $a0, 0x26C($sp)
    ctx->pc = 0x28c284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_28c288:
    // 0x28c288: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28c288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28c28c:
    // 0x28c28c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c28cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c290:
    // 0x28c290: 0xc0e2836  jal         func_38A0D8
label_28c294:
    if (ctx->pc == 0x28C294u) {
        ctx->pc = 0x28C298u;
        goto label_28c298;
    }
    ctx->pc = 0x28C290u;
    SET_GPR_U32(ctx, 31, 0x28C298u);
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x28C290u, 0x28C298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C298u;
label_28c298:
    // 0x28c298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28c29c:
    // 0x28c29c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28c29cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c2a0:
    // 0x28c2a0: 0xc0c5380  jal         func_314E00
label_28c2a4:
    if (ctx->pc == 0x28C2A4u) {
        ctx->pc = 0x28C2A8u;
        goto label_28c2a8;
    }
    ctx->pc = 0x28C2A0u;
    SET_GPR_U32(ctx, 31, 0x28C2A8u);
    ctx->pc = 0x314E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314E00u, 0x28C2A0u, 0x28C2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C2A8u;
label_28c2a8:
    // 0x28c2a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c2ac:
    // 0x28c2ac: 0x8fa5026c  lw          $a1, 0x26C($sp)
    ctx->pc = 0x28c2acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_28c2b0:
    // 0x28c2b0: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x28c2b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_28c2b4:
    // 0x28c2b4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x28c2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_28c2b8:
    // 0x28c2b8: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x28c2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_28c2bc:
    // 0x28c2bc: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x28c2bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_28c2c0:
    // 0x28c2c0: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x28c2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
label_28c2c4:
    // 0x28c2c4: 0x8fa50268  lw          $a1, 0x268($sp)
    ctx->pc = 0x28c2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_28c2c8:
    // 0x28c2c8: 0x34a60001  ori         $a2, $a1, 0x1
    ctx->pc = 0x28c2c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_28c2cc:
    // 0x28c2cc: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x28c2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_28c2d0:
    // 0x28c2d0: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x28c2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_28c2d4:
    // 0x28c2d4: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x28c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_28c2d8:
    // 0x28c2d8: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x28c2d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_28c2dc:
    // 0x28c2dc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x28c2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_28c2e0:
    // 0x28c2e0: 0x27a2026c  addiu       $v0, $sp, 0x26C
    ctx->pc = 0x28c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 620));
label_28c2e4:
    // 0x28c2e4: 0xafa201f8  sw          $v0, 0x1F8($sp)
    ctx->pc = 0x28c2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 2));
label_28c2e8:
    // 0x28c2e8: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x28c2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_28c2ec:
    // 0x28c2ec: 0xc0e2744  jal         func_389D10
label_28c2f0:
    if (ctx->pc == 0x28C2F0u) {
        ctx->pc = 0x28C2F4u;
        goto label_28c2f4;
    }
    ctx->pc = 0x28C2ECu;
    SET_GPR_U32(ctx, 31, 0x28C2F4u);
    ctx->pc = 0x389D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389D10u, 0x28C2ECu, 0x28C2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C2F4u;
label_28c2f4:
    // 0x28c2f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c2f8:
    // 0x28c2f8: 0xafa40264  sw          $a0, 0x264($sp)
    ctx->pc = 0x28c2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 4));
label_28c2fc:
    // 0x28c2fc: 0xc1067b0  jal         func_419EC0
label_28c300:
    if (ctx->pc == 0x28C300u) {
        ctx->pc = 0x28C304u;
        goto label_28c304;
    }
    ctx->pc = 0x28C2FCu;
    SET_GPR_U32(ctx, 31, 0x28C304u);
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x28C2FCu, 0x28C304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C304u;
label_28c304:
    // 0x28c304: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28c304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c308:
    // 0x28c308: 0xafa50110  sw          $a1, 0x110($sp)
    ctx->pc = 0x28c308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
label_28c30c:
    // 0x28c30c: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x28c30cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_28c310:
    // 0x28c310: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x28c310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28c314:
    // 0x28c314: 0xc106638  jal         func_4198E0
label_28c318:
    if (ctx->pc == 0x28C318u) {
        ctx->pc = 0x28C31Cu;
        goto label_28c31c;
    }
    ctx->pc = 0x28C314u;
    SET_GPR_U32(ctx, 31, 0x28C31Cu);
    ctx->pc = 0x4198E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4198E0u, 0x28C314u, 0x28C31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C31Cu;
label_28c31c:
    // 0x28c31c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x28c31cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c320:
    // 0x28c320: 0x8fa20310  lw          $v0, 0x310($sp)
    ctx->pc = 0x28c320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_28c324:
    // 0x28c324: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x28c324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28c328:
    // 0x28c328: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x28c328u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_28c32c:
    // 0x28c32c: 0xa61024  and         $v0, $a1, $a2
    ctx->pc = 0x28c32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_28c330:
    // 0x28c330: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
label_28c334:
    if (ctx->pc == 0x28C334u) {
        ctx->pc = 0x28C338u;
        goto label_28c338;
    }
    ctx->pc = 0x28C330u;
    {
        const bool branch_taken_0x28c330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c330) {
            ctx->pc = 0x28C4C4u;
            goto label_28c4c4;
        }
    }
    ctx->pc = 0x28C338u;
label_28c338:
    // 0x28c338: 0x3c07004f  lui         $a3, 0x4F
    ctx->pc = 0x28c338u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)79 << 16));
label_28c33c:
    // 0x28c33c: 0x24e7d4c0  addiu       $a3, $a3, -0x2B40
    ctx->pc = 0x28c33cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956224));
label_28c340:
    // 0x28c340: 0x27a20190  addiu       $v0, $sp, 0x190
    ctx->pc = 0x28c340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_28c344:
    // 0x28c344: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x28c344u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_28c348:
    // 0x28c348: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x28c348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c34c:
    // 0x28c34c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x28c34cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_28c350:
    // 0x28c350: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x28c350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_28c354:
    // 0x28c354: 0x3c05c2b4  lui         $a1, 0xC2B4
    ctx->pc = 0x28c354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49844 << 16));
label_28c358:
    // 0x28c358: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x28c358u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28c35c:
    // 0x28c35c: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x28c35cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_28c360:
    // 0x28c360: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x28c360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28c364:
    // 0x28c364: 0x27a20190  addiu       $v0, $sp, 0x190
    ctx->pc = 0x28c364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_28c368:
    // 0x28c368: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28c368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c36c:
    // 0x28c36c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28c36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28c370:
    // 0x28c370: 0xc1065b8  jal         func_4196E0
label_28c374:
    if (ctx->pc == 0x28C374u) {
        ctx->pc = 0x28C378u;
        goto label_28c378;
    }
    ctx->pc = 0x28C370u;
    SET_GPR_U32(ctx, 31, 0x28C378u);
    ctx->pc = 0x4196E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4196E0u, 0x28C370u, 0x28C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C378u;
label_28c378:
    // 0x28c378: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x28c378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
label_28c37c:
    // 0x28c37c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x28c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_28c380:
    // 0x28c380: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x28c380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28c384:
    // 0x28c384: 0x8fa70310  lw          $a3, 0x310($sp)
    ctx->pc = 0x28c384u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_28c388:
    // 0x28c388: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x28c388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_28c38c:
    // 0x28c38c: 0x6107c  dsll32      $v0, $a2, 1
    ctx->pc = 0x28c38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 1));
label_28c390:
    // 0x28c390: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x28c390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
label_28c394:
    // 0x28c394: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x28c394u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_28c398:
    // 0x28c398: 0x2812  mflo        $a1
    ctx->pc = 0x28c398u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_28c39c:
    // 0x28c39c: 0xafa50260  sw          $a1, 0x260($sp)
    ctx->pc = 0x28c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 5));
label_28c3a0:
    // 0x28c3a0: 0x8fa60300  lw          $a2, 0x300($sp)
    ctx->pc = 0x28c3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
label_28c3a4:
    // 0x28c3a4: 0x8cc60038  lw          $a2, 0x38($a2)
    ctx->pc = 0x28c3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_28c3a8:
    // 0x28c3a8: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x28c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_28c3ac:
    // 0x28c3ac: 0x8fa40310  lw          $a0, 0x310($sp)
    ctx->pc = 0x28c3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_28c3b0:
    // 0x28c3b0: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x28c3b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28c3b4:
    // 0x28c3b4: 0x8207c  dsll32      $a0, $t0, 1
    ctx->pc = 0x28c3b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 1));
label_28c3b8:
    // 0x28c3b8: 0x4207e  dsrl32      $a0, $a0, 1
    ctx->pc = 0x28c3b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 1));
label_28c3bc:
    // 0x28c3bc: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x28c3bcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_28c3c0:
    // 0x28c3c0: 0x2810  mfhi        $a1
    ctx->pc = 0x28c3c0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_28c3c4:
    // 0x28c3c4: 0xafa5025c  sw          $a1, 0x25C($sp)
    ctx->pc = 0x28c3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 5));
label_28c3c8:
    // 0x28c3c8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x28c3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_28c3cc:
    // 0x28c3cc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x28c3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_28c3d0:
    // 0x28c3d0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_28c3d4:
    if (ctx->pc == 0x28C3D4u) {
        ctx->pc = 0x28C3D8u;
        goto label_28c3d8;
    }
    ctx->pc = 0x28C3D0u;
    {
        const bool branch_taken_0x28c3d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c3d0) {
            ctx->pc = 0x28C3F8u;
            goto label_28c3f8;
        }
    }
    ctx->pc = 0x28C3D8u;
label_28c3d8:
    // 0x28c3d8: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x28c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_28c3dc:
    // 0x28c3dc: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x28c3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_28c3e0:
    // 0x28c3e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28c3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_28c3e4:
    // 0x28c3e4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x28c3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_28c3e8:
    // 0x28c3e8: 0x0  nop
    ctx->pc = 0x28c3e8u;
    // NOP
label_28c3ec:
    // 0x28c3ec: 0x0  nop
    ctx->pc = 0x28c3ecu;
    // NOP
label_28c3f0:
    // 0x28c3f0: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
label_28c3f4:
    if (ctx->pc == 0x28C3F4u) {
        ctx->pc = 0x28C3F8u;
        goto label_28c3f8;
    }
    ctx->pc = 0x28C3F0u;
    {
        const bool branch_taken_0x28c3f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c3f0) {
            ctx->pc = 0x28C3DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28c3dc;
        }
    }
    ctx->pc = 0x28C3F8u;
label_28c3f8:
    // 0x28c3f8: 0x3c0442a0  lui         $a0, 0x42A0
    ctx->pc = 0x28c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17056 << 16));
label_28c3fc:
    // 0x28c3fc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28c3fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28c400:
    // 0x28c400: 0x8fa2025c  lw          $v0, 0x25C($sp)
    ctx->pc = 0x28c400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_28c404:
    // 0x28c404: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_28c408:
    if (ctx->pc == 0x28C408u) {
        ctx->pc = 0x28C40Cu;
        goto label_28c40c;
    }
    ctx->pc = 0x28C404u;
    {
        const bool branch_taken_0x28c404 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28c404) {
            ctx->pc = 0x28C420u;
            goto label_28c420;
        }
    }
    ctx->pc = 0x28C40Cu;
label_28c40c:
    // 0x28c40c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c40cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c410:
    // 0x28c410: 0x0  nop
    ctx->pc = 0x28c410u;
    // NOP
label_28c414:
    // 0x28c414: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28c418:
    // 0x28c418: 0x10000008  b           . + 4 + (0x8 << 2)
label_28c41c:
    if (ctx->pc == 0x28C41Cu) {
        ctx->pc = 0x28C420u;
        goto label_28c420;
    }
    ctx->pc = 0x28C418u;
    {
        const bool branch_taken_0x28c418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c418) {
            ctx->pc = 0x28C43Cu;
            goto label_28c43c;
        }
    }
    ctx->pc = 0x28C420u;
label_28c420:
    // 0x28c420: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x28c420u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_28c424:
    // 0x28c424: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x28c424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28c428:
    // 0x28c428: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x28c428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_28c42c:
    // 0x28c42c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28c42cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c430:
    // 0x28c430: 0x0  nop
    ctx->pc = 0x28c430u;
    // NOP
label_28c434:
    // 0x28c434: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c434u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28c438:
    // 0x28c438: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28c438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28c43c:
    // 0x28c43c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28c43cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28c440:
    // 0x28c440: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x28c440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_28c444:
    // 0x28c444: 0x3c0442a0  lui         $a0, 0x42A0
    ctx->pc = 0x28c444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17056 << 16));
label_28c448:
    // 0x28c448: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28c448u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28c44c:
    // 0x28c44c: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x28c44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_28c450:
    // 0x28c450: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_28c454:
    if (ctx->pc == 0x28C454u) {
        ctx->pc = 0x28C458u;
        goto label_28c458;
    }
    ctx->pc = 0x28C450u;
    {
        const bool branch_taken_0x28c450 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x28c450) {
            ctx->pc = 0x28C46Cu;
            goto label_28c46c;
        }
    }
    ctx->pc = 0x28C458u;
label_28c458:
    // 0x28c458: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28c458u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c45c:
    // 0x28c45c: 0x0  nop
    ctx->pc = 0x28c45cu;
    // NOP
label_28c460:
    // 0x28c460: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28c464:
    // 0x28c464: 0x1000000c  b           . + 4 + (0xC << 2)
label_28c468:
    if (ctx->pc == 0x28C468u) {
        ctx->pc = 0x28C46Cu;
        goto label_28c46c;
    }
    ctx->pc = 0x28C464u;
    {
        const bool branch_taken_0x28c464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c464) {
            ctx->pc = 0x28C498u;
            goto label_28c498;
        }
    }
    ctx->pc = 0x28C46Cu;
label_28c46c:
    // 0x28c46c: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x28c46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_28c470:
    // 0x28c470: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x28c470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_28c474:
    // 0x28c474: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x28c474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_28c478:
    // 0x28c478: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x28c478u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_28c47c:
    // 0x28c47c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x28c47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_28c480:
    // 0x28c480: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x28c480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_28c484:
    // 0x28c484: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x28c484u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_28c488:
    // 0x28c488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c48c:
    // 0x28c48c: 0x0  nop
    ctx->pc = 0x28c48cu;
    // NOP
label_28c490:
    // 0x28c490: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28c494:
    // 0x28c494: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28c494u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28c498:
    // 0x28c498: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28c498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28c49c:
    // 0x28c49c: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x28c49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_28c4a0:
    // 0x28c4a0: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x28c4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_28c4a4:
    // 0x28c4a4: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x28c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_28c4a8:
    // 0x28c4a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c4ac:
    // 0x28c4ac: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x28c4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_28c4b0:
    // 0x28c4b0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28c4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28c4b4:
    // 0x28c4b4: 0xc106598  jal         func_419660
label_28c4b8:
    if (ctx->pc == 0x28C4B8u) {
        ctx->pc = 0x28C4BCu;
        goto label_28c4bc;
    }
    ctx->pc = 0x28C4B4u;
    SET_GPR_U32(ctx, 31, 0x28C4BCu);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x28C4B4u, 0x28C4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C4BCu;
label_28c4bc:
    // 0x28c4bc: 0x10000051  b           . + 4 + (0x51 << 2)
label_28c4c0:
    if (ctx->pc == 0x28C4C0u) {
        ctx->pc = 0x28C4C4u;
        goto label_28c4c4;
    }
    ctx->pc = 0x28C4BCu;
    {
        const bool branch_taken_0x28c4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c4bc) {
            ctx->pc = 0x28C604u;
            goto label_28c604;
        }
    }
    ctx->pc = 0x28C4C4u;
label_28c4c4:
    // 0x28c4c4: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x28c4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
label_28c4c8:
    // 0x28c4c8: 0x8c850038  lw          $a1, 0x38($a0)
    ctx->pc = 0x28c4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_28c4cc:
    // 0x28c4cc: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x28c4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_28c4d0:
    // 0x28c4d0: 0x8fa70310  lw          $a3, 0x310($sp)
    ctx->pc = 0x28c4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_28c4d4:
    // 0x28c4d4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x28c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_28c4d8:
    // 0x28c4d8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x28c4d8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_28c4dc:
    // 0x28c4dc: 0x2012  mflo        $a0
    ctx->pc = 0x28c4dcu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_28c4e0:
    // 0x28c4e0: 0xafa40258  sw          $a0, 0x258($sp)
    ctx->pc = 0x28c4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 4));
label_28c4e4:
    // 0x28c4e4: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x28c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
label_28c4e8:
    // 0x28c4e8: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x28c4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_28c4ec:
    // 0x28c4ec: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x28c4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_28c4f0:
    // 0x28c4f0: 0x8fa40310  lw          $a0, 0x310($sp)
    ctx->pc = 0x28c4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_28c4f4:
    // 0x28c4f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x28c4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28c4f8:
    // 0x28c4f8: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x28c4f8u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_28c4fc:
    // 0x28c4fc: 0x1010  mfhi        $v0
    ctx->pc = 0x28c4fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_28c500:
    // 0x28c500: 0xafa20254  sw          $v0, 0x254($sp)
    ctx->pc = 0x28c500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 2));
label_28c504:
    // 0x28c504: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x28c504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_28c508:
    // 0x28c508: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x28c508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_28c50c:
    // 0x28c50c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_28c510:
    if (ctx->pc == 0x28C510u) {
        ctx->pc = 0x28C514u;
        goto label_28c514;
    }
    ctx->pc = 0x28C50Cu;
    {
        const bool branch_taken_0x28c50c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c50c) {
            ctx->pc = 0x28C538u;
            goto label_28c538;
        }
    }
    ctx->pc = 0x28C514u;
label_28c514:
    // 0x28c514: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x28c514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_28c518:
    // 0x28c518: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x28c518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_28c51c:
    // 0x28c51c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x28c51cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_28c520:
    // 0x28c520: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28c520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_28c524:
    // 0x28c524: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x28c524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_28c528:
    // 0x28c528: 0x0  nop
    ctx->pc = 0x28c528u;
    // NOP
label_28c52c:
    // 0x28c52c: 0x0  nop
    ctx->pc = 0x28c52cu;
    // NOP
label_28c530:
    // 0x28c530: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
label_28c534:
    if (ctx->pc == 0x28C534u) {
        ctx->pc = 0x28C538u;
        goto label_28c538;
    }
    ctx->pc = 0x28C530u;
    {
        const bool branch_taken_0x28c530 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c530) {
            ctx->pc = 0x28C51Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28c51c;
        }
    }
    ctx->pc = 0x28C538u;
label_28c538:
    // 0x28c538: 0x3c0442a0  lui         $a0, 0x42A0
    ctx->pc = 0x28c538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17056 << 16));
label_28c53c:
    // 0x28c53c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28c53cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28c540:
    // 0x28c540: 0x8fa50254  lw          $a1, 0x254($sp)
    ctx->pc = 0x28c540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_28c544:
    // 0x28c544: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_28c548:
    if (ctx->pc == 0x28C548u) {
        ctx->pc = 0x28C54Cu;
        goto label_28c54c;
    }
    ctx->pc = 0x28C544u;
    {
        const bool branch_taken_0x28c544 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x28c544) {
            ctx->pc = 0x28C560u;
            goto label_28c560;
        }
    }
    ctx->pc = 0x28C54Cu;
label_28c54c:
    // 0x28c54c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28c54cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c550:
    // 0x28c550: 0x0  nop
    ctx->pc = 0x28c550u;
    // NOP
label_28c554:
    // 0x28c554: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28c558:
    // 0x28c558: 0x10000008  b           . + 4 + (0x8 << 2)
label_28c55c:
    if (ctx->pc == 0x28C55Cu) {
        ctx->pc = 0x28C560u;
        goto label_28c560;
    }
    ctx->pc = 0x28C558u;
    {
        const bool branch_taken_0x28c558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c558) {
            ctx->pc = 0x28C57Cu;
            goto label_28c57c;
        }
    }
    ctx->pc = 0x28C560u;
label_28c560:
    // 0x28c560: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x28c560u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_28c564:
    // 0x28c564: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x28c564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_28c568:
    // 0x28c568: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28c568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28c56c:
    // 0x28c56c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c56cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c570:
    // 0x28c570: 0x0  nop
    ctx->pc = 0x28c570u;
    // NOP
label_28c574:
    // 0x28c574: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28c578:
    // 0x28c578: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28c578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28c57c:
    // 0x28c57c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28c57cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28c580:
    // 0x28c580: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x28c580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_28c584:
    // 0x28c584: 0x3c0442a0  lui         $a0, 0x42A0
    ctx->pc = 0x28c584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17056 << 16));
label_28c588:
    // 0x28c588: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28c588u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28c58c:
    // 0x28c58c: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x28c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_28c590:
    // 0x28c590: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_28c594:
    if (ctx->pc == 0x28C594u) {
        ctx->pc = 0x28C598u;
        goto label_28c598;
    }
    ctx->pc = 0x28C590u;
    {
        const bool branch_taken_0x28c590 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28c590) {
            ctx->pc = 0x28C5ACu;
            goto label_28c5ac;
        }
    }
    ctx->pc = 0x28C598u;
label_28c598:
    // 0x28c598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c59c:
    // 0x28c59c: 0x0  nop
    ctx->pc = 0x28c59cu;
    // NOP
label_28c5a0:
    // 0x28c5a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c5a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28c5a4:
    // 0x28c5a4: 0x1000000c  b           . + 4 + (0xC << 2)
label_28c5a8:
    if (ctx->pc == 0x28C5A8u) {
        ctx->pc = 0x28C5ACu;
        goto label_28c5ac;
    }
    ctx->pc = 0x28C5A4u;
    {
        const bool branch_taken_0x28c5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c5a4) {
            ctx->pc = 0x28C5D8u;
            goto label_28c5d8;
        }
    }
    ctx->pc = 0x28C5ACu;
label_28c5ac:
    // 0x28c5ac: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x28c5acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_28c5b0:
    // 0x28c5b0: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x28c5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_28c5b4:
    // 0x28c5b4: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x28c5b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28c5b8:
    // 0x28c5b8: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x28c5b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_28c5bc:
    // 0x28c5bc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x28c5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_28c5c0:
    // 0x28c5c0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x28c5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_28c5c4:
    // 0x28c5c4: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x28c5c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_28c5c8:
    // 0x28c5c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c5c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c5cc:
    // 0x28c5cc: 0x0  nop
    ctx->pc = 0x28c5ccu;
    // NOP
label_28c5d0:
    // 0x28c5d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c5d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28c5d4:
    // 0x28c5d4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28c5d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28c5d8:
    // 0x28c5d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28c5d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28c5dc:
    // 0x28c5dc: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x28c5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_28c5e0:
    // 0x28c5e0: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x28c5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_28c5e4:
    // 0x28c5e4: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x28c5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_28c5e8:
    // 0x28c5e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28c5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28c5ec:
    // 0x28c5ec: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x28c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_28c5f0:
    // 0x28c5f0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x28c5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28c5f4:
    // 0x28c5f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28c5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28c5f8:
    // 0x28c5f8: 0xc106598  jal         func_419660
label_28c5fc:
    if (ctx->pc == 0x28C5FCu) {
        ctx->pc = 0x28C600u;
        goto label_28c600;
    }
    ctx->pc = 0x28C5F8u;
    SET_GPR_U32(ctx, 31, 0x28C600u);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x28C5F8u, 0x28C600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C600u;
label_28c600:
    // 0x28c600: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x28c600u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c604:
    // 0x28c604: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x28c604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_28c608:
    // 0x28c608: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x28c608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_28c60c:
    // 0x28c60c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x28c60cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_28c610:
    // 0x28c610: 0x27a20264  addiu       $v0, $sp, 0x264
    ctx->pc = 0x28c610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 612));
label_28c614:
    // 0x28c614: 0xafa201ec  sw          $v0, 0x1EC($sp)
    ctx->pc = 0x28c614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
label_28c618:
    // 0x28c618: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x28c618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_28c61c:
    // 0x28c61c: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x28c61cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_28c620:
    // 0x28c620: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x28c620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28c624:
    // 0x28c624: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x28c624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_28c628:
    // 0x28c628: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28c628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c62c:
    // 0x28c62c: 0xc0e2700  jal         func_389C00
label_28c630:
    if (ctx->pc == 0x28C630u) {
        ctx->pc = 0x28C634u;
        goto label_28c634;
    }
    ctx->pc = 0x28C62Cu;
    SET_GPR_U32(ctx, 31, 0x28C634u);
    ctx->pc = 0x389C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389C00u, 0x28C62Cu, 0x28C634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C634u;
label_28c634:
    // 0x28c634: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28c634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c638:
    // 0x28c638: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x28c638u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_28c63c:
    // 0x28c63c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x28c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_28c640:
    // 0x28c640: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c644:
    // 0x28c644: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x28c644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_28c648:
    // 0x28c648: 0xc10671c  jal         func_419C70
label_28c64c:
    if (ctx->pc == 0x28C64Cu) {
        ctx->pc = 0x28C650u;
        goto label_28c650;
    }
    ctx->pc = 0x28C648u;
    SET_GPR_U32(ctx, 31, 0x28C650u);
    ctx->pc = 0x419C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419C70u, 0x28C648u, 0x28C650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C650u;
label_28c650:
    // 0x28c650: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x28c650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_28c654:
    // 0x28c654: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28c658:
    // 0x28c658: 0xc0e3414  jal         func_38D050
label_28c65c:
    if (ctx->pc == 0x28C65Cu) {
        ctx->pc = 0x28C660u;
        goto label_28c660;
    }
    ctx->pc = 0x28C658u;
    SET_GPR_U32(ctx, 31, 0x28C660u);
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x28C658u, 0x28C660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C660u;
label_28c660:
    // 0x28c660: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c664:
    // 0x28c664: 0x8fa2028c  lw          $v0, 0x28C($sp)
    ctx->pc = 0x28c664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
label_28c668:
    // 0x28c668: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c66c:
    // 0x28c66c: 0xc0e39c0  jal         func_38E700
label_28c670:
    if (ctx->pc == 0x28C670u) {
        ctx->pc = 0x28C674u;
        goto label_28c674;
    }
    ctx->pc = 0x28C66Cu;
    SET_GPR_U32(ctx, 31, 0x28C674u);
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x28C66Cu, 0x28C674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C674u;
label_28c674:
    // 0x28c674: 0x8fa40288  lw          $a0, 0x288($sp)
    ctx->pc = 0x28c674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_28c678:
    // 0x28c678: 0xc0e39c0  jal         func_38E700
label_28c67c:
    if (ctx->pc == 0x28C67Cu) {
        ctx->pc = 0x28C680u;
        goto label_28c680;
    }
    ctx->pc = 0x28C678u;
    SET_GPR_U32(ctx, 31, 0x28C680u);
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x28C678u, 0x28C680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C680u;
label_28c680:
    // 0x28c680: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x28c680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_28c684:
    // 0x28c684: 0x8fa40284  lw          $a0, 0x284($sp)
    ctx->pc = 0x28c684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
label_28c688:
    // 0x28c688: 0xc0e39c0  jal         func_38E700
label_28c68c:
    if (ctx->pc == 0x28C68Cu) {
        ctx->pc = 0x28C690u;
        goto label_28c690;
    }
    ctx->pc = 0x28C688u;
    SET_GPR_U32(ctx, 31, 0x28C690u);
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x28C688u, 0x28C690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C690u;
label_28c690:
    // 0x28c690: 0x8fb00264  lw          $s0, 0x264($sp)
    ctx->pc = 0x28c690u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_28c694:
    // 0x28c694: 0xafb0024c  sw          $s0, 0x24C($sp)
    ctx->pc = 0x28c694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 16));
label_28c698:
    // 0x28c698: 0x27b201d0  addiu       $s2, $sp, 0x1D0
    ctx->pc = 0x28c698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_28c69c:
    // 0x28c69c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28c69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28c6a0:
    // 0x28c6a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28c6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28c6a4:
    // 0x28c6a4: 0xc0a2a04  jal         func_28A810
label_28c6a8:
    if (ctx->pc == 0x28C6A8u) {
        ctx->pc = 0x28C6ACu;
        goto label_28c6ac;
    }
    ctx->pc = 0x28C6A4u;
    SET_GPR_U32(ctx, 31, 0x28C6ACu);
    ctx->pc = 0x28A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A810u, 0x28C6A4u, 0x28C6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C6ACu;
label_28c6ac:
    // 0x28c6ac: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x28c6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_28c6b0:
    // 0x28c6b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28c6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28c6b4:
    // 0x28c6b4: 0xc0a2a04  jal         func_28A810
label_28c6b8:
    if (ctx->pc == 0x28C6B8u) {
        ctx->pc = 0x28C6BCu;
        goto label_28c6bc;
    }
    ctx->pc = 0x28C6B4u;
    SET_GPR_U32(ctx, 31, 0x28C6BCu);
    ctx->pc = 0x28A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A810u, 0x28C6B4u, 0x28C6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C6BCu;
label_28c6bc:
    // 0x28c6bc: 0x8fa3024c  lw          $v1, 0x24C($sp)
    ctx->pc = 0x28c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_28c6c0:
    // 0x28c6c0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x28c6c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28c6c4:
    // 0x28c6c4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x28c6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_28c6c8:
    // 0x28c6c8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x28c6c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28c6cc:
    // 0x28c6cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28c6ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28c6d0:
    // 0x28c6d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28c6d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28c6d4:
    // 0x28c6d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28c6d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28c6d8:
    // 0x28c6d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28c6d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28c6dc:
    // 0x28c6dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28c6dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28c6e0:
    // 0x28c6e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28c6e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28c6e4:
    // 0x28c6e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28c6e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28c6e8:
    // 0x28c6e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28c6e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28c6ec:
    // 0x28c6ec: 0x27bd0340  addiu       $sp, $sp, 0x340
    ctx->pc = 0x28c6ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_28c6f0:
    // 0x28c6f0: 0x3e00008  jr          $ra
label_28c6f4:
    if (ctx->pc == 0x28C6F4u) {
        ctx->pc = 0x28C6F8u;
        goto label_28c6f8;
    }
    ctx->pc = 0x28C6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28C6F8u;
label_28c6f8:
    // 0x28c6f8: 0x0  nop
    ctx->pc = 0x28c6f8u;
    // NOP
label_28c6fc:
    // 0x28c6fc: 0x0  nop
    ctx->pc = 0x28c6fcu;
    // NOP
    ctx->pc = 0x28c700u;
}
