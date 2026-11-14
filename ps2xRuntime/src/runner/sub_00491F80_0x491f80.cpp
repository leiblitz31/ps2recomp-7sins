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

// Function: sub_00491F80
// Address: 0x491f80 - 0x492a00
void sub_00491F80_0x491f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491F80_0x491f80");
#endif

    switch (ctx->pc) {
        case 0x491f80u: goto label_491f80;
        case 0x491f84u: goto label_491f84;
        case 0x491f88u: goto label_491f88;
        case 0x491f8cu: goto label_491f8c;
        case 0x491f90u: goto label_491f90;
        case 0x491f94u: goto label_491f94;
        case 0x491f98u: goto label_491f98;
        case 0x491f9cu: goto label_491f9c;
        case 0x491fa0u: goto label_491fa0;
        case 0x491fa4u: goto label_491fa4;
        case 0x491fa8u: goto label_491fa8;
        case 0x491facu: goto label_491fac;
        case 0x491fb0u: goto label_491fb0;
        case 0x491fb4u: goto label_491fb4;
        case 0x491fb8u: goto label_491fb8;
        case 0x491fbcu: goto label_491fbc;
        case 0x491fc0u: goto label_491fc0;
        case 0x491fc4u: goto label_491fc4;
        case 0x491fc8u: goto label_491fc8;
        case 0x491fccu: goto label_491fcc;
        case 0x491fd0u: goto label_491fd0;
        case 0x491fd4u: goto label_491fd4;
        case 0x491fd8u: goto label_491fd8;
        case 0x491fdcu: goto label_491fdc;
        case 0x491fe0u: goto label_491fe0;
        case 0x491fe4u: goto label_491fe4;
        case 0x491fe8u: goto label_491fe8;
        case 0x491fecu: goto label_491fec;
        case 0x491ff0u: goto label_491ff0;
        case 0x491ff4u: goto label_491ff4;
        case 0x491ff8u: goto label_491ff8;
        case 0x491ffcu: goto label_491ffc;
        case 0x492000u: goto label_492000;
        case 0x492004u: goto label_492004;
        case 0x492008u: goto label_492008;
        case 0x49200cu: goto label_49200c;
        case 0x492010u: goto label_492010;
        case 0x492014u: goto label_492014;
        case 0x492018u: goto label_492018;
        case 0x49201cu: goto label_49201c;
        case 0x492020u: goto label_492020;
        case 0x492024u: goto label_492024;
        case 0x492028u: goto label_492028;
        case 0x49202cu: goto label_49202c;
        case 0x492030u: goto label_492030;
        case 0x492034u: goto label_492034;
        case 0x492038u: goto label_492038;
        case 0x49203cu: goto label_49203c;
        case 0x492040u: goto label_492040;
        case 0x492044u: goto label_492044;
        case 0x492048u: goto label_492048;
        case 0x49204cu: goto label_49204c;
        case 0x492050u: goto label_492050;
        case 0x492054u: goto label_492054;
        case 0x492058u: goto label_492058;
        case 0x49205cu: goto label_49205c;
        case 0x492060u: goto label_492060;
        case 0x492064u: goto label_492064;
        case 0x492068u: goto label_492068;
        case 0x49206cu: goto label_49206c;
        case 0x492070u: goto label_492070;
        case 0x492074u: goto label_492074;
        case 0x492078u: goto label_492078;
        case 0x49207cu: goto label_49207c;
        case 0x492080u: goto label_492080;
        case 0x492084u: goto label_492084;
        case 0x492088u: goto label_492088;
        case 0x49208cu: goto label_49208c;
        case 0x492090u: goto label_492090;
        case 0x492094u: goto label_492094;
        case 0x492098u: goto label_492098;
        case 0x49209cu: goto label_49209c;
        case 0x4920a0u: goto label_4920a0;
        case 0x4920a4u: goto label_4920a4;
        case 0x4920a8u: goto label_4920a8;
        case 0x4920acu: goto label_4920ac;
        case 0x4920b0u: goto label_4920b0;
        case 0x4920b4u: goto label_4920b4;
        case 0x4920b8u: goto label_4920b8;
        case 0x4920bcu: goto label_4920bc;
        case 0x4920c0u: goto label_4920c0;
        case 0x4920c4u: goto label_4920c4;
        case 0x4920c8u: goto label_4920c8;
        case 0x4920ccu: goto label_4920cc;
        case 0x4920d0u: goto label_4920d0;
        case 0x4920d4u: goto label_4920d4;
        case 0x4920d8u: goto label_4920d8;
        case 0x4920dcu: goto label_4920dc;
        case 0x4920e0u: goto label_4920e0;
        case 0x4920e4u: goto label_4920e4;
        case 0x4920e8u: goto label_4920e8;
        case 0x4920ecu: goto label_4920ec;
        case 0x4920f0u: goto label_4920f0;
        case 0x4920f4u: goto label_4920f4;
        case 0x4920f8u: goto label_4920f8;
        case 0x4920fcu: goto label_4920fc;
        case 0x492100u: goto label_492100;
        case 0x492104u: goto label_492104;
        case 0x492108u: goto label_492108;
        case 0x49210cu: goto label_49210c;
        case 0x492110u: goto label_492110;
        case 0x492114u: goto label_492114;
        case 0x492118u: goto label_492118;
        case 0x49211cu: goto label_49211c;
        case 0x492120u: goto label_492120;
        case 0x492124u: goto label_492124;
        case 0x492128u: goto label_492128;
        case 0x49212cu: goto label_49212c;
        case 0x492130u: goto label_492130;
        case 0x492134u: goto label_492134;
        case 0x492138u: goto label_492138;
        case 0x49213cu: goto label_49213c;
        case 0x492140u: goto label_492140;
        case 0x492144u: goto label_492144;
        case 0x492148u: goto label_492148;
        case 0x49214cu: goto label_49214c;
        case 0x492150u: goto label_492150;
        case 0x492154u: goto label_492154;
        case 0x492158u: goto label_492158;
        case 0x49215cu: goto label_49215c;
        case 0x492160u: goto label_492160;
        case 0x492164u: goto label_492164;
        case 0x492168u: goto label_492168;
        case 0x49216cu: goto label_49216c;
        case 0x492170u: goto label_492170;
        case 0x492174u: goto label_492174;
        case 0x492178u: goto label_492178;
        case 0x49217cu: goto label_49217c;
        case 0x492180u: goto label_492180;
        case 0x492184u: goto label_492184;
        case 0x492188u: goto label_492188;
        case 0x49218cu: goto label_49218c;
        case 0x492190u: goto label_492190;
        case 0x492194u: goto label_492194;
        case 0x492198u: goto label_492198;
        case 0x49219cu: goto label_49219c;
        case 0x4921a0u: goto label_4921a0;
        case 0x4921a4u: goto label_4921a4;
        case 0x4921a8u: goto label_4921a8;
        case 0x4921acu: goto label_4921ac;
        case 0x4921b0u: goto label_4921b0;
        case 0x4921b4u: goto label_4921b4;
        case 0x4921b8u: goto label_4921b8;
        case 0x4921bcu: goto label_4921bc;
        case 0x4921c0u: goto label_4921c0;
        case 0x4921c4u: goto label_4921c4;
        case 0x4921c8u: goto label_4921c8;
        case 0x4921ccu: goto label_4921cc;
        case 0x4921d0u: goto label_4921d0;
        case 0x4921d4u: goto label_4921d4;
        case 0x4921d8u: goto label_4921d8;
        case 0x4921dcu: goto label_4921dc;
        case 0x4921e0u: goto label_4921e0;
        case 0x4921e4u: goto label_4921e4;
        case 0x4921e8u: goto label_4921e8;
        case 0x4921ecu: goto label_4921ec;
        case 0x4921f0u: goto label_4921f0;
        case 0x4921f4u: goto label_4921f4;
        case 0x4921f8u: goto label_4921f8;
        case 0x4921fcu: goto label_4921fc;
        case 0x492200u: goto label_492200;
        case 0x492204u: goto label_492204;
        case 0x492208u: goto label_492208;
        case 0x49220cu: goto label_49220c;
        case 0x492210u: goto label_492210;
        case 0x492214u: goto label_492214;
        case 0x492218u: goto label_492218;
        case 0x49221cu: goto label_49221c;
        case 0x492220u: goto label_492220;
        case 0x492224u: goto label_492224;
        case 0x492228u: goto label_492228;
        case 0x49222cu: goto label_49222c;
        case 0x492230u: goto label_492230;
        case 0x492234u: goto label_492234;
        case 0x492238u: goto label_492238;
        case 0x49223cu: goto label_49223c;
        case 0x492240u: goto label_492240;
        case 0x492244u: goto label_492244;
        case 0x492248u: goto label_492248;
        case 0x49224cu: goto label_49224c;
        case 0x492250u: goto label_492250;
        case 0x492254u: goto label_492254;
        case 0x492258u: goto label_492258;
        case 0x49225cu: goto label_49225c;
        case 0x492260u: goto label_492260;
        case 0x492264u: goto label_492264;
        case 0x492268u: goto label_492268;
        case 0x49226cu: goto label_49226c;
        case 0x492270u: goto label_492270;
        case 0x492274u: goto label_492274;
        case 0x492278u: goto label_492278;
        case 0x49227cu: goto label_49227c;
        case 0x492280u: goto label_492280;
        case 0x492284u: goto label_492284;
        case 0x492288u: goto label_492288;
        case 0x49228cu: goto label_49228c;
        case 0x492290u: goto label_492290;
        case 0x492294u: goto label_492294;
        case 0x492298u: goto label_492298;
        case 0x49229cu: goto label_49229c;
        case 0x4922a0u: goto label_4922a0;
        case 0x4922a4u: goto label_4922a4;
        case 0x4922a8u: goto label_4922a8;
        case 0x4922acu: goto label_4922ac;
        case 0x4922b0u: goto label_4922b0;
        case 0x4922b4u: goto label_4922b4;
        case 0x4922b8u: goto label_4922b8;
        case 0x4922bcu: goto label_4922bc;
        case 0x4922c0u: goto label_4922c0;
        case 0x4922c4u: goto label_4922c4;
        case 0x4922c8u: goto label_4922c8;
        case 0x4922ccu: goto label_4922cc;
        case 0x4922d0u: goto label_4922d0;
        case 0x4922d4u: goto label_4922d4;
        case 0x4922d8u: goto label_4922d8;
        case 0x4922dcu: goto label_4922dc;
        case 0x4922e0u: goto label_4922e0;
        case 0x4922e4u: goto label_4922e4;
        case 0x4922e8u: goto label_4922e8;
        case 0x4922ecu: goto label_4922ec;
        case 0x4922f0u: goto label_4922f0;
        case 0x4922f4u: goto label_4922f4;
        case 0x4922f8u: goto label_4922f8;
        case 0x4922fcu: goto label_4922fc;
        case 0x492300u: goto label_492300;
        case 0x492304u: goto label_492304;
        case 0x492308u: goto label_492308;
        case 0x49230cu: goto label_49230c;
        case 0x492310u: goto label_492310;
        case 0x492314u: goto label_492314;
        case 0x492318u: goto label_492318;
        case 0x49231cu: goto label_49231c;
        case 0x492320u: goto label_492320;
        case 0x492324u: goto label_492324;
        case 0x492328u: goto label_492328;
        case 0x49232cu: goto label_49232c;
        case 0x492330u: goto label_492330;
        case 0x492334u: goto label_492334;
        case 0x492338u: goto label_492338;
        case 0x49233cu: goto label_49233c;
        case 0x492340u: goto label_492340;
        case 0x492344u: goto label_492344;
        case 0x492348u: goto label_492348;
        case 0x49234cu: goto label_49234c;
        case 0x492350u: goto label_492350;
        case 0x492354u: goto label_492354;
        case 0x492358u: goto label_492358;
        case 0x49235cu: goto label_49235c;
        case 0x492360u: goto label_492360;
        case 0x492364u: goto label_492364;
        case 0x492368u: goto label_492368;
        case 0x49236cu: goto label_49236c;
        case 0x492370u: goto label_492370;
        case 0x492374u: goto label_492374;
        case 0x492378u: goto label_492378;
        case 0x49237cu: goto label_49237c;
        case 0x492380u: goto label_492380;
        case 0x492384u: goto label_492384;
        case 0x492388u: goto label_492388;
        case 0x49238cu: goto label_49238c;
        case 0x492390u: goto label_492390;
        case 0x492394u: goto label_492394;
        case 0x492398u: goto label_492398;
        case 0x49239cu: goto label_49239c;
        case 0x4923a0u: goto label_4923a0;
        case 0x4923a4u: goto label_4923a4;
        case 0x4923a8u: goto label_4923a8;
        case 0x4923acu: goto label_4923ac;
        case 0x4923b0u: goto label_4923b0;
        case 0x4923b4u: goto label_4923b4;
        case 0x4923b8u: goto label_4923b8;
        case 0x4923bcu: goto label_4923bc;
        case 0x4923c0u: goto label_4923c0;
        case 0x4923c4u: goto label_4923c4;
        case 0x4923c8u: goto label_4923c8;
        case 0x4923ccu: goto label_4923cc;
        case 0x4923d0u: goto label_4923d0;
        case 0x4923d4u: goto label_4923d4;
        case 0x4923d8u: goto label_4923d8;
        case 0x4923dcu: goto label_4923dc;
        case 0x4923e0u: goto label_4923e0;
        case 0x4923e4u: goto label_4923e4;
        case 0x4923e8u: goto label_4923e8;
        case 0x4923ecu: goto label_4923ec;
        case 0x4923f0u: goto label_4923f0;
        case 0x4923f4u: goto label_4923f4;
        case 0x4923f8u: goto label_4923f8;
        case 0x4923fcu: goto label_4923fc;
        case 0x492400u: goto label_492400;
        case 0x492404u: goto label_492404;
        case 0x492408u: goto label_492408;
        case 0x49240cu: goto label_49240c;
        case 0x492410u: goto label_492410;
        case 0x492414u: goto label_492414;
        case 0x492418u: goto label_492418;
        case 0x49241cu: goto label_49241c;
        case 0x492420u: goto label_492420;
        case 0x492424u: goto label_492424;
        case 0x492428u: goto label_492428;
        case 0x49242cu: goto label_49242c;
        case 0x492430u: goto label_492430;
        case 0x492434u: goto label_492434;
        case 0x492438u: goto label_492438;
        case 0x49243cu: goto label_49243c;
        case 0x492440u: goto label_492440;
        case 0x492444u: goto label_492444;
        case 0x492448u: goto label_492448;
        case 0x49244cu: goto label_49244c;
        case 0x492450u: goto label_492450;
        case 0x492454u: goto label_492454;
        case 0x492458u: goto label_492458;
        case 0x49245cu: goto label_49245c;
        case 0x492460u: goto label_492460;
        case 0x492464u: goto label_492464;
        case 0x492468u: goto label_492468;
        case 0x49246cu: goto label_49246c;
        case 0x492470u: goto label_492470;
        case 0x492474u: goto label_492474;
        case 0x492478u: goto label_492478;
        case 0x49247cu: goto label_49247c;
        case 0x492480u: goto label_492480;
        case 0x492484u: goto label_492484;
        case 0x492488u: goto label_492488;
        case 0x49248cu: goto label_49248c;
        case 0x492490u: goto label_492490;
        case 0x492494u: goto label_492494;
        case 0x492498u: goto label_492498;
        case 0x49249cu: goto label_49249c;
        case 0x4924a0u: goto label_4924a0;
        case 0x4924a4u: goto label_4924a4;
        case 0x4924a8u: goto label_4924a8;
        case 0x4924acu: goto label_4924ac;
        case 0x4924b0u: goto label_4924b0;
        case 0x4924b4u: goto label_4924b4;
        case 0x4924b8u: goto label_4924b8;
        case 0x4924bcu: goto label_4924bc;
        case 0x4924c0u: goto label_4924c0;
        case 0x4924c4u: goto label_4924c4;
        case 0x4924c8u: goto label_4924c8;
        case 0x4924ccu: goto label_4924cc;
        case 0x4924d0u: goto label_4924d0;
        case 0x4924d4u: goto label_4924d4;
        case 0x4924d8u: goto label_4924d8;
        case 0x4924dcu: goto label_4924dc;
        case 0x4924e0u: goto label_4924e0;
        case 0x4924e4u: goto label_4924e4;
        case 0x4924e8u: goto label_4924e8;
        case 0x4924ecu: goto label_4924ec;
        case 0x4924f0u: goto label_4924f0;
        case 0x4924f4u: goto label_4924f4;
        case 0x4924f8u: goto label_4924f8;
        case 0x4924fcu: goto label_4924fc;
        case 0x492500u: goto label_492500;
        case 0x492504u: goto label_492504;
        case 0x492508u: goto label_492508;
        case 0x49250cu: goto label_49250c;
        case 0x492510u: goto label_492510;
        case 0x492514u: goto label_492514;
        case 0x492518u: goto label_492518;
        case 0x49251cu: goto label_49251c;
        case 0x492520u: goto label_492520;
        case 0x492524u: goto label_492524;
        case 0x492528u: goto label_492528;
        case 0x49252cu: goto label_49252c;
        case 0x492530u: goto label_492530;
        case 0x492534u: goto label_492534;
        case 0x492538u: goto label_492538;
        case 0x49253cu: goto label_49253c;
        case 0x492540u: goto label_492540;
        case 0x492544u: goto label_492544;
        case 0x492548u: goto label_492548;
        case 0x49254cu: goto label_49254c;
        case 0x492550u: goto label_492550;
        case 0x492554u: goto label_492554;
        case 0x492558u: goto label_492558;
        case 0x49255cu: goto label_49255c;
        case 0x492560u: goto label_492560;
        case 0x492564u: goto label_492564;
        case 0x492568u: goto label_492568;
        case 0x49256cu: goto label_49256c;
        case 0x492570u: goto label_492570;
        case 0x492574u: goto label_492574;
        case 0x492578u: goto label_492578;
        case 0x49257cu: goto label_49257c;
        case 0x492580u: goto label_492580;
        case 0x492584u: goto label_492584;
        case 0x492588u: goto label_492588;
        case 0x49258cu: goto label_49258c;
        case 0x492590u: goto label_492590;
        case 0x492594u: goto label_492594;
        case 0x492598u: goto label_492598;
        case 0x49259cu: goto label_49259c;
        case 0x4925a0u: goto label_4925a0;
        case 0x4925a4u: goto label_4925a4;
        case 0x4925a8u: goto label_4925a8;
        case 0x4925acu: goto label_4925ac;
        case 0x4925b0u: goto label_4925b0;
        case 0x4925b4u: goto label_4925b4;
        case 0x4925b8u: goto label_4925b8;
        case 0x4925bcu: goto label_4925bc;
        case 0x4925c0u: goto label_4925c0;
        case 0x4925c4u: goto label_4925c4;
        case 0x4925c8u: goto label_4925c8;
        case 0x4925ccu: goto label_4925cc;
        case 0x4925d0u: goto label_4925d0;
        case 0x4925d4u: goto label_4925d4;
        case 0x4925d8u: goto label_4925d8;
        case 0x4925dcu: goto label_4925dc;
        case 0x4925e0u: goto label_4925e0;
        case 0x4925e4u: goto label_4925e4;
        case 0x4925e8u: goto label_4925e8;
        case 0x4925ecu: goto label_4925ec;
        case 0x4925f0u: goto label_4925f0;
        case 0x4925f4u: goto label_4925f4;
        case 0x4925f8u: goto label_4925f8;
        case 0x4925fcu: goto label_4925fc;
        case 0x492600u: goto label_492600;
        case 0x492604u: goto label_492604;
        case 0x492608u: goto label_492608;
        case 0x49260cu: goto label_49260c;
        case 0x492610u: goto label_492610;
        case 0x492614u: goto label_492614;
        case 0x492618u: goto label_492618;
        case 0x49261cu: goto label_49261c;
        case 0x492620u: goto label_492620;
        case 0x492624u: goto label_492624;
        case 0x492628u: goto label_492628;
        case 0x49262cu: goto label_49262c;
        case 0x492630u: goto label_492630;
        case 0x492634u: goto label_492634;
        case 0x492638u: goto label_492638;
        case 0x49263cu: goto label_49263c;
        case 0x492640u: goto label_492640;
        case 0x492644u: goto label_492644;
        case 0x492648u: goto label_492648;
        case 0x49264cu: goto label_49264c;
        case 0x492650u: goto label_492650;
        case 0x492654u: goto label_492654;
        case 0x492658u: goto label_492658;
        case 0x49265cu: goto label_49265c;
        case 0x492660u: goto label_492660;
        case 0x492664u: goto label_492664;
        case 0x492668u: goto label_492668;
        case 0x49266cu: goto label_49266c;
        case 0x492670u: goto label_492670;
        case 0x492674u: goto label_492674;
        case 0x492678u: goto label_492678;
        case 0x49267cu: goto label_49267c;
        case 0x492680u: goto label_492680;
        case 0x492684u: goto label_492684;
        case 0x492688u: goto label_492688;
        case 0x49268cu: goto label_49268c;
        case 0x492690u: goto label_492690;
        case 0x492694u: goto label_492694;
        case 0x492698u: goto label_492698;
        case 0x49269cu: goto label_49269c;
        case 0x4926a0u: goto label_4926a0;
        case 0x4926a4u: goto label_4926a4;
        case 0x4926a8u: goto label_4926a8;
        case 0x4926acu: goto label_4926ac;
        case 0x4926b0u: goto label_4926b0;
        case 0x4926b4u: goto label_4926b4;
        case 0x4926b8u: goto label_4926b8;
        case 0x4926bcu: goto label_4926bc;
        case 0x4926c0u: goto label_4926c0;
        case 0x4926c4u: goto label_4926c4;
        case 0x4926c8u: goto label_4926c8;
        case 0x4926ccu: goto label_4926cc;
        case 0x4926d0u: goto label_4926d0;
        case 0x4926d4u: goto label_4926d4;
        case 0x4926d8u: goto label_4926d8;
        case 0x4926dcu: goto label_4926dc;
        case 0x4926e0u: goto label_4926e0;
        case 0x4926e4u: goto label_4926e4;
        case 0x4926e8u: goto label_4926e8;
        case 0x4926ecu: goto label_4926ec;
        case 0x4926f0u: goto label_4926f0;
        case 0x4926f4u: goto label_4926f4;
        case 0x4926f8u: goto label_4926f8;
        case 0x4926fcu: goto label_4926fc;
        case 0x492700u: goto label_492700;
        case 0x492704u: goto label_492704;
        case 0x492708u: goto label_492708;
        case 0x49270cu: goto label_49270c;
        case 0x492710u: goto label_492710;
        case 0x492714u: goto label_492714;
        case 0x492718u: goto label_492718;
        case 0x49271cu: goto label_49271c;
        case 0x492720u: goto label_492720;
        case 0x492724u: goto label_492724;
        case 0x492728u: goto label_492728;
        case 0x49272cu: goto label_49272c;
        case 0x492730u: goto label_492730;
        case 0x492734u: goto label_492734;
        case 0x492738u: goto label_492738;
        case 0x49273cu: goto label_49273c;
        case 0x492740u: goto label_492740;
        case 0x492744u: goto label_492744;
        case 0x492748u: goto label_492748;
        case 0x49274cu: goto label_49274c;
        case 0x492750u: goto label_492750;
        case 0x492754u: goto label_492754;
        case 0x492758u: goto label_492758;
        case 0x49275cu: goto label_49275c;
        case 0x492760u: goto label_492760;
        case 0x492764u: goto label_492764;
        case 0x492768u: goto label_492768;
        case 0x49276cu: goto label_49276c;
        case 0x492770u: goto label_492770;
        case 0x492774u: goto label_492774;
        case 0x492778u: goto label_492778;
        case 0x49277cu: goto label_49277c;
        case 0x492780u: goto label_492780;
        case 0x492784u: goto label_492784;
        case 0x492788u: goto label_492788;
        case 0x49278cu: goto label_49278c;
        case 0x492790u: goto label_492790;
        case 0x492794u: goto label_492794;
        case 0x492798u: goto label_492798;
        case 0x49279cu: goto label_49279c;
        case 0x4927a0u: goto label_4927a0;
        case 0x4927a4u: goto label_4927a4;
        case 0x4927a8u: goto label_4927a8;
        case 0x4927acu: goto label_4927ac;
        case 0x4927b0u: goto label_4927b0;
        case 0x4927b4u: goto label_4927b4;
        case 0x4927b8u: goto label_4927b8;
        case 0x4927bcu: goto label_4927bc;
        case 0x4927c0u: goto label_4927c0;
        case 0x4927c4u: goto label_4927c4;
        case 0x4927c8u: goto label_4927c8;
        case 0x4927ccu: goto label_4927cc;
        case 0x4927d0u: goto label_4927d0;
        case 0x4927d4u: goto label_4927d4;
        case 0x4927d8u: goto label_4927d8;
        case 0x4927dcu: goto label_4927dc;
        case 0x4927e0u: goto label_4927e0;
        case 0x4927e4u: goto label_4927e4;
        case 0x4927e8u: goto label_4927e8;
        case 0x4927ecu: goto label_4927ec;
        case 0x4927f0u: goto label_4927f0;
        case 0x4927f4u: goto label_4927f4;
        case 0x4927f8u: goto label_4927f8;
        case 0x4927fcu: goto label_4927fc;
        case 0x492800u: goto label_492800;
        case 0x492804u: goto label_492804;
        case 0x492808u: goto label_492808;
        case 0x49280cu: goto label_49280c;
        case 0x492810u: goto label_492810;
        case 0x492814u: goto label_492814;
        case 0x492818u: goto label_492818;
        case 0x49281cu: goto label_49281c;
        case 0x492820u: goto label_492820;
        case 0x492824u: goto label_492824;
        case 0x492828u: goto label_492828;
        case 0x49282cu: goto label_49282c;
        case 0x492830u: goto label_492830;
        case 0x492834u: goto label_492834;
        case 0x492838u: goto label_492838;
        case 0x49283cu: goto label_49283c;
        case 0x492840u: goto label_492840;
        case 0x492844u: goto label_492844;
        case 0x492848u: goto label_492848;
        case 0x49284cu: goto label_49284c;
        case 0x492850u: goto label_492850;
        case 0x492854u: goto label_492854;
        case 0x492858u: goto label_492858;
        case 0x49285cu: goto label_49285c;
        case 0x492860u: goto label_492860;
        case 0x492864u: goto label_492864;
        case 0x492868u: goto label_492868;
        case 0x49286cu: goto label_49286c;
        case 0x492870u: goto label_492870;
        case 0x492874u: goto label_492874;
        case 0x492878u: goto label_492878;
        case 0x49287cu: goto label_49287c;
        case 0x492880u: goto label_492880;
        case 0x492884u: goto label_492884;
        case 0x492888u: goto label_492888;
        case 0x49288cu: goto label_49288c;
        case 0x492890u: goto label_492890;
        case 0x492894u: goto label_492894;
        case 0x492898u: goto label_492898;
        case 0x49289cu: goto label_49289c;
        case 0x4928a0u: goto label_4928a0;
        case 0x4928a4u: goto label_4928a4;
        case 0x4928a8u: goto label_4928a8;
        case 0x4928acu: goto label_4928ac;
        case 0x4928b0u: goto label_4928b0;
        case 0x4928b4u: goto label_4928b4;
        case 0x4928b8u: goto label_4928b8;
        case 0x4928bcu: goto label_4928bc;
        case 0x4928c0u: goto label_4928c0;
        case 0x4928c4u: goto label_4928c4;
        case 0x4928c8u: goto label_4928c8;
        case 0x4928ccu: goto label_4928cc;
        case 0x4928d0u: goto label_4928d0;
        case 0x4928d4u: goto label_4928d4;
        case 0x4928d8u: goto label_4928d8;
        case 0x4928dcu: goto label_4928dc;
        case 0x4928e0u: goto label_4928e0;
        case 0x4928e4u: goto label_4928e4;
        case 0x4928e8u: goto label_4928e8;
        case 0x4928ecu: goto label_4928ec;
        case 0x4928f0u: goto label_4928f0;
        case 0x4928f4u: goto label_4928f4;
        case 0x4928f8u: goto label_4928f8;
        case 0x4928fcu: goto label_4928fc;
        case 0x492900u: goto label_492900;
        case 0x492904u: goto label_492904;
        case 0x492908u: goto label_492908;
        case 0x49290cu: goto label_49290c;
        case 0x492910u: goto label_492910;
        case 0x492914u: goto label_492914;
        case 0x492918u: goto label_492918;
        case 0x49291cu: goto label_49291c;
        case 0x492920u: goto label_492920;
        case 0x492924u: goto label_492924;
        case 0x492928u: goto label_492928;
        case 0x49292cu: goto label_49292c;
        case 0x492930u: goto label_492930;
        case 0x492934u: goto label_492934;
        case 0x492938u: goto label_492938;
        case 0x49293cu: goto label_49293c;
        case 0x492940u: goto label_492940;
        case 0x492944u: goto label_492944;
        case 0x492948u: goto label_492948;
        case 0x49294cu: goto label_49294c;
        case 0x492950u: goto label_492950;
        case 0x492954u: goto label_492954;
        case 0x492958u: goto label_492958;
        case 0x49295cu: goto label_49295c;
        case 0x492960u: goto label_492960;
        case 0x492964u: goto label_492964;
        case 0x492968u: goto label_492968;
        case 0x49296cu: goto label_49296c;
        case 0x492970u: goto label_492970;
        case 0x492974u: goto label_492974;
        case 0x492978u: goto label_492978;
        case 0x49297cu: goto label_49297c;
        case 0x492980u: goto label_492980;
        case 0x492984u: goto label_492984;
        case 0x492988u: goto label_492988;
        case 0x49298cu: goto label_49298c;
        case 0x492990u: goto label_492990;
        case 0x492994u: goto label_492994;
        case 0x492998u: goto label_492998;
        case 0x49299cu: goto label_49299c;
        case 0x4929a0u: goto label_4929a0;
        case 0x4929a4u: goto label_4929a4;
        case 0x4929a8u: goto label_4929a8;
        case 0x4929acu: goto label_4929ac;
        case 0x4929b0u: goto label_4929b0;
        case 0x4929b4u: goto label_4929b4;
        case 0x4929b8u: goto label_4929b8;
        case 0x4929bcu: goto label_4929bc;
        case 0x4929c0u: goto label_4929c0;
        case 0x4929c4u: goto label_4929c4;
        case 0x4929c8u: goto label_4929c8;
        case 0x4929ccu: goto label_4929cc;
        case 0x4929d0u: goto label_4929d0;
        case 0x4929d4u: goto label_4929d4;
        case 0x4929d8u: goto label_4929d8;
        case 0x4929dcu: goto label_4929dc;
        case 0x4929e0u: goto label_4929e0;
        case 0x4929e4u: goto label_4929e4;
        case 0x4929e8u: goto label_4929e8;
        case 0x4929ecu: goto label_4929ec;
        case 0x4929f0u: goto label_4929f0;
        case 0x4929f4u: goto label_4929f4;
        case 0x4929f8u: goto label_4929f8;
        case 0x4929fcu: goto label_4929fc;
        default: break;
    }

    ctx->pc = 0x491f80u;

label_491f80:
    // 0x491f80: 0x27bdfa10  addiu       $sp, $sp, -0x5F0
    ctx->pc = 0x491f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965776));
label_491f84:
    // 0x491f84: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x491f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_491f88:
    // 0x491f88: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x491f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_491f8c:
    // 0x491f8c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x491f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_491f90:
    // 0x491f90: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x491f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_491f94:
    // 0x491f94: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x491f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_491f98:
    // 0x491f98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x491f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_491f9c:
    // 0x491f9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x491f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_491fa0:
    // 0x491fa0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x491fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_491fa4:
    // 0x491fa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x491fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_491fa8:
    // 0x491fa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x491fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_491fac:
    // 0x491fac: 0x8f82c0f4  lw          $v0, -0x3F0C($gp)
    ctx->pc = 0x491facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951156)));
label_491fb0:
    // 0x491fb0: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_491fb4:
    if (ctx->pc == 0x491FB4u) {
        ctx->pc = 0x491FB8u;
        goto label_491fb8;
    }
    ctx->pc = 0x491FB0u;
    {
        const bool branch_taken_0x491fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x491fb0) {
            ctx->pc = 0x49205Cu;
            goto label_49205c;
        }
    }
    ctx->pc = 0x491FB8u;
label_491fb8:
    // 0x491fb8: 0x8f82b6f8  lw          $v0, -0x4908($gp)
    ctx->pc = 0x491fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948600)));
label_491fbc:
    // 0x491fbc: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_491fc0:
    if (ctx->pc == 0x491FC0u) {
        ctx->pc = 0x491FC4u;
        goto label_491fc4;
    }
    ctx->pc = 0x491FBCu;
    {
        const bool branch_taken_0x491fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491fbc) {
            ctx->pc = 0x49205Cu;
            goto label_49205c;
        }
    }
    ctx->pc = 0x491FC4u;
label_491fc4:
    // 0x491fc4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x491fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_491fc8:
    // 0x491fc8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x491fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_491fcc:
    // 0x491fcc: 0x27a60580  addiu       $a2, $sp, 0x580
    ctx->pc = 0x491fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
label_491fd0:
    // 0x491fd0: 0xc115ee8  jal         func_457BA0
label_491fd4:
    if (ctx->pc == 0x491FD4u) {
        ctx->pc = 0x491FD8u;
        goto label_491fd8;
    }
    ctx->pc = 0x491FD0u;
    SET_GPR_U32(ctx, 31, 0x491FD8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x491FD0u, 0x491FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491FD8u;
label_491fd8:
    // 0x491fd8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_491fdc:
    if (ctx->pc == 0x491FDCu) {
        ctx->pc = 0x491FE0u;
        goto label_491fe0;
    }
    ctx->pc = 0x491FD8u;
    {
        const bool branch_taken_0x491fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491fd8) {
            ctx->pc = 0x49205Cu;
            goto label_49205c;
        }
    }
    ctx->pc = 0x491FE0u;
label_491fe0:
    // 0x491fe0: 0x8fa20588  lw          $v0, 0x588($sp)
    ctx->pc = 0x491fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1416)));
label_491fe4:
    // 0x491fe4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_491fe8:
    if (ctx->pc == 0x491FE8u) {
        ctx->pc = 0x491FECu;
        goto label_491fec;
    }
    ctx->pc = 0x491FE4u;
    {
        const bool branch_taken_0x491fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491fe4) {
            ctx->pc = 0x49205Cu;
            goto label_49205c;
        }
    }
    ctx->pc = 0x491FECu;
label_491fec:
    // 0x491fec: 0x27a40460  addiu       $a0, $sp, 0x460
    ctx->pc = 0x491fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_491ff0:
    // 0x491ff0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x491ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_491ff4:
    // 0x491ff4: 0x8fa60584  lw          $a2, 0x584($sp)
    ctx->pc = 0x491ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1412)));
label_491ff8:
    // 0x491ff8: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x491ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_491ffc:
    // 0x491ffc: 0x24e75050  addiu       $a3, $a3, 0x5050
    ctx->pc = 0x491ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20560));
label_492000:
    // 0x492000: 0x24080127  addiu       $t0, $zero, 0x127
    ctx->pc = 0x492000u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
label_492004:
    // 0x492004: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x492004u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_492008:
    // 0x492008: 0x25295070  addiu       $t1, $t1, 0x5070
    ctx->pc = 0x492008u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20592));
label_49200c:
    // 0x49200c: 0xc113940  jal         func_44E500
label_492010:
    if (ctx->pc == 0x492010u) {
        ctx->pc = 0x492014u;
        goto label_492014;
    }
    ctx->pc = 0x49200Cu;
    SET_GPR_U32(ctx, 31, 0x492014u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x49200Cu, 0x492014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492014u;
label_492014:
    // 0x492014: 0x27a40460  addiu       $a0, $sp, 0x460
    ctx->pc = 0x492014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_492018:
    // 0x492018: 0x2785b6e0  addiu       $a1, $gp, -0x4920
    ctx->pc = 0x492018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948576));
label_49201c:
    // 0x49201c: 0xc115c24  jal         func_457090
label_492020:
    if (ctx->pc == 0x492020u) {
        ctx->pc = 0x492024u;
        goto label_492024;
    }
    ctx->pc = 0x49201Cu;
    SET_GPR_U32(ctx, 31, 0x492024u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x49201Cu, 0x492024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492024u;
label_492024:
    // 0x492024: 0x27a40460  addiu       $a0, $sp, 0x460
    ctx->pc = 0x492024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_492028:
    // 0x492028: 0x8fa20588  lw          $v0, 0x588($sp)
    ctx->pc = 0x492028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1416)));
label_49202c:
    // 0x49202c: 0x40f809  jalr        $v0
label_492030:
    if (ctx->pc == 0x492030u) {
        ctx->pc = 0x492034u;
        goto label_492034;
    }
    ctx->pc = 0x49202Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x492034u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49202Cu, 0x492034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x492034u;
label_492034:
    // 0x492034: 0xaf82b6f8  sw          $v0, -0x4908($gp)
    ctx->pc = 0x492034u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948600), GPR_U32(ctx, 2));
label_492038:
    // 0x492038: 0x8fa40460  lw          $a0, 0x460($sp)
    ctx->pc = 0x492038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1120)));
label_49203c:
    // 0x49203c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_492040:
    if (ctx->pc == 0x492040u) {
        ctx->pc = 0x492044u;
        goto label_492044;
    }
    ctx->pc = 0x49203Cu;
    {
        const bool branch_taken_0x49203c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49203c) {
            ctx->pc = 0x49204Cu;
            goto label_49204c;
        }
    }
    ctx->pc = 0x492044u;
label_492044:
    // 0x492044: 0xd  break       0
    ctx->pc = 0x492044u;
    runtime->handleBreak(rdram, ctx);
label_492048:
    // 0x492048: 0x0  nop
    ctx->pc = 0x492048u;
    // NOP
label_49204c:
    // 0x49204c: 0x27a40460  addiu       $a0, $sp, 0x460
    ctx->pc = 0x49204cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_492050:
    // 0x492050: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x492050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_492054:
    // 0x492054: 0xc11392c  jal         func_44E4B0
label_492058:
    if (ctx->pc == 0x492058u) {
        ctx->pc = 0x49205Cu;
        goto label_49205c;
    }
    ctx->pc = 0x492054u;
    SET_GPR_U32(ctx, 31, 0x49205Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x492054u, 0x49205Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49205Cu;
label_49205c:
    // 0x49205c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x49205cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_492060:
    // 0x492060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492064:
    // 0x492064: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x492064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_492068:
    // 0x492068: 0x8f84c0f8  lw          $a0, -0x3F08($gp)
    ctx->pc = 0x492068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951160)));
label_49206c:
    // 0x49206c: 0xc124528  jal         func_4914A0
label_492070:
    if (ctx->pc == 0x492070u) {
        ctx->pc = 0x492074u;
        goto label_492074;
    }
    ctx->pc = 0x49206Cu;
    SET_GPR_U32(ctx, 31, 0x492074u);
    ctx->pc = 0x4914A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4914A0u, 0x49206Cu, 0x492074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492074u;
label_492074:
    // 0x492074: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x492074u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_492078:
    // 0x492078: 0x1660024d  bnez        $s3, . + 4 + (0x24D << 2)
label_49207c:
    if (ctx->pc == 0x49207Cu) {
        ctx->pc = 0x492080u;
        goto label_492080;
    }
    ctx->pc = 0x492078u;
    {
        const bool branch_taken_0x492078 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x492078) {
            ctx->pc = 0x4929B0u;
            goto label_4929b0;
        }
    }
    ctx->pc = 0x492080u;
label_492080:
    // 0x492080: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x492080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_492084:
    // 0x492084: 0x10000250  b           . + 4 + (0x250 << 2)
label_492088:
    if (ctx->pc == 0x492088u) {
        ctx->pc = 0x49208Cu;
        goto label_49208c;
    }
    ctx->pc = 0x492084u;
    {
        const bool branch_taken_0x492084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492084) {
            ctx->pc = 0x4929C8u;
            goto label_4929c8;
        }
    }
    ctx->pc = 0x49208Cu;
label_49208c:
    // 0x49208c: 0x8f84c0f8  lw          $a0, -0x3F08($gp)
    ctx->pc = 0x49208cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951160)));
label_492090:
    // 0x492090: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x492090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_492094:
    // 0x492094: 0xc124a80  jal         func_492A00
label_492098:
    if (ctx->pc == 0x492098u) {
        ctx->pc = 0x49209Cu;
        goto label_49209c;
    }
    ctx->pc = 0x492094u;
    SET_GPR_U32(ctx, 31, 0x49209Cu);
    ctx->pc = 0x492A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492A00u, 0x492094u, 0x49209Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49209Cu;
label_49209c:
    // 0x49209c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x49209cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4920a0:
    // 0x4920a0: 0x2c41001f  sltiu       $at, $v0, 0x1F
    ctx->pc = 0x4920a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
label_4920a4:
    // 0x4920a4: 0x10200240  beqz        $at, . + 4 + (0x240 << 2)
label_4920a8:
    if (ctx->pc == 0x4920A8u) {
        ctx->pc = 0x4920ACu;
        goto label_4920ac;
    }
    ctx->pc = 0x4920A4u;
    {
        const bool branch_taken_0x4920a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4920a4) {
            ctx->pc = 0x4929A8u;
            goto label_4929a8;
        }
    }
    ctx->pc = 0x4920ACu;
label_4920ac:
    // 0x4920ac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x4920acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_4920b0:
    // 0x4920b0: 0x24631bb0  addiu       $v1, $v1, 0x1BB0
    ctx->pc = 0x4920b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7088));
label_4920b4:
    // 0x4920b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4920b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4920b8:
    // 0x4920b8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x4920b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4920bc:
    // 0x4920bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4920bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4920c0:
    // 0x4920c0: 0x400008  jr          $v0
label_4920c4:
    if (ctx->pc == 0x4920C4u) {
        ctx->pc = 0x4920C8u;
        goto label_4920c8;
    }
    ctx->pc = 0x4920C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4920C8u: goto label_4920c8;
            case 0x4920DCu: goto label_4920dc;
            case 0x4920F0u: goto label_4920f0;
            case 0x492104u: goto label_492104;
            case 0x492118u: goto label_492118;
            case 0x4921E4u: goto label_4921e4;
            case 0x4921F8u: goto label_4921f8;
            case 0x49237Cu: goto label_49237c;
            case 0x492390u: goto label_492390;
            case 0x4923A4u: goto label_4923a4;
            case 0x4923B4u: goto label_4923b4;
            case 0x4923C8u: goto label_4923c8;
            case 0x4923DCu: goto label_4923dc;
            case 0x4923F0u: goto label_4923f0;
            case 0x492404u: goto label_492404;
            case 0x492580u: goto label_492580;
            case 0x492594u: goto label_492594;
            case 0x4925A8u: goto label_4925a8;
            case 0x4925BCu: goto label_4925bc;
            case 0x4925D0u: goto label_4925d0;
            case 0x4927A4u: goto label_4927a4;
            case 0x4927B8u: goto label_4927b8;
            case 0x4927CCu: goto label_4927cc;
            case 0x4929A8u: goto label_4929a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4920C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4920C8u;
label_4920c8:
    // 0x4920c8: 0xc0c4872  jal         func_3121C8
label_4920cc:
    if (ctx->pc == 0x4920CCu) {
        ctx->pc = 0x4920D0u;
        goto label_4920d0;
    }
    ctx->pc = 0x4920C8u;
    SET_GPR_U32(ctx, 31, 0x4920D0u);
    ctx->pc = 0x3121C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3121C8u, 0x4920C8u, 0x4920D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4920D0u;
label_4920d0:
    // 0x4920d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4920d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4920d4:
    // 0x4920d4: 0x10000234  b           . + 4 + (0x234 << 2)
label_4920d8:
    if (ctx->pc == 0x4920D8u) {
        ctx->pc = 0x4920DCu;
        goto label_4920dc;
    }
    ctx->pc = 0x4920D4u;
    {
        const bool branch_taken_0x4920d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4920d4) {
            ctx->pc = 0x4929A8u;
            goto label_4929a8;
        }
    }
    ctx->pc = 0x4920DCu;
label_4920dc:
    // 0x4920dc: 0xc0c5202  jal         func_314808
label_4920e0:
    if (ctx->pc == 0x4920E0u) {
        ctx->pc = 0x4920E4u;
        goto label_4920e4;
    }
    ctx->pc = 0x4920DCu;
    SET_GPR_U32(ctx, 31, 0x4920E4u);
    ctx->pc = 0x314808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314808u, 0x4920DCu, 0x4920E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4920E4u;
label_4920e4:
    // 0x4920e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4920e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4920e8:
    // 0x4920e8: 0x1000022f  b           . + 4 + (0x22F << 2)
label_4920ec:
    if (ctx->pc == 0x4920ECu) {
        ctx->pc = 0x4920F0u;
        goto label_4920f0;
    }
    ctx->pc = 0x4920E8u;
    {
        const bool branch_taken_0x4920e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4920e8) {
            ctx->pc = 0x4929A8u;
            goto label_4929a8;
        }
    }
    ctx->pc = 0x4920F0u;
label_4920f0:
    // 0x4920f0: 0xc0c7ae2  jal         func_31EB88
label_4920f4:
    if (ctx->pc == 0x4920F4u) {
        ctx->pc = 0x4920F8u;
        goto label_4920f8;
    }
    ctx->pc = 0x4920F0u;
    SET_GPR_U32(ctx, 31, 0x4920F8u);
    ctx->pc = 0x31EB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EB88u, 0x4920F0u, 0x4920F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4920F8u;
label_4920f8:
    // 0x4920f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4920f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4920fc:
    // 0x4920fc: 0x1000022a  b           . + 4 + (0x22A << 2)
label_492100:
    if (ctx->pc == 0x492100u) {
        ctx->pc = 0x492104u;
        goto label_492104;
    }
    ctx->pc = 0x4920FCu;
    {
        const bool branch_taken_0x4920fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4920fc) {
            ctx->pc = 0x4929A8u;
            goto label_4929a8;
        }
    }
    ctx->pc = 0x492104u;
label_492104:
    // 0x492104: 0xc0c8576  jal         func_3215D8
label_492108:
    if (ctx->pc == 0x492108u) {
        ctx->pc = 0x49210Cu;
        goto label_49210c;
    }
    ctx->pc = 0x492104u;
    SET_GPR_U32(ctx, 31, 0x49210Cu);
    ctx->pc = 0x3215D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3215D8u, 0x492104u, 0x49210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49210Cu;
label_49210c:
    // 0x49210c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49210cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_492110:
    // 0x492110: 0x10000225  b           . + 4 + (0x225 << 2)
label_492114:
    if (ctx->pc == 0x492114u) {
        ctx->pc = 0x492118u;
        goto label_492118;
    }
    ctx->pc = 0x492110u;
    {
        const bool branch_taken_0x492110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492110) {
            ctx->pc = 0x4929A8u;
            goto label_4929a8;
        }
    }
    ctx->pc = 0x492118u;
label_492118:
    // 0x492118: 0xc0c8d0e  jal         func_323438
label_49211c:
    if (ctx->pc == 0x49211Cu) {
        ctx->pc = 0x492120u;
        goto label_492120;
    }
    ctx->pc = 0x492118u;
    SET_GPR_U32(ctx, 31, 0x492120u);
    ctx->pc = 0x323438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323438u, 0x492118u, 0x492120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492120u;
label_492120:
    // 0x492120: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x492120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_492124:
    // 0x492124: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x492124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_492128:
    // 0x492128: 0x24422f20  addiu       $v0, $v0, 0x2F20
    ctx->pc = 0x492128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12064));
label_49212c:
    // 0x49212c: 0xafa20440  sw          $v0, 0x440($sp)
    ctx->pc = 0x49212cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 2));
label_492130:
    // 0x492130: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_492134:
    // 0x492134: 0x34421003  ori         $v0, $v0, 0x1003
    ctx->pc = 0x492134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4099);
label_492138:
    // 0x492138: 0xafa20448  sw          $v0, 0x448($sp)
    ctx->pc = 0x492138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1096), GPR_U32(ctx, 2));
label_49213c:
    // 0x49213c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49213cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492140:
    // 0x492140: 0xafa2044c  sw          $v0, 0x44C($sp)
    ctx->pc = 0x492140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1100), GPR_U32(ctx, 2));
label_492144:
    // 0x492144: 0xafa00444  sw          $zero, 0x444($sp)
    ctx->pc = 0x492144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1092), GPR_U32(ctx, 0));
label_492148:
    // 0x492148: 0xafa00450  sw          $zero, 0x450($sp)
    ctx->pc = 0x492148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 0));
label_49214c:
    // 0x49214c: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x49214cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_492150:
    // 0x492150: 0xc0caa4a  jal         func_32A928
label_492154:
    if (ctx->pc == 0x492154u) {
        ctx->pc = 0x492158u;
        goto label_492158;
    }
    ctx->pc = 0x492150u;
    SET_GPR_U32(ctx, 31, 0x492158u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x492150u, 0x492158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492158u;
label_492158:
    // 0x492158: 0xafa205ec  sw          $v0, 0x5EC($sp)
    ctx->pc = 0x492158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1516), GPR_U32(ctx, 2));
label_49215c:
    // 0x49215c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x49215cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_492160:
    // 0x492160: 0x24422fa8  addiu       $v0, $v0, 0x2FA8
    ctx->pc = 0x492160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12200));
label_492164:
    // 0x492164: 0xafa20420  sw          $v0, 0x420($sp)
    ctx->pc = 0x492164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 2));
label_492168:
    // 0x492168: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_49216c:
    // 0x49216c: 0x34421004  ori         $v0, $v0, 0x1004
    ctx->pc = 0x49216cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4100);
label_492170:
    // 0x492170: 0xafa20428  sw          $v0, 0x428($sp)
    ctx->pc = 0x492170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1064), GPR_U32(ctx, 2));
label_492174:
    // 0x492174: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x492174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_492178:
    // 0x492178: 0xafa2042c  sw          $v0, 0x42C($sp)
    ctx->pc = 0x492178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1068), GPR_U32(ctx, 2));
label_49217c:
    // 0x49217c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x49217cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_492180:
    // 0x492180: 0x34421003  ori         $v0, $v0, 0x1003
    ctx->pc = 0x492180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4099);
label_492184:
    // 0x492184: 0xafa20424  sw          $v0, 0x424($sp)
    ctx->pc = 0x492184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1060), GPR_U32(ctx, 2));
label_492188:
    // 0x492188: 0xafa00430  sw          $zero, 0x430($sp)
    ctx->pc = 0x492188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 0));
label_49218c:
    // 0x49218c: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x49218cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_492190:
    // 0x492190: 0xc0caa4a  jal         func_32A928
label_492194:
    if (ctx->pc == 0x492194u) {
        ctx->pc = 0x492198u;
        goto label_492198;
    }
    ctx->pc = 0x492190u;
    SET_GPR_U32(ctx, 31, 0x492198u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x492190u, 0x492198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492198u;
label_492198:
    // 0x492198: 0xafa205e8  sw          $v0, 0x5E8($sp)
    ctx->pc = 0x492198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1512), GPR_U32(ctx, 2));
label_49219c:
    // 0x49219c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x49219cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_4921a0:
    // 0x4921a0: 0x24422fc0  addiu       $v0, $v0, 0x2FC0
    ctx->pc = 0x4921a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12224));
label_4921a4:
    // 0x4921a4: 0xafa20400  sw          $v0, 0x400($sp)
    ctx->pc = 0x4921a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 2));
label_4921a8:
    // 0x4921a8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4921a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4921ac:
    // 0x4921ac: 0x34421005  ori         $v0, $v0, 0x1005
    ctx->pc = 0x4921acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4101);
label_4921b0:
    // 0x4921b0: 0xafa20408  sw          $v0, 0x408($sp)
    ctx->pc = 0x4921b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 2));
label_4921b4:
    // 0x4921b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4921b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4921b8:
    // 0x4921b8: 0xafa2040c  sw          $v0, 0x40C($sp)
    ctx->pc = 0x4921b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1036), GPR_U32(ctx, 2));
label_4921bc:
    // 0x4921bc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4921bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4921c0:
    // 0x4921c0: 0x34421003  ori         $v0, $v0, 0x1003
    ctx->pc = 0x4921c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4099);
label_4921c4:
    // 0x4921c4: 0xafa20404  sw          $v0, 0x404($sp)
    ctx->pc = 0x4921c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 2));
label_4921c8:
    // 0x4921c8: 0xafa00410  sw          $zero, 0x410($sp)
    ctx->pc = 0x4921c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 0));
label_4921cc:
    // 0x4921cc: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x4921ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_4921d0:
    // 0x4921d0: 0xc0caa4a  jal         func_32A928
label_4921d4:
    if (ctx->pc == 0x4921D4u) {
        ctx->pc = 0x4921D8u;
        goto label_4921d8;
    }
    ctx->pc = 0x4921D0u;
    SET_GPR_U32(ctx, 31, 0x4921D8u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x4921D0u, 0x4921D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4921D8u;
label_4921d8:
    // 0x4921d8: 0xafa205e4  sw          $v0, 0x5E4($sp)
    ctx->pc = 0x4921d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1508), GPR_U32(ctx, 2));
label_4921dc:
    // 0x4921dc: 0x100001f2  b           . + 4 + (0x1F2 << 2)
label_4921e0:
    if (ctx->pc == 0x4921E0u) {
        ctx->pc = 0x4921E4u;
        goto label_4921e4;
    }
    ctx->pc = 0x4921DCu;
    {
        const bool branch_taken_0x4921dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4921dc) {
            ctx->pc = 0x4929A8u;
            goto label_4929a8;
        }
    }
    ctx->pc = 0x4921E4u;
label_4921e4:
    // 0x4921e4: 0xc0c87ea  jal         func_321FA8
label_4921e8:
    if (ctx->pc == 0x4921E8u) {
        ctx->pc = 0x4921ECu;
        goto label_4921ec;
    }
    ctx->pc = 0x4921E4u;
    SET_GPR_U32(ctx, 31, 0x4921ECu);
    ctx->pc = 0x321FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321FA8u, 0x4921E4u, 0x4921ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4921ECu;
label_4921ec:
    // 0x4921ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4921ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4921f0:
    // 0x4921f0: 0x100001ed  b           . + 4 + (0x1ED << 2)
label_4921f4:
    if (ctx->pc == 0x4921F4u) {
        ctx->pc = 0x4921F8u;
        goto label_4921f8;
    }
    ctx->pc = 0x4921F0u;
    {
        const bool branch_taken_0x4921f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4921f0) {
            ctx->pc = 0x4929A8u;
            goto label_4929a8;
        }
    }
    ctx->pc = 0x4921F8u;
label_4921f8:
    // 0x4921f8: 0xc0c95e2  jal         func_325788
label_4921fc:
    if (ctx->pc == 0x4921FCu) {
        ctx->pc = 0x492200u;
        goto label_492200;
    }
    ctx->pc = 0x4921F8u;
    SET_GPR_U32(ctx, 31, 0x492200u);
    ctx->pc = 0x325788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325788u, 0x4921F8u, 0x492200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492200u;
label_492200:
    // 0x492200: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x492200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_492204:
    // 0x492204: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x492204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_492208:
    // 0x492208: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x492208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_49220c:
    // 0x49220c: 0xafa203e0  sw          $v0, 0x3E0($sp)
    ctx->pc = 0x49220cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 992), GPR_U32(ctx, 2));
label_492210:
    // 0x492210: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_492214:
    // 0x492214: 0x3442100b  ori         $v0, $v0, 0x100B
    ctx->pc = 0x492214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4107);
label_492218:
    // 0x492218: 0xafa203e8  sw          $v0, 0x3E8($sp)
    ctx->pc = 0x492218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1000), GPR_U32(ctx, 2));
label_49221c:
    // 0x49221c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49221cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492220:
    // 0x492220: 0xafa203ec  sw          $v0, 0x3EC($sp)
    ctx->pc = 0x492220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1004), GPR_U32(ctx, 2));
label_492224:
    // 0x492224: 0xafa003e4  sw          $zero, 0x3E4($sp)
    ctx->pc = 0x492224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 996), GPR_U32(ctx, 0));
label_492228:
    // 0x492228: 0xafa003f0  sw          $zero, 0x3F0($sp)
    ctx->pc = 0x492228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1008), GPR_U32(ctx, 0));
label_49222c:
    // 0x49222c: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x49222cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_492230:
    // 0x492230: 0xc0caa4a  jal         func_32A928
label_492234:
    if (ctx->pc == 0x492234u) {
        ctx->pc = 0x492238u;
        goto label_492238;
    }
    ctx->pc = 0x492230u;
    SET_GPR_U32(ctx, 31, 0x492238u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x492230u, 0x492238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492238u;
label_492238:
    // 0x492238: 0xafa205e0  sw          $v0, 0x5E0($sp)
    ctx->pc = 0x492238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1504), GPR_U32(ctx, 2));
label_49223c:
    // 0x49223c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x49223cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_492240:
    // 0x492240: 0x244228c8  addiu       $v0, $v0, 0x28C8
    ctx->pc = 0x492240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10440));
label_492244:
    // 0x492244: 0xafa203c0  sw          $v0, 0x3C0($sp)
    ctx->pc = 0x492244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 960), GPR_U32(ctx, 2));
label_492248:
    // 0x492248: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_49224c:
    // 0x49224c: 0x3442100c  ori         $v0, $v0, 0x100C
    ctx->pc = 0x49224cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4108);
label_492250:
    // 0x492250: 0xafa203c8  sw          $v0, 0x3C8($sp)
    ctx->pc = 0x492250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 968), GPR_U32(ctx, 2));
label_492254:
    // 0x492254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492258:
    // 0x492258: 0xafa203cc  sw          $v0, 0x3CC($sp)
    ctx->pc = 0x492258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 972), GPR_U32(ctx, 2));
label_49225c:
    // 0x49225c: 0xafa003c4  sw          $zero, 0x3C4($sp)
    ctx->pc = 0x49225cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 964), GPR_U32(ctx, 0));
label_492260:
    // 0x492260: 0xafa003d0  sw          $zero, 0x3D0($sp)
    ctx->pc = 0x492260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 976), GPR_U32(ctx, 0));
label_492264:
    // 0x492264: 0x27a403c0  addiu       $a0, $sp, 0x3C0
    ctx->pc = 0x492264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_492268:
    // 0x492268: 0xc0caa4a  jal         func_32A928
label_49226c:
    if (ctx->pc == 0x49226Cu) {
        ctx->pc = 0x492270u;
        goto label_492270;
    }
    ctx->pc = 0x492268u;
    SET_GPR_U32(ctx, 31, 0x492270u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x492268u, 0x492270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492270u;
label_492270:
    // 0x492270: 0xafa205dc  sw          $v0, 0x5DC($sp)
    ctx->pc = 0x492270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1500), GPR_U32(ctx, 2));
label_492274:
    // 0x492274: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x492274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_492278:
    // 0x492278: 0x24422950  addiu       $v0, $v0, 0x2950
    ctx->pc = 0x492278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10576));
label_49227c:
    // 0x49227c: 0xafa203a0  sw          $v0, 0x3A0($sp)
    ctx->pc = 0x49227cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 928), GPR_U32(ctx, 2));
label_492280:
    // 0x492280: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_492284:
    // 0x492284: 0x3442100d  ori         $v0, $v0, 0x100D
    ctx->pc = 0x492284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4109);
label_492288:
    // 0x492288: 0xafa203a8  sw          $v0, 0x3A8($sp)
    ctx->pc = 0x492288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 936), GPR_U32(ctx, 2));
label_49228c:
    // 0x49228c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x49228cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_492290:
    // 0x492290: 0xafa203ac  sw          $v0, 0x3AC($sp)
    ctx->pc = 0x492290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 940), GPR_U32(ctx, 2));
label_492294:
    // 0x492294: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_492298:
    // 0x492298: 0x3442100b  ori         $v0, $v0, 0x100B
    ctx->pc = 0x492298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4107);
label_49229c:
    // 0x49229c: 0xafa203a4  sw          $v0, 0x3A4($sp)
    ctx->pc = 0x49229cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 932), GPR_U32(ctx, 2));
label_4922a0:
    // 0x4922a0: 0xafa003b0  sw          $zero, 0x3B0($sp)
    ctx->pc = 0x4922a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 944), GPR_U32(ctx, 0));
label_4922a4:
    // 0x4922a4: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x4922a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_4922a8:
    // 0x4922a8: 0xc0caa4a  jal         func_32A928
label_4922ac:
    if (ctx->pc == 0x4922ACu) {
        ctx->pc = 0x4922B0u;
        goto label_4922b0;
    }
    ctx->pc = 0x4922A8u;
    SET_GPR_U32(ctx, 31, 0x4922B0u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x4922A8u, 0x4922B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4922B0u;
label_4922b0:
    // 0x4922b0: 0xafa205d8  sw          $v0, 0x5D8($sp)
    ctx->pc = 0x4922b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1496), GPR_U32(ctx, 2));
label_4922b4:
    // 0x4922b4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x4922b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_4922b8:
    // 0x4922b8: 0x24422968  addiu       $v0, $v0, 0x2968
    ctx->pc = 0x4922b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10600));
label_4922bc:
    // 0x4922bc: 0xafa20380  sw          $v0, 0x380($sp)
    ctx->pc = 0x4922bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 2));
label_4922c0:
    // 0x4922c0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4922c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4922c4:
    // 0x4922c4: 0x3442100e  ori         $v0, $v0, 0x100E
    ctx->pc = 0x4922c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4110);
label_4922c8:
    // 0x4922c8: 0xafa20388  sw          $v0, 0x388($sp)
    ctx->pc = 0x4922c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 904), GPR_U32(ctx, 2));
label_4922cc:
    // 0x4922cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4922ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4922d0:
    // 0x4922d0: 0xafa2038c  sw          $v0, 0x38C($sp)
    ctx->pc = 0x4922d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 908), GPR_U32(ctx, 2));
label_4922d4:
    // 0x4922d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4922d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4922d8:
    // 0x4922d8: 0x3442100c  ori         $v0, $v0, 0x100C
    ctx->pc = 0x4922d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4108);
label_4922dc:
    // 0x4922dc: 0xafa20384  sw          $v0, 0x384($sp)
    ctx->pc = 0x4922dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 900), GPR_U32(ctx, 2));
label_4922e0:
    // 0x4922e0: 0xafa00390  sw          $zero, 0x390($sp)
    ctx->pc = 0x4922e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 912), GPR_U32(ctx, 0));
label_4922e4:
    // 0x4922e4: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x4922e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_4922e8:
    // 0x4922e8: 0xc0caa4a  jal         func_32A928
label_4922ec:
    if (ctx->pc == 0x4922ECu) {
        ctx->pc = 0x4922F0u;
        goto label_4922f0;
    }
    ctx->pc = 0x4922E8u;
    SET_GPR_U32(ctx, 31, 0x4922F0u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x4922E8u, 0x4922F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4922F0u;
label_4922f0:
    // 0x4922f0: 0xafa205d4  sw          $v0, 0x5D4($sp)
    ctx->pc = 0x4922f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1492), GPR_U32(ctx, 2));
label_4922f4:
    // 0x4922f4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x4922f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_4922f8:
    // 0x4922f8: 0x24422980  addiu       $v0, $v0, 0x2980
    ctx->pc = 0x4922f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10624));
label_4922fc:
    // 0x4922fc: 0xafa20360  sw          $v0, 0x360($sp)
    ctx->pc = 0x4922fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 864), GPR_U32(ctx, 2));
label_492300:
    // 0x492300: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_492304:
    // 0x492304: 0x3442100f  ori         $v0, $v0, 0x100F
    ctx->pc = 0x492304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4111);
label_492308:
    // 0x492308: 0xafa20368  sw          $v0, 0x368($sp)
    ctx->pc = 0x492308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 872), GPR_U32(ctx, 2));
label_49230c:
    // 0x49230c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x49230cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_492310:
    // 0x492310: 0xafa2036c  sw          $v0, 0x36C($sp)
    ctx->pc = 0x492310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 876), GPR_U32(ctx, 2));
label_492314:
    // 0x492314: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_492318:
    // 0x492318: 0x3442100b  ori         $v0, $v0, 0x100B
    ctx->pc = 0x492318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4107);
label_49231c:
    // 0x49231c: 0xafa20364  sw          $v0, 0x364($sp)
    ctx->pc = 0x49231cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 868), GPR_U32(ctx, 2));
label_492320:
    // 0x492320: 0xafa00370  sw          $zero, 0x370($sp)
    ctx->pc = 0x492320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 880), GPR_U32(ctx, 0));
label_492324:
    // 0x492324: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x492324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
label_492328:
    // 0x492328: 0xc0caa4a  jal         func_32A928
label_49232c:
    if (ctx->pc == 0x49232Cu) {
        ctx->pc = 0x492330u;
        goto label_492330;
    }
    ctx->pc = 0x492328u;
    SET_GPR_U32(ctx, 31, 0x492330u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x492328u, 0x492330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492330u;
label_492330:
    // 0x492330: 0xafa205d0  sw          $v0, 0x5D0($sp)
    ctx->pc = 0x492330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1488), GPR_U32(ctx, 2));
label_492334:
    // 0x492334: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x492334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_492338:
    // 0x492338: 0x24422998  addiu       $v0, $v0, 0x2998
    ctx->pc = 0x492338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10648));
label_49233c:
    // 0x49233c: 0xafa20340  sw          $v0, 0x340($sp)
    ctx->pc = 0x49233cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 2));
label_492340:
    // 0x492340: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_492344:
    // 0x492344: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x492344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
label_492348:
    // 0x492348: 0xafa20348  sw          $v0, 0x348($sp)
    ctx->pc = 0x492348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 840), GPR_U32(ctx, 2));
label_49234c:
    // 0x49234c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x49234cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_492350:
    // 0x492350: 0xafa2034c  sw          $v0, 0x34C($sp)
    ctx->pc = 0x492350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 2));
label_492354:
    // 0x492354: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_492358:
    // 0x492358: 0x3442100c  ori         $v0, $v0, 0x100C
    ctx->pc = 0x492358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4108);
label_49235c:
    // 0x49235c: 0xafa20344  sw          $v0, 0x344($sp)
    ctx->pc = 0x49235cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 2));
label_492360:
    // 0x492360: 0xafa00350  sw          $zero, 0x350($sp)
    ctx->pc = 0x492360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 0));
label_492364:
    // 0x492364: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x492364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_492368:
    // 0x492368: 0xc0caa4a  jal         func_32A928
label_49236c:
    if (ctx->pc == 0x49236Cu) {
        ctx->pc = 0x492370u;
        goto label_492370;
    }
    ctx->pc = 0x492368u;
    SET_GPR_U32(ctx, 31, 0x492370u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x492368u, 0x492370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492370u;
label_492370:
    // 0x492370: 0xafa205cc  sw          $v0, 0x5CC($sp)
    ctx->pc = 0x492370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1484), GPR_U32(ctx, 2));
label_492374:
    // 0x492374: 0x1000018c  b           . + 4 + (0x18C << 2)
label_492378:
    if (ctx->pc == 0x492378u) {
        ctx->pc = 0x49237Cu;
        goto label_49237c;
    }
    ctx->pc = 0x492374u;
    {
        const bool branch_taken_0x492374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492374) {
            ctx->pc = 0x4929A8u;
            goto label_4929a8;
        }
    }
    ctx->pc = 0x49237Cu;
label_49237c:
    // 0x49237c: 0xc0c9d24  jal         func_327490
label_492380:
    if (ctx->pc == 0x492380u) {
        ctx->pc = 0x492384u;
        goto label_492384;
    }
    ctx->pc = 0x49237Cu;
    SET_GPR_U32(ctx, 31, 0x492384u);
    ctx->pc = 0x327490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327490u, 0x49237Cu, 0x492384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492384u;
label_492384:
    // 0x492384: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x492384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_492388:
    // 0x492388: 0x10000187  b           . + 4 + (0x187 << 2)
label_49238c:
    if (ctx->pc == 0x49238Cu) {
        ctx->pc = 0x492390u;
        goto label_492390;
    }
    ctx->pc = 0x492388u;
    {
        const bool branch_taken_0x492388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492388) {
            ctx->pc = 0x4929A8u;
            goto label_4929a8;
        }
    }
    ctx->pc = 0x492390u;
label_492390:
    // 0x492390: 0xc0ca954  jal         func_32A550
label_492394:
    if (ctx->pc == 0x492394u) {
        ctx->pc = 0x492398u;
        goto label_492398;
    }
    ctx->pc = 0x492390u;
    SET_GPR_U32(ctx, 31, 0x492398u);
    ctx->pc = 0x32A550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A550u, 0x492390u, 0x492398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492398u;
label_492398:
    // 0x492398: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x492398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49239c:
    // 0x49239c: 0x10000182  b           . + 4 + (0x182 << 2)
label_4923a0:
    if (ctx->pc == 0x4923A0u) {
        ctx->pc = 0x4923A4u;
        goto label_4923a4;
    }
    ctx->pc = 0x49239Cu;
    {
        const bool branch_taken_0x49239c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49239c) {
            ctx->pc = 0x4929A8u;
            goto label_4929a8;
        }
    }
    ctx->pc = 0x4923A4u;
label_4923a4:
    // 0x4923a4: 0xc0cef10  jal         func_33BC40
label_4923a8:
    if (ctx->pc == 0x4923A8u) {
        ctx->pc = 0x4923ACu;
        goto label_4923ac;
    }
    ctx->pc = 0x4923A4u;
    SET_GPR_U32(ctx, 31, 0x4923ACu);
    ctx->pc = 0x33BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BC40u, 0x4923A4u, 0x4923ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4923ACu;
label_4923ac:
    // 0x4923ac: 0x1000017e  b           . + 4 + (0x17E << 2)
label_4923b0:
    if (ctx->pc == 0x4923B0u) {
        ctx->pc = 0x4923B4u;
        goto label_4923b4;
    }
    ctx->pc = 0x4923ACu;
    {
        const bool branch_taken_0x4923ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4923ac) {
            ctx->pc = 0x4929A8u;
            goto label_4929a8;
        }
    }
    ctx->pc = 0x4923B4u;
label_4923b4:
    // 0x4923b4: 0xc0d24ee  jal         func_3493B8
label_4923b8:
    if (ctx->pc == 0x4923B8u) {
        ctx->pc = 0x4923BCu;
        goto label_4923bc;
    }
    ctx->pc = 0x4923B4u;
    SET_GPR_U32(ctx, 31, 0x4923BCu);
    ctx->pc = 0x3493B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3493B8u, 0x4923B4u, 0x4923BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4923BCu;
label_4923bc:
    // 0x4923bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4923bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4923c0:
    // 0x4923c0: 0x10000179  b           . + 4 + (0x179 << 2)
label_4923c4:
    if (ctx->pc == 0x4923C4u) {
        ctx->pc = 0x4923C8u;
        goto label_4923c8;
    }
    ctx->pc = 0x4923C0u;
    {
        const bool branch_taken_0x4923c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4923c0) {
            ctx->pc = 0x4929A8u;
            goto label_4929a8;
        }
    }
    ctx->pc = 0x4923C8u;
label_4923c8:
    // 0x4923c8: 0xc0d430c  jal         func_350C30
label_4923cc:
    if (ctx->pc == 0x4923CCu) {
        ctx->pc = 0x4923D0u;
        goto label_4923d0;
    }
    ctx->pc = 0x4923C8u;
    SET_GPR_U32(ctx, 31, 0x4923D0u);
    ctx->pc = 0x350C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350C30u, 0x4923C8u, 0x4923D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4923D0u;
label_4923d0:
    // 0x4923d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4923d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4923d4:
    // 0x4923d4: 0x10000174  b           . + 4 + (0x174 << 2)
label_4923d8:
    if (ctx->pc == 0x4923D8u) {
        ctx->pc = 0x4923DCu;
        goto label_4923dc;
    }
    ctx->pc = 0x4923D4u;
    {
        const bool branch_taken_0x4923d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4923d4) {
            ctx->pc = 0x4929A8u;
            goto label_4929a8;
        }
    }
    ctx->pc = 0x4923DCu;
label_4923dc:
    // 0x4923dc: 0xc0ddb94  jal         func_376E50
label_4923e0:
    if (ctx->pc == 0x4923E0u) {
        ctx->pc = 0x4923E4u;
        goto label_4923e4;
    }
    ctx->pc = 0x4923DCu;
    SET_GPR_U32(ctx, 31, 0x4923E4u);
    ctx->pc = 0x376E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376E50u, 0x4923DCu, 0x4923E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4923E4u;
label_4923e4:
    // 0x4923e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4923e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4923e8:
    // 0x4923e8: 0x1000016f  b           . + 4 + (0x16F << 2)
label_4923ec:
    if (ctx->pc == 0x4923ECu) {
        ctx->pc = 0x4923F0u;
        goto label_4923f0;
    }
    ctx->pc = 0x4923E8u;
    {
        const bool branch_taken_0x4923e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4923e8) {
            ctx->pc = 0x4929A8u;
            goto label_4929a8;
        }
    }
    ctx->pc = 0x4923F0u;
label_4923f0:
    // 0x4923f0: 0xc0de0f6  jal         func_3783D8
label_4923f4:
    if (ctx->pc == 0x4923F4u) {
        ctx->pc = 0x4923F8u;
        goto label_4923f8;
    }
    ctx->pc = 0x4923F0u;
    SET_GPR_U32(ctx, 31, 0x4923F8u);
    ctx->pc = 0x3783D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3783D8u, 0x4923F0u, 0x4923F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4923F8u;
label_4923f8:
    // 0x4923f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4923f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4923fc:
    // 0x4923fc: 0x1000016a  b           . + 4 + (0x16A << 2)
label_492400:
    if (ctx->pc == 0x492400u) {
        ctx->pc = 0x492404u;
        goto label_492404;
    }
    ctx->pc = 0x4923FCu;
    {
        const bool branch_taken_0x4923fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4923fc) {
            ctx->pc = 0x4929A8u;
            goto label_4929a8;
        }
    }
    ctx->pc = 0x492404u;
label_492404:
    // 0x492404: 0xc0de5aa  jal         func_3796A8
label_492408:
    if (ctx->pc == 0x492408u) {
        ctx->pc = 0x49240Cu;
        goto label_49240c;
    }
    ctx->pc = 0x492404u;
    SET_GPR_U32(ctx, 31, 0x49240Cu);
    ctx->pc = 0x3796A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3796A8u, 0x492404u, 0x49240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49240Cu;
label_49240c:
    // 0x49240c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49240cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_492410:
    // 0x492410: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x492410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_492414:
    // 0x492414: 0x244229d0  addiu       $v0, $v0, 0x29D0
    ctx->pc = 0x492414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10704));
label_492418:
    // 0x492418: 0xafa20320  sw          $v0, 0x320($sp)
    ctx->pc = 0x492418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 2));
label_49241c:
    // 0x49241c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x49241cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_492420:
    // 0x492420: 0x34421001  ori         $v0, $v0, 0x1001
    ctx->pc = 0x492420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
label_492424:
    // 0x492424: 0xafa20328  sw          $v0, 0x328($sp)
    ctx->pc = 0x492424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 808), GPR_U32(ctx, 2));
label_492428:
    // 0x492428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49242c:
    // 0x49242c: 0xafa2032c  sw          $v0, 0x32C($sp)
    ctx->pc = 0x49242cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 812), GPR_U32(ctx, 2));
label_492430:
    // 0x492430: 0xafa00324  sw          $zero, 0x324($sp)
    ctx->pc = 0x492430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 804), GPR_U32(ctx, 0));
label_492434:
    // 0x492434: 0xafa00330  sw          $zero, 0x330($sp)
    ctx->pc = 0x492434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 0));
label_492438:
    // 0x492438: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x492438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_49243c:
    // 0x49243c: 0xc0caa4a  jal         func_32A928
label_492440:
    if (ctx->pc == 0x492440u) {
        ctx->pc = 0x492444u;
        goto label_492444;
    }
    ctx->pc = 0x49243Cu;
    SET_GPR_U32(ctx, 31, 0x492444u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x49243Cu, 0x492444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492444u;
label_492444:
    // 0x492444: 0xafa205c8  sw          $v0, 0x5C8($sp)
    ctx->pc = 0x492444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1480), GPR_U32(ctx, 2));
label_492448:
    // 0x492448: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x492448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_49244c:
    // 0x49244c: 0x24422a58  addiu       $v0, $v0, 0x2A58
    ctx->pc = 0x49244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10840));
label_492450:
    // 0x492450: 0xafa20300  sw          $v0, 0x300($sp)
    ctx->pc = 0x492450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 2));
label_492454:
    // 0x492454: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_492458:
    // 0x492458: 0x34421002  ori         $v0, $v0, 0x1002
    ctx->pc = 0x492458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4098);
label_49245c:
    // 0x49245c: 0xafa20308  sw          $v0, 0x308($sp)
    ctx->pc = 0x49245cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 776), GPR_U32(ctx, 2));
label_492460:
    // 0x492460: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x492460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_492464:
    // 0x492464: 0xafa2030c  sw          $v0, 0x30C($sp)
    ctx->pc = 0x492464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 780), GPR_U32(ctx, 2));
label_492468:
    // 0x492468: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_49246c:
    // 0x49246c: 0x34421001  ori         $v0, $v0, 0x1001
    ctx->pc = 0x49246cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
label_492470:
    // 0x492470: 0xafa20304  sw          $v0, 0x304($sp)
    ctx->pc = 0x492470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 772), GPR_U32(ctx, 2));
label_492474:
    // 0x492474: 0xafa00310  sw          $zero, 0x310($sp)
    ctx->pc = 0x492474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 0));
label_492478:
    // 0x492478: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x492478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_49247c:
    // 0x49247c: 0xc0caa4a  jal         func_32A928
label_492480:
    if (ctx->pc == 0x492480u) {
        ctx->pc = 0x492484u;
        goto label_492484;
    }
    ctx->pc = 0x49247Cu;
    SET_GPR_U32(ctx, 31, 0x492484u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x49247Cu, 0x492484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492484u;
label_492484:
    // 0x492484: 0xafa205c4  sw          $v0, 0x5C4($sp)
    ctx->pc = 0x492484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1476), GPR_U32(ctx, 2));
label_492488:
    // 0x492488: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x492488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_49248c:
    // 0x49248c: 0x24422ae0  addiu       $v0, $v0, 0x2AE0
    ctx->pc = 0x49248cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10976));
label_492490:
    // 0x492490: 0xafa202e0  sw          $v0, 0x2E0($sp)
    ctx->pc = 0x492490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 2));
label_492494:
    // 0x492494: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_492498:
    // 0x492498: 0x34421011  ori         $v0, $v0, 0x1011
    ctx->pc = 0x492498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4113);
label_49249c:
    // 0x49249c: 0xafa202e8  sw          $v0, 0x2E8($sp)
    ctx->pc = 0x49249cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 2));
label_4924a0:
    // 0x4924a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4924a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4924a4:
    // 0x4924a4: 0xafa202ec  sw          $v0, 0x2EC($sp)
    ctx->pc = 0x4924a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 2));
label_4924a8:
    // 0x4924a8: 0xafa002e4  sw          $zero, 0x2E4($sp)
    ctx->pc = 0x4924a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 0));
label_4924ac:
    // 0x4924ac: 0xafa002f0  sw          $zero, 0x2F0($sp)
    ctx->pc = 0x4924acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 0));
label_4924b0:
    // 0x4924b0: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x4924b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_4924b4:
    // 0x4924b4: 0xc0caa4a  jal         func_32A928
label_4924b8:
    if (ctx->pc == 0x4924B8u) {
        ctx->pc = 0x4924BCu;
        goto label_4924bc;
    }
    ctx->pc = 0x4924B4u;
    SET_GPR_U32(ctx, 31, 0x4924BCu);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x4924B4u, 0x4924BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4924BCu;
label_4924bc:
    // 0x4924bc: 0xafa205c0  sw          $v0, 0x5C0($sp)
    ctx->pc = 0x4924bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1472), GPR_U32(ctx, 2));
label_4924c0:
    // 0x4924c0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x4924c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_4924c4:
    // 0x4924c4: 0x24422b68  addiu       $v0, $v0, 0x2B68
    ctx->pc = 0x4924c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11112));
label_4924c8:
    // 0x4924c8: 0xafa202c0  sw          $v0, 0x2C0($sp)
    ctx->pc = 0x4924c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 2));
label_4924cc:
    // 0x4924cc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4924ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4924d0:
    // 0x4924d0: 0x34421012  ori         $v0, $v0, 0x1012
    ctx->pc = 0x4924d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4114);
label_4924d4:
    // 0x4924d4: 0xafa202c8  sw          $v0, 0x2C8($sp)
    ctx->pc = 0x4924d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 2));
label_4924d8:
    // 0x4924d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4924d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4924dc:
    // 0x4924dc: 0xafa202cc  sw          $v0, 0x2CC($sp)
    ctx->pc = 0x4924dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 2));
label_4924e0:
    // 0x4924e0: 0xafa002c4  sw          $zero, 0x2C4($sp)
    ctx->pc = 0x4924e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 0));
label_4924e4:
    // 0x4924e4: 0xafa002d0  sw          $zero, 0x2D0($sp)
    ctx->pc = 0x4924e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 0));
label_4924e8:
    // 0x4924e8: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x4924e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_4924ec:
    // 0x4924ec: 0xc0caa4a  jal         func_32A928
label_4924f0:
    if (ctx->pc == 0x4924F0u) {
        ctx->pc = 0x4924F4u;
        goto label_4924f4;
    }
    ctx->pc = 0x4924ECu;
    SET_GPR_U32(ctx, 31, 0x4924F4u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x4924ECu, 0x4924F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4924F4u;
label_4924f4:
    // 0x4924f4: 0xafa205bc  sw          $v0, 0x5BC($sp)
    ctx->pc = 0x4924f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1468), GPR_U32(ctx, 2));
label_4924f8:
    // 0x4924f8: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x4924f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_4924fc:
    // 0x4924fc: 0x24422bf0  addiu       $v0, $v0, 0x2BF0
    ctx->pc = 0x4924fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11248));
label_492500:
    // 0x492500: 0xafa202a0  sw          $v0, 0x2A0($sp)
    ctx->pc = 0x492500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 2));
label_492504:
    // 0x492504: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_492508:
    // 0x492508: 0x34421013  ori         $v0, $v0, 0x1013
    ctx->pc = 0x492508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4115);
label_49250c:
    // 0x49250c: 0xafa202a8  sw          $v0, 0x2A8($sp)
    ctx->pc = 0x49250cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 2));
label_492510:
    // 0x492510: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x492510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_492514:
    // 0x492514: 0xafa202ac  sw          $v0, 0x2AC($sp)
    ctx->pc = 0x492514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 2));
label_492518:
    // 0x492518: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_49251c:
    // 0x49251c: 0x34421011  ori         $v0, $v0, 0x1011
    ctx->pc = 0x49251cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4113);
label_492520:
    // 0x492520: 0xafa202a4  sw          $v0, 0x2A4($sp)
    ctx->pc = 0x492520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 2));
label_492524:
    // 0x492524: 0xafa002b0  sw          $zero, 0x2B0($sp)
    ctx->pc = 0x492524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 0));
label_492528:
    // 0x492528: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x492528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_49252c:
    // 0x49252c: 0xc0caa4a  jal         func_32A928
label_492530:
    if (ctx->pc == 0x492530u) {
        ctx->pc = 0x492534u;
        goto label_492534;
    }
    ctx->pc = 0x49252Cu;
    SET_GPR_U32(ctx, 31, 0x492534u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x49252Cu, 0x492534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492534u;
label_492534:
    // 0x492534: 0xafa205b8  sw          $v0, 0x5B8($sp)
    ctx->pc = 0x492534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1464), GPR_U32(ctx, 2));
label_492538:
    // 0x492538: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x492538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_49253c:
    // 0x49253c: 0x24422c08  addiu       $v0, $v0, 0x2C08
    ctx->pc = 0x49253cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11272));
label_492540:
    // 0x492540: 0xafa20280  sw          $v0, 0x280($sp)
    ctx->pc = 0x492540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
label_492544:
    // 0x492544: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_492548:
    // 0x492548: 0x34421014  ori         $v0, $v0, 0x1014
    ctx->pc = 0x492548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4116);
label_49254c:
    // 0x49254c: 0xafa20288  sw          $v0, 0x288($sp)
    ctx->pc = 0x49254cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 2));
label_492550:
    // 0x492550: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x492550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_492554:
    // 0x492554: 0xafa2028c  sw          $v0, 0x28C($sp)
    ctx->pc = 0x492554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 2));
label_492558:
    // 0x492558: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x492558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_49255c:
    // 0x49255c: 0x34421012  ori         $v0, $v0, 0x1012
    ctx->pc = 0x49255cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4114);
label_492560:
    // 0x492560: 0xafa20284  sw          $v0, 0x284($sp)
    ctx->pc = 0x492560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 2));
label_492564:
    // 0x492564: 0xafa00290  sw          $zero, 0x290($sp)
    ctx->pc = 0x492564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 0));
label_492568:
    // 0x492568: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x492568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_49256c:
    // 0x49256c: 0xc0caa4a  jal         func_32A928
label_492570:
    if (ctx->pc == 0x492570u) {
        ctx->pc = 0x492574u;
        goto label_492574;
    }
    ctx->pc = 0x49256Cu;
    SET_GPR_U32(ctx, 31, 0x492574u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x49256Cu, 0x492574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492574u;
label_492574:
    // 0x492574: 0xafa205b4  sw          $v0, 0x5B4($sp)
    ctx->pc = 0x492574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1460), GPR_U32(ctx, 2));
label_492578:
    // 0x492578: 0x1000010b  b           . + 4 + (0x10B << 2)
label_49257c:
    if (ctx->pc == 0x49257Cu) {
        ctx->pc = 0x492580u;
        goto label_492580;
    }
    ctx->pc = 0x492578u;
    {
        const bool branch_taken_0x492578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492578) {
            ctx->pc = 0x4929A8u;
            goto label_4929a8;
        }
    }
    ctx->pc = 0x492580u;
label_492580:
    // 0x492580: 0xc0df478  jal         func_37D1E0
label_492584:
    if (ctx->pc == 0x492584u) {
        ctx->pc = 0x492588u;
        goto label_492588;
    }
    ctx->pc = 0x492580u;
    SET_GPR_U32(ctx, 31, 0x492588u);
    ctx->pc = 0x37D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D1E0u, 0x492580u, 0x492588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492588u;
label_492588:
    // 0x492588: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x492588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49258c:
    // 0x49258c: 0x10000106  b           . + 4 + (0x106 << 2)
label_492590:
    if (ctx->pc == 0x492590u) {
        ctx->pc = 0x492594u;
        goto label_492594;
    }
    ctx->pc = 0x49258Cu;
    {
        const bool branch_taken_0x49258c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49258c) {
            ctx->pc = 0x4929A8u;
            goto label_4929a8;
        }
    }
    ctx->pc = 0x492594u;
label_492594:
    // 0x492594: 0xc0e0ae2  jal         func_382B88
label_492598:
    if (ctx->pc == 0x492598u) {
        ctx->pc = 0x49259Cu;
        goto label_49259c;
    }
    ctx->pc = 0x492594u;
    SET_GPR_U32(ctx, 31, 0x49259Cu);
    ctx->pc = 0x382B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382B88u, 0x492594u, 0x49259Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49259Cu;
label_49259c:
    // 0x49259c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49259cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4925a0:
    // 0x4925a0: 0x10000101  b           . + 4 + (0x101 << 2)
label_4925a4:
    if (ctx->pc == 0x4925A4u) {
        ctx->pc = 0x4925A8u;
        goto label_4925a8;
    }
    ctx->pc = 0x4925A0u;
    {
        const bool branch_taken_0x4925a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4925a0) {
            ctx->pc = 0x4929A8u;
            goto label_4929a8;
        }
    }
    ctx->pc = 0x4925A8u;
label_4925a8:
    // 0x4925a8: 0xc0e1434  jal         func_3850D0
label_4925ac:
    if (ctx->pc == 0x4925ACu) {
        ctx->pc = 0x4925B0u;
        goto label_4925b0;
    }
    ctx->pc = 0x4925A8u;
    SET_GPR_U32(ctx, 31, 0x4925B0u);
    ctx->pc = 0x3850D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3850D0u, 0x4925A8u, 0x4925B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4925B0u;
label_4925b0:
    // 0x4925b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4925b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4925b4:
    // 0x4925b4: 0x100000fc  b           . + 4 + (0xFC << 2)
label_4925b8:
    if (ctx->pc == 0x4925B8u) {
        ctx->pc = 0x4925BCu;
        goto label_4925bc;
    }
    ctx->pc = 0x4925B4u;
    {
        const bool branch_taken_0x4925b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4925b4) {
            ctx->pc = 0x4929A8u;
            goto label_4929a8;
        }
    }
    ctx->pc = 0x4925BCu;
label_4925bc:
    // 0x4925bc: 0xc0e66c0  jal         func_399B00
label_4925c0:
    if (ctx->pc == 0x4925C0u) {
        ctx->pc = 0x4925C4u;
        goto label_4925c4;
    }
    ctx->pc = 0x4925BCu;
    SET_GPR_U32(ctx, 31, 0x4925C4u);
    ctx->pc = 0x399B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399B00u, 0x4925BCu, 0x4925C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4925C4u;
label_4925c4:
    // 0x4925c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4925c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4925c8:
    // 0x4925c8: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_4925cc:
    if (ctx->pc == 0x4925CCu) {
        ctx->pc = 0x4925D0u;
        goto label_4925d0;
    }
    ctx->pc = 0x4925C8u;
    {
        const bool branch_taken_0x4925c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4925c8) {
            ctx->pc = 0x4929A8u;
            goto label_4929a8;
        }
    }
    ctx->pc = 0x4925D0u;
label_4925d0:
    // 0x4925d0: 0xc0e0564  jal         func_381590
label_4925d4:
    if (ctx->pc == 0x4925D4u) {
        ctx->pc = 0x4925D8u;
        goto label_4925d8;
    }
    ctx->pc = 0x4925D0u;
    SET_GPR_U32(ctx, 31, 0x4925D8u);
    ctx->pc = 0x381590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381590u, 0x4925D0u, 0x4925D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4925D8u;
label_4925d8:
    // 0x4925d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4925d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4925dc:
    // 0x4925dc: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x4925dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_4925e0:
    // 0x4925e0: 0x24428fa0  addiu       $v0, $v0, -0x7060
    ctx->pc = 0x4925e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938528));
label_4925e4:
    // 0x4925e4: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x4925e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
label_4925e8:
    // 0x4925e8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x4925e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_4925ec:
    // 0x4925ec: 0x34420019  ori         $v0, $v0, 0x19
    ctx->pc = 0x4925ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25);
label_4925f0:
    // 0x4925f0: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x4925f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
label_4925f4:
    // 0x4925f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4925f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4925f8:
    // 0x4925f8: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x4925f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
label_4925fc:
    // 0x4925fc: 0xafa00264  sw          $zero, 0x264($sp)
    ctx->pc = 0x4925fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
label_492600:
    // 0x492600: 0xafa00270  sw          $zero, 0x270($sp)
    ctx->pc = 0x492600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 0));
label_492604:
    // 0x492604: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x492604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_492608:
    // 0x492608: 0xc0caa4a  jal         func_32A928
label_49260c:
    if (ctx->pc == 0x49260Cu) {
        ctx->pc = 0x492610u;
        goto label_492610;
    }
    ctx->pc = 0x492608u;
    SET_GPR_U32(ctx, 31, 0x492610u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x492608u, 0x492610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492610u;
label_492610:
    // 0x492610: 0xafa205b0  sw          $v0, 0x5B0($sp)
    ctx->pc = 0x492610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1456), GPR_U32(ctx, 2));
label_492614:
    // 0x492614: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x492614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_492618:
    // 0x492618: 0x24429028  addiu       $v0, $v0, -0x6FD8
    ctx->pc = 0x492618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938664));
label_49261c:
    // 0x49261c: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x49261cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
label_492620:
    // 0x492620: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x492620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_492624:
    // 0x492624: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x492624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
label_492628:
    // 0x492628: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x492628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
label_49262c:
    // 0x49262c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x49262cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_492630:
    // 0x492630: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x492630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
label_492634:
    // 0x492634: 0xafa00244  sw          $zero, 0x244($sp)
    ctx->pc = 0x492634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 0));
label_492638:
    // 0x492638: 0xafa00250  sw          $zero, 0x250($sp)
    ctx->pc = 0x492638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
label_49263c:
    // 0x49263c: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x49263cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_492640:
    // 0x492640: 0xc0caa4a  jal         func_32A928
label_492644:
    if (ctx->pc == 0x492644u) {
        ctx->pc = 0x492648u;
        goto label_492648;
    }
    ctx->pc = 0x492640u;
    SET_GPR_U32(ctx, 31, 0x492648u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x492640u, 0x492648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492648u;
label_492648:
    // 0x492648: 0xafa205ac  sw          $v0, 0x5AC($sp)
    ctx->pc = 0x492648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1452), GPR_U32(ctx, 2));
label_49264c:
    // 0x49264c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x49264cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_492650:
    // 0x492650: 0x244290f0  addiu       $v0, $v0, -0x6F10
    ctx->pc = 0x492650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938864));
label_492654:
    // 0x492654: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x492654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
label_492658:
    // 0x492658: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x492658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_49265c:
    // 0x49265c: 0x3442001b  ori         $v0, $v0, 0x1B
    ctx->pc = 0x49265cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27);
label_492660:
    // 0x492660: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x492660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
label_492664:
    // 0x492664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492668:
    // 0x492668: 0xafa2022c  sw          $v0, 0x22C($sp)
    ctx->pc = 0x492668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
label_49266c:
    // 0x49266c: 0xafa00224  sw          $zero, 0x224($sp)
    ctx->pc = 0x49266cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 0));
label_492670:
    // 0x492670: 0xafa00230  sw          $zero, 0x230($sp)
    ctx->pc = 0x492670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 0));
label_492674:
    // 0x492674: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x492674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_492678:
    // 0x492678: 0xc0caa4a  jal         func_32A928
label_49267c:
    if (ctx->pc == 0x49267Cu) {
        ctx->pc = 0x492680u;
        goto label_492680;
    }
    ctx->pc = 0x492678u;
    SET_GPR_U32(ctx, 31, 0x492680u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x492678u, 0x492680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492680u;
label_492680:
    // 0x492680: 0xafa205a8  sw          $v0, 0x5A8($sp)
    ctx->pc = 0x492680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1448), GPR_U32(ctx, 2));
label_492684:
    // 0x492684: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x492684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_492688:
    // 0x492688: 0x24429050  addiu       $v0, $v0, -0x6FB0
    ctx->pc = 0x492688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938704));
label_49268c:
    // 0x49268c: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x49268cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
label_492690:
    // 0x492690: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x492690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_492694:
    // 0x492694: 0x3442001a  ori         $v0, $v0, 0x1A
    ctx->pc = 0x492694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
label_492698:
    // 0x492698: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x492698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
label_49269c:
    // 0x49269c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49269cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4926a0:
    // 0x4926a0: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x4926a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
label_4926a4:
    // 0x4926a4: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x4926a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
label_4926a8:
    // 0x4926a8: 0xafa00210  sw          $zero, 0x210($sp)
    ctx->pc = 0x4926a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 0));
label_4926ac:
    // 0x4926ac: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x4926acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_4926b0:
    // 0x4926b0: 0xc0caa4a  jal         func_32A928
label_4926b4:
    if (ctx->pc == 0x4926B4u) {
        ctx->pc = 0x4926B8u;
        goto label_4926b8;
    }
    ctx->pc = 0x4926B0u;
    SET_GPR_U32(ctx, 31, 0x4926B8u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x4926B0u, 0x4926B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4926B8u;
label_4926b8:
    // 0x4926b8: 0xafa205a4  sw          $v0, 0x5A4($sp)
    ctx->pc = 0x4926b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1444), GPR_U32(ctx, 2));
label_4926bc:
    // 0x4926bc: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x4926bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_4926c0:
    // 0x4926c0: 0x24429190  addiu       $v0, $v0, -0x6E70
    ctx->pc = 0x4926c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939024));
label_4926c4:
    // 0x4926c4: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x4926c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
label_4926c8:
    // 0x4926c8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x4926c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_4926cc:
    // 0x4926cc: 0x3442001c  ori         $v0, $v0, 0x1C
    ctx->pc = 0x4926ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28);
label_4926d0:
    // 0x4926d0: 0xafa201e8  sw          $v0, 0x1E8($sp)
    ctx->pc = 0x4926d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
label_4926d4:
    // 0x4926d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4926d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4926d8:
    // 0x4926d8: 0xafa201ec  sw          $v0, 0x1EC($sp)
    ctx->pc = 0x4926d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
label_4926dc:
    // 0x4926dc: 0xafa001e4  sw          $zero, 0x1E4($sp)
    ctx->pc = 0x4926dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 0));
label_4926e0:
    // 0x4926e0: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x4926e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
label_4926e4:
    // 0x4926e4: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x4926e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_4926e8:
    // 0x4926e8: 0xc0caa4a  jal         func_32A928
label_4926ec:
    if (ctx->pc == 0x4926ECu) {
        ctx->pc = 0x4926F0u;
        goto label_4926f0;
    }
    ctx->pc = 0x4926E8u;
    SET_GPR_U32(ctx, 31, 0x4926F0u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x4926E8u, 0x4926F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4926F0u;
label_4926f0:
    // 0x4926f0: 0xafa205a0  sw          $v0, 0x5A0($sp)
    ctx->pc = 0x4926f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1440), GPR_U32(ctx, 2));
label_4926f4:
    // 0x4926f4: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x4926f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_4926f8:
    // 0x4926f8: 0x24429218  addiu       $v0, $v0, -0x6DE8
    ctx->pc = 0x4926f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939160));
label_4926fc:
    // 0x4926fc: 0xafa201c0  sw          $v0, 0x1C0($sp)
    ctx->pc = 0x4926fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
label_492700:
    // 0x492700: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x492700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_492704:
    // 0x492704: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x492704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_492708:
    // 0x492708: 0xafa201c8  sw          $v0, 0x1C8($sp)
    ctx->pc = 0x492708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 2));
label_49270c:
    // 0x49270c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x49270cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_492710:
    // 0x492710: 0xafa201cc  sw          $v0, 0x1CC($sp)
    ctx->pc = 0x492710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
label_492714:
    // 0x492714: 0xafa001c4  sw          $zero, 0x1C4($sp)
    ctx->pc = 0x492714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 0));
label_492718:
    // 0x492718: 0xafa001d0  sw          $zero, 0x1D0($sp)
    ctx->pc = 0x492718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 0));
label_49271c:
    // 0x49271c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x49271cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_492720:
    // 0x492720: 0xc0caa4a  jal         func_32A928
label_492724:
    if (ctx->pc == 0x492724u) {
        ctx->pc = 0x492728u;
        goto label_492728;
    }
    ctx->pc = 0x492720u;
    SET_GPR_U32(ctx, 31, 0x492728u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x492720u, 0x492728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492728u;
label_492728:
    // 0x492728: 0xafa2059c  sw          $v0, 0x59C($sp)
    ctx->pc = 0x492728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1436), GPR_U32(ctx, 2));
label_49272c:
    // 0x49272c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x49272cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_492730:
    // 0x492730: 0x244292e0  addiu       $v0, $v0, -0x6D20
    ctx->pc = 0x492730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
label_492734:
    // 0x492734: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x492734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_492738:
    // 0x492738: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x492738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_49273c:
    // 0x49273c: 0x3442001e  ori         $v0, $v0, 0x1E
    ctx->pc = 0x49273cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30);
label_492740:
    // 0x492740: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x492740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
label_492744:
    // 0x492744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492748:
    // 0x492748: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x492748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
label_49274c:
    // 0x49274c: 0xafa001a4  sw          $zero, 0x1A4($sp)
    ctx->pc = 0x49274cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 0));
label_492750:
    // 0x492750: 0xafa001b0  sw          $zero, 0x1B0($sp)
    ctx->pc = 0x492750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 0));
label_492754:
    // 0x492754: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x492754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_492758:
    // 0x492758: 0xc0caa4a  jal         func_32A928
label_49275c:
    if (ctx->pc == 0x49275Cu) {
        ctx->pc = 0x492760u;
        goto label_492760;
    }
    ctx->pc = 0x492758u;
    SET_GPR_U32(ctx, 31, 0x492760u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x492758u, 0x492760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492760u;
label_492760:
    // 0x492760: 0xafa20598  sw          $v0, 0x598($sp)
    ctx->pc = 0x492760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1432), GPR_U32(ctx, 2));
label_492764:
    // 0x492764: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x492764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_492768:
    // 0x492768: 0x24429240  addiu       $v0, $v0, -0x6DC0
    ctx->pc = 0x492768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939200));
label_49276c:
    // 0x49276c: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x49276cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
label_492770:
    // 0x492770: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x492770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_492774:
    // 0x492774: 0x3442001d  ori         $v0, $v0, 0x1D
    ctx->pc = 0x492774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
label_492778:
    // 0x492778: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x492778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
label_49277c:
    // 0x49277c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49277cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492780:
    // 0x492780: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x492780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_492784:
    // 0x492784: 0xafa00184  sw          $zero, 0x184($sp)
    ctx->pc = 0x492784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 0));
label_492788:
    // 0x492788: 0xafa00190  sw          $zero, 0x190($sp)
    ctx->pc = 0x492788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
label_49278c:
    // 0x49278c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x49278cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_492790:
    // 0x492790: 0xc0caa4a  jal         func_32A928
label_492794:
    if (ctx->pc == 0x492794u) {
        ctx->pc = 0x492798u;
        goto label_492798;
    }
    ctx->pc = 0x492790u;
    SET_GPR_U32(ctx, 31, 0x492798u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x492790u, 0x492798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492798u;
label_492798:
    // 0x492798: 0xafa20594  sw          $v0, 0x594($sp)
    ctx->pc = 0x492798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1428), GPR_U32(ctx, 2));
label_49279c:
    // 0x49279c: 0x10000082  b           . + 4 + (0x82 << 2)
label_4927a0:
    if (ctx->pc == 0x4927A0u) {
        ctx->pc = 0x4927A4u;
        goto label_4927a4;
    }
    ctx->pc = 0x49279Cu;
    {
        const bool branch_taken_0x49279c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49279c) {
            ctx->pc = 0x4929A8u;
            goto label_4929a8;
        }
    }
    ctx->pc = 0x4927A4u;
label_4927a4:
    // 0x4927a4: 0xc124138  jal         func_4904E0
label_4927a8:
    if (ctx->pc == 0x4927A8u) {
        ctx->pc = 0x4927ACu;
        goto label_4927ac;
    }
    ctx->pc = 0x4927A4u;
    SET_GPR_U32(ctx, 31, 0x4927ACu);
    ctx->pc = 0x4904E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904E0u, 0x4927A4u, 0x4927ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4927ACu;
label_4927ac:
    // 0x4927ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4927acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4927b0:
    // 0x4927b0: 0x1000007d  b           . + 4 + (0x7D << 2)
label_4927b4:
    if (ctx->pc == 0x4927B4u) {
        ctx->pc = 0x4927B8u;
        goto label_4927b8;
    }
    ctx->pc = 0x4927B0u;
    {
        const bool branch_taken_0x4927b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4927b0) {
            ctx->pc = 0x4929A8u;
            goto label_4929a8;
        }
    }
    ctx->pc = 0x4927B8u;
label_4927b8:
    // 0x4927b8: 0xc0c4606  jal         func_311818
label_4927bc:
    if (ctx->pc == 0x4927BCu) {
        ctx->pc = 0x4927C0u;
        goto label_4927c0;
    }
    ctx->pc = 0x4927B8u;
    SET_GPR_U32(ctx, 31, 0x4927C0u);
    ctx->pc = 0x311818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311818u, 0x4927B8u, 0x4927C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4927C0u;
label_4927c0:
    // 0x4927c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4927c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4927c4:
    // 0x4927c4: 0x10000078  b           . + 4 + (0x78 << 2)
label_4927c8:
    if (ctx->pc == 0x4927C8u) {
        ctx->pc = 0x4927CCu;
        goto label_4927cc;
    }
    ctx->pc = 0x4927C4u;
    {
        const bool branch_taken_0x4927c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4927c4) {
            ctx->pc = 0x4929A8u;
            goto label_4929a8;
        }
    }
    ctx->pc = 0x4927CCu;
label_4927cc:
    // 0x4927cc: 0x2411000d  addiu       $s1, $zero, 0xD
    ctx->pc = 0x4927ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_4927d0:
    // 0x4927d0: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x4927d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_4927d4:
    // 0x4927d4: 0xc1246b8  jal         func_491AE0
label_4927d8:
    if (ctx->pc == 0x4927D8u) {
        ctx->pc = 0x4927DCu;
        goto label_4927dc;
    }
    ctx->pc = 0x4927D4u;
    SET_GPR_U32(ctx, 31, 0x4927DCu);
    ctx->pc = 0x491AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491AE0u, 0x4927D4u, 0x4927DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4927DCu;
label_4927dc:
    // 0x4927dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4927e0:
    if (ctx->pc == 0x4927E0u) {
        ctx->pc = 0x4927E4u;
        goto label_4927e4;
    }
    ctx->pc = 0x4927DCu;
    {
        const bool branch_taken_0x4927dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4927dc) {
            ctx->pc = 0x4927E8u;
            goto label_4927e8;
        }
    }
    ctx->pc = 0x4927E4u;
label_4927e4:
    // 0x4927e4: 0x26310006  addiu       $s1, $s1, 0x6
    ctx->pc = 0x4927e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
label_4927e8:
    // 0x4927e8: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x4927e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_4927ec:
    // 0x4927ec: 0xc1246b8  jal         func_491AE0
label_4927f0:
    if (ctx->pc == 0x4927F0u) {
        ctx->pc = 0x4927F4u;
        goto label_4927f4;
    }
    ctx->pc = 0x4927ECu;
    SET_GPR_U32(ctx, 31, 0x4927F4u);
    ctx->pc = 0x491AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491AE0u, 0x4927ECu, 0x4927F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4927F4u;
label_4927f4:
    // 0x4927f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4927f8:
    if (ctx->pc == 0x4927F8u) {
        ctx->pc = 0x4927FCu;
        goto label_4927fc;
    }
    ctx->pc = 0x4927F4u;
    {
        const bool branch_taken_0x4927f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4927f4) {
            ctx->pc = 0x492800u;
            goto label_492800;
        }
    }
    ctx->pc = 0x4927FCu;
label_4927fc:
    // 0x4927fc: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x4927fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_492800:
    // 0x492800: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x492800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_492804:
    // 0x492804: 0xc0caa12  jal         func_32A848
label_492808:
    if (ctx->pc == 0x492808u) {
        ctx->pc = 0x49280Cu;
        goto label_49280c;
    }
    ctx->pc = 0x492804u;
    SET_GPR_U32(ctx, 31, 0x49280Cu);
    ctx->pc = 0x32A848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A848u, 0x492804u, 0x49280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49280Cu;
label_49280c:
    // 0x49280c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49280cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_492810:
    // 0x492810: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x492810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_492814:
    // 0x492814: 0x244223d0  addiu       $v0, $v0, 0x23D0
    ctx->pc = 0x492814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9168));
label_492818:
    // 0x492818: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x492818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_49281c:
    // 0x49281c: 0x24021001  addiu       $v0, $zero, 0x1001
    ctx->pc = 0x49281cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
label_492820:
    // 0x492820: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x492820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
label_492824:
    // 0x492824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492828:
    // 0x492828: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x492828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
label_49282c:
    // 0x49282c: 0xafa00164  sw          $zero, 0x164($sp)
    ctx->pc = 0x49282cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 0));
label_492830:
    // 0x492830: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x492830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
label_492834:
    // 0x492834: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x492834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_492838:
    // 0x492838: 0xc0caa4a  jal         func_32A928
label_49283c:
    if (ctx->pc == 0x49283Cu) {
        ctx->pc = 0x492840u;
        goto label_492840;
    }
    ctx->pc = 0x492838u;
    SET_GPR_U32(ctx, 31, 0x492840u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x492838u, 0x492840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492840u;
label_492840:
    // 0x492840: 0xafa20590  sw          $v0, 0x590($sp)
    ctx->pc = 0x492840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1424), GPR_U32(ctx, 2));
label_492844:
    // 0x492844: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x492844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_492848:
    // 0x492848: 0x24422458  addiu       $v0, $v0, 0x2458
    ctx->pc = 0x492848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9304));
label_49284c:
    // 0x49284c: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x49284cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_492850:
    // 0x492850: 0x24021002  addiu       $v0, $zero, 0x1002
    ctx->pc = 0x492850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
label_492854:
    // 0x492854: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x492854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
label_492858:
    // 0x492858: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x492858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49285c:
    // 0x49285c: 0xafa4014c  sw          $a0, 0x14C($sp)
    ctx->pc = 0x49285cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
label_492860:
    // 0x492860: 0x24051001  addiu       $a1, $zero, 0x1001
    ctx->pc = 0x492860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
label_492864:
    // 0x492864: 0xafa50144  sw          $a1, 0x144($sp)
    ctx->pc = 0x492864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 5));
label_492868:
    // 0x492868: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x492868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_49286c:
    // 0x49286c: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x49286cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_492870:
    // 0x492870: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x492870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_492874:
    // 0x492874: 0xc0caa4a  jal         func_32A928
label_492878:
    if (ctx->pc == 0x492878u) {
        ctx->pc = 0x49287Cu;
        goto label_49287c;
    }
    ctx->pc = 0x492874u;
    SET_GPR_U32(ctx, 31, 0x49287Cu);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x492874u, 0x49287Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49287Cu;
label_49287c:
    // 0x49287c: 0xafa2058c  sw          $v0, 0x58C($sp)
    ctx->pc = 0x49287cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1420), GPR_U32(ctx, 2));
label_492880:
    // 0x492880: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x492880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_492884:
    // 0x492884: 0x24422470  addiu       $v0, $v0, 0x2470
    ctx->pc = 0x492884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9328));
label_492888:
    // 0x492888: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x492888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_49288c:
    // 0x49288c: 0x24041003  addiu       $a0, $zero, 0x1003
    ctx->pc = 0x49288cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
label_492890:
    // 0x492890: 0xafa40128  sw          $a0, 0x128($sp)
    ctx->pc = 0x492890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 4));
label_492894:
    // 0x492894: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x492894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_492898:
    // 0x492898: 0xafa5012c  sw          $a1, 0x12C($sp)
    ctx->pc = 0x492898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 5));
label_49289c:
    // 0x49289c: 0x24061001  addiu       $a2, $zero, 0x1001
    ctx->pc = 0x49289cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
label_4928a0:
    // 0x4928a0: 0xafa60124  sw          $a2, 0x124($sp)
    ctx->pc = 0x4928a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 6));
label_4928a4:
    // 0x4928a4: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x4928a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_4928a8:
    // 0x4928a8: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x4928a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_4928ac:
    // 0x4928ac: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4928acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4928b0:
    // 0x4928b0: 0xc0caa4a  jal         func_32A928
label_4928b4:
    if (ctx->pc == 0x4928B4u) {
        ctx->pc = 0x4928B8u;
        goto label_4928b8;
    }
    ctx->pc = 0x4928B0u;
    SET_GPR_U32(ctx, 31, 0x4928B8u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x4928B0u, 0x4928B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4928B8u;
label_4928b8:
    // 0x4928b8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4928b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4928bc:
    // 0x4928bc: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x4928bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4928c0:
    // 0x4928c0: 0x3c09004f  lui         $t1, 0x4F
    ctx->pc = 0x4928c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)79 << 16));
label_4928c4:
    // 0x4928c4: 0x25292488  addiu       $t1, $t1, 0x2488
    ctx->pc = 0x4928c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9352));
label_4928c8:
    // 0x4928c8: 0xafa90100  sw          $t1, 0x100($sp)
    ctx->pc = 0x4928c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 9));
label_4928cc:
    // 0x4928cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4928ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4928d0:
    // 0x4928d0: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x4928d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_4928d4:
    // 0x4928d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4928d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4928d8:
    // 0x4928d8: 0xafa4010c  sw          $a0, 0x10C($sp)
    ctx->pc = 0x4928d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 4));
label_4928dc:
    // 0x4928dc: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x4928dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
label_4928e0:
    // 0x4928e0: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x4928e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_4928e4:
    // 0x4928e4: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x4928e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4928e8:
    // 0x4928e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4928e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4928ec:
    // 0x4928ec: 0xc0caa4a  jal         func_32A928
label_4928f0:
    if (ctx->pc == 0x4928F0u) {
        ctx->pc = 0x4928F4u;
        goto label_4928f4;
    }
    ctx->pc = 0x4928ECu;
    SET_GPR_U32(ctx, 31, 0x4928F4u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x4928ECu, 0x4928F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4928F4u;
label_4928f4:
    // 0x4928f4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4928f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4928f8:
    // 0x4928f8: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x4928f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_4928fc:
    // 0x4928fc: 0x24842510  addiu       $a0, $a0, 0x2510
    ctx->pc = 0x4928fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9488));
label_492900:
    // 0x492900: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x492900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
label_492904:
    // 0x492904: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x492904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_492908:
    // 0x492908: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x492908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_49290c:
    // 0x49290c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49290cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492910:
    // 0x492910: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x492910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_492914:
    // 0x492914: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x492914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
label_492918:
    // 0x492918: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x492918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_49291c:
    // 0x49291c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x49291cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_492920:
    // 0x492920: 0xc0caa4a  jal         func_32A928
label_492924:
    if (ctx->pc == 0x492924u) {
        ctx->pc = 0x492928u;
        goto label_492928;
    }
    ctx->pc = 0x492920u;
    SET_GPR_U32(ctx, 31, 0x492928u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x492920u, 0x492928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492928u;
label_492928:
    // 0x492928: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x492928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49292c:
    // 0x49292c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x49292cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_492930:
    // 0x492930: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x492930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_492934:
    // 0x492934: 0x24a52598  addiu       $a1, $a1, 0x2598
    ctx->pc = 0x492934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9624));
label_492938:
    // 0x492938: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x492938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
label_49293c:
    // 0x49293c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x49293cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_492940:
    // 0x492940: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x492940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_492944:
    // 0x492944: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x492944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_492948:
    // 0x492948: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x492948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_49294c:
    // 0x49294c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x49294cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_492950:
    // 0x492950: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x492950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_492954:
    // 0x492954: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x492954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_492958:
    // 0x492958: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x492958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_49295c:
    // 0x49295c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49295cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_492960:
    // 0x492960: 0xc0caa4a  jal         func_32A928
label_492964:
    if (ctx->pc == 0x492964u) {
        ctx->pc = 0x492968u;
        goto label_492968;
    }
    ctx->pc = 0x492960u;
    SET_GPR_U32(ctx, 31, 0x492968u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x492960u, 0x492968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492968u;
label_492968:
    // 0x492968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x492968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49296c:
    // 0x49296c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x49296cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_492970:
    // 0x492970: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x492970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_492974:
    // 0x492974: 0x244225b0  addiu       $v0, $v0, 0x25B0
    ctx->pc = 0x492974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9648));
label_492978:
    // 0x492978: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x492978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_49297c:
    // 0x49297c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x49297cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_492980:
    // 0x492980: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x492980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_492984:
    // 0x492984: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x492984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_492988:
    // 0x492988: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x492988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_49298c:
    // 0x49298c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x49298cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_492990:
    // 0x492990: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x492990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_492994:
    // 0x492994: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x492994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_492998:
    // 0x492998: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x492998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_49299c:
    // 0x49299c: 0xc0caa4a  jal         func_32A928
label_4929a0:
    if (ctx->pc == 0x4929A0u) {
        ctx->pc = 0x4929A4u;
        goto label_4929a4;
    }
    ctx->pc = 0x49299Cu;
    SET_GPR_U32(ctx, 31, 0x4929A4u);
    ctx->pc = 0x32A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A928u, 0x49299Cu, 0x4929A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4929A4u;
label_4929a4:
    // 0x4929a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4929a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4929a8:
    // 0x4929a8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x4929a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4929ac:
    // 0x4929ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4929acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4929b0:
    // 0x4929b0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_4929b4:
    if (ctx->pc == 0x4929B4u) {
        ctx->pc = 0x4929B8u;
        goto label_4929b8;
    }
    ctx->pc = 0x4929B0u;
    {
        const bool branch_taken_0x4929b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4929b0) {
            ctx->pc = 0x4929C4u;
            goto label_4929c4;
        }
    }
    ctx->pc = 0x4929B8u;
label_4929b8:
    // 0x4929b8: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x4929b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_4929bc:
    // 0x4929bc: 0x1440fdb3  bnez        $v0, . + 4 + (-0x24D << 2)
label_4929c0:
    if (ctx->pc == 0x4929C0u) {
        ctx->pc = 0x4929C4u;
        goto label_4929c4;
    }
    ctx->pc = 0x4929BCu;
    {
        const bool branch_taken_0x4929bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4929bc) {
            ctx->pc = 0x49208Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49208c;
        }
    }
    ctx->pc = 0x4929C4u;
label_4929c4:
    // 0x4929c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4929c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4929c8:
    // 0x4929c8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4929c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4929cc:
    // 0x4929cc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4929ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4929d0:
    // 0x4929d0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4929d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4929d4:
    // 0x4929d4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4929d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4929d8:
    // 0x4929d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4929d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4929dc:
    // 0x4929dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4929dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4929e0:
    // 0x4929e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4929e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4929e4:
    // 0x4929e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4929e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4929e8:
    // 0x4929e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4929e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4929ec:
    // 0x4929ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4929ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4929f0:
    // 0x4929f0: 0x27bd05f0  addiu       $sp, $sp, 0x5F0
    ctx->pc = 0x4929f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1520));
label_4929f4:
    // 0x4929f4: 0x3e00008  jr          $ra
label_4929f8:
    if (ctx->pc == 0x4929F8u) {
        ctx->pc = 0x4929FCu;
        goto label_4929fc;
    }
    ctx->pc = 0x4929F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4929F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4929FCu;
label_4929fc:
    // 0x4929fc: 0x0  nop
    ctx->pc = 0x4929fcu;
    // NOP
    ctx->pc = 0x492a00u;
}
