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

// Function: sub_0011AF10
// Address: 0x11af10 - 0x11bf30
void sub_0011AF10_0x11af10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AF10_0x11af10");
#endif

    switch (ctx->pc) {
        case 0x11af10u: goto label_11af10;
        case 0x11af14u: goto label_11af14;
        case 0x11af18u: goto label_11af18;
        case 0x11af1cu: goto label_11af1c;
        case 0x11af20u: goto label_11af20;
        case 0x11af24u: goto label_11af24;
        case 0x11af28u: goto label_11af28;
        case 0x11af2cu: goto label_11af2c;
        case 0x11af30u: goto label_11af30;
        case 0x11af34u: goto label_11af34;
        case 0x11af38u: goto label_11af38;
        case 0x11af3cu: goto label_11af3c;
        case 0x11af40u: goto label_11af40;
        case 0x11af44u: goto label_11af44;
        case 0x11af48u: goto label_11af48;
        case 0x11af4cu: goto label_11af4c;
        case 0x11af50u: goto label_11af50;
        case 0x11af54u: goto label_11af54;
        case 0x11af58u: goto label_11af58;
        case 0x11af5cu: goto label_11af5c;
        case 0x11af60u: goto label_11af60;
        case 0x11af64u: goto label_11af64;
        case 0x11af68u: goto label_11af68;
        case 0x11af6cu: goto label_11af6c;
        case 0x11af70u: goto label_11af70;
        case 0x11af74u: goto label_11af74;
        case 0x11af78u: goto label_11af78;
        case 0x11af7cu: goto label_11af7c;
        case 0x11af80u: goto label_11af80;
        case 0x11af84u: goto label_11af84;
        case 0x11af88u: goto label_11af88;
        case 0x11af8cu: goto label_11af8c;
        case 0x11af90u: goto label_11af90;
        case 0x11af94u: goto label_11af94;
        case 0x11af98u: goto label_11af98;
        case 0x11af9cu: goto label_11af9c;
        case 0x11afa0u: goto label_11afa0;
        case 0x11afa4u: goto label_11afa4;
        case 0x11afa8u: goto label_11afa8;
        case 0x11afacu: goto label_11afac;
        case 0x11afb0u: goto label_11afb0;
        case 0x11afb4u: goto label_11afb4;
        case 0x11afb8u: goto label_11afb8;
        case 0x11afbcu: goto label_11afbc;
        case 0x11afc0u: goto label_11afc0;
        case 0x11afc4u: goto label_11afc4;
        case 0x11afc8u: goto label_11afc8;
        case 0x11afccu: goto label_11afcc;
        case 0x11afd0u: goto label_11afd0;
        case 0x11afd4u: goto label_11afd4;
        case 0x11afd8u: goto label_11afd8;
        case 0x11afdcu: goto label_11afdc;
        case 0x11afe0u: goto label_11afe0;
        case 0x11afe4u: goto label_11afe4;
        case 0x11afe8u: goto label_11afe8;
        case 0x11afecu: goto label_11afec;
        case 0x11aff0u: goto label_11aff0;
        case 0x11aff4u: goto label_11aff4;
        case 0x11aff8u: goto label_11aff8;
        case 0x11affcu: goto label_11affc;
        case 0x11b000u: goto label_11b000;
        case 0x11b004u: goto label_11b004;
        case 0x11b008u: goto label_11b008;
        case 0x11b00cu: goto label_11b00c;
        case 0x11b010u: goto label_11b010;
        case 0x11b014u: goto label_11b014;
        case 0x11b018u: goto label_11b018;
        case 0x11b01cu: goto label_11b01c;
        case 0x11b020u: goto label_11b020;
        case 0x11b024u: goto label_11b024;
        case 0x11b028u: goto label_11b028;
        case 0x11b02cu: goto label_11b02c;
        case 0x11b030u: goto label_11b030;
        case 0x11b034u: goto label_11b034;
        case 0x11b038u: goto label_11b038;
        case 0x11b03cu: goto label_11b03c;
        case 0x11b040u: goto label_11b040;
        case 0x11b044u: goto label_11b044;
        case 0x11b048u: goto label_11b048;
        case 0x11b04cu: goto label_11b04c;
        case 0x11b050u: goto label_11b050;
        case 0x11b054u: goto label_11b054;
        case 0x11b058u: goto label_11b058;
        case 0x11b05cu: goto label_11b05c;
        case 0x11b060u: goto label_11b060;
        case 0x11b064u: goto label_11b064;
        case 0x11b068u: goto label_11b068;
        case 0x11b06cu: goto label_11b06c;
        case 0x11b070u: goto label_11b070;
        case 0x11b074u: goto label_11b074;
        case 0x11b078u: goto label_11b078;
        case 0x11b07cu: goto label_11b07c;
        case 0x11b080u: goto label_11b080;
        case 0x11b084u: goto label_11b084;
        case 0x11b088u: goto label_11b088;
        case 0x11b08cu: goto label_11b08c;
        case 0x11b090u: goto label_11b090;
        case 0x11b094u: goto label_11b094;
        case 0x11b098u: goto label_11b098;
        case 0x11b09cu: goto label_11b09c;
        case 0x11b0a0u: goto label_11b0a0;
        case 0x11b0a4u: goto label_11b0a4;
        case 0x11b0a8u: goto label_11b0a8;
        case 0x11b0acu: goto label_11b0ac;
        case 0x11b0b0u: goto label_11b0b0;
        case 0x11b0b4u: goto label_11b0b4;
        case 0x11b0b8u: goto label_11b0b8;
        case 0x11b0bcu: goto label_11b0bc;
        case 0x11b0c0u: goto label_11b0c0;
        case 0x11b0c4u: goto label_11b0c4;
        case 0x11b0c8u: goto label_11b0c8;
        case 0x11b0ccu: goto label_11b0cc;
        case 0x11b0d0u: goto label_11b0d0;
        case 0x11b0d4u: goto label_11b0d4;
        case 0x11b0d8u: goto label_11b0d8;
        case 0x11b0dcu: goto label_11b0dc;
        case 0x11b0e0u: goto label_11b0e0;
        case 0x11b0e4u: goto label_11b0e4;
        case 0x11b0e8u: goto label_11b0e8;
        case 0x11b0ecu: goto label_11b0ec;
        case 0x11b0f0u: goto label_11b0f0;
        case 0x11b0f4u: goto label_11b0f4;
        case 0x11b0f8u: goto label_11b0f8;
        case 0x11b0fcu: goto label_11b0fc;
        case 0x11b100u: goto label_11b100;
        case 0x11b104u: goto label_11b104;
        case 0x11b108u: goto label_11b108;
        case 0x11b10cu: goto label_11b10c;
        case 0x11b110u: goto label_11b110;
        case 0x11b114u: goto label_11b114;
        case 0x11b118u: goto label_11b118;
        case 0x11b11cu: goto label_11b11c;
        case 0x11b120u: goto label_11b120;
        case 0x11b124u: goto label_11b124;
        case 0x11b128u: goto label_11b128;
        case 0x11b12cu: goto label_11b12c;
        case 0x11b130u: goto label_11b130;
        case 0x11b134u: goto label_11b134;
        case 0x11b138u: goto label_11b138;
        case 0x11b13cu: goto label_11b13c;
        case 0x11b140u: goto label_11b140;
        case 0x11b144u: goto label_11b144;
        case 0x11b148u: goto label_11b148;
        case 0x11b14cu: goto label_11b14c;
        case 0x11b150u: goto label_11b150;
        case 0x11b154u: goto label_11b154;
        case 0x11b158u: goto label_11b158;
        case 0x11b15cu: goto label_11b15c;
        case 0x11b160u: goto label_11b160;
        case 0x11b164u: goto label_11b164;
        case 0x11b168u: goto label_11b168;
        case 0x11b16cu: goto label_11b16c;
        case 0x11b170u: goto label_11b170;
        case 0x11b174u: goto label_11b174;
        case 0x11b178u: goto label_11b178;
        case 0x11b17cu: goto label_11b17c;
        case 0x11b180u: goto label_11b180;
        case 0x11b184u: goto label_11b184;
        case 0x11b188u: goto label_11b188;
        case 0x11b18cu: goto label_11b18c;
        case 0x11b190u: goto label_11b190;
        case 0x11b194u: goto label_11b194;
        case 0x11b198u: goto label_11b198;
        case 0x11b19cu: goto label_11b19c;
        case 0x11b1a0u: goto label_11b1a0;
        case 0x11b1a4u: goto label_11b1a4;
        case 0x11b1a8u: goto label_11b1a8;
        case 0x11b1acu: goto label_11b1ac;
        case 0x11b1b0u: goto label_11b1b0;
        case 0x11b1b4u: goto label_11b1b4;
        case 0x11b1b8u: goto label_11b1b8;
        case 0x11b1bcu: goto label_11b1bc;
        case 0x11b1c0u: goto label_11b1c0;
        case 0x11b1c4u: goto label_11b1c4;
        case 0x11b1c8u: goto label_11b1c8;
        case 0x11b1ccu: goto label_11b1cc;
        case 0x11b1d0u: goto label_11b1d0;
        case 0x11b1d4u: goto label_11b1d4;
        case 0x11b1d8u: goto label_11b1d8;
        case 0x11b1dcu: goto label_11b1dc;
        case 0x11b1e0u: goto label_11b1e0;
        case 0x11b1e4u: goto label_11b1e4;
        case 0x11b1e8u: goto label_11b1e8;
        case 0x11b1ecu: goto label_11b1ec;
        case 0x11b1f0u: goto label_11b1f0;
        case 0x11b1f4u: goto label_11b1f4;
        case 0x11b1f8u: goto label_11b1f8;
        case 0x11b1fcu: goto label_11b1fc;
        case 0x11b200u: goto label_11b200;
        case 0x11b204u: goto label_11b204;
        case 0x11b208u: goto label_11b208;
        case 0x11b20cu: goto label_11b20c;
        case 0x11b210u: goto label_11b210;
        case 0x11b214u: goto label_11b214;
        case 0x11b218u: goto label_11b218;
        case 0x11b21cu: goto label_11b21c;
        case 0x11b220u: goto label_11b220;
        case 0x11b224u: goto label_11b224;
        case 0x11b228u: goto label_11b228;
        case 0x11b22cu: goto label_11b22c;
        case 0x11b230u: goto label_11b230;
        case 0x11b234u: goto label_11b234;
        case 0x11b238u: goto label_11b238;
        case 0x11b23cu: goto label_11b23c;
        case 0x11b240u: goto label_11b240;
        case 0x11b244u: goto label_11b244;
        case 0x11b248u: goto label_11b248;
        case 0x11b24cu: goto label_11b24c;
        case 0x11b250u: goto label_11b250;
        case 0x11b254u: goto label_11b254;
        case 0x11b258u: goto label_11b258;
        case 0x11b25cu: goto label_11b25c;
        case 0x11b260u: goto label_11b260;
        case 0x11b264u: goto label_11b264;
        case 0x11b268u: goto label_11b268;
        case 0x11b26cu: goto label_11b26c;
        case 0x11b270u: goto label_11b270;
        case 0x11b274u: goto label_11b274;
        case 0x11b278u: goto label_11b278;
        case 0x11b27cu: goto label_11b27c;
        case 0x11b280u: goto label_11b280;
        case 0x11b284u: goto label_11b284;
        case 0x11b288u: goto label_11b288;
        case 0x11b28cu: goto label_11b28c;
        case 0x11b290u: goto label_11b290;
        case 0x11b294u: goto label_11b294;
        case 0x11b298u: goto label_11b298;
        case 0x11b29cu: goto label_11b29c;
        case 0x11b2a0u: goto label_11b2a0;
        case 0x11b2a4u: goto label_11b2a4;
        case 0x11b2a8u: goto label_11b2a8;
        case 0x11b2acu: goto label_11b2ac;
        case 0x11b2b0u: goto label_11b2b0;
        case 0x11b2b4u: goto label_11b2b4;
        case 0x11b2b8u: goto label_11b2b8;
        case 0x11b2bcu: goto label_11b2bc;
        case 0x11b2c0u: goto label_11b2c0;
        case 0x11b2c4u: goto label_11b2c4;
        case 0x11b2c8u: goto label_11b2c8;
        case 0x11b2ccu: goto label_11b2cc;
        case 0x11b2d0u: goto label_11b2d0;
        case 0x11b2d4u: goto label_11b2d4;
        case 0x11b2d8u: goto label_11b2d8;
        case 0x11b2dcu: goto label_11b2dc;
        case 0x11b2e0u: goto label_11b2e0;
        case 0x11b2e4u: goto label_11b2e4;
        case 0x11b2e8u: goto label_11b2e8;
        case 0x11b2ecu: goto label_11b2ec;
        case 0x11b2f0u: goto label_11b2f0;
        case 0x11b2f4u: goto label_11b2f4;
        case 0x11b2f8u: goto label_11b2f8;
        case 0x11b2fcu: goto label_11b2fc;
        case 0x11b300u: goto label_11b300;
        case 0x11b304u: goto label_11b304;
        case 0x11b308u: goto label_11b308;
        case 0x11b30cu: goto label_11b30c;
        case 0x11b310u: goto label_11b310;
        case 0x11b314u: goto label_11b314;
        case 0x11b318u: goto label_11b318;
        case 0x11b31cu: goto label_11b31c;
        case 0x11b320u: goto label_11b320;
        case 0x11b324u: goto label_11b324;
        case 0x11b328u: goto label_11b328;
        case 0x11b32cu: goto label_11b32c;
        case 0x11b330u: goto label_11b330;
        case 0x11b334u: goto label_11b334;
        case 0x11b338u: goto label_11b338;
        case 0x11b33cu: goto label_11b33c;
        case 0x11b340u: goto label_11b340;
        case 0x11b344u: goto label_11b344;
        case 0x11b348u: goto label_11b348;
        case 0x11b34cu: goto label_11b34c;
        case 0x11b350u: goto label_11b350;
        case 0x11b354u: goto label_11b354;
        case 0x11b358u: goto label_11b358;
        case 0x11b35cu: goto label_11b35c;
        case 0x11b360u: goto label_11b360;
        case 0x11b364u: goto label_11b364;
        case 0x11b368u: goto label_11b368;
        case 0x11b36cu: goto label_11b36c;
        case 0x11b370u: goto label_11b370;
        case 0x11b374u: goto label_11b374;
        case 0x11b378u: goto label_11b378;
        case 0x11b37cu: goto label_11b37c;
        case 0x11b380u: goto label_11b380;
        case 0x11b384u: goto label_11b384;
        case 0x11b388u: goto label_11b388;
        case 0x11b38cu: goto label_11b38c;
        case 0x11b390u: goto label_11b390;
        case 0x11b394u: goto label_11b394;
        case 0x11b398u: goto label_11b398;
        case 0x11b39cu: goto label_11b39c;
        case 0x11b3a0u: goto label_11b3a0;
        case 0x11b3a4u: goto label_11b3a4;
        case 0x11b3a8u: goto label_11b3a8;
        case 0x11b3acu: goto label_11b3ac;
        case 0x11b3b0u: goto label_11b3b0;
        case 0x11b3b4u: goto label_11b3b4;
        case 0x11b3b8u: goto label_11b3b8;
        case 0x11b3bcu: goto label_11b3bc;
        case 0x11b3c0u: goto label_11b3c0;
        case 0x11b3c4u: goto label_11b3c4;
        case 0x11b3c8u: goto label_11b3c8;
        case 0x11b3ccu: goto label_11b3cc;
        case 0x11b3d0u: goto label_11b3d0;
        case 0x11b3d4u: goto label_11b3d4;
        case 0x11b3d8u: goto label_11b3d8;
        case 0x11b3dcu: goto label_11b3dc;
        case 0x11b3e0u: goto label_11b3e0;
        case 0x11b3e4u: goto label_11b3e4;
        case 0x11b3e8u: goto label_11b3e8;
        case 0x11b3ecu: goto label_11b3ec;
        case 0x11b3f0u: goto label_11b3f0;
        case 0x11b3f4u: goto label_11b3f4;
        case 0x11b3f8u: goto label_11b3f8;
        case 0x11b3fcu: goto label_11b3fc;
        case 0x11b400u: goto label_11b400;
        case 0x11b404u: goto label_11b404;
        case 0x11b408u: goto label_11b408;
        case 0x11b40cu: goto label_11b40c;
        case 0x11b410u: goto label_11b410;
        case 0x11b414u: goto label_11b414;
        case 0x11b418u: goto label_11b418;
        case 0x11b41cu: goto label_11b41c;
        case 0x11b420u: goto label_11b420;
        case 0x11b424u: goto label_11b424;
        case 0x11b428u: goto label_11b428;
        case 0x11b42cu: goto label_11b42c;
        case 0x11b430u: goto label_11b430;
        case 0x11b434u: goto label_11b434;
        case 0x11b438u: goto label_11b438;
        case 0x11b43cu: goto label_11b43c;
        case 0x11b440u: goto label_11b440;
        case 0x11b444u: goto label_11b444;
        case 0x11b448u: goto label_11b448;
        case 0x11b44cu: goto label_11b44c;
        case 0x11b450u: goto label_11b450;
        case 0x11b454u: goto label_11b454;
        case 0x11b458u: goto label_11b458;
        case 0x11b45cu: goto label_11b45c;
        case 0x11b460u: goto label_11b460;
        case 0x11b464u: goto label_11b464;
        case 0x11b468u: goto label_11b468;
        case 0x11b46cu: goto label_11b46c;
        case 0x11b470u: goto label_11b470;
        case 0x11b474u: goto label_11b474;
        case 0x11b478u: goto label_11b478;
        case 0x11b47cu: goto label_11b47c;
        case 0x11b480u: goto label_11b480;
        case 0x11b484u: goto label_11b484;
        case 0x11b488u: goto label_11b488;
        case 0x11b48cu: goto label_11b48c;
        case 0x11b490u: goto label_11b490;
        case 0x11b494u: goto label_11b494;
        case 0x11b498u: goto label_11b498;
        case 0x11b49cu: goto label_11b49c;
        case 0x11b4a0u: goto label_11b4a0;
        case 0x11b4a4u: goto label_11b4a4;
        case 0x11b4a8u: goto label_11b4a8;
        case 0x11b4acu: goto label_11b4ac;
        case 0x11b4b0u: goto label_11b4b0;
        case 0x11b4b4u: goto label_11b4b4;
        case 0x11b4b8u: goto label_11b4b8;
        case 0x11b4bcu: goto label_11b4bc;
        case 0x11b4c0u: goto label_11b4c0;
        case 0x11b4c4u: goto label_11b4c4;
        case 0x11b4c8u: goto label_11b4c8;
        case 0x11b4ccu: goto label_11b4cc;
        case 0x11b4d0u: goto label_11b4d0;
        case 0x11b4d4u: goto label_11b4d4;
        case 0x11b4d8u: goto label_11b4d8;
        case 0x11b4dcu: goto label_11b4dc;
        case 0x11b4e0u: goto label_11b4e0;
        case 0x11b4e4u: goto label_11b4e4;
        case 0x11b4e8u: goto label_11b4e8;
        case 0x11b4ecu: goto label_11b4ec;
        case 0x11b4f0u: goto label_11b4f0;
        case 0x11b4f4u: goto label_11b4f4;
        case 0x11b4f8u: goto label_11b4f8;
        case 0x11b4fcu: goto label_11b4fc;
        case 0x11b500u: goto label_11b500;
        case 0x11b504u: goto label_11b504;
        case 0x11b508u: goto label_11b508;
        case 0x11b50cu: goto label_11b50c;
        case 0x11b510u: goto label_11b510;
        case 0x11b514u: goto label_11b514;
        case 0x11b518u: goto label_11b518;
        case 0x11b51cu: goto label_11b51c;
        case 0x11b520u: goto label_11b520;
        case 0x11b524u: goto label_11b524;
        case 0x11b528u: goto label_11b528;
        case 0x11b52cu: goto label_11b52c;
        case 0x11b530u: goto label_11b530;
        case 0x11b534u: goto label_11b534;
        case 0x11b538u: goto label_11b538;
        case 0x11b53cu: goto label_11b53c;
        case 0x11b540u: goto label_11b540;
        case 0x11b544u: goto label_11b544;
        case 0x11b548u: goto label_11b548;
        case 0x11b54cu: goto label_11b54c;
        case 0x11b550u: goto label_11b550;
        case 0x11b554u: goto label_11b554;
        case 0x11b558u: goto label_11b558;
        case 0x11b55cu: goto label_11b55c;
        case 0x11b560u: goto label_11b560;
        case 0x11b564u: goto label_11b564;
        case 0x11b568u: goto label_11b568;
        case 0x11b56cu: goto label_11b56c;
        case 0x11b570u: goto label_11b570;
        case 0x11b574u: goto label_11b574;
        case 0x11b578u: goto label_11b578;
        case 0x11b57cu: goto label_11b57c;
        case 0x11b580u: goto label_11b580;
        case 0x11b584u: goto label_11b584;
        case 0x11b588u: goto label_11b588;
        case 0x11b58cu: goto label_11b58c;
        case 0x11b590u: goto label_11b590;
        case 0x11b594u: goto label_11b594;
        case 0x11b598u: goto label_11b598;
        case 0x11b59cu: goto label_11b59c;
        case 0x11b5a0u: goto label_11b5a0;
        case 0x11b5a4u: goto label_11b5a4;
        case 0x11b5a8u: goto label_11b5a8;
        case 0x11b5acu: goto label_11b5ac;
        case 0x11b5b0u: goto label_11b5b0;
        case 0x11b5b4u: goto label_11b5b4;
        case 0x11b5b8u: goto label_11b5b8;
        case 0x11b5bcu: goto label_11b5bc;
        case 0x11b5c0u: goto label_11b5c0;
        case 0x11b5c4u: goto label_11b5c4;
        case 0x11b5c8u: goto label_11b5c8;
        case 0x11b5ccu: goto label_11b5cc;
        case 0x11b5d0u: goto label_11b5d0;
        case 0x11b5d4u: goto label_11b5d4;
        case 0x11b5d8u: goto label_11b5d8;
        case 0x11b5dcu: goto label_11b5dc;
        case 0x11b5e0u: goto label_11b5e0;
        case 0x11b5e4u: goto label_11b5e4;
        case 0x11b5e8u: goto label_11b5e8;
        case 0x11b5ecu: goto label_11b5ec;
        case 0x11b5f0u: goto label_11b5f0;
        case 0x11b5f4u: goto label_11b5f4;
        case 0x11b5f8u: goto label_11b5f8;
        case 0x11b5fcu: goto label_11b5fc;
        case 0x11b600u: goto label_11b600;
        case 0x11b604u: goto label_11b604;
        case 0x11b608u: goto label_11b608;
        case 0x11b60cu: goto label_11b60c;
        case 0x11b610u: goto label_11b610;
        case 0x11b614u: goto label_11b614;
        case 0x11b618u: goto label_11b618;
        case 0x11b61cu: goto label_11b61c;
        case 0x11b620u: goto label_11b620;
        case 0x11b624u: goto label_11b624;
        case 0x11b628u: goto label_11b628;
        case 0x11b62cu: goto label_11b62c;
        case 0x11b630u: goto label_11b630;
        case 0x11b634u: goto label_11b634;
        case 0x11b638u: goto label_11b638;
        case 0x11b63cu: goto label_11b63c;
        case 0x11b640u: goto label_11b640;
        case 0x11b644u: goto label_11b644;
        case 0x11b648u: goto label_11b648;
        case 0x11b64cu: goto label_11b64c;
        case 0x11b650u: goto label_11b650;
        case 0x11b654u: goto label_11b654;
        case 0x11b658u: goto label_11b658;
        case 0x11b65cu: goto label_11b65c;
        case 0x11b660u: goto label_11b660;
        case 0x11b664u: goto label_11b664;
        case 0x11b668u: goto label_11b668;
        case 0x11b66cu: goto label_11b66c;
        case 0x11b670u: goto label_11b670;
        case 0x11b674u: goto label_11b674;
        case 0x11b678u: goto label_11b678;
        case 0x11b67cu: goto label_11b67c;
        case 0x11b680u: goto label_11b680;
        case 0x11b684u: goto label_11b684;
        case 0x11b688u: goto label_11b688;
        case 0x11b68cu: goto label_11b68c;
        case 0x11b690u: goto label_11b690;
        case 0x11b694u: goto label_11b694;
        case 0x11b698u: goto label_11b698;
        case 0x11b69cu: goto label_11b69c;
        case 0x11b6a0u: goto label_11b6a0;
        case 0x11b6a4u: goto label_11b6a4;
        case 0x11b6a8u: goto label_11b6a8;
        case 0x11b6acu: goto label_11b6ac;
        case 0x11b6b0u: goto label_11b6b0;
        case 0x11b6b4u: goto label_11b6b4;
        case 0x11b6b8u: goto label_11b6b8;
        case 0x11b6bcu: goto label_11b6bc;
        case 0x11b6c0u: goto label_11b6c0;
        case 0x11b6c4u: goto label_11b6c4;
        case 0x11b6c8u: goto label_11b6c8;
        case 0x11b6ccu: goto label_11b6cc;
        case 0x11b6d0u: goto label_11b6d0;
        case 0x11b6d4u: goto label_11b6d4;
        case 0x11b6d8u: goto label_11b6d8;
        case 0x11b6dcu: goto label_11b6dc;
        case 0x11b6e0u: goto label_11b6e0;
        case 0x11b6e4u: goto label_11b6e4;
        case 0x11b6e8u: goto label_11b6e8;
        case 0x11b6ecu: goto label_11b6ec;
        case 0x11b6f0u: goto label_11b6f0;
        case 0x11b6f4u: goto label_11b6f4;
        case 0x11b6f8u: goto label_11b6f8;
        case 0x11b6fcu: goto label_11b6fc;
        case 0x11b700u: goto label_11b700;
        case 0x11b704u: goto label_11b704;
        case 0x11b708u: goto label_11b708;
        case 0x11b70cu: goto label_11b70c;
        case 0x11b710u: goto label_11b710;
        case 0x11b714u: goto label_11b714;
        case 0x11b718u: goto label_11b718;
        case 0x11b71cu: goto label_11b71c;
        case 0x11b720u: goto label_11b720;
        case 0x11b724u: goto label_11b724;
        case 0x11b728u: goto label_11b728;
        case 0x11b72cu: goto label_11b72c;
        case 0x11b730u: goto label_11b730;
        case 0x11b734u: goto label_11b734;
        case 0x11b738u: goto label_11b738;
        case 0x11b73cu: goto label_11b73c;
        case 0x11b740u: goto label_11b740;
        case 0x11b744u: goto label_11b744;
        case 0x11b748u: goto label_11b748;
        case 0x11b74cu: goto label_11b74c;
        case 0x11b750u: goto label_11b750;
        case 0x11b754u: goto label_11b754;
        case 0x11b758u: goto label_11b758;
        case 0x11b75cu: goto label_11b75c;
        case 0x11b760u: goto label_11b760;
        case 0x11b764u: goto label_11b764;
        case 0x11b768u: goto label_11b768;
        case 0x11b76cu: goto label_11b76c;
        case 0x11b770u: goto label_11b770;
        case 0x11b774u: goto label_11b774;
        case 0x11b778u: goto label_11b778;
        case 0x11b77cu: goto label_11b77c;
        case 0x11b780u: goto label_11b780;
        case 0x11b784u: goto label_11b784;
        case 0x11b788u: goto label_11b788;
        case 0x11b78cu: goto label_11b78c;
        case 0x11b790u: goto label_11b790;
        case 0x11b794u: goto label_11b794;
        case 0x11b798u: goto label_11b798;
        case 0x11b79cu: goto label_11b79c;
        case 0x11b7a0u: goto label_11b7a0;
        case 0x11b7a4u: goto label_11b7a4;
        case 0x11b7a8u: goto label_11b7a8;
        case 0x11b7acu: goto label_11b7ac;
        case 0x11b7b0u: goto label_11b7b0;
        case 0x11b7b4u: goto label_11b7b4;
        case 0x11b7b8u: goto label_11b7b8;
        case 0x11b7bcu: goto label_11b7bc;
        case 0x11b7c0u: goto label_11b7c0;
        case 0x11b7c4u: goto label_11b7c4;
        case 0x11b7c8u: goto label_11b7c8;
        case 0x11b7ccu: goto label_11b7cc;
        case 0x11b7d0u: goto label_11b7d0;
        case 0x11b7d4u: goto label_11b7d4;
        case 0x11b7d8u: goto label_11b7d8;
        case 0x11b7dcu: goto label_11b7dc;
        case 0x11b7e0u: goto label_11b7e0;
        case 0x11b7e4u: goto label_11b7e4;
        case 0x11b7e8u: goto label_11b7e8;
        case 0x11b7ecu: goto label_11b7ec;
        case 0x11b7f0u: goto label_11b7f0;
        case 0x11b7f4u: goto label_11b7f4;
        case 0x11b7f8u: goto label_11b7f8;
        case 0x11b7fcu: goto label_11b7fc;
        case 0x11b800u: goto label_11b800;
        case 0x11b804u: goto label_11b804;
        case 0x11b808u: goto label_11b808;
        case 0x11b80cu: goto label_11b80c;
        case 0x11b810u: goto label_11b810;
        case 0x11b814u: goto label_11b814;
        case 0x11b818u: goto label_11b818;
        case 0x11b81cu: goto label_11b81c;
        case 0x11b820u: goto label_11b820;
        case 0x11b824u: goto label_11b824;
        case 0x11b828u: goto label_11b828;
        case 0x11b82cu: goto label_11b82c;
        case 0x11b830u: goto label_11b830;
        case 0x11b834u: goto label_11b834;
        case 0x11b838u: goto label_11b838;
        case 0x11b83cu: goto label_11b83c;
        case 0x11b840u: goto label_11b840;
        case 0x11b844u: goto label_11b844;
        case 0x11b848u: goto label_11b848;
        case 0x11b84cu: goto label_11b84c;
        case 0x11b850u: goto label_11b850;
        case 0x11b854u: goto label_11b854;
        case 0x11b858u: goto label_11b858;
        case 0x11b85cu: goto label_11b85c;
        case 0x11b860u: goto label_11b860;
        case 0x11b864u: goto label_11b864;
        case 0x11b868u: goto label_11b868;
        case 0x11b86cu: goto label_11b86c;
        case 0x11b870u: goto label_11b870;
        case 0x11b874u: goto label_11b874;
        case 0x11b878u: goto label_11b878;
        case 0x11b87cu: goto label_11b87c;
        case 0x11b880u: goto label_11b880;
        case 0x11b884u: goto label_11b884;
        case 0x11b888u: goto label_11b888;
        case 0x11b88cu: goto label_11b88c;
        case 0x11b890u: goto label_11b890;
        case 0x11b894u: goto label_11b894;
        case 0x11b898u: goto label_11b898;
        case 0x11b89cu: goto label_11b89c;
        case 0x11b8a0u: goto label_11b8a0;
        case 0x11b8a4u: goto label_11b8a4;
        case 0x11b8a8u: goto label_11b8a8;
        case 0x11b8acu: goto label_11b8ac;
        case 0x11b8b0u: goto label_11b8b0;
        case 0x11b8b4u: goto label_11b8b4;
        case 0x11b8b8u: goto label_11b8b8;
        case 0x11b8bcu: goto label_11b8bc;
        case 0x11b8c0u: goto label_11b8c0;
        case 0x11b8c4u: goto label_11b8c4;
        case 0x11b8c8u: goto label_11b8c8;
        case 0x11b8ccu: goto label_11b8cc;
        case 0x11b8d0u: goto label_11b8d0;
        case 0x11b8d4u: goto label_11b8d4;
        case 0x11b8d8u: goto label_11b8d8;
        case 0x11b8dcu: goto label_11b8dc;
        case 0x11b8e0u: goto label_11b8e0;
        case 0x11b8e4u: goto label_11b8e4;
        case 0x11b8e8u: goto label_11b8e8;
        case 0x11b8ecu: goto label_11b8ec;
        case 0x11b8f0u: goto label_11b8f0;
        case 0x11b8f4u: goto label_11b8f4;
        case 0x11b8f8u: goto label_11b8f8;
        case 0x11b8fcu: goto label_11b8fc;
        case 0x11b900u: goto label_11b900;
        case 0x11b904u: goto label_11b904;
        case 0x11b908u: goto label_11b908;
        case 0x11b90cu: goto label_11b90c;
        case 0x11b910u: goto label_11b910;
        case 0x11b914u: goto label_11b914;
        case 0x11b918u: goto label_11b918;
        case 0x11b91cu: goto label_11b91c;
        case 0x11b920u: goto label_11b920;
        case 0x11b924u: goto label_11b924;
        case 0x11b928u: goto label_11b928;
        case 0x11b92cu: goto label_11b92c;
        case 0x11b930u: goto label_11b930;
        case 0x11b934u: goto label_11b934;
        case 0x11b938u: goto label_11b938;
        case 0x11b93cu: goto label_11b93c;
        case 0x11b940u: goto label_11b940;
        case 0x11b944u: goto label_11b944;
        case 0x11b948u: goto label_11b948;
        case 0x11b94cu: goto label_11b94c;
        case 0x11b950u: goto label_11b950;
        case 0x11b954u: goto label_11b954;
        case 0x11b958u: goto label_11b958;
        case 0x11b95cu: goto label_11b95c;
        case 0x11b960u: goto label_11b960;
        case 0x11b964u: goto label_11b964;
        case 0x11b968u: goto label_11b968;
        case 0x11b96cu: goto label_11b96c;
        case 0x11b970u: goto label_11b970;
        case 0x11b974u: goto label_11b974;
        case 0x11b978u: goto label_11b978;
        case 0x11b97cu: goto label_11b97c;
        case 0x11b980u: goto label_11b980;
        case 0x11b984u: goto label_11b984;
        case 0x11b988u: goto label_11b988;
        case 0x11b98cu: goto label_11b98c;
        case 0x11b990u: goto label_11b990;
        case 0x11b994u: goto label_11b994;
        case 0x11b998u: goto label_11b998;
        case 0x11b99cu: goto label_11b99c;
        case 0x11b9a0u: goto label_11b9a0;
        case 0x11b9a4u: goto label_11b9a4;
        case 0x11b9a8u: goto label_11b9a8;
        case 0x11b9acu: goto label_11b9ac;
        case 0x11b9b0u: goto label_11b9b0;
        case 0x11b9b4u: goto label_11b9b4;
        case 0x11b9b8u: goto label_11b9b8;
        case 0x11b9bcu: goto label_11b9bc;
        case 0x11b9c0u: goto label_11b9c0;
        case 0x11b9c4u: goto label_11b9c4;
        case 0x11b9c8u: goto label_11b9c8;
        case 0x11b9ccu: goto label_11b9cc;
        case 0x11b9d0u: goto label_11b9d0;
        case 0x11b9d4u: goto label_11b9d4;
        case 0x11b9d8u: goto label_11b9d8;
        case 0x11b9dcu: goto label_11b9dc;
        case 0x11b9e0u: goto label_11b9e0;
        case 0x11b9e4u: goto label_11b9e4;
        case 0x11b9e8u: goto label_11b9e8;
        case 0x11b9ecu: goto label_11b9ec;
        case 0x11b9f0u: goto label_11b9f0;
        case 0x11b9f4u: goto label_11b9f4;
        case 0x11b9f8u: goto label_11b9f8;
        case 0x11b9fcu: goto label_11b9fc;
        case 0x11ba00u: goto label_11ba00;
        case 0x11ba04u: goto label_11ba04;
        case 0x11ba08u: goto label_11ba08;
        case 0x11ba0cu: goto label_11ba0c;
        case 0x11ba10u: goto label_11ba10;
        case 0x11ba14u: goto label_11ba14;
        case 0x11ba18u: goto label_11ba18;
        case 0x11ba1cu: goto label_11ba1c;
        case 0x11ba20u: goto label_11ba20;
        case 0x11ba24u: goto label_11ba24;
        case 0x11ba28u: goto label_11ba28;
        case 0x11ba2cu: goto label_11ba2c;
        case 0x11ba30u: goto label_11ba30;
        case 0x11ba34u: goto label_11ba34;
        case 0x11ba38u: goto label_11ba38;
        case 0x11ba3cu: goto label_11ba3c;
        case 0x11ba40u: goto label_11ba40;
        case 0x11ba44u: goto label_11ba44;
        case 0x11ba48u: goto label_11ba48;
        case 0x11ba4cu: goto label_11ba4c;
        case 0x11ba50u: goto label_11ba50;
        case 0x11ba54u: goto label_11ba54;
        case 0x11ba58u: goto label_11ba58;
        case 0x11ba5cu: goto label_11ba5c;
        case 0x11ba60u: goto label_11ba60;
        case 0x11ba64u: goto label_11ba64;
        case 0x11ba68u: goto label_11ba68;
        case 0x11ba6cu: goto label_11ba6c;
        case 0x11ba70u: goto label_11ba70;
        case 0x11ba74u: goto label_11ba74;
        case 0x11ba78u: goto label_11ba78;
        case 0x11ba7cu: goto label_11ba7c;
        case 0x11ba80u: goto label_11ba80;
        case 0x11ba84u: goto label_11ba84;
        case 0x11ba88u: goto label_11ba88;
        case 0x11ba8cu: goto label_11ba8c;
        case 0x11ba90u: goto label_11ba90;
        case 0x11ba94u: goto label_11ba94;
        case 0x11ba98u: goto label_11ba98;
        case 0x11ba9cu: goto label_11ba9c;
        case 0x11baa0u: goto label_11baa0;
        case 0x11baa4u: goto label_11baa4;
        case 0x11baa8u: goto label_11baa8;
        case 0x11baacu: goto label_11baac;
        case 0x11bab0u: goto label_11bab0;
        case 0x11bab4u: goto label_11bab4;
        case 0x11bab8u: goto label_11bab8;
        case 0x11babcu: goto label_11babc;
        case 0x11bac0u: goto label_11bac0;
        case 0x11bac4u: goto label_11bac4;
        case 0x11bac8u: goto label_11bac8;
        case 0x11baccu: goto label_11bacc;
        case 0x11bad0u: goto label_11bad0;
        case 0x11bad4u: goto label_11bad4;
        case 0x11bad8u: goto label_11bad8;
        case 0x11badcu: goto label_11badc;
        case 0x11bae0u: goto label_11bae0;
        case 0x11bae4u: goto label_11bae4;
        case 0x11bae8u: goto label_11bae8;
        case 0x11baecu: goto label_11baec;
        case 0x11baf0u: goto label_11baf0;
        case 0x11baf4u: goto label_11baf4;
        case 0x11baf8u: goto label_11baf8;
        case 0x11bafcu: goto label_11bafc;
        case 0x11bb00u: goto label_11bb00;
        case 0x11bb04u: goto label_11bb04;
        case 0x11bb08u: goto label_11bb08;
        case 0x11bb0cu: goto label_11bb0c;
        case 0x11bb10u: goto label_11bb10;
        case 0x11bb14u: goto label_11bb14;
        case 0x11bb18u: goto label_11bb18;
        case 0x11bb1cu: goto label_11bb1c;
        case 0x11bb20u: goto label_11bb20;
        case 0x11bb24u: goto label_11bb24;
        case 0x11bb28u: goto label_11bb28;
        case 0x11bb2cu: goto label_11bb2c;
        case 0x11bb30u: goto label_11bb30;
        case 0x11bb34u: goto label_11bb34;
        case 0x11bb38u: goto label_11bb38;
        case 0x11bb3cu: goto label_11bb3c;
        case 0x11bb40u: goto label_11bb40;
        case 0x11bb44u: goto label_11bb44;
        case 0x11bb48u: goto label_11bb48;
        case 0x11bb4cu: goto label_11bb4c;
        case 0x11bb50u: goto label_11bb50;
        case 0x11bb54u: goto label_11bb54;
        case 0x11bb58u: goto label_11bb58;
        case 0x11bb5cu: goto label_11bb5c;
        case 0x11bb60u: goto label_11bb60;
        case 0x11bb64u: goto label_11bb64;
        case 0x11bb68u: goto label_11bb68;
        case 0x11bb6cu: goto label_11bb6c;
        case 0x11bb70u: goto label_11bb70;
        case 0x11bb74u: goto label_11bb74;
        case 0x11bb78u: goto label_11bb78;
        case 0x11bb7cu: goto label_11bb7c;
        case 0x11bb80u: goto label_11bb80;
        case 0x11bb84u: goto label_11bb84;
        case 0x11bb88u: goto label_11bb88;
        case 0x11bb8cu: goto label_11bb8c;
        case 0x11bb90u: goto label_11bb90;
        case 0x11bb94u: goto label_11bb94;
        case 0x11bb98u: goto label_11bb98;
        case 0x11bb9cu: goto label_11bb9c;
        case 0x11bba0u: goto label_11bba0;
        case 0x11bba4u: goto label_11bba4;
        case 0x11bba8u: goto label_11bba8;
        case 0x11bbacu: goto label_11bbac;
        case 0x11bbb0u: goto label_11bbb0;
        case 0x11bbb4u: goto label_11bbb4;
        case 0x11bbb8u: goto label_11bbb8;
        case 0x11bbbcu: goto label_11bbbc;
        case 0x11bbc0u: goto label_11bbc0;
        case 0x11bbc4u: goto label_11bbc4;
        case 0x11bbc8u: goto label_11bbc8;
        case 0x11bbccu: goto label_11bbcc;
        case 0x11bbd0u: goto label_11bbd0;
        case 0x11bbd4u: goto label_11bbd4;
        case 0x11bbd8u: goto label_11bbd8;
        case 0x11bbdcu: goto label_11bbdc;
        case 0x11bbe0u: goto label_11bbe0;
        case 0x11bbe4u: goto label_11bbe4;
        case 0x11bbe8u: goto label_11bbe8;
        case 0x11bbecu: goto label_11bbec;
        case 0x11bbf0u: goto label_11bbf0;
        case 0x11bbf4u: goto label_11bbf4;
        case 0x11bbf8u: goto label_11bbf8;
        case 0x11bbfcu: goto label_11bbfc;
        case 0x11bc00u: goto label_11bc00;
        case 0x11bc04u: goto label_11bc04;
        case 0x11bc08u: goto label_11bc08;
        case 0x11bc0cu: goto label_11bc0c;
        case 0x11bc10u: goto label_11bc10;
        case 0x11bc14u: goto label_11bc14;
        case 0x11bc18u: goto label_11bc18;
        case 0x11bc1cu: goto label_11bc1c;
        case 0x11bc20u: goto label_11bc20;
        case 0x11bc24u: goto label_11bc24;
        case 0x11bc28u: goto label_11bc28;
        case 0x11bc2cu: goto label_11bc2c;
        case 0x11bc30u: goto label_11bc30;
        case 0x11bc34u: goto label_11bc34;
        case 0x11bc38u: goto label_11bc38;
        case 0x11bc3cu: goto label_11bc3c;
        case 0x11bc40u: goto label_11bc40;
        case 0x11bc44u: goto label_11bc44;
        case 0x11bc48u: goto label_11bc48;
        case 0x11bc4cu: goto label_11bc4c;
        case 0x11bc50u: goto label_11bc50;
        case 0x11bc54u: goto label_11bc54;
        case 0x11bc58u: goto label_11bc58;
        case 0x11bc5cu: goto label_11bc5c;
        case 0x11bc60u: goto label_11bc60;
        case 0x11bc64u: goto label_11bc64;
        case 0x11bc68u: goto label_11bc68;
        case 0x11bc6cu: goto label_11bc6c;
        case 0x11bc70u: goto label_11bc70;
        case 0x11bc74u: goto label_11bc74;
        case 0x11bc78u: goto label_11bc78;
        case 0x11bc7cu: goto label_11bc7c;
        case 0x11bc80u: goto label_11bc80;
        case 0x11bc84u: goto label_11bc84;
        case 0x11bc88u: goto label_11bc88;
        case 0x11bc8cu: goto label_11bc8c;
        case 0x11bc90u: goto label_11bc90;
        case 0x11bc94u: goto label_11bc94;
        case 0x11bc98u: goto label_11bc98;
        case 0x11bc9cu: goto label_11bc9c;
        case 0x11bca0u: goto label_11bca0;
        case 0x11bca4u: goto label_11bca4;
        case 0x11bca8u: goto label_11bca8;
        case 0x11bcacu: goto label_11bcac;
        case 0x11bcb0u: goto label_11bcb0;
        case 0x11bcb4u: goto label_11bcb4;
        case 0x11bcb8u: goto label_11bcb8;
        case 0x11bcbcu: goto label_11bcbc;
        case 0x11bcc0u: goto label_11bcc0;
        case 0x11bcc4u: goto label_11bcc4;
        case 0x11bcc8u: goto label_11bcc8;
        case 0x11bcccu: goto label_11bccc;
        case 0x11bcd0u: goto label_11bcd0;
        case 0x11bcd4u: goto label_11bcd4;
        case 0x11bcd8u: goto label_11bcd8;
        case 0x11bcdcu: goto label_11bcdc;
        case 0x11bce0u: goto label_11bce0;
        case 0x11bce4u: goto label_11bce4;
        case 0x11bce8u: goto label_11bce8;
        case 0x11bcecu: goto label_11bcec;
        case 0x11bcf0u: goto label_11bcf0;
        case 0x11bcf4u: goto label_11bcf4;
        case 0x11bcf8u: goto label_11bcf8;
        case 0x11bcfcu: goto label_11bcfc;
        case 0x11bd00u: goto label_11bd00;
        case 0x11bd04u: goto label_11bd04;
        case 0x11bd08u: goto label_11bd08;
        case 0x11bd0cu: goto label_11bd0c;
        case 0x11bd10u: goto label_11bd10;
        case 0x11bd14u: goto label_11bd14;
        case 0x11bd18u: goto label_11bd18;
        case 0x11bd1cu: goto label_11bd1c;
        case 0x11bd20u: goto label_11bd20;
        case 0x11bd24u: goto label_11bd24;
        case 0x11bd28u: goto label_11bd28;
        case 0x11bd2cu: goto label_11bd2c;
        case 0x11bd30u: goto label_11bd30;
        case 0x11bd34u: goto label_11bd34;
        case 0x11bd38u: goto label_11bd38;
        case 0x11bd3cu: goto label_11bd3c;
        case 0x11bd40u: goto label_11bd40;
        case 0x11bd44u: goto label_11bd44;
        case 0x11bd48u: goto label_11bd48;
        case 0x11bd4cu: goto label_11bd4c;
        case 0x11bd50u: goto label_11bd50;
        case 0x11bd54u: goto label_11bd54;
        case 0x11bd58u: goto label_11bd58;
        case 0x11bd5cu: goto label_11bd5c;
        case 0x11bd60u: goto label_11bd60;
        case 0x11bd64u: goto label_11bd64;
        case 0x11bd68u: goto label_11bd68;
        case 0x11bd6cu: goto label_11bd6c;
        case 0x11bd70u: goto label_11bd70;
        case 0x11bd74u: goto label_11bd74;
        case 0x11bd78u: goto label_11bd78;
        case 0x11bd7cu: goto label_11bd7c;
        case 0x11bd80u: goto label_11bd80;
        case 0x11bd84u: goto label_11bd84;
        case 0x11bd88u: goto label_11bd88;
        case 0x11bd8cu: goto label_11bd8c;
        case 0x11bd90u: goto label_11bd90;
        case 0x11bd94u: goto label_11bd94;
        case 0x11bd98u: goto label_11bd98;
        case 0x11bd9cu: goto label_11bd9c;
        case 0x11bda0u: goto label_11bda0;
        case 0x11bda4u: goto label_11bda4;
        case 0x11bda8u: goto label_11bda8;
        case 0x11bdacu: goto label_11bdac;
        case 0x11bdb0u: goto label_11bdb0;
        case 0x11bdb4u: goto label_11bdb4;
        case 0x11bdb8u: goto label_11bdb8;
        case 0x11bdbcu: goto label_11bdbc;
        case 0x11bdc0u: goto label_11bdc0;
        case 0x11bdc4u: goto label_11bdc4;
        case 0x11bdc8u: goto label_11bdc8;
        case 0x11bdccu: goto label_11bdcc;
        case 0x11bdd0u: goto label_11bdd0;
        case 0x11bdd4u: goto label_11bdd4;
        case 0x11bdd8u: goto label_11bdd8;
        case 0x11bddcu: goto label_11bddc;
        case 0x11bde0u: goto label_11bde0;
        case 0x11bde4u: goto label_11bde4;
        case 0x11bde8u: goto label_11bde8;
        case 0x11bdecu: goto label_11bdec;
        case 0x11bdf0u: goto label_11bdf0;
        case 0x11bdf4u: goto label_11bdf4;
        case 0x11bdf8u: goto label_11bdf8;
        case 0x11bdfcu: goto label_11bdfc;
        case 0x11be00u: goto label_11be00;
        case 0x11be04u: goto label_11be04;
        case 0x11be08u: goto label_11be08;
        case 0x11be0cu: goto label_11be0c;
        case 0x11be10u: goto label_11be10;
        case 0x11be14u: goto label_11be14;
        case 0x11be18u: goto label_11be18;
        case 0x11be1cu: goto label_11be1c;
        case 0x11be20u: goto label_11be20;
        case 0x11be24u: goto label_11be24;
        case 0x11be28u: goto label_11be28;
        case 0x11be2cu: goto label_11be2c;
        case 0x11be30u: goto label_11be30;
        case 0x11be34u: goto label_11be34;
        case 0x11be38u: goto label_11be38;
        case 0x11be3cu: goto label_11be3c;
        case 0x11be40u: goto label_11be40;
        case 0x11be44u: goto label_11be44;
        case 0x11be48u: goto label_11be48;
        case 0x11be4cu: goto label_11be4c;
        case 0x11be50u: goto label_11be50;
        case 0x11be54u: goto label_11be54;
        case 0x11be58u: goto label_11be58;
        case 0x11be5cu: goto label_11be5c;
        case 0x11be60u: goto label_11be60;
        case 0x11be64u: goto label_11be64;
        case 0x11be68u: goto label_11be68;
        case 0x11be6cu: goto label_11be6c;
        case 0x11be70u: goto label_11be70;
        case 0x11be74u: goto label_11be74;
        case 0x11be78u: goto label_11be78;
        case 0x11be7cu: goto label_11be7c;
        case 0x11be80u: goto label_11be80;
        case 0x11be84u: goto label_11be84;
        case 0x11be88u: goto label_11be88;
        case 0x11be8cu: goto label_11be8c;
        case 0x11be90u: goto label_11be90;
        case 0x11be94u: goto label_11be94;
        case 0x11be98u: goto label_11be98;
        case 0x11be9cu: goto label_11be9c;
        case 0x11bea0u: goto label_11bea0;
        case 0x11bea4u: goto label_11bea4;
        case 0x11bea8u: goto label_11bea8;
        case 0x11beacu: goto label_11beac;
        case 0x11beb0u: goto label_11beb0;
        case 0x11beb4u: goto label_11beb4;
        case 0x11beb8u: goto label_11beb8;
        case 0x11bebcu: goto label_11bebc;
        case 0x11bec0u: goto label_11bec0;
        case 0x11bec4u: goto label_11bec4;
        case 0x11bec8u: goto label_11bec8;
        case 0x11beccu: goto label_11becc;
        case 0x11bed0u: goto label_11bed0;
        case 0x11bed4u: goto label_11bed4;
        case 0x11bed8u: goto label_11bed8;
        case 0x11bedcu: goto label_11bedc;
        case 0x11bee0u: goto label_11bee0;
        case 0x11bee4u: goto label_11bee4;
        case 0x11bee8u: goto label_11bee8;
        case 0x11beecu: goto label_11beec;
        case 0x11bef0u: goto label_11bef0;
        case 0x11bef4u: goto label_11bef4;
        case 0x11bef8u: goto label_11bef8;
        case 0x11befcu: goto label_11befc;
        case 0x11bf00u: goto label_11bf00;
        case 0x11bf04u: goto label_11bf04;
        case 0x11bf08u: goto label_11bf08;
        case 0x11bf0cu: goto label_11bf0c;
        case 0x11bf10u: goto label_11bf10;
        case 0x11bf14u: goto label_11bf14;
        case 0x11bf18u: goto label_11bf18;
        case 0x11bf1cu: goto label_11bf1c;
        case 0x11bf20u: goto label_11bf20;
        case 0x11bf24u: goto label_11bf24;
        case 0x11bf28u: goto label_11bf28;
        case 0x11bf2cu: goto label_11bf2c;
        default: break;
    }

    ctx->pc = 0x11af10u;

label_11af10:
    // 0x11af10: 0x27bda4f0  addiu       $sp, $sp, -0x5B10
    ctx->pc = 0x11af10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294943984));
label_11af14:
    // 0x11af14: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11af14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_11af18:
    // 0x11af18: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x11af18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_11af1c:
    // 0x11af1c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x11af1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_11af20:
    // 0x11af20: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x11af20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_11af24:
    // 0x11af24: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x11af24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_11af28:
    // 0x11af28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11af28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_11af2c:
    // 0x11af2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11af2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_11af30:
    // 0x11af30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11af30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_11af34:
    // 0x11af34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11af34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_11af38:
    // 0x11af38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11af38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_11af3c:
    // 0x11af3c: 0xafa45b00  sw          $a0, 0x5B00($sp)
    ctx->pc = 0x11af3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 23296), GPR_U32(ctx, 4));
label_11af40:
    // 0x11af40: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x11af40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_11af44:
    // 0x11af44: 0x90850028  lbu         $a1, 0x28($a0)
    ctx->pc = 0x11af44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
label_11af48:
    // 0x11af48: 0xa3a55aff  sb          $a1, 0x5AFF($sp)
    ctx->pc = 0x11af48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 23295), (uint8_t)GPR_U32(ctx, 5));
label_11af4c:
    // 0x11af4c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x11af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_11af50:
    // 0x11af50: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x11af50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11af54:
    // 0x11af54: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x11af54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_11af58:
    // 0x11af58: 0xc4820020  lwc1        $f2, 0x20($a0)
    ctx->pc = 0x11af58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_11af5c:
    // 0x11af5c: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x11af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_11af60:
    // 0x11af60: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x11af60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11af64:
    // 0x11af64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11af64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11af68:
    // 0x11af68: 0x0  nop
    ctx->pc = 0x11af68u;
    // NOP
label_11af6c:
    // 0x11af6c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x11af6cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_11af70:
    // 0x11af70: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x11af70u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_11af74:
    // 0x11af74: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x11af74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_11af78:
    // 0x11af78: 0x8fa45b00  lw          $a0, 0x5B00($sp)
    ctx->pc = 0x11af78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23296)));
label_11af7c:
    // 0x11af7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11af7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11af80:
    // 0x11af80: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x11af80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_11af84:
    // 0x11af84: 0x320f809  jalr        $t9
label_11af88:
    if (ctx->pc == 0x11AF88u) {
        ctx->pc = 0x11AF8Cu;
        goto label_11af8c;
    }
    ctx->pc = 0x11AF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11AF8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AF84u, 0x11AF8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11AF8Cu;
label_11af8c:
    // 0x11af8c: 0xafa25af8  sw          $v0, 0x5AF8($sp)
    ctx->pc = 0x11af8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 23288), GPR_U32(ctx, 2));
label_11af90:
    // 0x11af90: 0x8fa25af8  lw          $v0, 0x5AF8($sp)
    ctx->pc = 0x11af90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23288)));
label_11af94:
    // 0x11af94: 0x14020004  bne         $zero, $v0, . + 4 + (0x4 << 2)
label_11af98:
    if (ctx->pc == 0x11AF98u) {
        ctx->pc = 0x11AF9Cu;
        goto label_11af9c;
    }
    ctx->pc = 0x11AF94u;
    {
        const bool branch_taken_0x11af94 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x11af94) {
            ctx->pc = 0x11AFA8u;
            goto label_11afa8;
        }
    }
    ctx->pc = 0x11AF9Cu;
label_11af9c:
    // 0x11af9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11af9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11afa0:
    // 0x11afa0: 0x100003d4  b           . + 4 + (0x3D4 << 2)
label_11afa4:
    if (ctx->pc == 0x11AFA4u) {
        ctx->pc = 0x11AFA8u;
        goto label_11afa8;
    }
    ctx->pc = 0x11AFA0u;
    {
        const bool branch_taken_0x11afa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11afa0) {
            ctx->pc = 0x11BEF4u;
            goto label_11bef4;
        }
    }
    ctx->pc = 0x11AFA8u;
label_11afa8:
    // 0x11afa8: 0x8fa45af8  lw          $a0, 0x5AF8($sp)
    ctx->pc = 0x11afa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23288)));
label_11afac:
    // 0x11afac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x11afacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_11afb0:
    // 0x11afb0: 0xc085538  jal         func_2154E0
label_11afb4:
    if (ctx->pc == 0x11AFB4u) {
        ctx->pc = 0x11AFB8u;
        goto label_11afb8;
    }
    ctx->pc = 0x11AFB0u;
    SET_GPR_U32(ctx, 31, 0x11AFB8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x11AFB0u, 0x11AFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AFB8u;
label_11afb8:
    // 0x11afb8: 0xafa25af4  sw          $v0, 0x5AF4($sp)
    ctx->pc = 0x11afb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 23284), GPR_U32(ctx, 2));
label_11afbc:
    // 0x11afbc: 0x8fa25af4  lw          $v0, 0x5AF4($sp)
    ctx->pc = 0x11afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23284)));
label_11afc0:
    // 0x11afc0: 0x14020004  bne         $zero, $v0, . + 4 + (0x4 << 2)
label_11afc4:
    if (ctx->pc == 0x11AFC4u) {
        ctx->pc = 0x11AFC8u;
        goto label_11afc8;
    }
    ctx->pc = 0x11AFC0u;
    {
        const bool branch_taken_0x11afc0 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x11afc0) {
            ctx->pc = 0x11AFD4u;
            goto label_11afd4;
        }
    }
    ctx->pc = 0x11AFC8u;
label_11afc8:
    // 0x11afc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11afc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11afcc:
    // 0x11afcc: 0x100003c9  b           . + 4 + (0x3C9 << 2)
label_11afd0:
    if (ctx->pc == 0x11AFD0u) {
        ctx->pc = 0x11AFD4u;
        goto label_11afd4;
    }
    ctx->pc = 0x11AFCCu;
    {
        const bool branch_taken_0x11afcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11afcc) {
            ctx->pc = 0x11BEF4u;
            goto label_11bef4;
        }
    }
    ctx->pc = 0x11AFD4u;
label_11afd4:
    // 0x11afd4: 0x8fa45af4  lw          $a0, 0x5AF4($sp)
    ctx->pc = 0x11afd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23284)));
label_11afd8:
    // 0x11afd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11afd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11afdc:
    // 0x11afdc: 0xc0a1248  jal         func_284920
label_11afe0:
    if (ctx->pc == 0x11AFE0u) {
        ctx->pc = 0x11AFE4u;
        goto label_11afe4;
    }
    ctx->pc = 0x11AFDCu;
    SET_GPR_U32(ctx, 31, 0x11AFE4u);
    ctx->pc = 0x284920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284920u, 0x11AFDCu, 0x11AFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AFE4u;
label_11afe4:
    // 0x11afe4: 0xafa25af0  sw          $v0, 0x5AF0($sp)
    ctx->pc = 0x11afe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 23280), GPR_U32(ctx, 2));
label_11afe8:
    // 0x11afe8: 0x8fa55af0  lw          $a1, 0x5AF0($sp)
    ctx->pc = 0x11afe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23280)));
label_11afec:
    // 0x11afec: 0x14050004  bne         $zero, $a1, . + 4 + (0x4 << 2)
label_11aff0:
    if (ctx->pc == 0x11AFF0u) {
        ctx->pc = 0x11AFF4u;
        goto label_11aff4;
    }
    ctx->pc = 0x11AFECu;
    {
        const bool branch_taken_0x11afec = (GPR_U64(ctx, 0) != GPR_U64(ctx, 5));
        if (branch_taken_0x11afec) {
            ctx->pc = 0x11B000u;
            goto label_11b000;
        }
    }
    ctx->pc = 0x11AFF4u;
label_11aff4:
    // 0x11aff4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11aff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11aff8:
    // 0x11aff8: 0x100003be  b           . + 4 + (0x3BE << 2)
label_11affc:
    if (ctx->pc == 0x11AFFCu) {
        ctx->pc = 0x11B000u;
        goto label_11b000;
    }
    ctx->pc = 0x11AFF8u;
    {
        const bool branch_taken_0x11aff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11aff8) {
            ctx->pc = 0x11BEF4u;
            goto label_11bef4;
        }
    }
    ctx->pc = 0x11B000u;
label_11b000:
    // 0x11b000: 0xc12242c  jal         func_4890B0
label_11b004:
    if (ctx->pc == 0x11B004u) {
        ctx->pc = 0x11B008u;
        goto label_11b008;
    }
    ctx->pc = 0x11B000u;
    SET_GPR_U32(ctx, 31, 0x11B008u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x11B000u, 0x11B008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B008u;
label_11b008:
    // 0x11b008: 0xafa25a30  sw          $v0, 0x5A30($sp)
    ctx->pc = 0x11b008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 23088), GPR_U32(ctx, 2));
label_11b00c:
    // 0x11b00c: 0x8fa45af0  lw          $a0, 0x5AF0($sp)
    ctx->pc = 0x11b00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23280)));
label_11b010:
    // 0x11b010: 0x8fa55a30  lw          $a1, 0x5A30($sp)
    ctx->pc = 0x11b010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23088)));
label_11b014:
    // 0x11b014: 0xc0e6e40  jal         func_39B900
label_11b018:
    if (ctx->pc == 0x11B018u) {
        ctx->pc = 0x11B01Cu;
        goto label_11b01c;
    }
    ctx->pc = 0x11B014u;
    SET_GPR_U32(ctx, 31, 0x11B01Cu);
    ctx->pc = 0x39B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B900u, 0x11B014u, 0x11B01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B01Cu;
label_11b01c:
    // 0x11b01c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11b01cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b020:
    // 0x11b020: 0x0  nop
    ctx->pc = 0x11b020u;
    // NOP
label_11b024:
    // 0x11b024: 0xe7a05aec  swc1        $f0, 0x5AEC($sp)
    ctx->pc = 0x11b024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23276), bits); }
label_11b028:
    // 0x11b028: 0x93a25aff  lbu         $v0, 0x5AFF($sp)
    ctx->pc = 0x11b028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 23295)));
label_11b02c:
    // 0x11b02c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_11b030:
    if (ctx->pc == 0x11B030u) {
        ctx->pc = 0x11B034u;
        goto label_11b034;
    }
    ctx->pc = 0x11B02Cu;
    {
        const bool branch_taken_0x11b02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b02c) {
            ctx->pc = 0x11B090u;
            goto label_11b090;
        }
    }
    ctx->pc = 0x11B034u;
label_11b034:
    // 0x11b034: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x11b034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_11b038:
    // 0x11b038: 0xc44c001c  lwc1        $f12, 0x1C($v0)
    ctx->pc = 0x11b038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_11b03c:
    // 0x11b03c: 0xc0c3966  jal         func_30E598
label_11b040:
    if (ctx->pc == 0x11B040u) {
        ctx->pc = 0x11B044u;
        goto label_11b044;
    }
    ctx->pc = 0x11B03Cu;
    SET_GPR_U32(ctx, 31, 0x11B044u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x11B03Cu, 0x11B044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B044u;
label_11b044:
    // 0x11b044: 0xc781827c  lwc1        $f1, -0x7D84($gp)
    ctx->pc = 0x11b044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11b048:
    // 0x11b048: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11b048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_11b04c:
    // 0x11b04c: 0xe7a05aec  swc1        $f0, 0x5AEC($sp)
    ctx->pc = 0x11b04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23276), bits); }
label_11b050:
    // 0x11b050: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11b050u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11b054:
    // 0x11b054: 0xc7a05aec  lwc1        $f0, 0x5AEC($sp)
    ctx->pc = 0x11b054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 23276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b058:
    // 0x11b058: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x11b058u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11b05c:
    // 0x11b05c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_11b060:
    if (ctx->pc == 0x11B060u) {
        ctx->pc = 0x11B064u;
        goto label_11b064;
    }
    ctx->pc = 0x11B05Cu;
    {
        const bool branch_taken_0x11b05c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11b05c) {
            ctx->pc = 0x11B078u;
            goto label_11b078;
        }
    }
    ctx->pc = 0x11B064u;
label_11b064:
    // 0x11b064: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11b064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b068:
    // 0x11b068: 0x0  nop
    ctx->pc = 0x11b068u;
    // NOP
label_11b06c:
    // 0x11b06c: 0xe7a05abc  swc1        $f0, 0x5ABC($sp)
    ctx->pc = 0x11b06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23228), bits); }
label_11b070:
    // 0x11b070: 0x10000003  b           . + 4 + (0x3 << 2)
label_11b074:
    if (ctx->pc == 0x11B074u) {
        ctx->pc = 0x11B078u;
        goto label_11b078;
    }
    ctx->pc = 0x11B070u;
    {
        const bool branch_taken_0x11b070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b070) {
            ctx->pc = 0x11B080u;
            goto label_11b080;
        }
    }
    ctx->pc = 0x11B078u;
label_11b078:
    // 0x11b078: 0xc7a05aec  lwc1        $f0, 0x5AEC($sp)
    ctx->pc = 0x11b078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 23276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b07c:
    // 0x11b07c: 0xe7a05abc  swc1        $f0, 0x5ABC($sp)
    ctx->pc = 0x11b07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23228), bits); }
label_11b080:
    // 0x11b080: 0xc7a05abc  lwc1        $f0, 0x5ABC($sp)
    ctx->pc = 0x11b080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 23228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b084:
    // 0x11b084: 0xe7a05aec  swc1        $f0, 0x5AEC($sp)
    ctx->pc = 0x11b084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23276), bits); }
label_11b088:
    // 0x11b088: 0x1000000e  b           . + 4 + (0xE << 2)
label_11b08c:
    if (ctx->pc == 0x11B08Cu) {
        ctx->pc = 0x11B090u;
        goto label_11b090;
    }
    ctx->pc = 0x11B088u;
    {
        const bool branch_taken_0x11b088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b088) {
            ctx->pc = 0x11B0C4u;
            goto label_11b0c4;
        }
    }
    ctx->pc = 0x11B090u;
label_11b090:
    // 0x11b090: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x11b090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_11b094:
    // 0x11b094: 0xc44c001c  lwc1        $f12, 0x1C($v0)
    ctx->pc = 0x11b094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_11b098:
    // 0x11b098: 0xc0c3966  jal         func_30E598
label_11b09c:
    if (ctx->pc == 0x11B09Cu) {
        ctx->pc = 0x11B0A0u;
        goto label_11b0a0;
    }
    ctx->pc = 0x11B098u;
    SET_GPR_U32(ctx, 31, 0x11B0A0u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x11B098u, 0x11B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B0A0u;
label_11b0a0:
    // 0x11b0a0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x11b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_11b0a4:
    // 0x11b0a4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x11b0a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_11b0a8:
    // 0x11b0a8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x11b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_11b0ac:
    // 0x11b0ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x11b0acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_11b0b0:
    // 0x11b0b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11b0b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11b0b4:
    // 0x11b0b4: 0x0  nop
    ctx->pc = 0x11b0b4u;
    // NOP
label_11b0b8:
    // 0x11b0b8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x11b0b8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
label_11b0bc:
    // 0x11b0bc: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x11b0bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_11b0c0:
    // 0x11b0c0: 0xe7a05aec  swc1        $f0, 0x5AEC($sp)
    ctx->pc = 0x11b0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23276), bits); }
label_11b0c4:
    // 0x11b0c4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x11b0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11b0c8:
    // 0x11b0c8: 0xc0e35f4  jal         func_38D7D0
label_11b0cc:
    if (ctx->pc == 0x11B0CCu) {
        ctx->pc = 0x11B0D0u;
        goto label_11b0d0;
    }
    ctx->pc = 0x11B0C8u;
    SET_GPR_U32(ctx, 31, 0x11B0D0u);
    ctx->pc = 0x38D7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D7D0u, 0x11B0C8u, 0x11B0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B0D0u;
label_11b0d0:
    // 0x11b0d0: 0xafa25ae8  sw          $v0, 0x5AE8($sp)
    ctx->pc = 0x11b0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 23272), GPR_U32(ctx, 2));
label_11b0d4:
    // 0x11b0d4: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x11b0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_11b0d8:
    // 0x11b0d8: 0x24631c80  addiu       $v1, $v1, 0x1C80
    ctx->pc = 0x11b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7296));
label_11b0dc:
    // 0x11b0dc: 0x27a25a20  addiu       $v0, $sp, 0x5A20
    ctx->pc = 0x11b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 23072));
label_11b0e0:
    // 0x11b0e0: 0x787e0000  lq          $fp, 0x0($v1)
    ctx->pc = 0x11b0e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_11b0e4:
    // 0x11b0e4: 0x7c5e0000  sq          $fp, 0x0($v0)
    ctx->pc = 0x11b0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 30));
label_11b0e8:
    // 0x11b0e8: 0xc7a05aec  lwc1        $f0, 0x5AEC($sp)
    ctx->pc = 0x11b0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 23276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b0ec:
    // 0x11b0ec: 0xe7a05a20  swc1        $f0, 0x5A20($sp)
    ctx->pc = 0x11b0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23072), bits); }
label_11b0f0:
    // 0x11b0f0: 0xc7a05aec  lwc1        $f0, 0x5AEC($sp)
    ctx->pc = 0x11b0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 23276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b0f4:
    // 0x11b0f4: 0xe7a05a24  swc1        $f0, 0x5A24($sp)
    ctx->pc = 0x11b0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23076), bits); }
label_11b0f8:
    // 0x11b0f8: 0xc7a05aec  lwc1        $f0, 0x5AEC($sp)
    ctx->pc = 0x11b0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 23276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b0fc:
    // 0x11b0fc: 0xe7a05a28  swc1        $f0, 0x5A28($sp)
    ctx->pc = 0x11b0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23080), bits); }
label_11b100:
    // 0x11b100: 0xe7a05ab8  swc1        $f0, 0x5AB8($sp)
    ctx->pc = 0x11b100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23224), bits); }
label_11b104:
    // 0x11b104: 0x8fa45ae8  lw          $a0, 0x5AE8($sp)
    ctx->pc = 0x11b104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23272)));
label_11b108:
    // 0x11b108: 0x27a55a20  addiu       $a1, $sp, 0x5A20
    ctx->pc = 0x11b108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 23072));
label_11b10c:
    // 0x11b10c: 0xc0e3656  jal         func_38D958
label_11b110:
    if (ctx->pc == 0x11B110u) {
        ctx->pc = 0x11B114u;
        goto label_11b114;
    }
    ctx->pc = 0x11B10Cu;
    SET_GPR_U32(ctx, 31, 0x11B114u);
    ctx->pc = 0x38D958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D958u, 0x11B10Cu, 0x11B114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B114u;
label_11b114:
    // 0x11b114: 0x8fa45af0  lw          $a0, 0x5AF0($sp)
    ctx->pc = 0x11b114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23280)));
label_11b118:
    // 0x11b118: 0x8fa55ae8  lw          $a1, 0x5AE8($sp)
    ctx->pc = 0x11b118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23272)));
label_11b11c:
    // 0x11b11c: 0xc0e6f1e  jal         func_39BC78
label_11b120:
    if (ctx->pc == 0x11B120u) {
        ctx->pc = 0x11B124u;
        goto label_11b124;
    }
    ctx->pc = 0x11B11Cu;
    SET_GPR_U32(ctx, 31, 0x11B124u);
    ctx->pc = 0x39BC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC78u, 0x11B11Cu, 0x11B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B124u;
label_11b124:
    // 0x11b124: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11b124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11b128:
    // 0x11b128: 0xafa25ae4  sw          $v0, 0x5AE4($sp)
    ctx->pc = 0x11b128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 23268), GPR_U32(ctx, 2));
label_11b12c:
    // 0x11b12c: 0x8fa45a30  lw          $a0, 0x5A30($sp)
    ctx->pc = 0x11b12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23088)));
label_11b130:
    // 0x11b130: 0xc105f96  jal         func_417E58
label_11b134:
    if (ctx->pc == 0x11B134u) {
        ctx->pc = 0x11B138u;
        goto label_11b138;
    }
    ctx->pc = 0x11B130u;
    SET_GPR_U32(ctx, 31, 0x11B138u);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x11B130u, 0x11B138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B138u;
label_11b138:
    // 0x11b138: 0x10400360  beqz        $v0, . + 4 + (0x360 << 2)
label_11b13c:
    if (ctx->pc == 0x11B13Cu) {
        ctx->pc = 0x11B140u;
        goto label_11b140;
    }
    ctx->pc = 0x11B138u;
    {
        const bool branch_taken_0x11b138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b138) {
            ctx->pc = 0x11BEBCu;
            goto label_11bebc;
        }
    }
    ctx->pc = 0x11B140u;
label_11b140:
    // 0x11b140: 0x27a45ae0  addiu       $a0, $sp, 0x5AE0
    ctx->pc = 0x11b140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 23264));
label_11b144:
    // 0x11b144: 0xc047060  jal         func_11C180
label_11b148:
    if (ctx->pc == 0x11B148u) {
        ctx->pc = 0x11B14Cu;
        goto label_11b14c;
    }
    ctx->pc = 0x11B144u;
    SET_GPR_U32(ctx, 31, 0x11B14Cu);
    ctx->pc = 0x11C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C180u, 0x11B144u, 0x11B14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B14Cu;
label_11b14c:
    // 0x11b14c: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x11b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_11b150:
    // 0x11b150: 0x27a45ac4  addiu       $a0, $sp, 0x5AC4
    ctx->pc = 0x11b150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 23236));
label_11b154:
    // 0x11b154: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x11b154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_11b158:
    // 0x11b158: 0xc047038  jal         func_11C0E0
label_11b15c:
    if (ctx->pc == 0x11B15Cu) {
        ctx->pc = 0x11B160u;
        goto label_11b160;
    }
    ctx->pc = 0x11B158u;
    SET_GPR_U32(ctx, 31, 0x11B160u);
    ctx->pc = 0x11C0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C0E0u, 0x11B158u, 0x11B160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B160u;
label_11b160:
    // 0x11b160: 0x27a45ac8  addiu       $a0, $sp, 0x5AC8
    ctx->pc = 0x11b160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 23240));
label_11b164:
    // 0x11b164: 0x27a55ac4  addiu       $a1, $sp, 0x5AC4
    ctx->pc = 0x11b164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 23236));
label_11b168:
    // 0x11b168: 0xc04702c  jal         func_11C0B0
label_11b16c:
    if (ctx->pc == 0x11B16Cu) {
        ctx->pc = 0x11B170u;
        goto label_11b170;
    }
    ctx->pc = 0x11B168u;
    SET_GPR_U32(ctx, 31, 0x11B170u);
    ctx->pc = 0x11C0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C0B0u, 0x11B168u, 0x11B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B170u;
label_11b170:
    // 0x11b170: 0x27a45ae0  addiu       $a0, $sp, 0x5AE0
    ctx->pc = 0x11b170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 23264));
label_11b174:
    // 0x11b174: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11b178:
    // 0x11b178: 0xc04701c  jal         func_11C070
label_11b17c:
    if (ctx->pc == 0x11B17Cu) {
        ctx->pc = 0x11B180u;
        goto label_11b180;
    }
    ctx->pc = 0x11B178u;
    SET_GPR_U32(ctx, 31, 0x11B180u);
    ctx->pc = 0x11C070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C070u, 0x11B178u, 0x11B180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B180u;
label_11b180:
    // 0x11b180: 0x10000328  b           . + 4 + (0x328 << 2)
label_11b184:
    if (ctx->pc == 0x11B184u) {
        ctx->pc = 0x11B188u;
        goto label_11b188;
    }
    ctx->pc = 0x11B180u;
    {
        const bool branch_taken_0x11b180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b180) {
            ctx->pc = 0x11BE24u;
            goto label_11be24;
        }
    }
    ctx->pc = 0x11B188u;
label_11b188:
    // 0x11b188: 0x27a45ae0  addiu       $a0, $sp, 0x5AE0
    ctx->pc = 0x11b188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 23264));
label_11b18c:
    // 0x11b18c: 0xc047008  jal         func_11C020
label_11b190:
    if (ctx->pc == 0x11B190u) {
        ctx->pc = 0x11B194u;
        goto label_11b194;
    }
    ctx->pc = 0x11B18Cu;
    SET_GPR_U32(ctx, 31, 0x11B194u);
    ctx->pc = 0x11C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C020u, 0x11B18Cu, 0x11B194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B194u;
label_11b194:
    // 0x11b194: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x11b194u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11b198:
    // 0x11b198: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x11b198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_11b19c:
    // 0x11b19c: 0xafa25a10  sw          $v0, 0x5A10($sp)
    ctx->pc = 0x11b19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 23056), GPR_U32(ctx, 2));
label_11b1a0:
    // 0x11b1a0: 0x27a45ae0  addiu       $a0, $sp, 0x5AE0
    ctx->pc = 0x11b1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 23264));
label_11b1a4:
    // 0x11b1a4: 0xc047008  jal         func_11C020
label_11b1a8:
    if (ctx->pc == 0x11B1A8u) {
        ctx->pc = 0x11B1ACu;
        goto label_11b1ac;
    }
    ctx->pc = 0x11B1A4u;
    SET_GPR_U32(ctx, 31, 0x11B1ACu);
    ctx->pc = 0x11C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C020u, 0x11B1A4u, 0x11B1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B1ACu;
label_11b1ac:
    // 0x11b1ac: 0x8c570004  lw          $s7, 0x4($v0)
    ctx->pc = 0x11b1acu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11b1b0:
    // 0x11b1b0: 0xaf97b9c4  sw          $s7, -0x463C($gp)
    ctx->pc = 0x11b1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949316), GPR_U32(ctx, 23));
label_11b1b4:
    // 0x11b1b4: 0x8fa35ae4  lw          $v1, 0x5AE4($sp)
    ctx->pc = 0x11b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23268)));
label_11b1b8:
    // 0x11b1b8: 0x8f82b9c4  lw          $v0, -0x463C($gp)
    ctx->pc = 0x11b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949316)));
label_11b1bc:
    // 0x11b1bc: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
label_11b1c0:
    if (ctx->pc == 0x11B1C0u) {
        ctx->pc = 0x11B1C4u;
        goto label_11b1c4;
    }
    ctx->pc = 0x11B1BCu;
    {
        const bool branch_taken_0x11b1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11b1bc) {
            ctx->pc = 0x11B2BCu;
            goto label_11b2bc;
        }
    }
    ctx->pc = 0x11B1C4u;
label_11b1c4:
    // 0x11b1c4: 0x8f82b9c4  lw          $v0, -0x463C($gp)
    ctx->pc = 0x11b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949316)));
label_11b1c8:
    // 0x11b1c8: 0xafa25ae4  sw          $v0, 0x5AE4($sp)
    ctx->pc = 0x11b1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 23268), GPR_U32(ctx, 2));
label_11b1cc:
    // 0x11b1cc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x11b1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_11b1d0:
    // 0x11b1d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11b1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11b1d4:
    // 0x11b1d4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x11b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_11b1d8:
    // 0x11b1d8: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x11b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_11b1dc:
    // 0x11b1dc: 0x40f809  jalr        $v0
label_11b1e0:
    if (ctx->pc == 0x11B1E0u) {
        ctx->pc = 0x11B1E4u;
        goto label_11b1e4;
    }
    ctx->pc = 0x11B1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11B1E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B1DCu, 0x11B1E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B1E4u;
label_11b1e4:
    // 0x11b1e4: 0x8f82b9c4  lw          $v0, -0x463C($gp)
    ctx->pc = 0x11b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949316)));
label_11b1e8:
    // 0x11b1e8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x11b1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_11b1ec:
    // 0x11b1ec: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_11b1f0:
    if (ctx->pc == 0x11B1F0u) {
        ctx->pc = 0x11B1F4u;
        goto label_11b1f4;
    }
    ctx->pc = 0x11B1ECu;
    {
        const bool branch_taken_0x11b1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b1ec) {
            ctx->pc = 0x11B25Cu;
            goto label_11b25c;
        }
    }
    ctx->pc = 0x11B1F4u;
label_11b1f4:
    // 0x11b1f4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x11b1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_11b1f8:
    // 0x11b1f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11b1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11b1fc:
    // 0x11b1fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x11b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_11b200:
    // 0x11b200: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x11b200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_11b204:
    // 0x11b204: 0x40f809  jalr        $v0
label_11b208:
    if (ctx->pc == 0x11B208u) {
        ctx->pc = 0x11B20Cu;
        goto label_11b20c;
    }
    ctx->pc = 0x11B204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11B20Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B204u, 0x11B20Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B20Cu;
label_11b20c:
    // 0x11b20c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x11b20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_11b210:
    // 0x11b210: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11b210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11b214:
    // 0x11b214: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x11b214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_11b218:
    // 0x11b218: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x11b218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_11b21c:
    // 0x11b21c: 0x40f809  jalr        $v0
label_11b220:
    if (ctx->pc == 0x11B220u) {
        ctx->pc = 0x11B224u;
        goto label_11b224;
    }
    ctx->pc = 0x11B21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11B224u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B21Cu, 0x11B224u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B224u;
label_11b224:
    // 0x11b224: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x11b224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_11b228:
    // 0x11b228: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x11b228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_11b22c:
    // 0x11b22c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x11b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_11b230:
    // 0x11b230: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x11b230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_11b234:
    // 0x11b234: 0x40f809  jalr        $v0
label_11b238:
    if (ctx->pc == 0x11B238u) {
        ctx->pc = 0x11B23Cu;
        goto label_11b23c;
    }
    ctx->pc = 0x11B234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11B23Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B234u, 0x11B23Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B23Cu;
label_11b23c:
    // 0x11b23c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x11b23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_11b240:
    // 0x11b240: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11b240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11b244:
    // 0x11b244: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x11b244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_11b248:
    // 0x11b248: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x11b248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_11b24c:
    // 0x11b24c: 0x40f809  jalr        $v0
label_11b250:
    if (ctx->pc == 0x11B250u) {
        ctx->pc = 0x11B254u;
        goto label_11b254;
    }
    ctx->pc = 0x11B24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11B254u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B24Cu, 0x11B254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B254u;
label_11b254:
    // 0x11b254: 0x10000019  b           . + 4 + (0x19 << 2)
label_11b258:
    if (ctx->pc == 0x11B258u) {
        ctx->pc = 0x11B25Cu;
        goto label_11b25c;
    }
    ctx->pc = 0x11B254u;
    {
        const bool branch_taken_0x11b254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b254) {
            ctx->pc = 0x11B2BCu;
            goto label_11b2bc;
        }
    }
    ctx->pc = 0x11B25Cu;
label_11b25c:
    // 0x11b25c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x11b25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_11b260:
    // 0x11b260: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b264:
    // 0x11b264: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x11b264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_11b268:
    // 0x11b268: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x11b268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_11b26c:
    // 0x11b26c: 0x40f809  jalr        $v0
label_11b270:
    if (ctx->pc == 0x11B270u) {
        ctx->pc = 0x11B274u;
        goto label_11b274;
    }
    ctx->pc = 0x11B26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11B274u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B26Cu, 0x11B274u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B274u;
label_11b274:
    // 0x11b274: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x11b274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_11b278:
    // 0x11b278: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b27c:
    // 0x11b27c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x11b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_11b280:
    // 0x11b280: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x11b280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_11b284:
    // 0x11b284: 0x40f809  jalr        $v0
label_11b288:
    if (ctx->pc == 0x11B288u) {
        ctx->pc = 0x11B28Cu;
        goto label_11b28c;
    }
    ctx->pc = 0x11B284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11B28Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B284u, 0x11B28Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B28Cu;
label_11b28c:
    // 0x11b28c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x11b28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_11b290:
    // 0x11b290: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x11b290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_11b294:
    // 0x11b294: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x11b294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_11b298:
    // 0x11b298: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x11b298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_11b29c:
    // 0x11b29c: 0x40f809  jalr        $v0
label_11b2a0:
    if (ctx->pc == 0x11B2A0u) {
        ctx->pc = 0x11B2A4u;
        goto label_11b2a4;
    }
    ctx->pc = 0x11B29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11B2A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B29Cu, 0x11B2A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B2A4u;
label_11b2a4:
    // 0x11b2a4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x11b2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_11b2a8:
    // 0x11b2a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11b2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11b2ac:
    // 0x11b2ac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x11b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_11b2b0:
    // 0x11b2b0: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x11b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_11b2b4:
    // 0x11b2b4: 0x40f809  jalr        $v0
label_11b2b8:
    if (ctx->pc == 0x11B2B8u) {
        ctx->pc = 0x11B2BCu;
        goto label_11b2bc;
    }
    ctx->pc = 0x11B2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11B2BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B2B4u, 0x11B2BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B2BCu;
label_11b2bc:
    // 0x11b2bc: 0x8f82b9c4  lw          $v0, -0x463C($gp)
    ctx->pc = 0x11b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949316)));
label_11b2c0:
    // 0x11b2c0: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x11b2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_11b2c4:
    // 0x11b2c4: 0x104002a6  beqz        $v0, . + 4 + (0x2A6 << 2)
label_11b2c8:
    if (ctx->pc == 0x11B2C8u) {
        ctx->pc = 0x11B2CCu;
        goto label_11b2cc;
    }
    ctx->pc = 0x11B2C4u;
    {
        const bool branch_taken_0x11b2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b2c4) {
            ctx->pc = 0x11BD60u;
            goto label_11bd60;
        }
    }
    ctx->pc = 0x11B2CCu;
label_11b2cc:
    // 0x11b2cc: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x11b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_11b2d0:
    // 0x11b2d0: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x11b2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11b2d4:
    // 0x11b2d4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x11b2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_11b2d8:
    // 0x11b2d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11b2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b2dc:
    // 0x11b2dc: 0x0  nop
    ctx->pc = 0x11b2dcu;
    // NOP
label_11b2e0:
    // 0x11b2e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11b2e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11b2e4:
    // 0x11b2e4: 0x450002cc  bc1f        . + 4 + (0x2CC << 2)
label_11b2e8:
    if (ctx->pc == 0x11B2E8u) {
        ctx->pc = 0x11B2ECu;
        goto label_11b2ec;
    }
    ctx->pc = 0x11B2E4u;
    {
        const bool branch_taken_0x11b2e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11b2e4) {
            ctx->pc = 0x11BE18u;
            goto label_11be18;
        }
    }
    ctx->pc = 0x11B2ECu;
label_11b2ec:
    // 0x11b2ec: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x11b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_11b2f0:
    // 0x11b2f0: 0xafa25550  sw          $v0, 0x5550($sp)
    ctx->pc = 0x11b2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 21840), GPR_U32(ctx, 2));
label_11b2f4:
    // 0x11b2f4: 0xafa05adc  sw          $zero, 0x5ADC($sp)
    ctx->pc = 0x11b2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 23260), GPR_U32(ctx, 0));
label_11b2f8:
    // 0x11b2f8: 0x8fa45550  lw          $a0, 0x5550($sp)
    ctx->pc = 0x11b2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 21840)));
label_11b2fc:
    // 0x11b2fc: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x11b2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
label_11b300:
    // 0x11b300: 0x24a58d20  addiu       $a1, $a1, -0x72E0
    ctx->pc = 0x11b300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937888));
label_11b304:
    // 0x11b304: 0x27a65adc  addiu       $a2, $sp, 0x5ADC
    ctx->pc = 0x11b304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 23260));
label_11b308:
    // 0x11b308: 0xc1066c2  jal         func_419B08
label_11b30c:
    if (ctx->pc == 0x11B30Cu) {
        ctx->pc = 0x11B310u;
        goto label_11b310;
    }
    ctx->pc = 0x11B308u;
    SET_GPR_U32(ctx, 31, 0x11B310u);
    ctx->pc = 0x419B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B08u, 0x11B308u, 0x11B310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B310u;
label_11b310:
    // 0x11b310: 0x8fa25adc  lw          $v0, 0x5ADC($sp)
    ctx->pc = 0x11b310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23260)));
label_11b314:
    // 0x11b314: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_11b318:
    if (ctx->pc == 0x11B318u) {
        ctx->pc = 0x11B31Cu;
        goto label_11b31c;
    }
    ctx->pc = 0x11B314u;
    {
        const bool branch_taken_0x11b314 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x11b314) {
            ctx->pc = 0x11B330u;
            goto label_11b330;
        }
    }
    ctx->pc = 0x11B31Cu;
label_11b31c:
    // 0x11b31c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11b31cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b320:
    // 0x11b320: 0x0  nop
    ctx->pc = 0x11b320u;
    // NOP
label_11b324:
    // 0x11b324: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11b324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_11b328:
    // 0x11b328: 0x10000008  b           . + 4 + (0x8 << 2)
label_11b32c:
    if (ctx->pc == 0x11B32Cu) {
        ctx->pc = 0x11B330u;
        goto label_11b330;
    }
    ctx->pc = 0x11B328u;
    {
        const bool branch_taken_0x11b328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b328) {
            ctx->pc = 0x11B34Cu;
            goto label_11b34c;
        }
    }
    ctx->pc = 0x11B330u;
label_11b330:
    // 0x11b330: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x11b330u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_11b334:
    // 0x11b334: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11b334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_11b338:
    // 0x11b338: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11b338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_11b33c:
    // 0x11b33c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x11b33cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b340:
    // 0x11b340: 0x0  nop
    ctx->pc = 0x11b340u;
    // NOP
label_11b344:
    // 0x11b344: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11b344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_11b348:
    // 0x11b348: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11b348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_11b34c:
    // 0x11b34c: 0xe7a05564  swc1        $f0, 0x5564($sp)
    ctx->pc = 0x11b34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 21860), bits); }
label_11b350:
    // 0x11b350: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11b350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11b354:
    // 0x11b354: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x11b354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
label_11b358:
    // 0x11b358: 0x24a58dc0  addiu       $a1, $a1, -0x7240
    ctx->pc = 0x11b358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938048));
label_11b35c:
    // 0x11b35c: 0x27a65560  addiu       $a2, $sp, 0x5560
    ctx->pc = 0x11b35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 21856));
label_11b360:
    // 0x11b360: 0xc0e2628  jal         func_3898A0
label_11b364:
    if (ctx->pc == 0x11B364u) {
        ctx->pc = 0x11B368u;
        goto label_11b368;
    }
    ctx->pc = 0x11B360u;
    SET_GPR_U32(ctx, 31, 0x11B368u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x11B360u, 0x11B368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B368u;
label_11b368:
    // 0x11b368: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x11b368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_11b36c:
    // 0x11b36c: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x11b36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11b370:
    // 0x11b370: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x11b370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_11b374:
    // 0x11b374: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11b374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b378:
    // 0x11b378: 0x0  nop
    ctx->pc = 0x11b378u;
    // NOP
label_11b37c:
    // 0x11b37c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11b37cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11b380:
    // 0x11b380: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_11b384:
    if (ctx->pc == 0x11B384u) {
        ctx->pc = 0x11B388u;
        goto label_11b388;
    }
    ctx->pc = 0x11B380u;
    {
        const bool branch_taken_0x11b380 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11b380) {
            ctx->pc = 0x11B3F0u;
            goto label_11b3f0;
        }
    }
    ctx->pc = 0x11B388u;
label_11b388:
    // 0x11b388: 0x8f90ba9c  lw          $s0, -0x4564($gp)
    ctx->pc = 0x11b388u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_11b38c:
    // 0x11b38c: 0xc7a15560  lwc1        $f1, 0x5560($sp)
    ctx->pc = 0x11b38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 21856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11b390:
    // 0x11b390: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x11b390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b394:
    // 0x11b394: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11b394u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_11b398:
    // 0x11b398: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x11b398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_11b39c:
    // 0x11b39c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11b39cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b3a0:
    // 0x11b3a0: 0x0  nop
    ctx->pc = 0x11b3a0u;
    // NOP
label_11b3a4:
    // 0x11b3a4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x11b3a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_11b3a8:
    // 0x11b3a8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x11b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_11b3ac:
    // 0x11b3ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11b3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b3b0:
    // 0x11b3b0: 0x0  nop
    ctx->pc = 0x11b3b0u;
    // NOP
label_11b3b4:
    // 0x11b3b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x11b3b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11b3b8:
    // 0x11b3b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_11b3bc:
    if (ctx->pc == 0x11B3BCu) {
        ctx->pc = 0x11B3C0u;
        goto label_11b3c0;
    }
    ctx->pc = 0x11B3B8u;
    {
        const bool branch_taken_0x11b3b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11b3b8) {
            ctx->pc = 0x11B3D0u;
            goto label_11b3d0;
        }
    }
    ctx->pc = 0x11B3C0u;
label_11b3c0:
    // 0x11b3c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11b3c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_11b3c4:
    // 0x11b3c4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x11b3c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_11b3c8:
    // 0x11b3c8: 0x10000006  b           . + 4 + (0x6 << 2)
label_11b3cc:
    if (ctx->pc == 0x11B3CCu) {
        ctx->pc = 0x11B3D0u;
        goto label_11b3d0;
    }
    ctx->pc = 0x11B3C8u;
    {
        const bool branch_taken_0x11b3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b3c8) {
            ctx->pc = 0x11B3E4u;
            goto label_11b3e4;
        }
    }
    ctx->pc = 0x11B3D0u;
label_11b3d0:
    // 0x11b3d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11b3d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_11b3d4:
    // 0x11b3d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11b3d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_11b3d8:
    // 0x11b3d8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x11b3d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_11b3dc:
    // 0x11b3dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_11b3e0:
    // 0x11b3e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11b3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_11b3e4:
    // 0x11b3e4: 0xaf83b9cc  sw          $v1, -0x4634($gp)
    ctx->pc = 0x11b3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949324), GPR_U32(ctx, 3));
label_11b3e8:
    // 0x11b3e8: 0x10000021  b           . + 4 + (0x21 << 2)
label_11b3ec:
    if (ctx->pc == 0x11B3ECu) {
        ctx->pc = 0x11B3F0u;
        goto label_11b3f0;
    }
    ctx->pc = 0x11B3E8u;
    {
        const bool branch_taken_0x11b3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b3e8) {
            ctx->pc = 0x11B470u;
            goto label_11b470;
        }
    }
    ctx->pc = 0x11B3F0u;
label_11b3f0:
    // 0x11b3f0: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x11b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_11b3f4:
    // 0x11b3f4: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x11b3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11b3f8:
    // 0x11b3f8: 0x3c053fc0  lui         $a1, 0x3FC0
    ctx->pc = 0x11b3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16320 << 16));
label_11b3fc:
    // 0x11b3fc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x11b3fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b400:
    // 0x11b400: 0x0  nop
    ctx->pc = 0x11b400u;
    // NOP
label_11b404:
    // 0x11b404: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11b404u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_11b408:
    // 0x11b408: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x11b408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_11b40c:
    // 0x11b40c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11b40cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b410:
    // 0x11b410: 0x0  nop
    ctx->pc = 0x11b410u;
    // NOP
label_11b414:
    // 0x11b414: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x11b414u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_11b418:
    // 0x11b418: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x11b418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_11b41c:
    // 0x11b41c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11b41cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b420:
    // 0x11b420: 0x0  nop
    ctx->pc = 0x11b420u;
    // NOP
label_11b424:
    // 0x11b424: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x11b424u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_11b428:
    // 0x11b428: 0xc7a05560  lwc1        $f0, 0x5560($sp)
    ctx->pc = 0x11b428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 21856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b42c:
    // 0x11b42c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x11b42cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_11b430:
    // 0x11b430: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x11b430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_11b434:
    // 0x11b434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11b434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b438:
    // 0x11b438: 0x0  nop
    ctx->pc = 0x11b438u;
    // NOP
label_11b43c:
    // 0x11b43c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x11b43cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11b440:
    // 0x11b440: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_11b444:
    if (ctx->pc == 0x11B444u) {
        ctx->pc = 0x11B448u;
        goto label_11b448;
    }
    ctx->pc = 0x11B440u;
    {
        const bool branch_taken_0x11b440 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11b440) {
            ctx->pc = 0x11B458u;
            goto label_11b458;
        }
    }
    ctx->pc = 0x11B448u;
label_11b448:
    // 0x11b448: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11b448u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_11b44c:
    // 0x11b44c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x11b44cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_11b450:
    // 0x11b450: 0x10000006  b           . + 4 + (0x6 << 2)
label_11b454:
    if (ctx->pc == 0x11B454u) {
        ctx->pc = 0x11B458u;
        goto label_11b458;
    }
    ctx->pc = 0x11B450u;
    {
        const bool branch_taken_0x11b450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b450) {
            ctx->pc = 0x11B46Cu;
            goto label_11b46c;
        }
    }
    ctx->pc = 0x11B458u;
label_11b458:
    // 0x11b458: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11b458u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_11b45c:
    // 0x11b45c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11b45cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_11b460:
    // 0x11b460: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x11b460u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_11b464:
    // 0x11b464: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11b464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_11b468:
    // 0x11b468: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11b468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_11b46c:
    // 0x11b46c: 0xaf83b9cc  sw          $v1, -0x4634($gp)
    ctx->pc = 0x11b46cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949324), GPR_U32(ctx, 3));
label_11b470:
    // 0x11b470: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11b470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11b474:
    // 0x11b474: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x11b474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
label_11b478:
    // 0x11b478: 0x24a58f70  addiu       $a1, $a1, -0x7090
    ctx->pc = 0x11b478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938480));
label_11b47c:
    // 0x11b47c: 0x27a65560  addiu       $a2, $sp, 0x5560
    ctx->pc = 0x11b47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 21856));
label_11b480:
    // 0x11b480: 0xc0e2628  jal         func_3898A0
label_11b484:
    if (ctx->pc == 0x11B484u) {
        ctx->pc = 0x11B488u;
        goto label_11b488;
    }
    ctx->pc = 0x11B480u;
    SET_GPR_U32(ctx, 31, 0x11B488u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x11B480u, 0x11B488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B488u;
label_11b488:
    // 0x11b488: 0xc12242c  jal         func_4890B0
label_11b48c:
    if (ctx->pc == 0x11B48Cu) {
        ctx->pc = 0x11B490u;
        goto label_11b490;
    }
    ctx->pc = 0x11B488u;
    SET_GPR_U32(ctx, 31, 0x11B490u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x11B488u, 0x11B490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B490u;
label_11b490:
    // 0x11b490: 0xafa25540  sw          $v0, 0x5540($sp)
    ctx->pc = 0x11b490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 21824), GPR_U32(ctx, 2));
label_11b494:
    // 0x11b494: 0x8fa25540  lw          $v0, 0x5540($sp)
    ctx->pc = 0x11b494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 21824)));
label_11b498:
    // 0x11b498: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x11b498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11b49c:
    // 0x11b49c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x11b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_11b4a0:
    // 0x11b4a0: 0xafa25530  sw          $v0, 0x5530($sp)
    ctx->pc = 0x11b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 21808), GPR_U32(ctx, 2));
label_11b4a4:
    // 0x11b4a4: 0x8f82b9c4  lw          $v0, -0x463C($gp)
    ctx->pc = 0x11b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949316)));
label_11b4a8:
    // 0x11b4a8: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x11b4a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_11b4ac:
    // 0x11b4ac: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x11b4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
label_11b4b0:
    // 0x11b4b0: 0xc08a778  jal         func_229DE0
label_11b4b4:
    if (ctx->pc == 0x11B4B4u) {
        ctx->pc = 0x11B4B8u;
        goto label_11b4b8;
    }
    ctx->pc = 0x11B4B0u;
    SET_GPR_U32(ctx, 31, 0x11B4B8u);
    ctx->pc = 0x229DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229DE0u, 0x11B4B0u, 0x11B4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B4B8u;
label_11b4b8:
    // 0x11b4b8: 0xafa25ad8  sw          $v0, 0x5AD8($sp)
    ctx->pc = 0x11b4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 23256), GPR_U32(ctx, 2));
label_11b4bc:
    // 0x11b4bc: 0x8fa25ad8  lw          $v0, 0x5AD8($sp)
    ctx->pc = 0x11b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23256)));
label_11b4c0:
    // 0x11b4c0: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x11b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_11b4c4:
    // 0x11b4c4: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x11b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_11b4c8:
    // 0x11b4c8: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x11b4c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_11b4cc:
    // 0x11b4cc: 0x36030002  ori         $v1, $s0, 0x2
    ctx->pc = 0x11b4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
label_11b4d0:
    // 0x11b4d0: 0x8fa25ad8  lw          $v0, 0x5AD8($sp)
    ctx->pc = 0x11b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23256)));
label_11b4d4:
    // 0x11b4d4: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x11b4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
label_11b4d8:
    // 0x11b4d8: 0x27a25ad8  addiu       $v0, $sp, 0x5AD8
    ctx->pc = 0x11b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 23256));
label_11b4dc:
    // 0x11b4dc: 0xafa25ab4  sw          $v0, 0x5AB4($sp)
    ctx->pc = 0x11b4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 23220), GPR_U32(ctx, 2));
label_11b4e0:
    // 0x11b4e0: 0x8fa25ab4  lw          $v0, 0x5AB4($sp)
    ctx->pc = 0x11b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23220)));
label_11b4e4:
    // 0x11b4e4: 0x8fa25ad8  lw          $v0, 0x5AD8($sp)
    ctx->pc = 0x11b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23256)));
label_11b4e8:
    // 0x11b4e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11b4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11b4ec:
    // 0x11b4ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11b4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11b4f0:
    // 0x11b4f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x11b4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11b4f4:
    // 0x11b4f4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x11b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_11b4f8:
    // 0x11b4f8: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x11b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_11b4fc:
    // 0x11b4fc: 0x40f809  jalr        $v0
label_11b500:
    if (ctx->pc == 0x11B500u) {
        ctx->pc = 0x11B504u;
        goto label_11b504;
    }
    ctx->pc = 0x11B4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11B504u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B4FCu, 0x11B504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B504u;
label_11b504:
    // 0x11b504: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11b504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b508:
    // 0x11b508: 0xafa05ad4  sw          $zero, 0x5AD4($sp)
    ctx->pc = 0x11b508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 23252), GPR_U32(ctx, 0));
label_11b50c:
    // 0x11b50c: 0x100001fe  b           . + 4 + (0x1FE << 2)
label_11b510:
    if (ctx->pc == 0x11B510u) {
        ctx->pc = 0x11B514u;
        goto label_11b514;
    }
    ctx->pc = 0x11B50Cu;
    {
        const bool branch_taken_0x11b50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b50c) {
            ctx->pc = 0x11BD08u;
            goto label_11bd08;
        }
    }
    ctx->pc = 0x11B514u;
label_11b514:
    // 0x11b514: 0xc0de0d2  jal         func_378348
label_11b518:
    if (ctx->pc == 0x11B518u) {
        ctx->pc = 0x11B51Cu;
        goto label_11b51c;
    }
    ctx->pc = 0x11B514u;
    SET_GPR_U32(ctx, 31, 0x11B51Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x11B514u, 0x11B51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B51Cu;
label_11b51c:
    // 0x11b51c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_11b520:
    if (ctx->pc == 0x11B520u) {
        ctx->pc = 0x11B524u;
        goto label_11b524;
    }
    ctx->pc = 0x11B51Cu;
    {
        const bool branch_taken_0x11b51c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x11b51c) {
            ctx->pc = 0x11B538u;
            goto label_11b538;
        }
    }
    ctx->pc = 0x11B524u;
label_11b524:
    // 0x11b524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11b524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b528:
    // 0x11b528: 0x0  nop
    ctx->pc = 0x11b528u;
    // NOP
label_11b52c:
    // 0x11b52c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x11b52cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_11b530:
    // 0x11b530: 0x10000008  b           . + 4 + (0x8 << 2)
label_11b534:
    if (ctx->pc == 0x11B534u) {
        ctx->pc = 0x11B538u;
        goto label_11b538;
    }
    ctx->pc = 0x11B530u;
    {
        const bool branch_taken_0x11b530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b530) {
            ctx->pc = 0x11B554u;
            goto label_11b554;
        }
    }
    ctx->pc = 0x11B538u;
label_11b538:
    // 0x11b538: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x11b538u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_11b53c:
    // 0x11b53c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11b53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_11b540:
    // 0x11b540: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11b540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_11b544:
    // 0x11b544: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x11b544u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b548:
    // 0x11b548: 0x0  nop
    ctx->pc = 0x11b548u;
    // NOP
label_11b54c:
    // 0x11b54c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x11b54cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_11b550:
    // 0x11b550: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x11b550u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_11b554:
    // 0x11b554: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x11b554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_11b558:
    // 0x11b558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11b558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b55c:
    // 0x11b55c: 0x0  nop
    ctx->pc = 0x11b55cu;
    // NOP
label_11b560:
    // 0x11b560: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x11b560u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_11b564:
    // 0x11b564: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x11b564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_11b568:
    // 0x11b568: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x11b568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_11b56c:
    // 0x11b56c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x11b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_11b570:
    // 0x11b570: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11b570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11b574:
    // 0x11b574: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11b574u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b578:
    // 0x11b578: 0x0  nop
    ctx->pc = 0x11b578u;
    // NOP
label_11b57c:
    // 0x11b57c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x11b57cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_11b580:
    // 0x11b580: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x11b580u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_11b584:
    // 0x11b584: 0xe7a05ad0  swc1        $f0, 0x5AD0($sp)
    ctx->pc = 0x11b584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23248), bits); }
label_11b588:
    // 0x11b588: 0xc7a05ad0  lwc1        $f0, 0x5AD0($sp)
    ctx->pc = 0x11b588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 23248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b58c:
    // 0x11b58c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11b58cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_11b590:
    // 0x11b590: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x11b590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_11b594:
    // 0x11b594: 0xc7a05ad0  lwc1        $f0, 0x5AD0($sp)
    ctx->pc = 0x11b594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 23248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b598:
    // 0x11b598: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11b598u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_11b59c:
    // 0x11b59c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x11b59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_11b5a0:
    // 0x11b5a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11b5a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b5a4:
    // 0x11b5a4: 0x0  nop
    ctx->pc = 0x11b5a4u;
    // NOP
label_11b5a8:
    // 0x11b5a8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x11b5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_11b5ac:
    // 0x11b5ac: 0xc7a05ad0  lwc1        $f0, 0x5AD0($sp)
    ctx->pc = 0x11b5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 23248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b5b0:
    // 0x11b5b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11b5b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_11b5b4:
    // 0x11b5b4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x11b5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_11b5b8:
    // 0x11b5b8: 0xc7a05ad0  lwc1        $f0, 0x5AD0($sp)
    ctx->pc = 0x11b5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 23248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b5bc:
    // 0x11b5bc: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x11b5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_11b5c0:
    // 0x11b5c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11b5c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b5c4:
    // 0x11b5c4: 0x0  nop
    ctx->pc = 0x11b5c4u;
    // NOP
label_11b5c8:
    // 0x11b5c8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x11b5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_11b5cc:
    // 0x11b5cc: 0xc7a05ad0  lwc1        $f0, 0x5AD0($sp)
    ctx->pc = 0x11b5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 23248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b5d0:
    // 0x11b5d0: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x11b5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_11b5d4:
    // 0x11b5d4: 0xc7a05ad0  lwc1        $f0, 0x5AD0($sp)
    ctx->pc = 0x11b5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 23248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b5d8:
    // 0x11b5d8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11b5d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_11b5dc:
    // 0x11b5dc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x11b5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_11b5e0:
    // 0x11b5e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11b5e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b5e4:
    // 0x11b5e4: 0x0  nop
    ctx->pc = 0x11b5e4u;
    // NOP
label_11b5e8:
    // 0x11b5e8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x11b5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_11b5ec:
    // 0x11b5ec: 0xc7a05ad0  lwc1        $f0, 0x5AD0($sp)
    ctx->pc = 0x11b5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 23248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b5f0:
    // 0x11b5f0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x11b5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_11b5f4:
    // 0x11b5f4: 0xc7a05ad0  lwc1        $f0, 0x5AD0($sp)
    ctx->pc = 0x11b5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 23248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b5f8:
    // 0x11b5f8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x11b5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_11b5fc:
    // 0x11b5fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11b5fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b600:
    // 0x11b600: 0x0  nop
    ctx->pc = 0x11b600u;
    // NOP
label_11b604:
    // 0x11b604: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x11b604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_11b608:
    // 0x11b608: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x11b608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_11b60c:
    // 0x11b60c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x11b60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_11b610:
    // 0x11b610: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x11b610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_11b614:
    // 0x11b614: 0x8fa75530  lw          $a3, 0x5530($sp)
    ctx->pc = 0x11b614u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 21808)));
label_11b618:
    // 0x11b618: 0xc104d94  jal         func_413650
label_11b61c:
    if (ctx->pc == 0x11B61Cu) {
        ctx->pc = 0x11B620u;
        goto label_11b620;
    }
    ctx->pc = 0x11B618u;
    SET_GPR_U32(ctx, 31, 0x11B620u);
    ctx->pc = 0x413650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413650u, 0x11B618u, 0x11B620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B620u;
label_11b620:
    // 0x11b620: 0xc0de0d2  jal         func_378348
label_11b624:
    if (ctx->pc == 0x11B624u) {
        ctx->pc = 0x11B628u;
        goto label_11b628;
    }
    ctx->pc = 0x11B620u;
    SET_GPR_U32(ctx, 31, 0x11B628u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x11B620u, 0x11B628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B628u;
label_11b628:
    // 0x11b628: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_11b62c:
    if (ctx->pc == 0x11B62Cu) {
        ctx->pc = 0x11B630u;
        goto label_11b630;
    }
    ctx->pc = 0x11B628u;
    {
        const bool branch_taken_0x11b628 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x11b628) {
            ctx->pc = 0x11B644u;
            goto label_11b644;
        }
    }
    ctx->pc = 0x11B630u;
label_11b630:
    // 0x11b630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11b630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b634:
    // 0x11b634: 0x0  nop
    ctx->pc = 0x11b634u;
    // NOP
label_11b638:
    // 0x11b638: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x11b638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_11b63c:
    // 0x11b63c: 0x10000008  b           . + 4 + (0x8 << 2)
label_11b640:
    if (ctx->pc == 0x11B640u) {
        ctx->pc = 0x11B644u;
        goto label_11b644;
    }
    ctx->pc = 0x11B63Cu;
    {
        const bool branch_taken_0x11b63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b63c) {
            ctx->pc = 0x11B660u;
            goto label_11b660;
        }
    }
    ctx->pc = 0x11B644u;
label_11b644:
    // 0x11b644: 0x29842  srl         $s3, $v0, 1
    ctx->pc = 0x11b644u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_11b648:
    // 0x11b648: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11b648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_11b64c:
    // 0x11b64c: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x11b64cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_11b650:
    // 0x11b650: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x11b650u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b654:
    // 0x11b654: 0x0  nop
    ctx->pc = 0x11b654u;
    // NOP
label_11b658:
    // 0x11b658: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x11b658u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_11b65c:
    // 0x11b65c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x11b65cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_11b660:
    // 0x11b660: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x11b660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_11b664:
    // 0x11b664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11b664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b668:
    // 0x11b668: 0x0  nop
    ctx->pc = 0x11b668u;
    // NOP
label_11b66c:
    // 0x11b66c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x11b66cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_11b670:
    // 0x11b670: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x11b670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_11b674:
    // 0x11b674: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11b674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b678:
    // 0x11b678: 0x0  nop
    ctx->pc = 0x11b678u;
    // NOP
label_11b67c:
    // 0x11b67c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x11b67cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_11b680:
    // 0x11b680: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x11b680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_11b684:
    // 0x11b684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11b684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b688:
    // 0x11b688: 0x0  nop
    ctx->pc = 0x11b688u;
    // NOP
label_11b68c:
    // 0x11b68c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x11b68cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_11b690:
    // 0x11b690: 0xe7a05aa8  swc1        $f0, 0x5AA8($sp)
    ctx->pc = 0x11b690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23208), bits); }
label_11b694:
    // 0x11b694: 0xc0de0d2  jal         func_378348
label_11b698:
    if (ctx->pc == 0x11B698u) {
        ctx->pc = 0x11B69Cu;
        goto label_11b69c;
    }
    ctx->pc = 0x11B694u;
    SET_GPR_U32(ctx, 31, 0x11B69Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x11B694u, 0x11B69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B69Cu;
label_11b69c:
    // 0x11b69c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_11b6a0:
    if (ctx->pc == 0x11B6A0u) {
        ctx->pc = 0x11B6A4u;
        goto label_11b6a4;
    }
    ctx->pc = 0x11B69Cu;
    {
        const bool branch_taken_0x11b69c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x11b69c) {
            ctx->pc = 0x11B6B8u;
            goto label_11b6b8;
        }
    }
    ctx->pc = 0x11B6A4u;
label_11b6a4:
    // 0x11b6a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11b6a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b6a8:
    // 0x11b6a8: 0x0  nop
    ctx->pc = 0x11b6a8u;
    // NOP
label_11b6ac:
    // 0x11b6ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x11b6acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_11b6b0:
    // 0x11b6b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_11b6b4:
    if (ctx->pc == 0x11B6B4u) {
        ctx->pc = 0x11B6B8u;
        goto label_11b6b8;
    }
    ctx->pc = 0x11B6B0u;
    {
        const bool branch_taken_0x11b6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b6b0) {
            ctx->pc = 0x11B6D4u;
            goto label_11b6d4;
        }
    }
    ctx->pc = 0x11B6B8u;
label_11b6b8:
    // 0x11b6b8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x11b6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_11b6bc:
    // 0x11b6bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11b6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_11b6c0:
    // 0x11b6c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11b6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_11b6c4:
    // 0x11b6c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x11b6c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b6c8:
    // 0x11b6c8: 0x0  nop
    ctx->pc = 0x11b6c8u;
    // NOP
label_11b6cc:
    // 0x11b6cc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x11b6ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_11b6d0:
    // 0x11b6d0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x11b6d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_11b6d4:
    // 0x11b6d4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x11b6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_11b6d8:
    // 0x11b6d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x11b6d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b6dc:
    // 0x11b6dc: 0x0  nop
    ctx->pc = 0x11b6dcu;
    // NOP
label_11b6e0:
    // 0x11b6e0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x11b6e0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_11b6e4:
    // 0x11b6e4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x11b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_11b6e8:
    // 0x11b6e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11b6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b6ec:
    // 0x11b6ec: 0x0  nop
    ctx->pc = 0x11b6ecu;
    // NOP
label_11b6f0:
    // 0x11b6f0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x11b6f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_11b6f4:
    // 0x11b6f4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x11b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_11b6f8:
    // 0x11b6f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11b6f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b6fc:
    // 0x11b6fc: 0x0  nop
    ctx->pc = 0x11b6fcu;
    // NOP
label_11b700:
    // 0x11b700: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x11b700u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_11b704:
    // 0x11b704: 0xe7a05aac  swc1        $f0, 0x5AAC($sp)
    ctx->pc = 0x11b704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23212), bits); }
label_11b708:
    // 0x11b708: 0xc0de0d2  jal         func_378348
label_11b70c:
    if (ctx->pc == 0x11B70Cu) {
        ctx->pc = 0x11B710u;
        goto label_11b710;
    }
    ctx->pc = 0x11B708u;
    SET_GPR_U32(ctx, 31, 0x11B710u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x11B708u, 0x11B710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B710u;
label_11b710:
    // 0x11b710: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_11b714:
    if (ctx->pc == 0x11B714u) {
        ctx->pc = 0x11B718u;
        goto label_11b718;
    }
    ctx->pc = 0x11B710u;
    {
        const bool branch_taken_0x11b710 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x11b710) {
            ctx->pc = 0x11B72Cu;
            goto label_11b72c;
        }
    }
    ctx->pc = 0x11B718u;
label_11b718:
    // 0x11b718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11b718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b71c:
    // 0x11b71c: 0x0  nop
    ctx->pc = 0x11b71cu;
    // NOP
label_11b720:
    // 0x11b720: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x11b720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_11b724:
    // 0x11b724: 0x10000008  b           . + 4 + (0x8 << 2)
label_11b728:
    if (ctx->pc == 0x11B728u) {
        ctx->pc = 0x11B72Cu;
        goto label_11b72c;
    }
    ctx->pc = 0x11B724u;
    {
        const bool branch_taken_0x11b724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b724) {
            ctx->pc = 0x11B748u;
            goto label_11b748;
        }
    }
    ctx->pc = 0x11B72Cu;
label_11b72c:
    // 0x11b72c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x11b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_11b730:
    // 0x11b730: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x11b730u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_11b734:
    // 0x11b734: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x11b734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_11b738:
    // 0x11b738: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x11b738u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b73c:
    // 0x11b73c: 0x0  nop
    ctx->pc = 0x11b73cu;
    // NOP
label_11b740:
    // 0x11b740: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x11b740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_11b744:
    // 0x11b744: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x11b744u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_11b748:
    // 0x11b748: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x11b748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_11b74c:
    // 0x11b74c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x11b74cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b750:
    // 0x11b750: 0x0  nop
    ctx->pc = 0x11b750u;
    // NOP
label_11b754:
    // 0x11b754: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x11b754u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_11b758:
    // 0x11b758: 0x3c0741a0  lui         $a3, 0x41A0
    ctx->pc = 0x11b758u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16800 << 16));
label_11b75c:
    // 0x11b75c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x11b75cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b760:
    // 0x11b760: 0x0  nop
    ctx->pc = 0x11b760u;
    // NOP
label_11b764:
    // 0x11b764: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x11b764u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_11b768:
    // 0x11b768: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x11b768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_11b76c:
    // 0x11b76c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11b76cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b770:
    // 0x11b770: 0x0  nop
    ctx->pc = 0x11b770u;
    // NOP
label_11b774:
    // 0x11b774: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x11b774u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_11b778:
    // 0x11b778: 0xe7a05ab0  swc1        $f0, 0x5AB0($sp)
    ctx->pc = 0x11b778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23216), bits); }
label_11b77c:
    // 0x11b77c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11b77cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b780:
    // 0x11b780: 0x1000005a  b           . + 4 + (0x5A << 2)
label_11b784:
    if (ctx->pc == 0x11B784u) {
        ctx->pc = 0x11B788u;
        goto label_11b788;
    }
    ctx->pc = 0x11B780u;
    {
        const bool branch_taken_0x11b780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b780) {
            ctx->pc = 0x11B8ECu;
            goto label_11b8ec;
        }
    }
    ctx->pc = 0x11B788u;
label_11b788:
    // 0x11b788: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x11b788u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_11b78c:
    // 0x11b78c: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x11b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_11b790:
    // 0x11b790: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11b790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11b794:
    // 0x11b794: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x11b794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11b798:
    // 0x11b798: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x11b798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11b79c:
    // 0x11b79c: 0x8fa25ad4  lw          $v0, 0x5AD4($sp)
    ctx->pc = 0x11b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23252)));
label_11b7a0:
    // 0x11b7a0: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x11b7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_11b7a4:
    // 0x11b7a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_11b7a8:
    // 0x11b7a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11b7ac:
    // 0x11b7ac: 0x5d2821  addu        $a1, $v0, $sp
    ctx->pc = 0x11b7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11b7b0:
    // 0x11b7b0: 0xc4a05560  lwc1        $f0, 0x5560($a1)
    ctx->pc = 0x11b7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 21856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b7b4:
    // 0x11b7b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x11b7b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_11b7b8:
    // 0x11b7b8: 0x113040  sll         $a2, $s1, 1
    ctx->pc = 0x11b7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_11b7bc:
    // 0x11b7bc: 0xd11021  addu        $v0, $a2, $s1
    ctx->pc = 0x11b7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_11b7c0:
    // 0x11b7c0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x11b7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11b7c4:
    // 0x11b7c4: 0xbd3021  addu        $a2, $a1, $sp
    ctx->pc = 0x11b7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_11b7c8:
    // 0x11b7c8: 0xe4c000a0  swc1        $f0, 0xA0($a2)
    ctx->pc = 0x11b7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 160), bits); }
label_11b7cc:
    // 0x11b7cc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x11b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_11b7d0:
    // 0x11b7d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x11b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_11b7d4:
    // 0x11b7d4: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x11b7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11b7d8:
    // 0x11b7d8: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x11b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_11b7dc:
    // 0x11b7dc: 0xc44100a4  lwc1        $f1, 0xA4($v0)
    ctx->pc = 0x11b7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11b7e0:
    // 0x11b7e0: 0x8fa55ad4  lw          $a1, 0x5AD4($sp)
    ctx->pc = 0x11b7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23252)));
label_11b7e4:
    // 0x11b7e4: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x11b7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_11b7e8:
    // 0x11b7e8: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x11b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_11b7ec:
    // 0x11b7ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11b7f0:
    // 0x11b7f0: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x11b7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11b7f4:
    // 0x11b7f4: 0xc4805564  lwc1        $f0, 0x5564($a0)
    ctx->pc = 0x11b7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 21860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b7f8:
    // 0x11b7f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x11b7f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_11b7fc:
    // 0x11b7fc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x11b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_11b800:
    // 0x11b800: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x11b800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_11b804:
    // 0x11b804: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x11b804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_11b808:
    // 0x11b808: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x11b808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11b80c:
    // 0x11b80c: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x11b80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
label_11b810:
    // 0x11b810: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x11b810u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_11b814:
    // 0x11b814: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x11b814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_11b818:
    // 0x11b818: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x11b818u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_11b81c:
    // 0x11b81c: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x11b81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_11b820:
    // 0x11b820: 0xc4a100a8  lwc1        $f1, 0xA8($a1)
    ctx->pc = 0x11b820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11b824:
    // 0x11b824: 0x8fa25ad4  lw          $v0, 0x5AD4($sp)
    ctx->pc = 0x11b824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23252)));
label_11b828:
    // 0x11b828: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x11b828u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_11b82c:
    // 0x11b82c: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x11b82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_11b830:
    // 0x11b830: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x11b830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_11b834:
    // 0x11b834: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x11b834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11b838:
    // 0x11b838: 0xc4405568  lwc1        $f0, 0x5568($v0)
    ctx->pc = 0x11b838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b83c:
    // 0x11b83c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x11b83cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_11b840:
    // 0x11b840: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x11b840u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_11b844:
    // 0x11b844: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x11b844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_11b848:
    // 0x11b848: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x11b848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_11b84c:
    // 0x11b84c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x11b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11b850:
    // 0x11b850: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x11b850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
label_11b854:
    // 0x11b854: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x11b854u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_11b858:
    // 0x11b858: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x11b858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_11b85c:
    // 0x11b85c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x11b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_11b860:
    // 0x11b860: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x11b860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11b864:
    // 0x11b864: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x11b864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11b868:
    // 0x11b868: 0xc7a05aa8  lwc1        $f0, 0x5AA8($sp)
    ctx->pc = 0x11b868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 23208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b86c:
    // 0x11b86c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11b86cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_11b870:
    // 0x11b870: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x11b870u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_11b874:
    // 0x11b874: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x11b874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_11b878:
    // 0x11b878: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x11b878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_11b87c:
    // 0x11b87c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x11b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11b880:
    // 0x11b880: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x11b880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
label_11b884:
    // 0x11b884: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x11b884u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_11b888:
    // 0x11b888: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x11b888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_11b88c:
    // 0x11b88c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11b890:
    // 0x11b890: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x11b890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11b894:
    // 0x11b894: 0xc44100a4  lwc1        $f1, 0xA4($v0)
    ctx->pc = 0x11b894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11b898:
    // 0x11b898: 0xc7a05aac  lwc1        $f0, 0x5AAC($sp)
    ctx->pc = 0x11b898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 23212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b89c:
    // 0x11b89c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11b89cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_11b8a0:
    // 0x11b8a0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x11b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_11b8a4:
    // 0x11b8a4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x11b8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_11b8a8:
    // 0x11b8a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11b8ac:
    // 0x11b8ac: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x11b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11b8b0:
    // 0x11b8b0: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x11b8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
label_11b8b4:
    // 0x11b8b4: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x11b8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_11b8b8:
    // 0x11b8b8: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x11b8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_11b8bc:
    // 0x11b8bc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x11b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_11b8c0:
    // 0x11b8c0: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x11b8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11b8c4:
    // 0x11b8c4: 0xc48100a8  lwc1        $f1, 0xA8($a0)
    ctx->pc = 0x11b8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11b8c8:
    // 0x11b8c8: 0xc7a05ab0  lwc1        $f0, 0x5AB0($sp)
    ctx->pc = 0x11b8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 23216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b8cc:
    // 0x11b8cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11b8ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_11b8d0:
    // 0x11b8d0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x11b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_11b8d4:
    // 0x11b8d4: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x11b8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_11b8d8:
    // 0x11b8d8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x11b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_11b8dc:
    // 0x11b8dc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x11b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11b8e0:
    // 0x11b8e0: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x11b8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
label_11b8e4:
    // 0x11b8e4: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x11b8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_11b8e8:
    // 0x11b8e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11b8e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11b8ec:
    // 0x11b8ec: 0x2e250004  sltiu       $a1, $s1, 0x4
    ctx->pc = 0x11b8ecu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_11b8f0:
    // 0x11b8f0: 0x14a0ffa5  bnez        $a1, . + 4 + (-0x5B << 2)
label_11b8f4:
    if (ctx->pc == 0x11B8F4u) {
        ctx->pc = 0x11B8F8u;
        goto label_11b8f8;
    }
    ctx->pc = 0x11B8F0u;
    {
        const bool branch_taken_0x11b8f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b8f0) {
            ctx->pc = 0x11B788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b788;
        }
    }
    ctx->pc = 0x11B8F8u;
label_11b8f8:
    // 0x11b8f8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x11b8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b8fc:
    // 0x11b8fc: 0xe7a05a98  swc1        $f0, 0x5A98($sp)
    ctx->pc = 0x11b8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23192), bits); }
label_11b900:
    // 0x11b900: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x11b900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b904:
    // 0x11b904: 0xe7a05a9c  swc1        $f0, 0x5A9C($sp)
    ctx->pc = 0x11b904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23196), bits); }
label_11b908:
    // 0x11b908: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x11b908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b90c:
    // 0x11b90c: 0xe7a05aa0  swc1        $f0, 0x5AA0($sp)
    ctx->pc = 0x11b90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23200), bits); }
label_11b910:
    // 0x11b910: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x11b910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_11b914:
    // 0x11b914: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11b914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_11b918:
    // 0x11b918: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x11b918u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11b91c:
    // 0x11b91c: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x11b91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_11b920:
    // 0x11b920: 0x24a200d0  addiu       $v0, $a1, 0xD0
    ctx->pc = 0x11b920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
label_11b924:
    // 0x11b924: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11b924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11b928:
    // 0x11b928: 0x27a55a98  addiu       $a1, $sp, 0x5A98
    ctx->pc = 0x11b928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 23192));
label_11b92c:
    // 0x11b92c: 0xc041d58  jal         func_107560
label_11b930:
    if (ctx->pc == 0x11B930u) {
        ctx->pc = 0x11B934u;
        goto label_11b934;
    }
    ctx->pc = 0x11B92Cu;
    SET_GPR_U32(ctx, 31, 0x11B934u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x11B92Cu, 0x11B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B934u;
label_11b934:
    // 0x11b934: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11b934u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b938:
    // 0x11b938: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x11b938u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_11b93c:
    // 0x11b93c: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x11b93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_11b940:
    // 0x11b940: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x11b940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_11b944:
    // 0x11b944: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x11b944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11b948:
    // 0x11b948: 0xe44000ec  swc1        $f0, 0xEC($v0)
    ctx->pc = 0x11b948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
label_11b94c:
    // 0x11b94c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11b94cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b950:
    // 0x11b950: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x11b950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_11b954:
    // 0x11b954: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11b954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_11b958:
    // 0x11b958: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11b958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11b95c:
    // 0x11b95c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x11b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11b960:
    // 0x11b960: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x11b960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
label_11b964:
    // 0x11b964: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x11b964u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_11b968:
    // 0x11b968: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x11b968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_11b96c:
    // 0x11b96c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x11b96cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11b970:
    // 0x11b970: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x11b970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_11b974:
    // 0x11b974: 0x245e00dc  addiu       $fp, $v0, 0xDC
    ctx->pc = 0x11b974u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
label_11b978:
    // 0x11b978: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x11b978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_11b97c:
    // 0x11b97c: 0xa3c40000  sb          $a0, 0x0($fp)
    ctx->pc = 0x11b97cu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 4));
label_11b980:
    // 0x11b980: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x11b980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_11b984:
    // 0x11b984: 0xa3c50001  sb          $a1, 0x1($fp)
    ctx->pc = 0x11b984u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 1), (uint8_t)GPR_U32(ctx, 5));
label_11b988:
    // 0x11b988: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x11b988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_11b98c:
    // 0x11b98c: 0xa3c20002  sb          $v0, 0x2($fp)
    ctx->pc = 0x11b98cu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 2), (uint8_t)GPR_U32(ctx, 2));
label_11b990:
    // 0x11b990: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x11b990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_11b994:
    // 0x11b994: 0xa3c40003  sb          $a0, 0x3($fp)
    ctx->pc = 0x11b994u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 3), (uint8_t)GPR_U32(ctx, 4));
label_11b998:
    // 0x11b998: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x11b998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_11b99c:
    // 0x11b99c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11b99cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11b9a0:
    // 0x11b9a0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x11b9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b9a4:
    // 0x11b9a4: 0xe7a05a88  swc1        $f0, 0x5A88($sp)
    ctx->pc = 0x11b9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23176), bits); }
label_11b9a8:
    // 0x11b9a8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x11b9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b9ac:
    // 0x11b9ac: 0xe7a05a8c  swc1        $f0, 0x5A8C($sp)
    ctx->pc = 0x11b9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23180), bits); }
label_11b9b0:
    // 0x11b9b0: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x11b9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b9b4:
    // 0x11b9b4: 0xe7a05a90  swc1        $f0, 0x5A90($sp)
    ctx->pc = 0x11b9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23184), bits); }
label_11b9b8:
    // 0x11b9b8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x11b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_11b9bc:
    // 0x11b9bc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_11b9c0:
    // 0x11b9c0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x11b9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11b9c4:
    // 0x11b9c4: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x11b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_11b9c8:
    // 0x11b9c8: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x11b9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_11b9cc:
    // 0x11b9cc: 0x27a25a88  addiu       $v0, $sp, 0x5A88
    ctx->pc = 0x11b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 23176));
label_11b9d0:
    // 0x11b9d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11b9d4:
    // 0x11b9d4: 0xc041d58  jal         func_107560
label_11b9d8:
    if (ctx->pc == 0x11B9D8u) {
        ctx->pc = 0x11B9DCu;
        goto label_11b9dc;
    }
    ctx->pc = 0x11B9D4u;
    SET_GPR_U32(ctx, 31, 0x11B9DCu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x11B9D4u, 0x11B9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B9DCu;
label_11b9dc:
    // 0x11b9dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11b9dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b9e0:
    // 0x11b9e0: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x11b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_11b9e4:
    // 0x11b9e4: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x11b9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_11b9e8:
    // 0x11b9e8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x11b9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_11b9ec:
    // 0x11b9ec: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x11b9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_11b9f0:
    // 0x11b9f0: 0xe4a000ec  swc1        $f0, 0xEC($a1)
    ctx->pc = 0x11b9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 236), bits); }
label_11b9f4:
    // 0x11b9f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x11b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_11b9f8:
    // 0x11b9f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11b9f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b9fc:
    // 0x11b9fc: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x11b9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_11ba00:
    // 0x11ba00: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x11ba00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_11ba04:
    // 0x11ba04: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x11ba04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11ba08:
    // 0x11ba08: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x11ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_11ba0c:
    // 0x11ba0c: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x11ba0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
label_11ba10:
    // 0x11ba10: 0x1090c0  sll         $s2, $s0, 3
    ctx->pc = 0x11ba10u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_11ba14:
    // 0x11ba14: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x11ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_11ba18:
    // 0x11ba18: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x11ba18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11ba1c:
    // 0x11ba1c: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x11ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_11ba20:
    // 0x11ba20: 0x245700dc  addiu       $s7, $v0, 0xDC
    ctx->pc = 0x11ba20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
label_11ba24:
    // 0x11ba24: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x11ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_11ba28:
    // 0x11ba28: 0xa2e30000  sb          $v1, 0x0($s7)
    ctx->pc = 0x11ba28u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 3));
label_11ba2c:
    // 0x11ba2c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x11ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_11ba30:
    // 0x11ba30: 0xa2e20001  sb          $v0, 0x1($s7)
    ctx->pc = 0x11ba30u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 1), (uint8_t)GPR_U32(ctx, 2));
label_11ba34:
    // 0x11ba34: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x11ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_11ba38:
    // 0x11ba38: 0xa2e20002  sb          $v0, 0x2($s7)
    ctx->pc = 0x11ba38u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 2), (uint8_t)GPR_U32(ctx, 2));
label_11ba3c:
    // 0x11ba3c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x11ba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_11ba40:
    // 0x11ba40: 0xa2e40003  sb          $a0, 0x3($s7)
    ctx->pc = 0x11ba40u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 3), (uint8_t)GPR_U32(ctx, 4));
label_11ba44:
    // 0x11ba44: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x11ba44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_11ba48:
    // 0x11ba48: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11ba48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11ba4c:
    // 0x11ba4c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x11ba4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11ba50:
    // 0x11ba50: 0xe7a05a78  swc1        $f0, 0x5A78($sp)
    ctx->pc = 0x11ba50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23160), bits); }
label_11ba54:
    // 0x11ba54: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x11ba54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11ba58:
    // 0x11ba58: 0xe7a05a7c  swc1        $f0, 0x5A7C($sp)
    ctx->pc = 0x11ba58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23164), bits); }
label_11ba5c:
    // 0x11ba5c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x11ba5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11ba60:
    // 0x11ba60: 0xe7a05a80  swc1        $f0, 0x5A80($sp)
    ctx->pc = 0x11ba60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23168), bits); }
label_11ba64:
    // 0x11ba64: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x11ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_11ba68:
    // 0x11ba68: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_11ba6c:
    // 0x11ba6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11ba70:
    // 0x11ba70: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x11ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11ba74:
    // 0x11ba74: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x11ba74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_11ba78:
    // 0x11ba78: 0x27a55a78  addiu       $a1, $sp, 0x5A78
    ctx->pc = 0x11ba78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 23160));
label_11ba7c:
    // 0x11ba7c: 0xc041d58  jal         func_107560
label_11ba80:
    if (ctx->pc == 0x11BA80u) {
        ctx->pc = 0x11BA84u;
        goto label_11ba84;
    }
    ctx->pc = 0x11BA7Cu;
    SET_GPR_U32(ctx, 31, 0x11BA84u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x11BA7Cu, 0x11BA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA84u;
label_11ba84:
    // 0x11ba84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x11ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_11ba88:
    // 0x11ba88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11ba88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11ba8c:
    // 0x11ba8c: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x11ba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_11ba90:
    // 0x11ba90: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x11ba90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_11ba94:
    // 0x11ba94: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x11ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_11ba98:
    // 0x11ba98: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x11ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11ba9c:
    // 0x11ba9c: 0xe44000ec  swc1        $f0, 0xEC($v0)
    ctx->pc = 0x11ba9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
label_11baa0:
    // 0x11baa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11baa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11baa4:
    // 0x11baa4: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x11baa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_11baa8:
    // 0x11baa8: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x11baa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_11baac:
    // 0x11baac: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x11baacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_11bab0:
    // 0x11bab0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x11bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11bab4:
    // 0x11bab4: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x11bab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
label_11bab8:
    // 0x11bab8: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x11bab8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_11babc:
    // 0x11babc: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x11babcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_11bac0:
    // 0x11bac0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x11bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_11bac4:
    // 0x11bac4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x11bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11bac8:
    // 0x11bac8: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x11bac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
label_11bacc:
    // 0x11bacc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x11baccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11bad0:
    // 0x11bad0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x11bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_11bad4:
    // 0x11bad4: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x11bad4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
label_11bad8:
    // 0x11bad8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x11bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_11badc:
    // 0x11badc: 0xa2c20001  sb          $v0, 0x1($s6)
    ctx->pc = 0x11badcu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 2));
label_11bae0:
    // 0x11bae0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x11bae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_11bae4:
    // 0x11bae4: 0xa2c40002  sb          $a0, 0x2($s6)
    ctx->pc = 0x11bae4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 4));
label_11bae8:
    // 0x11bae8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x11bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_11baec:
    // 0x11baec: 0xa2c20003  sb          $v0, 0x3($s6)
    ctx->pc = 0x11baecu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 2));
label_11baf0:
    // 0x11baf0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x11baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_11baf4:
    // 0x11baf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11baf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11baf8:
    // 0x11baf8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x11baf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11bafc:
    // 0x11bafc: 0xe7a05a68  swc1        $f0, 0x5A68($sp)
    ctx->pc = 0x11bafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23144), bits); }
label_11bb00:
    // 0x11bb00: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x11bb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11bb04:
    // 0x11bb04: 0xe7a05a6c  swc1        $f0, 0x5A6C($sp)
    ctx->pc = 0x11bb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23148), bits); }
label_11bb08:
    // 0x11bb08: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x11bb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11bb0c:
    // 0x11bb0c: 0xe7a05a70  swc1        $f0, 0x5A70($sp)
    ctx->pc = 0x11bb0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23152), bits); }
label_11bb10:
    // 0x11bb10: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x11bb10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_11bb14:
    // 0x11bb14: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x11bb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_11bb18:
    // 0x11bb18: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x11bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_11bb1c:
    // 0x11bb1c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x11bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11bb20:
    // 0x11bb20: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x11bb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_11bb24:
    // 0x11bb24: 0x27a55a68  addiu       $a1, $sp, 0x5A68
    ctx->pc = 0x11bb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 23144));
label_11bb28:
    // 0x11bb28: 0xc041d58  jal         func_107560
label_11bb2c:
    if (ctx->pc == 0x11BB2Cu) {
        ctx->pc = 0x11BB30u;
        goto label_11bb30;
    }
    ctx->pc = 0x11BB28u;
    SET_GPR_U32(ctx, 31, 0x11BB30u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x11BB28u, 0x11BB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB30u;
label_11bb30:
    // 0x11bb30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x11bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_11bb34:
    // 0x11bb34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11bb34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11bb38:
    // 0x11bb38: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x11bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_11bb3c:
    // 0x11bb3c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_11bb40:
    // 0x11bb40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11bb44:
    // 0x11bb44: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x11bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11bb48:
    // 0x11bb48: 0xe44000ec  swc1        $f0, 0xEC($v0)
    ctx->pc = 0x11bb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
label_11bb4c:
    // 0x11bb4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11bb4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11bb50:
    // 0x11bb50: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x11bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_11bb54:
    // 0x11bb54: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x11bb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_11bb58:
    // 0x11bb58: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x11bb58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_11bb5c:
    // 0x11bb5c: 0xbd3021  addu        $a2, $a1, $sp
    ctx->pc = 0x11bb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_11bb60:
    // 0x11bb60: 0xe4c000f0  swc1        $f0, 0xF0($a2)
    ctx->pc = 0x11bb60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 240), bits); }
label_11bb64:
    // 0x11bb64: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x11bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_11bb68:
    // 0x11bb68: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_11bb6c:
    // 0x11bb6c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x11bb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11bb70:
    // 0x11bb70: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x11bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_11bb74:
    // 0x11bb74: 0x244500dc  addiu       $a1, $v0, 0xDC
    ctx->pc = 0x11bb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
label_11bb78:
    // 0x11bb78: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x11bb78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11bb7c:
    // 0x11bb7c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x11bb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_11bb80:
    // 0x11bb80: 0xa2a60000  sb          $a2, 0x0($s5)
    ctx->pc = 0x11bb80u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 6));
label_11bb84:
    // 0x11bb84: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x11bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_11bb88:
    // 0x11bb88: 0xa2a20001  sb          $v0, 0x1($s5)
    ctx->pc = 0x11bb88u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 2));
label_11bb8c:
    // 0x11bb8c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x11bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_11bb90:
    // 0x11bb90: 0xa2a20002  sb          $v0, 0x2($s5)
    ctx->pc = 0x11bb90u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
label_11bb94:
    // 0x11bb94: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x11bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_11bb98:
    // 0x11bb98: 0xa2a20003  sb          $v0, 0x3($s5)
    ctx->pc = 0x11bb98u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 2));
label_11bb9c:
    // 0x11bb9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11bb9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_11bba0:
    // 0x11bba0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x11bba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11bba4:
    // 0x11bba4: 0xe7a05a58  swc1        $f0, 0x5A58($sp)
    ctx->pc = 0x11bba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23128), bits); }
label_11bba8:
    // 0x11bba8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x11bba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11bbac:
    // 0x11bbac: 0xe7a05a5c  swc1        $f0, 0x5A5C($sp)
    ctx->pc = 0x11bbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23132), bits); }
label_11bbb0:
    // 0x11bbb0: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x11bbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11bbb4:
    // 0x11bbb4: 0xe7a05a60  swc1        $f0, 0x5A60($sp)
    ctx->pc = 0x11bbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23136), bits); }
label_11bbb8:
    // 0x11bbb8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x11bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_11bbbc:
    // 0x11bbbc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_11bbc0:
    // 0x11bbc0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x11bbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11bbc4:
    // 0x11bbc4: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x11bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_11bbc8:
    // 0x11bbc8: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x11bbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_11bbcc:
    // 0x11bbcc: 0x27a55a58  addiu       $a1, $sp, 0x5A58
    ctx->pc = 0x11bbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 23128));
label_11bbd0:
    // 0x11bbd0: 0xc041d58  jal         func_107560
label_11bbd4:
    if (ctx->pc == 0x11BBD4u) {
        ctx->pc = 0x11BBD8u;
        goto label_11bbd8;
    }
    ctx->pc = 0x11BBD0u;
    SET_GPR_U32(ctx, 31, 0x11BBD8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x11BBD0u, 0x11BBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BBD8u;
label_11bbd8:
    // 0x11bbd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11bbd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11bbdc:
    // 0x11bbdc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x11bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_11bbe0:
    // 0x11bbe0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_11bbe4:
    // 0x11bbe4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x11bbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11bbe8:
    // 0x11bbe8: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x11bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_11bbec:
    // 0x11bbec: 0xe44000ec  swc1        $f0, 0xEC($v0)
    ctx->pc = 0x11bbecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
label_11bbf0:
    // 0x11bbf0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x11bbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_11bbf4:
    // 0x11bbf4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x11bbf4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11bbf8:
    // 0x11bbf8: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x11bbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_11bbfc:
    // 0x11bbfc: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x11bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_11bc00:
    // 0x11bc00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11bc04:
    // 0x11bc04: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x11bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11bc08:
    // 0x11bc08: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x11bc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
label_11bc0c:
    // 0x11bc0c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x11bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_11bc10:
    // 0x11bc10: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_11bc14:
    // 0x11bc14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11bc18:
    // 0x11bc18: 0x5d2821  addu        $a1, $v0, $sp
    ctx->pc = 0x11bc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11bc1c:
    // 0x11bc1c: 0x24a400dc  addiu       $a0, $a1, 0xDC
    ctx->pc = 0x11bc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 220));
label_11bc20:
    // 0x11bc20: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x11bc20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11bc24:
    // 0x11bc24: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x11bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_11bc28:
    // 0x11bc28: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x11bc28u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
label_11bc2c:
    // 0x11bc2c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x11bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_11bc30:
    // 0x11bc30: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x11bc30u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
label_11bc34:
    // 0x11bc34: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x11bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_11bc38:
    // 0x11bc38: 0xa2830002  sb          $v1, 0x2($s4)
    ctx->pc = 0x11bc38u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 3));
label_11bc3c:
    // 0x11bc3c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x11bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_11bc40:
    // 0x11bc40: 0xa2820003  sb          $v0, 0x3($s4)
    ctx->pc = 0x11bc40u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 2));
label_11bc44:
    // 0x11bc44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11bc44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_11bc48:
    // 0x11bc48: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x11bc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11bc4c:
    // 0x11bc4c: 0xe7a05a48  swc1        $f0, 0x5A48($sp)
    ctx->pc = 0x11bc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23112), bits); }
label_11bc50:
    // 0x11bc50: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x11bc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11bc54:
    // 0x11bc54: 0xe7a05a4c  swc1        $f0, 0x5A4C($sp)
    ctx->pc = 0x11bc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23116), bits); }
label_11bc58:
    // 0x11bc58: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x11bc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11bc5c:
    // 0x11bc5c: 0xe7a05a50  swc1        $f0, 0x5A50($sp)
    ctx->pc = 0x11bc5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 23120), bits); }
label_11bc60:
    // 0x11bc60: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x11bc60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_11bc64:
    // 0x11bc64: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x11bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_11bc68:
    // 0x11bc68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11bc6c:
    // 0x11bc6c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x11bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11bc70:
    // 0x11bc70: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x11bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_11bc74:
    // 0x11bc74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11bc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11bc78:
    // 0x11bc78: 0x27a55a48  addiu       $a1, $sp, 0x5A48
    ctx->pc = 0x11bc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 23112));
label_11bc7c:
    // 0x11bc7c: 0xc041d58  jal         func_107560
label_11bc80:
    if (ctx->pc == 0x11BC80u) {
        ctx->pc = 0x11BC84u;
        goto label_11bc84;
    }
    ctx->pc = 0x11BC7Cu;
    SET_GPR_U32(ctx, 31, 0x11BC84u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x11BC7Cu, 0x11BC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BC84u;
label_11bc84:
    // 0x11bc84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11bc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11bc88:
    // 0x11bc88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x11bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_11bc8c:
    // 0x11bc8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11bc8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11bc90:
    // 0x11bc90: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x11bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_11bc94:
    // 0x11bc94: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_11bc98:
    // 0x11bc98: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x11bc98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11bc9c:
    // 0x11bc9c: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x11bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_11bca0:
    // 0x11bca0: 0xe44000ec  swc1        $f0, 0xEC($v0)
    ctx->pc = 0x11bca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
label_11bca4:
    // 0x11bca4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x11bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_11bca8:
    // 0x11bca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11bca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11bcac:
    // 0x11bcac: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x11bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_11bcb0:
    // 0x11bcb0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_11bcb4:
    // 0x11bcb4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x11bcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11bcb8:
    // 0x11bcb8: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x11bcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_11bcbc:
    // 0x11bcbc: 0xe4a000f0  swc1        $f0, 0xF0($a1)
    ctx->pc = 0x11bcbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 240), bits); }
label_11bcc0:
    // 0x11bcc0: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x11bcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_11bcc4:
    // 0x11bcc4: 0xd03821  addu        $a3, $a2, $s0
    ctx->pc = 0x11bcc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_11bcc8:
    // 0x11bcc8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x11bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_11bccc:
    // 0x11bccc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x11bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_11bcd0:
    // 0x11bcd0: 0x245300dc  addiu       $s3, $v0, 0xDC
    ctx->pc = 0x11bcd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
label_11bcd4:
    // 0x11bcd4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x11bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_11bcd8:
    // 0x11bcd8: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x11bcd8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_11bcdc:
    // 0x11bcdc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x11bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_11bce0:
    // 0x11bce0: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x11bce0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_11bce4:
    // 0x11bce4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x11bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_11bce8:
    // 0x11bce8: 0xa2620002  sb          $v0, 0x2($s3)
    ctx->pc = 0x11bce8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
label_11bcec:
    // 0x11bcec: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x11bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_11bcf0:
    // 0x11bcf0: 0xa2620003  sb          $v0, 0x3($s3)
    ctx->pc = 0x11bcf0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
label_11bcf4:
    // 0x11bcf4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x11bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_11bcf8:
    // 0x11bcf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11bcf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11bcfc:
    // 0x11bcfc: 0x8fa35ad4  lw          $v1, 0x5AD4($sp)
    ctx->pc = 0x11bcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23252)));
label_11bd00:
    // 0x11bd00: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x11bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_11bd04:
    // 0x11bd04: 0xafa25ad4  sw          $v0, 0x5AD4($sp)
    ctx->pc = 0x11bd04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 23252), GPR_U32(ctx, 2));
label_11bd08:
    // 0x11bd08: 0x8fa35ad4  lw          $v1, 0x5AD4($sp)
    ctx->pc = 0x11bd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23252)));
label_11bd0c:
    // 0x11bd0c: 0x8f82b9cc  lw          $v0, -0x4634($gp)
    ctx->pc = 0x11bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949324)));
label_11bd10:
    // 0x11bd10: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x11bd10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_11bd14:
    // 0x11bd14: 0x1440fdff  bnez        $v0, . + 4 + (-0x201 << 2)
label_11bd18:
    if (ctx->pc == 0x11BD18u) {
        ctx->pc = 0x11BD1Cu;
        goto label_11bd1c;
    }
    ctx->pc = 0x11BD14u;
    {
        const bool branch_taken_0x11bd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11bd14) {
            ctx->pc = 0x11B514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b514;
        }
    }
    ctx->pc = 0x11BD1Cu;
label_11bd1c:
    // 0x11bd1c: 0x8f82b9cc  lw          $v0, -0x4634($gp)
    ctx->pc = 0x11bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949324)));
label_11bd20:
    // 0x11bd20: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x11bd20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_11bd24:
    // 0x11bd24: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x11bd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11bd28:
    // 0x11bd28: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x11bd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_11bd2c:
    // 0x11bd2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11bd2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11bd30:
    // 0x11bd30: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x11bd30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11bd34:
    // 0x11bd34: 0xc1111fe  jal         func_4447F8
label_11bd38:
    if (ctx->pc == 0x11BD38u) {
        ctx->pc = 0x11BD3Cu;
        goto label_11bd3c;
    }
    ctx->pc = 0x11BD34u;
    SET_GPR_U32(ctx, 31, 0x11BD3Cu);
    ctx->pc = 0x4447F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4447F8u, 0x11BD34u, 0x11BD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD3Cu;
label_11bd3c:
    // 0x11bd3c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_11bd40:
    if (ctx->pc == 0x11BD40u) {
        ctx->pc = 0x11BD44u;
        goto label_11bd44;
    }
    ctx->pc = 0x11BD3Cu;
    {
        const bool branch_taken_0x11bd3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bd3c) {
            ctx->pc = 0x11BE18u;
            goto label_11be18;
        }
    }
    ctx->pc = 0x11BD44u;
label_11bd44:
    // 0x11bd44: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x11bd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_11bd48:
    // 0x11bd48: 0xc1110a8  jal         func_4442A0
label_11bd4c:
    if (ctx->pc == 0x11BD4Cu) {
        ctx->pc = 0x11BD50u;
        goto label_11bd50;
    }
    ctx->pc = 0x11BD48u;
    SET_GPR_U32(ctx, 31, 0x11BD50u);
    ctx->pc = 0x4442A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4442A0u, 0x11BD48u, 0x11BD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD50u;
label_11bd50:
    // 0x11bd50: 0xc111228  jal         func_4448A0
label_11bd54:
    if (ctx->pc == 0x11BD54u) {
        ctx->pc = 0x11BD58u;
        goto label_11bd58;
    }
    ctx->pc = 0x11BD50u;
    SET_GPR_U32(ctx, 31, 0x11BD58u);
    ctx->pc = 0x4448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4448A0u, 0x11BD50u, 0x11BD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD58u;
label_11bd58:
    // 0x11bd58: 0x1000002f  b           . + 4 + (0x2F << 2)
label_11bd5c:
    if (ctx->pc == 0x11BD5Cu) {
        ctx->pc = 0x11BD60u;
        goto label_11bd60;
    }
    ctx->pc = 0x11BD58u;
    {
        const bool branch_taken_0x11bd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bd58) {
            ctx->pc = 0x11BE18u;
            goto label_11be18;
        }
    }
    ctx->pc = 0x11BD60u;
label_11bd60:
    // 0x11bd60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11bd64:
    // 0x11bd64: 0xc0e6f1a  jal         func_39BC68
label_11bd68:
    if (ctx->pc == 0x11BD68u) {
        ctx->pc = 0x11BD6Cu;
        goto label_11bd6c;
    }
    ctx->pc = 0x11BD64u;
    SET_GPR_U32(ctx, 31, 0x11BD6Cu);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x11BD64u, 0x11BD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD6Cu;
label_11bd6c:
    // 0x11bd6c: 0xafa25acc  sw          $v0, 0x5ACC($sp)
    ctx->pc = 0x11bd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 23244), GPR_U32(ctx, 2));
label_11bd70:
    // 0x11bd70: 0x8fa25acc  lw          $v0, 0x5ACC($sp)
    ctx->pc = 0x11bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23244)));
label_11bd74:
    // 0x11bd74: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
label_11bd78:
    if (ctx->pc == 0x11BD78u) {
        ctx->pc = 0x11BD7Cu;
        goto label_11bd7c;
    }
    ctx->pc = 0x11BD74u;
    {
        const bool branch_taken_0x11bd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x11bd74) {
            ctx->pc = 0x11BD8Cu;
            goto label_11bd8c;
        }
    }
    ctx->pc = 0x11BD7Cu;
label_11bd7c:
    // 0x11bd7c: 0x8fa45acc  lw          $a0, 0x5ACC($sp)
    ctx->pc = 0x11bd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23244)));
label_11bd80:
    // 0x11bd80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11bd80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11bd84:
    // 0x11bd84: 0xc0e6ee0  jal         func_39BB80
label_11bd88:
    if (ctx->pc == 0x11BD88u) {
        ctx->pc = 0x11BD8Cu;
        goto label_11bd8c;
    }
    ctx->pc = 0x11BD84u;
    SET_GPR_U32(ctx, 31, 0x11BD8Cu);
    ctx->pc = 0x39BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB80u, 0x11BD84u, 0x11BD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD8Cu;
label_11bd8c:
    // 0x11bd8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11bd90:
    // 0x11bd90: 0xa3a25a40  sb          $v0, 0x5A40($sp)
    ctx->pc = 0x11bd90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 23104), (uint8_t)GPR_U32(ctx, 2));
label_11bd94:
    // 0x11bd94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11bd98:
    // 0x11bd98: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x11bd98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
label_11bd9c:
    // 0x11bd9c: 0x24a58910  addiu       $a1, $a1, -0x76F0
    ctx->pc = 0x11bd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936848));
label_11bda0:
    // 0x11bda0: 0x27a65a40  addiu       $a2, $sp, 0x5A40
    ctx->pc = 0x11bda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 23104));
label_11bda4:
    // 0x11bda4: 0xc0e2628  jal         func_3898A0
label_11bda8:
    if (ctx->pc == 0x11BDA8u) {
        ctx->pc = 0x11BDACu;
        goto label_11bdac;
    }
    ctx->pc = 0x11BDA4u;
    SET_GPR_U32(ctx, 31, 0x11BDACu);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x11BDA4u, 0x11BDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BDACu;
label_11bdac:
    // 0x11bdac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11bdb0:
    // 0x11bdb0: 0x27a55aec  addiu       $a1, $sp, 0x5AEC
    ctx->pc = 0x11bdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 23276));
label_11bdb4:
    // 0x11bdb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11bdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11bdb8:
    // 0x11bdb8: 0xc04630c  jal         func_118C30
label_11bdbc:
    if (ctx->pc == 0x11BDBCu) {
        ctx->pc = 0x11BDC0u;
        goto label_11bdc0;
    }
    ctx->pc = 0x11BDB8u;
    SET_GPR_U32(ctx, 31, 0x11BDC0u);
    ctx->pc = 0x118C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118C30u, 0x11BDB8u, 0x11BDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BDC0u;
label_11bdc0:
    // 0x11bdc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11bdc4:
    // 0x11bdc4: 0xc0e26d4  jal         func_389B50
label_11bdc8:
    if (ctx->pc == 0x11BDC8u) {
        ctx->pc = 0x11BDCCu;
        goto label_11bdcc;
    }
    ctx->pc = 0x11BDC4u;
    SET_GPR_U32(ctx, 31, 0x11BDCCu);
    ctx->pc = 0x389B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389B50u, 0x11BDC4u, 0x11BDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BDCCu;
label_11bdcc:
    // 0x11bdcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11bdd0:
    // 0x11bdd0: 0x27a55aec  addiu       $a1, $sp, 0x5AEC
    ctx->pc = 0x11bdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 23276));
label_11bdd4:
    // 0x11bdd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11bdd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11bdd8:
    // 0x11bdd8: 0xc04630c  jal         func_118C30
label_11bddc:
    if (ctx->pc == 0x11BDDCu) {
        ctx->pc = 0x11BDE0u;
        goto label_11bde0;
    }
    ctx->pc = 0x11BDD8u;
    SET_GPR_U32(ctx, 31, 0x11BDE0u);
    ctx->pc = 0x118C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118C30u, 0x11BDD8u, 0x11BDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BDE0u;
label_11bde0:
    // 0x11bde0: 0xa3a05a40  sb          $zero, 0x5A40($sp)
    ctx->pc = 0x11bde0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 23104), (uint8_t)GPR_U32(ctx, 0));
label_11bde4:
    // 0x11bde4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11bde8:
    // 0x11bde8: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x11bde8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
label_11bdec:
    // 0x11bdec: 0x24a58910  addiu       $a1, $a1, -0x76F0
    ctx->pc = 0x11bdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936848));
label_11bdf0:
    // 0x11bdf0: 0x27a65a40  addiu       $a2, $sp, 0x5A40
    ctx->pc = 0x11bdf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 23104));
label_11bdf4:
    // 0x11bdf4: 0xc0e2628  jal         func_3898A0
label_11bdf8:
    if (ctx->pc == 0x11BDF8u) {
        ctx->pc = 0x11BDFCu;
        goto label_11bdfc;
    }
    ctx->pc = 0x11BDF4u;
    SET_GPR_U32(ctx, 31, 0x11BDFCu);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x11BDF4u, 0x11BDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BDFCu;
label_11bdfc:
    // 0x11bdfc: 0x8fa25acc  lw          $v0, 0x5ACC($sp)
    ctx->pc = 0x11bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23244)));
label_11be00:
    // 0x11be00: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
label_11be04:
    if (ctx->pc == 0x11BE04u) {
        ctx->pc = 0x11BE08u;
        goto label_11be08;
    }
    ctx->pc = 0x11BE00u;
    {
        const bool branch_taken_0x11be00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x11be00) {
            ctx->pc = 0x11BE18u;
            goto label_11be18;
        }
    }
    ctx->pc = 0x11BE08u;
label_11be08:
    // 0x11be08: 0x8fa45acc  lw          $a0, 0x5ACC($sp)
    ctx->pc = 0x11be08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23244)));
label_11be0c:
    // 0x11be0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11be0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11be10:
    // 0x11be10: 0xc0e6ea6  jal         func_39BA98
label_11be14:
    if (ctx->pc == 0x11BE14u) {
        ctx->pc = 0x11BE18u;
        goto label_11be18;
    }
    ctx->pc = 0x11BE10u;
    SET_GPR_U32(ctx, 31, 0x11BE18u);
    ctx->pc = 0x39BA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BA98u, 0x11BE10u, 0x11BE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE18u;
label_11be18:
    // 0x11be18: 0x27a45ae0  addiu       $a0, $sp, 0x5AE0
    ctx->pc = 0x11be18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 23264));
label_11be1c:
    // 0x11be1c: 0xc046ff8  jal         func_11BFE0
label_11be20:
    if (ctx->pc == 0x11BE20u) {
        ctx->pc = 0x11BE24u;
        goto label_11be24;
    }
    ctx->pc = 0x11BE1Cu;
    SET_GPR_U32(ctx, 31, 0x11BE24u);
    ctx->pc = 0x11BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BFE0u, 0x11BE1Cu, 0x11BE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE24u;
label_11be24:
    // 0x11be24: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x11be24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_11be28:
    // 0x11be28: 0x27a45ac0  addiu       $a0, $sp, 0x5AC0
    ctx->pc = 0x11be28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 23232));
label_11be2c:
    // 0x11be2c: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x11be2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_11be30:
    // 0x11be30: 0xc046fcc  jal         func_11BF30
label_11be34:
    if (ctx->pc == 0x11BE34u) {
        ctx->pc = 0x11BE38u;
        goto label_11be38;
    }
    ctx->pc = 0x11BE30u;
    SET_GPR_U32(ctx, 31, 0x11BE38u);
    ctx->pc = 0x11BF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BF30u, 0x11BE30u, 0x11BE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE38u;
label_11be38:
    // 0x11be38: 0x27a45ae0  addiu       $a0, $sp, 0x5AE0
    ctx->pc = 0x11be38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 23264));
label_11be3c:
    // 0x11be3c: 0x27a55ac0  addiu       $a1, $sp, 0x5AC0
    ctx->pc = 0x11be3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 23232));
label_11be40:
    // 0x11be40: 0xc041998  jal         func_106660
label_11be44:
    if (ctx->pc == 0x11BE44u) {
        ctx->pc = 0x11BE48u;
        goto label_11be48;
    }
    ctx->pc = 0x11BE40u;
    SET_GPR_U32(ctx, 31, 0x11BE48u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x11BE40u, 0x11BE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE48u;
label_11be48:
    // 0x11be48: 0x1440fccf  bnez        $v0, . + 4 + (-0x331 << 2)
label_11be4c:
    if (ctx->pc == 0x11BE4Cu) {
        ctx->pc = 0x11BE50u;
        goto label_11be50;
    }
    ctx->pc = 0x11BE48u;
    {
        const bool branch_taken_0x11be48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11be48) {
            ctx->pc = 0x11B188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b188;
        }
    }
    ctx->pc = 0x11BE50u;
label_11be50:
    // 0x11be50: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x11be50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_11be54:
    // 0x11be54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11be54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11be58:
    // 0x11be58: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x11be58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_11be5c:
    // 0x11be5c: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x11be5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_11be60:
    // 0x11be60: 0x40f809  jalr        $v0
label_11be64:
    if (ctx->pc == 0x11BE64u) {
        ctx->pc = 0x11BE68u;
        goto label_11be68;
    }
    ctx->pc = 0x11BE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11BE68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BE60u, 0x11BE68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BE68u;
label_11be68:
    // 0x11be68: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x11be68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_11be6c:
    // 0x11be6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11be6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11be70:
    // 0x11be70: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x11be70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_11be74:
    // 0x11be74: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x11be74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_11be78:
    // 0x11be78: 0x40f809  jalr        $v0
label_11be7c:
    if (ctx->pc == 0x11BE7Cu) {
        ctx->pc = 0x11BE80u;
        goto label_11be80;
    }
    ctx->pc = 0x11BE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11BE80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BE78u, 0x11BE80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BE80u;
label_11be80:
    // 0x11be80: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x11be80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_11be84:
    // 0x11be84: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x11be84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_11be88:
    // 0x11be88: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x11be88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_11be8c:
    // 0x11be8c: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x11be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_11be90:
    // 0x11be90: 0x40f809  jalr        $v0
label_11be94:
    if (ctx->pc == 0x11BE94u) {
        ctx->pc = 0x11BE98u;
        goto label_11be98;
    }
    ctx->pc = 0x11BE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11BE98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BE90u, 0x11BE98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BE98u;
label_11be98:
    // 0x11be98: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x11be98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_11be9c:
    // 0x11be9c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x11be9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_11bea0:
    // 0x11bea0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x11bea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_11bea4:
    // 0x11bea4: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x11bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_11bea8:
    // 0x11bea8: 0x40f809  jalr        $v0
label_11beac:
    if (ctx->pc == 0x11BEACu) {
        ctx->pc = 0x11BEB0u;
        goto label_11beb0;
    }
    ctx->pc = 0x11BEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11BEB0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BEA8u, 0x11BEB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BEB0u;
label_11beb0:
    // 0x11beb0: 0x8fa45a30  lw          $a0, 0x5A30($sp)
    ctx->pc = 0x11beb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23088)));
label_11beb4:
    // 0x11beb4: 0xc105f9e  jal         func_417E78
label_11beb8:
    if (ctx->pc == 0x11BEB8u) {
        ctx->pc = 0x11BEBCu;
        goto label_11bebc;
    }
    ctx->pc = 0x11BEB4u;
    SET_GPR_U32(ctx, 31, 0x11BEBCu);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x11BEB4u, 0x11BEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BEBCu;
label_11bebc:
    // 0x11bebc: 0x8fa45af0  lw          $a0, 0x5AF0($sp)
    ctx->pc = 0x11bebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23280)));
label_11bec0:
    // 0x11bec0: 0x8fa55ae8  lw          $a1, 0x5AE8($sp)
    ctx->pc = 0x11bec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23272)));
label_11bec4:
    // 0x11bec4: 0xc0e6f46  jal         func_39BD18
label_11bec8:
    if (ctx->pc == 0x11BEC8u) {
        ctx->pc = 0x11BECCu;
        goto label_11becc;
    }
    ctx->pc = 0x11BEC4u;
    SET_GPR_U32(ctx, 31, 0x11BECCu);
    ctx->pc = 0x39BD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BD18u, 0x11BEC4u, 0x11BECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BECCu;
label_11becc:
    // 0x11becc: 0x8fa45ae8  lw          $a0, 0x5AE8($sp)
    ctx->pc = 0x11beccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23272)));
label_11bed0:
    // 0x11bed0: 0xc0e362e  jal         func_38D8B8
label_11bed4:
    if (ctx->pc == 0x11BED4u) {
        ctx->pc = 0x11BED8u;
        goto label_11bed8;
    }
    ctx->pc = 0x11BED0u;
    SET_GPR_U32(ctx, 31, 0x11BED8u);
    ctx->pc = 0x38D8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D8B8u, 0x11BED0u, 0x11BED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BED8u;
label_11bed8:
    // 0x11bed8: 0x8fa45af0  lw          $a0, 0x5AF0($sp)
    ctx->pc = 0x11bed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23280)));
label_11bedc:
    // 0x11bedc: 0x8fa25a30  lw          $v0, 0x5A30($sp)
    ctx->pc = 0x11bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 23088)));
label_11bee0:
    // 0x11bee0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11bee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11bee4:
    // 0x11bee4: 0xc0e6e36  jal         func_39B8D8
label_11bee8:
    if (ctx->pc == 0x11BEE8u) {
        ctx->pc = 0x11BEECu;
        goto label_11beec;
    }
    ctx->pc = 0x11BEE4u;
    SET_GPR_U32(ctx, 31, 0x11BEECu);
    ctx->pc = 0x39B8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B8D8u, 0x11BEE4u, 0x11BEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BEECu;
label_11beec:
    // 0x11beec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11beecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11bef0:
    // 0x11bef0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x11bef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11bef4:
    // 0x11bef4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11bef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_11bef8:
    // 0x11bef8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x11bef8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_11befc:
    // 0x11befc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x11befcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_11bf00:
    // 0x11bf00: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x11bf00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_11bf04:
    // 0x11bf04: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x11bf04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_11bf08:
    // 0x11bf08: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11bf08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11bf0c:
    // 0x11bf0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11bf0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11bf10:
    // 0x11bf10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11bf10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11bf14:
    // 0x11bf14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11bf14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11bf18:
    // 0x11bf18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11bf18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11bf1c:
    // 0x11bf1c: 0x27bd5b10  addiu       $sp, $sp, 0x5B10
    ctx->pc = 0x11bf1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 23312));
label_11bf20:
    // 0x11bf20: 0x3e00008  jr          $ra
label_11bf24:
    if (ctx->pc == 0x11BF24u) {
        ctx->pc = 0x11BF28u;
        goto label_11bf28;
    }
    ctx->pc = 0x11BF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BF28u;
label_11bf28:
    // 0x11bf28: 0x0  nop
    ctx->pc = 0x11bf28u;
    // NOP
label_11bf2c:
    // 0x11bf2c: 0x0  nop
    ctx->pc = 0x11bf2cu;
    // NOP
    ctx->pc = 0x11bf30u;
}
