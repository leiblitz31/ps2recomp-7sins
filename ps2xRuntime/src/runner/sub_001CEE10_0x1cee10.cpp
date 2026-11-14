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

// Function: sub_001CEE10
// Address: 0x1cee10 - 0x1d12c0
void sub_001CEE10_0x1cee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEE10_0x1cee10");
#endif

    switch (ctx->pc) {
        case 0x1cee10u: goto label_1cee10;
        case 0x1cee14u: goto label_1cee14;
        case 0x1cee18u: goto label_1cee18;
        case 0x1cee1cu: goto label_1cee1c;
        case 0x1cee20u: goto label_1cee20;
        case 0x1cee24u: goto label_1cee24;
        case 0x1cee28u: goto label_1cee28;
        case 0x1cee2cu: goto label_1cee2c;
        case 0x1cee30u: goto label_1cee30;
        case 0x1cee34u: goto label_1cee34;
        case 0x1cee38u: goto label_1cee38;
        case 0x1cee3cu: goto label_1cee3c;
        case 0x1cee40u: goto label_1cee40;
        case 0x1cee44u: goto label_1cee44;
        case 0x1cee48u: goto label_1cee48;
        case 0x1cee4cu: goto label_1cee4c;
        case 0x1cee50u: goto label_1cee50;
        case 0x1cee54u: goto label_1cee54;
        case 0x1cee58u: goto label_1cee58;
        case 0x1cee5cu: goto label_1cee5c;
        case 0x1cee60u: goto label_1cee60;
        case 0x1cee64u: goto label_1cee64;
        case 0x1cee68u: goto label_1cee68;
        case 0x1cee6cu: goto label_1cee6c;
        case 0x1cee70u: goto label_1cee70;
        case 0x1cee74u: goto label_1cee74;
        case 0x1cee78u: goto label_1cee78;
        case 0x1cee7cu: goto label_1cee7c;
        case 0x1cee80u: goto label_1cee80;
        case 0x1cee84u: goto label_1cee84;
        case 0x1cee88u: goto label_1cee88;
        case 0x1cee8cu: goto label_1cee8c;
        case 0x1cee90u: goto label_1cee90;
        case 0x1cee94u: goto label_1cee94;
        case 0x1cee98u: goto label_1cee98;
        case 0x1cee9cu: goto label_1cee9c;
        case 0x1ceea0u: goto label_1ceea0;
        case 0x1ceea4u: goto label_1ceea4;
        case 0x1ceea8u: goto label_1ceea8;
        case 0x1ceeacu: goto label_1ceeac;
        case 0x1ceeb0u: goto label_1ceeb0;
        case 0x1ceeb4u: goto label_1ceeb4;
        case 0x1ceeb8u: goto label_1ceeb8;
        case 0x1ceebcu: goto label_1ceebc;
        case 0x1ceec0u: goto label_1ceec0;
        case 0x1ceec4u: goto label_1ceec4;
        case 0x1ceec8u: goto label_1ceec8;
        case 0x1ceeccu: goto label_1ceecc;
        case 0x1ceed0u: goto label_1ceed0;
        case 0x1ceed4u: goto label_1ceed4;
        case 0x1ceed8u: goto label_1ceed8;
        case 0x1ceedcu: goto label_1ceedc;
        case 0x1ceee0u: goto label_1ceee0;
        case 0x1ceee4u: goto label_1ceee4;
        case 0x1ceee8u: goto label_1ceee8;
        case 0x1ceeecu: goto label_1ceeec;
        case 0x1ceef0u: goto label_1ceef0;
        case 0x1ceef4u: goto label_1ceef4;
        case 0x1ceef8u: goto label_1ceef8;
        case 0x1ceefcu: goto label_1ceefc;
        case 0x1cef00u: goto label_1cef00;
        case 0x1cef04u: goto label_1cef04;
        case 0x1cef08u: goto label_1cef08;
        case 0x1cef0cu: goto label_1cef0c;
        case 0x1cef10u: goto label_1cef10;
        case 0x1cef14u: goto label_1cef14;
        case 0x1cef18u: goto label_1cef18;
        case 0x1cef1cu: goto label_1cef1c;
        case 0x1cef20u: goto label_1cef20;
        case 0x1cef24u: goto label_1cef24;
        case 0x1cef28u: goto label_1cef28;
        case 0x1cef2cu: goto label_1cef2c;
        case 0x1cef30u: goto label_1cef30;
        case 0x1cef34u: goto label_1cef34;
        case 0x1cef38u: goto label_1cef38;
        case 0x1cef3cu: goto label_1cef3c;
        case 0x1cef40u: goto label_1cef40;
        case 0x1cef44u: goto label_1cef44;
        case 0x1cef48u: goto label_1cef48;
        case 0x1cef4cu: goto label_1cef4c;
        case 0x1cef50u: goto label_1cef50;
        case 0x1cef54u: goto label_1cef54;
        case 0x1cef58u: goto label_1cef58;
        case 0x1cef5cu: goto label_1cef5c;
        case 0x1cef60u: goto label_1cef60;
        case 0x1cef64u: goto label_1cef64;
        case 0x1cef68u: goto label_1cef68;
        case 0x1cef6cu: goto label_1cef6c;
        case 0x1cef70u: goto label_1cef70;
        case 0x1cef74u: goto label_1cef74;
        case 0x1cef78u: goto label_1cef78;
        case 0x1cef7cu: goto label_1cef7c;
        case 0x1cef80u: goto label_1cef80;
        case 0x1cef84u: goto label_1cef84;
        case 0x1cef88u: goto label_1cef88;
        case 0x1cef8cu: goto label_1cef8c;
        case 0x1cef90u: goto label_1cef90;
        case 0x1cef94u: goto label_1cef94;
        case 0x1cef98u: goto label_1cef98;
        case 0x1cef9cu: goto label_1cef9c;
        case 0x1cefa0u: goto label_1cefa0;
        case 0x1cefa4u: goto label_1cefa4;
        case 0x1cefa8u: goto label_1cefa8;
        case 0x1cefacu: goto label_1cefac;
        case 0x1cefb0u: goto label_1cefb0;
        case 0x1cefb4u: goto label_1cefb4;
        case 0x1cefb8u: goto label_1cefb8;
        case 0x1cefbcu: goto label_1cefbc;
        case 0x1cefc0u: goto label_1cefc0;
        case 0x1cefc4u: goto label_1cefc4;
        case 0x1cefc8u: goto label_1cefc8;
        case 0x1cefccu: goto label_1cefcc;
        case 0x1cefd0u: goto label_1cefd0;
        case 0x1cefd4u: goto label_1cefd4;
        case 0x1cefd8u: goto label_1cefd8;
        case 0x1cefdcu: goto label_1cefdc;
        case 0x1cefe0u: goto label_1cefe0;
        case 0x1cefe4u: goto label_1cefe4;
        case 0x1cefe8u: goto label_1cefe8;
        case 0x1cefecu: goto label_1cefec;
        case 0x1ceff0u: goto label_1ceff0;
        case 0x1ceff4u: goto label_1ceff4;
        case 0x1ceff8u: goto label_1ceff8;
        case 0x1ceffcu: goto label_1ceffc;
        case 0x1cf000u: goto label_1cf000;
        case 0x1cf004u: goto label_1cf004;
        case 0x1cf008u: goto label_1cf008;
        case 0x1cf00cu: goto label_1cf00c;
        case 0x1cf010u: goto label_1cf010;
        case 0x1cf014u: goto label_1cf014;
        case 0x1cf018u: goto label_1cf018;
        case 0x1cf01cu: goto label_1cf01c;
        case 0x1cf020u: goto label_1cf020;
        case 0x1cf024u: goto label_1cf024;
        case 0x1cf028u: goto label_1cf028;
        case 0x1cf02cu: goto label_1cf02c;
        case 0x1cf030u: goto label_1cf030;
        case 0x1cf034u: goto label_1cf034;
        case 0x1cf038u: goto label_1cf038;
        case 0x1cf03cu: goto label_1cf03c;
        case 0x1cf040u: goto label_1cf040;
        case 0x1cf044u: goto label_1cf044;
        case 0x1cf048u: goto label_1cf048;
        case 0x1cf04cu: goto label_1cf04c;
        case 0x1cf050u: goto label_1cf050;
        case 0x1cf054u: goto label_1cf054;
        case 0x1cf058u: goto label_1cf058;
        case 0x1cf05cu: goto label_1cf05c;
        case 0x1cf060u: goto label_1cf060;
        case 0x1cf064u: goto label_1cf064;
        case 0x1cf068u: goto label_1cf068;
        case 0x1cf06cu: goto label_1cf06c;
        case 0x1cf070u: goto label_1cf070;
        case 0x1cf074u: goto label_1cf074;
        case 0x1cf078u: goto label_1cf078;
        case 0x1cf07cu: goto label_1cf07c;
        case 0x1cf080u: goto label_1cf080;
        case 0x1cf084u: goto label_1cf084;
        case 0x1cf088u: goto label_1cf088;
        case 0x1cf08cu: goto label_1cf08c;
        case 0x1cf090u: goto label_1cf090;
        case 0x1cf094u: goto label_1cf094;
        case 0x1cf098u: goto label_1cf098;
        case 0x1cf09cu: goto label_1cf09c;
        case 0x1cf0a0u: goto label_1cf0a0;
        case 0x1cf0a4u: goto label_1cf0a4;
        case 0x1cf0a8u: goto label_1cf0a8;
        case 0x1cf0acu: goto label_1cf0ac;
        case 0x1cf0b0u: goto label_1cf0b0;
        case 0x1cf0b4u: goto label_1cf0b4;
        case 0x1cf0b8u: goto label_1cf0b8;
        case 0x1cf0bcu: goto label_1cf0bc;
        case 0x1cf0c0u: goto label_1cf0c0;
        case 0x1cf0c4u: goto label_1cf0c4;
        case 0x1cf0c8u: goto label_1cf0c8;
        case 0x1cf0ccu: goto label_1cf0cc;
        case 0x1cf0d0u: goto label_1cf0d0;
        case 0x1cf0d4u: goto label_1cf0d4;
        case 0x1cf0d8u: goto label_1cf0d8;
        case 0x1cf0dcu: goto label_1cf0dc;
        case 0x1cf0e0u: goto label_1cf0e0;
        case 0x1cf0e4u: goto label_1cf0e4;
        case 0x1cf0e8u: goto label_1cf0e8;
        case 0x1cf0ecu: goto label_1cf0ec;
        case 0x1cf0f0u: goto label_1cf0f0;
        case 0x1cf0f4u: goto label_1cf0f4;
        case 0x1cf0f8u: goto label_1cf0f8;
        case 0x1cf0fcu: goto label_1cf0fc;
        case 0x1cf100u: goto label_1cf100;
        case 0x1cf104u: goto label_1cf104;
        case 0x1cf108u: goto label_1cf108;
        case 0x1cf10cu: goto label_1cf10c;
        case 0x1cf110u: goto label_1cf110;
        case 0x1cf114u: goto label_1cf114;
        case 0x1cf118u: goto label_1cf118;
        case 0x1cf11cu: goto label_1cf11c;
        case 0x1cf120u: goto label_1cf120;
        case 0x1cf124u: goto label_1cf124;
        case 0x1cf128u: goto label_1cf128;
        case 0x1cf12cu: goto label_1cf12c;
        case 0x1cf130u: goto label_1cf130;
        case 0x1cf134u: goto label_1cf134;
        case 0x1cf138u: goto label_1cf138;
        case 0x1cf13cu: goto label_1cf13c;
        case 0x1cf140u: goto label_1cf140;
        case 0x1cf144u: goto label_1cf144;
        case 0x1cf148u: goto label_1cf148;
        case 0x1cf14cu: goto label_1cf14c;
        case 0x1cf150u: goto label_1cf150;
        case 0x1cf154u: goto label_1cf154;
        case 0x1cf158u: goto label_1cf158;
        case 0x1cf15cu: goto label_1cf15c;
        case 0x1cf160u: goto label_1cf160;
        case 0x1cf164u: goto label_1cf164;
        case 0x1cf168u: goto label_1cf168;
        case 0x1cf16cu: goto label_1cf16c;
        case 0x1cf170u: goto label_1cf170;
        case 0x1cf174u: goto label_1cf174;
        case 0x1cf178u: goto label_1cf178;
        case 0x1cf17cu: goto label_1cf17c;
        case 0x1cf180u: goto label_1cf180;
        case 0x1cf184u: goto label_1cf184;
        case 0x1cf188u: goto label_1cf188;
        case 0x1cf18cu: goto label_1cf18c;
        case 0x1cf190u: goto label_1cf190;
        case 0x1cf194u: goto label_1cf194;
        case 0x1cf198u: goto label_1cf198;
        case 0x1cf19cu: goto label_1cf19c;
        case 0x1cf1a0u: goto label_1cf1a0;
        case 0x1cf1a4u: goto label_1cf1a4;
        case 0x1cf1a8u: goto label_1cf1a8;
        case 0x1cf1acu: goto label_1cf1ac;
        case 0x1cf1b0u: goto label_1cf1b0;
        case 0x1cf1b4u: goto label_1cf1b4;
        case 0x1cf1b8u: goto label_1cf1b8;
        case 0x1cf1bcu: goto label_1cf1bc;
        case 0x1cf1c0u: goto label_1cf1c0;
        case 0x1cf1c4u: goto label_1cf1c4;
        case 0x1cf1c8u: goto label_1cf1c8;
        case 0x1cf1ccu: goto label_1cf1cc;
        case 0x1cf1d0u: goto label_1cf1d0;
        case 0x1cf1d4u: goto label_1cf1d4;
        case 0x1cf1d8u: goto label_1cf1d8;
        case 0x1cf1dcu: goto label_1cf1dc;
        case 0x1cf1e0u: goto label_1cf1e0;
        case 0x1cf1e4u: goto label_1cf1e4;
        case 0x1cf1e8u: goto label_1cf1e8;
        case 0x1cf1ecu: goto label_1cf1ec;
        case 0x1cf1f0u: goto label_1cf1f0;
        case 0x1cf1f4u: goto label_1cf1f4;
        case 0x1cf1f8u: goto label_1cf1f8;
        case 0x1cf1fcu: goto label_1cf1fc;
        case 0x1cf200u: goto label_1cf200;
        case 0x1cf204u: goto label_1cf204;
        case 0x1cf208u: goto label_1cf208;
        case 0x1cf20cu: goto label_1cf20c;
        case 0x1cf210u: goto label_1cf210;
        case 0x1cf214u: goto label_1cf214;
        case 0x1cf218u: goto label_1cf218;
        case 0x1cf21cu: goto label_1cf21c;
        case 0x1cf220u: goto label_1cf220;
        case 0x1cf224u: goto label_1cf224;
        case 0x1cf228u: goto label_1cf228;
        case 0x1cf22cu: goto label_1cf22c;
        case 0x1cf230u: goto label_1cf230;
        case 0x1cf234u: goto label_1cf234;
        case 0x1cf238u: goto label_1cf238;
        case 0x1cf23cu: goto label_1cf23c;
        case 0x1cf240u: goto label_1cf240;
        case 0x1cf244u: goto label_1cf244;
        case 0x1cf248u: goto label_1cf248;
        case 0x1cf24cu: goto label_1cf24c;
        case 0x1cf250u: goto label_1cf250;
        case 0x1cf254u: goto label_1cf254;
        case 0x1cf258u: goto label_1cf258;
        case 0x1cf25cu: goto label_1cf25c;
        case 0x1cf260u: goto label_1cf260;
        case 0x1cf264u: goto label_1cf264;
        case 0x1cf268u: goto label_1cf268;
        case 0x1cf26cu: goto label_1cf26c;
        case 0x1cf270u: goto label_1cf270;
        case 0x1cf274u: goto label_1cf274;
        case 0x1cf278u: goto label_1cf278;
        case 0x1cf27cu: goto label_1cf27c;
        case 0x1cf280u: goto label_1cf280;
        case 0x1cf284u: goto label_1cf284;
        case 0x1cf288u: goto label_1cf288;
        case 0x1cf28cu: goto label_1cf28c;
        case 0x1cf290u: goto label_1cf290;
        case 0x1cf294u: goto label_1cf294;
        case 0x1cf298u: goto label_1cf298;
        case 0x1cf29cu: goto label_1cf29c;
        case 0x1cf2a0u: goto label_1cf2a0;
        case 0x1cf2a4u: goto label_1cf2a4;
        case 0x1cf2a8u: goto label_1cf2a8;
        case 0x1cf2acu: goto label_1cf2ac;
        case 0x1cf2b0u: goto label_1cf2b0;
        case 0x1cf2b4u: goto label_1cf2b4;
        case 0x1cf2b8u: goto label_1cf2b8;
        case 0x1cf2bcu: goto label_1cf2bc;
        case 0x1cf2c0u: goto label_1cf2c0;
        case 0x1cf2c4u: goto label_1cf2c4;
        case 0x1cf2c8u: goto label_1cf2c8;
        case 0x1cf2ccu: goto label_1cf2cc;
        case 0x1cf2d0u: goto label_1cf2d0;
        case 0x1cf2d4u: goto label_1cf2d4;
        case 0x1cf2d8u: goto label_1cf2d8;
        case 0x1cf2dcu: goto label_1cf2dc;
        case 0x1cf2e0u: goto label_1cf2e0;
        case 0x1cf2e4u: goto label_1cf2e4;
        case 0x1cf2e8u: goto label_1cf2e8;
        case 0x1cf2ecu: goto label_1cf2ec;
        case 0x1cf2f0u: goto label_1cf2f0;
        case 0x1cf2f4u: goto label_1cf2f4;
        case 0x1cf2f8u: goto label_1cf2f8;
        case 0x1cf2fcu: goto label_1cf2fc;
        case 0x1cf300u: goto label_1cf300;
        case 0x1cf304u: goto label_1cf304;
        case 0x1cf308u: goto label_1cf308;
        case 0x1cf30cu: goto label_1cf30c;
        case 0x1cf310u: goto label_1cf310;
        case 0x1cf314u: goto label_1cf314;
        case 0x1cf318u: goto label_1cf318;
        case 0x1cf31cu: goto label_1cf31c;
        case 0x1cf320u: goto label_1cf320;
        case 0x1cf324u: goto label_1cf324;
        case 0x1cf328u: goto label_1cf328;
        case 0x1cf32cu: goto label_1cf32c;
        case 0x1cf330u: goto label_1cf330;
        case 0x1cf334u: goto label_1cf334;
        case 0x1cf338u: goto label_1cf338;
        case 0x1cf33cu: goto label_1cf33c;
        case 0x1cf340u: goto label_1cf340;
        case 0x1cf344u: goto label_1cf344;
        case 0x1cf348u: goto label_1cf348;
        case 0x1cf34cu: goto label_1cf34c;
        case 0x1cf350u: goto label_1cf350;
        case 0x1cf354u: goto label_1cf354;
        case 0x1cf358u: goto label_1cf358;
        case 0x1cf35cu: goto label_1cf35c;
        case 0x1cf360u: goto label_1cf360;
        case 0x1cf364u: goto label_1cf364;
        case 0x1cf368u: goto label_1cf368;
        case 0x1cf36cu: goto label_1cf36c;
        case 0x1cf370u: goto label_1cf370;
        case 0x1cf374u: goto label_1cf374;
        case 0x1cf378u: goto label_1cf378;
        case 0x1cf37cu: goto label_1cf37c;
        case 0x1cf380u: goto label_1cf380;
        case 0x1cf384u: goto label_1cf384;
        case 0x1cf388u: goto label_1cf388;
        case 0x1cf38cu: goto label_1cf38c;
        case 0x1cf390u: goto label_1cf390;
        case 0x1cf394u: goto label_1cf394;
        case 0x1cf398u: goto label_1cf398;
        case 0x1cf39cu: goto label_1cf39c;
        case 0x1cf3a0u: goto label_1cf3a0;
        case 0x1cf3a4u: goto label_1cf3a4;
        case 0x1cf3a8u: goto label_1cf3a8;
        case 0x1cf3acu: goto label_1cf3ac;
        case 0x1cf3b0u: goto label_1cf3b0;
        case 0x1cf3b4u: goto label_1cf3b4;
        case 0x1cf3b8u: goto label_1cf3b8;
        case 0x1cf3bcu: goto label_1cf3bc;
        case 0x1cf3c0u: goto label_1cf3c0;
        case 0x1cf3c4u: goto label_1cf3c4;
        case 0x1cf3c8u: goto label_1cf3c8;
        case 0x1cf3ccu: goto label_1cf3cc;
        case 0x1cf3d0u: goto label_1cf3d0;
        case 0x1cf3d4u: goto label_1cf3d4;
        case 0x1cf3d8u: goto label_1cf3d8;
        case 0x1cf3dcu: goto label_1cf3dc;
        case 0x1cf3e0u: goto label_1cf3e0;
        case 0x1cf3e4u: goto label_1cf3e4;
        case 0x1cf3e8u: goto label_1cf3e8;
        case 0x1cf3ecu: goto label_1cf3ec;
        case 0x1cf3f0u: goto label_1cf3f0;
        case 0x1cf3f4u: goto label_1cf3f4;
        case 0x1cf3f8u: goto label_1cf3f8;
        case 0x1cf3fcu: goto label_1cf3fc;
        case 0x1cf400u: goto label_1cf400;
        case 0x1cf404u: goto label_1cf404;
        case 0x1cf408u: goto label_1cf408;
        case 0x1cf40cu: goto label_1cf40c;
        case 0x1cf410u: goto label_1cf410;
        case 0x1cf414u: goto label_1cf414;
        case 0x1cf418u: goto label_1cf418;
        case 0x1cf41cu: goto label_1cf41c;
        case 0x1cf420u: goto label_1cf420;
        case 0x1cf424u: goto label_1cf424;
        case 0x1cf428u: goto label_1cf428;
        case 0x1cf42cu: goto label_1cf42c;
        case 0x1cf430u: goto label_1cf430;
        case 0x1cf434u: goto label_1cf434;
        case 0x1cf438u: goto label_1cf438;
        case 0x1cf43cu: goto label_1cf43c;
        case 0x1cf440u: goto label_1cf440;
        case 0x1cf444u: goto label_1cf444;
        case 0x1cf448u: goto label_1cf448;
        case 0x1cf44cu: goto label_1cf44c;
        case 0x1cf450u: goto label_1cf450;
        case 0x1cf454u: goto label_1cf454;
        case 0x1cf458u: goto label_1cf458;
        case 0x1cf45cu: goto label_1cf45c;
        case 0x1cf460u: goto label_1cf460;
        case 0x1cf464u: goto label_1cf464;
        case 0x1cf468u: goto label_1cf468;
        case 0x1cf46cu: goto label_1cf46c;
        case 0x1cf470u: goto label_1cf470;
        case 0x1cf474u: goto label_1cf474;
        case 0x1cf478u: goto label_1cf478;
        case 0x1cf47cu: goto label_1cf47c;
        case 0x1cf480u: goto label_1cf480;
        case 0x1cf484u: goto label_1cf484;
        case 0x1cf488u: goto label_1cf488;
        case 0x1cf48cu: goto label_1cf48c;
        case 0x1cf490u: goto label_1cf490;
        case 0x1cf494u: goto label_1cf494;
        case 0x1cf498u: goto label_1cf498;
        case 0x1cf49cu: goto label_1cf49c;
        case 0x1cf4a0u: goto label_1cf4a0;
        case 0x1cf4a4u: goto label_1cf4a4;
        case 0x1cf4a8u: goto label_1cf4a8;
        case 0x1cf4acu: goto label_1cf4ac;
        case 0x1cf4b0u: goto label_1cf4b0;
        case 0x1cf4b4u: goto label_1cf4b4;
        case 0x1cf4b8u: goto label_1cf4b8;
        case 0x1cf4bcu: goto label_1cf4bc;
        case 0x1cf4c0u: goto label_1cf4c0;
        case 0x1cf4c4u: goto label_1cf4c4;
        case 0x1cf4c8u: goto label_1cf4c8;
        case 0x1cf4ccu: goto label_1cf4cc;
        case 0x1cf4d0u: goto label_1cf4d0;
        case 0x1cf4d4u: goto label_1cf4d4;
        case 0x1cf4d8u: goto label_1cf4d8;
        case 0x1cf4dcu: goto label_1cf4dc;
        case 0x1cf4e0u: goto label_1cf4e0;
        case 0x1cf4e4u: goto label_1cf4e4;
        case 0x1cf4e8u: goto label_1cf4e8;
        case 0x1cf4ecu: goto label_1cf4ec;
        case 0x1cf4f0u: goto label_1cf4f0;
        case 0x1cf4f4u: goto label_1cf4f4;
        case 0x1cf4f8u: goto label_1cf4f8;
        case 0x1cf4fcu: goto label_1cf4fc;
        case 0x1cf500u: goto label_1cf500;
        case 0x1cf504u: goto label_1cf504;
        case 0x1cf508u: goto label_1cf508;
        case 0x1cf50cu: goto label_1cf50c;
        case 0x1cf510u: goto label_1cf510;
        case 0x1cf514u: goto label_1cf514;
        case 0x1cf518u: goto label_1cf518;
        case 0x1cf51cu: goto label_1cf51c;
        case 0x1cf520u: goto label_1cf520;
        case 0x1cf524u: goto label_1cf524;
        case 0x1cf528u: goto label_1cf528;
        case 0x1cf52cu: goto label_1cf52c;
        case 0x1cf530u: goto label_1cf530;
        case 0x1cf534u: goto label_1cf534;
        case 0x1cf538u: goto label_1cf538;
        case 0x1cf53cu: goto label_1cf53c;
        case 0x1cf540u: goto label_1cf540;
        case 0x1cf544u: goto label_1cf544;
        case 0x1cf548u: goto label_1cf548;
        case 0x1cf54cu: goto label_1cf54c;
        case 0x1cf550u: goto label_1cf550;
        case 0x1cf554u: goto label_1cf554;
        case 0x1cf558u: goto label_1cf558;
        case 0x1cf55cu: goto label_1cf55c;
        case 0x1cf560u: goto label_1cf560;
        case 0x1cf564u: goto label_1cf564;
        case 0x1cf568u: goto label_1cf568;
        case 0x1cf56cu: goto label_1cf56c;
        case 0x1cf570u: goto label_1cf570;
        case 0x1cf574u: goto label_1cf574;
        case 0x1cf578u: goto label_1cf578;
        case 0x1cf57cu: goto label_1cf57c;
        case 0x1cf580u: goto label_1cf580;
        case 0x1cf584u: goto label_1cf584;
        case 0x1cf588u: goto label_1cf588;
        case 0x1cf58cu: goto label_1cf58c;
        case 0x1cf590u: goto label_1cf590;
        case 0x1cf594u: goto label_1cf594;
        case 0x1cf598u: goto label_1cf598;
        case 0x1cf59cu: goto label_1cf59c;
        case 0x1cf5a0u: goto label_1cf5a0;
        case 0x1cf5a4u: goto label_1cf5a4;
        case 0x1cf5a8u: goto label_1cf5a8;
        case 0x1cf5acu: goto label_1cf5ac;
        case 0x1cf5b0u: goto label_1cf5b0;
        case 0x1cf5b4u: goto label_1cf5b4;
        case 0x1cf5b8u: goto label_1cf5b8;
        case 0x1cf5bcu: goto label_1cf5bc;
        case 0x1cf5c0u: goto label_1cf5c0;
        case 0x1cf5c4u: goto label_1cf5c4;
        case 0x1cf5c8u: goto label_1cf5c8;
        case 0x1cf5ccu: goto label_1cf5cc;
        case 0x1cf5d0u: goto label_1cf5d0;
        case 0x1cf5d4u: goto label_1cf5d4;
        case 0x1cf5d8u: goto label_1cf5d8;
        case 0x1cf5dcu: goto label_1cf5dc;
        case 0x1cf5e0u: goto label_1cf5e0;
        case 0x1cf5e4u: goto label_1cf5e4;
        case 0x1cf5e8u: goto label_1cf5e8;
        case 0x1cf5ecu: goto label_1cf5ec;
        case 0x1cf5f0u: goto label_1cf5f0;
        case 0x1cf5f4u: goto label_1cf5f4;
        case 0x1cf5f8u: goto label_1cf5f8;
        case 0x1cf5fcu: goto label_1cf5fc;
        case 0x1cf600u: goto label_1cf600;
        case 0x1cf604u: goto label_1cf604;
        case 0x1cf608u: goto label_1cf608;
        case 0x1cf60cu: goto label_1cf60c;
        case 0x1cf610u: goto label_1cf610;
        case 0x1cf614u: goto label_1cf614;
        case 0x1cf618u: goto label_1cf618;
        case 0x1cf61cu: goto label_1cf61c;
        case 0x1cf620u: goto label_1cf620;
        case 0x1cf624u: goto label_1cf624;
        case 0x1cf628u: goto label_1cf628;
        case 0x1cf62cu: goto label_1cf62c;
        case 0x1cf630u: goto label_1cf630;
        case 0x1cf634u: goto label_1cf634;
        case 0x1cf638u: goto label_1cf638;
        case 0x1cf63cu: goto label_1cf63c;
        case 0x1cf640u: goto label_1cf640;
        case 0x1cf644u: goto label_1cf644;
        case 0x1cf648u: goto label_1cf648;
        case 0x1cf64cu: goto label_1cf64c;
        case 0x1cf650u: goto label_1cf650;
        case 0x1cf654u: goto label_1cf654;
        case 0x1cf658u: goto label_1cf658;
        case 0x1cf65cu: goto label_1cf65c;
        case 0x1cf660u: goto label_1cf660;
        case 0x1cf664u: goto label_1cf664;
        case 0x1cf668u: goto label_1cf668;
        case 0x1cf66cu: goto label_1cf66c;
        case 0x1cf670u: goto label_1cf670;
        case 0x1cf674u: goto label_1cf674;
        case 0x1cf678u: goto label_1cf678;
        case 0x1cf67cu: goto label_1cf67c;
        case 0x1cf680u: goto label_1cf680;
        case 0x1cf684u: goto label_1cf684;
        case 0x1cf688u: goto label_1cf688;
        case 0x1cf68cu: goto label_1cf68c;
        case 0x1cf690u: goto label_1cf690;
        case 0x1cf694u: goto label_1cf694;
        case 0x1cf698u: goto label_1cf698;
        case 0x1cf69cu: goto label_1cf69c;
        case 0x1cf6a0u: goto label_1cf6a0;
        case 0x1cf6a4u: goto label_1cf6a4;
        case 0x1cf6a8u: goto label_1cf6a8;
        case 0x1cf6acu: goto label_1cf6ac;
        case 0x1cf6b0u: goto label_1cf6b0;
        case 0x1cf6b4u: goto label_1cf6b4;
        case 0x1cf6b8u: goto label_1cf6b8;
        case 0x1cf6bcu: goto label_1cf6bc;
        case 0x1cf6c0u: goto label_1cf6c0;
        case 0x1cf6c4u: goto label_1cf6c4;
        case 0x1cf6c8u: goto label_1cf6c8;
        case 0x1cf6ccu: goto label_1cf6cc;
        case 0x1cf6d0u: goto label_1cf6d0;
        case 0x1cf6d4u: goto label_1cf6d4;
        case 0x1cf6d8u: goto label_1cf6d8;
        case 0x1cf6dcu: goto label_1cf6dc;
        case 0x1cf6e0u: goto label_1cf6e0;
        case 0x1cf6e4u: goto label_1cf6e4;
        case 0x1cf6e8u: goto label_1cf6e8;
        case 0x1cf6ecu: goto label_1cf6ec;
        case 0x1cf6f0u: goto label_1cf6f0;
        case 0x1cf6f4u: goto label_1cf6f4;
        case 0x1cf6f8u: goto label_1cf6f8;
        case 0x1cf6fcu: goto label_1cf6fc;
        case 0x1cf700u: goto label_1cf700;
        case 0x1cf704u: goto label_1cf704;
        case 0x1cf708u: goto label_1cf708;
        case 0x1cf70cu: goto label_1cf70c;
        case 0x1cf710u: goto label_1cf710;
        case 0x1cf714u: goto label_1cf714;
        case 0x1cf718u: goto label_1cf718;
        case 0x1cf71cu: goto label_1cf71c;
        case 0x1cf720u: goto label_1cf720;
        case 0x1cf724u: goto label_1cf724;
        case 0x1cf728u: goto label_1cf728;
        case 0x1cf72cu: goto label_1cf72c;
        case 0x1cf730u: goto label_1cf730;
        case 0x1cf734u: goto label_1cf734;
        case 0x1cf738u: goto label_1cf738;
        case 0x1cf73cu: goto label_1cf73c;
        case 0x1cf740u: goto label_1cf740;
        case 0x1cf744u: goto label_1cf744;
        case 0x1cf748u: goto label_1cf748;
        case 0x1cf74cu: goto label_1cf74c;
        case 0x1cf750u: goto label_1cf750;
        case 0x1cf754u: goto label_1cf754;
        case 0x1cf758u: goto label_1cf758;
        case 0x1cf75cu: goto label_1cf75c;
        case 0x1cf760u: goto label_1cf760;
        case 0x1cf764u: goto label_1cf764;
        case 0x1cf768u: goto label_1cf768;
        case 0x1cf76cu: goto label_1cf76c;
        case 0x1cf770u: goto label_1cf770;
        case 0x1cf774u: goto label_1cf774;
        case 0x1cf778u: goto label_1cf778;
        case 0x1cf77cu: goto label_1cf77c;
        case 0x1cf780u: goto label_1cf780;
        case 0x1cf784u: goto label_1cf784;
        case 0x1cf788u: goto label_1cf788;
        case 0x1cf78cu: goto label_1cf78c;
        case 0x1cf790u: goto label_1cf790;
        case 0x1cf794u: goto label_1cf794;
        case 0x1cf798u: goto label_1cf798;
        case 0x1cf79cu: goto label_1cf79c;
        case 0x1cf7a0u: goto label_1cf7a0;
        case 0x1cf7a4u: goto label_1cf7a4;
        case 0x1cf7a8u: goto label_1cf7a8;
        case 0x1cf7acu: goto label_1cf7ac;
        case 0x1cf7b0u: goto label_1cf7b0;
        case 0x1cf7b4u: goto label_1cf7b4;
        case 0x1cf7b8u: goto label_1cf7b8;
        case 0x1cf7bcu: goto label_1cf7bc;
        case 0x1cf7c0u: goto label_1cf7c0;
        case 0x1cf7c4u: goto label_1cf7c4;
        case 0x1cf7c8u: goto label_1cf7c8;
        case 0x1cf7ccu: goto label_1cf7cc;
        case 0x1cf7d0u: goto label_1cf7d0;
        case 0x1cf7d4u: goto label_1cf7d4;
        case 0x1cf7d8u: goto label_1cf7d8;
        case 0x1cf7dcu: goto label_1cf7dc;
        case 0x1cf7e0u: goto label_1cf7e0;
        case 0x1cf7e4u: goto label_1cf7e4;
        case 0x1cf7e8u: goto label_1cf7e8;
        case 0x1cf7ecu: goto label_1cf7ec;
        case 0x1cf7f0u: goto label_1cf7f0;
        case 0x1cf7f4u: goto label_1cf7f4;
        case 0x1cf7f8u: goto label_1cf7f8;
        case 0x1cf7fcu: goto label_1cf7fc;
        case 0x1cf800u: goto label_1cf800;
        case 0x1cf804u: goto label_1cf804;
        case 0x1cf808u: goto label_1cf808;
        case 0x1cf80cu: goto label_1cf80c;
        case 0x1cf810u: goto label_1cf810;
        case 0x1cf814u: goto label_1cf814;
        case 0x1cf818u: goto label_1cf818;
        case 0x1cf81cu: goto label_1cf81c;
        case 0x1cf820u: goto label_1cf820;
        case 0x1cf824u: goto label_1cf824;
        case 0x1cf828u: goto label_1cf828;
        case 0x1cf82cu: goto label_1cf82c;
        case 0x1cf830u: goto label_1cf830;
        case 0x1cf834u: goto label_1cf834;
        case 0x1cf838u: goto label_1cf838;
        case 0x1cf83cu: goto label_1cf83c;
        case 0x1cf840u: goto label_1cf840;
        case 0x1cf844u: goto label_1cf844;
        case 0x1cf848u: goto label_1cf848;
        case 0x1cf84cu: goto label_1cf84c;
        case 0x1cf850u: goto label_1cf850;
        case 0x1cf854u: goto label_1cf854;
        case 0x1cf858u: goto label_1cf858;
        case 0x1cf85cu: goto label_1cf85c;
        case 0x1cf860u: goto label_1cf860;
        case 0x1cf864u: goto label_1cf864;
        case 0x1cf868u: goto label_1cf868;
        case 0x1cf86cu: goto label_1cf86c;
        case 0x1cf870u: goto label_1cf870;
        case 0x1cf874u: goto label_1cf874;
        case 0x1cf878u: goto label_1cf878;
        case 0x1cf87cu: goto label_1cf87c;
        case 0x1cf880u: goto label_1cf880;
        case 0x1cf884u: goto label_1cf884;
        case 0x1cf888u: goto label_1cf888;
        case 0x1cf88cu: goto label_1cf88c;
        case 0x1cf890u: goto label_1cf890;
        case 0x1cf894u: goto label_1cf894;
        case 0x1cf898u: goto label_1cf898;
        case 0x1cf89cu: goto label_1cf89c;
        case 0x1cf8a0u: goto label_1cf8a0;
        case 0x1cf8a4u: goto label_1cf8a4;
        case 0x1cf8a8u: goto label_1cf8a8;
        case 0x1cf8acu: goto label_1cf8ac;
        case 0x1cf8b0u: goto label_1cf8b0;
        case 0x1cf8b4u: goto label_1cf8b4;
        case 0x1cf8b8u: goto label_1cf8b8;
        case 0x1cf8bcu: goto label_1cf8bc;
        case 0x1cf8c0u: goto label_1cf8c0;
        case 0x1cf8c4u: goto label_1cf8c4;
        case 0x1cf8c8u: goto label_1cf8c8;
        case 0x1cf8ccu: goto label_1cf8cc;
        case 0x1cf8d0u: goto label_1cf8d0;
        case 0x1cf8d4u: goto label_1cf8d4;
        case 0x1cf8d8u: goto label_1cf8d8;
        case 0x1cf8dcu: goto label_1cf8dc;
        case 0x1cf8e0u: goto label_1cf8e0;
        case 0x1cf8e4u: goto label_1cf8e4;
        case 0x1cf8e8u: goto label_1cf8e8;
        case 0x1cf8ecu: goto label_1cf8ec;
        case 0x1cf8f0u: goto label_1cf8f0;
        case 0x1cf8f4u: goto label_1cf8f4;
        case 0x1cf8f8u: goto label_1cf8f8;
        case 0x1cf8fcu: goto label_1cf8fc;
        case 0x1cf900u: goto label_1cf900;
        case 0x1cf904u: goto label_1cf904;
        case 0x1cf908u: goto label_1cf908;
        case 0x1cf90cu: goto label_1cf90c;
        case 0x1cf910u: goto label_1cf910;
        case 0x1cf914u: goto label_1cf914;
        case 0x1cf918u: goto label_1cf918;
        case 0x1cf91cu: goto label_1cf91c;
        case 0x1cf920u: goto label_1cf920;
        case 0x1cf924u: goto label_1cf924;
        case 0x1cf928u: goto label_1cf928;
        case 0x1cf92cu: goto label_1cf92c;
        case 0x1cf930u: goto label_1cf930;
        case 0x1cf934u: goto label_1cf934;
        case 0x1cf938u: goto label_1cf938;
        case 0x1cf93cu: goto label_1cf93c;
        case 0x1cf940u: goto label_1cf940;
        case 0x1cf944u: goto label_1cf944;
        case 0x1cf948u: goto label_1cf948;
        case 0x1cf94cu: goto label_1cf94c;
        case 0x1cf950u: goto label_1cf950;
        case 0x1cf954u: goto label_1cf954;
        case 0x1cf958u: goto label_1cf958;
        case 0x1cf95cu: goto label_1cf95c;
        case 0x1cf960u: goto label_1cf960;
        case 0x1cf964u: goto label_1cf964;
        case 0x1cf968u: goto label_1cf968;
        case 0x1cf96cu: goto label_1cf96c;
        case 0x1cf970u: goto label_1cf970;
        case 0x1cf974u: goto label_1cf974;
        case 0x1cf978u: goto label_1cf978;
        case 0x1cf97cu: goto label_1cf97c;
        case 0x1cf980u: goto label_1cf980;
        case 0x1cf984u: goto label_1cf984;
        case 0x1cf988u: goto label_1cf988;
        case 0x1cf98cu: goto label_1cf98c;
        case 0x1cf990u: goto label_1cf990;
        case 0x1cf994u: goto label_1cf994;
        case 0x1cf998u: goto label_1cf998;
        case 0x1cf99cu: goto label_1cf99c;
        case 0x1cf9a0u: goto label_1cf9a0;
        case 0x1cf9a4u: goto label_1cf9a4;
        case 0x1cf9a8u: goto label_1cf9a8;
        case 0x1cf9acu: goto label_1cf9ac;
        case 0x1cf9b0u: goto label_1cf9b0;
        case 0x1cf9b4u: goto label_1cf9b4;
        case 0x1cf9b8u: goto label_1cf9b8;
        case 0x1cf9bcu: goto label_1cf9bc;
        case 0x1cf9c0u: goto label_1cf9c0;
        case 0x1cf9c4u: goto label_1cf9c4;
        case 0x1cf9c8u: goto label_1cf9c8;
        case 0x1cf9ccu: goto label_1cf9cc;
        case 0x1cf9d0u: goto label_1cf9d0;
        case 0x1cf9d4u: goto label_1cf9d4;
        case 0x1cf9d8u: goto label_1cf9d8;
        case 0x1cf9dcu: goto label_1cf9dc;
        case 0x1cf9e0u: goto label_1cf9e0;
        case 0x1cf9e4u: goto label_1cf9e4;
        case 0x1cf9e8u: goto label_1cf9e8;
        case 0x1cf9ecu: goto label_1cf9ec;
        case 0x1cf9f0u: goto label_1cf9f0;
        case 0x1cf9f4u: goto label_1cf9f4;
        case 0x1cf9f8u: goto label_1cf9f8;
        case 0x1cf9fcu: goto label_1cf9fc;
        case 0x1cfa00u: goto label_1cfa00;
        case 0x1cfa04u: goto label_1cfa04;
        case 0x1cfa08u: goto label_1cfa08;
        case 0x1cfa0cu: goto label_1cfa0c;
        case 0x1cfa10u: goto label_1cfa10;
        case 0x1cfa14u: goto label_1cfa14;
        case 0x1cfa18u: goto label_1cfa18;
        case 0x1cfa1cu: goto label_1cfa1c;
        case 0x1cfa20u: goto label_1cfa20;
        case 0x1cfa24u: goto label_1cfa24;
        case 0x1cfa28u: goto label_1cfa28;
        case 0x1cfa2cu: goto label_1cfa2c;
        case 0x1cfa30u: goto label_1cfa30;
        case 0x1cfa34u: goto label_1cfa34;
        case 0x1cfa38u: goto label_1cfa38;
        case 0x1cfa3cu: goto label_1cfa3c;
        case 0x1cfa40u: goto label_1cfa40;
        case 0x1cfa44u: goto label_1cfa44;
        case 0x1cfa48u: goto label_1cfa48;
        case 0x1cfa4cu: goto label_1cfa4c;
        case 0x1cfa50u: goto label_1cfa50;
        case 0x1cfa54u: goto label_1cfa54;
        case 0x1cfa58u: goto label_1cfa58;
        case 0x1cfa5cu: goto label_1cfa5c;
        case 0x1cfa60u: goto label_1cfa60;
        case 0x1cfa64u: goto label_1cfa64;
        case 0x1cfa68u: goto label_1cfa68;
        case 0x1cfa6cu: goto label_1cfa6c;
        case 0x1cfa70u: goto label_1cfa70;
        case 0x1cfa74u: goto label_1cfa74;
        case 0x1cfa78u: goto label_1cfa78;
        case 0x1cfa7cu: goto label_1cfa7c;
        case 0x1cfa80u: goto label_1cfa80;
        case 0x1cfa84u: goto label_1cfa84;
        case 0x1cfa88u: goto label_1cfa88;
        case 0x1cfa8cu: goto label_1cfa8c;
        case 0x1cfa90u: goto label_1cfa90;
        case 0x1cfa94u: goto label_1cfa94;
        case 0x1cfa98u: goto label_1cfa98;
        case 0x1cfa9cu: goto label_1cfa9c;
        case 0x1cfaa0u: goto label_1cfaa0;
        case 0x1cfaa4u: goto label_1cfaa4;
        case 0x1cfaa8u: goto label_1cfaa8;
        case 0x1cfaacu: goto label_1cfaac;
        case 0x1cfab0u: goto label_1cfab0;
        case 0x1cfab4u: goto label_1cfab4;
        case 0x1cfab8u: goto label_1cfab8;
        case 0x1cfabcu: goto label_1cfabc;
        case 0x1cfac0u: goto label_1cfac0;
        case 0x1cfac4u: goto label_1cfac4;
        case 0x1cfac8u: goto label_1cfac8;
        case 0x1cfaccu: goto label_1cfacc;
        case 0x1cfad0u: goto label_1cfad0;
        case 0x1cfad4u: goto label_1cfad4;
        case 0x1cfad8u: goto label_1cfad8;
        case 0x1cfadcu: goto label_1cfadc;
        case 0x1cfae0u: goto label_1cfae0;
        case 0x1cfae4u: goto label_1cfae4;
        case 0x1cfae8u: goto label_1cfae8;
        case 0x1cfaecu: goto label_1cfaec;
        case 0x1cfaf0u: goto label_1cfaf0;
        case 0x1cfaf4u: goto label_1cfaf4;
        case 0x1cfaf8u: goto label_1cfaf8;
        case 0x1cfafcu: goto label_1cfafc;
        case 0x1cfb00u: goto label_1cfb00;
        case 0x1cfb04u: goto label_1cfb04;
        case 0x1cfb08u: goto label_1cfb08;
        case 0x1cfb0cu: goto label_1cfb0c;
        case 0x1cfb10u: goto label_1cfb10;
        case 0x1cfb14u: goto label_1cfb14;
        case 0x1cfb18u: goto label_1cfb18;
        case 0x1cfb1cu: goto label_1cfb1c;
        case 0x1cfb20u: goto label_1cfb20;
        case 0x1cfb24u: goto label_1cfb24;
        case 0x1cfb28u: goto label_1cfb28;
        case 0x1cfb2cu: goto label_1cfb2c;
        case 0x1cfb30u: goto label_1cfb30;
        case 0x1cfb34u: goto label_1cfb34;
        case 0x1cfb38u: goto label_1cfb38;
        case 0x1cfb3cu: goto label_1cfb3c;
        case 0x1cfb40u: goto label_1cfb40;
        case 0x1cfb44u: goto label_1cfb44;
        case 0x1cfb48u: goto label_1cfb48;
        case 0x1cfb4cu: goto label_1cfb4c;
        case 0x1cfb50u: goto label_1cfb50;
        case 0x1cfb54u: goto label_1cfb54;
        case 0x1cfb58u: goto label_1cfb58;
        case 0x1cfb5cu: goto label_1cfb5c;
        case 0x1cfb60u: goto label_1cfb60;
        case 0x1cfb64u: goto label_1cfb64;
        case 0x1cfb68u: goto label_1cfb68;
        case 0x1cfb6cu: goto label_1cfb6c;
        case 0x1cfb70u: goto label_1cfb70;
        case 0x1cfb74u: goto label_1cfb74;
        case 0x1cfb78u: goto label_1cfb78;
        case 0x1cfb7cu: goto label_1cfb7c;
        case 0x1cfb80u: goto label_1cfb80;
        case 0x1cfb84u: goto label_1cfb84;
        case 0x1cfb88u: goto label_1cfb88;
        case 0x1cfb8cu: goto label_1cfb8c;
        case 0x1cfb90u: goto label_1cfb90;
        case 0x1cfb94u: goto label_1cfb94;
        case 0x1cfb98u: goto label_1cfb98;
        case 0x1cfb9cu: goto label_1cfb9c;
        case 0x1cfba0u: goto label_1cfba0;
        case 0x1cfba4u: goto label_1cfba4;
        case 0x1cfba8u: goto label_1cfba8;
        case 0x1cfbacu: goto label_1cfbac;
        case 0x1cfbb0u: goto label_1cfbb0;
        case 0x1cfbb4u: goto label_1cfbb4;
        case 0x1cfbb8u: goto label_1cfbb8;
        case 0x1cfbbcu: goto label_1cfbbc;
        case 0x1cfbc0u: goto label_1cfbc0;
        case 0x1cfbc4u: goto label_1cfbc4;
        case 0x1cfbc8u: goto label_1cfbc8;
        case 0x1cfbccu: goto label_1cfbcc;
        case 0x1cfbd0u: goto label_1cfbd0;
        case 0x1cfbd4u: goto label_1cfbd4;
        case 0x1cfbd8u: goto label_1cfbd8;
        case 0x1cfbdcu: goto label_1cfbdc;
        case 0x1cfbe0u: goto label_1cfbe0;
        case 0x1cfbe4u: goto label_1cfbe4;
        case 0x1cfbe8u: goto label_1cfbe8;
        case 0x1cfbecu: goto label_1cfbec;
        case 0x1cfbf0u: goto label_1cfbf0;
        case 0x1cfbf4u: goto label_1cfbf4;
        case 0x1cfbf8u: goto label_1cfbf8;
        case 0x1cfbfcu: goto label_1cfbfc;
        case 0x1cfc00u: goto label_1cfc00;
        case 0x1cfc04u: goto label_1cfc04;
        case 0x1cfc08u: goto label_1cfc08;
        case 0x1cfc0cu: goto label_1cfc0c;
        case 0x1cfc10u: goto label_1cfc10;
        case 0x1cfc14u: goto label_1cfc14;
        case 0x1cfc18u: goto label_1cfc18;
        case 0x1cfc1cu: goto label_1cfc1c;
        case 0x1cfc20u: goto label_1cfc20;
        case 0x1cfc24u: goto label_1cfc24;
        case 0x1cfc28u: goto label_1cfc28;
        case 0x1cfc2cu: goto label_1cfc2c;
        case 0x1cfc30u: goto label_1cfc30;
        case 0x1cfc34u: goto label_1cfc34;
        case 0x1cfc38u: goto label_1cfc38;
        case 0x1cfc3cu: goto label_1cfc3c;
        case 0x1cfc40u: goto label_1cfc40;
        case 0x1cfc44u: goto label_1cfc44;
        case 0x1cfc48u: goto label_1cfc48;
        case 0x1cfc4cu: goto label_1cfc4c;
        case 0x1cfc50u: goto label_1cfc50;
        case 0x1cfc54u: goto label_1cfc54;
        case 0x1cfc58u: goto label_1cfc58;
        case 0x1cfc5cu: goto label_1cfc5c;
        case 0x1cfc60u: goto label_1cfc60;
        case 0x1cfc64u: goto label_1cfc64;
        case 0x1cfc68u: goto label_1cfc68;
        case 0x1cfc6cu: goto label_1cfc6c;
        case 0x1cfc70u: goto label_1cfc70;
        case 0x1cfc74u: goto label_1cfc74;
        case 0x1cfc78u: goto label_1cfc78;
        case 0x1cfc7cu: goto label_1cfc7c;
        case 0x1cfc80u: goto label_1cfc80;
        case 0x1cfc84u: goto label_1cfc84;
        case 0x1cfc88u: goto label_1cfc88;
        case 0x1cfc8cu: goto label_1cfc8c;
        case 0x1cfc90u: goto label_1cfc90;
        case 0x1cfc94u: goto label_1cfc94;
        case 0x1cfc98u: goto label_1cfc98;
        case 0x1cfc9cu: goto label_1cfc9c;
        case 0x1cfca0u: goto label_1cfca0;
        case 0x1cfca4u: goto label_1cfca4;
        case 0x1cfca8u: goto label_1cfca8;
        case 0x1cfcacu: goto label_1cfcac;
        case 0x1cfcb0u: goto label_1cfcb0;
        case 0x1cfcb4u: goto label_1cfcb4;
        case 0x1cfcb8u: goto label_1cfcb8;
        case 0x1cfcbcu: goto label_1cfcbc;
        case 0x1cfcc0u: goto label_1cfcc0;
        case 0x1cfcc4u: goto label_1cfcc4;
        case 0x1cfcc8u: goto label_1cfcc8;
        case 0x1cfcccu: goto label_1cfccc;
        case 0x1cfcd0u: goto label_1cfcd0;
        case 0x1cfcd4u: goto label_1cfcd4;
        case 0x1cfcd8u: goto label_1cfcd8;
        case 0x1cfcdcu: goto label_1cfcdc;
        case 0x1cfce0u: goto label_1cfce0;
        case 0x1cfce4u: goto label_1cfce4;
        case 0x1cfce8u: goto label_1cfce8;
        case 0x1cfcecu: goto label_1cfcec;
        case 0x1cfcf0u: goto label_1cfcf0;
        case 0x1cfcf4u: goto label_1cfcf4;
        case 0x1cfcf8u: goto label_1cfcf8;
        case 0x1cfcfcu: goto label_1cfcfc;
        case 0x1cfd00u: goto label_1cfd00;
        case 0x1cfd04u: goto label_1cfd04;
        case 0x1cfd08u: goto label_1cfd08;
        case 0x1cfd0cu: goto label_1cfd0c;
        case 0x1cfd10u: goto label_1cfd10;
        case 0x1cfd14u: goto label_1cfd14;
        case 0x1cfd18u: goto label_1cfd18;
        case 0x1cfd1cu: goto label_1cfd1c;
        case 0x1cfd20u: goto label_1cfd20;
        case 0x1cfd24u: goto label_1cfd24;
        case 0x1cfd28u: goto label_1cfd28;
        case 0x1cfd2cu: goto label_1cfd2c;
        case 0x1cfd30u: goto label_1cfd30;
        case 0x1cfd34u: goto label_1cfd34;
        case 0x1cfd38u: goto label_1cfd38;
        case 0x1cfd3cu: goto label_1cfd3c;
        case 0x1cfd40u: goto label_1cfd40;
        case 0x1cfd44u: goto label_1cfd44;
        case 0x1cfd48u: goto label_1cfd48;
        case 0x1cfd4cu: goto label_1cfd4c;
        case 0x1cfd50u: goto label_1cfd50;
        case 0x1cfd54u: goto label_1cfd54;
        case 0x1cfd58u: goto label_1cfd58;
        case 0x1cfd5cu: goto label_1cfd5c;
        case 0x1cfd60u: goto label_1cfd60;
        case 0x1cfd64u: goto label_1cfd64;
        case 0x1cfd68u: goto label_1cfd68;
        case 0x1cfd6cu: goto label_1cfd6c;
        case 0x1cfd70u: goto label_1cfd70;
        case 0x1cfd74u: goto label_1cfd74;
        case 0x1cfd78u: goto label_1cfd78;
        case 0x1cfd7cu: goto label_1cfd7c;
        case 0x1cfd80u: goto label_1cfd80;
        case 0x1cfd84u: goto label_1cfd84;
        case 0x1cfd88u: goto label_1cfd88;
        case 0x1cfd8cu: goto label_1cfd8c;
        case 0x1cfd90u: goto label_1cfd90;
        case 0x1cfd94u: goto label_1cfd94;
        case 0x1cfd98u: goto label_1cfd98;
        case 0x1cfd9cu: goto label_1cfd9c;
        case 0x1cfda0u: goto label_1cfda0;
        case 0x1cfda4u: goto label_1cfda4;
        case 0x1cfda8u: goto label_1cfda8;
        case 0x1cfdacu: goto label_1cfdac;
        case 0x1cfdb0u: goto label_1cfdb0;
        case 0x1cfdb4u: goto label_1cfdb4;
        case 0x1cfdb8u: goto label_1cfdb8;
        case 0x1cfdbcu: goto label_1cfdbc;
        case 0x1cfdc0u: goto label_1cfdc0;
        case 0x1cfdc4u: goto label_1cfdc4;
        case 0x1cfdc8u: goto label_1cfdc8;
        case 0x1cfdccu: goto label_1cfdcc;
        case 0x1cfdd0u: goto label_1cfdd0;
        case 0x1cfdd4u: goto label_1cfdd4;
        case 0x1cfdd8u: goto label_1cfdd8;
        case 0x1cfddcu: goto label_1cfddc;
        case 0x1cfde0u: goto label_1cfde0;
        case 0x1cfde4u: goto label_1cfde4;
        case 0x1cfde8u: goto label_1cfde8;
        case 0x1cfdecu: goto label_1cfdec;
        case 0x1cfdf0u: goto label_1cfdf0;
        case 0x1cfdf4u: goto label_1cfdf4;
        case 0x1cfdf8u: goto label_1cfdf8;
        case 0x1cfdfcu: goto label_1cfdfc;
        case 0x1cfe00u: goto label_1cfe00;
        case 0x1cfe04u: goto label_1cfe04;
        case 0x1cfe08u: goto label_1cfe08;
        case 0x1cfe0cu: goto label_1cfe0c;
        case 0x1cfe10u: goto label_1cfe10;
        case 0x1cfe14u: goto label_1cfe14;
        case 0x1cfe18u: goto label_1cfe18;
        case 0x1cfe1cu: goto label_1cfe1c;
        case 0x1cfe20u: goto label_1cfe20;
        case 0x1cfe24u: goto label_1cfe24;
        case 0x1cfe28u: goto label_1cfe28;
        case 0x1cfe2cu: goto label_1cfe2c;
        case 0x1cfe30u: goto label_1cfe30;
        case 0x1cfe34u: goto label_1cfe34;
        case 0x1cfe38u: goto label_1cfe38;
        case 0x1cfe3cu: goto label_1cfe3c;
        case 0x1cfe40u: goto label_1cfe40;
        case 0x1cfe44u: goto label_1cfe44;
        case 0x1cfe48u: goto label_1cfe48;
        case 0x1cfe4cu: goto label_1cfe4c;
        case 0x1cfe50u: goto label_1cfe50;
        case 0x1cfe54u: goto label_1cfe54;
        case 0x1cfe58u: goto label_1cfe58;
        case 0x1cfe5cu: goto label_1cfe5c;
        case 0x1cfe60u: goto label_1cfe60;
        case 0x1cfe64u: goto label_1cfe64;
        case 0x1cfe68u: goto label_1cfe68;
        case 0x1cfe6cu: goto label_1cfe6c;
        case 0x1cfe70u: goto label_1cfe70;
        case 0x1cfe74u: goto label_1cfe74;
        case 0x1cfe78u: goto label_1cfe78;
        case 0x1cfe7cu: goto label_1cfe7c;
        case 0x1cfe80u: goto label_1cfe80;
        case 0x1cfe84u: goto label_1cfe84;
        case 0x1cfe88u: goto label_1cfe88;
        case 0x1cfe8cu: goto label_1cfe8c;
        case 0x1cfe90u: goto label_1cfe90;
        case 0x1cfe94u: goto label_1cfe94;
        case 0x1cfe98u: goto label_1cfe98;
        case 0x1cfe9cu: goto label_1cfe9c;
        case 0x1cfea0u: goto label_1cfea0;
        case 0x1cfea4u: goto label_1cfea4;
        case 0x1cfea8u: goto label_1cfea8;
        case 0x1cfeacu: goto label_1cfeac;
        case 0x1cfeb0u: goto label_1cfeb0;
        case 0x1cfeb4u: goto label_1cfeb4;
        case 0x1cfeb8u: goto label_1cfeb8;
        case 0x1cfebcu: goto label_1cfebc;
        case 0x1cfec0u: goto label_1cfec0;
        case 0x1cfec4u: goto label_1cfec4;
        case 0x1cfec8u: goto label_1cfec8;
        case 0x1cfeccu: goto label_1cfecc;
        case 0x1cfed0u: goto label_1cfed0;
        case 0x1cfed4u: goto label_1cfed4;
        case 0x1cfed8u: goto label_1cfed8;
        case 0x1cfedcu: goto label_1cfedc;
        case 0x1cfee0u: goto label_1cfee0;
        case 0x1cfee4u: goto label_1cfee4;
        case 0x1cfee8u: goto label_1cfee8;
        case 0x1cfeecu: goto label_1cfeec;
        case 0x1cfef0u: goto label_1cfef0;
        case 0x1cfef4u: goto label_1cfef4;
        case 0x1cfef8u: goto label_1cfef8;
        case 0x1cfefcu: goto label_1cfefc;
        case 0x1cff00u: goto label_1cff00;
        case 0x1cff04u: goto label_1cff04;
        case 0x1cff08u: goto label_1cff08;
        case 0x1cff0cu: goto label_1cff0c;
        case 0x1cff10u: goto label_1cff10;
        case 0x1cff14u: goto label_1cff14;
        case 0x1cff18u: goto label_1cff18;
        case 0x1cff1cu: goto label_1cff1c;
        case 0x1cff20u: goto label_1cff20;
        case 0x1cff24u: goto label_1cff24;
        case 0x1cff28u: goto label_1cff28;
        case 0x1cff2cu: goto label_1cff2c;
        case 0x1cff30u: goto label_1cff30;
        case 0x1cff34u: goto label_1cff34;
        case 0x1cff38u: goto label_1cff38;
        case 0x1cff3cu: goto label_1cff3c;
        case 0x1cff40u: goto label_1cff40;
        case 0x1cff44u: goto label_1cff44;
        case 0x1cff48u: goto label_1cff48;
        case 0x1cff4cu: goto label_1cff4c;
        case 0x1cff50u: goto label_1cff50;
        case 0x1cff54u: goto label_1cff54;
        case 0x1cff58u: goto label_1cff58;
        case 0x1cff5cu: goto label_1cff5c;
        case 0x1cff60u: goto label_1cff60;
        case 0x1cff64u: goto label_1cff64;
        case 0x1cff68u: goto label_1cff68;
        case 0x1cff6cu: goto label_1cff6c;
        case 0x1cff70u: goto label_1cff70;
        case 0x1cff74u: goto label_1cff74;
        case 0x1cff78u: goto label_1cff78;
        case 0x1cff7cu: goto label_1cff7c;
        case 0x1cff80u: goto label_1cff80;
        case 0x1cff84u: goto label_1cff84;
        case 0x1cff88u: goto label_1cff88;
        case 0x1cff8cu: goto label_1cff8c;
        case 0x1cff90u: goto label_1cff90;
        case 0x1cff94u: goto label_1cff94;
        case 0x1cff98u: goto label_1cff98;
        case 0x1cff9cu: goto label_1cff9c;
        case 0x1cffa0u: goto label_1cffa0;
        case 0x1cffa4u: goto label_1cffa4;
        case 0x1cffa8u: goto label_1cffa8;
        case 0x1cffacu: goto label_1cffac;
        case 0x1cffb0u: goto label_1cffb0;
        case 0x1cffb4u: goto label_1cffb4;
        case 0x1cffb8u: goto label_1cffb8;
        case 0x1cffbcu: goto label_1cffbc;
        case 0x1cffc0u: goto label_1cffc0;
        case 0x1cffc4u: goto label_1cffc4;
        case 0x1cffc8u: goto label_1cffc8;
        case 0x1cffccu: goto label_1cffcc;
        case 0x1cffd0u: goto label_1cffd0;
        case 0x1cffd4u: goto label_1cffd4;
        case 0x1cffd8u: goto label_1cffd8;
        case 0x1cffdcu: goto label_1cffdc;
        case 0x1cffe0u: goto label_1cffe0;
        case 0x1cffe4u: goto label_1cffe4;
        case 0x1cffe8u: goto label_1cffe8;
        case 0x1cffecu: goto label_1cffec;
        case 0x1cfff0u: goto label_1cfff0;
        case 0x1cfff4u: goto label_1cfff4;
        case 0x1cfff8u: goto label_1cfff8;
        case 0x1cfffcu: goto label_1cfffc;
        case 0x1d0000u: goto label_1d0000;
        case 0x1d0004u: goto label_1d0004;
        case 0x1d0008u: goto label_1d0008;
        case 0x1d000cu: goto label_1d000c;
        case 0x1d0010u: goto label_1d0010;
        case 0x1d0014u: goto label_1d0014;
        case 0x1d0018u: goto label_1d0018;
        case 0x1d001cu: goto label_1d001c;
        case 0x1d0020u: goto label_1d0020;
        case 0x1d0024u: goto label_1d0024;
        case 0x1d0028u: goto label_1d0028;
        case 0x1d002cu: goto label_1d002c;
        case 0x1d0030u: goto label_1d0030;
        case 0x1d0034u: goto label_1d0034;
        case 0x1d0038u: goto label_1d0038;
        case 0x1d003cu: goto label_1d003c;
        case 0x1d0040u: goto label_1d0040;
        case 0x1d0044u: goto label_1d0044;
        case 0x1d0048u: goto label_1d0048;
        case 0x1d004cu: goto label_1d004c;
        case 0x1d0050u: goto label_1d0050;
        case 0x1d0054u: goto label_1d0054;
        case 0x1d0058u: goto label_1d0058;
        case 0x1d005cu: goto label_1d005c;
        case 0x1d0060u: goto label_1d0060;
        case 0x1d0064u: goto label_1d0064;
        case 0x1d0068u: goto label_1d0068;
        case 0x1d006cu: goto label_1d006c;
        case 0x1d0070u: goto label_1d0070;
        case 0x1d0074u: goto label_1d0074;
        case 0x1d0078u: goto label_1d0078;
        case 0x1d007cu: goto label_1d007c;
        case 0x1d0080u: goto label_1d0080;
        case 0x1d0084u: goto label_1d0084;
        case 0x1d0088u: goto label_1d0088;
        case 0x1d008cu: goto label_1d008c;
        case 0x1d0090u: goto label_1d0090;
        case 0x1d0094u: goto label_1d0094;
        case 0x1d0098u: goto label_1d0098;
        case 0x1d009cu: goto label_1d009c;
        case 0x1d00a0u: goto label_1d00a0;
        case 0x1d00a4u: goto label_1d00a4;
        case 0x1d00a8u: goto label_1d00a8;
        case 0x1d00acu: goto label_1d00ac;
        case 0x1d00b0u: goto label_1d00b0;
        case 0x1d00b4u: goto label_1d00b4;
        case 0x1d00b8u: goto label_1d00b8;
        case 0x1d00bcu: goto label_1d00bc;
        case 0x1d00c0u: goto label_1d00c0;
        case 0x1d00c4u: goto label_1d00c4;
        case 0x1d00c8u: goto label_1d00c8;
        case 0x1d00ccu: goto label_1d00cc;
        case 0x1d00d0u: goto label_1d00d0;
        case 0x1d00d4u: goto label_1d00d4;
        case 0x1d00d8u: goto label_1d00d8;
        case 0x1d00dcu: goto label_1d00dc;
        case 0x1d00e0u: goto label_1d00e0;
        case 0x1d00e4u: goto label_1d00e4;
        case 0x1d00e8u: goto label_1d00e8;
        case 0x1d00ecu: goto label_1d00ec;
        case 0x1d00f0u: goto label_1d00f0;
        case 0x1d00f4u: goto label_1d00f4;
        case 0x1d00f8u: goto label_1d00f8;
        case 0x1d00fcu: goto label_1d00fc;
        case 0x1d0100u: goto label_1d0100;
        case 0x1d0104u: goto label_1d0104;
        case 0x1d0108u: goto label_1d0108;
        case 0x1d010cu: goto label_1d010c;
        case 0x1d0110u: goto label_1d0110;
        case 0x1d0114u: goto label_1d0114;
        case 0x1d0118u: goto label_1d0118;
        case 0x1d011cu: goto label_1d011c;
        case 0x1d0120u: goto label_1d0120;
        case 0x1d0124u: goto label_1d0124;
        case 0x1d0128u: goto label_1d0128;
        case 0x1d012cu: goto label_1d012c;
        case 0x1d0130u: goto label_1d0130;
        case 0x1d0134u: goto label_1d0134;
        case 0x1d0138u: goto label_1d0138;
        case 0x1d013cu: goto label_1d013c;
        case 0x1d0140u: goto label_1d0140;
        case 0x1d0144u: goto label_1d0144;
        case 0x1d0148u: goto label_1d0148;
        case 0x1d014cu: goto label_1d014c;
        case 0x1d0150u: goto label_1d0150;
        case 0x1d0154u: goto label_1d0154;
        case 0x1d0158u: goto label_1d0158;
        case 0x1d015cu: goto label_1d015c;
        case 0x1d0160u: goto label_1d0160;
        case 0x1d0164u: goto label_1d0164;
        case 0x1d0168u: goto label_1d0168;
        case 0x1d016cu: goto label_1d016c;
        case 0x1d0170u: goto label_1d0170;
        case 0x1d0174u: goto label_1d0174;
        case 0x1d0178u: goto label_1d0178;
        case 0x1d017cu: goto label_1d017c;
        case 0x1d0180u: goto label_1d0180;
        case 0x1d0184u: goto label_1d0184;
        case 0x1d0188u: goto label_1d0188;
        case 0x1d018cu: goto label_1d018c;
        case 0x1d0190u: goto label_1d0190;
        case 0x1d0194u: goto label_1d0194;
        case 0x1d0198u: goto label_1d0198;
        case 0x1d019cu: goto label_1d019c;
        case 0x1d01a0u: goto label_1d01a0;
        case 0x1d01a4u: goto label_1d01a4;
        case 0x1d01a8u: goto label_1d01a8;
        case 0x1d01acu: goto label_1d01ac;
        case 0x1d01b0u: goto label_1d01b0;
        case 0x1d01b4u: goto label_1d01b4;
        case 0x1d01b8u: goto label_1d01b8;
        case 0x1d01bcu: goto label_1d01bc;
        case 0x1d01c0u: goto label_1d01c0;
        case 0x1d01c4u: goto label_1d01c4;
        case 0x1d01c8u: goto label_1d01c8;
        case 0x1d01ccu: goto label_1d01cc;
        case 0x1d01d0u: goto label_1d01d0;
        case 0x1d01d4u: goto label_1d01d4;
        case 0x1d01d8u: goto label_1d01d8;
        case 0x1d01dcu: goto label_1d01dc;
        case 0x1d01e0u: goto label_1d01e0;
        case 0x1d01e4u: goto label_1d01e4;
        case 0x1d01e8u: goto label_1d01e8;
        case 0x1d01ecu: goto label_1d01ec;
        case 0x1d01f0u: goto label_1d01f0;
        case 0x1d01f4u: goto label_1d01f4;
        case 0x1d01f8u: goto label_1d01f8;
        case 0x1d01fcu: goto label_1d01fc;
        case 0x1d0200u: goto label_1d0200;
        case 0x1d0204u: goto label_1d0204;
        case 0x1d0208u: goto label_1d0208;
        case 0x1d020cu: goto label_1d020c;
        case 0x1d0210u: goto label_1d0210;
        case 0x1d0214u: goto label_1d0214;
        case 0x1d0218u: goto label_1d0218;
        case 0x1d021cu: goto label_1d021c;
        case 0x1d0220u: goto label_1d0220;
        case 0x1d0224u: goto label_1d0224;
        case 0x1d0228u: goto label_1d0228;
        case 0x1d022cu: goto label_1d022c;
        case 0x1d0230u: goto label_1d0230;
        case 0x1d0234u: goto label_1d0234;
        case 0x1d0238u: goto label_1d0238;
        case 0x1d023cu: goto label_1d023c;
        case 0x1d0240u: goto label_1d0240;
        case 0x1d0244u: goto label_1d0244;
        case 0x1d0248u: goto label_1d0248;
        case 0x1d024cu: goto label_1d024c;
        case 0x1d0250u: goto label_1d0250;
        case 0x1d0254u: goto label_1d0254;
        case 0x1d0258u: goto label_1d0258;
        case 0x1d025cu: goto label_1d025c;
        case 0x1d0260u: goto label_1d0260;
        case 0x1d0264u: goto label_1d0264;
        case 0x1d0268u: goto label_1d0268;
        case 0x1d026cu: goto label_1d026c;
        case 0x1d0270u: goto label_1d0270;
        case 0x1d0274u: goto label_1d0274;
        case 0x1d0278u: goto label_1d0278;
        case 0x1d027cu: goto label_1d027c;
        case 0x1d0280u: goto label_1d0280;
        case 0x1d0284u: goto label_1d0284;
        case 0x1d0288u: goto label_1d0288;
        case 0x1d028cu: goto label_1d028c;
        case 0x1d0290u: goto label_1d0290;
        case 0x1d0294u: goto label_1d0294;
        case 0x1d0298u: goto label_1d0298;
        case 0x1d029cu: goto label_1d029c;
        case 0x1d02a0u: goto label_1d02a0;
        case 0x1d02a4u: goto label_1d02a4;
        case 0x1d02a8u: goto label_1d02a8;
        case 0x1d02acu: goto label_1d02ac;
        case 0x1d02b0u: goto label_1d02b0;
        case 0x1d02b4u: goto label_1d02b4;
        case 0x1d02b8u: goto label_1d02b8;
        case 0x1d02bcu: goto label_1d02bc;
        case 0x1d02c0u: goto label_1d02c0;
        case 0x1d02c4u: goto label_1d02c4;
        case 0x1d02c8u: goto label_1d02c8;
        case 0x1d02ccu: goto label_1d02cc;
        case 0x1d02d0u: goto label_1d02d0;
        case 0x1d02d4u: goto label_1d02d4;
        case 0x1d02d8u: goto label_1d02d8;
        case 0x1d02dcu: goto label_1d02dc;
        case 0x1d02e0u: goto label_1d02e0;
        case 0x1d02e4u: goto label_1d02e4;
        case 0x1d02e8u: goto label_1d02e8;
        case 0x1d02ecu: goto label_1d02ec;
        case 0x1d02f0u: goto label_1d02f0;
        case 0x1d02f4u: goto label_1d02f4;
        case 0x1d02f8u: goto label_1d02f8;
        case 0x1d02fcu: goto label_1d02fc;
        case 0x1d0300u: goto label_1d0300;
        case 0x1d0304u: goto label_1d0304;
        case 0x1d0308u: goto label_1d0308;
        case 0x1d030cu: goto label_1d030c;
        case 0x1d0310u: goto label_1d0310;
        case 0x1d0314u: goto label_1d0314;
        case 0x1d0318u: goto label_1d0318;
        case 0x1d031cu: goto label_1d031c;
        case 0x1d0320u: goto label_1d0320;
        case 0x1d0324u: goto label_1d0324;
        case 0x1d0328u: goto label_1d0328;
        case 0x1d032cu: goto label_1d032c;
        case 0x1d0330u: goto label_1d0330;
        case 0x1d0334u: goto label_1d0334;
        case 0x1d0338u: goto label_1d0338;
        case 0x1d033cu: goto label_1d033c;
        case 0x1d0340u: goto label_1d0340;
        case 0x1d0344u: goto label_1d0344;
        case 0x1d0348u: goto label_1d0348;
        case 0x1d034cu: goto label_1d034c;
        case 0x1d0350u: goto label_1d0350;
        case 0x1d0354u: goto label_1d0354;
        case 0x1d0358u: goto label_1d0358;
        case 0x1d035cu: goto label_1d035c;
        case 0x1d0360u: goto label_1d0360;
        case 0x1d0364u: goto label_1d0364;
        case 0x1d0368u: goto label_1d0368;
        case 0x1d036cu: goto label_1d036c;
        case 0x1d0370u: goto label_1d0370;
        case 0x1d0374u: goto label_1d0374;
        case 0x1d0378u: goto label_1d0378;
        case 0x1d037cu: goto label_1d037c;
        case 0x1d0380u: goto label_1d0380;
        case 0x1d0384u: goto label_1d0384;
        case 0x1d0388u: goto label_1d0388;
        case 0x1d038cu: goto label_1d038c;
        case 0x1d0390u: goto label_1d0390;
        case 0x1d0394u: goto label_1d0394;
        case 0x1d0398u: goto label_1d0398;
        case 0x1d039cu: goto label_1d039c;
        case 0x1d03a0u: goto label_1d03a0;
        case 0x1d03a4u: goto label_1d03a4;
        case 0x1d03a8u: goto label_1d03a8;
        case 0x1d03acu: goto label_1d03ac;
        case 0x1d03b0u: goto label_1d03b0;
        case 0x1d03b4u: goto label_1d03b4;
        case 0x1d03b8u: goto label_1d03b8;
        case 0x1d03bcu: goto label_1d03bc;
        case 0x1d03c0u: goto label_1d03c0;
        case 0x1d03c4u: goto label_1d03c4;
        case 0x1d03c8u: goto label_1d03c8;
        case 0x1d03ccu: goto label_1d03cc;
        case 0x1d03d0u: goto label_1d03d0;
        case 0x1d03d4u: goto label_1d03d4;
        case 0x1d03d8u: goto label_1d03d8;
        case 0x1d03dcu: goto label_1d03dc;
        case 0x1d03e0u: goto label_1d03e0;
        case 0x1d03e4u: goto label_1d03e4;
        case 0x1d03e8u: goto label_1d03e8;
        case 0x1d03ecu: goto label_1d03ec;
        case 0x1d03f0u: goto label_1d03f0;
        case 0x1d03f4u: goto label_1d03f4;
        case 0x1d03f8u: goto label_1d03f8;
        case 0x1d03fcu: goto label_1d03fc;
        case 0x1d0400u: goto label_1d0400;
        case 0x1d0404u: goto label_1d0404;
        case 0x1d0408u: goto label_1d0408;
        case 0x1d040cu: goto label_1d040c;
        case 0x1d0410u: goto label_1d0410;
        case 0x1d0414u: goto label_1d0414;
        case 0x1d0418u: goto label_1d0418;
        case 0x1d041cu: goto label_1d041c;
        case 0x1d0420u: goto label_1d0420;
        case 0x1d0424u: goto label_1d0424;
        case 0x1d0428u: goto label_1d0428;
        case 0x1d042cu: goto label_1d042c;
        case 0x1d0430u: goto label_1d0430;
        case 0x1d0434u: goto label_1d0434;
        case 0x1d0438u: goto label_1d0438;
        case 0x1d043cu: goto label_1d043c;
        case 0x1d0440u: goto label_1d0440;
        case 0x1d0444u: goto label_1d0444;
        case 0x1d0448u: goto label_1d0448;
        case 0x1d044cu: goto label_1d044c;
        case 0x1d0450u: goto label_1d0450;
        case 0x1d0454u: goto label_1d0454;
        case 0x1d0458u: goto label_1d0458;
        case 0x1d045cu: goto label_1d045c;
        case 0x1d0460u: goto label_1d0460;
        case 0x1d0464u: goto label_1d0464;
        case 0x1d0468u: goto label_1d0468;
        case 0x1d046cu: goto label_1d046c;
        case 0x1d0470u: goto label_1d0470;
        case 0x1d0474u: goto label_1d0474;
        case 0x1d0478u: goto label_1d0478;
        case 0x1d047cu: goto label_1d047c;
        case 0x1d0480u: goto label_1d0480;
        case 0x1d0484u: goto label_1d0484;
        case 0x1d0488u: goto label_1d0488;
        case 0x1d048cu: goto label_1d048c;
        case 0x1d0490u: goto label_1d0490;
        case 0x1d0494u: goto label_1d0494;
        case 0x1d0498u: goto label_1d0498;
        case 0x1d049cu: goto label_1d049c;
        case 0x1d04a0u: goto label_1d04a0;
        case 0x1d04a4u: goto label_1d04a4;
        case 0x1d04a8u: goto label_1d04a8;
        case 0x1d04acu: goto label_1d04ac;
        case 0x1d04b0u: goto label_1d04b0;
        case 0x1d04b4u: goto label_1d04b4;
        case 0x1d04b8u: goto label_1d04b8;
        case 0x1d04bcu: goto label_1d04bc;
        case 0x1d04c0u: goto label_1d04c0;
        case 0x1d04c4u: goto label_1d04c4;
        case 0x1d04c8u: goto label_1d04c8;
        case 0x1d04ccu: goto label_1d04cc;
        case 0x1d04d0u: goto label_1d04d0;
        case 0x1d04d4u: goto label_1d04d4;
        case 0x1d04d8u: goto label_1d04d8;
        case 0x1d04dcu: goto label_1d04dc;
        case 0x1d04e0u: goto label_1d04e0;
        case 0x1d04e4u: goto label_1d04e4;
        case 0x1d04e8u: goto label_1d04e8;
        case 0x1d04ecu: goto label_1d04ec;
        case 0x1d04f0u: goto label_1d04f0;
        case 0x1d04f4u: goto label_1d04f4;
        case 0x1d04f8u: goto label_1d04f8;
        case 0x1d04fcu: goto label_1d04fc;
        case 0x1d0500u: goto label_1d0500;
        case 0x1d0504u: goto label_1d0504;
        case 0x1d0508u: goto label_1d0508;
        case 0x1d050cu: goto label_1d050c;
        case 0x1d0510u: goto label_1d0510;
        case 0x1d0514u: goto label_1d0514;
        case 0x1d0518u: goto label_1d0518;
        case 0x1d051cu: goto label_1d051c;
        case 0x1d0520u: goto label_1d0520;
        case 0x1d0524u: goto label_1d0524;
        case 0x1d0528u: goto label_1d0528;
        case 0x1d052cu: goto label_1d052c;
        case 0x1d0530u: goto label_1d0530;
        case 0x1d0534u: goto label_1d0534;
        case 0x1d0538u: goto label_1d0538;
        case 0x1d053cu: goto label_1d053c;
        case 0x1d0540u: goto label_1d0540;
        case 0x1d0544u: goto label_1d0544;
        case 0x1d0548u: goto label_1d0548;
        case 0x1d054cu: goto label_1d054c;
        case 0x1d0550u: goto label_1d0550;
        case 0x1d0554u: goto label_1d0554;
        case 0x1d0558u: goto label_1d0558;
        case 0x1d055cu: goto label_1d055c;
        case 0x1d0560u: goto label_1d0560;
        case 0x1d0564u: goto label_1d0564;
        case 0x1d0568u: goto label_1d0568;
        case 0x1d056cu: goto label_1d056c;
        case 0x1d0570u: goto label_1d0570;
        case 0x1d0574u: goto label_1d0574;
        case 0x1d0578u: goto label_1d0578;
        case 0x1d057cu: goto label_1d057c;
        case 0x1d0580u: goto label_1d0580;
        case 0x1d0584u: goto label_1d0584;
        case 0x1d0588u: goto label_1d0588;
        case 0x1d058cu: goto label_1d058c;
        case 0x1d0590u: goto label_1d0590;
        case 0x1d0594u: goto label_1d0594;
        case 0x1d0598u: goto label_1d0598;
        case 0x1d059cu: goto label_1d059c;
        case 0x1d05a0u: goto label_1d05a0;
        case 0x1d05a4u: goto label_1d05a4;
        case 0x1d05a8u: goto label_1d05a8;
        case 0x1d05acu: goto label_1d05ac;
        case 0x1d05b0u: goto label_1d05b0;
        case 0x1d05b4u: goto label_1d05b4;
        case 0x1d05b8u: goto label_1d05b8;
        case 0x1d05bcu: goto label_1d05bc;
        case 0x1d05c0u: goto label_1d05c0;
        case 0x1d05c4u: goto label_1d05c4;
        case 0x1d05c8u: goto label_1d05c8;
        case 0x1d05ccu: goto label_1d05cc;
        case 0x1d05d0u: goto label_1d05d0;
        case 0x1d05d4u: goto label_1d05d4;
        case 0x1d05d8u: goto label_1d05d8;
        case 0x1d05dcu: goto label_1d05dc;
        case 0x1d05e0u: goto label_1d05e0;
        case 0x1d05e4u: goto label_1d05e4;
        case 0x1d05e8u: goto label_1d05e8;
        case 0x1d05ecu: goto label_1d05ec;
        case 0x1d05f0u: goto label_1d05f0;
        case 0x1d05f4u: goto label_1d05f4;
        case 0x1d05f8u: goto label_1d05f8;
        case 0x1d05fcu: goto label_1d05fc;
        case 0x1d0600u: goto label_1d0600;
        case 0x1d0604u: goto label_1d0604;
        case 0x1d0608u: goto label_1d0608;
        case 0x1d060cu: goto label_1d060c;
        case 0x1d0610u: goto label_1d0610;
        case 0x1d0614u: goto label_1d0614;
        case 0x1d0618u: goto label_1d0618;
        case 0x1d061cu: goto label_1d061c;
        case 0x1d0620u: goto label_1d0620;
        case 0x1d0624u: goto label_1d0624;
        case 0x1d0628u: goto label_1d0628;
        case 0x1d062cu: goto label_1d062c;
        case 0x1d0630u: goto label_1d0630;
        case 0x1d0634u: goto label_1d0634;
        case 0x1d0638u: goto label_1d0638;
        case 0x1d063cu: goto label_1d063c;
        case 0x1d0640u: goto label_1d0640;
        case 0x1d0644u: goto label_1d0644;
        case 0x1d0648u: goto label_1d0648;
        case 0x1d064cu: goto label_1d064c;
        case 0x1d0650u: goto label_1d0650;
        case 0x1d0654u: goto label_1d0654;
        case 0x1d0658u: goto label_1d0658;
        case 0x1d065cu: goto label_1d065c;
        case 0x1d0660u: goto label_1d0660;
        case 0x1d0664u: goto label_1d0664;
        case 0x1d0668u: goto label_1d0668;
        case 0x1d066cu: goto label_1d066c;
        case 0x1d0670u: goto label_1d0670;
        case 0x1d0674u: goto label_1d0674;
        case 0x1d0678u: goto label_1d0678;
        case 0x1d067cu: goto label_1d067c;
        case 0x1d0680u: goto label_1d0680;
        case 0x1d0684u: goto label_1d0684;
        case 0x1d0688u: goto label_1d0688;
        case 0x1d068cu: goto label_1d068c;
        case 0x1d0690u: goto label_1d0690;
        case 0x1d0694u: goto label_1d0694;
        case 0x1d0698u: goto label_1d0698;
        case 0x1d069cu: goto label_1d069c;
        case 0x1d06a0u: goto label_1d06a0;
        case 0x1d06a4u: goto label_1d06a4;
        case 0x1d06a8u: goto label_1d06a8;
        case 0x1d06acu: goto label_1d06ac;
        case 0x1d06b0u: goto label_1d06b0;
        case 0x1d06b4u: goto label_1d06b4;
        case 0x1d06b8u: goto label_1d06b8;
        case 0x1d06bcu: goto label_1d06bc;
        case 0x1d06c0u: goto label_1d06c0;
        case 0x1d06c4u: goto label_1d06c4;
        case 0x1d06c8u: goto label_1d06c8;
        case 0x1d06ccu: goto label_1d06cc;
        case 0x1d06d0u: goto label_1d06d0;
        case 0x1d06d4u: goto label_1d06d4;
        case 0x1d06d8u: goto label_1d06d8;
        case 0x1d06dcu: goto label_1d06dc;
        case 0x1d06e0u: goto label_1d06e0;
        case 0x1d06e4u: goto label_1d06e4;
        case 0x1d06e8u: goto label_1d06e8;
        case 0x1d06ecu: goto label_1d06ec;
        case 0x1d06f0u: goto label_1d06f0;
        case 0x1d06f4u: goto label_1d06f4;
        case 0x1d06f8u: goto label_1d06f8;
        case 0x1d06fcu: goto label_1d06fc;
        case 0x1d0700u: goto label_1d0700;
        case 0x1d0704u: goto label_1d0704;
        case 0x1d0708u: goto label_1d0708;
        case 0x1d070cu: goto label_1d070c;
        case 0x1d0710u: goto label_1d0710;
        case 0x1d0714u: goto label_1d0714;
        case 0x1d0718u: goto label_1d0718;
        case 0x1d071cu: goto label_1d071c;
        case 0x1d0720u: goto label_1d0720;
        case 0x1d0724u: goto label_1d0724;
        case 0x1d0728u: goto label_1d0728;
        case 0x1d072cu: goto label_1d072c;
        case 0x1d0730u: goto label_1d0730;
        case 0x1d0734u: goto label_1d0734;
        case 0x1d0738u: goto label_1d0738;
        case 0x1d073cu: goto label_1d073c;
        case 0x1d0740u: goto label_1d0740;
        case 0x1d0744u: goto label_1d0744;
        case 0x1d0748u: goto label_1d0748;
        case 0x1d074cu: goto label_1d074c;
        case 0x1d0750u: goto label_1d0750;
        case 0x1d0754u: goto label_1d0754;
        case 0x1d0758u: goto label_1d0758;
        case 0x1d075cu: goto label_1d075c;
        case 0x1d0760u: goto label_1d0760;
        case 0x1d0764u: goto label_1d0764;
        case 0x1d0768u: goto label_1d0768;
        case 0x1d076cu: goto label_1d076c;
        case 0x1d0770u: goto label_1d0770;
        case 0x1d0774u: goto label_1d0774;
        case 0x1d0778u: goto label_1d0778;
        case 0x1d077cu: goto label_1d077c;
        case 0x1d0780u: goto label_1d0780;
        case 0x1d0784u: goto label_1d0784;
        case 0x1d0788u: goto label_1d0788;
        case 0x1d078cu: goto label_1d078c;
        case 0x1d0790u: goto label_1d0790;
        case 0x1d0794u: goto label_1d0794;
        case 0x1d0798u: goto label_1d0798;
        case 0x1d079cu: goto label_1d079c;
        case 0x1d07a0u: goto label_1d07a0;
        case 0x1d07a4u: goto label_1d07a4;
        case 0x1d07a8u: goto label_1d07a8;
        case 0x1d07acu: goto label_1d07ac;
        case 0x1d07b0u: goto label_1d07b0;
        case 0x1d07b4u: goto label_1d07b4;
        case 0x1d07b8u: goto label_1d07b8;
        case 0x1d07bcu: goto label_1d07bc;
        case 0x1d07c0u: goto label_1d07c0;
        case 0x1d07c4u: goto label_1d07c4;
        case 0x1d07c8u: goto label_1d07c8;
        case 0x1d07ccu: goto label_1d07cc;
        case 0x1d07d0u: goto label_1d07d0;
        case 0x1d07d4u: goto label_1d07d4;
        case 0x1d07d8u: goto label_1d07d8;
        case 0x1d07dcu: goto label_1d07dc;
        case 0x1d07e0u: goto label_1d07e0;
        case 0x1d07e4u: goto label_1d07e4;
        case 0x1d07e8u: goto label_1d07e8;
        case 0x1d07ecu: goto label_1d07ec;
        case 0x1d07f0u: goto label_1d07f0;
        case 0x1d07f4u: goto label_1d07f4;
        case 0x1d07f8u: goto label_1d07f8;
        case 0x1d07fcu: goto label_1d07fc;
        case 0x1d0800u: goto label_1d0800;
        case 0x1d0804u: goto label_1d0804;
        case 0x1d0808u: goto label_1d0808;
        case 0x1d080cu: goto label_1d080c;
        case 0x1d0810u: goto label_1d0810;
        case 0x1d0814u: goto label_1d0814;
        case 0x1d0818u: goto label_1d0818;
        case 0x1d081cu: goto label_1d081c;
        case 0x1d0820u: goto label_1d0820;
        case 0x1d0824u: goto label_1d0824;
        case 0x1d0828u: goto label_1d0828;
        case 0x1d082cu: goto label_1d082c;
        case 0x1d0830u: goto label_1d0830;
        case 0x1d0834u: goto label_1d0834;
        case 0x1d0838u: goto label_1d0838;
        case 0x1d083cu: goto label_1d083c;
        case 0x1d0840u: goto label_1d0840;
        case 0x1d0844u: goto label_1d0844;
        case 0x1d0848u: goto label_1d0848;
        case 0x1d084cu: goto label_1d084c;
        case 0x1d0850u: goto label_1d0850;
        case 0x1d0854u: goto label_1d0854;
        case 0x1d0858u: goto label_1d0858;
        case 0x1d085cu: goto label_1d085c;
        case 0x1d0860u: goto label_1d0860;
        case 0x1d0864u: goto label_1d0864;
        case 0x1d0868u: goto label_1d0868;
        case 0x1d086cu: goto label_1d086c;
        case 0x1d0870u: goto label_1d0870;
        case 0x1d0874u: goto label_1d0874;
        case 0x1d0878u: goto label_1d0878;
        case 0x1d087cu: goto label_1d087c;
        case 0x1d0880u: goto label_1d0880;
        case 0x1d0884u: goto label_1d0884;
        case 0x1d0888u: goto label_1d0888;
        case 0x1d088cu: goto label_1d088c;
        case 0x1d0890u: goto label_1d0890;
        case 0x1d0894u: goto label_1d0894;
        case 0x1d0898u: goto label_1d0898;
        case 0x1d089cu: goto label_1d089c;
        case 0x1d08a0u: goto label_1d08a0;
        case 0x1d08a4u: goto label_1d08a4;
        case 0x1d08a8u: goto label_1d08a8;
        case 0x1d08acu: goto label_1d08ac;
        case 0x1d08b0u: goto label_1d08b0;
        case 0x1d08b4u: goto label_1d08b4;
        case 0x1d08b8u: goto label_1d08b8;
        case 0x1d08bcu: goto label_1d08bc;
        case 0x1d08c0u: goto label_1d08c0;
        case 0x1d08c4u: goto label_1d08c4;
        case 0x1d08c8u: goto label_1d08c8;
        case 0x1d08ccu: goto label_1d08cc;
        case 0x1d08d0u: goto label_1d08d0;
        case 0x1d08d4u: goto label_1d08d4;
        case 0x1d08d8u: goto label_1d08d8;
        case 0x1d08dcu: goto label_1d08dc;
        case 0x1d08e0u: goto label_1d08e0;
        case 0x1d08e4u: goto label_1d08e4;
        case 0x1d08e8u: goto label_1d08e8;
        case 0x1d08ecu: goto label_1d08ec;
        case 0x1d08f0u: goto label_1d08f0;
        case 0x1d08f4u: goto label_1d08f4;
        case 0x1d08f8u: goto label_1d08f8;
        case 0x1d08fcu: goto label_1d08fc;
        case 0x1d0900u: goto label_1d0900;
        case 0x1d0904u: goto label_1d0904;
        case 0x1d0908u: goto label_1d0908;
        case 0x1d090cu: goto label_1d090c;
        case 0x1d0910u: goto label_1d0910;
        case 0x1d0914u: goto label_1d0914;
        case 0x1d0918u: goto label_1d0918;
        case 0x1d091cu: goto label_1d091c;
        case 0x1d0920u: goto label_1d0920;
        case 0x1d0924u: goto label_1d0924;
        case 0x1d0928u: goto label_1d0928;
        case 0x1d092cu: goto label_1d092c;
        case 0x1d0930u: goto label_1d0930;
        case 0x1d0934u: goto label_1d0934;
        case 0x1d0938u: goto label_1d0938;
        case 0x1d093cu: goto label_1d093c;
        case 0x1d0940u: goto label_1d0940;
        case 0x1d0944u: goto label_1d0944;
        case 0x1d0948u: goto label_1d0948;
        case 0x1d094cu: goto label_1d094c;
        case 0x1d0950u: goto label_1d0950;
        case 0x1d0954u: goto label_1d0954;
        case 0x1d0958u: goto label_1d0958;
        case 0x1d095cu: goto label_1d095c;
        case 0x1d0960u: goto label_1d0960;
        case 0x1d0964u: goto label_1d0964;
        case 0x1d0968u: goto label_1d0968;
        case 0x1d096cu: goto label_1d096c;
        case 0x1d0970u: goto label_1d0970;
        case 0x1d0974u: goto label_1d0974;
        case 0x1d0978u: goto label_1d0978;
        case 0x1d097cu: goto label_1d097c;
        case 0x1d0980u: goto label_1d0980;
        case 0x1d0984u: goto label_1d0984;
        case 0x1d0988u: goto label_1d0988;
        case 0x1d098cu: goto label_1d098c;
        case 0x1d0990u: goto label_1d0990;
        case 0x1d0994u: goto label_1d0994;
        case 0x1d0998u: goto label_1d0998;
        case 0x1d099cu: goto label_1d099c;
        case 0x1d09a0u: goto label_1d09a0;
        case 0x1d09a4u: goto label_1d09a4;
        case 0x1d09a8u: goto label_1d09a8;
        case 0x1d09acu: goto label_1d09ac;
        case 0x1d09b0u: goto label_1d09b0;
        case 0x1d09b4u: goto label_1d09b4;
        case 0x1d09b8u: goto label_1d09b8;
        case 0x1d09bcu: goto label_1d09bc;
        case 0x1d09c0u: goto label_1d09c0;
        case 0x1d09c4u: goto label_1d09c4;
        case 0x1d09c8u: goto label_1d09c8;
        case 0x1d09ccu: goto label_1d09cc;
        case 0x1d09d0u: goto label_1d09d0;
        case 0x1d09d4u: goto label_1d09d4;
        case 0x1d09d8u: goto label_1d09d8;
        case 0x1d09dcu: goto label_1d09dc;
        case 0x1d09e0u: goto label_1d09e0;
        case 0x1d09e4u: goto label_1d09e4;
        case 0x1d09e8u: goto label_1d09e8;
        case 0x1d09ecu: goto label_1d09ec;
        case 0x1d09f0u: goto label_1d09f0;
        case 0x1d09f4u: goto label_1d09f4;
        case 0x1d09f8u: goto label_1d09f8;
        case 0x1d09fcu: goto label_1d09fc;
        case 0x1d0a00u: goto label_1d0a00;
        case 0x1d0a04u: goto label_1d0a04;
        case 0x1d0a08u: goto label_1d0a08;
        case 0x1d0a0cu: goto label_1d0a0c;
        case 0x1d0a10u: goto label_1d0a10;
        case 0x1d0a14u: goto label_1d0a14;
        case 0x1d0a18u: goto label_1d0a18;
        case 0x1d0a1cu: goto label_1d0a1c;
        case 0x1d0a20u: goto label_1d0a20;
        case 0x1d0a24u: goto label_1d0a24;
        case 0x1d0a28u: goto label_1d0a28;
        case 0x1d0a2cu: goto label_1d0a2c;
        case 0x1d0a30u: goto label_1d0a30;
        case 0x1d0a34u: goto label_1d0a34;
        case 0x1d0a38u: goto label_1d0a38;
        case 0x1d0a3cu: goto label_1d0a3c;
        case 0x1d0a40u: goto label_1d0a40;
        case 0x1d0a44u: goto label_1d0a44;
        case 0x1d0a48u: goto label_1d0a48;
        case 0x1d0a4cu: goto label_1d0a4c;
        case 0x1d0a50u: goto label_1d0a50;
        case 0x1d0a54u: goto label_1d0a54;
        case 0x1d0a58u: goto label_1d0a58;
        case 0x1d0a5cu: goto label_1d0a5c;
        case 0x1d0a60u: goto label_1d0a60;
        case 0x1d0a64u: goto label_1d0a64;
        case 0x1d0a68u: goto label_1d0a68;
        case 0x1d0a6cu: goto label_1d0a6c;
        case 0x1d0a70u: goto label_1d0a70;
        case 0x1d0a74u: goto label_1d0a74;
        case 0x1d0a78u: goto label_1d0a78;
        case 0x1d0a7cu: goto label_1d0a7c;
        case 0x1d0a80u: goto label_1d0a80;
        case 0x1d0a84u: goto label_1d0a84;
        case 0x1d0a88u: goto label_1d0a88;
        case 0x1d0a8cu: goto label_1d0a8c;
        case 0x1d0a90u: goto label_1d0a90;
        case 0x1d0a94u: goto label_1d0a94;
        case 0x1d0a98u: goto label_1d0a98;
        case 0x1d0a9cu: goto label_1d0a9c;
        case 0x1d0aa0u: goto label_1d0aa0;
        case 0x1d0aa4u: goto label_1d0aa4;
        case 0x1d0aa8u: goto label_1d0aa8;
        case 0x1d0aacu: goto label_1d0aac;
        case 0x1d0ab0u: goto label_1d0ab0;
        case 0x1d0ab4u: goto label_1d0ab4;
        case 0x1d0ab8u: goto label_1d0ab8;
        case 0x1d0abcu: goto label_1d0abc;
        case 0x1d0ac0u: goto label_1d0ac0;
        case 0x1d0ac4u: goto label_1d0ac4;
        case 0x1d0ac8u: goto label_1d0ac8;
        case 0x1d0accu: goto label_1d0acc;
        case 0x1d0ad0u: goto label_1d0ad0;
        case 0x1d0ad4u: goto label_1d0ad4;
        case 0x1d0ad8u: goto label_1d0ad8;
        case 0x1d0adcu: goto label_1d0adc;
        case 0x1d0ae0u: goto label_1d0ae0;
        case 0x1d0ae4u: goto label_1d0ae4;
        case 0x1d0ae8u: goto label_1d0ae8;
        case 0x1d0aecu: goto label_1d0aec;
        case 0x1d0af0u: goto label_1d0af0;
        case 0x1d0af4u: goto label_1d0af4;
        case 0x1d0af8u: goto label_1d0af8;
        case 0x1d0afcu: goto label_1d0afc;
        case 0x1d0b00u: goto label_1d0b00;
        case 0x1d0b04u: goto label_1d0b04;
        case 0x1d0b08u: goto label_1d0b08;
        case 0x1d0b0cu: goto label_1d0b0c;
        case 0x1d0b10u: goto label_1d0b10;
        case 0x1d0b14u: goto label_1d0b14;
        case 0x1d0b18u: goto label_1d0b18;
        case 0x1d0b1cu: goto label_1d0b1c;
        case 0x1d0b20u: goto label_1d0b20;
        case 0x1d0b24u: goto label_1d0b24;
        case 0x1d0b28u: goto label_1d0b28;
        case 0x1d0b2cu: goto label_1d0b2c;
        case 0x1d0b30u: goto label_1d0b30;
        case 0x1d0b34u: goto label_1d0b34;
        case 0x1d0b38u: goto label_1d0b38;
        case 0x1d0b3cu: goto label_1d0b3c;
        case 0x1d0b40u: goto label_1d0b40;
        case 0x1d0b44u: goto label_1d0b44;
        case 0x1d0b48u: goto label_1d0b48;
        case 0x1d0b4cu: goto label_1d0b4c;
        case 0x1d0b50u: goto label_1d0b50;
        case 0x1d0b54u: goto label_1d0b54;
        case 0x1d0b58u: goto label_1d0b58;
        case 0x1d0b5cu: goto label_1d0b5c;
        case 0x1d0b60u: goto label_1d0b60;
        case 0x1d0b64u: goto label_1d0b64;
        case 0x1d0b68u: goto label_1d0b68;
        case 0x1d0b6cu: goto label_1d0b6c;
        case 0x1d0b70u: goto label_1d0b70;
        case 0x1d0b74u: goto label_1d0b74;
        case 0x1d0b78u: goto label_1d0b78;
        case 0x1d0b7cu: goto label_1d0b7c;
        case 0x1d0b80u: goto label_1d0b80;
        case 0x1d0b84u: goto label_1d0b84;
        case 0x1d0b88u: goto label_1d0b88;
        case 0x1d0b8cu: goto label_1d0b8c;
        case 0x1d0b90u: goto label_1d0b90;
        case 0x1d0b94u: goto label_1d0b94;
        case 0x1d0b98u: goto label_1d0b98;
        case 0x1d0b9cu: goto label_1d0b9c;
        case 0x1d0ba0u: goto label_1d0ba0;
        case 0x1d0ba4u: goto label_1d0ba4;
        case 0x1d0ba8u: goto label_1d0ba8;
        case 0x1d0bacu: goto label_1d0bac;
        case 0x1d0bb0u: goto label_1d0bb0;
        case 0x1d0bb4u: goto label_1d0bb4;
        case 0x1d0bb8u: goto label_1d0bb8;
        case 0x1d0bbcu: goto label_1d0bbc;
        case 0x1d0bc0u: goto label_1d0bc0;
        case 0x1d0bc4u: goto label_1d0bc4;
        case 0x1d0bc8u: goto label_1d0bc8;
        case 0x1d0bccu: goto label_1d0bcc;
        case 0x1d0bd0u: goto label_1d0bd0;
        case 0x1d0bd4u: goto label_1d0bd4;
        case 0x1d0bd8u: goto label_1d0bd8;
        case 0x1d0bdcu: goto label_1d0bdc;
        case 0x1d0be0u: goto label_1d0be0;
        case 0x1d0be4u: goto label_1d0be4;
        case 0x1d0be8u: goto label_1d0be8;
        case 0x1d0becu: goto label_1d0bec;
        case 0x1d0bf0u: goto label_1d0bf0;
        case 0x1d0bf4u: goto label_1d0bf4;
        case 0x1d0bf8u: goto label_1d0bf8;
        case 0x1d0bfcu: goto label_1d0bfc;
        case 0x1d0c00u: goto label_1d0c00;
        case 0x1d0c04u: goto label_1d0c04;
        case 0x1d0c08u: goto label_1d0c08;
        case 0x1d0c0cu: goto label_1d0c0c;
        case 0x1d0c10u: goto label_1d0c10;
        case 0x1d0c14u: goto label_1d0c14;
        case 0x1d0c18u: goto label_1d0c18;
        case 0x1d0c1cu: goto label_1d0c1c;
        case 0x1d0c20u: goto label_1d0c20;
        case 0x1d0c24u: goto label_1d0c24;
        case 0x1d0c28u: goto label_1d0c28;
        case 0x1d0c2cu: goto label_1d0c2c;
        case 0x1d0c30u: goto label_1d0c30;
        case 0x1d0c34u: goto label_1d0c34;
        case 0x1d0c38u: goto label_1d0c38;
        case 0x1d0c3cu: goto label_1d0c3c;
        case 0x1d0c40u: goto label_1d0c40;
        case 0x1d0c44u: goto label_1d0c44;
        case 0x1d0c48u: goto label_1d0c48;
        case 0x1d0c4cu: goto label_1d0c4c;
        case 0x1d0c50u: goto label_1d0c50;
        case 0x1d0c54u: goto label_1d0c54;
        case 0x1d0c58u: goto label_1d0c58;
        case 0x1d0c5cu: goto label_1d0c5c;
        case 0x1d0c60u: goto label_1d0c60;
        case 0x1d0c64u: goto label_1d0c64;
        case 0x1d0c68u: goto label_1d0c68;
        case 0x1d0c6cu: goto label_1d0c6c;
        case 0x1d0c70u: goto label_1d0c70;
        case 0x1d0c74u: goto label_1d0c74;
        case 0x1d0c78u: goto label_1d0c78;
        case 0x1d0c7cu: goto label_1d0c7c;
        case 0x1d0c80u: goto label_1d0c80;
        case 0x1d0c84u: goto label_1d0c84;
        case 0x1d0c88u: goto label_1d0c88;
        case 0x1d0c8cu: goto label_1d0c8c;
        case 0x1d0c90u: goto label_1d0c90;
        case 0x1d0c94u: goto label_1d0c94;
        case 0x1d0c98u: goto label_1d0c98;
        case 0x1d0c9cu: goto label_1d0c9c;
        case 0x1d0ca0u: goto label_1d0ca0;
        case 0x1d0ca4u: goto label_1d0ca4;
        case 0x1d0ca8u: goto label_1d0ca8;
        case 0x1d0cacu: goto label_1d0cac;
        case 0x1d0cb0u: goto label_1d0cb0;
        case 0x1d0cb4u: goto label_1d0cb4;
        case 0x1d0cb8u: goto label_1d0cb8;
        case 0x1d0cbcu: goto label_1d0cbc;
        case 0x1d0cc0u: goto label_1d0cc0;
        case 0x1d0cc4u: goto label_1d0cc4;
        case 0x1d0cc8u: goto label_1d0cc8;
        case 0x1d0cccu: goto label_1d0ccc;
        case 0x1d0cd0u: goto label_1d0cd0;
        case 0x1d0cd4u: goto label_1d0cd4;
        case 0x1d0cd8u: goto label_1d0cd8;
        case 0x1d0cdcu: goto label_1d0cdc;
        case 0x1d0ce0u: goto label_1d0ce0;
        case 0x1d0ce4u: goto label_1d0ce4;
        case 0x1d0ce8u: goto label_1d0ce8;
        case 0x1d0cecu: goto label_1d0cec;
        case 0x1d0cf0u: goto label_1d0cf0;
        case 0x1d0cf4u: goto label_1d0cf4;
        case 0x1d0cf8u: goto label_1d0cf8;
        case 0x1d0cfcu: goto label_1d0cfc;
        case 0x1d0d00u: goto label_1d0d00;
        case 0x1d0d04u: goto label_1d0d04;
        case 0x1d0d08u: goto label_1d0d08;
        case 0x1d0d0cu: goto label_1d0d0c;
        case 0x1d0d10u: goto label_1d0d10;
        case 0x1d0d14u: goto label_1d0d14;
        case 0x1d0d18u: goto label_1d0d18;
        case 0x1d0d1cu: goto label_1d0d1c;
        case 0x1d0d20u: goto label_1d0d20;
        case 0x1d0d24u: goto label_1d0d24;
        case 0x1d0d28u: goto label_1d0d28;
        case 0x1d0d2cu: goto label_1d0d2c;
        case 0x1d0d30u: goto label_1d0d30;
        case 0x1d0d34u: goto label_1d0d34;
        case 0x1d0d38u: goto label_1d0d38;
        case 0x1d0d3cu: goto label_1d0d3c;
        case 0x1d0d40u: goto label_1d0d40;
        case 0x1d0d44u: goto label_1d0d44;
        case 0x1d0d48u: goto label_1d0d48;
        case 0x1d0d4cu: goto label_1d0d4c;
        case 0x1d0d50u: goto label_1d0d50;
        case 0x1d0d54u: goto label_1d0d54;
        case 0x1d0d58u: goto label_1d0d58;
        case 0x1d0d5cu: goto label_1d0d5c;
        case 0x1d0d60u: goto label_1d0d60;
        case 0x1d0d64u: goto label_1d0d64;
        case 0x1d0d68u: goto label_1d0d68;
        case 0x1d0d6cu: goto label_1d0d6c;
        case 0x1d0d70u: goto label_1d0d70;
        case 0x1d0d74u: goto label_1d0d74;
        case 0x1d0d78u: goto label_1d0d78;
        case 0x1d0d7cu: goto label_1d0d7c;
        case 0x1d0d80u: goto label_1d0d80;
        case 0x1d0d84u: goto label_1d0d84;
        case 0x1d0d88u: goto label_1d0d88;
        case 0x1d0d8cu: goto label_1d0d8c;
        case 0x1d0d90u: goto label_1d0d90;
        case 0x1d0d94u: goto label_1d0d94;
        case 0x1d0d98u: goto label_1d0d98;
        case 0x1d0d9cu: goto label_1d0d9c;
        case 0x1d0da0u: goto label_1d0da0;
        case 0x1d0da4u: goto label_1d0da4;
        case 0x1d0da8u: goto label_1d0da8;
        case 0x1d0dacu: goto label_1d0dac;
        case 0x1d0db0u: goto label_1d0db0;
        case 0x1d0db4u: goto label_1d0db4;
        case 0x1d0db8u: goto label_1d0db8;
        case 0x1d0dbcu: goto label_1d0dbc;
        case 0x1d0dc0u: goto label_1d0dc0;
        case 0x1d0dc4u: goto label_1d0dc4;
        case 0x1d0dc8u: goto label_1d0dc8;
        case 0x1d0dccu: goto label_1d0dcc;
        case 0x1d0dd0u: goto label_1d0dd0;
        case 0x1d0dd4u: goto label_1d0dd4;
        case 0x1d0dd8u: goto label_1d0dd8;
        case 0x1d0ddcu: goto label_1d0ddc;
        case 0x1d0de0u: goto label_1d0de0;
        case 0x1d0de4u: goto label_1d0de4;
        case 0x1d0de8u: goto label_1d0de8;
        case 0x1d0decu: goto label_1d0dec;
        case 0x1d0df0u: goto label_1d0df0;
        case 0x1d0df4u: goto label_1d0df4;
        case 0x1d0df8u: goto label_1d0df8;
        case 0x1d0dfcu: goto label_1d0dfc;
        case 0x1d0e00u: goto label_1d0e00;
        case 0x1d0e04u: goto label_1d0e04;
        case 0x1d0e08u: goto label_1d0e08;
        case 0x1d0e0cu: goto label_1d0e0c;
        case 0x1d0e10u: goto label_1d0e10;
        case 0x1d0e14u: goto label_1d0e14;
        case 0x1d0e18u: goto label_1d0e18;
        case 0x1d0e1cu: goto label_1d0e1c;
        case 0x1d0e20u: goto label_1d0e20;
        case 0x1d0e24u: goto label_1d0e24;
        case 0x1d0e28u: goto label_1d0e28;
        case 0x1d0e2cu: goto label_1d0e2c;
        case 0x1d0e30u: goto label_1d0e30;
        case 0x1d0e34u: goto label_1d0e34;
        case 0x1d0e38u: goto label_1d0e38;
        case 0x1d0e3cu: goto label_1d0e3c;
        case 0x1d0e40u: goto label_1d0e40;
        case 0x1d0e44u: goto label_1d0e44;
        case 0x1d0e48u: goto label_1d0e48;
        case 0x1d0e4cu: goto label_1d0e4c;
        case 0x1d0e50u: goto label_1d0e50;
        case 0x1d0e54u: goto label_1d0e54;
        case 0x1d0e58u: goto label_1d0e58;
        case 0x1d0e5cu: goto label_1d0e5c;
        case 0x1d0e60u: goto label_1d0e60;
        case 0x1d0e64u: goto label_1d0e64;
        case 0x1d0e68u: goto label_1d0e68;
        case 0x1d0e6cu: goto label_1d0e6c;
        case 0x1d0e70u: goto label_1d0e70;
        case 0x1d0e74u: goto label_1d0e74;
        case 0x1d0e78u: goto label_1d0e78;
        case 0x1d0e7cu: goto label_1d0e7c;
        case 0x1d0e80u: goto label_1d0e80;
        case 0x1d0e84u: goto label_1d0e84;
        case 0x1d0e88u: goto label_1d0e88;
        case 0x1d0e8cu: goto label_1d0e8c;
        case 0x1d0e90u: goto label_1d0e90;
        case 0x1d0e94u: goto label_1d0e94;
        case 0x1d0e98u: goto label_1d0e98;
        case 0x1d0e9cu: goto label_1d0e9c;
        case 0x1d0ea0u: goto label_1d0ea0;
        case 0x1d0ea4u: goto label_1d0ea4;
        case 0x1d0ea8u: goto label_1d0ea8;
        case 0x1d0eacu: goto label_1d0eac;
        case 0x1d0eb0u: goto label_1d0eb0;
        case 0x1d0eb4u: goto label_1d0eb4;
        case 0x1d0eb8u: goto label_1d0eb8;
        case 0x1d0ebcu: goto label_1d0ebc;
        case 0x1d0ec0u: goto label_1d0ec0;
        case 0x1d0ec4u: goto label_1d0ec4;
        case 0x1d0ec8u: goto label_1d0ec8;
        case 0x1d0eccu: goto label_1d0ecc;
        case 0x1d0ed0u: goto label_1d0ed0;
        case 0x1d0ed4u: goto label_1d0ed4;
        case 0x1d0ed8u: goto label_1d0ed8;
        case 0x1d0edcu: goto label_1d0edc;
        case 0x1d0ee0u: goto label_1d0ee0;
        case 0x1d0ee4u: goto label_1d0ee4;
        case 0x1d0ee8u: goto label_1d0ee8;
        case 0x1d0eecu: goto label_1d0eec;
        case 0x1d0ef0u: goto label_1d0ef0;
        case 0x1d0ef4u: goto label_1d0ef4;
        case 0x1d0ef8u: goto label_1d0ef8;
        case 0x1d0efcu: goto label_1d0efc;
        case 0x1d0f00u: goto label_1d0f00;
        case 0x1d0f04u: goto label_1d0f04;
        case 0x1d0f08u: goto label_1d0f08;
        case 0x1d0f0cu: goto label_1d0f0c;
        case 0x1d0f10u: goto label_1d0f10;
        case 0x1d0f14u: goto label_1d0f14;
        case 0x1d0f18u: goto label_1d0f18;
        case 0x1d0f1cu: goto label_1d0f1c;
        case 0x1d0f20u: goto label_1d0f20;
        case 0x1d0f24u: goto label_1d0f24;
        case 0x1d0f28u: goto label_1d0f28;
        case 0x1d0f2cu: goto label_1d0f2c;
        case 0x1d0f30u: goto label_1d0f30;
        case 0x1d0f34u: goto label_1d0f34;
        case 0x1d0f38u: goto label_1d0f38;
        case 0x1d0f3cu: goto label_1d0f3c;
        case 0x1d0f40u: goto label_1d0f40;
        case 0x1d0f44u: goto label_1d0f44;
        case 0x1d0f48u: goto label_1d0f48;
        case 0x1d0f4cu: goto label_1d0f4c;
        case 0x1d0f50u: goto label_1d0f50;
        case 0x1d0f54u: goto label_1d0f54;
        case 0x1d0f58u: goto label_1d0f58;
        case 0x1d0f5cu: goto label_1d0f5c;
        case 0x1d0f60u: goto label_1d0f60;
        case 0x1d0f64u: goto label_1d0f64;
        case 0x1d0f68u: goto label_1d0f68;
        case 0x1d0f6cu: goto label_1d0f6c;
        case 0x1d0f70u: goto label_1d0f70;
        case 0x1d0f74u: goto label_1d0f74;
        case 0x1d0f78u: goto label_1d0f78;
        case 0x1d0f7cu: goto label_1d0f7c;
        case 0x1d0f80u: goto label_1d0f80;
        case 0x1d0f84u: goto label_1d0f84;
        case 0x1d0f88u: goto label_1d0f88;
        case 0x1d0f8cu: goto label_1d0f8c;
        case 0x1d0f90u: goto label_1d0f90;
        case 0x1d0f94u: goto label_1d0f94;
        case 0x1d0f98u: goto label_1d0f98;
        case 0x1d0f9cu: goto label_1d0f9c;
        case 0x1d0fa0u: goto label_1d0fa0;
        case 0x1d0fa4u: goto label_1d0fa4;
        case 0x1d0fa8u: goto label_1d0fa8;
        case 0x1d0facu: goto label_1d0fac;
        case 0x1d0fb0u: goto label_1d0fb0;
        case 0x1d0fb4u: goto label_1d0fb4;
        case 0x1d0fb8u: goto label_1d0fb8;
        case 0x1d0fbcu: goto label_1d0fbc;
        case 0x1d0fc0u: goto label_1d0fc0;
        case 0x1d0fc4u: goto label_1d0fc4;
        case 0x1d0fc8u: goto label_1d0fc8;
        case 0x1d0fccu: goto label_1d0fcc;
        case 0x1d0fd0u: goto label_1d0fd0;
        case 0x1d0fd4u: goto label_1d0fd4;
        case 0x1d0fd8u: goto label_1d0fd8;
        case 0x1d0fdcu: goto label_1d0fdc;
        case 0x1d0fe0u: goto label_1d0fe0;
        case 0x1d0fe4u: goto label_1d0fe4;
        case 0x1d0fe8u: goto label_1d0fe8;
        case 0x1d0fecu: goto label_1d0fec;
        case 0x1d0ff0u: goto label_1d0ff0;
        case 0x1d0ff4u: goto label_1d0ff4;
        case 0x1d0ff8u: goto label_1d0ff8;
        case 0x1d0ffcu: goto label_1d0ffc;
        case 0x1d1000u: goto label_1d1000;
        case 0x1d1004u: goto label_1d1004;
        case 0x1d1008u: goto label_1d1008;
        case 0x1d100cu: goto label_1d100c;
        case 0x1d1010u: goto label_1d1010;
        case 0x1d1014u: goto label_1d1014;
        case 0x1d1018u: goto label_1d1018;
        case 0x1d101cu: goto label_1d101c;
        case 0x1d1020u: goto label_1d1020;
        case 0x1d1024u: goto label_1d1024;
        case 0x1d1028u: goto label_1d1028;
        case 0x1d102cu: goto label_1d102c;
        case 0x1d1030u: goto label_1d1030;
        case 0x1d1034u: goto label_1d1034;
        case 0x1d1038u: goto label_1d1038;
        case 0x1d103cu: goto label_1d103c;
        case 0x1d1040u: goto label_1d1040;
        case 0x1d1044u: goto label_1d1044;
        case 0x1d1048u: goto label_1d1048;
        case 0x1d104cu: goto label_1d104c;
        case 0x1d1050u: goto label_1d1050;
        case 0x1d1054u: goto label_1d1054;
        case 0x1d1058u: goto label_1d1058;
        case 0x1d105cu: goto label_1d105c;
        case 0x1d1060u: goto label_1d1060;
        case 0x1d1064u: goto label_1d1064;
        case 0x1d1068u: goto label_1d1068;
        case 0x1d106cu: goto label_1d106c;
        case 0x1d1070u: goto label_1d1070;
        case 0x1d1074u: goto label_1d1074;
        case 0x1d1078u: goto label_1d1078;
        case 0x1d107cu: goto label_1d107c;
        case 0x1d1080u: goto label_1d1080;
        case 0x1d1084u: goto label_1d1084;
        case 0x1d1088u: goto label_1d1088;
        case 0x1d108cu: goto label_1d108c;
        case 0x1d1090u: goto label_1d1090;
        case 0x1d1094u: goto label_1d1094;
        case 0x1d1098u: goto label_1d1098;
        case 0x1d109cu: goto label_1d109c;
        case 0x1d10a0u: goto label_1d10a0;
        case 0x1d10a4u: goto label_1d10a4;
        case 0x1d10a8u: goto label_1d10a8;
        case 0x1d10acu: goto label_1d10ac;
        case 0x1d10b0u: goto label_1d10b0;
        case 0x1d10b4u: goto label_1d10b4;
        case 0x1d10b8u: goto label_1d10b8;
        case 0x1d10bcu: goto label_1d10bc;
        case 0x1d10c0u: goto label_1d10c0;
        case 0x1d10c4u: goto label_1d10c4;
        case 0x1d10c8u: goto label_1d10c8;
        case 0x1d10ccu: goto label_1d10cc;
        case 0x1d10d0u: goto label_1d10d0;
        case 0x1d10d4u: goto label_1d10d4;
        case 0x1d10d8u: goto label_1d10d8;
        case 0x1d10dcu: goto label_1d10dc;
        case 0x1d10e0u: goto label_1d10e0;
        case 0x1d10e4u: goto label_1d10e4;
        case 0x1d10e8u: goto label_1d10e8;
        case 0x1d10ecu: goto label_1d10ec;
        case 0x1d10f0u: goto label_1d10f0;
        case 0x1d10f4u: goto label_1d10f4;
        case 0x1d10f8u: goto label_1d10f8;
        case 0x1d10fcu: goto label_1d10fc;
        case 0x1d1100u: goto label_1d1100;
        case 0x1d1104u: goto label_1d1104;
        case 0x1d1108u: goto label_1d1108;
        case 0x1d110cu: goto label_1d110c;
        case 0x1d1110u: goto label_1d1110;
        case 0x1d1114u: goto label_1d1114;
        case 0x1d1118u: goto label_1d1118;
        case 0x1d111cu: goto label_1d111c;
        case 0x1d1120u: goto label_1d1120;
        case 0x1d1124u: goto label_1d1124;
        case 0x1d1128u: goto label_1d1128;
        case 0x1d112cu: goto label_1d112c;
        case 0x1d1130u: goto label_1d1130;
        case 0x1d1134u: goto label_1d1134;
        case 0x1d1138u: goto label_1d1138;
        case 0x1d113cu: goto label_1d113c;
        case 0x1d1140u: goto label_1d1140;
        case 0x1d1144u: goto label_1d1144;
        case 0x1d1148u: goto label_1d1148;
        case 0x1d114cu: goto label_1d114c;
        case 0x1d1150u: goto label_1d1150;
        case 0x1d1154u: goto label_1d1154;
        case 0x1d1158u: goto label_1d1158;
        case 0x1d115cu: goto label_1d115c;
        case 0x1d1160u: goto label_1d1160;
        case 0x1d1164u: goto label_1d1164;
        case 0x1d1168u: goto label_1d1168;
        case 0x1d116cu: goto label_1d116c;
        case 0x1d1170u: goto label_1d1170;
        case 0x1d1174u: goto label_1d1174;
        case 0x1d1178u: goto label_1d1178;
        case 0x1d117cu: goto label_1d117c;
        case 0x1d1180u: goto label_1d1180;
        case 0x1d1184u: goto label_1d1184;
        case 0x1d1188u: goto label_1d1188;
        case 0x1d118cu: goto label_1d118c;
        case 0x1d1190u: goto label_1d1190;
        case 0x1d1194u: goto label_1d1194;
        case 0x1d1198u: goto label_1d1198;
        case 0x1d119cu: goto label_1d119c;
        case 0x1d11a0u: goto label_1d11a0;
        case 0x1d11a4u: goto label_1d11a4;
        case 0x1d11a8u: goto label_1d11a8;
        case 0x1d11acu: goto label_1d11ac;
        case 0x1d11b0u: goto label_1d11b0;
        case 0x1d11b4u: goto label_1d11b4;
        case 0x1d11b8u: goto label_1d11b8;
        case 0x1d11bcu: goto label_1d11bc;
        case 0x1d11c0u: goto label_1d11c0;
        case 0x1d11c4u: goto label_1d11c4;
        case 0x1d11c8u: goto label_1d11c8;
        case 0x1d11ccu: goto label_1d11cc;
        case 0x1d11d0u: goto label_1d11d0;
        case 0x1d11d4u: goto label_1d11d4;
        case 0x1d11d8u: goto label_1d11d8;
        case 0x1d11dcu: goto label_1d11dc;
        case 0x1d11e0u: goto label_1d11e0;
        case 0x1d11e4u: goto label_1d11e4;
        case 0x1d11e8u: goto label_1d11e8;
        case 0x1d11ecu: goto label_1d11ec;
        case 0x1d11f0u: goto label_1d11f0;
        case 0x1d11f4u: goto label_1d11f4;
        case 0x1d11f8u: goto label_1d11f8;
        case 0x1d11fcu: goto label_1d11fc;
        case 0x1d1200u: goto label_1d1200;
        case 0x1d1204u: goto label_1d1204;
        case 0x1d1208u: goto label_1d1208;
        case 0x1d120cu: goto label_1d120c;
        case 0x1d1210u: goto label_1d1210;
        case 0x1d1214u: goto label_1d1214;
        case 0x1d1218u: goto label_1d1218;
        case 0x1d121cu: goto label_1d121c;
        case 0x1d1220u: goto label_1d1220;
        case 0x1d1224u: goto label_1d1224;
        case 0x1d1228u: goto label_1d1228;
        case 0x1d122cu: goto label_1d122c;
        case 0x1d1230u: goto label_1d1230;
        case 0x1d1234u: goto label_1d1234;
        case 0x1d1238u: goto label_1d1238;
        case 0x1d123cu: goto label_1d123c;
        case 0x1d1240u: goto label_1d1240;
        case 0x1d1244u: goto label_1d1244;
        case 0x1d1248u: goto label_1d1248;
        case 0x1d124cu: goto label_1d124c;
        case 0x1d1250u: goto label_1d1250;
        case 0x1d1254u: goto label_1d1254;
        case 0x1d1258u: goto label_1d1258;
        case 0x1d125cu: goto label_1d125c;
        case 0x1d1260u: goto label_1d1260;
        case 0x1d1264u: goto label_1d1264;
        case 0x1d1268u: goto label_1d1268;
        case 0x1d126cu: goto label_1d126c;
        case 0x1d1270u: goto label_1d1270;
        case 0x1d1274u: goto label_1d1274;
        case 0x1d1278u: goto label_1d1278;
        case 0x1d127cu: goto label_1d127c;
        case 0x1d1280u: goto label_1d1280;
        case 0x1d1284u: goto label_1d1284;
        case 0x1d1288u: goto label_1d1288;
        case 0x1d128cu: goto label_1d128c;
        case 0x1d1290u: goto label_1d1290;
        case 0x1d1294u: goto label_1d1294;
        case 0x1d1298u: goto label_1d1298;
        case 0x1d129cu: goto label_1d129c;
        case 0x1d12a0u: goto label_1d12a0;
        case 0x1d12a4u: goto label_1d12a4;
        case 0x1d12a8u: goto label_1d12a8;
        case 0x1d12acu: goto label_1d12ac;
        case 0x1d12b0u: goto label_1d12b0;
        case 0x1d12b4u: goto label_1d12b4;
        case 0x1d12b8u: goto label_1d12b8;
        case 0x1d12bcu: goto label_1d12bc;
        default: break;
    }

    ctx->pc = 0x1cee10u;

label_1cee10:
    // 0x1cee10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cee10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cee14:
    // 0x1cee14: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1cee14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1cee18:
    // 0x1cee18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1cee18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1cee1c:
    // 0x1cee1c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1cee1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1cee20:
    // 0x1cee20: 0x3e00008  jr          $ra
label_1cee24:
    if (ctx->pc == 0x1CEE24u) {
        ctx->pc = 0x1CEE28u;
        goto label_1cee28;
    }
    ctx->pc = 0x1CEE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEE28u;
label_1cee28:
    // 0x1cee28: 0x0  nop
    ctx->pc = 0x1cee28u;
    // NOP
label_1cee2c:
    // 0x1cee2c: 0x0  nop
    ctx->pc = 0x1cee2cu;
    // NOP
label_1cee30:
    // 0x1cee30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1cee30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1cee34:
    // 0x1cee34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cee34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1cee38:
    // 0x1cee38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cee38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1cee3c:
    // 0x1cee3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cee3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cee40:
    // 0x1cee40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cee40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cee44:
    // 0x1cee44: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x1cee44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_1cee48:
    // 0x1cee48: 0xc11c448  jal         func_471120
label_1cee4c:
    if (ctx->pc == 0x1CEE4Cu) {
        ctx->pc = 0x1CEE50u;
        goto label_1cee50;
    }
    ctx->pc = 0x1CEE48u;
    SET_GPR_U32(ctx, 31, 0x1CEE50u);
    ctx->pc = 0x471120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471120u, 0x1CEE48u, 0x1CEE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEE50u;
label_1cee50:
    // 0x1cee50: 0xc12242c  jal         func_4890B0
label_1cee54:
    if (ctx->pc == 0x1CEE54u) {
        ctx->pc = 0x1CEE58u;
        goto label_1cee58;
    }
    ctx->pc = 0x1CEE50u;
    SET_GPR_U32(ctx, 31, 0x1CEE58u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x1CEE50u, 0x1CEE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEE58u;
label_1cee58:
    // 0x1cee58: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1cee58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cee5c:
    // 0x1cee5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cee5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cee60:
    // 0x1cee60: 0xc105f96  jal         func_417E58
label_1cee64:
    if (ctx->pc == 0x1CEE64u) {
        ctx->pc = 0x1CEE68u;
        goto label_1cee68;
    }
    ctx->pc = 0x1CEE60u;
    SET_GPR_U32(ctx, 31, 0x1CEE68u);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x1CEE60u, 0x1CEE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEE68u;
label_1cee68:
    // 0x1cee68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cee68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cee6c:
    // 0x1cee6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cee6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cee70:
    // 0x1cee70: 0x0  nop
    ctx->pc = 0x1cee70u;
    // NOP
label_1cee74:
    // 0x1cee74: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1cee74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1cee78:
    // 0x1cee78: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1cee78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1cee7c:
    // 0x1cee7c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1cee7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1cee80:
    // 0x1cee80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cee80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cee84:
    // 0x1cee84: 0x0  nop
    ctx->pc = 0x1cee84u;
    // NOP
label_1cee88:
    // 0x1cee88: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1cee88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1cee8c:
    // 0x1cee8c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1cee8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1cee90:
    // 0x1cee90: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1cee90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1cee94:
    // 0x1cee94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cee94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cee98:
    // 0x1cee98: 0x0  nop
    ctx->pc = 0x1cee98u;
    // NOP
label_1cee9c:
    // 0x1cee9c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1cee9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1ceea0:
    // 0x1ceea0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1ceea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1ceea4:
    // 0x1ceea4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1ceea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1ceea8:
    // 0x1ceea8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ceea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ceeac:
    // 0x1ceeac: 0x0  nop
    ctx->pc = 0x1ceeacu;
    // NOP
label_1ceeb0:
    // 0x1ceeb0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1ceeb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1ceeb4:
    // 0x1ceeb4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1ceeb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1ceeb8:
    // 0x1ceeb8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1ceeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1ceebc:
    // 0x1ceebc: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1ceebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1ceec0:
    // 0x1ceec0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1ceec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1ceec4:
    // 0x1ceec4: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x1ceec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_1ceec8:
    // 0x1ceec8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ceec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1ceecc:
    // 0x1ceecc: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1ceeccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_1ceed0:
    // 0x1ceed0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1ceed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ceed4:
    // 0x1ceed4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ceed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ceed8:
    // 0x1ceed8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1ceed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1ceedc:
    // 0x1ceedc: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x1ceedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_1ceee0:
    // 0x1ceee0: 0x40f809  jalr        $v0
label_1ceee4:
    if (ctx->pc == 0x1CEEE4u) {
        ctx->pc = 0x1CEEE8u;
        goto label_1ceee8;
    }
    ctx->pc = 0x1CEEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CEEE8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEEE0u, 0x1CEEE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEEE8u;
label_1ceee8:
    // 0x1ceee8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1ceee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1ceeec:
    // 0x1ceeec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ceeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ceef0:
    // 0x1ceef0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1ceef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1ceef4:
    // 0x1ceef4: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x1ceef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_1ceef8:
    // 0x1ceef8: 0x40f809  jalr        $v0
label_1ceefc:
    if (ctx->pc == 0x1CEEFCu) {
        ctx->pc = 0x1CEF00u;
        goto label_1cef00;
    }
    ctx->pc = 0x1CEEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CEF00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEEF8u, 0x1CEF00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEF00u;
label_1cef00:
    // 0x1cef00: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1cef00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cef04:
    // 0x1cef04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cef04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cef08:
    // 0x1cef08: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1cef08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1cef0c:
    // 0x1cef0c: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x1cef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_1cef10:
    // 0x1cef10: 0x40f809  jalr        $v0
label_1cef14:
    if (ctx->pc == 0x1CEF14u) {
        ctx->pc = 0x1CEF18u;
        goto label_1cef18;
    }
    ctx->pc = 0x1CEF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CEF18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEF10u, 0x1CEF18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEF18u;
label_1cef18:
    // 0x1cef18: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1cef18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cef1c:
    // 0x1cef1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cef1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cef20:
    // 0x1cef20: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1cef20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1cef24:
    // 0x1cef24: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x1cef24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_1cef28:
    // 0x1cef28: 0x40f809  jalr        $v0
label_1cef2c:
    if (ctx->pc == 0x1CEF2Cu) {
        ctx->pc = 0x1CEF30u;
        goto label_1cef30;
    }
    ctx->pc = 0x1CEF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CEF30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEF28u, 0x1CEF30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEF30u;
label_1cef30:
    // 0x1cef30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cef30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cef34:
    // 0x1cef34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cef34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cef38:
    // 0x1cef38: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1cef38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1cef3c:
    // 0x1cef3c: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x1cef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_1cef40:
    // 0x1cef40: 0x40f809  jalr        $v0
label_1cef44:
    if (ctx->pc == 0x1CEF44u) {
        ctx->pc = 0x1CEF48u;
        goto label_1cef48;
    }
    ctx->pc = 0x1CEF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CEF48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEF40u, 0x1CEF48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEF48u;
label_1cef48:
    // 0x1cef48: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1cef48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1cef4c:
    // 0x1cef4c: 0x2444011c  addiu       $a0, $v0, 0x11C
    ctx->pc = 0x1cef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
label_1cef50:
    // 0x1cef50: 0xc068e2c  jal         func_1A38B0
label_1cef54:
    if (ctx->pc == 0x1CEF54u) {
        ctx->pc = 0x1CEF58u;
        goto label_1cef58;
    }
    ctx->pc = 0x1CEF50u;
    SET_GPR_U32(ctx, 31, 0x1CEF58u);
    ctx->pc = 0x1A38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A38B0u, 0x1CEF50u, 0x1CEF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEF58u;
label_1cef58:
    // 0x1cef58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cef58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cef5c:
    // 0x1cef5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cef5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cef60:
    // 0x1cef60: 0x10000014  b           . + 4 + (0x14 << 2)
label_1cef64:
    if (ctx->pc == 0x1CEF64u) {
        ctx->pc = 0x1CEF68u;
        goto label_1cef68;
    }
    ctx->pc = 0x1CEF60u;
    {
        const bool branch_taken_0x1cef60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cef60) {
            ctx->pc = 0x1CEFB4u;
            goto label_1cefb4;
        }
    }
    ctx->pc = 0x1CEF68u;
label_1cef68:
    // 0x1cef68: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1cef68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1cef6c:
    // 0x1cef6c: 0x8f8296d0  lw          $v0, -0x6930($gp)
    ctx->pc = 0x1cef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cef70:
    // 0x1cef70: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x1cef70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1cef74:
    // 0x1cef74: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1cef74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1cef78:
    // 0x1cef78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cef78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cef7c:
    // 0x1cef7c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1cef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cef80:
    // 0x1cef80: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1cef80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1cef84:
    // 0x1cef84: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1cef84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cef88:
    // 0x1cef88: 0x8f8596d0  lw          $a1, -0x6930($gp)
    ctx->pc = 0x1cef88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cef8c:
    // 0x1cef8c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1cef8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1cef90:
    // 0x1cef90: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1cef90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cef94:
    // 0x1cef94: 0xc1111fe  jal         func_4447F8
label_1cef98:
    if (ctx->pc == 0x1CEF98u) {
        ctx->pc = 0x1CEF9Cu;
        goto label_1cef9c;
    }
    ctx->pc = 0x1CEF94u;
    SET_GPR_U32(ctx, 31, 0x1CEF9Cu);
    ctx->pc = 0x4447F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4447F8u, 0x1CEF94u, 0x1CEF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEF9Cu;
label_1cef9c:
    // 0x1cef9c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1cef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cefa0:
    // 0x1cefa0: 0xc1110a8  jal         func_4442A0
label_1cefa4:
    if (ctx->pc == 0x1CEFA4u) {
        ctx->pc = 0x1CEFA8u;
        goto label_1cefa8;
    }
    ctx->pc = 0x1CEFA0u;
    SET_GPR_U32(ctx, 31, 0x1CEFA8u);
    ctx->pc = 0x4442A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4442A0u, 0x1CEFA0u, 0x1CEFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEFA8u;
label_1cefa8:
    // 0x1cefa8: 0xc111228  jal         func_4448A0
label_1cefac:
    if (ctx->pc == 0x1CEFACu) {
        ctx->pc = 0x1CEFB0u;
        goto label_1cefb0;
    }
    ctx->pc = 0x1CEFA8u;
    SET_GPR_U32(ctx, 31, 0x1CEFB0u);
    ctx->pc = 0x4448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4448A0u, 0x1CEFA8u, 0x1CEFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEFB0u;
label_1cefb0:
    // 0x1cefb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cefb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cefb4:
    // 0x1cefb4: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1cefb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1cefb8:
    // 0x1cefb8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_1cefbc:
    if (ctx->pc == 0x1CEFBCu) {
        ctx->pc = 0x1CEFC0u;
        goto label_1cefc0;
    }
    ctx->pc = 0x1CEFB8u;
    {
        const bool branch_taken_0x1cefb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cefb8) {
            ctx->pc = 0x1CEF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cef68;
        }
    }
    ctx->pc = 0x1CEFC0u;
label_1cefc0:
    // 0x1cefc0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1cefc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cefc4:
    // 0x1cefc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cefc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cefc8:
    // 0x1cefc8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1cefc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1cefcc:
    // 0x1cefcc: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x1cefccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_1cefd0:
    // 0x1cefd0: 0x40f809  jalr        $v0
label_1cefd4:
    if (ctx->pc == 0x1CEFD4u) {
        ctx->pc = 0x1CEFD8u;
        goto label_1cefd8;
    }
    ctx->pc = 0x1CEFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CEFD8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEFD0u, 0x1CEFD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEFD8u;
label_1cefd8:
    // 0x1cefd8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1cefd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1cefdc:
    // 0x1cefdc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1cefdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cefe0:
    // 0x1cefe0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1cefe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1cefe4:
    // 0x1cefe4: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x1cefe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_1cefe8:
    // 0x1cefe8: 0x40f809  jalr        $v0
label_1cefec:
    if (ctx->pc == 0x1CEFECu) {
        ctx->pc = 0x1CEFF0u;
        goto label_1ceff0;
    }
    ctx->pc = 0x1CEFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CEFF0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEFE8u, 0x1CEFF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEFF0u;
label_1ceff0:
    // 0x1ceff0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ceff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ceff4:
    // 0x1ceff4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ceff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ceff8:
    // 0x1ceff8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1ceff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1ceffc:
    // 0x1ceffc: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x1ceffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_1cf000:
    // 0x1cf000: 0x40f809  jalr        $v0
label_1cf004:
    if (ctx->pc == 0x1CF004u) {
        ctx->pc = 0x1CF008u;
        goto label_1cf008;
    }
    ctx->pc = 0x1CF000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CF008u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF000u, 0x1CF008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF008u;
label_1cf008:
    // 0x1cf008: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1cf008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1cf00c:
    // 0x1cf00c: 0x8c420158  lw          $v0, 0x158($v0)
    ctx->pc = 0x1cf00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
label_1cf010:
    // 0x1cf010: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cf010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf014:
    // 0x1cf014: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cf014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cf018:
    // 0x1cf018: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1cf018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1cf01c:
    // 0x1cf01c: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x1cf01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_1cf020:
    // 0x1cf020: 0x40f809  jalr        $v0
label_1cf024:
    if (ctx->pc == 0x1CF024u) {
        ctx->pc = 0x1CF028u;
        goto label_1cf028;
    }
    ctx->pc = 0x1CF020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CF028u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF020u, 0x1CF028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF028u;
label_1cf028:
    // 0x1cf028: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1cf028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1cf02c:
    // 0x1cf02c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1cf02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_1cf030:
    // 0x1cf030: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x1cf030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1cf034:
    // 0x1cf034: 0x8c640154  lw          $a0, 0x154($v1)
    ctx->pc = 0x1cf034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
label_1cf038:
    // 0x1cf038: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1cf038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1cf03c:
    // 0x1cf03c: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x1cf03cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1cf040:
    // 0x1cf040: 0xc1111fe  jal         func_4447F8
label_1cf044:
    if (ctx->pc == 0x1CF044u) {
        ctx->pc = 0x1CF048u;
        goto label_1cf048;
    }
    ctx->pc = 0x1CF040u;
    SET_GPR_U32(ctx, 31, 0x1CF048u);
    ctx->pc = 0x4447F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4447F8u, 0x1CF040u, 0x1CF048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF048u;
label_1cf048:
    // 0x1cf048: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cf048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cf04c:
    // 0x1cf04c: 0xc1110a8  jal         func_4442A0
label_1cf050:
    if (ctx->pc == 0x1CF050u) {
        ctx->pc = 0x1CF054u;
        goto label_1cf054;
    }
    ctx->pc = 0x1CF04Cu;
    SET_GPR_U32(ctx, 31, 0x1CF054u);
    ctx->pc = 0x4442A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4442A0u, 0x1CF04Cu, 0x1CF054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF054u;
label_1cf054:
    // 0x1cf054: 0xc111228  jal         func_4448A0
label_1cf058:
    if (ctx->pc == 0x1CF058u) {
        ctx->pc = 0x1CF05Cu;
        goto label_1cf05c;
    }
    ctx->pc = 0x1CF054u;
    SET_GPR_U32(ctx, 31, 0x1CF05Cu);
    ctx->pc = 0x4448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4448A0u, 0x1CF054u, 0x1CF05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF05Cu;
label_1cf05c:
    // 0x1cf05c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1cf05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cf060:
    // 0x1cf060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf064:
    // 0x1cf064: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1cf064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1cf068:
    // 0x1cf068: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x1cf068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_1cf06c:
    // 0x1cf06c: 0x40f809  jalr        $v0
label_1cf070:
    if (ctx->pc == 0x1CF070u) {
        ctx->pc = 0x1CF074u;
        goto label_1cf074;
    }
    ctx->pc = 0x1CF06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CF074u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF06Cu, 0x1CF074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF074u;
label_1cf074:
    // 0x1cf074: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1cf074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cf078:
    // 0x1cf078: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf07c:
    // 0x1cf07c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1cf07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1cf080:
    // 0x1cf080: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x1cf080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_1cf084:
    // 0x1cf084: 0x40f809  jalr        $v0
label_1cf088:
    if (ctx->pc == 0x1CF088u) {
        ctx->pc = 0x1CF08Cu;
        goto label_1cf08c;
    }
    ctx->pc = 0x1CF084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CF08Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF084u, 0x1CF08Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF08Cu;
label_1cf08c:
    // 0x1cf08c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cf08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cf090:
    // 0x1cf090: 0xc105f9e  jal         func_417E78
label_1cf094:
    if (ctx->pc == 0x1CF094u) {
        ctx->pc = 0x1CF098u;
        goto label_1cf098;
    }
    ctx->pc = 0x1CF090u;
    SET_GPR_U32(ctx, 31, 0x1CF098u);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x1CF090u, 0x1CF098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF098u;
label_1cf098:
    // 0x1cf098: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cf098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf09c:
    // 0x1cf09c: 0xc11c38c  jal         func_470E30
label_1cf0a0:
    if (ctx->pc == 0x1CF0A0u) {
        ctx->pc = 0x1CF0A4u;
        goto label_1cf0a4;
    }
    ctx->pc = 0x1CF09Cu;
    SET_GPR_U32(ctx, 31, 0x1CF0A4u);
    ctx->pc = 0x470E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470E30u, 0x1CF09Cu, 0x1CF0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0A4u;
label_1cf0a4:
    // 0x1cf0a4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1cf0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1cf0a8:
    // 0x1cf0a8: 0xc064aec  jal         func_192BB0
label_1cf0ac:
    if (ctx->pc == 0x1CF0ACu) {
        ctx->pc = 0x1CF0B0u;
        goto label_1cf0b0;
    }
    ctx->pc = 0x1CF0A8u;
    SET_GPR_U32(ctx, 31, 0x1CF0B0u);
    ctx->pc = 0x192BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192BB0u, 0x1CF0A8u, 0x1CF0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0B0u;
label_1cf0b0:
    // 0x1cf0b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cf0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1cf0b4:
    // 0x1cf0b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cf0b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cf0b8:
    // 0x1cf0b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cf0b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cf0bc:
    // 0x1cf0bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cf0bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cf0c0:
    // 0x1cf0c0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1cf0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1cf0c4:
    // 0x1cf0c4: 0x3e00008  jr          $ra
label_1cf0c8:
    if (ctx->pc == 0x1CF0C8u) {
        ctx->pc = 0x1CF0CCu;
        goto label_1cf0cc;
    }
    ctx->pc = 0x1CF0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF0CCu;
label_1cf0cc:
    // 0x1cf0cc: 0x0  nop
    ctx->pc = 0x1cf0ccu;
    // NOP
label_1cf0d0:
    // 0x1cf0d0: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x1cf0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
label_1cf0d4:
    // 0x1cf0d4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1cf0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1cf0d8:
    // 0x1cf0d8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1cf0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1cf0dc:
    // 0x1cf0dc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1cf0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1cf0e0:
    // 0x1cf0e0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1cf0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1cf0e4:
    // 0x1cf0e4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1cf0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1cf0e8:
    // 0x1cf0e8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1cf0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1cf0ec:
    // 0x1cf0ec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1cf0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1cf0f0:
    // 0x1cf0f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1cf0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1cf0f4:
    // 0x1cf0f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cf0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1cf0f8:
    // 0x1cf0f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cf0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1cf0fc:
    // 0x1cf0fc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1cf0fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1cf100:
    // 0x1cf100: 0xafa402f0  sw          $a0, 0x2F0($sp)
    ctx->pc = 0x1cf100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 4));
label_1cf104:
    // 0x1cf104: 0x8fb402f0  lw          $s4, 0x2F0($sp)
    ctx->pc = 0x1cf104u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf108:
    // 0x1cf108: 0x8e820138  lw          $v0, 0x138($s4)
    ctx->pc = 0x1cf108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
label_1cf10c:
    // 0x1cf10c: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
label_1cf110:
    if (ctx->pc == 0x1CF110u) {
        ctx->pc = 0x1CF114u;
        goto label_1cf114;
    }
    ctx->pc = 0x1CF10Cu;
    {
        const bool branch_taken_0x1cf10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf10c) {
            ctx->pc = 0x1CF260u;
            goto label_1cf260;
        }
    }
    ctx->pc = 0x1CF114u;
label_1cf114:
    // 0x1cf114: 0x8f84bcc4  lw          $a0, -0x433C($gp)
    ctx->pc = 0x1cf114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1cf118:
    // 0x1cf118: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1cf118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cf11c:
    // 0x1cf11c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1cf11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1cf120:
    // 0x1cf120: 0xc085538  jal         func_2154E0
label_1cf124:
    if (ctx->pc == 0x1CF124u) {
        ctx->pc = 0x1CF128u;
        goto label_1cf128;
    }
    ctx->pc = 0x1CF120u;
    SET_GPR_U32(ctx, 31, 0x1CF128u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1CF120u, 0x1CF128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF128u;
label_1cf128:
    // 0x1cf128: 0xafa202e8  sw          $v0, 0x2E8($sp)
    ctx->pc = 0x1cf128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 2));
label_1cf12c:
    // 0x1cf12c: 0x8fa402e8  lw          $a0, 0x2E8($sp)
    ctx->pc = 0x1cf12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
label_1cf130:
    // 0x1cf130: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1cf130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cf134:
    // 0x1cf134: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1cf134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1cf138:
    // 0x1cf138: 0x320f809  jalr        $t9
label_1cf13c:
    if (ctx->pc == 0x1CF13Cu) {
        ctx->pc = 0x1CF140u;
        goto label_1cf140;
    }
    ctx->pc = 0x1CF138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CF140u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF138u, 0x1CF140u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF140u;
label_1cf140:
    // 0x1cf140: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x1cf140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
label_1cf144:
    // 0x1cf144: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf148:
    // 0x1cf148: 0xc063dd0  jal         func_18F740
label_1cf14c:
    if (ctx->pc == 0x1CF14Cu) {
        ctx->pc = 0x1CF150u;
        goto label_1cf150;
    }
    ctx->pc = 0x1CF148u;
    SET_GPR_U32(ctx, 31, 0x1CF150u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1CF148u, 0x1CF150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF150u;
label_1cf150:
    // 0x1cf150: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1cf154:
    if (ctx->pc == 0x1CF154u) {
        ctx->pc = 0x1CF158u;
        goto label_1cf158;
    }
    ctx->pc = 0x1CF150u;
    {
        const bool branch_taken_0x1cf150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf150) {
            ctx->pc = 0x1CF1ACu;
            goto label_1cf1ac;
        }
    }
    ctx->pc = 0x1CF158u;
label_1cf158:
    // 0x1cf158: 0x8fa402e8  lw          $a0, 0x2E8($sp)
    ctx->pc = 0x1cf158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
label_1cf15c:
    // 0x1cf15c: 0xc063dd0  jal         func_18F740
label_1cf160:
    if (ctx->pc == 0x1CF160u) {
        ctx->pc = 0x1CF164u;
        goto label_1cf164;
    }
    ctx->pc = 0x1CF15Cu;
    SET_GPR_U32(ctx, 31, 0x1CF164u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1CF15Cu, 0x1CF164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF164u;
label_1cf164:
    // 0x1cf164: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf168:
    // 0x1cf168: 0xc0ae4b4  jal         func_2B92D0
label_1cf16c:
    if (ctx->pc == 0x1CF16Cu) {
        ctx->pc = 0x1CF170u;
        goto label_1cf170;
    }
    ctx->pc = 0x1CF168u;
    SET_GPR_U32(ctx, 31, 0x1CF170u);
    ctx->pc = 0x2B92D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92D0u, 0x1CF168u, 0x1CF170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF170u;
label_1cf170:
    // 0x1cf170: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1cf170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_1cf174:
    // 0x1cf174: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x1cf174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf178:
    // 0x1cf178: 0x2464012c  addiu       $a0, $v1, 0x12C
    ctx->pc = 0x1cf178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 300));
label_1cf17c:
    // 0x1cf17c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf180:
    // 0x1cf180: 0xc068170  jal         func_1A05C0
label_1cf184:
    if (ctx->pc == 0x1CF184u) {
        ctx->pc = 0x1CF188u;
        goto label_1cf188;
    }
    ctx->pc = 0x1CF180u;
    SET_GPR_U32(ctx, 31, 0x1CF188u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1CF180u, 0x1CF188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF188u;
label_1cf188:
    // 0x1cf188: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cf188u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf18c:
    // 0x1cf18c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1cf18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cf190:
    // 0x1cf190: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x1cf190u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1cf194:
    // 0x1cf194: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
label_1cf198:
    if (ctx->pc == 0x1CF198u) {
        ctx->pc = 0x1CF19Cu;
        goto label_1cf19c;
    }
    ctx->pc = 0x1CF194u;
    {
        const bool branch_taken_0x1cf194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1cf194) {
            ctx->pc = 0x1CF1ACu;
            goto label_1cf1ac;
        }
    }
    ctx->pc = 0x1CF19Cu;
label_1cf19c:
    // 0x1cf19c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cf19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf1a0:
    // 0x1cf1a0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1cf1a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1cf1a4:
    // 0x1cf1a4: 0x10000645  b           . + 4 + (0x645 << 2)
label_1cf1a8:
    if (ctx->pc == 0x1CF1A8u) {
        ctx->pc = 0x1CF1ACu;
        goto label_1cf1ac;
    }
    ctx->pc = 0x1CF1A4u;
    {
        const bool branch_taken_0x1cf1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf1a4) {
            ctx->pc = 0x1D0ABCu;
            goto label_1d0abc;
        }
    }
    ctx->pc = 0x1CF1ACu;
label_1cf1ac:
    // 0x1cf1ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cf1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf1b0:
    // 0x1cf1b0: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x1cf1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf1b4:
    // 0x1cf1b4: 0xaca60138  sw          $a2, 0x138($a1)
    ctx->pc = 0x1cf1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 312), GPR_U32(ctx, 6));
label_1cf1b8:
    // 0x1cf1b8: 0xc05035c  jal         func_140D70
label_1cf1bc:
    if (ctx->pc == 0x1CF1BCu) {
        ctx->pc = 0x1CF1C0u;
        goto label_1cf1c0;
    }
    ctx->pc = 0x1CF1B8u;
    SET_GPR_U32(ctx, 31, 0x1CF1C0u);
    ctx->pc = 0x140D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D70u, 0x1CF1B8u, 0x1CF1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1C0u;
label_1cf1c0:
    // 0x1cf1c0: 0xafa202e4  sw          $v0, 0x2E4($sp)
    ctx->pc = 0x1cf1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 2));
label_1cf1c4:
    // 0x1cf1c4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1cf1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1cf1c8:
    // 0x1cf1c8: 0xc050530  jal         func_1414C0
label_1cf1cc:
    if (ctx->pc == 0x1CF1CCu) {
        ctx->pc = 0x1CF1D0u;
        goto label_1cf1d0;
    }
    ctx->pc = 0x1CF1C8u;
    SET_GPR_U32(ctx, 31, 0x1CF1D0u);
    ctx->pc = 0x1414C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414C0u, 0x1CF1C8u, 0x1CF1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1D0u;
label_1cf1d0:
    // 0x1cf1d0: 0x2403044c  addiu       $v1, $zero, 0x44C
    ctx->pc = 0x1cf1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
label_1cf1d4:
    // 0x1cf1d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cf1d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cf1d8:
    // 0x1cf1d8: 0x0  nop
    ctx->pc = 0x1cf1d8u;
    // NOP
label_1cf1dc:
    // 0x1cf1dc: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x1cf1dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cf1e0:
    // 0x1cf1e0: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x1cf1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1cf1e4:
    // 0x1cf1e4: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x1cf1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_1cf1e8:
    // 0x1cf1e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cf1e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cf1ec:
    // 0x1cf1ec: 0x0  nop
    ctx->pc = 0x1cf1ecu;
    // NOP
label_1cf1f0:
    // 0x1cf1f0: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x1cf1f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cf1f4:
    // 0x1cf1f4: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1cf1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_1cf1f8:
    // 0x1cf1f8: 0x3c04447a  lui         $a0, 0x447A
    ctx->pc = 0x1cf1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17530 << 16));
label_1cf1fc:
    // 0x1cf1fc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1cf1fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cf200:
    // 0x1cf200: 0x0  nop
    ctx->pc = 0x1cf200u;
    // NOP
label_1cf204:
    // 0x1cf204: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x1cf204u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1cf208:
    // 0x1cf208: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cf208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf20c:
    // 0x1cf20c: 0x0  nop
    ctx->pc = 0x1cf20cu;
    // NOP
label_1cf210:
    // 0x1cf210: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1cf210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_1cf214:
    // 0x1cf214: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x1cf214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
label_1cf218:
    // 0x1cf218: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1cf218u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf21c:
    // 0x1cf21c: 0x0  nop
    ctx->pc = 0x1cf21cu;
    // NOP
label_1cf220:
    // 0x1cf220: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1cf220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_1cf224:
    // 0x1cf224: 0x3c0242aa  lui         $v0, 0x42AA
    ctx->pc = 0x1cf224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17066 << 16));
label_1cf228:
    // 0x1cf228: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x1cf228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1cf22c:
    // 0x1cf22c: 0x0  nop
    ctx->pc = 0x1cf22cu;
    // NOP
label_1cf230:
    // 0x1cf230: 0xe7a50138  swc1        $f5, 0x138($sp)
    ctx->pc = 0x1cf230u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1cf234:
    // 0x1cf234: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1cf234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_1cf238:
    // 0x1cf238: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1cf238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1cf23c:
    // 0x1cf23c: 0x0  nop
    ctx->pc = 0x1cf23cu;
    // NOP
label_1cf240:
    // 0x1cf240: 0xe7a4013c  swc1        $f4, 0x13C($sp)
    ctx->pc = 0x1cf240u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_1cf244:
    // 0x1cf244: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cf244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf248:
    // 0x1cf248: 0x0  nop
    ctx->pc = 0x1cf248u;
    // NOP
label_1cf24c:
    // 0x1cf24c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1cf24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_1cf250:
    // 0x1cf250: 0x8fa402e4  lw          $a0, 0x2E4($sp)
    ctx->pc = 0x1cf250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
label_1cf254:
    // 0x1cf254: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1cf254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1cf258:
    // 0x1cf258: 0xc050194  jal         func_140650
label_1cf25c:
    if (ctx->pc == 0x1CF25Cu) {
        ctx->pc = 0x1CF260u;
        goto label_1cf260;
    }
    ctx->pc = 0x1CF258u;
    SET_GPR_U32(ctx, 31, 0x1CF260u);
    ctx->pc = 0x140650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140650u, 0x1CF258u, 0x1CF260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF260u;
label_1cf260:
    // 0x1cf260: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x1cf260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf264:
    // 0x1cf264: 0x246400a8  addiu       $a0, $v1, 0xA8
    ctx->pc = 0x1cf264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 168));
label_1cf268:
    // 0x1cf268: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1cf268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cf26c:
    // 0x1cf26c: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x1cf26cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_1cf270:
    // 0x1cf270: 0x320f809  jalr        $t9
label_1cf274:
    if (ctx->pc == 0x1CF274u) {
        ctx->pc = 0x1CF278u;
        goto label_1cf278;
    }
    ctx->pc = 0x1CF270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CF278u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF270u, 0x1CF278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF278u;
label_1cf278:
    // 0x1cf278: 0xc0b06cc  jal         func_2C1B30
label_1cf27c:
    if (ctx->pc == 0x1CF27Cu) {
        ctx->pc = 0x1CF280u;
        goto label_1cf280;
    }
    ctx->pc = 0x1CF278u;
    SET_GPR_U32(ctx, 31, 0x1CF280u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x1CF278u, 0x1CF280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF280u;
label_1cf280:
    // 0x1cf280: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf284:
    // 0x1cf284: 0xc0b06c4  jal         func_2C1B10
label_1cf288:
    if (ctx->pc == 0x1CF288u) {
        ctx->pc = 0x1CF28Cu;
        goto label_1cf28c;
    }
    ctx->pc = 0x1CF284u;
    SET_GPR_U32(ctx, 31, 0x1CF28Cu);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x1CF284u, 0x1CF28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF28Cu;
label_1cf28c:
    // 0x1cf28c: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x1cf28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf290:
    // 0x1cf290: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf294:
    // 0x1cf294: 0x2465011c  addiu       $a1, $v1, 0x11C
    ctx->pc = 0x1cf294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 284));
label_1cf298:
    // 0x1cf298: 0xc0b4374  jal         func_2D0DD0
label_1cf29c:
    if (ctx->pc == 0x1CF29Cu) {
        ctx->pc = 0x1CF2A0u;
        goto label_1cf2a0;
    }
    ctx->pc = 0x1CF298u;
    SET_GPR_U32(ctx, 31, 0x1CF2A0u);
    ctx->pc = 0x2D0DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0DD0u, 0x1CF298u, 0x1CF2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2A0u;
label_1cf2a0:
    // 0x1cf2a0: 0xc0b06cc  jal         func_2C1B30
label_1cf2a4:
    if (ctx->pc == 0x1CF2A4u) {
        ctx->pc = 0x1CF2A8u;
        goto label_1cf2a8;
    }
    ctx->pc = 0x1CF2A0u;
    SET_GPR_U32(ctx, 31, 0x1CF2A8u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x1CF2A0u, 0x1CF2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2A8u;
label_1cf2a8:
    // 0x1cf2a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf2ac:
    // 0x1cf2ac: 0xc0b06c4  jal         func_2C1B10
label_1cf2b0:
    if (ctx->pc == 0x1CF2B0u) {
        ctx->pc = 0x1CF2B4u;
        goto label_1cf2b4;
    }
    ctx->pc = 0x1CF2ACu;
    SET_GPR_U32(ctx, 31, 0x1CF2B4u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x1CF2ACu, 0x1CF2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2B4u;
label_1cf2b4:
    // 0x1cf2b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cf2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf2b8:
    // 0x1cf2b8: 0x8fb402f0  lw          $s4, 0x2F0($sp)
    ctx->pc = 0x1cf2b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf2bc:
    // 0x1cf2bc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1cf2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cf2c0:
    // 0x1cf2c0: 0x2685011c  addiu       $a1, $s4, 0x11C
    ctx->pc = 0x1cf2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 284));
label_1cf2c4:
    // 0x1cf2c4: 0xc0b4374  jal         func_2D0DD0
label_1cf2c8:
    if (ctx->pc == 0x1CF2C8u) {
        ctx->pc = 0x1CF2CCu;
        goto label_1cf2cc;
    }
    ctx->pc = 0x1CF2C4u;
    SET_GPR_U32(ctx, 31, 0x1CF2CCu);
    ctx->pc = 0x2D0DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0DD0u, 0x1CF2C4u, 0x1CF2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2CCu;
label_1cf2cc:
    // 0x1cf2cc: 0xc0b06cc  jal         func_2C1B30
label_1cf2d0:
    if (ctx->pc == 0x1CF2D0u) {
        ctx->pc = 0x1CF2D4u;
        goto label_1cf2d4;
    }
    ctx->pc = 0x1CF2CCu;
    SET_GPR_U32(ctx, 31, 0x1CF2D4u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x1CF2CCu, 0x1CF2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2D4u;
label_1cf2d4:
    // 0x1cf2d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf2d8:
    // 0x1cf2d8: 0xc0b06c4  jal         func_2C1B10
label_1cf2dc:
    if (ctx->pc == 0x1CF2DCu) {
        ctx->pc = 0x1CF2E0u;
        goto label_1cf2e0;
    }
    ctx->pc = 0x1CF2D8u;
    SET_GPR_U32(ctx, 31, 0x1CF2E0u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x1CF2D8u, 0x1CF2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2E0u;
label_1cf2e0:
    // 0x1cf2e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf2e4:
    // 0x1cf2e4: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1cf2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf2e8:
    // 0x1cf2e8: 0x2445011c  addiu       $a1, $v0, 0x11C
    ctx->pc = 0x1cf2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
label_1cf2ec:
    // 0x1cf2ec: 0xc0b4374  jal         func_2D0DD0
label_1cf2f0:
    if (ctx->pc == 0x1CF2F0u) {
        ctx->pc = 0x1CF2F4u;
        goto label_1cf2f4;
    }
    ctx->pc = 0x1CF2ECu;
    SET_GPR_U32(ctx, 31, 0x1CF2F4u);
    ctx->pc = 0x2D0DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0DD0u, 0x1CF2ECu, 0x1CF2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2F4u;
label_1cf2f4:
    // 0x1cf2f4: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x1cf2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf2f8:
    // 0x1cf2f8: 0xc463013c  lwc1        $f3, 0x13C($v1)
    ctx->pc = 0x1cf2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cf2fc:
    // 0x1cf2fc: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1cf2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1cf300:
    // 0x1cf300: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x1cf300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cf304:
    // 0x1cf304: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x1cf304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf308:
    // 0x1cf308: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x1cf308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf30c:
    // 0x1cf30c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cf30cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf310:
    // 0x1cf310: 0x0  nop
    ctx->pc = 0x1cf310u;
    // NOP
label_1cf314:
    // 0x1cf314: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cf314u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1cf318:
    // 0x1cf318: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x1cf318u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1cf31c:
    // 0x1cf31c: 0xe4610050  swc1        $f1, 0x50($v1)
    ctx->pc = 0x1cf31cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
label_1cf320:
    // 0x1cf320: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1cf320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1cf324:
    // 0x1cf324: 0xc0516f8  jal         func_145BE0
label_1cf328:
    if (ctx->pc == 0x1CF328u) {
        ctx->pc = 0x1CF32Cu;
        goto label_1cf32c;
    }
    ctx->pc = 0x1CF324u;
    SET_GPR_U32(ctx, 31, 0x1CF32Cu);
    ctx->pc = 0x145BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145BE0u, 0x1CF324u, 0x1CF32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF32Cu;
label_1cf32c:
    // 0x1cf32c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1cf32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1cf330:
    // 0x1cf330: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cf330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cf334:
    // 0x1cf334: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1cf334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cf338:
    // 0x1cf338: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1cf338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1cf33c:
    // 0x1cf33c: 0xc085538  jal         func_2154E0
label_1cf340:
    if (ctx->pc == 0x1CF340u) {
        ctx->pc = 0x1CF344u;
        goto label_1cf344;
    }
    ctx->pc = 0x1CF33Cu;
    SET_GPR_U32(ctx, 31, 0x1CF344u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1CF33Cu, 0x1CF344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF344u;
label_1cf344:
    // 0x1cf344: 0xafa202e0  sw          $v0, 0x2E0($sp)
    ctx->pc = 0x1cf344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 2));
label_1cf348:
    // 0x1cf348: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x1cf348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_1cf34c:
    // 0x1cf34c: 0xc0a80a0  jal         func_2A0280
label_1cf350:
    if (ctx->pc == 0x1CF350u) {
        ctx->pc = 0x1CF354u;
        goto label_1cf354;
    }
    ctx->pc = 0x1CF34Cu;
    SET_GPR_U32(ctx, 31, 0x1CF354u);
    ctx->pc = 0x2A0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0280u, 0x1CF34Cu, 0x1CF354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF354u;
label_1cf354:
    // 0x1cf354: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x1cf354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_1cf358:
    // 0x1cf358: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1cf358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_1cf35c:
    // 0x1cf35c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1cf35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_1cf360:
    // 0x1cf360: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x1cf360u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1cf364:
    // 0x1cf364: 0xc0e6f1a  jal         func_39BC68
label_1cf368:
    if (ctx->pc == 0x1CF368u) {
        ctx->pc = 0x1CF36Cu;
        goto label_1cf36c;
    }
    ctx->pc = 0x1CF364u;
    SET_GPR_U32(ctx, 31, 0x1CF36Cu);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x1CF364u, 0x1CF36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF36Cu;
label_1cf36c:
    // 0x1cf36c: 0xafa202dc  sw          $v0, 0x2DC($sp)
    ctx->pc = 0x1cf36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 2));
label_1cf370:
    // 0x1cf370: 0x8f84bcc4  lw          $a0, -0x433C($gp)
    ctx->pc = 0x1cf370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1cf374:
    // 0x1cf374: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1cf374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cf378:
    // 0x1cf378: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1cf378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cf37c:
    // 0x1cf37c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1cf37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1cf380:
    // 0x1cf380: 0xc085538  jal         func_2154E0
label_1cf384:
    if (ctx->pc == 0x1CF384u) {
        ctx->pc = 0x1CF388u;
        goto label_1cf388;
    }
    ctx->pc = 0x1CF380u;
    SET_GPR_U32(ctx, 31, 0x1CF388u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1CF380u, 0x1CF388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF388u;
label_1cf388:
    // 0x1cf388: 0xafa202d8  sw          $v0, 0x2D8($sp)
    ctx->pc = 0x1cf388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 2));
label_1cf38c:
    // 0x1cf38c: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x1cf38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_1cf390:
    // 0x1cf390: 0x8fa502d8  lw          $a1, 0x2D8($sp)
    ctx->pc = 0x1cf390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
label_1cf394:
    // 0x1cf394: 0xc090f80  jal         func_243E00
label_1cf398:
    if (ctx->pc == 0x1CF398u) {
        ctx->pc = 0x1CF39Cu;
        goto label_1cf39c;
    }
    ctx->pc = 0x1CF394u;
    SET_GPR_U32(ctx, 31, 0x1CF39Cu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x1CF394u, 0x1CF39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF39Cu;
label_1cf39c:
    // 0x1cf39c: 0x27a30168  addiu       $v1, $sp, 0x168
    ctx->pc = 0x1cf39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_1cf3a0:
    // 0x1cf3a0: 0x27a20248  addiu       $v0, $sp, 0x248
    ctx->pc = 0x1cf3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
label_1cf3a4:
    // 0x1cf3a4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1cf3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf3a8:
    // 0x1cf3a8: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x1cf3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1cf3ac:
    // 0x1cf3ac: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x1cf3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cf3b0:
    // 0x1cf3b0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1cf3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1cf3b4:
    // 0x1cf3b4: 0xe4440004  swc1        $f4, 0x4($v0)
    ctx->pc = 0x1cf3b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1cf3b8:
    // 0x1cf3b8: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x1cf3b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1cf3bc:
    // 0x1cf3bc: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x1cf3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_1cf3c0:
    // 0x1cf3c0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1cf3c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cf3c4:
    // 0x1cf3c4: 0xc78096e8  lwc1        $f0, -0x6918($gp)
    ctx->pc = 0x1cf3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf3c8:
    // 0x1cf3c8: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x1cf3c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf3cc:
    // 0x1cf3cc: 0x8f85bb70  lw          $a1, -0x4490($gp)
    ctx->pc = 0x1cf3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1cf3d0:
    // 0x1cf3d0: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x1cf3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cf3d4:
    // 0x1cf3d4: 0xc781bb50  lwc1        $f1, -0x44B0($gp)
    ctx->pc = 0x1cf3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf3d8:
    // 0x1cf3d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cf3d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf3dc:
    // 0x1cf3dc: 0x0  nop
    ctx->pc = 0x1cf3dcu;
    // NOP
label_1cf3e0:
    // 0x1cf3e0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cf3e0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1cf3e4:
    // 0x1cf3e4: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x1cf3e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1cf3e8:
    // 0x1cf3e8: 0xe781bb50  swc1        $f1, -0x44B0($gp)
    ctx->pc = 0x1cf3e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949712), bits); }
label_1cf3ec:
    // 0x1cf3ec: 0xc781bb50  lwc1        $f1, -0x44B0($gp)
    ctx->pc = 0x1cf3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf3f0:
    // 0x1cf3f0: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x1cf3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_1cf3f4:
    // 0x1cf3f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cf3f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf3f8:
    // 0x1cf3f8: 0x0  nop
    ctx->pc = 0x1cf3f8u;
    // NOP
label_1cf3fc:
    // 0x1cf3fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cf3fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cf400:
    // 0x1cf400: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_1cf404:
    if (ctx->pc == 0x1CF404u) {
        ctx->pc = 0x1CF408u;
        goto label_1cf408;
    }
    ctx->pc = 0x1CF400u;
    {
        const bool branch_taken_0x1cf400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf400) {
            ctx->pc = 0x1CF430u;
            goto label_1cf430;
        }
    }
    ctx->pc = 0x1CF408u;
label_1cf408:
    // 0x1cf408: 0x3c044234  lui         $a0, 0x4234
    ctx->pc = 0x1cf408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16948 << 16));
label_1cf40c:
    // 0x1cf40c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cf40cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf410:
    // 0x1cf410: 0x0  nop
    ctx->pc = 0x1cf410u;
    // NOP
label_1cf414:
    // 0x1cf414: 0xe780bb50  swc1        $f0, -0x44B0($gp)
    ctx->pc = 0x1cf414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949712), bits); }
label_1cf418:
    // 0x1cf418: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1cf418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1cf41c:
    // 0x1cf41c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1cf41cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1cf420:
    // 0x1cf420: 0x0  nop
    ctx->pc = 0x1cf420u;
    // NOP
label_1cf424:
    // 0x1cf424: 0xe78396e8  swc1        $f3, -0x6918($gp)
    ctx->pc = 0x1cf424u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940392), bits); }
label_1cf428:
    // 0x1cf428: 0x10000010  b           . + 4 + (0x10 << 2)
label_1cf42c:
    if (ctx->pc == 0x1CF42Cu) {
        ctx->pc = 0x1CF430u;
        goto label_1cf430;
    }
    ctx->pc = 0x1CF428u;
    {
        const bool branch_taken_0x1cf428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf428) {
            ctx->pc = 0x1CF46Cu;
            goto label_1cf46c;
        }
    }
    ctx->pc = 0x1CF430u;
label_1cf430:
    // 0x1cf430: 0xc782bb50  lwc1        $f2, -0x44B0($gp)
    ctx->pc = 0x1cf430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cf434:
    // 0x1cf434: 0x3c02c234  lui         $v0, 0xC234
    ctx->pc = 0x1cf434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49716 << 16));
label_1cf438:
    // 0x1cf438: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cf438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cf43c:
    // 0x1cf43c: 0x0  nop
    ctx->pc = 0x1cf43cu;
    // NOP
label_1cf440:
    // 0x1cf440: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1cf440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cf444:
    // 0x1cf444: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_1cf448:
    if (ctx->pc == 0x1CF448u) {
        ctx->pc = 0x1CF44Cu;
        goto label_1cf44c;
    }
    ctx->pc = 0x1CF444u;
    {
        const bool branch_taken_0x1cf444 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf444) {
            ctx->pc = 0x1CF46Cu;
            goto label_1cf46c;
        }
    }
    ctx->pc = 0x1CF44Cu;
label_1cf44c:
    // 0x1cf44c: 0x3c02c234  lui         $v0, 0xC234
    ctx->pc = 0x1cf44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49716 << 16));
label_1cf450:
    // 0x1cf450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cf450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf454:
    // 0x1cf454: 0x0  nop
    ctx->pc = 0x1cf454u;
    // NOP
label_1cf458:
    // 0x1cf458: 0xe780bb50  swc1        $f0, -0x44B0($gp)
    ctx->pc = 0x1cf458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949712), bits); }
label_1cf45c:
    // 0x1cf45c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1cf45cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1cf460:
    // 0x1cf460: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cf460u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf464:
    // 0x1cf464: 0x0  nop
    ctx->pc = 0x1cf464u;
    // NOP
label_1cf468:
    // 0x1cf468: 0xe78096e8  swc1        $f0, -0x6918($gp)
    ctx->pc = 0x1cf468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940392), bits); }
label_1cf46c:
    // 0x1cf46c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1cf46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1cf470:
    // 0x1cf470: 0x24427a58  addiu       $v0, $v0, 0x7A58
    ctx->pc = 0x1cf470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31320));
label_1cf474:
    // 0x1cf474: 0x27a30238  addiu       $v1, $sp, 0x238
    ctx->pc = 0x1cf474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
label_1cf478:
    // 0x1cf478: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x1cf478u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1cf47c:
    // 0x1cf47c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cf47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf480:
    // 0x1cf480: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1cf480u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
label_1cf484:
    // 0x1cf484: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1cf484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1cf488:
    // 0x1cf488: 0xafa002d4  sw          $zero, 0x2D4($sp)
    ctx->pc = 0x1cf488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 0));
label_1cf48c:
    // 0x1cf48c: 0xafa002d0  sw          $zero, 0x2D0($sp)
    ctx->pc = 0x1cf48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 0));
label_1cf490:
    // 0x1cf490: 0xafa002cc  sw          $zero, 0x2CC($sp)
    ctx->pc = 0x1cf490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 0));
label_1cf494:
    // 0x1cf494: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cf494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf498:
    // 0x1cf498: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1cf498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf49c:
    // 0x1cf49c: 0x2444011c  addiu       $a0, $v0, 0x11C
    ctx->pc = 0x1cf49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
label_1cf4a0:
    // 0x1cf4a0: 0xc068ea0  jal         func_1A3A80
label_1cf4a4:
    if (ctx->pc == 0x1CF4A4u) {
        ctx->pc = 0x1CF4A8u;
        goto label_1cf4a8;
    }
    ctx->pc = 0x1CF4A0u;
    SET_GPR_U32(ctx, 31, 0x1CF4A8u);
    ctx->pc = 0x1A3A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A80u, 0x1CF4A0u, 0x1CF4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF4A8u;
label_1cf4a8:
    // 0x1cf4a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cf4a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf4ac:
    // 0x1cf4ac: 0x10000576  b           . + 4 + (0x576 << 2)
label_1cf4b0:
    if (ctx->pc == 0x1CF4B0u) {
        ctx->pc = 0x1CF4B4u;
        goto label_1cf4b4;
    }
    ctx->pc = 0x1CF4ACu;
    {
        const bool branch_taken_0x1cf4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf4ac) {
            ctx->pc = 0x1D0A88u;
            goto label_1d0a88;
        }
    }
    ctx->pc = 0x1CF4B4u;
label_1cf4b4:
    // 0x1cf4b4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1cf4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cf4b8:
    // 0x1cf4b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1cf4b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cf4bc:
    // 0x1cf4bc: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1cf4bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1cf4c0:
    // 0x1cf4c0: 0x320f809  jalr        $t9
label_1cf4c4:
    if (ctx->pc == 0x1CF4C4u) {
        ctx->pc = 0x1CF4C8u;
        goto label_1cf4c8;
    }
    ctx->pc = 0x1CF4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CF4C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF4C0u, 0x1CF4C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF4C8u;
label_1cf4c8:
    // 0x1cf4c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1cf4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cf4cc:
    // 0x1cf4cc: 0xc063dd0  jal         func_18F740
label_1cf4d0:
    if (ctx->pc == 0x1CF4D0u) {
        ctx->pc = 0x1CF4D4u;
        goto label_1cf4d4;
    }
    ctx->pc = 0x1CF4CCu;
    SET_GPR_U32(ctx, 31, 0x1CF4D4u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1CF4CCu, 0x1CF4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF4D4u;
label_1cf4d4:
    // 0x1cf4d4: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
label_1cf4d8:
    if (ctx->pc == 0x1CF4D8u) {
        ctx->pc = 0x1CF4DCu;
        goto label_1cf4dc;
    }
    ctx->pc = 0x1CF4D4u;
    {
        const bool branch_taken_0x1cf4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf4d4) {
            ctx->pc = 0x1CF670u;
            goto label_1cf670;
        }
    }
    ctx->pc = 0x1CF4DCu;
label_1cf4dc:
    // 0x1cf4dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1cf4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cf4e0:
    // 0x1cf4e0: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x1cf4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1cf4e4:
    // 0x1cf4e4: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1cf4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1cf4e8:
    // 0x1cf4e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cf4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cf4ec:
    // 0x1cf4ec: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
label_1cf4f0:
    if (ctx->pc == 0x1CF4F0u) {
        ctx->pc = 0x1CF4F4u;
        goto label_1cf4f4;
    }
    ctx->pc = 0x1CF4ECu;
    {
        const bool branch_taken_0x1cf4ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cf4ec) {
            ctx->pc = 0x1CF530u;
            goto label_1cf530;
        }
    }
    ctx->pc = 0x1CF4F4u;
label_1cf4f4:
    // 0x1cf4f4: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1cf4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1cf4f8:
    // 0x1cf4f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cf4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cf4fc:
    // 0x1cf4fc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1cf4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1cf500:
    // 0x1cf500: 0xc085538  jal         func_2154E0
label_1cf504:
    if (ctx->pc == 0x1CF504u) {
        ctx->pc = 0x1CF508u;
        goto label_1cf508;
    }
    ctx->pc = 0x1CF500u;
    SET_GPR_U32(ctx, 31, 0x1CF508u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1CF500u, 0x1CF508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF508u;
label_1cf508:
    // 0x1cf508: 0xafa202c4  sw          $v0, 0x2C4($sp)
    ctx->pc = 0x1cf508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 2));
label_1cf50c:
    // 0x1cf50c: 0xc0b06cc  jal         func_2C1B30
label_1cf510:
    if (ctx->pc == 0x1CF510u) {
        ctx->pc = 0x1CF514u;
        goto label_1cf514;
    }
    ctx->pc = 0x1CF50Cu;
    SET_GPR_U32(ctx, 31, 0x1CF514u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x1CF50Cu, 0x1CF514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF514u;
label_1cf514:
    // 0x1cf514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf518:
    // 0x1cf518: 0x8fa502c4  lw          $a1, 0x2C4($sp)
    ctx->pc = 0x1cf518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
label_1cf51c:
    // 0x1cf51c: 0xc0b0a44  jal         func_2C2910
label_1cf520:
    if (ctx->pc == 0x1CF520u) {
        ctx->pc = 0x1CF524u;
        goto label_1cf524;
    }
    ctx->pc = 0x1CF51Cu;
    SET_GPR_U32(ctx, 31, 0x1CF524u);
    ctx->pc = 0x2C2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2910u, 0x1CF51Cu, 0x1CF524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF524u;
label_1cf524:
    // 0x1cf524: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cf524u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf528:
    // 0x1cf528: 0x10000552  b           . + 4 + (0x552 << 2)
label_1cf52c:
    if (ctx->pc == 0x1CF52Cu) {
        ctx->pc = 0x1CF530u;
        goto label_1cf530;
    }
    ctx->pc = 0x1CF528u;
    {
        const bool branch_taken_0x1cf528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf528) {
            ctx->pc = 0x1D0A74u;
            goto label_1d0a74;
        }
    }
    ctx->pc = 0x1CF530u;
label_1cf530:
    // 0x1cf530: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1cf530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cf534:
    // 0x1cf534: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1cf534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cf538:
    // 0x1cf538: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1cf538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1cf53c:
    // 0x1cf53c: 0x320f809  jalr        $t9
label_1cf540:
    if (ctx->pc == 0x1CF540u) {
        ctx->pc = 0x1CF544u;
        goto label_1cf544;
    }
    ctx->pc = 0x1CF53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CF544u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF53Cu, 0x1CF544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF544u;
label_1cf544:
    // 0x1cf544: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1cf544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cf548:
    // 0x1cf548: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1cf548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cf54c:
    // 0x1cf54c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1cf54cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1cf550:
    // 0x1cf550: 0x320f809  jalr        $t9
label_1cf554:
    if (ctx->pc == 0x1CF554u) {
        ctx->pc = 0x1CF558u;
        goto label_1cf558;
    }
    ctx->pc = 0x1CF550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CF558u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF550u, 0x1CF558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF558u;
label_1cf558:
    // 0x1cf558: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cf558u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf55c:
    // 0x1cf55c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1cf55cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cf560:
    // 0x1cf560: 0x8cc4002c  lw          $a0, 0x2C($a2)
    ctx->pc = 0x1cf560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_1cf564:
    // 0x1cf564: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1cf564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1cf568:
    // 0x1cf568: 0xc085538  jal         func_2154E0
label_1cf56c:
    if (ctx->pc == 0x1CF56Cu) {
        ctx->pc = 0x1CF570u;
        goto label_1cf570;
    }
    ctx->pc = 0x1CF568u;
    SET_GPR_U32(ctx, 31, 0x1CF570u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1CF568u, 0x1CF570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF570u;
label_1cf570:
    // 0x1cf570: 0xafa202c0  sw          $v0, 0x2C0($sp)
    ctx->pc = 0x1cf570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 2));
label_1cf574:
    // 0x1cf574: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x1cf574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_1cf578:
    // 0x1cf578: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf57c:
    // 0x1cf57c: 0xc096e40  jal         func_25B900
label_1cf580:
    if (ctx->pc == 0x1CF580u) {
        ctx->pc = 0x1CF584u;
        goto label_1cf584;
    }
    ctx->pc = 0x1CF57Cu;
    SET_GPR_U32(ctx, 31, 0x1CF584u);
    ctx->pc = 0x25B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B900u, 0x1CF57Cu, 0x1CF584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF584u;
label_1cf584:
    // 0x1cf584: 0xc0de0d2  jal         func_378348
label_1cf588:
    if (ctx->pc == 0x1CF588u) {
        ctx->pc = 0x1CF58Cu;
        goto label_1cf58c;
    }
    ctx->pc = 0x1CF584u;
    SET_GPR_U32(ctx, 31, 0x1CF58Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1CF584u, 0x1CF58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF58Cu;
label_1cf58c:
    // 0x1cf58c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1cf590:
    if (ctx->pc == 0x1CF590u) {
        ctx->pc = 0x1CF594u;
        goto label_1cf594;
    }
    ctx->pc = 0x1CF58Cu;
    {
        const bool branch_taken_0x1cf58c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1cf58c) {
            ctx->pc = 0x1CF5A8u;
            goto label_1cf5a8;
        }
    }
    ctx->pc = 0x1CF594u;
label_1cf594:
    // 0x1cf594: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cf594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf598:
    // 0x1cf598: 0x0  nop
    ctx->pc = 0x1cf598u;
    // NOP
label_1cf59c:
    // 0x1cf59c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1cf59cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cf5a0:
    // 0x1cf5a0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1cf5a4:
    if (ctx->pc == 0x1CF5A4u) {
        ctx->pc = 0x1CF5A8u;
        goto label_1cf5a8;
    }
    ctx->pc = 0x1CF5A0u;
    {
        const bool branch_taken_0x1cf5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf5a0) {
            ctx->pc = 0x1CF5C4u;
            goto label_1cf5c4;
        }
    }
    ctx->pc = 0x1CF5A8u;
label_1cf5a8:
    // 0x1cf5a8: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x1cf5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1cf5ac:
    // 0x1cf5ac: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1cf5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1cf5b0:
    // 0x1cf5b0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1cf5b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1cf5b4:
    // 0x1cf5b4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1cf5b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cf5b8:
    // 0x1cf5b8: 0x0  nop
    ctx->pc = 0x1cf5b8u;
    // NOP
label_1cf5bc:
    // 0x1cf5bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cf5bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cf5c0:
    // 0x1cf5c0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1cf5c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1cf5c4:
    // 0x1cf5c4: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x1cf5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
label_1cf5c8:
    // 0x1cf5c8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1cf5c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf5cc:
    // 0x1cf5cc: 0x0  nop
    ctx->pc = 0x1cf5ccu;
    // NOP
label_1cf5d0:
    // 0x1cf5d0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1cf5d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1cf5d4:
    // 0x1cf5d4: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1cf5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf5d8:
    // 0x1cf5d8: 0xc4400144  lwc1        $f0, 0x144($v0)
    ctx->pc = 0x1cf5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf5dc:
    // 0x1cf5dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cf5dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cf5e0:
    // 0x1cf5e0: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_1cf5e4:
    if (ctx->pc == 0x1CF5E4u) {
        ctx->pc = 0x1CF5E8u;
        goto label_1cf5e8;
    }
    ctx->pc = 0x1CF5E0u;
    {
        const bool branch_taken_0x1cf5e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf5e0) {
            ctx->pc = 0x1CF638u;
            goto label_1cf638;
        }
    }
    ctx->pc = 0x1CF5E8u;
label_1cf5e8:
    // 0x1cf5e8: 0x27a40228  addiu       $a0, $sp, 0x228
    ctx->pc = 0x1cf5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
label_1cf5ec:
    // 0x1cf5ec: 0xc09ac08  jal         func_26B020
label_1cf5f0:
    if (ctx->pc == 0x1CF5F0u) {
        ctx->pc = 0x1CF5F4u;
        goto label_1cf5f4;
    }
    ctx->pc = 0x1CF5ECu;
    SET_GPR_U32(ctx, 31, 0x1CF5F4u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x1CF5ECu, 0x1CF5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF5F4u;
label_1cf5f4:
    // 0x1cf5f4: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1cf5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf5f8:
    // 0x1cf5f8: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x1cf5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
label_1cf5fc:
    // 0x1cf5fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cf5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cf600:
    // 0x1cf600: 0xc068170  jal         func_1A05C0
label_1cf604:
    if (ctx->pc == 0x1CF604u) {
        ctx->pc = 0x1CF608u;
        goto label_1cf608;
    }
    ctx->pc = 0x1CF600u;
    SET_GPR_U32(ctx, 31, 0x1CF608u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1CF600u, 0x1CF608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF608u;
label_1cf608:
    // 0x1cf608: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cf608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cf60c:
    // 0x1cf60c: 0xafa2022c  sw          $v0, 0x22C($sp)
    ctx->pc = 0x1cf60cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
label_1cf610:
    // 0x1cf610: 0xafa00230  sw          $zero, 0x230($sp)
    ctx->pc = 0x1cf610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 0));
label_1cf614:
    // 0x1cf614: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1cf614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cf618:
    // 0x1cf618: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x1cf618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1cf61c:
    // 0x1cf61c: 0x27a50228  addiu       $a1, $sp, 0x228
    ctx->pc = 0x1cf61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
label_1cf620:
    // 0x1cf620: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cf620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf624:
    // 0x1cf624: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf628:
    // 0x1cf628: 0xc0af064  jal         func_2BC190
label_1cf62c:
    if (ctx->pc == 0x1CF62Cu) {
        ctx->pc = 0x1CF630u;
        goto label_1cf630;
    }
    ctx->pc = 0x1CF628u;
    SET_GPR_U32(ctx, 31, 0x1CF630u);
    ctx->pc = 0x2BC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC190u, 0x1CF628u, 0x1CF630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF630u;
label_1cf630:
    // 0x1cf630: 0x10000510  b           . + 4 + (0x510 << 2)
label_1cf634:
    if (ctx->pc == 0x1CF634u) {
        ctx->pc = 0x1CF638u;
        goto label_1cf638;
    }
    ctx->pc = 0x1CF630u;
    {
        const bool branch_taken_0x1cf630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf630) {
            ctx->pc = 0x1D0A74u;
            goto label_1d0a74;
        }
    }
    ctx->pc = 0x1CF638u;
label_1cf638:
    // 0x1cf638: 0xc0b06cc  jal         func_2C1B30
label_1cf63c:
    if (ctx->pc == 0x1CF63Cu) {
        ctx->pc = 0x1CF640u;
        goto label_1cf640;
    }
    ctx->pc = 0x1CF638u;
    SET_GPR_U32(ctx, 31, 0x1CF640u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x1CF638u, 0x1CF640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF640u;
label_1cf640:
    // 0x1cf640: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf644:
    // 0x1cf644: 0xc0b06c4  jal         func_2C1B10
label_1cf648:
    if (ctx->pc == 0x1CF648u) {
        ctx->pc = 0x1CF64Cu;
        goto label_1cf64c;
    }
    ctx->pc = 0x1CF644u;
    SET_GPR_U32(ctx, 31, 0x1CF64Cu);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x1CF644u, 0x1CF64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF64Cu;
label_1cf64c:
    // 0x1cf64c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1cf64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cf650:
    // 0x1cf650: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf654:
    // 0x1cf654: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x1cf654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1cf658:
    // 0x1cf658: 0x27a60248  addiu       $a2, $sp, 0x248
    ctx->pc = 0x1cf658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
label_1cf65c:
    // 0x1cf65c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf65cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf660:
    // 0x1cf660: 0xc0b43b8  jal         func_2D0EE0
label_1cf664:
    if (ctx->pc == 0x1CF664u) {
        ctx->pc = 0x1CF668u;
        goto label_1cf668;
    }
    ctx->pc = 0x1CF660u;
    SET_GPR_U32(ctx, 31, 0x1CF668u);
    ctx->pc = 0x2D0EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0EE0u, 0x1CF660u, 0x1CF668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF668u;
label_1cf668:
    // 0x1cf668: 0x10000502  b           . + 4 + (0x502 << 2)
label_1cf66c:
    if (ctx->pc == 0x1CF66Cu) {
        ctx->pc = 0x1CF670u;
        goto label_1cf670;
    }
    ctx->pc = 0x1CF668u;
    {
        const bool branch_taken_0x1cf668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf668) {
            ctx->pc = 0x1D0A74u;
            goto label_1d0a74;
        }
    }
    ctx->pc = 0x1CF670u;
label_1cf670:
    // 0x1cf670: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1cf670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cf674:
    // 0x1cf674: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1cf674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1cf678:
    // 0x1cf678: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1cf678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1cf67c:
    // 0x1cf67c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cf67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cf680:
    // 0x1cf680: 0x106204fc  beq         $v1, $v0, . + 4 + (0x4FC << 2)
label_1cf684:
    if (ctx->pc == 0x1CF684u) {
        ctx->pc = 0x1CF688u;
        goto label_1cf688;
    }
    ctx->pc = 0x1CF680u;
    {
        const bool branch_taken_0x1cf680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cf680) {
            ctx->pc = 0x1D0A74u;
            goto label_1d0a74;
        }
    }
    ctx->pc = 0x1CF688u;
label_1cf688:
    // 0x1cf688: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1cf688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cf68c:
    // 0x1cf68c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x1cf68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1cf690:
    // 0x1cf690: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1cf690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1cf694:
    // 0x1cf694: 0xc085538  jal         func_2154E0
label_1cf698:
    if (ctx->pc == 0x1CF698u) {
        ctx->pc = 0x1CF69Cu;
        goto label_1cf69c;
    }
    ctx->pc = 0x1CF694u;
    SET_GPR_U32(ctx, 31, 0x1CF69Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1CF694u, 0x1CF69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF69Cu;
label_1cf69c:
    // 0x1cf69c: 0xafa202bc  sw          $v0, 0x2BC($sp)
    ctx->pc = 0x1cf69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 2));
label_1cf6a0:
    // 0x1cf6a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1cf6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cf6a4:
    // 0x1cf6a4: 0xc063dd0  jal         func_18F740
label_1cf6a8:
    if (ctx->pc == 0x1CF6A8u) {
        ctx->pc = 0x1CF6ACu;
        goto label_1cf6ac;
    }
    ctx->pc = 0x1CF6A4u;
    SET_GPR_U32(ctx, 31, 0x1CF6ACu);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1CF6A4u, 0x1CF6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF6ACu;
label_1cf6ac:
    // 0x1cf6ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf6b0:
    // 0x1cf6b0: 0xc0ae4b4  jal         func_2B92D0
label_1cf6b4:
    if (ctx->pc == 0x1CF6B4u) {
        ctx->pc = 0x1CF6B8u;
        goto label_1cf6b8;
    }
    ctx->pc = 0x1CF6B0u;
    SET_GPR_U32(ctx, 31, 0x1CF6B8u);
    ctx->pc = 0x2B92D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92D0u, 0x1CF6B0u, 0x1CF6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF6B8u;
label_1cf6b8:
    // 0x1cf6b8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1cf6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_1cf6bc:
    // 0x1cf6bc: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1cf6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf6c0:
    // 0x1cf6c0: 0x2484012c  addiu       $a0, $a0, 0x12C
    ctx->pc = 0x1cf6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 300));
label_1cf6c4:
    // 0x1cf6c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf6c8:
    // 0x1cf6c8: 0xc068170  jal         func_1A05C0
label_1cf6cc:
    if (ctx->pc == 0x1CF6CCu) {
        ctx->pc = 0x1CF6D0u;
        goto label_1cf6d0;
    }
    ctx->pc = 0x1CF6C8u;
    SET_GPR_U32(ctx, 31, 0x1CF6D0u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1CF6C8u, 0x1CF6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF6D0u;
label_1cf6d0:
    // 0x1cf6d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cf6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cf6d4:
    // 0x1cf6d4: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1cf6d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1cf6d8:
    // 0x1cf6d8: 0x10440298  beq         $v0, $a0, . + 4 + (0x298 << 2)
label_1cf6dc:
    if (ctx->pc == 0x1CF6DCu) {
        ctx->pc = 0x1CF6E0u;
        goto label_1cf6e0;
    }
    ctx->pc = 0x1CF6D8u;
    {
        const bool branch_taken_0x1cf6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1cf6d8) {
            ctx->pc = 0x1D013Cu;
            goto label_1d013c;
        }
    }
    ctx->pc = 0x1CF6E0u;
label_1cf6e0:
    // 0x1cf6e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf6e4:
    // 0x1cf6e4: 0xafa500f8  sw          $a1, 0xF8($sp)
    ctx->pc = 0x1cf6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 5));
label_1cf6e8:
    // 0x1cf6e8: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x1cf6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_1cf6ec:
    // 0x1cf6ec: 0x8fa502bc  lw          $a1, 0x2BC($sp)
    ctx->pc = 0x1cf6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
label_1cf6f0:
    // 0x1cf6f0: 0xc090f80  jal         func_243E00
label_1cf6f4:
    if (ctx->pc == 0x1CF6F4u) {
        ctx->pc = 0x1CF6F8u;
        goto label_1cf6f8;
    }
    ctx->pc = 0x1CF6F0u;
    SET_GPR_U32(ctx, 31, 0x1CF6F8u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x1CF6F0u, 0x1CF6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF6F8u;
label_1cf6f8:
    // 0x1cf6f8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1cf6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1cf6fc:
    // 0x1cf6fc: 0x27a50158  addiu       $a1, $sp, 0x158
    ctx->pc = 0x1cf6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_1cf700:
    // 0x1cf700: 0xc041d58  jal         func_107560
label_1cf704:
    if (ctx->pc == 0x1CF704u) {
        ctx->pc = 0x1CF708u;
        goto label_1cf708;
    }
    ctx->pc = 0x1CF700u;
    SET_GPR_U32(ctx, 31, 0x1CF708u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x1CF700u, 0x1CF708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF708u;
label_1cf708:
    // 0x1cf708: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x1cf708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf70c:
    // 0x1cf70c: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x1cf70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
label_1cf710:
    // 0x1cf710: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cf710u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf714:
    // 0x1cf714: 0x0  nop
    ctx->pc = 0x1cf714u;
    // NOP
label_1cf718:
    // 0x1cf718: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cf718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cf71c:
    // 0x1cf71c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1cf71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1cf720:
    // 0x1cf720: 0xc78081c0  lwc1        $f0, -0x7E40($gp)
    ctx->pc = 0x1cf720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf724:
    // 0x1cf724: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1cf724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1cf728:
    // 0x1cf728: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x1cf728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_1cf72c:
    // 0x1cf72c: 0x8fa302bc  lw          $v1, 0x2BC($sp)
    ctx->pc = 0x1cf72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
label_1cf730:
    // 0x1cf730: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1cf730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1cf734:
    // 0x1cf734: 0x27a50218  addiu       $a1, $sp, 0x218
    ctx->pc = 0x1cf734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
label_1cf738:
    // 0x1cf738: 0xc78cbb50  lwc1        $f12, -0x44B0($gp)
    ctx->pc = 0x1cf738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cf73c:
    // 0x1cf73c: 0xc0739c0  jal         func_1CE700
label_1cf740:
    if (ctx->pc == 0x1CF740u) {
        ctx->pc = 0x1CF744u;
        goto label_1cf744;
    }
    ctx->pc = 0x1CF73Cu;
    SET_GPR_U32(ctx, 31, 0x1CF744u);
    ctx->pc = 0x1CE700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE700u, 0x1CF73Cu, 0x1CF744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF744u;
label_1cf744:
    // 0x1cf744: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1cf744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf748:
    // 0x1cf748: 0xc7a10218  lwc1        $f1, 0x218($sp)
    ctx->pc = 0x1cf748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf74c:
    // 0x1cf74c: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x1cf74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf750:
    // 0x1cf750: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1cf750u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf754:
    // 0x1cf754: 0xe7a10218  swc1        $f1, 0x218($sp)
    ctx->pc = 0x1cf754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_1cf758:
    // 0x1cf758: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1cf758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf75c:
    // 0x1cf75c: 0xc7a3021c  lwc1        $f3, 0x21C($sp)
    ctx->pc = 0x1cf75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cf760:
    // 0x1cf760: 0xc4420140  lwc1        $f2, 0x140($v0)
    ctx->pc = 0x1cf760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cf764:
    // 0x1cf764: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x1cf764u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1cf768:
    // 0x1cf768: 0xe7a1021c  swc1        $f1, 0x21C($sp)
    ctx->pc = 0x1cf768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
label_1cf76c:
    // 0x1cf76c: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1cf76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf770:
    // 0x1cf770: 0xc7a10220  lwc1        $f1, 0x220($sp)
    ctx->pc = 0x1cf770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf774:
    // 0x1cf774: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x1cf774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf778:
    // 0x1cf778: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cf778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf77c:
    // 0x1cf77c: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x1cf77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_1cf780:
    // 0x1cf780: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1cf780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf784:
    // 0x1cf784: 0xc7a00218  lwc1        $f0, 0x218($sp)
    ctx->pc = 0x1cf784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf788:
    // 0x1cf788: 0x460008c0  add.s       $f3, $f1, $f0
    ctx->pc = 0x1cf788u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cf78c:
    // 0x1cf78c: 0xe7a300ec  swc1        $f3, 0xEC($sp)
    ctx->pc = 0x1cf78cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1cf790:
    // 0x1cf790: 0xc7a200e4  lwc1        $f2, 0xE4($sp)
    ctx->pc = 0x1cf790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cf794:
    // 0x1cf794: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x1cf794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf798:
    // 0x1cf798: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x1cf798u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1cf79c:
    // 0x1cf79c: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x1cf79cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1cf7a0:
    // 0x1cf7a0: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x1cf7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf7a4:
    // 0x1cf7a4: 0xc7a00220  lwc1        $f0, 0x220($sp)
    ctx->pc = 0x1cf7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf7a8:
    // 0x1cf7a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cf7a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cf7ac:
    // 0x1cf7ac: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1cf7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1cf7b0:
    // 0x1cf7b0: 0xc7a300f0  lwc1        $f3, 0xF0($sp)
    ctx->pc = 0x1cf7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cf7b4:
    // 0x1cf7b4: 0xc7a2024c  lwc1        $f2, 0x24C($sp)
    ctx->pc = 0x1cf7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cf7b8:
    // 0x1cf7b8: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x1cf7b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cf7bc:
    // 0x1cf7bc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1cf7c0:
    if (ctx->pc == 0x1CF7C0u) {
        ctx->pc = 0x1CF7C4u;
        goto label_1cf7c4;
    }
    ctx->pc = 0x1CF7BCu;
    {
        const bool branch_taken_0x1cf7bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf7bc) {
            ctx->pc = 0x1CF7CCu;
            goto label_1cf7cc;
        }
    }
    ctx->pc = 0x1CF7C4u;
label_1cf7c4:
    // 0x1cf7c4: 0xc7a1024c  lwc1        $f1, 0x24C($sp)
    ctx->pc = 0x1cf7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf7c8:
    // 0x1cf7c8: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x1cf7c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1cf7cc:
    // 0x1cf7cc: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x1cf7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf7d0:
    // 0x1cf7d0: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1cf7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf7d4:
    // 0x1cf7d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cf7d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cf7d8:
    // 0x1cf7d8: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x1cf7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_1cf7dc:
    // 0x1cf7dc: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x1cf7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf7e0:
    // 0x1cf7e0: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x1cf7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf7e4:
    // 0x1cf7e4: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1cf7e4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cf7e8:
    // 0x1cf7e8: 0xe7a3020c  swc1        $f3, 0x20C($sp)
    ctx->pc = 0x1cf7e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
label_1cf7ec:
    // 0x1cf7ec: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x1cf7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cf7f0:
    // 0x1cf7f0: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x1cf7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf7f4:
    // 0x1cf7f4: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x1cf7f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1cf7f8:
    // 0x1cf7f8: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x1cf7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_1cf7fc:
    // 0x1cf7fc: 0x27a40208  addiu       $a0, $sp, 0x208
    ctx->pc = 0x1cf7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_1cf800:
    // 0x1cf800: 0xc104d24  jal         func_413490
label_1cf804:
    if (ctx->pc == 0x1CF804u) {
        ctx->pc = 0x1CF808u;
        goto label_1cf808;
    }
    ctx->pc = 0x1CF800u;
    SET_GPR_U32(ctx, 31, 0x1CF808u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x1CF800u, 0x1CF808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF808u;
label_1cf808:
    // 0x1cf808: 0xe7a002b8  swc1        $f0, 0x2B8($sp)
    ctx->pc = 0x1cf808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
label_1cf80c:
    // 0x1cf80c: 0x8fa202dc  lw          $v0, 0x2DC($sp)
    ctx->pc = 0x1cf80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
label_1cf810:
    // 0x1cf810: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf814:
    // 0x1cf814: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1cf814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1cf818:
    // 0x1cf818: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x1cf818u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_1cf81c:
    // 0x1cf81c: 0x24c6c000  addiu       $a2, $a2, -0x4000
    ctx->pc = 0x1cf81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950912));
label_1cf820:
    // 0x1cf820: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x1cf820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1cf824:
    // 0x1cf824: 0xc0c6d0c  jal         func_31B430
label_1cf828:
    if (ctx->pc == 0x1CF828u) {
        ctx->pc = 0x1CF82Cu;
        goto label_1cf82c;
    }
    ctx->pc = 0x1CF824u;
    SET_GPR_U32(ctx, 31, 0x1CF82Cu);
    ctx->pc = 0x31B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B430u, 0x1CF824u, 0x1CF82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF82Cu;
label_1cf82c:
    // 0x1cf82c: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x1cf82cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1cf830:
    // 0x1cf830: 0x14c0001e  bnez        $a2, . + 4 + (0x1E << 2)
label_1cf834:
    if (ctx->pc == 0x1CF834u) {
        ctx->pc = 0x1CF838u;
        goto label_1cf838;
    }
    ctx->pc = 0x1CF830u;
    {
        const bool branch_taken_0x1cf830 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf830) {
            ctx->pc = 0x1CF8ACu;
            goto label_1cf8ac;
        }
    }
    ctx->pc = 0x1CF838u;
label_1cf838:
    // 0x1cf838: 0x8fa702f0  lw          $a3, 0x2F0($sp)
    ctx->pc = 0x1cf838u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf83c:
    // 0x1cf83c: 0xc4e10140  lwc1        $f1, 0x140($a3)
    ctx->pc = 0x1cf83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf840:
    // 0x1cf840: 0xc7a002b8  lwc1        $f0, 0x2B8($sp)
    ctx->pc = 0x1cf840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf844:
    // 0x1cf844: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cf844u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cf848:
    // 0x1cf848: 0x45010043  bc1t        . + 4 + (0x43 << 2)
label_1cf84c:
    if (ctx->pc == 0x1CF84Cu) {
        ctx->pc = 0x1CF850u;
        goto label_1cf850;
    }
    ctx->pc = 0x1CF848u;
    {
        const bool branch_taken_0x1cf848 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf848) {
            ctx->pc = 0x1CF958u;
            goto label_1cf958;
        }
    }
    ctx->pc = 0x1CF850u;
label_1cf850:
    // 0x1cf850: 0x8fa802f0  lw          $t0, 0x2F0($sp)
    ctx->pc = 0x1cf850u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf854:
    // 0x1cf854: 0xc5030140  lwc1        $f3, 0x140($t0)
    ctx->pc = 0x1cf854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cf858:
    // 0x1cf858: 0xc7a202b8  lwc1        $f2, 0x2B8($sp)
    ctx->pc = 0x1cf858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cf85c:
    // 0x1cf85c: 0x46021843  div.s       $f1, $f3, $f2
    ctx->pc = 0x1cf85cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
label_1cf860:
    // 0x1cf860: 0xc7a00208  lwc1        $f0, 0x208($sp)
    ctx->pc = 0x1cf860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf864:
    // 0x1cf864: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cf864u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cf868:
    // 0x1cf868: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x1cf868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_1cf86c:
    // 0x1cf86c: 0x8fa902f0  lw          $t1, 0x2F0($sp)
    ctx->pc = 0x1cf86cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf870:
    // 0x1cf870: 0xc5210140  lwc1        $f1, 0x140($t1)
    ctx->pc = 0x1cf870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf874:
    // 0x1cf874: 0xc7a002b8  lwc1        $f0, 0x2B8($sp)
    ctx->pc = 0x1cf874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf878:
    // 0x1cf878: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cf878u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1cf87c:
    // 0x1cf87c: 0xc7a3020c  lwc1        $f3, 0x20C($sp)
    ctx->pc = 0x1cf87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cf880:
    // 0x1cf880: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x1cf880u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1cf884:
    // 0x1cf884: 0xe7a2020c  swc1        $f2, 0x20C($sp)
    ctx->pc = 0x1cf884u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
label_1cf888:
    // 0x1cf888: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1cf888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf88c:
    // 0x1cf88c: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x1cf88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf890:
    // 0x1cf890: 0xc7a102b8  lwc1        $f1, 0x2B8($sp)
    ctx->pc = 0x1cf890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf894:
    // 0x1cf894: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1cf894u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1cf898:
    // 0x1cf898: 0xc7a00210  lwc1        $f0, 0x210($sp)
    ctx->pc = 0x1cf898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf89c:
    // 0x1cf89c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cf89cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cf8a0:
    // 0x1cf8a0: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x1cf8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_1cf8a4:
    // 0x1cf8a4: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1cf8a8:
    if (ctx->pc == 0x1CF8A8u) {
        ctx->pc = 0x1CF8ACu;
        goto label_1cf8ac;
    }
    ctx->pc = 0x1CF8A4u;
    {
        const bool branch_taken_0x1cf8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf8a4) {
            ctx->pc = 0x1CF958u;
            goto label_1cf958;
        }
    }
    ctx->pc = 0x1CF8ACu;
label_1cf8ac:
    // 0x1cf8ac: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x1cf8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf8b0:
    // 0x1cf8b0: 0xc7a002b8  lwc1        $f0, 0x2B8($sp)
    ctx->pc = 0x1cf8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf8b4:
    // 0x1cf8b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1cf8b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf8b8:
    // 0x1cf8b8: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1cf8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf8bc:
    // 0x1cf8bc: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x1cf8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf8c0:
    // 0x1cf8c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cf8c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cf8c4:
    // 0x1cf8c4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1cf8c8:
    if (ctx->pc == 0x1CF8C8u) {
        ctx->pc = 0x1CF8CCu;
        goto label_1cf8cc;
    }
    ctx->pc = 0x1CF8C4u;
    {
        const bool branch_taken_0x1cf8c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf8c4) {
            ctx->pc = 0x1CF904u;
            goto label_1cf904;
        }
    }
    ctx->pc = 0x1CF8CCu;
label_1cf8cc:
    // 0x1cf8cc: 0xc7a10208  lwc1        $f1, 0x208($sp)
    ctx->pc = 0x1cf8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf8d0:
    // 0x1cf8d0: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x1cf8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf8d4:
    // 0x1cf8d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cf8d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf8d8:
    // 0x1cf8d8: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x1cf8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_1cf8dc:
    // 0x1cf8dc: 0xc7a1020c  lwc1        $f1, 0x20C($sp)
    ctx->pc = 0x1cf8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf8e0:
    // 0x1cf8e0: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x1cf8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf8e4:
    // 0x1cf8e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cf8e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf8e8:
    // 0x1cf8e8: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x1cf8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
label_1cf8ec:
    // 0x1cf8ec: 0xc7a10210  lwc1        $f1, 0x210($sp)
    ctx->pc = 0x1cf8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf8f0:
    // 0x1cf8f0: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x1cf8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf8f4:
    // 0x1cf8f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cf8f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf8f8:
    // 0x1cf8f8: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x1cf8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_1cf8fc:
    // 0x1cf8fc: 0x10000016  b           . + 4 + (0x16 << 2)
label_1cf900:
    if (ctx->pc == 0x1CF900u) {
        ctx->pc = 0x1CF904u;
        goto label_1cf904;
    }
    ctx->pc = 0x1CF8FCu;
    {
        const bool branch_taken_0x1cf8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf8fc) {
            ctx->pc = 0x1CF958u;
            goto label_1cf958;
        }
    }
    ctx->pc = 0x1CF904u;
label_1cf904:
    // 0x1cf904: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1cf904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf908:
    // 0x1cf908: 0xc4410140  lwc1        $f1, 0x140($v0)
    ctx->pc = 0x1cf908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf90c:
    // 0x1cf90c: 0xc7a002b8  lwc1        $f0, 0x2B8($sp)
    ctx->pc = 0x1cf90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf910:
    // 0x1cf910: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1cf910u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1cf914:
    // 0x1cf914: 0xc7a00208  lwc1        $f0, 0x208($sp)
    ctx->pc = 0x1cf914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf918:
    // 0x1cf918: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cf918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cf91c:
    // 0x1cf91c: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x1cf91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_1cf920:
    // 0x1cf920: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x1cf920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf924:
    // 0x1cf924: 0xc4610140  lwc1        $f1, 0x140($v1)
    ctx->pc = 0x1cf924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf928:
    // 0x1cf928: 0xc7a002b8  lwc1        $f0, 0x2B8($sp)
    ctx->pc = 0x1cf928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf92c:
    // 0x1cf92c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1cf92cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1cf930:
    // 0x1cf930: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x1cf930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf934:
    // 0x1cf934: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cf934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cf938:
    // 0x1cf938: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x1cf938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
label_1cf93c:
    // 0x1cf93c: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x1cf93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf940:
    // 0x1cf940: 0xc4a10140  lwc1        $f1, 0x140($a1)
    ctx->pc = 0x1cf940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf944:
    // 0x1cf944: 0xc7a002b8  lwc1        $f0, 0x2B8($sp)
    ctx->pc = 0x1cf944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf948:
    // 0x1cf948: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1cf948u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1cf94c:
    // 0x1cf94c: 0xc7a00210  lwc1        $f0, 0x210($sp)
    ctx->pc = 0x1cf94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf950:
    // 0x1cf950: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cf950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cf954:
    // 0x1cf954: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x1cf954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_1cf958:
    // 0x1cf958: 0x27a401f8  addiu       $a0, $sp, 0x1F8
    ctx->pc = 0x1cf958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_1cf95c:
    // 0x1cf95c: 0x27a50208  addiu       $a1, $sp, 0x208
    ctx->pc = 0x1cf95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_1cf960:
    // 0x1cf960: 0xc104cf2  jal         func_4133C8
label_1cf964:
    if (ctx->pc == 0x1CF964u) {
        ctx->pc = 0x1CF968u;
        goto label_1cf968;
    }
    ctx->pc = 0x1CF960u;
    SET_GPR_U32(ctx, 31, 0x1CF968u);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x1CF960u, 0x1CF968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF968u;
label_1cf968:
    // 0x1cf968: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1cf968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1cf96c:
    // 0x1cf96c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cf96cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cf970:
    // 0x1cf970: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x1cf970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf974:
    // 0x1cf974: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cf974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf978:
    // 0x1cf978: 0xe7a001f8  swc1        $f0, 0x1F8($sp)
    ctx->pc = 0x1cf978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_1cf97c:
    // 0x1cf97c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1cf97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_1cf980:
    // 0x1cf980: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cf980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cf984:
    // 0x1cf984: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x1cf984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf988:
    // 0x1cf988: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cf988u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf98c:
    // 0x1cf98c: 0xe7a001fc  swc1        $f0, 0x1FC($sp)
    ctx->pc = 0x1cf98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
label_1cf990:
    // 0x1cf990: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1cf990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_1cf994:
    // 0x1cf994: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1cf994u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cf998:
    // 0x1cf998: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x1cf998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf99c:
    // 0x1cf99c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cf99cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf9a0:
    // 0x1cf9a0: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x1cf9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_1cf9a4:
    // 0x1cf9a4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1cf9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1cf9a8:
    // 0x1cf9a8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1cf9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1cf9ac:
    // 0x1cf9ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1cf9acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf9b0:
    // 0x1cf9b0: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1cf9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf9b4:
    // 0x1cf9b4: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x1cf9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_1cf9b8:
    // 0x1cf9b8: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x1cf9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf9bc:
    // 0x1cf9bc: 0xe7a001ec  swc1        $f0, 0x1EC($sp)
    ctx->pc = 0x1cf9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
label_1cf9c0:
    // 0x1cf9c0: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1cf9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf9c4:
    // 0x1cf9c4: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x1cf9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_1cf9c8:
    // 0x1cf9c8: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x1cf9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf9cc:
    // 0x1cf9cc: 0x8f8296d0  lw          $v0, -0x6930($gp)
    ctx->pc = 0x1cf9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cf9d0:
    // 0x1cf9d0: 0x2022018  mult        $a0, $s0, $v0
    ctx->pc = 0x1cf9d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1cf9d4:
    // 0x1cf9d4: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1cf9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1cf9d8:
    // 0x1cf9d8: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x1cf9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1cf9dc:
    // 0x1cf9dc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1cf9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1cf9e0:
    // 0x1cf9e0: 0x8c6300a4  lw          $v1, 0xA4($v1)
    ctx->pc = 0x1cf9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1cf9e4:
    // 0x1cf9e4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1cf9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cf9e8:
    // 0x1cf9e8: 0x27a501e8  addiu       $a1, $sp, 0x1E8
    ctx->pc = 0x1cf9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_1cf9ec:
    // 0x1cf9ec: 0xc041d58  jal         func_107560
label_1cf9f0:
    if (ctx->pc == 0x1CF9F0u) {
        ctx->pc = 0x1CF9F4u;
        goto label_1cf9f4;
    }
    ctx->pc = 0x1CF9ECu;
    SET_GPR_U32(ctx, 31, 0x1CF9F4u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x1CF9ECu, 0x1CF9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF9F4u;
label_1cf9f4:
    // 0x1cf9f4: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1cf9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cf9f8:
    // 0x1cf9f8: 0x8f8296d0  lw          $v0, -0x6930($gp)
    ctx->pc = 0x1cf9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cf9fc:
    // 0x1cf9fc: 0x202f018  mult        $fp, $s0, $v0
    ctx->pc = 0x1cf9fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_1cfa00:
    // 0x1cfa00: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x1cfa00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
label_1cfa04:
    // 0x1cfa04: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1cfa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1cfa08:
    // 0x1cfa08: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1cfa08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cfa0c:
    // 0x1cfa0c: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1cfa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1cfa10:
    // 0x1cfa10: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1cfa10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cfa14:
    // 0x1cfa14: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x1cfa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1cfa18:
    // 0x1cfa18: 0xafa202b4  sw          $v0, 0x2B4($sp)
    ctx->pc = 0x1cfa18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 2));
label_1cfa1c:
    // 0x1cfa1c: 0x8fa202b4  lw          $v0, 0x2B4($sp)
    ctx->pc = 0x1cfa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
label_1cfa20:
    // 0x1cfa20: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1cfa20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1cfa24:
    // 0x1cfa24: 0x8fa302b4  lw          $v1, 0x2B4($sp)
    ctx->pc = 0x1cfa24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
label_1cfa28:
    // 0x1cfa28: 0xa0720001  sb          $s2, 0x1($v1)
    ctx->pc = 0x1cfa28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 18));
label_1cfa2c:
    // 0x1cfa2c: 0x8fa202b4  lw          $v0, 0x2B4($sp)
    ctx->pc = 0x1cfa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
label_1cfa30:
    // 0x1cfa30: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1cfa30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cfa34:
    // 0x1cfa34: 0x8fa302b4  lw          $v1, 0x2B4($sp)
    ctx->pc = 0x1cfa34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
label_1cfa38:
    // 0x1cfa38: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cfa38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1cfa3c:
    // 0x1cfa3c: 0xc78196e8  lwc1        $f1, -0x6918($gp)
    ctx->pc = 0x1cfa3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfa40:
    // 0x1cfa40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfa40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfa44:
    // 0x1cfa44: 0x0  nop
    ctx->pc = 0x1cfa44u;
    // NOP
label_1cfa48:
    // 0x1cfa48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cfa48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cfa4c:
    // 0x1cfa4c: 0x4500008a  bc1f        . + 4 + (0x8A << 2)
label_1cfa50:
    if (ctx->pc == 0x1CFA50u) {
        ctx->pc = 0x1CFA54u;
        goto label_1cfa54;
    }
    ctx->pc = 0x1CFA4Cu;
    {
        const bool branch_taken_0x1cfa4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfa4c) {
            ctx->pc = 0x1CFC78u;
            goto label_1cfc78;
        }
    }
    ctx->pc = 0x1CFA54u;
label_1cfa54:
    // 0x1cfa54: 0x8f8296d0  lw          $v0, -0x6930($gp)
    ctx->pc = 0x1cfa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cfa58:
    // 0x1cfa58: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x1cfa58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1cfa5c:
    // 0x1cfa5c: 0x8f9796d0  lw          $s7, -0x6930($gp)
    ctx->pc = 0x1cfa5cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cfa60:
    // 0x1cfa60: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1cfa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_1cfa64:
    // 0x1cfa64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cfa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1cfa68:
    // 0x1cfa68: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1cfa68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cfa6c:
    // 0x1cfa6c: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1cfa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1cfa70:
    // 0x1cfa70: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1cfa70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cfa74:
    // 0x1cfa74: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1cfa74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cfa78:
    // 0x1cfa78: 0x8c8500a4  lw          $a1, 0xA4($a0)
    ctx->pc = 0x1cfa78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1cfa7c:
    // 0x1cfa7c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1cfa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1cfa80:
    // 0x1cfa80: 0xafa202d0  sw          $v0, 0x2D0($sp)
    ctx->pc = 0x1cfa80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 2));
label_1cfa84:
    // 0x1cfa84: 0x8f8396d0  lw          $v1, -0x6930($gp)
    ctx->pc = 0x1cfa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cfa88:
    // 0x1cfa88: 0x2032018  mult        $a0, $s0, $v1
    ctx->pc = 0x1cfa88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1cfa8c:
    // 0x1cfa8c: 0x8f8296d0  lw          $v0, -0x6930($gp)
    ctx->pc = 0x1cfa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cfa90:
    // 0x1cfa90: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1cfa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1cfa94:
    // 0x1cfa94: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x1cfa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1cfa98:
    // 0x1cfa98: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1cfa98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1cfa9c:
    // 0x1cfa9c: 0xa43821  addu        $a3, $a1, $a0
    ctx->pc = 0x1cfa9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1cfaa0:
    // 0x1cfaa0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1cfaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1cfaa4:
    // 0x1cfaa4: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x1cfaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cfaa8:
    // 0x1cfaa8: 0x8c6300a4  lw          $v1, 0xA4($v1)
    ctx->pc = 0x1cfaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1cfaac:
    // 0x1cfaac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cfaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cfab0:
    // 0x1cfab0: 0xafa202cc  sw          $v0, 0x2CC($sp)
    ctx->pc = 0x1cfab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 2));
label_1cfab4:
    // 0x1cfab4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1cfab4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cfab8:
    // 0x1cfab8: 0x10000036  b           . + 4 + (0x36 << 2)
label_1cfabc:
    if (ctx->pc == 0x1CFABCu) {
        ctx->pc = 0x1CFAC0u;
        goto label_1cfac0;
    }
    ctx->pc = 0x1CFAB8u;
    {
        const bool branch_taken_0x1cfab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfab8) {
            ctx->pc = 0x1CFB94u;
            goto label_1cfb94;
        }
    }
    ctx->pc = 0x1CFAC0u;
label_1cfac0:
    // 0x1cfac0: 0x8f8296d0  lw          $v0, -0x6930($gp)
    ctx->pc = 0x1cfac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cfac4:
    // 0x1cfac4: 0x2022018  mult        $a0, $s0, $v0
    ctx->pc = 0x1cfac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1cfac8:
    // 0x1cfac8: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1cfac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1cfacc:
    // 0x1cfacc: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1cfaccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1cfad0:
    // 0x1cfad0: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1cfad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1cfad4:
    // 0x1cfad4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1cfad4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cfad8:
    // 0x1cfad8: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1cfad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cfadc:
    // 0x1cfadc: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1cfadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1cfae0:
    // 0x1cfae0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1cfae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1cfae4:
    // 0x1cfae4: 0x8f8496d0  lw          $a0, -0x6930($gp)
    ctx->pc = 0x1cfae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cfae8:
    // 0x1cfae8: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x1cfae8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1cfaec:
    // 0x1cfaec: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x1cfaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1cfaf0:
    // 0x1cfaf0: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x1cfaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_1cfaf4:
    // 0x1cfaf4: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x1cfaf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1cfaf8:
    // 0x1cfaf8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cfaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1cfafc:
    // 0x1cfafc: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1cfafcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1cfb00:
    // 0x1cfb00: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1cfb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1cfb04:
    // 0x1cfb04: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1cfb04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cfb08:
    // 0x1cfb08: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x1cfb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cfb0c:
    // 0x1cfb0c: 0x8c6600a4  lw          $a2, 0xA4($v1)
    ctx->pc = 0x1cfb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1cfb10:
    // 0x1cfb10: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x1cfb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1cfb14:
    // 0x1cfb14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cfb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cfb18:
    // 0x1cfb18: 0xc041d58  jal         func_107560
label_1cfb1c:
    if (ctx->pc == 0x1CFB1Cu) {
        ctx->pc = 0x1CFB20u;
        goto label_1cfb20;
    }
    ctx->pc = 0x1CFB18u;
    SET_GPR_U32(ctx, 31, 0x1CFB20u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x1CFB18u, 0x1CFB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFB20u;
label_1cfb20:
    // 0x1cfb20: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x1cfb20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_1cfb24:
    // 0x1cfb24: 0x8f8296d0  lw          $v0, -0x6930($gp)
    ctx->pc = 0x1cfb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cfb28:
    // 0x1cfb28: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x1cfb28u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_1cfb2c:
    // 0x1cfb2c: 0x1812  mflo        $v1
    ctx->pc = 0x1cfb2cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1cfb30:
    // 0x1cfb30: 0x2831018  mult        $v0, $s4, $v1
    ctx->pc = 0x1cfb30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1cfb34:
    // 0x1cfb34: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1cfb34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1cfb38:
    // 0x1cfb38: 0xa3a402ef  sb          $a0, 0x2EF($sp)
    ctx->pc = 0x1cfb38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 751), (uint8_t)GPR_U32(ctx, 4));
label_1cfb3c:
    // 0x1cfb3c: 0x8f8596d0  lw          $a1, -0x6930($gp)
    ctx->pc = 0x1cfb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cfb40:
    // 0x1cfb40: 0x2051018  mult        $v0, $s0, $a1
    ctx->pc = 0x1cfb40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1cfb44:
    // 0x1cfb44: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1cfb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1cfb48:
    // 0x1cfb48: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1cfb48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cfb4c:
    // 0x1cfb4c: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1cfb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1cfb50:
    // 0x1cfb50: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1cfb50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cfb54:
    // 0x1cfb54: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x1cfb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cfb58:
    // 0x1cfb58: 0x8c6400a4  lw          $a0, 0xA4($v1)
    ctx->pc = 0x1cfb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1cfb5c:
    // 0x1cfb5c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1cfb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1cfb60:
    // 0x1cfb60: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1cfb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1cfb64:
    // 0x1cfb64: 0xafa402b0  sw          $a0, 0x2B0($sp)
    ctx->pc = 0x1cfb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 4));
label_1cfb68:
    // 0x1cfb68: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x1cfb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_1cfb6c:
    // 0x1cfb6c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1cfb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1cfb70:
    // 0x1cfb70: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1cfb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1cfb74:
    // 0x1cfb74: 0x8fa502b0  lw          $a1, 0x2B0($sp)
    ctx->pc = 0x1cfb74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_1cfb78:
    // 0x1cfb78: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x1cfb78u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_1cfb7c:
    // 0x1cfb7c: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x1cfb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_1cfb80:
    // 0x1cfb80: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1cfb80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cfb84:
    // 0x1cfb84: 0x93a202ef  lbu         $v0, 0x2EF($sp)
    ctx->pc = 0x1cfb84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 751)));
label_1cfb88:
    // 0x1cfb88: 0x8fa502b0  lw          $a1, 0x2B0($sp)
    ctx->pc = 0x1cfb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_1cfb8c:
    // 0x1cfb8c: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x1cfb8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
label_1cfb90:
    // 0x1cfb90: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1cfb90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1cfb94:
    // 0x1cfb94: 0x8f8596d0  lw          $a1, -0x6930($gp)
    ctx->pc = 0x1cfb94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cfb98:
    // 0x1cfb98: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1cfb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1cfb9c:
    // 0x1cfb9c: 0x282202b  sltu        $a0, $s4, $v0
    ctx->pc = 0x1cfb9cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1cfba0:
    // 0x1cfba0: 0x1480ffc7  bnez        $a0, . + 4 + (-0x39 << 2)
label_1cfba4:
    if (ctx->pc == 0x1CFBA4u) {
        ctx->pc = 0x1CFBA8u;
        goto label_1cfba8;
    }
    ctx->pc = 0x1CFBA0u;
    {
        const bool branch_taken_0x1cfba0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfba0) {
            ctx->pc = 0x1CFAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cfac0;
        }
    }
    ctx->pc = 0x1CFBA8u;
label_1cfba8:
    // 0x1cfba8: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1cfba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfbac:
    // 0x1cfbac: 0xc7a00208  lwc1        $f0, 0x208($sp)
    ctx->pc = 0x1cfbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cfbb0:
    // 0x1cfbb0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cfbb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cfbb4:
    // 0x1cfbb4: 0xe7a001d8  swc1        $f0, 0x1D8($sp)
    ctx->pc = 0x1cfbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_1cfbb8:
    // 0x1cfbb8: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x1cfbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfbbc:
    // 0x1cfbbc: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x1cfbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cfbc0:
    // 0x1cfbc0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cfbc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cfbc4:
    // 0x1cfbc4: 0xe7a001dc  swc1        $f0, 0x1DC($sp)
    ctx->pc = 0x1cfbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
label_1cfbc8:
    // 0x1cfbc8: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x1cfbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfbcc:
    // 0x1cfbcc: 0xc7a00210  lwc1        $f0, 0x210($sp)
    ctx->pc = 0x1cfbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cfbd0:
    // 0x1cfbd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cfbd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cfbd4:
    // 0x1cfbd4: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x1cfbd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_1cfbd8:
    // 0x1cfbd8: 0x8f8496d0  lw          $a0, -0x6930($gp)
    ctx->pc = 0x1cfbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cfbdc:
    // 0x1cfbdc: 0x2041018  mult        $v0, $s0, $a0
    ctx->pc = 0x1cfbdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1cfbe0:
    // 0x1cfbe0: 0x8f8596d0  lw          $a1, -0x6930($gp)
    ctx->pc = 0x1cfbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cfbe4:
    // 0x1cfbe4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1cfbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1cfbe8:
    // 0x1cfbe8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1cfbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1cfbec:
    // 0x1cfbec: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1cfbecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1cfbf0:
    // 0x1cfbf0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1cfbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cfbf4:
    // 0x1cfbf4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1cfbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cfbf8:
    // 0x1cfbf8: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1cfbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cfbfc:
    // 0x1cfbfc: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1cfbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1cfc00:
    // 0x1cfc00: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x1cfc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1cfc04:
    // 0x1cfc04: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1cfc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cfc08:
    // 0x1cfc08: 0x27a501d8  addiu       $a1, $sp, 0x1D8
    ctx->pc = 0x1cfc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_1cfc0c:
    // 0x1cfc0c: 0xc041d58  jal         func_107560
label_1cfc10:
    if (ctx->pc == 0x1CFC10u) {
        ctx->pc = 0x1CFC14u;
        goto label_1cfc14;
    }
    ctx->pc = 0x1CFC0Cu;
    SET_GPR_U32(ctx, 31, 0x1CFC14u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x1CFC0Cu, 0x1CFC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC14u;
label_1cfc14:
    // 0x1cfc14: 0x8f8496d0  lw          $a0, -0x6930($gp)
    ctx->pc = 0x1cfc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cfc18:
    // 0x1cfc18: 0x2041018  mult        $v0, $s0, $a0
    ctx->pc = 0x1cfc18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1cfc1c:
    // 0x1cfc1c: 0x8f8396d0  lw          $v1, -0x6930($gp)
    ctx->pc = 0x1cfc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cfc20:
    // 0x1cfc20: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x1cfc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_1cfc24:
    // 0x1cfc24: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x1cfc24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1cfc28:
    // 0x1cfc28: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cfc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cfc2c:
    // 0x1cfc2c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1cfc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1cfc30:
    // 0x1cfc30: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1cfc30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1cfc34:
    // 0x1cfc34: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1cfc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1cfc38:
    // 0x1cfc38: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1cfc38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cfc3c:
    // 0x1cfc3c: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1cfc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cfc40:
    // 0x1cfc40: 0x8c8500a4  lw          $a1, 0xA4($a0)
    ctx->pc = 0x1cfc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1cfc44:
    // 0x1cfc44: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1cfc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1cfc48:
    // 0x1cfc48: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1cfc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1cfc4c:
    // 0x1cfc4c: 0xafa202ac  sw          $v0, 0x2AC($sp)
    ctx->pc = 0x1cfc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 2));
label_1cfc50:
    // 0x1cfc50: 0x8fa402ac  lw          $a0, 0x2AC($sp)
    ctx->pc = 0x1cfc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
label_1cfc54:
    // 0x1cfc54: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1cfc54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_1cfc58:
    // 0x1cfc58: 0x8fa502ac  lw          $a1, 0x2AC($sp)
    ctx->pc = 0x1cfc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
label_1cfc5c:
    // 0x1cfc5c: 0xa0b20001  sb          $s2, 0x1($a1)
    ctx->pc = 0x1cfc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 18));
label_1cfc60:
    // 0x1cfc60: 0x8fa202ac  lw          $v0, 0x2AC($sp)
    ctx->pc = 0x1cfc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
label_1cfc64:
    // 0x1cfc64: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1cfc64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cfc68:
    // 0x1cfc68: 0x8fa402ac  lw          $a0, 0x2AC($sp)
    ctx->pc = 0x1cfc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
label_1cfc6c:
    // 0x1cfc6c: 0xa0920003  sb          $s2, 0x3($a0)
    ctx->pc = 0x1cfc6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 18));
label_1cfc70:
    // 0x1cfc70: 0x10000082  b           . + 4 + (0x82 << 2)
label_1cfc74:
    if (ctx->pc == 0x1CFC74u) {
        ctx->pc = 0x1CFC78u;
        goto label_1cfc78;
    }
    ctx->pc = 0x1CFC70u;
    {
        const bool branch_taken_0x1cfc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfc70) {
            ctx->pc = 0x1CFE7Cu;
            goto label_1cfe7c;
        }
    }
    ctx->pc = 0x1CFC78u;
label_1cfc78:
    // 0x1cfc78: 0x8f8296d0  lw          $v0, -0x6930($gp)
    ctx->pc = 0x1cfc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cfc7c:
    // 0x1cfc7c: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x1cfc7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1cfc80:
    // 0x1cfc80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cfc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1cfc84:
    // 0x1cfc84: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1cfc84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cfc88:
    // 0x1cfc88: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1cfc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1cfc8c:
    // 0x1cfc8c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1cfc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cfc90:
    // 0x1cfc90: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1cfc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cfc94:
    // 0x1cfc94: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1cfc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1cfc98:
    // 0x1cfc98: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1cfc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cfc9c:
    // 0x1cfc9c: 0xafa402cc  sw          $a0, 0x2CC($sp)
    ctx->pc = 0x1cfc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 4));
label_1cfca0:
    // 0x1cfca0: 0x8f8296d0  lw          $v0, -0x6930($gp)
    ctx->pc = 0x1cfca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cfca4:
    // 0x1cfca4: 0x2022018  mult        $a0, $s0, $v0
    ctx->pc = 0x1cfca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1cfca8:
    // 0x1cfca8: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x1cfca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_1cfcac:
    // 0x1cfcac: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1cfcacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cfcb0:
    // 0x1cfcb0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1cfcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1cfcb4:
    // 0x1cfcb4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1cfcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cfcb8:
    // 0x1cfcb8: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1cfcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cfcbc:
    // 0x1cfcbc: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1cfcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1cfcc0:
    // 0x1cfcc0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1cfcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cfcc4:
    // 0x1cfcc4: 0xafa302d0  sw          $v1, 0x2D0($sp)
    ctx->pc = 0x1cfcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 3));
label_1cfcc8:
    // 0x1cfcc8: 0x8f8296d0  lw          $v0, -0x6930($gp)
    ctx->pc = 0x1cfcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cfccc:
    // 0x1cfccc: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x1cfcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1cfcd0:
    // 0x1cfcd0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cfcd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cfcd4:
    // 0x1cfcd4: 0x10000038  b           . + 4 + (0x38 << 2)
label_1cfcd8:
    if (ctx->pc == 0x1CFCD8u) {
        ctx->pc = 0x1CFCDCu;
        goto label_1cfcdc;
    }
    ctx->pc = 0x1CFCD4u;
    {
        const bool branch_taken_0x1cfcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfcd4) {
            ctx->pc = 0x1CFDB8u;
            goto label_1cfdb8;
        }
    }
    ctx->pc = 0x1CFCDCu;
label_1cfcdc:
    // 0x1cfcdc: 0x8f8596d0  lw          $a1, -0x6930($gp)
    ctx->pc = 0x1cfcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cfce0:
    // 0x1cfce0: 0x2051018  mult        $v0, $s0, $a1
    ctx->pc = 0x1cfce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1cfce4:
    // 0x1cfce4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1cfce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1cfce8:
    // 0x1cfce8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1cfce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1cfcec:
    // 0x1cfcec: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1cfcecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1cfcf0:
    // 0x1cfcf0: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1cfcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1cfcf4:
    // 0x1cfcf4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1cfcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1cfcf8:
    // 0x1cfcf8: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1cfcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cfcfc:
    // 0x1cfcfc: 0x8c8300a4  lw          $v1, 0xA4($a0)
    ctx->pc = 0x1cfcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1cfd00:
    // 0x1cfd00: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x1cfd00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cfd04:
    // 0x1cfd04: 0x8f8496d0  lw          $a0, -0x6930($gp)
    ctx->pc = 0x1cfd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cfd08:
    // 0x1cfd08: 0x2042818  mult        $a1, $s0, $a0
    ctx->pc = 0x1cfd08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1cfd0c:
    // 0x1cfd0c: 0x2651021  addu        $v0, $s3, $a1
    ctx->pc = 0x1cfd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_1cfd10:
    // 0x1cfd10: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1cfd10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cfd14:
    // 0x1cfd14: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1cfd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1cfd18:
    // 0x1cfd18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfd18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cfd1c:
    // 0x1cfd1c: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1cfd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cfd20:
    // 0x1cfd20: 0x8c8300a4  lw          $v1, 0xA4($a0)
    ctx->pc = 0x1cfd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1cfd24:
    // 0x1cfd24: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1cfd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cfd28:
    // 0x1cfd28: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1cfd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cfd2c:
    // 0x1cfd2c: 0xc041d58  jal         func_107560
label_1cfd30:
    if (ctx->pc == 0x1CFD30u) {
        ctx->pc = 0x1CFD34u;
        goto label_1cfd34;
    }
    ctx->pc = 0x1CFD2Cu;
    SET_GPR_U32(ctx, 31, 0x1CFD34u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x1CFD2Cu, 0x1CFD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFD34u;
label_1cfd34:
    // 0x1cfd34: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x1cfd34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_1cfd38:
    // 0x1cfd38: 0x8f8296d0  lw          $v0, -0x6930($gp)
    ctx->pc = 0x1cfd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cfd3c:
    // 0x1cfd3c: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x1cfd3cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_1cfd40:
    // 0x1cfd40: 0x1012  mflo        $v0
    ctx->pc = 0x1cfd40u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1cfd44:
    // 0x1cfd44: 0x8f8496d0  lw          $a0, -0x6930($gp)
    ctx->pc = 0x1cfd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cfd48:
    // 0x1cfd48: 0x932823  subu        $a1, $a0, $s3
    ctx->pc = 0x1cfd48u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_1cfd4c:
    // 0x1cfd4c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1cfd4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1cfd50:
    // 0x1cfd50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1cfd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1cfd54:
    // 0x1cfd54: 0xa3a202ee  sb          $v0, 0x2EE($sp)
    ctx->pc = 0x1cfd54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 750), (uint8_t)GPR_U32(ctx, 2));
label_1cfd58:
    // 0x1cfd58: 0x8f8296d0  lw          $v0, -0x6930($gp)
    ctx->pc = 0x1cfd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cfd5c:
    // 0x1cfd5c: 0x2022018  mult        $a0, $s0, $v0
    ctx->pc = 0x1cfd5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1cfd60:
    // 0x1cfd60: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x1cfd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_1cfd64:
    // 0x1cfd64: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x1cfd64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1cfd68:
    // 0x1cfd68: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1cfd68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1cfd6c:
    // 0x1cfd6c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1cfd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1cfd70:
    // 0x1cfd70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cfd70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cfd74:
    // 0x1cfd74: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x1cfd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cfd78:
    // 0x1cfd78: 0x8c6500a4  lw          $a1, 0xA4($v1)
    ctx->pc = 0x1cfd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1cfd7c:
    // 0x1cfd7c: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x1cfd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1cfd80:
    // 0x1cfd80: 0x24c2000c  addiu       $v0, $a2, 0xC
    ctx->pc = 0x1cfd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_1cfd84:
    // 0x1cfd84: 0xafa202a8  sw          $v0, 0x2A8($sp)
    ctx->pc = 0x1cfd84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 2));
label_1cfd88:
    // 0x1cfd88: 0x8fa202a8  lw          $v0, 0x2A8($sp)
    ctx->pc = 0x1cfd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
label_1cfd8c:
    // 0x1cfd8c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1cfd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1cfd90:
    // 0x1cfd90: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1cfd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1cfd94:
    // 0x1cfd94: 0x8fa202a8  lw          $v0, 0x2A8($sp)
    ctx->pc = 0x1cfd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
label_1cfd98:
    // 0x1cfd98: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1cfd98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1cfd9c:
    // 0x1cfd9c: 0x8fa202a8  lw          $v0, 0x2A8($sp)
    ctx->pc = 0x1cfd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
label_1cfda0:
    // 0x1cfda0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1cfda0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cfda4:
    // 0x1cfda4: 0x93a202ee  lbu         $v0, 0x2EE($sp)
    ctx->pc = 0x1cfda4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 750)));
label_1cfda8:
    // 0x1cfda8: 0x8fa402a8  lw          $a0, 0x2A8($sp)
    ctx->pc = 0x1cfda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
label_1cfdac:
    // 0x1cfdac: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1cfdacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_1cfdb0:
    // 0x1cfdb0: 0x2665ffff  addiu       $a1, $s3, -0x1
    ctx->pc = 0x1cfdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_1cfdb4:
    // 0x1cfdb4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1cfdb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cfdb8:
    // 0x1cfdb8: 0x1660ffc8  bnez        $s3, . + 4 + (-0x38 << 2)
label_1cfdbc:
    if (ctx->pc == 0x1CFDBCu) {
        ctx->pc = 0x1CFDC0u;
        goto label_1cfdc0;
    }
    ctx->pc = 0x1CFDB8u;
    {
        const bool branch_taken_0x1cfdb8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfdb8) {
            ctx->pc = 0x1CFCDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cfcdc;
        }
    }
    ctx->pc = 0x1CFDC0u;
label_1cfdc0:
    // 0x1cfdc0: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1cfdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfdc4:
    // 0x1cfdc4: 0xc7a00208  lwc1        $f0, 0x208($sp)
    ctx->pc = 0x1cfdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cfdc8:
    // 0x1cfdc8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cfdc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cfdcc:
    // 0x1cfdcc: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x1cfdccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_1cfdd0:
    // 0x1cfdd0: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x1cfdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfdd4:
    // 0x1cfdd4: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x1cfdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cfdd8:
    // 0x1cfdd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cfdd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cfddc:
    // 0x1cfddc: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x1cfddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
label_1cfde0:
    // 0x1cfde0: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x1cfde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cfde4:
    // 0x1cfde4: 0xc7a00210  lwc1        $f0, 0x210($sp)
    ctx->pc = 0x1cfde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cfde8:
    // 0x1cfde8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cfde8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cfdec:
    // 0x1cfdec: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x1cfdecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_1cfdf0:
    // 0x1cfdf0: 0x8f8296d0  lw          $v0, -0x6930($gp)
    ctx->pc = 0x1cfdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cfdf4:
    // 0x1cfdf4: 0x2022018  mult        $a0, $s0, $v0
    ctx->pc = 0x1cfdf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1cfdf8:
    // 0x1cfdf8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1cfdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1cfdfc:
    // 0x1cfdfc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cfdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cfe00:
    // 0x1cfe00: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x1cfe00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_1cfe04:
    // 0x1cfe04: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x1cfe04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1cfe08:
    // 0x1cfe08: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1cfe08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cfe0c:
    // 0x1cfe0c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cfe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1cfe10:
    // 0x1cfe10: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x1cfe10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cfe14:
    // 0x1cfe14: 0x8ca200a4  lw          $v0, 0xA4($a1)
    ctx->pc = 0x1cfe14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
label_1cfe18:
    // 0x1cfe18: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1cfe18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1cfe1c:
    // 0x1cfe1c: 0x27a501c8  addiu       $a1, $sp, 0x1C8
    ctx->pc = 0x1cfe1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_1cfe20:
    // 0x1cfe20: 0xc041d58  jal         func_107560
label_1cfe24:
    if (ctx->pc == 0x1CFE24u) {
        ctx->pc = 0x1CFE28u;
        goto label_1cfe28;
    }
    ctx->pc = 0x1CFE20u;
    SET_GPR_U32(ctx, 31, 0x1CFE28u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x1CFE20u, 0x1CFE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE28u;
label_1cfe28:
    // 0x1cfe28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cfe28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cfe2c:
    // 0x1cfe2c: 0x8f8596d0  lw          $a1, -0x6930($gp)
    ctx->pc = 0x1cfe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cfe30:
    // 0x1cfe30: 0x2052018  mult        $a0, $s0, $a1
    ctx->pc = 0x1cfe30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1cfe34:
    // 0x1cfe34: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1cfe34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1cfe38:
    // 0x1cfe38: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1cfe38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1cfe3c:
    // 0x1cfe3c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1cfe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1cfe40:
    // 0x1cfe40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cfe40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cfe44:
    // 0x1cfe44: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x1cfe44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cfe48:
    // 0x1cfe48: 0x8ca200a4  lw          $v0, 0xA4($a1)
    ctx->pc = 0x1cfe48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
label_1cfe4c:
    // 0x1cfe4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cfe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cfe50:
    // 0x1cfe50: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1cfe50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1cfe54:
    // 0x1cfe54: 0xafa202a4  sw          $v0, 0x2A4($sp)
    ctx->pc = 0x1cfe54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 2));
label_1cfe58:
    // 0x1cfe58: 0x8fa202a4  lw          $v0, 0x2A4($sp)
    ctx->pc = 0x1cfe58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_1cfe5c:
    // 0x1cfe5c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1cfe5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1cfe60:
    // 0x1cfe60: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1cfe60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1cfe64:
    // 0x1cfe64: 0x8fa202a4  lw          $v0, 0x2A4($sp)
    ctx->pc = 0x1cfe64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_1cfe68:
    // 0x1cfe68: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x1cfe68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
label_1cfe6c:
    // 0x1cfe6c: 0x8fa502a4  lw          $a1, 0x2A4($sp)
    ctx->pc = 0x1cfe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_1cfe70:
    // 0x1cfe70: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1cfe70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cfe74:
    // 0x1cfe74: 0x8fa602a4  lw          $a2, 0x2A4($sp)
    ctx->pc = 0x1cfe74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_1cfe78:
    // 0x1cfe78: 0xa0d20003  sb          $s2, 0x3($a2)
    ctx->pc = 0x1cfe78u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 18));
label_1cfe7c:
    // 0x1cfe7c: 0x27a70248  addiu       $a3, $sp, 0x248
    ctx->pc = 0x1cfe7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
label_1cfe80:
    // 0x1cfe80: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1cfe80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cfe84:
    // 0x1cfe84: 0x27a20238  addiu       $v0, $sp, 0x238
    ctx->pc = 0x1cfe84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
label_1cfe88:
    // 0x1cfe88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cfe88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cfe8c:
    // 0x1cfe8c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1cfe8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1cfe90:
    // 0x1cfe90: 0x8fa702d0  lw          $a3, 0x2D0($sp)
    ctx->pc = 0x1cfe90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_1cfe94:
    // 0x1cfe94: 0x8fa802cc  lw          $t0, 0x2CC($sp)
    ctx->pc = 0x1cfe94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
label_1cfe98:
    // 0x1cfe98: 0x27a902c8  addiu       $t1, $sp, 0x2C8
    ctx->pc = 0x1cfe98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
label_1cfe9c:
    // 0x1cfe9c: 0xc0f14a0  jal         func_3C5280
label_1cfea0:
    if (ctx->pc == 0x1CFEA0u) {
        ctx->pc = 0x1CFEA4u;
        goto label_1cfea4;
    }
    ctx->pc = 0x1CFE9Cu;
    SET_GPR_U32(ctx, 31, 0x1CFEA4u);
    ctx->pc = 0x3C5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5280u, 0x1CFE9Cu, 0x1CFEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFEA4u;
label_1cfea4:
    // 0x1cfea4: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
label_1cfea8:
    if (ctx->pc == 0x1CFEA8u) {
        ctx->pc = 0x1CFEACu;
        goto label_1cfeac;
    }
    ctx->pc = 0x1CFEA4u;
    {
        const bool branch_taken_0x1cfea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfea4) {
            ctx->pc = 0x1D013Cu;
            goto label_1d013c;
        }
    }
    ctx->pc = 0x1CFEACu;
label_1cfeac:
    // 0x1cfeac: 0xc0b06cc  jal         func_2C1B30
label_1cfeb0:
    if (ctx->pc == 0x1CFEB0u) {
        ctx->pc = 0x1CFEB4u;
        goto label_1cfeb4;
    }
    ctx->pc = 0x1CFEACu;
    SET_GPR_U32(ctx, 31, 0x1CFEB4u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x1CFEACu, 0x1CFEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFEB4u;
label_1cfeb4:
    // 0x1cfeb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cfeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cfeb8:
    // 0x1cfeb8: 0xc0b06c4  jal         func_2C1B10
label_1cfebc:
    if (ctx->pc == 0x1CFEBCu) {
        ctx->pc = 0x1CFEC0u;
        goto label_1cfec0;
    }
    ctx->pc = 0x1CFEB8u;
    SET_GPR_U32(ctx, 31, 0x1CFEC0u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x1CFEB8u, 0x1CFEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFEC0u;
label_1cfec0:
    // 0x1cfec0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1cfec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cfec4:
    // 0x1cfec4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cfec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cfec8:
    // 0x1cfec8: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x1cfec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1cfecc:
    // 0x1cfecc: 0xc0b5ad0  jal         func_2D6B40
label_1cfed0:
    if (ctx->pc == 0x1CFED0u) {
        ctx->pc = 0x1CFED4u;
        goto label_1cfed4;
    }
    ctx->pc = 0x1CFECCu;
    SET_GPR_U32(ctx, 31, 0x1CFED4u);
    ctx->pc = 0x2D6B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6B40u, 0x1CFECCu, 0x1CFED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFED4u;
label_1cfed4:
    // 0x1cfed4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cfed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cfed8:
    // 0x1cfed8: 0x27a501b8  addiu       $a1, $sp, 0x1B8
    ctx->pc = 0x1cfed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_1cfedc:
    // 0x1cfedc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1cfedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cfee0:
    // 0x1cfee0: 0xc09ac08  jal         func_26B020
label_1cfee4:
    if (ctx->pc == 0x1CFEE4u) {
        ctx->pc = 0x1CFEE8u;
        goto label_1cfee8;
    }
    ctx->pc = 0x1CFEE0u;
    SET_GPR_U32(ctx, 31, 0x1CFEE8u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x1CFEE0u, 0x1CFEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFEE8u;
label_1cfee8:
    // 0x1cfee8: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x1cfee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cfeec:
    // 0x1cfeec: 0x2464012c  addiu       $a0, $v1, 0x12C
    ctx->pc = 0x1cfeecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 300));
label_1cfef0:
    // 0x1cfef0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cfef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cfef4:
    // 0x1cfef4: 0xc068170  jal         func_1A05C0
label_1cfef8:
    if (ctx->pc == 0x1CFEF8u) {
        ctx->pc = 0x1CFEFCu;
        goto label_1cfefc;
    }
    ctx->pc = 0x1CFEF4u;
    SET_GPR_U32(ctx, 31, 0x1CFEFCu);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1CFEF4u, 0x1CFEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFEFCu;
label_1cfefc:
    // 0x1cfefc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cff00:
    // 0x1cff00: 0xafa301bc  sw          $v1, 0x1BC($sp)
    ctx->pc = 0x1cff00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 3));
label_1cff04:
    // 0x1cff04: 0xafa001c0  sw          $zero, 0x1C0($sp)
    ctx->pc = 0x1cff04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 0));
label_1cff08:
    // 0x1cff08: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1cff08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cff0c:
    // 0x1cff0c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x1cff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1cff10:
    // 0x1cff10: 0x27a501b8  addiu       $a1, $sp, 0x1B8
    ctx->pc = 0x1cff10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_1cff14:
    // 0x1cff14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cff14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cff18:
    // 0x1cff18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cff18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cff1c:
    // 0x1cff1c: 0xc0af03c  jal         func_2BC0F0
label_1cff20:
    if (ctx->pc == 0x1CFF20u) {
        ctx->pc = 0x1CFF24u;
        goto label_1cff24;
    }
    ctx->pc = 0x1CFF1Cu;
    SET_GPR_U32(ctx, 31, 0x1CFF24u);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x1CFF1Cu, 0x1CFF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF24u;
label_1cff24:
    // 0x1cff24: 0xafa002a0  sw          $zero, 0x2A0($sp)
    ctx->pc = 0x1cff24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 0));
label_1cff28:
    // 0x1cff28: 0x10000019  b           . + 4 + (0x19 << 2)
label_1cff2c:
    if (ctx->pc == 0x1CFF2Cu) {
        ctx->pc = 0x1CFF30u;
        goto label_1cff30;
    }
    ctx->pc = 0x1CFF28u;
    {
        const bool branch_taken_0x1cff28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cff28) {
            ctx->pc = 0x1CFF90u;
            goto label_1cff90;
        }
    }
    ctx->pc = 0x1CFF30u;
label_1cff30:
    // 0x1cff30: 0x8f8396d0  lw          $v1, -0x6930($gp)
    ctx->pc = 0x1cff30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cff34:
    // 0x1cff34: 0x2032018  mult        $a0, $s0, $v1
    ctx->pc = 0x1cff34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1cff38:
    // 0x1cff38: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x1cff38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_1cff3c:
    // 0x1cff3c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1cff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1cff40:
    // 0x1cff40: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1cff40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cff44:
    // 0x1cff44: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1cff44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1cff48:
    // 0x1cff48: 0x2f080  sll         $fp, $v0, 2
    ctx->pc = 0x1cff48u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cff4c:
    // 0x1cff4c: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1cff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cff50:
    // 0x1cff50: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1cff50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1cff54:
    // 0x1cff54: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x1cff54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1cff58:
    // 0x1cff58: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1cff58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1cff5c:
    // 0x1cff5c: 0xafa2029c  sw          $v0, 0x29C($sp)
    ctx->pc = 0x1cff5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
label_1cff60:
    // 0x1cff60: 0x8fa4029c  lw          $a0, 0x29C($sp)
    ctx->pc = 0x1cff60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_1cff64:
    // 0x1cff64: 0xa0920000  sb          $s2, 0x0($a0)
    ctx->pc = 0x1cff64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 18));
label_1cff68:
    // 0x1cff68: 0x8fa2029c  lw          $v0, 0x29C($sp)
    ctx->pc = 0x1cff68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_1cff6c:
    // 0x1cff6c: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1cff6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_1cff70:
    // 0x1cff70: 0x8fa2029c  lw          $v0, 0x29C($sp)
    ctx->pc = 0x1cff70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_1cff74:
    // 0x1cff74: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1cff74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_1cff78:
    // 0x1cff78: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1cff78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1cff7c:
    // 0x1cff7c: 0x8fa2029c  lw          $v0, 0x29C($sp)
    ctx->pc = 0x1cff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_1cff80:
    // 0x1cff80: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x1cff80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_1cff84:
    // 0x1cff84: 0x8fa302a0  lw          $v1, 0x2A0($sp)
    ctx->pc = 0x1cff84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_1cff88:
    // 0x1cff88: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1cff88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1cff8c:
    // 0x1cff8c: 0xafa202a0  sw          $v0, 0x2A0($sp)
    ctx->pc = 0x1cff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 2));
label_1cff90:
    // 0x1cff90: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1cff90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_1cff94:
    // 0x1cff94: 0x8f9796d0  lw          $s7, -0x6930($gp)
    ctx->pc = 0x1cff94u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1cff98:
    // 0x1cff98: 0x57102b  sltu        $v0, $v0, $s7
    ctx->pc = 0x1cff98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_1cff9c:
    // 0x1cff9c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_1cffa0:
    if (ctx->pc == 0x1CFFA0u) {
        ctx->pc = 0x1CFFA4u;
        goto label_1cffa4;
    }
    ctx->pc = 0x1CFF9Cu;
    {
        const bool branch_taken_0x1cff9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cff9c) {
            ctx->pc = 0x1CFF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff30;
        }
    }
    ctx->pc = 0x1CFFA4u;
label_1cffa4:
    // 0x1cffa4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1cffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cffa8:
    // 0x1cffa8: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x1cffa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1cffac:
    // 0x1cffac: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1cffacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1cffb0:
    // 0x1cffb0: 0xc085538  jal         func_2154E0
label_1cffb4:
    if (ctx->pc == 0x1CFFB4u) {
        ctx->pc = 0x1CFFB8u;
        goto label_1cffb8;
    }
    ctx->pc = 0x1CFFB0u;
    SET_GPR_U32(ctx, 31, 0x1CFFB8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1CFFB0u, 0x1CFFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFB8u;
label_1cffb8:
    // 0x1cffb8: 0xafa20298  sw          $v0, 0x298($sp)
    ctx->pc = 0x1cffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
label_1cffbc:
    // 0x1cffbc: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x1cffbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_1cffc0:
    // 0x1cffc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cffc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cffc4:
    // 0x1cffc4: 0xc096e40  jal         func_25B900
label_1cffc8:
    if (ctx->pc == 0x1CFFC8u) {
        ctx->pc = 0x1CFFCCu;
        goto label_1cffcc;
    }
    ctx->pc = 0x1CFFC4u;
    SET_GPR_U32(ctx, 31, 0x1CFFCCu);
    ctx->pc = 0x25B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B900u, 0x1CFFC4u, 0x1CFFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFCCu;
label_1cffcc:
    // 0x1cffcc: 0x3c03c0a0  lui         $v1, 0xC0A0
    ctx->pc = 0x1cffccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49312 << 16));
label_1cffd0:
    // 0x1cffd0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1cffd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cffd4:
    // 0x1cffd4: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1cffd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1cffd8:
    // 0x1cffd8: 0xc064d10  jal         func_193440
label_1cffdc:
    if (ctx->pc == 0x1CFFDCu) {
        ctx->pc = 0x1CFFE0u;
        goto label_1cffe0;
    }
    ctx->pc = 0x1CFFD8u;
    SET_GPR_U32(ctx, 31, 0x1CFFE0u);
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x1CFFD8u, 0x1CFFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFE0u;
label_1cffe0:
    // 0x1cffe0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cffe4:
    // 0x1cffe4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cffe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cffe8:
    // 0x1cffe8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1cffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1cffec:
    // 0x1cffec: 0x278596f0  addiu       $a1, $gp, -0x6910
    ctx->pc = 0x1cffecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940400));
label_1cfff0:
    // 0x1cfff0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cfff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfff4:
    // 0x1cfff4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1cfff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cfff8:
    // 0x1cfff8: 0xc08f558  jal         func_23D560
label_1cfffc:
    if (ctx->pc == 0x1CFFFCu) {
        ctx->pc = 0x1D0000u;
        goto label_1d0000;
    }
    ctx->pc = 0x1CFFF8u;
    SET_GPR_U32(ctx, 31, 0x1D0000u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1CFFF8u, 0x1D0000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0000u;
label_1d0000:
    // 0x1d0000: 0x3c144080  lui         $s4, 0x4080
    ctx->pc = 0x1d0000u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16512 << 16));
label_1d0004:
    // 0x1d0004: 0x4494a000  mtc1        $s4, $f20
    ctx->pc = 0x1d0004u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d0008:
    // 0x1d0008: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1d0008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1d000c:
    // 0x1d000c: 0x24440148  addiu       $a0, $v0, 0x148
    ctx->pc = 0x1d000cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
label_1d0010:
    // 0x1d0010: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d0010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0014:
    // 0x1d0014: 0xc05f1a8  jal         func_17C6A0
label_1d0018:
    if (ctx->pc == 0x1D0018u) {
        ctx->pc = 0x1D001Cu;
        goto label_1d001c;
    }
    ctx->pc = 0x1D0014u;
    SET_GPR_U32(ctx, 31, 0x1D001Cu);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1D0014u, 0x1D001Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D001Cu;
label_1d001c:
    // 0x1d001c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d001cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0020:
    // 0x1d0020: 0xe4940000  swc1        $f20, 0x0($a0)
    ctx->pc = 0x1d0020u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d0024:
    // 0x1d0024: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x1d0024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1d0028:
    // 0x1d0028: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d0028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1d002c:
    // 0x1d002c: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1d002cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d0030:
    // 0x1d0030: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1d0030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1d0034:
    // 0x1d0034: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d0034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d0038:
    // 0x1d0038: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d0038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d003c:
    // 0x1d003c: 0x8ca40154  lw          $a0, 0x154($a1)
    ctx->pc = 0x1d003cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 340)));
label_1d0040:
    // 0x1d0040: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1d0040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d0044:
    // 0x1d0044: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x1d0044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1d0048:
    // 0x1d0048: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1d0048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_1d004c:
    // 0x1d004c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x1d004cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1d0050:
    // 0x1d0050: 0xafa20294  sw          $v0, 0x294($sp)
    ctx->pc = 0x1d0050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 2));
label_1d0054:
    // 0x1d0054: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1d0054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d0058:
    // 0x1d0058: 0x8fa40294  lw          $a0, 0x294($sp)
    ctx->pc = 0x1d0058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
label_1d005c:
    // 0x1d005c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1d005cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1d0060:
    // 0x1d0060: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1d0060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d0064:
    // 0x1d0064: 0x8fa40294  lw          $a0, 0x294($sp)
    ctx->pc = 0x1d0064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
label_1d0068:
    // 0x1d0068: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1d0068u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_1d006c:
    // 0x1d006c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1d006cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d0070:
    // 0x1d0070: 0x8fa60294  lw          $a2, 0x294($sp)
    ctx->pc = 0x1d0070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
label_1d0074:
    // 0x1d0074: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x1d0074u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
label_1d0078:
    // 0x1d0078: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1d0078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d007c:
    // 0x1d007c: 0x8fa20294  lw          $v0, 0x294($sp)
    ctx->pc = 0x1d007cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
label_1d0080:
    // 0x1d0080: 0xa0450003  sb          $a1, 0x3($v0)
    ctx->pc = 0x1d0080u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 5));
label_1d0084:
    // 0x1d0084: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x1d0084u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1d0088:
    // 0x1d0088: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1d0088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1d008c:
    // 0x1d008c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1d008cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d0090:
    // 0x1d0090: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1d0090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1d0094:
    // 0x1d0094: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1d0094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0098:
    // 0x1d0098: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1d0098u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1d009c:
    // 0x1d009c: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1d009cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1d00a0:
    // 0x1d00a0: 0x8c420154  lw          $v0, 0x154($v0)
    ctx->pc = 0x1d00a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
label_1d00a4:
    // 0x1d00a4: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x1d00a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1d00a8:
    // 0x1d00a8: 0x2485000c  addiu       $a1, $a0, 0xC
    ctx->pc = 0x1d00a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1d00ac:
    // 0x1d00ac: 0xafa50290  sw          $a1, 0x290($sp)
    ctx->pc = 0x1d00acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 5));
label_1d00b0:
    // 0x1d00b0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1d00b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d00b4:
    // 0x1d00b4: 0x8fa30290  lw          $v1, 0x290($sp)
    ctx->pc = 0x1d00b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_1d00b8:
    // 0x1d00b8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1d00b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1d00bc:
    // 0x1d00bc: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d00bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d00c0:
    // 0x1d00c0: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1d00c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_1d00c4:
    // 0x1d00c4: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x1d00c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
label_1d00c8:
    // 0x1d00c8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d00c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d00cc:
    // 0x1d00cc: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1d00ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_1d00d0:
    // 0x1d00d0: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x1d00d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
label_1d00d4:
    // 0x1d00d4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1d00d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d00d8:
    // 0x1d00d8: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x1d00d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_1d00dc:
    // 0x1d00dc: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1d00dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_1d00e0:
    // 0x1d00e0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d00e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1d00e4:
    // 0x1d00e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d00e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d00e8:
    // 0x1d00e8: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x1d00e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_1d00ec:
    // 0x1d00ec: 0x5a0c0  sll         $s4, $a1, 3
    ctx->pc = 0x1d00ecu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1d00f0:
    // 0x1d00f0: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1d00f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1d00f4:
    // 0x1d00f4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1d00f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1d00f8:
    // 0x1d00f8: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1d00f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1d00fc:
    // 0x1d00fc: 0x8c840154  lw          $a0, 0x154($a0)
    ctx->pc = 0x1d00fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_1d0100:
    // 0x1d0100: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d0100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d0104:
    // 0x1d0104: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x1d0104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1d0108:
    // 0x1d0108: 0xafa5028c  sw          $a1, 0x28C($sp)
    ctx->pc = 0x1d0108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 5));
label_1d010c:
    // 0x1d010c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1d010cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d0110:
    // 0x1d0110: 0x8fa3028c  lw          $v1, 0x28C($sp)
    ctx->pc = 0x1d0110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
label_1d0114:
    // 0x1d0114: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1d0114u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1d0118:
    // 0x1d0118: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1d0118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d011c:
    // 0x1d011c: 0x8fa3028c  lw          $v1, 0x28C($sp)
    ctx->pc = 0x1d011cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
label_1d0120:
    // 0x1d0120: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1d0120u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_1d0124:
    // 0x1d0124: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d0124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d0128:
    // 0x1d0128: 0x8fa2028c  lw          $v0, 0x28C($sp)
    ctx->pc = 0x1d0128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
label_1d012c:
    // 0x1d012c: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x1d012cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
label_1d0130:
    // 0x1d0130: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1d0130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d0134:
    // 0x1d0134: 0x8fa5028c  lw          $a1, 0x28C($sp)
    ctx->pc = 0x1d0134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
label_1d0138:
    // 0x1d0138: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x1d0138u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
label_1d013c:
    // 0x1d013c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1d013cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d0140:
    // 0x1d0140: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d0140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d0144:
    // 0x1d0144: 0xc063dd0  jal         func_18F740
label_1d0148:
    if (ctx->pc == 0x1D0148u) {
        ctx->pc = 0x1D014Cu;
        goto label_1d014c;
    }
    ctx->pc = 0x1D0144u;
    SET_GPR_U32(ctx, 31, 0x1D014Cu);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1D0144u, 0x1D014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D014Cu;
label_1d014c:
    // 0x1d014c: 0x10400249  beqz        $v0, . + 4 + (0x249 << 2)
label_1d0150:
    if (ctx->pc == 0x1D0150u) {
        ctx->pc = 0x1D0154u;
        goto label_1d0154;
    }
    ctx->pc = 0x1D014Cu;
    {
        const bool branch_taken_0x1d014c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d014c) {
            ctx->pc = 0x1D0A74u;
            goto label_1d0a74;
        }
    }
    ctx->pc = 0x1D0154u;
label_1d0154:
    // 0x1d0154: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d0154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d0158:
    // 0x1d0158: 0xc063dd0  jal         func_18F740
label_1d015c:
    if (ctx->pc == 0x1D015Cu) {
        ctx->pc = 0x1D0160u;
        goto label_1d0160;
    }
    ctx->pc = 0x1D0158u;
    SET_GPR_U32(ctx, 31, 0x1D0160u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1D0158u, 0x1D0160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0160u;
label_1d0160:
    // 0x1d0160: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0164:
    // 0x1d0164: 0xc0ae4b4  jal         func_2B92D0
label_1d0168:
    if (ctx->pc == 0x1D0168u) {
        ctx->pc = 0x1D016Cu;
        goto label_1d016c;
    }
    ctx->pc = 0x1D0164u;
    SET_GPR_U32(ctx, 31, 0x1D016Cu);
    ctx->pc = 0x2B92D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92D0u, 0x1D0164u, 0x1D016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D016Cu;
label_1d016c:
    // 0x1d016c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1d016cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_1d0170:
    // 0x1d0170: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1d0170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1d0174:
    // 0x1d0174: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x1d0174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
label_1d0178:
    // 0x1d0178: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d0178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d017c:
    // 0x1d017c: 0xc068170  jal         func_1A05C0
label_1d0180:
    if (ctx->pc == 0x1D0180u) {
        ctx->pc = 0x1D0184u;
        goto label_1d0184;
    }
    ctx->pc = 0x1D017Cu;
    SET_GPR_U32(ctx, 31, 0x1D0184u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1D017Cu, 0x1D0184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0184u;
label_1d0184:
    // 0x1d0184: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d0184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0188:
    // 0x1d0188: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d0188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d018c:
    // 0x1d018c: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x1d018cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1d0190:
    // 0x1d0190: 0x14620238  bne         $v1, $v0, . + 4 + (0x238 << 2)
label_1d0194:
    if (ctx->pc == 0x1D0194u) {
        ctx->pc = 0x1D0198u;
        goto label_1d0198;
    }
    ctx->pc = 0x1D0190u;
    {
        const bool branch_taken_0x1d0190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0190) {
            ctx->pc = 0x1D0A74u;
            goto label_1d0a74;
        }
    }
    ctx->pc = 0x1D0198u;
label_1d0198:
    // 0x1d0198: 0x27a40148  addiu       $a0, $sp, 0x148
    ctx->pc = 0x1d0198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_1d019c:
    // 0x1d019c: 0x8fa502bc  lw          $a1, 0x2BC($sp)
    ctx->pc = 0x1d019cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
label_1d01a0:
    // 0x1d01a0: 0xc090f80  jal         func_243E00
label_1d01a4:
    if (ctx->pc == 0x1D01A4u) {
        ctx->pc = 0x1D01A8u;
        goto label_1d01a8;
    }
    ctx->pc = 0x1D01A0u;
    SET_GPR_U32(ctx, 31, 0x1D01A8u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x1D01A0u, 0x1D01A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D01A8u;
label_1d01a8:
    // 0x1d01a8: 0x27a30148  addiu       $v1, $sp, 0x148
    ctx->pc = 0x1d01a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_1d01ac:
    // 0x1d01ac: 0x27a201a8  addiu       $v0, $sp, 0x1A8
    ctx->pc = 0x1d01acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_1d01b0:
    // 0x1d01b0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1d01b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d01b4:
    // 0x1d01b4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1d01b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d01b8:
    // 0x1d01b8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1d01b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d01bc:
    // 0x1d01bc: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1d01bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1d01c0:
    // 0x1d01c0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1d01c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1d01c4:
    // 0x1d01c4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1d01c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1d01c8:
    // 0x1d01c8: 0x27a401a8  addiu       $a0, $sp, 0x1A8
    ctx->pc = 0x1d01c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_1d01cc:
    // 0x1d01cc: 0x27a50248  addiu       $a1, $sp, 0x248
    ctx->pc = 0x1d01ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
label_1d01d0:
    // 0x1d01d0: 0xc0b5f04  jal         func_2D7C10
label_1d01d4:
    if (ctx->pc == 0x1D01D4u) {
        ctx->pc = 0x1D01D8u;
        goto label_1d01d8;
    }
    ctx->pc = 0x1D01D0u;
    SET_GPR_U32(ctx, 31, 0x1D01D8u);
    ctx->pc = 0x2D7C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C10u, 0x1D01D0u, 0x1D01D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D01D8u;
label_1d01d8:
    // 0x1d01d8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1d01d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1d01dc:
    // 0x1d01dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d01dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d01e0:
    // 0x1d01e0: 0x8fa402bc  lw          $a0, 0x2BC($sp)
    ctx->pc = 0x1d01e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
label_1d01e4:
    // 0x1d01e4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1d01e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1d01e8:
    // 0x1d01e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d01e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d01ec:
    // 0x1d01ec: 0xc090fe0  jal         func_243F80
label_1d01f0:
    if (ctx->pc == 0x1D01F0u) {
        ctx->pc = 0x1D01F4u;
        goto label_1d01f4;
    }
    ctx->pc = 0x1D01ECu;
    SET_GPR_U32(ctx, 31, 0x1D01F4u);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x1D01ECu, 0x1D01F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D01F4u;
label_1d01f4:
    // 0x1d01f4: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1d01f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1d01f8:
    // 0x1d01f8: 0xc454000c  lwc1        $f20, 0xC($v0)
    ctx->pc = 0x1d01f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d01fc:
    // 0x1d01fc: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1d01fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1d0200:
    // 0x1d0200: 0x24440148  addiu       $a0, $v0, 0x148
    ctx->pc = 0x1d0200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
label_1d0204:
    // 0x1d0204: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d0204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0208:
    // 0x1d0208: 0xc05f1a8  jal         func_17C6A0
label_1d020c:
    if (ctx->pc == 0x1D020Cu) {
        ctx->pc = 0x1D0210u;
        goto label_1d0210;
    }
    ctx->pc = 0x1D0208u;
    SET_GPR_U32(ctx, 31, 0x1D0210u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1D0208u, 0x1D0210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0210u;
label_1d0210:
    // 0x1d0210: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d0210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0214:
    // 0x1d0214: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1d0214u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1d0218:
    // 0x1d0218: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1d0218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1d021c:
    // 0x1d021c: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x1d021cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1d0220:
    // 0x1d0220: 0x24640148  addiu       $a0, $v1, 0x148
    ctx->pc = 0x1d0220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 328));
label_1d0224:
    // 0x1d0224: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d0224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0228:
    // 0x1d0228: 0xc05f1a8  jal         func_17C6A0
label_1d022c:
    if (ctx->pc == 0x1D022Cu) {
        ctx->pc = 0x1D0230u;
        goto label_1d0230;
    }
    ctx->pc = 0x1D0228u;
    SET_GPR_U32(ctx, 31, 0x1D0230u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1D0228u, 0x1D0230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0230u;
label_1d0230:
    // 0x1d0230: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1d0230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0234:
    // 0x1d0234: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0238:
    // 0x1d0238: 0x0  nop
    ctx->pc = 0x1d0238u;
    // NOP
label_1d023c:
    // 0x1d023c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d023cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0240:
    // 0x1d0240: 0x45010041  bc1t        . + 4 + (0x41 << 2)
label_1d0244:
    if (ctx->pc == 0x1D0244u) {
        ctx->pc = 0x1D0248u;
        goto label_1d0248;
    }
    ctx->pc = 0x1D0240u;
    {
        const bool branch_taken_0x1d0240 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0240) {
            ctx->pc = 0x1D0348u;
            goto label_1d0348;
        }
    }
    ctx->pc = 0x1D0248u;
label_1d0248:
    // 0x1d0248: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1d0248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1d024c:
    // 0x1d024c: 0x24820148  addiu       $v0, $a0, 0x148
    ctx->pc = 0x1d024cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 328));
label_1d0250:
    // 0x1d0250: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0254:
    // 0x1d0254: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d0254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0258:
    // 0x1d0258: 0xc05f1a8  jal         func_17C6A0
label_1d025c:
    if (ctx->pc == 0x1D025Cu) {
        ctx->pc = 0x1D0260u;
        goto label_1d0260;
    }
    ctx->pc = 0x1D0258u;
    SET_GPR_U32(ctx, 31, 0x1D0260u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1D0258u, 0x1D0260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0260u;
label_1d0260:
    // 0x1d0260: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0264:
    // 0x1d0264: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1d0264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1d0268:
    // 0x1d0268: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d0268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d026c:
    // 0x1d026c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1d026cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0270:
    // 0x1d0270: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d0270u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d0274:
    // 0x1d0274: 0x3c043e80  lui         $a0, 0x3E80
    ctx->pc = 0x1d0274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16000 << 16));
label_1d0278:
    // 0x1d0278: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d0278u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d027c:
    // 0x1d027c: 0x0  nop
    ctx->pc = 0x1d027cu;
    // NOP
label_1d0280:
    // 0x1d0280: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1d0280u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d0284:
    // 0x1d0284: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1d0284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1d0288:
    // 0x1d0288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d028c:
    // 0x1d028c: 0x0  nop
    ctx->pc = 0x1d028cu;
    // NOP
label_1d0290:
    // 0x1d0290: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d0290u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0294:
    // 0x1d0294: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1d0298:
    if (ctx->pc == 0x1D0298u) {
        ctx->pc = 0x1D029Cu;
        goto label_1d029c;
    }
    ctx->pc = 0x1D0294u;
    {
        const bool branch_taken_0x1d0294 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0294) {
            ctx->pc = 0x1D02ACu;
            goto label_1d02ac;
        }
    }
    ctx->pc = 0x1D029Cu;
label_1d029c:
    // 0x1d029c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d029cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1d02a0:
    // 0x1d02a0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1d02a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1d02a4:
    // 0x1d02a4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d02a8:
    if (ctx->pc == 0x1D02A8u) {
        ctx->pc = 0x1D02ACu;
        goto label_1d02ac;
    }
    ctx->pc = 0x1D02A4u;
    {
        const bool branch_taken_0x1d02a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d02a4) {
            ctx->pc = 0x1D02C0u;
            goto label_1d02c0;
        }
    }
    ctx->pc = 0x1D02ACu;
label_1d02ac:
    // 0x1d02ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d02acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d02b0:
    // 0x1d02b0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d02b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1d02b4:
    // 0x1d02b4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1d02b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1d02b8:
    // 0x1d02b8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1d02b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1d02bc:
    // 0x1d02bc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d02bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1d02c0:
    // 0x1d02c0: 0xa3a302ed  sb          $v1, 0x2ED($sp)
    ctx->pc = 0x1d02c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 749), (uint8_t)GPR_U32(ctx, 3));
label_1d02c4:
    // 0x1d02c4: 0xafa00288  sw          $zero, 0x288($sp)
    ctx->pc = 0x1d02c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 0));
label_1d02c8:
    // 0x1d02c8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1d02cc:
    if (ctx->pc == 0x1D02CCu) {
        ctx->pc = 0x1D02D0u;
        goto label_1d02d0;
    }
    ctx->pc = 0x1D02C8u;
    {
        const bool branch_taken_0x1d02c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d02c8) {
            ctx->pc = 0x1D0334u;
            goto label_1d0334;
        }
    }
    ctx->pc = 0x1D02D0u;
label_1d02d0:
    // 0x1d02d0: 0x8f8296d0  lw          $v0, -0x6930($gp)
    ctx->pc = 0x1d02d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1d02d4:
    // 0x1d02d4: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x1d02d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1d02d8:
    // 0x1d02d8: 0x8fa20288  lw          $v0, 0x288($sp)
    ctx->pc = 0x1d02d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_1d02dc:
    // 0x1d02dc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1d02dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d02e0:
    // 0x1d02e0: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1d02e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1d02e4:
    // 0x1d02e4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1d02e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1d02e8:
    // 0x1d02e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d02e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d02ec:
    // 0x1d02ec: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x1d02ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1d02f0:
    // 0x1d02f0: 0x8ca300a4  lw          $v1, 0xA4($a1)
    ctx->pc = 0x1d02f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
label_1d02f4:
    // 0x1d02f4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1d02f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d02f8:
    // 0x1d02f8: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x1d02f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1d02fc:
    // 0x1d02fc: 0xafa20284  sw          $v0, 0x284($sp)
    ctx->pc = 0x1d02fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 2));
label_1d0300:
    // 0x1d0300: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1d0300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d0304:
    // 0x1d0304: 0x8fa30284  lw          $v1, 0x284($sp)
    ctx->pc = 0x1d0304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
label_1d0308:
    // 0x1d0308: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1d0308u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1d030c:
    // 0x1d030c: 0x8fa60284  lw          $a2, 0x284($sp)
    ctx->pc = 0x1d030cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
label_1d0310:
    // 0x1d0310: 0xa0c00001  sb          $zero, 0x1($a2)
    ctx->pc = 0x1d0310u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
label_1d0314:
    // 0x1d0314: 0x8fa40284  lw          $a0, 0x284($sp)
    ctx->pc = 0x1d0314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
label_1d0318:
    // 0x1d0318: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1d0318u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_1d031c:
    // 0x1d031c: 0x93a502ed  lbu         $a1, 0x2ED($sp)
    ctx->pc = 0x1d031cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 749)));
label_1d0320:
    // 0x1d0320: 0x8fa20284  lw          $v0, 0x284($sp)
    ctx->pc = 0x1d0320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
label_1d0324:
    // 0x1d0324: 0xa0450003  sb          $a1, 0x3($v0)
    ctx->pc = 0x1d0324u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 5));
label_1d0328:
    // 0x1d0328: 0x8fa40288  lw          $a0, 0x288($sp)
    ctx->pc = 0x1d0328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_1d032c:
    // 0x1d032c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1d032cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1d0330:
    // 0x1d0330: 0xafa20288  sw          $v0, 0x288($sp)
    ctx->pc = 0x1d0330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 2));
label_1d0334:
    // 0x1d0334: 0x8fa20288  lw          $v0, 0x288($sp)
    ctx->pc = 0x1d0334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_1d0338:
    // 0x1d0338: 0x8f8496d0  lw          $a0, -0x6930($gp)
    ctx->pc = 0x1d0338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1d033c:
    // 0x1d033c: 0x44182b  sltu        $v1, $v0, $a0
    ctx->pc = 0x1d033cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1d0340:
    // 0x1d0340: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_1d0344:
    if (ctx->pc == 0x1D0344u) {
        ctx->pc = 0x1D0348u;
        goto label_1d0348;
    }
    ctx->pc = 0x1D0340u;
    {
        const bool branch_taken_0x1d0340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0340) {
            ctx->pc = 0x1D02D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d02d0;
        }
    }
    ctx->pc = 0x1D0348u;
label_1d0348:
    // 0x1d0348: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1d0348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1d034c:
    // 0x1d034c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d034cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0350:
    // 0x1d0350: 0x0  nop
    ctx->pc = 0x1d0350u;
    // NOP
label_1d0354:
    // 0x1d0354: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x1d0354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_1d0358:
    // 0x1d0358: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d0358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d035c:
    // 0x1d035c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d035cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0360:
    // 0x1d0360: 0x0  nop
    ctx->pc = 0x1d0360u;
    // NOP
label_1d0364:
    // 0x1d0364: 0xe7a0027c  swc1        $f0, 0x27C($sp)
    ctx->pc = 0x1d0364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
label_1d0368:
    // 0x1d0368: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1d0368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1d036c:
    // 0x1d036c: 0x24820148  addiu       $v0, $a0, 0x148
    ctx->pc = 0x1d036cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 328));
label_1d0370:
    // 0x1d0370: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0374:
    // 0x1d0374: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d0374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0378:
    // 0x1d0378: 0xc05f1a8  jal         func_17C6A0
label_1d037c:
    if (ctx->pc == 0x1D037Cu) {
        ctx->pc = 0x1D0380u;
        goto label_1d0380;
    }
    ctx->pc = 0x1D0378u;
    SET_GPR_U32(ctx, 31, 0x1D0380u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1D0378u, 0x1D0380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0380u;
label_1d0380:
    // 0x1d0380: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1d0380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0384:
    // 0x1d0384: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x1d0384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
label_1d0388:
    // 0x1d0388: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d0388u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d038c:
    // 0x1d038c: 0x0  nop
    ctx->pc = 0x1d038cu;
    // NOP
label_1d0390:
    // 0x1d0390: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d0390u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d0394:
    // 0x1d0394: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1d0394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_1d0398:
    // 0x1d0398: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d0398u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d039c:
    // 0x1d039c: 0x0  nop
    ctx->pc = 0x1d039cu;
    // NOP
label_1d03a0:
    // 0x1d03a0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1d03a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d03a4:
    // 0x1d03a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d03a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d03a8:
    // 0x1d03a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d03a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d03ac:
    // 0x1d03ac: 0x0  nop
    ctx->pc = 0x1d03acu;
    // NOP
label_1d03b0:
    // 0x1d03b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d03b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d03b4:
    // 0x1d03b4: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x1d03b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_1d03b8:
    // 0x1d03b8: 0xc7a10278  lwc1        $f1, 0x278($sp)
    ctx->pc = 0x1d03b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d03bc:
    // 0x1d03bc: 0xc7808280  lwc1        $f0, -0x7D80($gp)
    ctx->pc = 0x1d03bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d03c0:
    // 0x1d03c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d03c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d03c4:
    // 0x1d03c4: 0x45010019  bc1t        . + 4 + (0x19 << 2)
label_1d03c8:
    if (ctx->pc == 0x1D03C8u) {
        ctx->pc = 0x1D03CCu;
        goto label_1d03cc;
    }
    ctx->pc = 0x1D03C4u;
    {
        const bool branch_taken_0x1d03c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d03c4) {
            ctx->pc = 0x1D042Cu;
            goto label_1d042c;
        }
    }
    ctx->pc = 0x1D03CCu;
label_1d03cc:
    // 0x1d03cc: 0xc7a10278  lwc1        $f1, 0x278($sp)
    ctx->pc = 0x1d03ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d03d0:
    // 0x1d03d0: 0xc7808280  lwc1        $f0, -0x7D80($gp)
    ctx->pc = 0x1d03d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d03d4:
    // 0x1d03d4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d03d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d03d8:
    // 0x1d03d8: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x1d03d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d03dc:
    // 0x1d03dc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d03dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d03e0:
    // 0x1d03e0: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x1d03e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_1d03e4:
    // 0x1d03e4: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x1d03e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_1d03e8:
    // 0x1d03e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d03e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d03ec:
    // 0x1d03ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d03ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d03f0:
    // 0x1d03f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d03f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d03f4:
    // 0x1d03f4: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x1d03f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d03f8:
    // 0x1d03f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d03f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d03fc:
    // 0x1d03fc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1d03fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1d0400:
    // 0x1d0400: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x1d0400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_1d0404:
    // 0x1d0404: 0x3c043fc0  lui         $a0, 0x3FC0
    ctx->pc = 0x1d0404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16320 << 16));
label_1d0408:
    // 0x1d0408: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1d0408u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d040c:
    // 0x1d040c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1d040cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1d0410:
    // 0x1d0410: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1d0410u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d0414:
    // 0x1d0414: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x1d0414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0418:
    // 0x1d0418: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d0418u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d041c:
    // 0x1d041c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1d041cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1d0420:
    // 0x1d0420: 0xe7a0027c  swc1        $f0, 0x27C($sp)
    ctx->pc = 0x1d0420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
label_1d0424:
    // 0x1d0424: 0x1000011b  b           . + 4 + (0x11B << 2)
label_1d0428:
    if (ctx->pc == 0x1D0428u) {
        ctx->pc = 0x1D042Cu;
        goto label_1d042c;
    }
    ctx->pc = 0x1D0424u;
    {
        const bool branch_taken_0x1d0424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0424) {
            ctx->pc = 0x1D0894u;
            goto label_1d0894;
        }
    }
    ctx->pc = 0x1D042Cu;
label_1d042c:
    // 0x1d042c: 0xc7a10278  lwc1        $f1, 0x278($sp)
    ctx->pc = 0x1d042cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0430:
    // 0x1d0430: 0xc78081a0  lwc1        $f0, -0x7E60($gp)
    ctx->pc = 0x1d0430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0434:
    // 0x1d0434: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d0434u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0438:
    // 0x1d0438: 0x45010027  bc1t        . + 4 + (0x27 << 2)
label_1d043c:
    if (ctx->pc == 0x1D043Cu) {
        ctx->pc = 0x1D0440u;
        goto label_1d0440;
    }
    ctx->pc = 0x1D0438u;
    {
        const bool branch_taken_0x1d0438 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0438) {
            ctx->pc = 0x1D04D8u;
            goto label_1d04d8;
        }
    }
    ctx->pc = 0x1D0440u;
label_1d0440:
    // 0x1d0440: 0xc7a10278  lwc1        $f1, 0x278($sp)
    ctx->pc = 0x1d0440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0444:
    // 0x1d0444: 0xc78081a0  lwc1        $f0, -0x7E60($gp)
    ctx->pc = 0x1d0444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0448:
    // 0x1d0448: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d0448u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d044c:
    // 0x1d044c: 0xc78081a0  lwc1        $f0, -0x7E60($gp)
    ctx->pc = 0x1d044cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0450:
    // 0x1d0450: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d0450u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d0454:
    // 0x1d0454: 0xe7a00270  swc1        $f0, 0x270($sp)
    ctx->pc = 0x1d0454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
label_1d0458:
    // 0x1d0458: 0x3c063f40  lui         $a2, 0x3F40
    ctx->pc = 0x1d0458u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16192 << 16));
label_1d045c:
    // 0x1d045c: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x1d045cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1d0460:
    // 0x1d0460: 0xc7a30270  lwc1        $f3, 0x270($sp)
    ctx->pc = 0x1d0460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d0464:
    // 0x1d0464: 0x3c023fa0  lui         $v0, 0x3FA0
    ctx->pc = 0x1d0464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16288 << 16));
label_1d0468:
    // 0x1d0468: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d0468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d046c:
    // 0x1d046c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d046cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d0470:
    // 0x1d0470: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d0470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d0474:
    // 0x1d0474: 0xc7a00270  lwc1        $f0, 0x270($sp)
    ctx->pc = 0x1d0474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0478:
    // 0x1d0478: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d0478u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d047c:
    // 0x1d047c: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1d047cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1d0480:
    // 0x1d0480: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0484:
    // 0x1d0484: 0x0  nop
    ctx->pc = 0x1d0484u;
    // NOP
label_1d0488:
    // 0x1d0488: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d0488u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1d048c:
    // 0x1d048c: 0x4603201c  madd.s      $f0, $f4, $f3
    ctx->pc = 0x1d048cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_1d0490:
    // 0x1d0490: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x1d0490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_1d0494:
    // 0x1d0494: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1d0494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1d0498:
    // 0x1d0498: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1d0498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1d049c:
    // 0x1d049c: 0xc7a30270  lwc1        $f3, 0x270($sp)
    ctx->pc = 0x1d049cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d04a0:
    // 0x1d04a0: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x1d04a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_1d04a4:
    // 0x1d04a4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d04a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d04a8:
    // 0x1d04a8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1d04a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1d04ac:
    // 0x1d04ac: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1d04acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d04b0:
    // 0x1d04b0: 0xc7a00270  lwc1        $f0, 0x270($sp)
    ctx->pc = 0x1d04b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d04b4:
    // 0x1d04b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d04b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d04b8:
    // 0x1d04b8: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1d04b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1d04bc:
    // 0x1d04bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d04bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d04c0:
    // 0x1d04c0: 0x0  nop
    ctx->pc = 0x1d04c0u;
    // NOP
label_1d04c4:
    // 0x1d04c4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d04c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1d04c8:
    // 0x1d04c8: 0x4603201c  madd.s      $f0, $f4, $f3
    ctx->pc = 0x1d04c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_1d04cc:
    // 0x1d04cc: 0xe7a0027c  swc1        $f0, 0x27C($sp)
    ctx->pc = 0x1d04ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
label_1d04d0:
    // 0x1d04d0: 0x100000f0  b           . + 4 + (0xF0 << 2)
label_1d04d4:
    if (ctx->pc == 0x1D04D4u) {
        ctx->pc = 0x1D04D8u;
        goto label_1d04d8;
    }
    ctx->pc = 0x1D04D0u;
    {
        const bool branch_taken_0x1d04d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d04d0) {
            ctx->pc = 0x1D0894u;
            goto label_1d0894;
        }
    }
    ctx->pc = 0x1D04D8u;
label_1d04d8:
    // 0x1d04d8: 0xc7a10278  lwc1        $f1, 0x278($sp)
    ctx->pc = 0x1d04d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d04dc:
    // 0x1d04dc: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x1d04dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d04e0:
    // 0x1d04e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d04e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d04e4:
    // 0x1d04e4: 0x45010024  bc1t        . + 4 + (0x24 << 2)
label_1d04e8:
    if (ctx->pc == 0x1D04E8u) {
        ctx->pc = 0x1D04ECu;
        goto label_1d04ec;
    }
    ctx->pc = 0x1D04E4u;
    {
        const bool branch_taken_0x1d04e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d04e4) {
            ctx->pc = 0x1D0578u;
            goto label_1d0578;
        }
    }
    ctx->pc = 0x1D04ECu;
label_1d04ec:
    // 0x1d04ec: 0xc7a10278  lwc1        $f1, 0x278($sp)
    ctx->pc = 0x1d04ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d04f0:
    // 0x1d04f0: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x1d04f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d04f4:
    // 0x1d04f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d04f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d04f8:
    // 0x1d04f8: 0xc78081b0  lwc1        $f0, -0x7E50($gp)
    ctx->pc = 0x1d04f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d04fc:
    // 0x1d04fc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d04fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d0500:
    // 0x1d0500: 0xe7a0026c  swc1        $f0, 0x26C($sp)
    ctx->pc = 0x1d0500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 620), bits); }
label_1d0504:
    // 0x1d0504: 0x3c063fa0  lui         $a2, 0x3FA0
    ctx->pc = 0x1d0504u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16288 << 16));
label_1d0508:
    // 0x1d0508: 0x44862800  mtc1        $a2, $f5
    ctx->pc = 0x1d0508u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1d050c:
    // 0x1d050c: 0xc7a4026c  lwc1        $f4, 0x26C($sp)
    ctx->pc = 0x1d050cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d0510:
    // 0x1d0510: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x1d0510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_1d0514:
    // 0x1d0514: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0518:
    // 0x1d0518: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d0518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d051c:
    // 0x1d051c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1d051cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d0520:
    // 0x1d0520: 0xc7a2026c  lwc1        $f2, 0x26C($sp)
    ctx->pc = 0x1d0520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d0524:
    // 0x1d0524: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x1d0524u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1d0528:
    // 0x1d0528: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1d0528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d052c:
    // 0x1d052c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d052cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0530:
    // 0x1d0530: 0x0  nop
    ctx->pc = 0x1d0530u;
    // NOP
label_1d0534:
    // 0x1d0534: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d0534u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1d0538:
    // 0x1d0538: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x1d0538u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_1d053c:
    // 0x1d053c: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x1d053cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_1d0540:
    // 0x1d0540: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x1d0540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_1d0544:
    // 0x1d0544: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1d0544u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1d0548:
    // 0x1d0548: 0xc7a2026c  lwc1        $f2, 0x26C($sp)
    ctx->pc = 0x1d0548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d054c:
    // 0x1d054c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d054cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d0550:
    // 0x1d0550: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d0550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d0554:
    // 0x1d0554: 0xc7a0026c  lwc1        $f0, 0x26C($sp)
    ctx->pc = 0x1d0554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0558:
    // 0x1d0558: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1d0558u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d055c:
    // 0x1d055c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d055cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d0560:
    // 0x1d0560: 0x0  nop
    ctx->pc = 0x1d0560u;
    // NOP
label_1d0564:
    // 0x1d0564: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x1d0564u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
label_1d0568:
    // 0x1d0568: 0x4602209c  madd.s      $f2, $f4, $f2
    ctx->pc = 0x1d0568u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_1d056c:
    // 0x1d056c: 0xe7a2027c  swc1        $f2, 0x27C($sp)
    ctx->pc = 0x1d056cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
label_1d0570:
    // 0x1d0570: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_1d0574:
    if (ctx->pc == 0x1D0574u) {
        ctx->pc = 0x1D0578u;
        goto label_1d0578;
    }
    ctx->pc = 0x1D0570u;
    {
        const bool branch_taken_0x1d0570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0570) {
            ctx->pc = 0x1D0894u;
            goto label_1d0894;
        }
    }
    ctx->pc = 0x1D0578u;
label_1d0578:
    // 0x1d0578: 0xc7a10278  lwc1        $f1, 0x278($sp)
    ctx->pc = 0x1d0578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d057c:
    // 0x1d057c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d057cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0580:
    // 0x1d0580: 0x0  nop
    ctx->pc = 0x1d0580u;
    // NOP
label_1d0584:
    // 0x1d0584: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d0584u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0588:
    // 0x1d0588: 0x45010017  bc1t        . + 4 + (0x17 << 2)
label_1d058c:
    if (ctx->pc == 0x1D058Cu) {
        ctx->pc = 0x1D0590u;
        goto label_1d0590;
    }
    ctx->pc = 0x1D0588u;
    {
        const bool branch_taken_0x1d0588 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0588) {
            ctx->pc = 0x1D05E8u;
            goto label_1d05e8;
        }
    }
    ctx->pc = 0x1D0590u;
label_1d0590:
    // 0x1d0590: 0xc7a10278  lwc1        $f1, 0x278($sp)
    ctx->pc = 0x1d0590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0594:
    // 0x1d0594: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x1d0594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0598:
    // 0x1d0598: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d0598u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d059c:
    // 0x1d059c: 0xe7a00268  swc1        $f0, 0x268($sp)
    ctx->pc = 0x1d059cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
label_1d05a0:
    // 0x1d05a0: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x1d05a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_1d05a4:
    // 0x1d05a4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1d05a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d05a8:
    // 0x1d05a8: 0xc7a20268  lwc1        $f2, 0x268($sp)
    ctx->pc = 0x1d05a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d05ac:
    // 0x1d05ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d05acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d05b0:
    // 0x1d05b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d05b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d05b4:
    // 0x1d05b4: 0xc7a00268  lwc1        $f0, 0x268($sp)
    ctx->pc = 0x1d05b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d05b8:
    // 0x1d05b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d05b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d05bc:
    // 0x1d05bc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d05bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d05c0:
    // 0x1d05c0: 0x0  nop
    ctx->pc = 0x1d05c0u;
    // NOP
label_1d05c4:
    // 0x1d05c4: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x1d05c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
label_1d05c8:
    // 0x1d05c8: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1d05c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1d05cc:
    // 0x1d05cc: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x1d05ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_1d05d0:
    // 0x1d05d0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d05d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1d05d4:
    // 0x1d05d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d05d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d05d8:
    // 0x1d05d8: 0x0  nop
    ctx->pc = 0x1d05d8u;
    // NOP
label_1d05dc:
    // 0x1d05dc: 0xe7a0027c  swc1        $f0, 0x27C($sp)
    ctx->pc = 0x1d05dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
label_1d05e0:
    // 0x1d05e0: 0x100000ac  b           . + 4 + (0xAC << 2)
label_1d05e4:
    if (ctx->pc == 0x1D05E4u) {
        ctx->pc = 0x1D05E8u;
        goto label_1d05e8;
    }
    ctx->pc = 0x1D05E0u;
    {
        const bool branch_taken_0x1d05e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d05e0) {
            ctx->pc = 0x1D0894u;
            goto label_1d0894;
        }
    }
    ctx->pc = 0x1D05E8u;
label_1d05e8:
    // 0x1d05e8: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x1d05e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1d05ec:
    // 0x1d05ec: 0x24a20148  addiu       $v0, $a1, 0x148
    ctx->pc = 0x1d05ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 328));
label_1d05f0:
    // 0x1d05f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d05f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d05f4:
    // 0x1d05f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d05f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d05f8:
    // 0x1d05f8: 0xc05f1a8  jal         func_17C6A0
label_1d05fc:
    if (ctx->pc == 0x1D05FCu) {
        ctx->pc = 0x1D0600u;
        goto label_1d0600;
    }
    ctx->pc = 0x1D05F8u;
    SET_GPR_U32(ctx, 31, 0x1D0600u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1D05F8u, 0x1D0600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0600u;
label_1d0600:
    // 0x1d0600: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0604:
    // 0x1d0604: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1d0604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0608:
    // 0x1d0608: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d0608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1d060c:
    // 0x1d060c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d060cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0610:
    // 0x1d0610: 0x0  nop
    ctx->pc = 0x1d0610u;
    // NOP
label_1d0614:
    // 0x1d0614: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d0614u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0618:
    // 0x1d0618: 0x45010068  bc1t        . + 4 + (0x68 << 2)
label_1d061c:
    if (ctx->pc == 0x1D061Cu) {
        ctx->pc = 0x1D0620u;
        goto label_1d0620;
    }
    ctx->pc = 0x1D0618u;
    {
        const bool branch_taken_0x1d0618 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0618) {
            ctx->pc = 0x1D07BCu;
            goto label_1d07bc;
        }
    }
    ctx->pc = 0x1D0620u;
label_1d0620:
    // 0x1d0620: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1d0620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1d0624:
    // 0x1d0624: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1d0624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_1d0628:
    // 0x1d0628: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1d0628u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1d062c:
    // 0x1d062c: 0x24440148  addiu       $a0, $v0, 0x148
    ctx->pc = 0x1d062cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
label_1d0630:
    // 0x1d0630: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d0630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0634:
    // 0x1d0634: 0xc05f1a8  jal         func_17C6A0
label_1d0638:
    if (ctx->pc == 0x1D0638u) {
        ctx->pc = 0x1D063Cu;
        goto label_1d063c;
    }
    ctx->pc = 0x1D0634u;
    SET_GPR_U32(ctx, 31, 0x1D063Cu);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1D0634u, 0x1D063Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D063Cu;
label_1d063c:
    // 0x1d063c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d063cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0640:
    // 0x1d0640: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1d0640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0644:
    // 0x1d0644: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1d0644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_1d0648:
    // 0x1d0648: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d0648u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d064c:
    // 0x1d064c: 0x0  nop
    ctx->pc = 0x1d064cu;
    // NOP
label_1d0650:
    // 0x1d0650: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d0650u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d0654:
    // 0x1d0654: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1d0654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1d0658:
    // 0x1d0658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d065c:
    // 0x1d065c: 0x0  nop
    ctx->pc = 0x1d065cu;
    // NOP
label_1d0660:
    // 0x1d0660: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d0660u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d0664:
    // 0x1d0664: 0xe7a00264  swc1        $f0, 0x264($sp)
    ctx->pc = 0x1d0664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
label_1d0668:
    // 0x1d0668: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x1d0668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_1d066c:
    // 0x1d066c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d066cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0670:
    // 0x1d0670: 0xc7ac0264  lwc1        $f12, 0x264($sp)
    ctx->pc = 0x1d0670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d0674:
    // 0x1d0674: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x1d0674u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_1d0678:
    // 0x1d0678: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x1d0678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
label_1d067c:
    // 0x1d067c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d067cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0680:
    // 0x1d0680: 0x0  nop
    ctx->pc = 0x1d0680u;
    // NOP
label_1d0684:
    // 0x1d0684: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d0684u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0688:
    // 0x1d0688: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1d068c:
    if (ctx->pc == 0x1D068Cu) {
        ctx->pc = 0x1D0690u;
        goto label_1d0690;
    }
    ctx->pc = 0x1D0688u;
    {
        const bool branch_taken_0x1d0688 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0688) {
            ctx->pc = 0x1D06A0u;
            goto label_1d06a0;
        }
    }
    ctx->pc = 0x1D0690u;
label_1d0690:
    // 0x1d0690: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d0690u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1d0694:
    // 0x1d0694: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1d0694u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1d0698:
    // 0x1d0698: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d069c:
    if (ctx->pc == 0x1D069Cu) {
        ctx->pc = 0x1D06A0u;
        goto label_1d06a0;
    }
    ctx->pc = 0x1D0698u;
    {
        const bool branch_taken_0x1d0698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0698) {
            ctx->pc = 0x1D06B4u;
            goto label_1d06b4;
        }
    }
    ctx->pc = 0x1D06A0u;
label_1d06a0:
    // 0x1d06a0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d06a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d06a4:
    // 0x1d06a4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d06a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1d06a8:
    // 0x1d06a8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1d06a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1d06ac:
    // 0x1d06ac: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1d06acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_1d06b0:
    // 0x1d06b0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1d06b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1d06b4:
    // 0x1d06b4: 0xa3a402ec  sb          $a0, 0x2EC($sp)
    ctx->pc = 0x1d06b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 748), (uint8_t)GPR_U32(ctx, 4));
label_1d06b8:
    // 0x1d06b8: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1d06b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1d06bc:
    // 0x1d06bc: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x1d06bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1d06c0:
    // 0x1d06c0: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x1d06c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_1d06c4:
    // 0x1d06c4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1d06c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1d06c8:
    // 0x1d06c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d06c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d06cc:
    // 0x1d06cc: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1d06ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d06d0:
    // 0x1d06d0: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1d06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_1d06d4:
    // 0x1d06d4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d06d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1d06d8:
    // 0x1d06d8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1d06d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1d06dc:
    // 0x1d06dc: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x1d06dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
label_1d06e0:
    // 0x1d06e0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1d06e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d06e4:
    // 0x1d06e4: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x1d06e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_1d06e8:
    // 0x1d06e8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1d06e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_1d06ec:
    // 0x1d06ec: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1d06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d06f0:
    // 0x1d06f0: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x1d06f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_1d06f4:
    // 0x1d06f4: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x1d06f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_1d06f8:
    // 0x1d06f8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1d06f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d06fc:
    // 0x1d06fc: 0x8fa70260  lw          $a3, 0x260($sp)
    ctx->pc = 0x1d06fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_1d0700:
    // 0x1d0700: 0xa0e60002  sb          $a2, 0x2($a3)
    ctx->pc = 0x1d0700u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 6));
label_1d0704:
    // 0x1d0704: 0x93a202ec  lbu         $v0, 0x2EC($sp)
    ctx->pc = 0x1d0704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 748)));
label_1d0708:
    // 0x1d0708: 0x8fa60260  lw          $a2, 0x260($sp)
    ctx->pc = 0x1d0708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_1d070c:
    // 0x1d070c: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x1d070cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
label_1d0710:
    // 0x1d0710: 0x103840  sll         $a3, $s0, 1
    ctx->pc = 0x1d0710u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1d0714:
    // 0x1d0714: 0xf04021  addu        $t0, $a3, $s0
    ctx->pc = 0x1d0714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_1d0718:
    // 0x1d0718: 0x25090001  addiu       $t1, $t0, 0x1
    ctx->pc = 0x1d0718u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d071c:
    // 0x1d071c: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x1d071cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_1d0720:
    // 0x1d0720: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1d0720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1d0724:
    // 0x1d0724: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d0724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d0728:
    // 0x1d0728: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x1d0728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1d072c:
    // 0x1d072c: 0x8c650154  lw          $a1, 0x154($v1)
    ctx->pc = 0x1d072cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
label_1d0730:
    // 0x1d0730: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x1d0730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1d0734:
    // 0x1d0734: 0x2485000c  addiu       $a1, $a0, 0xC
    ctx->pc = 0x1d0734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1d0738:
    // 0x1d0738: 0xafa5025c  sw          $a1, 0x25C($sp)
    ctx->pc = 0x1d0738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 5));
label_1d073c:
    // 0x1d073c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1d073cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d0740:
    // 0x1d0740: 0x8fa3025c  lw          $v1, 0x25C($sp)
    ctx->pc = 0x1d0740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_1d0744:
    // 0x1d0744: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1d0744u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1d0748:
    // 0x1d0748: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d0748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d074c:
    // 0x1d074c: 0x8fa5025c  lw          $a1, 0x25C($sp)
    ctx->pc = 0x1d074cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_1d0750:
    // 0x1d0750: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x1d0750u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
label_1d0754:
    // 0x1d0754: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1d0754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d0758:
    // 0x1d0758: 0x8fa3025c  lw          $v1, 0x25C($sp)
    ctx->pc = 0x1d0758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_1d075c:
    // 0x1d075c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1d075cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1d0760:
    // 0x1d0760: 0x93a202ec  lbu         $v0, 0x2EC($sp)
    ctx->pc = 0x1d0760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 748)));
label_1d0764:
    // 0x1d0764: 0x8fa4025c  lw          $a0, 0x25C($sp)
    ctx->pc = 0x1d0764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_1d0768:
    // 0x1d0768: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1d0768u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_1d076c:
    // 0x1d076c: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x1d076cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1d0770:
    // 0x1d0770: 0xb03021  addu        $a2, $a1, $s0
    ctx->pc = 0x1d0770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_1d0774:
    // 0x1d0774: 0x24c20002  addiu       $v0, $a2, 0x2
    ctx->pc = 0x1d0774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_1d0778:
    // 0x1d0778: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1d0778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1d077c:
    // 0x1d077c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1d077cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d0780:
    // 0x1d0780: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1d0780u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1d0784:
    // 0x1d0784: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1d0784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1d0788:
    // 0x1d0788: 0x8c440154  lw          $a0, 0x154($v0)
    ctx->pc = 0x1d0788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
label_1d078c:
    // 0x1d078c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1d078cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d0790:
    // 0x1d0790: 0x245e000c  addiu       $fp, $v0, 0xC
    ctx->pc = 0x1d0790u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1d0794:
    // 0x1d0794: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1d0794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d0798:
    // 0x1d0798: 0xa3c20000  sb          $v0, 0x0($fp)
    ctx->pc = 0x1d0798u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 2));
label_1d079c:
    // 0x1d079c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1d079cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d07a0:
    // 0x1d07a0: 0xa3c20001  sb          $v0, 0x1($fp)
    ctx->pc = 0x1d07a0u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 1), (uint8_t)GPR_U32(ctx, 2));
label_1d07a4:
    // 0x1d07a4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1d07a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d07a8:
    // 0x1d07a8: 0xa3c30002  sb          $v1, 0x2($fp)
    ctx->pc = 0x1d07a8u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 2), (uint8_t)GPR_U32(ctx, 3));
label_1d07ac:
    // 0x1d07ac: 0x93a202ec  lbu         $v0, 0x2EC($sp)
    ctx->pc = 0x1d07acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 748)));
label_1d07b0:
    // 0x1d07b0: 0xa3c20003  sb          $v0, 0x3($fp)
    ctx->pc = 0x1d07b0u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 3), (uint8_t)GPR_U32(ctx, 2));
label_1d07b4:
    // 0x1d07b4: 0x10000037  b           . + 4 + (0x37 << 2)
label_1d07b8:
    if (ctx->pc == 0x1D07B8u) {
        ctx->pc = 0x1D07BCu;
        goto label_1d07bc;
    }
    ctx->pc = 0x1D07B4u;
    {
        const bool branch_taken_0x1d07b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d07b4) {
            ctx->pc = 0x1D0894u;
            goto label_1d0894;
        }
    }
    ctx->pc = 0x1D07BCu;
label_1d07bc:
    // 0x1d07bc: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1d07bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1d07c0:
    // 0x1d07c0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d07c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1d07c4:
    // 0x1d07c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d07c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d07c8:
    // 0x1d07c8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1d07c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1d07cc:
    // 0x1d07cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d07ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d07d0:
    // 0x1d07d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d07d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d07d4:
    // 0x1d07d4: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1d07d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_1d07d8:
    // 0x1d07d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d07d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d07dc:
    // 0x1d07dc: 0x2457000c  addiu       $s7, $v0, 0xC
    ctx->pc = 0x1d07dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1d07e0:
    // 0x1d07e0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1d07e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d07e4:
    // 0x1d07e4: 0xa2e20000  sb          $v0, 0x0($s7)
    ctx->pc = 0x1d07e4u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
label_1d07e8:
    // 0x1d07e8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1d07e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d07ec:
    // 0x1d07ec: 0xa2e20001  sb          $v0, 0x1($s7)
    ctx->pc = 0x1d07ecu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 1), (uint8_t)GPR_U32(ctx, 2));
label_1d07f0:
    // 0x1d07f0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d07f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d07f4:
    // 0x1d07f4: 0xa2e40002  sb          $a0, 0x2($s7)
    ctx->pc = 0x1d07f4u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 2), (uint8_t)GPR_U32(ctx, 4));
label_1d07f8:
    // 0x1d07f8: 0xa2e00003  sb          $zero, 0x3($s7)
    ctx->pc = 0x1d07f8u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 3), (uint8_t)GPR_U32(ctx, 0));
label_1d07fc:
    // 0x1d07fc: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x1d07fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1d0800:
    // 0x1d0800: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x1d0800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_1d0804:
    // 0x1d0804: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1d0804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d0808:
    // 0x1d0808: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1d0808u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1d080c:
    // 0x1d080c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1d080cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1d0810:
    // 0x1d0810: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d0810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d0814:
    // 0x1d0814: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1d0814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1d0818:
    // 0x1d0818: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1d0818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_1d081c:
    // 0x1d081c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d081cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0820:
    // 0x1d0820: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1d0820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1d0824:
    // 0x1d0824: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1d0824u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d0828:
    // 0x1d0828: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1d0828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d082c:
    // 0x1d082c: 0xa2c50000  sb          $a1, 0x0($s6)
    ctx->pc = 0x1d082cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 5));
label_1d0830:
    // 0x1d0830: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1d0830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d0834:
    // 0x1d0834: 0xa2c70001  sb          $a3, 0x1($s6)
    ctx->pc = 0x1d0834u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 7));
label_1d0838:
    // 0x1d0838: 0x241400ff  addiu       $s4, $zero, 0xFF
    ctx->pc = 0x1d0838u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d083c:
    // 0x1d083c: 0xa2d40002  sb          $s4, 0x2($s6)
    ctx->pc = 0x1d083cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 20));
label_1d0840:
    // 0x1d0840: 0xa2c00003  sb          $zero, 0x3($s6)
    ctx->pc = 0x1d0840u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 0));
label_1d0844:
    // 0x1d0844: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d0844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1d0848:
    // 0x1d0848: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1d0848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d084c:
    // 0x1d084c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x1d084cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_1d0850:
    // 0x1d0850: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1d0850u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1d0854:
    // 0x1d0854: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1d0854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1d0858:
    // 0x1d0858: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1d0858u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d085c:
    // 0x1d085c: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1d085cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1d0860:
    // 0x1d0860: 0x8c420154  lw          $v0, 0x154($v0)
    ctx->pc = 0x1d0860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
label_1d0864:
    // 0x1d0864: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d0864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d0868:
    // 0x1d0868: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1d0868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1d086c:
    // 0x1d086c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d086cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d0870:
    // 0x1d0870: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d0870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d0874:
    // 0x1d0874: 0xa2a40000  sb          $a0, 0x0($s5)
    ctx->pc = 0x1d0874u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 4));
label_1d0878:
    // 0x1d0878: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1d0878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d087c:
    // 0x1d087c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1d087cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_1d0880:
    // 0x1d0880: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x1d0880u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1d0884:
    // 0x1d0884: 0xa2a20001  sb          $v0, 0x1($s5)
    ctx->pc = 0x1d0884u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 2));
label_1d0888:
    // 0x1d0888: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1d0888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d088c:
    // 0x1d088c: 0xa2a30002  sb          $v1, 0x2($s5)
    ctx->pc = 0x1d088cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 3));
label_1d0890:
    // 0x1d0890: 0xa2a00003  sb          $zero, 0x3($s5)
    ctx->pc = 0x1d0890u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 0));
label_1d0894:
    // 0x1d0894: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x1d0894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_1d0898:
    // 0x1d0898: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1d0898u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d089c:
    // 0x1d089c: 0xc7a20280  lwc1        $f2, 0x280($sp)
    ctx->pc = 0x1d089cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d08a0:
    // 0x1d08a0: 0xc7a101a8  lwc1        $f1, 0x1A8($sp)
    ctx->pc = 0x1d08a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d08a4:
    // 0x1d08a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d08a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d08a8:
    // 0x1d08a8: 0x0  nop
    ctx->pc = 0x1d08a8u;
    // NOP
label_1d08ac:
    // 0x1d08ac: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d08acu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1d08b0:
    // 0x1d08b0: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x1d08b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1d08b4:
    // 0x1d08b4: 0xe7a10198  swc1        $f1, 0x198($sp)
    ctx->pc = 0x1d08b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_1d08b8:
    // 0x1d08b8: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1d08b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_1d08bc:
    // 0x1d08bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d08bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d08c0:
    // 0x1d08c0: 0xc7a101ac  lwc1        $f1, 0x1AC($sp)
    ctx->pc = 0x1d08c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d08c4:
    // 0x1d08c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d08c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d08c8:
    // 0x1d08c8: 0xe7a0019c  swc1        $f0, 0x19C($sp)
    ctx->pc = 0x1d08c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_1d08cc:
    // 0x1d08cc: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x1d08ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_1d08d0:
    // 0x1d08d0: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1d08d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d08d4:
    // 0x1d08d4: 0xc7a2027c  lwc1        $f2, 0x27C($sp)
    ctx->pc = 0x1d08d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d08d8:
    // 0x1d08d8: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x1d08d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d08dc:
    // 0x1d08dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d08dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d08e0:
    // 0x1d08e0: 0x0  nop
    ctx->pc = 0x1d08e0u;
    // NOP
label_1d08e4:
    // 0x1d08e4: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x1d08e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
label_1d08e8:
    // 0x1d08e8: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x1d08e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1d08ec:
    // 0x1d08ec: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1d08ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_1d08f0:
    // 0x1d08f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d08f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d08f4:
    // 0x1d08f4: 0x0  nop
    ctx->pc = 0x1d08f4u;
    // NOP
label_1d08f8:
    // 0x1d08f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d08f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d08fc:
    // 0x1d08fc: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x1d08fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_1d0900:
    // 0x1d0900: 0x8fa602f0  lw          $a2, 0x2F0($sp)
    ctx->pc = 0x1d0900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1d0904:
    // 0x1d0904: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x1d0904u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1d0908:
    // 0x1d0908: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x1d0908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_1d090c:
    // 0x1d090c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1d090cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1d0910:
    // 0x1d0910: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d0910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d0914:
    // 0x1d0914: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d0914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d0918:
    // 0x1d0918: 0x8cc20154  lw          $v0, 0x154($a2)
    ctx->pc = 0x1d0918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 340)));
label_1d091c:
    // 0x1d091c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1d091cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0920:
    // 0x1d0920: 0x27a50198  addiu       $a1, $sp, 0x198
    ctx->pc = 0x1d0920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_1d0924:
    // 0x1d0924: 0xc041d58  jal         func_107560
label_1d0928:
    if (ctx->pc == 0x1D0928u) {
        ctx->pc = 0x1D092Cu;
        goto label_1d092c;
    }
    ctx->pc = 0x1D0924u;
    SET_GPR_U32(ctx, 31, 0x1D092Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x1D0924u, 0x1D092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D092Cu;
label_1d092c:
    // 0x1d092c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1d092cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_1d0930:
    // 0x1d0930: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1d0930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d0934:
    // 0x1d0934: 0xc7a20280  lwc1        $f2, 0x280($sp)
    ctx->pc = 0x1d0934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d0938:
    // 0x1d0938: 0xc7a101a8  lwc1        $f1, 0x1A8($sp)
    ctx->pc = 0x1d0938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d093c:
    // 0x1d093c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d093cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0940:
    // 0x1d0940: 0x0  nop
    ctx->pc = 0x1d0940u;
    // NOP
label_1d0944:
    // 0x1d0944: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d0944u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1d0948:
    // 0x1d0948: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x1d0948u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1d094c:
    // 0x1d094c: 0xe7a10188  swc1        $f1, 0x188($sp)
    ctx->pc = 0x1d094cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_1d0950:
    // 0x1d0950: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x1d0950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
label_1d0954:
    // 0x1d0954: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d0954u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0958:
    // 0x1d0958: 0xc7a101ac  lwc1        $f1, 0x1AC($sp)
    ctx->pc = 0x1d0958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d095c:
    // 0x1d095c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d095cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d0960:
    // 0x1d0960: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x1d0960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_1d0964:
    // 0x1d0964: 0x3c054334  lui         $a1, 0x4334
    ctx->pc = 0x1d0964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17204 << 16));
label_1d0968:
    // 0x1d0968: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1d0968u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d096c:
    // 0x1d096c: 0xc7a2027c  lwc1        $f2, 0x27C($sp)
    ctx->pc = 0x1d096cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d0970:
    // 0x1d0970: 0xc7a101b0  lwc1        $f1, 0x1B0($sp)
    ctx->pc = 0x1d0970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0974:
    // 0x1d0974: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0974u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0978:
    // 0x1d0978: 0x0  nop
    ctx->pc = 0x1d0978u;
    // NOP
label_1d097c:
    // 0x1d097c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d097cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1d0980:
    // 0x1d0980: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1d0980u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1d0984:
    // 0x1d0984: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1d0984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1d0988:
    // 0x1d0988: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d0988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d098c:
    // 0x1d098c: 0x0  nop
    ctx->pc = 0x1d098cu;
    // NOP
label_1d0990:
    // 0x1d0990: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d0990u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d0994:
    // 0x1d0994: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x1d0994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_1d0998:
    // 0x1d0998: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1d0998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1d099c:
    // 0x1d099c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1d099cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d09a0:
    // 0x1d09a0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1d09a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1d09a4:
    // 0x1d09a4: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1d09a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1d09a8:
    // 0x1d09a8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d09a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d09ac:
    // 0x1d09ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d09acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d09b0:
    // 0x1d09b0: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x1d09b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1d09b4:
    // 0x1d09b4: 0x8ca20154  lw          $v0, 0x154($a1)
    ctx->pc = 0x1d09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 340)));
label_1d09b8:
    // 0x1d09b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d09b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d09bc:
    // 0x1d09bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d09bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d09c0:
    // 0x1d09c0: 0x27a50188  addiu       $a1, $sp, 0x188
    ctx->pc = 0x1d09c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_1d09c4:
    // 0x1d09c4: 0xc041d58  jal         func_107560
label_1d09c8:
    if (ctx->pc == 0x1D09C8u) {
        ctx->pc = 0x1D09CCu;
        goto label_1d09cc;
    }
    ctx->pc = 0x1D09C4u;
    SET_GPR_U32(ctx, 31, 0x1D09CCu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x1D09C4u, 0x1D09CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D09CCu;
label_1d09cc:
    // 0x1d09cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d09ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d09d0:
    // 0x1d09d0: 0x3c054334  lui         $a1, 0x4334
    ctx->pc = 0x1d09d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17204 << 16));
label_1d09d4:
    // 0x1d09d4: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1d09d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d09d8:
    // 0x1d09d8: 0xc7a20280  lwc1        $f2, 0x280($sp)
    ctx->pc = 0x1d09d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d09dc:
    // 0x1d09dc: 0xc7a101a8  lwc1        $f1, 0x1A8($sp)
    ctx->pc = 0x1d09dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d09e0:
    // 0x1d09e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d09e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d09e4:
    // 0x1d09e4: 0x0  nop
    ctx->pc = 0x1d09e4u;
    // NOP
label_1d09e8:
    // 0x1d09e8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d09e8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1d09ec:
    // 0x1d09ec: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1d09ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1d09f0:
    // 0x1d09f0: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x1d09f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_1d09f4:
    // 0x1d09f4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1d09f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1d09f8:
    // 0x1d09f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d09f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d09fc:
    // 0x1d09fc: 0xc7a001ac  lwc1        $f0, 0x1AC($sp)
    ctx->pc = 0x1d09fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0a00:
    // 0x1d0a00: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d0a00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d0a04:
    // 0x1d0a04: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x1d0a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_1d0a08:
    // 0x1d0a08: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x1d0a08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_1d0a0c:
    // 0x1d0a0c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1d0a0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d0a10:
    // 0x1d0a10: 0xc7a2027c  lwc1        $f2, 0x27C($sp)
    ctx->pc = 0x1d0a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d0a14:
    // 0x1d0a14: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x1d0a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0a18:
    // 0x1d0a18: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d0a18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d0a1c:
    // 0x1d0a1c: 0x0  nop
    ctx->pc = 0x1d0a1cu;
    // NOP
label_1d0a20:
    // 0x1d0a20: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x1d0a20u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
label_1d0a24:
    // 0x1d0a24: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x1d0a24u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1d0a28:
    // 0x1d0a28: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x1d0a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
label_1d0a2c:
    // 0x1d0a2c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d0a2cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0a30:
    // 0x1d0a30: 0x0  nop
    ctx->pc = 0x1d0a30u;
    // NOP
label_1d0a34:
    // 0x1d0a34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d0a34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d0a38:
    // 0x1d0a38: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x1d0a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_1d0a3c:
    // 0x1d0a3c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d0a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1d0a40:
    // 0x1d0a40: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x1d0a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d0a44:
    // 0x1d0a44: 0x24a20002  addiu       $v0, $a1, 0x2
    ctx->pc = 0x1d0a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_1d0a48:
    // 0x1d0a48: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1d0a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1d0a4c:
    // 0x1d0a4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d0a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d0a50:
    // 0x1d0a50: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d0a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d0a54:
    // 0x1d0a54: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1d0a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1d0a58:
    // 0x1d0a58: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1d0a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_1d0a5c:
    // 0x1d0a5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0a60:
    // 0x1d0a60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0a64:
    // 0x1d0a64: 0x27a50178  addiu       $a1, $sp, 0x178
    ctx->pc = 0x1d0a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_1d0a68:
    // 0x1d0a68: 0xc041d58  jal         func_107560
label_1d0a6c:
    if (ctx->pc == 0x1D0A6Cu) {
        ctx->pc = 0x1D0A70u;
        goto label_1d0a70;
    }
    ctx->pc = 0x1D0A68u;
    SET_GPR_U32(ctx, 31, 0x1D0A70u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x1D0A68u, 0x1D0A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0A70u;
label_1d0a70:
    // 0x1d0a70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d0a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0a74:
    // 0x1d0a74: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x1d0a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1d0a78:
    // 0x1d0a78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d0a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0a7c:
    // 0x1d0a7c: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1d0a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d0a80:
    // 0x1d0a80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d0a84:
    // 0x1d0a84: 0xafa40258  sw          $a0, 0x258($sp)
    ctx->pc = 0x1d0a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 4));
label_1d0a88:
    // 0x1d0a88: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x1d0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1d0a8c:
    // 0x1d0a8c: 0x2442011c  addiu       $v0, $v0, 0x11C
    ctx->pc = 0x1d0a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
label_1d0a90:
    // 0x1d0a90: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1d0a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_1d0a94:
    // 0x1d0a94: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x1d0a94u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1d0a98:
    // 0x1d0a98: 0xc068e98  jal         func_1A3A60
label_1d0a9c:
    if (ctx->pc == 0x1D0A9Cu) {
        ctx->pc = 0x1D0AA0u;
        goto label_1d0aa0;
    }
    ctx->pc = 0x1D0A98u;
    SET_GPR_U32(ctx, 31, 0x1D0AA0u);
    ctx->pc = 0x1A3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A60u, 0x1D0A98u, 0x1D0AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0AA0u;
label_1d0aa0:
    // 0x1d0aa0: 0x1622fa84  bne         $s1, $v0, . + 4 + (-0x57C << 2)
label_1d0aa4:
    if (ctx->pc == 0x1D0AA4u) {
        ctx->pc = 0x1D0AA8u;
        goto label_1d0aa8;
    }
    ctx->pc = 0x1D0AA0u;
    {
        const bool branch_taken_0x1d0aa0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0aa0) {
            ctx->pc = 0x1CF4B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf4b4;
        }
    }
    ctx->pc = 0x1D0AA8u;
label_1d0aa8:
    // 0x1d0aa8: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x1d0aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_1d0aac:
    // 0x1d0aac: 0xc064cb0  jal         func_1932C0
label_1d0ab0:
    if (ctx->pc == 0x1D0AB0u) {
        ctx->pc = 0x1D0AB4u;
        goto label_1d0ab4;
    }
    ctx->pc = 0x1D0AACu;
    SET_GPR_U32(ctx, 31, 0x1D0AB4u);
    ctx->pc = 0x1932C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932C0u, 0x1D0AACu, 0x1D0AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0AB4u;
label_1d0ab4:
    // 0x1d0ab4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d0ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0ab8:
    // 0x1d0ab8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1d0ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d0abc:
    // 0x1d0abc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1d0abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1d0ac0:
    // 0x1d0ac0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1d0ac0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1d0ac4:
    // 0x1d0ac4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1d0ac4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d0ac8:
    // 0x1d0ac8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1d0ac8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d0acc:
    // 0x1d0acc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1d0accu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d0ad0:
    // 0x1d0ad0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1d0ad0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d0ad4:
    // 0x1d0ad4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d0ad4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d0ad8:
    // 0x1d0ad8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d0ad8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d0adc:
    // 0x1d0adc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d0adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d0ae0:
    // 0x1d0ae0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d0ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d0ae4:
    // 0x1d0ae4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d0ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d0ae8:
    // 0x1d0ae8: 0x27bd0300  addiu       $sp, $sp, 0x300
    ctx->pc = 0x1d0ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_1d0aec:
    // 0x1d0aec: 0x3e00008  jr          $ra
label_1d0af0:
    if (ctx->pc == 0x1D0AF0u) {
        ctx->pc = 0x1D0AF4u;
        goto label_1d0af4;
    }
    ctx->pc = 0x1D0AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0AF4u;
label_1d0af4:
    // 0x1d0af4: 0x0  nop
    ctx->pc = 0x1d0af4u;
    // NOP
label_1d0af8:
    // 0x1d0af8: 0x0  nop
    ctx->pc = 0x1d0af8u;
    // NOP
label_1d0afc:
    // 0x1d0afc: 0x0  nop
    ctx->pc = 0x1d0afcu;
    // NOP
label_1d0b00:
    // 0x1d0b00: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x1d0b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_1d0b04:
    // 0x1d0b04: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1d0b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1d0b08:
    // 0x1d0b08: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1d0b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1d0b0c:
    // 0x1d0b0c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d0b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1d0b10:
    // 0x1d0b10: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d0b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1d0b14:
    // 0x1d0b14: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d0b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1d0b18:
    // 0x1d0b18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d0b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1d0b1c:
    // 0x1d0b1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d0b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d0b20:
    // 0x1d0b20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d0b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d0b24:
    // 0x1d0b24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d0b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d0b28:
    // 0x1d0b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d0b2c:
    // 0x1d0b2c: 0xafa401a0  sw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d0b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 4));
label_1d0b30:
    // 0x1d0b30: 0xa3a501b0  sb          $a1, 0x1B0($sp)
    ctx->pc = 0x1d0b30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 432), (uint8_t)GPR_U32(ctx, 5));
label_1d0b34:
    // 0x1d0b34: 0xafa601c0  sw          $a2, 0x1C0($sp)
    ctx->pc = 0x1d0b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 6));
label_1d0b38:
    // 0x1d0b38: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d0b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d0b3c:
    // 0x1d0b3c: 0x93a501b0  lbu         $a1, 0x1B0($sp)
    ctx->pc = 0x1d0b3cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 432)));
label_1d0b40:
    // 0x1d0b40: 0x8fa601c0  lw          $a2, 0x1C0($sp)
    ctx->pc = 0x1d0b40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_1d0b44:
    // 0x1d0b44: 0xc064a4c  jal         func_192930
label_1d0b48:
    if (ctx->pc == 0x1D0B48u) {
        ctx->pc = 0x1D0B4Cu;
        goto label_1d0b4c;
    }
    ctx->pc = 0x1D0B44u;
    SET_GPR_U32(ctx, 31, 0x1D0B4Cu);
    ctx->pc = 0x192930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192930u, 0x1D0B44u, 0x1D0B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B4Cu;
label_1d0b4c:
    // 0x1d0b4c: 0x93a401b0  lbu         $a0, 0x1B0($sp)
    ctx->pc = 0x1d0b4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 432)));
label_1d0b50:
    // 0x1d0b50: 0x1080018f  beqz        $a0, . + 4 + (0x18F << 2)
label_1d0b54:
    if (ctx->pc == 0x1D0B54u) {
        ctx->pc = 0x1D0B58u;
        goto label_1d0b58;
    }
    ctx->pc = 0x1D0B50u;
    {
        const bool branch_taken_0x1d0b50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0b50) {
            ctx->pc = 0x1D1190u;
            goto label_1d1190;
        }
    }
    ctx->pc = 0x1D0B58u;
label_1d0b58:
    // 0x1d0b58: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x1d0b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d0b5c:
    // 0x1d0b5c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1d0b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1d0b60:
    // 0x1d0b60: 0x24a400a8  addiu       $a0, $a1, 0xA8
    ctx->pc = 0x1d0b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 168));
label_1d0b64:
    // 0x1d0b64: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d0b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d0b68:
    // 0x1d0b68: 0xc0acb18  jal         func_2B2C60
label_1d0b6c:
    if (ctx->pc == 0x1D0B6Cu) {
        ctx->pc = 0x1D0B70u;
        goto label_1d0b70;
    }
    ctx->pc = 0x1D0B68u;
    SET_GPR_U32(ctx, 31, 0x1D0B70u);
    ctx->pc = 0x2B2C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C60u, 0x1D0B68u, 0x1D0B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B70u;
label_1d0b70:
    // 0x1d0b70: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1d0b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_1d0b74:
    // 0x1d0b74: 0xc090864  jal         func_242190
label_1d0b78:
    if (ctx->pc == 0x1D0B78u) {
        ctx->pc = 0x1D0B7Cu;
        goto label_1d0b7c;
    }
    ctx->pc = 0x1D0B74u;
    SET_GPR_U32(ctx, 31, 0x1D0B7Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x1D0B74u, 0x1D0B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B7Cu;
label_1d0b7c:
    // 0x1d0b7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0b80:
    // 0x1d0b80: 0xc090590  jal         func_241640
label_1d0b84:
    if (ctx->pc == 0x1D0B84u) {
        ctx->pc = 0x1D0B88u;
        goto label_1d0b88;
    }
    ctx->pc = 0x1D0B80u;
    SET_GPR_U32(ctx, 31, 0x1D0B88u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x1D0B80u, 0x1D0B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B88u;
label_1d0b88:
    // 0x1d0b88: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x1d0b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
label_1d0b8c:
    // 0x1d0b8c: 0x8fa6019c  lw          $a2, 0x19C($sp)
    ctx->pc = 0x1d0b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_1d0b90:
    // 0x1d0b90: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1d0b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d0b94:
    // 0x1d0b94: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1d0b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d0b98:
    // 0x1d0b98: 0xc09157c  jal         func_2455F0
label_1d0b9c:
    if (ctx->pc == 0x1D0B9Cu) {
        ctx->pc = 0x1D0BA0u;
        goto label_1d0ba0;
    }
    ctx->pc = 0x1D0B98u;
    SET_GPR_U32(ctx, 31, 0x1D0BA0u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x1D0B98u, 0x1D0BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0BA0u;
label_1d0ba0:
    // 0x1d0ba0: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x1d0ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
label_1d0ba4:
    // 0x1d0ba4: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1d0ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1d0ba8:
    // 0x1d0ba8: 0xc040e7c  jal         func_1039F0
label_1d0bac:
    if (ctx->pc == 0x1D0BACu) {
        ctx->pc = 0x1D0BB0u;
        goto label_1d0bb0;
    }
    ctx->pc = 0x1D0BA8u;
    SET_GPR_U32(ctx, 31, 0x1D0BB0u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x1D0BA8u, 0x1D0BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0BB0u;
label_1d0bb0:
    // 0x1d0bb0: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x1d0bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
label_1d0bb4:
    // 0x1d0bb4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1d0bb8:
    if (ctx->pc == 0x1D0BB8u) {
        ctx->pc = 0x1D0BBCu;
        goto label_1d0bbc;
    }
    ctx->pc = 0x1D0BB4u;
    {
        const bool branch_taken_0x1d0bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0bb4) {
            ctx->pc = 0x1D0C20u;
            goto label_1d0c20;
        }
    }
    ctx->pc = 0x1D0BBCu;
label_1d0bbc:
    // 0x1d0bbc: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x1d0bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_1d0bc0:
    // 0x1d0bc0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d0bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d0bc4:
    // 0x1d0bc4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1d0bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1d0bc8:
    // 0x1d0bc8: 0xc085538  jal         func_2154E0
label_1d0bcc:
    if (ctx->pc == 0x1D0BCCu) {
        ctx->pc = 0x1D0BD0u;
        goto label_1d0bd0;
    }
    ctx->pc = 0x1D0BC8u;
    SET_GPR_U32(ctx, 31, 0x1D0BD0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D0BC8u, 0x1D0BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0BD0u;
label_1d0bd0:
    // 0x1d0bd0: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x1d0bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_1d0bd4:
    // 0x1d0bd4: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x1d0bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_1d0bd8:
    // 0x1d0bd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d0bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0bdc:
    // 0x1d0bdc: 0xc0ae044  jal         func_2B8110
label_1d0be0:
    if (ctx->pc == 0x1D0BE0u) {
        ctx->pc = 0x1D0BE4u;
        goto label_1d0be4;
    }
    ctx->pc = 0x1D0BDCu;
    SET_GPR_U32(ctx, 31, 0x1D0BE4u);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x1D0BDCu, 0x1D0BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0BE4u;
label_1d0be4:
    // 0x1d0be4: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d0be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d0be8:
    // 0x1d0be8: 0x2485011c  addiu       $a1, $a0, 0x11C
    ctx->pc = 0x1d0be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 284));
label_1d0bec:
    // 0x1d0bec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d0becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d0bf0:
    // 0x1d0bf0: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x1d0bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1d0bf4:
    // 0x1d0bf4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d0bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d0bf8:
    // 0x1d0bf8: 0xc068d74  jal         func_1A35D0
label_1d0bfc:
    if (ctx->pc == 0x1D0BFCu) {
        ctx->pc = 0x1D0C00u;
        goto label_1d0c00;
    }
    ctx->pc = 0x1D0BF8u;
    SET_GPR_U32(ctx, 31, 0x1D0C00u);
    ctx->pc = 0x1A35D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A35D0u, 0x1D0BF8u, 0x1D0C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C00u;
label_1d0c00:
    // 0x1d0c00: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d0c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d0c04:
    // 0x1d0c04: 0x24440148  addiu       $a0, $v0, 0x148
    ctx->pc = 0x1d0c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
label_1d0c08:
    // 0x1d0c08: 0x278596f8  addiu       $a1, $gp, -0x6908
    ctx->pc = 0x1d0c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940408));
label_1d0c0c:
    // 0x1d0c0c: 0xc0744f0  jal         func_1D13C0
label_1d0c10:
    if (ctx->pc == 0x1D0C10u) {
        ctx->pc = 0x1D0C14u;
        goto label_1d0c14;
    }
    ctx->pc = 0x1D0C0Cu;
    SET_GPR_U32(ctx, 31, 0x1D0C14u);
    ctx->pc = 0x1D13C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D13C0u, 0x1D0C0Cu, 0x1D0C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C14u;
label_1d0c14:
    // 0x1d0c14: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x1d0c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_1d0c18:
    // 0x1d0c18: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1d0c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1d0c1c:
    // 0x1d0c1c: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x1d0c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
label_1d0c20:
    // 0x1d0c20: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x1d0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_1d0c24:
    // 0x1d0c24: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1d0c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_1d0c28:
    // 0x1d0c28: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1d0c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1d0c2c:
    // 0x1d0c2c: 0xc04147c  jal         func_1051F0
label_1d0c30:
    if (ctx->pc == 0x1D0C30u) {
        ctx->pc = 0x1D0C34u;
        goto label_1d0c34;
    }
    ctx->pc = 0x1D0C2Cu;
    SET_GPR_U32(ctx, 31, 0x1D0C34u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x1D0C2Cu, 0x1D0C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C34u;
label_1d0c34:
    // 0x1d0c34: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x1d0c34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1d0c38:
    // 0x1d0c38: 0x1462ffe0  bne         $v1, $v0, . + 4 + (-0x20 << 2)
label_1d0c3c:
    if (ctx->pc == 0x1D0C3Cu) {
        ctx->pc = 0x1D0C40u;
        goto label_1d0c40;
    }
    ctx->pc = 0x1D0C38u;
    {
        const bool branch_taken_0x1d0c38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0c38) {
            ctx->pc = 0x1D0BBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0bbc;
        }
    }
    ctx->pc = 0x1D0C40u;
label_1d0c40:
    // 0x1d0c40: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d0c44:
    // 0x1d0c44: 0x2444011c  addiu       $a0, $v0, 0x11C
    ctx->pc = 0x1d0c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
label_1d0c48:
    // 0x1d0c48: 0xc068e2c  jal         func_1A38B0
label_1d0c4c:
    if (ctx->pc == 0x1D0C4Cu) {
        ctx->pc = 0x1D0C50u;
        goto label_1d0c50;
    }
    ctx->pc = 0x1D0C48u;
    SET_GPR_U32(ctx, 31, 0x1D0C50u);
    ctx->pc = 0x1A38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A38B0u, 0x1D0C48u, 0x1D0C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C50u;
label_1d0c50:
    // 0x1d0c50: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1d0c50u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0c54:
    // 0x1d0c54: 0x8f8296d0  lw          $v0, -0x6930($gp)
    ctx->pc = 0x1d0c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1d0c58:
    // 0x1d0c58: 0x3c23018  mult        $a2, $fp, $v0
    ctx->pc = 0x1d0c58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1d0c5c:
    // 0x1d0c5c: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x1d0c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
label_1d0c60:
    // 0x1d0c60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0c64:
    // 0x1d0c64: 0xc0744c0  jal         func_1D1300
label_1d0c68:
    if (ctx->pc == 0x1D0C68u) {
        ctx->pc = 0x1D0C6Cu;
        goto label_1d0c6c;
    }
    ctx->pc = 0x1D0C64u;
    SET_GPR_U32(ctx, 31, 0x1D0C6Cu);
    ctx->pc = 0x1D1300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1300u, 0x1D0C64u, 0x1D0C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C6Cu;
label_1d0c6c:
    // 0x1d0c6c: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1d0c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d0c70:
    // 0x1d0c70: 0xac6200a4  sw          $v0, 0xA4($v1)
    ctx->pc = 0x1d0c70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 2));
label_1d0c74:
    // 0x1d0c74: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1d0c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d0c78:
    // 0x1d0c78: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1d0c78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1d0c7c:
    // 0x1d0c7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d0c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0c80:
    // 0x1d0c80: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d0c80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0c84:
    // 0x1d0c84: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1d0c88:
    if (ctx->pc == 0x1D0C88u) {
        ctx->pc = 0x1D0C8Cu;
        goto label_1d0c8c;
    }
    ctx->pc = 0x1D0C84u;
    {
        const bool branch_taken_0x1d0c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0c84) {
            ctx->pc = 0x1D0D80u;
            goto label_1d0d80;
        }
    }
    ctx->pc = 0x1D0C8Cu;
label_1d0c8c:
    // 0x1d0c8c: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1d0c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1d0c90:
    // 0x1d0c90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d0c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d0c94:
    // 0x1d0c94: 0xc0744b0  jal         func_1D12C0
label_1d0c98:
    if (ctx->pc == 0x1D0C98u) {
        ctx->pc = 0x1D0C9Cu;
        goto label_1d0c9c;
    }
    ctx->pc = 0x1D0C94u;
    SET_GPR_U32(ctx, 31, 0x1D0C9Cu);
    ctx->pc = 0x1D12C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D12C0u, 0x1D0C94u, 0x1D0C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C9Cu;
label_1d0c9c:
    // 0x1d0c9c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d0c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d0ca0:
    // 0x1d0ca0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d0ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d0ca4:
    // 0x1d0ca4: 0xc085538  jal         func_2154E0
label_1d0ca8:
    if (ctx->pc == 0x1D0CA8u) {
        ctx->pc = 0x1D0CACu;
        goto label_1d0cac;
    }
    ctx->pc = 0x1D0CA4u;
    SET_GPR_U32(ctx, 31, 0x1D0CACu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D0CA4u, 0x1D0CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CACu;
label_1d0cac:
    // 0x1d0cac: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x1d0cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_1d0cb0:
    // 0x1d0cb0: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x1d0cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_1d0cb4:
    // 0x1d0cb4: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x1d0cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_1d0cb8:
    // 0x1d0cb8: 0xc090f80  jal         func_243E00
label_1d0cbc:
    if (ctx->pc == 0x1D0CBCu) {
        ctx->pc = 0x1D0CC0u;
        goto label_1d0cc0;
    }
    ctx->pc = 0x1D0CB8u;
    SET_GPR_U32(ctx, 31, 0x1D0CC0u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x1D0CB8u, 0x1D0CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CC0u;
label_1d0cc0:
    // 0x1d0cc0: 0x27a30108  addiu       $v1, $sp, 0x108
    ctx->pc = 0x1d0cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_1d0cc4:
    // 0x1d0cc4: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x1d0cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_1d0cc8:
    // 0x1d0cc8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1d0cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d0ccc:
    // 0x1d0ccc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1d0cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d0cd0:
    // 0x1d0cd0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1d0cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0cd4:
    // 0x1d0cd4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1d0cd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1d0cd8:
    // 0x1d0cd8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1d0cd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1d0cdc:
    // 0x1d0cdc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1d0cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1d0ce0:
    // 0x1d0ce0: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x1d0ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
label_1d0ce4:
    // 0x1d0ce4: 0x10000020  b           . + 4 + (0x20 << 2)
label_1d0ce8:
    if (ctx->pc == 0x1D0CE8u) {
        ctx->pc = 0x1D0CECu;
        goto label_1d0cec;
    }
    ctx->pc = 0x1D0CE4u;
    {
        const bool branch_taken_0x1d0ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0ce4) {
            ctx->pc = 0x1D0D68u;
            goto label_1d0d68;
        }
    }
    ctx->pc = 0x1D0CECu;
label_1d0cec:
    // 0x1d0cec: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x1d0cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0cf0:
    // 0x1d0cf0: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x1d0cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_1d0cf4:
    // 0x1d0cf4: 0xc7a0017c  lwc1        $f0, 0x17C($sp)
    ctx->pc = 0x1d0cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0cf8:
    // 0x1d0cf8: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x1d0cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_1d0cfc:
    // 0x1d0cfc: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x1d0cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0d00:
    // 0x1d0d00: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x1d0d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_1d0d04:
    // 0x1d0d04: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d0d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d0d08:
    // 0x1d0d08: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d0d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1d0d0c:
    // 0x1d0d0c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d0d10:
    // 0x1d0d10: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d0d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d0d14:
    // 0x1d0d14: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1d0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1d0d18:
    // 0x1d0d18: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1d0d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0d1c:
    // 0x1d0d1c: 0x27a50168  addiu       $a1, $sp, 0x168
    ctx->pc = 0x1d0d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_1d0d20:
    // 0x1d0d20: 0xc041d58  jal         func_107560
label_1d0d24:
    if (ctx->pc == 0x1D0D24u) {
        ctx->pc = 0x1D0D28u;
        goto label_1d0d28;
    }
    ctx->pc = 0x1D0D20u;
    SET_GPR_U32(ctx, 31, 0x1D0D28u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x1D0D20u, 0x1D0D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D28u;
label_1d0d28:
    // 0x1d0d28: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d0d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d0d2c:
    // 0x1d0d2c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d0d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1d0d30:
    // 0x1d0d30: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d0d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d0d34:
    // 0x1d0d34: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d0d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d0d38:
    // 0x1d0d38: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1d0d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1d0d3c:
    // 0x1d0d3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0d40:
    // 0x1d0d40: 0x2456000c  addiu       $s6, $v0, 0xC
    ctx->pc = 0x1d0d40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1d0d44:
    // 0x1d0d44: 0xa2c00000  sb          $zero, 0x0($s6)
    ctx->pc = 0x1d0d44u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
label_1d0d48:
    // 0x1d0d48: 0xa2d10001  sb          $s1, 0x1($s6)
    ctx->pc = 0x1d0d48u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 17));
label_1d0d4c:
    // 0x1d0d4c: 0xa2c00002  sb          $zero, 0x2($s6)
    ctx->pc = 0x1d0d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 0));
label_1d0d50:
    // 0x1d0d50: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d0d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d0d54:
    // 0x1d0d54: 0xa2c20003  sb          $v0, 0x3($s6)
    ctx->pc = 0x1d0d54u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 2));
label_1d0d58:
    // 0x1d0d58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d0d58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d0d5c:
    // 0x1d0d5c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1d0d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_1d0d60:
    // 0x1d0d60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d0d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d0d64:
    // 0x1d0d64: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x1d0d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
label_1d0d68:
    // 0x1d0d68: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1d0d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_1d0d6c:
    // 0x1d0d6c: 0x8f8296d0  lw          $v0, -0x6930($gp)
    ctx->pc = 0x1d0d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940368)));
label_1d0d70:
    // 0x1d0d70: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1d0d70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d0d74:
    // 0x1d0d74: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_1d0d78:
    if (ctx->pc == 0x1D0D78u) {
        ctx->pc = 0x1D0D7Cu;
        goto label_1d0d7c;
    }
    ctx->pc = 0x1D0D74u;
    {
        const bool branch_taken_0x1d0d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0d74) {
            ctx->pc = 0x1D0CECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0cec;
        }
    }
    ctx->pc = 0x1D0D7Cu;
label_1d0d7c:
    // 0x1d0d7c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d0d7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d0d80:
    // 0x1d0d80: 0x25e102b  sltu        $v0, $s2, $fp
    ctx->pc = 0x1d0d80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_1d0d84:
    // 0x1d0d84: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
label_1d0d88:
    if (ctx->pc == 0x1D0D88u) {
        ctx->pc = 0x1D0D8Cu;
        goto label_1d0d8c;
    }
    ctx->pc = 0x1D0D84u;
    {
        const bool branch_taken_0x1d0d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0d84) {
            ctx->pc = 0x1D0C8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0c8c;
        }
    }
    ctx->pc = 0x1D0D8Cu;
label_1d0d8c:
    // 0x1d0d8c: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x1d0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_1d0d90:
    // 0x1d0d90: 0x5e3021  addu        $a2, $v0, $fp
    ctx->pc = 0x1d0d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1d0d94:
    // 0x1d0d94: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x1d0d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
label_1d0d98:
    // 0x1d0d98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0d9c:
    // 0x1d0d9c: 0xc0744c0  jal         func_1D1300
label_1d0da0:
    if (ctx->pc == 0x1D0DA0u) {
        ctx->pc = 0x1D0DA4u;
        goto label_1d0da4;
    }
    ctx->pc = 0x1D0D9Cu;
    SET_GPR_U32(ctx, 31, 0x1D0DA4u);
    ctx->pc = 0x1D1300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1300u, 0x1D0D9Cu, 0x1D0DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DA4u;
label_1d0da4:
    // 0x1d0da4: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1d0da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d0da8:
    // 0x1d0da8: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1d0da8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
label_1d0dac:
    // 0x1d0dac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d0dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0db0:
    // 0x1d0db0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d0db0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0db4:
    // 0x1d0db4: 0x1000009b  b           . + 4 + (0x9B << 2)
label_1d0db8:
    if (ctx->pc == 0x1D0DB8u) {
        ctx->pc = 0x1D0DBCu;
        goto label_1d0dbc;
    }
    ctx->pc = 0x1D0DB4u;
    {
        const bool branch_taken_0x1d0db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0db4) {
            ctx->pc = 0x1D1024u;
            goto label_1d1024;
        }
    }
    ctx->pc = 0x1D0DBCu;
label_1d0dbc:
    // 0x1d0dbc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d0dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1d0dc0:
    // 0x1d0dc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0dc4:
    // 0x1d0dc4: 0x0  nop
    ctx->pc = 0x1d0dc4u;
    // NOP
label_1d0dc8:
    // 0x1d0dc8: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x1d0dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_1d0dcc:
    // 0x1d0dcc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d0dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1d0dd0:
    // 0x1d0dd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0dd4:
    // 0x1d0dd4: 0x0  nop
    ctx->pc = 0x1d0dd4u;
    // NOP
label_1d0dd8:
    // 0x1d0dd8: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x1d0dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_1d0ddc:
    // 0x1d0ddc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d0ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1d0de0:
    // 0x1d0de0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0de4:
    // 0x1d0de4: 0x0  nop
    ctx->pc = 0x1d0de4u;
    // NOP
label_1d0de8:
    // 0x1d0de8: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x1d0de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_1d0dec:
    // 0x1d0dec: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d0decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d0df0:
    // 0x1d0df0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d0df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1d0df4:
    // 0x1d0df4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d0df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d0df8:
    // 0x1d0df8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d0df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d0dfc:
    // 0x1d0dfc: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1d0dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_1d0e00:
    // 0x1d0e00: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1d0e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0e04:
    // 0x1d0e04: 0x27a50158  addiu       $a1, $sp, 0x158
    ctx->pc = 0x1d0e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_1d0e08:
    // 0x1d0e08: 0xc041d58  jal         func_107560
label_1d0e0c:
    if (ctx->pc == 0x1D0E0Cu) {
        ctx->pc = 0x1D0E10u;
        goto label_1d0e10;
    }
    ctx->pc = 0x1D0E08u;
    SET_GPR_U32(ctx, 31, 0x1D0E10u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x1D0E08u, 0x1D0E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E10u;
label_1d0e10:
    // 0x1d0e10: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d0e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d0e14:
    // 0x1d0e14: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d0e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1d0e18:
    // 0x1d0e18: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d0e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d0e1c:
    // 0x1d0e1c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d0e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d0e20:
    // 0x1d0e20: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1d0e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_1d0e24:
    // 0x1d0e24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0e28:
    // 0x1d0e28: 0x2455000c  addiu       $s5, $v0, 0xC
    ctx->pc = 0x1d0e28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1d0e2c:
    // 0x1d0e2c: 0xa2b10000  sb          $s1, 0x0($s5)
    ctx->pc = 0x1d0e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 17));
label_1d0e30:
    // 0x1d0e30: 0xa2b10001  sb          $s1, 0x1($s5)
    ctx->pc = 0x1d0e30u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 17));
label_1d0e34:
    // 0x1d0e34: 0xa2b10002  sb          $s1, 0x2($s5)
    ctx->pc = 0x1d0e34u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 17));
label_1d0e38:
    // 0x1d0e38: 0xa2b10003  sb          $s1, 0x3($s5)
    ctx->pc = 0x1d0e38u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 17));
label_1d0e3c:
    // 0x1d0e3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d0e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d0e40:
    // 0x1d0e40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0e44:
    // 0x1d0e44: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d0e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d0e48:
    // 0x1d0e48: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d0e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1d0e4c:
    // 0x1d0e4c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d0e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d0e50:
    // 0x1d0e50: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d0e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d0e54:
    // 0x1d0e54: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1d0e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_1d0e58:
    // 0x1d0e58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0e5c:
    // 0x1d0e5c: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1d0e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_1d0e60:
    // 0x1d0e60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d0e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d0e64:
    // 0x1d0e64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0e68:
    // 0x1d0e68: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d0e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d0e6c:
    // 0x1d0e6c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d0e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1d0e70:
    // 0x1d0e70: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d0e74:
    // 0x1d0e74: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d0e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d0e78:
    // 0x1d0e78: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1d0e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_1d0e7c:
    // 0x1d0e7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0e80:
    // 0x1d0e80: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1d0e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_1d0e84:
    // 0x1d0e84: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d0e84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d0e88:
    // 0x1d0e88: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d0e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1d0e8c:
    // 0x1d0e8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0e90:
    // 0x1d0e90: 0x0  nop
    ctx->pc = 0x1d0e90u;
    // NOP
label_1d0e94:
    // 0x1d0e94: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1d0e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1d0e98:
    // 0x1d0e98: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d0e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1d0e9c:
    // 0x1d0e9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0ea0:
    // 0x1d0ea0: 0x0  nop
    ctx->pc = 0x1d0ea0u;
    // NOP
label_1d0ea4:
    // 0x1d0ea4: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1d0ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_1d0ea8:
    // 0x1d0ea8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d0ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1d0eac:
    // 0x1d0eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0eb0:
    // 0x1d0eb0: 0x0  nop
    ctx->pc = 0x1d0eb0u;
    // NOP
label_1d0eb4:
    // 0x1d0eb4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1d0eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_1d0eb8:
    // 0x1d0eb8: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d0eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d0ebc:
    // 0x1d0ebc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d0ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1d0ec0:
    // 0x1d0ec0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d0ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d0ec4:
    // 0x1d0ec4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d0ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d0ec8:
    // 0x1d0ec8: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1d0ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_1d0ecc:
    // 0x1d0ecc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1d0eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0ed0:
    // 0x1d0ed0: 0x27a50148  addiu       $a1, $sp, 0x148
    ctx->pc = 0x1d0ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_1d0ed4:
    // 0x1d0ed4: 0xc041d58  jal         func_107560
label_1d0ed8:
    if (ctx->pc == 0x1D0ED8u) {
        ctx->pc = 0x1D0EDCu;
        goto label_1d0edc;
    }
    ctx->pc = 0x1D0ED4u;
    SET_GPR_U32(ctx, 31, 0x1D0EDCu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x1D0ED4u, 0x1D0EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0EDCu;
label_1d0edc:
    // 0x1d0edc: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d0edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d0ee0:
    // 0x1d0ee0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d0ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1d0ee4:
    // 0x1d0ee4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d0ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d0ee8:
    // 0x1d0ee8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d0ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d0eec:
    // 0x1d0eec: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1d0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_1d0ef0:
    // 0x1d0ef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0ef4:
    // 0x1d0ef4: 0x2454000c  addiu       $s4, $v0, 0xC
    ctx->pc = 0x1d0ef4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1d0ef8:
    // 0x1d0ef8: 0xa2910000  sb          $s1, 0x0($s4)
    ctx->pc = 0x1d0ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 17));
label_1d0efc:
    // 0x1d0efc: 0xa2910001  sb          $s1, 0x1($s4)
    ctx->pc = 0x1d0efcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 17));
label_1d0f00:
    // 0x1d0f00: 0xa2910002  sb          $s1, 0x2($s4)
    ctx->pc = 0x1d0f00u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 17));
label_1d0f04:
    // 0x1d0f04: 0xa2910003  sb          $s1, 0x3($s4)
    ctx->pc = 0x1d0f04u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 17));
label_1d0f08:
    // 0x1d0f08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d0f0c:
    // 0x1d0f0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0f10:
    // 0x1d0f10: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d0f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d0f14:
    // 0x1d0f14: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d0f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1d0f18:
    // 0x1d0f18: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d0f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d0f1c:
    // 0x1d0f1c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d0f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d0f20:
    // 0x1d0f20: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1d0f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_1d0f24:
    // 0x1d0f24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0f28:
    // 0x1d0f28: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1d0f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_1d0f2c:
    // 0x1d0f2c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d0f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1d0f30:
    // 0x1d0f30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0f34:
    // 0x1d0f34: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d0f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d0f38:
    // 0x1d0f38: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d0f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1d0f3c:
    // 0x1d0f3c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d0f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d0f40:
    // 0x1d0f40: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d0f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d0f44:
    // 0x1d0f44: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1d0f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_1d0f48:
    // 0x1d0f48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0f4c:
    // 0x1d0f4c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1d0f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_1d0f50:
    // 0x1d0f50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d0f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d0f54:
    // 0x1d0f54: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d0f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1d0f58:
    // 0x1d0f58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0f5c:
    // 0x1d0f5c: 0x0  nop
    ctx->pc = 0x1d0f5cu;
    // NOP
label_1d0f60:
    // 0x1d0f60: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1d0f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1d0f64:
    // 0x1d0f64: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d0f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1d0f68:
    // 0x1d0f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0f6c:
    // 0x1d0f6c: 0x0  nop
    ctx->pc = 0x1d0f6cu;
    // NOP
label_1d0f70:
    // 0x1d0f70: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1d0f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_1d0f74:
    // 0x1d0f74: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d0f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1d0f78:
    // 0x1d0f78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0f7c:
    // 0x1d0f7c: 0x0  nop
    ctx->pc = 0x1d0f7cu;
    // NOP
label_1d0f80:
    // 0x1d0f80: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1d0f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1d0f84:
    // 0x1d0f84: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d0f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d0f88:
    // 0x1d0f88: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d0f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1d0f8c:
    // 0x1d0f8c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d0f90:
    // 0x1d0f90: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d0f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d0f94:
    // 0x1d0f94: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1d0f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_1d0f98:
    // 0x1d0f98: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1d0f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0f9c:
    // 0x1d0f9c: 0x27a50138  addiu       $a1, $sp, 0x138
    ctx->pc = 0x1d0f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_1d0fa0:
    // 0x1d0fa0: 0xc041d58  jal         func_107560
label_1d0fa4:
    if (ctx->pc == 0x1D0FA4u) {
        ctx->pc = 0x1D0FA8u;
        goto label_1d0fa8;
    }
    ctx->pc = 0x1D0FA0u;
    SET_GPR_U32(ctx, 31, 0x1D0FA8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x1D0FA0u, 0x1D0FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0FA8u;
label_1d0fa8:
    // 0x1d0fa8: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d0fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d0fac:
    // 0x1d0fac: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d0facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1d0fb0:
    // 0x1d0fb0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d0fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d0fb4:
    // 0x1d0fb4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d0fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d0fb8:
    // 0x1d0fb8: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1d0fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_1d0fbc:
    // 0x1d0fbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0fc0:
    // 0x1d0fc0: 0x2453000c  addiu       $s3, $v0, 0xC
    ctx->pc = 0x1d0fc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1d0fc4:
    // 0x1d0fc4: 0xa2710000  sb          $s1, 0x0($s3)
    ctx->pc = 0x1d0fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 17));
label_1d0fc8:
    // 0x1d0fc8: 0xa2710001  sb          $s1, 0x1($s3)
    ctx->pc = 0x1d0fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 17));
label_1d0fcc:
    // 0x1d0fcc: 0xa2710002  sb          $s1, 0x2($s3)
    ctx->pc = 0x1d0fccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 17));
label_1d0fd0:
    // 0x1d0fd0: 0xa2710003  sb          $s1, 0x3($s3)
    ctx->pc = 0x1d0fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 17));
label_1d0fd4:
    // 0x1d0fd4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d0fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1d0fd8:
    // 0x1d0fd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0fdc:
    // 0x1d0fdc: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d0fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d0fe0:
    // 0x1d0fe0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d0fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1d0fe4:
    // 0x1d0fe4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d0fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d0fe8:
    // 0x1d0fe8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d0fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d0fec:
    // 0x1d0fec: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1d0fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_1d0ff0:
    // 0x1d0ff0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0ff4:
    // 0x1d0ff4: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1d0ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_1d0ff8:
    // 0x1d0ff8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d0ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d0ffc:
    // 0x1d0ffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1000:
    // 0x1d1000: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d1000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d1004:
    // 0x1d1004: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d1004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1d1008:
    // 0x1d1008: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d1008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d100c:
    // 0x1d100c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d100cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d1010:
    // 0x1d1010: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1d1010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_1d1014:
    // 0x1d1014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d1014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d1018:
    // 0x1d1018: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1d1018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_1d101c:
    // 0x1d101c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d101cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d1020:
    // 0x1d1020: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d1020u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d1024:
    // 0x1d1024: 0x25e102b  sltu        $v0, $s2, $fp
    ctx->pc = 0x1d1024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_1d1028:
    // 0x1d1028: 0x1440ff64  bnez        $v0, . + 4 + (-0x9C << 2)
label_1d102c:
    if (ctx->pc == 0x1D102Cu) {
        ctx->pc = 0x1D1030u;
        goto label_1d1030;
    }
    ctx->pc = 0x1D1028u;
    {
        const bool branch_taken_0x1d1028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1028) {
            ctx->pc = 0x1D0DBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0dbc;
        }
    }
    ctx->pc = 0x1D1030u;
label_1d1030:
    // 0x1d1030: 0xc090864  jal         func_242190
label_1d1034:
    if (ctx->pc == 0x1D1034u) {
        ctx->pc = 0x1D1038u;
        goto label_1d1038;
    }
    ctx->pc = 0x1D1030u;
    SET_GPR_U32(ctx, 31, 0x1D1038u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x1D1030u, 0x1D1038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1038u;
label_1d1038:
    // 0x1d1038: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d1038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d103c:
    // 0x1d103c: 0xc0905a0  jal         func_241680
label_1d1040:
    if (ctx->pc == 0x1D1040u) {
        ctx->pc = 0x1D1044u;
        goto label_1d1044;
    }
    ctx->pc = 0x1D103Cu;
    SET_GPR_U32(ctx, 31, 0x1D1044u);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x1D103Cu, 0x1D1044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1044u;
label_1d1044:
    // 0x1d1044: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1d1044u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1048:
    // 0x1d1048: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d1048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d104c:
    // 0x1d104c: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x1d104cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
label_1d1050:
    // 0x1d1050: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d1050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d1054:
    // 0x1d1054: 0xc068358  jal         func_1A0D60
label_1d1058:
    if (ctx->pc == 0x1D1058u) {
        ctx->pc = 0x1D105Cu;
        goto label_1d105c;
    }
    ctx->pc = 0x1D1054u;
    SET_GPR_U32(ctx, 31, 0x1D105Cu);
    ctx->pc = 0x1A0D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D60u, 0x1D1054u, 0x1D105Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D105Cu;
label_1d105c:
    // 0x1d105c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d105cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d1060:
    // 0x1d1060: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d1060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1d1064:
    // 0x1d1064: 0x24a57a70  addiu       $a1, $a1, 0x7A70
    ctx->pc = 0x1d1064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31344));
label_1d1068:
    // 0x1d1068: 0xc09a364  jal         func_268D90
label_1d106c:
    if (ctx->pc == 0x1D106Cu) {
        ctx->pc = 0x1D1070u;
        goto label_1d1070;
    }
    ctx->pc = 0x1D1068u;
    SET_GPR_U32(ctx, 31, 0x1D1070u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x1D1068u, 0x1D1070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1070u;
label_1d1070:
    // 0x1d1070: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1d1070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_1d1074:
    // 0x1d1074: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d1074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d1078:
    // 0x1d1078: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x1d1078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
label_1d107c:
    // 0x1d107c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d107cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1080:
    // 0x1d1080: 0xc068170  jal         func_1A05C0
label_1d1084:
    if (ctx->pc == 0x1D1084u) {
        ctx->pc = 0x1D1088u;
        goto label_1d1088;
    }
    ctx->pc = 0x1D1080u;
    SET_GPR_U32(ctx, 31, 0x1D1088u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1D1080u, 0x1D1088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1088u;
label_1d1088:
    // 0x1d1088: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x1d1088u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1d108c:
    // 0x1d108c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d108cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1d1090:
    // 0x1d1090: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d1090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d1094:
    // 0x1d1094: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d1094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1d1098:
    // 0x1d1098: 0x24a57a80  addiu       $a1, $a1, 0x7A80
    ctx->pc = 0x1d1098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31360));
label_1d109c:
    // 0x1d109c: 0xc09a364  jal         func_268D90
label_1d10a0:
    if (ctx->pc == 0x1D10A0u) {
        ctx->pc = 0x1D10A4u;
        goto label_1d10a4;
    }
    ctx->pc = 0x1D109Cu;
    SET_GPR_U32(ctx, 31, 0x1D10A4u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x1D109Cu, 0x1D10A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D10A4u;
label_1d10a4:
    // 0x1d10a4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1d10a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_1d10a8:
    // 0x1d10a8: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d10a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d10ac:
    // 0x1d10ac: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x1d10acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
label_1d10b0:
    // 0x1d10b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d10b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d10b4:
    // 0x1d10b4: 0xc068170  jal         func_1A05C0
label_1d10b8:
    if (ctx->pc == 0x1D10B8u) {
        ctx->pc = 0x1D10BCu;
        goto label_1d10bc;
    }
    ctx->pc = 0x1D10B4u;
    SET_GPR_U32(ctx, 31, 0x1D10BCu);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1D10B4u, 0x1D10BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D10BCu;
label_1d10bc:
    // 0x1d10bc: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x1d10bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1d10c0:
    // 0x1d10c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d10c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1d10c4:
    // 0x1d10c4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d10c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d10c8:
    // 0x1d10c8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d10c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1d10cc:
    // 0x1d10cc: 0x24a57a90  addiu       $a1, $a1, 0x7A90
    ctx->pc = 0x1d10ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31376));
label_1d10d0:
    // 0x1d10d0: 0xc09a364  jal         func_268D90
label_1d10d4:
    if (ctx->pc == 0x1D10D4u) {
        ctx->pc = 0x1D10D8u;
        goto label_1d10d8;
    }
    ctx->pc = 0x1D10D0u;
    SET_GPR_U32(ctx, 31, 0x1D10D8u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x1D10D0u, 0x1D10D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D10D8u;
label_1d10d8:
    // 0x1d10d8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1d10d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_1d10dc:
    // 0x1d10dc: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d10dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d10e0:
    // 0x1d10e0: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x1d10e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
label_1d10e4:
    // 0x1d10e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d10e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d10e8:
    // 0x1d10e8: 0xc068170  jal         func_1A05C0
label_1d10ec:
    if (ctx->pc == 0x1D10ECu) {
        ctx->pc = 0x1D10F0u;
        goto label_1d10f0;
    }
    ctx->pc = 0x1D10E8u;
    SET_GPR_U32(ctx, 31, 0x1D10F0u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1D10E8u, 0x1D10F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D10F0u;
label_1d10f0:
    // 0x1d10f0: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x1d10f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1d10f4:
    // 0x1d10f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d10f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1d10f8:
    // 0x1d10f8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d10f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d10fc:
    // 0x1d10fc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d10fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1d1100:
    // 0x1d1100: 0x24a57aa0  addiu       $a1, $a1, 0x7AA0
    ctx->pc = 0x1d1100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31392));
label_1d1104:
    // 0x1d1104: 0xc09a364  jal         func_268D90
label_1d1108:
    if (ctx->pc == 0x1D1108u) {
        ctx->pc = 0x1D110Cu;
        goto label_1d110c;
    }
    ctx->pc = 0x1D1104u;
    SET_GPR_U32(ctx, 31, 0x1D110Cu);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x1D1104u, 0x1D110Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D110Cu;
label_1d110c:
    // 0x1d110c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1d110cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_1d1110:
    // 0x1d1110: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d1110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d1114:
    // 0x1d1114: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x1d1114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
label_1d1118:
    // 0x1d1118: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d1118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d111c:
    // 0x1d111c: 0xc068170  jal         func_1A05C0
label_1d1120:
    if (ctx->pc == 0x1D1120u) {
        ctx->pc = 0x1D1124u;
        goto label_1d1124;
    }
    ctx->pc = 0x1D111Cu;
    SET_GPR_U32(ctx, 31, 0x1D1124u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1D111Cu, 0x1D1124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1124u;
label_1d1124:
    // 0x1d1124: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x1d1124u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1d1128:
    // 0x1d1128: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d1128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1d112c:
    // 0x1d112c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d112cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1130:
    // 0x1d1130: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d1130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d1134:
    // 0x1d1134: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1d1134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_1d1138:
    // 0x1d1138: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d1138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d113c:
    // 0x1d113c: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x1d113cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_1d1140:
    // 0x1d1140: 0x27a40128  addiu       $a0, $sp, 0x128
    ctx->pc = 0x1d1140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_1d1144:
    // 0x1d1144: 0xc09ac08  jal         func_26B020
label_1d1148:
    if (ctx->pc == 0x1D1148u) {
        ctx->pc = 0x1D114Cu;
        goto label_1d114c;
    }
    ctx->pc = 0x1D1144u;
    SET_GPR_U32(ctx, 31, 0x1D114Cu);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x1D1144u, 0x1D114Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D114Cu;
label_1d114c:
    // 0x1d114c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d1150:
    // 0x1d1150: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x1d1150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
label_1d1154:
    // 0x1d1154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1158:
    // 0x1d1158: 0xc068170  jal         func_1A05C0
label_1d115c:
    if (ctx->pc == 0x1D115Cu) {
        ctx->pc = 0x1D1160u;
        goto label_1d1160;
    }
    ctx->pc = 0x1D1158u;
    SET_GPR_U32(ctx, 31, 0x1D1160u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1D1158u, 0x1D1160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1160u;
label_1d1160:
    // 0x1d1160: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d1160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d1164:
    // 0x1d1164: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x1d1164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_1d1168:
    // 0x1d1168: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x1d1168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_1d116c:
    // 0x1d116c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1d116cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1d1170:
    // 0x1d1170: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d1170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d1174:
    // 0x1d1174: 0x27a50128  addiu       $a1, $sp, 0x128
    ctx->pc = 0x1d1174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_1d1178:
    // 0x1d1178: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d1178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d117c:
    // 0x1d117c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d117cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1180:
    // 0x1d1180: 0xc0af03c  jal         func_2BC0F0
label_1d1184:
    if (ctx->pc == 0x1D1184u) {
        ctx->pc = 0x1D1188u;
        goto label_1d1188;
    }
    ctx->pc = 0x1D1180u;
    SET_GPR_U32(ctx, 31, 0x1D1188u);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x1D1180u, 0x1D1188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1188u;
label_1d1188:
    // 0x1d1188: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1d118c:
    if (ctx->pc == 0x1D118Cu) {
        ctx->pc = 0x1D1190u;
        goto label_1d1190;
    }
    ctx->pc = 0x1D1188u;
    {
        const bool branch_taken_0x1d1188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1188) {
            ctx->pc = 0x1D1288u;
            goto label_1d1288;
        }
    }
    ctx->pc = 0x1D1190u;
label_1d1190:
    // 0x1d1190: 0x8f84bb70  lw          $a0, -0x4490($gp)
    ctx->pc = 0x1d1190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1d1194:
    // 0x1d1194: 0x24850060  addiu       $a1, $a0, 0x60
    ctx->pc = 0x1d1194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_1d1198:
    // 0x1d1198: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d1198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d119c:
    // 0x1d119c: 0xc050ee0  jal         func_143B80
label_1d11a0:
    if (ctx->pc == 0x1D11A0u) {
        ctx->pc = 0x1D11A4u;
        goto label_1d11a4;
    }
    ctx->pc = 0x1D119Cu;
    SET_GPR_U32(ctx, 31, 0x1D11A4u);
    ctx->pc = 0x143B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B80u, 0x1D119Cu, 0x1D11A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D11A4u;
label_1d11a4:
    // 0x1d11a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d11a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d11a8:
    // 0x1d11a8: 0x14c00032  bnez        $a2, . + 4 + (0x32 << 2)
label_1d11ac:
    if (ctx->pc == 0x1D11ACu) {
        ctx->pc = 0x1D11B0u;
        goto label_1d11b0;
    }
    ctx->pc = 0x1D11A8u;
    {
        const bool branch_taken_0x1d11a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d11a8) {
            ctx->pc = 0x1D1274u;
            goto label_1d1274;
        }
    }
    ctx->pc = 0x1D11B0u;
label_1d11b0:
    // 0x1d11b0: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d11b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d11b4:
    // 0x1d11b4: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x1d11b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
label_1d11b8:
    // 0x1d11b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d11b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d11bc:
    // 0x1d11bc: 0xc068170  jal         func_1A05C0
label_1d11c0:
    if (ctx->pc == 0x1D11C0u) {
        ctx->pc = 0x1D11C4u;
        goto label_1d11c4;
    }
    ctx->pc = 0x1D11BCu;
    SET_GPR_U32(ctx, 31, 0x1D11C4u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1D11BCu, 0x1D11C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D11C4u;
label_1d11c4:
    // 0x1d11c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d11c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d11c8:
    // 0x1d11c8: 0xc041a70  jal         func_1069C0
label_1d11cc:
    if (ctx->pc == 0x1D11CCu) {
        ctx->pc = 0x1D11D0u;
        goto label_1d11d0;
    }
    ctx->pc = 0x1D11C8u;
    SET_GPR_U32(ctx, 31, 0x1D11D0u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x1D11C8u, 0x1D11D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D11D0u;
label_1d11d0:
    // 0x1d11d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d11d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d11d4:
    // 0x1d11d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d11d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d11d8:
    // 0x1d11d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d11d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d11dc:
    // 0x1d11dc: 0xc068c94  jal         func_1A3250
label_1d11e0:
    if (ctx->pc == 0x1D11E0u) {
        ctx->pc = 0x1D11E4u;
        goto label_1d11e4;
    }
    ctx->pc = 0x1D11DCu;
    SET_GPR_U32(ctx, 31, 0x1D11E4u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x1D11DCu, 0x1D11E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D11E4u;
label_1d11e4:
    // 0x1d11e4: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1d11e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_1d11e8:
    // 0x1d11e8: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1d11e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1d11ec:
    // 0x1d11ec: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1d11ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_1d11f0:
    // 0x1d11f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d11f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d11f4:
    // 0x1d11f4: 0xc041b38  jal         func_106CE0
label_1d11f8:
    if (ctx->pc == 0x1D11F8u) {
        ctx->pc = 0x1D11FCu;
        goto label_1d11fc;
    }
    ctx->pc = 0x1D11F4u;
    SET_GPR_U32(ctx, 31, 0x1D11FCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D11F4u, 0x1D11FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D11FCu;
label_1d11fc:
    // 0x1d11fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d11fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1200:
    // 0x1d1200: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x1d1200u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1d1204:
    // 0x1d1204: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d1204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d1208:
    // 0x1d1208: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d1208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d120c:
    // 0x1d120c: 0x240204bd  addiu       $v0, $zero, 0x4BD
    ctx->pc = 0x1d120cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1213));
label_1d1210:
    // 0x1d1210: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d1210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1214:
    // 0x1d1214: 0xc0433dc  jal         func_10CF70
label_1d1218:
    if (ctx->pc == 0x1D1218u) {
        ctx->pc = 0x1D121Cu;
        goto label_1d121c;
    }
    ctx->pc = 0x1D1214u;
    SET_GPR_U32(ctx, 31, 0x1D121Cu);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x1D1214u, 0x1D121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D121Cu;
label_1d121c:
    // 0x1d121c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d121cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1220:
    // 0x1d1220: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x1d1220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_1d1224:
    // 0x1d1224: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d1224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1228:
    // 0x1d1228: 0xc09ac08  jal         func_26B020
label_1d122c:
    if (ctx->pc == 0x1D122Cu) {
        ctx->pc = 0x1D1230u;
        goto label_1d1230;
    }
    ctx->pc = 0x1D1228u;
    SET_GPR_U32(ctx, 31, 0x1D1230u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x1D1228u, 0x1D1230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1230u;
label_1d1230:
    // 0x1d1230: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1d1230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d1234:
    // 0x1d1234: 0x2485012c  addiu       $a1, $a0, 0x12C
    ctx->pc = 0x1d1234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 300));
label_1d1238:
    // 0x1d1238: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d1238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d123c:
    // 0x1d123c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d123cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d1240:
    // 0x1d1240: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d1240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1244:
    // 0x1d1244: 0xc068170  jal         func_1A05C0
label_1d1248:
    if (ctx->pc == 0x1D1248u) {
        ctx->pc = 0x1D124Cu;
        goto label_1d124c;
    }
    ctx->pc = 0x1D1244u;
    SET_GPR_U32(ctx, 31, 0x1D124Cu);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1D1244u, 0x1D124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D124Cu;
label_1d124c:
    // 0x1d124c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d124cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1250:
    // 0x1d1250: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1d1250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d1254:
    // 0x1d1254: 0xafa5011c  sw          $a1, 0x11C($sp)
    ctx->pc = 0x1d1254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 5));
label_1d1258:
    // 0x1d1258: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1d1258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1d125c:
    // 0x1d125c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d125cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d1260:
    // 0x1d1260: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x1d1260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_1d1264:
    // 0x1d1264: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d1264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1268:
    // 0x1d1268: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d1268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d126c:
    // 0x1d126c: 0xc0af028  jal         func_2BC0A0
label_1d1270:
    if (ctx->pc == 0x1D1270u) {
        ctx->pc = 0x1D1274u;
        goto label_1d1274;
    }
    ctx->pc = 0x1D126Cu;
    SET_GPR_U32(ctx, 31, 0x1D1274u);
    ctx->pc = 0x2BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0A0u, 0x1D126Cu, 0x1D1274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1274u;
label_1d1274:
    // 0x1d1274: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d1274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1d1278:
    // 0x1d1278: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x1d1278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
label_1d127c:
    // 0x1d127c: 0xc068454  jal         func_1A1150
label_1d1280:
    if (ctx->pc == 0x1D1280u) {
        ctx->pc = 0x1D1284u;
        goto label_1d1284;
    }
    ctx->pc = 0x1D127Cu;
    SET_GPR_U32(ctx, 31, 0x1D1284u);
    ctx->pc = 0x1A1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1150u, 0x1D127Cu, 0x1D1284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1284u;
label_1d1284:
    // 0x1d1284: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d1284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1288:
    // 0x1d1288: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1d1288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1d128c:
    // 0x1d128c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d128cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d1290:
    // 0x1d1290: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d1290u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d1294:
    // 0x1d1294: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d1294u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d1298:
    // 0x1d1298: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d1298u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d129c:
    // 0x1d129c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d129cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d12a0:
    // 0x1d12a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d12a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d12a4:
    // 0x1d12a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d12a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d12a8:
    // 0x1d12a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d12a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d12ac:
    // 0x1d12ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d12acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d12b0:
    // 0x1d12b0: 0x27bd01d0  addiu       $sp, $sp, 0x1D0
    ctx->pc = 0x1d12b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_1d12b4:
    // 0x1d12b4: 0x3e00008  jr          $ra
label_1d12b8:
    if (ctx->pc == 0x1D12B8u) {
        ctx->pc = 0x1D12BCu;
        goto label_1d12bc;
    }
    ctx->pc = 0x1D12B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D12B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D12BCu;
label_1d12bc:
    // 0x1d12bc: 0x0  nop
    ctx->pc = 0x1d12bcu;
    // NOP
    ctx->pc = 0x1d12c0u;
}
