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

// Function: sub_003CEF40
// Address: 0x3cef40 - 0x3d03c0
void sub_003CEF40_0x3cef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CEF40_0x3cef40");
#endif

    switch (ctx->pc) {
        case 0x3cef40u: goto label_3cef40;
        case 0x3cef44u: goto label_3cef44;
        case 0x3cef48u: goto label_3cef48;
        case 0x3cef4cu: goto label_3cef4c;
        case 0x3cef50u: goto label_3cef50;
        case 0x3cef54u: goto label_3cef54;
        case 0x3cef58u: goto label_3cef58;
        case 0x3cef5cu: goto label_3cef5c;
        case 0x3cef60u: goto label_3cef60;
        case 0x3cef64u: goto label_3cef64;
        case 0x3cef68u: goto label_3cef68;
        case 0x3cef6cu: goto label_3cef6c;
        case 0x3cef70u: goto label_3cef70;
        case 0x3cef74u: goto label_3cef74;
        case 0x3cef78u: goto label_3cef78;
        case 0x3cef7cu: goto label_3cef7c;
        case 0x3cef80u: goto label_3cef80;
        case 0x3cef84u: goto label_3cef84;
        case 0x3cef88u: goto label_3cef88;
        case 0x3cef8cu: goto label_3cef8c;
        case 0x3cef90u: goto label_3cef90;
        case 0x3cef94u: goto label_3cef94;
        case 0x3cef98u: goto label_3cef98;
        case 0x3cef9cu: goto label_3cef9c;
        case 0x3cefa0u: goto label_3cefa0;
        case 0x3cefa4u: goto label_3cefa4;
        case 0x3cefa8u: goto label_3cefa8;
        case 0x3cefacu: goto label_3cefac;
        case 0x3cefb0u: goto label_3cefb0;
        case 0x3cefb4u: goto label_3cefb4;
        case 0x3cefb8u: goto label_3cefb8;
        case 0x3cefbcu: goto label_3cefbc;
        case 0x3cefc0u: goto label_3cefc0;
        case 0x3cefc4u: goto label_3cefc4;
        case 0x3cefc8u: goto label_3cefc8;
        case 0x3cefccu: goto label_3cefcc;
        case 0x3cefd0u: goto label_3cefd0;
        case 0x3cefd4u: goto label_3cefd4;
        case 0x3cefd8u: goto label_3cefd8;
        case 0x3cefdcu: goto label_3cefdc;
        case 0x3cefe0u: goto label_3cefe0;
        case 0x3cefe4u: goto label_3cefe4;
        case 0x3cefe8u: goto label_3cefe8;
        case 0x3cefecu: goto label_3cefec;
        case 0x3ceff0u: goto label_3ceff0;
        case 0x3ceff4u: goto label_3ceff4;
        case 0x3ceff8u: goto label_3ceff8;
        case 0x3ceffcu: goto label_3ceffc;
        case 0x3cf000u: goto label_3cf000;
        case 0x3cf004u: goto label_3cf004;
        case 0x3cf008u: goto label_3cf008;
        case 0x3cf00cu: goto label_3cf00c;
        case 0x3cf010u: goto label_3cf010;
        case 0x3cf014u: goto label_3cf014;
        case 0x3cf018u: goto label_3cf018;
        case 0x3cf01cu: goto label_3cf01c;
        case 0x3cf020u: goto label_3cf020;
        case 0x3cf024u: goto label_3cf024;
        case 0x3cf028u: goto label_3cf028;
        case 0x3cf02cu: goto label_3cf02c;
        case 0x3cf030u: goto label_3cf030;
        case 0x3cf034u: goto label_3cf034;
        case 0x3cf038u: goto label_3cf038;
        case 0x3cf03cu: goto label_3cf03c;
        case 0x3cf040u: goto label_3cf040;
        case 0x3cf044u: goto label_3cf044;
        case 0x3cf048u: goto label_3cf048;
        case 0x3cf04cu: goto label_3cf04c;
        case 0x3cf050u: goto label_3cf050;
        case 0x3cf054u: goto label_3cf054;
        case 0x3cf058u: goto label_3cf058;
        case 0x3cf05cu: goto label_3cf05c;
        case 0x3cf060u: goto label_3cf060;
        case 0x3cf064u: goto label_3cf064;
        case 0x3cf068u: goto label_3cf068;
        case 0x3cf06cu: goto label_3cf06c;
        case 0x3cf070u: goto label_3cf070;
        case 0x3cf074u: goto label_3cf074;
        case 0x3cf078u: goto label_3cf078;
        case 0x3cf07cu: goto label_3cf07c;
        case 0x3cf080u: goto label_3cf080;
        case 0x3cf084u: goto label_3cf084;
        case 0x3cf088u: goto label_3cf088;
        case 0x3cf08cu: goto label_3cf08c;
        case 0x3cf090u: goto label_3cf090;
        case 0x3cf094u: goto label_3cf094;
        case 0x3cf098u: goto label_3cf098;
        case 0x3cf09cu: goto label_3cf09c;
        case 0x3cf0a0u: goto label_3cf0a0;
        case 0x3cf0a4u: goto label_3cf0a4;
        case 0x3cf0a8u: goto label_3cf0a8;
        case 0x3cf0acu: goto label_3cf0ac;
        case 0x3cf0b0u: goto label_3cf0b0;
        case 0x3cf0b4u: goto label_3cf0b4;
        case 0x3cf0b8u: goto label_3cf0b8;
        case 0x3cf0bcu: goto label_3cf0bc;
        case 0x3cf0c0u: goto label_3cf0c0;
        case 0x3cf0c4u: goto label_3cf0c4;
        case 0x3cf0c8u: goto label_3cf0c8;
        case 0x3cf0ccu: goto label_3cf0cc;
        case 0x3cf0d0u: goto label_3cf0d0;
        case 0x3cf0d4u: goto label_3cf0d4;
        case 0x3cf0d8u: goto label_3cf0d8;
        case 0x3cf0dcu: goto label_3cf0dc;
        case 0x3cf0e0u: goto label_3cf0e0;
        case 0x3cf0e4u: goto label_3cf0e4;
        case 0x3cf0e8u: goto label_3cf0e8;
        case 0x3cf0ecu: goto label_3cf0ec;
        case 0x3cf0f0u: goto label_3cf0f0;
        case 0x3cf0f4u: goto label_3cf0f4;
        case 0x3cf0f8u: goto label_3cf0f8;
        case 0x3cf0fcu: goto label_3cf0fc;
        case 0x3cf100u: goto label_3cf100;
        case 0x3cf104u: goto label_3cf104;
        case 0x3cf108u: goto label_3cf108;
        case 0x3cf10cu: goto label_3cf10c;
        case 0x3cf110u: goto label_3cf110;
        case 0x3cf114u: goto label_3cf114;
        case 0x3cf118u: goto label_3cf118;
        case 0x3cf11cu: goto label_3cf11c;
        case 0x3cf120u: goto label_3cf120;
        case 0x3cf124u: goto label_3cf124;
        case 0x3cf128u: goto label_3cf128;
        case 0x3cf12cu: goto label_3cf12c;
        case 0x3cf130u: goto label_3cf130;
        case 0x3cf134u: goto label_3cf134;
        case 0x3cf138u: goto label_3cf138;
        case 0x3cf13cu: goto label_3cf13c;
        case 0x3cf140u: goto label_3cf140;
        case 0x3cf144u: goto label_3cf144;
        case 0x3cf148u: goto label_3cf148;
        case 0x3cf14cu: goto label_3cf14c;
        case 0x3cf150u: goto label_3cf150;
        case 0x3cf154u: goto label_3cf154;
        case 0x3cf158u: goto label_3cf158;
        case 0x3cf15cu: goto label_3cf15c;
        case 0x3cf160u: goto label_3cf160;
        case 0x3cf164u: goto label_3cf164;
        case 0x3cf168u: goto label_3cf168;
        case 0x3cf16cu: goto label_3cf16c;
        case 0x3cf170u: goto label_3cf170;
        case 0x3cf174u: goto label_3cf174;
        case 0x3cf178u: goto label_3cf178;
        case 0x3cf17cu: goto label_3cf17c;
        case 0x3cf180u: goto label_3cf180;
        case 0x3cf184u: goto label_3cf184;
        case 0x3cf188u: goto label_3cf188;
        case 0x3cf18cu: goto label_3cf18c;
        case 0x3cf190u: goto label_3cf190;
        case 0x3cf194u: goto label_3cf194;
        case 0x3cf198u: goto label_3cf198;
        case 0x3cf19cu: goto label_3cf19c;
        case 0x3cf1a0u: goto label_3cf1a0;
        case 0x3cf1a4u: goto label_3cf1a4;
        case 0x3cf1a8u: goto label_3cf1a8;
        case 0x3cf1acu: goto label_3cf1ac;
        case 0x3cf1b0u: goto label_3cf1b0;
        case 0x3cf1b4u: goto label_3cf1b4;
        case 0x3cf1b8u: goto label_3cf1b8;
        case 0x3cf1bcu: goto label_3cf1bc;
        case 0x3cf1c0u: goto label_3cf1c0;
        case 0x3cf1c4u: goto label_3cf1c4;
        case 0x3cf1c8u: goto label_3cf1c8;
        case 0x3cf1ccu: goto label_3cf1cc;
        case 0x3cf1d0u: goto label_3cf1d0;
        case 0x3cf1d4u: goto label_3cf1d4;
        case 0x3cf1d8u: goto label_3cf1d8;
        case 0x3cf1dcu: goto label_3cf1dc;
        case 0x3cf1e0u: goto label_3cf1e0;
        case 0x3cf1e4u: goto label_3cf1e4;
        case 0x3cf1e8u: goto label_3cf1e8;
        case 0x3cf1ecu: goto label_3cf1ec;
        case 0x3cf1f0u: goto label_3cf1f0;
        case 0x3cf1f4u: goto label_3cf1f4;
        case 0x3cf1f8u: goto label_3cf1f8;
        case 0x3cf1fcu: goto label_3cf1fc;
        case 0x3cf200u: goto label_3cf200;
        case 0x3cf204u: goto label_3cf204;
        case 0x3cf208u: goto label_3cf208;
        case 0x3cf20cu: goto label_3cf20c;
        case 0x3cf210u: goto label_3cf210;
        case 0x3cf214u: goto label_3cf214;
        case 0x3cf218u: goto label_3cf218;
        case 0x3cf21cu: goto label_3cf21c;
        case 0x3cf220u: goto label_3cf220;
        case 0x3cf224u: goto label_3cf224;
        case 0x3cf228u: goto label_3cf228;
        case 0x3cf22cu: goto label_3cf22c;
        case 0x3cf230u: goto label_3cf230;
        case 0x3cf234u: goto label_3cf234;
        case 0x3cf238u: goto label_3cf238;
        case 0x3cf23cu: goto label_3cf23c;
        case 0x3cf240u: goto label_3cf240;
        case 0x3cf244u: goto label_3cf244;
        case 0x3cf248u: goto label_3cf248;
        case 0x3cf24cu: goto label_3cf24c;
        case 0x3cf250u: goto label_3cf250;
        case 0x3cf254u: goto label_3cf254;
        case 0x3cf258u: goto label_3cf258;
        case 0x3cf25cu: goto label_3cf25c;
        case 0x3cf260u: goto label_3cf260;
        case 0x3cf264u: goto label_3cf264;
        case 0x3cf268u: goto label_3cf268;
        case 0x3cf26cu: goto label_3cf26c;
        case 0x3cf270u: goto label_3cf270;
        case 0x3cf274u: goto label_3cf274;
        case 0x3cf278u: goto label_3cf278;
        case 0x3cf27cu: goto label_3cf27c;
        case 0x3cf280u: goto label_3cf280;
        case 0x3cf284u: goto label_3cf284;
        case 0x3cf288u: goto label_3cf288;
        case 0x3cf28cu: goto label_3cf28c;
        case 0x3cf290u: goto label_3cf290;
        case 0x3cf294u: goto label_3cf294;
        case 0x3cf298u: goto label_3cf298;
        case 0x3cf29cu: goto label_3cf29c;
        case 0x3cf2a0u: goto label_3cf2a0;
        case 0x3cf2a4u: goto label_3cf2a4;
        case 0x3cf2a8u: goto label_3cf2a8;
        case 0x3cf2acu: goto label_3cf2ac;
        case 0x3cf2b0u: goto label_3cf2b0;
        case 0x3cf2b4u: goto label_3cf2b4;
        case 0x3cf2b8u: goto label_3cf2b8;
        case 0x3cf2bcu: goto label_3cf2bc;
        case 0x3cf2c0u: goto label_3cf2c0;
        case 0x3cf2c4u: goto label_3cf2c4;
        case 0x3cf2c8u: goto label_3cf2c8;
        case 0x3cf2ccu: goto label_3cf2cc;
        case 0x3cf2d0u: goto label_3cf2d0;
        case 0x3cf2d4u: goto label_3cf2d4;
        case 0x3cf2d8u: goto label_3cf2d8;
        case 0x3cf2dcu: goto label_3cf2dc;
        case 0x3cf2e0u: goto label_3cf2e0;
        case 0x3cf2e4u: goto label_3cf2e4;
        case 0x3cf2e8u: goto label_3cf2e8;
        case 0x3cf2ecu: goto label_3cf2ec;
        case 0x3cf2f0u: goto label_3cf2f0;
        case 0x3cf2f4u: goto label_3cf2f4;
        case 0x3cf2f8u: goto label_3cf2f8;
        case 0x3cf2fcu: goto label_3cf2fc;
        case 0x3cf300u: goto label_3cf300;
        case 0x3cf304u: goto label_3cf304;
        case 0x3cf308u: goto label_3cf308;
        case 0x3cf30cu: goto label_3cf30c;
        case 0x3cf310u: goto label_3cf310;
        case 0x3cf314u: goto label_3cf314;
        case 0x3cf318u: goto label_3cf318;
        case 0x3cf31cu: goto label_3cf31c;
        case 0x3cf320u: goto label_3cf320;
        case 0x3cf324u: goto label_3cf324;
        case 0x3cf328u: goto label_3cf328;
        case 0x3cf32cu: goto label_3cf32c;
        case 0x3cf330u: goto label_3cf330;
        case 0x3cf334u: goto label_3cf334;
        case 0x3cf338u: goto label_3cf338;
        case 0x3cf33cu: goto label_3cf33c;
        case 0x3cf340u: goto label_3cf340;
        case 0x3cf344u: goto label_3cf344;
        case 0x3cf348u: goto label_3cf348;
        case 0x3cf34cu: goto label_3cf34c;
        case 0x3cf350u: goto label_3cf350;
        case 0x3cf354u: goto label_3cf354;
        case 0x3cf358u: goto label_3cf358;
        case 0x3cf35cu: goto label_3cf35c;
        case 0x3cf360u: goto label_3cf360;
        case 0x3cf364u: goto label_3cf364;
        case 0x3cf368u: goto label_3cf368;
        case 0x3cf36cu: goto label_3cf36c;
        case 0x3cf370u: goto label_3cf370;
        case 0x3cf374u: goto label_3cf374;
        case 0x3cf378u: goto label_3cf378;
        case 0x3cf37cu: goto label_3cf37c;
        case 0x3cf380u: goto label_3cf380;
        case 0x3cf384u: goto label_3cf384;
        case 0x3cf388u: goto label_3cf388;
        case 0x3cf38cu: goto label_3cf38c;
        case 0x3cf390u: goto label_3cf390;
        case 0x3cf394u: goto label_3cf394;
        case 0x3cf398u: goto label_3cf398;
        case 0x3cf39cu: goto label_3cf39c;
        case 0x3cf3a0u: goto label_3cf3a0;
        case 0x3cf3a4u: goto label_3cf3a4;
        case 0x3cf3a8u: goto label_3cf3a8;
        case 0x3cf3acu: goto label_3cf3ac;
        case 0x3cf3b0u: goto label_3cf3b0;
        case 0x3cf3b4u: goto label_3cf3b4;
        case 0x3cf3b8u: goto label_3cf3b8;
        case 0x3cf3bcu: goto label_3cf3bc;
        case 0x3cf3c0u: goto label_3cf3c0;
        case 0x3cf3c4u: goto label_3cf3c4;
        case 0x3cf3c8u: goto label_3cf3c8;
        case 0x3cf3ccu: goto label_3cf3cc;
        case 0x3cf3d0u: goto label_3cf3d0;
        case 0x3cf3d4u: goto label_3cf3d4;
        case 0x3cf3d8u: goto label_3cf3d8;
        case 0x3cf3dcu: goto label_3cf3dc;
        case 0x3cf3e0u: goto label_3cf3e0;
        case 0x3cf3e4u: goto label_3cf3e4;
        case 0x3cf3e8u: goto label_3cf3e8;
        case 0x3cf3ecu: goto label_3cf3ec;
        case 0x3cf3f0u: goto label_3cf3f0;
        case 0x3cf3f4u: goto label_3cf3f4;
        case 0x3cf3f8u: goto label_3cf3f8;
        case 0x3cf3fcu: goto label_3cf3fc;
        case 0x3cf400u: goto label_3cf400;
        case 0x3cf404u: goto label_3cf404;
        case 0x3cf408u: goto label_3cf408;
        case 0x3cf40cu: goto label_3cf40c;
        case 0x3cf410u: goto label_3cf410;
        case 0x3cf414u: goto label_3cf414;
        case 0x3cf418u: goto label_3cf418;
        case 0x3cf41cu: goto label_3cf41c;
        case 0x3cf420u: goto label_3cf420;
        case 0x3cf424u: goto label_3cf424;
        case 0x3cf428u: goto label_3cf428;
        case 0x3cf42cu: goto label_3cf42c;
        case 0x3cf430u: goto label_3cf430;
        case 0x3cf434u: goto label_3cf434;
        case 0x3cf438u: goto label_3cf438;
        case 0x3cf43cu: goto label_3cf43c;
        case 0x3cf440u: goto label_3cf440;
        case 0x3cf444u: goto label_3cf444;
        case 0x3cf448u: goto label_3cf448;
        case 0x3cf44cu: goto label_3cf44c;
        case 0x3cf450u: goto label_3cf450;
        case 0x3cf454u: goto label_3cf454;
        case 0x3cf458u: goto label_3cf458;
        case 0x3cf45cu: goto label_3cf45c;
        case 0x3cf460u: goto label_3cf460;
        case 0x3cf464u: goto label_3cf464;
        case 0x3cf468u: goto label_3cf468;
        case 0x3cf46cu: goto label_3cf46c;
        case 0x3cf470u: goto label_3cf470;
        case 0x3cf474u: goto label_3cf474;
        case 0x3cf478u: goto label_3cf478;
        case 0x3cf47cu: goto label_3cf47c;
        case 0x3cf480u: goto label_3cf480;
        case 0x3cf484u: goto label_3cf484;
        case 0x3cf488u: goto label_3cf488;
        case 0x3cf48cu: goto label_3cf48c;
        case 0x3cf490u: goto label_3cf490;
        case 0x3cf494u: goto label_3cf494;
        case 0x3cf498u: goto label_3cf498;
        case 0x3cf49cu: goto label_3cf49c;
        case 0x3cf4a0u: goto label_3cf4a0;
        case 0x3cf4a4u: goto label_3cf4a4;
        case 0x3cf4a8u: goto label_3cf4a8;
        case 0x3cf4acu: goto label_3cf4ac;
        case 0x3cf4b0u: goto label_3cf4b0;
        case 0x3cf4b4u: goto label_3cf4b4;
        case 0x3cf4b8u: goto label_3cf4b8;
        case 0x3cf4bcu: goto label_3cf4bc;
        case 0x3cf4c0u: goto label_3cf4c0;
        case 0x3cf4c4u: goto label_3cf4c4;
        case 0x3cf4c8u: goto label_3cf4c8;
        case 0x3cf4ccu: goto label_3cf4cc;
        case 0x3cf4d0u: goto label_3cf4d0;
        case 0x3cf4d4u: goto label_3cf4d4;
        case 0x3cf4d8u: goto label_3cf4d8;
        case 0x3cf4dcu: goto label_3cf4dc;
        case 0x3cf4e0u: goto label_3cf4e0;
        case 0x3cf4e4u: goto label_3cf4e4;
        case 0x3cf4e8u: goto label_3cf4e8;
        case 0x3cf4ecu: goto label_3cf4ec;
        case 0x3cf4f0u: goto label_3cf4f0;
        case 0x3cf4f4u: goto label_3cf4f4;
        case 0x3cf4f8u: goto label_3cf4f8;
        case 0x3cf4fcu: goto label_3cf4fc;
        case 0x3cf500u: goto label_3cf500;
        case 0x3cf504u: goto label_3cf504;
        case 0x3cf508u: goto label_3cf508;
        case 0x3cf50cu: goto label_3cf50c;
        case 0x3cf510u: goto label_3cf510;
        case 0x3cf514u: goto label_3cf514;
        case 0x3cf518u: goto label_3cf518;
        case 0x3cf51cu: goto label_3cf51c;
        case 0x3cf520u: goto label_3cf520;
        case 0x3cf524u: goto label_3cf524;
        case 0x3cf528u: goto label_3cf528;
        case 0x3cf52cu: goto label_3cf52c;
        case 0x3cf530u: goto label_3cf530;
        case 0x3cf534u: goto label_3cf534;
        case 0x3cf538u: goto label_3cf538;
        case 0x3cf53cu: goto label_3cf53c;
        case 0x3cf540u: goto label_3cf540;
        case 0x3cf544u: goto label_3cf544;
        case 0x3cf548u: goto label_3cf548;
        case 0x3cf54cu: goto label_3cf54c;
        case 0x3cf550u: goto label_3cf550;
        case 0x3cf554u: goto label_3cf554;
        case 0x3cf558u: goto label_3cf558;
        case 0x3cf55cu: goto label_3cf55c;
        case 0x3cf560u: goto label_3cf560;
        case 0x3cf564u: goto label_3cf564;
        case 0x3cf568u: goto label_3cf568;
        case 0x3cf56cu: goto label_3cf56c;
        case 0x3cf570u: goto label_3cf570;
        case 0x3cf574u: goto label_3cf574;
        case 0x3cf578u: goto label_3cf578;
        case 0x3cf57cu: goto label_3cf57c;
        case 0x3cf580u: goto label_3cf580;
        case 0x3cf584u: goto label_3cf584;
        case 0x3cf588u: goto label_3cf588;
        case 0x3cf58cu: goto label_3cf58c;
        case 0x3cf590u: goto label_3cf590;
        case 0x3cf594u: goto label_3cf594;
        case 0x3cf598u: goto label_3cf598;
        case 0x3cf59cu: goto label_3cf59c;
        case 0x3cf5a0u: goto label_3cf5a0;
        case 0x3cf5a4u: goto label_3cf5a4;
        case 0x3cf5a8u: goto label_3cf5a8;
        case 0x3cf5acu: goto label_3cf5ac;
        case 0x3cf5b0u: goto label_3cf5b0;
        case 0x3cf5b4u: goto label_3cf5b4;
        case 0x3cf5b8u: goto label_3cf5b8;
        case 0x3cf5bcu: goto label_3cf5bc;
        case 0x3cf5c0u: goto label_3cf5c0;
        case 0x3cf5c4u: goto label_3cf5c4;
        case 0x3cf5c8u: goto label_3cf5c8;
        case 0x3cf5ccu: goto label_3cf5cc;
        case 0x3cf5d0u: goto label_3cf5d0;
        case 0x3cf5d4u: goto label_3cf5d4;
        case 0x3cf5d8u: goto label_3cf5d8;
        case 0x3cf5dcu: goto label_3cf5dc;
        case 0x3cf5e0u: goto label_3cf5e0;
        case 0x3cf5e4u: goto label_3cf5e4;
        case 0x3cf5e8u: goto label_3cf5e8;
        case 0x3cf5ecu: goto label_3cf5ec;
        case 0x3cf5f0u: goto label_3cf5f0;
        case 0x3cf5f4u: goto label_3cf5f4;
        case 0x3cf5f8u: goto label_3cf5f8;
        case 0x3cf5fcu: goto label_3cf5fc;
        case 0x3cf600u: goto label_3cf600;
        case 0x3cf604u: goto label_3cf604;
        case 0x3cf608u: goto label_3cf608;
        case 0x3cf60cu: goto label_3cf60c;
        case 0x3cf610u: goto label_3cf610;
        case 0x3cf614u: goto label_3cf614;
        case 0x3cf618u: goto label_3cf618;
        case 0x3cf61cu: goto label_3cf61c;
        case 0x3cf620u: goto label_3cf620;
        case 0x3cf624u: goto label_3cf624;
        case 0x3cf628u: goto label_3cf628;
        case 0x3cf62cu: goto label_3cf62c;
        case 0x3cf630u: goto label_3cf630;
        case 0x3cf634u: goto label_3cf634;
        case 0x3cf638u: goto label_3cf638;
        case 0x3cf63cu: goto label_3cf63c;
        case 0x3cf640u: goto label_3cf640;
        case 0x3cf644u: goto label_3cf644;
        case 0x3cf648u: goto label_3cf648;
        case 0x3cf64cu: goto label_3cf64c;
        case 0x3cf650u: goto label_3cf650;
        case 0x3cf654u: goto label_3cf654;
        case 0x3cf658u: goto label_3cf658;
        case 0x3cf65cu: goto label_3cf65c;
        case 0x3cf660u: goto label_3cf660;
        case 0x3cf664u: goto label_3cf664;
        case 0x3cf668u: goto label_3cf668;
        case 0x3cf66cu: goto label_3cf66c;
        case 0x3cf670u: goto label_3cf670;
        case 0x3cf674u: goto label_3cf674;
        case 0x3cf678u: goto label_3cf678;
        case 0x3cf67cu: goto label_3cf67c;
        case 0x3cf680u: goto label_3cf680;
        case 0x3cf684u: goto label_3cf684;
        case 0x3cf688u: goto label_3cf688;
        case 0x3cf68cu: goto label_3cf68c;
        case 0x3cf690u: goto label_3cf690;
        case 0x3cf694u: goto label_3cf694;
        case 0x3cf698u: goto label_3cf698;
        case 0x3cf69cu: goto label_3cf69c;
        case 0x3cf6a0u: goto label_3cf6a0;
        case 0x3cf6a4u: goto label_3cf6a4;
        case 0x3cf6a8u: goto label_3cf6a8;
        case 0x3cf6acu: goto label_3cf6ac;
        case 0x3cf6b0u: goto label_3cf6b0;
        case 0x3cf6b4u: goto label_3cf6b4;
        case 0x3cf6b8u: goto label_3cf6b8;
        case 0x3cf6bcu: goto label_3cf6bc;
        case 0x3cf6c0u: goto label_3cf6c0;
        case 0x3cf6c4u: goto label_3cf6c4;
        case 0x3cf6c8u: goto label_3cf6c8;
        case 0x3cf6ccu: goto label_3cf6cc;
        case 0x3cf6d0u: goto label_3cf6d0;
        case 0x3cf6d4u: goto label_3cf6d4;
        case 0x3cf6d8u: goto label_3cf6d8;
        case 0x3cf6dcu: goto label_3cf6dc;
        case 0x3cf6e0u: goto label_3cf6e0;
        case 0x3cf6e4u: goto label_3cf6e4;
        case 0x3cf6e8u: goto label_3cf6e8;
        case 0x3cf6ecu: goto label_3cf6ec;
        case 0x3cf6f0u: goto label_3cf6f0;
        case 0x3cf6f4u: goto label_3cf6f4;
        case 0x3cf6f8u: goto label_3cf6f8;
        case 0x3cf6fcu: goto label_3cf6fc;
        case 0x3cf700u: goto label_3cf700;
        case 0x3cf704u: goto label_3cf704;
        case 0x3cf708u: goto label_3cf708;
        case 0x3cf70cu: goto label_3cf70c;
        case 0x3cf710u: goto label_3cf710;
        case 0x3cf714u: goto label_3cf714;
        case 0x3cf718u: goto label_3cf718;
        case 0x3cf71cu: goto label_3cf71c;
        case 0x3cf720u: goto label_3cf720;
        case 0x3cf724u: goto label_3cf724;
        case 0x3cf728u: goto label_3cf728;
        case 0x3cf72cu: goto label_3cf72c;
        case 0x3cf730u: goto label_3cf730;
        case 0x3cf734u: goto label_3cf734;
        case 0x3cf738u: goto label_3cf738;
        case 0x3cf73cu: goto label_3cf73c;
        case 0x3cf740u: goto label_3cf740;
        case 0x3cf744u: goto label_3cf744;
        case 0x3cf748u: goto label_3cf748;
        case 0x3cf74cu: goto label_3cf74c;
        case 0x3cf750u: goto label_3cf750;
        case 0x3cf754u: goto label_3cf754;
        case 0x3cf758u: goto label_3cf758;
        case 0x3cf75cu: goto label_3cf75c;
        case 0x3cf760u: goto label_3cf760;
        case 0x3cf764u: goto label_3cf764;
        case 0x3cf768u: goto label_3cf768;
        case 0x3cf76cu: goto label_3cf76c;
        case 0x3cf770u: goto label_3cf770;
        case 0x3cf774u: goto label_3cf774;
        case 0x3cf778u: goto label_3cf778;
        case 0x3cf77cu: goto label_3cf77c;
        case 0x3cf780u: goto label_3cf780;
        case 0x3cf784u: goto label_3cf784;
        case 0x3cf788u: goto label_3cf788;
        case 0x3cf78cu: goto label_3cf78c;
        case 0x3cf790u: goto label_3cf790;
        case 0x3cf794u: goto label_3cf794;
        case 0x3cf798u: goto label_3cf798;
        case 0x3cf79cu: goto label_3cf79c;
        case 0x3cf7a0u: goto label_3cf7a0;
        case 0x3cf7a4u: goto label_3cf7a4;
        case 0x3cf7a8u: goto label_3cf7a8;
        case 0x3cf7acu: goto label_3cf7ac;
        case 0x3cf7b0u: goto label_3cf7b0;
        case 0x3cf7b4u: goto label_3cf7b4;
        case 0x3cf7b8u: goto label_3cf7b8;
        case 0x3cf7bcu: goto label_3cf7bc;
        case 0x3cf7c0u: goto label_3cf7c0;
        case 0x3cf7c4u: goto label_3cf7c4;
        case 0x3cf7c8u: goto label_3cf7c8;
        case 0x3cf7ccu: goto label_3cf7cc;
        case 0x3cf7d0u: goto label_3cf7d0;
        case 0x3cf7d4u: goto label_3cf7d4;
        case 0x3cf7d8u: goto label_3cf7d8;
        case 0x3cf7dcu: goto label_3cf7dc;
        case 0x3cf7e0u: goto label_3cf7e0;
        case 0x3cf7e4u: goto label_3cf7e4;
        case 0x3cf7e8u: goto label_3cf7e8;
        case 0x3cf7ecu: goto label_3cf7ec;
        case 0x3cf7f0u: goto label_3cf7f0;
        case 0x3cf7f4u: goto label_3cf7f4;
        case 0x3cf7f8u: goto label_3cf7f8;
        case 0x3cf7fcu: goto label_3cf7fc;
        case 0x3cf800u: goto label_3cf800;
        case 0x3cf804u: goto label_3cf804;
        case 0x3cf808u: goto label_3cf808;
        case 0x3cf80cu: goto label_3cf80c;
        case 0x3cf810u: goto label_3cf810;
        case 0x3cf814u: goto label_3cf814;
        case 0x3cf818u: goto label_3cf818;
        case 0x3cf81cu: goto label_3cf81c;
        case 0x3cf820u: goto label_3cf820;
        case 0x3cf824u: goto label_3cf824;
        case 0x3cf828u: goto label_3cf828;
        case 0x3cf82cu: goto label_3cf82c;
        case 0x3cf830u: goto label_3cf830;
        case 0x3cf834u: goto label_3cf834;
        case 0x3cf838u: goto label_3cf838;
        case 0x3cf83cu: goto label_3cf83c;
        case 0x3cf840u: goto label_3cf840;
        case 0x3cf844u: goto label_3cf844;
        case 0x3cf848u: goto label_3cf848;
        case 0x3cf84cu: goto label_3cf84c;
        case 0x3cf850u: goto label_3cf850;
        case 0x3cf854u: goto label_3cf854;
        case 0x3cf858u: goto label_3cf858;
        case 0x3cf85cu: goto label_3cf85c;
        case 0x3cf860u: goto label_3cf860;
        case 0x3cf864u: goto label_3cf864;
        case 0x3cf868u: goto label_3cf868;
        case 0x3cf86cu: goto label_3cf86c;
        case 0x3cf870u: goto label_3cf870;
        case 0x3cf874u: goto label_3cf874;
        case 0x3cf878u: goto label_3cf878;
        case 0x3cf87cu: goto label_3cf87c;
        case 0x3cf880u: goto label_3cf880;
        case 0x3cf884u: goto label_3cf884;
        case 0x3cf888u: goto label_3cf888;
        case 0x3cf88cu: goto label_3cf88c;
        case 0x3cf890u: goto label_3cf890;
        case 0x3cf894u: goto label_3cf894;
        case 0x3cf898u: goto label_3cf898;
        case 0x3cf89cu: goto label_3cf89c;
        case 0x3cf8a0u: goto label_3cf8a0;
        case 0x3cf8a4u: goto label_3cf8a4;
        case 0x3cf8a8u: goto label_3cf8a8;
        case 0x3cf8acu: goto label_3cf8ac;
        case 0x3cf8b0u: goto label_3cf8b0;
        case 0x3cf8b4u: goto label_3cf8b4;
        case 0x3cf8b8u: goto label_3cf8b8;
        case 0x3cf8bcu: goto label_3cf8bc;
        case 0x3cf8c0u: goto label_3cf8c0;
        case 0x3cf8c4u: goto label_3cf8c4;
        case 0x3cf8c8u: goto label_3cf8c8;
        case 0x3cf8ccu: goto label_3cf8cc;
        case 0x3cf8d0u: goto label_3cf8d0;
        case 0x3cf8d4u: goto label_3cf8d4;
        case 0x3cf8d8u: goto label_3cf8d8;
        case 0x3cf8dcu: goto label_3cf8dc;
        case 0x3cf8e0u: goto label_3cf8e0;
        case 0x3cf8e4u: goto label_3cf8e4;
        case 0x3cf8e8u: goto label_3cf8e8;
        case 0x3cf8ecu: goto label_3cf8ec;
        case 0x3cf8f0u: goto label_3cf8f0;
        case 0x3cf8f4u: goto label_3cf8f4;
        case 0x3cf8f8u: goto label_3cf8f8;
        case 0x3cf8fcu: goto label_3cf8fc;
        case 0x3cf900u: goto label_3cf900;
        case 0x3cf904u: goto label_3cf904;
        case 0x3cf908u: goto label_3cf908;
        case 0x3cf90cu: goto label_3cf90c;
        case 0x3cf910u: goto label_3cf910;
        case 0x3cf914u: goto label_3cf914;
        case 0x3cf918u: goto label_3cf918;
        case 0x3cf91cu: goto label_3cf91c;
        case 0x3cf920u: goto label_3cf920;
        case 0x3cf924u: goto label_3cf924;
        case 0x3cf928u: goto label_3cf928;
        case 0x3cf92cu: goto label_3cf92c;
        case 0x3cf930u: goto label_3cf930;
        case 0x3cf934u: goto label_3cf934;
        case 0x3cf938u: goto label_3cf938;
        case 0x3cf93cu: goto label_3cf93c;
        case 0x3cf940u: goto label_3cf940;
        case 0x3cf944u: goto label_3cf944;
        case 0x3cf948u: goto label_3cf948;
        case 0x3cf94cu: goto label_3cf94c;
        case 0x3cf950u: goto label_3cf950;
        case 0x3cf954u: goto label_3cf954;
        case 0x3cf958u: goto label_3cf958;
        case 0x3cf95cu: goto label_3cf95c;
        case 0x3cf960u: goto label_3cf960;
        case 0x3cf964u: goto label_3cf964;
        case 0x3cf968u: goto label_3cf968;
        case 0x3cf96cu: goto label_3cf96c;
        case 0x3cf970u: goto label_3cf970;
        case 0x3cf974u: goto label_3cf974;
        case 0x3cf978u: goto label_3cf978;
        case 0x3cf97cu: goto label_3cf97c;
        case 0x3cf980u: goto label_3cf980;
        case 0x3cf984u: goto label_3cf984;
        case 0x3cf988u: goto label_3cf988;
        case 0x3cf98cu: goto label_3cf98c;
        case 0x3cf990u: goto label_3cf990;
        case 0x3cf994u: goto label_3cf994;
        case 0x3cf998u: goto label_3cf998;
        case 0x3cf99cu: goto label_3cf99c;
        case 0x3cf9a0u: goto label_3cf9a0;
        case 0x3cf9a4u: goto label_3cf9a4;
        case 0x3cf9a8u: goto label_3cf9a8;
        case 0x3cf9acu: goto label_3cf9ac;
        case 0x3cf9b0u: goto label_3cf9b0;
        case 0x3cf9b4u: goto label_3cf9b4;
        case 0x3cf9b8u: goto label_3cf9b8;
        case 0x3cf9bcu: goto label_3cf9bc;
        case 0x3cf9c0u: goto label_3cf9c0;
        case 0x3cf9c4u: goto label_3cf9c4;
        case 0x3cf9c8u: goto label_3cf9c8;
        case 0x3cf9ccu: goto label_3cf9cc;
        case 0x3cf9d0u: goto label_3cf9d0;
        case 0x3cf9d4u: goto label_3cf9d4;
        case 0x3cf9d8u: goto label_3cf9d8;
        case 0x3cf9dcu: goto label_3cf9dc;
        case 0x3cf9e0u: goto label_3cf9e0;
        case 0x3cf9e4u: goto label_3cf9e4;
        case 0x3cf9e8u: goto label_3cf9e8;
        case 0x3cf9ecu: goto label_3cf9ec;
        case 0x3cf9f0u: goto label_3cf9f0;
        case 0x3cf9f4u: goto label_3cf9f4;
        case 0x3cf9f8u: goto label_3cf9f8;
        case 0x3cf9fcu: goto label_3cf9fc;
        case 0x3cfa00u: goto label_3cfa00;
        case 0x3cfa04u: goto label_3cfa04;
        case 0x3cfa08u: goto label_3cfa08;
        case 0x3cfa0cu: goto label_3cfa0c;
        case 0x3cfa10u: goto label_3cfa10;
        case 0x3cfa14u: goto label_3cfa14;
        case 0x3cfa18u: goto label_3cfa18;
        case 0x3cfa1cu: goto label_3cfa1c;
        case 0x3cfa20u: goto label_3cfa20;
        case 0x3cfa24u: goto label_3cfa24;
        case 0x3cfa28u: goto label_3cfa28;
        case 0x3cfa2cu: goto label_3cfa2c;
        case 0x3cfa30u: goto label_3cfa30;
        case 0x3cfa34u: goto label_3cfa34;
        case 0x3cfa38u: goto label_3cfa38;
        case 0x3cfa3cu: goto label_3cfa3c;
        case 0x3cfa40u: goto label_3cfa40;
        case 0x3cfa44u: goto label_3cfa44;
        case 0x3cfa48u: goto label_3cfa48;
        case 0x3cfa4cu: goto label_3cfa4c;
        case 0x3cfa50u: goto label_3cfa50;
        case 0x3cfa54u: goto label_3cfa54;
        case 0x3cfa58u: goto label_3cfa58;
        case 0x3cfa5cu: goto label_3cfa5c;
        case 0x3cfa60u: goto label_3cfa60;
        case 0x3cfa64u: goto label_3cfa64;
        case 0x3cfa68u: goto label_3cfa68;
        case 0x3cfa6cu: goto label_3cfa6c;
        case 0x3cfa70u: goto label_3cfa70;
        case 0x3cfa74u: goto label_3cfa74;
        case 0x3cfa78u: goto label_3cfa78;
        case 0x3cfa7cu: goto label_3cfa7c;
        case 0x3cfa80u: goto label_3cfa80;
        case 0x3cfa84u: goto label_3cfa84;
        case 0x3cfa88u: goto label_3cfa88;
        case 0x3cfa8cu: goto label_3cfa8c;
        case 0x3cfa90u: goto label_3cfa90;
        case 0x3cfa94u: goto label_3cfa94;
        case 0x3cfa98u: goto label_3cfa98;
        case 0x3cfa9cu: goto label_3cfa9c;
        case 0x3cfaa0u: goto label_3cfaa0;
        case 0x3cfaa4u: goto label_3cfaa4;
        case 0x3cfaa8u: goto label_3cfaa8;
        case 0x3cfaacu: goto label_3cfaac;
        case 0x3cfab0u: goto label_3cfab0;
        case 0x3cfab4u: goto label_3cfab4;
        case 0x3cfab8u: goto label_3cfab8;
        case 0x3cfabcu: goto label_3cfabc;
        case 0x3cfac0u: goto label_3cfac0;
        case 0x3cfac4u: goto label_3cfac4;
        case 0x3cfac8u: goto label_3cfac8;
        case 0x3cfaccu: goto label_3cfacc;
        case 0x3cfad0u: goto label_3cfad0;
        case 0x3cfad4u: goto label_3cfad4;
        case 0x3cfad8u: goto label_3cfad8;
        case 0x3cfadcu: goto label_3cfadc;
        case 0x3cfae0u: goto label_3cfae0;
        case 0x3cfae4u: goto label_3cfae4;
        case 0x3cfae8u: goto label_3cfae8;
        case 0x3cfaecu: goto label_3cfaec;
        case 0x3cfaf0u: goto label_3cfaf0;
        case 0x3cfaf4u: goto label_3cfaf4;
        case 0x3cfaf8u: goto label_3cfaf8;
        case 0x3cfafcu: goto label_3cfafc;
        case 0x3cfb00u: goto label_3cfb00;
        case 0x3cfb04u: goto label_3cfb04;
        case 0x3cfb08u: goto label_3cfb08;
        case 0x3cfb0cu: goto label_3cfb0c;
        case 0x3cfb10u: goto label_3cfb10;
        case 0x3cfb14u: goto label_3cfb14;
        case 0x3cfb18u: goto label_3cfb18;
        case 0x3cfb1cu: goto label_3cfb1c;
        case 0x3cfb20u: goto label_3cfb20;
        case 0x3cfb24u: goto label_3cfb24;
        case 0x3cfb28u: goto label_3cfb28;
        case 0x3cfb2cu: goto label_3cfb2c;
        case 0x3cfb30u: goto label_3cfb30;
        case 0x3cfb34u: goto label_3cfb34;
        case 0x3cfb38u: goto label_3cfb38;
        case 0x3cfb3cu: goto label_3cfb3c;
        case 0x3cfb40u: goto label_3cfb40;
        case 0x3cfb44u: goto label_3cfb44;
        case 0x3cfb48u: goto label_3cfb48;
        case 0x3cfb4cu: goto label_3cfb4c;
        case 0x3cfb50u: goto label_3cfb50;
        case 0x3cfb54u: goto label_3cfb54;
        case 0x3cfb58u: goto label_3cfb58;
        case 0x3cfb5cu: goto label_3cfb5c;
        case 0x3cfb60u: goto label_3cfb60;
        case 0x3cfb64u: goto label_3cfb64;
        case 0x3cfb68u: goto label_3cfb68;
        case 0x3cfb6cu: goto label_3cfb6c;
        case 0x3cfb70u: goto label_3cfb70;
        case 0x3cfb74u: goto label_3cfb74;
        case 0x3cfb78u: goto label_3cfb78;
        case 0x3cfb7cu: goto label_3cfb7c;
        case 0x3cfb80u: goto label_3cfb80;
        case 0x3cfb84u: goto label_3cfb84;
        case 0x3cfb88u: goto label_3cfb88;
        case 0x3cfb8cu: goto label_3cfb8c;
        case 0x3cfb90u: goto label_3cfb90;
        case 0x3cfb94u: goto label_3cfb94;
        case 0x3cfb98u: goto label_3cfb98;
        case 0x3cfb9cu: goto label_3cfb9c;
        case 0x3cfba0u: goto label_3cfba0;
        case 0x3cfba4u: goto label_3cfba4;
        case 0x3cfba8u: goto label_3cfba8;
        case 0x3cfbacu: goto label_3cfbac;
        case 0x3cfbb0u: goto label_3cfbb0;
        case 0x3cfbb4u: goto label_3cfbb4;
        case 0x3cfbb8u: goto label_3cfbb8;
        case 0x3cfbbcu: goto label_3cfbbc;
        case 0x3cfbc0u: goto label_3cfbc0;
        case 0x3cfbc4u: goto label_3cfbc4;
        case 0x3cfbc8u: goto label_3cfbc8;
        case 0x3cfbccu: goto label_3cfbcc;
        case 0x3cfbd0u: goto label_3cfbd0;
        case 0x3cfbd4u: goto label_3cfbd4;
        case 0x3cfbd8u: goto label_3cfbd8;
        case 0x3cfbdcu: goto label_3cfbdc;
        case 0x3cfbe0u: goto label_3cfbe0;
        case 0x3cfbe4u: goto label_3cfbe4;
        case 0x3cfbe8u: goto label_3cfbe8;
        case 0x3cfbecu: goto label_3cfbec;
        case 0x3cfbf0u: goto label_3cfbf0;
        case 0x3cfbf4u: goto label_3cfbf4;
        case 0x3cfbf8u: goto label_3cfbf8;
        case 0x3cfbfcu: goto label_3cfbfc;
        case 0x3cfc00u: goto label_3cfc00;
        case 0x3cfc04u: goto label_3cfc04;
        case 0x3cfc08u: goto label_3cfc08;
        case 0x3cfc0cu: goto label_3cfc0c;
        case 0x3cfc10u: goto label_3cfc10;
        case 0x3cfc14u: goto label_3cfc14;
        case 0x3cfc18u: goto label_3cfc18;
        case 0x3cfc1cu: goto label_3cfc1c;
        case 0x3cfc20u: goto label_3cfc20;
        case 0x3cfc24u: goto label_3cfc24;
        case 0x3cfc28u: goto label_3cfc28;
        case 0x3cfc2cu: goto label_3cfc2c;
        case 0x3cfc30u: goto label_3cfc30;
        case 0x3cfc34u: goto label_3cfc34;
        case 0x3cfc38u: goto label_3cfc38;
        case 0x3cfc3cu: goto label_3cfc3c;
        case 0x3cfc40u: goto label_3cfc40;
        case 0x3cfc44u: goto label_3cfc44;
        case 0x3cfc48u: goto label_3cfc48;
        case 0x3cfc4cu: goto label_3cfc4c;
        case 0x3cfc50u: goto label_3cfc50;
        case 0x3cfc54u: goto label_3cfc54;
        case 0x3cfc58u: goto label_3cfc58;
        case 0x3cfc5cu: goto label_3cfc5c;
        case 0x3cfc60u: goto label_3cfc60;
        case 0x3cfc64u: goto label_3cfc64;
        case 0x3cfc68u: goto label_3cfc68;
        case 0x3cfc6cu: goto label_3cfc6c;
        case 0x3cfc70u: goto label_3cfc70;
        case 0x3cfc74u: goto label_3cfc74;
        case 0x3cfc78u: goto label_3cfc78;
        case 0x3cfc7cu: goto label_3cfc7c;
        case 0x3cfc80u: goto label_3cfc80;
        case 0x3cfc84u: goto label_3cfc84;
        case 0x3cfc88u: goto label_3cfc88;
        case 0x3cfc8cu: goto label_3cfc8c;
        case 0x3cfc90u: goto label_3cfc90;
        case 0x3cfc94u: goto label_3cfc94;
        case 0x3cfc98u: goto label_3cfc98;
        case 0x3cfc9cu: goto label_3cfc9c;
        case 0x3cfca0u: goto label_3cfca0;
        case 0x3cfca4u: goto label_3cfca4;
        case 0x3cfca8u: goto label_3cfca8;
        case 0x3cfcacu: goto label_3cfcac;
        case 0x3cfcb0u: goto label_3cfcb0;
        case 0x3cfcb4u: goto label_3cfcb4;
        case 0x3cfcb8u: goto label_3cfcb8;
        case 0x3cfcbcu: goto label_3cfcbc;
        case 0x3cfcc0u: goto label_3cfcc0;
        case 0x3cfcc4u: goto label_3cfcc4;
        case 0x3cfcc8u: goto label_3cfcc8;
        case 0x3cfcccu: goto label_3cfccc;
        case 0x3cfcd0u: goto label_3cfcd0;
        case 0x3cfcd4u: goto label_3cfcd4;
        case 0x3cfcd8u: goto label_3cfcd8;
        case 0x3cfcdcu: goto label_3cfcdc;
        case 0x3cfce0u: goto label_3cfce0;
        case 0x3cfce4u: goto label_3cfce4;
        case 0x3cfce8u: goto label_3cfce8;
        case 0x3cfcecu: goto label_3cfcec;
        case 0x3cfcf0u: goto label_3cfcf0;
        case 0x3cfcf4u: goto label_3cfcf4;
        case 0x3cfcf8u: goto label_3cfcf8;
        case 0x3cfcfcu: goto label_3cfcfc;
        case 0x3cfd00u: goto label_3cfd00;
        case 0x3cfd04u: goto label_3cfd04;
        case 0x3cfd08u: goto label_3cfd08;
        case 0x3cfd0cu: goto label_3cfd0c;
        case 0x3cfd10u: goto label_3cfd10;
        case 0x3cfd14u: goto label_3cfd14;
        case 0x3cfd18u: goto label_3cfd18;
        case 0x3cfd1cu: goto label_3cfd1c;
        case 0x3cfd20u: goto label_3cfd20;
        case 0x3cfd24u: goto label_3cfd24;
        case 0x3cfd28u: goto label_3cfd28;
        case 0x3cfd2cu: goto label_3cfd2c;
        case 0x3cfd30u: goto label_3cfd30;
        case 0x3cfd34u: goto label_3cfd34;
        case 0x3cfd38u: goto label_3cfd38;
        case 0x3cfd3cu: goto label_3cfd3c;
        case 0x3cfd40u: goto label_3cfd40;
        case 0x3cfd44u: goto label_3cfd44;
        case 0x3cfd48u: goto label_3cfd48;
        case 0x3cfd4cu: goto label_3cfd4c;
        case 0x3cfd50u: goto label_3cfd50;
        case 0x3cfd54u: goto label_3cfd54;
        case 0x3cfd58u: goto label_3cfd58;
        case 0x3cfd5cu: goto label_3cfd5c;
        case 0x3cfd60u: goto label_3cfd60;
        case 0x3cfd64u: goto label_3cfd64;
        case 0x3cfd68u: goto label_3cfd68;
        case 0x3cfd6cu: goto label_3cfd6c;
        case 0x3cfd70u: goto label_3cfd70;
        case 0x3cfd74u: goto label_3cfd74;
        case 0x3cfd78u: goto label_3cfd78;
        case 0x3cfd7cu: goto label_3cfd7c;
        case 0x3cfd80u: goto label_3cfd80;
        case 0x3cfd84u: goto label_3cfd84;
        case 0x3cfd88u: goto label_3cfd88;
        case 0x3cfd8cu: goto label_3cfd8c;
        case 0x3cfd90u: goto label_3cfd90;
        case 0x3cfd94u: goto label_3cfd94;
        case 0x3cfd98u: goto label_3cfd98;
        case 0x3cfd9cu: goto label_3cfd9c;
        case 0x3cfda0u: goto label_3cfda0;
        case 0x3cfda4u: goto label_3cfda4;
        case 0x3cfda8u: goto label_3cfda8;
        case 0x3cfdacu: goto label_3cfdac;
        case 0x3cfdb0u: goto label_3cfdb0;
        case 0x3cfdb4u: goto label_3cfdb4;
        case 0x3cfdb8u: goto label_3cfdb8;
        case 0x3cfdbcu: goto label_3cfdbc;
        case 0x3cfdc0u: goto label_3cfdc0;
        case 0x3cfdc4u: goto label_3cfdc4;
        case 0x3cfdc8u: goto label_3cfdc8;
        case 0x3cfdccu: goto label_3cfdcc;
        case 0x3cfdd0u: goto label_3cfdd0;
        case 0x3cfdd4u: goto label_3cfdd4;
        case 0x3cfdd8u: goto label_3cfdd8;
        case 0x3cfddcu: goto label_3cfddc;
        case 0x3cfde0u: goto label_3cfde0;
        case 0x3cfde4u: goto label_3cfde4;
        case 0x3cfde8u: goto label_3cfde8;
        case 0x3cfdecu: goto label_3cfdec;
        case 0x3cfdf0u: goto label_3cfdf0;
        case 0x3cfdf4u: goto label_3cfdf4;
        case 0x3cfdf8u: goto label_3cfdf8;
        case 0x3cfdfcu: goto label_3cfdfc;
        case 0x3cfe00u: goto label_3cfe00;
        case 0x3cfe04u: goto label_3cfe04;
        case 0x3cfe08u: goto label_3cfe08;
        case 0x3cfe0cu: goto label_3cfe0c;
        case 0x3cfe10u: goto label_3cfe10;
        case 0x3cfe14u: goto label_3cfe14;
        case 0x3cfe18u: goto label_3cfe18;
        case 0x3cfe1cu: goto label_3cfe1c;
        case 0x3cfe20u: goto label_3cfe20;
        case 0x3cfe24u: goto label_3cfe24;
        case 0x3cfe28u: goto label_3cfe28;
        case 0x3cfe2cu: goto label_3cfe2c;
        case 0x3cfe30u: goto label_3cfe30;
        case 0x3cfe34u: goto label_3cfe34;
        case 0x3cfe38u: goto label_3cfe38;
        case 0x3cfe3cu: goto label_3cfe3c;
        case 0x3cfe40u: goto label_3cfe40;
        case 0x3cfe44u: goto label_3cfe44;
        case 0x3cfe48u: goto label_3cfe48;
        case 0x3cfe4cu: goto label_3cfe4c;
        case 0x3cfe50u: goto label_3cfe50;
        case 0x3cfe54u: goto label_3cfe54;
        case 0x3cfe58u: goto label_3cfe58;
        case 0x3cfe5cu: goto label_3cfe5c;
        case 0x3cfe60u: goto label_3cfe60;
        case 0x3cfe64u: goto label_3cfe64;
        case 0x3cfe68u: goto label_3cfe68;
        case 0x3cfe6cu: goto label_3cfe6c;
        case 0x3cfe70u: goto label_3cfe70;
        case 0x3cfe74u: goto label_3cfe74;
        case 0x3cfe78u: goto label_3cfe78;
        case 0x3cfe7cu: goto label_3cfe7c;
        case 0x3cfe80u: goto label_3cfe80;
        case 0x3cfe84u: goto label_3cfe84;
        case 0x3cfe88u: goto label_3cfe88;
        case 0x3cfe8cu: goto label_3cfe8c;
        case 0x3cfe90u: goto label_3cfe90;
        case 0x3cfe94u: goto label_3cfe94;
        case 0x3cfe98u: goto label_3cfe98;
        case 0x3cfe9cu: goto label_3cfe9c;
        case 0x3cfea0u: goto label_3cfea0;
        case 0x3cfea4u: goto label_3cfea4;
        case 0x3cfea8u: goto label_3cfea8;
        case 0x3cfeacu: goto label_3cfeac;
        case 0x3cfeb0u: goto label_3cfeb0;
        case 0x3cfeb4u: goto label_3cfeb4;
        case 0x3cfeb8u: goto label_3cfeb8;
        case 0x3cfebcu: goto label_3cfebc;
        case 0x3cfec0u: goto label_3cfec0;
        case 0x3cfec4u: goto label_3cfec4;
        case 0x3cfec8u: goto label_3cfec8;
        case 0x3cfeccu: goto label_3cfecc;
        case 0x3cfed0u: goto label_3cfed0;
        case 0x3cfed4u: goto label_3cfed4;
        case 0x3cfed8u: goto label_3cfed8;
        case 0x3cfedcu: goto label_3cfedc;
        case 0x3cfee0u: goto label_3cfee0;
        case 0x3cfee4u: goto label_3cfee4;
        case 0x3cfee8u: goto label_3cfee8;
        case 0x3cfeecu: goto label_3cfeec;
        case 0x3cfef0u: goto label_3cfef0;
        case 0x3cfef4u: goto label_3cfef4;
        case 0x3cfef8u: goto label_3cfef8;
        case 0x3cfefcu: goto label_3cfefc;
        case 0x3cff00u: goto label_3cff00;
        case 0x3cff04u: goto label_3cff04;
        case 0x3cff08u: goto label_3cff08;
        case 0x3cff0cu: goto label_3cff0c;
        case 0x3cff10u: goto label_3cff10;
        case 0x3cff14u: goto label_3cff14;
        case 0x3cff18u: goto label_3cff18;
        case 0x3cff1cu: goto label_3cff1c;
        case 0x3cff20u: goto label_3cff20;
        case 0x3cff24u: goto label_3cff24;
        case 0x3cff28u: goto label_3cff28;
        case 0x3cff2cu: goto label_3cff2c;
        case 0x3cff30u: goto label_3cff30;
        case 0x3cff34u: goto label_3cff34;
        case 0x3cff38u: goto label_3cff38;
        case 0x3cff3cu: goto label_3cff3c;
        case 0x3cff40u: goto label_3cff40;
        case 0x3cff44u: goto label_3cff44;
        case 0x3cff48u: goto label_3cff48;
        case 0x3cff4cu: goto label_3cff4c;
        case 0x3cff50u: goto label_3cff50;
        case 0x3cff54u: goto label_3cff54;
        case 0x3cff58u: goto label_3cff58;
        case 0x3cff5cu: goto label_3cff5c;
        case 0x3cff60u: goto label_3cff60;
        case 0x3cff64u: goto label_3cff64;
        case 0x3cff68u: goto label_3cff68;
        case 0x3cff6cu: goto label_3cff6c;
        case 0x3cff70u: goto label_3cff70;
        case 0x3cff74u: goto label_3cff74;
        case 0x3cff78u: goto label_3cff78;
        case 0x3cff7cu: goto label_3cff7c;
        case 0x3cff80u: goto label_3cff80;
        case 0x3cff84u: goto label_3cff84;
        case 0x3cff88u: goto label_3cff88;
        case 0x3cff8cu: goto label_3cff8c;
        case 0x3cff90u: goto label_3cff90;
        case 0x3cff94u: goto label_3cff94;
        case 0x3cff98u: goto label_3cff98;
        case 0x3cff9cu: goto label_3cff9c;
        case 0x3cffa0u: goto label_3cffa0;
        case 0x3cffa4u: goto label_3cffa4;
        case 0x3cffa8u: goto label_3cffa8;
        case 0x3cffacu: goto label_3cffac;
        case 0x3cffb0u: goto label_3cffb0;
        case 0x3cffb4u: goto label_3cffb4;
        case 0x3cffb8u: goto label_3cffb8;
        case 0x3cffbcu: goto label_3cffbc;
        case 0x3cffc0u: goto label_3cffc0;
        case 0x3cffc4u: goto label_3cffc4;
        case 0x3cffc8u: goto label_3cffc8;
        case 0x3cffccu: goto label_3cffcc;
        case 0x3cffd0u: goto label_3cffd0;
        case 0x3cffd4u: goto label_3cffd4;
        case 0x3cffd8u: goto label_3cffd8;
        case 0x3cffdcu: goto label_3cffdc;
        case 0x3cffe0u: goto label_3cffe0;
        case 0x3cffe4u: goto label_3cffe4;
        case 0x3cffe8u: goto label_3cffe8;
        case 0x3cffecu: goto label_3cffec;
        case 0x3cfff0u: goto label_3cfff0;
        case 0x3cfff4u: goto label_3cfff4;
        case 0x3cfff8u: goto label_3cfff8;
        case 0x3cfffcu: goto label_3cfffc;
        case 0x3d0000u: goto label_3d0000;
        case 0x3d0004u: goto label_3d0004;
        case 0x3d0008u: goto label_3d0008;
        case 0x3d000cu: goto label_3d000c;
        case 0x3d0010u: goto label_3d0010;
        case 0x3d0014u: goto label_3d0014;
        case 0x3d0018u: goto label_3d0018;
        case 0x3d001cu: goto label_3d001c;
        case 0x3d0020u: goto label_3d0020;
        case 0x3d0024u: goto label_3d0024;
        case 0x3d0028u: goto label_3d0028;
        case 0x3d002cu: goto label_3d002c;
        case 0x3d0030u: goto label_3d0030;
        case 0x3d0034u: goto label_3d0034;
        case 0x3d0038u: goto label_3d0038;
        case 0x3d003cu: goto label_3d003c;
        case 0x3d0040u: goto label_3d0040;
        case 0x3d0044u: goto label_3d0044;
        case 0x3d0048u: goto label_3d0048;
        case 0x3d004cu: goto label_3d004c;
        case 0x3d0050u: goto label_3d0050;
        case 0x3d0054u: goto label_3d0054;
        case 0x3d0058u: goto label_3d0058;
        case 0x3d005cu: goto label_3d005c;
        case 0x3d0060u: goto label_3d0060;
        case 0x3d0064u: goto label_3d0064;
        case 0x3d0068u: goto label_3d0068;
        case 0x3d006cu: goto label_3d006c;
        case 0x3d0070u: goto label_3d0070;
        case 0x3d0074u: goto label_3d0074;
        case 0x3d0078u: goto label_3d0078;
        case 0x3d007cu: goto label_3d007c;
        case 0x3d0080u: goto label_3d0080;
        case 0x3d0084u: goto label_3d0084;
        case 0x3d0088u: goto label_3d0088;
        case 0x3d008cu: goto label_3d008c;
        case 0x3d0090u: goto label_3d0090;
        case 0x3d0094u: goto label_3d0094;
        case 0x3d0098u: goto label_3d0098;
        case 0x3d009cu: goto label_3d009c;
        case 0x3d00a0u: goto label_3d00a0;
        case 0x3d00a4u: goto label_3d00a4;
        case 0x3d00a8u: goto label_3d00a8;
        case 0x3d00acu: goto label_3d00ac;
        case 0x3d00b0u: goto label_3d00b0;
        case 0x3d00b4u: goto label_3d00b4;
        case 0x3d00b8u: goto label_3d00b8;
        case 0x3d00bcu: goto label_3d00bc;
        case 0x3d00c0u: goto label_3d00c0;
        case 0x3d00c4u: goto label_3d00c4;
        case 0x3d00c8u: goto label_3d00c8;
        case 0x3d00ccu: goto label_3d00cc;
        case 0x3d00d0u: goto label_3d00d0;
        case 0x3d00d4u: goto label_3d00d4;
        case 0x3d00d8u: goto label_3d00d8;
        case 0x3d00dcu: goto label_3d00dc;
        case 0x3d00e0u: goto label_3d00e0;
        case 0x3d00e4u: goto label_3d00e4;
        case 0x3d00e8u: goto label_3d00e8;
        case 0x3d00ecu: goto label_3d00ec;
        case 0x3d00f0u: goto label_3d00f0;
        case 0x3d00f4u: goto label_3d00f4;
        case 0x3d00f8u: goto label_3d00f8;
        case 0x3d00fcu: goto label_3d00fc;
        case 0x3d0100u: goto label_3d0100;
        case 0x3d0104u: goto label_3d0104;
        case 0x3d0108u: goto label_3d0108;
        case 0x3d010cu: goto label_3d010c;
        case 0x3d0110u: goto label_3d0110;
        case 0x3d0114u: goto label_3d0114;
        case 0x3d0118u: goto label_3d0118;
        case 0x3d011cu: goto label_3d011c;
        case 0x3d0120u: goto label_3d0120;
        case 0x3d0124u: goto label_3d0124;
        case 0x3d0128u: goto label_3d0128;
        case 0x3d012cu: goto label_3d012c;
        case 0x3d0130u: goto label_3d0130;
        case 0x3d0134u: goto label_3d0134;
        case 0x3d0138u: goto label_3d0138;
        case 0x3d013cu: goto label_3d013c;
        case 0x3d0140u: goto label_3d0140;
        case 0x3d0144u: goto label_3d0144;
        case 0x3d0148u: goto label_3d0148;
        case 0x3d014cu: goto label_3d014c;
        case 0x3d0150u: goto label_3d0150;
        case 0x3d0154u: goto label_3d0154;
        case 0x3d0158u: goto label_3d0158;
        case 0x3d015cu: goto label_3d015c;
        case 0x3d0160u: goto label_3d0160;
        case 0x3d0164u: goto label_3d0164;
        case 0x3d0168u: goto label_3d0168;
        case 0x3d016cu: goto label_3d016c;
        case 0x3d0170u: goto label_3d0170;
        case 0x3d0174u: goto label_3d0174;
        case 0x3d0178u: goto label_3d0178;
        case 0x3d017cu: goto label_3d017c;
        case 0x3d0180u: goto label_3d0180;
        case 0x3d0184u: goto label_3d0184;
        case 0x3d0188u: goto label_3d0188;
        case 0x3d018cu: goto label_3d018c;
        case 0x3d0190u: goto label_3d0190;
        case 0x3d0194u: goto label_3d0194;
        case 0x3d0198u: goto label_3d0198;
        case 0x3d019cu: goto label_3d019c;
        case 0x3d01a0u: goto label_3d01a0;
        case 0x3d01a4u: goto label_3d01a4;
        case 0x3d01a8u: goto label_3d01a8;
        case 0x3d01acu: goto label_3d01ac;
        case 0x3d01b0u: goto label_3d01b0;
        case 0x3d01b4u: goto label_3d01b4;
        case 0x3d01b8u: goto label_3d01b8;
        case 0x3d01bcu: goto label_3d01bc;
        case 0x3d01c0u: goto label_3d01c0;
        case 0x3d01c4u: goto label_3d01c4;
        case 0x3d01c8u: goto label_3d01c8;
        case 0x3d01ccu: goto label_3d01cc;
        case 0x3d01d0u: goto label_3d01d0;
        case 0x3d01d4u: goto label_3d01d4;
        case 0x3d01d8u: goto label_3d01d8;
        case 0x3d01dcu: goto label_3d01dc;
        case 0x3d01e0u: goto label_3d01e0;
        case 0x3d01e4u: goto label_3d01e4;
        case 0x3d01e8u: goto label_3d01e8;
        case 0x3d01ecu: goto label_3d01ec;
        case 0x3d01f0u: goto label_3d01f0;
        case 0x3d01f4u: goto label_3d01f4;
        case 0x3d01f8u: goto label_3d01f8;
        case 0x3d01fcu: goto label_3d01fc;
        case 0x3d0200u: goto label_3d0200;
        case 0x3d0204u: goto label_3d0204;
        case 0x3d0208u: goto label_3d0208;
        case 0x3d020cu: goto label_3d020c;
        case 0x3d0210u: goto label_3d0210;
        case 0x3d0214u: goto label_3d0214;
        case 0x3d0218u: goto label_3d0218;
        case 0x3d021cu: goto label_3d021c;
        case 0x3d0220u: goto label_3d0220;
        case 0x3d0224u: goto label_3d0224;
        case 0x3d0228u: goto label_3d0228;
        case 0x3d022cu: goto label_3d022c;
        case 0x3d0230u: goto label_3d0230;
        case 0x3d0234u: goto label_3d0234;
        case 0x3d0238u: goto label_3d0238;
        case 0x3d023cu: goto label_3d023c;
        case 0x3d0240u: goto label_3d0240;
        case 0x3d0244u: goto label_3d0244;
        case 0x3d0248u: goto label_3d0248;
        case 0x3d024cu: goto label_3d024c;
        case 0x3d0250u: goto label_3d0250;
        case 0x3d0254u: goto label_3d0254;
        case 0x3d0258u: goto label_3d0258;
        case 0x3d025cu: goto label_3d025c;
        case 0x3d0260u: goto label_3d0260;
        case 0x3d0264u: goto label_3d0264;
        case 0x3d0268u: goto label_3d0268;
        case 0x3d026cu: goto label_3d026c;
        case 0x3d0270u: goto label_3d0270;
        case 0x3d0274u: goto label_3d0274;
        case 0x3d0278u: goto label_3d0278;
        case 0x3d027cu: goto label_3d027c;
        case 0x3d0280u: goto label_3d0280;
        case 0x3d0284u: goto label_3d0284;
        case 0x3d0288u: goto label_3d0288;
        case 0x3d028cu: goto label_3d028c;
        case 0x3d0290u: goto label_3d0290;
        case 0x3d0294u: goto label_3d0294;
        case 0x3d0298u: goto label_3d0298;
        case 0x3d029cu: goto label_3d029c;
        case 0x3d02a0u: goto label_3d02a0;
        case 0x3d02a4u: goto label_3d02a4;
        case 0x3d02a8u: goto label_3d02a8;
        case 0x3d02acu: goto label_3d02ac;
        case 0x3d02b0u: goto label_3d02b0;
        case 0x3d02b4u: goto label_3d02b4;
        case 0x3d02b8u: goto label_3d02b8;
        case 0x3d02bcu: goto label_3d02bc;
        case 0x3d02c0u: goto label_3d02c0;
        case 0x3d02c4u: goto label_3d02c4;
        case 0x3d02c8u: goto label_3d02c8;
        case 0x3d02ccu: goto label_3d02cc;
        case 0x3d02d0u: goto label_3d02d0;
        case 0x3d02d4u: goto label_3d02d4;
        case 0x3d02d8u: goto label_3d02d8;
        case 0x3d02dcu: goto label_3d02dc;
        case 0x3d02e0u: goto label_3d02e0;
        case 0x3d02e4u: goto label_3d02e4;
        case 0x3d02e8u: goto label_3d02e8;
        case 0x3d02ecu: goto label_3d02ec;
        case 0x3d02f0u: goto label_3d02f0;
        case 0x3d02f4u: goto label_3d02f4;
        case 0x3d02f8u: goto label_3d02f8;
        case 0x3d02fcu: goto label_3d02fc;
        case 0x3d0300u: goto label_3d0300;
        case 0x3d0304u: goto label_3d0304;
        case 0x3d0308u: goto label_3d0308;
        case 0x3d030cu: goto label_3d030c;
        case 0x3d0310u: goto label_3d0310;
        case 0x3d0314u: goto label_3d0314;
        case 0x3d0318u: goto label_3d0318;
        case 0x3d031cu: goto label_3d031c;
        case 0x3d0320u: goto label_3d0320;
        case 0x3d0324u: goto label_3d0324;
        case 0x3d0328u: goto label_3d0328;
        case 0x3d032cu: goto label_3d032c;
        case 0x3d0330u: goto label_3d0330;
        case 0x3d0334u: goto label_3d0334;
        case 0x3d0338u: goto label_3d0338;
        case 0x3d033cu: goto label_3d033c;
        case 0x3d0340u: goto label_3d0340;
        case 0x3d0344u: goto label_3d0344;
        case 0x3d0348u: goto label_3d0348;
        case 0x3d034cu: goto label_3d034c;
        case 0x3d0350u: goto label_3d0350;
        case 0x3d0354u: goto label_3d0354;
        case 0x3d0358u: goto label_3d0358;
        case 0x3d035cu: goto label_3d035c;
        case 0x3d0360u: goto label_3d0360;
        case 0x3d0364u: goto label_3d0364;
        case 0x3d0368u: goto label_3d0368;
        case 0x3d036cu: goto label_3d036c;
        case 0x3d0370u: goto label_3d0370;
        case 0x3d0374u: goto label_3d0374;
        case 0x3d0378u: goto label_3d0378;
        case 0x3d037cu: goto label_3d037c;
        case 0x3d0380u: goto label_3d0380;
        case 0x3d0384u: goto label_3d0384;
        case 0x3d0388u: goto label_3d0388;
        case 0x3d038cu: goto label_3d038c;
        case 0x3d0390u: goto label_3d0390;
        case 0x3d0394u: goto label_3d0394;
        case 0x3d0398u: goto label_3d0398;
        case 0x3d039cu: goto label_3d039c;
        case 0x3d03a0u: goto label_3d03a0;
        case 0x3d03a4u: goto label_3d03a4;
        case 0x3d03a8u: goto label_3d03a8;
        case 0x3d03acu: goto label_3d03ac;
        case 0x3d03b0u: goto label_3d03b0;
        case 0x3d03b4u: goto label_3d03b4;
        case 0x3d03b8u: goto label_3d03b8;
        case 0x3d03bcu: goto label_3d03bc;
        default: break;
    }

    ctx->pc = 0x3cef40u;

label_3cef40:
    // 0x3cef40: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x3cef40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_3cef44:
    // 0x3cef44: 0x7fbe0130  sq          $fp, 0x130($sp)
    ctx->pc = 0x3cef44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 30));
label_3cef48:
    // 0x3cef48: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x3cef48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
label_3cef4c:
    // 0x3cef4c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x3cef4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cef50:
    // 0x3cef50: 0xafa600a4  sw          $a2, 0xA4($sp)
    ctx->pc = 0x3cef50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 6));
label_3cef54:
    // 0x3cef54: 0xafa700a8  sw          $a3, 0xA8($sp)
    ctx->pc = 0x3cef54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 7));
label_3cef58:
    // 0x3cef58: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x3cef58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
label_3cef5c:
    // 0x3cef5c: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x3cef5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
label_3cef60:
    // 0x3cef60: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x3cef60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
label_3cef64:
    // 0x3cef64: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x3cef64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
label_3cef68:
    // 0x3cef68: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x3cef68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
label_3cef6c:
    // 0x3cef6c: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x3cef6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
label_3cef70:
    // 0x3cef70: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x3cef70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
label_3cef74:
    // 0x3cef74: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x3cef74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
label_3cef78:
    // 0x3cef78: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x3cef78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_3cef7c:
    // 0x3cef7c: 0xe7b701d8  swc1        $f23, 0x1D8($sp)
    ctx->pc = 0x3cef7cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_3cef80:
    // 0x3cef80: 0xe7b601d0  swc1        $f22, 0x1D0($sp)
    ctx->pc = 0x3cef80u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_3cef84:
    // 0x3cef84: 0xe7b501c8  swc1        $f21, 0x1C8($sp)
    ctx->pc = 0x3cef84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_3cef88:
    // 0x3cef88: 0xe7b401c0  swc1        $f20, 0x1C0($sp)
    ctx->pc = 0x3cef88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_3cef8c:
    // 0x3cef8c: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x3cef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_3cef90:
    // 0x3cef90: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cef90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cef94:
    // 0x3cef94: 0xc103642  jal         func_40D908
label_3cef98:
    if (ctx->pc == 0x3CEF98u) {
        ctx->pc = 0x3CEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEF94u;
        // 0x3cef98: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CEF9Cu;
        goto label_3cef9c;
    }
    ctx->pc = 0x3CEF94u;
    SET_GPR_U32(ctx, 31, 0x3CEF9Cu);
    ctx->pc = 0x3CEF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEF94u;
    // 0x3cef98: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3CEF94u, 0x3CEF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEF9Cu;
label_3cef9c:
    // 0x3cef9c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cef9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cefa0:
    // 0x3cefa0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3cefa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3cefa4:
    // 0x3cefa4: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x3cefa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_3cefa8:
    // 0x3cefa8: 0xc103642  jal         func_40D908
label_3cefac:
    if (ctx->pc == 0x3CEFACu) {
        ctx->pc = 0x3CEFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEFA8u;
        // 0x3cefac: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CEFB0u;
        goto label_3cefb0;
    }
    ctx->pc = 0x3CEFA8u;
    SET_GPR_U32(ctx, 31, 0x3CEFB0u);
    ctx->pc = 0x3CEFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEFA8u;
    // 0x3cefac: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3CEFA8u, 0x3CEFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEFB0u;
label_3cefb0:
    // 0x3cefb0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cefb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cefb4:
    // 0x3cefb4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3cefb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_3cefb8:
    // 0x3cefb8: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x3cefb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_3cefbc:
    // 0x3cefbc: 0xc103642  jal         func_40D908
label_3cefc0:
    if (ctx->pc == 0x3CEFC0u) {
        ctx->pc = 0x3CEFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEFBCu;
        // 0x3cefc0: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CEFC4u;
        goto label_3cefc4;
    }
    ctx->pc = 0x3CEFBCu;
    SET_GPR_U32(ctx, 31, 0x3CEFC4u);
    ctx->pc = 0x3CEFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEFBCu;
    // 0x3cefc0: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3CEFBCu, 0x3CEFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEFC4u;
label_3cefc4:
    // 0x3cefc4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cefc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cefc8:
    // 0x3cefc8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3cefc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_3cefcc:
    // 0x3cefcc: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x3cefccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_3cefd0:
    // 0x3cefd0: 0xc103642  jal         func_40D908
label_3cefd4:
    if (ctx->pc == 0x3CEFD4u) {
        ctx->pc = 0x3CEFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEFD0u;
        // 0x3cefd4: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CEFD8u;
        goto label_3cefd8;
    }
    ctx->pc = 0x3CEFD0u;
    SET_GPR_U32(ctx, 31, 0x3CEFD8u);
    ctx->pc = 0x3CEFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEFD0u;
    // 0x3cefd4: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3CEFD0u, 0x3CEFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEFD8u;
label_3cefd8:
    // 0x3cefd8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cefd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cefdc:
    // 0x3cefdc: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x3cefdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_3cefe0:
    // 0x3cefe0: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x3cefe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_3cefe4:
    // 0x3cefe4: 0xc103642  jal         func_40D908
label_3cefe8:
    if (ctx->pc == 0x3CEFE8u) {
        ctx->pc = 0x3CEFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEFE4u;
        // 0x3cefe8: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CEFECu;
        goto label_3cefec;
    }
    ctx->pc = 0x3CEFE4u;
    SET_GPR_U32(ctx, 31, 0x3CEFECu);
    ctx->pc = 0x3CEFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEFE4u;
    // 0x3cefe8: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3CEFE4u, 0x3CEFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEFECu;
label_3cefec:
    // 0x3cefec: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cefecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3ceff0:
    // 0x3ceff0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3ceff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_3ceff4:
    // 0x3ceff4: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x3ceff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_3ceff8:
    // 0x3ceff8: 0xc103642  jal         func_40D908
label_3ceffc:
    if (ctx->pc == 0x3CEFFCu) {
        ctx->pc = 0x3CEFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEFF8u;
        // 0x3ceffc: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF000u;
        goto label_3cf000;
    }
    ctx->pc = 0x3CEFF8u;
    SET_GPR_U32(ctx, 31, 0x3CF000u);
    ctx->pc = 0x3CEFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEFF8u;
    // 0x3ceffc: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3CEFF8u, 0x3CF000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF000u;
label_3cf000:
    // 0x3cf000: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3cf000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_3cf004:
    // 0x3cf004: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3cf004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3cf008:
    // 0x3cf008: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x3cf008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
label_3cf00c:
    // 0x3cf00c: 0xc0f397a  jal         func_3CE5E8
label_3cf010:
    if (ctx->pc == 0x3CF010u) {
        ctx->pc = 0x3CF010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF00Cu;
        // 0x3cf010: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF014u;
        goto label_3cf014;
    }
    ctx->pc = 0x3CF00Cu;
    SET_GPR_U32(ctx, 31, 0x3CF014u);
    ctx->pc = 0x3CF010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF00Cu;
    // 0x3cf010: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE5E8u, 0x3CF00Cu, 0x3CF014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF014u;
label_3cf014:
    // 0x3cf014: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3cf014u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cf018:
    // 0x3cf018: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x3cf018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_3cf01c:
    // 0x3cf01c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3cf01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3cf020:
    // 0x3cf020: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cf020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cf024:
    // 0x3cf024: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x3cf024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3cf028:
    // 0x3cf028: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x3cf028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_3cf02c:
    // 0x3cf02c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3cf02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3cf030:
    // 0x3cf030: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x3cf030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
label_3cf034:
    // 0x3cf034: 0x40f809  jalr        $v0
label_3cf038:
    if (ctx->pc == 0x3CF038u) {
        ctx->pc = 0x3CF038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF034u;
        // 0x3cf038: 0xafa000b8  sw          $zero, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF03Cu;
        goto label_3cf03c;
    }
    ctx->pc = 0x3CF034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CF03Cu);
        ctx->pc = 0x3CF038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF034u;
        // 0x3cf038: 0xafa000b8  sw          $zero, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CF034u, 0x3CF03Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CF03Cu;
label_3cf03c:
    // 0x3cf03c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cf03cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cf040:
    // 0x3cf040: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x3cf040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_3cf044:
    // 0x3cf044: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3cf044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3cf048:
    // 0x3cf048: 0xc103642  jal         func_40D908
label_3cf04c:
    if (ctx->pc == 0x3CF04Cu) {
        ctx->pc = 0x3CF04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF048u;
        // 0x3cf04c: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF050u;
        goto label_3cf050;
    }
    ctx->pc = 0x3CF048u;
    SET_GPR_U32(ctx, 31, 0x3CF050u);
    ctx->pc = 0x3CF04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF048u;
    // 0x3cf04c: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3CF048u, 0x3CF050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF050u;
label_3cf050:
    // 0x3cf050: 0x8fc60018  lw          $a2, 0x18($fp)
    ctx->pc = 0x3cf050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_3cf054:
    // 0x3cf054: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3cf054u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cf058:
    // 0x3cf058: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x3cf058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_3cf05c:
    // 0x3cf05c: 0xc0bb7e6  jal         func_2EDF98
label_3cf060:
    if (ctx->pc == 0x3CF060u) {
        ctx->pc = 0x3CF060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF05Cu;
        // 0x3cf060: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF064u;
        goto label_3cf064;
    }
    ctx->pc = 0x3CF05Cu;
    SET_GPR_U32(ctx, 31, 0x3CF064u);
    ctx->pc = 0x3CF060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF05Cu;
    // 0x3cf060: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3CF05Cu, 0x3CF064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF064u;
label_3cf064:
    // 0x3cf064: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x3cf064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_3cf068:
    // 0x3cf068: 0x1860026b  blez        $v1, . + 4 + (0x26B << 2)
label_3cf06c:
    if (ctx->pc == 0x3CF06Cu) {
        ctx->pc = 0x3CF06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF068u;
        // 0x3cf06c: 0x8fa500b8  lw          $a1, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF070u;
        goto label_3cf070;
    }
    ctx->pc = 0x3CF068u;
    {
        const bool branch_taken_0x3cf068 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3CF06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF068u;
        // 0x3cf06c: 0x8fa500b8  lw          $a1, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf068) {
            ctx->pc = 0x3CFA18u;
            goto label_3cfa18;
        }
    }
    ctx->pc = 0x3CF070u;
label_3cf070:
    // 0x3cf070: 0xc7978108  lwc1        $f23, -0x7EF8($gp)
    ctx->pc = 0x3cf070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3cf074:
    // 0x3cf074: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x3cf074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
label_3cf078:
    // 0x3cf078: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3cf078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3cf07c:
    // 0x3cf07c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x3cf07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3cf080:
    // 0x3cf080: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x3cf080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_3cf084:
    // 0x3cf084: 0x0  nop
    ctx->pc = 0x3cf084u;
    // NOP
label_3cf088:
    // 0x3cf088: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3cf088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3cf08c:
    // 0x3cf08c: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x3cf08cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_3cf090:
    // 0x3cf090: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x3cf090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_3cf094:
    // 0x3cf094: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3cf094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3cf098:
    // 0x3cf098: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x3cf098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
label_3cf09c:
    // 0x3cf09c: 0xafa600ec  sw          $a2, 0xEC($sp)
    ctx->pc = 0x3cf09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 6));
label_3cf0a0:
    // 0x3cf0a0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x3cf0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3cf0a4:
    // 0x3cf0a4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3cf0a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3cf0a8:
    // 0x3cf0a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3cf0ac:
    if (ctx->pc == 0x3CF0ACu) {
        ctx->pc = 0x3CF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF0A8u;
        // 0x3cf0ac: 0x8fa700ac  lw          $a3, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF0B0u;
        goto label_3cf0b0;
    }
    ctx->pc = 0x3CF0A8u;
    {
        const bool branch_taken_0x3cf0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF0A8u;
        // 0x3cf0ac: 0x8fa700ac  lw          $a3, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf0a8) {
            ctx->pc = 0x3CF0D0u;
            goto label_3cf0d0;
        }
    }
    ctx->pc = 0x3CF0B0u;
label_3cf0b0:
    // 0x3cf0b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3cf0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3cf0b4:
    // 0x3cf0b4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3cf0b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3cf0b8:
    // 0x3cf0b8: 0x0  nop
    ctx->pc = 0x3cf0b8u;
    // NOP
label_3cf0bc:
    // 0x3cf0bc: 0x0  nop
    ctx->pc = 0x3cf0bcu;
    // NOP
label_3cf0c0:
    // 0x3cf0c0: 0x0  nop
    ctx->pc = 0x3cf0c0u;
    // NOP
label_3cf0c4:
    // 0x3cf0c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3cf0c8:
    if (ctx->pc == 0x3CF0C8u) {
        ctx->pc = 0x3CF0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF0C4u;
        // 0x3cf0c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF0CCu;
        goto label_3cf0cc;
    }
    ctx->pc = 0x3CF0C4u;
    {
        const bool branch_taken_0x3cf0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CF0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF0C4u;
        // 0x3cf0c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf0c4) {
            ctx->pc = 0x3CF0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cf0b0;
        }
    }
    ctx->pc = 0x3CF0CCu;
label_3cf0cc:
    // 0x3cf0cc: 0x8fa700ac  lw          $a3, 0xAC($sp)
    ctx->pc = 0x3cf0ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_3cf0d0:
    // 0x3cf0d0: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x3cf0d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_3cf0d4:
    // 0x3cf0d4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3cf0d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cf0d8:
    // 0x3cf0d8: 0x55900  sll         $t3, $a1, 4
    ctx->pc = 0x3cf0d8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3cf0dc:
    // 0x3cf0dc: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x3cf0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_3cf0e0:
    // 0x3cf0e0: 0x24ac0001  addiu       $t4, $a1, 0x1
    ctx->pc = 0x3cf0e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3cf0e4:
    // 0x3cf0e4: 0xa04a0000  sb          $t2, 0x0($v0)
    ctx->pc = 0x3cf0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 10));
label_3cf0e8:
    // 0x3cf0e8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x3cf0e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_3cf0ec:
    // 0x3cf0ec: 0xafab00fc  sw          $t3, 0xFC($sp)
    ctx->pc = 0x3cf0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 11));
label_3cf0f0:
    // 0x3cf0f0: 0x5a8c0  sll         $s5, $a1, 3
    ctx->pc = 0x3cf0f0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_3cf0f4:
    // 0x3cf0f4: 0xafac00f8  sw          $t4, 0xF8($sp)
    ctx->pc = 0x3cf0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 12));
label_3cf0f8:
    // 0x3cf0f8: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x3cf0f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cf0fc:
    // 0x3cf0fc: 0xafa800d8  sw          $t0, 0xD8($sp)
    ctx->pc = 0x3cf0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 8));
label_3cf100:
    // 0x3cf100: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x3cf100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
label_3cf104:
    // 0x3cf104: 0x0  nop
    ctx->pc = 0x3cf104u;
    // NOP
label_3cf108:
    // 0x3cf108: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x3cf108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_3cf10c:
    // 0x3cf10c: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x3cf10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_3cf110:
    // 0x3cf110: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x3cf110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3cf114:
    // 0x3cf114: 0x8ec40010  lw          $a0, 0x10($s6)
    ctx->pc = 0x3cf114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3cf118:
    // 0x3cf118: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cf118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3cf11c:
    // 0x3cf11c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x3cf11cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3cf120:
    // 0x3cf120: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3cf120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_3cf124:
    // 0x3cf124: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x3cf124u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3cf128:
    // 0x3cf128: 0x1240002f  beqz        $s2, . + 4 + (0x2F << 2)
label_3cf12c:
    if (ctx->pc == 0x3CF12Cu) {
        ctx->pc = 0x3CF12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF128u;
        // 0x3cf12c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF130u;
        goto label_3cf130;
    }
    ctx->pc = 0x3CF128u;
    {
        const bool branch_taken_0x3cf128 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF128u;
        // 0x3cf12c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf128) {
            ctx->pc = 0x3CF1E8u;
            goto label_3cf1e8;
        }
    }
    ctx->pc = 0x3CF130u;
label_3cf130:
    // 0x3cf130: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3cf130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3cf134:
    // 0x3cf134: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x3cf134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_3cf138:
    // 0x3cf138: 0x1044002c  beq         $v0, $a0, . + 4 + (0x2C << 2)
label_3cf13c:
    if (ctx->pc == 0x3CF13Cu) {
        ctx->pc = 0x3CF13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF138u;
        // 0x3cf13c: 0x8fa60104  lw          $a2, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF140u;
        goto label_3cf140;
    }
    ctx->pc = 0x3CF138u;
    {
        const bool branch_taken_0x3cf138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3CF13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF138u;
        // 0x3cf13c: 0x8fa60104  lw          $a2, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf138) {
            ctx->pc = 0x3CF1ECu;
            goto label_3cf1ec;
        }
    }
    ctx->pc = 0x3CF140u;
label_3cf140:
    // 0x3cf140: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x3cf140u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
label_3cf144:
    // 0x3cf144: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x3cf144u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
label_3cf148:
    // 0x3cf148: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x3cf148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3cf14c:
    // 0x3cf14c: 0x0  nop
    ctx->pc = 0x3cf14cu;
    // NOP
label_3cf150:
    // 0x3cf150: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3cf150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3cf154:
    // 0x3cf154: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3cf154u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3cf158:
    // 0x3cf158: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3cf158u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3cf15c:
    // 0x3cf15c: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x3cf15cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3cf160:
    // 0x3cf160: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3cf160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3cf164:
    // 0x3cf164: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cf164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cf168:
    // 0x3cf168: 0xc1036e0  jal         func_40DB80
label_3cf16c:
    if (ctx->pc == 0x3CF16Cu) {
        ctx->pc = 0x3CF16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF168u;
        // 0x3cf16c: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF170u;
        goto label_3cf170;
    }
    ctx->pc = 0x3CF168u;
    SET_GPR_U32(ctx, 31, 0x3CF170u);
    ctx->pc = 0x3CF16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF168u;
    // 0x3cf16c: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3CF168u, 0x3CF170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF170u;
label_3cf170:
    // 0x3cf170: 0x8ec60018  lw          $a2, 0x18($s6)
    ctx->pc = 0x3cf170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_3cf174:
    // 0x3cf174: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cf174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cf178:
    // 0x3cf178: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3cf178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3cf17c:
    // 0x3cf17c: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x3cf17cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
label_3cf180:
    // 0x3cf180: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x3cf180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_3cf184:
    // 0x3cf184: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3cf184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3cf188:
    // 0x3cf188: 0xc1036e0  jal         func_40DB80
label_3cf18c:
    if (ctx->pc == 0x3CF18Cu) {
        ctx->pc = 0x3CF18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF188u;
        // 0x3cf18c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF190u;
        goto label_3cf190;
    }
    ctx->pc = 0x3CF188u;
    SET_GPR_U32(ctx, 31, 0x3CF190u);
    ctx->pc = 0x3CF18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF188u;
    // 0x3cf18c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3CF188u, 0x3CF190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF190u;
label_3cf190:
    // 0x3cf190: 0x8ec60018  lw          $a2, 0x18($s6)
    ctx->pc = 0x3cf190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_3cf194:
    // 0x3cf194: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cf194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cf198:
    // 0x3cf198: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3cf198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3cf19c:
    // 0x3cf19c: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x3cf19cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
label_3cf1a0:
    // 0x3cf1a0: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x3cf1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_3cf1a4:
    // 0x3cf1a4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3cf1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3cf1a8:
    // 0x3cf1a8: 0xc1036e0  jal         func_40DB80
label_3cf1ac:
    if (ctx->pc == 0x3CF1ACu) {
        ctx->pc = 0x3CF1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF1A8u;
        // 0x3cf1ac: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF1B0u;
        goto label_3cf1b0;
    }
    ctx->pc = 0x3CF1A8u;
    SET_GPR_U32(ctx, 31, 0x3CF1B0u);
    ctx->pc = 0x3CF1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF1A8u;
    // 0x3cf1ac: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3CF1A8u, 0x3CF1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF1B0u;
label_3cf1b0:
    // 0x3cf1b0: 0x8ec30018  lw          $v1, 0x18($s6)
    ctx->pc = 0x3cf1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_3cf1b4:
    // 0x3cf1b4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3cf1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_3cf1b8:
    // 0x3cf1b8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3cf1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3cf1bc:
    // 0x3cf1bc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3cf1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3cf1c0:
    // 0x3cf1c0: 0x16250003  bne         $s1, $a1, . + 4 + (0x3 << 2)
label_3cf1c4:
    if (ctx->pc == 0x3CF1C4u) {
        ctx->pc = 0x3CF1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF1C0u;
        // 0x3cf1c4: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF1C8u;
        goto label_3cf1c8;
    }
    ctx->pc = 0x3CF1C0u;
    {
        const bool branch_taken_0x3cf1c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x3CF1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF1C0u;
        // 0x3cf1c4: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf1c0) {
            ctx->pc = 0x3CF1D0u;
            goto label_3cf1d0;
        }
    }
    ctx->pc = 0x3CF1C8u;
label_3cf1c8:
    // 0x3cf1c8: 0x8e52001c  lw          $s2, 0x1C($s2)
    ctx->pc = 0x3cf1c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3cf1cc:
    // 0x3cf1cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3cf1ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cf1d0:
    // 0x3cf1d0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_3cf1d4:
    if (ctx->pc == 0x3CF1D4u) {
        ctx->pc = 0x3CF1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF1D0u;
        // 0x3cf1d4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF1D8u;
        goto label_3cf1d8;
    }
    ctx->pc = 0x3CF1D0u;
    {
        const bool branch_taken_0x3cf1d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF1D0u;
        // 0x3cf1d4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf1d0) {
            ctx->pc = 0x3CF1E8u;
            goto label_3cf1e8;
        }
    }
    ctx->pc = 0x3CF1D8u;
label_3cf1d8:
    // 0x3cf1d8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3cf1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3cf1dc:
    // 0x3cf1dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3cf1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3cf1e0:
    // 0x3cf1e0: 0x1474ffdb  bne         $v1, $s4, . + 4 + (-0x25 << 2)
label_3cf1e4:
    if (ctx->pc == 0x3CF1E4u) {
        ctx->pc = 0x3CF1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF1E0u;
        // 0x3cf1e4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF1E8u;
        goto label_3cf1e8;
    }
    ctx->pc = 0x3CF1E0u;
    {
        const bool branch_taken_0x3cf1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x3CF1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF1E0u;
        // 0x3cf1e4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf1e0) {
            ctx->pc = 0x3CF150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cf150;
        }
    }
    ctx->pc = 0x3CF1E8u;
label_3cf1e8:
    // 0x3cf1e8: 0x8fa60104  lw          $a2, 0x104($sp)
    ctx->pc = 0x3cf1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_3cf1ec:
    // 0x3cf1ec: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3cf1ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3cf1f0:
    // 0x3cf1f0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x3cf1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_3cf1f4:
    // 0x3cf1f4: 0x661ffc4  bgez        $s3, . + 4 + (-0x3C << 2)
label_3cf1f8:
    if (ctx->pc == 0x3CF1F8u) {
        ctx->pc = 0x3CF1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF1F4u;
        // 0x3cf1f8: 0xafa60104  sw          $a2, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF1FCu;
        goto label_3cf1fc;
    }
    ctx->pc = 0x3CF1F4u;
    {
        const bool branch_taken_0x3cf1f4 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x3CF1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF1F4u;
        // 0x3cf1f8: 0xafa60104  sw          $a2, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf1f4) {
            ctx->pc = 0x3CF108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cf108;
        }
    }
    ctx->pc = 0x3CF1FCu;
label_3cf1fc:
    // 0x3cf1fc: 0x8fa700e4  lw          $a3, 0xE4($sp)
    ctx->pc = 0x3cf1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_3cf200:
    // 0x3cf200: 0xafa700b0  sw          $a3, 0xB0($sp)
    ctx->pc = 0x3cf200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
label_3cf204:
    // 0x3cf204: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x3cf204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_3cf208:
    // 0x3cf208: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x3cf208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3cf20c:
    // 0x3cf20c: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3cf20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3cf210:
    // 0x3cf210: 0x94450006  lhu         $a1, 0x6($v0)
    ctx->pc = 0x3cf210u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_3cf214:
    // 0x3cf214: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x3cf214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3cf218:
    // 0x3cf218: 0xc0e3df2  jal         func_38F7C8
label_3cf21c:
    if (ctx->pc == 0x3CF21Cu) {
        ctx->pc = 0x3CF21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF218u;
        // 0x3cf21c: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF220u;
        goto label_3cf220;
    }
    ctx->pc = 0x3CF218u;
    SET_GPR_U32(ctx, 31, 0x3CF220u);
    ctx->pc = 0x3CF21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF218u;
    // 0x3cf21c: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F7C8u, 0x3CF218u, 0x3CF220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF220u;
label_3cf220:
    // 0x3cf220: 0x8fc5001c  lw          $a1, 0x1C($fp)
    ctx->pc = 0x3cf220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_3cf224:
    // 0x3cf224: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x3cf224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_3cf228:
    // 0x3cf228: 0x2a52821  addu        $a1, $s5, $a1
    ctx->pc = 0x3cf228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_3cf22c:
    // 0x3cf22c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x3cf22cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_3cf230:
    // 0x3cf230: 0xa7a30050  sh          $v1, 0x50($sp)
    ctx->pc = 0x3cf230u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 80), (uint16_t)GPR_U32(ctx, 3));
label_3cf234:
    // 0x3cf234: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x3cf234u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_3cf238:
    // 0x3cf238: 0xa7a40052  sh          $a0, 0x52($sp)
    ctx->pc = 0x3cf238u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 82), (uint16_t)GPR_U32(ctx, 4));
label_3cf23c:
    // 0x3cf23c: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x3cf23cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_3cf240:
    // 0x3cf240: 0xa7a30054  sh          $v1, 0x54($sp)
    ctx->pc = 0x3cf240u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 3));
label_3cf244:
    // 0x3cf244: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3cf244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_3cf248:
    // 0x3cf248: 0x97a30052  lhu         $v1, 0x52($sp)
    ctx->pc = 0x3cf248u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 82)));
label_3cf24c:
    // 0x3cf24c: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x3cf24cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3cf250:
    // 0x3cf250: 0x882018  mult        $a0, $a0, $t0
    ctx->pc = 0x3cf250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3cf254:
    // 0x3cf254: 0x8fc60010  lw          $a2, 0x10($fp)
    ctx->pc = 0x3cf254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_3cf258:
    // 0x3cf258: 0x682818  mult        $a1, $v1, $t0
    ctx->pc = 0x3cf258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3cf25c:
    // 0x3cf25c: 0x97a90054  lhu         $t1, 0x54($sp)
    ctx->pc = 0x3cf25cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 84)));
label_3cf260:
    // 0x3cf260: 0x97a80052  lhu         $t0, 0x52($sp)
    ctx->pc = 0x3cf260u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 82)));
label_3cf264:
    // 0x3cf264: 0x97a70054  lhu         $a3, 0x54($sp)
    ctx->pc = 0x3cf264u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 84)));
label_3cf268:
    // 0x3cf268: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3cf268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3cf26c:
    // 0x3cf26c: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x3cf26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3cf270:
    // 0x3cf270: 0xc4870000  lwc1        $f7, 0x0($a0)
    ctx->pc = 0x3cf270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3cf274:
    // 0x3cf274: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3cf274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf278:
    // 0x3cf278: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3cf278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3cf27c:
    // 0x3cf27c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3cf27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3cf280:
    // 0x3cf280: 0x1252818  mult        $a1, $t1, $a1
    ctx->pc = 0x3cf280u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3cf284:
    // 0x3cf284: 0x1042018  mult        $a0, $t0, $a0
    ctx->pc = 0x3cf284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3cf288:
    // 0x3cf288: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x3cf288u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_3cf28c:
    // 0x3cf28c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3cf28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3cf290:
    // 0x3cf290: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x3cf290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3cf294:
    // 0x3cf294: 0xe7a70020  swc1        $f7, 0x20($sp)
    ctx->pc = 0x3cf294u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3cf298:
    // 0x3cf298: 0xa64821  addu        $t1, $a1, $a2
    ctx->pc = 0x3cf298u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3cf29c:
    // 0x3cf29c: 0x864021  addu        $t0, $a0, $a2
    ctx->pc = 0x3cf29cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3cf2a0:
    // 0x3cf2a0: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x3cf2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf2a4:
    // 0x3cf2a4: 0xc5260004  lwc1        $f6, 0x4($t1)
    ctx->pc = 0x3cf2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3cf2a8:
    // 0x3cf2a8: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x3cf2a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3cf2ac:
    // 0x3cf2ac: 0x97a40052  lhu         $a0, 0x52($sp)
    ctx->pc = 0x3cf2acu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 82)));
label_3cf2b0:
    // 0x3cf2b0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3cf2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3cf2b4:
    // 0x3cf2b4: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x3cf2b4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_3cf2b8:
    // 0x3cf2b8: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x3cf2b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3cf2bc:
    // 0x3cf2bc: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x3cf2bcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3cf2c0:
    // 0x3cf2c0: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x3cf2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3cf2c4:
    // 0x3cf2c4: 0xc4e50008  lwc1        $f5, 0x8($a3)
    ctx->pc = 0x3cf2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3cf2c8:
    // 0x3cf2c8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x3cf2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf2cc:
    // 0x3cf2cc: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x3cf2ccu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_3cf2d0:
    // 0x3cf2d0: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x3cf2d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3cf2d4:
    // 0x3cf2d4: 0x97a30050  lhu         $v1, 0x50($sp)
    ctx->pc = 0x3cf2d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
label_3cf2d8:
    // 0x3cf2d8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3cf2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3cf2dc:
    // 0x3cf2dc: 0x652818  mult        $a1, $v1, $a1
    ctx->pc = 0x3cf2dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3cf2e0:
    // 0x3cf2e0: 0x97a40052  lhu         $a0, 0x52($sp)
    ctx->pc = 0x3cf2e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 82)));
label_3cf2e4:
    // 0x3cf2e4: 0x97a80050  lhu         $t0, 0x50($sp)
    ctx->pc = 0x3cf2e4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
label_3cf2e8:
    // 0x3cf2e8: 0x97a70052  lhu         $a3, 0x52($sp)
    ctx->pc = 0x3cf2e8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 82)));
label_3cf2ec:
    // 0x3cf2ec: 0x97a90050  lhu         $t1, 0x50($sp)
    ctx->pc = 0x3cf2ecu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
label_3cf2f0:
    // 0x3cf2f0: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x3cf2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3cf2f4:
    // 0x3cf2f4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3cf2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3cf2f8:
    // 0x3cf2f8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3cf2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cf2fc:
    // 0x3cf2fc: 0x852818  mult        $a1, $a0, $a1
    ctx->pc = 0x3cf2fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3cf300:
    // 0x3cf300: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3cf300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3cf304:
    // 0x3cf304: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x3cf304u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3cf308:
    // 0x3cf308: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x3cf308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3cf30c:
    // 0x3cf30c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3cf30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf310:
    // 0x3cf310: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3cf310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3cf314:
    // 0x3cf314: 0x1052818  mult        $a1, $t0, $a1
    ctx->pc = 0x3cf314u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3cf318:
    // 0x3cf318: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x3cf318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3cf31c:
    // 0x3cf31c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3cf31cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3cf320:
    // 0x3cf320: 0x97a30052  lhu         $v1, 0x52($sp)
    ctx->pc = 0x3cf320u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 82)));
label_3cf324:
    // 0x3cf324: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3cf324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3cf328:
    // 0x3cf328: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x3cf328u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3cf32c:
    // 0x3cf32c: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x3cf32cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_3cf330:
    // 0x3cf330: 0xa64021  addu        $t0, $a1, $a2
    ctx->pc = 0x3cf330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3cf334:
    // 0x3cf334: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3cf334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3cf338:
    // 0x3cf338: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x3cf338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf33c:
    // 0x3cf33c: 0x1252818  mult        $a1, $t1, $a1
    ctx->pc = 0x3cf33cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3cf340:
    // 0x3cf340: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x3cf340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cf344:
    // 0x3cf344: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x3cf344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3cf348:
    // 0x3cf348: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x3cf348u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_3cf34c:
    // 0x3cf34c: 0xa64821  addu        $t1, $a1, $a2
    ctx->pc = 0x3cf34cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3cf350:
    // 0x3cf350: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x3cf350u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3cf354:
    // 0x3cf354: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x3cf354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cf358:
    // 0x3cf358: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3cf358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf35c:
    // 0x3cf35c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3cf35cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3cf360:
    // 0x3cf360: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3cf360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3cf364:
    // 0x3cf364: 0x46013102  mul.s       $f4, $f6, $f1
    ctx->pc = 0x3cf364u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_3cf368:
    // 0x3cf368: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x3cf368u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_3cf36c:
    // 0x3cf36c: 0x46033802  mul.s       $f0, $f7, $f3
    ctx->pc = 0x3cf36cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
label_3cf370:
    // 0x3cf370: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x3cf370u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3cf374:
    // 0x3cf374: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x3cf374u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_3cf378:
    // 0x3cf378: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x3cf378u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_3cf37c:
    // 0x3cf37c: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x3cf37cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_3cf380:
    // 0x3cf380: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x3cf380u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_3cf384:
    // 0x3cf384: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x3cf384u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
label_3cf388:
    // 0x3cf388: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3cf388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3cf38c:
    // 0x3cf38c: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x3cf38cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3cf390:
    // 0x3cf390: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x3cf390u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3cf394:
    // 0x3cf394: 0xc0f539e  jal         func_3D4E78
label_3cf398:
    if (ctx->pc == 0x3CF398u) {
        ctx->pc = 0x3CF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF394u;
        // 0x3cf398: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF39Cu;
        goto label_3cf39c;
    }
    ctx->pc = 0x3CF394u;
    SET_GPR_U32(ctx, 31, 0x3CF39Cu);
    ctx->pc = 0x3CF398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF394u;
    // 0x3cf398: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E78u, 0x3CF394u, 0x3CF39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF39Cu;
label_3cf39c:
    // 0x3cf39c: 0xc0f539e  jal         func_3D4E78
label_3cf3a0:
    if (ctx->pc == 0x3CF3A0u) {
        ctx->pc = 0x3CF3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF39Cu;
        // 0x3cf3a0: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF3A4u;
        goto label_3cf3a4;
    }
    ctx->pc = 0x3CF39Cu;
    SET_GPR_U32(ctx, 31, 0x3CF3A4u);
    ctx->pc = 0x3CF3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF39Cu;
    // 0x3cf3a0: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E78u, 0x3CF39Cu, 0x3CF3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF3A4u;
label_3cf3a4:
    // 0x3cf3a4: 0x97a20050  lhu         $v0, 0x50($sp)
    ctx->pc = 0x3cf3a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
label_3cf3a8:
    // 0x3cf3a8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cf3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cf3ac:
    // 0x3cf3ac: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x3cf3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_3cf3b0:
    // 0x3cf3b0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3cf3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3cf3b4:
    // 0x3cf3b4: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x3cf3b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
label_3cf3b8:
    // 0x3cf3b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cf3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3cf3bc:
    // 0x3cf3bc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3cf3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf3c0:
    // 0x3cf3c0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x3cf3c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3cf3c4:
    // 0x3cf3c4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cf3c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cf3c8:
    // 0x3cf3c8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3cf3c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3cf3cc:
    // 0x3cf3cc: 0xafa600c4  sw          $a2, 0xC4($sp)
    ctx->pc = 0x3cf3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 6));
label_3cf3d0:
    // 0x3cf3d0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3cf3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3cf3d4:
    // 0x3cf3d4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3cf3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3cf3d8:
    // 0x3cf3d8: 0xc1036e0  jal         func_40DB80
label_3cf3dc:
    if (ctx->pc == 0x3CF3DCu) {
        ctx->pc = 0x3CF3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF3D8u;
        // 0x3cf3dc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF3E0u;
        goto label_3cf3e0;
    }
    ctx->pc = 0x3CF3D8u;
    SET_GPR_U32(ctx, 31, 0x3CF3E0u);
    ctx->pc = 0x3CF3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF3D8u;
    // 0x3cf3dc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3CF3D8u, 0x3CF3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF3E0u;
label_3cf3e0:
    // 0x3cf3e0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cf3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cf3e4:
    // 0x3cf3e4: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x3cf3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_3cf3e8:
    // 0x3cf3e8: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x3cf3e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
label_3cf3ec:
    // 0x3cf3ec: 0xc103642  jal         func_40D908
label_3cf3f0:
    if (ctx->pc == 0x3CF3F0u) {
        ctx->pc = 0x3CF3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF3ECu;
        // 0x3cf3f0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF3F4u;
        goto label_3cf3f4;
    }
    ctx->pc = 0x3CF3ECu;
    SET_GPR_U32(ctx, 31, 0x3CF3F4u);
    ctx->pc = 0x3CF3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF3ECu;
    // 0x3cf3f0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3CF3ECu, 0x3CF3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF3F4u;
label_3cf3f4:
    // 0x3cf3f4: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x3cf3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3cf3f8:
    // 0x3cf3f8: 0x8fa800bc  lw          $t0, 0xBC($sp)
    ctx->pc = 0x3cf3f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_3cf3fc:
    // 0x3cf3fc: 0xafa700c0  sw          $a3, 0xC0($sp)
    ctx->pc = 0x3cf3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 7));
label_3cf400:
    // 0x3cf400: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3cf400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3cf404:
    // 0x3cf404: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x3cf404u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_3cf408:
    // 0x3cf408: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x3cf408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_3cf40c:
    // 0x3cf40c: 0x8fc50014  lw          $a1, 0x14($fp)
    ctx->pc = 0x3cf40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_3cf410:
    // 0x3cf410: 0xad030024  sw          $v1, 0x24($t0)
    ctx->pc = 0x3cf410u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 3));
label_3cf414:
    // 0x3cf414: 0xc0f539e  jal         func_3D4E78
label_3cf418:
    if (ctx->pc == 0x3CF418u) {
        ctx->pc = 0x3CF418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF414u;
        // 0x3cf418: 0xad050028  sw          $a1, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF41Cu;
        goto label_3cf41c;
    }
    ctx->pc = 0x3CF414u;
    SET_GPR_U32(ctx, 31, 0x3CF41Cu);
    ctx->pc = 0x3CF418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF414u;
    // 0x3cf418: 0xad050028  sw          $a1, 0x28($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E78u, 0x3CF414u, 0x3CF41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF41Cu;
label_3cf41c:
    // 0x3cf41c: 0x8faa00a0  lw          $t2, 0xA0($sp)
    ctx->pc = 0x3cf41cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_3cf420:
    // 0x3cf420: 0x8fab00bc  lw          $t3, 0xBC($sp)
    ctx->pc = 0x3cf420u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_3cf424:
    // 0x3cf424: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x3cf424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cf428:
    // 0x3cf428: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3cf428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3cf42c:
    // 0x3cf42c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3cf42cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cf430:
    // 0x3cf430: 0xc0f5392  jal         func_3D4E48
label_3cf434:
    if (ctx->pc == 0x3CF434u) {
        ctx->pc = 0x3CF434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF430u;
        // 0x3cf434: 0xe5610020  swc1        $f1, 0x20($t3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF438u;
        goto label_3cf438;
    }
    ctx->pc = 0x3CF430u;
    SET_GPR_U32(ctx, 31, 0x3CF438u);
    ctx->pc = 0x3CF434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF430u;
    // 0x3cf434: 0xe5610020  swc1        $f1, 0x20($t3) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E48u, 0x3CF430u, 0x3CF438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF438u;
label_3cf438:
    // 0x3cf438: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3cf438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3cf43c:
    // 0x3cf43c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3cf440:
    if (ctx->pc == 0x3CF440u) {
        ctx->pc = 0x3CF440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF43Cu;
        // 0x3cf440: 0x8fa200bc  lw          $v0, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF444u;
        goto label_3cf444;
    }
    ctx->pc = 0x3CF43Cu;
    {
        const bool branch_taken_0x3cf43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CF440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF43Cu;
        // 0x3cf440: 0x8fa200bc  lw          $v0, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf43c) {
            ctx->pc = 0x3CF458u;
            goto label_3cf458;
        }
    }
    ctx->pc = 0x3CF444u;
label_3cf444:
    // 0x3cf444: 0x8fac00bc  lw          $t4, 0xBC($sp)
    ctx->pc = 0x3cf444u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_3cf448:
    // 0x3cf448: 0xc5800020  lwc1        $f0, 0x20($t4)
    ctx->pc = 0x3cf448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf44c:
    // 0x3cf44c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x3cf44cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_3cf450:
    // 0x3cf450: 0xe5800020  swc1        $f0, 0x20($t4)
    ctx->pc = 0x3cf450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 32), bits); }
label_3cf454:
    // 0x3cf454: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x3cf454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_3cf458:
    // 0x3cf458: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cf458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cf45c:
    // 0x3cf45c: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x3cf45cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
label_3cf460:
    // 0x3cf460: 0xc1036e0  jal         func_40DB80
label_3cf464:
    if (ctx->pc == 0x3CF464u) {
        ctx->pc = 0x3CF464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF460u;
        // 0x3cf464: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF468u;
        goto label_3cf468;
    }
    ctx->pc = 0x3CF460u;
    SET_GPR_U32(ctx, 31, 0x3CF468u);
    ctx->pc = 0x3CF464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF460u;
    // 0x3cf464: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3CF460u, 0x3CF468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF468u;
label_3cf468:
    // 0x3cf468: 0x6ba30057  ldl         $v1, 0x57($sp)
    ctx->pc = 0x3cf468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3cf46c:
    // 0x3cf46c: 0x6fa30050  ldr         $v1, 0x50($sp)
    ctx->pc = 0x3cf46cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3cf470:
    // 0x3cf470: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3cf470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3cf474:
    // 0x3cf474: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x3cf474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cf478:
    // 0x3cf478: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x3cf478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cf47c:
    // 0x3cf47c: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x3cf47cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_3cf480:
    // 0x3cf480: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3cf480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3cf484:
    // 0x3cf484: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cf484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cf488:
    // 0x3cf488: 0xc1036e0  jal         func_40DB80
label_3cf48c:
    if (ctx->pc == 0x3CF48Cu) {
        ctx->pc = 0x3CF48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF488u;
        // 0x3cf48c: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF490u;
        goto label_3cf490;
    }
    ctx->pc = 0x3CF488u;
    SET_GPR_U32(ctx, 31, 0x3CF490u);
    ctx->pc = 0x3CF48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF488u;
    // 0x3cf48c: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3CF488u, 0x3CF490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF490u;
label_3cf490:
    // 0x3cf490: 0x8fa700fc  lw          $a3, 0xFC($sp)
    ctx->pc = 0x3cf490u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3cf494:
    // 0x3cf494: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cf494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cf498:
    // 0x3cf498: 0x8ec60018  lw          $a2, 0x18($s6)
    ctx->pc = 0x3cf498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_3cf49c:
    // 0x3cf49c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3cf49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3cf4a0:
    // 0x3cf4a0: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x3cf4a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
label_3cf4a4:
    // 0x3cf4a4: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x3cf4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_3cf4a8:
    // 0x3cf4a8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3cf4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3cf4ac:
    // 0x3cf4ac: 0xc1036e0  jal         func_40DB80
label_3cf4b0:
    if (ctx->pc == 0x3CF4B0u) {
        ctx->pc = 0x3CF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF4ACu;
        // 0x3cf4b0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF4B4u;
        goto label_3cf4b4;
    }
    ctx->pc = 0x3CF4ACu;
    SET_GPR_U32(ctx, 31, 0x3CF4B4u);
    ctx->pc = 0x3CF4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF4ACu;
    // 0x3cf4b0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3CF4ACu, 0x3CF4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF4B4u;
label_3cf4b4:
    // 0x3cf4b4: 0x8ec60018  lw          $a2, 0x18($s6)
    ctx->pc = 0x3cf4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_3cf4b8:
    // 0x3cf4b8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cf4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cf4bc:
    // 0x3cf4bc: 0x8fa800fc  lw          $t0, 0xFC($sp)
    ctx->pc = 0x3cf4bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3cf4c0:
    // 0x3cf4c0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3cf4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3cf4c4:
    // 0x3cf4c4: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x3cf4c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
label_3cf4c8:
    // 0x3cf4c8: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x3cf4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_3cf4cc:
    // 0x3cf4cc: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3cf4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3cf4d0:
    // 0x3cf4d0: 0xc1036e0  jal         func_40DB80
label_3cf4d4:
    if (ctx->pc == 0x3CF4D4u) {
        ctx->pc = 0x3CF4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF4D0u;
        // 0x3cf4d4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF4D8u;
        goto label_3cf4d8;
    }
    ctx->pc = 0x3CF4D0u;
    SET_GPR_U32(ctx, 31, 0x3CF4D8u);
    ctx->pc = 0x3CF4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF4D0u;
    // 0x3cf4d4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3CF4D0u, 0x3CF4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF4D8u;
label_3cf4d8:
    // 0x3cf4d8: 0x8ec30018  lw          $v1, 0x18($s6)
    ctx->pc = 0x3cf4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_3cf4dc:
    // 0x3cf4dc: 0x8faa00fc  lw          $t2, 0xFC($sp)
    ctx->pc = 0x3cf4dcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3cf4e0:
    // 0x3cf4e0: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x3cf4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_3cf4e4:
    // 0x3cf4e4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x3cf4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3cf4e8:
    // 0x3cf4e8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3cf4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3cf4ec:
    // 0x3cf4ec: 0x8fab00ec  lw          $t3, 0xEC($sp)
    ctx->pc = 0x3cf4ecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_3cf4f0:
    // 0x3cf4f0: 0xafab00b8  sw          $t3, 0xB8($sp)
    ctx->pc = 0x3cf4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 11));
label_3cf4f4:
    // 0x3cf4f4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x3cf4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_3cf4f8:
    // 0x3cf4f8: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x3cf4f8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
label_3cf4fc:
    // 0x3cf4fc: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x3cf4fcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
label_3cf500:
    // 0x3cf500: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x3cf500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_3cf504:
    // 0x3cf504: 0x1000013a  b           . + 4 + (0x13A << 2)
label_3cf508:
    if (ctx->pc == 0x3CF508u) {
        ctx->pc = 0x3CF508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF504u;
        // 0x3cf508: 0xafac00dc  sw          $t4, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF50Cu;
        goto label_3cf50c;
    }
    ctx->pc = 0x3CF504u;
    {
        const bool branch_taken_0x3cf504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF504u;
        // 0x3cf508: 0xafac00dc  sw          $t4, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf504) {
            ctx->pc = 0x3CF9F0u;
            goto label_3cf9f0;
        }
    }
    ctx->pc = 0x3CF50Cu;
label_3cf50c:
    // 0x3cf50c: 0x0  nop
    ctx->pc = 0x3cf50cu;
    // NOP
label_3cf510:
    // 0x3cf510: 0xc1036da  jal         func_40DB68
label_3cf514:
    if (ctx->pc == 0x3CF514u) {
        ctx->pc = 0x3CF514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF510u;
        // 0x3cf514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF518u;
        goto label_3cf518;
    }
    ctx->pc = 0x3CF510u;
    SET_GPR_U32(ctx, 31, 0x3CF518u);
    ctx->pc = 0x3CF514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF510u;
    // 0x3cf514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3CF510u, 0x3CF518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF518u;
label_3cf518:
    // 0x3cf518: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3cf518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3cf51c:
    // 0x3cf51c: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x3cf51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_3cf520:
    // 0x3cf520: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3cf520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cf524:
    // 0x3cf524: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x3cf524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_3cf528:
    // 0x3cf528: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x3cf528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3cf52c:
    // 0x3cf52c: 0x8ec3001c  lw          $v1, 0x1C($s6)
    ctx->pc = 0x3cf52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
label_3cf530:
    // 0x3cf530: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3cf530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3cf534:
    // 0x3cf534: 0x1060011e  beqz        $v1, . + 4 + (0x11E << 2)
label_3cf538:
    if (ctx->pc == 0x3CF538u) {
        ctx->pc = 0x3CF538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF534u;
        // 0x3cf538: 0xafa300c8  sw          $v1, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF53Cu;
        goto label_3cf53c;
    }
    ctx->pc = 0x3CF534u;
    {
        const bool branch_taken_0x3cf534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF534u;
        // 0x3cf538: 0xafa300c8  sw          $v1, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf534) {
            ctx->pc = 0x3CF9B0u;
            goto label_3cf9b0;
        }
    }
    ctx->pc = 0x3CF53Cu;
label_3cf53c:
    // 0x3cf53c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3cf53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3cf540:
    // 0x3cf540: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x3cf540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_3cf544:
    // 0x3cf544: 0x1046011b  beq         $v0, $a2, . + 4 + (0x11B << 2)
label_3cf548:
    if (ctx->pc == 0x3CF548u) {
        ctx->pc = 0x3CF548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF544u;
        // 0x3cf548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF54Cu;
        goto label_3cf54c;
    }
    ctx->pc = 0x3CF544u;
    {
        const bool branch_taken_0x3cf544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x3CF548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF544u;
        // 0x3cf548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf544) {
            ctx->pc = 0x3CF9B4u;
            goto label_3cf9b4;
        }
    }
    ctx->pc = 0x3CF54Cu;
label_3cf54c:
    // 0x3cf54c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x3cf54cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_3cf550:
    // 0x3cf550: 0xc7958108  lwc1        $f21, -0x7EF8($gp)
    ctx->pc = 0x3cf550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3cf554:
    // 0x3cf554: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x3cf554u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_3cf558:
    // 0x3cf558: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x3cf558u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3cf55c:
    // 0x3cf55c: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x3cf55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
label_3cf560:
    // 0x3cf560: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3cf560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3cf564:
    // 0x3cf564: 0x0  nop
    ctx->pc = 0x3cf564u;
    // NOP
label_3cf568:
    // 0x3cf568: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x3cf568u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3cf56c:
    // 0x3cf56c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3cf56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3cf570:
    // 0x3cf570: 0x8faa00ac  lw          $t2, 0xAC($sp)
    ctx->pc = 0x3cf570u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_3cf574:
    // 0x3cf574: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x3cf574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
label_3cf578:
    // 0x3cf578: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x3cf578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_3cf57c:
    // 0x3cf57c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x3cf57cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3cf580:
    // 0x3cf580: 0x1529821  addu        $s3, $t2, $s2
    ctx->pc = 0x3cf580u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 18)));
label_3cf584:
    // 0x3cf584: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3cf584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3cf588:
    // 0x3cf588: 0x544000fa  bnel        $v0, $zero, . + 4 + (0xFA << 2)
label_3cf58c:
    if (ctx->pc == 0x3CF58Cu) {
        ctx->pc = 0x3CF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF588u;
        // 0x3cf58c: 0x8fa400e0  lw          $a0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF590u;
        goto label_3cf590;
    }
    ctx->pc = 0x3CF588u;
    {
        const bool branch_taken_0x3cf588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cf588) {
            ctx->pc = 0x3CF58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CF588u;
            // 0x3cf58c: 0x8fa400e0  lw          $a0, 0xE0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CF974u;
            goto label_3cf974;
        }
    }
    ctx->pc = 0x3CF590u;
label_3cf590:
    // 0x3cf590: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x3cf590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_3cf594:
    // 0x3cf594: 0x1288c0  sll         $s1, $s2, 3
    ctx->pc = 0x3cf594u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_3cf598:
    // 0x3cf598: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3cf598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3cf59c:
    // 0x3cf59c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3cf59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3cf5a0:
    // 0x3cf5a0: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x3cf5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3cf5a4:
    // 0x3cf5a4: 0x94450006  lhu         $a1, 0x6($v0)
    ctx->pc = 0x3cf5a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_3cf5a8:
    // 0x3cf5a8: 0xc0e3df2  jal         func_38F7C8
label_3cf5ac:
    if (ctx->pc == 0x3CF5ACu) {
        ctx->pc = 0x3CF5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF5A8u;
        // 0x3cf5ac: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF5B0u;
        goto label_3cf5b0;
    }
    ctx->pc = 0x3CF5A8u;
    SET_GPR_U32(ctx, 31, 0x3CF5B0u);
    ctx->pc = 0x3CF5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF5A8u;
    // 0x3cf5ac: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F7C8u, 0x3CF5A8u, 0x3CF5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF5B0u;
label_3cf5b0:
    // 0x3cf5b0: 0x8fc5001c  lw          $a1, 0x1C($fp)
    ctx->pc = 0x3cf5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_3cf5b4:
    // 0x3cf5b4: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x3cf5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_3cf5b8:
    // 0x3cf5b8: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3cf5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3cf5bc:
    // 0x3cf5bc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x3cf5bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_3cf5c0:
    // 0x3cf5c0: 0xa7a30050  sh          $v1, 0x50($sp)
    ctx->pc = 0x3cf5c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 80), (uint16_t)GPR_U32(ctx, 3));
label_3cf5c4:
    // 0x3cf5c4: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x3cf5c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_3cf5c8:
    // 0x3cf5c8: 0xa7a40052  sh          $a0, 0x52($sp)
    ctx->pc = 0x3cf5c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 82), (uint16_t)GPR_U32(ctx, 4));
label_3cf5cc:
    // 0x3cf5cc: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x3cf5ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_3cf5d0:
    // 0x3cf5d0: 0xa7a30054  sh          $v1, 0x54($sp)
    ctx->pc = 0x3cf5d0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 3));
label_3cf5d4:
    // 0x3cf5d4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3cf5d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_3cf5d8:
    // 0x3cf5d8: 0x97a60052  lhu         $a2, 0x52($sp)
    ctx->pc = 0x3cf5d8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 82)));
label_3cf5dc:
    // 0x3cf5dc: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x3cf5dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_3cf5e0:
    // 0x3cf5e0: 0x8fc90010  lw          $t1, 0x10($fp)
    ctx->pc = 0x3cf5e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_3cf5e4:
    // 0x3cf5e4: 0x952018  mult        $a0, $a0, $s5
    ctx->pc = 0x3cf5e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3cf5e8:
    // 0x3cf5e8: 0xd51818  mult        $v1, $a2, $s5
    ctx->pc = 0x3cf5e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3cf5ec:
    // 0x3cf5ec: 0x97a50052  lhu         $a1, 0x52($sp)
    ctx->pc = 0x3cf5ecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 82)));
label_3cf5f0:
    // 0x3cf5f0: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x3cf5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_3cf5f4:
    // 0x3cf5f4: 0x693021  addu        $a2, $v1, $t1
    ctx->pc = 0x3cf5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3cf5f8:
    // 0x3cf5f8: 0xc4870000  lwc1        $f7, 0x0($a0)
    ctx->pc = 0x3cf5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3cf5fc:
    // 0x3cf5fc: 0xf51818  mult        $v1, $a3, $s5
    ctx->pc = 0x3cf5fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3cf600:
    // 0x3cf600: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3cf600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf604:
    // 0x3cf604: 0x97a40054  lhu         $a0, 0x54($sp)
    ctx->pc = 0x3cf604u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 84)));
label_3cf608:
    // 0x3cf608: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x3cf608u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_3cf60c:
    // 0x3cf60c: 0x953018  mult        $a2, $a0, $s5
    ctx->pc = 0x3cf60cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3cf610:
    // 0x3cf610: 0x693821  addu        $a3, $v1, $t1
    ctx->pc = 0x3cf610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3cf614:
    // 0x3cf614: 0xb51818  mult        $v1, $a1, $s5
    ctx->pc = 0x3cf614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3cf618:
    // 0x3cf618: 0xe7a70020  swc1        $f7, 0x20($sp)
    ctx->pc = 0x3cf618u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3cf61c:
    // 0x3cf61c: 0xc4e60004  lwc1        $f6, 0x4($a3)
    ctx->pc = 0x3cf61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3cf620:
    // 0x3cf620: 0xc92021  addu        $a0, $a2, $t1
    ctx->pc = 0x3cf620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_3cf624:
    // 0x3cf624: 0x692821  addu        $a1, $v1, $t1
    ctx->pc = 0x3cf624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3cf628:
    // 0x3cf628: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3cf628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf62c:
    // 0x3cf62c: 0x97a30052  lhu         $v1, 0x52($sp)
    ctx->pc = 0x3cf62cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 82)));
label_3cf630:
    // 0x3cf630: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x3cf630u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_3cf634:
    // 0x3cf634: 0x753018  mult        $a2, $v1, $s5
    ctx->pc = 0x3cf634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3cf638:
    // 0x3cf638: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x3cf638u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3cf63c:
    // 0x3cf63c: 0xc91821  addu        $v1, $a2, $t1
    ctx->pc = 0x3cf63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_3cf640:
    // 0x3cf640: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x3cf640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3cf644:
    // 0x3cf644: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3cf644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf648:
    // 0x3cf648: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x3cf648u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_3cf64c:
    // 0x3cf64c: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x3cf64cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3cf650:
    // 0x3cf650: 0x97a30050  lhu         $v1, 0x50($sp)
    ctx->pc = 0x3cf650u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
label_3cf654:
    // 0x3cf654: 0x752818  mult        $a1, $v1, $s5
    ctx->pc = 0x3cf654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3cf658:
    // 0x3cf658: 0x97a40052  lhu         $a0, 0x52($sp)
    ctx->pc = 0x3cf658u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 82)));
label_3cf65c:
    // 0x3cf65c: 0x97a60050  lhu         $a2, 0x50($sp)
    ctx->pc = 0x3cf65cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
label_3cf660:
    // 0x3cf660: 0xd53818  mult        $a3, $a2, $s5
    ctx->pc = 0x3cf660u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_3cf664:
    // 0x3cf664: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x3cf664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_3cf668:
    // 0x3cf668: 0x952818  mult        $a1, $a0, $s5
    ctx->pc = 0x3cf668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3cf66c:
    // 0x3cf66c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3cf66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cf670:
    // 0x3cf670: 0xe93021  addu        $a2, $a3, $t1
    ctx->pc = 0x3cf670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_3cf674:
    // 0x3cf674: 0x97a70050  lhu         $a3, 0x50($sp)
    ctx->pc = 0x3cf674u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
label_3cf678:
    // 0x3cf678: 0xa92021  addu        $a0, $a1, $t1
    ctx->pc = 0x3cf678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_3cf67c:
    // 0x3cf67c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3cf67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf680:
    // 0x3cf680: 0xf54018  mult        $t0, $a3, $s5
    ctx->pc = 0x3cf680u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_3cf684:
    // 0x3cf684: 0x97a50052  lhu         $a1, 0x52($sp)
    ctx->pc = 0x3cf684u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 82)));
label_3cf688:
    // 0x3cf688: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3cf688u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3cf68c:
    // 0x3cf68c: 0xb51818  mult        $v1, $a1, $s5
    ctx->pc = 0x3cf68cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3cf690:
    // 0x3cf690: 0x1093821  addu        $a3, $t0, $t1
    ctx->pc = 0x3cf690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_3cf694:
    // 0x3cf694: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x3cf694u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_3cf698:
    // 0x3cf698: 0x692821  addu        $a1, $v1, $t1
    ctx->pc = 0x3cf698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3cf69c:
    // 0x3cf69c: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x3cf69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cf6a0:
    // 0x3cf6a0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3cf6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf6a4:
    // 0x3cf6a4: 0x97a30052  lhu         $v1, 0x52($sp)
    ctx->pc = 0x3cf6a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 82)));
label_3cf6a8:
    // 0x3cf6a8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x3cf6a8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_3cf6ac:
    // 0x3cf6ac: 0x752018  mult        $a0, $v1, $s5
    ctx->pc = 0x3cf6acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3cf6b0:
    // 0x3cf6b0: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x3cf6b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3cf6b4:
    // 0x3cf6b4: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x3cf6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_3cf6b8:
    // 0x3cf6b8: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x3cf6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cf6bc:
    // 0x3cf6bc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3cf6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf6c0:
    // 0x3cf6c0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3cf6c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3cf6c4:
    // 0x3cf6c4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3cf6c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3cf6c8:
    // 0x3cf6c8: 0x46013102  mul.s       $f4, $f6, $f1
    ctx->pc = 0x3cf6c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_3cf6cc:
    // 0x3cf6cc: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x3cf6ccu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_3cf6d0:
    // 0x3cf6d0: 0x46033802  mul.s       $f0, $f7, $f3
    ctx->pc = 0x3cf6d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
label_3cf6d4:
    // 0x3cf6d4: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x3cf6d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3cf6d8:
    // 0x3cf6d8: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x3cf6d8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_3cf6dc:
    // 0x3cf6dc: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x3cf6dcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_3cf6e0:
    // 0x3cf6e0: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x3cf6e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_3cf6e4:
    // 0x3cf6e4: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x3cf6e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_3cf6e8:
    // 0x3cf6e8: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x3cf6e8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
label_3cf6ec:
    // 0x3cf6ec: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3cf6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3cf6f0:
    // 0x3cf6f0: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x3cf6f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3cf6f4:
    // 0x3cf6f4: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x3cf6f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3cf6f8:
    // 0x3cf6f8: 0xc0f539e  jal         func_3D4E78
label_3cf6fc:
    if (ctx->pc == 0x3CF6FCu) {
        ctx->pc = 0x3CF6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF6F8u;
        // 0x3cf6fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF700u;
        goto label_3cf700;
    }
    ctx->pc = 0x3CF6F8u;
    SET_GPR_U32(ctx, 31, 0x3CF700u);
    ctx->pc = 0x3CF6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF6F8u;
    // 0x3cf6fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E78u, 0x3CF6F8u, 0x3CF700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF700u;
label_3cf700:
    // 0x3cf700: 0xc0f539e  jal         func_3D4E78
label_3cf704:
    if (ctx->pc == 0x3CF704u) {
        ctx->pc = 0x3CF704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF700u;
        // 0x3cf704: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF708u;
        goto label_3cf708;
    }
    ctx->pc = 0x3CF700u;
    SET_GPR_U32(ctx, 31, 0x3CF708u);
    ctx->pc = 0x3CF704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF700u;
    // 0x3cf704: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E78u, 0x3CF700u, 0x3CF708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF708u;
label_3cf708:
    // 0x3cf708: 0x97a20050  lhu         $v0, 0x50($sp)
    ctx->pc = 0x3cf708u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
label_3cf70c:
    // 0x3cf70c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x3cf70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_3cf710:
    // 0x3cf710: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3cf710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3cf714:
    // 0x3cf714: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x3cf714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_3cf718:
    // 0x3cf718: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cf718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3cf71c:
    // 0x3cf71c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3cf71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cf720:
    // 0x3cf720: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3cf720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3cf724:
    // 0x3cf724: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cf724u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cf728:
    // 0x3cf728: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3cf728u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3cf72c:
    // 0x3cf72c: 0x0  nop
    ctx->pc = 0x3cf72cu;
    // NOP
label_3cf730:
    // 0x3cf730: 0x14450090  bne         $v0, $a1, . + 4 + (0x90 << 2)
label_3cf734:
    if (ctx->pc == 0x3CF734u) {
        ctx->pc = 0x3CF734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF730u;
        // 0x3cf734: 0x8fa400e0  lw          $a0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF738u;
        goto label_3cf738;
    }
    ctx->pc = 0x3CF730u;
    {
        const bool branch_taken_0x3cf730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x3CF734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF730u;
        // 0x3cf734: 0x8fa400e0  lw          $a0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf730) {
            ctx->pc = 0x3CF974u;
            goto label_3cf974;
        }
    }
    ctx->pc = 0x3CF738u;
label_3cf738:
    // 0x3cf738: 0xc0f539e  jal         func_3D4E78
label_3cf73c:
    if (ctx->pc == 0x3CF73Cu) {
        ctx->pc = 0x3CF73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF738u;
        // 0x3cf73c: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF740u;
        goto label_3cf740;
    }
    ctx->pc = 0x3CF738u;
    SET_GPR_U32(ctx, 31, 0x3CF740u);
    ctx->pc = 0x3CF73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF738u;
    // 0x3cf73c: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E78u, 0x3CF738u, 0x3CF740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF740u;
label_3cf740:
    // 0x3cf740: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x3cf740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3cf744:
    // 0x3cf744: 0xc0f539e  jal         func_3D4E78
label_3cf748:
    if (ctx->pc == 0x3CF748u) {
        ctx->pc = 0x3CF748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF744u;
        // 0x3cf748: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF74Cu;
        goto label_3cf74c;
    }
    ctx->pc = 0x3CF744u;
    SET_GPR_U32(ctx, 31, 0x3CF74Cu);
    ctx->pc = 0x3CF748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF744u;
    // 0x3cf748: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E78u, 0x3CF744u, 0x3CF74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF74Cu;
label_3cf74c:
    // 0x3cf74c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x3cf74cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cf750:
    // 0x3cf750: 0x0  nop
    ctx->pc = 0x3cf750u;
    // NOP
label_3cf754:
    // 0x3cf754: 0x45000087  bc1f        . + 4 + (0x87 << 2)
label_3cf758:
    if (ctx->pc == 0x3CF758u) {
        ctx->pc = 0x3CF758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF754u;
        // 0x3cf758: 0x8fa400e0  lw          $a0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF75Cu;
        goto label_3cf75c;
    }
    ctx->pc = 0x3CF754u;
    {
        const bool branch_taken_0x3cf754 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CF758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF754u;
        // 0x3cf758: 0x8fa400e0  lw          $a0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf754) {
            ctx->pc = 0x3CF974u;
            goto label_3cf974;
        }
    }
    ctx->pc = 0x3CF75Cu;
label_3cf75c:
    // 0x3cf75c: 0xc0f5392  jal         func_3D4E48
label_3cf760:
    if (ctx->pc == 0x3CF760u) {
        ctx->pc = 0x3CF760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF75Cu;
        // 0x3cf760: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF764u;
        goto label_3cf764;
    }
    ctx->pc = 0x3CF75Cu;
    SET_GPR_U32(ctx, 31, 0x3CF764u);
    ctx->pc = 0x3CF760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF75Cu;
    // 0x3cf760: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E48u, 0x3CF75Cu, 0x3CF764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF764u;
label_3cf764:
    // 0x3cf764: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x3cf764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3cf768:
    // 0x3cf768: 0xc0f5392  jal         func_3D4E48
label_3cf76c:
    if (ctx->pc == 0x3CF76Cu) {
        ctx->pc = 0x3CF76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF768u;
        // 0x3cf76c: 0x30500001  andi        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF770u;
        goto label_3cf770;
    }
    ctx->pc = 0x3CF768u;
    SET_GPR_U32(ctx, 31, 0x3CF770u);
    ctx->pc = 0x3CF76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF768u;
    // 0x3cf76c: 0x30500001  andi        $s0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E48u, 0x3CF768u, 0x3CF770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF770u;
label_3cf770:
    // 0x3cf770: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3cf770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3cf774:
    // 0x3cf774: 0x1602007e  bne         $s0, $v0, . + 4 + (0x7E << 2)
label_3cf778:
    if (ctx->pc == 0x3CF778u) {
        ctx->pc = 0x3CF778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF774u;
        // 0x3cf778: 0x8fa600bc  lw          $a2, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF77Cu;
        goto label_3cf77c;
    }
    ctx->pc = 0x3CF774u;
    {
        const bool branch_taken_0x3cf774 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CF778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF774u;
        // 0x3cf778: 0x8fa600bc  lw          $a2, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf774) {
            ctx->pc = 0x3CF970u;
            goto label_3cf970;
        }
    }
    ctx->pc = 0x3CF77Cu;
label_3cf77c:
    // 0x3cf77c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cf77cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cf780:
    // 0x3cf780: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x3cf780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
label_3cf784:
    // 0x3cf784: 0x128100  sll         $s0, $s2, 4
    ctx->pc = 0x3cf784u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_3cf788:
    // 0x3cf788: 0xc1036e0  jal         func_40DB80
label_3cf78c:
    if (ctx->pc == 0x3CF78Cu) {
        ctx->pc = 0x3CF78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF788u;
        // 0x3cf78c: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF790u;
        goto label_3cf790;
    }
    ctx->pc = 0x3CF788u;
    SET_GPR_U32(ctx, 31, 0x3CF790u);
    ctx->pc = 0x3CF78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF788u;
    // 0x3cf78c: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3CF788u, 0x3CF790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF790u;
label_3cf790:
    // 0x3cf790: 0xafb100f0  sw          $s1, 0xF0($sp)
    ctx->pc = 0x3cf790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 17));
label_3cf794:
    // 0x3cf794: 0x6ba70057  ldl         $a3, 0x57($sp)
    ctx->pc = 0x3cf794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3cf798:
    // 0x3cf798: 0x6fa70050  ldr         $a3, 0x50($sp)
    ctx->pc = 0x3cf798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_3cf79c:
    // 0x3cf79c: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x3cf79cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3cf7a0:
    // 0x3cf7a0: 0xb0470007  sdl         $a3, 0x7($v0)
    ctx->pc = 0x3cf7a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cf7a4:
    // 0x3cf7a4: 0xb4470000  sdr         $a3, 0x0($v0)
    ctx->pc = 0x3cf7a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cf7a8:
    // 0x3cf7a8: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x3cf7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
label_3cf7ac:
    // 0x3cf7ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3cf7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cf7b0:
    // 0x3cf7b0: 0x8fac00b0  lw          $t4, 0xB0($sp)
    ctx->pc = 0x3cf7b0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3cf7b4:
    // 0x3cf7b4: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3cf7b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_3cf7b8:
    // 0x3cf7b8: 0xafac00b0  sw          $t4, 0xB0($sp)
    ctx->pc = 0x3cf7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 12));
label_3cf7bc:
    // 0x3cf7bc: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3cf7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3cf7c0:
    // 0x3cf7c0: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x3cf7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_3cf7c4:
    // 0x3cf7c4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3cf7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3cf7c8:
    // 0x3cf7c8: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x3cf7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_3cf7cc:
    // 0x3cf7cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3cf7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3cf7d0:
    // 0x3cf7d0: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_3cf7d4:
    if (ctx->pc == 0x3CF7D4u) {
        ctx->pc = 0x3CF7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF7D0u;
        // 0x3cf7d4: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF7D8u;
        goto label_3cf7d8;
    }
    ctx->pc = 0x3CF7D0u;
    {
        const bool branch_taken_0x3cf7d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3CF7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF7D0u;
        // 0x3cf7d4: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf7d0) {
            ctx->pc = 0x3CF7F8u;
            goto label_3cf7f8;
        }
    }
    ctx->pc = 0x3CF7D8u;
label_3cf7d8:
    // 0x3cf7d8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3cf7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3cf7dc:
    // 0x3cf7dc: 0xc1036e0  jal         func_40DB80
label_3cf7e0:
    if (ctx->pc == 0x3CF7E0u) {
        ctx->pc = 0x3CF7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF7DCu;
        // 0x3cf7e0: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF7E4u;
        goto label_3cf7e4;
    }
    ctx->pc = 0x3CF7DCu;
    SET_GPR_U32(ctx, 31, 0x3CF7E4u);
    ctx->pc = 0x3CF7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF7DCu;
    // 0x3cf7e0: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3CF7DCu, 0x3CF7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF7E4u;
label_3cf7e4:
    // 0x3cf7e4: 0x8ec30018  lw          $v1, 0x18($s6)
    ctx->pc = 0x3cf7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_3cf7e8:
    // 0x3cf7e8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3cf7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_3cf7ec:
    // 0x3cf7ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3cf7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3cf7f0:
    // 0x3cf7f0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3cf7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3cf7f4:
    // 0x3cf7f4: 0x0  nop
    ctx->pc = 0x3cf7f4u;
    // NOP
label_3cf7f8:
    // 0x3cf7f8: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x3cf7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_3cf7fc:
    // 0x3cf7fc: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x3cf7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_3cf800:
    // 0x3cf800: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3cf800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3cf804:
    // 0x3cf804: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3cf804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3cf808:
    // 0x3cf808: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
label_3cf80c:
    if (ctx->pc == 0x3CF80Cu) {
        ctx->pc = 0x3CF80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF808u;
        // 0x3cf80c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF810u;
        goto label_3cf810;
    }
    ctx->pc = 0x3CF808u;
    {
        const bool branch_taken_0x3cf808 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3CF80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF808u;
        // 0x3cf80c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf808) {
            ctx->pc = 0x3CF82Cu;
            goto label_3cf82c;
        }
    }
    ctx->pc = 0x3CF810u;
label_3cf810:
    // 0x3cf810: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cf810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cf814:
    // 0x3cf814: 0xc1036e0  jal         func_40DB80
label_3cf818:
    if (ctx->pc == 0x3CF818u) {
        ctx->pc = 0x3CF818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF814u;
        // 0x3cf818: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF81Cu;
        goto label_3cf81c;
    }
    ctx->pc = 0x3CF814u;
    SET_GPR_U32(ctx, 31, 0x3CF81Cu);
    ctx->pc = 0x3CF818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF814u;
    // 0x3cf818: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3CF814u, 0x3CF81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF81Cu;
label_3cf81c:
    // 0x3cf81c: 0x8ec30018  lw          $v1, 0x18($s6)
    ctx->pc = 0x3cf81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_3cf820:
    // 0x3cf820: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3cf820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_3cf824:
    // 0x3cf824: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x3cf824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3cf828:
    // 0x3cf828: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3cf828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3cf82c:
    // 0x3cf82c: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x3cf82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_3cf830:
    // 0x3cf830: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x3cf830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_3cf834:
    // 0x3cf834: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3cf834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3cf838:
    // 0x3cf838: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3cf838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3cf83c:
    // 0x3cf83c: 0x10c30008  beq         $a2, $v1, . + 4 + (0x8 << 2)
label_3cf840:
    if (ctx->pc == 0x3CF840u) {
        ctx->pc = 0x3CF840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF83Cu;
        // 0x3cf840: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF844u;
        goto label_3cf844;
    }
    ctx->pc = 0x3CF83Cu;
    {
        const bool branch_taken_0x3cf83c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3CF840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF83Cu;
        // 0x3cf840: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf83c) {
            ctx->pc = 0x3CF860u;
            goto label_3cf860;
        }
    }
    ctx->pc = 0x3CF844u;
label_3cf844:
    // 0x3cf844: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3cf844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3cf848:
    // 0x3cf848: 0xc1036e0  jal         func_40DB80
label_3cf84c:
    if (ctx->pc == 0x3CF84Cu) {
        ctx->pc = 0x3CF84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF848u;
        // 0x3cf84c: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF850u;
        goto label_3cf850;
    }
    ctx->pc = 0x3CF848u;
    SET_GPR_U32(ctx, 31, 0x3CF850u);
    ctx->pc = 0x3CF84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF848u;
    // 0x3cf84c: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3CF848u, 0x3CF850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF850u;
label_3cf850:
    // 0x3cf850: 0x8ec30018  lw          $v1, 0x18($s6)
    ctx->pc = 0x3cf850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_3cf854:
    // 0x3cf854: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3cf854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_3cf858:
    // 0x3cf858: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x3cf858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3cf85c:
    // 0x3cf85c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3cf85cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3cf860:
    // 0x3cf860: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x3cf860u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
label_3cf864:
    // 0x3cf864: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3cf864u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cf868:
    // 0x3cf868: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x3cf868u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
label_3cf86c:
    // 0x3cf86c: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x3cf86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_3cf870:
    // 0x3cf870: 0x132040  sll         $a0, $s3, 1
    ctx->pc = 0x3cf870u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_3cf874:
    // 0x3cf874: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x3cf874u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_3cf878:
    // 0x3cf878: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3cf878u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3cf87c:
    // 0x3cf87c: 0x8ec50010  lw          $a1, 0x10($s6)
    ctx->pc = 0x3cf87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3cf880:
    // 0x3cf880: 0xafb300e8  sw          $s3, 0xE8($sp)
    ctx->pc = 0x3cf880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 19));
label_3cf884:
    // 0x3cf884: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x3cf884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_3cf888:
    // 0x3cf888: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3cf888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3cf88c:
    // 0x3cf88c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3cf88cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3cf890:
    // 0x3cf890: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3cf890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_3cf894:
    // 0x3cf894: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x3cf894u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3cf898:
    // 0x3cf898: 0x12400031  beqz        $s2, . + 4 + (0x31 << 2)
label_3cf89c:
    if (ctx->pc == 0x3CF89Cu) {
        ctx->pc = 0x3CF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF898u;
        // 0x3cf89c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF8A0u;
        goto label_3cf8a0;
    }
    ctx->pc = 0x3CF898u;
    {
        const bool branch_taken_0x3cf898 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF898u;
        // 0x3cf89c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf898) {
            ctx->pc = 0x3CF960u;
            goto label_3cf960;
        }
    }
    ctx->pc = 0x3CF8A0u;
label_3cf8a0:
    // 0x3cf8a0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3cf8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3cf8a4:
    // 0x3cf8a4: 0x1054002f  beq         $v0, $s4, . + 4 + (0x2F << 2)
label_3cf8a8:
    if (ctx->pc == 0x3CF8A8u) {
        ctx->pc = 0x3CF8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF8A4u;
        // 0x3cf8a8: 0x8fb300e8  lw          $s3, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF8ACu;
        goto label_3cf8ac;
    }
    ctx->pc = 0x3CF8A4u;
    {
        const bool branch_taken_0x3cf8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x3CF8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF8A4u;
        // 0x3cf8a8: 0x8fb300e8  lw          $s3, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf8a4) {
            ctx->pc = 0x3CF964u;
            goto label_3cf964;
        }
    }
    ctx->pc = 0x3CF8ACu;
label_3cf8ac:
    // 0x3cf8ac: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x3cf8acu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_3cf8b0:
    // 0x3cf8b0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x3cf8b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3cf8b4:
    // 0x3cf8b4: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x3cf8b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_3cf8b8:
    // 0x3cf8b8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x3cf8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3cf8bc:
    // 0x3cf8bc: 0x0  nop
    ctx->pc = 0x3cf8bcu;
    // NOP
label_3cf8c0:
    // 0x3cf8c0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3cf8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3cf8c4:
    // 0x3cf8c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3cf8c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3cf8c8:
    // 0x3cf8c8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3cf8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3cf8cc:
    // 0x3cf8cc: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x3cf8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3cf8d0:
    // 0x3cf8d0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3cf8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3cf8d4:
    // 0x3cf8d4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cf8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cf8d8:
    // 0x3cf8d8: 0x7fa70110  sq          $a3, 0x110($sp)
    ctx->pc = 0x3cf8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 7));
label_3cf8dc:
    // 0x3cf8dc: 0xc1036e0  jal         func_40DB80
label_3cf8e0:
    if (ctx->pc == 0x3CF8E0u) {
        ctx->pc = 0x3CF8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF8DCu;
        // 0x3cf8e0: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF8E4u;
        goto label_3cf8e4;
    }
    ctx->pc = 0x3CF8DCu;
    SET_GPR_U32(ctx, 31, 0x3CF8E4u);
    ctx->pc = 0x3CF8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF8DCu;
    // 0x3cf8e0: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3CF8DCu, 0x3CF8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF8E4u;
label_3cf8e4:
    // 0x3cf8e4: 0x8ec60018  lw          $a2, 0x18($s6)
    ctx->pc = 0x3cf8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_3cf8e8:
    // 0x3cf8e8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cf8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cf8ec:
    // 0x3cf8ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3cf8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3cf8f0:
    // 0x3cf8f0: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x3cf8f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
label_3cf8f4:
    // 0x3cf8f4: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x3cf8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_3cf8f8:
    // 0x3cf8f8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3cf8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3cf8fc:
    // 0x3cf8fc: 0xc1036e0  jal         func_40DB80
label_3cf900:
    if (ctx->pc == 0x3CF900u) {
        ctx->pc = 0x3CF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF8FCu;
        // 0x3cf900: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF904u;
        goto label_3cf904;
    }
    ctx->pc = 0x3CF8FCu;
    SET_GPR_U32(ctx, 31, 0x3CF904u);
    ctx->pc = 0x3CF900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF8FCu;
    // 0x3cf900: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3CF8FCu, 0x3CF904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF904u;
label_3cf904:
    // 0x3cf904: 0x8ec60018  lw          $a2, 0x18($s6)
    ctx->pc = 0x3cf904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_3cf908:
    // 0x3cf908: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cf908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cf90c:
    // 0x3cf90c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3cf90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3cf910:
    // 0x3cf910: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x3cf910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
label_3cf914:
    // 0x3cf914: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x3cf914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_3cf918:
    // 0x3cf918: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3cf918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3cf91c:
    // 0x3cf91c: 0xc1036e0  jal         func_40DB80
label_3cf920:
    if (ctx->pc == 0x3CF920u) {
        ctx->pc = 0x3CF920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF91Cu;
        // 0x3cf920: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF924u;
        goto label_3cf924;
    }
    ctx->pc = 0x3CF91Cu;
    SET_GPR_U32(ctx, 31, 0x3CF924u);
    ctx->pc = 0x3CF920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF91Cu;
    // 0x3cf920: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3CF91Cu, 0x3CF924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF924u;
label_3cf924:
    // 0x3cf924: 0x8ec30018  lw          $v1, 0x18($s6)
    ctx->pc = 0x3cf924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_3cf928:
    // 0x3cf928: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3cf928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_3cf92c:
    // 0x3cf92c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3cf92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3cf930:
    // 0x3cf930: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3cf930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3cf934:
    // 0x3cf934: 0x7ba70110  lq          $a3, 0x110($sp)
    ctx->pc = 0x3cf934u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3cf938:
    // 0x3cf938: 0x16270003  bne         $s1, $a3, . + 4 + (0x3 << 2)
label_3cf93c:
    if (ctx->pc == 0x3CF93Cu) {
        ctx->pc = 0x3CF940u;
        goto label_3cf940;
    }
    ctx->pc = 0x3CF938u;
    {
        const bool branch_taken_0x3cf938 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 7));
        if (branch_taken_0x3cf938) {
            ctx->pc = 0x3CF948u;
            goto label_3cf948;
        }
    }
    ctx->pc = 0x3CF940u;
label_3cf940:
    // 0x3cf940: 0x8e52001c  lw          $s2, 0x1C($s2)
    ctx->pc = 0x3cf940u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3cf944:
    // 0x3cf944: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3cf944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cf948:
    // 0x3cf948: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_3cf94c:
    if (ctx->pc == 0x3CF94Cu) {
        ctx->pc = 0x3CF94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF948u;
        // 0x3cf94c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF950u;
        goto label_3cf950;
    }
    ctx->pc = 0x3CF948u;
    {
        const bool branch_taken_0x3cf948 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF948u;
        // 0x3cf94c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf948) {
            ctx->pc = 0x3CF960u;
            goto label_3cf960;
        }
    }
    ctx->pc = 0x3CF950u;
label_3cf950:
    // 0x3cf950: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3cf950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3cf954:
    // 0x3cf954: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3cf954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3cf958:
    // 0x3cf958: 0x1473ffd9  bne         $v1, $s3, . + 4 + (-0x27 << 2)
label_3cf95c:
    if (ctx->pc == 0x3CF95Cu) {
        ctx->pc = 0x3CF95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF958u;
        // 0x3cf95c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF960u;
        goto label_3cf960;
    }
    ctx->pc = 0x3CF958u;
    {
        const bool branch_taken_0x3cf958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x3CF95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF958u;
        // 0x3cf95c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf958) {
            ctx->pc = 0x3CF8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cf8c0;
        }
    }
    ctx->pc = 0x3CF960u;
label_3cf960:
    // 0x3cf960: 0x8fb300e8  lw          $s3, 0xE8($sp)
    ctx->pc = 0x3cf960u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_3cf964:
    // 0x3cf964: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x3cf964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_3cf968:
    // 0x3cf968: 0x5440ffc1  bnel        $v0, $zero, . + 4 + (-0x3F << 2)
label_3cf96c:
    if (ctx->pc == 0x3CF96Cu) {
        ctx->pc = 0x3CF96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF968u;
        // 0x3cf96c: 0x8fc3001c  lw          $v1, 0x1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF970u;
        goto label_3cf970;
    }
    ctx->pc = 0x3CF968u;
    {
        const bool branch_taken_0x3cf968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cf968) {
            ctx->pc = 0x3CF96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CF968u;
            // 0x3cf96c: 0x8fc3001c  lw          $v1, 0x1C($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CF870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cf870;
        }
    }
    ctx->pc = 0x3CF970u;
label_3cf970:
    // 0x3cf970: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x3cf970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3cf974:
    // 0x3cf974: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x3cf974u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3cf978:
    // 0x3cf978: 0x14880006  bne         $a0, $t0, . + 4 + (0x6 << 2)
label_3cf97c:
    if (ctx->pc == 0x3CF97Cu) {
        ctx->pc = 0x3CF97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF978u;
        // 0x3cf97c: 0x8fab00c8  lw          $t3, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF980u;
        goto label_3cf980;
    }
    ctx->pc = 0x3CF978u;
    {
        const bool branch_taken_0x3cf978 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        ctx->pc = 0x3CF97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF978u;
        // 0x3cf97c: 0x8fab00c8  lw          $t3, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf978) {
            ctx->pc = 0x3CF994u;
            goto label_3cf994;
        }
    }
    ctx->pc = 0x3CF980u;
label_3cf980:
    // 0x3cf980: 0x8faa00c8  lw          $t2, 0xC8($sp)
    ctx->pc = 0x3cf980u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3cf984:
    // 0x3cf984: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3cf984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cf988:
    // 0x3cf988: 0x8d4a0028  lw          $t2, 0x28($t2)
    ctx->pc = 0x3cf988u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 40)));
label_3cf98c:
    // 0x3cf98c: 0xafaa00c8  sw          $t2, 0xC8($sp)
    ctx->pc = 0x3cf98cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 10));
label_3cf990:
    // 0x3cf990: 0x8fab00c8  lw          $t3, 0xC8($sp)
    ctx->pc = 0x3cf990u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3cf994:
    // 0x3cf994: 0x11600006  beqz        $t3, . + 4 + (0x6 << 2)
label_3cf998:
    if (ctx->pc == 0x3CF998u) {
        ctx->pc = 0x3CF998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF994u;
        // 0x3cf998: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF99Cu;
        goto label_3cf99c;
    }
    ctx->pc = 0x3CF994u;
    {
        const bool branch_taken_0x3cf994 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF994u;
        // 0x3cf998: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf994) {
            ctx->pc = 0x3CF9B0u;
            goto label_3cf9b0;
        }
    }
    ctx->pc = 0x3CF99Cu;
label_3cf99c:
    // 0x3cf99c: 0x8fac00d0  lw          $t4, 0xD0($sp)
    ctx->pc = 0x3cf99cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3cf9a0:
    // 0x3cf9a0: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x3cf9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_3cf9a4:
    // 0x3cf9a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3cf9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3cf9a8:
    // 0x3cf9a8: 0x146cfeef  bne         $v1, $t4, . + 4 + (-0x111 << 2)
label_3cf9ac:
    if (ctx->pc == 0x3CF9ACu) {
        ctx->pc = 0x3CF9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF9A8u;
        // 0x3cf9ac: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF9B0u;
        goto label_3cf9b0;
    }
    ctx->pc = 0x3CF9A8u;
    {
        const bool branch_taken_0x3cf9a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 12));
        ctx->pc = 0x3CF9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF9A8u;
        // 0x3cf9ac: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf9a8) {
            ctx->pc = 0x3CF568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cf568;
        }
    }
    ctx->pc = 0x3CF9B0u;
label_3cf9b0:
    // 0x3cf9b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3cf9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cf9b4:
    // 0x3cf9b4: 0xc1036da  jal         func_40DB68
label_3cf9b8:
    if (ctx->pc == 0x3CF9B8u) {
        ctx->pc = 0x3CF9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF9B4u;
        // 0x3cf9b8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF9BCu;
        goto label_3cf9bc;
    }
    ctx->pc = 0x3CF9B4u;
    SET_GPR_U32(ctx, 31, 0x3CF9BCu);
    ctx->pc = 0x3CF9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF9B4u;
    // 0x3cf9b8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3CF9B4u, 0x3CF9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF9BCu;
label_3cf9bc:
    // 0x3cf9bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3cf9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cf9c0:
    // 0x3cf9c0: 0xc10376a  jal         func_40DDA8
label_3cf9c4:
    if (ctx->pc == 0x3CF9C4u) {
        ctx->pc = 0x3CF9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF9C0u;
        // 0x3cf9c4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF9C8u;
        goto label_3cf9c8;
    }
    ctx->pc = 0x3CF9C0u;
    SET_GPR_U32(ctx, 31, 0x3CF9C8u);
    ctx->pc = 0x3CF9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF9C0u;
    // 0x3cf9c4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3CF9C0u, 0x3CF9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF9C8u;
label_3cf9c8:
    // 0x3cf9c8: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x3cf9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3cf9cc:
    // 0x3cf9cc: 0xc1036da  jal         func_40DB68
label_3cf9d0:
    if (ctx->pc == 0x3CF9D0u) {
        ctx->pc = 0x3CF9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF9CCu;
        // 0x3cf9d0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF9D4u;
        goto label_3cf9d4;
    }
    ctx->pc = 0x3CF9CCu;
    SET_GPR_U32(ctx, 31, 0x3CF9D4u);
    ctx->pc = 0x3CF9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF9CCu;
    // 0x3cf9d0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3CF9CCu, 0x3CF9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF9D4u;
label_3cf9d4:
    // 0x3cf9d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3cf9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3cf9d8:
    // 0x3cf9d8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3cf9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3cf9dc:
    // 0x3cf9dc: 0xc10376a  jal         func_40DDA8
label_3cf9e0:
    if (ctx->pc == 0x3CF9E0u) {
        ctx->pc = 0x3CF9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF9DCu;
        // 0x3cf9e0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF9E4u;
        goto label_3cf9e4;
    }
    ctx->pc = 0x3CF9DCu;
    SET_GPR_U32(ctx, 31, 0x3CF9E4u);
    ctx->pc = 0x3CF9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF9DCu;
    // 0x3cf9e0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3CF9DCu, 0x3CF9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF9E4u;
label_3cf9e4:
    // 0x3cf9e4: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x3cf9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3cf9e8:
    // 0x3cf9e8: 0xc1036ac  jal         func_40DAB0
label_3cf9ec:
    if (ctx->pc == 0x3CF9ECu) {
        ctx->pc = 0x3CF9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF9E8u;
        // 0x3cf9ec: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF9F0u;
        goto label_3cf9f0;
    }
    ctx->pc = 0x3CF9E8u;
    SET_GPR_U32(ctx, 31, 0x3CF9F0u);
    ctx->pc = 0x3CF9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF9E8u;
    // 0x3cf9ec: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DAB0u, 0x3CF9E8u, 0x3CF9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF9F0u;
label_3cf9f0:
    // 0x3cf9f0: 0xc10376a  jal         func_40DDA8
label_3cf9f4:
    if (ctx->pc == 0x3CF9F4u) {
        ctx->pc = 0x3CF9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF9F0u;
        // 0x3cf9f4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CF9F8u;
        goto label_3cf9f8;
    }
    ctx->pc = 0x3CF9F0u;
    SET_GPR_U32(ctx, 31, 0x3CF9F8u);
    ctx->pc = 0x3CF9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF9F0u;
    // 0x3cf9f4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3CF9F0u, 0x3CF9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF9F8u;
label_3cf9f8:
    // 0x3cf9f8: 0x5c40fec5  bgtzl       $v0, . + 4 + (-0x13B << 2)
label_3cf9fc:
    if (ctx->pc == 0x3CF9FCu) {
        ctx->pc = 0x3CF9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF9F8u;
        // 0x3cf9fc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFA00u;
        goto label_3cfa00;
    }
    ctx->pc = 0x3CF9F8u;
    {
        const bool branch_taken_0x3cf9f8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3cf9f8) {
            ctx->pc = 0x3CF9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CF9F8u;
            // 0x3cf9fc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CF510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cf510;
        }
    }
    ctx->pc = 0x3CFA00u;
label_3cfa00:
    // 0x3cfa00: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x3cfa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_3cfa04:
    // 0x3cfa04: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x3cfa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3cfa08:
    // 0x3cfa08: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3cfa08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3cfa0c:
    // 0x3cfa0c: 0x1440fd9e  bnez        $v0, . + 4 + (-0x262 << 2)
label_3cfa10:
    if (ctx->pc == 0x3CFA10u) {
        ctx->pc = 0x3CFA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFA0Cu;
        // 0x3cfa10: 0x8fa600b8  lw          $a2, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFA14u;
        goto label_3cfa14;
    }
    ctx->pc = 0x3CFA0Cu;
    {
        const bool branch_taken_0x3cfa0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CFA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFA0Cu;
        // 0x3cfa10: 0x8fa600b8  lw          $a2, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfa0c) {
            ctx->pc = 0x3CF088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cf088;
        }
    }
    ctx->pc = 0x3CFA14u;
label_3cfa14:
    // 0x3cfa14: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x3cfa14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_3cfa18:
    // 0x3cfa18: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3cfa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3cfa1c:
    // 0x3cfa1c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3cfa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3cfa20:
    // 0x3cfa20: 0xc103684  jal         func_40DA10
label_3cfa24:
    if (ctx->pc == 0x3CFA24u) {
        ctx->pc = 0x3CFA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFA20u;
        // 0x3cfa24: 0xafa500f4  sw          $a1, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFA28u;
        goto label_3cfa28;
    }
    ctx->pc = 0x3CFA20u;
    SET_GPR_U32(ctx, 31, 0x3CFA28u);
    ctx->pc = 0x3CFA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFA20u;
    // 0x3cfa24: 0xafa500f4  sw          $a1, 0xF4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3CFA20u, 0x3CFA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFA28u;
label_3cfa28:
    // 0x3cfa28: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x3cfa28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_3cfa2c:
    // 0x3cfa2c: 0x24c3e880  addiu       $v1, $a2, -0x1780
    ctx->pc = 0x3cfa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961280));
label_3cfa30:
    // 0x3cfa30: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3cfa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3cfa34:
    // 0x3cfa34: 0x40f809  jalr        $v0
label_3cfa38:
    if (ctx->pc == 0x3CFA38u) {
        ctx->pc = 0x3CFA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFA34u;
        // 0x3cfa38: 0x8fa400ac  lw          $a0, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFA3Cu;
        goto label_3cfa3c;
    }
    ctx->pc = 0x3CFA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CFA3Cu);
        ctx->pc = 0x3CFA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFA34u;
        // 0x3cfa38: 0x8fa400ac  lw          $a0, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CFA34u, 0x3CFA3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CFA3Cu;
label_3cfa3c:
    // 0x3cfa3c: 0xc0f36de  jal         func_3CDB78
label_3cfa40:
    if (ctx->pc == 0x3CFA40u) {
        ctx->pc = 0x3CFA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFA3Cu;
        // 0x3cfa40: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFA44u;
        goto label_3cfa44;
    }
    ctx->pc = 0x3CFA3Cu;
    SET_GPR_U32(ctx, 31, 0x3CFA44u);
    ctx->pc = 0x3CFA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFA3Cu;
    // 0x3cfa40: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CDB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDB78u, 0x3CFA3Cu, 0x3CFA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFA44u;
label_3cfa44:
    // 0x3cfa44: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3cfa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_3cfa48:
    // 0x3cfa48: 0x1840007e  blez        $v0, . + 4 + (0x7E << 2)
label_3cfa4c:
    if (ctx->pc == 0x3CFA4Cu) {
        ctx->pc = 0x3CFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFA48u;
        // 0x3cfa4c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFA50u;
        goto label_3cfa50;
    }
    ctx->pc = 0x3CFA48u;
    {
        const bool branch_taken_0x3cfa48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3CFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFA48u;
        // 0x3cfa4c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfa48) {
            ctx->pc = 0x3CFC44u;
            goto label_3cfc44;
        }
    }
    ctx->pc = 0x3CFA50u;
label_3cfa50:
    // 0x3cfa50: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x3cfa50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_3cfa54:
    // 0x3cfa54: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x3cfa54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_3cfa58:
    // 0x3cfa58: 0x101023  negu        $v0, $s0
    ctx->pc = 0x3cfa58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_3cfa5c:
    // 0x3cfa5c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3cfa5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3cfa60:
    // 0x3cfa60: 0xc7828108  lwc1        $f2, -0x7EF8($gp)
    ctx->pc = 0x3cfa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cfa64:
    // 0x3cfa64: 0x34e7fff8  ori         $a3, $a3, 0xFFF8
    ctx->pc = 0x3cfa64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65528);
label_3cfa68:
    // 0x3cfa68: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
label_3cfa6c:
    if (ctx->pc == 0x3CFA6Cu) {
        ctx->pc = 0x3CFA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFA68u;
        // 0x3cfa6c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFA70u;
        goto label_3cfa70;
    }
    ctx->pc = 0x3CFA68u;
    {
        const bool branch_taken_0x3cfa68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CFA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFA68u;
        // 0x3cfa6c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfa68) {
            ctx->pc = 0x3CFB48u;
            goto label_3cfb48;
        }
    }
    ctx->pc = 0x3CFA70u;
label_3cfa70:
    // 0x3cfa70: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3cfa70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3cfa74:
    // 0x3cfa74: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_3cfa78:
    if (ctx->pc == 0x3CFA78u) {
        ctx->pc = 0x3CFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFA74u;
        // 0x3cfa78: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFA7Cu;
        goto label_3cfa7c;
    }
    ctx->pc = 0x3CFA74u;
    {
        const bool branch_taken_0x3cfa74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFA74u;
        // 0x3cfa78: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfa74) {
            ctx->pc = 0x3CFB04u;
            goto label_3cfb04;
        }
    }
    ctx->pc = 0x3CFA7Cu;
label_3cfa7c:
    // 0x3cfa7c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_3cfa80:
    if (ctx->pc == 0x3CFA80u) {
        ctx->pc = 0x3CFA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFA7Cu;
        // 0x3cfa80: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFA84u;
        goto label_3cfa84;
    }
    ctx->pc = 0x3CFA7Cu;
    {
        const bool branch_taken_0x3cfa7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cfa7c) {
            ctx->pc = 0x3CFA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CFA7Cu;
            // 0x3cfa80: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CFAC8u;
            goto label_3cfac8;
        }
    }
    ctx->pc = 0x3CFA84u;
label_3cfa84:
    // 0x3cfa84: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3cfa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cfa88:
    // 0x3cfa88: 0x24860008  addiu       $a2, $a0, 0x8
    ctx->pc = 0x3cfa88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3cfa8c:
    // 0x3cfa8c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3cfa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cfa90:
    // 0x3cfa90: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3cfa90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3cfa94:
    // 0x3cfa94: 0x672824  and         $a1, $v1, $a3
    ctx->pc = 0x3cfa94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_3cfa98:
    // 0x3cfa98: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3cfa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3cfa9c:
    // 0x3cfa9c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3cfa9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3cfaa0:
    // 0x3cfaa0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cfaa0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cfaa4:
    // 0x3cfaa4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3cfaa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3cfaa8:
    // 0x3cfaa8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x3cfaa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_3cfaac:
    // 0x3cfaac: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3cfaacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3cfab0:
    // 0x3cfab0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3cfab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3cfab4:
    // 0x3cfab4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3cfab4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cfab8:
    // 0x3cfab8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cfab8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cfabc:
    // 0x3cfabc: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x3cfabcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_3cfac0:
    // 0x3cfac0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x3cfac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_3cfac4:
    // 0x3cfac4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3cfac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3cfac8:
    // 0x3cfac8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3cfac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3cfacc:
    // 0x3cfacc: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3cfaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cfad0:
    // 0x3cfad0: 0x672824  and         $a1, $v1, $a3
    ctx->pc = 0x3cfad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_3cfad4:
    // 0x3cfad4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3cfad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3cfad8:
    // 0x3cfad8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3cfad8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3cfadc:
    // 0x3cfadc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cfadcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cfae0:
    // 0x3cfae0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3cfae0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3cfae4:
    // 0x3cfae4: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x3cfae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_3cfae8:
    // 0x3cfae8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3cfae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3cfaec:
    // 0x3cfaec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3cfaecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3cfaf0:
    // 0x3cfaf0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3cfaf0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cfaf4:
    // 0x3cfaf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cfaf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cfaf8:
    // 0x3cfaf8: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x3cfaf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_3cfafc:
    // 0x3cfafc: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x3cfafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_3cfb00:
    // 0x3cfb00: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3cfb00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_3cfb04:
    // 0x3cfb04: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3cfb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3cfb08:
    // 0x3cfb08: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3cfb08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3cfb0c:
    // 0x3cfb0c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3cfb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cfb10:
    // 0x3cfb10: 0x672824  and         $a1, $v1, $a3
    ctx->pc = 0x3cfb10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_3cfb14:
    // 0x3cfb14: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3cfb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3cfb18:
    // 0x3cfb18: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3cfb18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3cfb1c:
    // 0x3cfb1c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cfb1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cfb20:
    // 0x3cfb20: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3cfb20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3cfb24:
    // 0x3cfb24: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x3cfb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_3cfb28:
    // 0x3cfb28: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3cfb28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3cfb2c:
    // 0x3cfb2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3cfb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3cfb30:
    // 0x3cfb30: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3cfb30u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cfb34:
    // 0x3cfb34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cfb34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cfb38:
    // 0x3cfb38: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x3cfb38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_3cfb3c:
    // 0x3cfb3c: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x3cfb3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_3cfb40:
    // 0x3cfb40: 0x12000040  beqz        $s0, . + 4 + (0x40 << 2)
label_3cfb44:
    if (ctx->pc == 0x3CFB44u) {
        ctx->pc = 0x3CFB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFB40u;
        // 0x3cfb44: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFB48u;
        goto label_3cfb48;
    }
    ctx->pc = 0x3CFB40u;
    {
        const bool branch_taken_0x3cfb40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CFB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFB40u;
        // 0x3cfb44: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfb40) {
            ctx->pc = 0x3CFC44u;
            goto label_3cfc44;
        }
    }
    ctx->pc = 0x3CFB48u;
label_3cfb48:
    // 0x3cfb48: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3cfb48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3cfb4c:
    // 0x3cfb4c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3cfb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3cfb50:
    // 0x3cfb50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3cfb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cfb54:
    // 0x3cfb54: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x3cfb54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_3cfb58:
    // 0x3cfb58: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3cfb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cfb5c:
    // 0x3cfb5c: 0x672824  and         $a1, $v1, $a3
    ctx->pc = 0x3cfb5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_3cfb60:
    // 0x3cfb60: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3cfb60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3cfb64:
    // 0x3cfb64: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x3cfb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_3cfb68:
    // 0x3cfb68: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cfb68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cfb6c:
    // 0x3cfb6c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3cfb6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3cfb70:
    // 0x3cfb70: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3cfb70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3cfb74:
    // 0x3cfb74: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x3cfb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_3cfb78:
    // 0x3cfb78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3cfb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3cfb7c:
    // 0x3cfb7c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3cfb7cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cfb80:
    // 0x3cfb80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cfb80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cfb84:
    // 0x3cfb84: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x3cfb84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_3cfb88:
    // 0x3cfb88: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x3cfb88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_3cfb8c:
    // 0x3cfb8c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3cfb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3cfb90:
    // 0x3cfb90: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x3cfb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cfb94:
    // 0x3cfb94: 0x672824  and         $a1, $v1, $a3
    ctx->pc = 0x3cfb94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_3cfb98:
    // 0x3cfb98: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3cfb98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3cfb9c:
    // 0x3cfb9c: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x3cfb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_3cfba0:
    // 0x3cfba0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cfba0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cfba4:
    // 0x3cfba4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3cfba4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3cfba8:
    // 0x3cfba8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3cfba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3cfbac:
    // 0x3cfbac: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x3cfbacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_3cfbb0:
    // 0x3cfbb0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3cfbb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3cfbb4:
    // 0x3cfbb4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3cfbb4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cfbb8:
    // 0x3cfbb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cfbb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cfbbc:
    // 0x3cfbbc: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x3cfbbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_3cfbc0:
    // 0x3cfbc0: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x3cfbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_3cfbc4:
    // 0x3cfbc4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3cfbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3cfbc8:
    // 0x3cfbc8: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x3cfbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cfbcc:
    // 0x3cfbcc: 0x672824  and         $a1, $v1, $a3
    ctx->pc = 0x3cfbccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_3cfbd0:
    // 0x3cfbd0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3cfbd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3cfbd4:
    // 0x3cfbd4: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x3cfbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_3cfbd8:
    // 0x3cfbd8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cfbd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cfbdc:
    // 0x3cfbdc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3cfbdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3cfbe0:
    // 0x3cfbe0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3cfbe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3cfbe4:
    // 0x3cfbe4: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x3cfbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_3cfbe8:
    // 0x3cfbe8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3cfbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3cfbec:
    // 0x3cfbec: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3cfbecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cfbf0:
    // 0x3cfbf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cfbf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cfbf4:
    // 0x3cfbf4: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x3cfbf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_3cfbf8:
    // 0x3cfbf8: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x3cfbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_3cfbfc:
    // 0x3cfbfc: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x3cfbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3cfc00:
    // 0x3cfc00: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x3cfc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cfc04:
    // 0x3cfc04: 0x672824  and         $a1, $v1, $a3
    ctx->pc = 0x3cfc04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_3cfc08:
    // 0x3cfc08: 0x8d03001c  lw          $v1, 0x1C($t0)
    ctx->pc = 0x3cfc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_3cfc0c:
    // 0x3cfc0c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3cfc0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3cfc10:
    // 0x3cfc10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cfc10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cfc14:
    // 0x3cfc14: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3cfc14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3cfc18:
    // 0x3cfc18: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x3cfc18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_3cfc1c:
    // 0x3cfc1c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3cfc1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3cfc20:
    // 0x3cfc20: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x3cfc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_3cfc24:
    // 0x3cfc24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3cfc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3cfc28:
    // 0x3cfc28: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3cfc28u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cfc2c:
    // 0x3cfc2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cfc2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cfc30:
    // 0x3cfc30: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x3cfc30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_3cfc34:
    // 0x3cfc34: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x3cfc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
label_3cfc38:
    // 0x3cfc38: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3cfc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_3cfc3c:
    // 0x3cfc3c: 0x1600ffc4  bnez        $s0, . + 4 + (-0x3C << 2)
label_3cfc40:
    if (ctx->pc == 0x3CFC40u) {
        ctx->pc = 0x3CFC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFC3Cu;
        // 0x3cfc40: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFC44u;
        goto label_3cfc44;
    }
    ctx->pc = 0x3CFC3Cu;
    {
        const bool branch_taken_0x3cfc3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CFC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFC3Cu;
        // 0x3cfc40: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfc3c) {
            ctx->pc = 0x3CFB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cfb50;
        }
    }
    ctx->pc = 0x3CFC44u;
label_3cfc44:
    // 0x3cfc44: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x3cfc44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_3cfc48:
    // 0x3cfc48: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3cfc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_3cfc4c:
    // 0x3cfc4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3cfc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3cfc50:
    // 0x3cfc50: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3cfc50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3cfc54:
    // 0x3cfc54: 0x2455b298  addiu       $s5, $v0, -0x4D68
    ctx->pc = 0x3cfc54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947480));
label_3cfc58:
    // 0x3cfc58: 0xafa70100  sw          $a3, 0x100($sp)
    ctx->pc = 0x3cfc58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 7));
label_3cfc5c:
    // 0x3cfc5c: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x3cfc5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3cfc60:
    // 0x3cfc60: 0x3a0b82d  daddu       $s7, $sp, $zero
    ctx->pc = 0x3cfc60u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cfc64:
    // 0x3cfc64: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3cfc64u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cfc68:
    // 0x3cfc68: 0xafb700d4  sw          $s7, 0xD4($sp)
    ctx->pc = 0x3cfc68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 23));
label_3cfc6c:
    // 0x3cfc6c: 0x1000008a  b           . + 4 + (0x8A << 2)
label_3cfc70:
    if (ctx->pc == 0x3CFC70u) {
        ctx->pc = 0x3CFC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFC6Cu;
        // 0x3cfc70: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFC74u;
        goto label_3cfc74;
    }
    ctx->pc = 0x3CFC6Cu;
    {
        const bool branch_taken_0x3cfc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CFC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFC6Cu;
        // 0x3cfc70: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfc6c) {
            ctx->pc = 0x3CFE98u;
            goto label_3cfe98;
        }
    }
    ctx->pc = 0x3CFC74u;
label_3cfc74:
    // 0x3cfc74: 0x0  nop
    ctx->pc = 0x3cfc74u;
    // NOP
label_3cfc78:
    // 0x3cfc78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3cfc78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cfc7c:
    // 0x3cfc7c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3cfc7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cfc80:
    // 0x3cfc80: 0xc1036da  jal         func_40DB68
label_3cfc84:
    if (ctx->pc == 0x3CFC84u) {
        ctx->pc = 0x3CFC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFC80u;
        // 0x3cfc84: 0x8d040000  lw          $a0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFC88u;
        goto label_3cfc88;
    }
    ctx->pc = 0x3CFC80u;
    SET_GPR_U32(ctx, 31, 0x3CFC88u);
    ctx->pc = 0x3CFC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFC80u;
    // 0x3cfc84: 0x8d040000  lw          $a0, 0x0($t0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3CFC80u, 0x3CFC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFC88u;
label_3cfc88:
    // 0x3cfc88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3cfc88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cfc8c:
    // 0x3cfc8c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3cfc8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3cfc90:
    // 0x3cfc90: 0x10000026  b           . + 4 + (0x26 << 2)
label_3cfc94:
    if (ctx->pc == 0x3CFC94u) {
        ctx->pc = 0x3CFC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFC90u;
        // 0x3cfc94: 0xafb300e8  sw          $s3, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFC98u;
        goto label_3cfc98;
    }
    ctx->pc = 0x3CFC90u;
    {
        const bool branch_taken_0x3cfc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CFC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFC90u;
        // 0x3cfc94: 0xafb300e8  sw          $s3, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfc90) {
            ctx->pc = 0x3CFD2Cu;
            goto label_3cfd2c;
        }
    }
    ctx->pc = 0x3CFC98u;
label_3cfc98:
    // 0x3cfc98: 0xc1036da  jal         func_40DB68
label_3cfc9c:
    if (ctx->pc == 0x3CFC9Cu) {
        ctx->pc = 0x3CFC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFC98u;
        // 0x3cfc9c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFCA0u;
        goto label_3cfca0;
    }
    ctx->pc = 0x3CFC98u;
    SET_GPR_U32(ctx, 31, 0x3CFCA0u);
    ctx->pc = 0x3CFC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFC98u;
    // 0x3cfc9c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3CFC98u, 0x3CFCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFCA0u;
label_3cfca0:
    // 0x3cfca0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3cfca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cfca4:
    // 0x3cfca4: 0x1680000e  bnez        $s4, . + 4 + (0xE << 2)
label_3cfca8:
    if (ctx->pc == 0x3CFCA8u) {
        ctx->pc = 0x3CFCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFCA4u;
        // 0x3cfca8: 0x27b00060  addiu       $s0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFCACu;
        goto label_3cfcac;
    }
    ctx->pc = 0x3CFCA4u;
    {
        const bool branch_taken_0x3cfca4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CFCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFCA4u;
        // 0x3cfca8: 0x27b00060  addiu       $s0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfca4) {
            ctx->pc = 0x3CFCE0u;
            goto label_3cfce0;
        }
    }
    ctx->pc = 0x3CFCACu;
label_3cfcac:
    // 0x3cfcac: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x3cfcacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_3cfcb0:
    // 0x3cfcb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cfcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cfcb4:
    // 0x3cfcb4: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3cfcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3cfcb8:
    // 0x3cfcb8: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x3cfcb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3cfcbc:
    // 0x3cfcbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cfcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3cfcc0:
    // 0x3cfcc0: 0x684a0007  ldl         $t2, 0x7($v0)
    ctx->pc = 0x3cfcc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_3cfcc4:
    // 0x3cfcc4: 0x6c4a0000  ldr         $t2, 0x0($v0)
    ctx->pc = 0x3cfcc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_3cfcc8:
    // 0x3cfcc8: 0x8c4b0008  lw          $t3, 0x8($v0)
    ctx->pc = 0x3cfcc8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3cfccc:
    // 0x3cfccc: 0xb3aa0097  sdl         $t2, 0x97($sp)
    ctx->pc = 0x3cfcccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cfcd0:
    // 0x3cfcd0: 0xb7aa0090  sdr         $t2, 0x90($sp)
    ctx->pc = 0x3cfcd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cfcd4:
    // 0x3cfcd4: 0xafab0098  sw          $t3, 0x98($sp)
    ctx->pc = 0x3cfcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 11));
label_3cfcd8:
    // 0x3cfcd8: 0xc10540a  jal         func_415028
label_3cfcdc:
    if (ctx->pc == 0x3CFCDCu) {
        ctx->pc = 0x3CFCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFCD8u;
        // 0x3cfcdc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFCE0u;
        goto label_3cfce0;
    }
    ctx->pc = 0x3CFCD8u;
    SET_GPR_U32(ctx, 31, 0x3CFCE0u);
    ctx->pc = 0x3CFCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFCD8u;
    // 0x3cfcdc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415028u, 0x3CFCD8u, 0x3CFCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFCE0u;
label_3cfce0:
    // 0x3cfce0: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x3cfce0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_3cfce4:
    // 0x3cfce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cfce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cfce8:
    // 0x3cfce8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3cfce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3cfcec:
    // 0x3cfcec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3cfcecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3cfcf0:
    // 0x3cfcf0: 0xb62818  mult        $a1, $a1, $s6
    ctx->pc = 0x3cfcf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3cfcf4:
    // 0x3cfcf4: 0xc105418  jal         func_415060
label_3cfcf8:
    if (ctx->pc == 0x3CFCF8u) {
        ctx->pc = 0x3CFCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFCF4u;
        // 0x3cfcf8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFCFCu;
        goto label_3cfcfc;
    }
    ctx->pc = 0x3CFCF4u;
    SET_GPR_U32(ctx, 31, 0x3CFCFCu);
    ctx->pc = 0x3CFCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFCF4u;
    // 0x3cfcf8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415060u, 0x3CFCF4u, 0x3CFCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFCFCu;
label_3cfcfc:
    // 0x3cfcfc: 0x96450002  lhu         $a1, 0x2($s2)
    ctx->pc = 0x3cfcfcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_3cfd00:
    // 0x3cfd00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cfd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cfd04:
    // 0x3cfd04: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3cfd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3cfd08:
    // 0x3cfd08: 0xb62818  mult        $a1, $a1, $s6
    ctx->pc = 0x3cfd08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3cfd0c:
    // 0x3cfd0c: 0xc105418  jal         func_415060
label_3cfd10:
    if (ctx->pc == 0x3CFD10u) {
        ctx->pc = 0x3CFD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFD0Cu;
        // 0x3cfd10: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFD14u;
        goto label_3cfd14;
    }
    ctx->pc = 0x3CFD0Cu;
    SET_GPR_U32(ctx, 31, 0x3CFD14u);
    ctx->pc = 0x3CFD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFD0Cu;
    // 0x3cfd10: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415060u, 0x3CFD0Cu, 0x3CFD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFD14u;
label_3cfd14:
    // 0x3cfd14: 0x96450004  lhu         $a1, 0x4($s2)
    ctx->pc = 0x3cfd14u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_3cfd18:
    // 0x3cfd18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cfd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cfd1c:
    // 0x3cfd1c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3cfd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3cfd20:
    // 0x3cfd20: 0xb62818  mult        $a1, $a1, $s6
    ctx->pc = 0x3cfd20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3cfd24:
    // 0x3cfd24: 0xc105418  jal         func_415060
label_3cfd28:
    if (ctx->pc == 0x3CFD28u) {
        ctx->pc = 0x3CFD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFD24u;
        // 0x3cfd28: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFD2Cu;
        goto label_3cfd2c;
    }
    ctx->pc = 0x3CFD24u;
    SET_GPR_U32(ctx, 31, 0x3CFD2Cu);
    ctx->pc = 0x3CFD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFD24u;
    // 0x3cfd28: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415060u, 0x3CFD24u, 0x3CFD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFD2Cu;
label_3cfd2c:
    // 0x3cfd2c: 0xc10376a  jal         func_40DDA8
label_3cfd30:
    if (ctx->pc == 0x3CFD30u) {
        ctx->pc = 0x3CFD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFD2Cu;
        // 0x3cfd30: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFD34u;
        goto label_3cfd34;
    }
    ctx->pc = 0x3CFD2Cu;
    SET_GPR_U32(ctx, 31, 0x3CFD34u);
    ctx->pc = 0x3CFD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFD2Cu;
    // 0x3cfd30: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3CFD2Cu, 0x3CFD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFD34u;
label_3cfd34:
    // 0x3cfd34: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x3cfd34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3cfd38:
    // 0x3cfd38: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
label_3cfd3c:
    if (ctx->pc == 0x3CFD3Cu) {
        ctx->pc = 0x3CFD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFD38u;
        // 0x3cfd3c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFD40u;
        goto label_3cfd40;
    }
    ctx->pc = 0x3CFD38u;
    {
        const bool branch_taken_0x3cfd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cfd38) {
            ctx->pc = 0x3CFD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CFD38u;
            // 0x3cfd3c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CFC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cfc98;
        }
    }
    ctx->pc = 0x3CFD40u;
label_3cfd40:
    // 0x3cfd40: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3cfd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cfd44:
    // 0x3cfd44: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x3cfd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3cfd48:
    // 0x3cfd48: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x3cfd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cfd4c:
    // 0x3cfd4c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x3cfd4cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_3cfd50:
    // 0x3cfd50: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x3cfd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cfd54:
    // 0x3cfd54: 0xe7ac006c  swc1        $f12, 0x6C($sp)
    ctx->pc = 0x3cfd54u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_3cfd58:
    // 0x3cfd58: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3cfd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cfd5c:
    // 0x3cfd5c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3cfd5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cfd60:
    // 0x3cfd60: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x3cfd60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3cfd64:
    // 0x3cfd64: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3cfd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cfd68:
    // 0x3cfd68: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3cfd68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3cfd6c:
    // 0x3cfd6c: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x3cfd6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3cfd70:
    // 0x3cfd70: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x3cfd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cfd74:
    // 0x3cfd74: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3cfd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cfd78:
    // 0x3cfd78: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x3cfd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cfd7c:
    // 0x3cfd7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3cfd7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cfd80:
    // 0x3cfd80: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x3cfd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cfd84:
    // 0x3cfd84: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x3cfd84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3cfd88:
    // 0x3cfd88: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3cfd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cfd8c:
    // 0x3cfd8c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3cfd8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3cfd90:
    // 0x3cfd90: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x3cfd90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3cfd94:
    // 0x3cfd94: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3cfd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cfd98:
    // 0x3cfd98: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3cfd98u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3cfd9c:
    // 0x3cfd9c: 0xc0c3930  jal         func_30E4C0
label_3cfda0:
    if (ctx->pc == 0x3CFDA0u) {
        ctx->pc = 0x3CFDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFD9Cu;
        // 0x3cfda0: 0xe7a30068  swc1        $f3, 0x68($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFDA4u;
        goto label_3cfda4;
    }
    ctx->pc = 0x3CFD9Cu;
    SET_GPR_U32(ctx, 31, 0x3CFDA4u);
    ctx->pc = 0x3CFDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFD9Cu;
    // 0x3cfda0: 0xe7a30068  swc1        $f3, 0x68($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E4C0u, 0x3CFD9Cu, 0x3CFDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFDA4u;
label_3cfda4:
    // 0x3cfda4: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x3cfda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3cfda8:
    // 0x3cfda8: 0xc0c3930  jal         func_30E4C0
label_3cfdac:
    if (ctx->pc == 0x3CFDACu) {
        ctx->pc = 0x3CFDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFDA8u;
        // 0x3cfdac: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFDB0u;
        goto label_3cfdb0;
    }
    ctx->pc = 0x3CFDA8u;
    SET_GPR_U32(ctx, 31, 0x3CFDB0u);
    ctx->pc = 0x3CFDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFDA8u;
    // 0x3cfdac: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E4C0u, 0x3CFDA8u, 0x3CFDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFDB0u;
label_3cfdb0:
    // 0x3cfdb0: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x3cfdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3cfdb4:
    // 0x3cfdb4: 0xc0c3930  jal         func_30E4C0
label_3cfdb8:
    if (ctx->pc == 0x3CFDB8u) {
        ctx->pc = 0x3CFDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFDB4u;
        // 0x3cfdb8: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFDBCu;
        goto label_3cfdbc;
    }
    ctx->pc = 0x3CFDB4u;
    SET_GPR_U32(ctx, 31, 0x3CFDBCu);
    ctx->pc = 0x3CFDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFDB4u;
    // 0x3cfdb8: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E4C0u, 0x3CFDB4u, 0x3CFDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFDBCu;
label_3cfdbc:
    // 0x3cfdbc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x3cfdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3cfdc0:
    // 0x3cfdc0: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x3cfdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cfdc4:
    // 0x3cfdc4: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x3cfdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cfdc8:
    // 0x3cfdc8: 0xc7a50064  lwc1        $f5, 0x64($sp)
    ctx->pc = 0x3cfdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3cfdcc:
    // 0x3cfdcc: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x3cfdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cfdd0:
    // 0x3cfdd0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3cfdd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3cfdd4:
    // 0x3cfdd4: 0xc7a40068  lwc1        $f4, 0x68($sp)
    ctx->pc = 0x3cfdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3cfdd8:
    // 0x3cfdd8: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x3cfdd8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
label_3cfddc:
    // 0x3cfddc: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x3cfddcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_3cfde0:
    // 0x3cfde0: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x3cfde0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3cfde4:
    // 0x3cfde4: 0xe7a50084  swc1        $f5, 0x84($sp)
    ctx->pc = 0x3cfde4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3cfde8:
    // 0x3cfde8: 0xe7a40088  swc1        $f4, 0x88($sp)
    ctx->pc = 0x3cfde8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3cfdec:
    // 0x3cfdec: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x3cfdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cfdf0:
    // 0x3cfdf0: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x3cfdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cfdf4:
    // 0x3cfdf4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3cfdf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cfdf8:
    // 0x3cfdf8: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x3cfdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cfdfc:
    // 0x3cfdfc: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x3cfdfcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_3cfe00:
    // 0x3cfe00: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x3cfe00u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3cfe04:
    // 0x3cfe04: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x3cfe04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_3cfe08:
    // 0x3cfe08: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3cfe08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_3cfe0c:
    // 0x3cfe0c: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x3cfe0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_3cfe10:
    // 0x3cfe10: 0xc6a00048  lwc1        $f0, 0x48($s5)
    ctx->pc = 0x3cfe10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cfe14:
    // 0x3cfe14: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x3cfe14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cfe18:
    // 0x3cfe18: 0xc7a30084  lwc1        $f3, 0x84($sp)
    ctx->pc = 0x3cfe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cfe1c:
    // 0x3cfe1c: 0xc6a4004c  lwc1        $f4, 0x4C($s5)
    ctx->pc = 0x3cfe1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3cfe20:
    // 0x3cfe20: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3cfe20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3cfe24:
    // 0x3cfe24: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x3cfe24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cfe28:
    // 0x3cfe28: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3cfe28u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3cfe2c:
    // 0x3cfe2c: 0xc6a00050  lwc1        $f0, 0x50($s5)
    ctx->pc = 0x3cfe2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cfe30:
    // 0x3cfe30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3cfe30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cfe34:
    // 0x3cfe34: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3cfe34u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_3cfe38:
    // 0x3cfe38: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3cfe38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3cfe3c:
    // 0x3cfe3c: 0xe6220014  swc1        $f2, 0x14($s1)
    ctx->pc = 0x3cfe3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_3cfe40:
    // 0x3cfe40: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3cfe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cfe44:
    // 0x3cfe44: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x3cfe44u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_3cfe48:
    // 0x3cfe48: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x3cfe48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cfe4c:
    // 0x3cfe4c: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x3cfe4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cfe50:
    // 0x3cfe50: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x3cfe50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cfe54:
    // 0x3cfe54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3cfe54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cfe58:
    // 0x3cfe58: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x3cfe58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_3cfe5c:
    // 0x3cfe5c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3cfe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cfe60:
    // 0x3cfe60: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x3cfe60u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_3cfe64:
    // 0x3cfe64: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3cfe64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3cfe68:
    // 0x3cfe68: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x3cfe68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3cfe6c:
    // 0x3cfe6c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3cfe6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cfe70:
    // 0x3cfe70: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x3cfe70u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_3cfe74:
    // 0x3cfe74: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3cfe74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3cfe78:
    // 0x3cfe78: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x3cfe78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3cfe7c:
    // 0x3cfe7c: 0x6ba40073  ldl         $a0, 0x73($sp)
    ctx->pc = 0x3cfe7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3cfe80:
    // 0x3cfe80: 0x6fa4006c  ldr         $a0, 0x6C($sp)
    ctx->pc = 0x3cfe80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3cfe84:
    // 0x3cfe84: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x3cfe84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_3cfe88:
    // 0x3cfe88: 0xb224000b  sdl         $a0, 0xB($s1)
    ctx->pc = 0x3cfe88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cfe8c:
    // 0x3cfe8c: 0xb6240004  sdr         $a0, 0x4($s1)
    ctx->pc = 0x3cfe8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cfe90:
    // 0x3cfe90: 0xae25000c  sw          $a1, 0xC($s1)
    ctx->pc = 0x3cfe90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
label_3cfe94:
    // 0x3cfe94: 0x8fb300e8  lw          $s3, 0xE8($sp)
    ctx->pc = 0x3cfe94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_3cfe98:
    // 0x3cfe98: 0xc10376a  jal         func_40DDA8
label_3cfe9c:
    if (ctx->pc == 0x3CFE9Cu) {
        ctx->pc = 0x3CFE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFE98u;
        // 0x3cfe9c: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFEA0u;
        goto label_3cfea0;
    }
    ctx->pc = 0x3CFE98u;
    SET_GPR_U32(ctx, 31, 0x3CFEA0u);
    ctx->pc = 0x3CFE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFE98u;
    // 0x3cfe9c: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3CFE98u, 0x3CFEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFEA0u;
label_3cfea0:
    // 0x3cfea0: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x3cfea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3cfea4:
    // 0x3cfea4: 0x1440ff74  bnez        $v0, . + 4 + (-0x8C << 2)
label_3cfea8:
    if (ctx->pc == 0x3CFEA8u) {
        ctx->pc = 0x3CFEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFEA4u;
        // 0x3cfea8: 0x8fa800d4  lw          $t0, 0xD4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFEACu;
        goto label_3cfeac;
    }
    ctx->pc = 0x3CFEA4u;
    {
        const bool branch_taken_0x3cfea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CFEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFEA4u;
        // 0x3cfea8: 0x8fa800d4  lw          $t0, 0xD4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfea4) {
            ctx->pc = 0x3CFC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cfc78;
        }
    }
    ctx->pc = 0x3CFEACu;
label_3cfeac:
    // 0x3cfeac: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x3cfeacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_3cfeb0:
    // 0x3cfeb0: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x3cfeb0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_3cfeb4:
    // 0x3cfeb4: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x3cfeb4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_3cfeb8:
    // 0x3cfeb8: 0x2e8102a  slt         $v0, $s7, $t0
    ctx->pc = 0x3cfeb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_3cfebc:
    // 0x3cfebc: 0x1440ff6a  bnez        $v0, . + 4 + (-0x96 << 2)
label_3cfec0:
    if (ctx->pc == 0x3CFEC0u) {
        ctx->pc = 0x3CFEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFEBCu;
        // 0x3cfec0: 0x26b5000c  addiu       $s5, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFEC4u;
        goto label_3cfec4;
    }
    ctx->pc = 0x3CFEBCu;
    {
        const bool branch_taken_0x3cfebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CFEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFEBCu;
        // 0x3cfec0: 0x26b5000c  addiu       $s5, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfebc) {
            ctx->pc = 0x3CFC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cfc68;
        }
    }
    ctx->pc = 0x3CFEC4u;
label_3cfec4:
    // 0x3cfec4: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x3cfec4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
label_3cfec8:
    // 0x3cfec8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cfec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cfecc:
    // 0x3cfecc: 0x2543e880  addiu       $v1, $t2, -0x1780
    ctx->pc = 0x3cfeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294961280));
label_3cfed0:
    // 0x3cfed0: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x3cfed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_3cfed4:
    // 0x3cfed4: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3cfed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3cfed8:
    // 0x3cfed8: 0x40f809  jalr        $v0
label_3cfedc:
    if (ctx->pc == 0x3CFEDCu) {
        ctx->pc = 0x3CFEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFED8u;
        // 0x3cfedc: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFEE0u;
        goto label_3cfee0;
    }
    ctx->pc = 0x3CFED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CFEE0u);
        ctx->pc = 0x3CFEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFED8u;
        // 0x3cfedc: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CFED8u, 0x3CFEE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CFEE0u;
label_3cfee0:
    // 0x3cfee0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3cfee0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cfee4:
    // 0x3cfee4: 0x27b70018  addiu       $s7, $sp, 0x18
    ctx->pc = 0x3cfee4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_3cfee8:
    // 0x3cfee8: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x3cfee8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3cfeec:
    // 0x3cfeec: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x3cfeecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cfef0:
    // 0x3cfef0: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x3cfef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cfef4:
    // 0x3cfef4: 0x0  nop
    ctx->pc = 0x3cfef4u;
    // NOP
label_3cfef8:
    // 0x3cfef8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3cfef8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cfefc:
    // 0x3cfefc: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x3cfefcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cff00:
    // 0x3cff00: 0x10000006  b           . + 4 + (0x6 << 2)
label_3cff04:
    if (ctx->pc == 0x3CFF04u) {
        ctx->pc = 0x3CFF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFF00u;
        // 0x3cff04: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFF08u;
        goto label_3cff08;
    }
    ctx->pc = 0x3CFF00u;
    {
        const bool branch_taken_0x3cff00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CFF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFF00u;
        // 0x3cff04: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cff00) {
            ctx->pc = 0x3CFF1Cu;
            goto label_3cff1c;
        }
    }
    ctx->pc = 0x3CFF08u;
label_3cff08:
    // 0x3cff08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3cff08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cff0c:
    // 0x3cff0c: 0xc1036da  jal         func_40DB68
label_3cff10:
    if (ctx->pc == 0x3CFF10u) {
        ctx->pc = 0x3CFF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFF0Cu;
        // 0x3cff10: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFF14u;
        goto label_3cff14;
    }
    ctx->pc = 0x3CFF0Cu;
    SET_GPR_U32(ctx, 31, 0x3CFF14u);
    ctx->pc = 0x3CFF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFF0Cu;
    // 0x3cff10: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3CFF0Cu, 0x3CFF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFF14u;
label_3cff14:
    // 0x3cff14: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3cff14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3cff18:
    // 0x3cff18: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3cff18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3cff1c:
    // 0x3cff1c: 0xc10376a  jal         func_40DDA8
label_3cff20:
    if (ctx->pc == 0x3CFF20u) {
        ctx->pc = 0x3CFF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFF1Cu;
        // 0x3cff20: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFF24u;
        goto label_3cff24;
    }
    ctx->pc = 0x3CFF1Cu;
    SET_GPR_U32(ctx, 31, 0x3CFF24u);
    ctx->pc = 0x3CFF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFF1Cu;
    // 0x3cff20: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3CFF1Cu, 0x3CFF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFF24u;
label_3cff24:
    // 0x3cff24: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x3cff24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3cff28:
    // 0x3cff28: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_3cff2c:
    if (ctx->pc == 0x3CFF2Cu) {
        ctx->pc = 0x3CFF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFF28u;
        // 0x3cff2c: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFF30u;
        goto label_3cff30;
    }
    ctx->pc = 0x3CFF28u;
    {
        const bool branch_taken_0x3cff28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cff28) {
            ctx->pc = 0x3CFF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CFF28u;
            // 0x3cff2c: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CFF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cff08;
        }
    }
    ctx->pc = 0x3CFF30u;
label_3cff30:
    // 0x3cff30: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3cff30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3cff34:
    // 0x3cff34: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3cff34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3cff38:
    // 0x3cff38: 0xc10376a  jal         func_40DDA8
label_3cff3c:
    if (ctx->pc == 0x3CFF3Cu) {
        ctx->pc = 0x3CFF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFF38u;
        // 0x3cff3c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFF40u;
        goto label_3cff40;
    }
    ctx->pc = 0x3CFF38u;
    SET_GPR_U32(ctx, 31, 0x3CFF40u);
    ctx->pc = 0x3CFF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFF38u;
    // 0x3cff3c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3CFF38u, 0x3CFF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFF40u;
label_3cff40:
    // 0x3cff40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3cff40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3cff44:
    // 0x3cff44: 0x257182a  slt         $v1, $s2, $s7
    ctx->pc = 0x3cff44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_3cff48:
    // 0x3cff48: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_3cff4c:
    if (ctx->pc == 0x3CFF4Cu) {
        ctx->pc = 0x3CFF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFF48u;
        // 0x3cff4c: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFF50u;
        goto label_3cff50;
    }
    ctx->pc = 0x3CFF48u;
    {
        const bool branch_taken_0x3cff48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CFF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFF48u;
        // 0x3cff4c: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cff48) {
            ctx->pc = 0x3CFEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cfef8;
        }
    }
    ctx->pc = 0x3CFF50u;
label_3cff50:
    // 0x3cff50: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x3cff50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_3cff54:
    // 0x3cff54: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x3cff54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
label_3cff58:
    // 0x3cff58: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3cff58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3cff5c:
    // 0x3cff5c: 0x24e71e78  addiu       $a3, $a3, 0x1E78
    ctx->pc = 0x3cff5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7800));
label_3cff60:
    // 0x3cff60: 0xc0bbc9c  jal         func_2EF270
label_3cff64:
    if (ctx->pc == 0x3CFF64u) {
        ctx->pc = 0x3CFF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFF60u;
        // 0x3cff64: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFF68u;
        goto label_3cff68;
    }
    ctx->pc = 0x3CFF60u;
    SET_GPR_U32(ctx, 31, 0x3CFF68u);
    ctx->pc = 0x3CFF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFF60u;
    // 0x3cff64: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF270u, 0x3CFF60u, 0x3CFF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFF68u;
label_3cff68:
    // 0x3cff68: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x3cff68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_3cff6c:
    // 0x3cff6c: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x3cff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_3cff70:
    // 0x3cff70: 0x3c0b0062  lui         $t3, 0x62
    ctx->pc = 0x3cff70u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)98 << 16));
label_3cff74:
    // 0x3cff74: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3cff74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3cff78:
    // 0x3cff78: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x3cff78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3cff7c:
    // 0x3cff7c: 0x2563e880  addiu       $v1, $t3, -0x1780
    ctx->pc = 0x3cff7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961280));
label_3cff80:
    // 0x3cff80: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3cff80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3cff84:
    // 0x3cff84: 0x2012  mflo        $a0
    ctx->pc = 0x3cff84u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_3cff88:
    // 0x3cff88: 0x40f809  jalr        $v0
label_3cff8c:
    if (ctx->pc == 0x3CFF8Cu) {
        ctx->pc = 0x3CFF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFF88u;
        // 0x3cff8c: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFF90u;
        goto label_3cff90;
    }
    ctx->pc = 0x3CFF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CFF90u);
        ctx->pc = 0x3CFF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFF88u;
        // 0x3cff8c: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CFF88u, 0x3CFF90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CFF90u;
label_3cff90:
    // 0x3cff90: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x3cff90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_3cff94:
    // 0x3cff94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3cff94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cff98:
    // 0x3cff98: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3cff98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_3cff9c:
    // 0x3cff9c: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x3cff9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_3cffa0:
    // 0x3cffa0: 0x18a000e3  blez        $a1, . + 4 + (0xE3 << 2)
label_3cffa4:
    if (ctx->pc == 0x3CFFA4u) {
        ctx->pc = 0x3CFFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFFA0u;
        // 0x3cffa4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFFA8u;
        goto label_3cffa8;
    }
    ctx->pc = 0x3CFFA0u;
    {
        const bool branch_taken_0x3cffa0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3CFFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFFA0u;
        // 0x3cffa4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cffa0) {
            ctx->pc = 0x3D0330u;
            goto label_3d0330;
        }
    }
    ctx->pc = 0x3CFFA8u;
label_3cffa8:
    // 0x3cffa8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3cffa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3cffac:
    // 0x3cffac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cffacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cffb0:
    // 0x3cffb0: 0x101023  negu        $v0, $s0
    ctx->pc = 0x3cffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_3cffb4:
    // 0x3cffb4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3cffb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cffb8:
    // 0x3cffb8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3cffb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3cffbc:
    // 0x3cffbc: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
label_3cffc0:
    if (ctx->pc == 0x3CFFC0u) {
        ctx->pc = 0x3CFFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFFBCu;
        // 0x3cffc0: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFFC4u;
        goto label_3cffc4;
    }
    ctx->pc = 0x3CFFBCu;
    {
        const bool branch_taken_0x3cffbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CFFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFFBCu;
        // 0x3cffc0: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cffbc) {
            ctx->pc = 0x3D0150u;
            goto label_3d0150;
        }
    }
    ctx->pc = 0x3CFFC4u;
label_3cffc4:
    // 0x3cffc4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3cffc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3cffc8:
    // 0x3cffc8: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_3cffcc:
    if (ctx->pc == 0x3CFFCCu) {
        ctx->pc = 0x3CFFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFFC8u;
        // 0x3cffcc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFFD0u;
        goto label_3cffd0;
    }
    ctx->pc = 0x3CFFC8u;
    {
        const bool branch_taken_0x3cffc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CFFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFFC8u;
        // 0x3cffcc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cffc8) {
            ctx->pc = 0x3D00CCu;
            goto label_3d00cc;
        }
    }
    ctx->pc = 0x3CFFD0u;
label_3cffd0:
    // 0x3cffd0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3cffd4:
    if (ctx->pc == 0x3CFFD4u) {
        ctx->pc = 0x3CFFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFFD0u;
        // 0x3cffd4: 0x8fa300a4  lw          $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CFFD8u;
        goto label_3cffd8;
    }
    ctx->pc = 0x3CFFD0u;
    {
        const bool branch_taken_0x3cffd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CFFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFFD0u;
        // 0x3cffd4: 0x8fa300a4  lw          $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cffd0) {
            ctx->pc = 0x3D0050u;
            goto label_3d0050;
        }
    }
    ctx->pc = 0x3CFFD8u;
label_3cffd8:
    // 0x3cffd8: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x3cffd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3cffdc:
    // 0x3cffdc: 0x26c80004  addiu       $t0, $s6, 0x4
    ctx->pc = 0x3cffdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_3cffe0:
    // 0x3cffe0: 0x2409002c  addiu       $t1, $zero, 0x2C
    ctx->pc = 0x3cffe0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_3cffe4:
    // 0x3cffe4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3cffe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3cffe8:
    // 0x3cffe8: 0x68e60007  ldl         $a2, 0x7($a3)
    ctx->pc = 0x3cffe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3cffec:
    // 0x3cffec: 0x6ce60000  ldr         $a2, 0x0($a3)
    ctx->pc = 0x3cffecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3cfff0:
    // 0x3cfff0: 0x68ea000f  ldl         $t2, 0xF($a3)
    ctx->pc = 0x3cfff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_3cfff4:
    // 0x3cfff4: 0x6cea0008  ldr         $t2, 0x8($a3)
    ctx->pc = 0x3cfff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_3cfff8:
    // 0x3cfff8: 0x68eb0017  ldl         $t3, 0x17($a3)
    ctx->pc = 0x3cfff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3cfffc:
    // 0x3cfffc: 0x6ceb0010  ldr         $t3, 0x10($a3)
    ctx->pc = 0x3cfffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3d0000:
    // 0x3d0000: 0x68ec001f  ldl         $t4, 0x1F($a3)
    ctx->pc = 0x3d0000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_3d0004:
    // 0x3d0004: 0x6cec0018  ldr         $t4, 0x18($a3)
    ctx->pc = 0x3d0004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3d0008:
    // 0x3d0008: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x3d0008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d000c:
    // 0x3d000c: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x3d000cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0010:
    // 0x3d0010: 0xb08a000f  sdl         $t2, 0xF($a0)
    ctx->pc = 0x3d0010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0014:
    // 0x3d0014: 0xb48a0008  sdr         $t2, 0x8($a0)
    ctx->pc = 0x3d0014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0018:
    // 0x3d0018: 0xb08b0017  sdl         $t3, 0x17($a0)
    ctx->pc = 0x3d0018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d001c:
    // 0x3d001c: 0xb48b0010  sdr         $t3, 0x10($a0)
    ctx->pc = 0x3d001cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0020:
    // 0x3d0020: 0xb08c001f  sdl         $t4, 0x1F($a0)
    ctx->pc = 0x3d0020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0024:
    // 0x3d0024: 0xb48c0018  sdr         $t4, 0x18($a0)
    ctx->pc = 0x3d0024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0028:
    // 0x3d0028: 0x68e60027  ldl         $a2, 0x27($a3)
    ctx->pc = 0x3d0028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3d002c:
    // 0x3d002c: 0x6ce60020  ldr         $a2, 0x20($a3)
    ctx->pc = 0x3d002cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3d0030:
    // 0x3d0030: 0x8cea0028  lw          $t2, 0x28($a3)
    ctx->pc = 0x3d0030u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_3d0034:
    // 0x3d0034: 0xb0860027  sdl         $a2, 0x27($a0)
    ctx->pc = 0x3d0034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0038:
    // 0x3d0038: 0xb4860020  sdr         $a2, 0x20($a0)
    ctx->pc = 0x3d0038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d003c:
    // 0x3d003c: 0xac8a0028  sw          $t2, 0x28($a0)
    ctx->pc = 0x3d003cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 10));
label_3d0040:
    // 0x3d0040: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x3d0040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_3d0044:
    // 0x3d0044: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3d0044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d0048:
    // 0x3d0048: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x3d0048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_3d004c:
    // 0x3d004c: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x3d004cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_3d0050:
    // 0x3d0050: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3d0050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3d0054:
    // 0x3d0054: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x3d0054u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3d0058:
    // 0x3d0058: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3d0058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d005c:
    // 0x3d005c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3d005cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_3d0060:
    // 0x3d0060: 0x1242821  addu        $a1, $t1, $a0
    ctx->pc = 0x3d0060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_3d0064:
    // 0x3d0064: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x3d0064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3d0068:
    // 0x3d0068: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x3d0068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3d006c:
    // 0x3d006c: 0x68e6000f  ldl         $a2, 0xF($a3)
    ctx->pc = 0x3d006cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3d0070:
    // 0x3d0070: 0x6ce60008  ldr         $a2, 0x8($a3)
    ctx->pc = 0x3d0070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3d0074:
    // 0x3d0074: 0x68ea0017  ldl         $t2, 0x17($a3)
    ctx->pc = 0x3d0074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_3d0078:
    // 0x3d0078: 0x6cea0010  ldr         $t2, 0x10($a3)
    ctx->pc = 0x3d0078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_3d007c:
    // 0x3d007c: 0x68eb001f  ldl         $t3, 0x1F($a3)
    ctx->pc = 0x3d007cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3d0080:
    // 0x3d0080: 0x6ceb0018  ldr         $t3, 0x18($a3)
    ctx->pc = 0x3d0080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3d0084:
    // 0x3d0084: 0xb0a40007  sdl         $a0, 0x7($a1)
    ctx->pc = 0x3d0084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0088:
    // 0x3d0088: 0xb4a40000  sdr         $a0, 0x0($a1)
    ctx->pc = 0x3d0088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d008c:
    // 0x3d008c: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x3d008cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0090:
    // 0x3d0090: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x3d0090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0094:
    // 0x3d0094: 0xb0aa0017  sdl         $t2, 0x17($a1)
    ctx->pc = 0x3d0094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0098:
    // 0x3d0098: 0xb4aa0010  sdr         $t2, 0x10($a1)
    ctx->pc = 0x3d0098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d009c:
    // 0x3d009c: 0xb0ab001f  sdl         $t3, 0x1F($a1)
    ctx->pc = 0x3d009cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d00a0:
    // 0x3d00a0: 0xb4ab0018  sdr         $t3, 0x18($a1)
    ctx->pc = 0x3d00a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d00a4:
    // 0x3d00a4: 0x68e40027  ldl         $a0, 0x27($a3)
    ctx->pc = 0x3d00a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3d00a8:
    // 0x3d00a8: 0x6ce40020  ldr         $a0, 0x20($a3)
    ctx->pc = 0x3d00a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3d00ac:
    // 0x3d00ac: 0x8ce60028  lw          $a2, 0x28($a3)
    ctx->pc = 0x3d00acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_3d00b0:
    // 0x3d00b0: 0xb0a40027  sdl         $a0, 0x27($a1)
    ctx->pc = 0x3d00b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d00b4:
    // 0x3d00b4: 0xb4a40020  sdr         $a0, 0x20($a1)
    ctx->pc = 0x3d00b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d00b8:
    // 0x3d00b8: 0xaca60028  sw          $a2, 0x28($a1)
    ctx->pc = 0x3d00b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 6));
label_3d00bc:
    // 0x3d00bc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3d00bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d00c0:
    // 0x3d00c0: 0x1253021  addu        $a2, $t1, $a1
    ctx->pc = 0x3d00c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_3d00c4:
    // 0x3d00c4: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x3d00c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_3d00c8:
    // 0x3d00c8: 0x2529002c  addiu       $t1, $t1, 0x2C
    ctx->pc = 0x3d00c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 44));
label_3d00cc:
    // 0x3d00cc: 0x8fac00a4  lw          $t4, 0xA4($sp)
    ctx->pc = 0x3d00ccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_3d00d0:
    // 0x3d00d0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3d00d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3d00d4:
    // 0x3d00d4: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x3d00d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3d00d8:
    // 0x3d00d8: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x3d00d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_3d00dc:
    // 0x3d00dc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3d00dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_3d00e0:
    // 0x3d00e0: 0x1242821  addu        $a1, $t1, $a0
    ctx->pc = 0x3d00e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_3d00e4:
    // 0x3d00e4: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x3d00e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3d00e8:
    // 0x3d00e8: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x3d00e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3d00ec:
    // 0x3d00ec: 0x68e3000f  ldl         $v1, 0xF($a3)
    ctx->pc = 0x3d00ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3d00f0:
    // 0x3d00f0: 0x6ce30008  ldr         $v1, 0x8($a3)
    ctx->pc = 0x3d00f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3d00f4:
    // 0x3d00f4: 0x68e40017  ldl         $a0, 0x17($a3)
    ctx->pc = 0x3d00f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3d00f8:
    // 0x3d00f8: 0x6ce40010  ldr         $a0, 0x10($a3)
    ctx->pc = 0x3d00f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3d00fc:
    // 0x3d00fc: 0x68e6001f  ldl         $a2, 0x1F($a3)
    ctx->pc = 0x3d00fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3d0100:
    // 0x3d0100: 0x6ce60018  ldr         $a2, 0x18($a3)
    ctx->pc = 0x3d0100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3d0104:
    // 0x3d0104: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x3d0104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0108:
    // 0x3d0108: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x3d0108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d010c:
    // 0x3d010c: 0xb0a3000f  sdl         $v1, 0xF($a1)
    ctx->pc = 0x3d010cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0110:
    // 0x3d0110: 0xb4a30008  sdr         $v1, 0x8($a1)
    ctx->pc = 0x3d0110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0114:
    // 0x3d0114: 0xb0a40017  sdl         $a0, 0x17($a1)
    ctx->pc = 0x3d0114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0118:
    // 0x3d0118: 0xb4a40010  sdr         $a0, 0x10($a1)
    ctx->pc = 0x3d0118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d011c:
    // 0x3d011c: 0xb0a6001f  sdl         $a2, 0x1F($a1)
    ctx->pc = 0x3d011cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0120:
    // 0x3d0120: 0xb4a60018  sdr         $a2, 0x18($a1)
    ctx->pc = 0x3d0120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0124:
    // 0x3d0124: 0x68e20027  ldl         $v0, 0x27($a3)
    ctx->pc = 0x3d0124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3d0128:
    // 0x3d0128: 0x6ce20020  ldr         $v0, 0x20($a3)
    ctx->pc = 0x3d0128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3d012c:
    // 0x3d012c: 0x8ce30028  lw          $v1, 0x28($a3)
    ctx->pc = 0x3d012cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_3d0130:
    // 0x3d0130: 0xb0a20027  sdl         $v0, 0x27($a1)
    ctx->pc = 0x3d0130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0134:
    // 0x3d0134: 0xb4a20020  sdr         $v0, 0x20($a1)
    ctx->pc = 0x3d0134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0138:
    // 0x3d0138: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x3d0138u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
label_3d013c:
    // 0x3d013c: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x3d013cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_3d0140:
    // 0x3d0140: 0x1253021  addu        $a2, $t1, $a1
    ctx->pc = 0x3d0140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_3d0144:
    // 0x3d0144: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x3d0144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_3d0148:
    // 0x3d0148: 0x12000079  beqz        $s0, . + 4 + (0x79 << 2)
label_3d014c:
    if (ctx->pc == 0x3D014Cu) {
        ctx->pc = 0x3D014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0148u;
        // 0x3d014c: 0x2529002c  addiu       $t1, $t1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0150u;
        goto label_3d0150;
    }
    ctx->pc = 0x3D0148u;
    {
        const bool branch_taken_0x3d0148 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0148u;
        // 0x3d014c: 0x2529002c  addiu       $t1, $t1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0148) {
            ctx->pc = 0x3D0330u;
            goto label_3d0330;
        }
    }
    ctx->pc = 0x3D0150u;
label_3d0150:
    // 0x3d0150: 0x8fa700a4  lw          $a3, 0xA4($sp)
    ctx->pc = 0x3d0150u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_3d0154:
    // 0x3d0154: 0x2522002c  addiu       $v0, $t1, 0x2C
    ctx->pc = 0x3d0154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 44));
label_3d0158:
    // 0x3d0158: 0x25230058  addiu       $v1, $t1, 0x58
    ctx->pc = 0x3d0158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 88));
label_3d015c:
    // 0x3d015c: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x3d015cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_3d0160:
    // 0x3d0160: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x3d0160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d0164:
    // 0x3d0164: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x3d0164u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3d0168:
    // 0x3d0168: 0x1242821  addu        $a1, $t1, $a0
    ctx->pc = 0x3d0168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_3d016c:
    // 0x3d016c: 0x68ea0007  ldl         $t2, 0x7($a3)
    ctx->pc = 0x3d016cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_3d0170:
    // 0x3d0170: 0x6cea0000  ldr         $t2, 0x0($a3)
    ctx->pc = 0x3d0170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_3d0174:
    // 0x3d0174: 0x68eb000f  ldl         $t3, 0xF($a3)
    ctx->pc = 0x3d0174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3d0178:
    // 0x3d0178: 0x6ceb0008  ldr         $t3, 0x8($a3)
    ctx->pc = 0x3d0178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3d017c:
    // 0x3d017c: 0x68ec0017  ldl         $t4, 0x17($a3)
    ctx->pc = 0x3d017cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_3d0180:
    // 0x3d0180: 0x6cec0010  ldr         $t4, 0x10($a3)
    ctx->pc = 0x3d0180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3d0184:
    // 0x3d0184: 0x68e6001f  ldl         $a2, 0x1F($a3)
    ctx->pc = 0x3d0184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3d0188:
    // 0x3d0188: 0x6ce60018  ldr         $a2, 0x18($a3)
    ctx->pc = 0x3d0188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3d018c:
    // 0x3d018c: 0xb0aa0007  sdl         $t2, 0x7($a1)
    ctx->pc = 0x3d018cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0190:
    // 0x3d0190: 0xb4aa0000  sdr         $t2, 0x0($a1)
    ctx->pc = 0x3d0190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0194:
    // 0x3d0194: 0xb0ab000f  sdl         $t3, 0xF($a1)
    ctx->pc = 0x3d0194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0198:
    // 0x3d0198: 0xb4ab0008  sdr         $t3, 0x8($a1)
    ctx->pc = 0x3d0198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d019c:
    // 0x3d019c: 0xb0ac0017  sdl         $t4, 0x17($a1)
    ctx->pc = 0x3d019cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d01a0:
    // 0x3d01a0: 0xb4ac0010  sdr         $t4, 0x10($a1)
    ctx->pc = 0x3d01a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d01a4:
    // 0x3d01a4: 0xb0a6001f  sdl         $a2, 0x1F($a1)
    ctx->pc = 0x3d01a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d01a8:
    // 0x3d01a8: 0xb4a60018  sdr         $a2, 0x18($a1)
    ctx->pc = 0x3d01a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d01ac:
    // 0x3d01ac: 0x68ea0027  ldl         $t2, 0x27($a3)
    ctx->pc = 0x3d01acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_3d01b0:
    // 0x3d01b0: 0x6cea0020  ldr         $t2, 0x20($a3)
    ctx->pc = 0x3d01b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_3d01b4:
    // 0x3d01b4: 0x8ceb0028  lw          $t3, 0x28($a3)
    ctx->pc = 0x3d01b4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_3d01b8:
    // 0x3d01b8: 0xb0aa0027  sdl         $t2, 0x27($a1)
    ctx->pc = 0x3d01b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d01bc:
    // 0x3d01bc: 0xb4aa0020  sdr         $t2, 0x20($a1)
    ctx->pc = 0x3d01bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d01c0:
    // 0x3d01c0: 0x25240084  addiu       $a0, $t1, 0x84
    ctx->pc = 0x3d01c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 132));
label_3d01c4:
    // 0x3d01c4: 0xacab0028  sw          $t3, 0x28($a1)
    ctx->pc = 0x3d01c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 11));
label_3d01c8:
    // 0x3d01c8: 0x8faa00a4  lw          $t2, 0xA4($sp)
    ctx->pc = 0x3d01c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_3d01cc:
    // 0x3d01cc: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x3d01ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_3d01d0:
    // 0x3d01d0: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x3d01d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_3d01d4:
    // 0x3d01d4: 0x1253021  addu        $a2, $t1, $a1
    ctx->pc = 0x3d01d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_3d01d8:
    // 0x3d01d8: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x3d01d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_3d01dc:
    // 0x3d01dc: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x3d01dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3d01e0:
    // 0x3d01e0: 0x68eb0007  ldl         $t3, 0x7($a3)
    ctx->pc = 0x3d01e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3d01e4:
    // 0x3d01e4: 0x6ceb0000  ldr         $t3, 0x0($a3)
    ctx->pc = 0x3d01e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3d01e8:
    // 0x3d01e8: 0x68ec000f  ldl         $t4, 0xF($a3)
    ctx->pc = 0x3d01e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_3d01ec:
    // 0x3d01ec: 0x6cec0008  ldr         $t4, 0x8($a3)
    ctx->pc = 0x3d01ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3d01f0:
    // 0x3d01f0: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x3d01f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3d01f4:
    // 0x3d01f4: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x3d01f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3d01f8:
    // 0x3d01f8: 0x68ea001f  ldl         $t2, 0x1F($a3)
    ctx->pc = 0x3d01f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_3d01fc:
    // 0x3d01fc: 0x6cea0018  ldr         $t2, 0x18($a3)
    ctx->pc = 0x3d01fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_3d0200:
    // 0x3d0200: 0xb0ab0007  sdl         $t3, 0x7($a1)
    ctx->pc = 0x3d0200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0204:
    // 0x3d0204: 0xb4ab0000  sdr         $t3, 0x0($a1)
    ctx->pc = 0x3d0204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0208:
    // 0x3d0208: 0xb0ac000f  sdl         $t4, 0xF($a1)
    ctx->pc = 0x3d0208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d020c:
    // 0x3d020c: 0xb4ac0008  sdr         $t4, 0x8($a1)
    ctx->pc = 0x3d020cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0210:
    // 0x3d0210: 0xb0a60017  sdl         $a2, 0x17($a1)
    ctx->pc = 0x3d0210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0214:
    // 0x3d0214: 0xb4a60010  sdr         $a2, 0x10($a1)
    ctx->pc = 0x3d0214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0218:
    // 0x3d0218: 0xb0aa001f  sdl         $t2, 0x1F($a1)
    ctx->pc = 0x3d0218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d021c:
    // 0x3d021c: 0xb4aa0018  sdr         $t2, 0x18($a1)
    ctx->pc = 0x3d021cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0220:
    // 0x3d0220: 0x68eb0027  ldl         $t3, 0x27($a3)
    ctx->pc = 0x3d0220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3d0224:
    // 0x3d0224: 0x6ceb0020  ldr         $t3, 0x20($a3)
    ctx->pc = 0x3d0224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3d0228:
    // 0x3d0228: 0x8cec0028  lw          $t4, 0x28($a3)
    ctx->pc = 0x3d0228u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_3d022c:
    // 0x3d022c: 0xb0ab0027  sdl         $t3, 0x27($a1)
    ctx->pc = 0x3d022cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0230:
    // 0x3d0230: 0xb4ab0020  sdr         $t3, 0x20($a1)
    ctx->pc = 0x3d0230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0234:
    // 0x3d0234: 0x252900b0  addiu       $t1, $t1, 0xB0
    ctx->pc = 0x3d0234u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 176));
label_3d0238:
    // 0x3d0238: 0xacac0028  sw          $t4, 0x28($a1)
    ctx->pc = 0x3d0238u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 12));
label_3d023c:
    // 0x3d023c: 0x8fab00a4  lw          $t3, 0xA4($sp)
    ctx->pc = 0x3d023cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_3d0240:
    // 0x3d0240: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x3d0240u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_3d0244:
    // 0x3d0244: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x3d0244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_3d0248:
    // 0x3d0248: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x3d0248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3d024c:
    // 0x3d024c: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x3d024cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_3d0250:
    // 0x3d0250: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x3d0250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3d0254:
    // 0x3d0254: 0x68ec0007  ldl         $t4, 0x7($a3)
    ctx->pc = 0x3d0254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_3d0258:
    // 0x3d0258: 0x6cec0000  ldr         $t4, 0x0($a3)
    ctx->pc = 0x3d0258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3d025c:
    // 0x3d025c: 0x68e2000f  ldl         $v0, 0xF($a3)
    ctx->pc = 0x3d025cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3d0260:
    // 0x3d0260: 0x6ce20008  ldr         $v0, 0x8($a3)
    ctx->pc = 0x3d0260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3d0264:
    // 0x3d0264: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x3d0264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3d0268:
    // 0x3d0268: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x3d0268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3d026c:
    // 0x3d026c: 0x68ea001f  ldl         $t2, 0x1F($a3)
    ctx->pc = 0x3d026cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_3d0270:
    // 0x3d0270: 0x6cea0018  ldr         $t2, 0x18($a3)
    ctx->pc = 0x3d0270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_3d0274:
    // 0x3d0274: 0xb0ac0007  sdl         $t4, 0x7($a1)
    ctx->pc = 0x3d0274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0278:
    // 0x3d0278: 0xb4ac0000  sdr         $t4, 0x0($a1)
    ctx->pc = 0x3d0278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d027c:
    // 0x3d027c: 0xb0a2000f  sdl         $v0, 0xF($a1)
    ctx->pc = 0x3d027cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0280:
    // 0x3d0280: 0xb4a20008  sdr         $v0, 0x8($a1)
    ctx->pc = 0x3d0280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0284:
    // 0x3d0284: 0xb0a60017  sdl         $a2, 0x17($a1)
    ctx->pc = 0x3d0284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0288:
    // 0x3d0288: 0xb4a60010  sdr         $a2, 0x10($a1)
    ctx->pc = 0x3d0288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d028c:
    // 0x3d028c: 0xb0aa001f  sdl         $t2, 0x1F($a1)
    ctx->pc = 0x3d028cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0290:
    // 0x3d0290: 0xb4aa0018  sdr         $t2, 0x18($a1)
    ctx->pc = 0x3d0290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0294:
    // 0x3d0294: 0x68ec0027  ldl         $t4, 0x27($a3)
    ctx->pc = 0x3d0294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_3d0298:
    // 0x3d0298: 0x6cec0020  ldr         $t4, 0x20($a3)
    ctx->pc = 0x3d0298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3d029c:
    // 0x3d029c: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x3d029cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_3d02a0:
    // 0x3d02a0: 0xb0ac0027  sdl         $t4, 0x27($a1)
    ctx->pc = 0x3d02a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d02a4:
    // 0x3d02a4: 0xb4ac0020  sdr         $t4, 0x20($a1)
    ctx->pc = 0x3d02a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d02a8:
    // 0x3d02a8: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x3d02a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
label_3d02ac:
    // 0x3d02ac: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x3d02acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_3d02b0:
    // 0x3d02b0: 0x8d07000c  lw          $a3, 0xC($t0)
    ctx->pc = 0x3d02b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_3d02b4:
    // 0x3d02b4: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x3d02b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3d02b8:
    // 0x3d02b8: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x3d02b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_3d02bc:
    // 0x3d02bc: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x3d02bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_3d02c0:
    // 0x3d02c0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3d02c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3d02c4:
    // 0x3d02c4: 0x68eb0007  ldl         $t3, 0x7($a3)
    ctx->pc = 0x3d02c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3d02c8:
    // 0x3d02c8: 0x6ceb0000  ldr         $t3, 0x0($a3)
    ctx->pc = 0x3d02c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3d02cc:
    // 0x3d02cc: 0x68ec000f  ldl         $t4, 0xF($a3)
    ctx->pc = 0x3d02ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_3d02d0:
    // 0x3d02d0: 0x6cec0008  ldr         $t4, 0x8($a3)
    ctx->pc = 0x3d02d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3d02d4:
    // 0x3d02d4: 0x68e20017  ldl         $v0, 0x17($a3)
    ctx->pc = 0x3d02d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3d02d8:
    // 0x3d02d8: 0x6ce20010  ldr         $v0, 0x10($a3)
    ctx->pc = 0x3d02d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3d02dc:
    // 0x3d02dc: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x3d02dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3d02e0:
    // 0x3d02e0: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x3d02e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3d02e4:
    // 0x3d02e4: 0xb0ab0007  sdl         $t3, 0x7($a1)
    ctx->pc = 0x3d02e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d02e8:
    // 0x3d02e8: 0xb4ab0000  sdr         $t3, 0x0($a1)
    ctx->pc = 0x3d02e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d02ec:
    // 0x3d02ec: 0xb0ac000f  sdl         $t4, 0xF($a1)
    ctx->pc = 0x3d02ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d02f0:
    // 0x3d02f0: 0xb4ac0008  sdr         $t4, 0x8($a1)
    ctx->pc = 0x3d02f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d02f4:
    // 0x3d02f4: 0xb0a20017  sdl         $v0, 0x17($a1)
    ctx->pc = 0x3d02f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d02f8:
    // 0x3d02f8: 0xb4a20010  sdr         $v0, 0x10($a1)
    ctx->pc = 0x3d02f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d02fc:
    // 0x3d02fc: 0xb0a3001f  sdl         $v1, 0x1F($a1)
    ctx->pc = 0x3d02fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0300:
    // 0x3d0300: 0xb4a30018  sdr         $v1, 0x18($a1)
    ctx->pc = 0x3d0300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0304:
    // 0x3d0304: 0x68eb0027  ldl         $t3, 0x27($a3)
    ctx->pc = 0x3d0304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3d0308:
    // 0x3d0308: 0x6ceb0020  ldr         $t3, 0x20($a3)
    ctx->pc = 0x3d0308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3d030c:
    // 0x3d030c: 0x8cec0028  lw          $t4, 0x28($a3)
    ctx->pc = 0x3d030cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_3d0310:
    // 0x3d0310: 0xb0ab0027  sdl         $t3, 0x27($a1)
    ctx->pc = 0x3d0310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0314:
    // 0x3d0314: 0xb4ab0020  sdr         $t3, 0x20($a1)
    ctx->pc = 0x3d0314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3d0318:
    // 0x3d0318: 0xacac0028  sw          $t4, 0x28($a1)
    ctx->pc = 0x3d0318u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 12));
label_3d031c:
    // 0x3d031c: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x3d031cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_3d0320:
    // 0x3d0320: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x3d0320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3d0324:
    // 0x3d0324: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x3d0324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3d0328:
    // 0x3d0328: 0x1600ff89  bnez        $s0, . + 4 + (-0x77 << 2)
label_3d032c:
    if (ctx->pc == 0x3D032Cu) {
        ctx->pc = 0x3D032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0328u;
        // 0x3d032c: 0xe4c00018  swc1        $f0, 0x18($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0330u;
        goto label_3d0330;
    }
    ctx->pc = 0x3D0328u;
    {
        const bool branch_taken_0x3d0328 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0328u;
        // 0x3d032c: 0xe4c00018  swc1        $f0, 0x18($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0328) {
            ctx->pc = 0x3D0150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0150;
        }
    }
    ctx->pc = 0x3D0330u;
label_3d0330:
    // 0x3d0330: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x3d0330u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_3d0334:
    // 0x3d0334: 0x8faa00b8  lw          $t2, 0xB8($sp)
    ctx->pc = 0x3d0334u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_3d0338:
    // 0x3d0338: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x3d0338u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_3d033c:
    // 0x3d033c: 0x24e2e880  addiu       $v0, $a3, -0x1780
    ctx->pc = 0x3d033cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961280));
label_3d0340:
    // 0x3d0340: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x3d0340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_3d0344:
    // 0x3d0344: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3d0344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d0348:
    // 0x3d0348: 0x60f809  jalr        $v1
label_3d034c:
    if (ctx->pc == 0x3D034Cu) {
        ctx->pc = 0x3D034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0348u;
        // 0x3d034c: 0xad0a0000  sw          $t2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0350u;
        goto label_3d0350;
    }
    ctx->pc = 0x3D0348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D0350u);
        ctx->pc = 0x3D034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0348u;
        // 0x3d034c: 0xad0a0000  sw          $t2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0348u, 0x3D0350u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D0350u;
label_3d0350:
    // 0x3d0350: 0xc103684  jal         func_40DA10
label_3d0354:
    if (ctx->pc == 0x3D0354u) {
        ctx->pc = 0x3D0354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0350u;
        // 0x3d0354: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0358u;
        goto label_3d0358;
    }
    ctx->pc = 0x3D0350u;
    SET_GPR_U32(ctx, 31, 0x3D0358u);
    ctx->pc = 0x3D0354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0350u;
    // 0x3d0354: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3D0350u, 0x3D0358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0358u;
label_3d0358:
    // 0x3d0358: 0xc103684  jal         func_40DA10
label_3d035c:
    if (ctx->pc == 0x3D035Cu) {
        ctx->pc = 0x3D035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0358u;
        // 0x3d035c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0360u;
        goto label_3d0360;
    }
    ctx->pc = 0x3D0358u;
    SET_GPR_U32(ctx, 31, 0x3D0360u);
    ctx->pc = 0x3D035Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0358u;
    // 0x3d035c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3D0358u, 0x3D0360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0360u;
label_3d0360:
    // 0x3d0360: 0xc103684  jal         func_40DA10
label_3d0364:
    if (ctx->pc == 0x3D0364u) {
        ctx->pc = 0x3D0364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0360u;
        // 0x3d0364: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0368u;
        goto label_3d0368;
    }
    ctx->pc = 0x3D0360u;
    SET_GPR_U32(ctx, 31, 0x3D0368u);
    ctx->pc = 0x3D0364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0360u;
    // 0x3d0364: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3D0360u, 0x3D0368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0368u;
label_3d0368:
    // 0x3d0368: 0xc103684  jal         func_40DA10
label_3d036c:
    if (ctx->pc == 0x3D036Cu) {
        ctx->pc = 0x3D036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0368u;
        // 0x3d036c: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0370u;
        goto label_3d0370;
    }
    ctx->pc = 0x3D0368u;
    SET_GPR_U32(ctx, 31, 0x3D0370u);
    ctx->pc = 0x3D036Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0368u;
    // 0x3d036c: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3D0368u, 0x3D0370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0370u;
label_3d0370:
    // 0x3d0370: 0xc103684  jal         func_40DA10
label_3d0374:
    if (ctx->pc == 0x3D0374u) {
        ctx->pc = 0x3D0374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0370u;
        // 0x3d0374: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0378u;
        goto label_3d0378;
    }
    ctx->pc = 0x3D0370u;
    SET_GPR_U32(ctx, 31, 0x3D0378u);
    ctx->pc = 0x3D0374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0370u;
    // 0x3d0374: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3D0370u, 0x3D0378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0378u;
label_3d0378:
    // 0x3d0378: 0xc103684  jal         func_40DA10
label_3d037c:
    if (ctx->pc == 0x3D037Cu) {
        ctx->pc = 0x3D037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0378u;
        // 0x3d037c: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0380u;
        goto label_3d0380;
    }
    ctx->pc = 0x3D0378u;
    SET_GPR_U32(ctx, 31, 0x3D0380u);
    ctx->pc = 0x3D037Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0378u;
    // 0x3d037c: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3D0378u, 0x3D0380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0380u;
label_3d0380:
    // 0x3d0380: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x3d0380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_3d0384:
    // 0x3d0384: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x3d0384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_3d0388:
    // 0x3d0388: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x3d0388u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_3d038c:
    // 0x3d038c: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x3d038cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_3d0390:
    // 0x3d0390: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x3d0390u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_3d0394:
    // 0x3d0394: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x3d0394u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_3d0398:
    // 0x3d0398: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x3d0398u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_3d039c:
    // 0x3d039c: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x3d039cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_3d03a0:
    // 0x3d03a0: 0x7bbe0130  lq          $fp, 0x130($sp)
    ctx->pc = 0x3d03a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3d03a4:
    // 0x3d03a4: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x3d03a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_3d03a8:
    // 0x3d03a8: 0xc7b701d8  lwc1        $f23, 0x1D8($sp)
    ctx->pc = 0x3d03a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3d03ac:
    // 0x3d03ac: 0xc7b601d0  lwc1        $f22, 0x1D0($sp)
    ctx->pc = 0x3d03acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3d03b0:
    // 0x3d03b0: 0xc7b501c8  lwc1        $f21, 0x1C8($sp)
    ctx->pc = 0x3d03b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3d03b4:
    // 0x3d03b4: 0xc7b401c0  lwc1        $f20, 0x1C0($sp)
    ctx->pc = 0x3d03b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d03b8:
    // 0x3d03b8: 0x3e00008  jr          $ra
label_3d03bc:
    if (ctx->pc == 0x3D03BCu) {
        ctx->pc = 0x3D03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D03B8u;
        // 0x3d03bc: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D03C0u;
        goto label_fallthrough_0x3d03b8;
    }
    ctx->pc = 0x3D03B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D03B8u;
        // 0x3d03bc: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D03B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d03b8:
    ctx->pc = 0x3D03C0u;
}
