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

// Function: sub_003BBDF0
// Address: 0x3bbdf0 - 0x3bc668
void sub_003BBDF0_0x3bbdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BBDF0_0x3bbdf0");
#endif

    switch (ctx->pc) {
        case 0x3bbdf0u: goto label_3bbdf0;
        case 0x3bbdf4u: goto label_3bbdf4;
        case 0x3bbdf8u: goto label_3bbdf8;
        case 0x3bbdfcu: goto label_3bbdfc;
        case 0x3bbe00u: goto label_3bbe00;
        case 0x3bbe04u: goto label_3bbe04;
        case 0x3bbe08u: goto label_3bbe08;
        case 0x3bbe0cu: goto label_3bbe0c;
        case 0x3bbe10u: goto label_3bbe10;
        case 0x3bbe14u: goto label_3bbe14;
        case 0x3bbe18u: goto label_3bbe18;
        case 0x3bbe1cu: goto label_3bbe1c;
        case 0x3bbe20u: goto label_3bbe20;
        case 0x3bbe24u: goto label_3bbe24;
        case 0x3bbe28u: goto label_3bbe28;
        case 0x3bbe2cu: goto label_3bbe2c;
        case 0x3bbe30u: goto label_3bbe30;
        case 0x3bbe34u: goto label_3bbe34;
        case 0x3bbe38u: goto label_3bbe38;
        case 0x3bbe3cu: goto label_3bbe3c;
        case 0x3bbe40u: goto label_3bbe40;
        case 0x3bbe44u: goto label_3bbe44;
        case 0x3bbe48u: goto label_3bbe48;
        case 0x3bbe4cu: goto label_3bbe4c;
        case 0x3bbe50u: goto label_3bbe50;
        case 0x3bbe54u: goto label_3bbe54;
        case 0x3bbe58u: goto label_3bbe58;
        case 0x3bbe5cu: goto label_3bbe5c;
        case 0x3bbe60u: goto label_3bbe60;
        case 0x3bbe64u: goto label_3bbe64;
        case 0x3bbe68u: goto label_3bbe68;
        case 0x3bbe6cu: goto label_3bbe6c;
        case 0x3bbe70u: goto label_3bbe70;
        case 0x3bbe74u: goto label_3bbe74;
        case 0x3bbe78u: goto label_3bbe78;
        case 0x3bbe7cu: goto label_3bbe7c;
        case 0x3bbe80u: goto label_3bbe80;
        case 0x3bbe84u: goto label_3bbe84;
        case 0x3bbe88u: goto label_3bbe88;
        case 0x3bbe8cu: goto label_3bbe8c;
        case 0x3bbe90u: goto label_3bbe90;
        case 0x3bbe94u: goto label_3bbe94;
        case 0x3bbe98u: goto label_3bbe98;
        case 0x3bbe9cu: goto label_3bbe9c;
        case 0x3bbea0u: goto label_3bbea0;
        case 0x3bbea4u: goto label_3bbea4;
        case 0x3bbea8u: goto label_3bbea8;
        case 0x3bbeacu: goto label_3bbeac;
        case 0x3bbeb0u: goto label_3bbeb0;
        case 0x3bbeb4u: goto label_3bbeb4;
        case 0x3bbeb8u: goto label_3bbeb8;
        case 0x3bbebcu: goto label_3bbebc;
        case 0x3bbec0u: goto label_3bbec0;
        case 0x3bbec4u: goto label_3bbec4;
        case 0x3bbec8u: goto label_3bbec8;
        case 0x3bbeccu: goto label_3bbecc;
        case 0x3bbed0u: goto label_3bbed0;
        case 0x3bbed4u: goto label_3bbed4;
        case 0x3bbed8u: goto label_3bbed8;
        case 0x3bbedcu: goto label_3bbedc;
        case 0x3bbee0u: goto label_3bbee0;
        case 0x3bbee4u: goto label_3bbee4;
        case 0x3bbee8u: goto label_3bbee8;
        case 0x3bbeecu: goto label_3bbeec;
        case 0x3bbef0u: goto label_3bbef0;
        case 0x3bbef4u: goto label_3bbef4;
        case 0x3bbef8u: goto label_3bbef8;
        case 0x3bbefcu: goto label_3bbefc;
        case 0x3bbf00u: goto label_3bbf00;
        case 0x3bbf04u: goto label_3bbf04;
        case 0x3bbf08u: goto label_3bbf08;
        case 0x3bbf0cu: goto label_3bbf0c;
        case 0x3bbf10u: goto label_3bbf10;
        case 0x3bbf14u: goto label_3bbf14;
        case 0x3bbf18u: goto label_3bbf18;
        case 0x3bbf1cu: goto label_3bbf1c;
        case 0x3bbf20u: goto label_3bbf20;
        case 0x3bbf24u: goto label_3bbf24;
        case 0x3bbf28u: goto label_3bbf28;
        case 0x3bbf2cu: goto label_3bbf2c;
        case 0x3bbf30u: goto label_3bbf30;
        case 0x3bbf34u: goto label_3bbf34;
        case 0x3bbf38u: goto label_3bbf38;
        case 0x3bbf3cu: goto label_3bbf3c;
        case 0x3bbf40u: goto label_3bbf40;
        case 0x3bbf44u: goto label_3bbf44;
        case 0x3bbf48u: goto label_3bbf48;
        case 0x3bbf4cu: goto label_3bbf4c;
        case 0x3bbf50u: goto label_3bbf50;
        case 0x3bbf54u: goto label_3bbf54;
        case 0x3bbf58u: goto label_3bbf58;
        case 0x3bbf5cu: goto label_3bbf5c;
        case 0x3bbf60u: goto label_3bbf60;
        case 0x3bbf64u: goto label_3bbf64;
        case 0x3bbf68u: goto label_3bbf68;
        case 0x3bbf6cu: goto label_3bbf6c;
        case 0x3bbf70u: goto label_3bbf70;
        case 0x3bbf74u: goto label_3bbf74;
        case 0x3bbf78u: goto label_3bbf78;
        case 0x3bbf7cu: goto label_3bbf7c;
        case 0x3bbf80u: goto label_3bbf80;
        case 0x3bbf84u: goto label_3bbf84;
        case 0x3bbf88u: goto label_3bbf88;
        case 0x3bbf8cu: goto label_3bbf8c;
        case 0x3bbf90u: goto label_3bbf90;
        case 0x3bbf94u: goto label_3bbf94;
        case 0x3bbf98u: goto label_3bbf98;
        case 0x3bbf9cu: goto label_3bbf9c;
        case 0x3bbfa0u: goto label_3bbfa0;
        case 0x3bbfa4u: goto label_3bbfa4;
        case 0x3bbfa8u: goto label_3bbfa8;
        case 0x3bbfacu: goto label_3bbfac;
        case 0x3bbfb0u: goto label_3bbfb0;
        case 0x3bbfb4u: goto label_3bbfb4;
        case 0x3bbfb8u: goto label_3bbfb8;
        case 0x3bbfbcu: goto label_3bbfbc;
        case 0x3bbfc0u: goto label_3bbfc0;
        case 0x3bbfc4u: goto label_3bbfc4;
        case 0x3bbfc8u: goto label_3bbfc8;
        case 0x3bbfccu: goto label_3bbfcc;
        case 0x3bbfd0u: goto label_3bbfd0;
        case 0x3bbfd4u: goto label_3bbfd4;
        case 0x3bbfd8u: goto label_3bbfd8;
        case 0x3bbfdcu: goto label_3bbfdc;
        case 0x3bbfe0u: goto label_3bbfe0;
        case 0x3bbfe4u: goto label_3bbfe4;
        case 0x3bbfe8u: goto label_3bbfe8;
        case 0x3bbfecu: goto label_3bbfec;
        case 0x3bbff0u: goto label_3bbff0;
        case 0x3bbff4u: goto label_3bbff4;
        case 0x3bbff8u: goto label_3bbff8;
        case 0x3bbffcu: goto label_3bbffc;
        case 0x3bc000u: goto label_3bc000;
        case 0x3bc004u: goto label_3bc004;
        case 0x3bc008u: goto label_3bc008;
        case 0x3bc00cu: goto label_3bc00c;
        case 0x3bc010u: goto label_3bc010;
        case 0x3bc014u: goto label_3bc014;
        case 0x3bc018u: goto label_3bc018;
        case 0x3bc01cu: goto label_3bc01c;
        case 0x3bc020u: goto label_3bc020;
        case 0x3bc024u: goto label_3bc024;
        case 0x3bc028u: goto label_3bc028;
        case 0x3bc02cu: goto label_3bc02c;
        case 0x3bc030u: goto label_3bc030;
        case 0x3bc034u: goto label_3bc034;
        case 0x3bc038u: goto label_3bc038;
        case 0x3bc03cu: goto label_3bc03c;
        case 0x3bc040u: goto label_3bc040;
        case 0x3bc044u: goto label_3bc044;
        case 0x3bc048u: goto label_3bc048;
        case 0x3bc04cu: goto label_3bc04c;
        case 0x3bc050u: goto label_3bc050;
        case 0x3bc054u: goto label_3bc054;
        case 0x3bc058u: goto label_3bc058;
        case 0x3bc05cu: goto label_3bc05c;
        case 0x3bc060u: goto label_3bc060;
        case 0x3bc064u: goto label_3bc064;
        case 0x3bc068u: goto label_3bc068;
        case 0x3bc06cu: goto label_3bc06c;
        case 0x3bc070u: goto label_3bc070;
        case 0x3bc074u: goto label_3bc074;
        case 0x3bc078u: goto label_3bc078;
        case 0x3bc07cu: goto label_3bc07c;
        case 0x3bc080u: goto label_3bc080;
        case 0x3bc084u: goto label_3bc084;
        case 0x3bc088u: goto label_3bc088;
        case 0x3bc08cu: goto label_3bc08c;
        case 0x3bc090u: goto label_3bc090;
        case 0x3bc094u: goto label_3bc094;
        case 0x3bc098u: goto label_3bc098;
        case 0x3bc09cu: goto label_3bc09c;
        case 0x3bc0a0u: goto label_3bc0a0;
        case 0x3bc0a4u: goto label_3bc0a4;
        case 0x3bc0a8u: goto label_3bc0a8;
        case 0x3bc0acu: goto label_3bc0ac;
        case 0x3bc0b0u: goto label_3bc0b0;
        case 0x3bc0b4u: goto label_3bc0b4;
        case 0x3bc0b8u: goto label_3bc0b8;
        case 0x3bc0bcu: goto label_3bc0bc;
        case 0x3bc0c0u: goto label_3bc0c0;
        case 0x3bc0c4u: goto label_3bc0c4;
        case 0x3bc0c8u: goto label_3bc0c8;
        case 0x3bc0ccu: goto label_3bc0cc;
        case 0x3bc0d0u: goto label_3bc0d0;
        case 0x3bc0d4u: goto label_3bc0d4;
        case 0x3bc0d8u: goto label_3bc0d8;
        case 0x3bc0dcu: goto label_3bc0dc;
        case 0x3bc0e0u: goto label_3bc0e0;
        case 0x3bc0e4u: goto label_3bc0e4;
        case 0x3bc0e8u: goto label_3bc0e8;
        case 0x3bc0ecu: goto label_3bc0ec;
        case 0x3bc0f0u: goto label_3bc0f0;
        case 0x3bc0f4u: goto label_3bc0f4;
        case 0x3bc0f8u: goto label_3bc0f8;
        case 0x3bc0fcu: goto label_3bc0fc;
        case 0x3bc100u: goto label_3bc100;
        case 0x3bc104u: goto label_3bc104;
        case 0x3bc108u: goto label_3bc108;
        case 0x3bc10cu: goto label_3bc10c;
        case 0x3bc110u: goto label_3bc110;
        case 0x3bc114u: goto label_3bc114;
        case 0x3bc118u: goto label_3bc118;
        case 0x3bc11cu: goto label_3bc11c;
        case 0x3bc120u: goto label_3bc120;
        case 0x3bc124u: goto label_3bc124;
        case 0x3bc128u: goto label_3bc128;
        case 0x3bc12cu: goto label_3bc12c;
        case 0x3bc130u: goto label_3bc130;
        case 0x3bc134u: goto label_3bc134;
        case 0x3bc138u: goto label_3bc138;
        case 0x3bc13cu: goto label_3bc13c;
        case 0x3bc140u: goto label_3bc140;
        case 0x3bc144u: goto label_3bc144;
        case 0x3bc148u: goto label_3bc148;
        case 0x3bc14cu: goto label_3bc14c;
        case 0x3bc150u: goto label_3bc150;
        case 0x3bc154u: goto label_3bc154;
        case 0x3bc158u: goto label_3bc158;
        case 0x3bc15cu: goto label_3bc15c;
        case 0x3bc160u: goto label_3bc160;
        case 0x3bc164u: goto label_3bc164;
        case 0x3bc168u: goto label_3bc168;
        case 0x3bc16cu: goto label_3bc16c;
        case 0x3bc170u: goto label_3bc170;
        case 0x3bc174u: goto label_3bc174;
        case 0x3bc178u: goto label_3bc178;
        case 0x3bc17cu: goto label_3bc17c;
        case 0x3bc180u: goto label_3bc180;
        case 0x3bc184u: goto label_3bc184;
        case 0x3bc188u: goto label_3bc188;
        case 0x3bc18cu: goto label_3bc18c;
        case 0x3bc190u: goto label_3bc190;
        case 0x3bc194u: goto label_3bc194;
        case 0x3bc198u: goto label_3bc198;
        case 0x3bc19cu: goto label_3bc19c;
        case 0x3bc1a0u: goto label_3bc1a0;
        case 0x3bc1a4u: goto label_3bc1a4;
        case 0x3bc1a8u: goto label_3bc1a8;
        case 0x3bc1acu: goto label_3bc1ac;
        case 0x3bc1b0u: goto label_3bc1b0;
        case 0x3bc1b4u: goto label_3bc1b4;
        case 0x3bc1b8u: goto label_3bc1b8;
        case 0x3bc1bcu: goto label_3bc1bc;
        case 0x3bc1c0u: goto label_3bc1c0;
        case 0x3bc1c4u: goto label_3bc1c4;
        case 0x3bc1c8u: goto label_3bc1c8;
        case 0x3bc1ccu: goto label_3bc1cc;
        case 0x3bc1d0u: goto label_3bc1d0;
        case 0x3bc1d4u: goto label_3bc1d4;
        case 0x3bc1d8u: goto label_3bc1d8;
        case 0x3bc1dcu: goto label_3bc1dc;
        case 0x3bc1e0u: goto label_3bc1e0;
        case 0x3bc1e4u: goto label_3bc1e4;
        case 0x3bc1e8u: goto label_3bc1e8;
        case 0x3bc1ecu: goto label_3bc1ec;
        case 0x3bc1f0u: goto label_3bc1f0;
        case 0x3bc1f4u: goto label_3bc1f4;
        case 0x3bc1f8u: goto label_3bc1f8;
        case 0x3bc1fcu: goto label_3bc1fc;
        case 0x3bc200u: goto label_3bc200;
        case 0x3bc204u: goto label_3bc204;
        case 0x3bc208u: goto label_3bc208;
        case 0x3bc20cu: goto label_3bc20c;
        case 0x3bc210u: goto label_3bc210;
        case 0x3bc214u: goto label_3bc214;
        case 0x3bc218u: goto label_3bc218;
        case 0x3bc21cu: goto label_3bc21c;
        case 0x3bc220u: goto label_3bc220;
        case 0x3bc224u: goto label_3bc224;
        case 0x3bc228u: goto label_3bc228;
        case 0x3bc22cu: goto label_3bc22c;
        case 0x3bc230u: goto label_3bc230;
        case 0x3bc234u: goto label_3bc234;
        case 0x3bc238u: goto label_3bc238;
        case 0x3bc23cu: goto label_3bc23c;
        case 0x3bc240u: goto label_3bc240;
        case 0x3bc244u: goto label_3bc244;
        case 0x3bc248u: goto label_3bc248;
        case 0x3bc24cu: goto label_3bc24c;
        case 0x3bc250u: goto label_3bc250;
        case 0x3bc254u: goto label_3bc254;
        case 0x3bc258u: goto label_3bc258;
        case 0x3bc25cu: goto label_3bc25c;
        case 0x3bc260u: goto label_3bc260;
        case 0x3bc264u: goto label_3bc264;
        case 0x3bc268u: goto label_3bc268;
        case 0x3bc26cu: goto label_3bc26c;
        case 0x3bc270u: goto label_3bc270;
        case 0x3bc274u: goto label_3bc274;
        case 0x3bc278u: goto label_3bc278;
        case 0x3bc27cu: goto label_3bc27c;
        case 0x3bc280u: goto label_3bc280;
        case 0x3bc284u: goto label_3bc284;
        case 0x3bc288u: goto label_3bc288;
        case 0x3bc28cu: goto label_3bc28c;
        case 0x3bc290u: goto label_3bc290;
        case 0x3bc294u: goto label_3bc294;
        case 0x3bc298u: goto label_3bc298;
        case 0x3bc29cu: goto label_3bc29c;
        case 0x3bc2a0u: goto label_3bc2a0;
        case 0x3bc2a4u: goto label_3bc2a4;
        case 0x3bc2a8u: goto label_3bc2a8;
        case 0x3bc2acu: goto label_3bc2ac;
        case 0x3bc2b0u: goto label_3bc2b0;
        case 0x3bc2b4u: goto label_3bc2b4;
        case 0x3bc2b8u: goto label_3bc2b8;
        case 0x3bc2bcu: goto label_3bc2bc;
        case 0x3bc2c0u: goto label_3bc2c0;
        case 0x3bc2c4u: goto label_3bc2c4;
        case 0x3bc2c8u: goto label_3bc2c8;
        case 0x3bc2ccu: goto label_3bc2cc;
        case 0x3bc2d0u: goto label_3bc2d0;
        case 0x3bc2d4u: goto label_3bc2d4;
        case 0x3bc2d8u: goto label_3bc2d8;
        case 0x3bc2dcu: goto label_3bc2dc;
        case 0x3bc2e0u: goto label_3bc2e0;
        case 0x3bc2e4u: goto label_3bc2e4;
        case 0x3bc2e8u: goto label_3bc2e8;
        case 0x3bc2ecu: goto label_3bc2ec;
        case 0x3bc2f0u: goto label_3bc2f0;
        case 0x3bc2f4u: goto label_3bc2f4;
        case 0x3bc2f8u: goto label_3bc2f8;
        case 0x3bc2fcu: goto label_3bc2fc;
        case 0x3bc300u: goto label_3bc300;
        case 0x3bc304u: goto label_3bc304;
        case 0x3bc308u: goto label_3bc308;
        case 0x3bc30cu: goto label_3bc30c;
        case 0x3bc310u: goto label_3bc310;
        case 0x3bc314u: goto label_3bc314;
        case 0x3bc318u: goto label_3bc318;
        case 0x3bc31cu: goto label_3bc31c;
        case 0x3bc320u: goto label_3bc320;
        case 0x3bc324u: goto label_3bc324;
        case 0x3bc328u: goto label_3bc328;
        case 0x3bc32cu: goto label_3bc32c;
        case 0x3bc330u: goto label_3bc330;
        case 0x3bc334u: goto label_3bc334;
        case 0x3bc338u: goto label_3bc338;
        case 0x3bc33cu: goto label_3bc33c;
        case 0x3bc340u: goto label_3bc340;
        case 0x3bc344u: goto label_3bc344;
        case 0x3bc348u: goto label_3bc348;
        case 0x3bc34cu: goto label_3bc34c;
        case 0x3bc350u: goto label_3bc350;
        case 0x3bc354u: goto label_3bc354;
        case 0x3bc358u: goto label_3bc358;
        case 0x3bc35cu: goto label_3bc35c;
        case 0x3bc360u: goto label_3bc360;
        case 0x3bc364u: goto label_3bc364;
        case 0x3bc368u: goto label_3bc368;
        case 0x3bc36cu: goto label_3bc36c;
        case 0x3bc370u: goto label_3bc370;
        case 0x3bc374u: goto label_3bc374;
        case 0x3bc378u: goto label_3bc378;
        case 0x3bc37cu: goto label_3bc37c;
        case 0x3bc380u: goto label_3bc380;
        case 0x3bc384u: goto label_3bc384;
        case 0x3bc388u: goto label_3bc388;
        case 0x3bc38cu: goto label_3bc38c;
        case 0x3bc390u: goto label_3bc390;
        case 0x3bc394u: goto label_3bc394;
        case 0x3bc398u: goto label_3bc398;
        case 0x3bc39cu: goto label_3bc39c;
        case 0x3bc3a0u: goto label_3bc3a0;
        case 0x3bc3a4u: goto label_3bc3a4;
        case 0x3bc3a8u: goto label_3bc3a8;
        case 0x3bc3acu: goto label_3bc3ac;
        case 0x3bc3b0u: goto label_3bc3b0;
        case 0x3bc3b4u: goto label_3bc3b4;
        case 0x3bc3b8u: goto label_3bc3b8;
        case 0x3bc3bcu: goto label_3bc3bc;
        case 0x3bc3c0u: goto label_3bc3c0;
        case 0x3bc3c4u: goto label_3bc3c4;
        case 0x3bc3c8u: goto label_3bc3c8;
        case 0x3bc3ccu: goto label_3bc3cc;
        case 0x3bc3d0u: goto label_3bc3d0;
        case 0x3bc3d4u: goto label_3bc3d4;
        case 0x3bc3d8u: goto label_3bc3d8;
        case 0x3bc3dcu: goto label_3bc3dc;
        case 0x3bc3e0u: goto label_3bc3e0;
        case 0x3bc3e4u: goto label_3bc3e4;
        case 0x3bc3e8u: goto label_3bc3e8;
        case 0x3bc3ecu: goto label_3bc3ec;
        case 0x3bc3f0u: goto label_3bc3f0;
        case 0x3bc3f4u: goto label_3bc3f4;
        case 0x3bc3f8u: goto label_3bc3f8;
        case 0x3bc3fcu: goto label_3bc3fc;
        case 0x3bc400u: goto label_3bc400;
        case 0x3bc404u: goto label_3bc404;
        case 0x3bc408u: goto label_3bc408;
        case 0x3bc40cu: goto label_3bc40c;
        case 0x3bc410u: goto label_3bc410;
        case 0x3bc414u: goto label_3bc414;
        case 0x3bc418u: goto label_3bc418;
        case 0x3bc41cu: goto label_3bc41c;
        case 0x3bc420u: goto label_3bc420;
        case 0x3bc424u: goto label_3bc424;
        case 0x3bc428u: goto label_3bc428;
        case 0x3bc42cu: goto label_3bc42c;
        case 0x3bc430u: goto label_3bc430;
        case 0x3bc434u: goto label_3bc434;
        case 0x3bc438u: goto label_3bc438;
        case 0x3bc43cu: goto label_3bc43c;
        case 0x3bc440u: goto label_3bc440;
        case 0x3bc444u: goto label_3bc444;
        case 0x3bc448u: goto label_3bc448;
        case 0x3bc44cu: goto label_3bc44c;
        case 0x3bc450u: goto label_3bc450;
        case 0x3bc454u: goto label_3bc454;
        case 0x3bc458u: goto label_3bc458;
        case 0x3bc45cu: goto label_3bc45c;
        case 0x3bc460u: goto label_3bc460;
        case 0x3bc464u: goto label_3bc464;
        case 0x3bc468u: goto label_3bc468;
        case 0x3bc46cu: goto label_3bc46c;
        case 0x3bc470u: goto label_3bc470;
        case 0x3bc474u: goto label_3bc474;
        case 0x3bc478u: goto label_3bc478;
        case 0x3bc47cu: goto label_3bc47c;
        case 0x3bc480u: goto label_3bc480;
        case 0x3bc484u: goto label_3bc484;
        case 0x3bc488u: goto label_3bc488;
        case 0x3bc48cu: goto label_3bc48c;
        case 0x3bc490u: goto label_3bc490;
        case 0x3bc494u: goto label_3bc494;
        case 0x3bc498u: goto label_3bc498;
        case 0x3bc49cu: goto label_3bc49c;
        case 0x3bc4a0u: goto label_3bc4a0;
        case 0x3bc4a4u: goto label_3bc4a4;
        case 0x3bc4a8u: goto label_3bc4a8;
        case 0x3bc4acu: goto label_3bc4ac;
        case 0x3bc4b0u: goto label_3bc4b0;
        case 0x3bc4b4u: goto label_3bc4b4;
        case 0x3bc4b8u: goto label_3bc4b8;
        case 0x3bc4bcu: goto label_3bc4bc;
        case 0x3bc4c0u: goto label_3bc4c0;
        case 0x3bc4c4u: goto label_3bc4c4;
        case 0x3bc4c8u: goto label_3bc4c8;
        case 0x3bc4ccu: goto label_3bc4cc;
        case 0x3bc4d0u: goto label_3bc4d0;
        case 0x3bc4d4u: goto label_3bc4d4;
        case 0x3bc4d8u: goto label_3bc4d8;
        case 0x3bc4dcu: goto label_3bc4dc;
        case 0x3bc4e0u: goto label_3bc4e0;
        case 0x3bc4e4u: goto label_3bc4e4;
        case 0x3bc4e8u: goto label_3bc4e8;
        case 0x3bc4ecu: goto label_3bc4ec;
        case 0x3bc4f0u: goto label_3bc4f0;
        case 0x3bc4f4u: goto label_3bc4f4;
        case 0x3bc4f8u: goto label_3bc4f8;
        case 0x3bc4fcu: goto label_3bc4fc;
        case 0x3bc500u: goto label_3bc500;
        case 0x3bc504u: goto label_3bc504;
        case 0x3bc508u: goto label_3bc508;
        case 0x3bc50cu: goto label_3bc50c;
        case 0x3bc510u: goto label_3bc510;
        case 0x3bc514u: goto label_3bc514;
        case 0x3bc518u: goto label_3bc518;
        case 0x3bc51cu: goto label_3bc51c;
        case 0x3bc520u: goto label_3bc520;
        case 0x3bc524u: goto label_3bc524;
        case 0x3bc528u: goto label_3bc528;
        case 0x3bc52cu: goto label_3bc52c;
        case 0x3bc530u: goto label_3bc530;
        case 0x3bc534u: goto label_3bc534;
        case 0x3bc538u: goto label_3bc538;
        case 0x3bc53cu: goto label_3bc53c;
        case 0x3bc540u: goto label_3bc540;
        case 0x3bc544u: goto label_3bc544;
        case 0x3bc548u: goto label_3bc548;
        case 0x3bc54cu: goto label_3bc54c;
        case 0x3bc550u: goto label_3bc550;
        case 0x3bc554u: goto label_3bc554;
        case 0x3bc558u: goto label_3bc558;
        case 0x3bc55cu: goto label_3bc55c;
        case 0x3bc560u: goto label_3bc560;
        case 0x3bc564u: goto label_3bc564;
        case 0x3bc568u: goto label_3bc568;
        case 0x3bc56cu: goto label_3bc56c;
        case 0x3bc570u: goto label_3bc570;
        case 0x3bc574u: goto label_3bc574;
        case 0x3bc578u: goto label_3bc578;
        case 0x3bc57cu: goto label_3bc57c;
        case 0x3bc580u: goto label_3bc580;
        case 0x3bc584u: goto label_3bc584;
        case 0x3bc588u: goto label_3bc588;
        case 0x3bc58cu: goto label_3bc58c;
        case 0x3bc590u: goto label_3bc590;
        case 0x3bc594u: goto label_3bc594;
        case 0x3bc598u: goto label_3bc598;
        case 0x3bc59cu: goto label_3bc59c;
        case 0x3bc5a0u: goto label_3bc5a0;
        case 0x3bc5a4u: goto label_3bc5a4;
        case 0x3bc5a8u: goto label_3bc5a8;
        case 0x3bc5acu: goto label_3bc5ac;
        case 0x3bc5b0u: goto label_3bc5b0;
        case 0x3bc5b4u: goto label_3bc5b4;
        case 0x3bc5b8u: goto label_3bc5b8;
        case 0x3bc5bcu: goto label_3bc5bc;
        case 0x3bc5c0u: goto label_3bc5c0;
        case 0x3bc5c4u: goto label_3bc5c4;
        case 0x3bc5c8u: goto label_3bc5c8;
        case 0x3bc5ccu: goto label_3bc5cc;
        case 0x3bc5d0u: goto label_3bc5d0;
        case 0x3bc5d4u: goto label_3bc5d4;
        case 0x3bc5d8u: goto label_3bc5d8;
        case 0x3bc5dcu: goto label_3bc5dc;
        case 0x3bc5e0u: goto label_3bc5e0;
        case 0x3bc5e4u: goto label_3bc5e4;
        case 0x3bc5e8u: goto label_3bc5e8;
        case 0x3bc5ecu: goto label_3bc5ec;
        case 0x3bc5f0u: goto label_3bc5f0;
        case 0x3bc5f4u: goto label_3bc5f4;
        case 0x3bc5f8u: goto label_3bc5f8;
        case 0x3bc5fcu: goto label_3bc5fc;
        case 0x3bc600u: goto label_3bc600;
        case 0x3bc604u: goto label_3bc604;
        case 0x3bc608u: goto label_3bc608;
        case 0x3bc60cu: goto label_3bc60c;
        case 0x3bc610u: goto label_3bc610;
        case 0x3bc614u: goto label_3bc614;
        case 0x3bc618u: goto label_3bc618;
        case 0x3bc61cu: goto label_3bc61c;
        case 0x3bc620u: goto label_3bc620;
        case 0x3bc624u: goto label_3bc624;
        case 0x3bc628u: goto label_3bc628;
        case 0x3bc62cu: goto label_3bc62c;
        case 0x3bc630u: goto label_3bc630;
        case 0x3bc634u: goto label_3bc634;
        case 0x3bc638u: goto label_3bc638;
        case 0x3bc63cu: goto label_3bc63c;
        case 0x3bc640u: goto label_3bc640;
        case 0x3bc644u: goto label_3bc644;
        case 0x3bc648u: goto label_3bc648;
        case 0x3bc64cu: goto label_3bc64c;
        case 0x3bc650u: goto label_3bc650;
        case 0x3bc654u: goto label_3bc654;
        case 0x3bc658u: goto label_3bc658;
        case 0x3bc65cu: goto label_3bc65c;
        case 0x3bc660u: goto label_3bc660;
        case 0x3bc664u: goto label_3bc664;
        default: break;
    }

    ctx->pc = 0x3bbdf0u;

label_3bbdf0:
    // 0x3bbdf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3bbdf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3bbdf4:
    // 0x3bbdf4: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3bbdf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3bbdf8:
    // 0x3bbdf8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3bbdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3bbdfc:
    // 0x3bbdfc: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x3bbdfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3bbe00:
    // 0x3bbe00: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3bbe00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3bbe04:
    // 0x3bbe04: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3bbe04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3bbe08:
    // 0x3bbe08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bbe08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bbe0c:
    // 0x3bbe0c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3bbe0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3bbe10:
    // 0x3bbe10: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3bbe10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_3bbe14:
    // 0x3bbe14: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3bbe14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_3bbe18:
    // 0x3bbe18: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3bbe18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_3bbe1c:
    // 0x3bbe1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bbe1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3bbe20:
    // 0x3bbe20: 0x450000c7  bc1f        . + 4 + (0xC7 << 2)
label_3bbe24:
    if (ctx->pc == 0x3BBE24u) {
        ctx->pc = 0x3BBE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBE20u;
        // 0x3bbe24: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBE28u;
        goto label_3bbe28;
    }
    ctx->pc = 0x3BBE20u;
    {
        const bool branch_taken_0x3bbe20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BBE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBE20u;
        // 0x3bbe24: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbe20) {
            ctx->pc = 0x3BC140u;
            goto label_3bc140;
        }
    }
    ctx->pc = 0x3BBE28u;
label_3bbe28:
    // 0x3bbe28: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3bbe28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bbe2c:
    // 0x3bbe2c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3bbe2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bbe30:
    // 0x3bbe30: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x3bbe30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3bbe34:
    // 0x3bbe34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bbe34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bbe38:
    // 0x3bbe38: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x3bbe38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3bbe3c:
    // 0x3bbe3c: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x3bbe3cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_3bbe40:
    // 0x3bbe40: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3bbe40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3bbe44:
    // 0x3bbe44: 0x8e33002c  lw          $s3, 0x2C($s1)
    ctx->pc = 0x3bbe44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3bbe48:
    // 0x3bbe48: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_3bbe4c:
    if (ctx->pc == 0x3BBE4Cu) {
        ctx->pc = 0x3BBE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBE48u;
        // 0x3bbe4c: 0xc601000c  lwc1        $f1, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBE50u;
        goto label_3bbe50;
    }
    ctx->pc = 0x3BBE48u;
    {
        const bool branch_taken_0x3bbe48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BBE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBE48u;
        // 0x3bbe4c: 0xc601000c  lwc1        $f1, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbe48) {
            ctx->pc = 0x3BBE64u;
            goto label_3bbe64;
        }
    }
    ctx->pc = 0x3BBE50u;
label_3bbe50:
    // 0x3bbe50: 0x460c1800  add.s       $f0, $f3, $f12
    ctx->pc = 0x3bbe50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
label_3bbe54:
    // 0x3bbe54: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3bbe54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3bbe58:
    // 0x3bbe58: 0x0  nop
    ctx->pc = 0x3bbe58u;
    // NOP
label_3bbe5c:
    // 0x3bbe5c: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_3bbe60:
    if (ctx->pc == 0x3BBE60u) {
        ctx->pc = 0x3BBE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBE5Cu;
        // 0x3bbe60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBE64u;
        goto label_3bbe64;
    }
    ctx->pc = 0x3BBE5Cu;
    {
        const bool branch_taken_0x3bbe5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bbe5c) {
            ctx->pc = 0x3BBE60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BBE5Cu;
            // 0x3bbe60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BBE68u;
            goto label_3bbe68;
        }
    }
    ctx->pc = 0x3BBE64u;
label_3bbe64:
    // 0x3bbe64: 0x460c1800  add.s       $f0, $f3, $f12
    ctx->pc = 0x3bbe64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
label_3bbe68:
    // 0x3bbe68: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3bbe68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bbe6c:
    // 0x3bbe6c: 0x2635004c  addiu       $s5, $s1, 0x4C
    ctx->pc = 0x3bbe6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_3bbe70:
    // 0x3bbe70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3bbe70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3bbe74:
    // 0x3bbe74: 0x0  nop
    ctx->pc = 0x3bbe74u;
    // NOP
label_3bbe78:
    // 0x3bbe78: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_3bbe7c:
    if (ctx->pc == 0x3BBE7Cu) {
        ctx->pc = 0x3BBE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBE78u;
        // 0x3bbe7c: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBE80u;
        goto label_3bbe80;
    }
    ctx->pc = 0x3BBE78u;
    {
        const bool branch_taken_0x3bbe78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BBE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBE78u;
        // 0x3bbe7c: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbe78) {
            ctx->pc = 0x3BBED4u;
            goto label_3bbed4;
        }
    }
    ctx->pc = 0x3BBE80u;
label_3bbe80:
    // 0x3bbe80: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
label_3bbe84:
    if (ctx->pc == 0x3BBE84u) {
        ctx->pc = 0x3BBE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBE80u;
        // 0x3bbe84: 0xc6340004  lwc1        $f20, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBE88u;
        goto label_3bbe88;
    }
    ctx->pc = 0x3BBE80u;
    {
        const bool branch_taken_0x3bbe80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bbe80) {
            ctx->pc = 0x3BBE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BBE80u;
            // 0x3bbe84: 0xc6340004  lwc1        $f20, 0x4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BBEC4u;
            goto label_3bbec4;
        }
    }
    ctx->pc = 0x3BBE88u;
label_3bbe88:
    // 0x3bbe88: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x3bbe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3bbe8c:
    // 0x3bbe8c: 0x0  nop
    ctx->pc = 0x3bbe8cu;
    // NOP
label_3bbe90:
    // 0x3bbe90: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3bbe90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bbe94:
    // 0x3bbe94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bbe94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bbe98:
    // 0x3bbe98: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3bbe98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3bbe9c:
    // 0x3bbe9c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3bbe9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3bbea0:
    // 0x3bbea0: 0x0  nop
    ctx->pc = 0x3bbea0u;
    // NOP
label_3bbea4:
    // 0x3bbea4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3bbea8:
    if (ctx->pc == 0x3BBEA8u) {
        ctx->pc = 0x3BBEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBEA4u;
        // 0x3bbea8: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBEACu;
        goto label_3bbeac;
    }
    ctx->pc = 0x3BBEA4u;
    {
        const bool branch_taken_0x3bbea4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BBEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBEA4u;
        // 0x3bbea8: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbea4) {
            ctx->pc = 0x3BBEB0u;
            goto label_3bbeb0;
        }
    }
    ctx->pc = 0x3BBEACu;
label_3bbeac:
    // 0x3bbeac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bbeacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bbeb0:
    // 0x3bbeb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3bbeb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3bbeb4:
    // 0x3bbeb4: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x3bbeb4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_3bbeb8:
    // 0x3bbeb8: 0x4501fff5  bc1t        . + 4 + (-0xB << 2)
label_3bbebc:
    if (ctx->pc == 0x3BBEBCu) {
        ctx->pc = 0x3BBEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBEB8u;
        // 0x3bbebc: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBEC0u;
        goto label_3bbec0;
    }
    ctx->pc = 0x3BBEB8u;
    {
        const bool branch_taken_0x3bbeb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BBEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBEB8u;
        // 0x3bbebc: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbeb8) {
            ctx->pc = 0x3BBE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bbe90;
        }
    }
    ctx->pc = 0x3BBEC0u;
label_3bbec0:
    // 0x3bbec0: 0xc6340004  lwc1        $f20, 0x4($s1)
    ctx->pc = 0x3bbec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3bbec4:
    // 0x3bbec4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bbec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bbec8:
    // 0x3bbec8: 0xc0eee8c  jal         func_3BBA30
label_3bbecc:
    if (ctx->pc == 0x3BBECCu) {
        ctx->pc = 0x3BBECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBEC8u;
        // 0x3bbecc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBED0u;
        goto label_3bbed0;
    }
    ctx->pc = 0x3BBEC8u;
    SET_GPR_U32(ctx, 31, 0x3BBED0u);
    ctx->pc = 0x3BBECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBEC8u;
    // 0x3bbecc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBA30u, 0x3BBEC8u, 0x3BBED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBED0u;
label_3bbed0:
    // 0x3bbed0: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x3bbed0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3bbed4:
    // 0x3bbed4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3bbed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3bbed8:
    // 0x3bbed8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3bbedc:
    if (ctx->pc == 0x3BBEDCu) {
        ctx->pc = 0x3BBEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBED8u;
        // 0x3bbedc: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBEE0u;
        goto label_3bbee0;
    }
    ctx->pc = 0x3BBED8u;
    {
        const bool branch_taken_0x3bbed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bbed8) {
            ctx->pc = 0x3BBEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BBED8u;
            // 0x3bbedc: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BBEF8u;
            goto label_3bbef8;
        }
    }
    ctx->pc = 0x3BBEE0u;
label_3bbee0:
    // 0x3bbee0: 0xc6340004  lwc1        $f20, 0x4($s1)
    ctx->pc = 0x3bbee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3bbee4:
    // 0x3bbee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bbee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bbee8:
    // 0x3bbee8: 0xc0eee8c  jal         func_3BBA30
label_3bbeec:
    if (ctx->pc == 0x3BBEECu) {
        ctx->pc = 0x3BBEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBEE8u;
        // 0x3bbeec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBEF0u;
        goto label_3bbef0;
    }
    ctx->pc = 0x3BBEE8u;
    SET_GPR_U32(ctx, 31, 0x3BBEF0u);
    ctx->pc = 0x3BBEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBEE8u;
    // 0x3bbeec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBA30u, 0x3BBEE8u, 0x3BBEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBEF0u;
label_3bbef0:
    // 0x3bbef0: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x3bbef0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3bbef4:
    // 0x3bbef4: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3bbef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3bbef8:
    // 0x3bbef8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3bbef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3bbefc:
    // 0x3bbefc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3bbefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3bbf00:
    // 0x3bbf00: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x3bbf00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3bbf04:
    // 0x3bbf04: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3bbf04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3bbf08:
    // 0x3bbf08: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3bbf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3bbf0c:
    // 0x3bbf0c: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x3bbf0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3bbf10:
    // 0x3bbf10: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_3bbf14:
    if (ctx->pc == 0x3BBF14u) {
        ctx->pc = 0x3BBF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBF10u;
        // 0x3bbf14: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBF18u;
        goto label_3bbf18;
    }
    ctx->pc = 0x3BBF10u;
    {
        const bool branch_taken_0x3bbf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBF10u;
        // 0x3bbf14: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbf10) {
            ctx->pc = 0x3BBF94u;
            goto label_3bbf94;
        }
    }
    ctx->pc = 0x3BBF18u;
label_3bbf18:
    // 0x3bbf18: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3bbf18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3bbf1c:
    // 0x3bbf1c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x3bbf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3bbf20:
    // 0x3bbf20: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x3bbf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bbf24:
    // 0x3bbf24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3bbf24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3bbf28:
    // 0x3bbf28: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
label_3bbf2c:
    if (ctx->pc == 0x3BBF2Cu) {
        ctx->pc = 0x3BBF30u;
        goto label_3bbf30;
    }
    ctx->pc = 0x3BBF28u;
    {
        const bool branch_taken_0x3bbf28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bbf28) {
            ctx->pc = 0x3BBF94u;
            goto label_3bbf94;
        }
    }
    ctx->pc = 0x3BBF30u;
label_3bbf30:
    // 0x3bbf30: 0x8e270024  lw          $a3, 0x24($s1)
    ctx->pc = 0x3bbf30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3bbf34:
    // 0x3bbf34: 0x2471818  mult        $v1, $s2, $a3
    ctx->pc = 0x3bbf34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3bbf38:
    // 0x3bbf38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3bbf38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3bbf3c:
    // 0x3bbf3c: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x3bbf3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_3bbf40:
    // 0x3bbf40: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x3bbf40u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_3bbf44:
    // 0x3bbf44: 0x2463004c  addiu       $v1, $v1, 0x4C
    ctx->pc = 0x3bbf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
label_3bbf48:
    // 0x3bbf48: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x3bbf48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_3bbf4c:
    // 0x3bbf4c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3bbf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3bbf50:
    // 0x3bbf50: 0x1446fff9  bne         $v0, $a2, . + 4 + (-0x7 << 2)
label_3bbf54:
    if (ctx->pc == 0x3BBF54u) {
        ctx->pc = 0x3BBF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBF50u;
        // 0x3bbf54: 0x2471818  mult        $v1, $s2, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBF58u;
        goto label_3bbf58;
    }
    ctx->pc = 0x3BBF50u;
    {
        const bool branch_taken_0x3bbf50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x3BBF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBF50u;
        // 0x3bbf54: 0x2471818  mult        $v1, $s2, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbf50) {
            ctx->pc = 0x3BBF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bbf38;
        }
    }
    ctx->pc = 0x3BBF58u;
label_3bbf58:
    // 0x3bbf58: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3bbf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3bbf5c:
    // 0x3bbf5c: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3bbf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3bbf60:
    // 0x3bbf60: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x3bbf60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_3bbf64:
    // 0x3bbf64: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x3bbf64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3bbf68:
    // 0x3bbf68: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3bbf68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3bbf6c:
    // 0x3bbf6c: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x3bbf6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3bbf70:
    // 0x3bbf70: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3bbf74:
    if (ctx->pc == 0x3BBF74u) {
        ctx->pc = 0x3BBF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBF70u;
        // 0x3bbf74: 0xae260008  sw          $a2, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBF78u;
        goto label_3bbf78;
    }
    ctx->pc = 0x3BBF70u;
    {
        const bool branch_taken_0x3bbf70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBF70u;
        // 0x3bbf74: 0xae260008  sw          $a2, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbf70) {
            ctx->pc = 0x3BBF94u;
            goto label_3bbf94;
        }
    }
    ctx->pc = 0x3BBF78u;
label_3bbf78:
    // 0x3bbf78: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3bbf78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3bbf7c:
    // 0x3bbf7c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x3bbf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3bbf80:
    // 0x3bbf80: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x3bbf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bbf84:
    // 0x3bbf84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3bbf84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3bbf88:
    // 0x3bbf88: 0x0  nop
    ctx->pc = 0x3bbf88u;
    // NOP
label_3bbf8c:
    // 0x3bbf8c: 0x4500ffea  bc1f        . + 4 + (-0x16 << 2)
label_3bbf90:
    if (ctx->pc == 0x3BBF90u) {
        ctx->pc = 0x3BBF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBF8Cu;
        // 0x3bbf90: 0x2471818  mult        $v1, $s2, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBF94u;
        goto label_3bbf94;
    }
    ctx->pc = 0x3BBF8Cu;
    {
        const bool branch_taken_0x3bbf8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BBF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBF8Cu;
        // 0x3bbf90: 0x2471818  mult        $v1, $s2, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbf8c) {
            ctx->pc = 0x3BBF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bbf38;
        }
    }
    ctx->pc = 0x3BBF94u;
label_3bbf94:
    // 0x3bbf94: 0x1a600056  blez        $s3, . + 4 + (0x56 << 2)
label_3bbf98:
    if (ctx->pc == 0x3BBF98u) {
        ctx->pc = 0x3BBF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBF94u;
        // 0x3bbf98: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBF9Cu;
        goto label_3bbf9c;
    }
    ctx->pc = 0x3BBF94u;
    {
        const bool branch_taken_0x3bbf94 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3BBF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBF94u;
        // 0x3bbf98: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbf94) {
            ctx->pc = 0x3BC0F0u;
            goto label_3bc0f0;
        }
    }
    ctx->pc = 0x3BBF9Cu;
label_3bbf9c:
    // 0x3bbf9c: 0x131023  negu        $v0, $s3
    ctx->pc = 0x3bbf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_3bbfa0:
    // 0x3bbfa0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3bbfa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3bbfa4:
    // 0x3bbfa4: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_3bbfa8:
    if (ctx->pc == 0x3BBFA8u) {
        ctx->pc = 0x3BBFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBFA4u;
        // 0x3bbfa8: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBFACu;
        goto label_3bbfac;
    }
    ctx->pc = 0x3BBFA4u;
    {
        const bool branch_taken_0x3bbfa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBFA4u;
        // 0x3bbfa8: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbfa4) {
            ctx->pc = 0x3BC048u;
            goto label_3bc048;
        }
    }
    ctx->pc = 0x3BBFACu;
label_3bbfac:
    // 0x3bbfac: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3bbfacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3bbfb0:
    // 0x3bbfb0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_3bbfb4:
    if (ctx->pc == 0x3BBFB4u) {
        ctx->pc = 0x3BBFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBFB0u;
        // 0x3bbfb4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBFB8u;
        goto label_3bbfb8;
    }
    ctx->pc = 0x3BBFB0u;
    {
        const bool branch_taken_0x3bbfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBFB0u;
        // 0x3bbfb4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbfb0) {
            ctx->pc = 0x3BC018u;
            goto label_3bc018;
        }
    }
    ctx->pc = 0x3BBFB8u;
label_3bbfb8:
    // 0x3bbfb8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3bbfbc:
    if (ctx->pc == 0x3BBFBCu) {
        ctx->pc = 0x3BBFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBFB8u;
        // 0x3bbfbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBFC0u;
        goto label_3bbfc0;
    }
    ctx->pc = 0x3BBFB8u;
    {
        const bool branch_taken_0x3bbfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBFB8u;
        // 0x3bbfbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbfb8) {
            ctx->pc = 0x3BBFE8u;
            goto label_3bbfe8;
        }
    }
    ctx->pc = 0x3BBFC0u;
label_3bbfc0:
    // 0x3bbfc0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3bbfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3bbfc4:
    // 0x3bbfc4: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x3bbfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_3bbfc8:
    // 0x3bbfc8: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x3bbfc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3bbfcc:
    // 0x3bbfcc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3bbfccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bbfd0:
    // 0x3bbfd0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3bbfd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3bbfd4:
    // 0x3bbfd4: 0x60f809  jalr        $v1
label_3bbfd8:
    if (ctx->pc == 0x3BBFD8u) {
        ctx->pc = 0x3BBFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBFD4u;
        // 0x3bbfd8: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBFDCu;
        goto label_3bbfdc;
    }
    ctx->pc = 0x3BBFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3BBFDCu);
        ctx->pc = 0x3BBFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBFD4u;
        // 0x3bbfd8: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BBFD4u, 0x3BBFDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BBFDCu;
label_3bbfdc:
    // 0x3bbfdc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3bbfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3bbfe0:
    // 0x3bbfe0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3bbfe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3bbfe4:
    // 0x3bbfe4: 0x2672ffff  addiu       $s2, $s3, -0x1
    ctx->pc = 0x3bbfe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3bbfe8:
    // 0x3bbfe8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3bbfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3bbfec:
    // 0x3bbfec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bbfecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bbff0:
    // 0x3bbff0: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x3bbff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_3bbff4:
    // 0x3bbff4: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x3bbff4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3bbff8:
    // 0x3bbff8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3bbff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bbffc:
    // 0x3bbffc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3bbffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3bc000:
    // 0x3bc000: 0x60f809  jalr        $v1
label_3bc004:
    if (ctx->pc == 0x3BC004u) {
        ctx->pc = 0x3BC004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC000u;
        // 0x3bc004: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC008u;
        goto label_3bc008;
    }
    ctx->pc = 0x3BC000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3BC008u);
        ctx->pc = 0x3BC004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC000u;
        // 0x3bc004: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC000u, 0x3BC008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BC008u;
label_3bc008:
    // 0x3bc008: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3bc008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3bc00c:
    // 0x3bc00c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3bc00cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3bc010:
    // 0x3bc010: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3bc010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3bc014:
    // 0x3bc014: 0x0  nop
    ctx->pc = 0x3bc014u;
    // NOP
label_3bc018:
    // 0x3bc018: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3bc018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3bc01c:
    // 0x3bc01c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bc01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bc020:
    // 0x3bc020: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x3bc020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_3bc024:
    // 0x3bc024: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x3bc024u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3bc028:
    // 0x3bc028: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3bc028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bc02c:
    // 0x3bc02c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3bc02cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3bc030:
    // 0x3bc030: 0x60f809  jalr        $v1
label_3bc034:
    if (ctx->pc == 0x3BC034u) {
        ctx->pc = 0x3BC034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC030u;
        // 0x3bc034: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC038u;
        goto label_3bc038;
    }
    ctx->pc = 0x3BC030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3BC038u);
        ctx->pc = 0x3BC034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC030u;
        // 0x3bc034: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC030u, 0x3BC038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BC038u;
label_3bc038:
    // 0x3bc038: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3bc038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3bc03c:
    // 0x3bc03c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3bc03cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3bc040:
    // 0x3bc040: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
label_3bc044:
    if (ctx->pc == 0x3BC044u) {
        ctx->pc = 0x3BC044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC040u;
        // 0x3bc044: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC048u;
        goto label_3bc048;
    }
    ctx->pc = 0x3BC040u;
    {
        const bool branch_taken_0x3bc040 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC040u;
        // 0x3bc044: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc040) {
            ctx->pc = 0x3BC0F0u;
            goto label_3bc0f0;
        }
    }
    ctx->pc = 0x3BC048u;
label_3bc048:
    // 0x3bc048: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3bc048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3bc04c:
    // 0x3bc04c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bc04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bc050:
    // 0x3bc050: 0x8e280044  lw          $t0, 0x44($s1)
    ctx->pc = 0x3bc050u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_3bc054:
    // 0x3bc054: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x3bc054u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3bc058:
    // 0x3bc058: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3bc058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bc05c:
    // 0x3bc05c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3bc05cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3bc060:
    // 0x3bc060: 0x100f809  jalr        $t0
label_3bc064:
    if (ctx->pc == 0x3BC064u) {
        ctx->pc = 0x3BC064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC060u;
        // 0x3bc064: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC068u;
        goto label_3bc068;
    }
    ctx->pc = 0x3BC060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x3BC068u);
        ctx->pc = 0x3BC064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC060u;
        // 0x3bc064: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC060u, 0x3BC068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BC068u;
label_3bc068:
    // 0x3bc068: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3bc068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3bc06c:
    // 0x3bc06c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3bc06cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_3bc070:
    // 0x3bc070: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3bc070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3bc074:
    // 0x3bc074: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x3bc074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3bc078:
    // 0x3bc078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bc078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bc07c:
    // 0x3bc07c: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x3bc07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_3bc080:
    // 0x3bc080: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3bc080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bc084:
    // 0x3bc084: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3bc084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3bc088:
    // 0x3bc088: 0x40f809  jalr        $v0
label_3bc08c:
    if (ctx->pc == 0x3BC08Cu) {
        ctx->pc = 0x3BC08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC088u;
        // 0x3bc08c: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC090u;
        goto label_3bc090;
    }
    ctx->pc = 0x3BC088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BC090u);
        ctx->pc = 0x3BC08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC088u;
        // 0x3bc08c: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC088u, 0x3BC090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BC090u;
label_3bc090:
    // 0x3bc090: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3bc090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3bc094:
    // 0x3bc094: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3bc094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_3bc098:
    // 0x3bc098: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3bc098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3bc09c:
    // 0x3bc09c: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x3bc09cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3bc0a0:
    // 0x3bc0a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bc0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bc0a4:
    // 0x3bc0a4: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x3bc0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_3bc0a8:
    // 0x3bc0a8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3bc0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bc0ac:
    // 0x3bc0ac: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3bc0acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3bc0b0:
    // 0x3bc0b0: 0x40f809  jalr        $v0
label_3bc0b4:
    if (ctx->pc == 0x3BC0B4u) {
        ctx->pc = 0x3BC0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC0B0u;
        // 0x3bc0b4: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC0B8u;
        goto label_3bc0b8;
    }
    ctx->pc = 0x3BC0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BC0B8u);
        ctx->pc = 0x3BC0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC0B0u;
        // 0x3bc0b4: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC0B0u, 0x3BC0B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BC0B8u;
label_3bc0b8:
    // 0x3bc0b8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3bc0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3bc0bc:
    // 0x3bc0bc: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3bc0bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_3bc0c0:
    // 0x3bc0c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3bc0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3bc0c4:
    // 0x3bc0c4: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x3bc0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3bc0c8:
    // 0x3bc0c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bc0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bc0cc:
    // 0x3bc0cc: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x3bc0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_3bc0d0:
    // 0x3bc0d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3bc0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bc0d4:
    // 0x3bc0d4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3bc0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3bc0d8:
    // 0x3bc0d8: 0x60f809  jalr        $v1
label_3bc0dc:
    if (ctx->pc == 0x3BC0DCu) {
        ctx->pc = 0x3BC0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC0D8u;
        // 0x3bc0dc: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC0E0u;
        goto label_3bc0e0;
    }
    ctx->pc = 0x3BC0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3BC0E0u);
        ctx->pc = 0x3BC0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC0D8u;
        // 0x3bc0dc: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC0D8u, 0x3BC0E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BC0E0u;
label_3bc0e0:
    // 0x3bc0e0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3bc0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3bc0e4:
    // 0x3bc0e4: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x3bc0e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_3bc0e8:
    // 0x3bc0e8: 0x1640ffd7  bnez        $s2, . + 4 + (-0x29 << 2)
label_3bc0ec:
    if (ctx->pc == 0x3BC0ECu) {
        ctx->pc = 0x3BC0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC0E8u;
        // 0x3bc0ec: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC0F0u;
        goto label_3bc0f0;
    }
    ctx->pc = 0x3BC0E8u;
    {
        const bool branch_taken_0x3bc0e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BC0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC0E8u;
        // 0x3bc0ec: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc0e8) {
            ctx->pc = 0x3BC048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bc048;
        }
    }
    ctx->pc = 0x3BC0F0u;
label_3bc0f0:
    // 0x3bc0f0: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_3bc0f4:
    if (ctx->pc == 0x3BC0F4u) {
        ctx->pc = 0x3BC0F8u;
        goto label_3bc0f8;
    }
    ctx->pc = 0x3BC0F0u;
    {
        const bool branch_taken_0x3bc0f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc0f0) {
            ctx->pc = 0x3BC118u;
            goto label_3bc118;
        }
    }
    ctx->pc = 0x3BC0F8u;
label_3bc0f8:
    // 0x3bc0f8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3bc0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3bc0fc:
    // 0x3bc0fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3bc100:
    if (ctx->pc == 0x3BC100u) {
        ctx->pc = 0x3BC104u;
        goto label_3bc104;
    }
    ctx->pc = 0x3BC0FCu;
    {
        const bool branch_taken_0x3bc0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc0fc) {
            ctx->pc = 0x3BC118u;
            goto label_3bc118;
        }
    }
    ctx->pc = 0x3BC104u;
label_3bc104:
    // 0x3bc104: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x3bc104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3bc108:
    // 0x3bc108: 0x40f809  jalr        $v0
label_3bc10c:
    if (ctx->pc == 0x3BC10Cu) {
        ctx->pc = 0x3BC10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC108u;
        // 0x3bc10c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC110u;
        goto label_3bc110;
    }
    ctx->pc = 0x3BC108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BC110u);
        ctx->pc = 0x3BC10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC108u;
        // 0x3bc10c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC108u, 0x3BC110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BC110u;
label_3bc110:
    // 0x3bc110: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3bc114:
    if (ctx->pc == 0x3BC114u) {
        ctx->pc = 0x3BC114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC110u;
        // 0x3bc114: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC118u;
        goto label_3bc118;
    }
    ctx->pc = 0x3BC110u;
    {
        const bool branch_taken_0x3bc110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc110) {
            ctx->pc = 0x3BC114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BC110u;
            // 0x3bc114: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BC118u;
            goto label_3bc118;
        }
    }
    ctx->pc = 0x3BC118u;
label_3bc118:
    // 0x3bc118: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
label_3bc11c:
    if (ctx->pc == 0x3BC11Cu) {
        ctx->pc = 0x3BC11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC118u;
        // 0x3bc11c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC120u;
        goto label_3bc120;
    }
    ctx->pc = 0x3BC118u;
    {
        const bool branch_taken_0x3bc118 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC118u;
        // 0x3bc11c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc118) {
            ctx->pc = 0x3BC144u;
            goto label_3bc144;
        }
    }
    ctx->pc = 0x3BC120u;
label_3bc120:
    // 0x3bc120: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x3bc120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3bc124:
    // 0x3bc124: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3bc128:
    if (ctx->pc == 0x3BC128u) {
        ctx->pc = 0x3BC128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC124u;
        // 0x3bc128: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC12Cu;
        goto label_3bc12c;
    }
    ctx->pc = 0x3BC124u;
    {
        const bool branch_taken_0x3bc124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc124) {
            ctx->pc = 0x3BC128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BC124u;
            // 0x3bc128: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BC148u;
            goto label_3bc148;
        }
    }
    ctx->pc = 0x3BC12Cu;
label_3bc12c:
    // 0x3bc12c: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x3bc12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3bc130:
    // 0x3bc130: 0x40f809  jalr        $v0
label_3bc134:
    if (ctx->pc == 0x3BC134u) {
        ctx->pc = 0x3BC134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC130u;
        // 0x3bc134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC138u;
        goto label_3bc138;
    }
    ctx->pc = 0x3BC130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BC138u);
        ctx->pc = 0x3BC134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC130u;
        // 0x3bc134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC130u, 0x3BC138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BC138u;
label_3bc138:
    // 0x3bc138: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3bc13c:
    if (ctx->pc == 0x3BC13Cu) {
        ctx->pc = 0x3BC13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC138u;
        // 0x3bc13c: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC140u;
        goto label_3bc140;
    }
    ctx->pc = 0x3BC138u;
    {
        const bool branch_taken_0x3bc138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc138) {
            ctx->pc = 0x3BC13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BC138u;
            // 0x3bc13c: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BC140u;
            goto label_3bc140;
        }
    }
    ctx->pc = 0x3BC140u;
label_3bc140:
    // 0x3bc140: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3bc140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3bc144:
    // 0x3bc144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bc144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bc148:
    // 0x3bc148: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3bc148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3bc14c:
    // 0x3bc14c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3bc14cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3bc150:
    // 0x3bc150: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3bc150u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3bc154:
    // 0x3bc154: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3bc154u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bc158:
    // 0x3bc158: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3bc158u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bc15c:
    // 0x3bc15c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3bc15cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bc160:
    // 0x3bc160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bc160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bc164:
    // 0x3bc164: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x3bc164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3bc168:
    // 0x3bc168: 0x3e00008  jr          $ra
label_3bc16c:
    if (ctx->pc == 0x3BC16Cu) {
        ctx->pc = 0x3BC16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC168u;
        // 0x3bc16c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC170u;
        goto label_3bc170;
    }
    ctx->pc = 0x3BC168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BC16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC168u;
        // 0x3bc16c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BC170u;
label_3bc170:
    // 0x3bc170: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3bc170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3bc174:
    // 0x3bc174: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3bc174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3bc178:
    // 0x3bc178: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3bc178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3bc17c:
    // 0x3bc17c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3bc17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3bc180:
    // 0x3bc180: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3bc180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_3bc184:
    // 0x3bc184: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3bc184u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bc188:
    // 0x3bc188: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x3bc188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_3bc18c:
    // 0x3bc18c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3bc18cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bc190:
    // 0x3bc190: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3bc190u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3bc194:
    // 0x3bc194: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x3bc194u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3bc198:
    // 0x3bc198: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3bc198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3bc19c:
    // 0x3bc19c: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3bc19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3bc1a0:
    // 0x3bc1a0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3bc1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3bc1a4:
    // 0x3bc1a4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3bc1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3bc1a8:
    // 0x3bc1a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3bc1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3bc1ac:
    // 0x3bc1ac: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3bc1acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_3bc1b0:
    // 0x3bc1b0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3bc1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_3bc1b4:
    // 0x3bc1b4: 0x34a5001b  ori         $a1, $a1, 0x1B
    ctx->pc = 0x3bc1b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27);
label_3bc1b8:
    // 0x3bc1b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bc1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3bc1bc:
    // 0x3bc1bc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3bc1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3bc1c0:
    // 0x3bc1c0: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x3bc1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3bc1c4:
    // 0x3bc1c4: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3bc1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3bc1c8:
    // 0x3bc1c8: 0x2d02018  mult        $a0, $s6, $s0
    ctx->pc = 0x3bc1c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3bc1cc:
    // 0x3bc1cc: 0x40f809  jalr        $v0
label_3bc1d0:
    if (ctx->pc == 0x3BC1D0u) {
        ctx->pc = 0x3BC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC1CCu;
        // 0x3bc1d0: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC1D4u;
        goto label_3bc1d4;
    }
    ctx->pc = 0x3BC1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BC1D4u);
        ctx->pc = 0x3BC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC1CCu;
        // 0x3bc1d0: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC1CCu, 0x3BC1D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BC1D4u;
label_3bc1d4:
    // 0x3bc1d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3bc1d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bc1d8:
    // 0x3bc1d8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3bc1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3bc1dc:
    // 0x3bc1dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3bc1dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3bc1e0:
    // 0x3bc1e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3bc1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3bc1e4:
    // 0x3bc1e4: 0xae300020  sw          $s0, 0x20($s1)
    ctx->pc = 0x3bc1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 16));
label_3bc1e8:
    // 0x3bc1e8: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x3bc1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_3bc1ec:
    // 0x3bc1ec: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x3bc1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_3bc1f0:
    // 0x3bc1f0: 0xae36002c  sw          $s6, 0x2C($s1)
    ctx->pc = 0x3bc1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 22));
label_3bc1f4:
    // 0x3bc1f4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3bc1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3bc1f8:
    // 0x3bc1f8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3bc1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_3bc1fc:
    // 0x3bc1fc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3bc1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3bc200:
    // 0x3bc200: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3bc200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_3bc204:
    // 0x3bc204: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3bc204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_3bc208:
    // 0x3bc208: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x3bc208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_3bc20c:
    // 0x3bc20c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x3bc20cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_3bc210:
    // 0x3bc210: 0xae300024  sw          $s0, 0x24($s1)
    ctx->pc = 0x3bc210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 16));
label_3bc214:
    // 0x3bc214: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x3bc214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_3bc218:
    // 0x3bc218: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x3bc218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_3bc21c:
    // 0x3bc21c: 0xae310038  sw          $s1, 0x38($s1)
    ctx->pc = 0x3bc21cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 17));
label_3bc220:
    // 0x3bc220: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x3bc220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_3bc224:
    // 0x3bc224: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x3bc224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_3bc228:
    // 0x3bc228: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x3bc228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_3bc22c:
    // 0x3bc22c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_3bc230:
    if (ctx->pc == 0x3BC230u) {
        ctx->pc = 0x3BC230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC22Cu;
        // 0x3bc230: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC234u;
        goto label_3bc234;
    }
    ctx->pc = 0x3BC22Cu;
    {
        const bool branch_taken_0x3bc22c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BC230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC22Cu;
        // 0x3bc230: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc22c) {
            ctx->pc = 0x3BC23Cu;
            goto label_3bc23c;
        }
    }
    ctx->pc = 0x3BC234u;
label_3bc234:
    // 0x3bc234: 0x1000003d  b           . + 4 + (0x3D << 2)
label_3bc238:
    if (ctx->pc == 0x3BC238u) {
        ctx->pc = 0x3BC238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC234u;
        // 0x3bc238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC23Cu;
        goto label_3bc23c;
    }
    ctx->pc = 0x3BC234u;
    {
        const bool branch_taken_0x3bc234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC234u;
        // 0x3bc238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc234) {
            ctx->pc = 0x3BC32Cu;
            goto label_3bc32c;
        }
    }
    ctx->pc = 0x3BC23Cu;
label_3bc23c:
    // 0x3bc23c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bc23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bc240:
    // 0x3bc240: 0xc0eee8c  jal         func_3BBA30
label_3bc244:
    if (ctx->pc == 0x3BC244u) {
        ctx->pc = 0x3BC244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC240u;
        // 0x3bc244: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC248u;
        goto label_3bc248;
    }
    ctx->pc = 0x3BC240u;
    SET_GPR_U32(ctx, 31, 0x3BC248u);
    ctx->pc = 0x3BC244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC240u;
    // 0x3bc244: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBA30u, 0x3BC240u, 0x3BC248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC248u;
label_3bc248:
    // 0x3bc248: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3bc248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bc24c:
    // 0x3bc24c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3bc24cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3bc250:
    // 0x3bc250: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x3bc250u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_3bc254:
    // 0x3bc254: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x3bc254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3bc258:
    // 0x3bc258: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_3bc25c:
    if (ctx->pc == 0x3BC25Cu) {
        ctx->pc = 0x3BC260u;
        goto label_3bc260;
    }
    ctx->pc = 0x3BC258u;
    {
        const bool branch_taken_0x3bc258 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bc258) {
            ctx->pc = 0x3BC274u;
            goto label_3bc274;
        }
    }
    ctx->pc = 0x3BC260u;
label_3bc260:
    // 0x3bc260: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x3bc260u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_3bc264:
    // 0x3bc264: 0xc0eef00  jal         func_3BBC00
label_3bc268:
    if (ctx->pc == 0x3BC268u) {
        ctx->pc = 0x3BC268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC264u;
        // 0x3bc268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC26Cu;
        goto label_3bc26c;
    }
    ctx->pc = 0x3BC264u;
    SET_GPR_U32(ctx, 31, 0x3BC26Cu);
    ctx->pc = 0x3BC268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC264u;
    // 0x3bc268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBC00u, 0x3BC264u, 0x3BC26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC26Cu;
label_3bc26c:
    // 0x3bc26c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3bc270:
    if (ctx->pc == 0x3BC270u) {
        ctx->pc = 0x3BC270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC26Cu;
        // 0x3bc270: 0x2632004c  addiu       $s2, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC274u;
        goto label_3bc274;
    }
    ctx->pc = 0x3BC26Cu;
    {
        const bool branch_taken_0x3bc26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC26Cu;
        // 0x3bc270: 0x2632004c  addiu       $s2, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc26c) {
            ctx->pc = 0x3BC280u;
            goto label_3bc280;
        }
    }
    ctx->pc = 0x3BC274u;
label_3bc274:
    // 0x3bc274: 0xc0eef7c  jal         func_3BBDF0
label_3bc278:
    if (ctx->pc == 0x3BC278u) {
        ctx->pc = 0x3BC278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC274u;
        // 0x3bc278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC27Cu;
        goto label_3bc27c;
    }
    ctx->pc = 0x3BC274u;
    SET_GPR_U32(ctx, 31, 0x3BC27Cu);
    ctx->pc = 0x3BC278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC274u;
    // 0x3bc278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBDF0u;
    goto label_3bbdf0;
    ctx->pc = 0x3BC27Cu;
label_3bc27c:
    // 0x3bc27c: 0x2632004c  addiu       $s2, $s1, 0x4C
    ctx->pc = 0x3bc27cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_3bc280:
    // 0x3bc280: 0x8e750010  lw          $s5, 0x10($s3)
    ctx->pc = 0x3bc280u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3bc284:
    // 0x3bc284: 0x1ac00024  blez        $s6, . + 4 + (0x24 << 2)
label_3bc288:
    if (ctx->pc == 0x3BC288u) {
        ctx->pc = 0x3BC288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC284u;
        // 0x3bc288: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC28Cu;
        goto label_3bc28c;
    }
    ctx->pc = 0x3BC284u;
    {
        const bool branch_taken_0x3bc284 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x3BC288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC284u;
        // 0x3bc288: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc284) {
            ctx->pc = 0x3BC318u;
            goto label_3bc318;
        }
    }
    ctx->pc = 0x3BC28Cu;
label_3bc28c:
    // 0x3bc28c: 0x0  nop
    ctx->pc = 0x3bc28cu;
    // NOP
label_3bc290:
    // 0x3bc290: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x3bc290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3bc294:
    // 0x3bc294: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x3bc294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3bc298:
    // 0x3bc298: 0x1000000f  b           . + 4 + (0xF << 2)
label_3bc29c:
    if (ctx->pc == 0x3BC29Cu) {
        ctx->pc = 0x3BC29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC298u;
        // 0x3bc29c: 0x24b40001  addiu       $s4, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC2A0u;
        goto label_3bc2a0;
    }
    ctx->pc = 0x3BC298u;
    {
        const bool branch_taken_0x3bc298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC298u;
        // 0x3bc29c: 0x24b40001  addiu       $s4, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc298) {
            ctx->pc = 0x3BC2D8u;
            goto label_3bc2d8;
        }
    }
    ctx->pc = 0x3BC2A0u;
label_3bc2a0:
    // 0x3bc2a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3bc2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bc2a4:
    // 0x3bc2a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3bc2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bc2a8:
    // 0x3bc2a8: 0x1050000a  beq         $v0, $s0, . + 4 + (0xA << 2)
label_3bc2ac:
    if (ctx->pc == 0x3BC2ACu) {
        ctx->pc = 0x3BC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC2A8u;
        // 0x3bc2ac: 0x8e660000  lw          $a2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC2B0u;
        goto label_3bc2b0;
    }
    ctx->pc = 0x3BC2A8u;
    {
        const bool branch_taken_0x3bc2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3BC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC2A8u;
        // 0x3bc2ac: 0x8e660000  lw          $a2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc2a8) {
            ctx->pc = 0x3BC2D4u;
            goto label_3bc2d4;
        }
    }
    ctx->pc = 0x3BC2B0u;
label_3bc2b0:
    // 0x3bc2b0: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x3bc2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3bc2b4:
    // 0x3bc2b4: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3bc2b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bc2b8:
    // 0x3bc2b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3bc2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3bc2bc:
    // 0x3bc2bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3bc2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3bc2c0:
    // 0x3bc2c0: 0x0  nop
    ctx->pc = 0x3bc2c0u;
    // NOP
label_3bc2c4:
    // 0x3bc2c4: 0x0  nop
    ctx->pc = 0x3bc2c4u;
    // NOP
label_3bc2c8:
    // 0x3bc2c8: 0x0  nop
    ctx->pc = 0x3bc2c8u;
    // NOP
label_3bc2cc:
    // 0x3bc2cc: 0x1450fffa  bne         $v0, $s0, . + 4 + (-0x6 << 2)
label_3bc2d0:
    if (ctx->pc == 0x3BC2D0u) {
        ctx->pc = 0x3BC2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC2CCu;
        // 0x3bc2d0: 0xa42821  addu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC2D4u;
        goto label_3bc2d4;
    }
    ctx->pc = 0x3BC2CCu;
    {
        const bool branch_taken_0x3bc2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3BC2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC2CCu;
        // 0x3bc2d0: 0xa42821  addu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc2cc) {
            ctx->pc = 0x3BC2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bc2b8;
        }
    }
    ctx->pc = 0x3BC2D4u;
label_3bc2d4:
    // 0x3bc2d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3bc2d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bc2d8:
    // 0x3bc2d8: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x3bc2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_3bc2dc:
    // 0x3bc2dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bc2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bc2e0:
    // 0x3bc2e0: 0x40f809  jalr        $v0
label_3bc2e4:
    if (ctx->pc == 0x3BC2E4u) {
        ctx->pc = 0x3BC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC2E0u;
        // 0x3bc2e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC2E8u;
        goto label_3bc2e8;
    }
    ctx->pc = 0x3BC2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BC2E8u);
        ctx->pc = 0x3BC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC2E0u;
        // 0x3bc2e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC2E0u, 0x3BC2E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BC2E8u;
label_3bc2e8:
    // 0x3bc2e8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x3bc2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3bc2ec:
    // 0x3bc2ec: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x3bc2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bc2f0:
    // 0x3bc2f0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3bc2f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3bc2f4:
    // 0x3bc2f4: 0x0  nop
    ctx->pc = 0x3bc2f4u;
    // NOP
label_3bc2f8:
    // 0x3bc2f8: 0x4500ffe9  bc1f        . + 4 + (-0x17 << 2)
label_3bc2fc:
    if (ctx->pc == 0x3BC2FCu) {
        ctx->pc = 0x3BC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC2F8u;
        // 0x3bc2fc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC300u;
        goto label_3bc300;
    }
    ctx->pc = 0x3BC2F8u;
    {
        const bool branch_taken_0x3bc2f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC2F8u;
        // 0x3bc2fc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc2f8) {
            ctx->pc = 0x3BC2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bc2a0;
        }
    }
    ctx->pc = 0x3BC300u;
label_3bc300:
    // 0x3bc300: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3bc300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3bc304:
    // 0x3bc304: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x3bc304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3bc308:
    // 0x3bc308: 0xb6202a  slt         $a0, $a1, $s6
    ctx->pc = 0x3bc308u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_3bc30c:
    // 0x3bc30c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x3bc30cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3bc310:
    // 0x3bc310: 0x1480ffdf  bnez        $a0, . + 4 + (-0x21 << 2)
label_3bc314:
    if (ctx->pc == 0x3BC314u) {
        ctx->pc = 0x3BC314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC310u;
        // 0x3bc314: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC318u;
        goto label_3bc318;
    }
    ctx->pc = 0x3BC310u;
    {
        const bool branch_taken_0x3bc310 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BC314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC310u;
        // 0x3bc314: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc310) {
            ctx->pc = 0x3BC290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bc290;
        }
    }
    ctx->pc = 0x3BC318u;
label_3bc318:
    // 0x3bc318: 0x26e3e880  addiu       $v1, $s7, -0x1780
    ctx->pc = 0x3bc318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
label_3bc31c:
    // 0x3bc31c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3bc31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3bc320:
    // 0x3bc320: 0x40f809  jalr        $v0
label_3bc324:
    if (ctx->pc == 0x3BC324u) {
        ctx->pc = 0x3BC324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC320u;
        // 0x3bc324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC328u;
        goto label_3bc328;
    }
    ctx->pc = 0x3BC320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BC328u);
        ctx->pc = 0x3BC324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC320u;
        // 0x3bc324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC320u, 0x3BC328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BC328u;
label_3bc328:
    // 0x3bc328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bc328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bc32c:
    // 0x3bc32c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3bc32cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3bc330:
    // 0x3bc330: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3bc330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3bc334:
    // 0x3bc334: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3bc334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3bc338:
    // 0x3bc338: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3bc338u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3bc33c:
    // 0x3bc33c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3bc33cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3bc340:
    // 0x3bc340: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3bc340u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bc344:
    // 0x3bc344: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3bc344u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bc348:
    // 0x3bc348: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x3bc348u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bc34c:
    // 0x3bc34c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bc34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bc350:
    // 0x3bc350: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3bc350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3bc354:
    // 0x3bc354: 0x3e00008  jr          $ra
label_3bc358:
    if (ctx->pc == 0x3BC358u) {
        ctx->pc = 0x3BC358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC354u;
        // 0x3bc358: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC35Cu;
        goto label_3bc35c;
    }
    ctx->pc = 0x3BC354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BC358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC354u;
        // 0x3bc358: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BC35Cu;
label_3bc35c:
    // 0x3bc35c: 0x0  nop
    ctx->pc = 0x3bc35cu;
    // NOP
label_3bc360:
    // 0x3bc360: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3bc360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3bc364:
    // 0x3bc364: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3bc364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bc368:
    // 0x3bc368: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3bc368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3bc36c:
    // 0x3bc36c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3bc36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3bc370:
    // 0x3bc370: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bc370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bc374:
    // 0x3bc374: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3bc374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3bc378:
    // 0x3bc378: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3bc378u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bc37c:
    // 0x3bc37c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x3bc37cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3bc380:
    // 0x3bc380: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3bc380u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3bc384:
    // 0x3bc384: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3bc384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3bc388:
    // 0x3bc388: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3bc388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_3bc38c:
    // 0x3bc38c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3bc38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_3bc390:
    // 0x3bc390: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3bc390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_3bc394:
    // 0x3bc394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bc394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3bc398:
    // 0x3bc398: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x3bc398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3bc39c:
    // 0x3bc39c: 0x14430026  bne         $v0, $v1, . + 4 + (0x26 << 2)
label_3bc3a0:
    if (ctx->pc == 0x3BC3A0u) {
        ctx->pc = 0x3BC3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC39Cu;
        // 0x3bc3a0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC3A4u;
        goto label_3bc3a4;
    }
    ctx->pc = 0x3BC39Cu;
    {
        const bool branch_taken_0x3bc39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3BC3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC39Cu;
        // 0x3bc3a0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc39c) {
            ctx->pc = 0x3BC438u;
            goto label_3bc438;
        }
    }
    ctx->pc = 0x3BC3A4u;
label_3bc3a4:
    // 0x3bc3a4: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x3bc3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_3bc3a8:
    // 0x3bc3a8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3bc3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3bc3ac:
    // 0x3bc3ac: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x3bc3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_3bc3b0:
    // 0x3bc3b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3bc3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3bc3b4:
    // 0x3bc3b4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3bc3b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3bc3b8:
    // 0x3bc3b8: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
label_3bc3bc:
    if (ctx->pc == 0x3BC3BCu) {
        ctx->pc = 0x3BC3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC3B8u;
        // 0x3bc3bc: 0x8e660034  lw          $a2, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC3C0u;
        goto label_3bc3c0;
    }
    ctx->pc = 0x3BC3B8u;
    {
        const bool branch_taken_0x3bc3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC3B8u;
        // 0x3bc3bc: 0x8e660034  lw          $a2, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc3b8) {
            ctx->pc = 0x3BC5F0u;
            goto label_3bc5f0;
        }
    }
    ctx->pc = 0x3BC3C0u;
label_3bc3c0:
    // 0x3bc3c0: 0x206b023  subu        $s6, $s0, $a2
    ctx->pc = 0x3bc3c0u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_3bc3c4:
    // 0x3bc3c4: 0x205a823  subu        $s5, $s0, $a1
    ctx->pc = 0x3bc3c4u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_3bc3c8:
    // 0x3bc3c8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3bc3c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bc3cc:
    // 0x3bc3cc: 0x0  nop
    ctx->pc = 0x3bc3ccu;
    // NOP
label_3bc3d0:
    // 0x3bc3d0: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x3bc3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3bc3d4:
    // 0x3bc3d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3bc3d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3bc3d8:
    // 0x3bc3d8: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x3bc3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3bc3dc:
    // 0x3bc3dc: 0x8e660024  lw          $a2, 0x24($s3)
    ctx->pc = 0x3bc3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_3bc3e0:
    // 0x3bc3e0: 0x2842018  mult        $a0, $s4, $a0
    ctx->pc = 0x3bc3e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3bc3e4:
    // 0x3bc3e4: 0x2a52818  mult        $a1, $s5, $a1
    ctx->pc = 0x3bc3e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3bc3e8:
    // 0x3bc3e8: 0x8e2b0040  lw          $t3, 0x40($s1)
    ctx->pc = 0x3bc3e8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_3bc3ec:
    // 0x3bc3ec: 0x2c63018  mult        $a2, $s6, $a2
    ctx->pc = 0x3bc3ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3bc3f0:
    // 0x3bc3f0: 0x2484004c  addiu       $a0, $a0, 0x4C
    ctx->pc = 0x3bc3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
label_3bc3f4:
    // 0x3bc3f4: 0x24a5004c  addiu       $a1, $a1, 0x4C
    ctx->pc = 0x3bc3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
label_3bc3f8:
    // 0x3bc3f8: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x3bc3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_3bc3fc:
    // 0x3bc3fc: 0x24c6004c  addiu       $a2, $a2, 0x4C
    ctx->pc = 0x3bc3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 76));
label_3bc400:
    // 0x3bc400: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x3bc400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_3bc404:
    // 0x3bc404: 0x160f809  jalr        $t3
label_3bc408:
    if (ctx->pc == 0x3BC408u) {
        ctx->pc = 0x3BC408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC404u;
        // 0x3bc408: 0x2663021  addu        $a2, $s3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC40Cu;
        goto label_3bc40c;
    }
    ctx->pc = 0x3BC404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 11);
        SET_GPR_U32(ctx, 31, 0x3BC40Cu);
        ctx->pc = 0x3BC408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC404u;
        // 0x3bc408: 0x2663021  addu        $a2, $s3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC404u, 0x3BC40Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BC40Cu;
label_3bc40c:
    // 0x3bc40c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3bc40cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3bc410:
    // 0x3bc410: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3bc410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3bc414:
    // 0x3bc414: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3bc414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3bc418:
    // 0x3bc418: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x3bc418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_3bc41c:
    // 0x3bc41c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3bc41cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3bc420:
    // 0x3bc420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3bc420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3bc424:
    // 0x3bc424: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3bc424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3bc428:
    // 0x3bc428: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_3bc42c:
    if (ctx->pc == 0x3BC42Cu) {
        ctx->pc = 0x3BC42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC428u;
        // 0x3bc42c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC430u;
        goto label_3bc430;
    }
    ctx->pc = 0x3BC428u;
    {
        const bool branch_taken_0x3bc428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BC42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC428u;
        // 0x3bc42c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc428) {
            ctx->pc = 0x3BC3D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bc3d0;
        }
    }
    ctx->pc = 0x3BC430u;
label_3bc430:
    // 0x3bc430: 0x10000070  b           . + 4 + (0x70 << 2)
label_3bc434:
    if (ctx->pc == 0x3BC434u) {
        ctx->pc = 0x3BC434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC430u;
        // 0x3bc434: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC438u;
        goto label_3bc438;
    }
    ctx->pc = 0x3BC430u;
    {
        const bool branch_taken_0x3bc430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC430u;
        // 0x3bc434: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc430) {
            ctx->pc = 0x3BC5F4u;
            goto label_3bc5f4;
        }
    }
    ctx->pc = 0x3BC438u;
label_3bc438:
    // 0x3bc438: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x3bc438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_3bc43c:
    // 0x3bc43c: 0x54430038  bnel        $v0, $v1, . + 4 + (0x38 << 2)
label_3bc440:
    if (ctx->pc == 0x3BC440u) {
        ctx->pc = 0x3BC440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC43Cu;
        // 0x3bc440: 0x8e660034  lw          $a2, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC444u;
        goto label_3bc444;
    }
    ctx->pc = 0x3BC43Cu;
    {
        const bool branch_taken_0x3bc43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3bc43c) {
            ctx->pc = 0x3BC440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BC43Cu;
            // 0x3bc440: 0x8e660034  lw          $a2, 0x34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BC520u;
            goto label_3bc520;
        }
    }
    ctx->pc = 0x3BC444u;
label_3bc444:
    // 0x3bc444: 0x8e460034  lw          $a2, 0x34($s2)
    ctx->pc = 0x3bc444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_3bc448:
    // 0x3bc448: 0x2624004c  addiu       $a0, $s1, 0x4C
    ctx->pc = 0x3bc448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_3bc44c:
    // 0x3bc44c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3bc44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3bc450:
    // 0x3bc450: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x3bc450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3bc454:
    // 0x3bc454: 0x3012  mflo        $a2
    ctx->pc = 0x3bc454u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_3bc458:
    // 0x3bc458: 0xc0bb778  jal         func_2EDDE0
label_3bc45c:
    if (ctx->pc == 0x3BC45Cu) {
        ctx->pc = 0x3BC45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC458u;
        // 0x3bc45c: 0x2665004c  addiu       $a1, $s3, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC460u;
        goto label_3bc460;
    }
    ctx->pc = 0x3BC458u;
    SET_GPR_U32(ctx, 31, 0x3BC460u);
    ctx->pc = 0x3BC45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC458u;
    // 0x3bc45c: 0x2665004c  addiu       $a1, $s3, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3BC458u, 0x3BC460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC460u;
label_3bc460:
    // 0x3bc460: 0x8e500034  lw          $s0, 0x34($s2)
    ctx->pc = 0x3bc460u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_3bc464:
    // 0x3bc464: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x3bc464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_3bc468:
    // 0x3bc468: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3bc468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3bc46c:
    // 0x3bc46c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3bc46cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3bc470:
    // 0x3bc470: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_3bc474:
    if (ctx->pc == 0x3BC474u) {
        ctx->pc = 0x3BC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC470u;
        // 0x3bc474: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC478u;
        goto label_3bc478;
    }
    ctx->pc = 0x3BC470u;
    {
        const bool branch_taken_0x3bc470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC470u;
        // 0x3bc474: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc470) {
            ctx->pc = 0x3BC4D8u;
            goto label_3bc4d8;
        }
    }
    ctx->pc = 0x3BC478u;
label_3bc478:
    // 0x3bc478: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x3bc478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3bc47c:
    // 0x3bc47c: 0x0  nop
    ctx->pc = 0x3bc47cu;
    // NOP
label_3bc480:
    // 0x3bc480: 0x2032823  subu        $a1, $s0, $v1
    ctx->pc = 0x3bc480u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_3bc484:
    // 0x3bc484: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x3bc484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3bc488:
    // 0x3bc488: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3bc488u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3bc48c:
    // 0x3bc48c: 0x8e660024  lw          $a2, 0x24($s3)
    ctx->pc = 0x3bc48cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_3bc490:
    // 0x3bc490: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x3bc490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3bc494:
    // 0x3bc494: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x3bc494u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3bc498:
    // 0x3bc498: 0x8e2c0040  lw          $t4, 0x40($s1)
    ctx->pc = 0x3bc498u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_3bc49c:
    // 0x3bc49c: 0x2063018  mult        $a2, $s0, $a2
    ctx->pc = 0x3bc49cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3bc4a0:
    // 0x3bc4a0: 0x2484004c  addiu       $a0, $a0, 0x4C
    ctx->pc = 0x3bc4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
label_3bc4a4:
    // 0x3bc4a4: 0x24a5004c  addiu       $a1, $a1, 0x4C
    ctx->pc = 0x3bc4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
label_3bc4a8:
    // 0x3bc4a8: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x3bc4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_3bc4ac:
    // 0x3bc4ac: 0x24c6004c  addiu       $a2, $a2, 0x4C
    ctx->pc = 0x3bc4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 76));
label_3bc4b0:
    // 0x3bc4b0: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x3bc4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_3bc4b4:
    // 0x3bc4b4: 0x180f809  jalr        $t4
label_3bc4b8:
    if (ctx->pc == 0x3BC4B8u) {
        ctx->pc = 0x3BC4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC4B4u;
        // 0x3bc4b8: 0x2663021  addu        $a2, $s3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC4BCu;
        goto label_3bc4bc;
    }
    ctx->pc = 0x3BC4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 12);
        SET_GPR_U32(ctx, 31, 0x3BC4BCu);
        ctx->pc = 0x3BC4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC4B4u;
        // 0x3bc4b8: 0x2663021  addu        $a2, $s3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC4B4u, 0x3BC4BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BC4BCu;
label_3bc4bc:
    // 0x3bc4bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3bc4bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3bc4c0:
    // 0x3bc4c0: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x3bc4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_3bc4c4:
    // 0x3bc4c4: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x3bc4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_3bc4c8:
    // 0x3bc4c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3bc4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3bc4cc:
    // 0x3bc4cc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3bc4ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3bc4d0:
    // 0x3bc4d0: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
label_3bc4d4:
    if (ctx->pc == 0x3BC4D4u) {
        ctx->pc = 0x3BC4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC4D0u;
        // 0x3bc4d4: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC4D8u;
        goto label_3bc4d8;
    }
    ctx->pc = 0x3BC4D0u;
    {
        const bool branch_taken_0x3bc4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc4d0) {
            ctx->pc = 0x3BC4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BC4D0u;
            // 0x3bc4d4: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BC480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bc480;
        }
    }
    ctx->pc = 0x3BC4D8u;
label_3bc4d8:
    // 0x3bc4d8: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x3bc4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_3bc4dc:
    // 0x3bc4dc: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x3bc4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_3bc4e0:
    // 0x3bc4e0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3bc4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3bc4e4:
    // 0x3bc4e4: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x3bc4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3bc4e8:
    // 0x3bc4e8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3bc4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3bc4ec:
    // 0x3bc4ec: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x3bc4ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3bc4f0:
    // 0x3bc4f0: 0x8e670024  lw          $a3, 0x24($s3)
    ctx->pc = 0x3bc4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_3bc4f4:
    // 0x3bc4f4: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x3bc4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_3bc4f8:
    // 0x3bc4f8: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x3bc4f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3bc4fc:
    // 0x3bc4fc: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x3bc4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3bc500:
    // 0x3bc500: 0x2484004c  addiu       $a0, $a0, 0x4C
    ctx->pc = 0x3bc500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
label_3bc504:
    // 0x3bc504: 0x3012  mflo        $a2
    ctx->pc = 0x3bc504u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_3bc508:
    // 0x3bc508: 0xa71018  mult        $v0, $a1, $a3
    ctx->pc = 0x3bc508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3bc50c:
    // 0x3bc50c: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x3bc50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_3bc510:
    // 0x3bc510: 0xc0bb778  jal         func_2EDDE0
label_3bc514:
    if (ctx->pc == 0x3BC514u) {
        ctx->pc = 0x3BC514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC510u;
        // 0x3bc514: 0x24a5004c  addiu       $a1, $a1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC518u;
        goto label_3bc518;
    }
    ctx->pc = 0x3BC510u;
    SET_GPR_U32(ctx, 31, 0x3BC518u);
    ctx->pc = 0x3BC514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC510u;
    // 0x3bc514: 0x24a5004c  addiu       $a1, $a1, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3BC510u, 0x3BC518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC518u;
label_3bc518:
    // 0x3bc518: 0x10000036  b           . + 4 + (0x36 << 2)
label_3bc51c:
    if (ctx->pc == 0x3BC51Cu) {
        ctx->pc = 0x3BC51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC518u;
        // 0x3bc51c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC520u;
        goto label_3bc520;
    }
    ctx->pc = 0x3BC518u;
    {
        const bool branch_taken_0x3bc518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC518u;
        // 0x3bc51c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc518) {
            ctx->pc = 0x3BC5F4u;
            goto label_3bc5f4;
        }
    }
    ctx->pc = 0x3BC520u;
label_3bc520:
    // 0x3bc520: 0x2624004c  addiu       $a0, $s1, 0x4C
    ctx->pc = 0x3bc520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_3bc524:
    // 0x3bc524: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3bc524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3bc528:
    // 0x3bc528: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x3bc528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3bc52c:
    // 0x3bc52c: 0x3012  mflo        $a2
    ctx->pc = 0x3bc52cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_3bc530:
    // 0x3bc530: 0xc0bb778  jal         func_2EDDE0
label_3bc534:
    if (ctx->pc == 0x3BC534u) {
        ctx->pc = 0x3BC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC530u;
        // 0x3bc534: 0x2645004c  addiu       $a1, $s2, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC538u;
        goto label_3bc538;
    }
    ctx->pc = 0x3BC530u;
    SET_GPR_U32(ctx, 31, 0x3BC538u);
    ctx->pc = 0x3BC534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC530u;
    // 0x3bc534: 0x2645004c  addiu       $a1, $s2, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3BC530u, 0x3BC538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC538u;
label_3bc538:
    // 0x3bc538: 0x8e700034  lw          $s0, 0x34($s3)
    ctx->pc = 0x3bc538u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_3bc53c:
    // 0x3bc53c: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x3bc53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_3bc540:
    // 0x3bc540: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3bc540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3bc544:
    // 0x3bc544: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3bc544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3bc548:
    // 0x3bc548: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_3bc54c:
    if (ctx->pc == 0x3BC54Cu) {
        ctx->pc = 0x3BC54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC548u;
        // 0x3bc54c: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC550u;
        goto label_3bc550;
    }
    ctx->pc = 0x3BC548u;
    {
        const bool branch_taken_0x3bc548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC548u;
        // 0x3bc54c: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc548) {
            ctx->pc = 0x3BC5B0u;
            goto label_3bc5b0;
        }
    }
    ctx->pc = 0x3BC550u;
label_3bc550:
    // 0x3bc550: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x3bc550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3bc554:
    // 0x3bc554: 0x0  nop
    ctx->pc = 0x3bc554u;
    // NOP
label_3bc558:
    // 0x3bc558: 0x2033023  subu        $a2, $s0, $v1
    ctx->pc = 0x3bc558u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_3bc55c:
    // 0x3bc55c: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x3bc55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3bc560:
    // 0x3bc560: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3bc560u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3bc564:
    // 0x3bc564: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x3bc564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_3bc568:
    // 0x3bc568: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x3bc568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3bc56c:
    // 0x3bc56c: 0x2052818  mult        $a1, $s0, $a1
    ctx->pc = 0x3bc56cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3bc570:
    // 0x3bc570: 0x8e2c0040  lw          $t4, 0x40($s1)
    ctx->pc = 0x3bc570u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_3bc574:
    // 0x3bc574: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x3bc574u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3bc578:
    // 0x3bc578: 0x2484004c  addiu       $a0, $a0, 0x4C
    ctx->pc = 0x3bc578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
label_3bc57c:
    // 0x3bc57c: 0x24a5004c  addiu       $a1, $a1, 0x4C
    ctx->pc = 0x3bc57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
label_3bc580:
    // 0x3bc580: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x3bc580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_3bc584:
    // 0x3bc584: 0x24c6004c  addiu       $a2, $a2, 0x4C
    ctx->pc = 0x3bc584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 76));
label_3bc588:
    // 0x3bc588: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x3bc588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_3bc58c:
    // 0x3bc58c: 0x180f809  jalr        $t4
label_3bc590:
    if (ctx->pc == 0x3BC590u) {
        ctx->pc = 0x3BC590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC58Cu;
        // 0x3bc590: 0x2663021  addu        $a2, $s3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC594u;
        goto label_3bc594;
    }
    ctx->pc = 0x3BC58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 12);
        SET_GPR_U32(ctx, 31, 0x3BC594u);
        ctx->pc = 0x3BC590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC58Cu;
        // 0x3bc590: 0x2663021  addu        $a2, $s3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC58Cu, 0x3BC594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BC594u;
label_3bc594:
    // 0x3bc594: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3bc594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3bc598:
    // 0x3bc598: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x3bc598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_3bc59c:
    // 0x3bc59c: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x3bc59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_3bc5a0:
    // 0x3bc5a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3bc5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3bc5a4:
    // 0x3bc5a4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3bc5a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3bc5a8:
    // 0x3bc5a8: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
label_3bc5ac:
    if (ctx->pc == 0x3BC5ACu) {
        ctx->pc = 0x3BC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC5A8u;
        // 0x3bc5ac: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC5B0u;
        goto label_3bc5b0;
    }
    ctx->pc = 0x3BC5A8u;
    {
        const bool branch_taken_0x3bc5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc5a8) {
            ctx->pc = 0x3BC5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BC5A8u;
            // 0x3bc5ac: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BC558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bc558;
        }
    }
    ctx->pc = 0x3BC5B0u;
label_3bc5b0:
    // 0x3bc5b0: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x3bc5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_3bc5b4:
    // 0x3bc5b4: 0x8e650034  lw          $a1, 0x34($s3)
    ctx->pc = 0x3bc5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_3bc5b8:
    // 0x3bc5b8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3bc5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3bc5bc:
    // 0x3bc5bc: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x3bc5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3bc5c0:
    // 0x3bc5c0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3bc5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3bc5c4:
    // 0x3bc5c4: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x3bc5c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3bc5c8:
    // 0x3bc5c8: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x3bc5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3bc5cc:
    // 0x3bc5cc: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x3bc5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_3bc5d0:
    // 0x3bc5d0: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x3bc5d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3bc5d4:
    // 0x3bc5d4: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x3bc5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3bc5d8:
    // 0x3bc5d8: 0x2484004c  addiu       $a0, $a0, 0x4C
    ctx->pc = 0x3bc5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
label_3bc5dc:
    // 0x3bc5dc: 0x3012  mflo        $a2
    ctx->pc = 0x3bc5dcu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_3bc5e0:
    // 0x3bc5e0: 0xa71018  mult        $v0, $a1, $a3
    ctx->pc = 0x3bc5e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3bc5e4:
    // 0x3bc5e4: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x3bc5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3bc5e8:
    // 0x3bc5e8: 0xc0bb778  jal         func_2EDDE0
label_3bc5ec:
    if (ctx->pc == 0x3BC5ECu) {
        ctx->pc = 0x3BC5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC5E8u;
        // 0x3bc5ec: 0x24a5004c  addiu       $a1, $a1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC5F0u;
        goto label_3bc5f0;
    }
    ctx->pc = 0x3BC5E8u;
    SET_GPR_U32(ctx, 31, 0x3BC5F0u);
    ctx->pc = 0x3BC5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC5E8u;
    // 0x3bc5ec: 0x24a5004c  addiu       $a1, $a1, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3BC5E8u, 0x3BC5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC5F0u;
label_3bc5f0:
    // 0x3bc5f0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3bc5f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3bc5f4:
    // 0x3bc5f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bc5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bc5f8:
    // 0x3bc5f8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3bc5f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3bc5fc:
    // 0x3bc5fc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3bc5fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3bc600:
    // 0x3bc600: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3bc600u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3bc604:
    // 0x3bc604: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3bc604u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bc608:
    // 0x3bc608: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3bc608u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bc60c:
    // 0x3bc60c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3bc60cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bc610:
    // 0x3bc610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bc610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bc614:
    // 0x3bc614: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x3bc614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3bc618:
    // 0x3bc618: 0x3e00008  jr          $ra
label_3bc61c:
    if (ctx->pc == 0x3BC61Cu) {
        ctx->pc = 0x3BC61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC618u;
        // 0x3bc61c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC620u;
        goto label_3bc620;
    }
    ctx->pc = 0x3BC618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BC61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC618u;
        // 0x3bc61c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BC620u;
label_3bc620:
    // 0x3bc620: 0xaf84ab70  sw          $a0, -0x5490($gp)
    ctx->pc = 0x3bc620u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945648), GPR_U32(ctx, 4));
label_3bc624:
    // 0x3bc624: 0x3e00008  jr          $ra
label_3bc628:
    if (ctx->pc == 0x3BC628u) {
        ctx->pc = 0x3BC628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC624u;
        // 0x3bc628: 0xaf85ab74  sw          $a1, -0x548C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945652), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC62Cu;
        goto label_3bc62c;
    }
    ctx->pc = 0x3BC624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BC628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC624u;
        // 0x3bc628: 0xaf85ab74  sw          $a1, -0x548C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945652), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BC62Cu;
label_3bc62c:
    // 0x3bc62c: 0x0  nop
    ctx->pc = 0x3bc62cu;
    // NOP
label_3bc630:
    // 0x3bc630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3bc630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3bc634:
    // 0x3bc634: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x3bc634u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
label_3bc638:
    // 0x3bc638: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x3bc638u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
label_3bc63c:
    // 0x3bc63c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bc63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3bc640:
    // 0x3bc640: 0x24c6d378  addiu       $a2, $a2, -0x2C88
    ctx->pc = 0x3bc640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955896));
label_3bc644:
    // 0x3bc644: 0x24e7d3d0  addiu       $a3, $a3, -0x2C30
    ctx->pc = 0x3bc644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955984));
label_3bc648:
    // 0x3bc648: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3bc648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bc64c:
    // 0x3bc64c: 0xc1063f6  jal         func_418FD8
label_3bc650:
    if (ctx->pc == 0x3BC650u) {
        ctx->pc = 0x3BC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC64Cu;
        // 0x3bc650: 0x240501b7  addiu       $a1, $zero, 0x1B7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC654u;
        goto label_3bc654;
    }
    ctx->pc = 0x3BC64Cu;
    SET_GPR_U32(ctx, 31, 0x3BC654u);
    ctx->pc = 0x3BC650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC64Cu;
    // 0x3bc650: 0x240501b7  addiu       $a1, $zero, 0x1B7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x3BC64Cu, 0x3BC654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC654u;
label_3bc654:
    // 0x3bc654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bc654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bc658:
    // 0x3bc658: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x3bc658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3bc65c:
    // 0x3bc65c: 0x3e00008  jr          $ra
label_3bc660:
    if (ctx->pc == 0x3BC660u) {
        ctx->pc = 0x3BC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC65Cu;
        // 0x3bc660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BC664u;
        goto label_3bc664;
    }
    ctx->pc = 0x3BC65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC65Cu;
        // 0x3bc660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BC664u;
label_3bc664:
    // 0x3bc664: 0x0  nop
    ctx->pc = 0x3bc664u;
    // NOP
    ctx->pc = 0x3bc668u;
}
