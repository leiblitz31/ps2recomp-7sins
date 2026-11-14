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

// Function: sub_001542D0
// Address: 0x1542d0 - 0x154b70
void sub_001542D0_0x1542d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001542D0_0x1542d0");
#endif

    switch (ctx->pc) {
        case 0x1542d0u: goto label_1542d0;
        case 0x1542d4u: goto label_1542d4;
        case 0x1542d8u: goto label_1542d8;
        case 0x1542dcu: goto label_1542dc;
        case 0x1542e0u: goto label_1542e0;
        case 0x1542e4u: goto label_1542e4;
        case 0x1542e8u: goto label_1542e8;
        case 0x1542ecu: goto label_1542ec;
        case 0x1542f0u: goto label_1542f0;
        case 0x1542f4u: goto label_1542f4;
        case 0x1542f8u: goto label_1542f8;
        case 0x1542fcu: goto label_1542fc;
        case 0x154300u: goto label_154300;
        case 0x154304u: goto label_154304;
        case 0x154308u: goto label_154308;
        case 0x15430cu: goto label_15430c;
        case 0x154310u: goto label_154310;
        case 0x154314u: goto label_154314;
        case 0x154318u: goto label_154318;
        case 0x15431cu: goto label_15431c;
        case 0x154320u: goto label_154320;
        case 0x154324u: goto label_154324;
        case 0x154328u: goto label_154328;
        case 0x15432cu: goto label_15432c;
        case 0x154330u: goto label_154330;
        case 0x154334u: goto label_154334;
        case 0x154338u: goto label_154338;
        case 0x15433cu: goto label_15433c;
        case 0x154340u: goto label_154340;
        case 0x154344u: goto label_154344;
        case 0x154348u: goto label_154348;
        case 0x15434cu: goto label_15434c;
        case 0x154350u: goto label_154350;
        case 0x154354u: goto label_154354;
        case 0x154358u: goto label_154358;
        case 0x15435cu: goto label_15435c;
        case 0x154360u: goto label_154360;
        case 0x154364u: goto label_154364;
        case 0x154368u: goto label_154368;
        case 0x15436cu: goto label_15436c;
        case 0x154370u: goto label_154370;
        case 0x154374u: goto label_154374;
        case 0x154378u: goto label_154378;
        case 0x15437cu: goto label_15437c;
        case 0x154380u: goto label_154380;
        case 0x154384u: goto label_154384;
        case 0x154388u: goto label_154388;
        case 0x15438cu: goto label_15438c;
        case 0x154390u: goto label_154390;
        case 0x154394u: goto label_154394;
        case 0x154398u: goto label_154398;
        case 0x15439cu: goto label_15439c;
        case 0x1543a0u: goto label_1543a0;
        case 0x1543a4u: goto label_1543a4;
        case 0x1543a8u: goto label_1543a8;
        case 0x1543acu: goto label_1543ac;
        case 0x1543b0u: goto label_1543b0;
        case 0x1543b4u: goto label_1543b4;
        case 0x1543b8u: goto label_1543b8;
        case 0x1543bcu: goto label_1543bc;
        case 0x1543c0u: goto label_1543c0;
        case 0x1543c4u: goto label_1543c4;
        case 0x1543c8u: goto label_1543c8;
        case 0x1543ccu: goto label_1543cc;
        case 0x1543d0u: goto label_1543d0;
        case 0x1543d4u: goto label_1543d4;
        case 0x1543d8u: goto label_1543d8;
        case 0x1543dcu: goto label_1543dc;
        case 0x1543e0u: goto label_1543e0;
        case 0x1543e4u: goto label_1543e4;
        case 0x1543e8u: goto label_1543e8;
        case 0x1543ecu: goto label_1543ec;
        case 0x1543f0u: goto label_1543f0;
        case 0x1543f4u: goto label_1543f4;
        case 0x1543f8u: goto label_1543f8;
        case 0x1543fcu: goto label_1543fc;
        case 0x154400u: goto label_154400;
        case 0x154404u: goto label_154404;
        case 0x154408u: goto label_154408;
        case 0x15440cu: goto label_15440c;
        case 0x154410u: goto label_154410;
        case 0x154414u: goto label_154414;
        case 0x154418u: goto label_154418;
        case 0x15441cu: goto label_15441c;
        case 0x154420u: goto label_154420;
        case 0x154424u: goto label_154424;
        case 0x154428u: goto label_154428;
        case 0x15442cu: goto label_15442c;
        case 0x154430u: goto label_154430;
        case 0x154434u: goto label_154434;
        case 0x154438u: goto label_154438;
        case 0x15443cu: goto label_15443c;
        case 0x154440u: goto label_154440;
        case 0x154444u: goto label_154444;
        case 0x154448u: goto label_154448;
        case 0x15444cu: goto label_15444c;
        case 0x154450u: goto label_154450;
        case 0x154454u: goto label_154454;
        case 0x154458u: goto label_154458;
        case 0x15445cu: goto label_15445c;
        case 0x154460u: goto label_154460;
        case 0x154464u: goto label_154464;
        case 0x154468u: goto label_154468;
        case 0x15446cu: goto label_15446c;
        case 0x154470u: goto label_154470;
        case 0x154474u: goto label_154474;
        case 0x154478u: goto label_154478;
        case 0x15447cu: goto label_15447c;
        case 0x154480u: goto label_154480;
        case 0x154484u: goto label_154484;
        case 0x154488u: goto label_154488;
        case 0x15448cu: goto label_15448c;
        case 0x154490u: goto label_154490;
        case 0x154494u: goto label_154494;
        case 0x154498u: goto label_154498;
        case 0x15449cu: goto label_15449c;
        case 0x1544a0u: goto label_1544a0;
        case 0x1544a4u: goto label_1544a4;
        case 0x1544a8u: goto label_1544a8;
        case 0x1544acu: goto label_1544ac;
        case 0x1544b0u: goto label_1544b0;
        case 0x1544b4u: goto label_1544b4;
        case 0x1544b8u: goto label_1544b8;
        case 0x1544bcu: goto label_1544bc;
        case 0x1544c0u: goto label_1544c0;
        case 0x1544c4u: goto label_1544c4;
        case 0x1544c8u: goto label_1544c8;
        case 0x1544ccu: goto label_1544cc;
        case 0x1544d0u: goto label_1544d0;
        case 0x1544d4u: goto label_1544d4;
        case 0x1544d8u: goto label_1544d8;
        case 0x1544dcu: goto label_1544dc;
        case 0x1544e0u: goto label_1544e0;
        case 0x1544e4u: goto label_1544e4;
        case 0x1544e8u: goto label_1544e8;
        case 0x1544ecu: goto label_1544ec;
        case 0x1544f0u: goto label_1544f0;
        case 0x1544f4u: goto label_1544f4;
        case 0x1544f8u: goto label_1544f8;
        case 0x1544fcu: goto label_1544fc;
        case 0x154500u: goto label_154500;
        case 0x154504u: goto label_154504;
        case 0x154508u: goto label_154508;
        case 0x15450cu: goto label_15450c;
        case 0x154510u: goto label_154510;
        case 0x154514u: goto label_154514;
        case 0x154518u: goto label_154518;
        case 0x15451cu: goto label_15451c;
        case 0x154520u: goto label_154520;
        case 0x154524u: goto label_154524;
        case 0x154528u: goto label_154528;
        case 0x15452cu: goto label_15452c;
        case 0x154530u: goto label_154530;
        case 0x154534u: goto label_154534;
        case 0x154538u: goto label_154538;
        case 0x15453cu: goto label_15453c;
        case 0x154540u: goto label_154540;
        case 0x154544u: goto label_154544;
        case 0x154548u: goto label_154548;
        case 0x15454cu: goto label_15454c;
        case 0x154550u: goto label_154550;
        case 0x154554u: goto label_154554;
        case 0x154558u: goto label_154558;
        case 0x15455cu: goto label_15455c;
        case 0x154560u: goto label_154560;
        case 0x154564u: goto label_154564;
        case 0x154568u: goto label_154568;
        case 0x15456cu: goto label_15456c;
        case 0x154570u: goto label_154570;
        case 0x154574u: goto label_154574;
        case 0x154578u: goto label_154578;
        case 0x15457cu: goto label_15457c;
        case 0x154580u: goto label_154580;
        case 0x154584u: goto label_154584;
        case 0x154588u: goto label_154588;
        case 0x15458cu: goto label_15458c;
        case 0x154590u: goto label_154590;
        case 0x154594u: goto label_154594;
        case 0x154598u: goto label_154598;
        case 0x15459cu: goto label_15459c;
        case 0x1545a0u: goto label_1545a0;
        case 0x1545a4u: goto label_1545a4;
        case 0x1545a8u: goto label_1545a8;
        case 0x1545acu: goto label_1545ac;
        case 0x1545b0u: goto label_1545b0;
        case 0x1545b4u: goto label_1545b4;
        case 0x1545b8u: goto label_1545b8;
        case 0x1545bcu: goto label_1545bc;
        case 0x1545c0u: goto label_1545c0;
        case 0x1545c4u: goto label_1545c4;
        case 0x1545c8u: goto label_1545c8;
        case 0x1545ccu: goto label_1545cc;
        case 0x1545d0u: goto label_1545d0;
        case 0x1545d4u: goto label_1545d4;
        case 0x1545d8u: goto label_1545d8;
        case 0x1545dcu: goto label_1545dc;
        case 0x1545e0u: goto label_1545e0;
        case 0x1545e4u: goto label_1545e4;
        case 0x1545e8u: goto label_1545e8;
        case 0x1545ecu: goto label_1545ec;
        case 0x1545f0u: goto label_1545f0;
        case 0x1545f4u: goto label_1545f4;
        case 0x1545f8u: goto label_1545f8;
        case 0x1545fcu: goto label_1545fc;
        case 0x154600u: goto label_154600;
        case 0x154604u: goto label_154604;
        case 0x154608u: goto label_154608;
        case 0x15460cu: goto label_15460c;
        case 0x154610u: goto label_154610;
        case 0x154614u: goto label_154614;
        case 0x154618u: goto label_154618;
        case 0x15461cu: goto label_15461c;
        case 0x154620u: goto label_154620;
        case 0x154624u: goto label_154624;
        case 0x154628u: goto label_154628;
        case 0x15462cu: goto label_15462c;
        case 0x154630u: goto label_154630;
        case 0x154634u: goto label_154634;
        case 0x154638u: goto label_154638;
        case 0x15463cu: goto label_15463c;
        case 0x154640u: goto label_154640;
        case 0x154644u: goto label_154644;
        case 0x154648u: goto label_154648;
        case 0x15464cu: goto label_15464c;
        case 0x154650u: goto label_154650;
        case 0x154654u: goto label_154654;
        case 0x154658u: goto label_154658;
        case 0x15465cu: goto label_15465c;
        case 0x154660u: goto label_154660;
        case 0x154664u: goto label_154664;
        case 0x154668u: goto label_154668;
        case 0x15466cu: goto label_15466c;
        case 0x154670u: goto label_154670;
        case 0x154674u: goto label_154674;
        case 0x154678u: goto label_154678;
        case 0x15467cu: goto label_15467c;
        case 0x154680u: goto label_154680;
        case 0x154684u: goto label_154684;
        case 0x154688u: goto label_154688;
        case 0x15468cu: goto label_15468c;
        case 0x154690u: goto label_154690;
        case 0x154694u: goto label_154694;
        case 0x154698u: goto label_154698;
        case 0x15469cu: goto label_15469c;
        case 0x1546a0u: goto label_1546a0;
        case 0x1546a4u: goto label_1546a4;
        case 0x1546a8u: goto label_1546a8;
        case 0x1546acu: goto label_1546ac;
        case 0x1546b0u: goto label_1546b0;
        case 0x1546b4u: goto label_1546b4;
        case 0x1546b8u: goto label_1546b8;
        case 0x1546bcu: goto label_1546bc;
        case 0x1546c0u: goto label_1546c0;
        case 0x1546c4u: goto label_1546c4;
        case 0x1546c8u: goto label_1546c8;
        case 0x1546ccu: goto label_1546cc;
        case 0x1546d0u: goto label_1546d0;
        case 0x1546d4u: goto label_1546d4;
        case 0x1546d8u: goto label_1546d8;
        case 0x1546dcu: goto label_1546dc;
        case 0x1546e0u: goto label_1546e0;
        case 0x1546e4u: goto label_1546e4;
        case 0x1546e8u: goto label_1546e8;
        case 0x1546ecu: goto label_1546ec;
        case 0x1546f0u: goto label_1546f0;
        case 0x1546f4u: goto label_1546f4;
        case 0x1546f8u: goto label_1546f8;
        case 0x1546fcu: goto label_1546fc;
        case 0x154700u: goto label_154700;
        case 0x154704u: goto label_154704;
        case 0x154708u: goto label_154708;
        case 0x15470cu: goto label_15470c;
        case 0x154710u: goto label_154710;
        case 0x154714u: goto label_154714;
        case 0x154718u: goto label_154718;
        case 0x15471cu: goto label_15471c;
        case 0x154720u: goto label_154720;
        case 0x154724u: goto label_154724;
        case 0x154728u: goto label_154728;
        case 0x15472cu: goto label_15472c;
        case 0x154730u: goto label_154730;
        case 0x154734u: goto label_154734;
        case 0x154738u: goto label_154738;
        case 0x15473cu: goto label_15473c;
        case 0x154740u: goto label_154740;
        case 0x154744u: goto label_154744;
        case 0x154748u: goto label_154748;
        case 0x15474cu: goto label_15474c;
        case 0x154750u: goto label_154750;
        case 0x154754u: goto label_154754;
        case 0x154758u: goto label_154758;
        case 0x15475cu: goto label_15475c;
        case 0x154760u: goto label_154760;
        case 0x154764u: goto label_154764;
        case 0x154768u: goto label_154768;
        case 0x15476cu: goto label_15476c;
        case 0x154770u: goto label_154770;
        case 0x154774u: goto label_154774;
        case 0x154778u: goto label_154778;
        case 0x15477cu: goto label_15477c;
        case 0x154780u: goto label_154780;
        case 0x154784u: goto label_154784;
        case 0x154788u: goto label_154788;
        case 0x15478cu: goto label_15478c;
        case 0x154790u: goto label_154790;
        case 0x154794u: goto label_154794;
        case 0x154798u: goto label_154798;
        case 0x15479cu: goto label_15479c;
        case 0x1547a0u: goto label_1547a0;
        case 0x1547a4u: goto label_1547a4;
        case 0x1547a8u: goto label_1547a8;
        case 0x1547acu: goto label_1547ac;
        case 0x1547b0u: goto label_1547b0;
        case 0x1547b4u: goto label_1547b4;
        case 0x1547b8u: goto label_1547b8;
        case 0x1547bcu: goto label_1547bc;
        case 0x1547c0u: goto label_1547c0;
        case 0x1547c4u: goto label_1547c4;
        case 0x1547c8u: goto label_1547c8;
        case 0x1547ccu: goto label_1547cc;
        case 0x1547d0u: goto label_1547d0;
        case 0x1547d4u: goto label_1547d4;
        case 0x1547d8u: goto label_1547d8;
        case 0x1547dcu: goto label_1547dc;
        case 0x1547e0u: goto label_1547e0;
        case 0x1547e4u: goto label_1547e4;
        case 0x1547e8u: goto label_1547e8;
        case 0x1547ecu: goto label_1547ec;
        case 0x1547f0u: goto label_1547f0;
        case 0x1547f4u: goto label_1547f4;
        case 0x1547f8u: goto label_1547f8;
        case 0x1547fcu: goto label_1547fc;
        case 0x154800u: goto label_154800;
        case 0x154804u: goto label_154804;
        case 0x154808u: goto label_154808;
        case 0x15480cu: goto label_15480c;
        case 0x154810u: goto label_154810;
        case 0x154814u: goto label_154814;
        case 0x154818u: goto label_154818;
        case 0x15481cu: goto label_15481c;
        case 0x154820u: goto label_154820;
        case 0x154824u: goto label_154824;
        case 0x154828u: goto label_154828;
        case 0x15482cu: goto label_15482c;
        case 0x154830u: goto label_154830;
        case 0x154834u: goto label_154834;
        case 0x154838u: goto label_154838;
        case 0x15483cu: goto label_15483c;
        case 0x154840u: goto label_154840;
        case 0x154844u: goto label_154844;
        case 0x154848u: goto label_154848;
        case 0x15484cu: goto label_15484c;
        case 0x154850u: goto label_154850;
        case 0x154854u: goto label_154854;
        case 0x154858u: goto label_154858;
        case 0x15485cu: goto label_15485c;
        case 0x154860u: goto label_154860;
        case 0x154864u: goto label_154864;
        case 0x154868u: goto label_154868;
        case 0x15486cu: goto label_15486c;
        case 0x154870u: goto label_154870;
        case 0x154874u: goto label_154874;
        case 0x154878u: goto label_154878;
        case 0x15487cu: goto label_15487c;
        case 0x154880u: goto label_154880;
        case 0x154884u: goto label_154884;
        case 0x154888u: goto label_154888;
        case 0x15488cu: goto label_15488c;
        case 0x154890u: goto label_154890;
        case 0x154894u: goto label_154894;
        case 0x154898u: goto label_154898;
        case 0x15489cu: goto label_15489c;
        case 0x1548a0u: goto label_1548a0;
        case 0x1548a4u: goto label_1548a4;
        case 0x1548a8u: goto label_1548a8;
        case 0x1548acu: goto label_1548ac;
        case 0x1548b0u: goto label_1548b0;
        case 0x1548b4u: goto label_1548b4;
        case 0x1548b8u: goto label_1548b8;
        case 0x1548bcu: goto label_1548bc;
        case 0x1548c0u: goto label_1548c0;
        case 0x1548c4u: goto label_1548c4;
        case 0x1548c8u: goto label_1548c8;
        case 0x1548ccu: goto label_1548cc;
        case 0x1548d0u: goto label_1548d0;
        case 0x1548d4u: goto label_1548d4;
        case 0x1548d8u: goto label_1548d8;
        case 0x1548dcu: goto label_1548dc;
        case 0x1548e0u: goto label_1548e0;
        case 0x1548e4u: goto label_1548e4;
        case 0x1548e8u: goto label_1548e8;
        case 0x1548ecu: goto label_1548ec;
        case 0x1548f0u: goto label_1548f0;
        case 0x1548f4u: goto label_1548f4;
        case 0x1548f8u: goto label_1548f8;
        case 0x1548fcu: goto label_1548fc;
        case 0x154900u: goto label_154900;
        case 0x154904u: goto label_154904;
        case 0x154908u: goto label_154908;
        case 0x15490cu: goto label_15490c;
        case 0x154910u: goto label_154910;
        case 0x154914u: goto label_154914;
        case 0x154918u: goto label_154918;
        case 0x15491cu: goto label_15491c;
        case 0x154920u: goto label_154920;
        case 0x154924u: goto label_154924;
        case 0x154928u: goto label_154928;
        case 0x15492cu: goto label_15492c;
        case 0x154930u: goto label_154930;
        case 0x154934u: goto label_154934;
        case 0x154938u: goto label_154938;
        case 0x15493cu: goto label_15493c;
        case 0x154940u: goto label_154940;
        case 0x154944u: goto label_154944;
        case 0x154948u: goto label_154948;
        case 0x15494cu: goto label_15494c;
        case 0x154950u: goto label_154950;
        case 0x154954u: goto label_154954;
        case 0x154958u: goto label_154958;
        case 0x15495cu: goto label_15495c;
        case 0x154960u: goto label_154960;
        case 0x154964u: goto label_154964;
        case 0x154968u: goto label_154968;
        case 0x15496cu: goto label_15496c;
        case 0x154970u: goto label_154970;
        case 0x154974u: goto label_154974;
        case 0x154978u: goto label_154978;
        case 0x15497cu: goto label_15497c;
        case 0x154980u: goto label_154980;
        case 0x154984u: goto label_154984;
        case 0x154988u: goto label_154988;
        case 0x15498cu: goto label_15498c;
        case 0x154990u: goto label_154990;
        case 0x154994u: goto label_154994;
        case 0x154998u: goto label_154998;
        case 0x15499cu: goto label_15499c;
        case 0x1549a0u: goto label_1549a0;
        case 0x1549a4u: goto label_1549a4;
        case 0x1549a8u: goto label_1549a8;
        case 0x1549acu: goto label_1549ac;
        case 0x1549b0u: goto label_1549b0;
        case 0x1549b4u: goto label_1549b4;
        case 0x1549b8u: goto label_1549b8;
        case 0x1549bcu: goto label_1549bc;
        case 0x1549c0u: goto label_1549c0;
        case 0x1549c4u: goto label_1549c4;
        case 0x1549c8u: goto label_1549c8;
        case 0x1549ccu: goto label_1549cc;
        case 0x1549d0u: goto label_1549d0;
        case 0x1549d4u: goto label_1549d4;
        case 0x1549d8u: goto label_1549d8;
        case 0x1549dcu: goto label_1549dc;
        case 0x1549e0u: goto label_1549e0;
        case 0x1549e4u: goto label_1549e4;
        case 0x1549e8u: goto label_1549e8;
        case 0x1549ecu: goto label_1549ec;
        case 0x1549f0u: goto label_1549f0;
        case 0x1549f4u: goto label_1549f4;
        case 0x1549f8u: goto label_1549f8;
        case 0x1549fcu: goto label_1549fc;
        case 0x154a00u: goto label_154a00;
        case 0x154a04u: goto label_154a04;
        case 0x154a08u: goto label_154a08;
        case 0x154a0cu: goto label_154a0c;
        case 0x154a10u: goto label_154a10;
        case 0x154a14u: goto label_154a14;
        case 0x154a18u: goto label_154a18;
        case 0x154a1cu: goto label_154a1c;
        case 0x154a20u: goto label_154a20;
        case 0x154a24u: goto label_154a24;
        case 0x154a28u: goto label_154a28;
        case 0x154a2cu: goto label_154a2c;
        case 0x154a30u: goto label_154a30;
        case 0x154a34u: goto label_154a34;
        case 0x154a38u: goto label_154a38;
        case 0x154a3cu: goto label_154a3c;
        case 0x154a40u: goto label_154a40;
        case 0x154a44u: goto label_154a44;
        case 0x154a48u: goto label_154a48;
        case 0x154a4cu: goto label_154a4c;
        case 0x154a50u: goto label_154a50;
        case 0x154a54u: goto label_154a54;
        case 0x154a58u: goto label_154a58;
        case 0x154a5cu: goto label_154a5c;
        case 0x154a60u: goto label_154a60;
        case 0x154a64u: goto label_154a64;
        case 0x154a68u: goto label_154a68;
        case 0x154a6cu: goto label_154a6c;
        case 0x154a70u: goto label_154a70;
        case 0x154a74u: goto label_154a74;
        case 0x154a78u: goto label_154a78;
        case 0x154a7cu: goto label_154a7c;
        case 0x154a80u: goto label_154a80;
        case 0x154a84u: goto label_154a84;
        case 0x154a88u: goto label_154a88;
        case 0x154a8cu: goto label_154a8c;
        case 0x154a90u: goto label_154a90;
        case 0x154a94u: goto label_154a94;
        case 0x154a98u: goto label_154a98;
        case 0x154a9cu: goto label_154a9c;
        case 0x154aa0u: goto label_154aa0;
        case 0x154aa4u: goto label_154aa4;
        case 0x154aa8u: goto label_154aa8;
        case 0x154aacu: goto label_154aac;
        case 0x154ab0u: goto label_154ab0;
        case 0x154ab4u: goto label_154ab4;
        case 0x154ab8u: goto label_154ab8;
        case 0x154abcu: goto label_154abc;
        case 0x154ac0u: goto label_154ac0;
        case 0x154ac4u: goto label_154ac4;
        case 0x154ac8u: goto label_154ac8;
        case 0x154accu: goto label_154acc;
        case 0x154ad0u: goto label_154ad0;
        case 0x154ad4u: goto label_154ad4;
        case 0x154ad8u: goto label_154ad8;
        case 0x154adcu: goto label_154adc;
        case 0x154ae0u: goto label_154ae0;
        case 0x154ae4u: goto label_154ae4;
        case 0x154ae8u: goto label_154ae8;
        case 0x154aecu: goto label_154aec;
        case 0x154af0u: goto label_154af0;
        case 0x154af4u: goto label_154af4;
        case 0x154af8u: goto label_154af8;
        case 0x154afcu: goto label_154afc;
        case 0x154b00u: goto label_154b00;
        case 0x154b04u: goto label_154b04;
        case 0x154b08u: goto label_154b08;
        case 0x154b0cu: goto label_154b0c;
        case 0x154b10u: goto label_154b10;
        case 0x154b14u: goto label_154b14;
        case 0x154b18u: goto label_154b18;
        case 0x154b1cu: goto label_154b1c;
        case 0x154b20u: goto label_154b20;
        case 0x154b24u: goto label_154b24;
        case 0x154b28u: goto label_154b28;
        case 0x154b2cu: goto label_154b2c;
        case 0x154b30u: goto label_154b30;
        case 0x154b34u: goto label_154b34;
        case 0x154b38u: goto label_154b38;
        case 0x154b3cu: goto label_154b3c;
        case 0x154b40u: goto label_154b40;
        case 0x154b44u: goto label_154b44;
        case 0x154b48u: goto label_154b48;
        case 0x154b4cu: goto label_154b4c;
        case 0x154b50u: goto label_154b50;
        case 0x154b54u: goto label_154b54;
        case 0x154b58u: goto label_154b58;
        case 0x154b5cu: goto label_154b5c;
        case 0x154b60u: goto label_154b60;
        case 0x154b64u: goto label_154b64;
        case 0x154b68u: goto label_154b68;
        case 0x154b6cu: goto label_154b6c;
        default: break;
    }

    ctx->pc = 0x1542d0u;

label_1542d0:
    // 0x1542d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1542d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1542d4:
    // 0x1542d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1542d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1542d8:
    // 0x1542d8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1542d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_1542dc:
    // 0x1542dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1542dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1542e0:
    // 0x1542e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1542e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1542e4:
    // 0x1542e4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1542e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1542e8:
    // 0x1542e8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1542e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1542ec:
    // 0x1542ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1542ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1542f0:
    // 0x1542f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1542f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1542f4:
    // 0x1542f4: 0x3e00008  jr          $ra
label_1542f8:
    if (ctx->pc == 0x1542F8u) {
        ctx->pc = 0x1542FCu;
        goto label_1542fc;
    }
    ctx->pc = 0x1542F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1542F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1542FCu;
label_1542fc:
    // 0x1542fc: 0x0  nop
    ctx->pc = 0x1542fcu;
    // NOP
label_154300:
    // 0x154300: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x154300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_154304:
    // 0x154304: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x154304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_154308:
    // 0x154308: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x154308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_15430c:
    // 0x15430c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15430cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_154310:
    // 0x154310: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x154310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_154314:
    // 0x154314: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x154314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_154318:
    // 0x154318: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x154318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15431c:
    // 0x15431c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15431cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_154320:
    // 0x154320: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x154320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_154324:
    // 0x154324: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x154324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_154328:
    // 0x154328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x154328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15432c:
    // 0x15432c: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x15432cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
label_154330:
    // 0x154330: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x154330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_154334:
    // 0x154334: 0x100001b6  b           . + 4 + (0x1B6 << 2)
label_154338:
    if (ctx->pc == 0x154338u) {
        ctx->pc = 0x15433Cu;
        goto label_15433c;
    }
    ctx->pc = 0x154334u;
    {
        const bool branch_taken_0x154334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154334) {
            ctx->pc = 0x154A10u;
            goto label_154a10;
        }
    }
    ctx->pc = 0x15433Cu;
label_15433c:
    // 0x15433c: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x15433cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
label_154340:
    // 0x154340: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x154340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_154344:
    // 0x154344: 0x2c41001d  sltiu       $at, $v0, 0x1D
    ctx->pc = 0x154344u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
label_154348:
    // 0x154348: 0x102001a0  beqz        $at, . + 4 + (0x1A0 << 2)
label_15434c:
    if (ctx->pc == 0x15434Cu) {
        ctx->pc = 0x154350u;
        goto label_154350;
    }
    ctx->pc = 0x154348u;
    {
        const bool branch_taken_0x154348 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x154348) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x154350u;
label_154350:
    // 0x154350: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x154350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_154354:
    // 0x154354: 0x24638300  addiu       $v1, $v1, -0x7D00
    ctx->pc = 0x154354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935296));
label_154358:
    // 0x154358: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x154358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15435c:
    // 0x15435c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15435cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154360:
    // 0x154360: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x154360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_154364:
    // 0x154364: 0x400008  jr          $v0
label_154368:
    if (ctx->pc == 0x154368u) {
        ctx->pc = 0x15436Cu;
        goto label_15436c;
    }
    ctx->pc = 0x154364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15436Cu: goto label_15436c;
            case 0x1543B8u: goto label_1543b8;
            case 0x154404u: goto label_154404;
            case 0x154450u: goto label_154450;
            case 0x1544A0u: goto label_1544a0;
            case 0x1544ECu: goto label_1544ec;
            case 0x154538u: goto label_154538;
            case 0x154544u: goto label_154544;
            case 0x154590u: goto label_154590;
            case 0x1545DCu: goto label_1545dc;
            case 0x154628u: goto label_154628;
            case 0x154634u: goto label_154634;
            case 0x154640u: goto label_154640;
            case 0x15468Cu: goto label_15468c;
            case 0x1546D8u: goto label_1546d8;
            case 0x154724u: goto label_154724;
            case 0x154770u: goto label_154770;
            case 0x1547B4u: goto label_1547b4;
            case 0x1547F8u: goto label_1547f8;
            case 0x15483Cu: goto label_15483c;
            case 0x154880u: goto label_154880;
            case 0x1548C4u: goto label_1548c4;
            case 0x154908u: goto label_154908;
            case 0x15494Cu: goto label_15494c;
            case 0x154990u: goto label_154990;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154364u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15436Cu;
label_15436c:
    // 0x15436c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x15436cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_154370:
    // 0x154370: 0xc119b68  jal         func_466DA0
label_154374:
    if (ctx->pc == 0x154374u) {
        ctx->pc = 0x154378u;
        goto label_154378;
    }
    ctx->pc = 0x154370u;
    SET_GPR_U32(ctx, 31, 0x154378u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x154370u, 0x154378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154378u;
label_154378:
    // 0x154378: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x154378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_15437c:
    // 0x15437c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15437cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154380:
    // 0x154380: 0xc0400e0  jal         func_100380
label_154384:
    if (ctx->pc == 0x154384u) {
        ctx->pc = 0x154388u;
        goto label_154388;
    }
    ctx->pc = 0x154380u;
    SET_GPR_U32(ctx, 31, 0x154388u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x154380u, 0x154388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154388u;
label_154388:
    // 0x154388: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x154388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_15438c:
    // 0x15438c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x15438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_154390:
    // 0x154390: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_154394:
    if (ctx->pc == 0x154394u) {
        ctx->pc = 0x154398u;
        goto label_154398;
    }
    ctx->pc = 0x154390u;
    {
        const bool branch_taken_0x154390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154390) {
            ctx->pc = 0x1543A8u;
            goto label_1543a8;
        }
    }
    ctx->pc = 0x154398u;
label_154398:
    // 0x154398: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x154398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_15439c:
    // 0x15439c: 0xc0596e0  jal         func_165B80
label_1543a0:
    if (ctx->pc == 0x1543A0u) {
        ctx->pc = 0x1543A4u;
        goto label_1543a4;
    }
    ctx->pc = 0x15439Cu;
    SET_GPR_U32(ctx, 31, 0x1543A4u);
    ctx->pc = 0x165B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165B80u, 0x15439Cu, 0x1543A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1543A4u;
label_1543a4:
    // 0x1543a4: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1543a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_1543a8:
    // 0x1543a8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1543a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1543ac:
    // 0x1543ac: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x1543acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_1543b0:
    // 0x1543b0: 0x10000186  b           . + 4 + (0x186 << 2)
label_1543b4:
    if (ctx->pc == 0x1543B4u) {
        ctx->pc = 0x1543B8u;
        goto label_1543b8;
    }
    ctx->pc = 0x1543B0u;
    {
        const bool branch_taken_0x1543b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1543b0) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x1543B8u;
label_1543b8:
    // 0x1543b8: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x1543b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1543bc:
    // 0x1543bc: 0xc119b68  jal         func_466DA0
label_1543c0:
    if (ctx->pc == 0x1543C0u) {
        ctx->pc = 0x1543C4u;
        goto label_1543c4;
    }
    ctx->pc = 0x1543BCu;
    SET_GPR_U32(ctx, 31, 0x1543C4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1543BCu, 0x1543C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1543C4u;
label_1543c4:
    // 0x1543c4: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x1543c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1543c8:
    // 0x1543c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1543c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1543cc:
    // 0x1543cc: 0xc0400e0  jal         func_100380
label_1543d0:
    if (ctx->pc == 0x1543D0u) {
        ctx->pc = 0x1543D4u;
        goto label_1543d4;
    }
    ctx->pc = 0x1543CCu;
    SET_GPR_U32(ctx, 31, 0x1543D4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1543CCu, 0x1543D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1543D4u;
label_1543d4:
    // 0x1543d4: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x1543d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_1543d8:
    // 0x1543d8: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1543d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_1543dc:
    // 0x1543dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1543e0:
    if (ctx->pc == 0x1543E0u) {
        ctx->pc = 0x1543E4u;
        goto label_1543e4;
    }
    ctx->pc = 0x1543DCu;
    {
        const bool branch_taken_0x1543dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1543dc) {
            ctx->pc = 0x1543F4u;
            goto label_1543f4;
        }
    }
    ctx->pc = 0x1543E4u;
label_1543e4:
    // 0x1543e4: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x1543e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_1543e8:
    // 0x1543e8: 0xc05ed54  jal         func_17B550
label_1543ec:
    if (ctx->pc == 0x1543ECu) {
        ctx->pc = 0x1543F0u;
        goto label_1543f0;
    }
    ctx->pc = 0x1543E8u;
    SET_GPR_U32(ctx, 31, 0x1543F0u);
    ctx->pc = 0x17B550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B550u, 0x1543E8u, 0x1543F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1543F0u;
label_1543f0:
    // 0x1543f0: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x1543f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_1543f4:
    // 0x1543f4: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1543f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_1543f8:
    // 0x1543f8: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x1543f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_1543fc:
    // 0x1543fc: 0x10000173  b           . + 4 + (0x173 << 2)
label_154400:
    if (ctx->pc == 0x154400u) {
        ctx->pc = 0x154404u;
        goto label_154404;
    }
    ctx->pc = 0x1543FCu;
    {
        const bool branch_taken_0x1543fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1543fc) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x154404u;
label_154404:
    // 0x154404: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x154404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_154408:
    // 0x154408: 0xc119b68  jal         func_466DA0
label_15440c:
    if (ctx->pc == 0x15440Cu) {
        ctx->pc = 0x154410u;
        goto label_154410;
    }
    ctx->pc = 0x154408u;
    SET_GPR_U32(ctx, 31, 0x154410u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x154408u, 0x154410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154410u;
label_154410:
    // 0x154410: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x154410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_154414:
    // 0x154414: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154418:
    // 0x154418: 0xc0400e0  jal         func_100380
label_15441c:
    if (ctx->pc == 0x15441Cu) {
        ctx->pc = 0x154420u;
        goto label_154420;
    }
    ctx->pc = 0x154418u;
    SET_GPR_U32(ctx, 31, 0x154420u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x154418u, 0x154420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154420u;
label_154420:
    // 0x154420: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x154420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_154424:
    // 0x154424: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x154424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_154428:
    // 0x154428: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15442c:
    if (ctx->pc == 0x15442Cu) {
        ctx->pc = 0x154430u;
        goto label_154430;
    }
    ctx->pc = 0x154428u;
    {
        const bool branch_taken_0x154428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154428) {
            ctx->pc = 0x154440u;
            goto label_154440;
        }
    }
    ctx->pc = 0x154430u;
label_154430:
    // 0x154430: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x154430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_154434:
    // 0x154434: 0xc05d150  jal         func_174540
label_154438:
    if (ctx->pc == 0x154438u) {
        ctx->pc = 0x15443Cu;
        goto label_15443c;
    }
    ctx->pc = 0x154434u;
    SET_GPR_U32(ctx, 31, 0x15443Cu);
    ctx->pc = 0x174540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174540u, 0x154434u, 0x15443Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15443Cu;
label_15443c:
    // 0x15443c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x15443cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_154440:
    // 0x154440: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x154440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_154444:
    // 0x154444: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x154444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_154448:
    // 0x154448: 0x10000160  b           . + 4 + (0x160 << 2)
label_15444c:
    if (ctx->pc == 0x15444Cu) {
        ctx->pc = 0x154450u;
        goto label_154450;
    }
    ctx->pc = 0x154448u;
    {
        const bool branch_taken_0x154448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154448) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x154450u;
label_154450:
    // 0x154450: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x154450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_154454:
    // 0x154454: 0xc119b68  jal         func_466DA0
label_154458:
    if (ctx->pc == 0x154458u) {
        ctx->pc = 0x15445Cu;
        goto label_15445c;
    }
    ctx->pc = 0x154454u;
    SET_GPR_U32(ctx, 31, 0x15445Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x154454u, 0x15445Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15445Cu;
label_15445c:
    // 0x15445c: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x15445cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_154460:
    // 0x154460: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154464:
    // 0x154464: 0xc0400e0  jal         func_100380
label_154468:
    if (ctx->pc == 0x154468u) {
        ctx->pc = 0x15446Cu;
        goto label_15446c;
    }
    ctx->pc = 0x154464u;
    SET_GPR_U32(ctx, 31, 0x15446Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x154464u, 0x15446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15446Cu;
label_15446c:
    // 0x15446c: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x15446cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_154470:
    // 0x154470: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x154470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_154474:
    // 0x154474: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_154478:
    if (ctx->pc == 0x154478u) {
        ctx->pc = 0x15447Cu;
        goto label_15447c;
    }
    ctx->pc = 0x154474u;
    {
        const bool branch_taken_0x154474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154474) {
            ctx->pc = 0x154490u;
            goto label_154490;
        }
    }
    ctx->pc = 0x15447Cu;
label_15447c:
    // 0x15447c: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x15447cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_154480:
    // 0x154480: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x154480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_154484:
    // 0x154484: 0xc056654  jal         func_159950
label_154488:
    if (ctx->pc == 0x154488u) {
        ctx->pc = 0x15448Cu;
        goto label_15448c;
    }
    ctx->pc = 0x154484u;
    SET_GPR_U32(ctx, 31, 0x15448Cu);
    ctx->pc = 0x159950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159950u, 0x154484u, 0x15448Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15448Cu;
label_15448c:
    // 0x15448c: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x15448cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_154490:
    // 0x154490: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x154490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_154494:
    // 0x154494: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x154494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_154498:
    // 0x154498: 0x1000014c  b           . + 4 + (0x14C << 2)
label_15449c:
    if (ctx->pc == 0x15449Cu) {
        ctx->pc = 0x1544A0u;
        goto label_1544a0;
    }
    ctx->pc = 0x154498u;
    {
        const bool branch_taken_0x154498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154498) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x1544A0u;
label_1544a0:
    // 0x1544a0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1544a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1544a4:
    // 0x1544a4: 0xc119b68  jal         func_466DA0
label_1544a8:
    if (ctx->pc == 0x1544A8u) {
        ctx->pc = 0x1544ACu;
        goto label_1544ac;
    }
    ctx->pc = 0x1544A4u;
    SET_GPR_U32(ctx, 31, 0x1544ACu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1544A4u, 0x1544ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544ACu;
label_1544ac:
    // 0x1544ac: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1544acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1544b0:
    // 0x1544b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1544b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1544b4:
    // 0x1544b4: 0xc0400e0  jal         func_100380
label_1544b8:
    if (ctx->pc == 0x1544B8u) {
        ctx->pc = 0x1544BCu;
        goto label_1544bc;
    }
    ctx->pc = 0x1544B4u;
    SET_GPR_U32(ctx, 31, 0x1544BCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1544B4u, 0x1544BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544BCu;
label_1544bc:
    // 0x1544bc: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x1544bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_1544c0:
    // 0x1544c0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1544c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1544c4:
    // 0x1544c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1544c8:
    if (ctx->pc == 0x1544C8u) {
        ctx->pc = 0x1544CCu;
        goto label_1544cc;
    }
    ctx->pc = 0x1544C4u;
    {
        const bool branch_taken_0x1544c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1544c4) {
            ctx->pc = 0x1544DCu;
            goto label_1544dc;
        }
    }
    ctx->pc = 0x1544CCu;
label_1544cc:
    // 0x1544cc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1544ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1544d0:
    // 0x1544d0: 0xc056e10  jal         func_15B840
label_1544d4:
    if (ctx->pc == 0x1544D4u) {
        ctx->pc = 0x1544D8u;
        goto label_1544d8;
    }
    ctx->pc = 0x1544D0u;
    SET_GPR_U32(ctx, 31, 0x1544D8u);
    ctx->pc = 0x15B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B840u, 0x1544D0u, 0x1544D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544D8u;
label_1544d8:
    // 0x1544d8: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x1544d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_1544dc:
    // 0x1544dc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1544dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1544e0:
    // 0x1544e0: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x1544e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_1544e4:
    // 0x1544e4: 0x10000139  b           . + 4 + (0x139 << 2)
label_1544e8:
    if (ctx->pc == 0x1544E8u) {
        ctx->pc = 0x1544ECu;
        goto label_1544ec;
    }
    ctx->pc = 0x1544E4u;
    {
        const bool branch_taken_0x1544e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1544e4) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x1544ECu;
label_1544ec:
    // 0x1544ec: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1544ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1544f0:
    // 0x1544f0: 0xc119b68  jal         func_466DA0
label_1544f4:
    if (ctx->pc == 0x1544F4u) {
        ctx->pc = 0x1544F8u;
        goto label_1544f8;
    }
    ctx->pc = 0x1544F0u;
    SET_GPR_U32(ctx, 31, 0x1544F8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1544F0u, 0x1544F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544F8u;
label_1544f8:
    // 0x1544f8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1544f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1544fc:
    // 0x1544fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1544fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154500:
    // 0x154500: 0xc0400e0  jal         func_100380
label_154504:
    if (ctx->pc == 0x154504u) {
        ctx->pc = 0x154508u;
        goto label_154508;
    }
    ctx->pc = 0x154500u;
    SET_GPR_U32(ctx, 31, 0x154508u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x154500u, 0x154508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154508u;
label_154508:
    // 0x154508: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x154508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_15450c:
    // 0x15450c: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x15450cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_154510:
    // 0x154510: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_154514:
    if (ctx->pc == 0x154514u) {
        ctx->pc = 0x154518u;
        goto label_154518;
    }
    ctx->pc = 0x154510u;
    {
        const bool branch_taken_0x154510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154510) {
            ctx->pc = 0x154528u;
            goto label_154528;
        }
    }
    ctx->pc = 0x154518u;
label_154518:
    // 0x154518: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x154518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_15451c:
    // 0x15451c: 0xc0623f8  jal         func_188FE0
label_154520:
    if (ctx->pc == 0x154520u) {
        ctx->pc = 0x154524u;
        goto label_154524;
    }
    ctx->pc = 0x15451Cu;
    SET_GPR_U32(ctx, 31, 0x154524u);
    ctx->pc = 0x188FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188FE0u, 0x15451Cu, 0x154524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154524u;
label_154524:
    // 0x154524: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x154524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_154528:
    // 0x154528: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x154528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_15452c:
    // 0x15452c: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x15452cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_154530:
    // 0x154530: 0x10000126  b           . + 4 + (0x126 << 2)
label_154534:
    if (ctx->pc == 0x154534u) {
        ctx->pc = 0x154538u;
        goto label_154538;
    }
    ctx->pc = 0x154530u;
    {
        const bool branch_taken_0x154530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154530) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x154538u;
label_154538:
    // 0x154538: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x154538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
label_15453c:
    // 0x15453c: 0x10000123  b           . + 4 + (0x123 << 2)
label_154540:
    if (ctx->pc == 0x154540u) {
        ctx->pc = 0x154544u;
        goto label_154544;
    }
    ctx->pc = 0x15453Cu;
    {
        const bool branch_taken_0x15453c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15453c) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x154544u;
label_154544:
    // 0x154544: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x154544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_154548:
    // 0x154548: 0xc119b68  jal         func_466DA0
label_15454c:
    if (ctx->pc == 0x15454Cu) {
        ctx->pc = 0x154550u;
        goto label_154550;
    }
    ctx->pc = 0x154548u;
    SET_GPR_U32(ctx, 31, 0x154550u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x154548u, 0x154550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154550u;
label_154550:
    // 0x154550: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x154550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_154554:
    // 0x154554: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154558:
    // 0x154558: 0xc0400e0  jal         func_100380
label_15455c:
    if (ctx->pc == 0x15455Cu) {
        ctx->pc = 0x154560u;
        goto label_154560;
    }
    ctx->pc = 0x154558u;
    SET_GPR_U32(ctx, 31, 0x154560u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x154558u, 0x154560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154560u;
label_154560:
    // 0x154560: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x154560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_154564:
    // 0x154564: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x154564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_154568:
    // 0x154568: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15456c:
    if (ctx->pc == 0x15456Cu) {
        ctx->pc = 0x154570u;
        goto label_154570;
    }
    ctx->pc = 0x154568u;
    {
        const bool branch_taken_0x154568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154568) {
            ctx->pc = 0x154580u;
            goto label_154580;
        }
    }
    ctx->pc = 0x154570u;
label_154570:
    // 0x154570: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x154570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_154574:
    // 0x154574: 0xc060bfc  jal         func_182FF0
label_154578:
    if (ctx->pc == 0x154578u) {
        ctx->pc = 0x15457Cu;
        goto label_15457c;
    }
    ctx->pc = 0x154574u;
    SET_GPR_U32(ctx, 31, 0x15457Cu);
    ctx->pc = 0x182FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182FF0u, 0x154574u, 0x15457Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15457Cu;
label_15457c:
    // 0x15457c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x15457cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_154580:
    // 0x154580: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x154580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_154584:
    // 0x154584: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x154584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_154588:
    // 0x154588: 0x10000110  b           . + 4 + (0x110 << 2)
label_15458c:
    if (ctx->pc == 0x15458Cu) {
        ctx->pc = 0x154590u;
        goto label_154590;
    }
    ctx->pc = 0x154588u;
    {
        const bool branch_taken_0x154588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154588) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x154590u;
label_154590:
    // 0x154590: 0x240400d8  addiu       $a0, $zero, 0xD8
    ctx->pc = 0x154590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
label_154594:
    // 0x154594: 0xc119b68  jal         func_466DA0
label_154598:
    if (ctx->pc == 0x154598u) {
        ctx->pc = 0x15459Cu;
        goto label_15459c;
    }
    ctx->pc = 0x154594u;
    SET_GPR_U32(ctx, 31, 0x15459Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x154594u, 0x15459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15459Cu;
label_15459c:
    // 0x15459c: 0x240400d8  addiu       $a0, $zero, 0xD8
    ctx->pc = 0x15459cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
label_1545a0:
    // 0x1545a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1545a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1545a4:
    // 0x1545a4: 0xc0400e0  jal         func_100380
label_1545a8:
    if (ctx->pc == 0x1545A8u) {
        ctx->pc = 0x1545ACu;
        goto label_1545ac;
    }
    ctx->pc = 0x1545A4u;
    SET_GPR_U32(ctx, 31, 0x1545ACu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1545A4u, 0x1545ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1545ACu;
label_1545ac:
    // 0x1545ac: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x1545acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_1545b0:
    // 0x1545b0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1545b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1545b4:
    // 0x1545b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1545b8:
    if (ctx->pc == 0x1545B8u) {
        ctx->pc = 0x1545BCu;
        goto label_1545bc;
    }
    ctx->pc = 0x1545B4u;
    {
        const bool branch_taken_0x1545b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1545b4) {
            ctx->pc = 0x1545CCu;
            goto label_1545cc;
        }
    }
    ctx->pc = 0x1545BCu;
label_1545bc:
    // 0x1545bc: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x1545bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1545c0:
    // 0x1545c0: 0xc05b7bc  jal         func_16DEF0
label_1545c4:
    if (ctx->pc == 0x1545C4u) {
        ctx->pc = 0x1545C8u;
        goto label_1545c8;
    }
    ctx->pc = 0x1545C0u;
    SET_GPR_U32(ctx, 31, 0x1545C8u);
    ctx->pc = 0x16DEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DEF0u, 0x1545C0u, 0x1545C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1545C8u;
label_1545c8:
    // 0x1545c8: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x1545c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_1545cc:
    // 0x1545cc: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1545ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1545d0:
    // 0x1545d0: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x1545d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_1545d4:
    // 0x1545d4: 0x100000fd  b           . + 4 + (0xFD << 2)
label_1545d8:
    if (ctx->pc == 0x1545D8u) {
        ctx->pc = 0x1545DCu;
        goto label_1545dc;
    }
    ctx->pc = 0x1545D4u;
    {
        const bool branch_taken_0x1545d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1545d4) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x1545DCu;
label_1545dc:
    // 0x1545dc: 0x24040074  addiu       $a0, $zero, 0x74
    ctx->pc = 0x1545dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_1545e0:
    // 0x1545e0: 0xc119b68  jal         func_466DA0
label_1545e4:
    if (ctx->pc == 0x1545E4u) {
        ctx->pc = 0x1545E8u;
        goto label_1545e8;
    }
    ctx->pc = 0x1545E0u;
    SET_GPR_U32(ctx, 31, 0x1545E8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1545E0u, 0x1545E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1545E8u;
label_1545e8:
    // 0x1545e8: 0x24040074  addiu       $a0, $zero, 0x74
    ctx->pc = 0x1545e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_1545ec:
    // 0x1545ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1545ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1545f0:
    // 0x1545f0: 0xc0400e0  jal         func_100380
label_1545f4:
    if (ctx->pc == 0x1545F4u) {
        ctx->pc = 0x1545F8u;
        goto label_1545f8;
    }
    ctx->pc = 0x1545F0u;
    SET_GPR_U32(ctx, 31, 0x1545F8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1545F0u, 0x1545F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1545F8u;
label_1545f8:
    // 0x1545f8: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x1545f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_1545fc:
    // 0x1545fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1545fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_154600:
    // 0x154600: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_154604:
    if (ctx->pc == 0x154604u) {
        ctx->pc = 0x154608u;
        goto label_154608;
    }
    ctx->pc = 0x154600u;
    {
        const bool branch_taken_0x154600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154600) {
            ctx->pc = 0x154618u;
            goto label_154618;
        }
    }
    ctx->pc = 0x154608u;
label_154608:
    // 0x154608: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x154608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_15460c:
    // 0x15460c: 0xc05c680  jal         func_171A00
label_154610:
    if (ctx->pc == 0x154610u) {
        ctx->pc = 0x154614u;
        goto label_154614;
    }
    ctx->pc = 0x15460Cu;
    SET_GPR_U32(ctx, 31, 0x154614u);
    ctx->pc = 0x171A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171A00u, 0x15460Cu, 0x154614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154614u;
label_154614:
    // 0x154614: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x154614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_154618:
    // 0x154618: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x154618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_15461c:
    // 0x15461c: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x15461cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_154620:
    // 0x154620: 0x100000ea  b           . + 4 + (0xEA << 2)
label_154624:
    if (ctx->pc == 0x154624u) {
        ctx->pc = 0x154628u;
        goto label_154628;
    }
    ctx->pc = 0x154620u;
    {
        const bool branch_taken_0x154620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154620) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x154628u;
label_154628:
    // 0x154628: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x154628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
label_15462c:
    // 0x15462c: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_154630:
    if (ctx->pc == 0x154630u) {
        ctx->pc = 0x154634u;
        goto label_154634;
    }
    ctx->pc = 0x15462Cu;
    {
        const bool branch_taken_0x15462c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15462c) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x154634u;
label_154634:
    // 0x154634: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x154634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
label_154638:
    // 0x154638: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_15463c:
    if (ctx->pc == 0x15463Cu) {
        ctx->pc = 0x154640u;
        goto label_154640;
    }
    ctx->pc = 0x154638u;
    {
        const bool branch_taken_0x154638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154638) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x154640u;
label_154640:
    // 0x154640: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x154640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_154644:
    // 0x154644: 0xc119b68  jal         func_466DA0
label_154648:
    if (ctx->pc == 0x154648u) {
        ctx->pc = 0x15464Cu;
        goto label_15464c;
    }
    ctx->pc = 0x154644u;
    SET_GPR_U32(ctx, 31, 0x15464Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x154644u, 0x15464Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15464Cu;
label_15464c:
    // 0x15464c: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x15464cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_154650:
    // 0x154650: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154654:
    // 0x154654: 0xc0400e0  jal         func_100380
label_154658:
    if (ctx->pc == 0x154658u) {
        ctx->pc = 0x15465Cu;
        goto label_15465c;
    }
    ctx->pc = 0x154654u;
    SET_GPR_U32(ctx, 31, 0x15465Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x154654u, 0x15465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15465Cu;
label_15465c:
    // 0x15465c: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x15465cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_154660:
    // 0x154660: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x154660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_154664:
    // 0x154664: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_154668:
    if (ctx->pc == 0x154668u) {
        ctx->pc = 0x15466Cu;
        goto label_15466c;
    }
    ctx->pc = 0x154664u;
    {
        const bool branch_taken_0x154664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154664) {
            ctx->pc = 0x15467Cu;
            goto label_15467c;
        }
    }
    ctx->pc = 0x15466Cu;
label_15466c:
    // 0x15466c: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x15466cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_154670:
    // 0x154670: 0xc05a1ec  jal         func_1687B0
label_154674:
    if (ctx->pc == 0x154674u) {
        ctx->pc = 0x154678u;
        goto label_154678;
    }
    ctx->pc = 0x154670u;
    SET_GPR_U32(ctx, 31, 0x154678u);
    ctx->pc = 0x1687B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1687B0u, 0x154670u, 0x154678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154678u;
label_154678:
    // 0x154678: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x154678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_15467c:
    // 0x15467c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x15467cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_154680:
    // 0x154680: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x154680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_154684:
    // 0x154684: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_154688:
    if (ctx->pc == 0x154688u) {
        ctx->pc = 0x15468Cu;
        goto label_15468c;
    }
    ctx->pc = 0x154684u;
    {
        const bool branch_taken_0x154684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154684) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x15468Cu;
label_15468c:
    // 0x15468c: 0x24040094  addiu       $a0, $zero, 0x94
    ctx->pc = 0x15468cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_154690:
    // 0x154690: 0xc119b68  jal         func_466DA0
label_154694:
    if (ctx->pc == 0x154694u) {
        ctx->pc = 0x154698u;
        goto label_154698;
    }
    ctx->pc = 0x154690u;
    SET_GPR_U32(ctx, 31, 0x154698u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x154690u, 0x154698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154698u;
label_154698:
    // 0x154698: 0x24040094  addiu       $a0, $zero, 0x94
    ctx->pc = 0x154698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_15469c:
    // 0x15469c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15469cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1546a0:
    // 0x1546a0: 0xc0400e0  jal         func_100380
label_1546a4:
    if (ctx->pc == 0x1546A4u) {
        ctx->pc = 0x1546A8u;
        goto label_1546a8;
    }
    ctx->pc = 0x1546A0u;
    SET_GPR_U32(ctx, 31, 0x1546A8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1546A0u, 0x1546A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1546A8u;
label_1546a8:
    // 0x1546a8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1546a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1546ac:
    // 0x1546ac: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1546acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1546b0:
    // 0x1546b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1546b4:
    if (ctx->pc == 0x1546B4u) {
        ctx->pc = 0x1546B8u;
        goto label_1546b8;
    }
    ctx->pc = 0x1546B0u;
    {
        const bool branch_taken_0x1546b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1546b0) {
            ctx->pc = 0x1546C8u;
            goto label_1546c8;
        }
    }
    ctx->pc = 0x1546B8u;
label_1546b8:
    // 0x1546b8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1546b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1546bc:
    // 0x1546bc: 0xc05c9e4  jal         func_172790
label_1546c0:
    if (ctx->pc == 0x1546C0u) {
        ctx->pc = 0x1546C4u;
        goto label_1546c4;
    }
    ctx->pc = 0x1546BCu;
    SET_GPR_U32(ctx, 31, 0x1546C4u);
    ctx->pc = 0x172790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172790u, 0x1546BCu, 0x1546C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1546C4u;
label_1546c4:
    // 0x1546c4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1546c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1546c8:
    // 0x1546c8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1546c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1546cc:
    // 0x1546cc: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x1546ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_1546d0:
    // 0x1546d0: 0x100000be  b           . + 4 + (0xBE << 2)
label_1546d4:
    if (ctx->pc == 0x1546D4u) {
        ctx->pc = 0x1546D8u;
        goto label_1546d8;
    }
    ctx->pc = 0x1546D0u;
    {
        const bool branch_taken_0x1546d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1546d0) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x1546D8u;
label_1546d8:
    // 0x1546d8: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x1546d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1546dc:
    // 0x1546dc: 0xc119b68  jal         func_466DA0
label_1546e0:
    if (ctx->pc == 0x1546E0u) {
        ctx->pc = 0x1546E4u;
        goto label_1546e4;
    }
    ctx->pc = 0x1546DCu;
    SET_GPR_U32(ctx, 31, 0x1546E4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1546DCu, 0x1546E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1546E4u;
label_1546e4:
    // 0x1546e4: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x1546e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1546e8:
    // 0x1546e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1546e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1546ec:
    // 0x1546ec: 0xc0400e0  jal         func_100380
label_1546f0:
    if (ctx->pc == 0x1546F0u) {
        ctx->pc = 0x1546F4u;
        goto label_1546f4;
    }
    ctx->pc = 0x1546ECu;
    SET_GPR_U32(ctx, 31, 0x1546F4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1546ECu, 0x1546F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1546F4u;
label_1546f4:
    // 0x1546f4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1546f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_1546f8:
    // 0x1546f8: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1546f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1546fc:
    // 0x1546fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_154700:
    if (ctx->pc == 0x154700u) {
        ctx->pc = 0x154704u;
        goto label_154704;
    }
    ctx->pc = 0x1546FCu;
    {
        const bool branch_taken_0x1546fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1546fc) {
            ctx->pc = 0x154714u;
            goto label_154714;
        }
    }
    ctx->pc = 0x154704u;
label_154704:
    // 0x154704: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x154704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_154708:
    // 0x154708: 0xc05e9f8  jal         func_17A7E0
label_15470c:
    if (ctx->pc == 0x15470Cu) {
        ctx->pc = 0x154710u;
        goto label_154710;
    }
    ctx->pc = 0x154708u;
    SET_GPR_U32(ctx, 31, 0x154710u);
    ctx->pc = 0x17A7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7E0u, 0x154708u, 0x154710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154710u;
label_154710:
    // 0x154710: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x154710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_154714:
    // 0x154714: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x154714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_154718:
    // 0x154718: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x154718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_15471c:
    // 0x15471c: 0x100000ab  b           . + 4 + (0xAB << 2)
label_154720:
    if (ctx->pc == 0x154720u) {
        ctx->pc = 0x154724u;
        goto label_154724;
    }
    ctx->pc = 0x15471Cu;
    {
        const bool branch_taken_0x15471c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15471c) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x154724u;
label_154724:
    // 0x154724: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x154724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_154728:
    // 0x154728: 0xc119b68  jal         func_466DA0
label_15472c:
    if (ctx->pc == 0x15472Cu) {
        ctx->pc = 0x154730u;
        goto label_154730;
    }
    ctx->pc = 0x154728u;
    SET_GPR_U32(ctx, 31, 0x154730u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x154728u, 0x154730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154730u;
label_154730:
    // 0x154730: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x154730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_154734:
    // 0x154734: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154738:
    // 0x154738: 0xc0400e0  jal         func_100380
label_15473c:
    if (ctx->pc == 0x15473Cu) {
        ctx->pc = 0x154740u;
        goto label_154740;
    }
    ctx->pc = 0x154738u;
    SET_GPR_U32(ctx, 31, 0x154740u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x154738u, 0x154740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154740u;
label_154740:
    // 0x154740: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x154740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_154744:
    // 0x154744: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x154744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_154748:
    // 0x154748: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15474c:
    if (ctx->pc == 0x15474Cu) {
        ctx->pc = 0x154750u;
        goto label_154750;
    }
    ctx->pc = 0x154748u;
    {
        const bool branch_taken_0x154748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154748) {
            ctx->pc = 0x154760u;
            goto label_154760;
        }
    }
    ctx->pc = 0x154750u;
label_154750:
    // 0x154750: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x154750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_154754:
    // 0x154754: 0xc05a330  jal         func_168CC0
label_154758:
    if (ctx->pc == 0x154758u) {
        ctx->pc = 0x15475Cu;
        goto label_15475c;
    }
    ctx->pc = 0x154754u;
    SET_GPR_U32(ctx, 31, 0x15475Cu);
    ctx->pc = 0x168CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168CC0u, 0x154754u, 0x15475Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15475Cu;
label_15475c:
    // 0x15475c: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x15475cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_154760:
    // 0x154760: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x154760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_154764:
    // 0x154764: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x154764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_154768:
    // 0x154768: 0x10000098  b           . + 4 + (0x98 << 2)
label_15476c:
    if (ctx->pc == 0x15476Cu) {
        ctx->pc = 0x154770u;
        goto label_154770;
    }
    ctx->pc = 0x154768u;
    {
        const bool branch_taken_0x154768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154768) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x154770u;
label_154770:
    // 0x154770: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x154770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_154774:
    // 0x154774: 0xc119b68  jal         func_466DA0
label_154778:
    if (ctx->pc == 0x154778u) {
        ctx->pc = 0x15477Cu;
        goto label_15477c;
    }
    ctx->pc = 0x154774u;
    SET_GPR_U32(ctx, 31, 0x15477Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x154774u, 0x15477Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15477Cu;
label_15477c:
    // 0x15477c: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x15477cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_154780:
    // 0x154780: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154784:
    // 0x154784: 0xc0400e0  jal         func_100380
label_154788:
    if (ctx->pc == 0x154788u) {
        ctx->pc = 0x15478Cu;
        goto label_15478c;
    }
    ctx->pc = 0x154784u;
    SET_GPR_U32(ctx, 31, 0x15478Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x154784u, 0x15478Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15478Cu;
label_15478c:
    // 0x15478c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x15478cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154790:
    // 0x154790: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
label_154794:
    if (ctx->pc == 0x154794u) {
        ctx->pc = 0x154798u;
        goto label_154798;
    }
    ctx->pc = 0x154790u;
    {
        const bool branch_taken_0x154790 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x154790) {
            ctx->pc = 0x1547A8u;
            goto label_1547a8;
        }
    }
    ctx->pc = 0x154798u;
label_154798:
    // 0x154798: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x154798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_15479c:
    // 0x15479c: 0xc061f90  jal         func_187E40
label_1547a0:
    if (ctx->pc == 0x1547A0u) {
        ctx->pc = 0x1547A4u;
        goto label_1547a4;
    }
    ctx->pc = 0x15479Cu;
    SET_GPR_U32(ctx, 31, 0x1547A4u);
    ctx->pc = 0x187E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187E40u, 0x15479Cu, 0x1547A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1547A4u;
label_1547a4:
    // 0x1547a4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1547a4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1547a8:
    // 0x1547a8: 0xafbe00e8  sw          $fp, 0xE8($sp)
    ctx->pc = 0x1547a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 30));
label_1547ac:
    // 0x1547ac: 0x10000087  b           . + 4 + (0x87 << 2)
label_1547b0:
    if (ctx->pc == 0x1547B0u) {
        ctx->pc = 0x1547B4u;
        goto label_1547b4;
    }
    ctx->pc = 0x1547ACu;
    {
        const bool branch_taken_0x1547ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1547ac) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x1547B4u;
label_1547b4:
    // 0x1547b4: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1547b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1547b8:
    // 0x1547b8: 0xc119b68  jal         func_466DA0
label_1547bc:
    if (ctx->pc == 0x1547BCu) {
        ctx->pc = 0x1547C0u;
        goto label_1547c0;
    }
    ctx->pc = 0x1547B8u;
    SET_GPR_U32(ctx, 31, 0x1547C0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1547B8u, 0x1547C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1547C0u;
label_1547c0:
    // 0x1547c0: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1547c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1547c4:
    // 0x1547c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1547c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1547c8:
    // 0x1547c8: 0xc0400e0  jal         func_100380
label_1547cc:
    if (ctx->pc == 0x1547CCu) {
        ctx->pc = 0x1547D0u;
        goto label_1547d0;
    }
    ctx->pc = 0x1547C8u;
    SET_GPR_U32(ctx, 31, 0x1547D0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1547C8u, 0x1547D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1547D0u;
label_1547d0:
    // 0x1547d0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1547d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1547d4:
    // 0x1547d4: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_1547d8:
    if (ctx->pc == 0x1547D8u) {
        ctx->pc = 0x1547DCu;
        goto label_1547dc;
    }
    ctx->pc = 0x1547D4u;
    {
        const bool branch_taken_0x1547d4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1547d4) {
            ctx->pc = 0x1547ECu;
            goto label_1547ec;
        }
    }
    ctx->pc = 0x1547DCu;
label_1547dc:
    // 0x1547dc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1547dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1547e0:
    // 0x1547e0: 0xc05d0c8  jal         func_174320
label_1547e4:
    if (ctx->pc == 0x1547E4u) {
        ctx->pc = 0x1547E8u;
        goto label_1547e8;
    }
    ctx->pc = 0x1547E0u;
    SET_GPR_U32(ctx, 31, 0x1547E8u);
    ctx->pc = 0x174320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174320u, 0x1547E0u, 0x1547E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1547E8u;
label_1547e8:
    // 0x1547e8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1547e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1547ec:
    // 0x1547ec: 0xafb700e8  sw          $s7, 0xE8($sp)
    ctx->pc = 0x1547ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 23));
label_1547f0:
    // 0x1547f0: 0x10000076  b           . + 4 + (0x76 << 2)
label_1547f4:
    if (ctx->pc == 0x1547F4u) {
        ctx->pc = 0x1547F8u;
        goto label_1547f8;
    }
    ctx->pc = 0x1547F0u;
    {
        const bool branch_taken_0x1547f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1547f0) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x1547F8u;
label_1547f8:
    // 0x1547f8: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x1547f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1547fc:
    // 0x1547fc: 0xc119b68  jal         func_466DA0
label_154800:
    if (ctx->pc == 0x154800u) {
        ctx->pc = 0x154804u;
        goto label_154804;
    }
    ctx->pc = 0x1547FCu;
    SET_GPR_U32(ctx, 31, 0x154804u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1547FCu, 0x154804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154804u;
label_154804:
    // 0x154804: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x154804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_154808:
    // 0x154808: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15480c:
    // 0x15480c: 0xc0400e0  jal         func_100380
label_154810:
    if (ctx->pc == 0x154810u) {
        ctx->pc = 0x154814u;
        goto label_154814;
    }
    ctx->pc = 0x15480Cu;
    SET_GPR_U32(ctx, 31, 0x154814u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x15480Cu, 0x154814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154814u;
label_154814:
    // 0x154814: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x154814u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154818:
    // 0x154818: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_15481c:
    if (ctx->pc == 0x15481Cu) {
        ctx->pc = 0x154820u;
        goto label_154820;
    }
    ctx->pc = 0x154818u;
    {
        const bool branch_taken_0x154818 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x154818) {
            ctx->pc = 0x154830u;
            goto label_154830;
        }
    }
    ctx->pc = 0x154820u;
label_154820:
    // 0x154820: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x154820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_154824:
    // 0x154824: 0xc062bf0  jal         func_18AFC0
label_154828:
    if (ctx->pc == 0x154828u) {
        ctx->pc = 0x15482Cu;
        goto label_15482c;
    }
    ctx->pc = 0x154824u;
    SET_GPR_U32(ctx, 31, 0x15482Cu);
    ctx->pc = 0x18AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AFC0u, 0x154824u, 0x15482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15482Cu;
label_15482c:
    // 0x15482c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x15482cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154830:
    // 0x154830: 0xafb600e8  sw          $s6, 0xE8($sp)
    ctx->pc = 0x154830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 22));
label_154834:
    // 0x154834: 0x10000065  b           . + 4 + (0x65 << 2)
label_154838:
    if (ctx->pc == 0x154838u) {
        ctx->pc = 0x15483Cu;
        goto label_15483c;
    }
    ctx->pc = 0x154834u;
    {
        const bool branch_taken_0x154834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154834) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x15483Cu;
label_15483c:
    // 0x15483c: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x15483cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_154840:
    // 0x154840: 0xc119b68  jal         func_466DA0
label_154844:
    if (ctx->pc == 0x154844u) {
        ctx->pc = 0x154848u;
        goto label_154848;
    }
    ctx->pc = 0x154840u;
    SET_GPR_U32(ctx, 31, 0x154848u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x154840u, 0x154848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154848u;
label_154848:
    // 0x154848: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x154848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_15484c:
    // 0x15484c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15484cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154850:
    // 0x154850: 0xc0400e0  jal         func_100380
label_154854:
    if (ctx->pc == 0x154854u) {
        ctx->pc = 0x154858u;
        goto label_154858;
    }
    ctx->pc = 0x154850u;
    SET_GPR_U32(ctx, 31, 0x154858u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x154850u, 0x154858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154858u;
label_154858:
    // 0x154858: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x154858u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15485c:
    // 0x15485c: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_154860:
    if (ctx->pc == 0x154860u) {
        ctx->pc = 0x154864u;
        goto label_154864;
    }
    ctx->pc = 0x15485Cu;
    {
        const bool branch_taken_0x15485c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x15485c) {
            ctx->pc = 0x154874u;
            goto label_154874;
        }
    }
    ctx->pc = 0x154864u;
label_154864:
    // 0x154864: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x154864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_154868:
    // 0x154868: 0xc05927c  jal         func_1649F0
label_15486c:
    if (ctx->pc == 0x15486Cu) {
        ctx->pc = 0x154870u;
        goto label_154870;
    }
    ctx->pc = 0x154868u;
    SET_GPR_U32(ctx, 31, 0x154870u);
    ctx->pc = 0x1649F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1649F0u, 0x154868u, 0x154870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154870u;
label_154870:
    // 0x154870: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x154870u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154874:
    // 0x154874: 0xafb500e8  sw          $s5, 0xE8($sp)
    ctx->pc = 0x154874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 21));
label_154878:
    // 0x154878: 0x10000054  b           . + 4 + (0x54 << 2)
label_15487c:
    if (ctx->pc == 0x15487Cu) {
        ctx->pc = 0x154880u;
        goto label_154880;
    }
    ctx->pc = 0x154878u;
    {
        const bool branch_taken_0x154878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154878) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x154880u;
label_154880:
    // 0x154880: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x154880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_154884:
    // 0x154884: 0xc119b68  jal         func_466DA0
label_154888:
    if (ctx->pc == 0x154888u) {
        ctx->pc = 0x15488Cu;
        goto label_15488c;
    }
    ctx->pc = 0x154884u;
    SET_GPR_U32(ctx, 31, 0x15488Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x154884u, 0x15488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15488Cu;
label_15488c:
    // 0x15488c: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x15488cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_154890:
    // 0x154890: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154894:
    // 0x154894: 0xc0400e0  jal         func_100380
label_154898:
    if (ctx->pc == 0x154898u) {
        ctx->pc = 0x15489Cu;
        goto label_15489c;
    }
    ctx->pc = 0x154894u;
    SET_GPR_U32(ctx, 31, 0x15489Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x154894u, 0x15489Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15489Cu;
label_15489c:
    // 0x15489c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x15489cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1548a0:
    // 0x1548a0: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_1548a4:
    if (ctx->pc == 0x1548A4u) {
        ctx->pc = 0x1548A8u;
        goto label_1548a8;
    }
    ctx->pc = 0x1548A0u;
    {
        const bool branch_taken_0x1548a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1548a0) {
            ctx->pc = 0x1548B8u;
            goto label_1548b8;
        }
    }
    ctx->pc = 0x1548A8u;
label_1548a8:
    // 0x1548a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1548a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1548ac:
    // 0x1548ac: 0xc059f18  jal         func_167C60
label_1548b0:
    if (ctx->pc == 0x1548B0u) {
        ctx->pc = 0x1548B4u;
        goto label_1548b4;
    }
    ctx->pc = 0x1548ACu;
    SET_GPR_U32(ctx, 31, 0x1548B4u);
    ctx->pc = 0x167C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167C60u, 0x1548ACu, 0x1548B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1548B4u;
label_1548b4:
    // 0x1548b4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1548b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1548b8:
    // 0x1548b8: 0xafb400e8  sw          $s4, 0xE8($sp)
    ctx->pc = 0x1548b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 20));
label_1548bc:
    // 0x1548bc: 0x10000043  b           . + 4 + (0x43 << 2)
label_1548c0:
    if (ctx->pc == 0x1548C0u) {
        ctx->pc = 0x1548C4u;
        goto label_1548c4;
    }
    ctx->pc = 0x1548BCu;
    {
        const bool branch_taken_0x1548bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1548bc) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x1548C4u;
label_1548c4:
    // 0x1548c4: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x1548c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1548c8:
    // 0x1548c8: 0xc119b68  jal         func_466DA0
label_1548cc:
    if (ctx->pc == 0x1548CCu) {
        ctx->pc = 0x1548D0u;
        goto label_1548d0;
    }
    ctx->pc = 0x1548C8u;
    SET_GPR_U32(ctx, 31, 0x1548D0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1548C8u, 0x1548D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1548D0u;
label_1548d0:
    // 0x1548d0: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x1548d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1548d4:
    // 0x1548d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1548d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1548d8:
    // 0x1548d8: 0xc0400e0  jal         func_100380
label_1548dc:
    if (ctx->pc == 0x1548DCu) {
        ctx->pc = 0x1548E0u;
        goto label_1548e0;
    }
    ctx->pc = 0x1548D8u;
    SET_GPR_U32(ctx, 31, 0x1548E0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1548D8u, 0x1548E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1548E0u;
label_1548e0:
    // 0x1548e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1548e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1548e4:
    // 0x1548e4: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_1548e8:
    if (ctx->pc == 0x1548E8u) {
        ctx->pc = 0x1548ECu;
        goto label_1548ec;
    }
    ctx->pc = 0x1548E4u;
    {
        const bool branch_taken_0x1548e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1548e4) {
            ctx->pc = 0x1548FCu;
            goto label_1548fc;
        }
    }
    ctx->pc = 0x1548ECu;
label_1548ec:
    // 0x1548ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1548ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1548f0:
    // 0x1548f0: 0xc058ee4  jal         func_163B90
label_1548f4:
    if (ctx->pc == 0x1548F4u) {
        ctx->pc = 0x1548F8u;
        goto label_1548f8;
    }
    ctx->pc = 0x1548F0u;
    SET_GPR_U32(ctx, 31, 0x1548F8u);
    ctx->pc = 0x163B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163B90u, 0x1548F0u, 0x1548F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1548F8u;
label_1548f8:
    // 0x1548f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1548f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1548fc:
    // 0x1548fc: 0xafb300e8  sw          $s3, 0xE8($sp)
    ctx->pc = 0x1548fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 19));
label_154900:
    // 0x154900: 0x10000032  b           . + 4 + (0x32 << 2)
label_154904:
    if (ctx->pc == 0x154904u) {
        ctx->pc = 0x154908u;
        goto label_154908;
    }
    ctx->pc = 0x154900u;
    {
        const bool branch_taken_0x154900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154900) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x154908u;
label_154908:
    // 0x154908: 0x240400fc  addiu       $a0, $zero, 0xFC
    ctx->pc = 0x154908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_15490c:
    // 0x15490c: 0xc119b68  jal         func_466DA0
label_154910:
    if (ctx->pc == 0x154910u) {
        ctx->pc = 0x154914u;
        goto label_154914;
    }
    ctx->pc = 0x15490Cu;
    SET_GPR_U32(ctx, 31, 0x154914u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x15490Cu, 0x154914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154914u;
label_154914:
    // 0x154914: 0x240400fc  addiu       $a0, $zero, 0xFC
    ctx->pc = 0x154914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_154918:
    // 0x154918: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15491c:
    // 0x15491c: 0xc0400e0  jal         func_100380
label_154920:
    if (ctx->pc == 0x154920u) {
        ctx->pc = 0x154924u;
        goto label_154924;
    }
    ctx->pc = 0x15491Cu;
    SET_GPR_U32(ctx, 31, 0x154924u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x15491Cu, 0x154924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154924u;
label_154924:
    // 0x154924: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x154924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154928:
    // 0x154928: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_15492c:
    if (ctx->pc == 0x15492Cu) {
        ctx->pc = 0x154930u;
        goto label_154930;
    }
    ctx->pc = 0x154928u;
    {
        const bool branch_taken_0x154928 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x154928) {
            ctx->pc = 0x154940u;
            goto label_154940;
        }
    }
    ctx->pc = 0x154930u;
label_154930:
    // 0x154930: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x154930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_154934:
    // 0x154934: 0xc060e24  jal         func_183890
label_154938:
    if (ctx->pc == 0x154938u) {
        ctx->pc = 0x15493Cu;
        goto label_15493c;
    }
    ctx->pc = 0x154934u;
    SET_GPR_U32(ctx, 31, 0x15493Cu);
    ctx->pc = 0x183890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183890u, 0x154934u, 0x15493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15493Cu;
label_15493c:
    // 0x15493c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15493cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154940:
    // 0x154940: 0xafb200e8  sw          $s2, 0xE8($sp)
    ctx->pc = 0x154940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 18));
label_154944:
    // 0x154944: 0x10000021  b           . + 4 + (0x21 << 2)
label_154948:
    if (ctx->pc == 0x154948u) {
        ctx->pc = 0x15494Cu;
        goto label_15494c;
    }
    ctx->pc = 0x154944u;
    {
        const bool branch_taken_0x154944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154944) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x15494Cu;
label_15494c:
    // 0x15494c: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x15494cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_154950:
    // 0x154950: 0xc119b68  jal         func_466DA0
label_154954:
    if (ctx->pc == 0x154954u) {
        ctx->pc = 0x154958u;
        goto label_154958;
    }
    ctx->pc = 0x154950u;
    SET_GPR_U32(ctx, 31, 0x154958u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x154950u, 0x154958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154958u;
label_154958:
    // 0x154958: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x154958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_15495c:
    // 0x15495c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15495cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154960:
    // 0x154960: 0xc0400e0  jal         func_100380
label_154964:
    if (ctx->pc == 0x154964u) {
        ctx->pc = 0x154968u;
        goto label_154968;
    }
    ctx->pc = 0x154960u;
    SET_GPR_U32(ctx, 31, 0x154968u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x154960u, 0x154968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154968u;
label_154968:
    // 0x154968: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x154968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15496c:
    // 0x15496c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_154970:
    if (ctx->pc == 0x154970u) {
        ctx->pc = 0x154974u;
        goto label_154974;
    }
    ctx->pc = 0x15496Cu;
    {
        const bool branch_taken_0x15496c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15496c) {
            ctx->pc = 0x154984u;
            goto label_154984;
        }
    }
    ctx->pc = 0x154974u;
label_154974:
    // 0x154974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x154974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_154978:
    // 0x154978: 0xc063028  jal         func_18C0A0
label_15497c:
    if (ctx->pc == 0x15497Cu) {
        ctx->pc = 0x154980u;
        goto label_154980;
    }
    ctx->pc = 0x154978u;
    SET_GPR_U32(ctx, 31, 0x154980u);
    ctx->pc = 0x18C0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C0A0u, 0x154978u, 0x154980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154980u;
label_154980:
    // 0x154980: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x154980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154984:
    // 0x154984: 0xafb100e8  sw          $s1, 0xE8($sp)
    ctx->pc = 0x154984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 17));
label_154988:
    // 0x154988: 0x10000010  b           . + 4 + (0x10 << 2)
label_15498c:
    if (ctx->pc == 0x15498Cu) {
        ctx->pc = 0x154990u;
        goto label_154990;
    }
    ctx->pc = 0x154988u;
    {
        const bool branch_taken_0x154988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154988) {
            ctx->pc = 0x1549CCu;
            goto label_1549cc;
        }
    }
    ctx->pc = 0x154990u;
label_154990:
    // 0x154990: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x154990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_154994:
    // 0x154994: 0xc119b68  jal         func_466DA0
label_154998:
    if (ctx->pc == 0x154998u) {
        ctx->pc = 0x15499Cu;
        goto label_15499c;
    }
    ctx->pc = 0x154994u;
    SET_GPR_U32(ctx, 31, 0x15499Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x154994u, 0x15499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15499Cu;
label_15499c:
    // 0x15499c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x15499cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1549a0:
    // 0x1549a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1549a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1549a4:
    // 0x1549a4: 0xc0400e0  jal         func_100380
label_1549a8:
    if (ctx->pc == 0x1549A8u) {
        ctx->pc = 0x1549ACu;
        goto label_1549ac;
    }
    ctx->pc = 0x1549A4u;
    SET_GPR_U32(ctx, 31, 0x1549ACu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1549A4u, 0x1549ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1549ACu;
label_1549ac:
    // 0x1549ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1549acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1549b0:
    // 0x1549b0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_1549b4:
    if (ctx->pc == 0x1549B4u) {
        ctx->pc = 0x1549B8u;
        goto label_1549b8;
    }
    ctx->pc = 0x1549B0u;
    {
        const bool branch_taken_0x1549b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1549b0) {
            ctx->pc = 0x1549C8u;
            goto label_1549c8;
        }
    }
    ctx->pc = 0x1549B8u;
label_1549b8:
    // 0x1549b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1549b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1549bc:
    // 0x1549bc: 0xc05970c  jal         func_165C30
label_1549c0:
    if (ctx->pc == 0x1549C0u) {
        ctx->pc = 0x1549C4u;
        goto label_1549c4;
    }
    ctx->pc = 0x1549BCu;
    SET_GPR_U32(ctx, 31, 0x1549C4u);
    ctx->pc = 0x165C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165C30u, 0x1549BCu, 0x1549C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1549C4u;
label_1549c4:
    // 0x1549c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1549c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1549c8:
    // 0x1549c8: 0xafb000e8  sw          $s0, 0xE8($sp)
    ctx->pc = 0x1549c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 16));
label_1549cc:
    // 0x1549cc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1549ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_1549d0:
    // 0x1549d0: 0x1002000c  beq         $zero, $v0, . + 4 + (0xC << 2)
label_1549d4:
    if (ctx->pc == 0x1549D4u) {
        ctx->pc = 0x1549D8u;
        goto label_1549d8;
    }
    ctx->pc = 0x1549D0u;
    {
        const bool branch_taken_0x1549d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x1549d0) {
            ctx->pc = 0x154A04u;
            goto label_154a04;
        }
    }
    ctx->pc = 0x1549D8u;
label_1549d8:
    // 0x1549d8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x1549d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_1549dc:
    // 0x1549dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1549dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1549e0:
    // 0x1549e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1549e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1549e4:
    // 0x1549e4: 0x320f809  jalr        $t9
label_1549e8:
    if (ctx->pc == 0x1549E8u) {
        ctx->pc = 0x1549ECu;
        goto label_1549ec;
    }
    ctx->pc = 0x1549E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1549ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1549E4u, 0x1549ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1549ECu;
label_1549ec:
    // 0x1549ec: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1549ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1549f0:
    // 0x1549f0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1549f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1549f4:
    // 0x1549f4: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x1549f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_1549f8:
    // 0x1549f8: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x1549f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_1549fc:
    // 0x1549fc: 0xc05508c  jal         func_154230
label_154a00:
    if (ctx->pc == 0x154A00u) {
        ctx->pc = 0x154A04u;
        goto label_154a04;
    }
    ctx->pc = 0x1549FCu;
    SET_GPR_U32(ctx, 31, 0x154A04u);
    ctx->pc = 0x154230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154230u, 0x1549FCu, 0x154A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A04u;
label_154a04:
    // 0x154a04: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x154a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_154a08:
    // 0x154a08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x154a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_154a0c:
    // 0x154a0c: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x154a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_154a10:
    // 0x154a10: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x154a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_154a14:
    // 0x154a14: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x154a14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_154a18:
    // 0x154a18: 0x1440fe48  bnez        $v0, . + 4 + (-0x1B8 << 2)
label_154a1c:
    if (ctx->pc == 0x154A1Cu) {
        ctx->pc = 0x154A20u;
        goto label_154a20;
    }
    ctx->pc = 0x154A18u;
    {
        const bool branch_taken_0x154a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154a18) {
            ctx->pc = 0x15433Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15433c;
        }
    }
    ctx->pc = 0x154A20u;
label_154a20:
    // 0x154a20: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x154a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_154a24:
    // 0x154a24: 0x27a400e4  addiu       $a0, $sp, 0xE4
    ctx->pc = 0x154a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_154a28:
    // 0x154a28: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x154a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_154a2c:
    // 0x154a2c: 0xc055008  jal         func_154020
label_154a30:
    if (ctx->pc == 0x154A30u) {
        ctx->pc = 0x154A34u;
        goto label_154a34;
    }
    ctx->pc = 0x154A2Cu;
    SET_GPR_U32(ctx, 31, 0x154A34u);
    ctx->pc = 0x154020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154020u, 0x154A2Cu, 0x154A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A34u;
label_154a34:
    // 0x154a34: 0x10000036  b           . + 4 + (0x36 << 2)
label_154a38:
    if (ctx->pc == 0x154A38u) {
        ctx->pc = 0x154A3Cu;
        goto label_154a3c;
    }
    ctx->pc = 0x154A34u;
    {
        const bool branch_taken_0x154a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154a34) {
            ctx->pc = 0x154B10u;
            goto label_154b10;
        }
    }
    ctx->pc = 0x154A3Cu;
label_154a3c:
    // 0x154a3c: 0x27a400e4  addiu       $a0, $sp, 0xE4
    ctx->pc = 0x154a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_154a40:
    // 0x154a40: 0xc054ff0  jal         func_153FC0
label_154a44:
    if (ctx->pc == 0x154A44u) {
        ctx->pc = 0x154A48u;
        goto label_154a48;
    }
    ctx->pc = 0x154A40u;
    SET_GPR_U32(ctx, 31, 0x154A48u);
    ctx->pc = 0x153FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FC0u, 0x154A40u, 0x154A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A48u;
label_154a48:
    // 0x154a48: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x154a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_154a4c:
    // 0x154a4c: 0xc055fa4  jal         func_157E90
label_154a50:
    if (ctx->pc == 0x154A50u) {
        ctx->pc = 0x154A54u;
        goto label_154a54;
    }
    ctx->pc = 0x154A4Cu;
    SET_GPR_U32(ctx, 31, 0x154A54u);
    ctx->pc = 0x157E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157E90u, 0x154A4Cu, 0x154A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A54u;
label_154a54:
    // 0x154a54: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x154a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_154a58:
    // 0x154a58: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
label_154a5c:
    if (ctx->pc == 0x154A5Cu) {
        ctx->pc = 0x154A60u;
        goto label_154a60;
    }
    ctx->pc = 0x154A58u;
    {
        const bool branch_taken_0x154a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x154a58) {
            ctx->pc = 0x154A88u;
            goto label_154a88;
        }
    }
    ctx->pc = 0x154A60u;
label_154a60:
    // 0x154a60: 0x27a400e4  addiu       $a0, $sp, 0xE4
    ctx->pc = 0x154a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_154a64:
    // 0x154a64: 0xc054ff0  jal         func_153FC0
label_154a68:
    if (ctx->pc == 0x154A68u) {
        ctx->pc = 0x154A6Cu;
        goto label_154a6c;
    }
    ctx->pc = 0x154A64u;
    SET_GPR_U32(ctx, 31, 0x154A6Cu);
    ctx->pc = 0x153FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FC0u, 0x154A64u, 0x154A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A6Cu;
label_154a6c:
    // 0x154a6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x154a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_154a70:
    // 0x154a70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x154a70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_154a74:
    // 0x154a74: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x154a74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_154a78:
    // 0x154a78: 0x320f809  jalr        $t9
label_154a7c:
    if (ctx->pc == 0x154A7Cu) {
        ctx->pc = 0x154A80u;
        goto label_154a80;
    }
    ctx->pc = 0x154A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x154A80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154A78u, 0x154A80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154A80u;
label_154a80:
    // 0x154a80: 0x10000020  b           . + 4 + (0x20 << 2)
label_154a84:
    if (ctx->pc == 0x154A84u) {
        ctx->pc = 0x154A88u;
        goto label_154a88;
    }
    ctx->pc = 0x154A80u;
    {
        const bool branch_taken_0x154a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154a80) {
            ctx->pc = 0x154B04u;
            goto label_154b04;
        }
    }
    ctx->pc = 0x154A88u;
label_154a88:
    // 0x154a88: 0x27a400e4  addiu       $a0, $sp, 0xE4
    ctx->pc = 0x154a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_154a8c:
    // 0x154a8c: 0xc054ff0  jal         func_153FC0
label_154a90:
    if (ctx->pc == 0x154A90u) {
        ctx->pc = 0x154A94u;
        goto label_154a94;
    }
    ctx->pc = 0x154A8Cu;
    SET_GPR_U32(ctx, 31, 0x154A94u);
    ctx->pc = 0x153FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FC0u, 0x154A8Cu, 0x154A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A94u;
label_154a94:
    // 0x154a94: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x154a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_154a98:
    // 0x154a98: 0x27858d20  addiu       $a1, $gp, -0x72E0
    ctx->pc = 0x154a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937888));
label_154a9c:
    // 0x154a9c: 0xc0552e4  jal         func_154B90
label_154aa0:
    if (ctx->pc == 0x154AA0u) {
        ctx->pc = 0x154AA4u;
        goto label_154aa4;
    }
    ctx->pc = 0x154A9Cu;
    SET_GPR_U32(ctx, 31, 0x154AA4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x154A9Cu, 0x154AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154AA4u;
label_154aa4:
    // 0x154aa4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x154aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_154aa8:
    // 0x154aa8: 0x27a400e4  addiu       $a0, $sp, 0xE4
    ctx->pc = 0x154aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_154aac:
    // 0x154aac: 0xc054ff0  jal         func_153FC0
label_154ab0:
    if (ctx->pc == 0x154AB0u) {
        ctx->pc = 0x154AB4u;
        goto label_154ab4;
    }
    ctx->pc = 0x154AACu;
    SET_GPR_U32(ctx, 31, 0x154AB4u);
    ctx->pc = 0x153FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FC0u, 0x154AACu, 0x154AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154AB4u;
label_154ab4:
    // 0x154ab4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x154ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_154ab8:
    // 0x154ab8: 0xc0552dc  jal         func_154B70
label_154abc:
    if (ctx->pc == 0x154ABCu) {
        ctx->pc = 0x154AC0u;
        goto label_154ac0;
    }
    ctx->pc = 0x154AB8u;
    SET_GPR_U32(ctx, 31, 0x154AC0u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x154AB8u, 0x154AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154AC0u;
label_154ac0:
    // 0x154ac0: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x154ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_154ac4:
    // 0x154ac4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x154ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154ac8:
    // 0x154ac8: 0x27868d28  addiu       $a2, $gp, -0x72D8
    ctx->pc = 0x154ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937896));
label_154acc:
    // 0x154acc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x154accu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154ad0:
    // 0x154ad0: 0xc08c800  jal         func_232000
label_154ad4:
    if (ctx->pc == 0x154AD4u) {
        ctx->pc = 0x154AD8u;
        goto label_154ad8;
    }
    ctx->pc = 0x154AD0u;
    SET_GPR_U32(ctx, 31, 0x154AD8u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x154AD0u, 0x154AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154AD8u;
label_154ad8:
    // 0x154ad8: 0x27a400e4  addiu       $a0, $sp, 0xE4
    ctx->pc = 0x154ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_154adc:
    // 0x154adc: 0xc054ff0  jal         func_153FC0
label_154ae0:
    if (ctx->pc == 0x154AE0u) {
        ctx->pc = 0x154AE4u;
        goto label_154ae4;
    }
    ctx->pc = 0x154ADCu;
    SET_GPR_U32(ctx, 31, 0x154AE4u);
    ctx->pc = 0x153FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FC0u, 0x154ADCu, 0x154AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154AE4u;
label_154ae4:
    // 0x154ae4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x154ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_154ae8:
    // 0x154ae8: 0xc0552dc  jal         func_154B70
label_154aec:
    if (ctx->pc == 0x154AECu) {
        ctx->pc = 0x154AF0u;
        goto label_154af0;
    }
    ctx->pc = 0x154AE8u;
    SET_GPR_U32(ctx, 31, 0x154AF0u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x154AE8u, 0x154AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154AF0u;
label_154af0:
    // 0x154af0: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x154af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_154af4:
    // 0x154af4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x154af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154af8:
    // 0x154af8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x154af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154afc:
    // 0x154afc: 0xc08c8dc  jal         func_232370
label_154b00:
    if (ctx->pc == 0x154B00u) {
        ctx->pc = 0x154B04u;
        goto label_154b04;
    }
    ctx->pc = 0x154AFCu;
    SET_GPR_U32(ctx, 31, 0x154B04u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x154AFCu, 0x154B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B04u;
label_154b04:
    // 0x154b04: 0x27a400e4  addiu       $a0, $sp, 0xE4
    ctx->pc = 0x154b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_154b08:
    // 0x154b08: 0xc054fd0  jal         func_153F40
label_154b0c:
    if (ctx->pc == 0x154B0Cu) {
        ctx->pc = 0x154B10u;
        goto label_154b10;
    }
    ctx->pc = 0x154B08u;
    SET_GPR_U32(ctx, 31, 0x154B10u);
    ctx->pc = 0x153F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153F40u, 0x154B08u, 0x154B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B10u;
label_154b10:
    // 0x154b10: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x154b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_154b14:
    // 0x154b14: 0x27a400dc  addiu       $a0, $sp, 0xDC
    ctx->pc = 0x154b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_154b18:
    // 0x154b18: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x154b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_154b1c:
    // 0x154b1c: 0xc054fa4  jal         func_153E90
label_154b20:
    if (ctx->pc == 0x154B20u) {
        ctx->pc = 0x154B24u;
        goto label_154b24;
    }
    ctx->pc = 0x154B1Cu;
    SET_GPR_U32(ctx, 31, 0x154B24u);
    ctx->pc = 0x153E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153E90u, 0x154B1Cu, 0x154B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B24u;
label_154b24:
    // 0x154b24: 0x27a400e4  addiu       $a0, $sp, 0xE4
    ctx->pc = 0x154b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_154b28:
    // 0x154b28: 0x27a500dc  addiu       $a1, $sp, 0xDC
    ctx->pc = 0x154b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_154b2c:
    // 0x154b2c: 0xc041998  jal         func_106660
label_154b30:
    if (ctx->pc == 0x154B30u) {
        ctx->pc = 0x154B34u;
        goto label_154b34;
    }
    ctx->pc = 0x154B2Cu;
    SET_GPR_U32(ctx, 31, 0x154B34u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x154B2Cu, 0x154B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B34u;
label_154b34:
    // 0x154b34: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
label_154b38:
    if (ctx->pc == 0x154B38u) {
        ctx->pc = 0x154B3Cu;
        goto label_154b3c;
    }
    ctx->pc = 0x154B34u;
    {
        const bool branch_taken_0x154b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154b34) {
            ctx->pc = 0x154A3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154a3c;
        }
    }
    ctx->pc = 0x154B3Cu;
label_154b3c:
    // 0x154b3c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x154b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_154b40:
    // 0x154b40: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x154b40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_154b44:
    // 0x154b44: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x154b44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_154b48:
    // 0x154b48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x154b48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_154b4c:
    // 0x154b4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x154b4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_154b50:
    // 0x154b50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x154b50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_154b54:
    // 0x154b54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x154b54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_154b58:
    // 0x154b58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x154b58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_154b5c:
    // 0x154b5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x154b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_154b60:
    // 0x154b60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x154b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_154b64:
    // 0x154b64: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x154b64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_154b68:
    // 0x154b68: 0x3e00008  jr          $ra
label_154b6c:
    if (ctx->pc == 0x154B6Cu) {
        ctx->pc = 0x154B70u;
        goto label_fallthrough_0x154b68;
    }
    ctx->pc = 0x154B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x154b68:
    ctx->pc = 0x154B70u;
}
