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

// Function: sub_00473F80
// Address: 0x473f80 - 0x474750
void sub_00473F80_0x473f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473F80_0x473f80");
#endif

    switch (ctx->pc) {
        case 0x473f80u: goto label_473f80;
        case 0x473f84u: goto label_473f84;
        case 0x473f88u: goto label_473f88;
        case 0x473f8cu: goto label_473f8c;
        case 0x473f90u: goto label_473f90;
        case 0x473f94u: goto label_473f94;
        case 0x473f98u: goto label_473f98;
        case 0x473f9cu: goto label_473f9c;
        case 0x473fa0u: goto label_473fa0;
        case 0x473fa4u: goto label_473fa4;
        case 0x473fa8u: goto label_473fa8;
        case 0x473facu: goto label_473fac;
        case 0x473fb0u: goto label_473fb0;
        case 0x473fb4u: goto label_473fb4;
        case 0x473fb8u: goto label_473fb8;
        case 0x473fbcu: goto label_473fbc;
        case 0x473fc0u: goto label_473fc0;
        case 0x473fc4u: goto label_473fc4;
        case 0x473fc8u: goto label_473fc8;
        case 0x473fccu: goto label_473fcc;
        case 0x473fd0u: goto label_473fd0;
        case 0x473fd4u: goto label_473fd4;
        case 0x473fd8u: goto label_473fd8;
        case 0x473fdcu: goto label_473fdc;
        case 0x473fe0u: goto label_473fe0;
        case 0x473fe4u: goto label_473fe4;
        case 0x473fe8u: goto label_473fe8;
        case 0x473fecu: goto label_473fec;
        case 0x473ff0u: goto label_473ff0;
        case 0x473ff4u: goto label_473ff4;
        case 0x473ff8u: goto label_473ff8;
        case 0x473ffcu: goto label_473ffc;
        case 0x474000u: goto label_474000;
        case 0x474004u: goto label_474004;
        case 0x474008u: goto label_474008;
        case 0x47400cu: goto label_47400c;
        case 0x474010u: goto label_474010;
        case 0x474014u: goto label_474014;
        case 0x474018u: goto label_474018;
        case 0x47401cu: goto label_47401c;
        case 0x474020u: goto label_474020;
        case 0x474024u: goto label_474024;
        case 0x474028u: goto label_474028;
        case 0x47402cu: goto label_47402c;
        case 0x474030u: goto label_474030;
        case 0x474034u: goto label_474034;
        case 0x474038u: goto label_474038;
        case 0x47403cu: goto label_47403c;
        case 0x474040u: goto label_474040;
        case 0x474044u: goto label_474044;
        case 0x474048u: goto label_474048;
        case 0x47404cu: goto label_47404c;
        case 0x474050u: goto label_474050;
        case 0x474054u: goto label_474054;
        case 0x474058u: goto label_474058;
        case 0x47405cu: goto label_47405c;
        case 0x474060u: goto label_474060;
        case 0x474064u: goto label_474064;
        case 0x474068u: goto label_474068;
        case 0x47406cu: goto label_47406c;
        case 0x474070u: goto label_474070;
        case 0x474074u: goto label_474074;
        case 0x474078u: goto label_474078;
        case 0x47407cu: goto label_47407c;
        case 0x474080u: goto label_474080;
        case 0x474084u: goto label_474084;
        case 0x474088u: goto label_474088;
        case 0x47408cu: goto label_47408c;
        case 0x474090u: goto label_474090;
        case 0x474094u: goto label_474094;
        case 0x474098u: goto label_474098;
        case 0x47409cu: goto label_47409c;
        case 0x4740a0u: goto label_4740a0;
        case 0x4740a4u: goto label_4740a4;
        case 0x4740a8u: goto label_4740a8;
        case 0x4740acu: goto label_4740ac;
        case 0x4740b0u: goto label_4740b0;
        case 0x4740b4u: goto label_4740b4;
        case 0x4740b8u: goto label_4740b8;
        case 0x4740bcu: goto label_4740bc;
        case 0x4740c0u: goto label_4740c0;
        case 0x4740c4u: goto label_4740c4;
        case 0x4740c8u: goto label_4740c8;
        case 0x4740ccu: goto label_4740cc;
        case 0x4740d0u: goto label_4740d0;
        case 0x4740d4u: goto label_4740d4;
        case 0x4740d8u: goto label_4740d8;
        case 0x4740dcu: goto label_4740dc;
        case 0x4740e0u: goto label_4740e0;
        case 0x4740e4u: goto label_4740e4;
        case 0x4740e8u: goto label_4740e8;
        case 0x4740ecu: goto label_4740ec;
        case 0x4740f0u: goto label_4740f0;
        case 0x4740f4u: goto label_4740f4;
        case 0x4740f8u: goto label_4740f8;
        case 0x4740fcu: goto label_4740fc;
        case 0x474100u: goto label_474100;
        case 0x474104u: goto label_474104;
        case 0x474108u: goto label_474108;
        case 0x47410cu: goto label_47410c;
        case 0x474110u: goto label_474110;
        case 0x474114u: goto label_474114;
        case 0x474118u: goto label_474118;
        case 0x47411cu: goto label_47411c;
        case 0x474120u: goto label_474120;
        case 0x474124u: goto label_474124;
        case 0x474128u: goto label_474128;
        case 0x47412cu: goto label_47412c;
        case 0x474130u: goto label_474130;
        case 0x474134u: goto label_474134;
        case 0x474138u: goto label_474138;
        case 0x47413cu: goto label_47413c;
        case 0x474140u: goto label_474140;
        case 0x474144u: goto label_474144;
        case 0x474148u: goto label_474148;
        case 0x47414cu: goto label_47414c;
        case 0x474150u: goto label_474150;
        case 0x474154u: goto label_474154;
        case 0x474158u: goto label_474158;
        case 0x47415cu: goto label_47415c;
        case 0x474160u: goto label_474160;
        case 0x474164u: goto label_474164;
        case 0x474168u: goto label_474168;
        case 0x47416cu: goto label_47416c;
        case 0x474170u: goto label_474170;
        case 0x474174u: goto label_474174;
        case 0x474178u: goto label_474178;
        case 0x47417cu: goto label_47417c;
        case 0x474180u: goto label_474180;
        case 0x474184u: goto label_474184;
        case 0x474188u: goto label_474188;
        case 0x47418cu: goto label_47418c;
        case 0x474190u: goto label_474190;
        case 0x474194u: goto label_474194;
        case 0x474198u: goto label_474198;
        case 0x47419cu: goto label_47419c;
        case 0x4741a0u: goto label_4741a0;
        case 0x4741a4u: goto label_4741a4;
        case 0x4741a8u: goto label_4741a8;
        case 0x4741acu: goto label_4741ac;
        case 0x4741b0u: goto label_4741b0;
        case 0x4741b4u: goto label_4741b4;
        case 0x4741b8u: goto label_4741b8;
        case 0x4741bcu: goto label_4741bc;
        case 0x4741c0u: goto label_4741c0;
        case 0x4741c4u: goto label_4741c4;
        case 0x4741c8u: goto label_4741c8;
        case 0x4741ccu: goto label_4741cc;
        case 0x4741d0u: goto label_4741d0;
        case 0x4741d4u: goto label_4741d4;
        case 0x4741d8u: goto label_4741d8;
        case 0x4741dcu: goto label_4741dc;
        case 0x4741e0u: goto label_4741e0;
        case 0x4741e4u: goto label_4741e4;
        case 0x4741e8u: goto label_4741e8;
        case 0x4741ecu: goto label_4741ec;
        case 0x4741f0u: goto label_4741f0;
        case 0x4741f4u: goto label_4741f4;
        case 0x4741f8u: goto label_4741f8;
        case 0x4741fcu: goto label_4741fc;
        case 0x474200u: goto label_474200;
        case 0x474204u: goto label_474204;
        case 0x474208u: goto label_474208;
        case 0x47420cu: goto label_47420c;
        case 0x474210u: goto label_474210;
        case 0x474214u: goto label_474214;
        case 0x474218u: goto label_474218;
        case 0x47421cu: goto label_47421c;
        case 0x474220u: goto label_474220;
        case 0x474224u: goto label_474224;
        case 0x474228u: goto label_474228;
        case 0x47422cu: goto label_47422c;
        case 0x474230u: goto label_474230;
        case 0x474234u: goto label_474234;
        case 0x474238u: goto label_474238;
        case 0x47423cu: goto label_47423c;
        case 0x474240u: goto label_474240;
        case 0x474244u: goto label_474244;
        case 0x474248u: goto label_474248;
        case 0x47424cu: goto label_47424c;
        case 0x474250u: goto label_474250;
        case 0x474254u: goto label_474254;
        case 0x474258u: goto label_474258;
        case 0x47425cu: goto label_47425c;
        case 0x474260u: goto label_474260;
        case 0x474264u: goto label_474264;
        case 0x474268u: goto label_474268;
        case 0x47426cu: goto label_47426c;
        case 0x474270u: goto label_474270;
        case 0x474274u: goto label_474274;
        case 0x474278u: goto label_474278;
        case 0x47427cu: goto label_47427c;
        case 0x474280u: goto label_474280;
        case 0x474284u: goto label_474284;
        case 0x474288u: goto label_474288;
        case 0x47428cu: goto label_47428c;
        case 0x474290u: goto label_474290;
        case 0x474294u: goto label_474294;
        case 0x474298u: goto label_474298;
        case 0x47429cu: goto label_47429c;
        case 0x4742a0u: goto label_4742a0;
        case 0x4742a4u: goto label_4742a4;
        case 0x4742a8u: goto label_4742a8;
        case 0x4742acu: goto label_4742ac;
        case 0x4742b0u: goto label_4742b0;
        case 0x4742b4u: goto label_4742b4;
        case 0x4742b8u: goto label_4742b8;
        case 0x4742bcu: goto label_4742bc;
        case 0x4742c0u: goto label_4742c0;
        case 0x4742c4u: goto label_4742c4;
        case 0x4742c8u: goto label_4742c8;
        case 0x4742ccu: goto label_4742cc;
        case 0x4742d0u: goto label_4742d0;
        case 0x4742d4u: goto label_4742d4;
        case 0x4742d8u: goto label_4742d8;
        case 0x4742dcu: goto label_4742dc;
        case 0x4742e0u: goto label_4742e0;
        case 0x4742e4u: goto label_4742e4;
        case 0x4742e8u: goto label_4742e8;
        case 0x4742ecu: goto label_4742ec;
        case 0x4742f0u: goto label_4742f0;
        case 0x4742f4u: goto label_4742f4;
        case 0x4742f8u: goto label_4742f8;
        case 0x4742fcu: goto label_4742fc;
        case 0x474300u: goto label_474300;
        case 0x474304u: goto label_474304;
        case 0x474308u: goto label_474308;
        case 0x47430cu: goto label_47430c;
        case 0x474310u: goto label_474310;
        case 0x474314u: goto label_474314;
        case 0x474318u: goto label_474318;
        case 0x47431cu: goto label_47431c;
        case 0x474320u: goto label_474320;
        case 0x474324u: goto label_474324;
        case 0x474328u: goto label_474328;
        case 0x47432cu: goto label_47432c;
        case 0x474330u: goto label_474330;
        case 0x474334u: goto label_474334;
        case 0x474338u: goto label_474338;
        case 0x47433cu: goto label_47433c;
        case 0x474340u: goto label_474340;
        case 0x474344u: goto label_474344;
        case 0x474348u: goto label_474348;
        case 0x47434cu: goto label_47434c;
        case 0x474350u: goto label_474350;
        case 0x474354u: goto label_474354;
        case 0x474358u: goto label_474358;
        case 0x47435cu: goto label_47435c;
        case 0x474360u: goto label_474360;
        case 0x474364u: goto label_474364;
        case 0x474368u: goto label_474368;
        case 0x47436cu: goto label_47436c;
        case 0x474370u: goto label_474370;
        case 0x474374u: goto label_474374;
        case 0x474378u: goto label_474378;
        case 0x47437cu: goto label_47437c;
        case 0x474380u: goto label_474380;
        case 0x474384u: goto label_474384;
        case 0x474388u: goto label_474388;
        case 0x47438cu: goto label_47438c;
        case 0x474390u: goto label_474390;
        case 0x474394u: goto label_474394;
        case 0x474398u: goto label_474398;
        case 0x47439cu: goto label_47439c;
        case 0x4743a0u: goto label_4743a0;
        case 0x4743a4u: goto label_4743a4;
        case 0x4743a8u: goto label_4743a8;
        case 0x4743acu: goto label_4743ac;
        case 0x4743b0u: goto label_4743b0;
        case 0x4743b4u: goto label_4743b4;
        case 0x4743b8u: goto label_4743b8;
        case 0x4743bcu: goto label_4743bc;
        case 0x4743c0u: goto label_4743c0;
        case 0x4743c4u: goto label_4743c4;
        case 0x4743c8u: goto label_4743c8;
        case 0x4743ccu: goto label_4743cc;
        case 0x4743d0u: goto label_4743d0;
        case 0x4743d4u: goto label_4743d4;
        case 0x4743d8u: goto label_4743d8;
        case 0x4743dcu: goto label_4743dc;
        case 0x4743e0u: goto label_4743e0;
        case 0x4743e4u: goto label_4743e4;
        case 0x4743e8u: goto label_4743e8;
        case 0x4743ecu: goto label_4743ec;
        case 0x4743f0u: goto label_4743f0;
        case 0x4743f4u: goto label_4743f4;
        case 0x4743f8u: goto label_4743f8;
        case 0x4743fcu: goto label_4743fc;
        case 0x474400u: goto label_474400;
        case 0x474404u: goto label_474404;
        case 0x474408u: goto label_474408;
        case 0x47440cu: goto label_47440c;
        case 0x474410u: goto label_474410;
        case 0x474414u: goto label_474414;
        case 0x474418u: goto label_474418;
        case 0x47441cu: goto label_47441c;
        case 0x474420u: goto label_474420;
        case 0x474424u: goto label_474424;
        case 0x474428u: goto label_474428;
        case 0x47442cu: goto label_47442c;
        case 0x474430u: goto label_474430;
        case 0x474434u: goto label_474434;
        case 0x474438u: goto label_474438;
        case 0x47443cu: goto label_47443c;
        case 0x474440u: goto label_474440;
        case 0x474444u: goto label_474444;
        case 0x474448u: goto label_474448;
        case 0x47444cu: goto label_47444c;
        case 0x474450u: goto label_474450;
        case 0x474454u: goto label_474454;
        case 0x474458u: goto label_474458;
        case 0x47445cu: goto label_47445c;
        case 0x474460u: goto label_474460;
        case 0x474464u: goto label_474464;
        case 0x474468u: goto label_474468;
        case 0x47446cu: goto label_47446c;
        case 0x474470u: goto label_474470;
        case 0x474474u: goto label_474474;
        case 0x474478u: goto label_474478;
        case 0x47447cu: goto label_47447c;
        case 0x474480u: goto label_474480;
        case 0x474484u: goto label_474484;
        case 0x474488u: goto label_474488;
        case 0x47448cu: goto label_47448c;
        case 0x474490u: goto label_474490;
        case 0x474494u: goto label_474494;
        case 0x474498u: goto label_474498;
        case 0x47449cu: goto label_47449c;
        case 0x4744a0u: goto label_4744a0;
        case 0x4744a4u: goto label_4744a4;
        case 0x4744a8u: goto label_4744a8;
        case 0x4744acu: goto label_4744ac;
        case 0x4744b0u: goto label_4744b0;
        case 0x4744b4u: goto label_4744b4;
        case 0x4744b8u: goto label_4744b8;
        case 0x4744bcu: goto label_4744bc;
        case 0x4744c0u: goto label_4744c0;
        case 0x4744c4u: goto label_4744c4;
        case 0x4744c8u: goto label_4744c8;
        case 0x4744ccu: goto label_4744cc;
        case 0x4744d0u: goto label_4744d0;
        case 0x4744d4u: goto label_4744d4;
        case 0x4744d8u: goto label_4744d8;
        case 0x4744dcu: goto label_4744dc;
        case 0x4744e0u: goto label_4744e0;
        case 0x4744e4u: goto label_4744e4;
        case 0x4744e8u: goto label_4744e8;
        case 0x4744ecu: goto label_4744ec;
        case 0x4744f0u: goto label_4744f0;
        case 0x4744f4u: goto label_4744f4;
        case 0x4744f8u: goto label_4744f8;
        case 0x4744fcu: goto label_4744fc;
        case 0x474500u: goto label_474500;
        case 0x474504u: goto label_474504;
        case 0x474508u: goto label_474508;
        case 0x47450cu: goto label_47450c;
        case 0x474510u: goto label_474510;
        case 0x474514u: goto label_474514;
        case 0x474518u: goto label_474518;
        case 0x47451cu: goto label_47451c;
        case 0x474520u: goto label_474520;
        case 0x474524u: goto label_474524;
        case 0x474528u: goto label_474528;
        case 0x47452cu: goto label_47452c;
        case 0x474530u: goto label_474530;
        case 0x474534u: goto label_474534;
        case 0x474538u: goto label_474538;
        case 0x47453cu: goto label_47453c;
        case 0x474540u: goto label_474540;
        case 0x474544u: goto label_474544;
        case 0x474548u: goto label_474548;
        case 0x47454cu: goto label_47454c;
        case 0x474550u: goto label_474550;
        case 0x474554u: goto label_474554;
        case 0x474558u: goto label_474558;
        case 0x47455cu: goto label_47455c;
        case 0x474560u: goto label_474560;
        case 0x474564u: goto label_474564;
        case 0x474568u: goto label_474568;
        case 0x47456cu: goto label_47456c;
        case 0x474570u: goto label_474570;
        case 0x474574u: goto label_474574;
        case 0x474578u: goto label_474578;
        case 0x47457cu: goto label_47457c;
        case 0x474580u: goto label_474580;
        case 0x474584u: goto label_474584;
        case 0x474588u: goto label_474588;
        case 0x47458cu: goto label_47458c;
        case 0x474590u: goto label_474590;
        case 0x474594u: goto label_474594;
        case 0x474598u: goto label_474598;
        case 0x47459cu: goto label_47459c;
        case 0x4745a0u: goto label_4745a0;
        case 0x4745a4u: goto label_4745a4;
        case 0x4745a8u: goto label_4745a8;
        case 0x4745acu: goto label_4745ac;
        case 0x4745b0u: goto label_4745b0;
        case 0x4745b4u: goto label_4745b4;
        case 0x4745b8u: goto label_4745b8;
        case 0x4745bcu: goto label_4745bc;
        case 0x4745c0u: goto label_4745c0;
        case 0x4745c4u: goto label_4745c4;
        case 0x4745c8u: goto label_4745c8;
        case 0x4745ccu: goto label_4745cc;
        case 0x4745d0u: goto label_4745d0;
        case 0x4745d4u: goto label_4745d4;
        case 0x4745d8u: goto label_4745d8;
        case 0x4745dcu: goto label_4745dc;
        case 0x4745e0u: goto label_4745e0;
        case 0x4745e4u: goto label_4745e4;
        case 0x4745e8u: goto label_4745e8;
        case 0x4745ecu: goto label_4745ec;
        case 0x4745f0u: goto label_4745f0;
        case 0x4745f4u: goto label_4745f4;
        case 0x4745f8u: goto label_4745f8;
        case 0x4745fcu: goto label_4745fc;
        case 0x474600u: goto label_474600;
        case 0x474604u: goto label_474604;
        case 0x474608u: goto label_474608;
        case 0x47460cu: goto label_47460c;
        case 0x474610u: goto label_474610;
        case 0x474614u: goto label_474614;
        case 0x474618u: goto label_474618;
        case 0x47461cu: goto label_47461c;
        case 0x474620u: goto label_474620;
        case 0x474624u: goto label_474624;
        case 0x474628u: goto label_474628;
        case 0x47462cu: goto label_47462c;
        case 0x474630u: goto label_474630;
        case 0x474634u: goto label_474634;
        case 0x474638u: goto label_474638;
        case 0x47463cu: goto label_47463c;
        case 0x474640u: goto label_474640;
        case 0x474644u: goto label_474644;
        case 0x474648u: goto label_474648;
        case 0x47464cu: goto label_47464c;
        case 0x474650u: goto label_474650;
        case 0x474654u: goto label_474654;
        case 0x474658u: goto label_474658;
        case 0x47465cu: goto label_47465c;
        case 0x474660u: goto label_474660;
        case 0x474664u: goto label_474664;
        case 0x474668u: goto label_474668;
        case 0x47466cu: goto label_47466c;
        case 0x474670u: goto label_474670;
        case 0x474674u: goto label_474674;
        case 0x474678u: goto label_474678;
        case 0x47467cu: goto label_47467c;
        case 0x474680u: goto label_474680;
        case 0x474684u: goto label_474684;
        case 0x474688u: goto label_474688;
        case 0x47468cu: goto label_47468c;
        case 0x474690u: goto label_474690;
        case 0x474694u: goto label_474694;
        case 0x474698u: goto label_474698;
        case 0x47469cu: goto label_47469c;
        case 0x4746a0u: goto label_4746a0;
        case 0x4746a4u: goto label_4746a4;
        case 0x4746a8u: goto label_4746a8;
        case 0x4746acu: goto label_4746ac;
        case 0x4746b0u: goto label_4746b0;
        case 0x4746b4u: goto label_4746b4;
        case 0x4746b8u: goto label_4746b8;
        case 0x4746bcu: goto label_4746bc;
        case 0x4746c0u: goto label_4746c0;
        case 0x4746c4u: goto label_4746c4;
        case 0x4746c8u: goto label_4746c8;
        case 0x4746ccu: goto label_4746cc;
        case 0x4746d0u: goto label_4746d0;
        case 0x4746d4u: goto label_4746d4;
        case 0x4746d8u: goto label_4746d8;
        case 0x4746dcu: goto label_4746dc;
        case 0x4746e0u: goto label_4746e0;
        case 0x4746e4u: goto label_4746e4;
        case 0x4746e8u: goto label_4746e8;
        case 0x4746ecu: goto label_4746ec;
        case 0x4746f0u: goto label_4746f0;
        case 0x4746f4u: goto label_4746f4;
        case 0x4746f8u: goto label_4746f8;
        case 0x4746fcu: goto label_4746fc;
        case 0x474700u: goto label_474700;
        case 0x474704u: goto label_474704;
        case 0x474708u: goto label_474708;
        case 0x47470cu: goto label_47470c;
        case 0x474710u: goto label_474710;
        case 0x474714u: goto label_474714;
        case 0x474718u: goto label_474718;
        case 0x47471cu: goto label_47471c;
        case 0x474720u: goto label_474720;
        case 0x474724u: goto label_474724;
        case 0x474728u: goto label_474728;
        case 0x47472cu: goto label_47472c;
        case 0x474730u: goto label_474730;
        case 0x474734u: goto label_474734;
        case 0x474738u: goto label_474738;
        case 0x47473cu: goto label_47473c;
        case 0x474740u: goto label_474740;
        case 0x474744u: goto label_474744;
        case 0x474748u: goto label_474748;
        case 0x47474cu: goto label_47474c;
        default: break;
    }

    ctx->pc = 0x473f80u;

label_473f80:
    // 0x473f80: 0x27bdfab0  addiu       $sp, $sp, -0x550
    ctx->pc = 0x473f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965936));
label_473f84:
    // 0x473f84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x473f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_473f88:
    // 0x473f88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x473f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_473f8c:
    // 0x473f8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x473f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_473f90:
    // 0x473f90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x473f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_473f94:
    // 0x473f94: 0xafa40510  sw          $a0, 0x510($sp)
    ctx->pc = 0x473f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1296), GPR_U32(ctx, 4));
label_473f98:
    // 0x473f98: 0xafa50520  sw          $a1, 0x520($sp)
    ctx->pc = 0x473f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1312), GPR_U32(ctx, 5));
label_473f9c:
    // 0x473f9c: 0xe7ac0530  swc1        $f12, 0x530($sp)
    ctx->pc = 0x473f9cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1328), bits); }
label_473fa0:
    // 0x473fa0: 0xafa60540  sw          $a2, 0x540($sp)
    ctx->pc = 0x473fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 6));
label_473fa4:
    // 0x473fa4: 0xc11c1fc  jal         func_4707F0
label_473fa8:
    if (ctx->pc == 0x473FA8u) {
        ctx->pc = 0x473FACu;
        goto label_473fac;
    }
    ctx->pc = 0x473FA4u;
    SET_GPR_U32(ctx, 31, 0x473FACu);
    ctx->pc = 0x4707F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4707F0u, 0x473FA4u, 0x473FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473FACu;
label_473fac:
    // 0x473fac: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_473fb0:
    if (ctx->pc == 0x473FB0u) {
        ctx->pc = 0x473FB4u;
        goto label_473fb4;
    }
    ctx->pc = 0x473FACu;
    {
        const bool branch_taken_0x473fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x473fac) {
            ctx->pc = 0x47405Cu;
            goto label_47405c;
        }
    }
    ctx->pc = 0x473FB4u;
label_473fb4:
    // 0x473fb4: 0x8f82b408  lw          $v0, -0x4BF8($gp)
    ctx->pc = 0x473fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947848)));
label_473fb8:
    // 0x473fb8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_473fbc:
    if (ctx->pc == 0x473FBCu) {
        ctx->pc = 0x473FC0u;
        goto label_473fc0;
    }
    ctx->pc = 0x473FB8u;
    {
        const bool branch_taken_0x473fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473fb8) {
            ctx->pc = 0x47405Cu;
            goto label_47405c;
        }
    }
    ctx->pc = 0x473FC0u;
label_473fc0:
    // 0x473fc0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x473fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_473fc4:
    // 0x473fc4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x473fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_473fc8:
    // 0x473fc8: 0x27a604f8  addiu       $a2, $sp, 0x4F8
    ctx->pc = 0x473fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1272));
label_473fcc:
    // 0x473fcc: 0xc115ee8  jal         func_457BA0
label_473fd0:
    if (ctx->pc == 0x473FD0u) {
        ctx->pc = 0x473FD4u;
        goto label_473fd4;
    }
    ctx->pc = 0x473FCCu;
    SET_GPR_U32(ctx, 31, 0x473FD4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x473FCCu, 0x473FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473FD4u;
label_473fd4:
    // 0x473fd4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_473fd8:
    if (ctx->pc == 0x473FD8u) {
        ctx->pc = 0x473FDCu;
        goto label_473fdc;
    }
    ctx->pc = 0x473FD4u;
    {
        const bool branch_taken_0x473fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473fd4) {
            ctx->pc = 0x47405Cu;
            goto label_47405c;
        }
    }
    ctx->pc = 0x473FDCu;
label_473fdc:
    // 0x473fdc: 0x8fa20500  lw          $v0, 0x500($sp)
    ctx->pc = 0x473fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1280)));
label_473fe0:
    // 0x473fe0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_473fe4:
    if (ctx->pc == 0x473FE4u) {
        ctx->pc = 0x473FE8u;
        goto label_473fe8;
    }
    ctx->pc = 0x473FE0u;
    {
        const bool branch_taken_0x473fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473fe0) {
            ctx->pc = 0x47405Cu;
            goto label_47405c;
        }
    }
    ctx->pc = 0x473FE8u;
label_473fe8:
    // 0x473fe8: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x473fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_473fec:
    // 0x473fec: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x473fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_473ff0:
    // 0x473ff0: 0x8fa604fc  lw          $a2, 0x4FC($sp)
    ctx->pc = 0x473ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1276)));
label_473ff4:
    // 0x473ff4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x473ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_473ff8:
    // 0x473ff8: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x473ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_473ffc:
    // 0x473ffc: 0x24080136  addiu       $t0, $zero, 0x136
    ctx->pc = 0x473ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
label_474000:
    // 0x474000: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x474000u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_474004:
    // 0x474004: 0x25290340  addiu       $t1, $t1, 0x340
    ctx->pc = 0x474004u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 832));
label_474008:
    // 0x474008: 0xc113940  jal         func_44E500
label_47400c:
    if (ctx->pc == 0x47400Cu) {
        ctx->pc = 0x474010u;
        goto label_474010;
    }
    ctx->pc = 0x474008u;
    SET_GPR_U32(ctx, 31, 0x474010u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x474008u, 0x474010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474010u;
label_474010:
    // 0x474010: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x474010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_474014:
    // 0x474014: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x474014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_474018:
    // 0x474018: 0x24a50970  addiu       $a1, $a1, 0x970
    ctx->pc = 0x474018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2416));
label_47401c:
    // 0x47401c: 0xc115c24  jal         func_457090
label_474020:
    if (ctx->pc == 0x474020u) {
        ctx->pc = 0x474024u;
        goto label_474024;
    }
    ctx->pc = 0x47401Cu;
    SET_GPR_U32(ctx, 31, 0x474024u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47401Cu, 0x474024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474024u;
label_474024:
    // 0x474024: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x474024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_474028:
    // 0x474028: 0x8fa20500  lw          $v0, 0x500($sp)
    ctx->pc = 0x474028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1280)));
label_47402c:
    // 0x47402c: 0x40f809  jalr        $v0
label_474030:
    if (ctx->pc == 0x474030u) {
        ctx->pc = 0x474034u;
        goto label_474034;
    }
    ctx->pc = 0x47402Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x474034u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47402Cu, 0x474034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x474034u;
label_474034:
    // 0x474034: 0xaf82b408  sw          $v0, -0x4BF8($gp)
    ctx->pc = 0x474034u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947848), GPR_U32(ctx, 2));
label_474038:
    // 0x474038: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x474038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_47403c:
    // 0x47403c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_474040:
    if (ctx->pc == 0x474040u) {
        ctx->pc = 0x474044u;
        goto label_474044;
    }
    ctx->pc = 0x47403Cu;
    {
        const bool branch_taken_0x47403c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47403c) {
            ctx->pc = 0x47404Cu;
            goto label_47404c;
        }
    }
    ctx->pc = 0x474044u;
label_474044:
    // 0x474044: 0xd  break       0
    ctx->pc = 0x474044u;
    runtime->handleBreak(rdram, ctx);
label_474048:
    // 0x474048: 0x0  nop
    ctx->pc = 0x474048u;
    // NOP
label_47404c:
    // 0x47404c: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x47404cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_474050:
    // 0x474050: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x474050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_474054:
    // 0x474054: 0xc11392c  jal         func_44E4B0
label_474058:
    if (ctx->pc == 0x474058u) {
        ctx->pc = 0x47405Cu;
        goto label_47405c;
    }
    ctx->pc = 0x474054u;
    SET_GPR_U32(ctx, 31, 0x47405Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x474054u, 0x47405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47405Cu;
label_47405c:
    // 0x47405c: 0x8fa20510  lw          $v0, 0x510($sp)
    ctx->pc = 0x47405cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
label_474060:
    // 0x474060: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x474060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_474064:
    // 0x474064: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x474064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_474068:
    // 0x474068: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x474068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47406c:
    // 0x47406c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_474070:
    if (ctx->pc == 0x474070u) {
        ctx->pc = 0x474074u;
        goto label_474074;
    }
    ctx->pc = 0x47406Cu;
    {
        const bool branch_taken_0x47406c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47406c) {
            ctx->pc = 0x47411Cu;
            goto label_47411c;
        }
    }
    ctx->pc = 0x474074u;
label_474074:
    // 0x474074: 0x8f82b40c  lw          $v0, -0x4BF4($gp)
    ctx->pc = 0x474074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947852)));
label_474078:
    // 0x474078: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47407c:
    if (ctx->pc == 0x47407Cu) {
        ctx->pc = 0x474080u;
        goto label_474080;
    }
    ctx->pc = 0x474078u;
    {
        const bool branch_taken_0x474078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474078) {
            ctx->pc = 0x47411Cu;
            goto label_47411c;
        }
    }
    ctx->pc = 0x474080u;
label_474080:
    // 0x474080: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x474080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_474084:
    // 0x474084: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x474084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_474088:
    // 0x474088: 0x27a604e8  addiu       $a2, $sp, 0x4E8
    ctx->pc = 0x474088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1256));
label_47408c:
    // 0x47408c: 0xc115ee8  jal         func_457BA0
label_474090:
    if (ctx->pc == 0x474090u) {
        ctx->pc = 0x474094u;
        goto label_474094;
    }
    ctx->pc = 0x47408Cu;
    SET_GPR_U32(ctx, 31, 0x474094u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47408Cu, 0x474094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474094u;
label_474094:
    // 0x474094: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_474098:
    if (ctx->pc == 0x474098u) {
        ctx->pc = 0x47409Cu;
        goto label_47409c;
    }
    ctx->pc = 0x474094u;
    {
        const bool branch_taken_0x474094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474094) {
            ctx->pc = 0x47411Cu;
            goto label_47411c;
        }
    }
    ctx->pc = 0x47409Cu;
label_47409c:
    // 0x47409c: 0x8fa204f0  lw          $v0, 0x4F0($sp)
    ctx->pc = 0x47409cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_4740a0:
    // 0x4740a0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4740a4:
    if (ctx->pc == 0x4740A4u) {
        ctx->pc = 0x4740A8u;
        goto label_4740a8;
    }
    ctx->pc = 0x4740A0u;
    {
        const bool branch_taken_0x4740a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4740a0) {
            ctx->pc = 0x47411Cu;
            goto label_47411c;
        }
    }
    ctx->pc = 0x4740A8u;
label_4740a8:
    // 0x4740a8: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x4740a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_4740ac:
    // 0x4740ac: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4740acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4740b0:
    // 0x4740b0: 0x8fa604ec  lw          $a2, 0x4EC($sp)
    ctx->pc = 0x4740b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1260)));
label_4740b4:
    // 0x4740b4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4740b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4740b8:
    // 0x4740b8: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x4740b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_4740bc:
    // 0x4740bc: 0x24080137  addiu       $t0, $zero, 0x137
    ctx->pc = 0x4740bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
label_4740c0:
    // 0x4740c0: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4740c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4740c4:
    // 0x4740c4: 0x252903c0  addiu       $t1, $t1, 0x3C0
    ctx->pc = 0x4740c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 960));
label_4740c8:
    // 0x4740c8: 0xc113940  jal         func_44E500
label_4740cc:
    if (ctx->pc == 0x4740CCu) {
        ctx->pc = 0x4740D0u;
        goto label_4740d0;
    }
    ctx->pc = 0x4740C8u;
    SET_GPR_U32(ctx, 31, 0x4740D0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4740C8u, 0x4740D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4740D0u;
label_4740d0:
    // 0x4740d0: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x4740d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_4740d4:
    // 0x4740d4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4740d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4740d8:
    // 0x4740d8: 0x24a509d0  addiu       $a1, $a1, 0x9D0
    ctx->pc = 0x4740d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2512));
label_4740dc:
    // 0x4740dc: 0xc115c24  jal         func_457090
label_4740e0:
    if (ctx->pc == 0x4740E0u) {
        ctx->pc = 0x4740E4u;
        goto label_4740e4;
    }
    ctx->pc = 0x4740DCu;
    SET_GPR_U32(ctx, 31, 0x4740E4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4740DCu, 0x4740E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4740E4u;
label_4740e4:
    // 0x4740e4: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x4740e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_4740e8:
    // 0x4740e8: 0x8fa204f0  lw          $v0, 0x4F0($sp)
    ctx->pc = 0x4740e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1264)));
label_4740ec:
    // 0x4740ec: 0x40f809  jalr        $v0
label_4740f0:
    if (ctx->pc == 0x4740F0u) {
        ctx->pc = 0x4740F4u;
        goto label_4740f4;
    }
    ctx->pc = 0x4740ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4740F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4740ECu, 0x4740F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4740F4u;
label_4740f4:
    // 0x4740f4: 0xaf82b40c  sw          $v0, -0x4BF4($gp)
    ctx->pc = 0x4740f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947852), GPR_U32(ctx, 2));
label_4740f8:
    // 0x4740f8: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x4740f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_4740fc:
    // 0x4740fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_474100:
    if (ctx->pc == 0x474100u) {
        ctx->pc = 0x474104u;
        goto label_474104;
    }
    ctx->pc = 0x4740FCu;
    {
        const bool branch_taken_0x4740fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4740fc) {
            ctx->pc = 0x47410Cu;
            goto label_47410c;
        }
    }
    ctx->pc = 0x474104u;
label_474104:
    // 0x474104: 0xd  break       0
    ctx->pc = 0x474104u;
    runtime->handleBreak(rdram, ctx);
label_474108:
    // 0x474108: 0x0  nop
    ctx->pc = 0x474108u;
    // NOP
label_47410c:
    // 0x47410c: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x47410cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_474110:
    // 0x474110: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x474110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_474114:
    // 0x474114: 0xc11392c  jal         func_44E4B0
label_474118:
    if (ctx->pc == 0x474118u) {
        ctx->pc = 0x47411Cu;
        goto label_47411c;
    }
    ctx->pc = 0x474114u;
    SET_GPR_U32(ctx, 31, 0x47411Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x474114u, 0x47411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47411Cu;
label_47411c:
    // 0x47411c: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x47411cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_474120:
    // 0x474120: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x474120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_474124:
    // 0x474124: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x474124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_474128:
    // 0x474128: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_47412c:
    if (ctx->pc == 0x47412Cu) {
        ctx->pc = 0x474130u;
        goto label_474130;
    }
    ctx->pc = 0x474128u;
    {
        const bool branch_taken_0x474128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x474128) {
            ctx->pc = 0x4741D4u;
            goto label_4741d4;
        }
    }
    ctx->pc = 0x474130u;
label_474130:
    // 0x474130: 0x8f82b410  lw          $v0, -0x4BF0($gp)
    ctx->pc = 0x474130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947856)));
label_474134:
    // 0x474134: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_474138:
    if (ctx->pc == 0x474138u) {
        ctx->pc = 0x47413Cu;
        goto label_47413c;
    }
    ctx->pc = 0x474134u;
    {
        const bool branch_taken_0x474134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474134) {
            ctx->pc = 0x4741D4u;
            goto label_4741d4;
        }
    }
    ctx->pc = 0x47413Cu;
label_47413c:
    // 0x47413c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47413cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_474140:
    // 0x474140: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x474140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_474144:
    // 0x474144: 0x27a604d8  addiu       $a2, $sp, 0x4D8
    ctx->pc = 0x474144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1240));
label_474148:
    // 0x474148: 0xc115ee8  jal         func_457BA0
label_47414c:
    if (ctx->pc == 0x47414Cu) {
        ctx->pc = 0x474150u;
        goto label_474150;
    }
    ctx->pc = 0x474148u;
    SET_GPR_U32(ctx, 31, 0x474150u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x474148u, 0x474150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474150u;
label_474150:
    // 0x474150: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_474154:
    if (ctx->pc == 0x474154u) {
        ctx->pc = 0x474158u;
        goto label_474158;
    }
    ctx->pc = 0x474150u;
    {
        const bool branch_taken_0x474150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474150) {
            ctx->pc = 0x4741D4u;
            goto label_4741d4;
        }
    }
    ctx->pc = 0x474158u;
label_474158:
    // 0x474158: 0x8fa204e0  lw          $v0, 0x4E0($sp)
    ctx->pc = 0x474158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1248)));
label_47415c:
    // 0x47415c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_474160:
    if (ctx->pc == 0x474160u) {
        ctx->pc = 0x474164u;
        goto label_474164;
    }
    ctx->pc = 0x47415Cu;
    {
        const bool branch_taken_0x47415c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47415c) {
            ctx->pc = 0x4741D4u;
            goto label_4741d4;
        }
    }
    ctx->pc = 0x474164u;
label_474164:
    // 0x474164: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x474164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_474168:
    // 0x474168: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x474168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47416c:
    // 0x47416c: 0x8fa604dc  lw          $a2, 0x4DC($sp)
    ctx->pc = 0x47416cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1244)));
label_474170:
    // 0x474170: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x474170u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_474174:
    // 0x474174: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x474174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_474178:
    // 0x474178: 0x24080138  addiu       $t0, $zero, 0x138
    ctx->pc = 0x474178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
label_47417c:
    // 0x47417c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47417cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_474180:
    // 0x474180: 0x25290a20  addiu       $t1, $t1, 0xA20
    ctx->pc = 0x474180u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2592));
label_474184:
    // 0x474184: 0xc113940  jal         func_44E500
label_474188:
    if (ctx->pc == 0x474188u) {
        ctx->pc = 0x47418Cu;
        goto label_47418c;
    }
    ctx->pc = 0x474184u;
    SET_GPR_U32(ctx, 31, 0x47418Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x474184u, 0x47418Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47418Cu;
label_47418c:
    // 0x47418c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x47418cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_474190:
    // 0x474190: 0x2785b3f0  addiu       $a1, $gp, -0x4C10
    ctx->pc = 0x474190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947824));
label_474194:
    // 0x474194: 0xc115c24  jal         func_457090
label_474198:
    if (ctx->pc == 0x474198u) {
        ctx->pc = 0x47419Cu;
        goto label_47419c;
    }
    ctx->pc = 0x474194u;
    SET_GPR_U32(ctx, 31, 0x47419Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x474194u, 0x47419Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47419Cu;
label_47419c:
    // 0x47419c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x47419cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4741a0:
    // 0x4741a0: 0x8fa204e0  lw          $v0, 0x4E0($sp)
    ctx->pc = 0x4741a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1248)));
label_4741a4:
    // 0x4741a4: 0x40f809  jalr        $v0
label_4741a8:
    if (ctx->pc == 0x4741A8u) {
        ctx->pc = 0x4741ACu;
        goto label_4741ac;
    }
    ctx->pc = 0x4741A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4741ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4741A4u, 0x4741ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4741ACu;
label_4741ac:
    // 0x4741ac: 0xaf82b410  sw          $v0, -0x4BF0($gp)
    ctx->pc = 0x4741acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947856), GPR_U32(ctx, 2));
label_4741b0:
    // 0x4741b0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x4741b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4741b4:
    // 0x4741b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4741b8:
    if (ctx->pc == 0x4741B8u) {
        ctx->pc = 0x4741BCu;
        goto label_4741bc;
    }
    ctx->pc = 0x4741B4u;
    {
        const bool branch_taken_0x4741b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4741b4) {
            ctx->pc = 0x4741C4u;
            goto label_4741c4;
        }
    }
    ctx->pc = 0x4741BCu;
label_4741bc:
    // 0x4741bc: 0xd  break       0
    ctx->pc = 0x4741bcu;
    runtime->handleBreak(rdram, ctx);
label_4741c0:
    // 0x4741c0: 0x0  nop
    ctx->pc = 0x4741c0u;
    // NOP
label_4741c4:
    // 0x4741c4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x4741c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4741c8:
    // 0x4741c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4741c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4741cc:
    // 0x4741cc: 0xc11392c  jal         func_44E4B0
label_4741d0:
    if (ctx->pc == 0x4741D0u) {
        ctx->pc = 0x4741D4u;
        goto label_4741d4;
    }
    ctx->pc = 0x4741CCu;
    SET_GPR_U32(ctx, 31, 0x4741D4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4741CCu, 0x4741D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4741D4u;
label_4741d4:
    // 0x4741d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4741d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4741d8:
    // 0x4741d8: 0xc7a00530  lwc1        $f0, 0x530($sp)
    ctx->pc = 0x4741d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4741dc:
    // 0x4741dc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4741dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4741e0:
    // 0x4741e0: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_4741e4:
    if (ctx->pc == 0x4741E4u) {
        ctx->pc = 0x4741E8u;
        goto label_4741e8;
    }
    ctx->pc = 0x4741E0u;
    {
        const bool branch_taken_0x4741e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4741e0) {
            ctx->pc = 0x474228u;
            goto label_474228;
        }
    }
    ctx->pc = 0x4741E8u;
label_4741e8:
    // 0x4741e8: 0x8fa20540  lw          $v0, 0x540($sp)
    ctx->pc = 0x4741e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
label_4741ec:
    // 0x4741ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4741f0:
    if (ctx->pc == 0x4741F0u) {
        ctx->pc = 0x4741F4u;
        goto label_4741f4;
    }
    ctx->pc = 0x4741ECu;
    {
        const bool branch_taken_0x4741ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4741ec) {
            ctx->pc = 0x474210u;
            goto label_474210;
        }
    }
    ctx->pc = 0x4741F4u;
label_4741f4:
    // 0x4741f4: 0x8fa20510  lw          $v0, 0x510($sp)
    ctx->pc = 0x4741f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
label_4741f8:
    // 0x4741f8: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x4741f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4741fc:
    // 0x4741fc: 0xc7a00530  lwc1        $f0, 0x530($sp)
    ctx->pc = 0x4741fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_474200:
    // 0x474200: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x474200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_474204:
    // 0x474204: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x474204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_474208:
    // 0x474208: 0x10000004  b           . + 4 + (0x4 << 2)
label_47420c:
    if (ctx->pc == 0x47420Cu) {
        ctx->pc = 0x474210u;
        goto label_474210;
    }
    ctx->pc = 0x474208u;
    {
        const bool branch_taken_0x474208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x474208) {
            ctx->pc = 0x47421Cu;
            goto label_47421c;
        }
    }
    ctx->pc = 0x474210u;
label_474210:
    // 0x474210: 0xc7a00530  lwc1        $f0, 0x530($sp)
    ctx->pc = 0x474210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_474214:
    // 0x474214: 0x8fa20510  lw          $v0, 0x510($sp)
    ctx->pc = 0x474214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
label_474218:
    // 0x474218: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x474218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_47421c:
    // 0x47421c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47421cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_474220:
    // 0x474220: 0x10000085  b           . + 4 + (0x85 << 2)
label_474224:
    if (ctx->pc == 0x474224u) {
        ctx->pc = 0x474228u;
        goto label_474228;
    }
    ctx->pc = 0x474220u;
    {
        const bool branch_taken_0x474220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x474220) {
            ctx->pc = 0x474438u;
            goto label_474438;
        }
    }
    ctx->pc = 0x474228u;
label_474228:
    // 0x474228: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x474228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_47422c:
    // 0x47422c: 0x24840960  addiu       $a0, $a0, 0x960
    ctx->pc = 0x47422cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2400));
label_474230:
    // 0x474230: 0x27a304c8  addiu       $v1, $sp, 0x4C8
    ctx->pc = 0x474230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1224));
label_474234:
    // 0x474234: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x474234u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_474238:
    // 0x474238: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x474238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47423c:
    // 0x47423c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x47423cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_474240:
    // 0x474240: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x474240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_474244:
    // 0x474244: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x474244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_474248:
    // 0x474248: 0x8fa20510  lw          $v0, 0x510($sp)
    ctx->pc = 0x474248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
label_47424c:
    // 0x47424c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x47424cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_474250:
    // 0x474250: 0xe7a0050c  swc1        $f0, 0x50C($sp)
    ctx->pc = 0x474250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1292), bits); }
label_474254:
    // 0x474254: 0x8fa20510  lw          $v0, 0x510($sp)
    ctx->pc = 0x474254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
label_474258:
    // 0x474258: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x474258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47425c:
    // 0x47425c: 0xe7a00508  swc1        $f0, 0x508($sp)
    ctx->pc = 0x47425cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1288), bits); }
label_474260:
    // 0x474260: 0xc7a0050c  lwc1        $f0, 0x50C($sp)
    ctx->pc = 0x474260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_474264:
    // 0x474264: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x474264u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_474268:
    // 0x474268: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x474268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_47426c:
    // 0x47426c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x47426cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_474270:
    // 0x474270: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x474270u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_474274:
    // 0x474274: 0xc7a00508  lwc1        $f0, 0x508($sp)
    ctx->pc = 0x474274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_474278:
    // 0x474278: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x474278u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_47427c:
    // 0x47427c: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x47427cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_474280:
    // 0x474280: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x474280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_474284:
    // 0x474284: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x474284u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_474288:
    // 0x474288: 0x8fa40510  lw          $a0, 0x510($sp)
    ctx->pc = 0x474288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
label_47428c:
    // 0x47428c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x47428cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_474290:
    // 0x474290: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x474290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_474294:
    // 0x474294: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x474294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_474298:
    // 0x474298: 0x320f809  jalr        $t9
label_47429c:
    if (ctx->pc == 0x47429Cu) {
        ctx->pc = 0x4742A0u;
        goto label_4742a0;
    }
    ctx->pc = 0x474298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4742A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x474298u, 0x4742A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4742A0u;
label_4742a0:
    // 0x4742a0: 0x8fa20510  lw          $v0, 0x510($sp)
    ctx->pc = 0x4742a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
label_4742a4:
    // 0x4742a4: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x4742a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4742a8:
    // 0x4742a8: 0xc0ed194  jal         func_3B4650
label_4742ac:
    if (ctx->pc == 0x4742ACu) {
        ctx->pc = 0x4742B0u;
        goto label_4742b0;
    }
    ctx->pc = 0x4742A8u;
    SET_GPR_U32(ctx, 31, 0x4742B0u);
    ctx->pc = 0x3B4650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4650u, 0x4742A8u, 0x4742B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4742B0u;
label_4742b0:
    // 0x4742b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4742b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4742b4:
    // 0x4742b4: 0x8fa20540  lw          $v0, 0x540($sp)
    ctx->pc = 0x4742b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
label_4742b8:
    // 0x4742b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4742bc:
    if (ctx->pc == 0x4742BCu) {
        ctx->pc = 0x4742C0u;
        goto label_4742c0;
    }
    ctx->pc = 0x4742B8u;
    {
        const bool branch_taken_0x4742b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4742b8) {
            ctx->pc = 0x4742CCu;
            goto label_4742cc;
        }
    }
    ctx->pc = 0x4742C0u;
label_4742c0:
    // 0x4742c0: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x4742c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4742c4:
    // 0x4742c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_4742c8:
    if (ctx->pc == 0x4742C8u) {
        ctx->pc = 0x4742CCu;
        goto label_4742cc;
    }
    ctx->pc = 0x4742C4u;
    {
        const bool branch_taken_0x4742c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4742c4) {
            ctx->pc = 0x4742D0u;
            goto label_4742d0;
        }
    }
    ctx->pc = 0x4742CCu;
label_4742cc:
    // 0x4742cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4742ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4742d0:
    // 0x4742d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4742d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4742d4:
    // 0x4742d4: 0x27a504c8  addiu       $a1, $sp, 0x4C8
    ctx->pc = 0x4742d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1224));
label_4742d8:
    // 0x4742d8: 0xc7ac0530  lwc1        $f12, 0x530($sp)
    ctx->pc = 0x4742d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4742dc:
    // 0x4742dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4742dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4742e0:
    // 0x4742e0: 0xc103e6c  jal         func_40F9B0
label_4742e4:
    if (ctx->pc == 0x4742E4u) {
        ctx->pc = 0x4742E8u;
        goto label_4742e8;
    }
    ctx->pc = 0x4742E0u;
    SET_GPR_U32(ctx, 31, 0x4742E8u);
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x4742E0u, 0x4742E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4742E8u;
label_4742e8:
    // 0x4742e8: 0x8fa20510  lw          $v0, 0x510($sp)
    ctx->pc = 0x4742e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
label_4742ec:
    // 0x4742ec: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x4742ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4742f0:
    // 0x4742f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4742f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4742f4:
    // 0x4742f4: 0xc0ed196  jal         func_3B4658
label_4742f8:
    if (ctx->pc == 0x4742F8u) {
        ctx->pc = 0x4742FCu;
        goto label_4742fc;
    }
    ctx->pc = 0x4742F4u;
    SET_GPR_U32(ctx, 31, 0x4742FCu);
    ctx->pc = 0x3B4658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4658u, 0x4742F4u, 0x4742FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4742FCu;
label_4742fc:
    // 0x4742fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4742fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_474300:
    // 0x474300: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x474300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_474304:
    // 0x474304: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x474304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_474308:
    // 0x474308: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_47430c:
    if (ctx->pc == 0x47430Cu) {
        ctx->pc = 0x474310u;
        goto label_474310;
    }
    ctx->pc = 0x474308u;
    {
        const bool branch_taken_0x474308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x474308) {
            ctx->pc = 0x4743B4u;
            goto label_4743b4;
        }
    }
    ctx->pc = 0x474310u;
label_474310:
    // 0x474310: 0x8f82b414  lw          $v0, -0x4BEC($gp)
    ctx->pc = 0x474310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947860)));
label_474314:
    // 0x474314: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_474318:
    if (ctx->pc == 0x474318u) {
        ctx->pc = 0x47431Cu;
        goto label_47431c;
    }
    ctx->pc = 0x474314u;
    {
        const bool branch_taken_0x474314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474314) {
            ctx->pc = 0x4743B4u;
            goto label_4743b4;
        }
    }
    ctx->pc = 0x47431Cu;
label_47431c:
    // 0x47431c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47431cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_474320:
    // 0x474320: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x474320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_474324:
    // 0x474324: 0x27a604b8  addiu       $a2, $sp, 0x4B8
    ctx->pc = 0x474324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1208));
label_474328:
    // 0x474328: 0xc115ee8  jal         func_457BA0
label_47432c:
    if (ctx->pc == 0x47432Cu) {
        ctx->pc = 0x474330u;
        goto label_474330;
    }
    ctx->pc = 0x474328u;
    SET_GPR_U32(ctx, 31, 0x474330u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x474328u, 0x474330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474330u;
label_474330:
    // 0x474330: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_474334:
    if (ctx->pc == 0x474334u) {
        ctx->pc = 0x474338u;
        goto label_474338;
    }
    ctx->pc = 0x474330u;
    {
        const bool branch_taken_0x474330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474330) {
            ctx->pc = 0x4743B4u;
            goto label_4743b4;
        }
    }
    ctx->pc = 0x474338u;
label_474338:
    // 0x474338: 0x8fa204c0  lw          $v0, 0x4C0($sp)
    ctx->pc = 0x474338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1216)));
label_47433c:
    // 0x47433c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_474340:
    if (ctx->pc == 0x474340u) {
        ctx->pc = 0x474344u;
        goto label_474344;
    }
    ctx->pc = 0x47433Cu;
    {
        const bool branch_taken_0x47433c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47433c) {
            ctx->pc = 0x4743B4u;
            goto label_4743b4;
        }
    }
    ctx->pc = 0x474344u;
label_474344:
    // 0x474344: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x474344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_474348:
    // 0x474348: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x474348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47434c:
    // 0x47434c: 0x8fa604bc  lw          $a2, 0x4BC($sp)
    ctx->pc = 0x47434cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1212)));
label_474350:
    // 0x474350: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x474350u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_474354:
    // 0x474354: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x474354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_474358:
    // 0x474358: 0x24080155  addiu       $t0, $zero, 0x155
    ctx->pc = 0x474358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 341));
label_47435c:
    // 0x47435c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47435cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_474360:
    // 0x474360: 0x252907e0  addiu       $t1, $t1, 0x7E0
    ctx->pc = 0x474360u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2016));
label_474364:
    // 0x474364: 0xc113940  jal         func_44E500
label_474368:
    if (ctx->pc == 0x474368u) {
        ctx->pc = 0x47436Cu;
        goto label_47436c;
    }
    ctx->pc = 0x474364u;
    SET_GPR_U32(ctx, 31, 0x47436Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x474364u, 0x47436Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47436Cu;
label_47436c:
    // 0x47436c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x47436cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_474370:
    // 0x474370: 0x2785b3f0  addiu       $a1, $gp, -0x4C10
    ctx->pc = 0x474370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947824));
label_474374:
    // 0x474374: 0xc115c24  jal         func_457090
label_474378:
    if (ctx->pc == 0x474378u) {
        ctx->pc = 0x47437Cu;
        goto label_47437c;
    }
    ctx->pc = 0x474374u;
    SET_GPR_U32(ctx, 31, 0x47437Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x474374u, 0x47437Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47437Cu;
label_47437c:
    // 0x47437c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x47437cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_474380:
    // 0x474380: 0x8fa204c0  lw          $v0, 0x4C0($sp)
    ctx->pc = 0x474380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1216)));
label_474384:
    // 0x474384: 0x40f809  jalr        $v0
label_474388:
    if (ctx->pc == 0x474388u) {
        ctx->pc = 0x47438Cu;
        goto label_47438c;
    }
    ctx->pc = 0x474384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47438Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x474384u, 0x47438Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47438Cu;
label_47438c:
    // 0x47438c: 0xaf82b414  sw          $v0, -0x4BEC($gp)
    ctx->pc = 0x47438cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947860), GPR_U32(ctx, 2));
label_474390:
    // 0x474390: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x474390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_474394:
    // 0x474394: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_474398:
    if (ctx->pc == 0x474398u) {
        ctx->pc = 0x47439Cu;
        goto label_47439c;
    }
    ctx->pc = 0x474394u;
    {
        const bool branch_taken_0x474394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474394) {
            ctx->pc = 0x4743A4u;
            goto label_4743a4;
        }
    }
    ctx->pc = 0x47439Cu;
label_47439c:
    // 0x47439c: 0xd  break       0
    ctx->pc = 0x47439cu;
    runtime->handleBreak(rdram, ctx);
label_4743a0:
    // 0x4743a0: 0x0  nop
    ctx->pc = 0x4743a0u;
    // NOP
label_4743a4:
    // 0x4743a4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4743a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4743a8:
    // 0x4743a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4743a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4743ac:
    // 0x4743ac: 0xc11392c  jal         func_44E4B0
label_4743b0:
    if (ctx->pc == 0x4743B0u) {
        ctx->pc = 0x4743B4u;
        goto label_4743b4;
    }
    ctx->pc = 0x4743ACu;
    SET_GPR_U32(ctx, 31, 0x4743B4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4743ACu, 0x4743B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4743B4u;
label_4743b4:
    // 0x4743b4: 0xc7a1050c  lwc1        $f1, 0x50C($sp)
    ctx->pc = 0x4743b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4743b8:
    // 0x4743b8: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x4743b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_4743bc:
    // 0x4743bc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4743bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4743c0:
    // 0x4743c0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x4743c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4743c4:
    // 0x4743c4: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x4743c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_4743c8:
    // 0x4743c8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x4743c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4743cc:
    // 0x4743cc: 0xc7a00508  lwc1        $f0, 0x508($sp)
    ctx->pc = 0x4743ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4743d0:
    // 0x4743d0: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x4743d0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4743d4:
    // 0x4743d4: 0x8fa40510  lw          $a0, 0x510($sp)
    ctx->pc = 0x4743d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
label_4743d8:
    // 0x4743d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4743d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4743dc:
    // 0x4743dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4743dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4743e0:
    // 0x4743e0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4743e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4743e4:
    // 0x4743e4: 0x320f809  jalr        $t9
label_4743e8:
    if (ctx->pc == 0x4743E8u) {
        ctx->pc = 0x4743ECu;
        goto label_4743ec;
    }
    ctx->pc = 0x4743E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4743ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4743E4u, 0x4743ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4743ECu;
label_4743ec:
    // 0x4743ec: 0x8fa20510  lw          $v0, 0x510($sp)
    ctx->pc = 0x4743ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
label_4743f0:
    // 0x4743f0: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x4743f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4743f4:
    // 0x4743f4: 0xc0ed18e  jal         func_3B4638
label_4743f8:
    if (ctx->pc == 0x4743F8u) {
        ctx->pc = 0x4743FCu;
        goto label_4743fc;
    }
    ctx->pc = 0x4743F4u;
    SET_GPR_U32(ctx, 31, 0x4743FCu);
    ctx->pc = 0x3B4638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4638u, 0x4743F4u, 0x4743FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4743FCu;
label_4743fc:
    // 0x4743fc: 0x8fa20540  lw          $v0, 0x540($sp)
    ctx->pc = 0x4743fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
label_474400:
    // 0x474400: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_474404:
    if (ctx->pc == 0x474404u) {
        ctx->pc = 0x474408u;
        goto label_474408;
    }
    ctx->pc = 0x474400u;
    {
        const bool branch_taken_0x474400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474400) {
            ctx->pc = 0x474424u;
            goto label_474424;
        }
    }
    ctx->pc = 0x474408u;
label_474408:
    // 0x474408: 0x8fa20510  lw          $v0, 0x510($sp)
    ctx->pc = 0x474408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
label_47440c:
    // 0x47440c: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x47440cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_474410:
    // 0x474410: 0xc7a00530  lwc1        $f0, 0x530($sp)
    ctx->pc = 0x474410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_474414:
    // 0x474414: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x474414u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_474418:
    // 0x474418: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x474418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_47441c:
    // 0x47441c: 0x10000004  b           . + 4 + (0x4 << 2)
label_474420:
    if (ctx->pc == 0x474420u) {
        ctx->pc = 0x474424u;
        goto label_474424;
    }
    ctx->pc = 0x47441Cu;
    {
        const bool branch_taken_0x47441c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47441c) {
            ctx->pc = 0x474430u;
            goto label_474430;
        }
    }
    ctx->pc = 0x474424u;
label_474424:
    // 0x474424: 0xc7a00530  lwc1        $f0, 0x530($sp)
    ctx->pc = 0x474424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_474428:
    // 0x474428: 0x8fa20510  lw          $v0, 0x510($sp)
    ctx->pc = 0x474428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
label_47442c:
    // 0x47442c: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x47442cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_474430:
    // 0x474430: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x474430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_474434:
    // 0x474434: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x474434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_474438:
    // 0x474438: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x474438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_47443c:
    // 0x47443c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47443cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_474440:
    // 0x474440: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x474440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_474444:
    // 0x474444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x474444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_474448:
    // 0x474448: 0x27bd0550  addiu       $sp, $sp, 0x550
    ctx->pc = 0x474448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
label_47444c:
    // 0x47444c: 0x3e00008  jr          $ra
label_474450:
    if (ctx->pc == 0x474450u) {
        ctx->pc = 0x474454u;
        goto label_474454;
    }
    ctx->pc = 0x47444Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47444Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x474454u;
label_474454:
    // 0x474454: 0x0  nop
    ctx->pc = 0x474454u;
    // NOP
label_474458:
    // 0x474458: 0x0  nop
    ctx->pc = 0x474458u;
    // NOP
label_47445c:
    // 0x47445c: 0x0  nop
    ctx->pc = 0x47445cu;
    // NOP
label_474460:
    // 0x474460: 0x27bdfc20  addiu       $sp, $sp, -0x3E0
    ctx->pc = 0x474460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966304));
label_474464:
    // 0x474464: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x474464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_474468:
    // 0x474468: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x474468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47446c:
    // 0x47446c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47446cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_474470:
    // 0x474470: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x474470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_474474:
    // 0x474474: 0xafa403d0  sw          $a0, 0x3D0($sp)
    ctx->pc = 0x474474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 976), GPR_U32(ctx, 4));
label_474478:
    // 0x474478: 0xc11c1fc  jal         func_4707F0
label_47447c:
    if (ctx->pc == 0x47447Cu) {
        ctx->pc = 0x474480u;
        goto label_474480;
    }
    ctx->pc = 0x474478u;
    SET_GPR_U32(ctx, 31, 0x474480u);
    ctx->pc = 0x4707F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4707F0u, 0x474478u, 0x474480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474480u;
label_474480:
    // 0x474480: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_474484:
    if (ctx->pc == 0x474484u) {
        ctx->pc = 0x474488u;
        goto label_474488;
    }
    ctx->pc = 0x474480u;
    {
        const bool branch_taken_0x474480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x474480) {
            ctx->pc = 0x474530u;
            goto label_474530;
        }
    }
    ctx->pc = 0x474488u;
label_474488:
    // 0x474488: 0x8f82b418  lw          $v0, -0x4BE8($gp)
    ctx->pc = 0x474488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947864)));
label_47448c:
    // 0x47448c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_474490:
    if (ctx->pc == 0x474490u) {
        ctx->pc = 0x474494u;
        goto label_474494;
    }
    ctx->pc = 0x47448Cu;
    {
        const bool branch_taken_0x47448c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47448c) {
            ctx->pc = 0x474530u;
            goto label_474530;
        }
    }
    ctx->pc = 0x474494u;
label_474494:
    // 0x474494: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x474494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_474498:
    // 0x474498: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x474498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47449c:
    // 0x47449c: 0x27a603c0  addiu       $a2, $sp, 0x3C0
    ctx->pc = 0x47449cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_4744a0:
    // 0x4744a0: 0xc115ee8  jal         func_457BA0
label_4744a4:
    if (ctx->pc == 0x4744A4u) {
        ctx->pc = 0x4744A8u;
        goto label_4744a8;
    }
    ctx->pc = 0x4744A0u;
    SET_GPR_U32(ctx, 31, 0x4744A8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4744A0u, 0x4744A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4744A8u;
label_4744a8:
    // 0x4744a8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4744ac:
    if (ctx->pc == 0x4744ACu) {
        ctx->pc = 0x4744B0u;
        goto label_4744b0;
    }
    ctx->pc = 0x4744A8u;
    {
        const bool branch_taken_0x4744a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4744a8) {
            ctx->pc = 0x474530u;
            goto label_474530;
        }
    }
    ctx->pc = 0x4744B0u;
label_4744b0:
    // 0x4744b0: 0x8fa203c8  lw          $v0, 0x3C8($sp)
    ctx->pc = 0x4744b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 968)));
label_4744b4:
    // 0x4744b4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4744b8:
    if (ctx->pc == 0x4744B8u) {
        ctx->pc = 0x4744BCu;
        goto label_4744bc;
    }
    ctx->pc = 0x4744B4u;
    {
        const bool branch_taken_0x4744b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4744b4) {
            ctx->pc = 0x474530u;
            goto label_474530;
        }
    }
    ctx->pc = 0x4744BCu;
label_4744bc:
    // 0x4744bc: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x4744bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_4744c0:
    // 0x4744c0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4744c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4744c4:
    // 0x4744c4: 0x8fa603c4  lw          $a2, 0x3C4($sp)
    ctx->pc = 0x4744c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 964)));
label_4744c8:
    // 0x4744c8: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4744c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4744cc:
    // 0x4744cc: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x4744ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_4744d0:
    // 0x4744d0: 0x2408016b  addiu       $t0, $zero, 0x16B
    ctx->pc = 0x4744d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 363));
label_4744d4:
    // 0x4744d4: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4744d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4744d8:
    // 0x4744d8: 0x25290340  addiu       $t1, $t1, 0x340
    ctx->pc = 0x4744d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 832));
label_4744dc:
    // 0x4744dc: 0xc113940  jal         func_44E500
label_4744e0:
    if (ctx->pc == 0x4744E0u) {
        ctx->pc = 0x4744E4u;
        goto label_4744e4;
    }
    ctx->pc = 0x4744DCu;
    SET_GPR_U32(ctx, 31, 0x4744E4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4744DCu, 0x4744E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4744E4u;
label_4744e4:
    // 0x4744e4: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x4744e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_4744e8:
    // 0x4744e8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4744e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4744ec:
    // 0x4744ec: 0x24a50800  addiu       $a1, $a1, 0x800
    ctx->pc = 0x4744ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2048));
label_4744f0:
    // 0x4744f0: 0xc115c24  jal         func_457090
label_4744f4:
    if (ctx->pc == 0x4744F4u) {
        ctx->pc = 0x4744F8u;
        goto label_4744f8;
    }
    ctx->pc = 0x4744F0u;
    SET_GPR_U32(ctx, 31, 0x4744F8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4744F0u, 0x4744F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4744F8u;
label_4744f8:
    // 0x4744f8: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x4744f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_4744fc:
    // 0x4744fc: 0x8fa203c8  lw          $v0, 0x3C8($sp)
    ctx->pc = 0x4744fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 968)));
label_474500:
    // 0x474500: 0x40f809  jalr        $v0
label_474504:
    if (ctx->pc == 0x474504u) {
        ctx->pc = 0x474508u;
        goto label_474508;
    }
    ctx->pc = 0x474500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x474508u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x474500u, 0x474508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x474508u;
label_474508:
    // 0x474508: 0xaf82b418  sw          $v0, -0x4BE8($gp)
    ctx->pc = 0x474508u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947864), GPR_U32(ctx, 2));
label_47450c:
    // 0x47450c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x47450cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_474510:
    // 0x474510: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_474514:
    if (ctx->pc == 0x474514u) {
        ctx->pc = 0x474518u;
        goto label_474518;
    }
    ctx->pc = 0x474510u;
    {
        const bool branch_taken_0x474510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474510) {
            ctx->pc = 0x474520u;
            goto label_474520;
        }
    }
    ctx->pc = 0x474518u;
label_474518:
    // 0x474518: 0xd  break       0
    ctx->pc = 0x474518u;
    runtime->handleBreak(rdram, ctx);
label_47451c:
    // 0x47451c: 0x0  nop
    ctx->pc = 0x47451cu;
    // NOP
label_474520:
    // 0x474520: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x474520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_474524:
    // 0x474524: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x474524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_474528:
    // 0x474528: 0xc11392c  jal         func_44E4B0
label_47452c:
    if (ctx->pc == 0x47452Cu) {
        ctx->pc = 0x474530u;
        goto label_474530;
    }
    ctx->pc = 0x474528u;
    SET_GPR_U32(ctx, 31, 0x474530u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x474528u, 0x474530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474530u;
label_474530:
    // 0x474530: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x474530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_474534:
    // 0x474534: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x474534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_474538:
    // 0x474538: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
label_47453c:
    if (ctx->pc == 0x47453Cu) {
        ctx->pc = 0x474540u;
        goto label_474540;
    }
    ctx->pc = 0x474538u;
    {
        const bool branch_taken_0x474538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x474538) {
            ctx->pc = 0x474630u;
            goto label_474630;
        }
    }
    ctx->pc = 0x474540u;
label_474540:
    // 0x474540: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x474540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_474544:
    // 0x474544: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x474544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_474548:
    // 0x474548: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x474548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_47454c:
    // 0x47454c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_474550:
    if (ctx->pc == 0x474550u) {
        ctx->pc = 0x474554u;
        goto label_474554;
    }
    ctx->pc = 0x47454Cu;
    {
        const bool branch_taken_0x47454c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47454c) {
            ctx->pc = 0x47457Cu;
            goto label_47457c;
        }
    }
    ctx->pc = 0x474554u;
label_474554:
    // 0x474554: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x474554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_474558:
    // 0x474558: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x474558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_47455c:
    // 0x47455c: 0xc11be2c  jal         func_46F8B0
label_474560:
    if (ctx->pc == 0x474560u) {
        ctx->pc = 0x474564u;
        goto label_474564;
    }
    ctx->pc = 0x47455Cu;
    SET_GPR_U32(ctx, 31, 0x474564u);
    ctx->pc = 0x46F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F8B0u, 0x47455Cu, 0x474564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474564u;
label_474564:
    // 0x474564: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x474564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_474568:
    // 0x474568: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x474568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_47456c:
    // 0x47456c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_474570:
    if (ctx->pc == 0x474570u) {
        ctx->pc = 0x474574u;
        goto label_474574;
    }
    ctx->pc = 0x47456Cu;
    {
        const bool branch_taken_0x47456c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47456c) {
            ctx->pc = 0x47457Cu;
            goto label_47457c;
        }
    }
    ctx->pc = 0x474574u;
label_474574:
    // 0x474574: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x474574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_474578:
    // 0x474578: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x474578u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47457c:
    // 0x47457c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x47457cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_474580:
    // 0x474580: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_474584:
    if (ctx->pc == 0x474584u) {
        ctx->pc = 0x474588u;
        goto label_474588;
    }
    ctx->pc = 0x474580u;
    {
        const bool branch_taken_0x474580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x474580) {
            ctx->pc = 0x474630u;
            goto label_474630;
        }
    }
    ctx->pc = 0x474588u;
label_474588:
    // 0x474588: 0x8f82b41c  lw          $v0, -0x4BE4($gp)
    ctx->pc = 0x474588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947868)));
label_47458c:
    // 0x47458c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_474590:
    if (ctx->pc == 0x474590u) {
        ctx->pc = 0x474594u;
        goto label_474594;
    }
    ctx->pc = 0x47458Cu;
    {
        const bool branch_taken_0x47458c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47458c) {
            ctx->pc = 0x474630u;
            goto label_474630;
        }
    }
    ctx->pc = 0x474594u;
label_474594:
    // 0x474594: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x474594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_474598:
    // 0x474598: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x474598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47459c:
    // 0x47459c: 0x27a603b0  addiu       $a2, $sp, 0x3B0
    ctx->pc = 0x47459cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_4745a0:
    // 0x4745a0: 0xc115ee8  jal         func_457BA0
label_4745a4:
    if (ctx->pc == 0x4745A4u) {
        ctx->pc = 0x4745A8u;
        goto label_4745a8;
    }
    ctx->pc = 0x4745A0u;
    SET_GPR_U32(ctx, 31, 0x4745A8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4745A0u, 0x4745A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4745A8u;
label_4745a8:
    // 0x4745a8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4745ac:
    if (ctx->pc == 0x4745ACu) {
        ctx->pc = 0x4745B0u;
        goto label_4745b0;
    }
    ctx->pc = 0x4745A8u;
    {
        const bool branch_taken_0x4745a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4745a8) {
            ctx->pc = 0x474630u;
            goto label_474630;
        }
    }
    ctx->pc = 0x4745B0u;
label_4745b0:
    // 0x4745b0: 0x8fa203b8  lw          $v0, 0x3B8($sp)
    ctx->pc = 0x4745b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 952)));
label_4745b4:
    // 0x4745b4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4745b8:
    if (ctx->pc == 0x4745B8u) {
        ctx->pc = 0x4745BCu;
        goto label_4745bc;
    }
    ctx->pc = 0x4745B4u;
    {
        const bool branch_taken_0x4745b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4745b4) {
            ctx->pc = 0x474630u;
            goto label_474630;
        }
    }
    ctx->pc = 0x4745BCu;
label_4745bc:
    // 0x4745bc: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x4745bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4745c0:
    // 0x4745c0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4745c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4745c4:
    // 0x4745c4: 0x8fa603b4  lw          $a2, 0x3B4($sp)
    ctx->pc = 0x4745c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 948)));
label_4745c8:
    // 0x4745c8: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4745c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4745cc:
    // 0x4745cc: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x4745ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_4745d0:
    // 0x4745d0: 0x2408016f  addiu       $t0, $zero, 0x16F
    ctx->pc = 0x4745d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 367));
label_4745d4:
    // 0x4745d4: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4745d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4745d8:
    // 0x4745d8: 0x25290a30  addiu       $t1, $t1, 0xA30
    ctx->pc = 0x4745d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2608));
label_4745dc:
    // 0x4745dc: 0xc113940  jal         func_44E500
label_4745e0:
    if (ctx->pc == 0x4745E0u) {
        ctx->pc = 0x4745E4u;
        goto label_4745e4;
    }
    ctx->pc = 0x4745DCu;
    SET_GPR_U32(ctx, 31, 0x4745E4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4745DCu, 0x4745E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4745E4u;
label_4745e4:
    // 0x4745e4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x4745e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4745e8:
    // 0x4745e8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4745e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4745ec:
    // 0x4745ec: 0x24a50a60  addiu       $a1, $a1, 0xA60
    ctx->pc = 0x4745ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2656));
label_4745f0:
    // 0x4745f0: 0xc115c24  jal         func_457090
label_4745f4:
    if (ctx->pc == 0x4745F4u) {
        ctx->pc = 0x4745F8u;
        goto label_4745f8;
    }
    ctx->pc = 0x4745F0u;
    SET_GPR_U32(ctx, 31, 0x4745F8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4745F0u, 0x4745F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4745F8u;
label_4745f8:
    // 0x4745f8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x4745f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4745fc:
    // 0x4745fc: 0x8fa203b8  lw          $v0, 0x3B8($sp)
    ctx->pc = 0x4745fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 952)));
label_474600:
    // 0x474600: 0x40f809  jalr        $v0
label_474604:
    if (ctx->pc == 0x474604u) {
        ctx->pc = 0x474608u;
        goto label_474608;
    }
    ctx->pc = 0x474600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x474608u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x474600u, 0x474608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x474608u;
label_474608:
    // 0x474608: 0xaf82b41c  sw          $v0, -0x4BE4($gp)
    ctx->pc = 0x474608u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947868), GPR_U32(ctx, 2));
label_47460c:
    // 0x47460c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x47460cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_474610:
    // 0x474610: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_474614:
    if (ctx->pc == 0x474614u) {
        ctx->pc = 0x474618u;
        goto label_474618;
    }
    ctx->pc = 0x474610u;
    {
        const bool branch_taken_0x474610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474610) {
            ctx->pc = 0x474620u;
            goto label_474620;
        }
    }
    ctx->pc = 0x474618u;
label_474618:
    // 0x474618: 0xd  break       0
    ctx->pc = 0x474618u;
    runtime->handleBreak(rdram, ctx);
label_47461c:
    // 0x47461c: 0x0  nop
    ctx->pc = 0x47461cu;
    // NOP
label_474620:
    // 0x474620: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x474620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_474624:
    // 0x474624: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x474624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_474628:
    // 0x474628: 0xc11392c  jal         func_44E4B0
label_47462c:
    if (ctx->pc == 0x47462Cu) {
        ctx->pc = 0x474630u;
        goto label_474630;
    }
    ctx->pc = 0x474628u;
    SET_GPR_U32(ctx, 31, 0x474630u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x474628u, 0x474630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474630u;
label_474630:
    // 0x474630: 0xc11c200  jal         func_470800
label_474634:
    if (ctx->pc == 0x474634u) {
        ctx->pc = 0x474638u;
        goto label_474638;
    }
    ctx->pc = 0x474630u;
    SET_GPR_U32(ctx, 31, 0x474638u);
    ctx->pc = 0x470800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470800u, 0x474630u, 0x474638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474638u;
label_474638:
    // 0x474638: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x474638u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47463c:
    // 0x47463c: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_474640:
    if (ctx->pc == 0x474640u) {
        ctx->pc = 0x474644u;
        goto label_474644;
    }
    ctx->pc = 0x47463Cu;
    {
        const bool branch_taken_0x47463c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x47463c) {
            ctx->pc = 0x474650u;
            goto label_474650;
        }
    }
    ctx->pc = 0x474644u;
label_474644:
    // 0x474644: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x474644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_474648:
    // 0x474648: 0x10000038  b           . + 4 + (0x38 << 2)
label_47464c:
    if (ctx->pc == 0x47464Cu) {
        ctx->pc = 0x474650u;
        goto label_474650;
    }
    ctx->pc = 0x474648u;
    {
        const bool branch_taken_0x474648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x474648) {
            ctx->pc = 0x47472Cu;
            goto label_47472c;
        }
    }
    ctx->pc = 0x474650u;
label_474650:
    // 0x474650: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x474650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_474654:
    // 0x474654: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x474654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_474658:
    // 0x474658: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x474658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_47465c:
    // 0x47465c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x47465cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_474660:
    // 0x474660: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x474660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_474664:
    // 0x474664: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_474668:
    if (ctx->pc == 0x474668u) {
        ctx->pc = 0x47466Cu;
        goto label_47466c;
    }
    ctx->pc = 0x474664u;
    {
        const bool branch_taken_0x474664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x474664) {
            ctx->pc = 0x474714u;
            goto label_474714;
        }
    }
    ctx->pc = 0x47466Cu;
label_47466c:
    // 0x47466c: 0x8f82b420  lw          $v0, -0x4BE0($gp)
    ctx->pc = 0x47466cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947872)));
label_474670:
    // 0x474670: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_474674:
    if (ctx->pc == 0x474674u) {
        ctx->pc = 0x474678u;
        goto label_474678;
    }
    ctx->pc = 0x474670u;
    {
        const bool branch_taken_0x474670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474670) {
            ctx->pc = 0x474714u;
            goto label_474714;
        }
    }
    ctx->pc = 0x474678u;
label_474678:
    // 0x474678: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x474678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47467c:
    // 0x47467c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47467cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_474680:
    // 0x474680: 0x27a603a0  addiu       $a2, $sp, 0x3A0
    ctx->pc = 0x474680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_474684:
    // 0x474684: 0xc115ee8  jal         func_457BA0
label_474688:
    if (ctx->pc == 0x474688u) {
        ctx->pc = 0x47468Cu;
        goto label_47468c;
    }
    ctx->pc = 0x474684u;
    SET_GPR_U32(ctx, 31, 0x47468Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x474684u, 0x47468Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47468Cu;
label_47468c:
    // 0x47468c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_474690:
    if (ctx->pc == 0x474690u) {
        ctx->pc = 0x474694u;
        goto label_474694;
    }
    ctx->pc = 0x47468Cu;
    {
        const bool branch_taken_0x47468c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47468c) {
            ctx->pc = 0x474714u;
            goto label_474714;
        }
    }
    ctx->pc = 0x474694u;
label_474694:
    // 0x474694: 0x8fa203a8  lw          $v0, 0x3A8($sp)
    ctx->pc = 0x474694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_474698:
    // 0x474698: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_47469c:
    if (ctx->pc == 0x47469Cu) {
        ctx->pc = 0x4746A0u;
        goto label_4746a0;
    }
    ctx->pc = 0x474698u;
    {
        const bool branch_taken_0x474698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x474698) {
            ctx->pc = 0x474714u;
            goto label_474714;
        }
    }
    ctx->pc = 0x4746A0u;
label_4746a0:
    // 0x4746a0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4746a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4746a4:
    // 0x4746a4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4746a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4746a8:
    // 0x4746a8: 0x8fa603a4  lw          $a2, 0x3A4($sp)
    ctx->pc = 0x4746a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 932)));
label_4746ac:
    // 0x4746ac: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4746acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4746b0:
    // 0x4746b0: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x4746b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_4746b4:
    // 0x4746b4: 0x2408017c  addiu       $t0, $zero, 0x17C
    ctx->pc = 0x4746b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
label_4746b8:
    // 0x4746b8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4746b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4746bc:
    // 0x4746bc: 0x252903c0  addiu       $t1, $t1, 0x3C0
    ctx->pc = 0x4746bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 960));
label_4746c0:
    // 0x4746c0: 0xc113940  jal         func_44E500
label_4746c4:
    if (ctx->pc == 0x4746C4u) {
        ctx->pc = 0x4746C8u;
        goto label_4746c8;
    }
    ctx->pc = 0x4746C0u;
    SET_GPR_U32(ctx, 31, 0x4746C8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4746C0u, 0x4746C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4746C8u;
label_4746c8:
    // 0x4746c8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4746c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4746cc:
    // 0x4746cc: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4746ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4746d0:
    // 0x4746d0: 0x24a50ab0  addiu       $a1, $a1, 0xAB0
    ctx->pc = 0x4746d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2736));
label_4746d4:
    // 0x4746d4: 0xc115c24  jal         func_457090
label_4746d8:
    if (ctx->pc == 0x4746D8u) {
        ctx->pc = 0x4746DCu;
        goto label_4746dc;
    }
    ctx->pc = 0x4746D4u;
    SET_GPR_U32(ctx, 31, 0x4746DCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4746D4u, 0x4746DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4746DCu;
label_4746dc:
    // 0x4746dc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4746dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4746e0:
    // 0x4746e0: 0x8fa203a8  lw          $v0, 0x3A8($sp)
    ctx->pc = 0x4746e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_4746e4:
    // 0x4746e4: 0x40f809  jalr        $v0
label_4746e8:
    if (ctx->pc == 0x4746E8u) {
        ctx->pc = 0x4746ECu;
        goto label_4746ec;
    }
    ctx->pc = 0x4746E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4746ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4746E4u, 0x4746ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4746ECu;
label_4746ec:
    // 0x4746ec: 0xaf82b420  sw          $v0, -0x4BE0($gp)
    ctx->pc = 0x4746ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947872), GPR_U32(ctx, 2));
label_4746f0:
    // 0x4746f0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4746f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4746f4:
    // 0x4746f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4746f8:
    if (ctx->pc == 0x4746F8u) {
        ctx->pc = 0x4746FCu;
        goto label_4746fc;
    }
    ctx->pc = 0x4746F4u;
    {
        const bool branch_taken_0x4746f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4746f4) {
            ctx->pc = 0x474704u;
            goto label_474704;
        }
    }
    ctx->pc = 0x4746FCu;
label_4746fc:
    // 0x4746fc: 0xd  break       0
    ctx->pc = 0x4746fcu;
    runtime->handleBreak(rdram, ctx);
label_474700:
    // 0x474700: 0x0  nop
    ctx->pc = 0x474700u;
    // NOP
label_474704:
    // 0x474704: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x474704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_474708:
    // 0x474708: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x474708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47470c:
    // 0x47470c: 0xc11392c  jal         func_44E4B0
label_474710:
    if (ctx->pc == 0x474710u) {
        ctx->pc = 0x474714u;
        goto label_474714;
    }
    ctx->pc = 0x47470Cu;
    SET_GPR_U32(ctx, 31, 0x474714u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47470Cu, 0x474714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474714u;
label_474714:
    // 0x474714: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x474714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_474718:
    // 0x474718: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x474718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_47471c:
    // 0x47471c: 0xc0ee6b4  jal         func_3B9AD0
label_474720:
    if (ctx->pc == 0x474720u) {
        ctx->pc = 0x474724u;
        goto label_474724;
    }
    ctx->pc = 0x47471Cu;
    SET_GPR_U32(ctx, 31, 0x474724u);
    ctx->pc = 0x3B9AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9AD0u, 0x47471Cu, 0x474724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474724u;
label_474724:
    // 0x474724: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x474724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_474728:
    // 0x474728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x474728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47472c:
    // 0x47472c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x47472cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_474730:
    // 0x474730: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x474730u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_474734:
    // 0x474734: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x474734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_474738:
    // 0x474738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x474738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47473c:
    // 0x47473c: 0x27bd03e0  addiu       $sp, $sp, 0x3E0
    ctx->pc = 0x47473cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_474740:
    // 0x474740: 0x3e00008  jr          $ra
label_474744:
    if (ctx->pc == 0x474744u) {
        ctx->pc = 0x474748u;
        goto label_474748;
    }
    ctx->pc = 0x474740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x474740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x474748u;
label_474748:
    // 0x474748: 0x0  nop
    ctx->pc = 0x474748u;
    // NOP
label_47474c:
    // 0x47474c: 0x0  nop
    ctx->pc = 0x47474cu;
    // NOP
    ctx->pc = 0x474750u;
}
