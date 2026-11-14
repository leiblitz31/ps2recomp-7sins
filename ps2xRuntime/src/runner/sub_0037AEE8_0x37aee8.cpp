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

// Function: sub_0037AEE8
// Address: 0x37aee8 - 0x37be98
void sub_0037AEE8_0x37aee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037AEE8_0x37aee8");
#endif

    switch (ctx->pc) {
        case 0x37aee8u: goto label_37aee8;
        case 0x37aeecu: goto label_37aeec;
        case 0x37aef0u: goto label_37aef0;
        case 0x37aef4u: goto label_37aef4;
        case 0x37aef8u: goto label_37aef8;
        case 0x37aefcu: goto label_37aefc;
        case 0x37af00u: goto label_37af00;
        case 0x37af04u: goto label_37af04;
        case 0x37af08u: goto label_37af08;
        case 0x37af0cu: goto label_37af0c;
        case 0x37af10u: goto label_37af10;
        case 0x37af14u: goto label_37af14;
        case 0x37af18u: goto label_37af18;
        case 0x37af1cu: goto label_37af1c;
        case 0x37af20u: goto label_37af20;
        case 0x37af24u: goto label_37af24;
        case 0x37af28u: goto label_37af28;
        case 0x37af2cu: goto label_37af2c;
        case 0x37af30u: goto label_37af30;
        case 0x37af34u: goto label_37af34;
        case 0x37af38u: goto label_37af38;
        case 0x37af3cu: goto label_37af3c;
        case 0x37af40u: goto label_37af40;
        case 0x37af44u: goto label_37af44;
        case 0x37af48u: goto label_37af48;
        case 0x37af4cu: goto label_37af4c;
        case 0x37af50u: goto label_37af50;
        case 0x37af54u: goto label_37af54;
        case 0x37af58u: goto label_37af58;
        case 0x37af5cu: goto label_37af5c;
        case 0x37af60u: goto label_37af60;
        case 0x37af64u: goto label_37af64;
        case 0x37af68u: goto label_37af68;
        case 0x37af6cu: goto label_37af6c;
        case 0x37af70u: goto label_37af70;
        case 0x37af74u: goto label_37af74;
        case 0x37af78u: goto label_37af78;
        case 0x37af7cu: goto label_37af7c;
        case 0x37af80u: goto label_37af80;
        case 0x37af84u: goto label_37af84;
        case 0x37af88u: goto label_37af88;
        case 0x37af8cu: goto label_37af8c;
        case 0x37af90u: goto label_37af90;
        case 0x37af94u: goto label_37af94;
        case 0x37af98u: goto label_37af98;
        case 0x37af9cu: goto label_37af9c;
        case 0x37afa0u: goto label_37afa0;
        case 0x37afa4u: goto label_37afa4;
        case 0x37afa8u: goto label_37afa8;
        case 0x37afacu: goto label_37afac;
        case 0x37afb0u: goto label_37afb0;
        case 0x37afb4u: goto label_37afb4;
        case 0x37afb8u: goto label_37afb8;
        case 0x37afbcu: goto label_37afbc;
        case 0x37afc0u: goto label_37afc0;
        case 0x37afc4u: goto label_37afc4;
        case 0x37afc8u: goto label_37afc8;
        case 0x37afccu: goto label_37afcc;
        case 0x37afd0u: goto label_37afd0;
        case 0x37afd4u: goto label_37afd4;
        case 0x37afd8u: goto label_37afd8;
        case 0x37afdcu: goto label_37afdc;
        case 0x37afe0u: goto label_37afe0;
        case 0x37afe4u: goto label_37afe4;
        case 0x37afe8u: goto label_37afe8;
        case 0x37afecu: goto label_37afec;
        case 0x37aff0u: goto label_37aff0;
        case 0x37aff4u: goto label_37aff4;
        case 0x37aff8u: goto label_37aff8;
        case 0x37affcu: goto label_37affc;
        case 0x37b000u: goto label_37b000;
        case 0x37b004u: goto label_37b004;
        case 0x37b008u: goto label_37b008;
        case 0x37b00cu: goto label_37b00c;
        case 0x37b010u: goto label_37b010;
        case 0x37b014u: goto label_37b014;
        case 0x37b018u: goto label_37b018;
        case 0x37b01cu: goto label_37b01c;
        case 0x37b020u: goto label_37b020;
        case 0x37b024u: goto label_37b024;
        case 0x37b028u: goto label_37b028;
        case 0x37b02cu: goto label_37b02c;
        case 0x37b030u: goto label_37b030;
        case 0x37b034u: goto label_37b034;
        case 0x37b038u: goto label_37b038;
        case 0x37b03cu: goto label_37b03c;
        case 0x37b040u: goto label_37b040;
        case 0x37b044u: goto label_37b044;
        case 0x37b048u: goto label_37b048;
        case 0x37b04cu: goto label_37b04c;
        case 0x37b050u: goto label_37b050;
        case 0x37b054u: goto label_37b054;
        case 0x37b058u: goto label_37b058;
        case 0x37b05cu: goto label_37b05c;
        case 0x37b060u: goto label_37b060;
        case 0x37b064u: goto label_37b064;
        case 0x37b068u: goto label_37b068;
        case 0x37b06cu: goto label_37b06c;
        case 0x37b070u: goto label_37b070;
        case 0x37b074u: goto label_37b074;
        case 0x37b078u: goto label_37b078;
        case 0x37b07cu: goto label_37b07c;
        case 0x37b080u: goto label_37b080;
        case 0x37b084u: goto label_37b084;
        case 0x37b088u: goto label_37b088;
        case 0x37b08cu: goto label_37b08c;
        case 0x37b090u: goto label_37b090;
        case 0x37b094u: goto label_37b094;
        case 0x37b098u: goto label_37b098;
        case 0x37b09cu: goto label_37b09c;
        case 0x37b0a0u: goto label_37b0a0;
        case 0x37b0a4u: goto label_37b0a4;
        case 0x37b0a8u: goto label_37b0a8;
        case 0x37b0acu: goto label_37b0ac;
        case 0x37b0b0u: goto label_37b0b0;
        case 0x37b0b4u: goto label_37b0b4;
        case 0x37b0b8u: goto label_37b0b8;
        case 0x37b0bcu: goto label_37b0bc;
        case 0x37b0c0u: goto label_37b0c0;
        case 0x37b0c4u: goto label_37b0c4;
        case 0x37b0c8u: goto label_37b0c8;
        case 0x37b0ccu: goto label_37b0cc;
        case 0x37b0d0u: goto label_37b0d0;
        case 0x37b0d4u: goto label_37b0d4;
        case 0x37b0d8u: goto label_37b0d8;
        case 0x37b0dcu: goto label_37b0dc;
        case 0x37b0e0u: goto label_37b0e0;
        case 0x37b0e4u: goto label_37b0e4;
        case 0x37b0e8u: goto label_37b0e8;
        case 0x37b0ecu: goto label_37b0ec;
        case 0x37b0f0u: goto label_37b0f0;
        case 0x37b0f4u: goto label_37b0f4;
        case 0x37b0f8u: goto label_37b0f8;
        case 0x37b0fcu: goto label_37b0fc;
        case 0x37b100u: goto label_37b100;
        case 0x37b104u: goto label_37b104;
        case 0x37b108u: goto label_37b108;
        case 0x37b10cu: goto label_37b10c;
        case 0x37b110u: goto label_37b110;
        case 0x37b114u: goto label_37b114;
        case 0x37b118u: goto label_37b118;
        case 0x37b11cu: goto label_37b11c;
        case 0x37b120u: goto label_37b120;
        case 0x37b124u: goto label_37b124;
        case 0x37b128u: goto label_37b128;
        case 0x37b12cu: goto label_37b12c;
        case 0x37b130u: goto label_37b130;
        case 0x37b134u: goto label_37b134;
        case 0x37b138u: goto label_37b138;
        case 0x37b13cu: goto label_37b13c;
        case 0x37b140u: goto label_37b140;
        case 0x37b144u: goto label_37b144;
        case 0x37b148u: goto label_37b148;
        case 0x37b14cu: goto label_37b14c;
        case 0x37b150u: goto label_37b150;
        case 0x37b154u: goto label_37b154;
        case 0x37b158u: goto label_37b158;
        case 0x37b15cu: goto label_37b15c;
        case 0x37b160u: goto label_37b160;
        case 0x37b164u: goto label_37b164;
        case 0x37b168u: goto label_37b168;
        case 0x37b16cu: goto label_37b16c;
        case 0x37b170u: goto label_37b170;
        case 0x37b174u: goto label_37b174;
        case 0x37b178u: goto label_37b178;
        case 0x37b17cu: goto label_37b17c;
        case 0x37b180u: goto label_37b180;
        case 0x37b184u: goto label_37b184;
        case 0x37b188u: goto label_37b188;
        case 0x37b18cu: goto label_37b18c;
        case 0x37b190u: goto label_37b190;
        case 0x37b194u: goto label_37b194;
        case 0x37b198u: goto label_37b198;
        case 0x37b19cu: goto label_37b19c;
        case 0x37b1a0u: goto label_37b1a0;
        case 0x37b1a4u: goto label_37b1a4;
        case 0x37b1a8u: goto label_37b1a8;
        case 0x37b1acu: goto label_37b1ac;
        case 0x37b1b0u: goto label_37b1b0;
        case 0x37b1b4u: goto label_37b1b4;
        case 0x37b1b8u: goto label_37b1b8;
        case 0x37b1bcu: goto label_37b1bc;
        case 0x37b1c0u: goto label_37b1c0;
        case 0x37b1c4u: goto label_37b1c4;
        case 0x37b1c8u: goto label_37b1c8;
        case 0x37b1ccu: goto label_37b1cc;
        case 0x37b1d0u: goto label_37b1d0;
        case 0x37b1d4u: goto label_37b1d4;
        case 0x37b1d8u: goto label_37b1d8;
        case 0x37b1dcu: goto label_37b1dc;
        case 0x37b1e0u: goto label_37b1e0;
        case 0x37b1e4u: goto label_37b1e4;
        case 0x37b1e8u: goto label_37b1e8;
        case 0x37b1ecu: goto label_37b1ec;
        case 0x37b1f0u: goto label_37b1f0;
        case 0x37b1f4u: goto label_37b1f4;
        case 0x37b1f8u: goto label_37b1f8;
        case 0x37b1fcu: goto label_37b1fc;
        case 0x37b200u: goto label_37b200;
        case 0x37b204u: goto label_37b204;
        case 0x37b208u: goto label_37b208;
        case 0x37b20cu: goto label_37b20c;
        case 0x37b210u: goto label_37b210;
        case 0x37b214u: goto label_37b214;
        case 0x37b218u: goto label_37b218;
        case 0x37b21cu: goto label_37b21c;
        case 0x37b220u: goto label_37b220;
        case 0x37b224u: goto label_37b224;
        case 0x37b228u: goto label_37b228;
        case 0x37b22cu: goto label_37b22c;
        case 0x37b230u: goto label_37b230;
        case 0x37b234u: goto label_37b234;
        case 0x37b238u: goto label_37b238;
        case 0x37b23cu: goto label_37b23c;
        case 0x37b240u: goto label_37b240;
        case 0x37b244u: goto label_37b244;
        case 0x37b248u: goto label_37b248;
        case 0x37b24cu: goto label_37b24c;
        case 0x37b250u: goto label_37b250;
        case 0x37b254u: goto label_37b254;
        case 0x37b258u: goto label_37b258;
        case 0x37b25cu: goto label_37b25c;
        case 0x37b260u: goto label_37b260;
        case 0x37b264u: goto label_37b264;
        case 0x37b268u: goto label_37b268;
        case 0x37b26cu: goto label_37b26c;
        case 0x37b270u: goto label_37b270;
        case 0x37b274u: goto label_37b274;
        case 0x37b278u: goto label_37b278;
        case 0x37b27cu: goto label_37b27c;
        case 0x37b280u: goto label_37b280;
        case 0x37b284u: goto label_37b284;
        case 0x37b288u: goto label_37b288;
        case 0x37b28cu: goto label_37b28c;
        case 0x37b290u: goto label_37b290;
        case 0x37b294u: goto label_37b294;
        case 0x37b298u: goto label_37b298;
        case 0x37b29cu: goto label_37b29c;
        case 0x37b2a0u: goto label_37b2a0;
        case 0x37b2a4u: goto label_37b2a4;
        case 0x37b2a8u: goto label_37b2a8;
        case 0x37b2acu: goto label_37b2ac;
        case 0x37b2b0u: goto label_37b2b0;
        case 0x37b2b4u: goto label_37b2b4;
        case 0x37b2b8u: goto label_37b2b8;
        case 0x37b2bcu: goto label_37b2bc;
        case 0x37b2c0u: goto label_37b2c0;
        case 0x37b2c4u: goto label_37b2c4;
        case 0x37b2c8u: goto label_37b2c8;
        case 0x37b2ccu: goto label_37b2cc;
        case 0x37b2d0u: goto label_37b2d0;
        case 0x37b2d4u: goto label_37b2d4;
        case 0x37b2d8u: goto label_37b2d8;
        case 0x37b2dcu: goto label_37b2dc;
        case 0x37b2e0u: goto label_37b2e0;
        case 0x37b2e4u: goto label_37b2e4;
        case 0x37b2e8u: goto label_37b2e8;
        case 0x37b2ecu: goto label_37b2ec;
        case 0x37b2f0u: goto label_37b2f0;
        case 0x37b2f4u: goto label_37b2f4;
        case 0x37b2f8u: goto label_37b2f8;
        case 0x37b2fcu: goto label_37b2fc;
        case 0x37b300u: goto label_37b300;
        case 0x37b304u: goto label_37b304;
        case 0x37b308u: goto label_37b308;
        case 0x37b30cu: goto label_37b30c;
        case 0x37b310u: goto label_37b310;
        case 0x37b314u: goto label_37b314;
        case 0x37b318u: goto label_37b318;
        case 0x37b31cu: goto label_37b31c;
        case 0x37b320u: goto label_37b320;
        case 0x37b324u: goto label_37b324;
        case 0x37b328u: goto label_37b328;
        case 0x37b32cu: goto label_37b32c;
        case 0x37b330u: goto label_37b330;
        case 0x37b334u: goto label_37b334;
        case 0x37b338u: goto label_37b338;
        case 0x37b33cu: goto label_37b33c;
        case 0x37b340u: goto label_37b340;
        case 0x37b344u: goto label_37b344;
        case 0x37b348u: goto label_37b348;
        case 0x37b34cu: goto label_37b34c;
        case 0x37b350u: goto label_37b350;
        case 0x37b354u: goto label_37b354;
        case 0x37b358u: goto label_37b358;
        case 0x37b35cu: goto label_37b35c;
        case 0x37b360u: goto label_37b360;
        case 0x37b364u: goto label_37b364;
        case 0x37b368u: goto label_37b368;
        case 0x37b36cu: goto label_37b36c;
        case 0x37b370u: goto label_37b370;
        case 0x37b374u: goto label_37b374;
        case 0x37b378u: goto label_37b378;
        case 0x37b37cu: goto label_37b37c;
        case 0x37b380u: goto label_37b380;
        case 0x37b384u: goto label_37b384;
        case 0x37b388u: goto label_37b388;
        case 0x37b38cu: goto label_37b38c;
        case 0x37b390u: goto label_37b390;
        case 0x37b394u: goto label_37b394;
        case 0x37b398u: goto label_37b398;
        case 0x37b39cu: goto label_37b39c;
        case 0x37b3a0u: goto label_37b3a0;
        case 0x37b3a4u: goto label_37b3a4;
        case 0x37b3a8u: goto label_37b3a8;
        case 0x37b3acu: goto label_37b3ac;
        case 0x37b3b0u: goto label_37b3b0;
        case 0x37b3b4u: goto label_37b3b4;
        case 0x37b3b8u: goto label_37b3b8;
        case 0x37b3bcu: goto label_37b3bc;
        case 0x37b3c0u: goto label_37b3c0;
        case 0x37b3c4u: goto label_37b3c4;
        case 0x37b3c8u: goto label_37b3c8;
        case 0x37b3ccu: goto label_37b3cc;
        case 0x37b3d0u: goto label_37b3d0;
        case 0x37b3d4u: goto label_37b3d4;
        case 0x37b3d8u: goto label_37b3d8;
        case 0x37b3dcu: goto label_37b3dc;
        case 0x37b3e0u: goto label_37b3e0;
        case 0x37b3e4u: goto label_37b3e4;
        case 0x37b3e8u: goto label_37b3e8;
        case 0x37b3ecu: goto label_37b3ec;
        case 0x37b3f0u: goto label_37b3f0;
        case 0x37b3f4u: goto label_37b3f4;
        case 0x37b3f8u: goto label_37b3f8;
        case 0x37b3fcu: goto label_37b3fc;
        case 0x37b400u: goto label_37b400;
        case 0x37b404u: goto label_37b404;
        case 0x37b408u: goto label_37b408;
        case 0x37b40cu: goto label_37b40c;
        case 0x37b410u: goto label_37b410;
        case 0x37b414u: goto label_37b414;
        case 0x37b418u: goto label_37b418;
        case 0x37b41cu: goto label_37b41c;
        case 0x37b420u: goto label_37b420;
        case 0x37b424u: goto label_37b424;
        case 0x37b428u: goto label_37b428;
        case 0x37b42cu: goto label_37b42c;
        case 0x37b430u: goto label_37b430;
        case 0x37b434u: goto label_37b434;
        case 0x37b438u: goto label_37b438;
        case 0x37b43cu: goto label_37b43c;
        case 0x37b440u: goto label_37b440;
        case 0x37b444u: goto label_37b444;
        case 0x37b448u: goto label_37b448;
        case 0x37b44cu: goto label_37b44c;
        case 0x37b450u: goto label_37b450;
        case 0x37b454u: goto label_37b454;
        case 0x37b458u: goto label_37b458;
        case 0x37b45cu: goto label_37b45c;
        case 0x37b460u: goto label_37b460;
        case 0x37b464u: goto label_37b464;
        case 0x37b468u: goto label_37b468;
        case 0x37b46cu: goto label_37b46c;
        case 0x37b470u: goto label_37b470;
        case 0x37b474u: goto label_37b474;
        case 0x37b478u: goto label_37b478;
        case 0x37b47cu: goto label_37b47c;
        case 0x37b480u: goto label_37b480;
        case 0x37b484u: goto label_37b484;
        case 0x37b488u: goto label_37b488;
        case 0x37b48cu: goto label_37b48c;
        case 0x37b490u: goto label_37b490;
        case 0x37b494u: goto label_37b494;
        case 0x37b498u: goto label_37b498;
        case 0x37b49cu: goto label_37b49c;
        case 0x37b4a0u: goto label_37b4a0;
        case 0x37b4a4u: goto label_37b4a4;
        case 0x37b4a8u: goto label_37b4a8;
        case 0x37b4acu: goto label_37b4ac;
        case 0x37b4b0u: goto label_37b4b0;
        case 0x37b4b4u: goto label_37b4b4;
        case 0x37b4b8u: goto label_37b4b8;
        case 0x37b4bcu: goto label_37b4bc;
        case 0x37b4c0u: goto label_37b4c0;
        case 0x37b4c4u: goto label_37b4c4;
        case 0x37b4c8u: goto label_37b4c8;
        case 0x37b4ccu: goto label_37b4cc;
        case 0x37b4d0u: goto label_37b4d0;
        case 0x37b4d4u: goto label_37b4d4;
        case 0x37b4d8u: goto label_37b4d8;
        case 0x37b4dcu: goto label_37b4dc;
        case 0x37b4e0u: goto label_37b4e0;
        case 0x37b4e4u: goto label_37b4e4;
        case 0x37b4e8u: goto label_37b4e8;
        case 0x37b4ecu: goto label_37b4ec;
        case 0x37b4f0u: goto label_37b4f0;
        case 0x37b4f4u: goto label_37b4f4;
        case 0x37b4f8u: goto label_37b4f8;
        case 0x37b4fcu: goto label_37b4fc;
        case 0x37b500u: goto label_37b500;
        case 0x37b504u: goto label_37b504;
        case 0x37b508u: goto label_37b508;
        case 0x37b50cu: goto label_37b50c;
        case 0x37b510u: goto label_37b510;
        case 0x37b514u: goto label_37b514;
        case 0x37b518u: goto label_37b518;
        case 0x37b51cu: goto label_37b51c;
        case 0x37b520u: goto label_37b520;
        case 0x37b524u: goto label_37b524;
        case 0x37b528u: goto label_37b528;
        case 0x37b52cu: goto label_37b52c;
        case 0x37b530u: goto label_37b530;
        case 0x37b534u: goto label_37b534;
        case 0x37b538u: goto label_37b538;
        case 0x37b53cu: goto label_37b53c;
        case 0x37b540u: goto label_37b540;
        case 0x37b544u: goto label_37b544;
        case 0x37b548u: goto label_37b548;
        case 0x37b54cu: goto label_37b54c;
        case 0x37b550u: goto label_37b550;
        case 0x37b554u: goto label_37b554;
        case 0x37b558u: goto label_37b558;
        case 0x37b55cu: goto label_37b55c;
        case 0x37b560u: goto label_37b560;
        case 0x37b564u: goto label_37b564;
        case 0x37b568u: goto label_37b568;
        case 0x37b56cu: goto label_37b56c;
        case 0x37b570u: goto label_37b570;
        case 0x37b574u: goto label_37b574;
        case 0x37b578u: goto label_37b578;
        case 0x37b57cu: goto label_37b57c;
        case 0x37b580u: goto label_37b580;
        case 0x37b584u: goto label_37b584;
        case 0x37b588u: goto label_37b588;
        case 0x37b58cu: goto label_37b58c;
        case 0x37b590u: goto label_37b590;
        case 0x37b594u: goto label_37b594;
        case 0x37b598u: goto label_37b598;
        case 0x37b59cu: goto label_37b59c;
        case 0x37b5a0u: goto label_37b5a0;
        case 0x37b5a4u: goto label_37b5a4;
        case 0x37b5a8u: goto label_37b5a8;
        case 0x37b5acu: goto label_37b5ac;
        case 0x37b5b0u: goto label_37b5b0;
        case 0x37b5b4u: goto label_37b5b4;
        case 0x37b5b8u: goto label_37b5b8;
        case 0x37b5bcu: goto label_37b5bc;
        case 0x37b5c0u: goto label_37b5c0;
        case 0x37b5c4u: goto label_37b5c4;
        case 0x37b5c8u: goto label_37b5c8;
        case 0x37b5ccu: goto label_37b5cc;
        case 0x37b5d0u: goto label_37b5d0;
        case 0x37b5d4u: goto label_37b5d4;
        case 0x37b5d8u: goto label_37b5d8;
        case 0x37b5dcu: goto label_37b5dc;
        case 0x37b5e0u: goto label_37b5e0;
        case 0x37b5e4u: goto label_37b5e4;
        case 0x37b5e8u: goto label_37b5e8;
        case 0x37b5ecu: goto label_37b5ec;
        case 0x37b5f0u: goto label_37b5f0;
        case 0x37b5f4u: goto label_37b5f4;
        case 0x37b5f8u: goto label_37b5f8;
        case 0x37b5fcu: goto label_37b5fc;
        case 0x37b600u: goto label_37b600;
        case 0x37b604u: goto label_37b604;
        case 0x37b608u: goto label_37b608;
        case 0x37b60cu: goto label_37b60c;
        case 0x37b610u: goto label_37b610;
        case 0x37b614u: goto label_37b614;
        case 0x37b618u: goto label_37b618;
        case 0x37b61cu: goto label_37b61c;
        case 0x37b620u: goto label_37b620;
        case 0x37b624u: goto label_37b624;
        case 0x37b628u: goto label_37b628;
        case 0x37b62cu: goto label_37b62c;
        case 0x37b630u: goto label_37b630;
        case 0x37b634u: goto label_37b634;
        case 0x37b638u: goto label_37b638;
        case 0x37b63cu: goto label_37b63c;
        case 0x37b640u: goto label_37b640;
        case 0x37b644u: goto label_37b644;
        case 0x37b648u: goto label_37b648;
        case 0x37b64cu: goto label_37b64c;
        case 0x37b650u: goto label_37b650;
        case 0x37b654u: goto label_37b654;
        case 0x37b658u: goto label_37b658;
        case 0x37b65cu: goto label_37b65c;
        case 0x37b660u: goto label_37b660;
        case 0x37b664u: goto label_37b664;
        case 0x37b668u: goto label_37b668;
        case 0x37b66cu: goto label_37b66c;
        case 0x37b670u: goto label_37b670;
        case 0x37b674u: goto label_37b674;
        case 0x37b678u: goto label_37b678;
        case 0x37b67cu: goto label_37b67c;
        case 0x37b680u: goto label_37b680;
        case 0x37b684u: goto label_37b684;
        case 0x37b688u: goto label_37b688;
        case 0x37b68cu: goto label_37b68c;
        case 0x37b690u: goto label_37b690;
        case 0x37b694u: goto label_37b694;
        case 0x37b698u: goto label_37b698;
        case 0x37b69cu: goto label_37b69c;
        case 0x37b6a0u: goto label_37b6a0;
        case 0x37b6a4u: goto label_37b6a4;
        case 0x37b6a8u: goto label_37b6a8;
        case 0x37b6acu: goto label_37b6ac;
        case 0x37b6b0u: goto label_37b6b0;
        case 0x37b6b4u: goto label_37b6b4;
        case 0x37b6b8u: goto label_37b6b8;
        case 0x37b6bcu: goto label_37b6bc;
        case 0x37b6c0u: goto label_37b6c0;
        case 0x37b6c4u: goto label_37b6c4;
        case 0x37b6c8u: goto label_37b6c8;
        case 0x37b6ccu: goto label_37b6cc;
        case 0x37b6d0u: goto label_37b6d0;
        case 0x37b6d4u: goto label_37b6d4;
        case 0x37b6d8u: goto label_37b6d8;
        case 0x37b6dcu: goto label_37b6dc;
        case 0x37b6e0u: goto label_37b6e0;
        case 0x37b6e4u: goto label_37b6e4;
        case 0x37b6e8u: goto label_37b6e8;
        case 0x37b6ecu: goto label_37b6ec;
        case 0x37b6f0u: goto label_37b6f0;
        case 0x37b6f4u: goto label_37b6f4;
        case 0x37b6f8u: goto label_37b6f8;
        case 0x37b6fcu: goto label_37b6fc;
        case 0x37b700u: goto label_37b700;
        case 0x37b704u: goto label_37b704;
        case 0x37b708u: goto label_37b708;
        case 0x37b70cu: goto label_37b70c;
        case 0x37b710u: goto label_37b710;
        case 0x37b714u: goto label_37b714;
        case 0x37b718u: goto label_37b718;
        case 0x37b71cu: goto label_37b71c;
        case 0x37b720u: goto label_37b720;
        case 0x37b724u: goto label_37b724;
        case 0x37b728u: goto label_37b728;
        case 0x37b72cu: goto label_37b72c;
        case 0x37b730u: goto label_37b730;
        case 0x37b734u: goto label_37b734;
        case 0x37b738u: goto label_37b738;
        case 0x37b73cu: goto label_37b73c;
        case 0x37b740u: goto label_37b740;
        case 0x37b744u: goto label_37b744;
        case 0x37b748u: goto label_37b748;
        case 0x37b74cu: goto label_37b74c;
        case 0x37b750u: goto label_37b750;
        case 0x37b754u: goto label_37b754;
        case 0x37b758u: goto label_37b758;
        case 0x37b75cu: goto label_37b75c;
        case 0x37b760u: goto label_37b760;
        case 0x37b764u: goto label_37b764;
        case 0x37b768u: goto label_37b768;
        case 0x37b76cu: goto label_37b76c;
        case 0x37b770u: goto label_37b770;
        case 0x37b774u: goto label_37b774;
        case 0x37b778u: goto label_37b778;
        case 0x37b77cu: goto label_37b77c;
        case 0x37b780u: goto label_37b780;
        case 0x37b784u: goto label_37b784;
        case 0x37b788u: goto label_37b788;
        case 0x37b78cu: goto label_37b78c;
        case 0x37b790u: goto label_37b790;
        case 0x37b794u: goto label_37b794;
        case 0x37b798u: goto label_37b798;
        case 0x37b79cu: goto label_37b79c;
        case 0x37b7a0u: goto label_37b7a0;
        case 0x37b7a4u: goto label_37b7a4;
        case 0x37b7a8u: goto label_37b7a8;
        case 0x37b7acu: goto label_37b7ac;
        case 0x37b7b0u: goto label_37b7b0;
        case 0x37b7b4u: goto label_37b7b4;
        case 0x37b7b8u: goto label_37b7b8;
        case 0x37b7bcu: goto label_37b7bc;
        case 0x37b7c0u: goto label_37b7c0;
        case 0x37b7c4u: goto label_37b7c4;
        case 0x37b7c8u: goto label_37b7c8;
        case 0x37b7ccu: goto label_37b7cc;
        case 0x37b7d0u: goto label_37b7d0;
        case 0x37b7d4u: goto label_37b7d4;
        case 0x37b7d8u: goto label_37b7d8;
        case 0x37b7dcu: goto label_37b7dc;
        case 0x37b7e0u: goto label_37b7e0;
        case 0x37b7e4u: goto label_37b7e4;
        case 0x37b7e8u: goto label_37b7e8;
        case 0x37b7ecu: goto label_37b7ec;
        case 0x37b7f0u: goto label_37b7f0;
        case 0x37b7f4u: goto label_37b7f4;
        case 0x37b7f8u: goto label_37b7f8;
        case 0x37b7fcu: goto label_37b7fc;
        case 0x37b800u: goto label_37b800;
        case 0x37b804u: goto label_37b804;
        case 0x37b808u: goto label_37b808;
        case 0x37b80cu: goto label_37b80c;
        case 0x37b810u: goto label_37b810;
        case 0x37b814u: goto label_37b814;
        case 0x37b818u: goto label_37b818;
        case 0x37b81cu: goto label_37b81c;
        case 0x37b820u: goto label_37b820;
        case 0x37b824u: goto label_37b824;
        case 0x37b828u: goto label_37b828;
        case 0x37b82cu: goto label_37b82c;
        case 0x37b830u: goto label_37b830;
        case 0x37b834u: goto label_37b834;
        case 0x37b838u: goto label_37b838;
        case 0x37b83cu: goto label_37b83c;
        case 0x37b840u: goto label_37b840;
        case 0x37b844u: goto label_37b844;
        case 0x37b848u: goto label_37b848;
        case 0x37b84cu: goto label_37b84c;
        case 0x37b850u: goto label_37b850;
        case 0x37b854u: goto label_37b854;
        case 0x37b858u: goto label_37b858;
        case 0x37b85cu: goto label_37b85c;
        case 0x37b860u: goto label_37b860;
        case 0x37b864u: goto label_37b864;
        case 0x37b868u: goto label_37b868;
        case 0x37b86cu: goto label_37b86c;
        case 0x37b870u: goto label_37b870;
        case 0x37b874u: goto label_37b874;
        case 0x37b878u: goto label_37b878;
        case 0x37b87cu: goto label_37b87c;
        case 0x37b880u: goto label_37b880;
        case 0x37b884u: goto label_37b884;
        case 0x37b888u: goto label_37b888;
        case 0x37b88cu: goto label_37b88c;
        case 0x37b890u: goto label_37b890;
        case 0x37b894u: goto label_37b894;
        case 0x37b898u: goto label_37b898;
        case 0x37b89cu: goto label_37b89c;
        case 0x37b8a0u: goto label_37b8a0;
        case 0x37b8a4u: goto label_37b8a4;
        case 0x37b8a8u: goto label_37b8a8;
        case 0x37b8acu: goto label_37b8ac;
        case 0x37b8b0u: goto label_37b8b0;
        case 0x37b8b4u: goto label_37b8b4;
        case 0x37b8b8u: goto label_37b8b8;
        case 0x37b8bcu: goto label_37b8bc;
        case 0x37b8c0u: goto label_37b8c0;
        case 0x37b8c4u: goto label_37b8c4;
        case 0x37b8c8u: goto label_37b8c8;
        case 0x37b8ccu: goto label_37b8cc;
        case 0x37b8d0u: goto label_37b8d0;
        case 0x37b8d4u: goto label_37b8d4;
        case 0x37b8d8u: goto label_37b8d8;
        case 0x37b8dcu: goto label_37b8dc;
        case 0x37b8e0u: goto label_37b8e0;
        case 0x37b8e4u: goto label_37b8e4;
        case 0x37b8e8u: goto label_37b8e8;
        case 0x37b8ecu: goto label_37b8ec;
        case 0x37b8f0u: goto label_37b8f0;
        case 0x37b8f4u: goto label_37b8f4;
        case 0x37b8f8u: goto label_37b8f8;
        case 0x37b8fcu: goto label_37b8fc;
        case 0x37b900u: goto label_37b900;
        case 0x37b904u: goto label_37b904;
        case 0x37b908u: goto label_37b908;
        case 0x37b90cu: goto label_37b90c;
        case 0x37b910u: goto label_37b910;
        case 0x37b914u: goto label_37b914;
        case 0x37b918u: goto label_37b918;
        case 0x37b91cu: goto label_37b91c;
        case 0x37b920u: goto label_37b920;
        case 0x37b924u: goto label_37b924;
        case 0x37b928u: goto label_37b928;
        case 0x37b92cu: goto label_37b92c;
        case 0x37b930u: goto label_37b930;
        case 0x37b934u: goto label_37b934;
        case 0x37b938u: goto label_37b938;
        case 0x37b93cu: goto label_37b93c;
        case 0x37b940u: goto label_37b940;
        case 0x37b944u: goto label_37b944;
        case 0x37b948u: goto label_37b948;
        case 0x37b94cu: goto label_37b94c;
        case 0x37b950u: goto label_37b950;
        case 0x37b954u: goto label_37b954;
        case 0x37b958u: goto label_37b958;
        case 0x37b95cu: goto label_37b95c;
        case 0x37b960u: goto label_37b960;
        case 0x37b964u: goto label_37b964;
        case 0x37b968u: goto label_37b968;
        case 0x37b96cu: goto label_37b96c;
        case 0x37b970u: goto label_37b970;
        case 0x37b974u: goto label_37b974;
        case 0x37b978u: goto label_37b978;
        case 0x37b97cu: goto label_37b97c;
        case 0x37b980u: goto label_37b980;
        case 0x37b984u: goto label_37b984;
        case 0x37b988u: goto label_37b988;
        case 0x37b98cu: goto label_37b98c;
        case 0x37b990u: goto label_37b990;
        case 0x37b994u: goto label_37b994;
        case 0x37b998u: goto label_37b998;
        case 0x37b99cu: goto label_37b99c;
        case 0x37b9a0u: goto label_37b9a0;
        case 0x37b9a4u: goto label_37b9a4;
        case 0x37b9a8u: goto label_37b9a8;
        case 0x37b9acu: goto label_37b9ac;
        case 0x37b9b0u: goto label_37b9b0;
        case 0x37b9b4u: goto label_37b9b4;
        case 0x37b9b8u: goto label_37b9b8;
        case 0x37b9bcu: goto label_37b9bc;
        case 0x37b9c0u: goto label_37b9c0;
        case 0x37b9c4u: goto label_37b9c4;
        case 0x37b9c8u: goto label_37b9c8;
        case 0x37b9ccu: goto label_37b9cc;
        case 0x37b9d0u: goto label_37b9d0;
        case 0x37b9d4u: goto label_37b9d4;
        case 0x37b9d8u: goto label_37b9d8;
        case 0x37b9dcu: goto label_37b9dc;
        case 0x37b9e0u: goto label_37b9e0;
        case 0x37b9e4u: goto label_37b9e4;
        case 0x37b9e8u: goto label_37b9e8;
        case 0x37b9ecu: goto label_37b9ec;
        case 0x37b9f0u: goto label_37b9f0;
        case 0x37b9f4u: goto label_37b9f4;
        case 0x37b9f8u: goto label_37b9f8;
        case 0x37b9fcu: goto label_37b9fc;
        case 0x37ba00u: goto label_37ba00;
        case 0x37ba04u: goto label_37ba04;
        case 0x37ba08u: goto label_37ba08;
        case 0x37ba0cu: goto label_37ba0c;
        case 0x37ba10u: goto label_37ba10;
        case 0x37ba14u: goto label_37ba14;
        case 0x37ba18u: goto label_37ba18;
        case 0x37ba1cu: goto label_37ba1c;
        case 0x37ba20u: goto label_37ba20;
        case 0x37ba24u: goto label_37ba24;
        case 0x37ba28u: goto label_37ba28;
        case 0x37ba2cu: goto label_37ba2c;
        case 0x37ba30u: goto label_37ba30;
        case 0x37ba34u: goto label_37ba34;
        case 0x37ba38u: goto label_37ba38;
        case 0x37ba3cu: goto label_37ba3c;
        case 0x37ba40u: goto label_37ba40;
        case 0x37ba44u: goto label_37ba44;
        case 0x37ba48u: goto label_37ba48;
        case 0x37ba4cu: goto label_37ba4c;
        case 0x37ba50u: goto label_37ba50;
        case 0x37ba54u: goto label_37ba54;
        case 0x37ba58u: goto label_37ba58;
        case 0x37ba5cu: goto label_37ba5c;
        case 0x37ba60u: goto label_37ba60;
        case 0x37ba64u: goto label_37ba64;
        case 0x37ba68u: goto label_37ba68;
        case 0x37ba6cu: goto label_37ba6c;
        case 0x37ba70u: goto label_37ba70;
        case 0x37ba74u: goto label_37ba74;
        case 0x37ba78u: goto label_37ba78;
        case 0x37ba7cu: goto label_37ba7c;
        case 0x37ba80u: goto label_37ba80;
        case 0x37ba84u: goto label_37ba84;
        case 0x37ba88u: goto label_37ba88;
        case 0x37ba8cu: goto label_37ba8c;
        case 0x37ba90u: goto label_37ba90;
        case 0x37ba94u: goto label_37ba94;
        case 0x37ba98u: goto label_37ba98;
        case 0x37ba9cu: goto label_37ba9c;
        case 0x37baa0u: goto label_37baa0;
        case 0x37baa4u: goto label_37baa4;
        case 0x37baa8u: goto label_37baa8;
        case 0x37baacu: goto label_37baac;
        case 0x37bab0u: goto label_37bab0;
        case 0x37bab4u: goto label_37bab4;
        case 0x37bab8u: goto label_37bab8;
        case 0x37babcu: goto label_37babc;
        case 0x37bac0u: goto label_37bac0;
        case 0x37bac4u: goto label_37bac4;
        case 0x37bac8u: goto label_37bac8;
        case 0x37baccu: goto label_37bacc;
        case 0x37bad0u: goto label_37bad0;
        case 0x37bad4u: goto label_37bad4;
        case 0x37bad8u: goto label_37bad8;
        case 0x37badcu: goto label_37badc;
        case 0x37bae0u: goto label_37bae0;
        case 0x37bae4u: goto label_37bae4;
        case 0x37bae8u: goto label_37bae8;
        case 0x37baecu: goto label_37baec;
        case 0x37baf0u: goto label_37baf0;
        case 0x37baf4u: goto label_37baf4;
        case 0x37baf8u: goto label_37baf8;
        case 0x37bafcu: goto label_37bafc;
        case 0x37bb00u: goto label_37bb00;
        case 0x37bb04u: goto label_37bb04;
        case 0x37bb08u: goto label_37bb08;
        case 0x37bb0cu: goto label_37bb0c;
        case 0x37bb10u: goto label_37bb10;
        case 0x37bb14u: goto label_37bb14;
        case 0x37bb18u: goto label_37bb18;
        case 0x37bb1cu: goto label_37bb1c;
        case 0x37bb20u: goto label_37bb20;
        case 0x37bb24u: goto label_37bb24;
        case 0x37bb28u: goto label_37bb28;
        case 0x37bb2cu: goto label_37bb2c;
        case 0x37bb30u: goto label_37bb30;
        case 0x37bb34u: goto label_37bb34;
        case 0x37bb38u: goto label_37bb38;
        case 0x37bb3cu: goto label_37bb3c;
        case 0x37bb40u: goto label_37bb40;
        case 0x37bb44u: goto label_37bb44;
        case 0x37bb48u: goto label_37bb48;
        case 0x37bb4cu: goto label_37bb4c;
        case 0x37bb50u: goto label_37bb50;
        case 0x37bb54u: goto label_37bb54;
        case 0x37bb58u: goto label_37bb58;
        case 0x37bb5cu: goto label_37bb5c;
        case 0x37bb60u: goto label_37bb60;
        case 0x37bb64u: goto label_37bb64;
        case 0x37bb68u: goto label_37bb68;
        case 0x37bb6cu: goto label_37bb6c;
        case 0x37bb70u: goto label_37bb70;
        case 0x37bb74u: goto label_37bb74;
        case 0x37bb78u: goto label_37bb78;
        case 0x37bb7cu: goto label_37bb7c;
        case 0x37bb80u: goto label_37bb80;
        case 0x37bb84u: goto label_37bb84;
        case 0x37bb88u: goto label_37bb88;
        case 0x37bb8cu: goto label_37bb8c;
        case 0x37bb90u: goto label_37bb90;
        case 0x37bb94u: goto label_37bb94;
        case 0x37bb98u: goto label_37bb98;
        case 0x37bb9cu: goto label_37bb9c;
        case 0x37bba0u: goto label_37bba0;
        case 0x37bba4u: goto label_37bba4;
        case 0x37bba8u: goto label_37bba8;
        case 0x37bbacu: goto label_37bbac;
        case 0x37bbb0u: goto label_37bbb0;
        case 0x37bbb4u: goto label_37bbb4;
        case 0x37bbb8u: goto label_37bbb8;
        case 0x37bbbcu: goto label_37bbbc;
        case 0x37bbc0u: goto label_37bbc0;
        case 0x37bbc4u: goto label_37bbc4;
        case 0x37bbc8u: goto label_37bbc8;
        case 0x37bbccu: goto label_37bbcc;
        case 0x37bbd0u: goto label_37bbd0;
        case 0x37bbd4u: goto label_37bbd4;
        case 0x37bbd8u: goto label_37bbd8;
        case 0x37bbdcu: goto label_37bbdc;
        case 0x37bbe0u: goto label_37bbe0;
        case 0x37bbe4u: goto label_37bbe4;
        case 0x37bbe8u: goto label_37bbe8;
        case 0x37bbecu: goto label_37bbec;
        case 0x37bbf0u: goto label_37bbf0;
        case 0x37bbf4u: goto label_37bbf4;
        case 0x37bbf8u: goto label_37bbf8;
        case 0x37bbfcu: goto label_37bbfc;
        case 0x37bc00u: goto label_37bc00;
        case 0x37bc04u: goto label_37bc04;
        case 0x37bc08u: goto label_37bc08;
        case 0x37bc0cu: goto label_37bc0c;
        case 0x37bc10u: goto label_37bc10;
        case 0x37bc14u: goto label_37bc14;
        case 0x37bc18u: goto label_37bc18;
        case 0x37bc1cu: goto label_37bc1c;
        case 0x37bc20u: goto label_37bc20;
        case 0x37bc24u: goto label_37bc24;
        case 0x37bc28u: goto label_37bc28;
        case 0x37bc2cu: goto label_37bc2c;
        case 0x37bc30u: goto label_37bc30;
        case 0x37bc34u: goto label_37bc34;
        case 0x37bc38u: goto label_37bc38;
        case 0x37bc3cu: goto label_37bc3c;
        case 0x37bc40u: goto label_37bc40;
        case 0x37bc44u: goto label_37bc44;
        case 0x37bc48u: goto label_37bc48;
        case 0x37bc4cu: goto label_37bc4c;
        case 0x37bc50u: goto label_37bc50;
        case 0x37bc54u: goto label_37bc54;
        case 0x37bc58u: goto label_37bc58;
        case 0x37bc5cu: goto label_37bc5c;
        case 0x37bc60u: goto label_37bc60;
        case 0x37bc64u: goto label_37bc64;
        case 0x37bc68u: goto label_37bc68;
        case 0x37bc6cu: goto label_37bc6c;
        case 0x37bc70u: goto label_37bc70;
        case 0x37bc74u: goto label_37bc74;
        case 0x37bc78u: goto label_37bc78;
        case 0x37bc7cu: goto label_37bc7c;
        case 0x37bc80u: goto label_37bc80;
        case 0x37bc84u: goto label_37bc84;
        case 0x37bc88u: goto label_37bc88;
        case 0x37bc8cu: goto label_37bc8c;
        case 0x37bc90u: goto label_37bc90;
        case 0x37bc94u: goto label_37bc94;
        case 0x37bc98u: goto label_37bc98;
        case 0x37bc9cu: goto label_37bc9c;
        case 0x37bca0u: goto label_37bca0;
        case 0x37bca4u: goto label_37bca4;
        case 0x37bca8u: goto label_37bca8;
        case 0x37bcacu: goto label_37bcac;
        case 0x37bcb0u: goto label_37bcb0;
        case 0x37bcb4u: goto label_37bcb4;
        case 0x37bcb8u: goto label_37bcb8;
        case 0x37bcbcu: goto label_37bcbc;
        case 0x37bcc0u: goto label_37bcc0;
        case 0x37bcc4u: goto label_37bcc4;
        case 0x37bcc8u: goto label_37bcc8;
        case 0x37bcccu: goto label_37bccc;
        case 0x37bcd0u: goto label_37bcd0;
        case 0x37bcd4u: goto label_37bcd4;
        case 0x37bcd8u: goto label_37bcd8;
        case 0x37bcdcu: goto label_37bcdc;
        case 0x37bce0u: goto label_37bce0;
        case 0x37bce4u: goto label_37bce4;
        case 0x37bce8u: goto label_37bce8;
        case 0x37bcecu: goto label_37bcec;
        case 0x37bcf0u: goto label_37bcf0;
        case 0x37bcf4u: goto label_37bcf4;
        case 0x37bcf8u: goto label_37bcf8;
        case 0x37bcfcu: goto label_37bcfc;
        case 0x37bd00u: goto label_37bd00;
        case 0x37bd04u: goto label_37bd04;
        case 0x37bd08u: goto label_37bd08;
        case 0x37bd0cu: goto label_37bd0c;
        case 0x37bd10u: goto label_37bd10;
        case 0x37bd14u: goto label_37bd14;
        case 0x37bd18u: goto label_37bd18;
        case 0x37bd1cu: goto label_37bd1c;
        case 0x37bd20u: goto label_37bd20;
        case 0x37bd24u: goto label_37bd24;
        case 0x37bd28u: goto label_37bd28;
        case 0x37bd2cu: goto label_37bd2c;
        case 0x37bd30u: goto label_37bd30;
        case 0x37bd34u: goto label_37bd34;
        case 0x37bd38u: goto label_37bd38;
        case 0x37bd3cu: goto label_37bd3c;
        case 0x37bd40u: goto label_37bd40;
        case 0x37bd44u: goto label_37bd44;
        case 0x37bd48u: goto label_37bd48;
        case 0x37bd4cu: goto label_37bd4c;
        case 0x37bd50u: goto label_37bd50;
        case 0x37bd54u: goto label_37bd54;
        case 0x37bd58u: goto label_37bd58;
        case 0x37bd5cu: goto label_37bd5c;
        case 0x37bd60u: goto label_37bd60;
        case 0x37bd64u: goto label_37bd64;
        case 0x37bd68u: goto label_37bd68;
        case 0x37bd6cu: goto label_37bd6c;
        case 0x37bd70u: goto label_37bd70;
        case 0x37bd74u: goto label_37bd74;
        case 0x37bd78u: goto label_37bd78;
        case 0x37bd7cu: goto label_37bd7c;
        case 0x37bd80u: goto label_37bd80;
        case 0x37bd84u: goto label_37bd84;
        case 0x37bd88u: goto label_37bd88;
        case 0x37bd8cu: goto label_37bd8c;
        case 0x37bd90u: goto label_37bd90;
        case 0x37bd94u: goto label_37bd94;
        case 0x37bd98u: goto label_37bd98;
        case 0x37bd9cu: goto label_37bd9c;
        case 0x37bda0u: goto label_37bda0;
        case 0x37bda4u: goto label_37bda4;
        case 0x37bda8u: goto label_37bda8;
        case 0x37bdacu: goto label_37bdac;
        case 0x37bdb0u: goto label_37bdb0;
        case 0x37bdb4u: goto label_37bdb4;
        case 0x37bdb8u: goto label_37bdb8;
        case 0x37bdbcu: goto label_37bdbc;
        case 0x37bdc0u: goto label_37bdc0;
        case 0x37bdc4u: goto label_37bdc4;
        case 0x37bdc8u: goto label_37bdc8;
        case 0x37bdccu: goto label_37bdcc;
        case 0x37bdd0u: goto label_37bdd0;
        case 0x37bdd4u: goto label_37bdd4;
        case 0x37bdd8u: goto label_37bdd8;
        case 0x37bddcu: goto label_37bddc;
        case 0x37bde0u: goto label_37bde0;
        case 0x37bde4u: goto label_37bde4;
        case 0x37bde8u: goto label_37bde8;
        case 0x37bdecu: goto label_37bdec;
        case 0x37bdf0u: goto label_37bdf0;
        case 0x37bdf4u: goto label_37bdf4;
        case 0x37bdf8u: goto label_37bdf8;
        case 0x37bdfcu: goto label_37bdfc;
        case 0x37be00u: goto label_37be00;
        case 0x37be04u: goto label_37be04;
        case 0x37be08u: goto label_37be08;
        case 0x37be0cu: goto label_37be0c;
        case 0x37be10u: goto label_37be10;
        case 0x37be14u: goto label_37be14;
        case 0x37be18u: goto label_37be18;
        case 0x37be1cu: goto label_37be1c;
        case 0x37be20u: goto label_37be20;
        case 0x37be24u: goto label_37be24;
        case 0x37be28u: goto label_37be28;
        case 0x37be2cu: goto label_37be2c;
        case 0x37be30u: goto label_37be30;
        case 0x37be34u: goto label_37be34;
        case 0x37be38u: goto label_37be38;
        case 0x37be3cu: goto label_37be3c;
        case 0x37be40u: goto label_37be40;
        case 0x37be44u: goto label_37be44;
        case 0x37be48u: goto label_37be48;
        case 0x37be4cu: goto label_37be4c;
        case 0x37be50u: goto label_37be50;
        case 0x37be54u: goto label_37be54;
        case 0x37be58u: goto label_37be58;
        case 0x37be5cu: goto label_37be5c;
        case 0x37be60u: goto label_37be60;
        case 0x37be64u: goto label_37be64;
        case 0x37be68u: goto label_37be68;
        case 0x37be6cu: goto label_37be6c;
        case 0x37be70u: goto label_37be70;
        case 0x37be74u: goto label_37be74;
        case 0x37be78u: goto label_37be78;
        case 0x37be7cu: goto label_37be7c;
        case 0x37be80u: goto label_37be80;
        case 0x37be84u: goto label_37be84;
        case 0x37be88u: goto label_37be88;
        case 0x37be8cu: goto label_37be8c;
        case 0x37be90u: goto label_37be90;
        case 0x37be94u: goto label_37be94;
        default: break;
    }

    ctx->pc = 0x37aee8u;

label_37aee8:
    // 0x37aee8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x37aee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_37aeec:
    // 0x37aeec: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x37aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_37aef0:
    // 0x37aef0: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x37aef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_37aef4:
    // 0x37aef4: 0x24820038  addiu       $v0, $a0, 0x38
    ctx->pc = 0x37aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
label_37aef8:
    // 0x37aef8: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x37aef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_37aefc:
    // 0x37aefc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x37aefcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37af00:
    // 0x37af00: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x37af00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_37af04:
    // 0x37af04: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x37af04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_37af08:
    // 0x37af08: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x37af08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_37af0c:
    // 0x37af0c: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x37af0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_37af10:
    // 0x37af10: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x37af10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_37af14:
    // 0x37af14: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x37af14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_37af18:
    // 0x37af18: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x37af18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_37af1c:
    // 0x37af1c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x37af1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_37af20:
    // 0x37af20: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x37af20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_37af24:
    // 0x37af24: 0xc0df4a4  jal         func_37D290
label_37af28:
    if (ctx->pc == 0x37AF28u) {
        ctx->pc = 0x37AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AF24u;
        // 0x37af28: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AF2Cu;
        goto label_37af2c;
    }
    ctx->pc = 0x37AF24u;
    SET_GPR_U32(ctx, 31, 0x37AF2Cu);
    ctx->pc = 0x37AF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AF24u;
    // 0x37af28: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D290u, 0x37AF24u, 0x37AF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AF2Cu;
label_37af2c:
    // 0x37af2c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x37af2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_37af30:
    // 0x37af30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37af30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37af34:
    // 0x37af34: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x37af34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_37af38:
    // 0x37af38: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
label_37af3c:
    if (ctx->pc == 0x37AF3Cu) {
        ctx->pc = 0x37AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AF38u;
        // 0x37af3c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AF40u;
        goto label_37af40;
    }
    ctx->pc = 0x37AF38u;
    {
        const bool branch_taken_0x37af38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x37AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AF38u;
        // 0x37af3c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37af38) {
            ctx->pc = 0x37AF54u;
            goto label_37af54;
        }
    }
    ctx->pc = 0x37AF40u;
label_37af40:
    // 0x37af40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37af40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37af44:
    // 0x37af44: 0x10620123  beq         $v1, $v0, . + 4 + (0x123 << 2)
label_37af48:
    if (ctx->pc == 0x37AF48u) {
        ctx->pc = 0x37AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AF44u;
        // 0x37af48: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AF4Cu;
        goto label_37af4c;
    }
    ctx->pc = 0x37AF44u;
    {
        const bool branch_taken_0x37af44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AF44u;
        // 0x37af48: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37af44) {
            ctx->pc = 0x37B3D4u;
            goto label_37b3d4;
        }
    }
    ctx->pc = 0x37AF4Cu;
label_37af4c:
    // 0x37af4c: 0x100003be  b           . + 4 + (0x3BE << 2)
label_37af50:
    if (ctx->pc == 0x37AF50u) {
        ctx->pc = 0x37AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AF4Cu;
        // 0x37af50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AF54u;
        goto label_37af54;
    }
    ctx->pc = 0x37AF4Cu;
    {
        const bool branch_taken_0x37af4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AF4Cu;
        // 0x37af50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37af4c) {
            ctx->pc = 0x37BE48u;
            goto label_37be48;
        }
    }
    ctx->pc = 0x37AF54u;
label_37af54:
    // 0x37af54: 0x2a62000b  slti        $v0, $s3, 0xB
    ctx->pc = 0x37af54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)11) ? 1 : 0);
label_37af58:
    // 0x37af58: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x37af58u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_37af5c:
    // 0x37af5c: 0x262f00b  movn        $fp, $s3, $v0
    ctx->pc = 0x37af5cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 19));
label_37af60:
    // 0x37af60: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x37af60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_37af64:
    // 0x37af64: 0x2463c490  addiu       $v1, $v1, -0x3B70
    ctx->pc = 0x37af64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952080));
label_37af68:
    // 0x37af68: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x37af68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_37af6c:
    // 0x37af6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37af70:
    // 0x37af70: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x37af70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37af74:
    // 0x37af74: 0x15200008  bnez        $t1, . + 4 + (0x8 << 2)
label_37af78:
    if (ctx->pc == 0x37AF78u) {
        ctx->pc = 0x37AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AF74u;
        // 0x37af78: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AF7Cu;
        goto label_37af7c;
    }
    ctx->pc = 0x37AF74u;
    {
        const bool branch_taken_0x37af74 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x37AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AF74u;
        // 0x37af78: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37af74) {
            ctx->pc = 0x37AF98u;
            goto label_37af98;
        }
    }
    ctx->pc = 0x37AF7Cu;
label_37af7c:
    // 0x37af7c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37af7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_37af80:
    // 0x37af80: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x37af80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_37af84:
    // 0x37af84: 0xc1035f6  jal         func_40D7D8
label_37af88:
    if (ctx->pc == 0x37AF88u) {
        ctx->pc = 0x37AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AF84u;
        // 0x37af88: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AF8Cu;
        goto label_37af8c;
    }
    ctx->pc = 0x37AF84u;
    SET_GPR_U32(ctx, 31, 0x37AF8Cu);
    ctx->pc = 0x37AF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AF84u;
    // 0x37af88: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37AF84u, 0x37AF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AF8Cu;
label_37af8c:
    // 0x37af8c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x37af8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_37af90:
    // 0x37af90: 0x100003b1  b           . + 4 + (0x3B1 << 2)
label_37af94:
    if (ctx->pc == 0x37AF94u) {
        ctx->pc = 0x37AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AF90u;
        // 0x37af94: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AF98u;
        goto label_37af98;
    }
    ctx->pc = 0x37AF90u;
    {
        const bool branch_taken_0x37af90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AF90u;
        // 0x37af94: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37af90) {
            ctx->pc = 0x37BE58u;
            goto label_37be58;
        }
    }
    ctx->pc = 0x37AF98u;
label_37af98:
    // 0x37af98: 0x1a6000fc  blez        $s3, . + 4 + (0xFC << 2)
label_37af9c:
    if (ctx->pc == 0x37AF9Cu) {
        ctx->pc = 0x37AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AF98u;
        // 0x37af9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AFA0u;
        goto label_37afa0;
    }
    ctx->pc = 0x37AF98u;
    {
        const bool branch_taken_0x37af98 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x37AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AF98u;
        // 0x37af9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37af98) {
            ctx->pc = 0x37B38Cu;
            goto label_37b38c;
        }
    }
    ctx->pc = 0x37AFA0u;
label_37afa0:
    // 0x37afa0: 0x1e17c2  srl         $v0, $fp, 31
    ctx->pc = 0x37afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 30), 31));
label_37afa4:
    // 0x37afa4: 0x240d000c  addiu       $t5, $zero, 0xC
    ctx->pc = 0x37afa4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37afa8:
    // 0x37afa8: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x37afa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_37afac:
    // 0x37afac: 0x27e1823  subu        $v1, $s3, $fp
    ctx->pc = 0x37afacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
label_37afb0:
    // 0x37afb0: 0x25043  sra         $t2, $v0, 1
    ctx->pc = 0x37afb0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 1));
label_37afb4:
    // 0x37afb4: 0x6d8818  mult        $s1, $v1, $t5
    ctx->pc = 0x37afb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_37afb8:
    // 0x37afb8: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x37afb8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_37afbc:
    // 0x37afbc: 0x26a8023  subu        $s0, $s3, $t2
    ctx->pc = 0x37afbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 10)));
label_37afc0:
    // 0x37afc0: 0x3cb1018  mult        $v0, $fp, $t3
    ctx->pc = 0x37afc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_37afc4:
    // 0x37afc4: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x37afc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37afc8:
    // 0x37afc8: 0x3d37023  subu        $t6, $fp, $s3
    ctx->pc = 0x37afc8u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
label_37afcc:
    // 0x37afcc: 0x27880  sll         $t7, $v0, 2
    ctx->pc = 0x37afccu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37afd0:
    // 0x37afd0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x37afd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_37afd4:
    // 0x37afd4: 0x0  nop
    ctx->pc = 0x37afd4u;
    // NOP
label_37afd8:
    // 0x37afd8: 0x10a102a  slt         $v0, $t0, $t2
    ctx->pc = 0x37afd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_37afdc:
    // 0x37afdc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x37afdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_37afe0:
    // 0x37afe0: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_37afe4:
    if (ctx->pc == 0x37AFE4u) {
        ctx->pc = 0x37AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AFE0u;
        // 0x37afe4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AFE8u;
        goto label_37afe8;
    }
    ctx->pc = 0x37AFE0u;
    {
        const bool branch_taken_0x37afe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AFE0u;
        // 0x37afe4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37afe0) {
            ctx->pc = 0x37B108u;
            goto label_37b108;
        }
    }
    ctx->pc = 0x37AFE8u;
label_37afe8:
    // 0x37afe8: 0x1bc000db  blez        $fp, . + 4 + (0xDB << 2)
label_37afec:
    if (ctx->pc == 0x37AFECu) {
        ctx->pc = 0x37AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AFE8u;
        // 0x37afec: 0x250c0001  addiu       $t4, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AFF0u;
        goto label_37aff0;
    }
    ctx->pc = 0x37AFE8u;
    {
        const bool branch_taken_0x37afe8 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x37AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AFE8u;
        // 0x37afec: 0x250c0001  addiu       $t4, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37afe8) {
            ctx->pc = 0x37B358u;
            goto label_37b358;
        }
    }
    ctx->pc = 0x37AFF0u;
label_37aff0:
    // 0x37aff0: 0x11e1018  mult        $v0, $t0, $fp
    ctx->pc = 0x37aff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_37aff4:
    // 0x37aff4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x37aff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_37aff8:
    // 0x37aff8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x37aff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_37affc:
    // 0x37affc: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x37affcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_37b000:
    // 0x37b000: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b004:
    // 0x37b004: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x37b004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_37b008:
    // 0x37b008: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_37b00c:
    if (ctx->pc == 0x37B00Cu) {
        ctx->pc = 0x37B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B008u;
        // 0x37b00c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B010u;
        goto label_37b010;
    }
    ctx->pc = 0x37B008u;
    {
        const bool branch_taken_0x37b008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B008u;
        // 0x37b00c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b008) {
            ctx->pc = 0x37B050u;
            goto label_37b050;
        }
    }
    ctx->pc = 0x37B010u;
label_37b010:
    // 0x37b010: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x37b010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b014:
    // 0x37b014: 0xc6c40000  lwc1        $f4, 0x0($s6)
    ctx->pc = 0x37b014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37b018:
    // 0x37b018: 0xc6c50004  lwc1        $f5, 0x4($s6)
    ctx->pc = 0x37b018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_37b01c:
    // 0x37b01c: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x37b01cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37b020:
    // 0x37b020: 0xc6c40008  lwc1        $f4, 0x8($s6)
    ctx->pc = 0x37b020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37b024:
    // 0x37b024: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x37b024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37b028:
    // 0x37b028: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x37b028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b02c:
    // 0x37b02c: 0x46032842  mul.s       $f1, $f5, $f3
    ctx->pc = 0x37b02cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_37b030:
    // 0x37b030: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x37b030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37b034:
    // 0x37b034: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x37b034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b038:
    // 0x37b038: 0x46032082  mul.s       $f2, $f4, $f3
    ctx->pc = 0x37b038u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37b03c:
    // 0x37b03c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x37b03cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_37b040:
    // 0x37b040: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x37b040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_37b044:
    // 0x37b044: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x37b044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_37b048:
    // 0x37b048: 0x10a000c3  beqz        $a1, . + 4 + (0xC3 << 2)
label_37b04c:
    if (ctx->pc == 0x37B04Cu) {
        ctx->pc = 0x37B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B048u;
        // 0x37b04c: 0x26c6000c  addiu       $a2, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B050u;
        goto label_37b050;
    }
    ctx->pc = 0x37B048u;
    {
        const bool branch_taken_0x37b048 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B048u;
        // 0x37b04c: 0x26c6000c  addiu       $a2, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b048) {
            ctx->pc = 0x37B358u;
            goto label_37b358;
        }
    }
    ctx->pc = 0x37B050u;
label_37b050:
    // 0x37b050: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x37b050u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37b054:
    // 0x37b054: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x37b054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37b058:
    // 0x37b058: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x37b058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_37b05c:
    // 0x37b05c: 0x0  nop
    ctx->pc = 0x37b05cu;
    // NOP
label_37b060:
    // 0x37b060: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x37b060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37b064:
    // 0x37b064: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x37b064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b068:
    // 0x37b068: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x37b068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37b06c:
    // 0x37b06c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x37b06cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37b070:
    // 0x37b070: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x37b070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37b074:
    // 0x37b074: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x37b074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37b078:
    // 0x37b078: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x37b078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_37b07c:
    // 0x37b07c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x37b07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37b080:
    // 0x37b080: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x37b080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_37b084:
    // 0x37b084: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x37b084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b088:
    // 0x37b088: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x37b088u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_37b08c:
    // 0x37b08c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x37b08cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_37b090:
    // 0x37b090: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x37b090u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37b094:
    // 0x37b094: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x37b094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37b098:
    // 0x37b098: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x37b098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b09c:
    // 0x37b09c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x37b09cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37b0a0:
    // 0x37b0a0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x37b0a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_37b0a4:
    // 0x37b0a4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x37b0a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_37b0a8:
    // 0x37b0a8: 0xc484000c  lwc1        $f4, 0xC($a0)
    ctx->pc = 0x37b0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37b0ac:
    // 0x37b0ac: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x37b0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b0b0:
    // 0x37b0b0: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x37b0b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37b0b4:
    // 0x37b0b4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x37b0b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_37b0b8:
    // 0x37b0b8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x37b0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37b0bc:
    // 0x37b0bc: 0xc4c50010  lwc1        $f5, 0x10($a2)
    ctx->pc = 0x37b0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_37b0c0:
    // 0x37b0c0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x37b0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b0c4:
    // 0x37b0c4: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x37b0c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_37b0c8:
    // 0x37b0c8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x37b0c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_37b0cc:
    // 0x37b0cc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x37b0ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37b0d0:
    // 0x37b0d0: 0xc4640014  lwc1        $f4, 0x14($v1)
    ctx->pc = 0x37b0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37b0d4:
    // 0x37b0d4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x37b0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b0d8:
    // 0x37b0d8: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x37b0d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37b0dc:
    // 0x37b0dc: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x37b0dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_37b0e0:
    // 0x37b0e0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x37b0e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_37b0e4:
    // 0x37b0e4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x37b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_37b0e8:
    // 0x37b0e8: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x37b0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_37b0ec:
    // 0x37b0ec: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x37b0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
label_37b0f0:
    // 0x37b0f0: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x37b0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_37b0f4:
    // 0x37b0f4: 0x14a0ffda  bnez        $a1, . + 4 + (-0x26 << 2)
label_37b0f8:
    if (ctx->pc == 0x37B0F8u) {
        ctx->pc = 0x37B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B0F4u;
        // 0x37b0f8: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B0FCu;
        goto label_37b0fc;
    }
    ctx->pc = 0x37B0F4u;
    {
        const bool branch_taken_0x37b0f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x37B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B0F4u;
        // 0x37b0f8: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b0f4) {
            ctx->pc = 0x37B060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37b060;
        }
    }
    ctx->pc = 0x37B0FCu;
label_37b0fc:
    // 0x37b0fc: 0x10000097  b           . + 4 + (0x97 << 2)
label_37b100:
    if (ctx->pc == 0x37B100u) {
        ctx->pc = 0x37B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B0FCu;
        // 0x37b100: 0x8fa20074  lw          $v0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B104u;
        goto label_37b104;
    }
    ctx->pc = 0x37B0FCu;
    {
        const bool branch_taken_0x37b0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B0FCu;
        // 0x37b100: 0x8fa20074  lw          $v0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b0fc) {
            ctx->pc = 0x37B35Cu;
            goto label_37b35c;
        }
    }
    ctx->pc = 0x37B104u;
label_37b104:
    // 0x37b104: 0x0  nop
    ctx->pc = 0x37b104u;
    // NOP
label_37b108:
    // 0x37b108: 0x110102a  slt         $v0, $t0, $s0
    ctx->pc = 0x37b108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_37b10c:
    // 0x37b10c: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_37b110:
    if (ctx->pc == 0x37B110u) {
        ctx->pc = 0x37B114u;
        goto label_37b114;
    }
    ctx->pc = 0x37B10Cu;
    {
        const bool branch_taken_0x37b10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b10c) {
            ctx->pc = 0x37B238u;
            goto label_37b238;
        }
    }
    ctx->pc = 0x37B114u;
label_37b114:
    // 0x37b114: 0x1bc00090  blez        $fp, . + 4 + (0x90 << 2)
label_37b118:
    if (ctx->pc == 0x37B118u) {
        ctx->pc = 0x37B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B114u;
        // 0x37b118: 0x250c0001  addiu       $t4, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B11Cu;
        goto label_37b11c;
    }
    ctx->pc = 0x37B114u;
    {
        const bool branch_taken_0x37b114 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x37B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B114u;
        // 0x37b118: 0x250c0001  addiu       $t4, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b114) {
            ctx->pc = 0x37B358u;
            goto label_37b358;
        }
    }
    ctx->pc = 0x37B11Cu;
label_37b11c:
    // 0x37b11c: 0x10b1023  subu        $v0, $t0, $t3
    ctx->pc = 0x37b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
label_37b120:
    // 0x37b120: 0x1e91821  addu        $v1, $t7, $t1
    ctx->pc = 0x37b120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
label_37b124:
    // 0x37b124: 0x522818  mult        $a1, $v0, $s2
    ctx->pc = 0x37b124u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_37b128:
    // 0x37b128: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x37b128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_37b12c:
    // 0x37b12c: 0xb62021  addu        $a0, $a1, $s6
    ctx->pc = 0x37b12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
label_37b130:
    // 0x37b130: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x37b130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_37b134:
    // 0x37b134: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x37b134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_37b138:
    // 0x37b138: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_37b13c:
    if (ctx->pc == 0x37B13Cu) {
        ctx->pc = 0x37B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B138u;
        // 0x37b13c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B140u;
        goto label_37b140;
    }
    ctx->pc = 0x37B138u;
    {
        const bool branch_taken_0x37b138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B138u;
        // 0x37b13c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b138) {
            ctx->pc = 0x37B180u;
            goto label_37b180;
        }
    }
    ctx->pc = 0x37B140u;
label_37b140:
    // 0x37b140: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x37b140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b144:
    // 0x37b144: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x37b144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37b148:
    // 0x37b148: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x37b148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37b14c:
    // 0x37b14c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x37b14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37b150:
    // 0x37b150: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x37b150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37b154:
    // 0x37b154: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x37b154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b158:
    // 0x37b158: 0x46032042  mul.s       $f1, $f4, $f3
    ctx->pc = 0x37b158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37b15c:
    // 0x37b15c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x37b15cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37b160:
    // 0x37b160: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x37b160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37b164:
    // 0x37b164: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x37b164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b168:
    // 0x37b168: 0x46032082  mul.s       $f2, $f4, $f3
    ctx->pc = 0x37b168u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37b16c:
    // 0x37b16c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x37b16cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_37b170:
    // 0x37b170: 0x24670004  addiu       $a3, $v1, 0x4
    ctx->pc = 0x37b170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_37b174:
    // 0x37b174: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x37b174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_37b178:
    // 0x37b178: 0x10a00077  beqz        $a1, . + 4 + (0x77 << 2)
label_37b17c:
    if (ctx->pc == 0x37B17Cu) {
        ctx->pc = 0x37B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B178u;
        // 0x37b17c: 0x2486000c  addiu       $a2, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B180u;
        goto label_37b180;
    }
    ctx->pc = 0x37B178u;
    {
        const bool branch_taken_0x37b178 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B178u;
        // 0x37b17c: 0x2486000c  addiu       $a2, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b178) {
            ctx->pc = 0x37B358u;
            goto label_37b358;
        }
    }
    ctx->pc = 0x37B180u;
label_37b180:
    // 0x37b180: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x37b180u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37b184:
    // 0x37b184: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x37b184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_37b188:
    // 0x37b188: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x37b188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_37b18c:
    // 0x37b18c: 0x0  nop
    ctx->pc = 0x37b18cu;
    // NOP
label_37b190:
    // 0x37b190: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x37b190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37b194:
    // 0x37b194: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x37b194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b198:
    // 0x37b198: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x37b198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37b19c:
    // 0x37b19c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x37b19cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37b1a0:
    // 0x37b1a0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x37b1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37b1a4:
    // 0x37b1a4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x37b1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37b1a8:
    // 0x37b1a8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x37b1a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_37b1ac:
    // 0x37b1ac: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x37b1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37b1b0:
    // 0x37b1b0: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x37b1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37b1b4:
    // 0x37b1b4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x37b1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b1b8:
    // 0x37b1b8: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x37b1b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37b1bc:
    // 0x37b1bc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x37b1bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_37b1c0:
    // 0x37b1c0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x37b1c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37b1c4:
    // 0x37b1c4: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x37b1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37b1c8:
    // 0x37b1c8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x37b1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b1cc:
    // 0x37b1cc: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x37b1ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37b1d0:
    // 0x37b1d0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x37b1d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_37b1d4:
    // 0x37b1d4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x37b1d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_37b1d8:
    // 0x37b1d8: 0xc484000c  lwc1        $f4, 0xC($a0)
    ctx->pc = 0x37b1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37b1dc:
    // 0x37b1dc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x37b1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b1e0:
    // 0x37b1e0: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x37b1e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37b1e4:
    // 0x37b1e4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x37b1e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_37b1e8:
    // 0x37b1e8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x37b1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37b1ec:
    // 0x37b1ec: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x37b1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37b1f0:
    // 0x37b1f0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x37b1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b1f4:
    // 0x37b1f4: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x37b1f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37b1f8:
    // 0x37b1f8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x37b1f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_37b1fc:
    // 0x37b1fc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x37b1fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37b200:
    // 0x37b200: 0xc4640014  lwc1        $f4, 0x14($v1)
    ctx->pc = 0x37b200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37b204:
    // 0x37b204: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x37b204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b208:
    // 0x37b208: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x37b208u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37b20c:
    // 0x37b20c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x37b20cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_37b210:
    // 0x37b210: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x37b210u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_37b214:
    // 0x37b214: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x37b214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_37b218:
    // 0x37b218: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x37b218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_37b21c:
    // 0x37b21c: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x37b21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
label_37b220:
    // 0x37b220: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x37b220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_37b224:
    // 0x37b224: 0x14a0ffda  bnez        $a1, . + 4 + (-0x26 << 2)
label_37b228:
    if (ctx->pc == 0x37B228u) {
        ctx->pc = 0x37B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B224u;
        // 0x37b228: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B22Cu;
        goto label_37b22c;
    }
    ctx->pc = 0x37B224u;
    {
        const bool branch_taken_0x37b224 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x37B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B224u;
        // 0x37b228: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b224) {
            ctx->pc = 0x37B190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37b190;
        }
    }
    ctx->pc = 0x37B22Cu;
label_37b22c:
    // 0x37b22c: 0x1000004b  b           . + 4 + (0x4B << 2)
label_37b230:
    if (ctx->pc == 0x37B230u) {
        ctx->pc = 0x37B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B22Cu;
        // 0x37b230: 0x8fa20074  lw          $v0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B234u;
        goto label_37b234;
    }
    ctx->pc = 0x37B22Cu;
    {
        const bool branch_taken_0x37b22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B22Cu;
        // 0x37b230: 0x8fa20074  lw          $v0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b22c) {
            ctx->pc = 0x37B35Cu;
            goto label_37b35c;
        }
    }
    ctx->pc = 0x37B234u;
label_37b234:
    // 0x37b234: 0x0  nop
    ctx->pc = 0x37b234u;
    // NOP
label_37b238:
    // 0x37b238: 0x1bc00047  blez        $fp, . + 4 + (0x47 << 2)
label_37b23c:
    if (ctx->pc == 0x37B23Cu) {
        ctx->pc = 0x37B23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B238u;
        // 0x37b23c: 0x250c0001  addiu       $t4, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B240u;
        goto label_37b240;
    }
    ctx->pc = 0x37B238u;
    {
        const bool branch_taken_0x37b238 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x37B23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B238u;
        // 0x37b23c: 0x250c0001  addiu       $t4, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b238) {
            ctx->pc = 0x37B358u;
            goto label_37b358;
        }
    }
    ctx->pc = 0x37B240u;
label_37b240:
    // 0x37b240: 0x1c81021  addu        $v0, $t6, $t0
    ctx->pc = 0x37b240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
label_37b244:
    // 0x37b244: 0x2362021  addu        $a0, $s1, $s6
    ctx->pc = 0x37b244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_37b248:
    // 0x37b248: 0x3c21018  mult        $v0, $fp, $v0
    ctx->pc = 0x37b248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_37b24c:
    // 0x37b24c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x37b24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_37b250:
    // 0x37b250: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x37b250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37b254:
    // 0x37b254: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x37b254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_37b258:
    // 0x37b258: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b25c:
    // 0x37b25c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x37b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_37b260:
    // 0x37b260: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_37b264:
    if (ctx->pc == 0x37B264u) {
        ctx->pc = 0x37B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B260u;
        // 0x37b264: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B268u;
        goto label_37b268;
    }
    ctx->pc = 0x37B260u;
    {
        const bool branch_taken_0x37b260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B260u;
        // 0x37b264: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b260) {
            ctx->pc = 0x37B2A8u;
            goto label_37b2a8;
        }
    }
    ctx->pc = 0x37B268u;
label_37b268:
    // 0x37b268: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x37b268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b26c:
    // 0x37b26c: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x37b26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37b270:
    // 0x37b270: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x37b270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37b274:
    // 0x37b274: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x37b274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37b278:
    // 0x37b278: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x37b278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37b27c:
    // 0x37b27c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x37b27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b280:
    // 0x37b280: 0x46032042  mul.s       $f1, $f4, $f3
    ctx->pc = 0x37b280u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37b284:
    // 0x37b284: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x37b284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37b288:
    // 0x37b288: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x37b288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37b28c:
    // 0x37b28c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x37b28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b290:
    // 0x37b290: 0x46032082  mul.s       $f2, $f4, $f3
    ctx->pc = 0x37b290u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37b294:
    // 0x37b294: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x37b294u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_37b298:
    // 0x37b298: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x37b298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_37b29c:
    // 0x37b29c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x37b29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_37b2a0:
    // 0x37b2a0: 0x10a0002d  beqz        $a1, . + 4 + (0x2D << 2)
label_37b2a4:
    if (ctx->pc == 0x37B2A4u) {
        ctx->pc = 0x37B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B2A0u;
        // 0x37b2a4: 0x2487000c  addiu       $a3, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B2A8u;
        goto label_37b2a8;
    }
    ctx->pc = 0x37B2A0u;
    {
        const bool branch_taken_0x37b2a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B2A0u;
        // 0x37b2a4: 0x2487000c  addiu       $a3, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b2a0) {
            ctx->pc = 0x37B358u;
            goto label_37b358;
        }
    }
    ctx->pc = 0x37B2A8u;
label_37b2a8:
    // 0x37b2a8: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x37b2a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_37b2ac:
    // 0x37b2ac: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x37b2acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37b2b0:
    // 0x37b2b0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x37b2b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_37b2b4:
    // 0x37b2b4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x37b2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_37b2b8:
    // 0x37b2b8: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x37b2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37b2bc:
    // 0x37b2bc: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x37b2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b2c0:
    // 0x37b2c0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x37b2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37b2c4:
    // 0x37b2c4: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x37b2c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37b2c8:
    // 0x37b2c8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x37b2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37b2cc:
    // 0x37b2cc: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x37b2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37b2d0:
    // 0x37b2d0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x37b2d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_37b2d4:
    // 0x37b2d4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x37b2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37b2d8:
    // 0x37b2d8: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x37b2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37b2dc:
    // 0x37b2dc: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x37b2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b2e0:
    // 0x37b2e0: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x37b2e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37b2e4:
    // 0x37b2e4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x37b2e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_37b2e8:
    // 0x37b2e8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x37b2e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37b2ec:
    // 0x37b2ec: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x37b2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37b2f0:
    // 0x37b2f0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x37b2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b2f4:
    // 0x37b2f4: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x37b2f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37b2f8:
    // 0x37b2f8: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x37b2f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_37b2fc:
    // 0x37b2fc: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x37b2fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_37b300:
    // 0x37b300: 0xc484000c  lwc1        $f4, 0xC($a0)
    ctx->pc = 0x37b300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37b304:
    // 0x37b304: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x37b304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b308:
    // 0x37b308: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x37b308u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37b30c:
    // 0x37b30c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x37b30cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_37b310:
    // 0x37b310: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x37b310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37b314:
    // 0x37b314: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x37b314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37b318:
    // 0x37b318: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x37b318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b31c:
    // 0x37b31c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x37b31cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37b320:
    // 0x37b320: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x37b320u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_37b324:
    // 0x37b324: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x37b324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37b328:
    // 0x37b328: 0xc4640014  lwc1        $f4, 0x14($v1)
    ctx->pc = 0x37b328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37b32c:
    // 0x37b32c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x37b32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37b330:
    // 0x37b330: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x37b330u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37b334:
    // 0x37b334: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x37b334u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_37b338:
    // 0x37b338: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x37b338u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_37b33c:
    // 0x37b33c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x37b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_37b340:
    // 0x37b340: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x37b340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_37b344:
    // 0x37b344: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x37b344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
label_37b348:
    // 0x37b348: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x37b348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_37b34c:
    // 0x37b34c: 0x14a0ffda  bnez        $a1, . + 4 + (-0x26 << 2)
label_37b350:
    if (ctx->pc == 0x37B350u) {
        ctx->pc = 0x37B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B34Cu;
        // 0x37b350: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B354u;
        goto label_37b354;
    }
    ctx->pc = 0x37B34Cu;
    {
        const bool branch_taken_0x37b34c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x37B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B34Cu;
        // 0x37b350: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b34c) {
            ctx->pc = 0x37B2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37b2b8;
        }
    }
    ctx->pc = 0x37B354u;
label_37b354:
    // 0x37b354: 0x0  nop
    ctx->pc = 0x37b354u;
    // NOP
label_37b358:
    // 0x37b358: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x37b358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_37b35c:
    // 0x37b35c: 0x400013  mtlo        $v0
    ctx->pc = 0x37b35cu;
    ctx->lo = GPR_U64(ctx, 2);
label_37b360:
    // 0x37b360: 0x710d1800  madd        $v1, $t0, $t5
    ctx->pc = 0x37b360u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 13); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_37b364:
    // 0x37b364: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x37b364u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_37b368:
    // 0x37b368: 0x113102a  slt         $v0, $t0, $s3
    ctx->pc = 0x37b368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_37b36c:
    // 0x37b36c: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x37b36cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_37b370:
    // 0x37b370: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x37b370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_37b374:
    // 0x37b374: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x37b374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_37b378:
    // 0x37b378: 0xb0640013  sdl         $a0, 0x13($v1)
    ctx->pc = 0x37b378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_37b37c:
    // 0x37b37c: 0xb464000c  sdr         $a0, 0xC($v1)
    ctx->pc = 0x37b37cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_37b380:
    // 0x37b380: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x37b380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
label_37b384:
    // 0x37b384: 0x5440ff14  bnel        $v0, $zero, . + 4 + (-0xEC << 2)
label_37b388:
    if (ctx->pc == 0x37B388u) {
        ctx->pc = 0x37B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B384u;
        // 0x37b388: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B38Cu;
        goto label_37b38c;
    }
    ctx->pc = 0x37B384u;
    {
        const bool branch_taken_0x37b384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b384) {
            ctx->pc = 0x37B388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37B384u;
            // 0x37b388: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37AFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37afd8;
        }
    }
    ctx->pc = 0x37B38Cu;
label_37b38c:
    // 0x37b38c: 0x8fa80074  lw          $t0, 0x74($sp)
    ctx->pc = 0x37b38cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_37b390:
    // 0x37b390: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x37b390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37b394:
    // 0x37b394: 0x1000013  mtlo        $t0
    ctx->pc = 0x37b394u;
    ctx->lo = GPR_U64(ctx, 8);
label_37b398:
    // 0x37b398: 0x6909001f  ldl         $t1, 0x1F($t0)
    ctx->pc = 0x37b398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_37b39c:
    // 0x37b39c: 0x6d090018  ldr         $t1, 0x18($t0)
    ctx->pc = 0x37b39cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_37b3a0:
    // 0x37b3a0: 0x8d030020  lw          $v1, 0x20($t0)
    ctx->pc = 0x37b3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_37b3a4:
    // 0x37b3a4: 0xb1090007  sdl         $t1, 0x7($t0)
    ctx->pc = 0x37b3a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_37b3a8:
    // 0x37b3a8: 0xb5090000  sdr         $t1, 0x0($t0)
    ctx->pc = 0x37b3a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_37b3ac:
    // 0x37b3ac: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x37b3acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
label_37b3b0:
    // 0x37b3b0: 0x72621000  madd        $v0, $s3, $v0
    ctx->pc = 0x37b3b0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_37b3b4:
    // 0x37b3b4: 0x6844fffb  ldl         $a0, -0x5($v0)
    ctx->pc = 0x37b3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_37b3b8:
    // 0x37b3b8: 0x6c44fff4  ldr         $a0, -0xC($v0)
    ctx->pc = 0x37b3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_37b3bc:
    // 0x37b3bc: 0x8c45fffc  lw          $a1, -0x4($v0)
    ctx->pc = 0x37b3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_37b3c0:
    // 0x37b3c0: 0xb0440013  sdl         $a0, 0x13($v0)
    ctx->pc = 0x37b3c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_37b3c4:
    // 0x37b3c4: 0xb444000c  sdr         $a0, 0xC($v0)
    ctx->pc = 0x37b3c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_37b3c8:
    // 0x37b3c8: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x37b3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_37b3cc:
    // 0x37b3cc: 0x100002a5  b           . + 4 + (0x2A5 << 2)
label_37b3d0:
    if (ctx->pc == 0x37B3D0u) {
        ctx->pc = 0x37B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B3CCu;
        // 0x37b3d0: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B3D4u;
        goto label_37b3d4;
    }
    ctx->pc = 0x37B3CCu;
    {
        const bool branch_taken_0x37b3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B3CCu;
        // 0x37b3d0: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b3cc) {
            ctx->pc = 0x37BE64u;
            goto label_37be64;
        }
    }
    ctx->pc = 0x37B3D4u;
label_37b3d4:
    // 0x37b3d4: 0x2a63000b  slti        $v1, $s3, 0xB
    ctx->pc = 0x37b3d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)11) ? 1 : 0);
label_37b3d8:
    // 0x37b3d8: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x37b3d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_37b3dc:
    // 0x37b3dc: 0x263f00b  movn        $fp, $s3, $v1
    ctx->pc = 0x37b3dcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 19));
label_37b3e0:
    // 0x37b3e0: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x37b3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_37b3e4:
    // 0x37b3e4: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
label_37b3e8:
    if (ctx->pc == 0x37B3E8u) {
        ctx->pc = 0x37B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B3E4u;
        // 0x37b3e8: 0x1e87c3  sra         $s0, $fp, 31 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 30), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B3ECu;
        goto label_37b3ec;
    }
    ctx->pc = 0x37B3E4u;
    {
        const bool branch_taken_0x37b3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B3E4u;
        // 0x37b3e8: 0x1e87c3  sra         $s0, $fp, 31 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 30), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b3e4) {
            ctx->pc = 0x37B70Cu;
            goto label_37b70c;
        }
    }
    ctx->pc = 0x37B3ECu;
label_37b3ec:
    // 0x37b3ec: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x37b3ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
label_37b3f0:
    // 0x37b3f0: 0x3d01023  subu        $v0, $fp, $s0
    ctx->pc = 0x37b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
label_37b3f4:
    // 0x37b3f4: 0x2623e880  addiu       $v1, $s1, -0x1780
    ctx->pc = 0x37b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_37b3f8:
    // 0x37b3f8: 0x2a043  sra         $s4, $v0, 1
    ctx->pc = 0x37b3f8u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 1));
label_37b3fc:
    // 0x37b3fc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x37b3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_37b400:
    // 0x37b400: 0x26950001  addiu       $s5, $s4, 0x1
    ctx->pc = 0x37b400u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_37b404:
    // 0x37b404: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x37b404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_37b408:
    // 0x37b408: 0x159080  sll         $s2, $s5, 2
    ctx->pc = 0x37b408u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_37b40c:
    // 0x37b40c: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x37b40cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_37b410:
    // 0x37b410: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37b410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37b414:
    // 0x37b414: 0x40f809  jalr        $v0
label_37b418:
    if (ctx->pc == 0x37B418u) {
        ctx->pc = 0x37B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B414u;
        // 0x37b418: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B41Cu;
        goto label_37b41c;
    }
    ctx->pc = 0x37B414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37B41Cu);
        ctx->pc = 0x37B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B414u;
        // 0x37b418: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B414u, 0x37B41Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37B41Cu;
label_37b41c:
    // 0x37b41c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37b41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37b420:
    // 0x37b420: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
label_37b424:
    if (ctx->pc == 0x37B424u) {
        ctx->pc = 0x37B424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B420u;
        // 0x37b424: 0xafb00078  sw          $s0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B428u;
        goto label_37b428;
    }
    ctx->pc = 0x37B420u;
    {
        const bool branch_taken_0x37b420 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x37B424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B420u;
        // 0x37b424: 0xafb00078  sw          $s0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b420) {
            ctx->pc = 0x37B458u;
            goto label_37b458;
        }
    }
    ctx->pc = 0x37B428u;
label_37b428:
    // 0x37b428: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x37b428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_37b42c:
    // 0x37b42c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37b42cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_37b430:
    // 0x37b430: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x37b430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_37b434:
    // 0x37b434: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37b434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37b438:
    // 0x37b438: 0xc1035f6  jal         func_40D7D8
label_37b43c:
    if (ctx->pc == 0x37B43Cu) {
        ctx->pc = 0x37B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B438u;
        // 0x37b43c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B440u;
        goto label_37b440;
    }
    ctx->pc = 0x37B438u;
    SET_GPR_U32(ctx, 31, 0x37B440u);
    ctx->pc = 0x37B43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B438u;
    // 0x37b43c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37B438u, 0x37B440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B440u;
label_37b440:
    // 0x37b440: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x37b440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_37b444:
    // 0x37b444: 0xc103628  jal         func_40D8A0
label_37b448:
    if (ctx->pc == 0x37B448u) {
        ctx->pc = 0x37B448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B444u;
        // 0x37b448: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B44Cu;
        goto label_37b44c;
    }
    ctx->pc = 0x37B444u;
    SET_GPR_U32(ctx, 31, 0x37B44Cu);
    ctx->pc = 0x37B448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B444u;
    // 0x37b448: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37B444u, 0x37B44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B44Cu;
label_37b44c:
    // 0x37b44c: 0x10000046  b           . + 4 + (0x46 << 2)
label_37b450:
    if (ctx->pc == 0x37B450u) {
        ctx->pc = 0x37B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B44Cu;
        // 0x37b450: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B454u;
        goto label_37b454;
    }
    ctx->pc = 0x37B44Cu;
    {
        const bool branch_taken_0x37b44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B44Cu;
        // 0x37b450: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b44c) {
            ctx->pc = 0x37B568u;
            goto label_37b568;
        }
    }
    ctx->pc = 0x37B454u;
label_37b454:
    // 0x37b454: 0x0  nop
    ctx->pc = 0x37b454u;
    // NOP
label_37b458:
    // 0x37b458: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37b458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37b45c:
    // 0x37b45c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x37b45cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37b460:
    // 0x37b460: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x37b460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37b464:
    // 0x37b464: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x37b464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_37b468:
    // 0x37b468: 0x75182a  slt         $v1, $v1, $s5
    ctx->pc = 0x37b468u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_37b46c:
    // 0x37b46c: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
label_37b470:
    if (ctx->pc == 0x37B470u) {
        ctx->pc = 0x37B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B46Cu;
        // 0x37b470: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B474u;
        goto label_37b474;
    }
    ctx->pc = 0x37B46Cu;
    {
        const bool branch_taken_0x37b46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B46Cu;
        // 0x37b470: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b46c) {
            ctx->pc = 0x37B564u;
            goto label_37b564;
        }
    }
    ctx->pc = 0x37B474u;
label_37b474:
    // 0x37b474: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x37b474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_37b478:
    // 0x37b478: 0x24870008  addiu       $a3, $a0, 0x8
    ctx->pc = 0x37b478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_37b47c:
    // 0x37b47c: 0x31023  negu        $v0, $v1
    ctx->pc = 0x37b47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_37b480:
    // 0x37b480: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x37b480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_37b484:
    // 0x37b484: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
label_37b488:
    if (ctx->pc == 0x37B488u) {
        ctx->pc = 0x37B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B484u;
        // 0x37b488: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B48Cu;
        goto label_37b48c;
    }
    ctx->pc = 0x37B484u;
    {
        const bool branch_taken_0x37b484 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B484u;
        // 0x37b488: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b484) {
            ctx->pc = 0x37B4F8u;
            goto label_37b4f8;
        }
    }
    ctx->pc = 0x37B48Cu;
label_37b48c:
    // 0x37b48c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x37b48cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_37b490:
    // 0x37b490: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_37b494:
    if (ctx->pc == 0x37B494u) {
        ctx->pc = 0x37B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B490u;
        // 0x37b494: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B498u;
        goto label_37b498;
    }
    ctx->pc = 0x37B490u;
    {
        const bool branch_taken_0x37b490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B490u;
        // 0x37b494: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b490) {
            ctx->pc = 0x37B4D8u;
            goto label_37b4d8;
        }
    }
    ctx->pc = 0x37B498u;
label_37b498:
    // 0x37b498: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_37b49c:
    if (ctx->pc == 0x37B49Cu) {
        ctx->pc = 0x37B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B498u;
        // 0x37b49c: 0x8cc2fffc  lw          $v0, -0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B4A0u;
        goto label_37b4a0;
    }
    ctx->pc = 0x37B498u;
    {
        const bool branch_taken_0x37b498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b498) {
            ctx->pc = 0x37B49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37B498u;
            // 0x37b49c: 0x8cc2fffc  lw          $v0, -0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37B4C0u;
            goto label_37b4c0;
        }
    }
    ctx->pc = 0x37B4A0u;
label_37b4a0:
    // 0x37b4a0: 0x8ce2fffc  lw          $v0, -0x4($a3)
    ctx->pc = 0x37b4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967292)));
label_37b4a4:
    // 0x37b4a4: 0x2683fffe  addiu       $v1, $s4, -0x2
    ctx->pc = 0x37b4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
label_37b4a8:
    // 0x37b4a8: 0x8ce5fff8  lw          $a1, -0x8($a3)
    ctx->pc = 0x37b4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967288)));
label_37b4ac:
    // 0x37b4ac: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x37b4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_37b4b0:
    // 0x37b4b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b4b4:
    // 0x37b4b4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x37b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_37b4b8:
    // 0x37b4b8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x37b4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_37b4bc:
    // 0x37b4bc: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x37b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_37b4c0:
    // 0x37b4c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_37b4c4:
    // 0x37b4c4: 0x8cc5fff8  lw          $a1, -0x8($a2)
    ctx->pc = 0x37b4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_37b4c8:
    // 0x37b4c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b4cc:
    // 0x37b4cc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x37b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_37b4d0:
    // 0x37b4d0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x37b4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_37b4d4:
    // 0x37b4d4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x37b4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_37b4d8:
    // 0x37b4d8: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x37b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_37b4dc:
    // 0x37b4dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_37b4e0:
    // 0x37b4e0: 0x8cc5fff8  lw          $a1, -0x8($a2)
    ctx->pc = 0x37b4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_37b4e4:
    // 0x37b4e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b4e8:
    // 0x37b4e8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x37b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_37b4ec:
    // 0x37b4ec: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x37b4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_37b4f0:
    // 0x37b4f0: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_37b4f4:
    if (ctx->pc == 0x37B4F4u) {
        ctx->pc = 0x37B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B4F0u;
        // 0x37b4f4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B4F8u;
        goto label_37b4f8;
    }
    ctx->pc = 0x37B4F0u;
    {
        const bool branch_taken_0x37b4f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B4F0u;
        // 0x37b4f4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b4f0) {
            ctx->pc = 0x37B564u;
            goto label_37b564;
        }
    }
    ctx->pc = 0x37B4F8u;
label_37b4f8:
    // 0x37b4f8: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x37b4f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37b4fc:
    // 0x37b4fc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x37b4fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37b500:
    // 0x37b500: 0x8ce2fffc  lw          $v0, -0x4($a3)
    ctx->pc = 0x37b500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967292)));
label_37b504:
    // 0x37b504: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x37b504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_37b508:
    // 0x37b508: 0x8d05fff8  lw          $a1, -0x8($t0)
    ctx->pc = 0x37b508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967288)));
label_37b50c:
    // 0x37b50c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b510:
    // 0x37b510: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x37b510u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_37b514:
    // 0x37b514: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x37b514u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_37b518:
    // 0x37b518: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x37b518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_37b51c:
    // 0x37b51c: 0x8d05fffc  lw          $a1, -0x4($t0)
    ctx->pc = 0x37b51cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967292)));
label_37b520:
    // 0x37b520: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b524:
    // 0x37b524: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x37b524u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_37b528:
    // 0x37b528: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x37b528u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_37b52c:
    // 0x37b52c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x37b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_37b530:
    // 0x37b530: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x37b530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_37b534:
    // 0x37b534: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b538:
    // 0x37b538: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x37b538u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_37b53c:
    // 0x37b53c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x37b53cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_37b540:
    // 0x37b540: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x37b540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_37b544:
    // 0x37b544: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x37b544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_37b548:
    // 0x37b548: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x37b548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_37b54c:
    // 0x37b54c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b550:
    // 0x37b550: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x37b550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_37b554:
    // 0x37b554: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x37b554u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_37b558:
    // 0x37b558: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x37b558u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_37b55c:
    // 0x37b55c: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_37b560:
    if (ctx->pc == 0x37B560u) {
        ctx->pc = 0x37B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B55Cu;
        // 0x37b560: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B564u;
        goto label_37b564;
    }
    ctx->pc = 0x37B55Cu;
    {
        const bool branch_taken_0x37b55c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B55Cu;
        // 0x37b560: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b55c) {
            ctx->pc = 0x37B500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37b500;
        }
    }
    ctx->pc = 0x37B564u;
label_37b564:
    // 0x37b564: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x37b564u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37b568:
    // 0x37b568: 0x12a0023d  beqz        $s5, . + 4 + (0x23D << 2)
label_37b56c:
    if (ctx->pc == 0x37B56Cu) {
        ctx->pc = 0x37B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B568u;
        // 0x37b56c: 0x8fa90078  lw          $t1, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B570u;
        goto label_37b570;
    }
    ctx->pc = 0x37B568u;
    {
        const bool branch_taken_0x37b568 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B568u;
        // 0x37b56c: 0x8fa90078  lw          $t1, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b568) {
            ctx->pc = 0x37BE60u;
            goto label_37be60;
        }
    }
    ctx->pc = 0x37B570u;
label_37b570:
    // 0x37b570: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x37b570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_37b574:
    // 0x37b574: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37b574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_37b578:
    // 0x37b578: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x37b578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37b57c:
    // 0x37b57c: 0x2470e880  addiu       $s0, $v1, -0x1780
    ctx->pc = 0x37b57cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_37b580:
    // 0x37b580: 0x3c91023  subu        $v0, $fp, $t1
    ctx->pc = 0x37b580u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 9)));
label_37b584:
    // 0x37b584: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x37b584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_37b588:
    // 0x37b588: 0x2a043  sra         $s4, $v0, 1
    ctx->pc = 0x37b588u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 1));
label_37b58c:
    // 0x37b58c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x37b58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_37b590:
    // 0x37b590: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x37b590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_37b594:
    // 0x37b594: 0x26970001  addiu       $s7, $s4, 0x1
    ctx->pc = 0x37b594u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_37b598:
    // 0x37b598: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x37b598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_37b59c:
    // 0x37b59c: 0x179080  sll         $s2, $s7, 2
    ctx->pc = 0x37b59cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_37b5a0:
    // 0x37b5a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x37b5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37b5a4:
    // 0x37b5a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37b5a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37b5a8:
    // 0x37b5a8: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x37b5a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_37b5ac:
    // 0x37b5ac: 0x60f809  jalr        $v1
label_37b5b0:
    if (ctx->pc == 0x37B5B0u) {
        ctx->pc = 0x37B5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B5ACu;
        // 0x37b5b0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B5B4u;
        goto label_37b5b4;
    }
    ctx->pc = 0x37B5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x37B5B4u);
        ctx->pc = 0x37B5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B5ACu;
        // 0x37b5b0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B5ACu, 0x37B5B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37B5B4u;
label_37b5b4:
    // 0x37b5b4: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x37b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_37b5b8:
    // 0x37b5b8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x37b5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_37b5bc:
    // 0x37b5bc: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x37b5bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_37b5c0:
    // 0x37b5c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37b5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37b5c4:
    // 0x37b5c4: 0x40f809  jalr        $v0
label_37b5c8:
    if (ctx->pc == 0x37B5C8u) {
        ctx->pc = 0x37B5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B5C4u;
        // 0x37b5c8: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B5CCu;
        goto label_37b5cc;
    }
    ctx->pc = 0x37B5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37B5CCu);
        ctx->pc = 0x37B5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B5C4u;
        // 0x37b5c8: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B5C4u, 0x37B5CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37B5CCu;
label_37b5cc:
    // 0x37b5cc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x37b5ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37b5d0:
    // 0x37b5d0: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
label_37b5d4:
    if (ctx->pc == 0x37B5D4u) {
        ctx->pc = 0x37B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B5D0u;
        // 0x37b5d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B5D8u;
        goto label_37b5d8;
    }
    ctx->pc = 0x37B5D0u;
    {
        const bool branch_taken_0x37b5d0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x37B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B5D0u;
        // 0x37b5d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b5d0) {
            ctx->pc = 0x37B5F8u;
            goto label_37b5f8;
        }
    }
    ctx->pc = 0x37B5D8u;
label_37b5d8:
    // 0x37b5d8: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x37b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_37b5dc:
    // 0x37b5dc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37b5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_37b5e0:
    // 0x37b5e0: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x37b5e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_37b5e4:
    // 0x37b5e4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x37b5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_37b5e8:
    // 0x37b5e8: 0xc1035f6  jal         func_40D7D8
label_37b5ec:
    if (ctx->pc == 0x37B5ECu) {
        ctx->pc = 0x37B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B5E8u;
        // 0x37b5ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B5F0u;
        goto label_37b5f0;
    }
    ctx->pc = 0x37B5E8u;
    SET_GPR_U32(ctx, 31, 0x37B5F0u);
    ctx->pc = 0x37B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B5E8u;
    // 0x37b5ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37B5E8u, 0x37B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B5F0u;
label_37b5f0:
    // 0x37b5f0: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_37b5f4:
    if (ctx->pc == 0x37B5F4u) {
        ctx->pc = 0x37B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B5F0u;
        // 0x37b5f4: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B5F8u;
        goto label_37b5f8;
    }
    ctx->pc = 0x37B5F0u;
    {
        const bool branch_taken_0x37b5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B5F0u;
        // 0x37b5f4: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b5f0) {
            ctx->pc = 0x37B918u;
            goto label_37b918;
        }
    }
    ctx->pc = 0x37B5F8u;
label_37b5f8:
    // 0x37b5f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37b5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37b5fc:
    // 0x37b5fc: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x37b5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_37b600:
    // 0x37b600: 0x77182a  slt         $v1, $v1, $s7
    ctx->pc = 0x37b600u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_37b604:
    // 0x37b604: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x37b604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_37b608:
    // 0x37b608: 0x1060010a  beqz        $v1, . + 4 + (0x10A << 2)
label_37b60c:
    if (ctx->pc == 0x37B60Cu) {
        ctx->pc = 0x37B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B608u;
        // 0x37b60c: 0xad020004  sw          $v0, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B610u;
        goto label_37b610;
    }
    ctx->pc = 0x37B608u;
    {
        const bool branch_taken_0x37b608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B608u;
        // 0x37b60c: 0xad020004  sw          $v0, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b608) {
            ctx->pc = 0x37BA34u;
            goto label_37ba34;
        }
    }
    ctx->pc = 0x37B610u;
label_37b610:
    // 0x37b610: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x37b610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_37b614:
    // 0x37b614: 0x25060008  addiu       $a2, $t0, 0x8
    ctx->pc = 0x37b614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_37b618:
    // 0x37b618: 0x31023  negu        $v0, $v1
    ctx->pc = 0x37b618u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_37b61c:
    // 0x37b61c: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x37b61cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_37b620:
    // 0x37b620: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
label_37b624:
    if (ctx->pc == 0x37B624u) {
        ctx->pc = 0x37B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B620u;
        // 0x37b624: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B628u;
        goto label_37b628;
    }
    ctx->pc = 0x37B620u;
    {
        const bool branch_taken_0x37b620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B620u;
        // 0x37b624: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b620) {
            ctx->pc = 0x37B694u;
            goto label_37b694;
        }
    }
    ctx->pc = 0x37B628u;
label_37b628:
    // 0x37b628: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x37b628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_37b62c:
    // 0x37b62c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_37b630:
    if (ctx->pc == 0x37B630u) {
        ctx->pc = 0x37B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B62Cu;
        // 0x37b630: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B634u;
        goto label_37b634;
    }
    ctx->pc = 0x37B62Cu;
    {
        const bool branch_taken_0x37b62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B62Cu;
        // 0x37b630: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b62c) {
            ctx->pc = 0x37B674u;
            goto label_37b674;
        }
    }
    ctx->pc = 0x37B634u;
label_37b634:
    // 0x37b634: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_37b638:
    if (ctx->pc == 0x37B638u) {
        ctx->pc = 0x37B638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B634u;
        // 0x37b638: 0x8ca2fffc  lw          $v0, -0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B63Cu;
        goto label_37b63c;
    }
    ctx->pc = 0x37B634u;
    {
        const bool branch_taken_0x37b634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b634) {
            ctx->pc = 0x37B638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37B634u;
            // 0x37b638: 0x8ca2fffc  lw          $v0, -0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37B65Cu;
            goto label_37b65c;
        }
    }
    ctx->pc = 0x37B63Cu;
label_37b63c:
    // 0x37b63c: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x37b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_37b640:
    // 0x37b640: 0x2683fffe  addiu       $v1, $s4, -0x2
    ctx->pc = 0x37b640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
label_37b644:
    // 0x37b644: 0x8cc4fff8  lw          $a0, -0x8($a2)
    ctx->pc = 0x37b644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_37b648:
    // 0x37b648: 0x2505000c  addiu       $a1, $t0, 0xC
    ctx->pc = 0x37b648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_37b64c:
    // 0x37b64c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b650:
    // 0x37b650: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x37b650u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_37b654:
    // 0x37b654: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x37b654u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_37b658:
    // 0x37b658: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x37b658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_37b65c:
    // 0x37b65c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_37b660:
    // 0x37b660: 0x8ca4fff8  lw          $a0, -0x8($a1)
    ctx->pc = 0x37b660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_37b664:
    // 0x37b664: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b668:
    // 0x37b668: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x37b668u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_37b66c:
    // 0x37b66c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x37b66cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_37b670:
    // 0x37b670: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x37b670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_37b674:
    // 0x37b674: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x37b674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_37b678:
    // 0x37b678: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37b678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_37b67c:
    // 0x37b67c: 0x8ca4fff8  lw          $a0, -0x8($a1)
    ctx->pc = 0x37b67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_37b680:
    // 0x37b680: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b684:
    // 0x37b684: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x37b684u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_37b688:
    // 0x37b688: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x37b688u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_37b68c:
    // 0x37b68c: 0x106000e9  beqz        $v1, . + 4 + (0xE9 << 2)
label_37b690:
    if (ctx->pc == 0x37B690u) {
        ctx->pc = 0x37B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B68Cu;
        // 0x37b690: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B694u;
        goto label_37b694;
    }
    ctx->pc = 0x37B68Cu;
    {
        const bool branch_taken_0x37b68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B68Cu;
        // 0x37b690: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b68c) {
            ctx->pc = 0x37BA34u;
            goto label_37ba34;
        }
    }
    ctx->pc = 0x37B694u;
label_37b694:
    // 0x37b694: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x37b694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37b698:
    // 0x37b698: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x37b698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37b69c:
    // 0x37b69c: 0x0  nop
    ctx->pc = 0x37b69cu;
    // NOP
label_37b6a0:
    // 0x37b6a0: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x37b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_37b6a4:
    // 0x37b6a4: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x37b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_37b6a8:
    // 0x37b6a8: 0x8ce4fff8  lw          $a0, -0x8($a3)
    ctx->pc = 0x37b6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967288)));
label_37b6ac:
    // 0x37b6ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b6b0:
    // 0x37b6b0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x37b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_37b6b4:
    // 0x37b6b4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x37b6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_37b6b8:
    // 0x37b6b8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x37b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_37b6bc:
    // 0x37b6bc: 0x8ce4fffc  lw          $a0, -0x4($a3)
    ctx->pc = 0x37b6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967292)));
label_37b6c0:
    // 0x37b6c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b6c4:
    // 0x37b6c4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x37b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_37b6c8:
    // 0x37b6c8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x37b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_37b6cc:
    // 0x37b6cc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x37b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_37b6d0:
    // 0x37b6d0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x37b6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_37b6d4:
    // 0x37b6d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b6d8:
    // 0x37b6d8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x37b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_37b6dc:
    // 0x37b6dc: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x37b6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_37b6e0:
    // 0x37b6e0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x37b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_37b6e4:
    // 0x37b6e4: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x37b6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_37b6e8:
    // 0x37b6e8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x37b6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_37b6ec:
    // 0x37b6ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b6f0:
    // 0x37b6f0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x37b6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_37b6f4:
    // 0x37b6f4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x37b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_37b6f8:
    // 0x37b6f8: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x37b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_37b6fc:
    // 0x37b6fc: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_37b700:
    if (ctx->pc == 0x37B700u) {
        ctx->pc = 0x37B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B6FCu;
        // 0x37b700: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B704u;
        goto label_37b704;
    }
    ctx->pc = 0x37B6FCu;
    {
        const bool branch_taken_0x37b6fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B6FCu;
        // 0x37b700: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b6fc) {
            ctx->pc = 0x37B6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37b6a0;
        }
    }
    ctx->pc = 0x37B704u;
label_37b704:
    // 0x37b704: 0x100000cc  b           . + 4 + (0xCC << 2)
label_37b708:
    if (ctx->pc == 0x37B708u) {
        ctx->pc = 0x37B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B704u;
        // 0x37b708: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B70Cu;
        goto label_37b70c;
    }
    ctx->pc = 0x37B704u;
    {
        const bool branch_taken_0x37b704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B704u;
        // 0x37b708: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b704) {
            ctx->pc = 0x37BA38u;
            goto label_37ba38;
        }
    }
    ctx->pc = 0x37B70Cu;
label_37b70c:
    // 0x37b70c: 0x1e37c3  sra         $a2, $fp, 31
    ctx->pc = 0x37b70cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 30), 31));
label_37b710:
    // 0x37b710: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x37b710u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_37b714:
    // 0x37b714: 0x3c61023  subu        $v0, $fp, $a2
    ctx->pc = 0x37b714u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
label_37b718:
    // 0x37b718: 0x2603e880  addiu       $v1, $s0, -0x1780
    ctx->pc = 0x37b718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_37b71c:
    // 0x37b71c: 0x28843  sra         $s1, $v0, 1
    ctx->pc = 0x37b71cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 1));
label_37b720:
    // 0x37b720: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x37b720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_37b724:
    // 0x37b724: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x37b724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_37b728:
    // 0x37b728: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x37b728u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_37b72c:
    // 0x37b72c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37b72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37b730:
    // 0x37b730: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x37b730u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_37b734:
    // 0x37b734: 0x34a50102  ori         $a1, $a1, 0x102
    ctx->pc = 0x37b734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
label_37b738:
    // 0x37b738: 0x40f809  jalr        $v0
label_37b73c:
    if (ctx->pc == 0x37B73Cu) {
        ctx->pc = 0x37B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B738u;
        // 0x37b73c: 0xafa60078  sw          $a2, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B740u;
        goto label_37b740;
    }
    ctx->pc = 0x37B738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37B740u);
        ctx->pc = 0x37B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B738u;
        // 0x37b73c: 0xafa60078  sw          $a2, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B738u, 0x37B740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37B740u;
label_37b740:
    // 0x37b740: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37b740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37b744:
    // 0x37b744: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_37b748:
    if (ctx->pc == 0x37B748u) {
        ctx->pc = 0x37B748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B744u;
        // 0x37b748: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B74Cu;
        goto label_37b74c;
    }
    ctx->pc = 0x37B744u;
    {
        const bool branch_taken_0x37b744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x37B748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B744u;
        // 0x37b748: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b744) {
            ctx->pc = 0x37B778u;
            goto label_37b778;
        }
    }
    ctx->pc = 0x37B74Cu;
label_37b74c:
    // 0x37b74c: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x37b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_37b750:
    // 0x37b750: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37b750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_37b754:
    // 0x37b754: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x37b754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_37b758:
    // 0x37b758: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37b758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37b75c:
    // 0x37b75c: 0xc1035f6  jal         func_40D7D8
label_37b760:
    if (ctx->pc == 0x37B760u) {
        ctx->pc = 0x37B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B75Cu;
        // 0x37b760: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B764u;
        goto label_37b764;
    }
    ctx->pc = 0x37B75Cu;
    SET_GPR_U32(ctx, 31, 0x37B764u);
    ctx->pc = 0x37B760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B75Cu;
    // 0x37b760: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37B75Cu, 0x37B764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B764u;
label_37b764:
    // 0x37b764: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x37b764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_37b768:
    // 0x37b768: 0xc103628  jal         func_40D8A0
label_37b76c:
    if (ctx->pc == 0x37B76Cu) {
        ctx->pc = 0x37B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B768u;
        // 0x37b76c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B770u;
        goto label_37b770;
    }
    ctx->pc = 0x37B768u;
    SET_GPR_U32(ctx, 31, 0x37B770u);
    ctx->pc = 0x37B76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B768u;
    // 0x37b76c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37B768u, 0x37B770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B770u;
label_37b770:
    // 0x37b770: 0x10000045  b           . + 4 + (0x45 << 2)
label_37b774:
    if (ctx->pc == 0x37B774u) {
        ctx->pc = 0x37B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B770u;
        // 0x37b774: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B778u;
        goto label_37b778;
    }
    ctx->pc = 0x37B770u;
    {
        const bool branch_taken_0x37b770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B770u;
        // 0x37b774: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b770) {
            ctx->pc = 0x37B888u;
            goto label_37b888;
        }
    }
    ctx->pc = 0x37B778u;
label_37b778:
    // 0x37b778: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37b778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37b77c:
    // 0x37b77c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x37b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_37b780:
    // 0x37b780: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x37b780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_37b784:
    // 0x37b784: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x37b784u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_37b788:
    // 0x37b788: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
label_37b78c:
    if (ctx->pc == 0x37B78Cu) {
        ctx->pc = 0x37B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B788u;
        // 0x37b78c: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B790u;
        goto label_37b790;
    }
    ctx->pc = 0x37B788u;
    {
        const bool branch_taken_0x37b788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B788u;
        // 0x37b78c: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b788) {
            ctx->pc = 0x37B884u;
            goto label_37b884;
        }
    }
    ctx->pc = 0x37B790u;
label_37b790:
    // 0x37b790: 0x2623fffe  addiu       $v1, $s1, -0x2
    ctx->pc = 0x37b790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
label_37b794:
    // 0x37b794: 0x24870008  addiu       $a3, $a0, 0x8
    ctx->pc = 0x37b794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_37b798:
    // 0x37b798: 0x31023  negu        $v0, $v1
    ctx->pc = 0x37b798u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_37b79c:
    // 0x37b79c: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x37b79cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_37b7a0:
    // 0x37b7a0: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
label_37b7a4:
    if (ctx->pc == 0x37B7A4u) {
        ctx->pc = 0x37B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B7A0u;
        // 0x37b7a4: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B7A8u;
        goto label_37b7a8;
    }
    ctx->pc = 0x37B7A0u;
    {
        const bool branch_taken_0x37b7a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B7A0u;
        // 0x37b7a4: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b7a0) {
            ctx->pc = 0x37B814u;
            goto label_37b814;
        }
    }
    ctx->pc = 0x37B7A8u;
label_37b7a8:
    // 0x37b7a8: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x37b7a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_37b7ac:
    // 0x37b7ac: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_37b7b0:
    if (ctx->pc == 0x37B7B0u) {
        ctx->pc = 0x37B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B7ACu;
        // 0x37b7b0: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B7B4u;
        goto label_37b7b4;
    }
    ctx->pc = 0x37B7ACu;
    {
        const bool branch_taken_0x37b7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B7ACu;
        // 0x37b7b0: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b7ac) {
            ctx->pc = 0x37B7F4u;
            goto label_37b7f4;
        }
    }
    ctx->pc = 0x37B7B4u;
label_37b7b4:
    // 0x37b7b4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_37b7b8:
    if (ctx->pc == 0x37B7B8u) {
        ctx->pc = 0x37B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B7B4u;
        // 0x37b7b8: 0x8cc2fffc  lw          $v0, -0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B7BCu;
        goto label_37b7bc;
    }
    ctx->pc = 0x37B7B4u;
    {
        const bool branch_taken_0x37b7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b7b4) {
            ctx->pc = 0x37B7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37B7B4u;
            // 0x37b7b8: 0x8cc2fffc  lw          $v0, -0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37B7DCu;
            goto label_37b7dc;
        }
    }
    ctx->pc = 0x37B7BCu;
label_37b7bc:
    // 0x37b7bc: 0x8ce2fffc  lw          $v0, -0x4($a3)
    ctx->pc = 0x37b7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967292)));
label_37b7c0:
    // 0x37b7c0: 0x2623fffd  addiu       $v1, $s1, -0x3
    ctx->pc = 0x37b7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
label_37b7c4:
    // 0x37b7c4: 0x8ce5fff8  lw          $a1, -0x8($a3)
    ctx->pc = 0x37b7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967288)));
label_37b7c8:
    // 0x37b7c8: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x37b7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_37b7cc:
    // 0x37b7cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b7d0:
    // 0x37b7d0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x37b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_37b7d4:
    // 0x37b7d4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x37b7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_37b7d8:
    // 0x37b7d8: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x37b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_37b7dc:
    // 0x37b7dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_37b7e0:
    // 0x37b7e0: 0x8cc5fff8  lw          $a1, -0x8($a2)
    ctx->pc = 0x37b7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_37b7e4:
    // 0x37b7e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b7e8:
    // 0x37b7e8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x37b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_37b7ec:
    // 0x37b7ec: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x37b7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_37b7f0:
    // 0x37b7f0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x37b7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_37b7f4:
    // 0x37b7f4: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x37b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_37b7f8:
    // 0x37b7f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37b7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_37b7fc:
    // 0x37b7fc: 0x8cc5fff8  lw          $a1, -0x8($a2)
    ctx->pc = 0x37b7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_37b800:
    // 0x37b800: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b804:
    // 0x37b804: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x37b804u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_37b808:
    // 0x37b808: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x37b808u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_37b80c:
    // 0x37b80c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_37b810:
    if (ctx->pc == 0x37B810u) {
        ctx->pc = 0x37B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B80Cu;
        // 0x37b810: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B814u;
        goto label_37b814;
    }
    ctx->pc = 0x37B80Cu;
    {
        const bool branch_taken_0x37b80c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B80Cu;
        // 0x37b810: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b80c) {
            ctx->pc = 0x37B884u;
            goto label_37b884;
        }
    }
    ctx->pc = 0x37B814u;
label_37b814:
    // 0x37b814: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x37b814u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37b818:
    // 0x37b818: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x37b818u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37b81c:
    // 0x37b81c: 0x0  nop
    ctx->pc = 0x37b81cu;
    // NOP
label_37b820:
    // 0x37b820: 0x8ce2fffc  lw          $v0, -0x4($a3)
    ctx->pc = 0x37b820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967292)));
label_37b824:
    // 0x37b824: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x37b824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_37b828:
    // 0x37b828: 0x8d05fff8  lw          $a1, -0x8($t0)
    ctx->pc = 0x37b828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967288)));
label_37b82c:
    // 0x37b82c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b830:
    // 0x37b830: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x37b830u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_37b834:
    // 0x37b834: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x37b834u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_37b838:
    // 0x37b838: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x37b838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_37b83c:
    // 0x37b83c: 0x8d05fffc  lw          $a1, -0x4($t0)
    ctx->pc = 0x37b83cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967292)));
label_37b840:
    // 0x37b840: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b844:
    // 0x37b844: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x37b844u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_37b848:
    // 0x37b848: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x37b848u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_37b84c:
    // 0x37b84c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x37b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_37b850:
    // 0x37b850: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x37b850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_37b854:
    // 0x37b854: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b858:
    // 0x37b858: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x37b858u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_37b85c:
    // 0x37b85c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x37b85cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_37b860:
    // 0x37b860: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x37b860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_37b864:
    // 0x37b864: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x37b864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_37b868:
    // 0x37b868: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x37b868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_37b86c:
    // 0x37b86c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b870:
    // 0x37b870: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x37b870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_37b874:
    // 0x37b874: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x37b874u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_37b878:
    // 0x37b878: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x37b878u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_37b87c:
    // 0x37b87c: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_37b880:
    if (ctx->pc == 0x37B880u) {
        ctx->pc = 0x37B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B87Cu;
        // 0x37b880: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B884u;
        goto label_37b884;
    }
    ctx->pc = 0x37B87Cu;
    {
        const bool branch_taken_0x37b87c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B87Cu;
        // 0x37b880: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b87c) {
            ctx->pc = 0x37B820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37b820;
        }
    }
    ctx->pc = 0x37B884u;
label_37b884:
    // 0x37b884: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x37b884u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37b888:
    // 0x37b888: 0x12a00175  beqz        $s5, . + 4 + (0x175 << 2)
label_37b88c:
    if (ctx->pc == 0x37B88Cu) {
        ctx->pc = 0x37B88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B888u;
        // 0x37b88c: 0x8fa60078  lw          $a2, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B890u;
        goto label_37b890;
    }
    ctx->pc = 0x37B888u;
    {
        const bool branch_taken_0x37b888 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B888u;
        // 0x37b88c: 0x8fa60078  lw          $a2, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b888) {
            ctx->pc = 0x37BE60u;
            goto label_37be60;
        }
    }
    ctx->pc = 0x37B890u;
label_37b890:
    // 0x37b890: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x37b890u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_37b894:
    // 0x37b894: 0x24f0e880  addiu       $s0, $a3, -0x1780
    ctx->pc = 0x37b894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961280));
label_37b898:
    // 0x37b898: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37b898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_37b89c:
    // 0x37b89c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x37b89cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37b8a0:
    // 0x37b8a0: 0x3c61023  subu        $v0, $fp, $a2
    ctx->pc = 0x37b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
label_37b8a4:
    // 0x37b8a4: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x37b8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_37b8a8:
    // 0x37b8a8: 0x2a043  sra         $s4, $v0, 1
    ctx->pc = 0x37b8a8u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 1));
label_37b8ac:
    // 0x37b8ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x37b8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_37b8b0:
    // 0x37b8b0: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x37b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_37b8b4:
    // 0x37b8b4: 0x26970001  addiu       $s7, $s4, 0x1
    ctx->pc = 0x37b8b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_37b8b8:
    // 0x37b8b8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x37b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_37b8bc:
    // 0x37b8bc: 0x179080  sll         $s2, $s7, 2
    ctx->pc = 0x37b8bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_37b8c0:
    // 0x37b8c0: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x37b8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37b8c4:
    // 0x37b8c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37b8c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37b8c8:
    // 0x37b8c8: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x37b8c8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_37b8cc:
    // 0x37b8cc: 0x60f809  jalr        $v1
label_37b8d0:
    if (ctx->pc == 0x37B8D0u) {
        ctx->pc = 0x37B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B8CCu;
        // 0x37b8d0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B8D4u;
        goto label_37b8d4;
    }
    ctx->pc = 0x37B8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x37B8D4u);
        ctx->pc = 0x37B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B8CCu;
        // 0x37b8d0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B8CCu, 0x37B8D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37B8D4u;
label_37b8d4:
    // 0x37b8d4: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x37b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_37b8d8:
    // 0x37b8d8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x37b8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_37b8dc:
    // 0x37b8dc: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x37b8dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_37b8e0:
    // 0x37b8e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37b8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37b8e4:
    // 0x37b8e4: 0x40f809  jalr        $v0
label_37b8e8:
    if (ctx->pc == 0x37B8E8u) {
        ctx->pc = 0x37B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B8E4u;
        // 0x37b8e8: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B8ECu;
        goto label_37b8ec;
    }
    ctx->pc = 0x37B8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37B8ECu);
        ctx->pc = 0x37B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B8E4u;
        // 0x37b8e8: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B8E4u, 0x37B8ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37B8ECu;
label_37b8ec:
    // 0x37b8ec: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x37b8ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37b8f0:
    // 0x37b8f0: 0x1500000d  bnez        $t0, . + 4 + (0xD << 2)
label_37b8f4:
    if (ctx->pc == 0x37B8F4u) {
        ctx->pc = 0x37B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B8F0u;
        // 0x37b8f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B8F8u;
        goto label_37b8f8;
    }
    ctx->pc = 0x37B8F0u;
    {
        const bool branch_taken_0x37b8f0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x37B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B8F0u;
        // 0x37b8f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b8f0) {
            ctx->pc = 0x37B928u;
            goto label_37b928;
        }
    }
    ctx->pc = 0x37B8F8u;
label_37b8f8:
    // 0x37b8f8: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x37b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_37b8fc:
    // 0x37b8fc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37b8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_37b900:
    // 0x37b900: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x37b900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_37b904:
    // 0x37b904: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x37b904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_37b908:
    // 0x37b908: 0xc1035f6  jal         func_40D7D8
label_37b90c:
    if (ctx->pc == 0x37B90Cu) {
        ctx->pc = 0x37B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B908u;
        // 0x37b90c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B910u;
        goto label_37b910;
    }
    ctx->pc = 0x37B908u;
    SET_GPR_U32(ctx, 31, 0x37B910u);
    ctx->pc = 0x37B90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B908u;
    // 0x37b90c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37B908u, 0x37B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B910u;
label_37b910:
    // 0x37b910: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x37b910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_37b914:
    // 0x37b914: 0x0  nop
    ctx->pc = 0x37b914u;
    // NOP
label_37b918:
    // 0x37b918: 0xc103628  jal         func_40D8A0
label_37b91c:
    if (ctx->pc == 0x37B91Cu) {
        ctx->pc = 0x37B91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B918u;
        // 0x37b91c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B920u;
        goto label_37b920;
    }
    ctx->pc = 0x37B918u;
    SET_GPR_U32(ctx, 31, 0x37B920u);
    ctx->pc = 0x37B91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B918u;
    // 0x37b91c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37B918u, 0x37B920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B920u;
label_37b920:
    // 0x37b920: 0x10000045  b           . + 4 + (0x45 << 2)
label_37b924:
    if (ctx->pc == 0x37B924u) {
        ctx->pc = 0x37B928u;
        goto label_37b928;
    }
    ctx->pc = 0x37B920u;
    {
        const bool branch_taken_0x37b920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b920) {
            ctx->pc = 0x37BA38u;
            goto label_37ba38;
        }
    }
    ctx->pc = 0x37B928u;
label_37b928:
    // 0x37b928: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37b928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37b92c:
    // 0x37b92c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x37b92cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_37b930:
    // 0x37b930: 0x77182a  slt         $v1, $v1, $s7
    ctx->pc = 0x37b930u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_37b934:
    // 0x37b934: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37b934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37b938:
    // 0x37b938: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
label_37b93c:
    if (ctx->pc == 0x37B93Cu) {
        ctx->pc = 0x37B93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B938u;
        // 0x37b93c: 0xad020004  sw          $v0, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B940u;
        goto label_37b940;
    }
    ctx->pc = 0x37B938u;
    {
        const bool branch_taken_0x37b938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B938u;
        // 0x37b93c: 0xad020004  sw          $v0, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b938) {
            ctx->pc = 0x37BA34u;
            goto label_37ba34;
        }
    }
    ctx->pc = 0x37B940u;
label_37b940:
    // 0x37b940: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x37b940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_37b944:
    // 0x37b944: 0x25060008  addiu       $a2, $t0, 0x8
    ctx->pc = 0x37b944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_37b948:
    // 0x37b948: 0x31023  negu        $v0, $v1
    ctx->pc = 0x37b948u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_37b94c:
    // 0x37b94c: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x37b94cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_37b950:
    // 0x37b950: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
label_37b954:
    if (ctx->pc == 0x37B954u) {
        ctx->pc = 0x37B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B950u;
        // 0x37b954: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B958u;
        goto label_37b958;
    }
    ctx->pc = 0x37B950u;
    {
        const bool branch_taken_0x37b950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B950u;
        // 0x37b954: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b950) {
            ctx->pc = 0x37B9C4u;
            goto label_37b9c4;
        }
    }
    ctx->pc = 0x37B958u;
label_37b958:
    // 0x37b958: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x37b958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_37b95c:
    // 0x37b95c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_37b960:
    if (ctx->pc == 0x37B960u) {
        ctx->pc = 0x37B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B95Cu;
        // 0x37b960: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B964u;
        goto label_37b964;
    }
    ctx->pc = 0x37B95Cu;
    {
        const bool branch_taken_0x37b95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B95Cu;
        // 0x37b960: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b95c) {
            ctx->pc = 0x37B9A4u;
            goto label_37b9a4;
        }
    }
    ctx->pc = 0x37B964u;
label_37b964:
    // 0x37b964: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_37b968:
    if (ctx->pc == 0x37B968u) {
        ctx->pc = 0x37B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B964u;
        // 0x37b968: 0x8ca2fffc  lw          $v0, -0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B96Cu;
        goto label_37b96c;
    }
    ctx->pc = 0x37B964u;
    {
        const bool branch_taken_0x37b964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b964) {
            ctx->pc = 0x37B968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37B964u;
            // 0x37b968: 0x8ca2fffc  lw          $v0, -0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37B98Cu;
            goto label_37b98c;
        }
    }
    ctx->pc = 0x37B96Cu;
label_37b96c:
    // 0x37b96c: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x37b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_37b970:
    // 0x37b970: 0x2683fffe  addiu       $v1, $s4, -0x2
    ctx->pc = 0x37b970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
label_37b974:
    // 0x37b974: 0x8cc4fff8  lw          $a0, -0x8($a2)
    ctx->pc = 0x37b974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_37b978:
    // 0x37b978: 0x2505000c  addiu       $a1, $t0, 0xC
    ctx->pc = 0x37b978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_37b97c:
    // 0x37b97c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b980:
    // 0x37b980: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x37b980u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_37b984:
    // 0x37b984: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x37b984u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_37b988:
    // 0x37b988: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x37b988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_37b98c:
    // 0x37b98c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37b98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_37b990:
    // 0x37b990: 0x8ca4fff8  lw          $a0, -0x8($a1)
    ctx->pc = 0x37b990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_37b994:
    // 0x37b994: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b998:
    // 0x37b998: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x37b998u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_37b99c:
    // 0x37b99c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x37b99cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_37b9a0:
    // 0x37b9a0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x37b9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_37b9a4:
    // 0x37b9a4: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x37b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_37b9a8:
    // 0x37b9a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37b9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_37b9ac:
    // 0x37b9ac: 0x8ca4fff8  lw          $a0, -0x8($a1)
    ctx->pc = 0x37b9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_37b9b0:
    // 0x37b9b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b9b4:
    // 0x37b9b4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x37b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_37b9b8:
    // 0x37b9b8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x37b9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_37b9bc:
    // 0x37b9bc: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_37b9c0:
    if (ctx->pc == 0x37B9C0u) {
        ctx->pc = 0x37B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B9BCu;
        // 0x37b9c0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B9C4u;
        goto label_37b9c4;
    }
    ctx->pc = 0x37B9BCu;
    {
        const bool branch_taken_0x37b9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B9BCu;
        // 0x37b9c0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b9bc) {
            ctx->pc = 0x37BA34u;
            goto label_37ba34;
        }
    }
    ctx->pc = 0x37B9C4u;
label_37b9c4:
    // 0x37b9c4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x37b9c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37b9c8:
    // 0x37b9c8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x37b9c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37b9cc:
    // 0x37b9cc: 0x0  nop
    ctx->pc = 0x37b9ccu;
    // NOP
label_37b9d0:
    // 0x37b9d0: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x37b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_37b9d4:
    // 0x37b9d4: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x37b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_37b9d8:
    // 0x37b9d8: 0x8ce4fff8  lw          $a0, -0x8($a3)
    ctx->pc = 0x37b9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967288)));
label_37b9dc:
    // 0x37b9dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b9e0:
    // 0x37b9e0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x37b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_37b9e4:
    // 0x37b9e4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x37b9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_37b9e8:
    // 0x37b9e8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x37b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_37b9ec:
    // 0x37b9ec: 0x8ce4fffc  lw          $a0, -0x4($a3)
    ctx->pc = 0x37b9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967292)));
label_37b9f0:
    // 0x37b9f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b9f4:
    // 0x37b9f4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x37b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_37b9f8:
    // 0x37b9f8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x37b9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_37b9fc:
    // 0x37b9fc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x37b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_37ba00:
    // 0x37ba00: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x37ba00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_37ba04:
    // 0x37ba04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37ba08:
    // 0x37ba08: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x37ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_37ba0c:
    // 0x37ba0c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x37ba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_37ba10:
    // 0x37ba10: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x37ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_37ba14:
    // 0x37ba14: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x37ba14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_37ba18:
    // 0x37ba18: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x37ba18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_37ba1c:
    // 0x37ba1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37ba20:
    // 0x37ba20: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x37ba20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_37ba24:
    // 0x37ba24: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x37ba24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_37ba28:
    // 0x37ba28: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x37ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_37ba2c:
    // 0x37ba2c: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_37ba30:
    if (ctx->pc == 0x37BA30u) {
        ctx->pc = 0x37BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BA2Cu;
        // 0x37ba30: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BA34u;
        goto label_37ba34;
    }
    ctx->pc = 0x37BA2Cu;
    {
        const bool branch_taken_0x37ba2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BA2Cu;
        // 0x37ba30: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ba2c) {
            ctx->pc = 0x37B9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37b9d0;
        }
    }
    ctx->pc = 0x37BA34u;
label_37ba34:
    // 0x37ba34: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x37ba34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_37ba38:
    // 0x37ba38: 0x12a00109  beqz        $s5, . + 4 + (0x109 << 2)
label_37ba3c:
    if (ctx->pc == 0x37BA3Cu) {
        ctx->pc = 0x37BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BA38u;
        // 0x37ba3c: 0x8fa80078  lw          $t0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BA40u;
        goto label_37ba40;
    }
    ctx->pc = 0x37BA38u;
    {
        const bool branch_taken_0x37ba38 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BA38u;
        // 0x37ba3c: 0x8fa80078  lw          $t0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ba38) {
            ctx->pc = 0x37BE60u;
            goto label_37be60;
        }
    }
    ctx->pc = 0x37BA40u;
label_37ba40:
    // 0x37ba40: 0x3c81023  subu        $v0, $fp, $t0
    ctx->pc = 0x37ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
label_37ba44:
    // 0x37ba44: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x37ba44u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
label_37ba48:
    // 0x37ba48: 0x24c8ffff  addiu       $t0, $a2, -0x1
    ctx->pc = 0x37ba48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_37ba4c:
    // 0x37ba4c: 0x500002d  bltz        $t0, . + 4 + (0x2D << 2)
label_37ba50:
    if (ctx->pc == 0x37BA50u) {
        ctx->pc = 0x37BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BA4Cu;
        // 0x37ba50: 0x81827  nor         $v1, $zero, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BA54u;
        goto label_37ba54;
    }
    ctx->pc = 0x37BA4Cu;
    {
        const bool branch_taken_0x37ba4c = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x37BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BA4Cu;
        // 0x37ba50: 0x81827  nor         $v1, $zero, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ba4c) {
            ctx->pc = 0x37BB04u;
            goto label_37bb04;
        }
    }
    ctx->pc = 0x37BA54u;
label_37ba54:
    // 0x37ba54: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x37ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_37ba58:
    // 0x37ba58: 0x552821  addu        $a1, $v0, $s5
    ctx->pc = 0x37ba58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_37ba5c:
    // 0x37ba5c: 0x30640007  andi        $a0, $v1, 0x7
    ctx->pc = 0x37ba5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_37ba60:
    // 0x37ba60: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_37ba64:
    if (ctx->pc == 0x37BA64u) {
        ctx->pc = 0x37BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BA60u;
        // 0x37ba64: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BA68u;
        goto label_37ba68;
    }
    ctx->pc = 0x37BA60u;
    {
        const bool branch_taken_0x37ba60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BA60u;
        // 0x37ba64: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ba60) {
            ctx->pc = 0x37BAC4u;
            goto label_37bac4;
        }
    }
    ctx->pc = 0x37BA68u;
label_37ba68:
    // 0x37ba68: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x37ba68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
label_37ba6c:
    // 0x37ba6c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_37ba70:
    if (ctx->pc == 0x37BA70u) {
        ctx->pc = 0x37BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BA6Cu;
        // 0x37ba70: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BA74u;
        goto label_37ba74;
    }
    ctx->pc = 0x37BA6Cu;
    {
        const bool branch_taken_0x37ba6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BA6Cu;
        // 0x37ba70: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ba6c) {
            ctx->pc = 0x37BAACu;
            goto label_37baac;
        }
    }
    ctx->pc = 0x37BA74u;
label_37ba74:
    // 0x37ba74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_37ba78:
    if (ctx->pc == 0x37BA78u) {
        ctx->pc = 0x37BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BA74u;
        // 0x37ba78: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BA7Cu;
        goto label_37ba7c;
    }
    ctx->pc = 0x37BA74u;
    {
        const bool branch_taken_0x37ba74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BA74u;
        // 0x37ba78: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ba74) {
            ctx->pc = 0x37BA98u;
            goto label_37ba98;
        }
    }
    ctx->pc = 0x37BA7Cu;
label_37ba7c:
    // 0x37ba7c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_37ba80:
    if (ctx->pc == 0x37BA80u) {
        ctx->pc = 0x37BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BA7Cu;
        // 0x37ba80: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BA84u;
        goto label_37ba84;
    }
    ctx->pc = 0x37BA7Cu;
    {
        const bool branch_taken_0x37ba7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37ba7c) {
            ctx->pc = 0x37BA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37BA7Cu;
            // 0x37ba80: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37BAC8u;
            goto label_37bac8;
        }
    }
    ctx->pc = 0x37BA84u;
label_37ba84:
    // 0x37ba84: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x37ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_37ba88:
    // 0x37ba88: 0x24a3fff8  addiu       $v1, $a1, -0x8
    ctx->pc = 0x37ba88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
label_37ba8c:
    // 0x37ba8c: 0x24c8fffd  addiu       $t0, $a2, -0x3
    ctx->pc = 0x37ba8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
label_37ba90:
    // 0x37ba90: 0x21023  negu        $v0, $v0
    ctx->pc = 0x37ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_37ba94:
    // 0x37ba94: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x37ba94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_37ba98:
    // 0x37ba98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x37ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37ba9c:
    // 0x37ba9c: 0x2508fffe  addiu       $t0, $t0, -0x2
    ctx->pc = 0x37ba9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
label_37baa0:
    // 0x37baa0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x37baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_37baa4:
    // 0x37baa4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x37baa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_37baa8:
    // 0x37baa8: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x37baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_37baac:
    // 0x37baac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x37baacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37bab0:
    // 0x37bab0: 0x2508fffe  addiu       $t0, $t0, -0x2
    ctx->pc = 0x37bab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
label_37bab4:
    // 0x37bab4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x37bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_37bab8:
    // 0x37bab8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x37bab8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_37babc:
    // 0x37babc: 0x5000011  bltz        $t0, . + 4 + (0x11 << 2)
label_37bac0:
    if (ctx->pc == 0x37BAC0u) {
        ctx->pc = 0x37BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BABCu;
        // 0x37bac0: 0x2463fff8  addiu       $v1, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BAC4u;
        goto label_37bac4;
    }
    ctx->pc = 0x37BABCu;
    {
        const bool branch_taken_0x37babc = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x37BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BABCu;
        // 0x37bac0: 0x2463fff8  addiu       $v1, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37babc) {
            ctx->pc = 0x37BB04u;
            goto label_37bb04;
        }
    }
    ctx->pc = 0x37BAC4u;
label_37bac4:
    // 0x37bac4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x37bac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_37bac8:
    // 0x37bac8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x37bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_37bacc:
    // 0x37bacc: 0x2508fff8  addiu       $t0, $t0, -0x8
    ctx->pc = 0x37baccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
label_37bad0:
    // 0x37bad0: 0x8cc4fff8  lw          $a0, -0x8($a2)
    ctx->pc = 0x37bad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_37bad4:
    // 0x37bad4: 0x8cc5fff0  lw          $a1, -0x10($a2)
    ctx->pc = 0x37bad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967280)));
label_37bad8:
    // 0x37bad8: 0x31823  negu        $v1, $v1
    ctx->pc = 0x37bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_37badc:
    // 0x37badc: 0x8cc2ffe8  lw          $v0, -0x18($a2)
    ctx->pc = 0x37badcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967272)));
label_37bae0:
    // 0x37bae0: 0x42023  negu        $a0, $a0
    ctx->pc = 0x37bae0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_37bae4:
    // 0x37bae4: 0x52823  negu        $a1, $a1
    ctx->pc = 0x37bae4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_37bae8:
    // 0x37bae8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x37bae8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_37baec:
    // 0x37baec: 0x21023  negu        $v0, $v0
    ctx->pc = 0x37baecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_37baf0:
    // 0x37baf0: 0xacc4fff8  sw          $a0, -0x8($a2)
    ctx->pc = 0x37baf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967288), GPR_U32(ctx, 4));
label_37baf4:
    // 0x37baf4: 0xacc5fff0  sw          $a1, -0x10($a2)
    ctx->pc = 0x37baf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 5));
label_37baf8:
    // 0x37baf8: 0xacc2ffe8  sw          $v0, -0x18($a2)
    ctx->pc = 0x37baf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967272), GPR_U32(ctx, 2));
label_37bafc:
    // 0x37bafc: 0x501fff2  bgez        $t0, . + 4 + (-0xE << 2)
label_37bb00:
    if (ctx->pc == 0x37BB00u) {
        ctx->pc = 0x37BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BAFCu;
        // 0x37bb00: 0x24c6ffe0  addiu       $a2, $a2, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BB04u;
        goto label_37bb04;
    }
    ctx->pc = 0x37BAFCu;
    {
        const bool branch_taken_0x37bafc = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x37BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BAFCu;
        // 0x37bb00: 0x24c6ffe0  addiu       $a2, $a2, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bafc) {
            ctx->pc = 0x37BAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37bac8;
        }
    }
    ctx->pc = 0x37BB04u;
label_37bb04:
    // 0x37bb04: 0x1a6000b2  blez        $s3, . + 4 + (0xB2 << 2)
label_37bb08:
    if (ctx->pc == 0x37BB08u) {
        ctx->pc = 0x37BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BB04u;
        // 0x37bb08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BB0Cu;
        goto label_37bb0c;
    }
    ctx->pc = 0x37BB04u;
    {
        const bool branch_taken_0x37bb04 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x37BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BB04u;
        // 0x37bb08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bb04) {
            ctx->pc = 0x37BDD0u;
            goto label_37bdd0;
        }
    }
    ctx->pc = 0x37BB0Cu;
label_37bb0c:
    // 0x37bb0c: 0x8fa90078  lw          $t1, 0x78($sp)
    ctx->pc = 0x37bb0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_37bb10:
    // 0x37bb10: 0x27c30001  addiu       $v1, $fp, 0x1
    ctx->pc = 0x37bb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_37bb14:
    // 0x37bb14: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x37bb14u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_37bb18:
    // 0x37bb18: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x37bb18u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37bb1c:
    // 0x37bb1c: 0x3c91023  subu        $v0, $fp, $t1
    ctx->pc = 0x37bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 9)));
label_37bb20:
    // 0x37bb20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_37bb24:
    // 0x37bb24: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x37bb24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_37bb28:
    // 0x37bb28: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x37bb28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_37bb2c:
    // 0x37bb2c: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x37bb2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_37bb30:
    // 0x37bb30: 0x38043  sra         $s0, $v1, 1
    ctx->pc = 0x37bb30u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 1));
label_37bb34:
    // 0x37bb34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37bb34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37bb38:
    // 0x37bb38: 0x240e000c  addiu       $t6, $zero, 0xC
    ctx->pc = 0x37bb38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37bb3c:
    // 0x37bb3c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x37bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_37bb40:
    // 0x37bb40: 0x1e7fc3  sra         $t7, $fp, 31
    ctx->pc = 0x37bb40u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 30), 31));
label_37bb44:
    // 0x37bb44: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x37bb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_37bb48:
    // 0x37bb48: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x37bb48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
label_37bb4c:
    // 0x37bb4c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x37bb4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37bb50:
    // 0x37bb50: 0x113001a  div         $zero, $t0, $s3
    ctx->pc = 0x37bb50u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_37bb54:
    // 0x37bb54: 0x526d0001  beql        $s3, $t5, . + 4 + (0x1 << 2)
label_37bb58:
    if (ctx->pc == 0x37BB58u) {
        ctx->pc = 0x37BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BB54u;
        // 0x37bb58: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BB5Cu;
        goto label_37bb5c;
    }
    ctx->pc = 0x37BB54u;
    {
        const bool branch_taken_0x37bb54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 13));
        if (branch_taken_0x37bb54) {
            ctx->pc = 0x37BB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37BB54u;
            // 0x37bb58: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37BB5Cu;
            goto label_37bb5c;
        }
    }
    ctx->pc = 0x37BB5Cu;
label_37bb5c:
    // 0x37bb5c: 0x1010  mfhi        $v0
    ctx->pc = 0x37bb5cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_37bb60:
    // 0x37bb60: 0x4e1818  mult        $v1, $v0, $t6
    ctx->pc = 0x37bb60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_37bb64:
    // 0x37bb64: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x37bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_37bb68:
    // 0x37bb68: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x37bb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37bb6c:
    // 0x37bb6c: 0x46070082  mul.s       $f2, $f0, $f7
    ctx->pc = 0x37bb6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_37bb70:
    // 0x37bb70: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x37bb70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37bb74:
    // 0x37bb74: 0x526d0001  beql        $s3, $t5, . + 4 + (0x1 << 2)
label_37bb78:
    if (ctx->pc == 0x37BB78u) {
        ctx->pc = 0x37BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BB74u;
        // 0x37bb78: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BB7Cu;
        goto label_37bb7c;
    }
    ctx->pc = 0x37BB74u;
    {
        const bool branch_taken_0x37bb74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 13));
        if (branch_taken_0x37bb74) {
            ctx->pc = 0x37BB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37BB74u;
            // 0x37bb78: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37BB7Cu;
            goto label_37bb7c;
        }
    }
    ctx->pc = 0x37BB7Cu;
label_37bb7c:
    // 0x37bb7c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x37bb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37bb80:
    // 0x37bb80: 0x46070042  mul.s       $f1, $f0, $f7
    ctx->pc = 0x37bb80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_37bb84:
    // 0x37bb84: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x37bb84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37bb88:
    // 0x37bb88: 0x526d0001  beql        $s3, $t5, . + 4 + (0x1 << 2)
label_37bb8c:
    if (ctx->pc == 0x37BB8Cu) {
        ctx->pc = 0x37BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BB88u;
        // 0x37bb8c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BB90u;
        goto label_37bb90;
    }
    ctx->pc = 0x37BB88u;
    {
        const bool branch_taken_0x37bb88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 13));
        if (branch_taken_0x37bb88) {
            ctx->pc = 0x37BB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37BB88u;
            // 0x37bb8c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37BB90u;
            goto label_37bb90;
        }
    }
    ctx->pc = 0x37BB90u;
label_37bb90:
    // 0x37bb90: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x37bb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37bb94:
    // 0x37bb94: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x37bb94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_37bb98:
    // 0x37bb98: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x37bb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_37bb9c:
    // 0x37bb9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37bb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37bba0:
    // 0x37bba0: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x37bba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_37bba4:
    // 0x37bba4: 0xb4102a  slt         $v0, $a1, $s4
    ctx->pc = 0x37bba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_37bba8:
    // 0x37bba8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_37bbac:
    if (ctx->pc == 0x37BBACu) {
        ctx->pc = 0x37BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BBA8u;
        // 0x37bbac: 0x250c0001  addiu       $t4, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BBB0u;
        goto label_37bbb0;
    }
    ctx->pc = 0x37BBA8u;
    {
        const bool branch_taken_0x37bba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BBA8u;
        // 0x37bbac: 0x250c0001  addiu       $t4, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bba8) {
            ctx->pc = 0x37BC50u;
            goto label_37bc50;
        }
    }
    ctx->pc = 0x37BBB0u;
label_37bbb0:
    // 0x37bbb0: 0x46001186  mov.s       $f6, $f2
    ctx->pc = 0x37bbb0u;
    ctx->f[6] = FPU_MOV_S(ctx->f[2]);
label_37bbb4:
    // 0x37bbb4: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x37bbb4u;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
label_37bbb8:
    // 0x37bbb8: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x37bbb8u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
label_37bbbc:
    // 0x37bbbc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x37bbbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37bbc0:
    // 0x37bbc0: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x37bbc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37bbc4:
    // 0x37bbc4: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x37bbc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_37bbc8:
    // 0x37bbc8: 0xf3001a  div         $zero, $a3, $s3
    ctx->pc = 0x37bbc8u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_37bbcc:
    // 0x37bbcc: 0x526a0001  beql        $s3, $t2, . + 4 + (0x1 << 2)
label_37bbd0:
    if (ctx->pc == 0x37BBD0u) {
        ctx->pc = 0x37BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BBCCu;
        // 0x37bbd0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BBD4u;
        goto label_37bbd4;
    }
    ctx->pc = 0x37BBCCu;
    {
        const bool branch_taken_0x37bbcc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 10));
        if (branch_taken_0x37bbcc) {
            ctx->pc = 0x37BBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37BBCCu;
            // 0x37bbd0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37BBD4u;
            goto label_37bbd4;
        }
    }
    ctx->pc = 0x37BBD4u;
label_37bbd4:
    // 0x37bbd4: 0x1810  mfhi        $v1
    ctx->pc = 0x37bbd4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_37bbd8:
    // 0x37bbd8: 0x691018  mult        $v0, $v1, $t1
    ctx->pc = 0x37bbd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_37bbdc:
    // 0x37bbdc: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x37bbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_37bbe0:
    // 0x37bbe0: 0x627c2  srl         $a0, $a2, 31
    ctx->pc = 0x37bbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_37bbe4:
    // 0x37bbe4: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x37bbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_37bbe8:
    // 0x37bbe8: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x37bbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37bbec:
    // 0x37bbec: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x37bbecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_37bbf0:
    // 0x37bbf0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x37bbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37bbf4:
    // 0x37bbf4: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x37bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_37bbf8:
    // 0x37bbf8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x37bbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37bbfc:
    // 0x37bbfc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37bc00:
    // 0x37bc00: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x37bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_37bc04:
    // 0x37bc04: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x37bc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37bc08:
    // 0x37bc08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37bc08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37bc0c:
    // 0x37bc0c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x37bc0cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_37bc10:
    // 0x37bc10: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x37bc10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_37bc14:
    // 0x37bc14: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x37bc14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_37bc18:
    // 0x37bc18: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x37bc18u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_37bc1c:
    // 0x37bc1c: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x37bc1cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
label_37bc20:
    // 0x37bc20: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x37bc20u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_37bc24:
    // 0x37bc24: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x37bc24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_37bc28:
    // 0x37bc28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x37bc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_37bc2c:
    // 0x37bc2c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x37bc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_37bc30:
    // 0x37bc30: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x37bc30u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_37bc34:
    // 0x37bc34: 0x1480ffe4  bnez        $a0, . + 4 + (-0x1C << 2)
label_37bc38:
    if (ctx->pc == 0x37BC38u) {
        ctx->pc = 0x37BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BC34u;
        // 0x37bc38: 0x8fa60078  lw          $a2, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BC3Cu;
        goto label_37bc3c;
    }
    ctx->pc = 0x37BC34u;
    {
        const bool branch_taken_0x37bc34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BC34u;
        // 0x37bc38: 0x8fa60078  lw          $a2, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bc34) {
            ctx->pc = 0x37BBC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37bbc8;
        }
    }
    ctx->pc = 0x37BC3Cu;
label_37bc3c:
    // 0x37bc3c: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x37bc3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_37bc40:
    // 0x37bc40: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x37bc40u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37bc44:
    // 0x37bc44: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x37bc44u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37bc48:
    // 0x37bc48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37bc48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37bc4c:
    // 0x37bc4c: 0x0  nop
    ctx->pc = 0x37bc4cu;
    // NOP
label_37bc50:
    // 0x37bc50: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x37bc50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_37bc54:
    // 0x37bc54: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_37bc58:
    if (ctx->pc == 0x37BC58u) {
        ctx->pc = 0x37BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BC54u;
        // 0x37bc58: 0x123843  sra         $a3, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BC5Cu;
        goto label_37bc5c;
    }
    ctx->pc = 0x37BC54u;
    {
        const bool branch_taken_0x37bc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BC54u;
        // 0x37bc58: 0x123843  sra         $a3, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bc54) {
            ctx->pc = 0x37BD8Cu;
            goto label_37bd8c;
        }
    }
    ctx->pc = 0x37BC5Cu;
label_37bc5c:
    // 0x37bc5c: 0x2683021  addu        $a2, $s3, $t0
    ctx->pc = 0x37bc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
label_37bc60:
    // 0x37bc60: 0x24e5ffff  addiu       $a1, $a3, -0x1
    ctx->pc = 0x37bc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_37bc64:
    // 0x37bc64: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x37bc64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37bc68:
    // 0x37bc68: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x37bc68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37bc6c:
    // 0x37bc6c: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x37bc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_37bc70:
    // 0x37bc70: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x37bc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_37bc74:
    // 0x37bc74: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x37bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_37bc78:
    // 0x37bc78: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x37bc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37bc7c:
    // 0x37bc7c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x37bc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_37bc80:
    // 0x37bc80: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_37bc84:
    if (ctx->pc == 0x37BC84u) {
        ctx->pc = 0x37BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BC80u;
        // 0x37bc84: 0x2564fffc  addiu       $a0, $t3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BC88u;
        goto label_37bc88;
    }
    ctx->pc = 0x37BC80u;
    {
        const bool branch_taken_0x37bc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BC80u;
        // 0x37bc84: 0x2564fffc  addiu       $a0, $t3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bc80) {
            ctx->pc = 0x37BCE0u;
            goto label_37bce0;
        }
    }
    ctx->pc = 0x37BC88u;
label_37bc88:
    // 0x37bc88: 0x73001a  div         $zero, $v1, $s3
    ctx->pc = 0x37bc88u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_37bc8c:
    // 0x37bc8c: 0x526a0001  beql        $s3, $t2, . + 4 + (0x1 << 2)
label_37bc90:
    if (ctx->pc == 0x37BC90u) {
        ctx->pc = 0x37BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BC8Cu;
        // 0x37bc90: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BC94u;
        goto label_37bc94;
    }
    ctx->pc = 0x37BC8Cu;
    {
        const bool branch_taken_0x37bc8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 10));
        if (branch_taken_0x37bc8c) {
            ctx->pc = 0x37BC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37BC8Cu;
            // 0x37bc90: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37BC94u;
            goto label_37bc94;
        }
    }
    ctx->pc = 0x37BC94u;
label_37bc94:
    // 0x37bc94: 0x1010  mfhi        $v0
    ctx->pc = 0x37bc94u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_37bc98:
    // 0x37bc98: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x37bc98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_37bc9c:
    // 0x37bc9c: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x37bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_37bca0:
    // 0x37bca0: 0xc560fffc  lwc1        $f0, -0x4($t3)
    ctx->pc = 0x37bca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37bca4:
    // 0x37bca4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37bca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37bca8:
    // 0x37bca8: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x37bca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37bcac:
    // 0x37bcac: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x37bcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37bcb0:
    // 0x37bcb0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x37bcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37bcb4:
    // 0x37bcb4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x37bcb4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_37bcb8:
    // 0x37bcb8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x37bcb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_37bcbc:
    // 0x37bcbc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x37bcbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_37bcc0:
    // 0x37bcc0: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x37bcc0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_37bcc4:
    // 0x37bcc4: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x37bcc4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
label_37bcc8:
    // 0x37bcc8: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x37bcc8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_37bccc:
    // 0x37bccc: 0x2564fff8  addiu       $a0, $t3, -0x8
    ctx->pc = 0x37bcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967288));
label_37bcd0:
    // 0x37bcd0: 0x24e5fffe  addiu       $a1, $a3, -0x2
    ctx->pc = 0x37bcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
label_37bcd4:
    // 0x37bcd4: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
label_37bcd8:
    if (ctx->pc == 0x37BCD8u) {
        ctx->pc = 0x37BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BCD4u;
        // 0x37bcd8: 0x24c3fffe  addiu       $v1, $a2, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BCDCu;
        goto label_37bcdc;
    }
    ctx->pc = 0x37BCD4u;
    {
        const bool branch_taken_0x37bcd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BCD4u;
        // 0x37bcd8: 0x24c3fffe  addiu       $v1, $a2, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bcd4) {
            ctx->pc = 0x37BD80u;
            goto label_37bd80;
        }
    }
    ctx->pc = 0x37BCDCu;
label_37bcdc:
    // 0x37bcdc: 0x0  nop
    ctx->pc = 0x37bcdcu;
    // NOP
label_37bce0:
    // 0x37bce0: 0x73001a  div         $zero, $v1, $s3
    ctx->pc = 0x37bce0u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_37bce4:
    // 0x37bce4: 0x526a0001  beql        $s3, $t2, . + 4 + (0x1 << 2)
label_37bce8:
    if (ctx->pc == 0x37BCE8u) {
        ctx->pc = 0x37BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BCE4u;
        // 0x37bce8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BCECu;
        goto label_37bcec;
    }
    ctx->pc = 0x37BCE4u;
    {
        const bool branch_taken_0x37bce4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 10));
        if (branch_taken_0x37bce4) {
            ctx->pc = 0x37BCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37BCE4u;
            // 0x37bce8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37BCECu;
            goto label_37bcec;
        }
    }
    ctx->pc = 0x37BCECu;
label_37bcec:
    // 0x37bcec: 0x1010  mfhi        $v0
    ctx->pc = 0x37bcecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_37bcf0:
    // 0x37bcf0: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x37bcf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_37bcf4:
    // 0x37bcf4: 0xd61021  addu        $v0, $a2, $s6
    ctx->pc = 0x37bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
label_37bcf8:
    // 0x37bcf8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x37bcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37bcfc:
    // 0x37bcfc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37bcfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37bd00:
    // 0x37bd00: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x37bd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37bd04:
    // 0x37bd04: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x37bd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37bd08:
    // 0x37bd08: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x37bd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37bd0c:
    // 0x37bd0c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x37bd0cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_37bd10:
    // 0x37bd10: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x37bd10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_37bd14:
    // 0x37bd14: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x37bd14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_37bd18:
    // 0x37bd18: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x37bd18u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_37bd1c:
    // 0x37bd1c: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x37bd1cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
label_37bd20:
    // 0x37bd20: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x37bd20u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_37bd24:
    // 0x37bd24: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x37bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_37bd28:
    // 0x37bd28: 0x53001a  div         $zero, $v0, $s3
    ctx->pc = 0x37bd28u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_37bd2c:
    // 0x37bd2c: 0x526a0001  beql        $s3, $t2, . + 4 + (0x1 << 2)
label_37bd30:
    if (ctx->pc == 0x37BD30u) {
        ctx->pc = 0x37BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BD2Cu;
        // 0x37bd30: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BD34u;
        goto label_37bd34;
    }
    ctx->pc = 0x37BD2Cu;
    {
        const bool branch_taken_0x37bd2c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 10));
        if (branch_taken_0x37bd2c) {
            ctx->pc = 0x37BD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37BD2Cu;
            // 0x37bd30: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37BD34u;
            goto label_37bd34;
        }
    }
    ctx->pc = 0x37BD34u;
label_37bd34:
    // 0x37bd34: 0x1010  mfhi        $v0
    ctx->pc = 0x37bd34u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_37bd38:
    // 0x37bd38: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x37bd38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_37bd3c:
    // 0x37bd3c: 0xd61021  addu        $v0, $a2, $s6
    ctx->pc = 0x37bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
label_37bd40:
    // 0x37bd40: 0xc480fffc  lwc1        $f0, -0x4($a0)
    ctx->pc = 0x37bd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37bd44:
    // 0x37bd44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37bd44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37bd48:
    // 0x37bd48: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x37bd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37bd4c:
    // 0x37bd4c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x37bd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37bd50:
    // 0x37bd50: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x37bd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37bd54:
    // 0x37bd54: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x37bd54u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_37bd58:
    // 0x37bd58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x37bd58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_37bd5c:
    // 0x37bd5c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x37bd5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_37bd60:
    // 0x37bd60: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x37bd60u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_37bd64:
    // 0x37bd64: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x37bd64u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
label_37bd68:
    // 0x37bd68: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x37bd68u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_37bd6c:
    // 0x37bd6c: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x37bd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
label_37bd70:
    // 0x37bd70: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x37bd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_37bd74:
    // 0x37bd74: 0x14a0ffda  bnez        $a1, . + 4 + (-0x26 << 2)
label_37bd78:
    if (ctx->pc == 0x37BD78u) {
        ctx->pc = 0x37BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BD74u;
        // 0x37bd78: 0x2463fffe  addiu       $v1, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BD7Cu;
        goto label_37bd7c;
    }
    ctx->pc = 0x37BD74u;
    {
        const bool branch_taken_0x37bd74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BD74u;
        // 0x37bd78: 0x2463fffe  addiu       $v1, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bd74) {
            ctx->pc = 0x37BCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37bce0;
        }
    }
    ctx->pc = 0x37BD7Cu;
label_37bd7c:
    // 0x37bd7c: 0x0  nop
    ctx->pc = 0x37bd7cu;
    // NOP
label_37bd80:
    // 0x37bd80: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x37bd80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_37bd84:
    // 0x37bd84: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x37bd84u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37bd88:
    // 0x37bd88: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x37bd88u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37bd8c:
    // 0x37bd8c: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x37bd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_37bd90:
    // 0x37bd90: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x37bd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37bd94:
    // 0x37bd94: 0x600013  mtlo        $v1
    ctx->pc = 0x37bd94u;
    ctx->lo = GPR_U64(ctx, 3);
label_37bd98:
    // 0x37bd98: 0x710e1000  madd        $v0, $t0, $t6
    ctx->pc = 0x37bd98u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 14); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_37bd9c:
    // 0x37bd9c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x37bd9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_37bda0:
    // 0x37bda0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x37bda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_37bda4:
    // 0x37bda4: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x37bda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_37bda8:
    // 0x37bda8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x37bda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37bdac:
    // 0x37bdac: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x37bdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37bdb0:
    // 0x37bdb0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x37bdb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_37bdb4:
    // 0x37bdb4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x37bdb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_37bdb8:
    // 0x37bdb8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x37bdb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_37bdbc:
    // 0x37bdbc: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x37bdbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_37bdc0:
    // 0x37bdc0: 0x113102a  slt         $v0, $t0, $s3
    ctx->pc = 0x37bdc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_37bdc4:
    // 0x37bdc4: 0x1440ff62  bnez        $v0, . + 4 + (-0x9E << 2)
label_37bdc8:
    if (ctx->pc == 0x37BDC8u) {
        ctx->pc = 0x37BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BDC4u;
        // 0x37bdc8: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BDCCu;
        goto label_37bdcc;
    }
    ctx->pc = 0x37BDC4u;
    {
        const bool branch_taken_0x37bdc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BDC4u;
        // 0x37bdc8: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bdc4) {
            ctx->pc = 0x37BB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37bb50;
        }
    }
    ctx->pc = 0x37BDCCu;
label_37bdcc:
    // 0x37bdcc: 0x0  nop
    ctx->pc = 0x37bdccu;
    // NOP
label_37bdd0:
    // 0x37bdd0: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x37bdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_37bdd4:
    // 0x37bdd4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x37bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37bdd8:
    // 0x37bdd8: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x37bdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_37bddc:
    // 0x37bddc: 0x600013  mtlo        $v1
    ctx->pc = 0x37bddcu;
    ctx->lo = GPR_U64(ctx, 3);
label_37bde0:
    // 0x37bde0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x37bde0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_37bde4:
    // 0x37bde4: 0x72621000  madd        $v0, $s3, $v0
    ctx->pc = 0x37bde4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_37bde8:
    // 0x37bde8: 0x2485e880  addiu       $a1, $a0, -0x1780
    ctx->pc = 0x37bde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_37bdec:
    // 0x37bdec: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x37bdecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_37bdf0:
    // 0x37bdf0: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x37bdf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_37bdf4:
    // 0x37bdf4: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x37bdf4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_37bdf8:
    // 0x37bdf8: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x37bdf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_37bdfc:
    // 0x37bdfc: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x37bdfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_37be00:
    // 0x37be00: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x37be00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
label_37be04:
    // 0x37be04: 0x68c70013  ldl         $a3, 0x13($a2)
    ctx->pc = 0x37be04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_37be08:
    // 0x37be08: 0x6cc7000c  ldr         $a3, 0xC($a2)
    ctx->pc = 0x37be08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_37be0c:
    // 0x37be0c: 0x8cc80014  lw          $t0, 0x14($a2)
    ctx->pc = 0x37be0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_37be10:
    // 0x37be10: 0xb0470013  sdl         $a3, 0x13($v0)
    ctx->pc = 0x37be10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_37be14:
    // 0x37be14: 0xb447000c  sdr         $a3, 0xC($v0)
    ctx->pc = 0x37be14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_37be18:
    // 0x37be18: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x37be18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
label_37be1c:
    // 0x37be1c: 0x68c7001f  ldl         $a3, 0x1F($a2)
    ctx->pc = 0x37be1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_37be20:
    // 0x37be20: 0x6cc70018  ldr         $a3, 0x18($a2)
    ctx->pc = 0x37be20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_37be24:
    // 0x37be24: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x37be24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_37be28:
    // 0x37be28: 0xb047001f  sdl         $a3, 0x1F($v0)
    ctx->pc = 0x37be28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_37be2c:
    // 0x37be2c: 0xb4470018  sdr         $a3, 0x18($v0)
    ctx->pc = 0x37be2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_37be30:
    // 0x37be30: 0xac480020  sw          $t0, 0x20($v0)
    ctx->pc = 0x37be30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 8));
label_37be34:
    // 0x37be34: 0x8ca3010c  lw          $v1, 0x10C($a1)
    ctx->pc = 0x37be34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 268)));
label_37be38:
    // 0x37be38: 0x60f809  jalr        $v1
label_37be3c:
    if (ctx->pc == 0x37BE3Cu) {
        ctx->pc = 0x37BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BE38u;
        // 0x37be3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BE40u;
        goto label_37be40;
    }
    ctx->pc = 0x37BE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x37BE40u);
        ctx->pc = 0x37BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BE38u;
        // 0x37be3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BE38u, 0x37BE40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37BE40u;
label_37be40:
    // 0x37be40: 0x10000008  b           . + 4 + (0x8 << 2)
label_37be44:
    if (ctx->pc == 0x37BE44u) {
        ctx->pc = 0x37BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BE40u;
        // 0x37be44: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BE48u;
        goto label_37be48;
    }
    ctx->pc = 0x37BE40u;
    {
        const bool branch_taken_0x37be40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BE40u;
        // 0x37be44: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37be40) {
            ctx->pc = 0x37BE64u;
            goto label_37be64;
        }
    }
    ctx->pc = 0x37BE48u;
label_37be48:
    // 0x37be48: 0xc1035f6  jal         func_40D7D8
label_37be4c:
    if (ctx->pc == 0x37BE4Cu) {
        ctx->pc = 0x37BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BE48u;
        // 0x37be4c: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BE50u;
        goto label_37be50;
    }
    ctx->pc = 0x37BE48u;
    SET_GPR_U32(ctx, 31, 0x37BE50u);
    ctx->pc = 0x37BE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BE48u;
    // 0x37be4c: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37BE48u, 0x37BE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BE50u;
label_37be50:
    // 0x37be50: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x37be50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_37be54:
    // 0x37be54: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x37be54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_37be58:
    // 0x37be58: 0xc103628  jal         func_40D8A0
label_37be5c:
    if (ctx->pc == 0x37BE5Cu) {
        ctx->pc = 0x37BE60u;
        goto label_37be60;
    }
    ctx->pc = 0x37BE58u;
    SET_GPR_U32(ctx, 31, 0x37BE60u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37BE58u, 0x37BE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BE60u;
label_37be60:
    // 0x37be60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37be60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37be64:
    // 0x37be64: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x37be64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_37be68:
    // 0x37be68: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x37be68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_37be6c:
    // 0x37be6c: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x37be6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_37be70:
    // 0x37be70: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x37be70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_37be74:
    // 0x37be74: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x37be74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_37be78:
    // 0x37be78: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x37be78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_37be7c:
    // 0x37be7c: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x37be7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_37be80:
    // 0x37be80: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x37be80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_37be84:
    // 0x37be84: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x37be84u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_37be88:
    // 0x37be88: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x37be88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_37be8c:
    // 0x37be8c: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x37be8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37be90:
    // 0x37be90: 0x3e00008  jr          $ra
label_37be94:
    if (ctx->pc == 0x37BE94u) {
        ctx->pc = 0x37BE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BE90u;
        // 0x37be94: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37BE98u;
        goto label_fallthrough_0x37be90;
    }
    ctx->pc = 0x37BE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37BE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BE90u;
        // 0x37be94: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x37be90:
    ctx->pc = 0x37BE98u;
}
