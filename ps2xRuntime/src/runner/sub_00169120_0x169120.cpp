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

// Function: sub_00169120
// Address: 0x169120 - 0x169cb0
void sub_00169120_0x169120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169120_0x169120");
#endif

    switch (ctx->pc) {
        case 0x169120u: goto label_169120;
        case 0x169124u: goto label_169124;
        case 0x169128u: goto label_169128;
        case 0x16912cu: goto label_16912c;
        case 0x169130u: goto label_169130;
        case 0x169134u: goto label_169134;
        case 0x169138u: goto label_169138;
        case 0x16913cu: goto label_16913c;
        case 0x169140u: goto label_169140;
        case 0x169144u: goto label_169144;
        case 0x169148u: goto label_169148;
        case 0x16914cu: goto label_16914c;
        case 0x169150u: goto label_169150;
        case 0x169154u: goto label_169154;
        case 0x169158u: goto label_169158;
        case 0x16915cu: goto label_16915c;
        case 0x169160u: goto label_169160;
        case 0x169164u: goto label_169164;
        case 0x169168u: goto label_169168;
        case 0x16916cu: goto label_16916c;
        case 0x169170u: goto label_169170;
        case 0x169174u: goto label_169174;
        case 0x169178u: goto label_169178;
        case 0x16917cu: goto label_16917c;
        case 0x169180u: goto label_169180;
        case 0x169184u: goto label_169184;
        case 0x169188u: goto label_169188;
        case 0x16918cu: goto label_16918c;
        case 0x169190u: goto label_169190;
        case 0x169194u: goto label_169194;
        case 0x169198u: goto label_169198;
        case 0x16919cu: goto label_16919c;
        case 0x1691a0u: goto label_1691a0;
        case 0x1691a4u: goto label_1691a4;
        case 0x1691a8u: goto label_1691a8;
        case 0x1691acu: goto label_1691ac;
        case 0x1691b0u: goto label_1691b0;
        case 0x1691b4u: goto label_1691b4;
        case 0x1691b8u: goto label_1691b8;
        case 0x1691bcu: goto label_1691bc;
        case 0x1691c0u: goto label_1691c0;
        case 0x1691c4u: goto label_1691c4;
        case 0x1691c8u: goto label_1691c8;
        case 0x1691ccu: goto label_1691cc;
        case 0x1691d0u: goto label_1691d0;
        case 0x1691d4u: goto label_1691d4;
        case 0x1691d8u: goto label_1691d8;
        case 0x1691dcu: goto label_1691dc;
        case 0x1691e0u: goto label_1691e0;
        case 0x1691e4u: goto label_1691e4;
        case 0x1691e8u: goto label_1691e8;
        case 0x1691ecu: goto label_1691ec;
        case 0x1691f0u: goto label_1691f0;
        case 0x1691f4u: goto label_1691f4;
        case 0x1691f8u: goto label_1691f8;
        case 0x1691fcu: goto label_1691fc;
        case 0x169200u: goto label_169200;
        case 0x169204u: goto label_169204;
        case 0x169208u: goto label_169208;
        case 0x16920cu: goto label_16920c;
        case 0x169210u: goto label_169210;
        case 0x169214u: goto label_169214;
        case 0x169218u: goto label_169218;
        case 0x16921cu: goto label_16921c;
        case 0x169220u: goto label_169220;
        case 0x169224u: goto label_169224;
        case 0x169228u: goto label_169228;
        case 0x16922cu: goto label_16922c;
        case 0x169230u: goto label_169230;
        case 0x169234u: goto label_169234;
        case 0x169238u: goto label_169238;
        case 0x16923cu: goto label_16923c;
        case 0x169240u: goto label_169240;
        case 0x169244u: goto label_169244;
        case 0x169248u: goto label_169248;
        case 0x16924cu: goto label_16924c;
        case 0x169250u: goto label_169250;
        case 0x169254u: goto label_169254;
        case 0x169258u: goto label_169258;
        case 0x16925cu: goto label_16925c;
        case 0x169260u: goto label_169260;
        case 0x169264u: goto label_169264;
        case 0x169268u: goto label_169268;
        case 0x16926cu: goto label_16926c;
        case 0x169270u: goto label_169270;
        case 0x169274u: goto label_169274;
        case 0x169278u: goto label_169278;
        case 0x16927cu: goto label_16927c;
        case 0x169280u: goto label_169280;
        case 0x169284u: goto label_169284;
        case 0x169288u: goto label_169288;
        case 0x16928cu: goto label_16928c;
        case 0x169290u: goto label_169290;
        case 0x169294u: goto label_169294;
        case 0x169298u: goto label_169298;
        case 0x16929cu: goto label_16929c;
        case 0x1692a0u: goto label_1692a0;
        case 0x1692a4u: goto label_1692a4;
        case 0x1692a8u: goto label_1692a8;
        case 0x1692acu: goto label_1692ac;
        case 0x1692b0u: goto label_1692b0;
        case 0x1692b4u: goto label_1692b4;
        case 0x1692b8u: goto label_1692b8;
        case 0x1692bcu: goto label_1692bc;
        case 0x1692c0u: goto label_1692c0;
        case 0x1692c4u: goto label_1692c4;
        case 0x1692c8u: goto label_1692c8;
        case 0x1692ccu: goto label_1692cc;
        case 0x1692d0u: goto label_1692d0;
        case 0x1692d4u: goto label_1692d4;
        case 0x1692d8u: goto label_1692d8;
        case 0x1692dcu: goto label_1692dc;
        case 0x1692e0u: goto label_1692e0;
        case 0x1692e4u: goto label_1692e4;
        case 0x1692e8u: goto label_1692e8;
        case 0x1692ecu: goto label_1692ec;
        case 0x1692f0u: goto label_1692f0;
        case 0x1692f4u: goto label_1692f4;
        case 0x1692f8u: goto label_1692f8;
        case 0x1692fcu: goto label_1692fc;
        case 0x169300u: goto label_169300;
        case 0x169304u: goto label_169304;
        case 0x169308u: goto label_169308;
        case 0x16930cu: goto label_16930c;
        case 0x169310u: goto label_169310;
        case 0x169314u: goto label_169314;
        case 0x169318u: goto label_169318;
        case 0x16931cu: goto label_16931c;
        case 0x169320u: goto label_169320;
        case 0x169324u: goto label_169324;
        case 0x169328u: goto label_169328;
        case 0x16932cu: goto label_16932c;
        case 0x169330u: goto label_169330;
        case 0x169334u: goto label_169334;
        case 0x169338u: goto label_169338;
        case 0x16933cu: goto label_16933c;
        case 0x169340u: goto label_169340;
        case 0x169344u: goto label_169344;
        case 0x169348u: goto label_169348;
        case 0x16934cu: goto label_16934c;
        case 0x169350u: goto label_169350;
        case 0x169354u: goto label_169354;
        case 0x169358u: goto label_169358;
        case 0x16935cu: goto label_16935c;
        case 0x169360u: goto label_169360;
        case 0x169364u: goto label_169364;
        case 0x169368u: goto label_169368;
        case 0x16936cu: goto label_16936c;
        case 0x169370u: goto label_169370;
        case 0x169374u: goto label_169374;
        case 0x169378u: goto label_169378;
        case 0x16937cu: goto label_16937c;
        case 0x169380u: goto label_169380;
        case 0x169384u: goto label_169384;
        case 0x169388u: goto label_169388;
        case 0x16938cu: goto label_16938c;
        case 0x169390u: goto label_169390;
        case 0x169394u: goto label_169394;
        case 0x169398u: goto label_169398;
        case 0x16939cu: goto label_16939c;
        case 0x1693a0u: goto label_1693a0;
        case 0x1693a4u: goto label_1693a4;
        case 0x1693a8u: goto label_1693a8;
        case 0x1693acu: goto label_1693ac;
        case 0x1693b0u: goto label_1693b0;
        case 0x1693b4u: goto label_1693b4;
        case 0x1693b8u: goto label_1693b8;
        case 0x1693bcu: goto label_1693bc;
        case 0x1693c0u: goto label_1693c0;
        case 0x1693c4u: goto label_1693c4;
        case 0x1693c8u: goto label_1693c8;
        case 0x1693ccu: goto label_1693cc;
        case 0x1693d0u: goto label_1693d0;
        case 0x1693d4u: goto label_1693d4;
        case 0x1693d8u: goto label_1693d8;
        case 0x1693dcu: goto label_1693dc;
        case 0x1693e0u: goto label_1693e0;
        case 0x1693e4u: goto label_1693e4;
        case 0x1693e8u: goto label_1693e8;
        case 0x1693ecu: goto label_1693ec;
        case 0x1693f0u: goto label_1693f0;
        case 0x1693f4u: goto label_1693f4;
        case 0x1693f8u: goto label_1693f8;
        case 0x1693fcu: goto label_1693fc;
        case 0x169400u: goto label_169400;
        case 0x169404u: goto label_169404;
        case 0x169408u: goto label_169408;
        case 0x16940cu: goto label_16940c;
        case 0x169410u: goto label_169410;
        case 0x169414u: goto label_169414;
        case 0x169418u: goto label_169418;
        case 0x16941cu: goto label_16941c;
        case 0x169420u: goto label_169420;
        case 0x169424u: goto label_169424;
        case 0x169428u: goto label_169428;
        case 0x16942cu: goto label_16942c;
        case 0x169430u: goto label_169430;
        case 0x169434u: goto label_169434;
        case 0x169438u: goto label_169438;
        case 0x16943cu: goto label_16943c;
        case 0x169440u: goto label_169440;
        case 0x169444u: goto label_169444;
        case 0x169448u: goto label_169448;
        case 0x16944cu: goto label_16944c;
        case 0x169450u: goto label_169450;
        case 0x169454u: goto label_169454;
        case 0x169458u: goto label_169458;
        case 0x16945cu: goto label_16945c;
        case 0x169460u: goto label_169460;
        case 0x169464u: goto label_169464;
        case 0x169468u: goto label_169468;
        case 0x16946cu: goto label_16946c;
        case 0x169470u: goto label_169470;
        case 0x169474u: goto label_169474;
        case 0x169478u: goto label_169478;
        case 0x16947cu: goto label_16947c;
        case 0x169480u: goto label_169480;
        case 0x169484u: goto label_169484;
        case 0x169488u: goto label_169488;
        case 0x16948cu: goto label_16948c;
        case 0x169490u: goto label_169490;
        case 0x169494u: goto label_169494;
        case 0x169498u: goto label_169498;
        case 0x16949cu: goto label_16949c;
        case 0x1694a0u: goto label_1694a0;
        case 0x1694a4u: goto label_1694a4;
        case 0x1694a8u: goto label_1694a8;
        case 0x1694acu: goto label_1694ac;
        case 0x1694b0u: goto label_1694b0;
        case 0x1694b4u: goto label_1694b4;
        case 0x1694b8u: goto label_1694b8;
        case 0x1694bcu: goto label_1694bc;
        case 0x1694c0u: goto label_1694c0;
        case 0x1694c4u: goto label_1694c4;
        case 0x1694c8u: goto label_1694c8;
        case 0x1694ccu: goto label_1694cc;
        case 0x1694d0u: goto label_1694d0;
        case 0x1694d4u: goto label_1694d4;
        case 0x1694d8u: goto label_1694d8;
        case 0x1694dcu: goto label_1694dc;
        case 0x1694e0u: goto label_1694e0;
        case 0x1694e4u: goto label_1694e4;
        case 0x1694e8u: goto label_1694e8;
        case 0x1694ecu: goto label_1694ec;
        case 0x1694f0u: goto label_1694f0;
        case 0x1694f4u: goto label_1694f4;
        case 0x1694f8u: goto label_1694f8;
        case 0x1694fcu: goto label_1694fc;
        case 0x169500u: goto label_169500;
        case 0x169504u: goto label_169504;
        case 0x169508u: goto label_169508;
        case 0x16950cu: goto label_16950c;
        case 0x169510u: goto label_169510;
        case 0x169514u: goto label_169514;
        case 0x169518u: goto label_169518;
        case 0x16951cu: goto label_16951c;
        case 0x169520u: goto label_169520;
        case 0x169524u: goto label_169524;
        case 0x169528u: goto label_169528;
        case 0x16952cu: goto label_16952c;
        case 0x169530u: goto label_169530;
        case 0x169534u: goto label_169534;
        case 0x169538u: goto label_169538;
        case 0x16953cu: goto label_16953c;
        case 0x169540u: goto label_169540;
        case 0x169544u: goto label_169544;
        case 0x169548u: goto label_169548;
        case 0x16954cu: goto label_16954c;
        case 0x169550u: goto label_169550;
        case 0x169554u: goto label_169554;
        case 0x169558u: goto label_169558;
        case 0x16955cu: goto label_16955c;
        case 0x169560u: goto label_169560;
        case 0x169564u: goto label_169564;
        case 0x169568u: goto label_169568;
        case 0x16956cu: goto label_16956c;
        case 0x169570u: goto label_169570;
        case 0x169574u: goto label_169574;
        case 0x169578u: goto label_169578;
        case 0x16957cu: goto label_16957c;
        case 0x169580u: goto label_169580;
        case 0x169584u: goto label_169584;
        case 0x169588u: goto label_169588;
        case 0x16958cu: goto label_16958c;
        case 0x169590u: goto label_169590;
        case 0x169594u: goto label_169594;
        case 0x169598u: goto label_169598;
        case 0x16959cu: goto label_16959c;
        case 0x1695a0u: goto label_1695a0;
        case 0x1695a4u: goto label_1695a4;
        case 0x1695a8u: goto label_1695a8;
        case 0x1695acu: goto label_1695ac;
        case 0x1695b0u: goto label_1695b0;
        case 0x1695b4u: goto label_1695b4;
        case 0x1695b8u: goto label_1695b8;
        case 0x1695bcu: goto label_1695bc;
        case 0x1695c0u: goto label_1695c0;
        case 0x1695c4u: goto label_1695c4;
        case 0x1695c8u: goto label_1695c8;
        case 0x1695ccu: goto label_1695cc;
        case 0x1695d0u: goto label_1695d0;
        case 0x1695d4u: goto label_1695d4;
        case 0x1695d8u: goto label_1695d8;
        case 0x1695dcu: goto label_1695dc;
        case 0x1695e0u: goto label_1695e0;
        case 0x1695e4u: goto label_1695e4;
        case 0x1695e8u: goto label_1695e8;
        case 0x1695ecu: goto label_1695ec;
        case 0x1695f0u: goto label_1695f0;
        case 0x1695f4u: goto label_1695f4;
        case 0x1695f8u: goto label_1695f8;
        case 0x1695fcu: goto label_1695fc;
        case 0x169600u: goto label_169600;
        case 0x169604u: goto label_169604;
        case 0x169608u: goto label_169608;
        case 0x16960cu: goto label_16960c;
        case 0x169610u: goto label_169610;
        case 0x169614u: goto label_169614;
        case 0x169618u: goto label_169618;
        case 0x16961cu: goto label_16961c;
        case 0x169620u: goto label_169620;
        case 0x169624u: goto label_169624;
        case 0x169628u: goto label_169628;
        case 0x16962cu: goto label_16962c;
        case 0x169630u: goto label_169630;
        case 0x169634u: goto label_169634;
        case 0x169638u: goto label_169638;
        case 0x16963cu: goto label_16963c;
        case 0x169640u: goto label_169640;
        case 0x169644u: goto label_169644;
        case 0x169648u: goto label_169648;
        case 0x16964cu: goto label_16964c;
        case 0x169650u: goto label_169650;
        case 0x169654u: goto label_169654;
        case 0x169658u: goto label_169658;
        case 0x16965cu: goto label_16965c;
        case 0x169660u: goto label_169660;
        case 0x169664u: goto label_169664;
        case 0x169668u: goto label_169668;
        case 0x16966cu: goto label_16966c;
        case 0x169670u: goto label_169670;
        case 0x169674u: goto label_169674;
        case 0x169678u: goto label_169678;
        case 0x16967cu: goto label_16967c;
        case 0x169680u: goto label_169680;
        case 0x169684u: goto label_169684;
        case 0x169688u: goto label_169688;
        case 0x16968cu: goto label_16968c;
        case 0x169690u: goto label_169690;
        case 0x169694u: goto label_169694;
        case 0x169698u: goto label_169698;
        case 0x16969cu: goto label_16969c;
        case 0x1696a0u: goto label_1696a0;
        case 0x1696a4u: goto label_1696a4;
        case 0x1696a8u: goto label_1696a8;
        case 0x1696acu: goto label_1696ac;
        case 0x1696b0u: goto label_1696b0;
        case 0x1696b4u: goto label_1696b4;
        case 0x1696b8u: goto label_1696b8;
        case 0x1696bcu: goto label_1696bc;
        case 0x1696c0u: goto label_1696c0;
        case 0x1696c4u: goto label_1696c4;
        case 0x1696c8u: goto label_1696c8;
        case 0x1696ccu: goto label_1696cc;
        case 0x1696d0u: goto label_1696d0;
        case 0x1696d4u: goto label_1696d4;
        case 0x1696d8u: goto label_1696d8;
        case 0x1696dcu: goto label_1696dc;
        case 0x1696e0u: goto label_1696e0;
        case 0x1696e4u: goto label_1696e4;
        case 0x1696e8u: goto label_1696e8;
        case 0x1696ecu: goto label_1696ec;
        case 0x1696f0u: goto label_1696f0;
        case 0x1696f4u: goto label_1696f4;
        case 0x1696f8u: goto label_1696f8;
        case 0x1696fcu: goto label_1696fc;
        case 0x169700u: goto label_169700;
        case 0x169704u: goto label_169704;
        case 0x169708u: goto label_169708;
        case 0x16970cu: goto label_16970c;
        case 0x169710u: goto label_169710;
        case 0x169714u: goto label_169714;
        case 0x169718u: goto label_169718;
        case 0x16971cu: goto label_16971c;
        case 0x169720u: goto label_169720;
        case 0x169724u: goto label_169724;
        case 0x169728u: goto label_169728;
        case 0x16972cu: goto label_16972c;
        case 0x169730u: goto label_169730;
        case 0x169734u: goto label_169734;
        case 0x169738u: goto label_169738;
        case 0x16973cu: goto label_16973c;
        case 0x169740u: goto label_169740;
        case 0x169744u: goto label_169744;
        case 0x169748u: goto label_169748;
        case 0x16974cu: goto label_16974c;
        case 0x169750u: goto label_169750;
        case 0x169754u: goto label_169754;
        case 0x169758u: goto label_169758;
        case 0x16975cu: goto label_16975c;
        case 0x169760u: goto label_169760;
        case 0x169764u: goto label_169764;
        case 0x169768u: goto label_169768;
        case 0x16976cu: goto label_16976c;
        case 0x169770u: goto label_169770;
        case 0x169774u: goto label_169774;
        case 0x169778u: goto label_169778;
        case 0x16977cu: goto label_16977c;
        case 0x169780u: goto label_169780;
        case 0x169784u: goto label_169784;
        case 0x169788u: goto label_169788;
        case 0x16978cu: goto label_16978c;
        case 0x169790u: goto label_169790;
        case 0x169794u: goto label_169794;
        case 0x169798u: goto label_169798;
        case 0x16979cu: goto label_16979c;
        case 0x1697a0u: goto label_1697a0;
        case 0x1697a4u: goto label_1697a4;
        case 0x1697a8u: goto label_1697a8;
        case 0x1697acu: goto label_1697ac;
        case 0x1697b0u: goto label_1697b0;
        case 0x1697b4u: goto label_1697b4;
        case 0x1697b8u: goto label_1697b8;
        case 0x1697bcu: goto label_1697bc;
        case 0x1697c0u: goto label_1697c0;
        case 0x1697c4u: goto label_1697c4;
        case 0x1697c8u: goto label_1697c8;
        case 0x1697ccu: goto label_1697cc;
        case 0x1697d0u: goto label_1697d0;
        case 0x1697d4u: goto label_1697d4;
        case 0x1697d8u: goto label_1697d8;
        case 0x1697dcu: goto label_1697dc;
        case 0x1697e0u: goto label_1697e0;
        case 0x1697e4u: goto label_1697e4;
        case 0x1697e8u: goto label_1697e8;
        case 0x1697ecu: goto label_1697ec;
        case 0x1697f0u: goto label_1697f0;
        case 0x1697f4u: goto label_1697f4;
        case 0x1697f8u: goto label_1697f8;
        case 0x1697fcu: goto label_1697fc;
        case 0x169800u: goto label_169800;
        case 0x169804u: goto label_169804;
        case 0x169808u: goto label_169808;
        case 0x16980cu: goto label_16980c;
        case 0x169810u: goto label_169810;
        case 0x169814u: goto label_169814;
        case 0x169818u: goto label_169818;
        case 0x16981cu: goto label_16981c;
        case 0x169820u: goto label_169820;
        case 0x169824u: goto label_169824;
        case 0x169828u: goto label_169828;
        case 0x16982cu: goto label_16982c;
        case 0x169830u: goto label_169830;
        case 0x169834u: goto label_169834;
        case 0x169838u: goto label_169838;
        case 0x16983cu: goto label_16983c;
        case 0x169840u: goto label_169840;
        case 0x169844u: goto label_169844;
        case 0x169848u: goto label_169848;
        case 0x16984cu: goto label_16984c;
        case 0x169850u: goto label_169850;
        case 0x169854u: goto label_169854;
        case 0x169858u: goto label_169858;
        case 0x16985cu: goto label_16985c;
        case 0x169860u: goto label_169860;
        case 0x169864u: goto label_169864;
        case 0x169868u: goto label_169868;
        case 0x16986cu: goto label_16986c;
        case 0x169870u: goto label_169870;
        case 0x169874u: goto label_169874;
        case 0x169878u: goto label_169878;
        case 0x16987cu: goto label_16987c;
        case 0x169880u: goto label_169880;
        case 0x169884u: goto label_169884;
        case 0x169888u: goto label_169888;
        case 0x16988cu: goto label_16988c;
        case 0x169890u: goto label_169890;
        case 0x169894u: goto label_169894;
        case 0x169898u: goto label_169898;
        case 0x16989cu: goto label_16989c;
        case 0x1698a0u: goto label_1698a0;
        case 0x1698a4u: goto label_1698a4;
        case 0x1698a8u: goto label_1698a8;
        case 0x1698acu: goto label_1698ac;
        case 0x1698b0u: goto label_1698b0;
        case 0x1698b4u: goto label_1698b4;
        case 0x1698b8u: goto label_1698b8;
        case 0x1698bcu: goto label_1698bc;
        case 0x1698c0u: goto label_1698c0;
        case 0x1698c4u: goto label_1698c4;
        case 0x1698c8u: goto label_1698c8;
        case 0x1698ccu: goto label_1698cc;
        case 0x1698d0u: goto label_1698d0;
        case 0x1698d4u: goto label_1698d4;
        case 0x1698d8u: goto label_1698d8;
        case 0x1698dcu: goto label_1698dc;
        case 0x1698e0u: goto label_1698e0;
        case 0x1698e4u: goto label_1698e4;
        case 0x1698e8u: goto label_1698e8;
        case 0x1698ecu: goto label_1698ec;
        case 0x1698f0u: goto label_1698f0;
        case 0x1698f4u: goto label_1698f4;
        case 0x1698f8u: goto label_1698f8;
        case 0x1698fcu: goto label_1698fc;
        case 0x169900u: goto label_169900;
        case 0x169904u: goto label_169904;
        case 0x169908u: goto label_169908;
        case 0x16990cu: goto label_16990c;
        case 0x169910u: goto label_169910;
        case 0x169914u: goto label_169914;
        case 0x169918u: goto label_169918;
        case 0x16991cu: goto label_16991c;
        case 0x169920u: goto label_169920;
        case 0x169924u: goto label_169924;
        case 0x169928u: goto label_169928;
        case 0x16992cu: goto label_16992c;
        case 0x169930u: goto label_169930;
        case 0x169934u: goto label_169934;
        case 0x169938u: goto label_169938;
        case 0x16993cu: goto label_16993c;
        case 0x169940u: goto label_169940;
        case 0x169944u: goto label_169944;
        case 0x169948u: goto label_169948;
        case 0x16994cu: goto label_16994c;
        case 0x169950u: goto label_169950;
        case 0x169954u: goto label_169954;
        case 0x169958u: goto label_169958;
        case 0x16995cu: goto label_16995c;
        case 0x169960u: goto label_169960;
        case 0x169964u: goto label_169964;
        case 0x169968u: goto label_169968;
        case 0x16996cu: goto label_16996c;
        case 0x169970u: goto label_169970;
        case 0x169974u: goto label_169974;
        case 0x169978u: goto label_169978;
        case 0x16997cu: goto label_16997c;
        case 0x169980u: goto label_169980;
        case 0x169984u: goto label_169984;
        case 0x169988u: goto label_169988;
        case 0x16998cu: goto label_16998c;
        case 0x169990u: goto label_169990;
        case 0x169994u: goto label_169994;
        case 0x169998u: goto label_169998;
        case 0x16999cu: goto label_16999c;
        case 0x1699a0u: goto label_1699a0;
        case 0x1699a4u: goto label_1699a4;
        case 0x1699a8u: goto label_1699a8;
        case 0x1699acu: goto label_1699ac;
        case 0x1699b0u: goto label_1699b0;
        case 0x1699b4u: goto label_1699b4;
        case 0x1699b8u: goto label_1699b8;
        case 0x1699bcu: goto label_1699bc;
        case 0x1699c0u: goto label_1699c0;
        case 0x1699c4u: goto label_1699c4;
        case 0x1699c8u: goto label_1699c8;
        case 0x1699ccu: goto label_1699cc;
        case 0x1699d0u: goto label_1699d0;
        case 0x1699d4u: goto label_1699d4;
        case 0x1699d8u: goto label_1699d8;
        case 0x1699dcu: goto label_1699dc;
        case 0x1699e0u: goto label_1699e0;
        case 0x1699e4u: goto label_1699e4;
        case 0x1699e8u: goto label_1699e8;
        case 0x1699ecu: goto label_1699ec;
        case 0x1699f0u: goto label_1699f0;
        case 0x1699f4u: goto label_1699f4;
        case 0x1699f8u: goto label_1699f8;
        case 0x1699fcu: goto label_1699fc;
        case 0x169a00u: goto label_169a00;
        case 0x169a04u: goto label_169a04;
        case 0x169a08u: goto label_169a08;
        case 0x169a0cu: goto label_169a0c;
        case 0x169a10u: goto label_169a10;
        case 0x169a14u: goto label_169a14;
        case 0x169a18u: goto label_169a18;
        case 0x169a1cu: goto label_169a1c;
        case 0x169a20u: goto label_169a20;
        case 0x169a24u: goto label_169a24;
        case 0x169a28u: goto label_169a28;
        case 0x169a2cu: goto label_169a2c;
        case 0x169a30u: goto label_169a30;
        case 0x169a34u: goto label_169a34;
        case 0x169a38u: goto label_169a38;
        case 0x169a3cu: goto label_169a3c;
        case 0x169a40u: goto label_169a40;
        case 0x169a44u: goto label_169a44;
        case 0x169a48u: goto label_169a48;
        case 0x169a4cu: goto label_169a4c;
        case 0x169a50u: goto label_169a50;
        case 0x169a54u: goto label_169a54;
        case 0x169a58u: goto label_169a58;
        case 0x169a5cu: goto label_169a5c;
        case 0x169a60u: goto label_169a60;
        case 0x169a64u: goto label_169a64;
        case 0x169a68u: goto label_169a68;
        case 0x169a6cu: goto label_169a6c;
        case 0x169a70u: goto label_169a70;
        case 0x169a74u: goto label_169a74;
        case 0x169a78u: goto label_169a78;
        case 0x169a7cu: goto label_169a7c;
        case 0x169a80u: goto label_169a80;
        case 0x169a84u: goto label_169a84;
        case 0x169a88u: goto label_169a88;
        case 0x169a8cu: goto label_169a8c;
        case 0x169a90u: goto label_169a90;
        case 0x169a94u: goto label_169a94;
        case 0x169a98u: goto label_169a98;
        case 0x169a9cu: goto label_169a9c;
        case 0x169aa0u: goto label_169aa0;
        case 0x169aa4u: goto label_169aa4;
        case 0x169aa8u: goto label_169aa8;
        case 0x169aacu: goto label_169aac;
        case 0x169ab0u: goto label_169ab0;
        case 0x169ab4u: goto label_169ab4;
        case 0x169ab8u: goto label_169ab8;
        case 0x169abcu: goto label_169abc;
        case 0x169ac0u: goto label_169ac0;
        case 0x169ac4u: goto label_169ac4;
        case 0x169ac8u: goto label_169ac8;
        case 0x169accu: goto label_169acc;
        case 0x169ad0u: goto label_169ad0;
        case 0x169ad4u: goto label_169ad4;
        case 0x169ad8u: goto label_169ad8;
        case 0x169adcu: goto label_169adc;
        case 0x169ae0u: goto label_169ae0;
        case 0x169ae4u: goto label_169ae4;
        case 0x169ae8u: goto label_169ae8;
        case 0x169aecu: goto label_169aec;
        case 0x169af0u: goto label_169af0;
        case 0x169af4u: goto label_169af4;
        case 0x169af8u: goto label_169af8;
        case 0x169afcu: goto label_169afc;
        case 0x169b00u: goto label_169b00;
        case 0x169b04u: goto label_169b04;
        case 0x169b08u: goto label_169b08;
        case 0x169b0cu: goto label_169b0c;
        case 0x169b10u: goto label_169b10;
        case 0x169b14u: goto label_169b14;
        case 0x169b18u: goto label_169b18;
        case 0x169b1cu: goto label_169b1c;
        case 0x169b20u: goto label_169b20;
        case 0x169b24u: goto label_169b24;
        case 0x169b28u: goto label_169b28;
        case 0x169b2cu: goto label_169b2c;
        case 0x169b30u: goto label_169b30;
        case 0x169b34u: goto label_169b34;
        case 0x169b38u: goto label_169b38;
        case 0x169b3cu: goto label_169b3c;
        case 0x169b40u: goto label_169b40;
        case 0x169b44u: goto label_169b44;
        case 0x169b48u: goto label_169b48;
        case 0x169b4cu: goto label_169b4c;
        case 0x169b50u: goto label_169b50;
        case 0x169b54u: goto label_169b54;
        case 0x169b58u: goto label_169b58;
        case 0x169b5cu: goto label_169b5c;
        case 0x169b60u: goto label_169b60;
        case 0x169b64u: goto label_169b64;
        case 0x169b68u: goto label_169b68;
        case 0x169b6cu: goto label_169b6c;
        case 0x169b70u: goto label_169b70;
        case 0x169b74u: goto label_169b74;
        case 0x169b78u: goto label_169b78;
        case 0x169b7cu: goto label_169b7c;
        case 0x169b80u: goto label_169b80;
        case 0x169b84u: goto label_169b84;
        case 0x169b88u: goto label_169b88;
        case 0x169b8cu: goto label_169b8c;
        case 0x169b90u: goto label_169b90;
        case 0x169b94u: goto label_169b94;
        case 0x169b98u: goto label_169b98;
        case 0x169b9cu: goto label_169b9c;
        case 0x169ba0u: goto label_169ba0;
        case 0x169ba4u: goto label_169ba4;
        case 0x169ba8u: goto label_169ba8;
        case 0x169bacu: goto label_169bac;
        case 0x169bb0u: goto label_169bb0;
        case 0x169bb4u: goto label_169bb4;
        case 0x169bb8u: goto label_169bb8;
        case 0x169bbcu: goto label_169bbc;
        case 0x169bc0u: goto label_169bc0;
        case 0x169bc4u: goto label_169bc4;
        case 0x169bc8u: goto label_169bc8;
        case 0x169bccu: goto label_169bcc;
        case 0x169bd0u: goto label_169bd0;
        case 0x169bd4u: goto label_169bd4;
        case 0x169bd8u: goto label_169bd8;
        case 0x169bdcu: goto label_169bdc;
        case 0x169be0u: goto label_169be0;
        case 0x169be4u: goto label_169be4;
        case 0x169be8u: goto label_169be8;
        case 0x169becu: goto label_169bec;
        case 0x169bf0u: goto label_169bf0;
        case 0x169bf4u: goto label_169bf4;
        case 0x169bf8u: goto label_169bf8;
        case 0x169bfcu: goto label_169bfc;
        case 0x169c00u: goto label_169c00;
        case 0x169c04u: goto label_169c04;
        case 0x169c08u: goto label_169c08;
        case 0x169c0cu: goto label_169c0c;
        case 0x169c10u: goto label_169c10;
        case 0x169c14u: goto label_169c14;
        case 0x169c18u: goto label_169c18;
        case 0x169c1cu: goto label_169c1c;
        case 0x169c20u: goto label_169c20;
        case 0x169c24u: goto label_169c24;
        case 0x169c28u: goto label_169c28;
        case 0x169c2cu: goto label_169c2c;
        case 0x169c30u: goto label_169c30;
        case 0x169c34u: goto label_169c34;
        case 0x169c38u: goto label_169c38;
        case 0x169c3cu: goto label_169c3c;
        case 0x169c40u: goto label_169c40;
        case 0x169c44u: goto label_169c44;
        case 0x169c48u: goto label_169c48;
        case 0x169c4cu: goto label_169c4c;
        case 0x169c50u: goto label_169c50;
        case 0x169c54u: goto label_169c54;
        case 0x169c58u: goto label_169c58;
        case 0x169c5cu: goto label_169c5c;
        case 0x169c60u: goto label_169c60;
        case 0x169c64u: goto label_169c64;
        case 0x169c68u: goto label_169c68;
        case 0x169c6cu: goto label_169c6c;
        case 0x169c70u: goto label_169c70;
        case 0x169c74u: goto label_169c74;
        case 0x169c78u: goto label_169c78;
        case 0x169c7cu: goto label_169c7c;
        case 0x169c80u: goto label_169c80;
        case 0x169c84u: goto label_169c84;
        case 0x169c88u: goto label_169c88;
        case 0x169c8cu: goto label_169c8c;
        case 0x169c90u: goto label_169c90;
        case 0x169c94u: goto label_169c94;
        case 0x169c98u: goto label_169c98;
        case 0x169c9cu: goto label_169c9c;
        case 0x169ca0u: goto label_169ca0;
        case 0x169ca4u: goto label_169ca4;
        case 0x169ca8u: goto label_169ca8;
        case 0x169cacu: goto label_169cac;
        default: break;
    }

    ctx->pc = 0x169120u;

label_169120:
    // 0x169120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_169124:
    // 0x169124: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x169124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_169128:
    // 0x169128: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x169128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16912c:
    // 0x16912c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x16912cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_169130:
    // 0x169130: 0x3e00008  jr          $ra
label_169134:
    if (ctx->pc == 0x169134u) {
        ctx->pc = 0x169138u;
        goto label_169138;
    }
    ctx->pc = 0x169130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169138u;
label_169138:
    // 0x169138: 0x0  nop
    ctx->pc = 0x169138u;
    // NOP
label_16913c:
    // 0x16913c: 0x0  nop
    ctx->pc = 0x16913cu;
    // NOP
label_169140:
    // 0x169140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_169144:
    // 0x169144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_169148:
    // 0x169148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16914c:
    // 0x16914c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x16914cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_169150:
    // 0x169150: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x169150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_169154:
    // 0x169154: 0xc0559dc  jal         func_156770
label_169158:
    if (ctx->pc == 0x169158u) {
        ctx->pc = 0x16915Cu;
        goto label_16915c;
    }
    ctx->pc = 0x169154u;
    SET_GPR_U32(ctx, 31, 0x16915Cu);
    ctx->pc = 0x156770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156770u, 0x169154u, 0x16915Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16915Cu;
label_16915c:
    // 0x16915c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16915cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_169160:
    // 0x169160: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x169160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169164:
    // 0x169164: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_169168:
    // 0x169168: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16916c:
    // 0x16916c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16916cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_169170:
    // 0x169170: 0x3e00008  jr          $ra
label_169174:
    if (ctx->pc == 0x169174u) {
        ctx->pc = 0x169178u;
        goto label_169178;
    }
    ctx->pc = 0x169170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169178u;
label_169178:
    // 0x169178: 0x0  nop
    ctx->pc = 0x169178u;
    // NOP
label_16917c:
    // 0x16917c: 0x0  nop
    ctx->pc = 0x16917cu;
    // NOP
label_169180:
    // 0x169180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_169184:
    // 0x169184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_169188:
    // 0x169188: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16918c:
    // 0x16918c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x16918cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_169190:
    // 0x169190: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x169190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_169194:
    // 0x169194: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x169194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_169198:
    // 0x169198: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_16919c:
    if (ctx->pc == 0x16919Cu) {
        ctx->pc = 0x1691A0u;
        goto label_1691a0;
    }
    ctx->pc = 0x169198u;
    {
        const bool branch_taken_0x169198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169198) {
            ctx->pc = 0x1691BCu;
            goto label_1691bc;
        }
    }
    ctx->pc = 0x1691A0u;
label_1691a0:
    // 0x1691a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1691a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1691a4:
    // 0x1691a4: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x1691a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
label_1691a8:
    // 0x1691a8: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x1691a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_1691ac:
    // 0x1691ac: 0xc05a3f8  jal         func_168FE0
label_1691b0:
    if (ctx->pc == 0x1691B0u) {
        ctx->pc = 0x1691B4u;
        goto label_1691b4;
    }
    ctx->pc = 0x1691ACu;
    SET_GPR_U32(ctx, 31, 0x1691B4u);
    ctx->pc = 0x168FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168FE0u, 0x1691ACu, 0x1691B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1691B4u;
label_1691b4:
    // 0x1691b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1691b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1691b8:
    // 0x1691b8: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x1691b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_1691bc:
    // 0x1691bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1691bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1691c0:
    // 0x1691c0: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1691c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1691c4:
    // 0x1691c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1691c8:
    if (ctx->pc == 0x1691C8u) {
        ctx->pc = 0x1691CCu;
        goto label_1691cc;
    }
    ctx->pc = 0x1691C4u;
    {
        const bool branch_taken_0x1691c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1691c4) {
            ctx->pc = 0x1691E8u;
            goto label_1691e8;
        }
    }
    ctx->pc = 0x1691CCu;
label_1691cc:
    // 0x1691cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1691ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1691d0:
    // 0x1691d0: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x1691d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
label_1691d4:
    // 0x1691d4: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x1691d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1691d8:
    // 0x1691d8: 0xc05a3a0  jal         func_168E80
label_1691dc:
    if (ctx->pc == 0x1691DCu) {
        ctx->pc = 0x1691E0u;
        goto label_1691e0;
    }
    ctx->pc = 0x1691D8u;
    SET_GPR_U32(ctx, 31, 0x1691E0u);
    ctx->pc = 0x168E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168E80u, 0x1691D8u, 0x1691E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1691E0u;
label_1691e0:
    // 0x1691e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1691e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1691e4:
    // 0x1691e4: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x1691e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
label_1691e8:
    // 0x1691e8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1691e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1691ec:
    // 0x1691ec: 0xc0559ec  jal         func_1567B0
label_1691f0:
    if (ctx->pc == 0x1691F0u) {
        ctx->pc = 0x1691F4u;
        goto label_1691f4;
    }
    ctx->pc = 0x1691ECu;
    SET_GPR_U32(ctx, 31, 0x1691F4u);
    ctx->pc = 0x1567B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1567B0u, 0x1691ECu, 0x1691F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1691F4u;
label_1691f4:
    // 0x1691f4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1691f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1691f8:
    // 0x1691f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1691f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1691fc:
    // 0x1691fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1691fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_169200:
    // 0x169200: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_169204:
    // 0x169204: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x169204u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_169208:
    // 0x169208: 0x3e00008  jr          $ra
label_16920c:
    if (ctx->pc == 0x16920Cu) {
        ctx->pc = 0x169210u;
        goto label_169210;
    }
    ctx->pc = 0x169208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169210u;
label_169210:
    // 0x169210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_169214:
    // 0x169214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_169218:
    // 0x169218: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x169218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_16921c:
    // 0x16921c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x16921cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_169220:
    // 0x169220: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x169220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_169224:
    // 0x169224: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x169224u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_169228:
    // 0x169228: 0xc055a78  jal         func_1569E0
label_16922c:
    if (ctx->pc == 0x16922Cu) {
        ctx->pc = 0x169230u;
        goto label_169230;
    }
    ctx->pc = 0x169228u;
    SET_GPR_U32(ctx, 31, 0x169230u);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x169228u, 0x169230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169230u;
label_169230:
    // 0x169230: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x169230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_169234:
    // 0x169234: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x169234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169238:
    // 0x169238: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x169238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16923c:
    // 0x16923c: 0x320f809  jalr        $t9
label_169240:
    if (ctx->pc == 0x169240u) {
        ctx->pc = 0x169244u;
        goto label_169244;
    }
    ctx->pc = 0x16923Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169244u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16923Cu, 0x169244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169244u;
label_169244:
    // 0x169244: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x169244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_169248:
    // 0x169248: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x169248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16924c:
    // 0x16924c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x16924cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_169250:
    // 0x169250: 0x320f809  jalr        $t9
label_169254:
    if (ctx->pc == 0x169254u) {
        ctx->pc = 0x169258u;
        goto label_169258;
    }
    ctx->pc = 0x169250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169258u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169250u, 0x169258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169258u;
label_169258:
    // 0x169258: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x169258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_16925c:
    // 0x16925c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x16925cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_169260:
    // 0x169260: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169264:
    // 0x169264: 0x1483005c  bne         $a0, $v1, . + 4 + (0x5C << 2)
label_169268:
    if (ctx->pc == 0x169268u) {
        ctx->pc = 0x16926Cu;
        goto label_16926c;
    }
    ctx->pc = 0x169264u;
    {
        const bool branch_taken_0x169264 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x169264) {
            ctx->pc = 0x1693D8u;
            goto label_1693d8;
        }
    }
    ctx->pc = 0x16926Cu;
label_16926c:
    // 0x16926c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16926cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_169270:
    // 0x169270: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169274:
    // 0x169274: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x169274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_169278:
    // 0x169278: 0x27858ef0  addiu       $a1, $gp, -0x7110
    ctx->pc = 0x169278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938352));
label_16927c:
    // 0x16927c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16927cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169280:
    // 0x169280: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x169280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169284:
    // 0x169284: 0xc08f6a0  jal         func_23DA80
label_169288:
    if (ctx->pc == 0x169288u) {
        ctx->pc = 0x16928Cu;
        goto label_16928c;
    }
    ctx->pc = 0x169284u;
    SET_GPR_U32(ctx, 31, 0x16928Cu);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x169284u, 0x16928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16928Cu;
label_16928c:
    // 0x16928c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_169290:
    // 0x169290: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x169290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_169294:
    // 0x169294: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_169298:
    if (ctx->pc == 0x169298u) {
        ctx->pc = 0x16929Cu;
        goto label_16929c;
    }
    ctx->pc = 0x169294u;
    {
        const bool branch_taken_0x169294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169294) {
            ctx->pc = 0x1692A8u;
            goto label_1692a8;
        }
    }
    ctx->pc = 0x16929Cu;
label_16929c:
    // 0x16929c: 0x8f84bacc  lw          $a0, -0x4534($gp)
    ctx->pc = 0x16929cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949580)));
label_1692a0:
    // 0x1692a0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1692a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1692a4:
    // 0x1692a4: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x1692a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
label_1692a8:
    // 0x1692a8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1692a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1692ac:
    // 0x1692ac: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x1692acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1692b0:
    // 0x1692b0: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x1692b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1692b4:
    // 0x1692b4: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
label_1692b8:
    if (ctx->pc == 0x1692B8u) {
        ctx->pc = 0x1692BCu;
        goto label_1692bc;
    }
    ctx->pc = 0x1692B4u;
    {
        const bool branch_taken_0x1692b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1692b4) {
            ctx->pc = 0x1693E4u;
            goto label_1693e4;
        }
    }
    ctx->pc = 0x1692BCu;
label_1692bc:
    // 0x1692bc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1692bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1692c0:
    // 0x1692c0: 0x248484f0  addiu       $a0, $a0, -0x7B10
    ctx->pc = 0x1692c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935792));
label_1692c4:
    // 0x1692c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1692c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1692c8:
    // 0x1692c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1692c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1692cc:
    // 0x1692cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1692ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1692d0:
    // 0x1692d0: 0x600008  jr          $v1
label_1692d4:
    if (ctx->pc == 0x1692D4u) {
        ctx->pc = 0x1692D8u;
        goto label_1692d8;
    }
    ctx->pc = 0x1692D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1692D8u: goto label_1692d8;
            case 0x1692FCu: goto label_1692fc;
            case 0x16933Cu: goto label_16933c;
            case 0x169380u: goto label_169380;
            case 0x1693B0u: goto label_1693b0;
            case 0x1693C4u: goto label_1693c4;
            case 0x1693E4u: goto label_1693e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1692D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1692D8u;
label_1692d8:
    // 0x1692d8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1692d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1692dc:
    // 0x1692dc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1692dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1692e0:
    // 0x1692e0: 0x24a540e0  addiu       $a1, $a1, 0x40E0
    ctx->pc = 0x1692e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16608));
label_1692e4:
    // 0x1692e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1692e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1692e8:
    // 0x1692e8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1692e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1692ec:
    // 0x1692ec: 0x320f809  jalr        $t9
label_1692f0:
    if (ctx->pc == 0x1692F0u) {
        ctx->pc = 0x1692F4u;
        goto label_1692f4;
    }
    ctx->pc = 0x1692ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1692F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1692ECu, 0x1692F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1692F4u;
label_1692f4:
    // 0x1692f4: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1692f8:
    if (ctx->pc == 0x1692F8u) {
        ctx->pc = 0x1692FCu;
        goto label_1692fc;
    }
    ctx->pc = 0x1692F4u;
    {
        const bool branch_taken_0x1692f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1692f4) {
            ctx->pc = 0x1693E4u;
            goto label_1693e4;
        }
    }
    ctx->pc = 0x1692FCu;
label_1692fc:
    // 0x1692fc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1692fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_169300:
    // 0x169300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_169304:
    // 0x169304: 0x0  nop
    ctx->pc = 0x169304u;
    // NOP
label_169308:
    // 0x169308: 0xe7808ee0  swc1        $f0, -0x7120($gp)
    ctx->pc = 0x169308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938336), bits); }
label_16930c:
    // 0x16930c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16930cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_169310:
    // 0x169310: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x169310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_169314:
    // 0x169314: 0x24a54100  addiu       $a1, $a1, 0x4100
    ctx->pc = 0x169314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16640));
label_169318:
    // 0x169318: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x169318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16931c:
    // 0x16931c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x16931cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_169320:
    // 0x169320: 0x320f809  jalr        $t9
label_169324:
    if (ctx->pc == 0x169324u) {
        ctx->pc = 0x169328u;
        goto label_169328;
    }
    ctx->pc = 0x169320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169328u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169320u, 0x169328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169328u;
label_169328:
    // 0x169328: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x169328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16932c:
    // 0x16932c: 0xc05a72c  jal         func_169CB0
label_169330:
    if (ctx->pc == 0x169330u) {
        ctx->pc = 0x169334u;
        goto label_169334;
    }
    ctx->pc = 0x16932Cu;
    SET_GPR_U32(ctx, 31, 0x169334u);
    ctx->pc = 0x169CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169CB0u, 0x16932Cu, 0x169334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169334u;
label_169334:
    // 0x169334: 0x1000002b  b           . + 4 + (0x2B << 2)
label_169338:
    if (ctx->pc == 0x169338u) {
        ctx->pc = 0x16933Cu;
        goto label_16933c;
    }
    ctx->pc = 0x169334u;
    {
        const bool branch_taken_0x169334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169334) {
            ctx->pc = 0x1693E4u;
            goto label_1693e4;
        }
    }
    ctx->pc = 0x16933Cu;
label_16933c:
    // 0x16933c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16933cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_169340:
    // 0x169340: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x169340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
label_169344:
    // 0x169344: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x169344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_169348:
    // 0x169348: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x169348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16934c:
    // 0x16934c: 0x24a54120  addiu       $a1, $a1, 0x4120
    ctx->pc = 0x16934cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16672));
label_169350:
    // 0x169350: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x169350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169354:
    // 0x169354: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x169354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_169358:
    // 0x169358: 0x320f809  jalr        $t9
label_16935c:
    if (ctx->pc == 0x16935Cu) {
        ctx->pc = 0x169360u;
        goto label_169360;
    }
    ctx->pc = 0x169358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169360u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169358u, 0x169360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169360u;
label_169360:
    // 0x169360: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x169360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_169364:
    // 0x169364: 0xc05a9fc  jal         func_16A7F0
label_169368:
    if (ctx->pc == 0x169368u) {
        ctx->pc = 0x16936Cu;
        goto label_16936c;
    }
    ctx->pc = 0x169364u;
    SET_GPR_U32(ctx, 31, 0x16936Cu);
    ctx->pc = 0x16A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A7F0u, 0x169364u, 0x16936Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16936Cu;
label_16936c:
    // 0x16936c: 0xc117bd0  jal         func_45EF40
label_169370:
    if (ctx->pc == 0x169370u) {
        ctx->pc = 0x169374u;
        goto label_169374;
    }
    ctx->pc = 0x16936Cu;
    SET_GPR_U32(ctx, 31, 0x169374u);
    ctx->pc = 0x45EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45EF40u, 0x16936Cu, 0x169374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169374u;
label_169374:
    // 0x169374: 0xa380bab8  sb          $zero, -0x4548($gp)
    ctx->pc = 0x169374u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949560), (uint8_t)GPR_U32(ctx, 0));
label_169378:
    // 0x169378: 0x1000001a  b           . + 4 + (0x1A << 2)
label_16937c:
    if (ctx->pc == 0x16937Cu) {
        ctx->pc = 0x169380u;
        goto label_169380;
    }
    ctx->pc = 0x169378u;
    {
        const bool branch_taken_0x169378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169378) {
            ctx->pc = 0x1693E4u;
            goto label_1693e4;
        }
    }
    ctx->pc = 0x169380u;
label_169380:
    // 0x169380: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x169380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_169384:
    // 0x169384: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x169384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_169388:
    // 0x169388: 0x24a54140  addiu       $a1, $a1, 0x4140
    ctx->pc = 0x169388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16704));
label_16938c:
    // 0x16938c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16938cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169390:
    // 0x169390: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x169390u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_169394:
    // 0x169394: 0x320f809  jalr        $t9
label_169398:
    if (ctx->pc == 0x169398u) {
        ctx->pc = 0x16939Cu;
        goto label_16939c;
    }
    ctx->pc = 0x169394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16939Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169394u, 0x16939Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16939Cu;
label_16939c:
    // 0x16939c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16939cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1693a0:
    // 0x1693a0: 0xc05af6c  jal         func_16BDB0
label_1693a4:
    if (ctx->pc == 0x1693A4u) {
        ctx->pc = 0x1693A8u;
        goto label_1693a8;
    }
    ctx->pc = 0x1693A0u;
    SET_GPR_U32(ctx, 31, 0x1693A8u);
    ctx->pc = 0x16BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BDB0u, 0x1693A0u, 0x1693A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1693A8u;
label_1693a8:
    // 0x1693a8: 0x1000000e  b           . + 4 + (0xE << 2)
label_1693ac:
    if (ctx->pc == 0x1693ACu) {
        ctx->pc = 0x1693B0u;
        goto label_1693b0;
    }
    ctx->pc = 0x1693A8u;
    {
        const bool branch_taken_0x1693a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1693a8) {
            ctx->pc = 0x1693E4u;
            goto label_1693e4;
        }
    }
    ctx->pc = 0x1693B0u;
label_1693b0:
    // 0x1693b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1693b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1693b4:
    // 0x1693b4: 0xc05af84  jal         func_16BE10
label_1693b8:
    if (ctx->pc == 0x1693B8u) {
        ctx->pc = 0x1693BCu;
        goto label_1693bc;
    }
    ctx->pc = 0x1693B4u;
    SET_GPR_U32(ctx, 31, 0x1693BCu);
    ctx->pc = 0x16BE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BE10u, 0x1693B4u, 0x1693BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1693BCu;
label_1693bc:
    // 0x1693bc: 0x10000009  b           . + 4 + (0x9 << 2)
label_1693c0:
    if (ctx->pc == 0x1693C0u) {
        ctx->pc = 0x1693C4u;
        goto label_1693c4;
    }
    ctx->pc = 0x1693BCu;
    {
        const bool branch_taken_0x1693bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1693bc) {
            ctx->pc = 0x1693E4u;
            goto label_1693e4;
        }
    }
    ctx->pc = 0x1693C4u;
label_1693c4:
    // 0x1693c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1693c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1693c8:
    // 0x1693c8: 0xc05af9c  jal         func_16BE70
label_1693cc:
    if (ctx->pc == 0x1693CCu) {
        ctx->pc = 0x1693D0u;
        goto label_1693d0;
    }
    ctx->pc = 0x1693C8u;
    SET_GPR_U32(ctx, 31, 0x1693D0u);
    ctx->pc = 0x16BE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BE70u, 0x1693C8u, 0x1693D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1693D0u;
label_1693d0:
    // 0x1693d0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1693d4:
    if (ctx->pc == 0x1693D4u) {
        ctx->pc = 0x1693D8u;
        goto label_1693d8;
    }
    ctx->pc = 0x1693D0u;
    {
        const bool branch_taken_0x1693d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1693d0) {
            ctx->pc = 0x1693E4u;
            goto label_1693e4;
        }
    }
    ctx->pc = 0x1693D8u;
label_1693d8:
    // 0x1693d8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1693d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1693dc:
    // 0x1693dc: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x1693dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1693e0:
    // 0x1693e0: 0xaf83bacc  sw          $v1, -0x4534($gp)
    ctx->pc = 0x1693e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949580), GPR_U32(ctx, 3));
label_1693e4:
    // 0x1693e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1693e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1693e8:
    // 0x1693e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1693e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1693ec:
    // 0x1693ec: 0x3e00008  jr          $ra
label_1693f0:
    if (ctx->pc == 0x1693F0u) {
        ctx->pc = 0x1693F4u;
        goto label_1693f4;
    }
    ctx->pc = 0x1693ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1693ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1693F4u;
label_1693f4:
    // 0x1693f4: 0x0  nop
    ctx->pc = 0x1693f4u;
    // NOP
label_1693f8:
    // 0x1693f8: 0x0  nop
    ctx->pc = 0x1693f8u;
    // NOP
label_1693fc:
    // 0x1693fc: 0x0  nop
    ctx->pc = 0x1693fcu;
    // NOP
label_169400:
    // 0x169400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_169404:
    // 0x169404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_169408:
    // 0x169408: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x169408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_16940c:
    // 0x16940c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16940cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_169410:
    // 0x169410: 0xc055a84  jal         func_156A10
label_169414:
    if (ctx->pc == 0x169414u) {
        ctx->pc = 0x169418u;
        goto label_169418;
    }
    ctx->pc = 0x169410u;
    SET_GPR_U32(ctx, 31, 0x169418u);
    ctx->pc = 0x156A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A10u, 0x169410u, 0x169418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169418u;
label_169418:
    // 0x169418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16941c:
    // 0x16941c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x16941cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_169420:
    // 0x169420: 0x3e00008  jr          $ra
label_169424:
    if (ctx->pc == 0x169424u) {
        ctx->pc = 0x169428u;
        goto label_169428;
    }
    ctx->pc = 0x169420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169428u;
label_169428:
    // 0x169428: 0x0  nop
    ctx->pc = 0x169428u;
    // NOP
label_16942c:
    // 0x16942c: 0x0  nop
    ctx->pc = 0x16942cu;
    // NOP
label_169430:
    // 0x169430: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x169430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_169434:
    // 0x169434: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x169434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_169438:
    // 0x169438: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x169438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_16943c:
    // 0x16943c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16943cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_169440:
    // 0x169440: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x169440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_169444:
    // 0x169444: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x169444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_169448:
    // 0x169448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x169448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16944c:
    // 0x16944c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16944cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_169450:
    // 0x169450: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x169450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
label_169454:
    // 0x169454: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x169454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_169458:
    // 0x169458: 0xc055b3c  jal         func_156CF0
label_16945c:
    if (ctx->pc == 0x16945Cu) {
        ctx->pc = 0x169460u;
        goto label_169460;
    }
    ctx->pc = 0x169458u;
    SET_GPR_U32(ctx, 31, 0x169460u);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x169458u, 0x169460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169460u;
label_169460:
    // 0x169460: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x169460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_169464:
    // 0x169464: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x169464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_169468:
    // 0x169468: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x169468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16946c:
    // 0x16946c: 0x108300fa  beq         $a0, $v1, . + 4 + (0xFA << 2)
label_169470:
    if (ctx->pc == 0x169470u) {
        ctx->pc = 0x169474u;
        goto label_169474;
    }
    ctx->pc = 0x16946Cu;
    {
        const bool branch_taken_0x16946c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16946c) {
            ctx->pc = 0x169858u;
            goto label_169858;
        }
    }
    ctx->pc = 0x169474u;
label_169474:
    // 0x169474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169478:
    // 0x169478: 0x10830092  beq         $a0, $v1, . + 4 + (0x92 << 2)
label_16947c:
    if (ctx->pc == 0x16947Cu) {
        ctx->pc = 0x169480u;
        goto label_169480;
    }
    ctx->pc = 0x169478u;
    {
        const bool branch_taken_0x169478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x169478) {
            ctx->pc = 0x1696C4u;
            goto label_1696c4;
        }
    }
    ctx->pc = 0x169480u;
label_169480:
    // 0x169480: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x169480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_169484:
    // 0x169484: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
label_169488:
    if (ctx->pc == 0x169488u) {
        ctx->pc = 0x16948Cu;
        goto label_16948c;
    }
    ctx->pc = 0x169484u;
    {
        const bool branch_taken_0x169484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x169484) {
            ctx->pc = 0x16954Cu;
            goto label_16954c;
        }
    }
    ctx->pc = 0x16948Cu;
label_16948c:
    // 0x16948c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16948cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_169490:
    // 0x169490: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_169494:
    if (ctx->pc == 0x169494u) {
        ctx->pc = 0x169498u;
        goto label_169498;
    }
    ctx->pc = 0x169490u;
    {
        const bool branch_taken_0x169490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x169490) {
            ctx->pc = 0x1694A0u;
            goto label_1694a0;
        }
    }
    ctx->pc = 0x169498u;
label_169498:
    // 0x169498: 0x100000ef  b           . + 4 + (0xEF << 2)
label_16949c:
    if (ctx->pc == 0x16949Cu) {
        ctx->pc = 0x1694A0u;
        goto label_1694a0;
    }
    ctx->pc = 0x169498u;
    {
        const bool branch_taken_0x169498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169498) {
            ctx->pc = 0x169858u;
            goto label_169858;
        }
    }
    ctx->pc = 0x1694A0u;
label_1694a0:
    // 0x1694a0: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1694a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1694a4:
    // 0x1694a4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1694a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1694a8:
    // 0x1694a8: 0x24a54160  addiu       $a1, $a1, 0x4160
    ctx->pc = 0x1694a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16736));
label_1694ac:
    // 0x1694ac: 0xc05621c  jal         func_158870
label_1694b0:
    if (ctx->pc == 0x1694B0u) {
        ctx->pc = 0x1694B4u;
        goto label_1694b4;
    }
    ctx->pc = 0x1694ACu;
    SET_GPR_U32(ctx, 31, 0x1694B4u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x1694ACu, 0x1694B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1694B4u;
label_1694b4:
    // 0x1694b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1694b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1694b8:
    // 0x1694b8: 0x122000e7  beqz        $s1, . + 4 + (0xE7 << 2)
label_1694bc:
    if (ctx->pc == 0x1694BCu) {
        ctx->pc = 0x1694C0u;
        goto label_1694c0;
    }
    ctx->pc = 0x1694B8u;
    {
        const bool branch_taken_0x1694b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1694b8) {
            ctx->pc = 0x169858u;
            goto label_169858;
        }
    }
    ctx->pc = 0x1694C0u;
label_1694c0:
    // 0x1694c0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1694c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1694c4:
    // 0x1694c4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1694c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1694c8:
    // 0x1694c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1694c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1694cc:
    // 0x1694cc: 0xc08c9a8  jal         func_2326A0
label_1694d0:
    if (ctx->pc == 0x1694D0u) {
        ctx->pc = 0x1694D4u;
        goto label_1694d4;
    }
    ctx->pc = 0x1694CCu;
    SET_GPR_U32(ctx, 31, 0x1694D4u);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x1694CCu, 0x1694D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1694D4u;
label_1694d4:
    // 0x1694d4: 0x144000e0  bnez        $v0, . + 4 + (0xE0 << 2)
label_1694d8:
    if (ctx->pc == 0x1694D8u) {
        ctx->pc = 0x1694DCu;
        goto label_1694dc;
    }
    ctx->pc = 0x1694D4u;
    {
        const bool branch_taken_0x1694d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1694d4) {
            ctx->pc = 0x169858u;
            goto label_169858;
        }
    }
    ctx->pc = 0x1694DCu;
label_1694dc:
    // 0x1694dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1694dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1694e0:
    // 0x1694e0: 0xa3a200bf  sb          $v0, 0xBF($sp)
    ctx->pc = 0x1694e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 191), (uint8_t)GPR_U32(ctx, 2));
label_1694e4:
    // 0x1694e4: 0xa3a000be  sb          $zero, 0xBE($sp)
    ctx->pc = 0x1694e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 190), (uint8_t)GPR_U32(ctx, 0));
label_1694e8:
    // 0x1694e8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1694e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1694ec:
    // 0x1694ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1694ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1694f0:
    // 0x1694f0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1694f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1694f4:
    // 0x1694f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1694f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1694f8:
    // 0x1694f8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1694f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1694fc:
    // 0x1694fc: 0x27a700bf  addiu       $a3, $sp, 0xBF
    ctx->pc = 0x1694fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 191));
label_169500:
    // 0x169500: 0xc78d81b0  lwc1        $f13, -0x7E50($gp)
    ctx->pc = 0x169500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_169504:
    // 0x169504: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x169504u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169508:
    // 0x169508: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x169508u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16950c:
    // 0x16950c: 0xc08b9fc  jal         func_22E7F0
label_169510:
    if (ctx->pc == 0x169510u) {
        ctx->pc = 0x169514u;
        goto label_169514;
    }
    ctx->pc = 0x16950Cu;
    SET_GPR_U32(ctx, 31, 0x169514u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16950Cu, 0x169514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169514u;
label_169514:
    // 0x169514: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x169514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_169518:
    // 0x169518: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x169518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16951c:
    // 0x16951c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16951cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169520:
    // 0x169520: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x169520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_169524:
    // 0x169524: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x169524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_169528:
    // 0x169528: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x169528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16952c:
    // 0x16952c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x16952cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_169530:
    // 0x169530: 0x27a700be  addiu       $a3, $sp, 0xBE
    ctx->pc = 0x169530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 190));
label_169534:
    // 0x169534: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x169534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169538:
    // 0x169538: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x169538u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16953c:
    // 0x16953c: 0xc08b9fc  jal         func_22E7F0
label_169540:
    if (ctx->pc == 0x169540u) {
        ctx->pc = 0x169544u;
        goto label_169544;
    }
    ctx->pc = 0x16953Cu;
    SET_GPR_U32(ctx, 31, 0x169544u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16953Cu, 0x169544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169544u;
label_169544:
    // 0x169544: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_169548:
    if (ctx->pc == 0x169548u) {
        ctx->pc = 0x16954Cu;
        goto label_16954c;
    }
    ctx->pc = 0x169544u;
    {
        const bool branch_taken_0x169544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169544) {
            ctx->pc = 0x169858u;
            goto label_169858;
        }
    }
    ctx->pc = 0x16954Cu;
label_16954c:
    // 0x16954c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x16954cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_169550:
    // 0x169550: 0xc042330  jal         func_108CC0
label_169554:
    if (ctx->pc == 0x169554u) {
        ctx->pc = 0x169558u;
        goto label_169558;
    }
    ctx->pc = 0x169550u;
    SET_GPR_U32(ctx, 31, 0x169558u);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x169550u, 0x169558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169558u;
label_169558:
    // 0x169558: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x169558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16955c:
    // 0x16955c: 0xc048f38  jal         func_123CE0
label_169560:
    if (ctx->pc == 0x169560u) {
        ctx->pc = 0x169564u;
        goto label_169564;
    }
    ctx->pc = 0x16955Cu;
    SET_GPR_U32(ctx, 31, 0x169564u);
    ctx->pc = 0x123CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123CE0u, 0x16955Cu, 0x169564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169564u;
label_169564:
    // 0x169564: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x169564u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_169568:
    // 0x169568: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16956c:
    // 0x16956c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16956cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_169570:
    // 0x169570: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x169570u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_169574:
    // 0x169574: 0x24c6be30  addiu       $a2, $a2, -0x41D0
    ctx->pc = 0x169574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950448));
label_169578:
    // 0x169578: 0xc117f34  jal         func_45FCD0
label_16957c:
    if (ctx->pc == 0x16957Cu) {
        ctx->pc = 0x169580u;
        goto label_169580;
    }
    ctx->pc = 0x169578u;
    SET_GPR_U32(ctx, 31, 0x169580u);
    ctx->pc = 0x45FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45FCD0u, 0x169578u, 0x169580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169580u;
label_169580:
    // 0x169580: 0x9383bab8  lbu         $v1, -0x4548($gp)
    ctx->pc = 0x169580u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949560)));
label_169584:
    // 0x169584: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x169584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_169588:
    // 0x169588: 0x146000b3  bnez        $v1, . + 4 + (0xB3 << 2)
label_16958c:
    if (ctx->pc == 0x16958Cu) {
        ctx->pc = 0x169590u;
        goto label_169590;
    }
    ctx->pc = 0x169588u;
    {
        const bool branch_taken_0x169588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169588) {
            ctx->pc = 0x169858u;
            goto label_169858;
        }
    }
    ctx->pc = 0x169590u;
label_169590:
    // 0x169590: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x169590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_169594:
    // 0x169594: 0x8c64be30  lw          $a0, -0x41D0($v1)
    ctx->pc = 0x169594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950448)));
label_169598:
    // 0x169598: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x169598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16959c:
    // 0x16959c: 0x108300ae  beq         $a0, $v1, . + 4 + (0xAE << 2)
label_1695a0:
    if (ctx->pc == 0x1695A0u) {
        ctx->pc = 0x1695A4u;
        goto label_1695a4;
    }
    ctx->pc = 0x16959Cu;
    {
        const bool branch_taken_0x16959c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16959c) {
            ctx->pc = 0x169858u;
            goto label_169858;
        }
    }
    ctx->pc = 0x1695A4u;
label_1695a4:
    // 0x1695a4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1695a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1695a8:
    // 0x1695a8: 0x8c43be30  lw          $v1, -0x41D0($v0)
    ctx->pc = 0x1695a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950448)));
label_1695ac:
    // 0x1695ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1695acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1695b0:
    // 0x1695b0: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
label_1695b4:
    if (ctx->pc == 0x1695B4u) {
        ctx->pc = 0x1695B8u;
        goto label_1695b8;
    }
    ctx->pc = 0x1695B0u;
    {
        const bool branch_taken_0x1695b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1695b0) {
            ctx->pc = 0x1696B4u;
            goto label_1696b4;
        }
    }
    ctx->pc = 0x1695B8u;
label_1695b8:
    // 0x1695b8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1695b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1695bc:
    // 0x1695bc: 0x8c43be38  lw          $v1, -0x41C8($v0)
    ctx->pc = 0x1695bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950456)));
label_1695c0:
    // 0x1695c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1695c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1695c4:
    // 0x1695c4: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
label_1695c8:
    if (ctx->pc == 0x1695C8u) {
        ctx->pc = 0x1695CCu;
        goto label_1695cc;
    }
    ctx->pc = 0x1695C4u;
    {
        const bool branch_taken_0x1695c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1695c4) {
            ctx->pc = 0x1696B4u;
            goto label_1696b4;
        }
    }
    ctx->pc = 0x1695CCu;
label_1695cc:
    // 0x1695cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1695ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1695d0:
    // 0x1695d0: 0xa382bab8  sb          $v0, -0x4548($gp)
    ctx->pc = 0x1695d0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949560), (uint8_t)GPR_U32(ctx, 2));
label_1695d4:
    // 0x1695d4: 0xc05548c  jal         func_155230
label_1695d8:
    if (ctx->pc == 0x1695D8u) {
        ctx->pc = 0x1695DCu;
        goto label_1695dc;
    }
    ctx->pc = 0x1695D4u;
    SET_GPR_U32(ctx, 31, 0x1695DCu);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x1695D4u, 0x1695DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695DCu;
label_1695dc:
    // 0x1695dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1695dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1695e0:
    // 0x1695e0: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1695e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_1695e4:
    // 0x1695e4: 0xc0553d4  jal         func_154F50
label_1695e8:
    if (ctx->pc == 0x1695E8u) {
        ctx->pc = 0x1695ECu;
        goto label_1695ec;
    }
    ctx->pc = 0x1695E4u;
    SET_GPR_U32(ctx, 31, 0x1695ECu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x1695E4u, 0x1695ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695ECu;
label_1695ec:
    // 0x1695ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1695ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1695f0:
    // 0x1695f0: 0x12400099  beqz        $s2, . + 4 + (0x99 << 2)
label_1695f4:
    if (ctx->pc == 0x1695F4u) {
        ctx->pc = 0x1695F8u;
        goto label_1695f8;
    }
    ctx->pc = 0x1695F0u;
    {
        const bool branch_taken_0x1695f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1695f0) {
            ctx->pc = 0x169858u;
            goto label_169858;
        }
    }
    ctx->pc = 0x1695F8u;
label_1695f8:
    // 0x1695f8: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1695f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1695fc:
    // 0x1695fc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1695fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_169600:
    // 0x169600: 0x24a54170  addiu       $a1, $a1, 0x4170
    ctx->pc = 0x169600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16752));
label_169604:
    // 0x169604: 0xc08e57c  jal         func_2395F0
label_169608:
    if (ctx->pc == 0x169608u) {
        ctx->pc = 0x16960Cu;
        goto label_16960c;
    }
    ctx->pc = 0x169604u;
    SET_GPR_U32(ctx, 31, 0x16960Cu);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x169604u, 0x16960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16960Cu;
label_16960c:
    // 0x16960c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16960cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_169610:
    // 0x169610: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x169610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_169614:
    // 0x169614: 0xc0406d0  jal         func_101B40
label_169618:
    if (ctx->pc == 0x169618u) {
        ctx->pc = 0x16961Cu;
        goto label_16961c;
    }
    ctx->pc = 0x169614u;
    SET_GPR_U32(ctx, 31, 0x16961Cu);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x169614u, 0x16961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16961Cu;
label_16961c:
    // 0x16961c: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x16961cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_169620:
    // 0x169620: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x169620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_169624:
    // 0x169624: 0x24a54180  addiu       $a1, $a1, 0x4180
    ctx->pc = 0x169624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16768));
label_169628:
    // 0x169628: 0xc08e57c  jal         func_2395F0
label_16962c:
    if (ctx->pc == 0x16962Cu) {
        ctx->pc = 0x169630u;
        goto label_169630;
    }
    ctx->pc = 0x169628u;
    SET_GPR_U32(ctx, 31, 0x169630u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x169628u, 0x169630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169630u;
label_169630:
    // 0x169630: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x169630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_169634:
    // 0x169634: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x169634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_169638:
    // 0x169638: 0xc0406d0  jal         func_101B40
label_16963c:
    if (ctx->pc == 0x16963Cu) {
        ctx->pc = 0x169640u;
        goto label_169640;
    }
    ctx->pc = 0x169638u;
    SET_GPR_U32(ctx, 31, 0x169640u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x169638u, 0x169640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169640u;
label_169640:
    // 0x169640: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x169640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_169644:
    // 0x169644: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x169644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_169648:
    // 0x169648: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x169648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16964c:
    // 0x16964c: 0x24a541a0  addiu       $a1, $a1, 0x41A0
    ctx->pc = 0x16964cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16800));
label_169650:
    // 0x169650: 0xc119600  jal         func_465800
label_169654:
    if (ctx->pc == 0x169654u) {
        ctx->pc = 0x169658u;
        goto label_169658;
    }
    ctx->pc = 0x169650u;
    SET_GPR_U32(ctx, 31, 0x169658u);
    ctx->pc = 0x465800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465800u, 0x169650u, 0x169658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169658u;
label_169658:
    // 0x169658: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x169658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_16965c:
    // 0x16965c: 0x34550101  ori         $s5, $v0, 0x101
    ctx->pc = 0x16965cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
label_169660:
    // 0x169660: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x169660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_169664:
    // 0x169664: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x169664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_169668:
    // 0x169668: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x169668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_16966c:
    // 0x16966c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x16966cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_169670:
    // 0x169670: 0x3c080017  lui         $t0, 0x17
    ctx->pc = 0x169670u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)23 << 16));
label_169674:
    // 0x169674: 0x2508bbb0  addiu       $t0, $t0, -0x4450
    ctx->pc = 0x169674u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949808));
label_169678:
    // 0x169678: 0x8fa900c0  lw          $t1, 0xC0($sp)
    ctx->pc = 0x169678u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_16967c:
    // 0x16967c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16967cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169680:
    // 0x169680: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x169680u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_169684:
    // 0x169684: 0x320f809  jalr        $t9
label_169688:
    if (ctx->pc == 0x169688u) {
        ctx->pc = 0x16968Cu;
        goto label_16968c;
    }
    ctx->pc = 0x169684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16968Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169684u, 0x16968Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16968Cu;
label_16968c:
    // 0x16968c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16968cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_169690:
    // 0x169690: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x169690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_169694:
    // 0x169694: 0xc0406a0  jal         func_101A80
label_169698:
    if (ctx->pc == 0x169698u) {
        ctx->pc = 0x16969Cu;
        goto label_16969c;
    }
    ctx->pc = 0x169694u;
    SET_GPR_U32(ctx, 31, 0x16969Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x169694u, 0x16969Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16969Cu;
label_16969c:
    // 0x16969c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16969cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1696a0:
    // 0x1696a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1696a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1696a4:
    // 0x1696a4: 0xc0406a0  jal         func_101A80
label_1696a8:
    if (ctx->pc == 0x1696A8u) {
        ctx->pc = 0x1696ACu;
        goto label_1696ac;
    }
    ctx->pc = 0x1696A4u;
    SET_GPR_U32(ctx, 31, 0x1696ACu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1696A4u, 0x1696ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1696ACu;
label_1696ac:
    // 0x1696ac: 0x1000006a  b           . + 4 + (0x6A << 2)
label_1696b0:
    if (ctx->pc == 0x1696B0u) {
        ctx->pc = 0x1696B4u;
        goto label_1696b4;
    }
    ctx->pc = 0x1696ACu;
    {
        const bool branch_taken_0x1696ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1696ac) {
            ctx->pc = 0x169858u;
            goto label_169858;
        }
    }
    ctx->pc = 0x1696B4u;
label_1696b4:
    // 0x1696b4: 0xc117bd0  jal         func_45EF40
label_1696b8:
    if (ctx->pc == 0x1696B8u) {
        ctx->pc = 0x1696BCu;
        goto label_1696bc;
    }
    ctx->pc = 0x1696B4u;
    SET_GPR_U32(ctx, 31, 0x1696BCu);
    ctx->pc = 0x45EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45EF40u, 0x1696B4u, 0x1696BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1696BCu;
label_1696bc:
    // 0x1696bc: 0x10000066  b           . + 4 + (0x66 << 2)
label_1696c0:
    if (ctx->pc == 0x1696C0u) {
        ctx->pc = 0x1696C4u;
        goto label_1696c4;
    }
    ctx->pc = 0x1696BCu;
    {
        const bool branch_taken_0x1696bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1696bc) {
            ctx->pc = 0x169858u;
            goto label_169858;
        }
    }
    ctx->pc = 0x1696C4u;
label_1696c4:
    // 0x1696c4: 0xc05548c  jal         func_155230
label_1696c8:
    if (ctx->pc == 0x1696C8u) {
        ctx->pc = 0x1696CCu;
        goto label_1696cc;
    }
    ctx->pc = 0x1696C4u;
    SET_GPR_U32(ctx, 31, 0x1696CCu);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x1696C4u, 0x1696CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1696CCu;
label_1696cc:
    // 0x1696cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1696ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1696d0:
    // 0x1696d0: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1696d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_1696d4:
    // 0x1696d4: 0xc0553d4  jal         func_154F50
label_1696d8:
    if (ctx->pc == 0x1696D8u) {
        ctx->pc = 0x1696DCu;
        goto label_1696dc;
    }
    ctx->pc = 0x1696D4u;
    SET_GPR_U32(ctx, 31, 0x1696DCu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x1696D4u, 0x1696DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1696DCu;
label_1696dc:
    // 0x1696dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1696dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1696e0:
    // 0x1696e0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1696e4:
    if (ctx->pc == 0x1696E4u) {
        ctx->pc = 0x1696E8u;
        goto label_1696e8;
    }
    ctx->pc = 0x1696E0u;
    {
        const bool branch_taken_0x1696e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1696e0) {
            ctx->pc = 0x169704u;
            goto label_169704;
        }
    }
    ctx->pc = 0x1696E8u;
label_1696e8:
    // 0x1696e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1696e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1696ec:
    // 0x1696ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1696ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1696f0:
    // 0x1696f0: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1696f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1696f4:
    // 0x1696f4: 0x320f809  jalr        $t9
label_1696f8:
    if (ctx->pc == 0x1696F8u) {
        ctx->pc = 0x1696FCu;
        goto label_1696fc;
    }
    ctx->pc = 0x1696F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1696FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1696F4u, 0x1696FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1696FCu;
label_1696fc:
    // 0x1696fc: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_169700:
    if (ctx->pc == 0x169700u) {
        ctx->pc = 0x169704u;
        goto label_169704;
    }
    ctx->pc = 0x1696FCu;
    {
        const bool branch_taken_0x1696fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1696fc) {
            ctx->pc = 0x169784u;
            goto label_169784;
        }
    }
    ctx->pc = 0x169704u;
label_169704:
    // 0x169704: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x169704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_169708:
    // 0x169708: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x169708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16970c:
    // 0x16970c: 0xc7808ee0  lwc1        $f0, -0x7120($gp)
    ctx->pc = 0x16970cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_169710:
    // 0x169710: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x169710u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_169714:
    // 0x169714: 0xe7808ee0  swc1        $f0, -0x7120($gp)
    ctx->pc = 0x169714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938336), bits); }
label_169718:
    // 0x169718: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x169718u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16971c:
    // 0x16971c: 0xc7808ee0  lwc1        $f0, -0x7120($gp)
    ctx->pc = 0x16971cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_169720:
    // 0x169720: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x169720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_169724:
    // 0x169724: 0x45010017  bc1t        . + 4 + (0x17 << 2)
label_169728:
    if (ctx->pc == 0x169728u) {
        ctx->pc = 0x16972Cu;
        goto label_16972c;
    }
    ctx->pc = 0x169724u;
    {
        const bool branch_taken_0x169724 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x169724) {
            ctx->pc = 0x169784u;
            goto label_169784;
        }
    }
    ctx->pc = 0x16972Cu;
label_16972c:
    // 0x16972c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x16972cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_169730:
    // 0x169730: 0xc088560  jal         func_221580
label_169734:
    if (ctx->pc == 0x169734u) {
        ctx->pc = 0x169738u;
        goto label_169738;
    }
    ctx->pc = 0x169730u;
    SET_GPR_U32(ctx, 31, 0x169738u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x169730u, 0x169738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169738u;
label_169738:
    // 0x169738: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x169738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_16973c:
    // 0x16973c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16973cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_169740:
    // 0x169740: 0x24a541b0  addiu       $a1, $a1, 0x41B0
    ctx->pc = 0x169740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16816));
label_169744:
    // 0x169744: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x169744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_169748:
    // 0x169748: 0xc041b24  jal         func_106C90
label_16974c:
    if (ctx->pc == 0x16974Cu) {
        ctx->pc = 0x169750u;
        goto label_169750;
    }
    ctx->pc = 0x169748u;
    SET_GPR_U32(ctx, 31, 0x169750u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x169748u, 0x169750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169750u;
label_169750:
    // 0x169750: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x169750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_169754:
    // 0x169754: 0x27858ef8  addiu       $a1, $gp, -0x7108
    ctx->pc = 0x169754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938360));
label_169758:
    // 0x169758: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x169758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16975c:
    // 0x16975c: 0xc047314  jal         func_11CC50
label_169760:
    if (ctx->pc == 0x169760u) {
        ctx->pc = 0x169764u;
        goto label_169764;
    }
    ctx->pc = 0x16975Cu;
    SET_GPR_U32(ctx, 31, 0x169764u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x16975Cu, 0x169764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169764u;
label_169764:
    // 0x169764: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x169764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_169768:
    // 0x169768: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x169768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_16976c:
    // 0x16976c: 0xc08ef28  jal         func_23BCA0
label_169770:
    if (ctx->pc == 0x169770u) {
        ctx->pc = 0x169774u;
        goto label_169774;
    }
    ctx->pc = 0x16976Cu;
    SET_GPR_U32(ctx, 31, 0x169774u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x16976Cu, 0x169774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169774u;
label_169774:
    // 0x169774: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x169774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_169778:
    // 0x169778: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x169778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16977c:
    // 0x16977c: 0xc0887b4  jal         func_221ED0
label_169780:
    if (ctx->pc == 0x169780u) {
        ctx->pc = 0x169784u;
        goto label_169784;
    }
    ctx->pc = 0x16977Cu;
    SET_GPR_U32(ctx, 31, 0x169784u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x16977Cu, 0x169784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169784u;
label_169784:
    // 0x169784: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x169784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_169788:
    // 0x169788: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x169788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_16978c:
    // 0x16978c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x16978cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_169790:
    // 0x169790: 0x14830031  bne         $a0, $v1, . + 4 + (0x31 << 2)
label_169794:
    if (ctx->pc == 0x169794u) {
        ctx->pc = 0x169798u;
        goto label_169798;
    }
    ctx->pc = 0x169790u;
    {
        const bool branch_taken_0x169790 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x169790) {
            ctx->pc = 0x169858u;
            goto label_169858;
        }
    }
    ctx->pc = 0x169798u;
label_169798:
    // 0x169798: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
label_16979c:
    if (ctx->pc == 0x16979Cu) {
        ctx->pc = 0x1697A0u;
        goto label_1697a0;
    }
    ctx->pc = 0x169798u;
    {
        const bool branch_taken_0x169798 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x169798) {
            ctx->pc = 0x169858u;
            goto label_169858;
        }
    }
    ctx->pc = 0x1697A0u;
label_1697a0:
    // 0x1697a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1697a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1697a4:
    // 0x1697a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1697a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1697a8:
    // 0x1697a8: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1697a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1697ac:
    // 0x1697ac: 0x320f809  jalr        $t9
label_1697b0:
    if (ctx->pc == 0x1697B0u) {
        ctx->pc = 0x1697B4u;
        goto label_1697b4;
    }
    ctx->pc = 0x1697ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1697B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1697ACu, 0x1697B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1697B4u;
label_1697b4:
    // 0x1697b4: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_1697b8:
    if (ctx->pc == 0x1697B8u) {
        ctx->pc = 0x1697BCu;
        goto label_1697bc;
    }
    ctx->pc = 0x1697B4u;
    {
        const bool branch_taken_0x1697b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1697b4) {
            ctx->pc = 0x169858u;
            goto label_169858;
        }
    }
    ctx->pc = 0x1697BCu;
label_1697bc:
    // 0x1697bc: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1697bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1697c0:
    // 0x1697c0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1697c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1697c4:
    // 0x1697c4: 0x24a541c0  addiu       $a1, $a1, 0x41C0
    ctx->pc = 0x1697c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16832));
label_1697c8:
    // 0x1697c8: 0xc08e57c  jal         func_2395F0
label_1697cc:
    if (ctx->pc == 0x1697CCu) {
        ctx->pc = 0x1697D0u;
        goto label_1697d0;
    }
    ctx->pc = 0x1697C8u;
    SET_GPR_U32(ctx, 31, 0x1697D0u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1697C8u, 0x1697D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1697D0u;
label_1697d0:
    // 0x1697d0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1697d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1697d4:
    // 0x1697d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1697d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1697d8:
    // 0x1697d8: 0xc0406d0  jal         func_101B40
label_1697dc:
    if (ctx->pc == 0x1697DCu) {
        ctx->pc = 0x1697E0u;
        goto label_1697e0;
    }
    ctx->pc = 0x1697D8u;
    SET_GPR_U32(ctx, 31, 0x1697E0u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x1697D8u, 0x1697E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1697E0u;
label_1697e0:
    // 0x1697e0: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1697e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1697e4:
    // 0x1697e4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1697e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1697e8:
    // 0x1697e8: 0x24a541d0  addiu       $a1, $a1, 0x41D0
    ctx->pc = 0x1697e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16848));
label_1697ec:
    // 0x1697ec: 0xc08e57c  jal         func_2395F0
label_1697f0:
    if (ctx->pc == 0x1697F0u) {
        ctx->pc = 0x1697F4u;
        goto label_1697f4;
    }
    ctx->pc = 0x1697ECu;
    SET_GPR_U32(ctx, 31, 0x1697F4u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1697ECu, 0x1697F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1697F4u;
label_1697f4:
    // 0x1697f4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1697f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1697f8:
    // 0x1697f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1697f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1697fc:
    // 0x1697fc: 0xc0406d0  jal         func_101B40
label_169800:
    if (ctx->pc == 0x169800u) {
        ctx->pc = 0x169804u;
        goto label_169804;
    }
    ctx->pc = 0x1697FCu;
    SET_GPR_U32(ctx, 31, 0x169804u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x1697FCu, 0x169804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169804u;
label_169804:
    // 0x169804: 0x3c028001  lui         $v0, 0x8001
    ctx->pc = 0x169804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32769 << 16));
label_169808:
    // 0x169808: 0x34540303  ori         $s4, $v0, 0x303
    ctx->pc = 0x169808u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)771);
label_16980c:
    // 0x16980c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16980cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169810:
    // 0x169810: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x169810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_169814:
    // 0x169814: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x169814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_169818:
    // 0x169818: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x169818u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16981c:
    // 0x16981c: 0x3c080017  lui         $t0, 0x17
    ctx->pc = 0x16981cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)23 << 16));
label_169820:
    // 0x169820: 0x2508bbb0  addiu       $t0, $t0, -0x4450
    ctx->pc = 0x169820u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949808));
label_169824:
    // 0x169824: 0x8fa900c0  lw          $t1, 0xC0($sp)
    ctx->pc = 0x169824u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_169828:
    // 0x169828: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x169828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16982c:
    // 0x16982c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x16982cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_169830:
    // 0x169830: 0x320f809  jalr        $t9
label_169834:
    if (ctx->pc == 0x169834u) {
        ctx->pc = 0x169838u;
        goto label_169838;
    }
    ctx->pc = 0x169830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169838u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169830u, 0x169838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169838u;
label_169838:
    // 0x169838: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x169838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_16983c:
    // 0x16983c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16983cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_169840:
    // 0x169840: 0xc0406a0  jal         func_101A80
label_169844:
    if (ctx->pc == 0x169844u) {
        ctx->pc = 0x169848u;
        goto label_169848;
    }
    ctx->pc = 0x169840u;
    SET_GPR_U32(ctx, 31, 0x169848u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x169840u, 0x169848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169848u;
label_169848:
    // 0x169848: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x169848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_16984c:
    // 0x16984c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16984cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_169850:
    // 0x169850: 0xc0406a0  jal         func_101A80
label_169854:
    if (ctx->pc == 0x169854u) {
        ctx->pc = 0x169858u;
        goto label_169858;
    }
    ctx->pc = 0x169850u;
    SET_GPR_U32(ctx, 31, 0x169858u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x169850u, 0x169858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169858u;
label_169858:
    // 0x169858: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x169858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16985c:
    // 0x16985c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16985cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_169860:
    // 0x169860: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x169860u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_169864:
    // 0x169864: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x169864u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_169868:
    // 0x169868: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x169868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16986c:
    // 0x16986c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16986cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_169870:
    // 0x169870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_169874:
    // 0x169874: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x169874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_169878:
    // 0x169878: 0x3e00008  jr          $ra
label_16987c:
    if (ctx->pc == 0x16987Cu) {
        ctx->pc = 0x169880u;
        goto label_169880;
    }
    ctx->pc = 0x169878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169880u;
label_169880:
    // 0x169880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x169880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_169884:
    // 0x169884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_169888:
    // 0x169888: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x169888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_16988c:
    // 0x16988c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x16988cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_169890:
    // 0x169890: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x169890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_169894:
    // 0x169894: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x169894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_169898:
    // 0x169898: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x169898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16989c:
    // 0x16989c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16989cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1698a0:
    // 0x1698a0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1698a4:
    if (ctx->pc == 0x1698A4u) {
        ctx->pc = 0x1698A8u;
        goto label_1698a8;
    }
    ctx->pc = 0x1698A0u;
    {
        const bool branch_taken_0x1698a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1698a0) {
            ctx->pc = 0x1698BCu;
            goto label_1698bc;
        }
    }
    ctx->pc = 0x1698A8u;
label_1698a8:
    // 0x1698a8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1698a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1698ac:
    // 0x1698ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1698acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1698b0:
    // 0x1698b0: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x1698b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
label_1698b4:
    // 0x1698b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1698b8:
    if (ctx->pc == 0x1698B8u) {
        ctx->pc = 0x1698BCu;
        goto label_1698bc;
    }
    ctx->pc = 0x1698B4u;
    {
        const bool branch_taken_0x1698b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1698b4) {
            ctx->pc = 0x1698C4u;
            goto label_1698c4;
        }
    }
    ctx->pc = 0x1698BCu;
label_1698bc:
    // 0x1698bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1698bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1698c0:
    // 0x1698c0: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x1698c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
label_1698c4:
    // 0x1698c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1698c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1698c8:
    // 0x1698c8: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x1698c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_1698cc:
    // 0x1698cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1698ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1698d0:
    // 0x1698d0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1698d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1698d4:
    // 0x1698d4: 0x320f809  jalr        $t9
label_1698d8:
    if (ctx->pc == 0x1698D8u) {
        ctx->pc = 0x1698DCu;
        goto label_1698dc;
    }
    ctx->pc = 0x1698D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1698DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1698D4u, 0x1698DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1698DCu;
label_1698dc:
    // 0x1698dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1698dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1698e0:
    // 0x1698e0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1698e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1698e4:
    // 0x1698e4: 0x3e00008  jr          $ra
label_1698e8:
    if (ctx->pc == 0x1698E8u) {
        ctx->pc = 0x1698ECu;
        goto label_1698ec;
    }
    ctx->pc = 0x1698E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1698E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1698ECu;
label_1698ec:
    // 0x1698ec: 0x0  nop
    ctx->pc = 0x1698ecu;
    // NOP
label_1698f0:
    // 0x1698f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1698f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1698f4:
    // 0x1698f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1698f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1698f8:
    // 0x1698f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1698f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1698fc:
    // 0x1698fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1698fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_169900:
    // 0x169900: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x169900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_169904:
    // 0x169904: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x169904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_169908:
    // 0x169908: 0xa3a60070  sb          $a2, 0x70($sp)
    ctx->pc = 0x169908u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 6));
label_16990c:
    // 0x16990c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x16990cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_169910:
    // 0x169910: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x169910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_169914:
    // 0x169914: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x169914u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_169918:
    // 0x169918: 0x102000df  beqz        $at, . + 4 + (0xDF << 2)
label_16991c:
    if (ctx->pc == 0x16991Cu) {
        ctx->pc = 0x169920u;
        goto label_169920;
    }
    ctx->pc = 0x169918u;
    {
        const bool branch_taken_0x169918 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x169918) {
            ctx->pc = 0x169C98u;
            goto label_169c98;
        }
    }
    ctx->pc = 0x169920u;
label_169920:
    // 0x169920: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x169920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_169924:
    // 0x169924: 0x24848540  addiu       $a0, $a0, -0x7AC0
    ctx->pc = 0x169924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935872));
label_169928:
    // 0x169928: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x169928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_16992c:
    // 0x16992c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16992cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_169930:
    // 0x169930: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x169930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_169934:
    // 0x169934: 0x600008  jr          $v1
label_169938:
    if (ctx->pc == 0x169938u) {
        ctx->pc = 0x16993Cu;
        goto label_16993c;
    }
    ctx->pc = 0x169934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16993Cu: goto label_16993c;
            case 0x1699CCu: goto label_1699cc;
            case 0x169B80u: goto label_169b80;
            case 0x169C60u: goto label_169c60;
            case 0x169C98u: goto label_169c98;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169934u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16993Cu;
label_16993c:
    // 0x16993c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16993cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169940:
    // 0x169940: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_169944:
    if (ctx->pc == 0x169944u) {
        ctx->pc = 0x169948u;
        goto label_169948;
    }
    ctx->pc = 0x169940u;
    {
        const bool branch_taken_0x169940 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x169940) {
            ctx->pc = 0x16996Cu;
            goto label_16996c;
        }
    }
    ctx->pc = 0x169948u;
label_169948:
    // 0x169948: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x169948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_16994c:
    // 0x16994c: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x16994cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_169950:
    // 0x169950: 0x148300d1  bne         $a0, $v1, . + 4 + (0xD1 << 2)
label_169954:
    if (ctx->pc == 0x169954u) {
        ctx->pc = 0x169958u;
        goto label_169958;
    }
    ctx->pc = 0x169950u;
    {
        const bool branch_taken_0x169950 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x169950) {
            ctx->pc = 0x169C98u;
            goto label_169c98;
        }
    }
    ctx->pc = 0x169958u;
label_169958:
    // 0x169958: 0x93a30070  lbu         $v1, 0x70($sp)
    ctx->pc = 0x169958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_16995c:
    // 0x16995c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x16995cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_169960:
    // 0x169960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169964:
    // 0x169964: 0x108300cc  beq         $a0, $v1, . + 4 + (0xCC << 2)
label_169968:
    if (ctx->pc == 0x169968u) {
        ctx->pc = 0x16996Cu;
        goto label_16996c;
    }
    ctx->pc = 0x169964u;
    {
        const bool branch_taken_0x169964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x169964) {
            ctx->pc = 0x169C98u;
            goto label_169c98;
        }
    }
    ctx->pc = 0x16996Cu;
label_16996c:
    // 0x16996c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16996cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_169970:
    // 0x169970: 0xc088560  jal         func_221580
label_169974:
    if (ctx->pc == 0x169974u) {
        ctx->pc = 0x169978u;
        goto label_169978;
    }
    ctx->pc = 0x169970u;
    SET_GPR_U32(ctx, 31, 0x169978u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x169970u, 0x169978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169978u;
label_169978:
    // 0x169978: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x169978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_16997c:
    // 0x16997c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16997cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_169980:
    // 0x169980: 0x24a541b0  addiu       $a1, $a1, 0x41B0
    ctx->pc = 0x169980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16816));
label_169984:
    // 0x169984: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x169984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169988:
    // 0x169988: 0xc041b24  jal         func_106C90
label_16998c:
    if (ctx->pc == 0x16998Cu) {
        ctx->pc = 0x169990u;
        goto label_169990;
    }
    ctx->pc = 0x169988u;
    SET_GPR_U32(ctx, 31, 0x169990u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x169988u, 0x169990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169990u;
label_169990:
    // 0x169990: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x169990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_169994:
    // 0x169994: 0x27858ef8  addiu       $a1, $gp, -0x7108
    ctx->pc = 0x169994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938360));
label_169998:
    // 0x169998: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x169998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16999c:
    // 0x16999c: 0xc047314  jal         func_11CC50
label_1699a0:
    if (ctx->pc == 0x1699A0u) {
        ctx->pc = 0x1699A4u;
        goto label_1699a4;
    }
    ctx->pc = 0x16999Cu;
    SET_GPR_U32(ctx, 31, 0x1699A4u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x16999Cu, 0x1699A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1699A4u;
label_1699a4:
    // 0x1699a4: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1699a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1699a8:
    // 0x1699a8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1699a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1699ac:
    // 0x1699ac: 0xc08ef28  jal         func_23BCA0
label_1699b0:
    if (ctx->pc == 0x1699B0u) {
        ctx->pc = 0x1699B4u;
        goto label_1699b4;
    }
    ctx->pc = 0x1699ACu;
    SET_GPR_U32(ctx, 31, 0x1699B4u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x1699ACu, 0x1699B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1699B4u;
label_1699b4:
    // 0x1699b4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1699b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1699b8:
    // 0x1699b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1699b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1699bc:
    // 0x1699bc: 0xc0887b4  jal         func_221ED0
label_1699c0:
    if (ctx->pc == 0x1699C0u) {
        ctx->pc = 0x1699C4u;
        goto label_1699c4;
    }
    ctx->pc = 0x1699BCu;
    SET_GPR_U32(ctx, 31, 0x1699C4u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x1699BCu, 0x1699C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1699C4u;
label_1699c4:
    // 0x1699c4: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_1699c8:
    if (ctx->pc == 0x1699C8u) {
        ctx->pc = 0x1699CCu;
        goto label_1699cc;
    }
    ctx->pc = 0x1699C4u;
    {
        const bool branch_taken_0x1699c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1699c4) {
            ctx->pc = 0x169C98u;
            goto label_169c98;
        }
    }
    ctx->pc = 0x1699CCu;
label_1699cc:
    // 0x1699cc: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1699ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_1699d0:
    // 0x1699d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1699d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1699d4:
    // 0x1699d4: 0x0  nop
    ctx->pc = 0x1699d4u;
    // NOP
label_1699d8:
    // 0x1699d8: 0xe7808ee0  swc1        $f0, -0x7120($gp)
    ctx->pc = 0x1699d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938336), bits); }
label_1699dc:
    // 0x1699dc: 0x93a30070  lbu         $v1, 0x70($sp)
    ctx->pc = 0x1699dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_1699e0:
    // 0x1699e0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1699e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1699e4:
    // 0x1699e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1699e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1699e8:
    // 0x1699e8: 0x148300ab  bne         $a0, $v1, . + 4 + (0xAB << 2)
label_1699ec:
    if (ctx->pc == 0x1699ECu) {
        ctx->pc = 0x1699F0u;
        goto label_1699f0;
    }
    ctx->pc = 0x1699E8u;
    {
        const bool branch_taken_0x1699e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1699e8) {
            ctx->pc = 0x169C98u;
            goto label_169c98;
        }
    }
    ctx->pc = 0x1699F0u;
label_1699f0:
    // 0x1699f0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1699f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1699f4:
    // 0x1699f4: 0x24030079  addiu       $v1, $zero, 0x79
    ctx->pc = 0x1699f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_1699f8:
    // 0x1699f8: 0x10830053  beq         $a0, $v1, . + 4 + (0x53 << 2)
label_1699fc:
    if (ctx->pc == 0x1699FCu) {
        ctx->pc = 0x169A00u;
        goto label_169a00;
    }
    ctx->pc = 0x1699F8u;
    {
        const bool branch_taken_0x1699f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1699f8) {
            ctx->pc = 0x169B48u;
            goto label_169b48;
        }
    }
    ctx->pc = 0x169A00u;
label_169a00:
    // 0x169a00: 0x24030077  addiu       $v1, $zero, 0x77
    ctx->pc = 0x169a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_169a04:
    // 0x169a04: 0x10830050  beq         $a0, $v1, . + 4 + (0x50 << 2)
label_169a08:
    if (ctx->pc == 0x169A08u) {
        ctx->pc = 0x169A0Cu;
        goto label_169a0c;
    }
    ctx->pc = 0x169A04u;
    {
        const bool branch_taken_0x169a04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x169a04) {
            ctx->pc = 0x169B48u;
            goto label_169b48;
        }
    }
    ctx->pc = 0x169A0Cu;
label_169a0c:
    // 0x169a0c: 0x24030076  addiu       $v1, $zero, 0x76
    ctx->pc = 0x169a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_169a10:
    // 0x169a10: 0x1083004d  beq         $a0, $v1, . + 4 + (0x4D << 2)
label_169a14:
    if (ctx->pc == 0x169A14u) {
        ctx->pc = 0x169A18u;
        goto label_169a18;
    }
    ctx->pc = 0x169A10u;
    {
        const bool branch_taken_0x169a10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x169a10) {
            ctx->pc = 0x169B48u;
            goto label_169b48;
        }
    }
    ctx->pc = 0x169A18u;
label_169a18:
    // 0x169a18: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x169a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_169a1c:
    // 0x169a1c: 0x1083004a  beq         $a0, $v1, . + 4 + (0x4A << 2)
label_169a20:
    if (ctx->pc == 0x169A20u) {
        ctx->pc = 0x169A24u;
        goto label_169a24;
    }
    ctx->pc = 0x169A1Cu;
    {
        const bool branch_taken_0x169a1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x169a1c) {
            ctx->pc = 0x169B48u;
            goto label_169b48;
        }
    }
    ctx->pc = 0x169A24u;
label_169a24:
    // 0x169a24: 0x24030071  addiu       $v1, $zero, 0x71
    ctx->pc = 0x169a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
label_169a28:
    // 0x169a28: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_169a2c:
    if (ctx->pc == 0x169A2Cu) {
        ctx->pc = 0x169A30u;
        goto label_169a30;
    }
    ctx->pc = 0x169A28u;
    {
        const bool branch_taken_0x169a28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x169a28) {
            ctx->pc = 0x169A90u;
            goto label_169a90;
        }
    }
    ctx->pc = 0x169A30u;
label_169a30:
    // 0x169a30: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x169a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_169a34:
    // 0x169a34: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_169a38:
    if (ctx->pc == 0x169A38u) {
        ctx->pc = 0x169A3Cu;
        goto label_169a3c;
    }
    ctx->pc = 0x169A34u;
    {
        const bool branch_taken_0x169a34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x169a34) {
            ctx->pc = 0x169A7Cu;
            goto label_169a7c;
        }
    }
    ctx->pc = 0x169A3Cu;
label_169a3c:
    // 0x169a3c: 0x2403006a  addiu       $v1, $zero, 0x6A
    ctx->pc = 0x169a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_169a40:
    // 0x169a40: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
label_169a44:
    if (ctx->pc == 0x169A44u) {
        ctx->pc = 0x169A48u;
        goto label_169a48;
    }
    ctx->pc = 0x169A40u;
    {
        const bool branch_taken_0x169a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x169a40) {
            ctx->pc = 0x169A7Cu;
            goto label_169a7c;
        }
    }
    ctx->pc = 0x169A48u;
label_169a48:
    // 0x169a48: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x169a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_169a4c:
    // 0x169a4c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_169a50:
    if (ctx->pc == 0x169A50u) {
        ctx->pc = 0x169A54u;
        goto label_169a54;
    }
    ctx->pc = 0x169A4Cu;
    {
        const bool branch_taken_0x169a4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x169a4c) {
            ctx->pc = 0x169A68u;
            goto label_169a68;
        }
    }
    ctx->pc = 0x169A54u;
label_169a54:
    // 0x169a54: 0x24030069  addiu       $v1, $zero, 0x69
    ctx->pc = 0x169a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_169a58:
    // 0x169a58: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_169a5c:
    if (ctx->pc == 0x169A5Cu) {
        ctx->pc = 0x169A60u;
        goto label_169a60;
    }
    ctx->pc = 0x169A58u;
    {
        const bool branch_taken_0x169a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x169a58) {
            ctx->pc = 0x169A68u;
            goto label_169a68;
        }
    }
    ctx->pc = 0x169A60u;
label_169a60:
    // 0x169a60: 0x1000008d  b           . + 4 + (0x8D << 2)
label_169a64:
    if (ctx->pc == 0x169A64u) {
        ctx->pc = 0x169A68u;
        goto label_169a68;
    }
    ctx->pc = 0x169A60u;
    {
        const bool branch_taken_0x169a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169a60) {
            ctx->pc = 0x169C98u;
            goto label_169c98;
        }
    }
    ctx->pc = 0x169A68u;
label_169a68:
    // 0x169a68: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x169a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_169a6c:
    // 0x169a6c: 0xc05a854  jal         func_16A150
label_169a70:
    if (ctx->pc == 0x169A70u) {
        ctx->pc = 0x169A74u;
        goto label_169a74;
    }
    ctx->pc = 0x169A6Cu;
    SET_GPR_U32(ctx, 31, 0x169A74u);
    ctx->pc = 0x16A150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A150u, 0x169A6Cu, 0x169A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A74u;
label_169a74:
    // 0x169a74: 0x10000088  b           . + 4 + (0x88 << 2)
label_169a78:
    if (ctx->pc == 0x169A78u) {
        ctx->pc = 0x169A7Cu;
        goto label_169a7c;
    }
    ctx->pc = 0x169A74u;
    {
        const bool branch_taken_0x169a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169a74) {
            ctx->pc = 0x169C98u;
            goto label_169c98;
        }
    }
    ctx->pc = 0x169A7Cu;
label_169a7c:
    // 0x169a7c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x169a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_169a80:
    // 0x169a80: 0xc05a870  jal         func_16A1C0
label_169a84:
    if (ctx->pc == 0x169A84u) {
        ctx->pc = 0x169A88u;
        goto label_169a88;
    }
    ctx->pc = 0x169A80u;
    SET_GPR_U32(ctx, 31, 0x169A88u);
    ctx->pc = 0x16A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A1C0u, 0x169A80u, 0x169A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A88u;
label_169a88:
    // 0x169a88: 0x10000083  b           . + 4 + (0x83 << 2)
label_169a8c:
    if (ctx->pc == 0x169A8Cu) {
        ctx->pc = 0x169A90u;
        goto label_169a90;
    }
    ctx->pc = 0x169A88u;
    {
        const bool branch_taken_0x169a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169a88) {
            ctx->pc = 0x169C98u;
            goto label_169c98;
        }
    }
    ctx->pc = 0x169A90u;
label_169a90:
    // 0x169a90: 0xc05548c  jal         func_155230
label_169a94:
    if (ctx->pc == 0x169A94u) {
        ctx->pc = 0x169A98u;
        goto label_169a98;
    }
    ctx->pc = 0x169A90u;
    SET_GPR_U32(ctx, 31, 0x169A98u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x169A90u, 0x169A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A98u;
label_169a98:
    // 0x169a98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x169a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_169a9c:
    // 0x169a9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x169a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169aa0:
    // 0x169aa0: 0xc0553d4  jal         func_154F50
label_169aa4:
    if (ctx->pc == 0x169AA4u) {
        ctx->pc = 0x169AA8u;
        goto label_169aa8;
    }
    ctx->pc = 0x169AA0u;
    SET_GPR_U32(ctx, 31, 0x169AA8u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x169AA0u, 0x169AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169AA8u;
label_169aa8:
    // 0x169aa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x169aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_169aac:
    // 0x169aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169ab0:
    // 0x169ab0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169ab4:
    // 0x169ab4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x169ab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169ab8:
    // 0x169ab8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x169ab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_169abc:
    // 0x169abc: 0x320f809  jalr        $t9
label_169ac0:
    if (ctx->pc == 0x169AC0u) {
        ctx->pc = 0x169AC4u;
        goto label_169ac4;
    }
    ctx->pc = 0x169ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169AC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169ABCu, 0x169AC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169AC4u;
label_169ac4:
    // 0x169ac4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x169ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_169ac8:
    // 0x169ac8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169acc:
    // 0x169acc: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x169accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_169ad0:
    // 0x169ad0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x169ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_169ad4:
    // 0x169ad4: 0x24a541e0  addiu       $a1, $a1, 0x41E0
    ctx->pc = 0x169ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16864));
label_169ad8:
    // 0x169ad8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169adc:
    // 0x169adc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x169adcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_169ae0:
    // 0x169ae0: 0xc08f558  jal         func_23D560
label_169ae4:
    if (ctx->pc == 0x169AE4u) {
        ctx->pc = 0x169AE8u;
        goto label_169ae8;
    }
    ctx->pc = 0x169AE0u;
    SET_GPR_U32(ctx, 31, 0x169AE8u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x169AE0u, 0x169AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169AE8u;
label_169ae8:
    // 0x169ae8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x169ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_169aec:
    // 0x169aec: 0xc088560  jal         func_221580
label_169af0:
    if (ctx->pc == 0x169AF0u) {
        ctx->pc = 0x169AF4u;
        goto label_169af4;
    }
    ctx->pc = 0x169AECu;
    SET_GPR_U32(ctx, 31, 0x169AF4u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x169AECu, 0x169AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169AF4u;
label_169af4:
    // 0x169af4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x169af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_169af8:
    // 0x169af8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x169af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_169afc:
    // 0x169afc: 0x24a541b0  addiu       $a1, $a1, 0x41B0
    ctx->pc = 0x169afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16816));
label_169b00:
    // 0x169b00: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x169b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_169b04:
    // 0x169b04: 0xc041b24  jal         func_106C90
label_169b08:
    if (ctx->pc == 0x169B08u) {
        ctx->pc = 0x169B0Cu;
        goto label_169b0c;
    }
    ctx->pc = 0x169B04u;
    SET_GPR_U32(ctx, 31, 0x169B0Cu);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x169B04u, 0x169B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169B0Cu;
label_169b0c:
    // 0x169b0c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x169b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_169b10:
    // 0x169b10: 0x27858ef8  addiu       $a1, $gp, -0x7108
    ctx->pc = 0x169b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938360));
label_169b14:
    // 0x169b14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x169b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169b18:
    // 0x169b18: 0xc047314  jal         func_11CC50
label_169b1c:
    if (ctx->pc == 0x169B1Cu) {
        ctx->pc = 0x169B20u;
        goto label_169b20;
    }
    ctx->pc = 0x169B18u;
    SET_GPR_U32(ctx, 31, 0x169B20u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x169B18u, 0x169B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169B20u;
label_169b20:
    // 0x169b20: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x169b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_169b24:
    // 0x169b24: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x169b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_169b28:
    // 0x169b28: 0xc08ef28  jal         func_23BCA0
label_169b2c:
    if (ctx->pc == 0x169B2Cu) {
        ctx->pc = 0x169B30u;
        goto label_169b30;
    }
    ctx->pc = 0x169B28u;
    SET_GPR_U32(ctx, 31, 0x169B30u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x169B28u, 0x169B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169B30u;
label_169b30:
    // 0x169b30: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x169b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_169b34:
    // 0x169b34: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x169b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_169b38:
    // 0x169b38: 0xc0887b4  jal         func_221ED0
label_169b3c:
    if (ctx->pc == 0x169B3Cu) {
        ctx->pc = 0x169B40u;
        goto label_169b40;
    }
    ctx->pc = 0x169B38u;
    SET_GPR_U32(ctx, 31, 0x169B40u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x169B38u, 0x169B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169B40u;
label_169b40:
    // 0x169b40: 0x10000055  b           . + 4 + (0x55 << 2)
label_169b44:
    if (ctx->pc == 0x169B44u) {
        ctx->pc = 0x169B48u;
        goto label_169b48;
    }
    ctx->pc = 0x169B40u;
    {
        const bool branch_taken_0x169b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169b40) {
            ctx->pc = 0x169C98u;
            goto label_169c98;
        }
    }
    ctx->pc = 0x169B48u;
label_169b48:
    // 0x169b48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x169b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_169b4c:
    // 0x169b4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169b50:
    // 0x169b50: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x169b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_169b54:
    // 0x169b54: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x169b54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_169b58:
    // 0x169b58: 0x24a541f0  addiu       $a1, $a1, 0x41F0
    ctx->pc = 0x169b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16880));
label_169b5c:
    // 0x169b5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169b60:
    // 0x169b60: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x169b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_169b64:
    // 0x169b64: 0xc08f558  jal         func_23D560
label_169b68:
    if (ctx->pc == 0x169B68u) {
        ctx->pc = 0x169B6Cu;
        goto label_169b6c;
    }
    ctx->pc = 0x169B64u;
    SET_GPR_U32(ctx, 31, 0x169B6Cu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x169B64u, 0x169B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169B6Cu;
label_169b6c:
    // 0x169b6c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x169b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_169b70:
    // 0x169b70: 0xc05a96c  jal         func_16A5B0
label_169b74:
    if (ctx->pc == 0x169B74u) {
        ctx->pc = 0x169B78u;
        goto label_169b78;
    }
    ctx->pc = 0x169B70u;
    SET_GPR_U32(ctx, 31, 0x169B78u);
    ctx->pc = 0x16A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A5B0u, 0x169B70u, 0x169B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169B78u;
label_169b78:
    // 0x169b78: 0x10000047  b           . + 4 + (0x47 << 2)
label_169b7c:
    if (ctx->pc == 0x169B7Cu) {
        ctx->pc = 0x169B80u;
        goto label_169b80;
    }
    ctx->pc = 0x169B78u;
    {
        const bool branch_taken_0x169b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169b78) {
            ctx->pc = 0x169C98u;
            goto label_169c98;
        }
    }
    ctx->pc = 0x169B80u;
label_169b80:
    // 0x169b80: 0x93a30070  lbu         $v1, 0x70($sp)
    ctx->pc = 0x169b80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_169b84:
    // 0x169b84: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x169b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_169b88:
    // 0x169b88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169b8c:
    // 0x169b8c: 0x14830042  bne         $a0, $v1, . + 4 + (0x42 << 2)
label_169b90:
    if (ctx->pc == 0x169B90u) {
        ctx->pc = 0x169B94u;
        goto label_169b94;
    }
    ctx->pc = 0x169B8Cu;
    {
        const bool branch_taken_0x169b8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x169b8c) {
            ctx->pc = 0x169C98u;
            goto label_169c98;
        }
    }
    ctx->pc = 0x169B94u;
label_169b94:
    // 0x169b94: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x169b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_169b98:
    // 0x169b98: 0x2463ff97  addiu       $v1, $v1, -0x69
    ctx->pc = 0x169b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967191));
label_169b9c:
    // 0x169b9c: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x169b9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_169ba0:
    // 0x169ba0: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
label_169ba4:
    if (ctx->pc == 0x169BA4u) {
        ctx->pc = 0x169BA8u;
        goto label_169ba8;
    }
    ctx->pc = 0x169BA0u;
    {
        const bool branch_taken_0x169ba0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x169ba0) {
            ctx->pc = 0x169C98u;
            goto label_169c98;
        }
    }
    ctx->pc = 0x169BA8u;
label_169ba8:
    // 0x169ba8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x169ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_169bac:
    // 0x169bac: 0x24848510  addiu       $a0, $a0, -0x7AF0
    ctx->pc = 0x169bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935824));
label_169bb0:
    // 0x169bb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x169bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_169bb4:
    // 0x169bb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_169bb8:
    // 0x169bb8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x169bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_169bbc:
    // 0x169bbc: 0x600008  jr          $v1
label_169bc0:
    if (ctx->pc == 0x169BC0u) {
        ctx->pc = 0x169BC4u;
        goto label_169bc4;
    }
    ctx->pc = 0x169BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169BC4u: goto label_169bc4;
            case 0x169BD8u: goto label_169bd8;
            case 0x169BECu: goto label_169bec;
            case 0x169C00u: goto label_169c00;
            case 0x169C14u: goto label_169c14;
            case 0x169C28u: goto label_169c28;
            case 0x169C98u: goto label_169c98;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169BBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x169BC4u;
label_169bc4:
    // 0x169bc4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x169bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_169bc8:
    // 0x169bc8: 0xc05ac68  jal         func_16B1A0
label_169bcc:
    if (ctx->pc == 0x169BCCu) {
        ctx->pc = 0x169BD0u;
        goto label_169bd0;
    }
    ctx->pc = 0x169BC8u;
    SET_GPR_U32(ctx, 31, 0x169BD0u);
    ctx->pc = 0x16B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B1A0u, 0x169BC8u, 0x169BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169BD0u;
label_169bd0:
    // 0x169bd0: 0x10000031  b           . + 4 + (0x31 << 2)
label_169bd4:
    if (ctx->pc == 0x169BD4u) {
        ctx->pc = 0x169BD8u;
        goto label_169bd8;
    }
    ctx->pc = 0x169BD0u;
    {
        const bool branch_taken_0x169bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169bd0) {
            ctx->pc = 0x169C98u;
            goto label_169c98;
        }
    }
    ctx->pc = 0x169BD8u;
label_169bd8:
    // 0x169bd8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x169bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_169bdc:
    // 0x169bdc: 0xc05ac84  jal         func_16B210
label_169be0:
    if (ctx->pc == 0x169BE0u) {
        ctx->pc = 0x169BE4u;
        goto label_169be4;
    }
    ctx->pc = 0x169BDCu;
    SET_GPR_U32(ctx, 31, 0x169BE4u);
    ctx->pc = 0x16B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B210u, 0x169BDCu, 0x169BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169BE4u;
label_169be4:
    // 0x169be4: 0x1000002c  b           . + 4 + (0x2C << 2)
label_169be8:
    if (ctx->pc == 0x169BE8u) {
        ctx->pc = 0x169BECu;
        goto label_169bec;
    }
    ctx->pc = 0x169BE4u;
    {
        const bool branch_taken_0x169be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169be4) {
            ctx->pc = 0x169C98u;
            goto label_169c98;
        }
    }
    ctx->pc = 0x169BECu;
label_169bec:
    // 0x169bec: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x169becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_169bf0:
    // 0x169bf0: 0xc05aca0  jal         func_16B280
label_169bf4:
    if (ctx->pc == 0x169BF4u) {
        ctx->pc = 0x169BF8u;
        goto label_169bf8;
    }
    ctx->pc = 0x169BF0u;
    SET_GPR_U32(ctx, 31, 0x169BF8u);
    ctx->pc = 0x16B280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B280u, 0x169BF0u, 0x169BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169BF8u;
label_169bf8:
    // 0x169bf8: 0x10000027  b           . + 4 + (0x27 << 2)
label_169bfc:
    if (ctx->pc == 0x169BFCu) {
        ctx->pc = 0x169C00u;
        goto label_169c00;
    }
    ctx->pc = 0x169BF8u;
    {
        const bool branch_taken_0x169bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169bf8) {
            ctx->pc = 0x169C98u;
            goto label_169c98;
        }
    }
    ctx->pc = 0x169C00u;
label_169c00:
    // 0x169c00: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x169c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_169c04:
    // 0x169c04: 0xc05acc4  jal         func_16B310
label_169c08:
    if (ctx->pc == 0x169C08u) {
        ctx->pc = 0x169C0Cu;
        goto label_169c0c;
    }
    ctx->pc = 0x169C04u;
    SET_GPR_U32(ctx, 31, 0x169C0Cu);
    ctx->pc = 0x16B310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B310u, 0x169C04u, 0x169C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169C0Cu;
label_169c0c:
    // 0x169c0c: 0x10000022  b           . + 4 + (0x22 << 2)
label_169c10:
    if (ctx->pc == 0x169C10u) {
        ctx->pc = 0x169C14u;
        goto label_169c14;
    }
    ctx->pc = 0x169C0Cu;
    {
        const bool branch_taken_0x169c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169c0c) {
            ctx->pc = 0x169C98u;
            goto label_169c98;
        }
    }
    ctx->pc = 0x169C14u;
label_169c14:
    // 0x169c14: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x169c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_169c18:
    // 0x169c18: 0xc05adb8  jal         func_16B6E0
label_169c1c:
    if (ctx->pc == 0x169C1Cu) {
        ctx->pc = 0x169C20u;
        goto label_169c20;
    }
    ctx->pc = 0x169C18u;
    SET_GPR_U32(ctx, 31, 0x169C20u);
    ctx->pc = 0x16B6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B6E0u, 0x169C18u, 0x169C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169C20u;
label_169c20:
    // 0x169c20: 0x1000001d  b           . + 4 + (0x1D << 2)
label_169c24:
    if (ctx->pc == 0x169C24u) {
        ctx->pc = 0x169C28u;
        goto label_169c28;
    }
    ctx->pc = 0x169C20u;
    {
        const bool branch_taken_0x169c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169c20) {
            ctx->pc = 0x169C98u;
            goto label_169c98;
        }
    }
    ctx->pc = 0x169C28u;
label_169c28:
    // 0x169c28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x169c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_169c2c:
    // 0x169c2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169c30:
    // 0x169c30: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x169c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_169c34:
    // 0x169c34: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x169c34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_169c38:
    // 0x169c38: 0x24a541e0  addiu       $a1, $a1, 0x41E0
    ctx->pc = 0x169c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16864));
label_169c3c:
    // 0x169c3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169c40:
    // 0x169c40: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x169c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_169c44:
    // 0x169c44: 0xc08f558  jal         func_23D560
label_169c48:
    if (ctx->pc == 0x169C48u) {
        ctx->pc = 0x169C4Cu;
        goto label_169c4c;
    }
    ctx->pc = 0x169C44u;
    SET_GPR_U32(ctx, 31, 0x169C4Cu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x169C44u, 0x169C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169C4Cu;
label_169c4c:
    // 0x169c4c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x169c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_169c50:
    // 0x169c50: 0xc05afb4  jal         func_16BED0
label_169c54:
    if (ctx->pc == 0x169C54u) {
        ctx->pc = 0x169C58u;
        goto label_169c58;
    }
    ctx->pc = 0x169C50u;
    SET_GPR_U32(ctx, 31, 0x169C58u);
    ctx->pc = 0x16BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BED0u, 0x169C50u, 0x169C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169C58u;
label_169c58:
    // 0x169c58: 0x1000000f  b           . + 4 + (0xF << 2)
label_169c5c:
    if (ctx->pc == 0x169C5Cu) {
        ctx->pc = 0x169C60u;
        goto label_169c60;
    }
    ctx->pc = 0x169C58u;
    {
        const bool branch_taken_0x169c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169c58) {
            ctx->pc = 0x169C98u;
            goto label_169c98;
        }
    }
    ctx->pc = 0x169C60u;
label_169c60:
    // 0x169c60: 0x93a30070  lbu         $v1, 0x70($sp)
    ctx->pc = 0x169c60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_169c64:
    // 0x169c64: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x169c64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_169c68:
    // 0x169c68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169c6c:
    // 0x169c6c: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_169c70:
    if (ctx->pc == 0x169C70u) {
        ctx->pc = 0x169C74u;
        goto label_169c74;
    }
    ctx->pc = 0x169C6Cu;
    {
        const bool branch_taken_0x169c6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x169c6c) {
            ctx->pc = 0x169C98u;
            goto label_169c98;
        }
    }
    ctx->pc = 0x169C74u;
label_169c74:
    // 0x169c74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x169c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_169c78:
    // 0x169c78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169c7c:
    // 0x169c7c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x169c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_169c80:
    // 0x169c80: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x169c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_169c84:
    // 0x169c84: 0x24a541e0  addiu       $a1, $a1, 0x41E0
    ctx->pc = 0x169c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16864));
label_169c88:
    // 0x169c88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169c8c:
    // 0x169c8c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x169c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_169c90:
    // 0x169c90: 0xc08f558  jal         func_23D560
label_169c94:
    if (ctx->pc == 0x169C94u) {
        ctx->pc = 0x169C98u;
        goto label_169c98;
    }
    ctx->pc = 0x169C90u;
    SET_GPR_U32(ctx, 31, 0x169C98u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x169C90u, 0x169C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169C98u;
label_169c98:
    // 0x169c98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x169c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_169c9c:
    // 0x169c9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_169ca0:
    // 0x169ca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_169ca4:
    // 0x169ca4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x169ca4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_169ca8:
    // 0x169ca8: 0x3e00008  jr          $ra
label_169cac:
    if (ctx->pc == 0x169CACu) {
        ctx->pc = 0x169CB0u;
        goto label_fallthrough_0x169ca8;
    }
    ctx->pc = 0x169CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x169ca8:
    ctx->pc = 0x169CB0u;
}
