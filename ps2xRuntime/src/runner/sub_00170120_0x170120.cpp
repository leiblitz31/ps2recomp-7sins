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

// Function: sub_00170120
// Address: 0x170120 - 0x170b30
void sub_00170120_0x170120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170120_0x170120");
#endif

    switch (ctx->pc) {
        case 0x170120u: goto label_170120;
        case 0x170124u: goto label_170124;
        case 0x170128u: goto label_170128;
        case 0x17012cu: goto label_17012c;
        case 0x170130u: goto label_170130;
        case 0x170134u: goto label_170134;
        case 0x170138u: goto label_170138;
        case 0x17013cu: goto label_17013c;
        case 0x170140u: goto label_170140;
        case 0x170144u: goto label_170144;
        case 0x170148u: goto label_170148;
        case 0x17014cu: goto label_17014c;
        case 0x170150u: goto label_170150;
        case 0x170154u: goto label_170154;
        case 0x170158u: goto label_170158;
        case 0x17015cu: goto label_17015c;
        case 0x170160u: goto label_170160;
        case 0x170164u: goto label_170164;
        case 0x170168u: goto label_170168;
        case 0x17016cu: goto label_17016c;
        case 0x170170u: goto label_170170;
        case 0x170174u: goto label_170174;
        case 0x170178u: goto label_170178;
        case 0x17017cu: goto label_17017c;
        case 0x170180u: goto label_170180;
        case 0x170184u: goto label_170184;
        case 0x170188u: goto label_170188;
        case 0x17018cu: goto label_17018c;
        case 0x170190u: goto label_170190;
        case 0x170194u: goto label_170194;
        case 0x170198u: goto label_170198;
        case 0x17019cu: goto label_17019c;
        case 0x1701a0u: goto label_1701a0;
        case 0x1701a4u: goto label_1701a4;
        case 0x1701a8u: goto label_1701a8;
        case 0x1701acu: goto label_1701ac;
        case 0x1701b0u: goto label_1701b0;
        case 0x1701b4u: goto label_1701b4;
        case 0x1701b8u: goto label_1701b8;
        case 0x1701bcu: goto label_1701bc;
        case 0x1701c0u: goto label_1701c0;
        case 0x1701c4u: goto label_1701c4;
        case 0x1701c8u: goto label_1701c8;
        case 0x1701ccu: goto label_1701cc;
        case 0x1701d0u: goto label_1701d0;
        case 0x1701d4u: goto label_1701d4;
        case 0x1701d8u: goto label_1701d8;
        case 0x1701dcu: goto label_1701dc;
        case 0x1701e0u: goto label_1701e0;
        case 0x1701e4u: goto label_1701e4;
        case 0x1701e8u: goto label_1701e8;
        case 0x1701ecu: goto label_1701ec;
        case 0x1701f0u: goto label_1701f0;
        case 0x1701f4u: goto label_1701f4;
        case 0x1701f8u: goto label_1701f8;
        case 0x1701fcu: goto label_1701fc;
        case 0x170200u: goto label_170200;
        case 0x170204u: goto label_170204;
        case 0x170208u: goto label_170208;
        case 0x17020cu: goto label_17020c;
        case 0x170210u: goto label_170210;
        case 0x170214u: goto label_170214;
        case 0x170218u: goto label_170218;
        case 0x17021cu: goto label_17021c;
        case 0x170220u: goto label_170220;
        case 0x170224u: goto label_170224;
        case 0x170228u: goto label_170228;
        case 0x17022cu: goto label_17022c;
        case 0x170230u: goto label_170230;
        case 0x170234u: goto label_170234;
        case 0x170238u: goto label_170238;
        case 0x17023cu: goto label_17023c;
        case 0x170240u: goto label_170240;
        case 0x170244u: goto label_170244;
        case 0x170248u: goto label_170248;
        case 0x17024cu: goto label_17024c;
        case 0x170250u: goto label_170250;
        case 0x170254u: goto label_170254;
        case 0x170258u: goto label_170258;
        case 0x17025cu: goto label_17025c;
        case 0x170260u: goto label_170260;
        case 0x170264u: goto label_170264;
        case 0x170268u: goto label_170268;
        case 0x17026cu: goto label_17026c;
        case 0x170270u: goto label_170270;
        case 0x170274u: goto label_170274;
        case 0x170278u: goto label_170278;
        case 0x17027cu: goto label_17027c;
        case 0x170280u: goto label_170280;
        case 0x170284u: goto label_170284;
        case 0x170288u: goto label_170288;
        case 0x17028cu: goto label_17028c;
        case 0x170290u: goto label_170290;
        case 0x170294u: goto label_170294;
        case 0x170298u: goto label_170298;
        case 0x17029cu: goto label_17029c;
        case 0x1702a0u: goto label_1702a0;
        case 0x1702a4u: goto label_1702a4;
        case 0x1702a8u: goto label_1702a8;
        case 0x1702acu: goto label_1702ac;
        case 0x1702b0u: goto label_1702b0;
        case 0x1702b4u: goto label_1702b4;
        case 0x1702b8u: goto label_1702b8;
        case 0x1702bcu: goto label_1702bc;
        case 0x1702c0u: goto label_1702c0;
        case 0x1702c4u: goto label_1702c4;
        case 0x1702c8u: goto label_1702c8;
        case 0x1702ccu: goto label_1702cc;
        case 0x1702d0u: goto label_1702d0;
        case 0x1702d4u: goto label_1702d4;
        case 0x1702d8u: goto label_1702d8;
        case 0x1702dcu: goto label_1702dc;
        case 0x1702e0u: goto label_1702e0;
        case 0x1702e4u: goto label_1702e4;
        case 0x1702e8u: goto label_1702e8;
        case 0x1702ecu: goto label_1702ec;
        case 0x1702f0u: goto label_1702f0;
        case 0x1702f4u: goto label_1702f4;
        case 0x1702f8u: goto label_1702f8;
        case 0x1702fcu: goto label_1702fc;
        case 0x170300u: goto label_170300;
        case 0x170304u: goto label_170304;
        case 0x170308u: goto label_170308;
        case 0x17030cu: goto label_17030c;
        case 0x170310u: goto label_170310;
        case 0x170314u: goto label_170314;
        case 0x170318u: goto label_170318;
        case 0x17031cu: goto label_17031c;
        case 0x170320u: goto label_170320;
        case 0x170324u: goto label_170324;
        case 0x170328u: goto label_170328;
        case 0x17032cu: goto label_17032c;
        case 0x170330u: goto label_170330;
        case 0x170334u: goto label_170334;
        case 0x170338u: goto label_170338;
        case 0x17033cu: goto label_17033c;
        case 0x170340u: goto label_170340;
        case 0x170344u: goto label_170344;
        case 0x170348u: goto label_170348;
        case 0x17034cu: goto label_17034c;
        case 0x170350u: goto label_170350;
        case 0x170354u: goto label_170354;
        case 0x170358u: goto label_170358;
        case 0x17035cu: goto label_17035c;
        case 0x170360u: goto label_170360;
        case 0x170364u: goto label_170364;
        case 0x170368u: goto label_170368;
        case 0x17036cu: goto label_17036c;
        case 0x170370u: goto label_170370;
        case 0x170374u: goto label_170374;
        case 0x170378u: goto label_170378;
        case 0x17037cu: goto label_17037c;
        case 0x170380u: goto label_170380;
        case 0x170384u: goto label_170384;
        case 0x170388u: goto label_170388;
        case 0x17038cu: goto label_17038c;
        case 0x170390u: goto label_170390;
        case 0x170394u: goto label_170394;
        case 0x170398u: goto label_170398;
        case 0x17039cu: goto label_17039c;
        case 0x1703a0u: goto label_1703a0;
        case 0x1703a4u: goto label_1703a4;
        case 0x1703a8u: goto label_1703a8;
        case 0x1703acu: goto label_1703ac;
        case 0x1703b0u: goto label_1703b0;
        case 0x1703b4u: goto label_1703b4;
        case 0x1703b8u: goto label_1703b8;
        case 0x1703bcu: goto label_1703bc;
        case 0x1703c0u: goto label_1703c0;
        case 0x1703c4u: goto label_1703c4;
        case 0x1703c8u: goto label_1703c8;
        case 0x1703ccu: goto label_1703cc;
        case 0x1703d0u: goto label_1703d0;
        case 0x1703d4u: goto label_1703d4;
        case 0x1703d8u: goto label_1703d8;
        case 0x1703dcu: goto label_1703dc;
        case 0x1703e0u: goto label_1703e0;
        case 0x1703e4u: goto label_1703e4;
        case 0x1703e8u: goto label_1703e8;
        case 0x1703ecu: goto label_1703ec;
        case 0x1703f0u: goto label_1703f0;
        case 0x1703f4u: goto label_1703f4;
        case 0x1703f8u: goto label_1703f8;
        case 0x1703fcu: goto label_1703fc;
        case 0x170400u: goto label_170400;
        case 0x170404u: goto label_170404;
        case 0x170408u: goto label_170408;
        case 0x17040cu: goto label_17040c;
        case 0x170410u: goto label_170410;
        case 0x170414u: goto label_170414;
        case 0x170418u: goto label_170418;
        case 0x17041cu: goto label_17041c;
        case 0x170420u: goto label_170420;
        case 0x170424u: goto label_170424;
        case 0x170428u: goto label_170428;
        case 0x17042cu: goto label_17042c;
        case 0x170430u: goto label_170430;
        case 0x170434u: goto label_170434;
        case 0x170438u: goto label_170438;
        case 0x17043cu: goto label_17043c;
        case 0x170440u: goto label_170440;
        case 0x170444u: goto label_170444;
        case 0x170448u: goto label_170448;
        case 0x17044cu: goto label_17044c;
        case 0x170450u: goto label_170450;
        case 0x170454u: goto label_170454;
        case 0x170458u: goto label_170458;
        case 0x17045cu: goto label_17045c;
        case 0x170460u: goto label_170460;
        case 0x170464u: goto label_170464;
        case 0x170468u: goto label_170468;
        case 0x17046cu: goto label_17046c;
        case 0x170470u: goto label_170470;
        case 0x170474u: goto label_170474;
        case 0x170478u: goto label_170478;
        case 0x17047cu: goto label_17047c;
        case 0x170480u: goto label_170480;
        case 0x170484u: goto label_170484;
        case 0x170488u: goto label_170488;
        case 0x17048cu: goto label_17048c;
        case 0x170490u: goto label_170490;
        case 0x170494u: goto label_170494;
        case 0x170498u: goto label_170498;
        case 0x17049cu: goto label_17049c;
        case 0x1704a0u: goto label_1704a0;
        case 0x1704a4u: goto label_1704a4;
        case 0x1704a8u: goto label_1704a8;
        case 0x1704acu: goto label_1704ac;
        case 0x1704b0u: goto label_1704b0;
        case 0x1704b4u: goto label_1704b4;
        case 0x1704b8u: goto label_1704b8;
        case 0x1704bcu: goto label_1704bc;
        case 0x1704c0u: goto label_1704c0;
        case 0x1704c4u: goto label_1704c4;
        case 0x1704c8u: goto label_1704c8;
        case 0x1704ccu: goto label_1704cc;
        case 0x1704d0u: goto label_1704d0;
        case 0x1704d4u: goto label_1704d4;
        case 0x1704d8u: goto label_1704d8;
        case 0x1704dcu: goto label_1704dc;
        case 0x1704e0u: goto label_1704e0;
        case 0x1704e4u: goto label_1704e4;
        case 0x1704e8u: goto label_1704e8;
        case 0x1704ecu: goto label_1704ec;
        case 0x1704f0u: goto label_1704f0;
        case 0x1704f4u: goto label_1704f4;
        case 0x1704f8u: goto label_1704f8;
        case 0x1704fcu: goto label_1704fc;
        case 0x170500u: goto label_170500;
        case 0x170504u: goto label_170504;
        case 0x170508u: goto label_170508;
        case 0x17050cu: goto label_17050c;
        case 0x170510u: goto label_170510;
        case 0x170514u: goto label_170514;
        case 0x170518u: goto label_170518;
        case 0x17051cu: goto label_17051c;
        case 0x170520u: goto label_170520;
        case 0x170524u: goto label_170524;
        case 0x170528u: goto label_170528;
        case 0x17052cu: goto label_17052c;
        case 0x170530u: goto label_170530;
        case 0x170534u: goto label_170534;
        case 0x170538u: goto label_170538;
        case 0x17053cu: goto label_17053c;
        case 0x170540u: goto label_170540;
        case 0x170544u: goto label_170544;
        case 0x170548u: goto label_170548;
        case 0x17054cu: goto label_17054c;
        case 0x170550u: goto label_170550;
        case 0x170554u: goto label_170554;
        case 0x170558u: goto label_170558;
        case 0x17055cu: goto label_17055c;
        case 0x170560u: goto label_170560;
        case 0x170564u: goto label_170564;
        case 0x170568u: goto label_170568;
        case 0x17056cu: goto label_17056c;
        case 0x170570u: goto label_170570;
        case 0x170574u: goto label_170574;
        case 0x170578u: goto label_170578;
        case 0x17057cu: goto label_17057c;
        case 0x170580u: goto label_170580;
        case 0x170584u: goto label_170584;
        case 0x170588u: goto label_170588;
        case 0x17058cu: goto label_17058c;
        case 0x170590u: goto label_170590;
        case 0x170594u: goto label_170594;
        case 0x170598u: goto label_170598;
        case 0x17059cu: goto label_17059c;
        case 0x1705a0u: goto label_1705a0;
        case 0x1705a4u: goto label_1705a4;
        case 0x1705a8u: goto label_1705a8;
        case 0x1705acu: goto label_1705ac;
        case 0x1705b0u: goto label_1705b0;
        case 0x1705b4u: goto label_1705b4;
        case 0x1705b8u: goto label_1705b8;
        case 0x1705bcu: goto label_1705bc;
        case 0x1705c0u: goto label_1705c0;
        case 0x1705c4u: goto label_1705c4;
        case 0x1705c8u: goto label_1705c8;
        case 0x1705ccu: goto label_1705cc;
        case 0x1705d0u: goto label_1705d0;
        case 0x1705d4u: goto label_1705d4;
        case 0x1705d8u: goto label_1705d8;
        case 0x1705dcu: goto label_1705dc;
        case 0x1705e0u: goto label_1705e0;
        case 0x1705e4u: goto label_1705e4;
        case 0x1705e8u: goto label_1705e8;
        case 0x1705ecu: goto label_1705ec;
        case 0x1705f0u: goto label_1705f0;
        case 0x1705f4u: goto label_1705f4;
        case 0x1705f8u: goto label_1705f8;
        case 0x1705fcu: goto label_1705fc;
        case 0x170600u: goto label_170600;
        case 0x170604u: goto label_170604;
        case 0x170608u: goto label_170608;
        case 0x17060cu: goto label_17060c;
        case 0x170610u: goto label_170610;
        case 0x170614u: goto label_170614;
        case 0x170618u: goto label_170618;
        case 0x17061cu: goto label_17061c;
        case 0x170620u: goto label_170620;
        case 0x170624u: goto label_170624;
        case 0x170628u: goto label_170628;
        case 0x17062cu: goto label_17062c;
        case 0x170630u: goto label_170630;
        case 0x170634u: goto label_170634;
        case 0x170638u: goto label_170638;
        case 0x17063cu: goto label_17063c;
        case 0x170640u: goto label_170640;
        case 0x170644u: goto label_170644;
        case 0x170648u: goto label_170648;
        case 0x17064cu: goto label_17064c;
        case 0x170650u: goto label_170650;
        case 0x170654u: goto label_170654;
        case 0x170658u: goto label_170658;
        case 0x17065cu: goto label_17065c;
        case 0x170660u: goto label_170660;
        case 0x170664u: goto label_170664;
        case 0x170668u: goto label_170668;
        case 0x17066cu: goto label_17066c;
        case 0x170670u: goto label_170670;
        case 0x170674u: goto label_170674;
        case 0x170678u: goto label_170678;
        case 0x17067cu: goto label_17067c;
        case 0x170680u: goto label_170680;
        case 0x170684u: goto label_170684;
        case 0x170688u: goto label_170688;
        case 0x17068cu: goto label_17068c;
        case 0x170690u: goto label_170690;
        case 0x170694u: goto label_170694;
        case 0x170698u: goto label_170698;
        case 0x17069cu: goto label_17069c;
        case 0x1706a0u: goto label_1706a0;
        case 0x1706a4u: goto label_1706a4;
        case 0x1706a8u: goto label_1706a8;
        case 0x1706acu: goto label_1706ac;
        case 0x1706b0u: goto label_1706b0;
        case 0x1706b4u: goto label_1706b4;
        case 0x1706b8u: goto label_1706b8;
        case 0x1706bcu: goto label_1706bc;
        case 0x1706c0u: goto label_1706c0;
        case 0x1706c4u: goto label_1706c4;
        case 0x1706c8u: goto label_1706c8;
        case 0x1706ccu: goto label_1706cc;
        case 0x1706d0u: goto label_1706d0;
        case 0x1706d4u: goto label_1706d4;
        case 0x1706d8u: goto label_1706d8;
        case 0x1706dcu: goto label_1706dc;
        case 0x1706e0u: goto label_1706e0;
        case 0x1706e4u: goto label_1706e4;
        case 0x1706e8u: goto label_1706e8;
        case 0x1706ecu: goto label_1706ec;
        case 0x1706f0u: goto label_1706f0;
        case 0x1706f4u: goto label_1706f4;
        case 0x1706f8u: goto label_1706f8;
        case 0x1706fcu: goto label_1706fc;
        case 0x170700u: goto label_170700;
        case 0x170704u: goto label_170704;
        case 0x170708u: goto label_170708;
        case 0x17070cu: goto label_17070c;
        case 0x170710u: goto label_170710;
        case 0x170714u: goto label_170714;
        case 0x170718u: goto label_170718;
        case 0x17071cu: goto label_17071c;
        case 0x170720u: goto label_170720;
        case 0x170724u: goto label_170724;
        case 0x170728u: goto label_170728;
        case 0x17072cu: goto label_17072c;
        case 0x170730u: goto label_170730;
        case 0x170734u: goto label_170734;
        case 0x170738u: goto label_170738;
        case 0x17073cu: goto label_17073c;
        case 0x170740u: goto label_170740;
        case 0x170744u: goto label_170744;
        case 0x170748u: goto label_170748;
        case 0x17074cu: goto label_17074c;
        case 0x170750u: goto label_170750;
        case 0x170754u: goto label_170754;
        case 0x170758u: goto label_170758;
        case 0x17075cu: goto label_17075c;
        case 0x170760u: goto label_170760;
        case 0x170764u: goto label_170764;
        case 0x170768u: goto label_170768;
        case 0x17076cu: goto label_17076c;
        case 0x170770u: goto label_170770;
        case 0x170774u: goto label_170774;
        case 0x170778u: goto label_170778;
        case 0x17077cu: goto label_17077c;
        case 0x170780u: goto label_170780;
        case 0x170784u: goto label_170784;
        case 0x170788u: goto label_170788;
        case 0x17078cu: goto label_17078c;
        case 0x170790u: goto label_170790;
        case 0x170794u: goto label_170794;
        case 0x170798u: goto label_170798;
        case 0x17079cu: goto label_17079c;
        case 0x1707a0u: goto label_1707a0;
        case 0x1707a4u: goto label_1707a4;
        case 0x1707a8u: goto label_1707a8;
        case 0x1707acu: goto label_1707ac;
        case 0x1707b0u: goto label_1707b0;
        case 0x1707b4u: goto label_1707b4;
        case 0x1707b8u: goto label_1707b8;
        case 0x1707bcu: goto label_1707bc;
        case 0x1707c0u: goto label_1707c0;
        case 0x1707c4u: goto label_1707c4;
        case 0x1707c8u: goto label_1707c8;
        case 0x1707ccu: goto label_1707cc;
        case 0x1707d0u: goto label_1707d0;
        case 0x1707d4u: goto label_1707d4;
        case 0x1707d8u: goto label_1707d8;
        case 0x1707dcu: goto label_1707dc;
        case 0x1707e0u: goto label_1707e0;
        case 0x1707e4u: goto label_1707e4;
        case 0x1707e8u: goto label_1707e8;
        case 0x1707ecu: goto label_1707ec;
        case 0x1707f0u: goto label_1707f0;
        case 0x1707f4u: goto label_1707f4;
        case 0x1707f8u: goto label_1707f8;
        case 0x1707fcu: goto label_1707fc;
        case 0x170800u: goto label_170800;
        case 0x170804u: goto label_170804;
        case 0x170808u: goto label_170808;
        case 0x17080cu: goto label_17080c;
        case 0x170810u: goto label_170810;
        case 0x170814u: goto label_170814;
        case 0x170818u: goto label_170818;
        case 0x17081cu: goto label_17081c;
        case 0x170820u: goto label_170820;
        case 0x170824u: goto label_170824;
        case 0x170828u: goto label_170828;
        case 0x17082cu: goto label_17082c;
        case 0x170830u: goto label_170830;
        case 0x170834u: goto label_170834;
        case 0x170838u: goto label_170838;
        case 0x17083cu: goto label_17083c;
        case 0x170840u: goto label_170840;
        case 0x170844u: goto label_170844;
        case 0x170848u: goto label_170848;
        case 0x17084cu: goto label_17084c;
        case 0x170850u: goto label_170850;
        case 0x170854u: goto label_170854;
        case 0x170858u: goto label_170858;
        case 0x17085cu: goto label_17085c;
        case 0x170860u: goto label_170860;
        case 0x170864u: goto label_170864;
        case 0x170868u: goto label_170868;
        case 0x17086cu: goto label_17086c;
        case 0x170870u: goto label_170870;
        case 0x170874u: goto label_170874;
        case 0x170878u: goto label_170878;
        case 0x17087cu: goto label_17087c;
        case 0x170880u: goto label_170880;
        case 0x170884u: goto label_170884;
        case 0x170888u: goto label_170888;
        case 0x17088cu: goto label_17088c;
        case 0x170890u: goto label_170890;
        case 0x170894u: goto label_170894;
        case 0x170898u: goto label_170898;
        case 0x17089cu: goto label_17089c;
        case 0x1708a0u: goto label_1708a0;
        case 0x1708a4u: goto label_1708a4;
        case 0x1708a8u: goto label_1708a8;
        case 0x1708acu: goto label_1708ac;
        case 0x1708b0u: goto label_1708b0;
        case 0x1708b4u: goto label_1708b4;
        case 0x1708b8u: goto label_1708b8;
        case 0x1708bcu: goto label_1708bc;
        case 0x1708c0u: goto label_1708c0;
        case 0x1708c4u: goto label_1708c4;
        case 0x1708c8u: goto label_1708c8;
        case 0x1708ccu: goto label_1708cc;
        case 0x1708d0u: goto label_1708d0;
        case 0x1708d4u: goto label_1708d4;
        case 0x1708d8u: goto label_1708d8;
        case 0x1708dcu: goto label_1708dc;
        case 0x1708e0u: goto label_1708e0;
        case 0x1708e4u: goto label_1708e4;
        case 0x1708e8u: goto label_1708e8;
        case 0x1708ecu: goto label_1708ec;
        case 0x1708f0u: goto label_1708f0;
        case 0x1708f4u: goto label_1708f4;
        case 0x1708f8u: goto label_1708f8;
        case 0x1708fcu: goto label_1708fc;
        case 0x170900u: goto label_170900;
        case 0x170904u: goto label_170904;
        case 0x170908u: goto label_170908;
        case 0x17090cu: goto label_17090c;
        case 0x170910u: goto label_170910;
        case 0x170914u: goto label_170914;
        case 0x170918u: goto label_170918;
        case 0x17091cu: goto label_17091c;
        case 0x170920u: goto label_170920;
        case 0x170924u: goto label_170924;
        case 0x170928u: goto label_170928;
        case 0x17092cu: goto label_17092c;
        case 0x170930u: goto label_170930;
        case 0x170934u: goto label_170934;
        case 0x170938u: goto label_170938;
        case 0x17093cu: goto label_17093c;
        case 0x170940u: goto label_170940;
        case 0x170944u: goto label_170944;
        case 0x170948u: goto label_170948;
        case 0x17094cu: goto label_17094c;
        case 0x170950u: goto label_170950;
        case 0x170954u: goto label_170954;
        case 0x170958u: goto label_170958;
        case 0x17095cu: goto label_17095c;
        case 0x170960u: goto label_170960;
        case 0x170964u: goto label_170964;
        case 0x170968u: goto label_170968;
        case 0x17096cu: goto label_17096c;
        case 0x170970u: goto label_170970;
        case 0x170974u: goto label_170974;
        case 0x170978u: goto label_170978;
        case 0x17097cu: goto label_17097c;
        case 0x170980u: goto label_170980;
        case 0x170984u: goto label_170984;
        case 0x170988u: goto label_170988;
        case 0x17098cu: goto label_17098c;
        case 0x170990u: goto label_170990;
        case 0x170994u: goto label_170994;
        case 0x170998u: goto label_170998;
        case 0x17099cu: goto label_17099c;
        case 0x1709a0u: goto label_1709a0;
        case 0x1709a4u: goto label_1709a4;
        case 0x1709a8u: goto label_1709a8;
        case 0x1709acu: goto label_1709ac;
        case 0x1709b0u: goto label_1709b0;
        case 0x1709b4u: goto label_1709b4;
        case 0x1709b8u: goto label_1709b8;
        case 0x1709bcu: goto label_1709bc;
        case 0x1709c0u: goto label_1709c0;
        case 0x1709c4u: goto label_1709c4;
        case 0x1709c8u: goto label_1709c8;
        case 0x1709ccu: goto label_1709cc;
        case 0x1709d0u: goto label_1709d0;
        case 0x1709d4u: goto label_1709d4;
        case 0x1709d8u: goto label_1709d8;
        case 0x1709dcu: goto label_1709dc;
        case 0x1709e0u: goto label_1709e0;
        case 0x1709e4u: goto label_1709e4;
        case 0x1709e8u: goto label_1709e8;
        case 0x1709ecu: goto label_1709ec;
        case 0x1709f0u: goto label_1709f0;
        case 0x1709f4u: goto label_1709f4;
        case 0x1709f8u: goto label_1709f8;
        case 0x1709fcu: goto label_1709fc;
        case 0x170a00u: goto label_170a00;
        case 0x170a04u: goto label_170a04;
        case 0x170a08u: goto label_170a08;
        case 0x170a0cu: goto label_170a0c;
        case 0x170a10u: goto label_170a10;
        case 0x170a14u: goto label_170a14;
        case 0x170a18u: goto label_170a18;
        case 0x170a1cu: goto label_170a1c;
        case 0x170a20u: goto label_170a20;
        case 0x170a24u: goto label_170a24;
        case 0x170a28u: goto label_170a28;
        case 0x170a2cu: goto label_170a2c;
        case 0x170a30u: goto label_170a30;
        case 0x170a34u: goto label_170a34;
        case 0x170a38u: goto label_170a38;
        case 0x170a3cu: goto label_170a3c;
        case 0x170a40u: goto label_170a40;
        case 0x170a44u: goto label_170a44;
        case 0x170a48u: goto label_170a48;
        case 0x170a4cu: goto label_170a4c;
        case 0x170a50u: goto label_170a50;
        case 0x170a54u: goto label_170a54;
        case 0x170a58u: goto label_170a58;
        case 0x170a5cu: goto label_170a5c;
        case 0x170a60u: goto label_170a60;
        case 0x170a64u: goto label_170a64;
        case 0x170a68u: goto label_170a68;
        case 0x170a6cu: goto label_170a6c;
        case 0x170a70u: goto label_170a70;
        case 0x170a74u: goto label_170a74;
        case 0x170a78u: goto label_170a78;
        case 0x170a7cu: goto label_170a7c;
        case 0x170a80u: goto label_170a80;
        case 0x170a84u: goto label_170a84;
        case 0x170a88u: goto label_170a88;
        case 0x170a8cu: goto label_170a8c;
        case 0x170a90u: goto label_170a90;
        case 0x170a94u: goto label_170a94;
        case 0x170a98u: goto label_170a98;
        case 0x170a9cu: goto label_170a9c;
        case 0x170aa0u: goto label_170aa0;
        case 0x170aa4u: goto label_170aa4;
        case 0x170aa8u: goto label_170aa8;
        case 0x170aacu: goto label_170aac;
        case 0x170ab0u: goto label_170ab0;
        case 0x170ab4u: goto label_170ab4;
        case 0x170ab8u: goto label_170ab8;
        case 0x170abcu: goto label_170abc;
        case 0x170ac0u: goto label_170ac0;
        case 0x170ac4u: goto label_170ac4;
        case 0x170ac8u: goto label_170ac8;
        case 0x170accu: goto label_170acc;
        case 0x170ad0u: goto label_170ad0;
        case 0x170ad4u: goto label_170ad4;
        case 0x170ad8u: goto label_170ad8;
        case 0x170adcu: goto label_170adc;
        case 0x170ae0u: goto label_170ae0;
        case 0x170ae4u: goto label_170ae4;
        case 0x170ae8u: goto label_170ae8;
        case 0x170aecu: goto label_170aec;
        case 0x170af0u: goto label_170af0;
        case 0x170af4u: goto label_170af4;
        case 0x170af8u: goto label_170af8;
        case 0x170afcu: goto label_170afc;
        case 0x170b00u: goto label_170b00;
        case 0x170b04u: goto label_170b04;
        case 0x170b08u: goto label_170b08;
        case 0x170b0cu: goto label_170b0c;
        case 0x170b10u: goto label_170b10;
        case 0x170b14u: goto label_170b14;
        case 0x170b18u: goto label_170b18;
        case 0x170b1cu: goto label_170b1c;
        case 0x170b20u: goto label_170b20;
        case 0x170b24u: goto label_170b24;
        case 0x170b28u: goto label_170b28;
        case 0x170b2cu: goto label_170b2c;
        default: break;
    }

    ctx->pc = 0x170120u;

label_170120:
    // 0x170120: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x170120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_170124:
    // 0x170124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x170124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_170128:
    // 0x170128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x170128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17012c:
    // 0x17012c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17012cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_170130:
    // 0x170130: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x170130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
label_170134:
    // 0x170134: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x170134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_170138:
    // 0x170138: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_17013c:
    // 0x17013c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17013cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_170140:
    // 0x170140: 0x24a54570  addiu       $a1, $a1, 0x4570
    ctx->pc = 0x170140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17776));
label_170144:
    // 0x170144: 0xc0552e4  jal         func_154B90
label_170148:
    if (ctx->pc == 0x170148u) {
        ctx->pc = 0x17014Cu;
        goto label_17014c;
    }
    ctx->pc = 0x170144u;
    SET_GPR_U32(ctx, 31, 0x17014Cu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x170144u, 0x17014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17014Cu;
label_17014c:
    // 0x17014c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17014cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170150:
    // 0x170150: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x170150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_170154:
    // 0x170154: 0x8c6600c4  lw          $a2, 0xC4($v1)
    ctx->pc = 0x170154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_170158:
    // 0x170158: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x170158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17015c:
    // 0x17015c: 0xc0552dc  jal         func_154B70
label_170160:
    if (ctx->pc == 0x170160u) {
        ctx->pc = 0x170164u;
        goto label_170164;
    }
    ctx->pc = 0x17015Cu;
    SET_GPR_U32(ctx, 31, 0x170164u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x17015Cu, 0x170164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170164u;
label_170164:
    // 0x170164: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x170164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_170168:
    // 0x170168: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17016c:
    // 0x17016c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17016cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_170170:
    // 0x170170: 0x24660050  addiu       $a2, $v1, 0x50
    ctx->pc = 0x170170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_170174:
    // 0x170174: 0xc08c6c8  jal         func_231B20
label_170178:
    if (ctx->pc == 0x170178u) {
        ctx->pc = 0x17017Cu;
        goto label_17017c;
    }
    ctx->pc = 0x170174u;
    SET_GPR_U32(ctx, 31, 0x17017Cu);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x170174u, 0x17017Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17017Cu;
label_17017c:
    // 0x17017c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17017cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_170180:
    // 0x170180: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_170184:
    // 0x170184: 0xc0552dc  jal         func_154B70
label_170188:
    if (ctx->pc == 0x170188u) {
        ctx->pc = 0x17018Cu;
        goto label_17018c;
    }
    ctx->pc = 0x170184u;
    SET_GPR_U32(ctx, 31, 0x17018Cu);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x170184u, 0x17018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17018Cu;
label_17018c:
    // 0x17018c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17018cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170190:
    // 0x170190: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x170190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_170194:
    // 0x170194: 0xc08c910  jal         func_232440
label_170198:
    if (ctx->pc == 0x170198u) {
        ctx->pc = 0x17019Cu;
        goto label_17019c;
    }
    ctx->pc = 0x170194u;
    SET_GPR_U32(ctx, 31, 0x17019Cu);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x170194u, 0x17019Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17019Cu;
label_17019c:
    // 0x17019c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17019cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1701a0:
    // 0x1701a0: 0x0  nop
    ctx->pc = 0x1701a0u;
    // NOP
label_1701a4:
    // 0x1701a4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1701a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1701a8:
    // 0x1701a8: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1701a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1701ac:
    // 0x1701ac: 0xc7808280  lwc1        $f0, -0x7D80($gp)
    ctx->pc = 0x1701acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1701b0:
    // 0x1701b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1701b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1701b4:
    // 0x1701b4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1701b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1701b8:
    // 0x1701b8: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x1701b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1701bc:
    // 0x1701bc: 0x8ce800c4  lw          $t0, 0xC4($a3)
    ctx->pc = 0x1701bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
label_1701c0:
    // 0x1701c0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1701c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1701c4:
    // 0x1701c4: 0x3c09004e  lui         $t1, 0x4E
    ctx->pc = 0x1701c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)78 << 16));
label_1701c8:
    // 0x1701c8: 0x25294588  addiu       $t1, $t1, 0x4588
    ctx->pc = 0x1701c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 17800));
label_1701cc:
    // 0x1701cc: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1701ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1701d0:
    // 0x1701d0: 0xc05621c  jal         func_158870
label_1701d4:
    if (ctx->pc == 0x1701D4u) {
        ctx->pc = 0x1701D8u;
        goto label_1701d8;
    }
    ctx->pc = 0x1701D0u;
    SET_GPR_U32(ctx, 31, 0x1701D8u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x1701D0u, 0x1701D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1701D8u;
label_1701d8:
    // 0x1701d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1701d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1701dc:
    // 0x1701dc: 0x12000074  beqz        $s0, . + 4 + (0x74 << 2)
label_1701e0:
    if (ctx->pc == 0x1701E0u) {
        ctx->pc = 0x1701E4u;
        goto label_1701e4;
    }
    ctx->pc = 0x1701DCu;
    {
        const bool branch_taken_0x1701dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1701dc) {
            ctx->pc = 0x1703B0u;
            goto label_1703b0;
        }
    }
    ctx->pc = 0x1701E4u;
label_1701e4:
    // 0x1701e4: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x1701e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1701e8:
    // 0x1701e8: 0xc0495d4  jal         func_125750
label_1701ec:
    if (ctx->pc == 0x1701ECu) {
        ctx->pc = 0x1701F0u;
        goto label_1701f0;
    }
    ctx->pc = 0x1701E8u;
    SET_GPR_U32(ctx, 31, 0x1701F0u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x1701E8u, 0x1701F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1701F0u;
label_1701f0:
    // 0x1701f0: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x1701f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_1701f4:
    // 0x1701f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1701f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1701f8:
    // 0x1701f8: 0x8f39008c  lw          $t9, 0x8C($t9)
    ctx->pc = 0x1701f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 140)));
label_1701fc:
    // 0x1701fc: 0x320f809  jalr        $t9
label_170200:
    if (ctx->pc == 0x170200u) {
        ctx->pc = 0x170204u;
        goto label_170204;
    }
    ctx->pc = 0x1701FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x170204u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1701FCu, 0x170204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x170204u;
label_170204:
    // 0x170204: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170208:
    // 0x170208: 0xc0986a8  jal         func_261AA0
label_17020c:
    if (ctx->pc == 0x17020Cu) {
        ctx->pc = 0x170210u;
        goto label_170210;
    }
    ctx->pc = 0x170208u;
    SET_GPR_U32(ctx, 31, 0x170210u);
    ctx->pc = 0x261AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261AA0u, 0x170208u, 0x170210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170210u;
label_170210:
    // 0x170210: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x170210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_170214:
    // 0x170214: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x170214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170218:
    // 0x170218: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x170218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_17021c:
    // 0x17021c: 0xc08e514  jal         func_239450
label_170220:
    if (ctx->pc == 0x170220u) {
        ctx->pc = 0x170224u;
        goto label_170224;
    }
    ctx->pc = 0x17021Cu;
    SET_GPR_U32(ctx, 31, 0x170224u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x17021Cu, 0x170224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170224u;
label_170224:
    // 0x170224: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x170224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_170228:
    // 0x170228: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_17022c:
    // 0x17022c: 0xc0552dc  jal         func_154B70
label_170230:
    if (ctx->pc == 0x170230u) {
        ctx->pc = 0x170234u;
        goto label_170234;
    }
    ctx->pc = 0x17022Cu;
    SET_GPR_U32(ctx, 31, 0x170234u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x17022Cu, 0x170234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170234u;
label_170234:
    // 0x170234: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170238:
    // 0x170238: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17023c:
    // 0x17023c: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x17023cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_170240:
    // 0x170240: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x170240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170244:
    // 0x170244: 0xc08c378  jal         func_230DE0
label_170248:
    if (ctx->pc == 0x170248u) {
        ctx->pc = 0x17024Cu;
        goto label_17024c;
    }
    ctx->pc = 0x170244u;
    SET_GPR_U32(ctx, 31, 0x17024Cu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x170244u, 0x17024Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17024Cu;
label_17024c:
    // 0x17024c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17024cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170250:
    // 0x170250: 0x0  nop
    ctx->pc = 0x170250u;
    // NOP
label_170254:
    // 0x170254: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x170254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_170258:
    // 0x170258: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x170258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_17025c:
    // 0x17025c: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x17025cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_170260:
    // 0x170260: 0xc0552dc  jal         func_154B70
label_170264:
    if (ctx->pc == 0x170264u) {
        ctx->pc = 0x170268u;
        goto label_170268;
    }
    ctx->pc = 0x170260u;
    SET_GPR_U32(ctx, 31, 0x170268u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x170260u, 0x170268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170268u;
label_170268:
    // 0x170268: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x170268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17026c:
    // 0x17026c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17026cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_170270:
    // 0x170270: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170274:
    // 0x170274: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170278:
    // 0x170278: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x170278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17027c:
    // 0x17027c: 0x27a700c8  addiu       $a3, $sp, 0xC8
    ctx->pc = 0x17027cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_170280:
    // 0x170280: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170280u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170284:
    // 0x170284: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170284u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170288:
    // 0x170288: 0xc08b9fc  jal         func_22E7F0
label_17028c:
    if (ctx->pc == 0x17028Cu) {
        ctx->pc = 0x170290u;
        goto label_170290;
    }
    ctx->pc = 0x170288u;
    SET_GPR_U32(ctx, 31, 0x170290u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x170288u, 0x170290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170290u;
label_170290:
    // 0x170290: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_170294:
    // 0x170294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170298:
    // 0x170298: 0x0  nop
    ctx->pc = 0x170298u;
    // NOP
label_17029c:
    // 0x17029c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x17029cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1702a0:
    // 0x1702a0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1702a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1702a4:
    // 0x1702a4: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x1702a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1702a8:
    // 0x1702a8: 0xc0552dc  jal         func_154B70
label_1702ac:
    if (ctx->pc == 0x1702ACu) {
        ctx->pc = 0x1702B0u;
        goto label_1702b0;
    }
    ctx->pc = 0x1702A8u;
    SET_GPR_U32(ctx, 31, 0x1702B0u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1702A8u, 0x1702B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1702B0u;
label_1702b0:
    // 0x1702b0: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x1702b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_1702b4:
    // 0x1702b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1702b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1702b8:
    // 0x1702b8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1702b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1702bc:
    // 0x1702bc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1702bcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1702c0:
    // 0x1702c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1702c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1702c4:
    // 0x1702c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1702c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1702c8:
    // 0x1702c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1702c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1702cc:
    // 0x1702cc: 0x27a700c8  addiu       $a3, $sp, 0xC8
    ctx->pc = 0x1702ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_1702d0:
    // 0x1702d0: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x1702d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1702d4:
    // 0x1702d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1702d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1702d8:
    // 0x1702d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1702d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1702dc:
    // 0x1702dc: 0xc08b9fc  jal         func_22E7F0
label_1702e0:
    if (ctx->pc == 0x1702E0u) {
        ctx->pc = 0x1702E4u;
        goto label_1702e4;
    }
    ctx->pc = 0x1702DCu;
    SET_GPR_U32(ctx, 31, 0x1702E4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1702DCu, 0x1702E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1702E4u;
label_1702e4:
    // 0x1702e4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1702e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1702e8:
    // 0x1702e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1702e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1702ec:
    // 0x1702ec: 0x0  nop
    ctx->pc = 0x1702ecu;
    // NOP
label_1702f0:
    // 0x1702f0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1702f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1702f4:
    // 0x1702f4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1702f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1702f8:
    // 0x1702f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1702f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1702fc:
    // 0x1702fc: 0x0  nop
    ctx->pc = 0x1702fcu;
    // NOP
label_170300:
    // 0x170300: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x170300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_170304:
    // 0x170304: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x170304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_170308:
    // 0x170308: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_17030c:
    // 0x17030c: 0xc0552dc  jal         func_154B70
label_170310:
    if (ctx->pc == 0x170310u) {
        ctx->pc = 0x170314u;
        goto label_170314;
    }
    ctx->pc = 0x17030Cu;
    SET_GPR_U32(ctx, 31, 0x170314u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x17030Cu, 0x170314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170314u;
label_170314:
    // 0x170314: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x170314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_170318:
    // 0x170318: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x170318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_17031c:
    // 0x17031c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17031cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170320:
    // 0x170320: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170324:
    // 0x170324: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x170324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170328:
    // 0x170328: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x170328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_17032c:
    // 0x17032c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17032cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170330:
    // 0x170330: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170330u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170334:
    // 0x170334: 0xc08b9fc  jal         func_22E7F0
label_170338:
    if (ctx->pc == 0x170338u) {
        ctx->pc = 0x17033Cu;
        goto label_17033c;
    }
    ctx->pc = 0x170334u;
    SET_GPR_U32(ctx, 31, 0x17033Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x170334u, 0x17033Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17033Cu;
label_17033c:
    // 0x17033c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17033cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_170340:
    // 0x170340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170344:
    // 0x170344: 0x0  nop
    ctx->pc = 0x170344u;
    // NOP
label_170348:
    // 0x170348: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x170348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_17034c:
    // 0x17034c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17034cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_170350:
    // 0x170350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170354:
    // 0x170354: 0x0  nop
    ctx->pc = 0x170354u;
    // NOP
label_170358:
    // 0x170358: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x170358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_17035c:
    // 0x17035c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17035cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_170360:
    // 0x170360: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_170364:
    // 0x170364: 0xc0552dc  jal         func_154B70
label_170368:
    if (ctx->pc == 0x170368u) {
        ctx->pc = 0x17036Cu;
        goto label_17036c;
    }
    ctx->pc = 0x170364u;
    SET_GPR_U32(ctx, 31, 0x17036Cu);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x170364u, 0x17036Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17036Cu;
label_17036c:
    // 0x17036c: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x17036cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_170370:
    // 0x170370: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x170370u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_170374:
    // 0x170374: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x170374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170378:
    // 0x170378: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x170378u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_17037c:
    // 0x17037c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17037cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170380:
    // 0x170380: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170384:
    // 0x170384: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x170384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170388:
    // 0x170388: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x170388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_17038c:
    // 0x17038c: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x17038cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_170390:
    // 0x170390: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170390u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170394:
    // 0x170394: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170394u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170398:
    // 0x170398: 0xc08b9fc  jal         func_22E7F0
label_17039c:
    if (ctx->pc == 0x17039Cu) {
        ctx->pc = 0x1703A0u;
        goto label_1703a0;
    }
    ctx->pc = 0x170398u;
    SET_GPR_U32(ctx, 31, 0x1703A0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x170398u, 0x1703A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1703A0u;
label_1703a0:
    // 0x1703a0: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x1703a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1703a4:
    // 0x1703a4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1703a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1703a8:
    // 0x1703a8: 0xc0406a0  jal         func_101A80
label_1703ac:
    if (ctx->pc == 0x1703ACu) {
        ctx->pc = 0x1703B0u;
        goto label_1703b0;
    }
    ctx->pc = 0x1703A8u;
    SET_GPR_U32(ctx, 31, 0x1703B0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1703A8u, 0x1703B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1703B0u;
label_1703b0:
    // 0x1703b0: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1703b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1703b4:
    // 0x1703b4: 0xc7808280  lwc1        $f0, -0x7D80($gp)
    ctx->pc = 0x1703b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1703b8:
    // 0x1703b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1703b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1703bc:
    // 0x1703bc: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1703bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1703c0:
    // 0x1703c0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1703c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1703c4:
    // 0x1703c4: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x1703c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1703c8:
    // 0x1703c8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1703c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1703cc:
    // 0x1703cc: 0x24a54598  addiu       $a1, $a1, 0x4598
    ctx->pc = 0x1703ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17816));
label_1703d0:
    // 0x1703d0: 0xc05621c  jal         func_158870
label_1703d4:
    if (ctx->pc == 0x1703D4u) {
        ctx->pc = 0x1703D8u;
        goto label_1703d8;
    }
    ctx->pc = 0x1703D0u;
    SET_GPR_U32(ctx, 31, 0x1703D8u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x1703D0u, 0x1703D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1703D8u;
label_1703d8:
    // 0x1703d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1703d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1703dc:
    // 0x1703dc: 0x12000090  beqz        $s0, . + 4 + (0x90 << 2)
label_1703e0:
    if (ctx->pc == 0x1703E0u) {
        ctx->pc = 0x1703E4u;
        goto label_1703e4;
    }
    ctx->pc = 0x1703DCu;
    {
        const bool branch_taken_0x1703dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1703dc) {
            ctx->pc = 0x170620u;
            goto label_170620;
        }
    }
    ctx->pc = 0x1703E4u;
label_1703e4:
    // 0x1703e4: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1703e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1703e8:
    // 0x1703e8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1703e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1703ec:
    // 0x1703ec: 0x24a545a8  addiu       $a1, $a1, 0x45A8
    ctx->pc = 0x1703ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17832));
label_1703f0:
    // 0x1703f0: 0xc08e57c  jal         func_2395F0
label_1703f4:
    if (ctx->pc == 0x1703F4u) {
        ctx->pc = 0x1703F8u;
        goto label_1703f8;
    }
    ctx->pc = 0x1703F0u;
    SET_GPR_U32(ctx, 31, 0x1703F8u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1703F0u, 0x1703F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1703F8u;
label_1703f8:
    // 0x1703f8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1703f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1703fc:
    // 0x1703fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1703fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170400:
    // 0x170400: 0xc0406d0  jal         func_101B40
label_170404:
    if (ctx->pc == 0x170404u) {
        ctx->pc = 0x170408u;
        goto label_170408;
    }
    ctx->pc = 0x170400u;
    SET_GPR_U32(ctx, 31, 0x170408u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x170400u, 0x170408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170408u;
label_170408:
    // 0x170408: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x170408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_17040c:
    // 0x17040c: 0x27859028  addiu       $a1, $gp, -0x6FD8
    ctx->pc = 0x17040cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938664));
label_170410:
    // 0x170410: 0xc040304  jal         func_100C10
label_170414:
    if (ctx->pc == 0x170414u) {
        ctx->pc = 0x170418u;
        goto label_170418;
    }
    ctx->pc = 0x170410u;
    SET_GPR_U32(ctx, 31, 0x170418u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x170410u, 0x170418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170418u;
label_170418:
    // 0x170418: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x170418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_17041c:
    // 0x17041c: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x17041cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_170420:
    // 0x170420: 0xc119568  jal         func_4655A0
label_170424:
    if (ctx->pc == 0x170424u) {
        ctx->pc = 0x170428u;
        goto label_170428;
    }
    ctx->pc = 0x170420u;
    SET_GPR_U32(ctx, 31, 0x170428u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x170420u, 0x170428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170428u;
label_170428:
    // 0x170428: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x170428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_17042c:
    // 0x17042c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17042cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_170430:
    // 0x170430: 0xc0402d4  jal         func_100B50
label_170434:
    if (ctx->pc == 0x170434u) {
        ctx->pc = 0x170438u;
        goto label_170438;
    }
    ctx->pc = 0x170430u;
    SET_GPR_U32(ctx, 31, 0x170438u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x170430u, 0x170438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170438u;
label_170438:
    // 0x170438: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x170438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_17043c:
    // 0x17043c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17043cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_170440:
    // 0x170440: 0x8f390088  lw          $t9, 0x88($t9)
    ctx->pc = 0x170440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 136)));
label_170444:
    // 0x170444: 0x320f809  jalr        $t9
label_170448:
    if (ctx->pc == 0x170448u) {
        ctx->pc = 0x17044Cu;
        goto label_17044c;
    }
    ctx->pc = 0x170444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17044Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170444u, 0x17044Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17044Cu;
label_17044c:
    // 0x17044c: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x17044cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_170450:
    // 0x170450: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x170450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170454:
    // 0x170454: 0xc0406d0  jal         func_101B40
label_170458:
    if (ctx->pc == 0x170458u) {
        ctx->pc = 0x17045Cu;
        goto label_17045c;
    }
    ctx->pc = 0x170454u;
    SET_GPR_U32(ctx, 31, 0x17045Cu);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x170454u, 0x17045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17045Cu;
label_17045c:
    // 0x17045c: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x17045cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_170460:
    // 0x170460: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x170460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_170464:
    // 0x170464: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x170464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_170468:
    // 0x170468: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x170468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_17046c:
    // 0x17046c: 0xc08e608  jal         func_239820
label_170470:
    if (ctx->pc == 0x170470u) {
        ctx->pc = 0x170474u;
        goto label_170474;
    }
    ctx->pc = 0x17046Cu;
    SET_GPR_U32(ctx, 31, 0x170474u);
    ctx->pc = 0x239820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239820u, 0x17046Cu, 0x170474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170474u;
label_170474:
    // 0x170474: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x170474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_170478:
    // 0x170478: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x170478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17047c:
    // 0x17047c: 0xc0406a0  jal         func_101A80
label_170480:
    if (ctx->pc == 0x170480u) {
        ctx->pc = 0x170484u;
        goto label_170484;
    }
    ctx->pc = 0x17047Cu;
    SET_GPR_U32(ctx, 31, 0x170484u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x17047Cu, 0x170484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170484u;
label_170484:
    // 0x170484: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x170484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_170488:
    // 0x170488: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_17048c:
    // 0x17048c: 0xc0552dc  jal         func_154B70
label_170490:
    if (ctx->pc == 0x170490u) {
        ctx->pc = 0x170494u;
        goto label_170494;
    }
    ctx->pc = 0x17048Cu;
    SET_GPR_U32(ctx, 31, 0x170494u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x17048Cu, 0x170494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170494u;
label_170494:
    // 0x170494: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170498:
    // 0x170498: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17049c:
    // 0x17049c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x17049cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1704a0:
    // 0x1704a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1704a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1704a4:
    // 0x1704a4: 0xc08c378  jal         func_230DE0
label_1704a8:
    if (ctx->pc == 0x1704A8u) {
        ctx->pc = 0x1704ACu;
        goto label_1704ac;
    }
    ctx->pc = 0x1704A4u;
    SET_GPR_U32(ctx, 31, 0x1704ACu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x1704A4u, 0x1704ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1704ACu;
label_1704ac:
    // 0x1704ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1704acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1704b0:
    // 0x1704b0: 0x0  nop
    ctx->pc = 0x1704b0u;
    // NOP
label_1704b4:
    // 0x1704b4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1704b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1704b8:
    // 0x1704b8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1704b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1704bc:
    // 0x1704bc: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x1704bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1704c0:
    // 0x1704c0: 0xc0552dc  jal         func_154B70
label_1704c4:
    if (ctx->pc == 0x1704C4u) {
        ctx->pc = 0x1704C8u;
        goto label_1704c8;
    }
    ctx->pc = 0x1704C0u;
    SET_GPR_U32(ctx, 31, 0x1704C8u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1704C0u, 0x1704C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1704C8u;
label_1704c8:
    // 0x1704c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1704c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1704cc:
    // 0x1704cc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1704ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1704d0:
    // 0x1704d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1704d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1704d4:
    // 0x1704d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1704d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1704d8:
    // 0x1704d8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1704d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1704dc:
    // 0x1704dc: 0x27a700c4  addiu       $a3, $sp, 0xC4
    ctx->pc = 0x1704dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_1704e0:
    // 0x1704e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1704e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1704e4:
    // 0x1704e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1704e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1704e8:
    // 0x1704e8: 0xc08b9fc  jal         func_22E7F0
label_1704ec:
    if (ctx->pc == 0x1704ECu) {
        ctx->pc = 0x1704F0u;
        goto label_1704f0;
    }
    ctx->pc = 0x1704E8u;
    SET_GPR_U32(ctx, 31, 0x1704F0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1704E8u, 0x1704F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1704F0u;
label_1704f0:
    // 0x1704f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1704f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1704f4:
    // 0x1704f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1704f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1704f8:
    // 0x1704f8: 0x0  nop
    ctx->pc = 0x1704f8u;
    // NOP
label_1704fc:
    // 0x1704fc: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1704fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_170500:
    // 0x170500: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x170500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_170504:
    // 0x170504: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_170508:
    // 0x170508: 0xc0552dc  jal         func_154B70
label_17050c:
    if (ctx->pc == 0x17050Cu) {
        ctx->pc = 0x170510u;
        goto label_170510;
    }
    ctx->pc = 0x170508u;
    SET_GPR_U32(ctx, 31, 0x170510u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x170508u, 0x170510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170510u;
label_170510:
    // 0x170510: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x170510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_170514:
    // 0x170514: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x170514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_170518:
    // 0x170518: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x170518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17051c:
    // 0x17051c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x17051cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_170520:
    // 0x170520: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170524:
    // 0x170524: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170528:
    // 0x170528: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x170528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17052c:
    // 0x17052c: 0x27a700c4  addiu       $a3, $sp, 0xC4
    ctx->pc = 0x17052cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_170530:
    // 0x170530: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x170530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_170534:
    // 0x170534: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170538:
    // 0x170538: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170538u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17053c:
    // 0x17053c: 0xc08b9fc  jal         func_22E7F0
label_170540:
    if (ctx->pc == 0x170540u) {
        ctx->pc = 0x170544u;
        goto label_170544;
    }
    ctx->pc = 0x17053Cu;
    SET_GPR_U32(ctx, 31, 0x170544u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17053Cu, 0x170544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170544u;
label_170544:
    // 0x170544: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x170544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_170548:
    // 0x170548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17054c:
    // 0x17054c: 0x0  nop
    ctx->pc = 0x17054cu;
    // NOP
label_170550:
    // 0x170550: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x170550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_170554:
    // 0x170554: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x170554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_170558:
    // 0x170558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17055c:
    // 0x17055c: 0x0  nop
    ctx->pc = 0x17055cu;
    // NOP
label_170560:
    // 0x170560: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x170560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_170564:
    // 0x170564: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x170564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_170568:
    // 0x170568: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_17056c:
    // 0x17056c: 0xc0552dc  jal         func_154B70
label_170570:
    if (ctx->pc == 0x170570u) {
        ctx->pc = 0x170574u;
        goto label_170574;
    }
    ctx->pc = 0x17056Cu;
    SET_GPR_U32(ctx, 31, 0x170574u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x17056Cu, 0x170574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170574u;
label_170574:
    // 0x170574: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x170574u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_170578:
    // 0x170578: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x170578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_17057c:
    // 0x17057c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17057cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170580:
    // 0x170580: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170584:
    // 0x170584: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x170584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170588:
    // 0x170588: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x170588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_17058c:
    // 0x17058c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17058cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170590:
    // 0x170590: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170590u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170594:
    // 0x170594: 0xc08b9fc  jal         func_22E7F0
label_170598:
    if (ctx->pc == 0x170598u) {
        ctx->pc = 0x17059Cu;
        goto label_17059c;
    }
    ctx->pc = 0x170594u;
    SET_GPR_U32(ctx, 31, 0x17059Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x170594u, 0x17059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17059Cu;
label_17059c:
    // 0x17059c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17059cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1705a0:
    // 0x1705a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1705a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1705a4:
    // 0x1705a4: 0x0  nop
    ctx->pc = 0x1705a4u;
    // NOP
label_1705a8:
    // 0x1705a8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1705a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1705ac:
    // 0x1705ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1705acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1705b0:
    // 0x1705b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1705b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1705b4:
    // 0x1705b4: 0x0  nop
    ctx->pc = 0x1705b4u;
    // NOP
label_1705b8:
    // 0x1705b8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1705b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_1705bc:
    // 0x1705bc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1705bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1705c0:
    // 0x1705c0: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x1705c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1705c4:
    // 0x1705c4: 0xc0552dc  jal         func_154B70
label_1705c8:
    if (ctx->pc == 0x1705C8u) {
        ctx->pc = 0x1705CCu;
        goto label_1705cc;
    }
    ctx->pc = 0x1705C4u;
    SET_GPR_U32(ctx, 31, 0x1705CCu);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1705C4u, 0x1705CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1705CCu;
label_1705cc:
    // 0x1705cc: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x1705ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_1705d0:
    // 0x1705d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1705d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1705d4:
    // 0x1705d4: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1705d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1705d8:
    // 0x1705d8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1705d8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1705dc:
    // 0x1705dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1705dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1705e0:
    // 0x1705e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1705e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1705e4:
    // 0x1705e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1705e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1705e8:
    // 0x1705e8: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x1705e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1705ec:
    // 0x1705ec: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x1705ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1705f0:
    // 0x1705f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1705f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1705f4:
    // 0x1705f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1705f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1705f8:
    // 0x1705f8: 0xc08b9fc  jal         func_22E7F0
label_1705fc:
    if (ctx->pc == 0x1705FCu) {
        ctx->pc = 0x170600u;
        goto label_170600;
    }
    ctx->pc = 0x1705F8u;
    SET_GPR_U32(ctx, 31, 0x170600u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1705F8u, 0x170600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170600u;
label_170600:
    // 0x170600: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x170600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_170604:
    // 0x170604: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x170604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_170608:
    // 0x170608: 0xc0406a0  jal         func_101A80
label_17060c:
    if (ctx->pc == 0x17060Cu) {
        ctx->pc = 0x170610u;
        goto label_170610;
    }
    ctx->pc = 0x170608u;
    SET_GPR_U32(ctx, 31, 0x170610u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x170608u, 0x170610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170610u;
label_170610:
    // 0x170610: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x170610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_170614:
    // 0x170614: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x170614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_170618:
    // 0x170618: 0xc0406a0  jal         func_101A80
label_17061c:
    if (ctx->pc == 0x17061Cu) {
        ctx->pc = 0x170620u;
        goto label_170620;
    }
    ctx->pc = 0x170618u;
    SET_GPR_U32(ctx, 31, 0x170620u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x170618u, 0x170620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170620u;
label_170620:
    // 0x170620: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x170620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_170624:
    // 0x170624: 0xc7808280  lwc1        $f0, -0x7D80($gp)
    ctx->pc = 0x170624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170628:
    // 0x170628: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x170628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_17062c:
    // 0x17062c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x17062cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_170630:
    // 0x170630: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x170630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_170634:
    // 0x170634: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_170638:
    // 0x170638: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x170638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_17063c:
    // 0x17063c: 0x24a545b8  addiu       $a1, $a1, 0x45B8
    ctx->pc = 0x17063cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17848));
label_170640:
    // 0x170640: 0xc05621c  jal         func_158870
label_170644:
    if (ctx->pc == 0x170644u) {
        ctx->pc = 0x170648u;
        goto label_170648;
    }
    ctx->pc = 0x170640u;
    SET_GPR_U32(ctx, 31, 0x170648u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x170640u, 0x170648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170648u;
label_170648:
    // 0x170648: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x170648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17064c:
    // 0x17064c: 0x12000056  beqz        $s0, . + 4 + (0x56 << 2)
label_170650:
    if (ctx->pc == 0x170650u) {
        ctx->pc = 0x170654u;
        goto label_170654;
    }
    ctx->pc = 0x17064Cu;
    {
        const bool branch_taken_0x17064c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17064c) {
            ctx->pc = 0x1707A8u;
            goto label_1707a8;
        }
    }
    ctx->pc = 0x170654u;
label_170654:
    // 0x170654: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x170654u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170658:
    // 0x170658: 0x0  nop
    ctx->pc = 0x170658u;
    // NOP
label_17065c:
    // 0x17065c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x17065cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_170660:
    // 0x170660: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x170660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_170664:
    // 0x170664: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_170668:
    // 0x170668: 0xc0552dc  jal         func_154B70
label_17066c:
    if (ctx->pc == 0x17066Cu) {
        ctx->pc = 0x170670u;
        goto label_170670;
    }
    ctx->pc = 0x170668u;
    SET_GPR_U32(ctx, 31, 0x170670u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x170668u, 0x170670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170670u;
label_170670:
    // 0x170670: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x170670u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_170674:
    // 0x170674: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x170674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_170678:
    // 0x170678: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17067c:
    // 0x17067c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17067cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170680:
    // 0x170680: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x170680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_170684:
    // 0x170684: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x170684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_170688:
    // 0x170688: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170688u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17068c:
    // 0x17068c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17068cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170690:
    // 0x170690: 0xc08b9fc  jal         func_22E7F0
label_170694:
    if (ctx->pc == 0x170694u) {
        ctx->pc = 0x170698u;
        goto label_170698;
    }
    ctx->pc = 0x170690u;
    SET_GPR_U32(ctx, 31, 0x170698u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x170690u, 0x170698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170698u;
label_170698:
    // 0x170698: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_17069c:
    // 0x17069c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17069cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1706a0:
    // 0x1706a0: 0x0  nop
    ctx->pc = 0x1706a0u;
    // NOP
label_1706a4:
    // 0x1706a4: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1706a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1706a8:
    // 0x1706a8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1706a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1706ac:
    // 0x1706ac: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x1706acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1706b0:
    // 0x1706b0: 0xc0552dc  jal         func_154B70
label_1706b4:
    if (ctx->pc == 0x1706B4u) {
        ctx->pc = 0x1706B8u;
        goto label_1706b8;
    }
    ctx->pc = 0x1706B0u;
    SET_GPR_U32(ctx, 31, 0x1706B8u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1706B0u, 0x1706B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1706B8u;
label_1706b8:
    // 0x1706b8: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x1706b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_1706bc:
    // 0x1706bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1706bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1706c0:
    // 0x1706c0: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1706c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1706c4:
    // 0x1706c4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1706c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1706c8:
    // 0x1706c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1706c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1706cc:
    // 0x1706cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1706ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1706d0:
    // 0x1706d0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1706d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1706d4:
    // 0x1706d4: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x1706d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1706d8:
    // 0x1706d8: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x1706d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1706dc:
    // 0x1706dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1706dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1706e0:
    // 0x1706e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1706e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1706e4:
    // 0x1706e4: 0xc08b9fc  jal         func_22E7F0
label_1706e8:
    if (ctx->pc == 0x1706E8u) {
        ctx->pc = 0x1706ECu;
        goto label_1706ec;
    }
    ctx->pc = 0x1706E4u;
    SET_GPR_U32(ctx, 31, 0x1706ECu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1706E4u, 0x1706ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1706ECu;
label_1706ec:
    // 0x1706ec: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1706ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1706f0:
    // 0x1706f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1706f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1706f4:
    // 0x1706f4: 0x0  nop
    ctx->pc = 0x1706f4u;
    // NOP
label_1706f8:
    // 0x1706f8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1706f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1706fc:
    // 0x1706fc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1706fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_170700:
    // 0x170700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170704:
    // 0x170704: 0x0  nop
    ctx->pc = 0x170704u;
    // NOP
label_170708:
    // 0x170708: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x170708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_17070c:
    // 0x17070c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17070cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_170710:
    // 0x170710: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_170714:
    // 0x170714: 0xc0552dc  jal         func_154B70
label_170718:
    if (ctx->pc == 0x170718u) {
        ctx->pc = 0x17071Cu;
        goto label_17071c;
    }
    ctx->pc = 0x170714u;
    SET_GPR_U32(ctx, 31, 0x17071Cu);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x170714u, 0x17071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17071Cu;
label_17071c:
    // 0x17071c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17071cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_170720:
    // 0x170720: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x170720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_170724:
    // 0x170724: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170728:
    // 0x170728: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17072c:
    // 0x17072c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17072cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170730:
    // 0x170730: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x170730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_170734:
    // 0x170734: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170738:
    // 0x170738: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170738u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17073c:
    // 0x17073c: 0xc08b9fc  jal         func_22E7F0
label_170740:
    if (ctx->pc == 0x170740u) {
        ctx->pc = 0x170744u;
        goto label_170744;
    }
    ctx->pc = 0x17073Cu;
    SET_GPR_U32(ctx, 31, 0x170744u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17073Cu, 0x170744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170744u;
label_170744:
    // 0x170744: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_170748:
    // 0x170748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17074c:
    // 0x17074c: 0x0  nop
    ctx->pc = 0x17074cu;
    // NOP
label_170750:
    // 0x170750: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x170750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_170754:
    // 0x170754: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_170758:
    // 0x170758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17075c:
    // 0x17075c: 0x0  nop
    ctx->pc = 0x17075cu;
    // NOP
label_170760:
    // 0x170760: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x170760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_170764:
    // 0x170764: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x170764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_170768:
    // 0x170768: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_17076c:
    // 0x17076c: 0xc0552dc  jal         func_154B70
label_170770:
    if (ctx->pc == 0x170770u) {
        ctx->pc = 0x170774u;
        goto label_170774;
    }
    ctx->pc = 0x17076Cu;
    SET_GPR_U32(ctx, 31, 0x170774u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x17076Cu, 0x170774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170774u;
label_170774:
    // 0x170774: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x170774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_170778:
    // 0x170778: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x170778u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17077c:
    // 0x17077c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x17077cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170780:
    // 0x170780: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x170780u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_170784:
    // 0x170784: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170788:
    // 0x170788: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17078c:
    // 0x17078c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17078cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170790:
    // 0x170790: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x170790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_170794:
    // 0x170794: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x170794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_170798:
    // 0x170798: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17079c:
    // 0x17079c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17079cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1707a0:
    // 0x1707a0: 0xc08b9fc  jal         func_22E7F0
label_1707a4:
    if (ctx->pc == 0x1707A4u) {
        ctx->pc = 0x1707A8u;
        goto label_1707a8;
    }
    ctx->pc = 0x1707A0u;
    SET_GPR_U32(ctx, 31, 0x1707A8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1707A0u, 0x1707A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1707A8u;
label_1707a8:
    // 0x1707a8: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1707a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1707ac:
    // 0x1707ac: 0xc7808280  lwc1        $f0, -0x7D80($gp)
    ctx->pc = 0x1707acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1707b0:
    // 0x1707b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1707b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1707b4:
    // 0x1707b4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1707b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1707b8:
    // 0x1707b8: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1707b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1707bc:
    // 0x1707bc: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1707bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_1707c0:
    // 0x1707c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1707c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1707c4:
    // 0x1707c4: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1707c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1707c8:
    // 0x1707c8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1707c8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1707cc:
    // 0x1707cc: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x1707ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_1707d0:
    // 0x1707d0: 0x8c6500c4  lw          $a1, 0xC4($v1)
    ctx->pc = 0x1707d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1707d4:
    // 0x1707d4: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x1707d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1707d8:
    // 0x1707d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1707d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1707dc:
    // 0x1707dc: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x1707dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_1707e0:
    // 0x1707e0: 0x320f809  jalr        $t9
label_1707e4:
    if (ctx->pc == 0x1707E4u) {
        ctx->pc = 0x1707E8u;
        goto label_1707e8;
    }
    ctx->pc = 0x1707E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1707E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1707E0u, 0x1707E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1707E8u;
label_1707e8:
    // 0x1707e8: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1707e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1707ec:
    // 0x1707ec: 0xc7808280  lwc1        $f0, -0x7D80($gp)
    ctx->pc = 0x1707ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1707f0:
    // 0x1707f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1707f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1707f4:
    // 0x1707f4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1707f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1707f8:
    // 0x1707f8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1707f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1707fc:
    // 0x1707fc: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x1707fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_170800:
    // 0x170800: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x170800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_170804:
    // 0x170804: 0x24a545c8  addiu       $a1, $a1, 0x45C8
    ctx->pc = 0x170804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17864));
label_170808:
    // 0x170808: 0xc05621c  jal         func_158870
label_17080c:
    if (ctx->pc == 0x17080Cu) {
        ctx->pc = 0x170810u;
        goto label_170810;
    }
    ctx->pc = 0x170808u;
    SET_GPR_U32(ctx, 31, 0x170810u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x170808u, 0x170810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170810u;
label_170810:
    // 0x170810: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x170810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170814:
    // 0x170814: 0x12000056  beqz        $s0, . + 4 + (0x56 << 2)
label_170818:
    if (ctx->pc == 0x170818u) {
        ctx->pc = 0x17081Cu;
        goto label_17081c;
    }
    ctx->pc = 0x170814u;
    {
        const bool branch_taken_0x170814 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x170814) {
            ctx->pc = 0x170970u;
            goto label_170970;
        }
    }
    ctx->pc = 0x17081Cu;
label_17081c:
    // 0x17081c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17081cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170820:
    // 0x170820: 0x0  nop
    ctx->pc = 0x170820u;
    // NOP
label_170824:
    // 0x170824: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x170824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_170828:
    // 0x170828: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x170828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_17082c:
    // 0x17082c: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x17082cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_170830:
    // 0x170830: 0xc0552dc  jal         func_154B70
label_170834:
    if (ctx->pc == 0x170834u) {
        ctx->pc = 0x170838u;
        goto label_170838;
    }
    ctx->pc = 0x170830u;
    SET_GPR_U32(ctx, 31, 0x170838u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x170830u, 0x170838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170838u;
label_170838:
    // 0x170838: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x170838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17083c:
    // 0x17083c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17083cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_170840:
    // 0x170840: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170844:
    // 0x170844: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170848:
    // 0x170848: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x170848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17084c:
    // 0x17084c: 0x27a700bc  addiu       $a3, $sp, 0xBC
    ctx->pc = 0x17084cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_170850:
    // 0x170850: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170850u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170854:
    // 0x170854: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170854u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170858:
    // 0x170858: 0xc08b9fc  jal         func_22E7F0
label_17085c:
    if (ctx->pc == 0x17085Cu) {
        ctx->pc = 0x170860u;
        goto label_170860;
    }
    ctx->pc = 0x170858u;
    SET_GPR_U32(ctx, 31, 0x170860u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x170858u, 0x170860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170860u;
label_170860:
    // 0x170860: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_170864:
    // 0x170864: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170868:
    // 0x170868: 0x0  nop
    ctx->pc = 0x170868u;
    // NOP
label_17086c:
    // 0x17086c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x17086cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_170870:
    // 0x170870: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x170870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_170874:
    // 0x170874: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_170878:
    // 0x170878: 0xc0552dc  jal         func_154B70
label_17087c:
    if (ctx->pc == 0x17087Cu) {
        ctx->pc = 0x170880u;
        goto label_170880;
    }
    ctx->pc = 0x170878u;
    SET_GPR_U32(ctx, 31, 0x170880u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x170878u, 0x170880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170880u;
label_170880:
    // 0x170880: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x170880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_170884:
    // 0x170884: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x170884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_170888:
    // 0x170888: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x170888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17088c:
    // 0x17088c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x17088cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_170890:
    // 0x170890: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170894:
    // 0x170894: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170898:
    // 0x170898: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x170898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17089c:
    // 0x17089c: 0x27a700bc  addiu       $a3, $sp, 0xBC
    ctx->pc = 0x17089cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_1708a0:
    // 0x1708a0: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x1708a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1708a4:
    // 0x1708a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1708a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1708a8:
    // 0x1708a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1708a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1708ac:
    // 0x1708ac: 0xc08b9fc  jal         func_22E7F0
label_1708b0:
    if (ctx->pc == 0x1708B0u) {
        ctx->pc = 0x1708B4u;
        goto label_1708b4;
    }
    ctx->pc = 0x1708ACu;
    SET_GPR_U32(ctx, 31, 0x1708B4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1708ACu, 0x1708B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1708B4u;
label_1708b4:
    // 0x1708b4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1708b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1708b8:
    // 0x1708b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1708b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1708bc:
    // 0x1708bc: 0x0  nop
    ctx->pc = 0x1708bcu;
    // NOP
label_1708c0:
    // 0x1708c0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1708c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1708c4:
    // 0x1708c4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1708c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1708c8:
    // 0x1708c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1708c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1708cc:
    // 0x1708cc: 0x0  nop
    ctx->pc = 0x1708ccu;
    // NOP
label_1708d0:
    // 0x1708d0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1708d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_1708d4:
    // 0x1708d4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1708d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1708d8:
    // 0x1708d8: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x1708d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1708dc:
    // 0x1708dc: 0xc0552dc  jal         func_154B70
label_1708e0:
    if (ctx->pc == 0x1708E0u) {
        ctx->pc = 0x1708E4u;
        goto label_1708e4;
    }
    ctx->pc = 0x1708DCu;
    SET_GPR_U32(ctx, 31, 0x1708E4u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1708DCu, 0x1708E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1708E4u;
label_1708e4:
    // 0x1708e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1708e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1708e8:
    // 0x1708e8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1708e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1708ec:
    // 0x1708ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1708ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1708f0:
    // 0x1708f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1708f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1708f4:
    // 0x1708f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1708f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1708f8:
    // 0x1708f8: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x1708f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_1708fc:
    // 0x1708fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1708fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170900:
    // 0x170900: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170900u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170904:
    // 0x170904: 0xc08b9fc  jal         func_22E7F0
label_170908:
    if (ctx->pc == 0x170908u) {
        ctx->pc = 0x17090Cu;
        goto label_17090c;
    }
    ctx->pc = 0x170904u;
    SET_GPR_U32(ctx, 31, 0x17090Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x170904u, 0x17090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17090Cu;
label_17090c:
    // 0x17090c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17090cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_170910:
    // 0x170910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170914:
    // 0x170914: 0x0  nop
    ctx->pc = 0x170914u;
    // NOP
label_170918:
    // 0x170918: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x170918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_17091c:
    // 0x17091c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17091cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_170920:
    // 0x170920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170924:
    // 0x170924: 0x0  nop
    ctx->pc = 0x170924u;
    // NOP
label_170928:
    // 0x170928: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x170928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_17092c:
    // 0x17092c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17092cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_170930:
    // 0x170930: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_170934:
    // 0x170934: 0xc0552dc  jal         func_154B70
label_170938:
    if (ctx->pc == 0x170938u) {
        ctx->pc = 0x17093Cu;
        goto label_17093c;
    }
    ctx->pc = 0x170934u;
    SET_GPR_U32(ctx, 31, 0x17093Cu);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x170934u, 0x17093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17093Cu;
label_17093c:
    // 0x17093c: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x17093cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_170940:
    // 0x170940: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x170940u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_170944:
    // 0x170944: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x170944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170948:
    // 0x170948: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x170948u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_17094c:
    // 0x17094c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17094cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170950:
    // 0x170950: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170954:
    // 0x170954: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x170954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170958:
    // 0x170958: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x170958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_17095c:
    // 0x17095c: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x17095cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_170960:
    // 0x170960: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170960u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170964:
    // 0x170964: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170964u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170968:
    // 0x170968: 0xc08b9fc  jal         func_22E7F0
label_17096c:
    if (ctx->pc == 0x17096Cu) {
        ctx->pc = 0x170970u;
        goto label_170970;
    }
    ctx->pc = 0x170968u;
    SET_GPR_U32(ctx, 31, 0x170970u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x170968u, 0x170970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170970u;
label_170970:
    // 0x170970: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x170970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_170974:
    // 0x170974: 0xc7808280  lwc1        $f0, -0x7D80($gp)
    ctx->pc = 0x170974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170978:
    // 0x170978: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x170978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_17097c:
    // 0x17097c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x17097cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_170980:
    // 0x170980: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x170980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_170984:
    // 0x170984: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x170984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_170988:
    // 0x170988: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x170988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17098c:
    // 0x17098c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x17098cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170990:
    // 0x170990: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x170990u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_170994:
    // 0x170994: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x170994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_170998:
    // 0x170998: 0x8c6500c4  lw          $a1, 0xC4($v1)
    ctx->pc = 0x170998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_17099c:
    // 0x17099c: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x17099cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1709a0:
    // 0x1709a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1709a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1709a4:
    // 0x1709a4: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x1709a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_1709a8:
    // 0x1709a8: 0x320f809  jalr        $t9
label_1709ac:
    if (ctx->pc == 0x1709ACu) {
        ctx->pc = 0x1709B0u;
        goto label_1709b0;
    }
    ctx->pc = 0x1709A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1709B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1709A8u, 0x1709B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1709B0u;
label_1709b0:
    // 0x1709b0: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1709b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1709b4:
    // 0x1709b4: 0xc7808280  lwc1        $f0, -0x7D80($gp)
    ctx->pc = 0x1709b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1709b8:
    // 0x1709b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1709b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1709bc:
    // 0x1709bc: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1709bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1709c0:
    // 0x1709c0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1709c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1709c4:
    // 0x1709c4: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x1709c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1709c8:
    // 0x1709c8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1709c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1709cc:
    // 0x1709cc: 0x24a545d8  addiu       $a1, $a1, 0x45D8
    ctx->pc = 0x1709ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17880));
label_1709d0:
    // 0x1709d0: 0xc05621c  jal         func_158870
label_1709d4:
    if (ctx->pc == 0x1709D4u) {
        ctx->pc = 0x1709D8u;
        goto label_1709d8;
    }
    ctx->pc = 0x1709D0u;
    SET_GPR_U32(ctx, 31, 0x1709D8u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x1709D0u, 0x1709D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1709D8u;
label_1709d8:
    // 0x1709d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1709d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1709dc:
    // 0x1709dc: 0x12000047  beqz        $s0, . + 4 + (0x47 << 2)
label_1709e0:
    if (ctx->pc == 0x1709E0u) {
        ctx->pc = 0x1709E4u;
        goto label_1709e4;
    }
    ctx->pc = 0x1709DCu;
    {
        const bool branch_taken_0x1709dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1709dc) {
            ctx->pc = 0x170AFCu;
            goto label_170afc;
        }
    }
    ctx->pc = 0x1709E4u;
label_1709e4:
    // 0x1709e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1709e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1709e8:
    // 0x1709e8: 0x0  nop
    ctx->pc = 0x1709e8u;
    // NOP
label_1709ec:
    // 0x1709ec: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1709ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1709f0:
    // 0x1709f0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1709f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1709f4:
    // 0x1709f4: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x1709f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1709f8:
    // 0x1709f8: 0xc0552dc  jal         func_154B70
label_1709fc:
    if (ctx->pc == 0x1709FCu) {
        ctx->pc = 0x170A00u;
        goto label_170a00;
    }
    ctx->pc = 0x1709F8u;
    SET_GPR_U32(ctx, 31, 0x170A00u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1709F8u, 0x170A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170A00u;
label_170a00:
    // 0x170a00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x170a00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_170a04:
    // 0x170a04: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x170a04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_170a08:
    // 0x170a08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170a0c:
    // 0x170a0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170a10:
    // 0x170a10: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x170a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_170a14:
    // 0x170a14: 0x27a700b8  addiu       $a3, $sp, 0xB8
    ctx->pc = 0x170a14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_170a18:
    // 0x170a18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170a18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170a1c:
    // 0x170a1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170a1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170a20:
    // 0x170a20: 0xc08b9fc  jal         func_22E7F0
label_170a24:
    if (ctx->pc == 0x170A24u) {
        ctx->pc = 0x170A28u;
        goto label_170a28;
    }
    ctx->pc = 0x170A20u;
    SET_GPR_U32(ctx, 31, 0x170A28u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x170A20u, 0x170A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170A28u;
label_170a28:
    // 0x170a28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_170a2c:
    // 0x170a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170a30:
    // 0x170a30: 0x0  nop
    ctx->pc = 0x170a30u;
    // NOP
label_170a34:
    // 0x170a34: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x170a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_170a38:
    // 0x170a38: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x170a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_170a3c:
    // 0x170a3c: 0x8c8500c4  lw          $a1, 0xC4($a0)
    ctx->pc = 0x170a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
label_170a40:
    // 0x170a40: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x170a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_170a44:
    // 0x170a44: 0xc0552dc  jal         func_154B70
label_170a48:
    if (ctx->pc == 0x170A48u) {
        ctx->pc = 0x170A4Cu;
        goto label_170a4c;
    }
    ctx->pc = 0x170A44u;
    SET_GPR_U32(ctx, 31, 0x170A4Cu);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x170A44u, 0x170A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170A4Cu;
label_170a4c:
    // 0x170a4c: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x170a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_170a50:
    // 0x170a50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x170a50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_170a54:
    // 0x170a54: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x170a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170a58:
    // 0x170a58: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x170a58u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_170a5c:
    // 0x170a5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170a60:
    // 0x170a60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170a64:
    // 0x170a64: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x170a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_170a68:
    // 0x170a68: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x170a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_170a6c:
    // 0x170a6c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x170a6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170a70:
    // 0x170a70: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x170a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_170a74:
    // 0x170a74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170a74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170a78:
    // 0x170a78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170a78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170a7c:
    // 0x170a7c: 0xc08b9fc  jal         func_22E7F0
label_170a80:
    if (ctx->pc == 0x170A80u) {
        ctx->pc = 0x170A84u;
        goto label_170a84;
    }
    ctx->pc = 0x170A7Cu;
    SET_GPR_U32(ctx, 31, 0x170A84u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x170A7Cu, 0x170A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170A84u;
label_170a84:
    // 0x170a84: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x170a84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170a88:
    // 0x170a88: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x170a88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_170a8c:
    // 0x170a8c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x170a8cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170a90:
    // 0x170a90: 0x0  nop
    ctx->pc = 0x170a90u;
    // NOP
label_170a94:
    // 0x170a94: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x170a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_170a98:
    // 0x170a98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_170a9c:
    // 0x170a9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170aa0:
    // 0x170aa0: 0x0  nop
    ctx->pc = 0x170aa0u;
    // NOP
label_170aa4:
    // 0x170aa4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x170aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_170aa8:
    // 0x170aa8: 0xc78082d0  lwc1        $f0, -0x7D30($gp)
    ctx->pc = 0x170aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170aac:
    // 0x170aac: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x170aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_170ab0:
    // 0x170ab0: 0xc78082d0  lwc1        $f0, -0x7D30($gp)
    ctx->pc = 0x170ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170ab4:
    // 0x170ab4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x170ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_170ab8:
    // 0x170ab8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x170ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_170abc:
    // 0x170abc: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_170ac0:
    // 0x170ac0: 0xc0552dc  jal         func_154B70
label_170ac4:
    if (ctx->pc == 0x170AC4u) {
        ctx->pc = 0x170AC8u;
        goto label_170ac8;
    }
    ctx->pc = 0x170AC0u;
    SET_GPR_U32(ctx, 31, 0x170AC8u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x170AC0u, 0x170AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170AC8u;
label_170ac8:
    // 0x170ac8: 0x3c053e80  lui         $a1, 0x3E80
    ctx->pc = 0x170ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16000 << 16));
label_170acc:
    // 0x170acc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x170accu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_170ad0:
    // 0x170ad0: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x170ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170ad4:
    // 0x170ad4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x170ad4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_170ad8:
    // 0x170ad8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170adc:
    // 0x170adc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170ae0:
    // 0x170ae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170ae4:
    // 0x170ae4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x170ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170ae8:
    // 0x170ae8: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x170ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_170aec:
    // 0x170aec: 0x27a80058  addiu       $t0, $sp, 0x58
    ctx->pc = 0x170aecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_170af0:
    // 0x170af0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x170af0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170af4:
    // 0x170af4: 0xc08bbf4  jal         func_22EFD0
label_170af8:
    if (ctx->pc == 0x170AF8u) {
        ctx->pc = 0x170AFCu;
        goto label_170afc;
    }
    ctx->pc = 0x170AF4u;
    SET_GPR_U32(ctx, 31, 0x170AFCu);
    ctx->pc = 0x22EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFD0u, 0x170AF4u, 0x170AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170AFCu;
label_170afc:
    // 0x170afc: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x170afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_170b00:
    // 0x170b00: 0xc7808280  lwc1        $f0, -0x7D80($gp)
    ctx->pc = 0x170b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170b04:
    // 0x170b04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x170b04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_170b08:
    // 0x170b08: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x170b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_170b0c:
    // 0x170b0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x170b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_170b10:
    // 0x170b10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x170b10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_170b14:
    // 0x170b14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x170b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_170b18:
    // 0x170b18: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x170b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_170b1c:
    // 0x170b1c: 0x3e00008  jr          $ra
label_170b20:
    if (ctx->pc == 0x170B20u) {
        ctx->pc = 0x170B24u;
        goto label_170b24;
    }
    ctx->pc = 0x170B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170B24u;
label_170b24:
    // 0x170b24: 0x0  nop
    ctx->pc = 0x170b24u;
    // NOP
label_170b28:
    // 0x170b28: 0x0  nop
    ctx->pc = 0x170b28u;
    // NOP
label_170b2c:
    // 0x170b2c: 0x0  nop
    ctx->pc = 0x170b2cu;
    // NOP
    ctx->pc = 0x170b30u;
}
