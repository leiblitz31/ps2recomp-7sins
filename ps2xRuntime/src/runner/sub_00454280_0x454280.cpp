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

// Function: sub_00454280
// Address: 0x454280 - 0x455d70
void sub_00454280_0x454280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00454280_0x454280");
#endif

    switch (ctx->pc) {
        case 0x454280u: goto label_454280;
        case 0x454284u: goto label_454284;
        case 0x454288u: goto label_454288;
        case 0x45428cu: goto label_45428c;
        case 0x454290u: goto label_454290;
        case 0x454294u: goto label_454294;
        case 0x454298u: goto label_454298;
        case 0x45429cu: goto label_45429c;
        case 0x4542a0u: goto label_4542a0;
        case 0x4542a4u: goto label_4542a4;
        case 0x4542a8u: goto label_4542a8;
        case 0x4542acu: goto label_4542ac;
        case 0x4542b0u: goto label_4542b0;
        case 0x4542b4u: goto label_4542b4;
        case 0x4542b8u: goto label_4542b8;
        case 0x4542bcu: goto label_4542bc;
        case 0x4542c0u: goto label_4542c0;
        case 0x4542c4u: goto label_4542c4;
        case 0x4542c8u: goto label_4542c8;
        case 0x4542ccu: goto label_4542cc;
        case 0x4542d0u: goto label_4542d0;
        case 0x4542d4u: goto label_4542d4;
        case 0x4542d8u: goto label_4542d8;
        case 0x4542dcu: goto label_4542dc;
        case 0x4542e0u: goto label_4542e0;
        case 0x4542e4u: goto label_4542e4;
        case 0x4542e8u: goto label_4542e8;
        case 0x4542ecu: goto label_4542ec;
        case 0x4542f0u: goto label_4542f0;
        case 0x4542f4u: goto label_4542f4;
        case 0x4542f8u: goto label_4542f8;
        case 0x4542fcu: goto label_4542fc;
        case 0x454300u: goto label_454300;
        case 0x454304u: goto label_454304;
        case 0x454308u: goto label_454308;
        case 0x45430cu: goto label_45430c;
        case 0x454310u: goto label_454310;
        case 0x454314u: goto label_454314;
        case 0x454318u: goto label_454318;
        case 0x45431cu: goto label_45431c;
        case 0x454320u: goto label_454320;
        case 0x454324u: goto label_454324;
        case 0x454328u: goto label_454328;
        case 0x45432cu: goto label_45432c;
        case 0x454330u: goto label_454330;
        case 0x454334u: goto label_454334;
        case 0x454338u: goto label_454338;
        case 0x45433cu: goto label_45433c;
        case 0x454340u: goto label_454340;
        case 0x454344u: goto label_454344;
        case 0x454348u: goto label_454348;
        case 0x45434cu: goto label_45434c;
        case 0x454350u: goto label_454350;
        case 0x454354u: goto label_454354;
        case 0x454358u: goto label_454358;
        case 0x45435cu: goto label_45435c;
        case 0x454360u: goto label_454360;
        case 0x454364u: goto label_454364;
        case 0x454368u: goto label_454368;
        case 0x45436cu: goto label_45436c;
        case 0x454370u: goto label_454370;
        case 0x454374u: goto label_454374;
        case 0x454378u: goto label_454378;
        case 0x45437cu: goto label_45437c;
        case 0x454380u: goto label_454380;
        case 0x454384u: goto label_454384;
        case 0x454388u: goto label_454388;
        case 0x45438cu: goto label_45438c;
        case 0x454390u: goto label_454390;
        case 0x454394u: goto label_454394;
        case 0x454398u: goto label_454398;
        case 0x45439cu: goto label_45439c;
        case 0x4543a0u: goto label_4543a0;
        case 0x4543a4u: goto label_4543a4;
        case 0x4543a8u: goto label_4543a8;
        case 0x4543acu: goto label_4543ac;
        case 0x4543b0u: goto label_4543b0;
        case 0x4543b4u: goto label_4543b4;
        case 0x4543b8u: goto label_4543b8;
        case 0x4543bcu: goto label_4543bc;
        case 0x4543c0u: goto label_4543c0;
        case 0x4543c4u: goto label_4543c4;
        case 0x4543c8u: goto label_4543c8;
        case 0x4543ccu: goto label_4543cc;
        case 0x4543d0u: goto label_4543d0;
        case 0x4543d4u: goto label_4543d4;
        case 0x4543d8u: goto label_4543d8;
        case 0x4543dcu: goto label_4543dc;
        case 0x4543e0u: goto label_4543e0;
        case 0x4543e4u: goto label_4543e4;
        case 0x4543e8u: goto label_4543e8;
        case 0x4543ecu: goto label_4543ec;
        case 0x4543f0u: goto label_4543f0;
        case 0x4543f4u: goto label_4543f4;
        case 0x4543f8u: goto label_4543f8;
        case 0x4543fcu: goto label_4543fc;
        case 0x454400u: goto label_454400;
        case 0x454404u: goto label_454404;
        case 0x454408u: goto label_454408;
        case 0x45440cu: goto label_45440c;
        case 0x454410u: goto label_454410;
        case 0x454414u: goto label_454414;
        case 0x454418u: goto label_454418;
        case 0x45441cu: goto label_45441c;
        case 0x454420u: goto label_454420;
        case 0x454424u: goto label_454424;
        case 0x454428u: goto label_454428;
        case 0x45442cu: goto label_45442c;
        case 0x454430u: goto label_454430;
        case 0x454434u: goto label_454434;
        case 0x454438u: goto label_454438;
        case 0x45443cu: goto label_45443c;
        case 0x454440u: goto label_454440;
        case 0x454444u: goto label_454444;
        case 0x454448u: goto label_454448;
        case 0x45444cu: goto label_45444c;
        case 0x454450u: goto label_454450;
        case 0x454454u: goto label_454454;
        case 0x454458u: goto label_454458;
        case 0x45445cu: goto label_45445c;
        case 0x454460u: goto label_454460;
        case 0x454464u: goto label_454464;
        case 0x454468u: goto label_454468;
        case 0x45446cu: goto label_45446c;
        case 0x454470u: goto label_454470;
        case 0x454474u: goto label_454474;
        case 0x454478u: goto label_454478;
        case 0x45447cu: goto label_45447c;
        case 0x454480u: goto label_454480;
        case 0x454484u: goto label_454484;
        case 0x454488u: goto label_454488;
        case 0x45448cu: goto label_45448c;
        case 0x454490u: goto label_454490;
        case 0x454494u: goto label_454494;
        case 0x454498u: goto label_454498;
        case 0x45449cu: goto label_45449c;
        case 0x4544a0u: goto label_4544a0;
        case 0x4544a4u: goto label_4544a4;
        case 0x4544a8u: goto label_4544a8;
        case 0x4544acu: goto label_4544ac;
        case 0x4544b0u: goto label_4544b0;
        case 0x4544b4u: goto label_4544b4;
        case 0x4544b8u: goto label_4544b8;
        case 0x4544bcu: goto label_4544bc;
        case 0x4544c0u: goto label_4544c0;
        case 0x4544c4u: goto label_4544c4;
        case 0x4544c8u: goto label_4544c8;
        case 0x4544ccu: goto label_4544cc;
        case 0x4544d0u: goto label_4544d0;
        case 0x4544d4u: goto label_4544d4;
        case 0x4544d8u: goto label_4544d8;
        case 0x4544dcu: goto label_4544dc;
        case 0x4544e0u: goto label_4544e0;
        case 0x4544e4u: goto label_4544e4;
        case 0x4544e8u: goto label_4544e8;
        case 0x4544ecu: goto label_4544ec;
        case 0x4544f0u: goto label_4544f0;
        case 0x4544f4u: goto label_4544f4;
        case 0x4544f8u: goto label_4544f8;
        case 0x4544fcu: goto label_4544fc;
        case 0x454500u: goto label_454500;
        case 0x454504u: goto label_454504;
        case 0x454508u: goto label_454508;
        case 0x45450cu: goto label_45450c;
        case 0x454510u: goto label_454510;
        case 0x454514u: goto label_454514;
        case 0x454518u: goto label_454518;
        case 0x45451cu: goto label_45451c;
        case 0x454520u: goto label_454520;
        case 0x454524u: goto label_454524;
        case 0x454528u: goto label_454528;
        case 0x45452cu: goto label_45452c;
        case 0x454530u: goto label_454530;
        case 0x454534u: goto label_454534;
        case 0x454538u: goto label_454538;
        case 0x45453cu: goto label_45453c;
        case 0x454540u: goto label_454540;
        case 0x454544u: goto label_454544;
        case 0x454548u: goto label_454548;
        case 0x45454cu: goto label_45454c;
        case 0x454550u: goto label_454550;
        case 0x454554u: goto label_454554;
        case 0x454558u: goto label_454558;
        case 0x45455cu: goto label_45455c;
        case 0x454560u: goto label_454560;
        case 0x454564u: goto label_454564;
        case 0x454568u: goto label_454568;
        case 0x45456cu: goto label_45456c;
        case 0x454570u: goto label_454570;
        case 0x454574u: goto label_454574;
        case 0x454578u: goto label_454578;
        case 0x45457cu: goto label_45457c;
        case 0x454580u: goto label_454580;
        case 0x454584u: goto label_454584;
        case 0x454588u: goto label_454588;
        case 0x45458cu: goto label_45458c;
        case 0x454590u: goto label_454590;
        case 0x454594u: goto label_454594;
        case 0x454598u: goto label_454598;
        case 0x45459cu: goto label_45459c;
        case 0x4545a0u: goto label_4545a0;
        case 0x4545a4u: goto label_4545a4;
        case 0x4545a8u: goto label_4545a8;
        case 0x4545acu: goto label_4545ac;
        case 0x4545b0u: goto label_4545b0;
        case 0x4545b4u: goto label_4545b4;
        case 0x4545b8u: goto label_4545b8;
        case 0x4545bcu: goto label_4545bc;
        case 0x4545c0u: goto label_4545c0;
        case 0x4545c4u: goto label_4545c4;
        case 0x4545c8u: goto label_4545c8;
        case 0x4545ccu: goto label_4545cc;
        case 0x4545d0u: goto label_4545d0;
        case 0x4545d4u: goto label_4545d4;
        case 0x4545d8u: goto label_4545d8;
        case 0x4545dcu: goto label_4545dc;
        case 0x4545e0u: goto label_4545e0;
        case 0x4545e4u: goto label_4545e4;
        case 0x4545e8u: goto label_4545e8;
        case 0x4545ecu: goto label_4545ec;
        case 0x4545f0u: goto label_4545f0;
        case 0x4545f4u: goto label_4545f4;
        case 0x4545f8u: goto label_4545f8;
        case 0x4545fcu: goto label_4545fc;
        case 0x454600u: goto label_454600;
        case 0x454604u: goto label_454604;
        case 0x454608u: goto label_454608;
        case 0x45460cu: goto label_45460c;
        case 0x454610u: goto label_454610;
        case 0x454614u: goto label_454614;
        case 0x454618u: goto label_454618;
        case 0x45461cu: goto label_45461c;
        case 0x454620u: goto label_454620;
        case 0x454624u: goto label_454624;
        case 0x454628u: goto label_454628;
        case 0x45462cu: goto label_45462c;
        case 0x454630u: goto label_454630;
        case 0x454634u: goto label_454634;
        case 0x454638u: goto label_454638;
        case 0x45463cu: goto label_45463c;
        case 0x454640u: goto label_454640;
        case 0x454644u: goto label_454644;
        case 0x454648u: goto label_454648;
        case 0x45464cu: goto label_45464c;
        case 0x454650u: goto label_454650;
        case 0x454654u: goto label_454654;
        case 0x454658u: goto label_454658;
        case 0x45465cu: goto label_45465c;
        case 0x454660u: goto label_454660;
        case 0x454664u: goto label_454664;
        case 0x454668u: goto label_454668;
        case 0x45466cu: goto label_45466c;
        case 0x454670u: goto label_454670;
        case 0x454674u: goto label_454674;
        case 0x454678u: goto label_454678;
        case 0x45467cu: goto label_45467c;
        case 0x454680u: goto label_454680;
        case 0x454684u: goto label_454684;
        case 0x454688u: goto label_454688;
        case 0x45468cu: goto label_45468c;
        case 0x454690u: goto label_454690;
        case 0x454694u: goto label_454694;
        case 0x454698u: goto label_454698;
        case 0x45469cu: goto label_45469c;
        case 0x4546a0u: goto label_4546a0;
        case 0x4546a4u: goto label_4546a4;
        case 0x4546a8u: goto label_4546a8;
        case 0x4546acu: goto label_4546ac;
        case 0x4546b0u: goto label_4546b0;
        case 0x4546b4u: goto label_4546b4;
        case 0x4546b8u: goto label_4546b8;
        case 0x4546bcu: goto label_4546bc;
        case 0x4546c0u: goto label_4546c0;
        case 0x4546c4u: goto label_4546c4;
        case 0x4546c8u: goto label_4546c8;
        case 0x4546ccu: goto label_4546cc;
        case 0x4546d0u: goto label_4546d0;
        case 0x4546d4u: goto label_4546d4;
        case 0x4546d8u: goto label_4546d8;
        case 0x4546dcu: goto label_4546dc;
        case 0x4546e0u: goto label_4546e0;
        case 0x4546e4u: goto label_4546e4;
        case 0x4546e8u: goto label_4546e8;
        case 0x4546ecu: goto label_4546ec;
        case 0x4546f0u: goto label_4546f0;
        case 0x4546f4u: goto label_4546f4;
        case 0x4546f8u: goto label_4546f8;
        case 0x4546fcu: goto label_4546fc;
        case 0x454700u: goto label_454700;
        case 0x454704u: goto label_454704;
        case 0x454708u: goto label_454708;
        case 0x45470cu: goto label_45470c;
        case 0x454710u: goto label_454710;
        case 0x454714u: goto label_454714;
        case 0x454718u: goto label_454718;
        case 0x45471cu: goto label_45471c;
        case 0x454720u: goto label_454720;
        case 0x454724u: goto label_454724;
        case 0x454728u: goto label_454728;
        case 0x45472cu: goto label_45472c;
        case 0x454730u: goto label_454730;
        case 0x454734u: goto label_454734;
        case 0x454738u: goto label_454738;
        case 0x45473cu: goto label_45473c;
        case 0x454740u: goto label_454740;
        case 0x454744u: goto label_454744;
        case 0x454748u: goto label_454748;
        case 0x45474cu: goto label_45474c;
        case 0x454750u: goto label_454750;
        case 0x454754u: goto label_454754;
        case 0x454758u: goto label_454758;
        case 0x45475cu: goto label_45475c;
        case 0x454760u: goto label_454760;
        case 0x454764u: goto label_454764;
        case 0x454768u: goto label_454768;
        case 0x45476cu: goto label_45476c;
        case 0x454770u: goto label_454770;
        case 0x454774u: goto label_454774;
        case 0x454778u: goto label_454778;
        case 0x45477cu: goto label_45477c;
        case 0x454780u: goto label_454780;
        case 0x454784u: goto label_454784;
        case 0x454788u: goto label_454788;
        case 0x45478cu: goto label_45478c;
        case 0x454790u: goto label_454790;
        case 0x454794u: goto label_454794;
        case 0x454798u: goto label_454798;
        case 0x45479cu: goto label_45479c;
        case 0x4547a0u: goto label_4547a0;
        case 0x4547a4u: goto label_4547a4;
        case 0x4547a8u: goto label_4547a8;
        case 0x4547acu: goto label_4547ac;
        case 0x4547b0u: goto label_4547b0;
        case 0x4547b4u: goto label_4547b4;
        case 0x4547b8u: goto label_4547b8;
        case 0x4547bcu: goto label_4547bc;
        case 0x4547c0u: goto label_4547c0;
        case 0x4547c4u: goto label_4547c4;
        case 0x4547c8u: goto label_4547c8;
        case 0x4547ccu: goto label_4547cc;
        case 0x4547d0u: goto label_4547d0;
        case 0x4547d4u: goto label_4547d4;
        case 0x4547d8u: goto label_4547d8;
        case 0x4547dcu: goto label_4547dc;
        case 0x4547e0u: goto label_4547e0;
        case 0x4547e4u: goto label_4547e4;
        case 0x4547e8u: goto label_4547e8;
        case 0x4547ecu: goto label_4547ec;
        case 0x4547f0u: goto label_4547f0;
        case 0x4547f4u: goto label_4547f4;
        case 0x4547f8u: goto label_4547f8;
        case 0x4547fcu: goto label_4547fc;
        case 0x454800u: goto label_454800;
        case 0x454804u: goto label_454804;
        case 0x454808u: goto label_454808;
        case 0x45480cu: goto label_45480c;
        case 0x454810u: goto label_454810;
        case 0x454814u: goto label_454814;
        case 0x454818u: goto label_454818;
        case 0x45481cu: goto label_45481c;
        case 0x454820u: goto label_454820;
        case 0x454824u: goto label_454824;
        case 0x454828u: goto label_454828;
        case 0x45482cu: goto label_45482c;
        case 0x454830u: goto label_454830;
        case 0x454834u: goto label_454834;
        case 0x454838u: goto label_454838;
        case 0x45483cu: goto label_45483c;
        case 0x454840u: goto label_454840;
        case 0x454844u: goto label_454844;
        case 0x454848u: goto label_454848;
        case 0x45484cu: goto label_45484c;
        case 0x454850u: goto label_454850;
        case 0x454854u: goto label_454854;
        case 0x454858u: goto label_454858;
        case 0x45485cu: goto label_45485c;
        case 0x454860u: goto label_454860;
        case 0x454864u: goto label_454864;
        case 0x454868u: goto label_454868;
        case 0x45486cu: goto label_45486c;
        case 0x454870u: goto label_454870;
        case 0x454874u: goto label_454874;
        case 0x454878u: goto label_454878;
        case 0x45487cu: goto label_45487c;
        case 0x454880u: goto label_454880;
        case 0x454884u: goto label_454884;
        case 0x454888u: goto label_454888;
        case 0x45488cu: goto label_45488c;
        case 0x454890u: goto label_454890;
        case 0x454894u: goto label_454894;
        case 0x454898u: goto label_454898;
        case 0x45489cu: goto label_45489c;
        case 0x4548a0u: goto label_4548a0;
        case 0x4548a4u: goto label_4548a4;
        case 0x4548a8u: goto label_4548a8;
        case 0x4548acu: goto label_4548ac;
        case 0x4548b0u: goto label_4548b0;
        case 0x4548b4u: goto label_4548b4;
        case 0x4548b8u: goto label_4548b8;
        case 0x4548bcu: goto label_4548bc;
        case 0x4548c0u: goto label_4548c0;
        case 0x4548c4u: goto label_4548c4;
        case 0x4548c8u: goto label_4548c8;
        case 0x4548ccu: goto label_4548cc;
        case 0x4548d0u: goto label_4548d0;
        case 0x4548d4u: goto label_4548d4;
        case 0x4548d8u: goto label_4548d8;
        case 0x4548dcu: goto label_4548dc;
        case 0x4548e0u: goto label_4548e0;
        case 0x4548e4u: goto label_4548e4;
        case 0x4548e8u: goto label_4548e8;
        case 0x4548ecu: goto label_4548ec;
        case 0x4548f0u: goto label_4548f0;
        case 0x4548f4u: goto label_4548f4;
        case 0x4548f8u: goto label_4548f8;
        case 0x4548fcu: goto label_4548fc;
        case 0x454900u: goto label_454900;
        case 0x454904u: goto label_454904;
        case 0x454908u: goto label_454908;
        case 0x45490cu: goto label_45490c;
        case 0x454910u: goto label_454910;
        case 0x454914u: goto label_454914;
        case 0x454918u: goto label_454918;
        case 0x45491cu: goto label_45491c;
        case 0x454920u: goto label_454920;
        case 0x454924u: goto label_454924;
        case 0x454928u: goto label_454928;
        case 0x45492cu: goto label_45492c;
        case 0x454930u: goto label_454930;
        case 0x454934u: goto label_454934;
        case 0x454938u: goto label_454938;
        case 0x45493cu: goto label_45493c;
        case 0x454940u: goto label_454940;
        case 0x454944u: goto label_454944;
        case 0x454948u: goto label_454948;
        case 0x45494cu: goto label_45494c;
        case 0x454950u: goto label_454950;
        case 0x454954u: goto label_454954;
        case 0x454958u: goto label_454958;
        case 0x45495cu: goto label_45495c;
        case 0x454960u: goto label_454960;
        case 0x454964u: goto label_454964;
        case 0x454968u: goto label_454968;
        case 0x45496cu: goto label_45496c;
        case 0x454970u: goto label_454970;
        case 0x454974u: goto label_454974;
        case 0x454978u: goto label_454978;
        case 0x45497cu: goto label_45497c;
        case 0x454980u: goto label_454980;
        case 0x454984u: goto label_454984;
        case 0x454988u: goto label_454988;
        case 0x45498cu: goto label_45498c;
        case 0x454990u: goto label_454990;
        case 0x454994u: goto label_454994;
        case 0x454998u: goto label_454998;
        case 0x45499cu: goto label_45499c;
        case 0x4549a0u: goto label_4549a0;
        case 0x4549a4u: goto label_4549a4;
        case 0x4549a8u: goto label_4549a8;
        case 0x4549acu: goto label_4549ac;
        case 0x4549b0u: goto label_4549b0;
        case 0x4549b4u: goto label_4549b4;
        case 0x4549b8u: goto label_4549b8;
        case 0x4549bcu: goto label_4549bc;
        case 0x4549c0u: goto label_4549c0;
        case 0x4549c4u: goto label_4549c4;
        case 0x4549c8u: goto label_4549c8;
        case 0x4549ccu: goto label_4549cc;
        case 0x4549d0u: goto label_4549d0;
        case 0x4549d4u: goto label_4549d4;
        case 0x4549d8u: goto label_4549d8;
        case 0x4549dcu: goto label_4549dc;
        case 0x4549e0u: goto label_4549e0;
        case 0x4549e4u: goto label_4549e4;
        case 0x4549e8u: goto label_4549e8;
        case 0x4549ecu: goto label_4549ec;
        case 0x4549f0u: goto label_4549f0;
        case 0x4549f4u: goto label_4549f4;
        case 0x4549f8u: goto label_4549f8;
        case 0x4549fcu: goto label_4549fc;
        case 0x454a00u: goto label_454a00;
        case 0x454a04u: goto label_454a04;
        case 0x454a08u: goto label_454a08;
        case 0x454a0cu: goto label_454a0c;
        case 0x454a10u: goto label_454a10;
        case 0x454a14u: goto label_454a14;
        case 0x454a18u: goto label_454a18;
        case 0x454a1cu: goto label_454a1c;
        case 0x454a20u: goto label_454a20;
        case 0x454a24u: goto label_454a24;
        case 0x454a28u: goto label_454a28;
        case 0x454a2cu: goto label_454a2c;
        case 0x454a30u: goto label_454a30;
        case 0x454a34u: goto label_454a34;
        case 0x454a38u: goto label_454a38;
        case 0x454a3cu: goto label_454a3c;
        case 0x454a40u: goto label_454a40;
        case 0x454a44u: goto label_454a44;
        case 0x454a48u: goto label_454a48;
        case 0x454a4cu: goto label_454a4c;
        case 0x454a50u: goto label_454a50;
        case 0x454a54u: goto label_454a54;
        case 0x454a58u: goto label_454a58;
        case 0x454a5cu: goto label_454a5c;
        case 0x454a60u: goto label_454a60;
        case 0x454a64u: goto label_454a64;
        case 0x454a68u: goto label_454a68;
        case 0x454a6cu: goto label_454a6c;
        case 0x454a70u: goto label_454a70;
        case 0x454a74u: goto label_454a74;
        case 0x454a78u: goto label_454a78;
        case 0x454a7cu: goto label_454a7c;
        case 0x454a80u: goto label_454a80;
        case 0x454a84u: goto label_454a84;
        case 0x454a88u: goto label_454a88;
        case 0x454a8cu: goto label_454a8c;
        case 0x454a90u: goto label_454a90;
        case 0x454a94u: goto label_454a94;
        case 0x454a98u: goto label_454a98;
        case 0x454a9cu: goto label_454a9c;
        case 0x454aa0u: goto label_454aa0;
        case 0x454aa4u: goto label_454aa4;
        case 0x454aa8u: goto label_454aa8;
        case 0x454aacu: goto label_454aac;
        case 0x454ab0u: goto label_454ab0;
        case 0x454ab4u: goto label_454ab4;
        case 0x454ab8u: goto label_454ab8;
        case 0x454abcu: goto label_454abc;
        case 0x454ac0u: goto label_454ac0;
        case 0x454ac4u: goto label_454ac4;
        case 0x454ac8u: goto label_454ac8;
        case 0x454accu: goto label_454acc;
        case 0x454ad0u: goto label_454ad0;
        case 0x454ad4u: goto label_454ad4;
        case 0x454ad8u: goto label_454ad8;
        case 0x454adcu: goto label_454adc;
        case 0x454ae0u: goto label_454ae0;
        case 0x454ae4u: goto label_454ae4;
        case 0x454ae8u: goto label_454ae8;
        case 0x454aecu: goto label_454aec;
        case 0x454af0u: goto label_454af0;
        case 0x454af4u: goto label_454af4;
        case 0x454af8u: goto label_454af8;
        case 0x454afcu: goto label_454afc;
        case 0x454b00u: goto label_454b00;
        case 0x454b04u: goto label_454b04;
        case 0x454b08u: goto label_454b08;
        case 0x454b0cu: goto label_454b0c;
        case 0x454b10u: goto label_454b10;
        case 0x454b14u: goto label_454b14;
        case 0x454b18u: goto label_454b18;
        case 0x454b1cu: goto label_454b1c;
        case 0x454b20u: goto label_454b20;
        case 0x454b24u: goto label_454b24;
        case 0x454b28u: goto label_454b28;
        case 0x454b2cu: goto label_454b2c;
        case 0x454b30u: goto label_454b30;
        case 0x454b34u: goto label_454b34;
        case 0x454b38u: goto label_454b38;
        case 0x454b3cu: goto label_454b3c;
        case 0x454b40u: goto label_454b40;
        case 0x454b44u: goto label_454b44;
        case 0x454b48u: goto label_454b48;
        case 0x454b4cu: goto label_454b4c;
        case 0x454b50u: goto label_454b50;
        case 0x454b54u: goto label_454b54;
        case 0x454b58u: goto label_454b58;
        case 0x454b5cu: goto label_454b5c;
        case 0x454b60u: goto label_454b60;
        case 0x454b64u: goto label_454b64;
        case 0x454b68u: goto label_454b68;
        case 0x454b6cu: goto label_454b6c;
        case 0x454b70u: goto label_454b70;
        case 0x454b74u: goto label_454b74;
        case 0x454b78u: goto label_454b78;
        case 0x454b7cu: goto label_454b7c;
        case 0x454b80u: goto label_454b80;
        case 0x454b84u: goto label_454b84;
        case 0x454b88u: goto label_454b88;
        case 0x454b8cu: goto label_454b8c;
        case 0x454b90u: goto label_454b90;
        case 0x454b94u: goto label_454b94;
        case 0x454b98u: goto label_454b98;
        case 0x454b9cu: goto label_454b9c;
        case 0x454ba0u: goto label_454ba0;
        case 0x454ba4u: goto label_454ba4;
        case 0x454ba8u: goto label_454ba8;
        case 0x454bacu: goto label_454bac;
        case 0x454bb0u: goto label_454bb0;
        case 0x454bb4u: goto label_454bb4;
        case 0x454bb8u: goto label_454bb8;
        case 0x454bbcu: goto label_454bbc;
        case 0x454bc0u: goto label_454bc0;
        case 0x454bc4u: goto label_454bc4;
        case 0x454bc8u: goto label_454bc8;
        case 0x454bccu: goto label_454bcc;
        case 0x454bd0u: goto label_454bd0;
        case 0x454bd4u: goto label_454bd4;
        case 0x454bd8u: goto label_454bd8;
        case 0x454bdcu: goto label_454bdc;
        case 0x454be0u: goto label_454be0;
        case 0x454be4u: goto label_454be4;
        case 0x454be8u: goto label_454be8;
        case 0x454becu: goto label_454bec;
        case 0x454bf0u: goto label_454bf0;
        case 0x454bf4u: goto label_454bf4;
        case 0x454bf8u: goto label_454bf8;
        case 0x454bfcu: goto label_454bfc;
        case 0x454c00u: goto label_454c00;
        case 0x454c04u: goto label_454c04;
        case 0x454c08u: goto label_454c08;
        case 0x454c0cu: goto label_454c0c;
        case 0x454c10u: goto label_454c10;
        case 0x454c14u: goto label_454c14;
        case 0x454c18u: goto label_454c18;
        case 0x454c1cu: goto label_454c1c;
        case 0x454c20u: goto label_454c20;
        case 0x454c24u: goto label_454c24;
        case 0x454c28u: goto label_454c28;
        case 0x454c2cu: goto label_454c2c;
        case 0x454c30u: goto label_454c30;
        case 0x454c34u: goto label_454c34;
        case 0x454c38u: goto label_454c38;
        case 0x454c3cu: goto label_454c3c;
        case 0x454c40u: goto label_454c40;
        case 0x454c44u: goto label_454c44;
        case 0x454c48u: goto label_454c48;
        case 0x454c4cu: goto label_454c4c;
        case 0x454c50u: goto label_454c50;
        case 0x454c54u: goto label_454c54;
        case 0x454c58u: goto label_454c58;
        case 0x454c5cu: goto label_454c5c;
        case 0x454c60u: goto label_454c60;
        case 0x454c64u: goto label_454c64;
        case 0x454c68u: goto label_454c68;
        case 0x454c6cu: goto label_454c6c;
        case 0x454c70u: goto label_454c70;
        case 0x454c74u: goto label_454c74;
        case 0x454c78u: goto label_454c78;
        case 0x454c7cu: goto label_454c7c;
        case 0x454c80u: goto label_454c80;
        case 0x454c84u: goto label_454c84;
        case 0x454c88u: goto label_454c88;
        case 0x454c8cu: goto label_454c8c;
        case 0x454c90u: goto label_454c90;
        case 0x454c94u: goto label_454c94;
        case 0x454c98u: goto label_454c98;
        case 0x454c9cu: goto label_454c9c;
        case 0x454ca0u: goto label_454ca0;
        case 0x454ca4u: goto label_454ca4;
        case 0x454ca8u: goto label_454ca8;
        case 0x454cacu: goto label_454cac;
        case 0x454cb0u: goto label_454cb0;
        case 0x454cb4u: goto label_454cb4;
        case 0x454cb8u: goto label_454cb8;
        case 0x454cbcu: goto label_454cbc;
        case 0x454cc0u: goto label_454cc0;
        case 0x454cc4u: goto label_454cc4;
        case 0x454cc8u: goto label_454cc8;
        case 0x454cccu: goto label_454ccc;
        case 0x454cd0u: goto label_454cd0;
        case 0x454cd4u: goto label_454cd4;
        case 0x454cd8u: goto label_454cd8;
        case 0x454cdcu: goto label_454cdc;
        case 0x454ce0u: goto label_454ce0;
        case 0x454ce4u: goto label_454ce4;
        case 0x454ce8u: goto label_454ce8;
        case 0x454cecu: goto label_454cec;
        case 0x454cf0u: goto label_454cf0;
        case 0x454cf4u: goto label_454cf4;
        case 0x454cf8u: goto label_454cf8;
        case 0x454cfcu: goto label_454cfc;
        case 0x454d00u: goto label_454d00;
        case 0x454d04u: goto label_454d04;
        case 0x454d08u: goto label_454d08;
        case 0x454d0cu: goto label_454d0c;
        case 0x454d10u: goto label_454d10;
        case 0x454d14u: goto label_454d14;
        case 0x454d18u: goto label_454d18;
        case 0x454d1cu: goto label_454d1c;
        case 0x454d20u: goto label_454d20;
        case 0x454d24u: goto label_454d24;
        case 0x454d28u: goto label_454d28;
        case 0x454d2cu: goto label_454d2c;
        case 0x454d30u: goto label_454d30;
        case 0x454d34u: goto label_454d34;
        case 0x454d38u: goto label_454d38;
        case 0x454d3cu: goto label_454d3c;
        case 0x454d40u: goto label_454d40;
        case 0x454d44u: goto label_454d44;
        case 0x454d48u: goto label_454d48;
        case 0x454d4cu: goto label_454d4c;
        case 0x454d50u: goto label_454d50;
        case 0x454d54u: goto label_454d54;
        case 0x454d58u: goto label_454d58;
        case 0x454d5cu: goto label_454d5c;
        case 0x454d60u: goto label_454d60;
        case 0x454d64u: goto label_454d64;
        case 0x454d68u: goto label_454d68;
        case 0x454d6cu: goto label_454d6c;
        case 0x454d70u: goto label_454d70;
        case 0x454d74u: goto label_454d74;
        case 0x454d78u: goto label_454d78;
        case 0x454d7cu: goto label_454d7c;
        case 0x454d80u: goto label_454d80;
        case 0x454d84u: goto label_454d84;
        case 0x454d88u: goto label_454d88;
        case 0x454d8cu: goto label_454d8c;
        case 0x454d90u: goto label_454d90;
        case 0x454d94u: goto label_454d94;
        case 0x454d98u: goto label_454d98;
        case 0x454d9cu: goto label_454d9c;
        case 0x454da0u: goto label_454da0;
        case 0x454da4u: goto label_454da4;
        case 0x454da8u: goto label_454da8;
        case 0x454dacu: goto label_454dac;
        case 0x454db0u: goto label_454db0;
        case 0x454db4u: goto label_454db4;
        case 0x454db8u: goto label_454db8;
        case 0x454dbcu: goto label_454dbc;
        case 0x454dc0u: goto label_454dc0;
        case 0x454dc4u: goto label_454dc4;
        case 0x454dc8u: goto label_454dc8;
        case 0x454dccu: goto label_454dcc;
        case 0x454dd0u: goto label_454dd0;
        case 0x454dd4u: goto label_454dd4;
        case 0x454dd8u: goto label_454dd8;
        case 0x454ddcu: goto label_454ddc;
        case 0x454de0u: goto label_454de0;
        case 0x454de4u: goto label_454de4;
        case 0x454de8u: goto label_454de8;
        case 0x454decu: goto label_454dec;
        case 0x454df0u: goto label_454df0;
        case 0x454df4u: goto label_454df4;
        case 0x454df8u: goto label_454df8;
        case 0x454dfcu: goto label_454dfc;
        case 0x454e00u: goto label_454e00;
        case 0x454e04u: goto label_454e04;
        case 0x454e08u: goto label_454e08;
        case 0x454e0cu: goto label_454e0c;
        case 0x454e10u: goto label_454e10;
        case 0x454e14u: goto label_454e14;
        case 0x454e18u: goto label_454e18;
        case 0x454e1cu: goto label_454e1c;
        case 0x454e20u: goto label_454e20;
        case 0x454e24u: goto label_454e24;
        case 0x454e28u: goto label_454e28;
        case 0x454e2cu: goto label_454e2c;
        case 0x454e30u: goto label_454e30;
        case 0x454e34u: goto label_454e34;
        case 0x454e38u: goto label_454e38;
        case 0x454e3cu: goto label_454e3c;
        case 0x454e40u: goto label_454e40;
        case 0x454e44u: goto label_454e44;
        case 0x454e48u: goto label_454e48;
        case 0x454e4cu: goto label_454e4c;
        case 0x454e50u: goto label_454e50;
        case 0x454e54u: goto label_454e54;
        case 0x454e58u: goto label_454e58;
        case 0x454e5cu: goto label_454e5c;
        case 0x454e60u: goto label_454e60;
        case 0x454e64u: goto label_454e64;
        case 0x454e68u: goto label_454e68;
        case 0x454e6cu: goto label_454e6c;
        case 0x454e70u: goto label_454e70;
        case 0x454e74u: goto label_454e74;
        case 0x454e78u: goto label_454e78;
        case 0x454e7cu: goto label_454e7c;
        case 0x454e80u: goto label_454e80;
        case 0x454e84u: goto label_454e84;
        case 0x454e88u: goto label_454e88;
        case 0x454e8cu: goto label_454e8c;
        case 0x454e90u: goto label_454e90;
        case 0x454e94u: goto label_454e94;
        case 0x454e98u: goto label_454e98;
        case 0x454e9cu: goto label_454e9c;
        case 0x454ea0u: goto label_454ea0;
        case 0x454ea4u: goto label_454ea4;
        case 0x454ea8u: goto label_454ea8;
        case 0x454eacu: goto label_454eac;
        case 0x454eb0u: goto label_454eb0;
        case 0x454eb4u: goto label_454eb4;
        case 0x454eb8u: goto label_454eb8;
        case 0x454ebcu: goto label_454ebc;
        case 0x454ec0u: goto label_454ec0;
        case 0x454ec4u: goto label_454ec4;
        case 0x454ec8u: goto label_454ec8;
        case 0x454eccu: goto label_454ecc;
        case 0x454ed0u: goto label_454ed0;
        case 0x454ed4u: goto label_454ed4;
        case 0x454ed8u: goto label_454ed8;
        case 0x454edcu: goto label_454edc;
        case 0x454ee0u: goto label_454ee0;
        case 0x454ee4u: goto label_454ee4;
        case 0x454ee8u: goto label_454ee8;
        case 0x454eecu: goto label_454eec;
        case 0x454ef0u: goto label_454ef0;
        case 0x454ef4u: goto label_454ef4;
        case 0x454ef8u: goto label_454ef8;
        case 0x454efcu: goto label_454efc;
        case 0x454f00u: goto label_454f00;
        case 0x454f04u: goto label_454f04;
        case 0x454f08u: goto label_454f08;
        case 0x454f0cu: goto label_454f0c;
        case 0x454f10u: goto label_454f10;
        case 0x454f14u: goto label_454f14;
        case 0x454f18u: goto label_454f18;
        case 0x454f1cu: goto label_454f1c;
        case 0x454f20u: goto label_454f20;
        case 0x454f24u: goto label_454f24;
        case 0x454f28u: goto label_454f28;
        case 0x454f2cu: goto label_454f2c;
        case 0x454f30u: goto label_454f30;
        case 0x454f34u: goto label_454f34;
        case 0x454f38u: goto label_454f38;
        case 0x454f3cu: goto label_454f3c;
        case 0x454f40u: goto label_454f40;
        case 0x454f44u: goto label_454f44;
        case 0x454f48u: goto label_454f48;
        case 0x454f4cu: goto label_454f4c;
        case 0x454f50u: goto label_454f50;
        case 0x454f54u: goto label_454f54;
        case 0x454f58u: goto label_454f58;
        case 0x454f5cu: goto label_454f5c;
        case 0x454f60u: goto label_454f60;
        case 0x454f64u: goto label_454f64;
        case 0x454f68u: goto label_454f68;
        case 0x454f6cu: goto label_454f6c;
        case 0x454f70u: goto label_454f70;
        case 0x454f74u: goto label_454f74;
        case 0x454f78u: goto label_454f78;
        case 0x454f7cu: goto label_454f7c;
        case 0x454f80u: goto label_454f80;
        case 0x454f84u: goto label_454f84;
        case 0x454f88u: goto label_454f88;
        case 0x454f8cu: goto label_454f8c;
        case 0x454f90u: goto label_454f90;
        case 0x454f94u: goto label_454f94;
        case 0x454f98u: goto label_454f98;
        case 0x454f9cu: goto label_454f9c;
        case 0x454fa0u: goto label_454fa0;
        case 0x454fa4u: goto label_454fa4;
        case 0x454fa8u: goto label_454fa8;
        case 0x454facu: goto label_454fac;
        case 0x454fb0u: goto label_454fb0;
        case 0x454fb4u: goto label_454fb4;
        case 0x454fb8u: goto label_454fb8;
        case 0x454fbcu: goto label_454fbc;
        case 0x454fc0u: goto label_454fc0;
        case 0x454fc4u: goto label_454fc4;
        case 0x454fc8u: goto label_454fc8;
        case 0x454fccu: goto label_454fcc;
        case 0x454fd0u: goto label_454fd0;
        case 0x454fd4u: goto label_454fd4;
        case 0x454fd8u: goto label_454fd8;
        case 0x454fdcu: goto label_454fdc;
        case 0x454fe0u: goto label_454fe0;
        case 0x454fe4u: goto label_454fe4;
        case 0x454fe8u: goto label_454fe8;
        case 0x454fecu: goto label_454fec;
        case 0x454ff0u: goto label_454ff0;
        case 0x454ff4u: goto label_454ff4;
        case 0x454ff8u: goto label_454ff8;
        case 0x454ffcu: goto label_454ffc;
        case 0x455000u: goto label_455000;
        case 0x455004u: goto label_455004;
        case 0x455008u: goto label_455008;
        case 0x45500cu: goto label_45500c;
        case 0x455010u: goto label_455010;
        case 0x455014u: goto label_455014;
        case 0x455018u: goto label_455018;
        case 0x45501cu: goto label_45501c;
        case 0x455020u: goto label_455020;
        case 0x455024u: goto label_455024;
        case 0x455028u: goto label_455028;
        case 0x45502cu: goto label_45502c;
        case 0x455030u: goto label_455030;
        case 0x455034u: goto label_455034;
        case 0x455038u: goto label_455038;
        case 0x45503cu: goto label_45503c;
        case 0x455040u: goto label_455040;
        case 0x455044u: goto label_455044;
        case 0x455048u: goto label_455048;
        case 0x45504cu: goto label_45504c;
        case 0x455050u: goto label_455050;
        case 0x455054u: goto label_455054;
        case 0x455058u: goto label_455058;
        case 0x45505cu: goto label_45505c;
        case 0x455060u: goto label_455060;
        case 0x455064u: goto label_455064;
        case 0x455068u: goto label_455068;
        case 0x45506cu: goto label_45506c;
        case 0x455070u: goto label_455070;
        case 0x455074u: goto label_455074;
        case 0x455078u: goto label_455078;
        case 0x45507cu: goto label_45507c;
        case 0x455080u: goto label_455080;
        case 0x455084u: goto label_455084;
        case 0x455088u: goto label_455088;
        case 0x45508cu: goto label_45508c;
        case 0x455090u: goto label_455090;
        case 0x455094u: goto label_455094;
        case 0x455098u: goto label_455098;
        case 0x45509cu: goto label_45509c;
        case 0x4550a0u: goto label_4550a0;
        case 0x4550a4u: goto label_4550a4;
        case 0x4550a8u: goto label_4550a8;
        case 0x4550acu: goto label_4550ac;
        case 0x4550b0u: goto label_4550b0;
        case 0x4550b4u: goto label_4550b4;
        case 0x4550b8u: goto label_4550b8;
        case 0x4550bcu: goto label_4550bc;
        case 0x4550c0u: goto label_4550c0;
        case 0x4550c4u: goto label_4550c4;
        case 0x4550c8u: goto label_4550c8;
        case 0x4550ccu: goto label_4550cc;
        case 0x4550d0u: goto label_4550d0;
        case 0x4550d4u: goto label_4550d4;
        case 0x4550d8u: goto label_4550d8;
        case 0x4550dcu: goto label_4550dc;
        case 0x4550e0u: goto label_4550e0;
        case 0x4550e4u: goto label_4550e4;
        case 0x4550e8u: goto label_4550e8;
        case 0x4550ecu: goto label_4550ec;
        case 0x4550f0u: goto label_4550f0;
        case 0x4550f4u: goto label_4550f4;
        case 0x4550f8u: goto label_4550f8;
        case 0x4550fcu: goto label_4550fc;
        case 0x455100u: goto label_455100;
        case 0x455104u: goto label_455104;
        case 0x455108u: goto label_455108;
        case 0x45510cu: goto label_45510c;
        case 0x455110u: goto label_455110;
        case 0x455114u: goto label_455114;
        case 0x455118u: goto label_455118;
        case 0x45511cu: goto label_45511c;
        case 0x455120u: goto label_455120;
        case 0x455124u: goto label_455124;
        case 0x455128u: goto label_455128;
        case 0x45512cu: goto label_45512c;
        case 0x455130u: goto label_455130;
        case 0x455134u: goto label_455134;
        case 0x455138u: goto label_455138;
        case 0x45513cu: goto label_45513c;
        case 0x455140u: goto label_455140;
        case 0x455144u: goto label_455144;
        case 0x455148u: goto label_455148;
        case 0x45514cu: goto label_45514c;
        case 0x455150u: goto label_455150;
        case 0x455154u: goto label_455154;
        case 0x455158u: goto label_455158;
        case 0x45515cu: goto label_45515c;
        case 0x455160u: goto label_455160;
        case 0x455164u: goto label_455164;
        case 0x455168u: goto label_455168;
        case 0x45516cu: goto label_45516c;
        case 0x455170u: goto label_455170;
        case 0x455174u: goto label_455174;
        case 0x455178u: goto label_455178;
        case 0x45517cu: goto label_45517c;
        case 0x455180u: goto label_455180;
        case 0x455184u: goto label_455184;
        case 0x455188u: goto label_455188;
        case 0x45518cu: goto label_45518c;
        case 0x455190u: goto label_455190;
        case 0x455194u: goto label_455194;
        case 0x455198u: goto label_455198;
        case 0x45519cu: goto label_45519c;
        case 0x4551a0u: goto label_4551a0;
        case 0x4551a4u: goto label_4551a4;
        case 0x4551a8u: goto label_4551a8;
        case 0x4551acu: goto label_4551ac;
        case 0x4551b0u: goto label_4551b0;
        case 0x4551b4u: goto label_4551b4;
        case 0x4551b8u: goto label_4551b8;
        case 0x4551bcu: goto label_4551bc;
        case 0x4551c0u: goto label_4551c0;
        case 0x4551c4u: goto label_4551c4;
        case 0x4551c8u: goto label_4551c8;
        case 0x4551ccu: goto label_4551cc;
        case 0x4551d0u: goto label_4551d0;
        case 0x4551d4u: goto label_4551d4;
        case 0x4551d8u: goto label_4551d8;
        case 0x4551dcu: goto label_4551dc;
        case 0x4551e0u: goto label_4551e0;
        case 0x4551e4u: goto label_4551e4;
        case 0x4551e8u: goto label_4551e8;
        case 0x4551ecu: goto label_4551ec;
        case 0x4551f0u: goto label_4551f0;
        case 0x4551f4u: goto label_4551f4;
        case 0x4551f8u: goto label_4551f8;
        case 0x4551fcu: goto label_4551fc;
        case 0x455200u: goto label_455200;
        case 0x455204u: goto label_455204;
        case 0x455208u: goto label_455208;
        case 0x45520cu: goto label_45520c;
        case 0x455210u: goto label_455210;
        case 0x455214u: goto label_455214;
        case 0x455218u: goto label_455218;
        case 0x45521cu: goto label_45521c;
        case 0x455220u: goto label_455220;
        case 0x455224u: goto label_455224;
        case 0x455228u: goto label_455228;
        case 0x45522cu: goto label_45522c;
        case 0x455230u: goto label_455230;
        case 0x455234u: goto label_455234;
        case 0x455238u: goto label_455238;
        case 0x45523cu: goto label_45523c;
        case 0x455240u: goto label_455240;
        case 0x455244u: goto label_455244;
        case 0x455248u: goto label_455248;
        case 0x45524cu: goto label_45524c;
        case 0x455250u: goto label_455250;
        case 0x455254u: goto label_455254;
        case 0x455258u: goto label_455258;
        case 0x45525cu: goto label_45525c;
        case 0x455260u: goto label_455260;
        case 0x455264u: goto label_455264;
        case 0x455268u: goto label_455268;
        case 0x45526cu: goto label_45526c;
        case 0x455270u: goto label_455270;
        case 0x455274u: goto label_455274;
        case 0x455278u: goto label_455278;
        case 0x45527cu: goto label_45527c;
        case 0x455280u: goto label_455280;
        case 0x455284u: goto label_455284;
        case 0x455288u: goto label_455288;
        case 0x45528cu: goto label_45528c;
        case 0x455290u: goto label_455290;
        case 0x455294u: goto label_455294;
        case 0x455298u: goto label_455298;
        case 0x45529cu: goto label_45529c;
        case 0x4552a0u: goto label_4552a0;
        case 0x4552a4u: goto label_4552a4;
        case 0x4552a8u: goto label_4552a8;
        case 0x4552acu: goto label_4552ac;
        case 0x4552b0u: goto label_4552b0;
        case 0x4552b4u: goto label_4552b4;
        case 0x4552b8u: goto label_4552b8;
        case 0x4552bcu: goto label_4552bc;
        case 0x4552c0u: goto label_4552c0;
        case 0x4552c4u: goto label_4552c4;
        case 0x4552c8u: goto label_4552c8;
        case 0x4552ccu: goto label_4552cc;
        case 0x4552d0u: goto label_4552d0;
        case 0x4552d4u: goto label_4552d4;
        case 0x4552d8u: goto label_4552d8;
        case 0x4552dcu: goto label_4552dc;
        case 0x4552e0u: goto label_4552e0;
        case 0x4552e4u: goto label_4552e4;
        case 0x4552e8u: goto label_4552e8;
        case 0x4552ecu: goto label_4552ec;
        case 0x4552f0u: goto label_4552f0;
        case 0x4552f4u: goto label_4552f4;
        case 0x4552f8u: goto label_4552f8;
        case 0x4552fcu: goto label_4552fc;
        case 0x455300u: goto label_455300;
        case 0x455304u: goto label_455304;
        case 0x455308u: goto label_455308;
        case 0x45530cu: goto label_45530c;
        case 0x455310u: goto label_455310;
        case 0x455314u: goto label_455314;
        case 0x455318u: goto label_455318;
        case 0x45531cu: goto label_45531c;
        case 0x455320u: goto label_455320;
        case 0x455324u: goto label_455324;
        case 0x455328u: goto label_455328;
        case 0x45532cu: goto label_45532c;
        case 0x455330u: goto label_455330;
        case 0x455334u: goto label_455334;
        case 0x455338u: goto label_455338;
        case 0x45533cu: goto label_45533c;
        case 0x455340u: goto label_455340;
        case 0x455344u: goto label_455344;
        case 0x455348u: goto label_455348;
        case 0x45534cu: goto label_45534c;
        case 0x455350u: goto label_455350;
        case 0x455354u: goto label_455354;
        case 0x455358u: goto label_455358;
        case 0x45535cu: goto label_45535c;
        case 0x455360u: goto label_455360;
        case 0x455364u: goto label_455364;
        case 0x455368u: goto label_455368;
        case 0x45536cu: goto label_45536c;
        case 0x455370u: goto label_455370;
        case 0x455374u: goto label_455374;
        case 0x455378u: goto label_455378;
        case 0x45537cu: goto label_45537c;
        case 0x455380u: goto label_455380;
        case 0x455384u: goto label_455384;
        case 0x455388u: goto label_455388;
        case 0x45538cu: goto label_45538c;
        case 0x455390u: goto label_455390;
        case 0x455394u: goto label_455394;
        case 0x455398u: goto label_455398;
        case 0x45539cu: goto label_45539c;
        case 0x4553a0u: goto label_4553a0;
        case 0x4553a4u: goto label_4553a4;
        case 0x4553a8u: goto label_4553a8;
        case 0x4553acu: goto label_4553ac;
        case 0x4553b0u: goto label_4553b0;
        case 0x4553b4u: goto label_4553b4;
        case 0x4553b8u: goto label_4553b8;
        case 0x4553bcu: goto label_4553bc;
        case 0x4553c0u: goto label_4553c0;
        case 0x4553c4u: goto label_4553c4;
        case 0x4553c8u: goto label_4553c8;
        case 0x4553ccu: goto label_4553cc;
        case 0x4553d0u: goto label_4553d0;
        case 0x4553d4u: goto label_4553d4;
        case 0x4553d8u: goto label_4553d8;
        case 0x4553dcu: goto label_4553dc;
        case 0x4553e0u: goto label_4553e0;
        case 0x4553e4u: goto label_4553e4;
        case 0x4553e8u: goto label_4553e8;
        case 0x4553ecu: goto label_4553ec;
        case 0x4553f0u: goto label_4553f0;
        case 0x4553f4u: goto label_4553f4;
        case 0x4553f8u: goto label_4553f8;
        case 0x4553fcu: goto label_4553fc;
        case 0x455400u: goto label_455400;
        case 0x455404u: goto label_455404;
        case 0x455408u: goto label_455408;
        case 0x45540cu: goto label_45540c;
        case 0x455410u: goto label_455410;
        case 0x455414u: goto label_455414;
        case 0x455418u: goto label_455418;
        case 0x45541cu: goto label_45541c;
        case 0x455420u: goto label_455420;
        case 0x455424u: goto label_455424;
        case 0x455428u: goto label_455428;
        case 0x45542cu: goto label_45542c;
        case 0x455430u: goto label_455430;
        case 0x455434u: goto label_455434;
        case 0x455438u: goto label_455438;
        case 0x45543cu: goto label_45543c;
        case 0x455440u: goto label_455440;
        case 0x455444u: goto label_455444;
        case 0x455448u: goto label_455448;
        case 0x45544cu: goto label_45544c;
        case 0x455450u: goto label_455450;
        case 0x455454u: goto label_455454;
        case 0x455458u: goto label_455458;
        case 0x45545cu: goto label_45545c;
        case 0x455460u: goto label_455460;
        case 0x455464u: goto label_455464;
        case 0x455468u: goto label_455468;
        case 0x45546cu: goto label_45546c;
        case 0x455470u: goto label_455470;
        case 0x455474u: goto label_455474;
        case 0x455478u: goto label_455478;
        case 0x45547cu: goto label_45547c;
        case 0x455480u: goto label_455480;
        case 0x455484u: goto label_455484;
        case 0x455488u: goto label_455488;
        case 0x45548cu: goto label_45548c;
        case 0x455490u: goto label_455490;
        case 0x455494u: goto label_455494;
        case 0x455498u: goto label_455498;
        case 0x45549cu: goto label_45549c;
        case 0x4554a0u: goto label_4554a0;
        case 0x4554a4u: goto label_4554a4;
        case 0x4554a8u: goto label_4554a8;
        case 0x4554acu: goto label_4554ac;
        case 0x4554b0u: goto label_4554b0;
        case 0x4554b4u: goto label_4554b4;
        case 0x4554b8u: goto label_4554b8;
        case 0x4554bcu: goto label_4554bc;
        case 0x4554c0u: goto label_4554c0;
        case 0x4554c4u: goto label_4554c4;
        case 0x4554c8u: goto label_4554c8;
        case 0x4554ccu: goto label_4554cc;
        case 0x4554d0u: goto label_4554d0;
        case 0x4554d4u: goto label_4554d4;
        case 0x4554d8u: goto label_4554d8;
        case 0x4554dcu: goto label_4554dc;
        case 0x4554e0u: goto label_4554e0;
        case 0x4554e4u: goto label_4554e4;
        case 0x4554e8u: goto label_4554e8;
        case 0x4554ecu: goto label_4554ec;
        case 0x4554f0u: goto label_4554f0;
        case 0x4554f4u: goto label_4554f4;
        case 0x4554f8u: goto label_4554f8;
        case 0x4554fcu: goto label_4554fc;
        case 0x455500u: goto label_455500;
        case 0x455504u: goto label_455504;
        case 0x455508u: goto label_455508;
        case 0x45550cu: goto label_45550c;
        case 0x455510u: goto label_455510;
        case 0x455514u: goto label_455514;
        case 0x455518u: goto label_455518;
        case 0x45551cu: goto label_45551c;
        case 0x455520u: goto label_455520;
        case 0x455524u: goto label_455524;
        case 0x455528u: goto label_455528;
        case 0x45552cu: goto label_45552c;
        case 0x455530u: goto label_455530;
        case 0x455534u: goto label_455534;
        case 0x455538u: goto label_455538;
        case 0x45553cu: goto label_45553c;
        case 0x455540u: goto label_455540;
        case 0x455544u: goto label_455544;
        case 0x455548u: goto label_455548;
        case 0x45554cu: goto label_45554c;
        case 0x455550u: goto label_455550;
        case 0x455554u: goto label_455554;
        case 0x455558u: goto label_455558;
        case 0x45555cu: goto label_45555c;
        case 0x455560u: goto label_455560;
        case 0x455564u: goto label_455564;
        case 0x455568u: goto label_455568;
        case 0x45556cu: goto label_45556c;
        case 0x455570u: goto label_455570;
        case 0x455574u: goto label_455574;
        case 0x455578u: goto label_455578;
        case 0x45557cu: goto label_45557c;
        case 0x455580u: goto label_455580;
        case 0x455584u: goto label_455584;
        case 0x455588u: goto label_455588;
        case 0x45558cu: goto label_45558c;
        case 0x455590u: goto label_455590;
        case 0x455594u: goto label_455594;
        case 0x455598u: goto label_455598;
        case 0x45559cu: goto label_45559c;
        case 0x4555a0u: goto label_4555a0;
        case 0x4555a4u: goto label_4555a4;
        case 0x4555a8u: goto label_4555a8;
        case 0x4555acu: goto label_4555ac;
        case 0x4555b0u: goto label_4555b0;
        case 0x4555b4u: goto label_4555b4;
        case 0x4555b8u: goto label_4555b8;
        case 0x4555bcu: goto label_4555bc;
        case 0x4555c0u: goto label_4555c0;
        case 0x4555c4u: goto label_4555c4;
        case 0x4555c8u: goto label_4555c8;
        case 0x4555ccu: goto label_4555cc;
        case 0x4555d0u: goto label_4555d0;
        case 0x4555d4u: goto label_4555d4;
        case 0x4555d8u: goto label_4555d8;
        case 0x4555dcu: goto label_4555dc;
        case 0x4555e0u: goto label_4555e0;
        case 0x4555e4u: goto label_4555e4;
        case 0x4555e8u: goto label_4555e8;
        case 0x4555ecu: goto label_4555ec;
        case 0x4555f0u: goto label_4555f0;
        case 0x4555f4u: goto label_4555f4;
        case 0x4555f8u: goto label_4555f8;
        case 0x4555fcu: goto label_4555fc;
        case 0x455600u: goto label_455600;
        case 0x455604u: goto label_455604;
        case 0x455608u: goto label_455608;
        case 0x45560cu: goto label_45560c;
        case 0x455610u: goto label_455610;
        case 0x455614u: goto label_455614;
        case 0x455618u: goto label_455618;
        case 0x45561cu: goto label_45561c;
        case 0x455620u: goto label_455620;
        case 0x455624u: goto label_455624;
        case 0x455628u: goto label_455628;
        case 0x45562cu: goto label_45562c;
        case 0x455630u: goto label_455630;
        case 0x455634u: goto label_455634;
        case 0x455638u: goto label_455638;
        case 0x45563cu: goto label_45563c;
        case 0x455640u: goto label_455640;
        case 0x455644u: goto label_455644;
        case 0x455648u: goto label_455648;
        case 0x45564cu: goto label_45564c;
        case 0x455650u: goto label_455650;
        case 0x455654u: goto label_455654;
        case 0x455658u: goto label_455658;
        case 0x45565cu: goto label_45565c;
        case 0x455660u: goto label_455660;
        case 0x455664u: goto label_455664;
        case 0x455668u: goto label_455668;
        case 0x45566cu: goto label_45566c;
        case 0x455670u: goto label_455670;
        case 0x455674u: goto label_455674;
        case 0x455678u: goto label_455678;
        case 0x45567cu: goto label_45567c;
        case 0x455680u: goto label_455680;
        case 0x455684u: goto label_455684;
        case 0x455688u: goto label_455688;
        case 0x45568cu: goto label_45568c;
        case 0x455690u: goto label_455690;
        case 0x455694u: goto label_455694;
        case 0x455698u: goto label_455698;
        case 0x45569cu: goto label_45569c;
        case 0x4556a0u: goto label_4556a0;
        case 0x4556a4u: goto label_4556a4;
        case 0x4556a8u: goto label_4556a8;
        case 0x4556acu: goto label_4556ac;
        case 0x4556b0u: goto label_4556b0;
        case 0x4556b4u: goto label_4556b4;
        case 0x4556b8u: goto label_4556b8;
        case 0x4556bcu: goto label_4556bc;
        case 0x4556c0u: goto label_4556c0;
        case 0x4556c4u: goto label_4556c4;
        case 0x4556c8u: goto label_4556c8;
        case 0x4556ccu: goto label_4556cc;
        case 0x4556d0u: goto label_4556d0;
        case 0x4556d4u: goto label_4556d4;
        case 0x4556d8u: goto label_4556d8;
        case 0x4556dcu: goto label_4556dc;
        case 0x4556e0u: goto label_4556e0;
        case 0x4556e4u: goto label_4556e4;
        case 0x4556e8u: goto label_4556e8;
        case 0x4556ecu: goto label_4556ec;
        case 0x4556f0u: goto label_4556f0;
        case 0x4556f4u: goto label_4556f4;
        case 0x4556f8u: goto label_4556f8;
        case 0x4556fcu: goto label_4556fc;
        case 0x455700u: goto label_455700;
        case 0x455704u: goto label_455704;
        case 0x455708u: goto label_455708;
        case 0x45570cu: goto label_45570c;
        case 0x455710u: goto label_455710;
        case 0x455714u: goto label_455714;
        case 0x455718u: goto label_455718;
        case 0x45571cu: goto label_45571c;
        case 0x455720u: goto label_455720;
        case 0x455724u: goto label_455724;
        case 0x455728u: goto label_455728;
        case 0x45572cu: goto label_45572c;
        case 0x455730u: goto label_455730;
        case 0x455734u: goto label_455734;
        case 0x455738u: goto label_455738;
        case 0x45573cu: goto label_45573c;
        case 0x455740u: goto label_455740;
        case 0x455744u: goto label_455744;
        case 0x455748u: goto label_455748;
        case 0x45574cu: goto label_45574c;
        case 0x455750u: goto label_455750;
        case 0x455754u: goto label_455754;
        case 0x455758u: goto label_455758;
        case 0x45575cu: goto label_45575c;
        case 0x455760u: goto label_455760;
        case 0x455764u: goto label_455764;
        case 0x455768u: goto label_455768;
        case 0x45576cu: goto label_45576c;
        case 0x455770u: goto label_455770;
        case 0x455774u: goto label_455774;
        case 0x455778u: goto label_455778;
        case 0x45577cu: goto label_45577c;
        case 0x455780u: goto label_455780;
        case 0x455784u: goto label_455784;
        case 0x455788u: goto label_455788;
        case 0x45578cu: goto label_45578c;
        case 0x455790u: goto label_455790;
        case 0x455794u: goto label_455794;
        case 0x455798u: goto label_455798;
        case 0x45579cu: goto label_45579c;
        case 0x4557a0u: goto label_4557a0;
        case 0x4557a4u: goto label_4557a4;
        case 0x4557a8u: goto label_4557a8;
        case 0x4557acu: goto label_4557ac;
        case 0x4557b0u: goto label_4557b0;
        case 0x4557b4u: goto label_4557b4;
        case 0x4557b8u: goto label_4557b8;
        case 0x4557bcu: goto label_4557bc;
        case 0x4557c0u: goto label_4557c0;
        case 0x4557c4u: goto label_4557c4;
        case 0x4557c8u: goto label_4557c8;
        case 0x4557ccu: goto label_4557cc;
        case 0x4557d0u: goto label_4557d0;
        case 0x4557d4u: goto label_4557d4;
        case 0x4557d8u: goto label_4557d8;
        case 0x4557dcu: goto label_4557dc;
        case 0x4557e0u: goto label_4557e0;
        case 0x4557e4u: goto label_4557e4;
        case 0x4557e8u: goto label_4557e8;
        case 0x4557ecu: goto label_4557ec;
        case 0x4557f0u: goto label_4557f0;
        case 0x4557f4u: goto label_4557f4;
        case 0x4557f8u: goto label_4557f8;
        case 0x4557fcu: goto label_4557fc;
        case 0x455800u: goto label_455800;
        case 0x455804u: goto label_455804;
        case 0x455808u: goto label_455808;
        case 0x45580cu: goto label_45580c;
        case 0x455810u: goto label_455810;
        case 0x455814u: goto label_455814;
        case 0x455818u: goto label_455818;
        case 0x45581cu: goto label_45581c;
        case 0x455820u: goto label_455820;
        case 0x455824u: goto label_455824;
        case 0x455828u: goto label_455828;
        case 0x45582cu: goto label_45582c;
        case 0x455830u: goto label_455830;
        case 0x455834u: goto label_455834;
        case 0x455838u: goto label_455838;
        case 0x45583cu: goto label_45583c;
        case 0x455840u: goto label_455840;
        case 0x455844u: goto label_455844;
        case 0x455848u: goto label_455848;
        case 0x45584cu: goto label_45584c;
        case 0x455850u: goto label_455850;
        case 0x455854u: goto label_455854;
        case 0x455858u: goto label_455858;
        case 0x45585cu: goto label_45585c;
        case 0x455860u: goto label_455860;
        case 0x455864u: goto label_455864;
        case 0x455868u: goto label_455868;
        case 0x45586cu: goto label_45586c;
        case 0x455870u: goto label_455870;
        case 0x455874u: goto label_455874;
        case 0x455878u: goto label_455878;
        case 0x45587cu: goto label_45587c;
        case 0x455880u: goto label_455880;
        case 0x455884u: goto label_455884;
        case 0x455888u: goto label_455888;
        case 0x45588cu: goto label_45588c;
        case 0x455890u: goto label_455890;
        case 0x455894u: goto label_455894;
        case 0x455898u: goto label_455898;
        case 0x45589cu: goto label_45589c;
        case 0x4558a0u: goto label_4558a0;
        case 0x4558a4u: goto label_4558a4;
        case 0x4558a8u: goto label_4558a8;
        case 0x4558acu: goto label_4558ac;
        case 0x4558b0u: goto label_4558b0;
        case 0x4558b4u: goto label_4558b4;
        case 0x4558b8u: goto label_4558b8;
        case 0x4558bcu: goto label_4558bc;
        case 0x4558c0u: goto label_4558c0;
        case 0x4558c4u: goto label_4558c4;
        case 0x4558c8u: goto label_4558c8;
        case 0x4558ccu: goto label_4558cc;
        case 0x4558d0u: goto label_4558d0;
        case 0x4558d4u: goto label_4558d4;
        case 0x4558d8u: goto label_4558d8;
        case 0x4558dcu: goto label_4558dc;
        case 0x4558e0u: goto label_4558e0;
        case 0x4558e4u: goto label_4558e4;
        case 0x4558e8u: goto label_4558e8;
        case 0x4558ecu: goto label_4558ec;
        case 0x4558f0u: goto label_4558f0;
        case 0x4558f4u: goto label_4558f4;
        case 0x4558f8u: goto label_4558f8;
        case 0x4558fcu: goto label_4558fc;
        case 0x455900u: goto label_455900;
        case 0x455904u: goto label_455904;
        case 0x455908u: goto label_455908;
        case 0x45590cu: goto label_45590c;
        case 0x455910u: goto label_455910;
        case 0x455914u: goto label_455914;
        case 0x455918u: goto label_455918;
        case 0x45591cu: goto label_45591c;
        case 0x455920u: goto label_455920;
        case 0x455924u: goto label_455924;
        case 0x455928u: goto label_455928;
        case 0x45592cu: goto label_45592c;
        case 0x455930u: goto label_455930;
        case 0x455934u: goto label_455934;
        case 0x455938u: goto label_455938;
        case 0x45593cu: goto label_45593c;
        case 0x455940u: goto label_455940;
        case 0x455944u: goto label_455944;
        case 0x455948u: goto label_455948;
        case 0x45594cu: goto label_45594c;
        case 0x455950u: goto label_455950;
        case 0x455954u: goto label_455954;
        case 0x455958u: goto label_455958;
        case 0x45595cu: goto label_45595c;
        case 0x455960u: goto label_455960;
        case 0x455964u: goto label_455964;
        case 0x455968u: goto label_455968;
        case 0x45596cu: goto label_45596c;
        case 0x455970u: goto label_455970;
        case 0x455974u: goto label_455974;
        case 0x455978u: goto label_455978;
        case 0x45597cu: goto label_45597c;
        case 0x455980u: goto label_455980;
        case 0x455984u: goto label_455984;
        case 0x455988u: goto label_455988;
        case 0x45598cu: goto label_45598c;
        case 0x455990u: goto label_455990;
        case 0x455994u: goto label_455994;
        case 0x455998u: goto label_455998;
        case 0x45599cu: goto label_45599c;
        case 0x4559a0u: goto label_4559a0;
        case 0x4559a4u: goto label_4559a4;
        case 0x4559a8u: goto label_4559a8;
        case 0x4559acu: goto label_4559ac;
        case 0x4559b0u: goto label_4559b0;
        case 0x4559b4u: goto label_4559b4;
        case 0x4559b8u: goto label_4559b8;
        case 0x4559bcu: goto label_4559bc;
        case 0x4559c0u: goto label_4559c0;
        case 0x4559c4u: goto label_4559c4;
        case 0x4559c8u: goto label_4559c8;
        case 0x4559ccu: goto label_4559cc;
        case 0x4559d0u: goto label_4559d0;
        case 0x4559d4u: goto label_4559d4;
        case 0x4559d8u: goto label_4559d8;
        case 0x4559dcu: goto label_4559dc;
        case 0x4559e0u: goto label_4559e0;
        case 0x4559e4u: goto label_4559e4;
        case 0x4559e8u: goto label_4559e8;
        case 0x4559ecu: goto label_4559ec;
        case 0x4559f0u: goto label_4559f0;
        case 0x4559f4u: goto label_4559f4;
        case 0x4559f8u: goto label_4559f8;
        case 0x4559fcu: goto label_4559fc;
        case 0x455a00u: goto label_455a00;
        case 0x455a04u: goto label_455a04;
        case 0x455a08u: goto label_455a08;
        case 0x455a0cu: goto label_455a0c;
        case 0x455a10u: goto label_455a10;
        case 0x455a14u: goto label_455a14;
        case 0x455a18u: goto label_455a18;
        case 0x455a1cu: goto label_455a1c;
        case 0x455a20u: goto label_455a20;
        case 0x455a24u: goto label_455a24;
        case 0x455a28u: goto label_455a28;
        case 0x455a2cu: goto label_455a2c;
        case 0x455a30u: goto label_455a30;
        case 0x455a34u: goto label_455a34;
        case 0x455a38u: goto label_455a38;
        case 0x455a3cu: goto label_455a3c;
        case 0x455a40u: goto label_455a40;
        case 0x455a44u: goto label_455a44;
        case 0x455a48u: goto label_455a48;
        case 0x455a4cu: goto label_455a4c;
        case 0x455a50u: goto label_455a50;
        case 0x455a54u: goto label_455a54;
        case 0x455a58u: goto label_455a58;
        case 0x455a5cu: goto label_455a5c;
        case 0x455a60u: goto label_455a60;
        case 0x455a64u: goto label_455a64;
        case 0x455a68u: goto label_455a68;
        case 0x455a6cu: goto label_455a6c;
        case 0x455a70u: goto label_455a70;
        case 0x455a74u: goto label_455a74;
        case 0x455a78u: goto label_455a78;
        case 0x455a7cu: goto label_455a7c;
        case 0x455a80u: goto label_455a80;
        case 0x455a84u: goto label_455a84;
        case 0x455a88u: goto label_455a88;
        case 0x455a8cu: goto label_455a8c;
        case 0x455a90u: goto label_455a90;
        case 0x455a94u: goto label_455a94;
        case 0x455a98u: goto label_455a98;
        case 0x455a9cu: goto label_455a9c;
        case 0x455aa0u: goto label_455aa0;
        case 0x455aa4u: goto label_455aa4;
        case 0x455aa8u: goto label_455aa8;
        case 0x455aacu: goto label_455aac;
        case 0x455ab0u: goto label_455ab0;
        case 0x455ab4u: goto label_455ab4;
        case 0x455ab8u: goto label_455ab8;
        case 0x455abcu: goto label_455abc;
        case 0x455ac0u: goto label_455ac0;
        case 0x455ac4u: goto label_455ac4;
        case 0x455ac8u: goto label_455ac8;
        case 0x455accu: goto label_455acc;
        case 0x455ad0u: goto label_455ad0;
        case 0x455ad4u: goto label_455ad4;
        case 0x455ad8u: goto label_455ad8;
        case 0x455adcu: goto label_455adc;
        case 0x455ae0u: goto label_455ae0;
        case 0x455ae4u: goto label_455ae4;
        case 0x455ae8u: goto label_455ae8;
        case 0x455aecu: goto label_455aec;
        case 0x455af0u: goto label_455af0;
        case 0x455af4u: goto label_455af4;
        case 0x455af8u: goto label_455af8;
        case 0x455afcu: goto label_455afc;
        case 0x455b00u: goto label_455b00;
        case 0x455b04u: goto label_455b04;
        case 0x455b08u: goto label_455b08;
        case 0x455b0cu: goto label_455b0c;
        case 0x455b10u: goto label_455b10;
        case 0x455b14u: goto label_455b14;
        case 0x455b18u: goto label_455b18;
        case 0x455b1cu: goto label_455b1c;
        case 0x455b20u: goto label_455b20;
        case 0x455b24u: goto label_455b24;
        case 0x455b28u: goto label_455b28;
        case 0x455b2cu: goto label_455b2c;
        case 0x455b30u: goto label_455b30;
        case 0x455b34u: goto label_455b34;
        case 0x455b38u: goto label_455b38;
        case 0x455b3cu: goto label_455b3c;
        case 0x455b40u: goto label_455b40;
        case 0x455b44u: goto label_455b44;
        case 0x455b48u: goto label_455b48;
        case 0x455b4cu: goto label_455b4c;
        case 0x455b50u: goto label_455b50;
        case 0x455b54u: goto label_455b54;
        case 0x455b58u: goto label_455b58;
        case 0x455b5cu: goto label_455b5c;
        case 0x455b60u: goto label_455b60;
        case 0x455b64u: goto label_455b64;
        case 0x455b68u: goto label_455b68;
        case 0x455b6cu: goto label_455b6c;
        case 0x455b70u: goto label_455b70;
        case 0x455b74u: goto label_455b74;
        case 0x455b78u: goto label_455b78;
        case 0x455b7cu: goto label_455b7c;
        case 0x455b80u: goto label_455b80;
        case 0x455b84u: goto label_455b84;
        case 0x455b88u: goto label_455b88;
        case 0x455b8cu: goto label_455b8c;
        case 0x455b90u: goto label_455b90;
        case 0x455b94u: goto label_455b94;
        case 0x455b98u: goto label_455b98;
        case 0x455b9cu: goto label_455b9c;
        case 0x455ba0u: goto label_455ba0;
        case 0x455ba4u: goto label_455ba4;
        case 0x455ba8u: goto label_455ba8;
        case 0x455bacu: goto label_455bac;
        case 0x455bb0u: goto label_455bb0;
        case 0x455bb4u: goto label_455bb4;
        case 0x455bb8u: goto label_455bb8;
        case 0x455bbcu: goto label_455bbc;
        case 0x455bc0u: goto label_455bc0;
        case 0x455bc4u: goto label_455bc4;
        case 0x455bc8u: goto label_455bc8;
        case 0x455bccu: goto label_455bcc;
        case 0x455bd0u: goto label_455bd0;
        case 0x455bd4u: goto label_455bd4;
        case 0x455bd8u: goto label_455bd8;
        case 0x455bdcu: goto label_455bdc;
        case 0x455be0u: goto label_455be0;
        case 0x455be4u: goto label_455be4;
        case 0x455be8u: goto label_455be8;
        case 0x455becu: goto label_455bec;
        case 0x455bf0u: goto label_455bf0;
        case 0x455bf4u: goto label_455bf4;
        case 0x455bf8u: goto label_455bf8;
        case 0x455bfcu: goto label_455bfc;
        case 0x455c00u: goto label_455c00;
        case 0x455c04u: goto label_455c04;
        case 0x455c08u: goto label_455c08;
        case 0x455c0cu: goto label_455c0c;
        case 0x455c10u: goto label_455c10;
        case 0x455c14u: goto label_455c14;
        case 0x455c18u: goto label_455c18;
        case 0x455c1cu: goto label_455c1c;
        case 0x455c20u: goto label_455c20;
        case 0x455c24u: goto label_455c24;
        case 0x455c28u: goto label_455c28;
        case 0x455c2cu: goto label_455c2c;
        case 0x455c30u: goto label_455c30;
        case 0x455c34u: goto label_455c34;
        case 0x455c38u: goto label_455c38;
        case 0x455c3cu: goto label_455c3c;
        case 0x455c40u: goto label_455c40;
        case 0x455c44u: goto label_455c44;
        case 0x455c48u: goto label_455c48;
        case 0x455c4cu: goto label_455c4c;
        case 0x455c50u: goto label_455c50;
        case 0x455c54u: goto label_455c54;
        case 0x455c58u: goto label_455c58;
        case 0x455c5cu: goto label_455c5c;
        case 0x455c60u: goto label_455c60;
        case 0x455c64u: goto label_455c64;
        case 0x455c68u: goto label_455c68;
        case 0x455c6cu: goto label_455c6c;
        case 0x455c70u: goto label_455c70;
        case 0x455c74u: goto label_455c74;
        case 0x455c78u: goto label_455c78;
        case 0x455c7cu: goto label_455c7c;
        case 0x455c80u: goto label_455c80;
        case 0x455c84u: goto label_455c84;
        case 0x455c88u: goto label_455c88;
        case 0x455c8cu: goto label_455c8c;
        case 0x455c90u: goto label_455c90;
        case 0x455c94u: goto label_455c94;
        case 0x455c98u: goto label_455c98;
        case 0x455c9cu: goto label_455c9c;
        case 0x455ca0u: goto label_455ca0;
        case 0x455ca4u: goto label_455ca4;
        case 0x455ca8u: goto label_455ca8;
        case 0x455cacu: goto label_455cac;
        case 0x455cb0u: goto label_455cb0;
        case 0x455cb4u: goto label_455cb4;
        case 0x455cb8u: goto label_455cb8;
        case 0x455cbcu: goto label_455cbc;
        case 0x455cc0u: goto label_455cc0;
        case 0x455cc4u: goto label_455cc4;
        case 0x455cc8u: goto label_455cc8;
        case 0x455cccu: goto label_455ccc;
        case 0x455cd0u: goto label_455cd0;
        case 0x455cd4u: goto label_455cd4;
        case 0x455cd8u: goto label_455cd8;
        case 0x455cdcu: goto label_455cdc;
        case 0x455ce0u: goto label_455ce0;
        case 0x455ce4u: goto label_455ce4;
        case 0x455ce8u: goto label_455ce8;
        case 0x455cecu: goto label_455cec;
        case 0x455cf0u: goto label_455cf0;
        case 0x455cf4u: goto label_455cf4;
        case 0x455cf8u: goto label_455cf8;
        case 0x455cfcu: goto label_455cfc;
        case 0x455d00u: goto label_455d00;
        case 0x455d04u: goto label_455d04;
        case 0x455d08u: goto label_455d08;
        case 0x455d0cu: goto label_455d0c;
        case 0x455d10u: goto label_455d10;
        case 0x455d14u: goto label_455d14;
        case 0x455d18u: goto label_455d18;
        case 0x455d1cu: goto label_455d1c;
        case 0x455d20u: goto label_455d20;
        case 0x455d24u: goto label_455d24;
        case 0x455d28u: goto label_455d28;
        case 0x455d2cu: goto label_455d2c;
        case 0x455d30u: goto label_455d30;
        case 0x455d34u: goto label_455d34;
        case 0x455d38u: goto label_455d38;
        case 0x455d3cu: goto label_455d3c;
        case 0x455d40u: goto label_455d40;
        case 0x455d44u: goto label_455d44;
        case 0x455d48u: goto label_455d48;
        case 0x455d4cu: goto label_455d4c;
        case 0x455d50u: goto label_455d50;
        case 0x455d54u: goto label_455d54;
        case 0x455d58u: goto label_455d58;
        case 0x455d5cu: goto label_455d5c;
        case 0x455d60u: goto label_455d60;
        case 0x455d64u: goto label_455d64;
        case 0x455d68u: goto label_455d68;
        case 0x455d6cu: goto label_455d6c;
        default: break;
    }

    ctx->pc = 0x454280u;

label_454280:
    // 0x454280: 0x27bdf060  addiu       $sp, $sp, -0xFA0
    ctx->pc = 0x454280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963296));
label_454284:
    // 0x454284: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x454284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_454288:
    // 0x454288: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x454288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_45428c:
    // 0x45428c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x45428cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_454290:
    // 0x454290: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x454290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_454294:
    // 0x454294: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x454294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_454298:
    // 0x454298: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x454298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_45429c:
    // 0x45429c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45429cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4542a0:
    // 0x4542a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4542a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4542a4:
    // 0x4542a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4542a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4542a8:
    // 0x4542a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4542a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4542ac:
    // 0x4542ac: 0xafa40f80  sw          $a0, 0xF80($sp)
    ctx->pc = 0x4542acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3968), GPR_U32(ctx, 4));
label_4542b0:
    // 0x4542b0: 0xafa50f90  sw          $a1, 0xF90($sp)
    ctx->pc = 0x4542b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3984), GPR_U32(ctx, 5));
label_4542b4:
    // 0x4542b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4542b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4542b8:
    // 0x4542b8: 0xafa00f78  sw          $zero, 0xF78($sp)
    ctx->pc = 0x4542b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3960), GPR_U32(ctx, 0));
label_4542bc:
    // 0x4542bc: 0xafa00f74  sw          $zero, 0xF74($sp)
    ctx->pc = 0x4542bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3956), GPR_U32(ctx, 0));
label_4542c0:
    // 0x4542c0: 0x27a40f28  addiu       $a0, $sp, 0xF28
    ctx->pc = 0x4542c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_4542c4:
    // 0x4542c4: 0x8fa50f90  lw          $a1, 0xF90($sp)
    ctx->pc = 0x4542c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3984)));
label_4542c8:
    // 0x4542c8: 0xc042844  jal         func_10A110
label_4542cc:
    if (ctx->pc == 0x4542CCu) {
        ctx->pc = 0x4542D0u;
        goto label_4542d0;
    }
    ctx->pc = 0x4542C8u;
    SET_GPR_U32(ctx, 31, 0x4542D0u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x4542C8u, 0x4542D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4542D0u;
label_4542d0:
    // 0x4542d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4542d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4542d4:
    // 0x4542d4: 0x27a60f28  addiu       $a2, $sp, 0xF28
    ctx->pc = 0x4542d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_4542d8:
    // 0x4542d8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4542d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4542dc:
    // 0x4542dc: 0xc119310  jal         func_464C40
label_4542e0:
    if (ctx->pc == 0x4542E0u) {
        ctx->pc = 0x4542E4u;
        goto label_4542e4;
    }
    ctx->pc = 0x4542DCu;
    SET_GPR_U32(ctx, 31, 0x4542E4u);
    ctx->pc = 0x464C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464C40u, 0x4542DCu, 0x4542E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4542E4u;
label_4542e4:
    // 0x4542e4: 0x27a80f18  addiu       $t0, $sp, 0xF18
    ctx->pc = 0x4542e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_4542e8:
    // 0x4542e8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x4542e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4542ec:
    // 0x4542ec: 0x27a90f28  addiu       $t1, $sp, 0xF28
    ctx->pc = 0x4542ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_4542f0:
    // 0x4542f0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4542f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4542f4:
    // 0x4542f4: 0xc042844  jal         func_10A110
label_4542f8:
    if (ctx->pc == 0x4542F8u) {
        ctx->pc = 0x4542FCu;
        goto label_4542fc;
    }
    ctx->pc = 0x4542F4u;
    SET_GPR_U32(ctx, 31, 0x4542FCu);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x4542F4u, 0x4542FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4542FCu;
label_4542fc:
    // 0x4542fc: 0x27a40f18  addiu       $a0, $sp, 0xF18
    ctx->pc = 0x4542fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454300:
    // 0x454300: 0x27a50f28  addiu       $a1, $sp, 0xF28
    ctx->pc = 0x454300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_454304:
    // 0x454304: 0x27a60f78  addiu       $a2, $sp, 0xF78
    ctx->pc = 0x454304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_454308:
    // 0x454308: 0xc061d44  jal         func_187510
label_45430c:
    if (ctx->pc == 0x45430Cu) {
        ctx->pc = 0x454310u;
        goto label_454310;
    }
    ctx->pc = 0x454308u;
    SET_GPR_U32(ctx, 31, 0x454310u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x454308u, 0x454310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454310u;
label_454310:
    // 0x454310: 0x10000045  b           . + 4 + (0x45 << 2)
label_454314:
    if (ctx->pc == 0x454314u) {
        ctx->pc = 0x454318u;
        goto label_454318;
    }
    ctx->pc = 0x454310u;
    {
        const bool branch_taken_0x454310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x454310) {
            ctx->pc = 0x454428u;
            goto label_454428;
        }
    }
    ctx->pc = 0x454318u;
label_454318:
    // 0x454318: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x454318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_45431c:
    // 0x45431c: 0xc1138e4  jal         func_44E390
label_454320:
    if (ctx->pc == 0x454320u) {
        ctx->pc = 0x454324u;
        goto label_454324;
    }
    ctx->pc = 0x45431Cu;
    SET_GPR_U32(ctx, 31, 0x454324u);
    ctx->pc = 0x44E390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E390u, 0x45431Cu, 0x454324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454324u;
label_454324:
    // 0x454324: 0xafa20f70  sw          $v0, 0xF70($sp)
    ctx->pc = 0x454324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3952), GPR_U32(ctx, 2));
label_454328:
    // 0x454328: 0x8fa20f70  lw          $v0, 0xF70($sp)
    ctx->pc = 0x454328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3952)));
label_45432c:
    // 0x45432c: 0x2482b  sltu        $t1, $zero, $v0
    ctx->pc = 0x45432cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_454330:
    // 0x454330: 0x312500ff  andi        $a1, $t1, 0xFF
    ctx->pc = 0x454330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_454334:
    // 0x454334: 0x14a0002f  bnez        $a1, . + 4 + (0x2F << 2)
label_454338:
    if (ctx->pc == 0x454338u) {
        ctx->pc = 0x45433Cu;
        goto label_45433c;
    }
    ctx->pc = 0x454334u;
    {
        const bool branch_taken_0x454334 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x454334) {
            ctx->pc = 0x4543F4u;
            goto label_4543f4;
        }
    }
    ctx->pc = 0x45433Cu;
label_45433c:
    // 0x45433c: 0x8f86b03c  lw          $a2, -0x4FC4($gp)
    ctx->pc = 0x45433cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946876)));
label_454340:
    // 0x454340: 0x10c0002c  beqz        $a2, . + 4 + (0x2C << 2)
label_454344:
    if (ctx->pc == 0x454344u) {
        ctx->pc = 0x454348u;
        goto label_454348;
    }
    ctx->pc = 0x454340u;
    {
        const bool branch_taken_0x454340 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x454340) {
            ctx->pc = 0x4543F4u;
            goto label_4543f4;
        }
    }
    ctx->pc = 0x454348u;
label_454348:
    // 0x454348: 0x8f82bf38  lw          $v0, -0x40C8($gp)
    ctx->pc = 0x454348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_45434c:
    // 0x45434c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45434cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454350:
    // 0x454350: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x454350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_454354:
    // 0x454354: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x454354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_454358:
    // 0x454358: 0x27a60f08  addiu       $a2, $sp, 0xF08
    ctx->pc = 0x454358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3848));
label_45435c:
    // 0x45435c: 0xc115ee8  jal         func_457BA0
label_454360:
    if (ctx->pc == 0x454360u) {
        ctx->pc = 0x454364u;
        goto label_454364;
    }
    ctx->pc = 0x45435Cu;
    SET_GPR_U32(ctx, 31, 0x454364u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x45435Cu, 0x454364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454364u;
label_454364:
    // 0x454364: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_454368:
    if (ctx->pc == 0x454368u) {
        ctx->pc = 0x45436Cu;
        goto label_45436c;
    }
    ctx->pc = 0x454364u;
    {
        const bool branch_taken_0x454364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454364) {
            ctx->pc = 0x4543F4u;
            goto label_4543f4;
        }
    }
    ctx->pc = 0x45436Cu;
label_45436c:
    // 0x45436c: 0x8fa20f10  lw          $v0, 0xF10($sp)
    ctx->pc = 0x45436cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3856)));
label_454370:
    // 0x454370: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_454374:
    if (ctx->pc == 0x454374u) {
        ctx->pc = 0x454378u;
        goto label_454378;
    }
    ctx->pc = 0x454370u;
    {
        const bool branch_taken_0x454370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454370) {
            ctx->pc = 0x4543F4u;
            goto label_4543f4;
        }
    }
    ctx->pc = 0x454378u;
label_454378:
    // 0x454378: 0x27a40d00  addiu       $a0, $sp, 0xD00
    ctx->pc = 0x454378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3328));
label_45437c:
    // 0x45437c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45437cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_454380:
    // 0x454380: 0x8fa60f0c  lw          $a2, 0xF0C($sp)
    ctx->pc = 0x454380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3852)));
label_454384:
    // 0x454384: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x454384u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_454388:
    // 0x454388: 0x24e7de80  addiu       $a3, $a3, -0x2180
    ctx->pc = 0x454388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
label_45438c:
    // 0x45438c: 0x2408024a  addiu       $t0, $zero, 0x24A
    ctx->pc = 0x45438cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 586));
label_454390:
    // 0x454390: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x454390u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_454394:
    // 0x454394: 0x2529e1c0  addiu       $t1, $t1, -0x1E40
    ctx->pc = 0x454394u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959552));
label_454398:
    // 0x454398: 0xc113940  jal         func_44E500
label_45439c:
    if (ctx->pc == 0x45439Cu) {
        ctx->pc = 0x4543A0u;
        goto label_4543a0;
    }
    ctx->pc = 0x454398u;
    SET_GPR_U32(ctx, 31, 0x4543A0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x454398u, 0x4543A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4543A0u;
label_4543a0:
    // 0x4543a0: 0x27a20d00  addiu       $v0, $sp, 0xD00
    ctx->pc = 0x4543a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3328));
label_4543a4:
    // 0x4543a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4543a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4543a8:
    // 0x4543a8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4543a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4543ac:
    // 0x4543ac: 0x24a5e1e0  addiu       $a1, $a1, -0x1E20
    ctx->pc = 0x4543acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959584));
label_4543b0:
    // 0x4543b0: 0xc115c24  jal         func_457090
label_4543b4:
    if (ctx->pc == 0x4543B4u) {
        ctx->pc = 0x4543B8u;
        goto label_4543b8;
    }
    ctx->pc = 0x4543B0u;
    SET_GPR_U32(ctx, 31, 0x4543B8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4543B0u, 0x4543B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4543B8u;
label_4543b8:
    // 0x4543b8: 0x27a40d00  addiu       $a0, $sp, 0xD00
    ctx->pc = 0x4543b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3328));
label_4543bc:
    // 0x4543bc: 0x8fa50f10  lw          $a1, 0xF10($sp)
    ctx->pc = 0x4543bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3856)));
label_4543c0:
    // 0x4543c0: 0xa0f809  jalr        $a1
label_4543c4:
    if (ctx->pc == 0x4543C4u) {
        ctx->pc = 0x4543C8u;
        goto label_4543c8;
    }
    ctx->pc = 0x4543C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x4543C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4543C0u, 0x4543C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4543C8u;
label_4543c8:
    // 0x4543c8: 0xaf82b03c  sw          $v0, -0x4FC4($gp)
    ctx->pc = 0x4543c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946876), GPR_U32(ctx, 2));
label_4543cc:
    // 0x4543cc: 0x8fa40d00  lw          $a0, 0xD00($sp)
    ctx->pc = 0x4543ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3328)));
label_4543d0:
    // 0x4543d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4543d4:
    if (ctx->pc == 0x4543D4u) {
        ctx->pc = 0x4543D8u;
        goto label_4543d8;
    }
    ctx->pc = 0x4543D0u;
    {
        const bool branch_taken_0x4543d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4543d0) {
            ctx->pc = 0x4543E0u;
            goto label_4543e0;
        }
    }
    ctx->pc = 0x4543D8u;
label_4543d8:
    // 0x4543d8: 0xd  break       0
    ctx->pc = 0x4543d8u;
    runtime->handleBreak(rdram, ctx);
label_4543dc:
    // 0x4543dc: 0x0  nop
    ctx->pc = 0x4543dcu;
    // NOP
label_4543e0:
    // 0x4543e0: 0x27a20d00  addiu       $v0, $sp, 0xD00
    ctx->pc = 0x4543e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3328));
label_4543e4:
    // 0x4543e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4543e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4543e8:
    // 0x4543e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4543e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4543ec:
    // 0x4543ec: 0xc11392c  jal         func_44E4B0
label_4543f0:
    if (ctx->pc == 0x4543F0u) {
        ctx->pc = 0x4543F4u;
        goto label_4543f4;
    }
    ctx->pc = 0x4543ECu;
    SET_GPR_U32(ctx, 31, 0x4543F4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4543ECu, 0x4543F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4543F4u;
label_4543f4:
    // 0x4543f4: 0x27a50f18  addiu       $a1, $sp, 0xF18
    ctx->pc = 0x4543f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_4543f8:
    // 0x4543f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4543f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4543fc:
    // 0x4543fc: 0x8fa60f70  lw          $a2, 0xF70($sp)
    ctx->pc = 0x4543fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3952)));
label_454400:
    // 0x454400: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x454400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_454404:
    // 0x454404: 0xc048c30  jal         func_1230C0
label_454408:
    if (ctx->pc == 0x454408u) {
        ctx->pc = 0x45440Cu;
        goto label_45440c;
    }
    ctx->pc = 0x454404u;
    SET_GPR_U32(ctx, 31, 0x45440Cu);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x454404u, 0x45440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45440Cu;
label_45440c:
    // 0x45440c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_454410:
    if (ctx->pc == 0x454410u) {
        ctx->pc = 0x454414u;
        goto label_454414;
    }
    ctx->pc = 0x45440Cu;
    {
        const bool branch_taken_0x45440c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45440c) {
            ctx->pc = 0x454424u;
            goto label_454424;
        }
    }
    ctx->pc = 0x454414u;
label_454414:
    // 0x454414: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x454414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_454418:
    // 0x454418: 0xafa40f74  sw          $a0, 0xF74($sp)
    ctx->pc = 0x454418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3956), GPR_U32(ctx, 4));
label_45441c:
    // 0x45441c: 0x10000002  b           . + 4 + (0x2 << 2)
label_454420:
    if (ctx->pc == 0x454420u) {
        ctx->pc = 0x454424u;
        goto label_454424;
    }
    ctx->pc = 0x45441Cu;
    {
        const bool branch_taken_0x45441c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45441c) {
            ctx->pc = 0x454428u;
            goto label_454428;
        }
    }
    ctx->pc = 0x454424u;
label_454424:
    // 0x454424: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x454424u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_454428:
    // 0x454428: 0x8fa50f74  lw          $a1, 0xF74($sp)
    ctx->pc = 0x454428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3956)));
label_45442c:
    // 0x45442c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_454430:
    if (ctx->pc == 0x454430u) {
        ctx->pc = 0x454434u;
        goto label_454434;
    }
    ctx->pc = 0x45442Cu;
    {
        const bool branch_taken_0x45442c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x45442c) {
            ctx->pc = 0x454440u;
            goto label_454440;
        }
    }
    ctx->pc = 0x454434u;
label_454434:
    // 0x454434: 0x2e660012  sltiu       $a2, $s3, 0x12
    ctx->pc = 0x454434u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_454438:
    // 0x454438: 0x14c0ffb7  bnez        $a2, . + 4 + (-0x49 << 2)
label_45443c:
    if (ctx->pc == 0x45443Cu) {
        ctx->pc = 0x454440u;
        goto label_454440;
    }
    ctx->pc = 0x454438u;
    {
        const bool branch_taken_0x454438 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x454438) {
            ctx->pc = 0x454318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_454318;
        }
    }
    ctx->pc = 0x454440u;
label_454440:
    // 0x454440: 0x8fa60f74  lw          $a2, 0xF74($sp)
    ctx->pc = 0x454440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3956)));
label_454444:
    // 0x454444: 0x14c0000f  bnez        $a2, . + 4 + (0xF << 2)
label_454448:
    if (ctx->pc == 0x454448u) {
        ctx->pc = 0x45444Cu;
        goto label_45444c;
    }
    ctx->pc = 0x454444u;
    {
        const bool branch_taken_0x454444 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x454444) {
            ctx->pc = 0x454484u;
            goto label_454484;
        }
    }
    ctx->pc = 0x45444Cu;
label_45444c:
    // 0x45444c: 0xafa00f60  sw          $zero, 0xF60($sp)
    ctx->pc = 0x45444cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3936), GPR_U32(ctx, 0));
label_454450:
    // 0x454450: 0x27a20f18  addiu       $v0, $sp, 0xF18
    ctx->pc = 0x454450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454454:
    // 0x454454: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454458:
    // 0x454458: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x454458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45445c:
    // 0x45445c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x45445cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_454460:
    // 0x454460: 0xc0402d4  jal         func_100B50
label_454464:
    if (ctx->pc == 0x454464u) {
        ctx->pc = 0x454468u;
        goto label_454468;
    }
    ctx->pc = 0x454460u;
    SET_GPR_U32(ctx, 31, 0x454468u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x454460u, 0x454468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454468u;
label_454468:
    // 0x454468: 0x27a40f28  addiu       $a0, $sp, 0xF28
    ctx->pc = 0x454468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_45446c:
    // 0x45446c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45446cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_454470:
    // 0x454470: 0xc0402d4  jal         func_100B50
label_454474:
    if (ctx->pc == 0x454474u) {
        ctx->pc = 0x454478u;
        goto label_454478;
    }
    ctx->pc = 0x454470u;
    SET_GPR_U32(ctx, 31, 0x454478u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x454470u, 0x454478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454478u;
label_454478:
    // 0x454478: 0x8fa20f60  lw          $v0, 0xF60($sp)
    ctx->pc = 0x454478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3936)));
label_45447c:
    // 0x45447c: 0x1000062f  b           . + 4 + (0x62F << 2)
label_454480:
    if (ctx->pc == 0x454480u) {
        ctx->pc = 0x454484u;
        goto label_454484;
    }
    ctx->pc = 0x45447Cu;
    {
        const bool branch_taken_0x45447c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45447c) {
            ctx->pc = 0x455D3Cu;
            goto label_455d3c;
        }
    }
    ctx->pc = 0x454484u;
label_454484:
    // 0x454484: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x454484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_454488:
    // 0x454488: 0x2e210012  sltiu       $at, $s1, 0x12
    ctx->pc = 0x454488u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_45448c:
    // 0x45448c: 0x1020061c  beqz        $at, . + 4 + (0x61C << 2)
label_454490:
    if (ctx->pc == 0x454490u) {
        ctx->pc = 0x454494u;
        goto label_454494;
    }
    ctx->pc = 0x45448Cu;
    {
        const bool branch_taken_0x45448c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45448c) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x454494u;
label_454494:
    // 0x454494: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x454494u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_454498:
    // 0x454498: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x454498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_45449c:
    // 0x45449c: 0x114080  sll         $t0, $s1, 2
    ctx->pc = 0x45449cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_4544a0:
    // 0x4544a0: 0x1074821  addu        $t1, $t0, $a3
    ctx->pc = 0x4544a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_4544a4:
    // 0x4544a4: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x4544a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4544a8:
    // 0x4544a8: 0xa00008  jr          $a1
label_4544ac:
    if (ctx->pc == 0x4544ACu) {
        ctx->pc = 0x4544B0u;
        goto label_4544b0;
    }
    ctx->pc = 0x4544A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4544B0u: goto label_4544b0;
            case 0x45468Cu: goto label_45468c;
            case 0x4548B8u: goto label_4548b8;
            case 0x454C74u: goto label_454c74;
            case 0x454F38u: goto label_454f38;
            case 0x4550FCu: goto label_4550fc;
            case 0x45544Cu: goto label_45544c;
            case 0x455624u: goto label_455624;
            case 0x4557C0u: goto label_4557c0;
            case 0x4559C0u: goto label_4559c0;
            case 0x455B74u: goto label_455b74;
            case 0x455D00u: goto label_455d00;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4544A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4544B0u;
label_4544b0:
    // 0x4544b0: 0x27a40f28  addiu       $a0, $sp, 0xF28
    ctx->pc = 0x4544b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_4544b4:
    // 0x4544b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4544b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4544b8:
    // 0x4544b8: 0xc1193e8  jal         func_464FA0
label_4544bc:
    if (ctx->pc == 0x4544BCu) {
        ctx->pc = 0x4544C0u;
        goto label_4544c0;
    }
    ctx->pc = 0x4544B8u;
    SET_GPR_U32(ctx, 31, 0x4544C0u);
    ctx->pc = 0x464FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464FA0u, 0x4544B8u, 0x4544C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4544C0u;
label_4544c0:
    // 0x4544c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4544c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4544c4:
    // 0x4544c4: 0x1444060e  bne         $v0, $a0, . + 4 + (0x60E << 2)
label_4544c8:
    if (ctx->pc == 0x4544C8u) {
        ctx->pc = 0x4544CCu;
        goto label_4544cc;
    }
    ctx->pc = 0x4544C4u;
    {
        const bool branch_taken_0x4544c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4544c4) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x4544CCu;
label_4544cc:
    // 0x4544cc: 0x27a50f18  addiu       $a1, $sp, 0xF18
    ctx->pc = 0x4544ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_4544d0:
    // 0x4544d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4544d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4544d4:
    // 0x4544d4: 0x27a50f28  addiu       $a1, $sp, 0xF28
    ctx->pc = 0x4544d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_4544d8:
    // 0x4544d8: 0x27a60f78  addiu       $a2, $sp, 0xF78
    ctx->pc = 0x4544d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_4544dc:
    // 0x4544dc: 0xc061d44  jal         func_187510
label_4544e0:
    if (ctx->pc == 0x4544E0u) {
        ctx->pc = 0x4544E4u;
        goto label_4544e4;
    }
    ctx->pc = 0x4544DCu;
    SET_GPR_U32(ctx, 31, 0x4544E4u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x4544DCu, 0x4544E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4544E4u;
label_4544e4:
    // 0x4544e4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x4544e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4544e8:
    // 0x4544e8: 0xc119b68  jal         func_466DA0
label_4544ec:
    if (ctx->pc == 0x4544ECu) {
        ctx->pc = 0x4544F0u;
        goto label_4544f0;
    }
    ctx->pc = 0x4544E8u;
    SET_GPR_U32(ctx, 31, 0x4544F0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x4544E8u, 0x4544F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4544F0u;
label_4544f0:
    // 0x4544f0: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x4544f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4544f4:
    // 0x4544f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4544f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4544f8:
    // 0x4544f8: 0xc0400e0  jal         func_100380
label_4544fc:
    if (ctx->pc == 0x4544FCu) {
        ctx->pc = 0x454500u;
        goto label_454500;
    }
    ctx->pc = 0x4544F8u;
    SET_GPR_U32(ctx, 31, 0x454500u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x4544F8u, 0x454500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454500u;
label_454500:
    // 0x454500: 0xafa20f4c  sw          $v0, 0xF4C($sp)
    ctx->pc = 0x454500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3916), GPR_U32(ctx, 2));
label_454504:
    // 0x454504: 0x8fa50f4c  lw          $a1, 0xF4C($sp)
    ctx->pc = 0x454504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3916)));
label_454508:
    // 0x454508: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_45450c:
    if (ctx->pc == 0x45450Cu) {
        ctx->pc = 0x454510u;
        goto label_454510;
    }
    ctx->pc = 0x454508u;
    {
        const bool branch_taken_0x454508 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x454508) {
            ctx->pc = 0x454528u;
            goto label_454528;
        }
    }
    ctx->pc = 0x454510u;
label_454510:
    // 0x454510: 0x8fa60f4c  lw          $a2, 0xF4C($sp)
    ctx->pc = 0x454510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3916)));
label_454514:
    // 0x454514: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x454514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_454518:
    // 0x454518: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x454518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45451c:
    // 0x45451c: 0xc1135f0  jal         func_44D7C0
label_454520:
    if (ctx->pc == 0x454520u) {
        ctx->pc = 0x454524u;
        goto label_454524;
    }
    ctx->pc = 0x45451Cu;
    SET_GPR_U32(ctx, 31, 0x454524u);
    ctx->pc = 0x44D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D7C0u, 0x45451Cu, 0x454524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454524u;
label_454524:
    // 0x454524: 0xafa20f4c  sw          $v0, 0xF4C($sp)
    ctx->pc = 0x454524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3916), GPR_U32(ctx, 2));
label_454528:
    // 0x454528: 0x8fa20f4c  lw          $v0, 0xF4C($sp)
    ctx->pc = 0x454528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3916)));
label_45452c:
    // 0x45452c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45452cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454530:
    // 0x454530: 0x10282b  sltu        $a1, $zero, $s0
    ctx->pc = 0x454530u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_454534:
    // 0x454534: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x454534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_454538:
    // 0x454538: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_45453c:
    if (ctx->pc == 0x45453Cu) {
        ctx->pc = 0x454540u;
        goto label_454540;
    }
    ctx->pc = 0x454538u;
    {
        const bool branch_taken_0x454538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x454538) {
            ctx->pc = 0x4545F4u;
            goto label_4545f4;
        }
    }
    ctx->pc = 0x454540u;
label_454540:
    // 0x454540: 0x8f84b040  lw          $a0, -0x4FC0($gp)
    ctx->pc = 0x454540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946880)));
label_454544:
    // 0x454544: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
label_454548:
    if (ctx->pc == 0x454548u) {
        ctx->pc = 0x45454Cu;
        goto label_45454c;
    }
    ctx->pc = 0x454544u;
    {
        const bool branch_taken_0x454544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x454544) {
            ctx->pc = 0x4545F4u;
            goto label_4545f4;
        }
    }
    ctx->pc = 0x45454Cu;
label_45454c:
    // 0x45454c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45454cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_454550:
    // 0x454550: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x454550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_454554:
    // 0x454554: 0x27a60ef8  addiu       $a2, $sp, 0xEF8
    ctx->pc = 0x454554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3832));
label_454558:
    // 0x454558: 0xc115ee8  jal         func_457BA0
label_45455c:
    if (ctx->pc == 0x45455Cu) {
        ctx->pc = 0x454560u;
        goto label_454560;
    }
    ctx->pc = 0x454558u;
    SET_GPR_U32(ctx, 31, 0x454560u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x454558u, 0x454560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454560u;
label_454560:
    // 0x454560: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_454564:
    if (ctx->pc == 0x454564u) {
        ctx->pc = 0x454568u;
        goto label_454568;
    }
    ctx->pc = 0x454560u;
    {
        const bool branch_taken_0x454560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454560) {
            ctx->pc = 0x4545F4u;
            goto label_4545f4;
        }
    }
    ctx->pc = 0x454568u;
label_454568:
    // 0x454568: 0x8fa20f00  lw          $v0, 0xF00($sp)
    ctx->pc = 0x454568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3840)));
label_45456c:
    // 0x45456c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_454570:
    if (ctx->pc == 0x454570u) {
        ctx->pc = 0x454574u;
        goto label_454574;
    }
    ctx->pc = 0x45456Cu;
    {
        const bool branch_taken_0x45456c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45456c) {
            ctx->pc = 0x4545F4u;
            goto label_4545f4;
        }
    }
    ctx->pc = 0x454574u;
label_454574:
    // 0x454574: 0x27a50be0  addiu       $a1, $sp, 0xBE0
    ctx->pc = 0x454574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3040));
label_454578:
    // 0x454578: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x454578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_45457c:
    // 0x45457c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45457cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_454580:
    // 0x454580: 0x8fa60efc  lw          $a2, 0xEFC($sp)
    ctx->pc = 0x454580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3836)));
label_454584:
    // 0x454584: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x454584u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_454588:
    // 0x454588: 0x24e7de80  addiu       $a3, $a3, -0x2180
    ctx->pc = 0x454588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
label_45458c:
    // 0x45458c: 0x2408026a  addiu       $t0, $zero, 0x26A
    ctx->pc = 0x45458cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
label_454590:
    // 0x454590: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x454590u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_454594:
    // 0x454594: 0x2529e240  addiu       $t1, $t1, -0x1DC0
    ctx->pc = 0x454594u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959680));
label_454598:
    // 0x454598: 0xc113940  jal         func_44E500
label_45459c:
    if (ctx->pc == 0x45459Cu) {
        ctx->pc = 0x4545A0u;
        goto label_4545a0;
    }
    ctx->pc = 0x454598u;
    SET_GPR_U32(ctx, 31, 0x4545A0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x454598u, 0x4545A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4545A0u;
label_4545a0:
    // 0x4545a0: 0x27a40be0  addiu       $a0, $sp, 0xBE0
    ctx->pc = 0x4545a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3040));
label_4545a4:
    // 0x4545a4: 0x2785b00c  addiu       $a1, $gp, -0x4FF4
    ctx->pc = 0x4545a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946828));
label_4545a8:
    // 0x4545a8: 0xc115c24  jal         func_457090
label_4545ac:
    if (ctx->pc == 0x4545ACu) {
        ctx->pc = 0x4545B0u;
        goto label_4545b0;
    }
    ctx->pc = 0x4545A8u;
    SET_GPR_U32(ctx, 31, 0x4545B0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4545A8u, 0x4545B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4545B0u;
label_4545b0:
    // 0x4545b0: 0x27a20be0  addiu       $v0, $sp, 0xBE0
    ctx->pc = 0x4545b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3040));
label_4545b4:
    // 0x4545b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4545b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4545b8:
    // 0x4545b8: 0x8fa70f00  lw          $a3, 0xF00($sp)
    ctx->pc = 0x4545b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3840)));
label_4545bc:
    // 0x4545bc: 0xe0f809  jalr        $a3
label_4545c0:
    if (ctx->pc == 0x4545C0u) {
        ctx->pc = 0x4545C4u;
        goto label_4545c4;
    }
    ctx->pc = 0x4545BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x4545C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4545BCu, 0x4545C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4545C4u;
label_4545c4:
    // 0x4545c4: 0xaf82b040  sw          $v0, -0x4FC0($gp)
    ctx->pc = 0x4545c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946880), GPR_U32(ctx, 2));
label_4545c8:
    // 0x4545c8: 0x8fa90be0  lw          $t1, 0xBE0($sp)
    ctx->pc = 0x4545c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3040)));
label_4545cc:
    // 0x4545cc: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
label_4545d0:
    if (ctx->pc == 0x4545D0u) {
        ctx->pc = 0x4545D4u;
        goto label_4545d4;
    }
    ctx->pc = 0x4545CCu;
    {
        const bool branch_taken_0x4545cc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x4545cc) {
            ctx->pc = 0x4545DCu;
            goto label_4545dc;
        }
    }
    ctx->pc = 0x4545D4u;
label_4545d4:
    // 0x4545d4: 0xd  break       0
    ctx->pc = 0x4545d4u;
    runtime->handleBreak(rdram, ctx);
label_4545d8:
    // 0x4545d8: 0x0  nop
    ctx->pc = 0x4545d8u;
    // NOP
label_4545dc:
    // 0x4545dc: 0x27a60be0  addiu       $a2, $sp, 0xBE0
    ctx->pc = 0x4545dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3040));
label_4545e0:
    // 0x4545e0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4545e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4545e4:
    // 0x4545e4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x4545e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4545e8:
    // 0x4545e8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4545e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4545ec:
    // 0x4545ec: 0xc11392c  jal         func_44E4B0
label_4545f0:
    if (ctx->pc == 0x4545F0u) {
        ctx->pc = 0x4545F4u;
        goto label_4545f4;
    }
    ctx->pc = 0x4545ECu;
    SET_GPR_U32(ctx, 31, 0x4545F4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4545ECu, 0x4545F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4545F4u;
label_4545f4:
    // 0x4545f4: 0x27a90f18  addiu       $t1, $sp, 0xF18
    ctx->pc = 0x4545f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_4545f8:
    // 0x4545f8: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x4545f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4545fc:
    // 0x4545fc: 0xc041b38  jal         func_106CE0
label_454600:
    if (ctx->pc == 0x454600u) {
        ctx->pc = 0x454604u;
        goto label_454604;
    }
    ctx->pc = 0x4545FCu;
    SET_GPR_U32(ctx, 31, 0x454604u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x4545FCu, 0x454604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454604u;
label_454604:
    // 0x454604: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x454604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_454608:
    // 0x454608: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x454608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_45460c:
    // 0x45460c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x45460cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_454610:
    // 0x454610: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x454610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454614:
    // 0x454614: 0xc0bc5c6  jal         func_2F1718
label_454618:
    if (ctx->pc == 0x454618u) {
        ctx->pc = 0x45461Cu;
        goto label_45461c;
    }
    ctx->pc = 0x454614u;
    SET_GPR_U32(ctx, 31, 0x45461Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x454614u, 0x45461Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45461Cu;
label_45461c:
    // 0x45461c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x45461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_454620:
    // 0x454620: 0x8fa50f80  lw          $a1, 0xF80($sp)
    ctx->pc = 0x454620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3968)));
label_454624:
    // 0x454624: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x454624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_454628:
    // 0x454628: 0x27a50f18  addiu       $a1, $sp, 0xF18
    ctx->pc = 0x454628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_45462c:
    // 0x45462c: 0x24460024  addiu       $a2, $v0, 0x24
    ctx->pc = 0x45462cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_454630:
    // 0x454630: 0xc11575c  jal         func_455D70
label_454634:
    if (ctx->pc == 0x454634u) {
        ctx->pc = 0x454638u;
        goto label_454638;
    }
    ctx->pc = 0x454630u;
    SET_GPR_U32(ctx, 31, 0x454638u);
    ctx->pc = 0x455D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x455D70u, 0x454630u, 0x454638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454638u;
label_454638:
    // 0x454638: 0x144005b1  bnez        $v0, . + 4 + (0x5B1 << 2)
label_45463c:
    if (ctx->pc == 0x45463Cu) {
        ctx->pc = 0x454640u;
        goto label_454640;
    }
    ctx->pc = 0x454638u;
    {
        const bool branch_taken_0x454638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x454638) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x454640u;
label_454640:
    // 0x454640: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x454640u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
label_454644:
    // 0x454644: 0x24c6e250  addiu       $a2, $a2, -0x1DB0
    ctx->pc = 0x454644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959696));
label_454648:
    // 0x454648: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x454648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_45464c:
    // 0x45464c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45464cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_454650:
    // 0x454650: 0xc115ae4  jal         func_456B90
label_454654:
    if (ctx->pc == 0x454654u) {
        ctx->pc = 0x454658u;
        goto label_454658;
    }
    ctx->pc = 0x454650u;
    SET_GPR_U32(ctx, 31, 0x454658u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x454650u, 0x454658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454658u;
label_454658:
    // 0x454658: 0xafa00f5c  sw          $zero, 0xF5C($sp)
    ctx->pc = 0x454658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3932), GPR_U32(ctx, 0));
label_45465c:
    // 0x45465c: 0x27a40f18  addiu       $a0, $sp, 0xF18
    ctx->pc = 0x45465cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454660:
    // 0x454660: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x454660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_454664:
    // 0x454664: 0xc0402d4  jal         func_100B50
label_454668:
    if (ctx->pc == 0x454668u) {
        ctx->pc = 0x45466Cu;
        goto label_45466c;
    }
    ctx->pc = 0x454664u;
    SET_GPR_U32(ctx, 31, 0x45466Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x454664u, 0x45466Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45466Cu;
label_45466c:
    // 0x45466c: 0x27a40f28  addiu       $a0, $sp, 0xF28
    ctx->pc = 0x45466cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_454670:
    // 0x454670: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x454670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_454674:
    // 0x454674: 0xc0402d4  jal         func_100B50
label_454678:
    if (ctx->pc == 0x454678u) {
        ctx->pc = 0x45467Cu;
        goto label_45467c;
    }
    ctx->pc = 0x454674u;
    SET_GPR_U32(ctx, 31, 0x45467Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x454674u, 0x45467Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45467Cu;
label_45467c:
    // 0x45467c: 0x8fa50f5c  lw          $a1, 0xF5C($sp)
    ctx->pc = 0x45467cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3932)));
label_454680:
    // 0x454680: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x454680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_454684:
    // 0x454684: 0x100005ad  b           . + 4 + (0x5AD << 2)
label_454688:
    if (ctx->pc == 0x454688u) {
        ctx->pc = 0x45468Cu;
        goto label_45468c;
    }
    ctx->pc = 0x454684u;
    {
        const bool branch_taken_0x454684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x454684) {
            ctx->pc = 0x455D3Cu;
            goto label_455d3c;
        }
    }
    ctx->pc = 0x45468Cu;
label_45468c:
    // 0x45468c: 0x27a60f28  addiu       $a2, $sp, 0xF28
    ctx->pc = 0x45468cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_454690:
    // 0x454690: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x454690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_454694:
    // 0x454694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x454694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_454698:
    // 0x454698: 0xc1193e8  jal         func_464FA0
label_45469c:
    if (ctx->pc == 0x45469Cu) {
        ctx->pc = 0x4546A0u;
        goto label_4546a0;
    }
    ctx->pc = 0x454698u;
    SET_GPR_U32(ctx, 31, 0x4546A0u);
    ctx->pc = 0x464FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464FA0u, 0x454698u, 0x4546A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4546A0u;
label_4546a0:
    // 0x4546a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4546a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4546a4:
    // 0x4546a4: 0x14440596  bne         $v0, $a0, . + 4 + (0x596 << 2)
label_4546a8:
    if (ctx->pc == 0x4546A8u) {
        ctx->pc = 0x4546ACu;
        goto label_4546ac;
    }
    ctx->pc = 0x4546A4u;
    {
        const bool branch_taken_0x4546a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4546a4) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x4546ACu;
label_4546ac:
    // 0x4546ac: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x4546acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4546b0:
    // 0x4546b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4546b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4546b4:
    // 0x4546b4: 0xc119b68  jal         func_466DA0
label_4546b8:
    if (ctx->pc == 0x4546B8u) {
        ctx->pc = 0x4546BCu;
        goto label_4546bc;
    }
    ctx->pc = 0x4546B4u;
    SET_GPR_U32(ctx, 31, 0x4546BCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x4546B4u, 0x4546BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4546BCu;
label_4546bc:
    // 0x4546bc: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x4546bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4546c0:
    // 0x4546c0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4546c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4546c4:
    // 0x4546c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4546c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4546c8:
    // 0x4546c8: 0xc0400e0  jal         func_100380
label_4546cc:
    if (ctx->pc == 0x4546CCu) {
        ctx->pc = 0x4546D0u;
        goto label_4546d0;
    }
    ctx->pc = 0x4546C8u;
    SET_GPR_U32(ctx, 31, 0x4546D0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x4546C8u, 0x4546D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4546D0u;
label_4546d0:
    // 0x4546d0: 0xafa20f48  sw          $v0, 0xF48($sp)
    ctx->pc = 0x4546d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3912), GPR_U32(ctx, 2));
label_4546d4:
    // 0x4546d4: 0x8fa40f48  lw          $a0, 0xF48($sp)
    ctx->pc = 0x4546d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3912)));
label_4546d8:
    // 0x4546d8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_4546dc:
    if (ctx->pc == 0x4546DCu) {
        ctx->pc = 0x4546E0u;
        goto label_4546e0;
    }
    ctx->pc = 0x4546D8u;
    {
        const bool branch_taken_0x4546d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4546d8) {
            ctx->pc = 0x4546F8u;
            goto label_4546f8;
        }
    }
    ctx->pc = 0x4546E0u;
label_4546e0:
    // 0x4546e0: 0x8fa50f48  lw          $a1, 0xF48($sp)
    ctx->pc = 0x4546e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3912)));
label_4546e4:
    // 0x4546e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4546e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4546e8:
    // 0x4546e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4546e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4546ec:
    // 0x4546ec: 0xc1135f0  jal         func_44D7C0
label_4546f0:
    if (ctx->pc == 0x4546F0u) {
        ctx->pc = 0x4546F4u;
        goto label_4546f4;
    }
    ctx->pc = 0x4546ECu;
    SET_GPR_U32(ctx, 31, 0x4546F4u);
    ctx->pc = 0x44D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D7C0u, 0x4546ECu, 0x4546F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4546F4u;
label_4546f4:
    // 0x4546f4: 0xafa20f48  sw          $v0, 0xF48($sp)
    ctx->pc = 0x4546f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3912), GPR_U32(ctx, 2));
label_4546f8:
    // 0x4546f8: 0x8fa40f48  lw          $a0, 0xF48($sp)
    ctx->pc = 0x4546f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3912)));
label_4546fc:
    // 0x4546fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4546fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_454700:
    // 0x454700: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x454700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_454704:
    // 0x454704: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x454704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_454708:
    // 0x454708: 0x1480002f  bnez        $a0, . + 4 + (0x2F << 2)
label_45470c:
    if (ctx->pc == 0x45470Cu) {
        ctx->pc = 0x454710u;
        goto label_454710;
    }
    ctx->pc = 0x454708u;
    {
        const bool branch_taken_0x454708 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x454708) {
            ctx->pc = 0x4547C8u;
            goto label_4547c8;
        }
    }
    ctx->pc = 0x454710u;
label_454710:
    // 0x454710: 0x8f85b044  lw          $a1, -0x4FBC($gp)
    ctx->pc = 0x454710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946884)));
label_454714:
    // 0x454714: 0x10a0002c  beqz        $a1, . + 4 + (0x2C << 2)
label_454718:
    if (ctx->pc == 0x454718u) {
        ctx->pc = 0x45471Cu;
        goto label_45471c;
    }
    ctx->pc = 0x454714u;
    {
        const bool branch_taken_0x454714 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x454714) {
            ctx->pc = 0x4547C8u;
            goto label_4547c8;
        }
    }
    ctx->pc = 0x45471Cu;
label_45471c:
    // 0x45471c: 0x8f86bf38  lw          $a2, -0x40C8($gp)
    ctx->pc = 0x45471cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_454720:
    // 0x454720: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x454720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_454724:
    // 0x454724: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x454724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_454728:
    // 0x454728: 0x27a60ee8  addiu       $a2, $sp, 0xEE8
    ctx->pc = 0x454728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3816));
label_45472c:
    // 0x45472c: 0xc115ee8  jal         func_457BA0
label_454730:
    if (ctx->pc == 0x454730u) {
        ctx->pc = 0x454734u;
        goto label_454734;
    }
    ctx->pc = 0x45472Cu;
    SET_GPR_U32(ctx, 31, 0x454734u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x45472Cu, 0x454734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454734u;
label_454734:
    // 0x454734: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_454738:
    if (ctx->pc == 0x454738u) {
        ctx->pc = 0x45473Cu;
        goto label_45473c;
    }
    ctx->pc = 0x454734u;
    {
        const bool branch_taken_0x454734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454734) {
            ctx->pc = 0x4547C8u;
            goto label_4547c8;
        }
    }
    ctx->pc = 0x45473Cu;
label_45473c:
    // 0x45473c: 0x8fa40ef0  lw          $a0, 0xEF0($sp)
    ctx->pc = 0x45473cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3824)));
label_454740:
    // 0x454740: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_454744:
    if (ctx->pc == 0x454744u) {
        ctx->pc = 0x454748u;
        goto label_454748;
    }
    ctx->pc = 0x454740u;
    {
        const bool branch_taken_0x454740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x454740) {
            ctx->pc = 0x4547C8u;
            goto label_4547c8;
        }
    }
    ctx->pc = 0x454748u;
label_454748:
    // 0x454748: 0x27a50ac0  addiu       $a1, $sp, 0xAC0
    ctx->pc = 0x454748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2752));
label_45474c:
    // 0x45474c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x45474cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_454750:
    // 0x454750: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x454750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_454754:
    // 0x454754: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x454754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454758:
    // 0x454758: 0x8fa60eec  lw          $a2, 0xEEC($sp)
    ctx->pc = 0x454758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3820)));
label_45475c:
    // 0x45475c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x45475cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_454760:
    // 0x454760: 0x24e7de80  addiu       $a3, $a3, -0x2180
    ctx->pc = 0x454760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
label_454764:
    // 0x454764: 0x2408027f  addiu       $t0, $zero, 0x27F
    ctx->pc = 0x454764u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
label_454768:
    // 0x454768: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x454768u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_45476c:
    // 0x45476c: 0x2529e240  addiu       $t1, $t1, -0x1DC0
    ctx->pc = 0x45476cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959680));
label_454770:
    // 0x454770: 0xc113940  jal         func_44E500
label_454774:
    if (ctx->pc == 0x454774u) {
        ctx->pc = 0x454778u;
        goto label_454778;
    }
    ctx->pc = 0x454770u;
    SET_GPR_U32(ctx, 31, 0x454778u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x454770u, 0x454778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454778u;
label_454778:
    // 0x454778: 0x27a70ac0  addiu       $a3, $sp, 0xAC0
    ctx->pc = 0x454778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2752));
label_45477c:
    // 0x45477c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x45477cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_454780:
    // 0x454780: 0x2788b00c  addiu       $t0, $gp, -0x4FF4
    ctx->pc = 0x454780u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946828));
label_454784:
    // 0x454784: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x454784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_454788:
    // 0x454788: 0xc115c24  jal         func_457090
label_45478c:
    if (ctx->pc == 0x45478Cu) {
        ctx->pc = 0x454790u;
        goto label_454790;
    }
    ctx->pc = 0x454788u;
    SET_GPR_U32(ctx, 31, 0x454790u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x454788u, 0x454790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454790u;
label_454790:
    // 0x454790: 0x27a40ac0  addiu       $a0, $sp, 0xAC0
    ctx->pc = 0x454790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2752));
label_454794:
    // 0x454794: 0x8fa20ef0  lw          $v0, 0xEF0($sp)
    ctx->pc = 0x454794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3824)));
label_454798:
    // 0x454798: 0x40f809  jalr        $v0
label_45479c:
    if (ctx->pc == 0x45479Cu) {
        ctx->pc = 0x4547A0u;
        goto label_4547a0;
    }
    ctx->pc = 0x454798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4547A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x454798u, 0x4547A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4547A0u;
label_4547a0:
    // 0x4547a0: 0xaf82b044  sw          $v0, -0x4FBC($gp)
    ctx->pc = 0x4547a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946884), GPR_U32(ctx, 2));
label_4547a4:
    // 0x4547a4: 0x8fa60ac0  lw          $a2, 0xAC0($sp)
    ctx->pc = 0x4547a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2752)));
label_4547a8:
    // 0x4547a8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_4547ac:
    if (ctx->pc == 0x4547ACu) {
        ctx->pc = 0x4547B0u;
        goto label_4547b0;
    }
    ctx->pc = 0x4547A8u;
    {
        const bool branch_taken_0x4547a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4547a8) {
            ctx->pc = 0x4547B8u;
            goto label_4547b8;
        }
    }
    ctx->pc = 0x4547B0u;
label_4547b0:
    // 0x4547b0: 0xd  break       0
    ctx->pc = 0x4547b0u;
    runtime->handleBreak(rdram, ctx);
label_4547b4:
    // 0x4547b4: 0x0  nop
    ctx->pc = 0x4547b4u;
    // NOP
label_4547b8:
    // 0x4547b8: 0x27a40ac0  addiu       $a0, $sp, 0xAC0
    ctx->pc = 0x4547b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2752));
label_4547bc:
    // 0x4547bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4547bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4547c0:
    // 0x4547c0: 0xc11392c  jal         func_44E4B0
label_4547c4:
    if (ctx->pc == 0x4547C4u) {
        ctx->pc = 0x4547C8u;
        goto label_4547c8;
    }
    ctx->pc = 0x4547C0u;
    SET_GPR_U32(ctx, 31, 0x4547C8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4547C0u, 0x4547C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4547C8u;
label_4547c8:
    // 0x4547c8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x4547c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4547cc:
    // 0x4547cc: 0xafa30f6c  sw          $v1, 0xF6C($sp)
    ctx->pc = 0x4547ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3948), GPR_U32(ctx, 3));
label_4547d0:
    // 0x4547d0: 0x27a40f18  addiu       $a0, $sp, 0xF18
    ctx->pc = 0x4547d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_4547d4:
    // 0x4547d4: 0x27a50f28  addiu       $a1, $sp, 0xF28
    ctx->pc = 0x4547d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_4547d8:
    // 0x4547d8: 0x27a60f78  addiu       $a2, $sp, 0xF78
    ctx->pc = 0x4547d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_4547dc:
    // 0x4547dc: 0xc061d44  jal         func_187510
label_4547e0:
    if (ctx->pc == 0x4547E0u) {
        ctx->pc = 0x4547E4u;
        goto label_4547e4;
    }
    ctx->pc = 0x4547DCu;
    SET_GPR_U32(ctx, 31, 0x4547E4u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x4547DCu, 0x4547E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4547E4u;
label_4547e4:
    // 0x4547e4: 0x27a50f18  addiu       $a1, $sp, 0xF18
    ctx->pc = 0x4547e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_4547e8:
    // 0x4547e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4547e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4547ec:
    // 0x4547ec: 0xc041b38  jal         func_106CE0
label_4547f0:
    if (ctx->pc == 0x4547F0u) {
        ctx->pc = 0x4547F4u;
        goto label_4547f4;
    }
    ctx->pc = 0x4547ECu;
    SET_GPR_U32(ctx, 31, 0x4547F4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x4547ECu, 0x4547F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4547F4u;
label_4547f4:
    // 0x4547f4: 0x8fa60f6c  lw          $a2, 0xF6C($sp)
    ctx->pc = 0x4547f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3948)));
label_4547f8:
    // 0x4547f8: 0x24c40004  addiu       $a0, $a2, 0x4
    ctx->pc = 0x4547f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_4547fc:
    // 0x4547fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4547fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454800:
    // 0x454800: 0xc0bc5c6  jal         func_2F1718
label_454804:
    if (ctx->pc == 0x454804u) {
        ctx->pc = 0x454808u;
        goto label_454808;
    }
    ctx->pc = 0x454800u;
    SET_GPR_U32(ctx, 31, 0x454808u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x454800u, 0x454808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454808u;
label_454808:
    // 0x454808: 0x8fa30f6c  lw          $v1, 0xF6C($sp)
    ctx->pc = 0x454808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3948)));
label_45480c:
    // 0x45480c: 0x8fa50f80  lw          $a1, 0xF80($sp)
    ctx->pc = 0x45480cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3968)));
label_454810:
    // 0x454810: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x454810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_454814:
    // 0x454814: 0x27a20f18  addiu       $v0, $sp, 0xF18
    ctx->pc = 0x454814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454818:
    // 0x454818: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x454818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45481c:
    // 0x45481c: 0x24660044  addiu       $a2, $v1, 0x44
    ctx->pc = 0x45481cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 68));
label_454820:
    // 0x454820: 0xc11575c  jal         func_455D70
label_454824:
    if (ctx->pc == 0x454824u) {
        ctx->pc = 0x454828u;
        goto label_454828;
    }
    ctx->pc = 0x454820u;
    SET_GPR_U32(ctx, 31, 0x454828u);
    ctx->pc = 0x455D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x455D70u, 0x454820u, 0x454828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454828u;
label_454828:
    // 0x454828: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_45482c:
    if (ctx->pc == 0x45482Cu) {
        ctx->pc = 0x454830u;
        goto label_454830;
    }
    ctx->pc = 0x454828u;
    {
        const bool branch_taken_0x454828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x454828) {
            ctx->pc = 0x454874u;
            goto label_454874;
        }
    }
    ctx->pc = 0x454830u;
label_454830:
    // 0x454830: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x454830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_454834:
    // 0x454834: 0x2484e250  addiu       $a0, $a0, -0x1DB0
    ctx->pc = 0x454834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959696));
label_454838:
    // 0x454838: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x454838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45483c:
    // 0x45483c: 0xc115ae4  jal         func_456B90
label_454840:
    if (ctx->pc == 0x454840u) {
        ctx->pc = 0x454844u;
        goto label_454844;
    }
    ctx->pc = 0x45483Cu;
    SET_GPR_U32(ctx, 31, 0x454844u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x45483Cu, 0x454844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454844u;
label_454844:
    // 0x454844: 0xafa00f58  sw          $zero, 0xF58($sp)
    ctx->pc = 0x454844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3928), GPR_U32(ctx, 0));
label_454848:
    // 0x454848: 0x27a40f18  addiu       $a0, $sp, 0xF18
    ctx->pc = 0x454848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_45484c:
    // 0x45484c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45484cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_454850:
    // 0x454850: 0xc0402d4  jal         func_100B50
label_454854:
    if (ctx->pc == 0x454854u) {
        ctx->pc = 0x454858u;
        goto label_454858;
    }
    ctx->pc = 0x454850u;
    SET_GPR_U32(ctx, 31, 0x454858u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x454850u, 0x454858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454858u;
label_454858:
    // 0x454858: 0x27a40f28  addiu       $a0, $sp, 0xF28
    ctx->pc = 0x454858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_45485c:
    // 0x45485c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45485cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_454860:
    // 0x454860: 0xc0402d4  jal         func_100B50
label_454864:
    if (ctx->pc == 0x454864u) {
        ctx->pc = 0x454868u;
        goto label_454868;
    }
    ctx->pc = 0x454860u;
    SET_GPR_U32(ctx, 31, 0x454868u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x454860u, 0x454868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454868u;
label_454868:
    // 0x454868: 0x8fa20f58  lw          $v0, 0xF58($sp)
    ctx->pc = 0x454868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3928)));
label_45486c:
    // 0x45486c: 0x10000533  b           . + 4 + (0x533 << 2)
label_454870:
    if (ctx->pc == 0x454870u) {
        ctx->pc = 0x454874u;
        goto label_454874;
    }
    ctx->pc = 0x45486Cu;
    {
        const bool branch_taken_0x45486c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45486c) {
            ctx->pc = 0x455D3Cu;
            goto label_455d3c;
        }
    }
    ctx->pc = 0x454874u;
label_454874:
    // 0x454874: 0x27a40f18  addiu       $a0, $sp, 0xF18
    ctx->pc = 0x454874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454878:
    // 0x454878: 0x27a50f28  addiu       $a1, $sp, 0xF28
    ctx->pc = 0x454878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_45487c:
    // 0x45487c: 0x27a60f78  addiu       $a2, $sp, 0xF78
    ctx->pc = 0x45487cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_454880:
    // 0x454880: 0xc061d44  jal         func_187510
label_454884:
    if (ctx->pc == 0x454884u) {
        ctx->pc = 0x454888u;
        goto label_454888;
    }
    ctx->pc = 0x454880u;
    SET_GPR_U32(ctx, 31, 0x454888u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x454880u, 0x454888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454888u;
label_454888:
    // 0x454888: 0x27a70f18  addiu       $a3, $sp, 0xF18
    ctx->pc = 0x454888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_45488c:
    // 0x45488c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x45488cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_454890:
    // 0x454890: 0xc041b38  jal         func_106CE0
label_454894:
    if (ctx->pc == 0x454894u) {
        ctx->pc = 0x454898u;
        goto label_454898;
    }
    ctx->pc = 0x454890u;
    SET_GPR_U32(ctx, 31, 0x454898u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x454890u, 0x454898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454898u;
label_454898:
    // 0x454898: 0x8fa90f6c  lw          $t1, 0xF6C($sp)
    ctx->pc = 0x454898u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3948)));
label_45489c:
    // 0x45489c: 0x25250004  addiu       $a1, $t1, 0x4
    ctx->pc = 0x45489cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_4548a0:
    // 0x4548a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4548a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4548a4:
    // 0x4548a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4548a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4548a8:
    // 0x4548a8: 0xc0bc5c6  jal         func_2F1718
label_4548ac:
    if (ctx->pc == 0x4548ACu) {
        ctx->pc = 0x4548B0u;
        goto label_4548b0;
    }
    ctx->pc = 0x4548A8u;
    SET_GPR_U32(ctx, 31, 0x4548B0u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x4548A8u, 0x4548B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4548B0u;
label_4548b0:
    // 0x4548b0: 0x10000513  b           . + 4 + (0x513 << 2)
label_4548b4:
    if (ctx->pc == 0x4548B4u) {
        ctx->pc = 0x4548B8u;
        goto label_4548b8;
    }
    ctx->pc = 0x4548B0u;
    {
        const bool branch_taken_0x4548b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4548b0) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x4548B8u;
label_4548b8:
    // 0x4548b8: 0x27a70f28  addiu       $a3, $sp, 0xF28
    ctx->pc = 0x4548b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_4548bc:
    // 0x4548bc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4548bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4548c0:
    // 0x4548c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4548c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4548c4:
    // 0x4548c4: 0xc1193e8  jal         func_464FA0
label_4548c8:
    if (ctx->pc == 0x4548C8u) {
        ctx->pc = 0x4548CCu;
        goto label_4548cc;
    }
    ctx->pc = 0x4548C4u;
    SET_GPR_U32(ctx, 31, 0x4548CCu);
    ctx->pc = 0x464FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464FA0u, 0x4548C4u, 0x4548CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4548CCu;
label_4548cc:
    // 0x4548cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4548ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4548d0:
    // 0x4548d0: 0x2e410007  sltiu       $at, $s2, 0x7
    ctx->pc = 0x4548d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_4548d4:
    // 0x4548d4: 0x1020050a  beqz        $at, . + 4 + (0x50A << 2)
label_4548d8:
    if (ctx->pc == 0x4548D8u) {
        ctx->pc = 0x4548DCu;
        goto label_4548dc;
    }
    ctx->pc = 0x4548D4u;
    {
        const bool branch_taken_0x4548d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4548d4) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x4548DCu;
label_4548dc:
    // 0x4548dc: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x4548dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4548e0:
    // 0x4548e0: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x4548e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4548e4:
    // 0x4548e4: 0xc119b68  jal         func_466DA0
label_4548e8:
    if (ctx->pc == 0x4548E8u) {
        ctx->pc = 0x4548ECu;
        goto label_4548ec;
    }
    ctx->pc = 0x4548E4u;
    SET_GPR_U32(ctx, 31, 0x4548ECu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x4548E4u, 0x4548ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4548ECu;
label_4548ec:
    // 0x4548ec: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x4548ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4548f0:
    // 0x4548f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4548f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4548f4:
    // 0x4548f4: 0xc0400e0  jal         func_100380
label_4548f8:
    if (ctx->pc == 0x4548F8u) {
        ctx->pc = 0x4548FCu;
        goto label_4548fc;
    }
    ctx->pc = 0x4548F4u;
    SET_GPR_U32(ctx, 31, 0x4548FCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x4548F4u, 0x4548FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4548FCu;
label_4548fc:
    // 0x4548fc: 0xafa20f44  sw          $v0, 0xF44($sp)
    ctx->pc = 0x4548fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3908), GPR_U32(ctx, 2));
label_454900:
    // 0x454900: 0x8fa40f44  lw          $a0, 0xF44($sp)
    ctx->pc = 0x454900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3908)));
label_454904:
    // 0x454904: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_454908:
    if (ctx->pc == 0x454908u) {
        ctx->pc = 0x45490Cu;
        goto label_45490c;
    }
    ctx->pc = 0x454904u;
    {
        const bool branch_taken_0x454904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x454904) {
            ctx->pc = 0x454924u;
            goto label_454924;
        }
    }
    ctx->pc = 0x45490Cu;
label_45490c:
    // 0x45490c: 0x8fa50f44  lw          $a1, 0xF44($sp)
    ctx->pc = 0x45490cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3908)));
label_454910:
    // 0x454910: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x454910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_454914:
    // 0x454914: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x454914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_454918:
    // 0x454918: 0xc1135f0  jal         func_44D7C0
label_45491c:
    if (ctx->pc == 0x45491Cu) {
        ctx->pc = 0x454920u;
        goto label_454920;
    }
    ctx->pc = 0x454918u;
    SET_GPR_U32(ctx, 31, 0x454920u);
    ctx->pc = 0x44D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D7C0u, 0x454918u, 0x454920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454920u;
label_454920:
    // 0x454920: 0xafa20f44  sw          $v0, 0xF44($sp)
    ctx->pc = 0x454920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3908), GPR_U32(ctx, 2));
label_454924:
    // 0x454924: 0x8fa40f44  lw          $a0, 0xF44($sp)
    ctx->pc = 0x454924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3908)));
label_454928:
    // 0x454928: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x454928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_45492c:
    // 0x45492c: 0x10282b  sltu        $a1, $zero, $s0
    ctx->pc = 0x45492cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_454930:
    // 0x454930: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x454930u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_454934:
    // 0x454934: 0x14c0002b  bnez        $a2, . + 4 + (0x2B << 2)
label_454938:
    if (ctx->pc == 0x454938u) {
        ctx->pc = 0x45493Cu;
        goto label_45493c;
    }
    ctx->pc = 0x454934u;
    {
        const bool branch_taken_0x454934 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x454934) {
            ctx->pc = 0x4549E4u;
            goto label_4549e4;
        }
    }
    ctx->pc = 0x45493Cu;
label_45493c:
    // 0x45493c: 0x8f82b048  lw          $v0, -0x4FB8($gp)
    ctx->pc = 0x45493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946888)));
label_454940:
    // 0x454940: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_454944:
    if (ctx->pc == 0x454944u) {
        ctx->pc = 0x454948u;
        goto label_454948;
    }
    ctx->pc = 0x454940u;
    {
        const bool branch_taken_0x454940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454940) {
            ctx->pc = 0x4549E4u;
            goto label_4549e4;
        }
    }
    ctx->pc = 0x454948u;
label_454948:
    // 0x454948: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x454948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_45494c:
    // 0x45494c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45494cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_454950:
    // 0x454950: 0x27a60ed8  addiu       $a2, $sp, 0xED8
    ctx->pc = 0x454950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3800));
label_454954:
    // 0x454954: 0xc115ee8  jal         func_457BA0
label_454958:
    if (ctx->pc == 0x454958u) {
        ctx->pc = 0x45495Cu;
        goto label_45495c;
    }
    ctx->pc = 0x454954u;
    SET_GPR_U32(ctx, 31, 0x45495Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x454954u, 0x45495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45495Cu;
label_45495c:
    // 0x45495c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_454960:
    if (ctx->pc == 0x454960u) {
        ctx->pc = 0x454964u;
        goto label_454964;
    }
    ctx->pc = 0x45495Cu;
    {
        const bool branch_taken_0x45495c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45495c) {
            ctx->pc = 0x4549E4u;
            goto label_4549e4;
        }
    }
    ctx->pc = 0x454964u;
label_454964:
    // 0x454964: 0x8fa20ee0  lw          $v0, 0xEE0($sp)
    ctx->pc = 0x454964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3808)));
label_454968:
    // 0x454968: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_45496c:
    if (ctx->pc == 0x45496Cu) {
        ctx->pc = 0x454970u;
        goto label_454970;
    }
    ctx->pc = 0x454968u;
    {
        const bool branch_taken_0x454968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454968) {
            ctx->pc = 0x4549E4u;
            goto label_4549e4;
        }
    }
    ctx->pc = 0x454970u;
label_454970:
    // 0x454970: 0x27a409a0  addiu       $a0, $sp, 0x9A0
    ctx->pc = 0x454970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2464));
label_454974:
    // 0x454974: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x454974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_454978:
    // 0x454978: 0x8fa60edc  lw          $a2, 0xEDC($sp)
    ctx->pc = 0x454978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3804)));
label_45497c:
    // 0x45497c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x45497cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_454980:
    // 0x454980: 0x24e7de80  addiu       $a3, $a3, -0x2180
    ctx->pc = 0x454980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
label_454984:
    // 0x454984: 0x240802a4  addiu       $t0, $zero, 0x2A4
    ctx->pc = 0x454984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
label_454988:
    // 0x454988: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x454988u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_45498c:
    // 0x45498c: 0x2529e240  addiu       $t1, $t1, -0x1DC0
    ctx->pc = 0x45498cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959680));
label_454990:
    // 0x454990: 0xc113940  jal         func_44E500
label_454994:
    if (ctx->pc == 0x454994u) {
        ctx->pc = 0x454998u;
        goto label_454998;
    }
    ctx->pc = 0x454990u;
    SET_GPR_U32(ctx, 31, 0x454998u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x454990u, 0x454998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454998u;
label_454998:
    // 0x454998: 0x27a209a0  addiu       $v0, $sp, 0x9A0
    ctx->pc = 0x454998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 2464));
label_45499c:
    // 0x45499c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45499cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4549a0:
    // 0x4549a0: 0x2785b00c  addiu       $a1, $gp, -0x4FF4
    ctx->pc = 0x4549a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946828));
label_4549a4:
    // 0x4549a4: 0xc115c24  jal         func_457090
label_4549a8:
    if (ctx->pc == 0x4549A8u) {
        ctx->pc = 0x4549ACu;
        goto label_4549ac;
    }
    ctx->pc = 0x4549A4u;
    SET_GPR_U32(ctx, 31, 0x4549ACu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4549A4u, 0x4549ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4549ACu;
label_4549ac:
    // 0x4549ac: 0x27a409a0  addiu       $a0, $sp, 0x9A0
    ctx->pc = 0x4549acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2464));
label_4549b0:
    // 0x4549b0: 0x8fa30ee0  lw          $v1, 0xEE0($sp)
    ctx->pc = 0x4549b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3808)));
label_4549b4:
    // 0x4549b4: 0x60f809  jalr        $v1
label_4549b8:
    if (ctx->pc == 0x4549B8u) {
        ctx->pc = 0x4549BCu;
        goto label_4549bc;
    }
    ctx->pc = 0x4549B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4549BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4549B4u, 0x4549BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4549BCu;
label_4549bc:
    // 0x4549bc: 0xaf82b048  sw          $v0, -0x4FB8($gp)
    ctx->pc = 0x4549bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946888), GPR_U32(ctx, 2));
label_4549c0:
    // 0x4549c0: 0x8fa609a0  lw          $a2, 0x9A0($sp)
    ctx->pc = 0x4549c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2464)));
label_4549c4:
    // 0x4549c4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_4549c8:
    if (ctx->pc == 0x4549C8u) {
        ctx->pc = 0x4549CCu;
        goto label_4549cc;
    }
    ctx->pc = 0x4549C4u;
    {
        const bool branch_taken_0x4549c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4549c4) {
            ctx->pc = 0x4549D4u;
            goto label_4549d4;
        }
    }
    ctx->pc = 0x4549CCu;
label_4549cc:
    // 0x4549cc: 0xd  break       0
    ctx->pc = 0x4549ccu;
    runtime->handleBreak(rdram, ctx);
label_4549d0:
    // 0x4549d0: 0x0  nop
    ctx->pc = 0x4549d0u;
    // NOP
label_4549d4:
    // 0x4549d4: 0x27a409a0  addiu       $a0, $sp, 0x9A0
    ctx->pc = 0x4549d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2464));
label_4549d8:
    // 0x4549d8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4549d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4549dc:
    // 0x4549dc: 0xc11392c  jal         func_44E4B0
label_4549e0:
    if (ctx->pc == 0x4549E0u) {
        ctx->pc = 0x4549E4u;
        goto label_4549e4;
    }
    ctx->pc = 0x4549DCu;
    SET_GPR_U32(ctx, 31, 0x4549E4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4549DCu, 0x4549E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4549E4u;
label_4549e4:
    // 0x4549e4: 0x27a40f18  addiu       $a0, $sp, 0xF18
    ctx->pc = 0x4549e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_4549e8:
    // 0x4549e8: 0x27a50f28  addiu       $a1, $sp, 0xF28
    ctx->pc = 0x4549e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_4549ec:
    // 0x4549ec: 0x27a60f78  addiu       $a2, $sp, 0xF78
    ctx->pc = 0x4549ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_4549f0:
    // 0x4549f0: 0xc061d44  jal         func_187510
label_4549f4:
    if (ctx->pc == 0x4549F4u) {
        ctx->pc = 0x4549F8u;
        goto label_4549f8;
    }
    ctx->pc = 0x4549F0u;
    SET_GPR_U32(ctx, 31, 0x4549F8u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x4549F0u, 0x4549F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4549F8u;
label_4549f8:
    // 0x4549f8: 0x27a40f18  addiu       $a0, $sp, 0xF18
    ctx->pc = 0x4549f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_4549fc:
    // 0x4549fc: 0xc041b38  jal         func_106CE0
label_454a00:
    if (ctx->pc == 0x454A00u) {
        ctx->pc = 0x454A04u;
        goto label_454a04;
    }
    ctx->pc = 0x4549FCu;
    SET_GPR_U32(ctx, 31, 0x454A04u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x4549FCu, 0x454A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454A04u;
label_454a04:
    // 0x454a04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x454a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454a08:
    // 0x454a08: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x454a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_454a0c:
    // 0x454a0c: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x454a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_454a10:
    // 0x454a10: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x454a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_454a14:
    // 0x454a14: 0xc0bc5c6  jal         func_2F1718
label_454a18:
    if (ctx->pc == 0x454A18u) {
        ctx->pc = 0x454A1Cu;
        goto label_454a1c;
    }
    ctx->pc = 0x454A14u;
    SET_GPR_U32(ctx, 31, 0x454A1Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x454A14u, 0x454A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454A1Cu;
label_454a1c:
    // 0x454a1c: 0x27a80f18  addiu       $t0, $sp, 0xF18
    ctx->pc = 0x454a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454a20:
    // 0x454a20: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x454a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_454a24:
    // 0x454a24: 0x27a90f28  addiu       $t1, $sp, 0xF28
    ctx->pc = 0x454a24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_454a28:
    // 0x454a28: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x454a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_454a2c:
    // 0x454a2c: 0x27a20f78  addiu       $v0, $sp, 0xF78
    ctx->pc = 0x454a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_454a30:
    // 0x454a30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x454a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454a34:
    // 0x454a34: 0xc061d44  jal         func_187510
label_454a38:
    if (ctx->pc == 0x454A38u) {
        ctx->pc = 0x454A3Cu;
        goto label_454a3c;
    }
    ctx->pc = 0x454A34u;
    SET_GPR_U32(ctx, 31, 0x454A3Cu);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x454A34u, 0x454A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454A3Cu;
label_454a3c:
    // 0x454a3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454a40:
    // 0x454a40: 0x27a50f18  addiu       $a1, $sp, 0xF18
    ctx->pc = 0x454a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454a44:
    // 0x454a44: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x454a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_454a48:
    // 0x454a48: 0xc041b38  jal         func_106CE0
label_454a4c:
    if (ctx->pc == 0x454A4Cu) {
        ctx->pc = 0x454A50u;
        goto label_454a50;
    }
    ctx->pc = 0x454A48u;
    SET_GPR_U32(ctx, 31, 0x454A50u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x454A48u, 0x454A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454A50u;
label_454a50:
    // 0x454a50: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x454a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454a54:
    // 0x454a54: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x454a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_454a58:
    // 0x454a58: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x454a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_454a5c:
    // 0x454a5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454a60:
    // 0x454a60: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x454a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_454a64:
    // 0x454a64: 0xc0bc5c6  jal         func_2F1718
label_454a68:
    if (ctx->pc == 0x454A68u) {
        ctx->pc = 0x454A6Cu;
        goto label_454a6c;
    }
    ctx->pc = 0x454A64u;
    SET_GPR_U32(ctx, 31, 0x454A6Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x454A64u, 0x454A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454A6Cu;
label_454a6c:
    // 0x454a6c: 0x27a90f18  addiu       $t1, $sp, 0xF18
    ctx->pc = 0x454a6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454a70:
    // 0x454a70: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x454a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_454a74:
    // 0x454a74: 0x27a50f28  addiu       $a1, $sp, 0xF28
    ctx->pc = 0x454a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_454a78:
    // 0x454a78: 0x27a60f78  addiu       $a2, $sp, 0xF78
    ctx->pc = 0x454a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_454a7c:
    // 0x454a7c: 0xc061d44  jal         func_187510
label_454a80:
    if (ctx->pc == 0x454A80u) {
        ctx->pc = 0x454A84u;
        goto label_454a84;
    }
    ctx->pc = 0x454A7Cu;
    SET_GPR_U32(ctx, 31, 0x454A84u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x454A7Cu, 0x454A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454A84u;
label_454a84:
    // 0x454a84: 0x27a30f18  addiu       $v1, $sp, 0xF18
    ctx->pc = 0x454a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454a88:
    // 0x454a88: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x454a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_454a8c:
    // 0x454a8c: 0xc041b38  jal         func_106CE0
label_454a90:
    if (ctx->pc == 0x454A90u) {
        ctx->pc = 0x454A94u;
        goto label_454a94;
    }
    ctx->pc = 0x454A8Cu;
    SET_GPR_U32(ctx, 31, 0x454A94u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x454A8Cu, 0x454A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454A94u;
label_454a94:
    // 0x454a94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x454a94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454a98:
    // 0x454a98: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x454a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_454a9c:
    // 0x454a9c: 0x24420044  addiu       $v0, $v0, 0x44
    ctx->pc = 0x454a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_454aa0:
    // 0x454aa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454aa4:
    // 0x454aa4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x454aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_454aa8:
    // 0x454aa8: 0xc0bc5c6  jal         func_2F1718
label_454aac:
    if (ctx->pc == 0x454AACu) {
        ctx->pc = 0x454AB0u;
        goto label_454ab0;
    }
    ctx->pc = 0x454AA8u;
    SET_GPR_U32(ctx, 31, 0x454AB0u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x454AA8u, 0x454AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454AB0u;
label_454ab0:
    // 0x454ab0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454ab4:
    // 0x454ab4: 0x27a50f18  addiu       $a1, $sp, 0xF18
    ctx->pc = 0x454ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454ab8:
    // 0x454ab8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x454ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_454abc:
    // 0x454abc: 0x27a60f28  addiu       $a2, $sp, 0xF28
    ctx->pc = 0x454abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_454ac0:
    // 0x454ac0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x454ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_454ac4:
    // 0x454ac4: 0x27a70f78  addiu       $a3, $sp, 0xF78
    ctx->pc = 0x454ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_454ac8:
    // 0x454ac8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x454ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_454acc:
    // 0x454acc: 0xc061d44  jal         func_187510
label_454ad0:
    if (ctx->pc == 0x454AD0u) {
        ctx->pc = 0x454AD4u;
        goto label_454ad4;
    }
    ctx->pc = 0x454ACCu;
    SET_GPR_U32(ctx, 31, 0x454AD4u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x454ACCu, 0x454AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454AD4u;
label_454ad4:
    // 0x454ad4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x454ad4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454ad8:
    // 0x454ad8: 0x27a90e48  addiu       $t1, $sp, 0xE48
    ctx->pc = 0x454ad8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 3656));
label_454adc:
    // 0x454adc: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x454adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_454ae0:
    // 0x454ae0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x454ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_454ae4:
    // 0x454ae4: 0x2442e298  addiu       $v0, $v0, -0x1D68
    ctx->pc = 0x454ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959768));
label_454ae8:
    // 0x454ae8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x454ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454aec:
    // 0x454aec: 0xc040304  jal         func_100C10
label_454af0:
    if (ctx->pc == 0x454AF0u) {
        ctx->pc = 0x454AF4u;
        goto label_454af4;
    }
    ctx->pc = 0x454AECu;
    SET_GPR_U32(ctx, 31, 0x454AF4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x454AECu, 0x454AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454AF4u;
label_454af4:
    // 0x454af4: 0x27a50f18  addiu       $a1, $sp, 0xF18
    ctx->pc = 0x454af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454af8:
    // 0x454af8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x454af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_454afc:
    // 0x454afc: 0x27a20e48  addiu       $v0, $sp, 0xE48
    ctx->pc = 0x454afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3656));
label_454b00:
    // 0x454b00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x454b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454b04:
    // 0x454b04: 0xc05c618  jal         func_171860
label_454b08:
    if (ctx->pc == 0x454B08u) {
        ctx->pc = 0x454B0Cu;
        goto label_454b0c;
    }
    ctx->pc = 0x454B04u;
    SET_GPR_U32(ctx, 31, 0x454B0Cu);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x454B04u, 0x454B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454B0Cu;
label_454b0c:
    // 0x454b0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454b10:
    // 0x454b10: 0x802827  not         $a1, $a0
    ctx->pc = 0x454b10u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_454b14:
    // 0x454b14: 0x2ca20001  sltiu       $v0, $a1, 0x1
    ctx->pc = 0x454b14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_454b18:
    // 0x454b18: 0xa3a20f7f  sb          $v0, 0xF7F($sp)
    ctx->pc = 0x454b18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3967), (uint8_t)GPR_U32(ctx, 2));
label_454b1c:
    // 0x454b1c: 0x27a40e48  addiu       $a0, $sp, 0xE48
    ctx->pc = 0x454b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3656));
label_454b20:
    // 0x454b20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x454b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_454b24:
    // 0x454b24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x454b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454b28:
    // 0x454b28: 0xc0402d4  jal         func_100B50
label_454b2c:
    if (ctx->pc == 0x454B2Cu) {
        ctx->pc = 0x454B30u;
        goto label_454b30;
    }
    ctx->pc = 0x454B28u;
    SET_GPR_U32(ctx, 31, 0x454B30u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x454B28u, 0x454B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454B30u;
label_454b30:
    // 0x454b30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x454b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454b34:
    // 0x454b34: 0x93a20f7f  lbu         $v0, 0xF7F($sp)
    ctx->pc = 0x454b34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3967)));
label_454b38:
    // 0x454b38: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_454b3c:
    if (ctx->pc == 0x454B3Cu) {
        ctx->pc = 0x454B40u;
        goto label_454b40;
    }
    ctx->pc = 0x454B38u;
    {
        const bool branch_taken_0x454b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454b38) {
            ctx->pc = 0x454B6Cu;
            goto label_454b6c;
        }
    }
    ctx->pc = 0x454B40u;
label_454b40:
    // 0x454b40: 0x27a50f18  addiu       $a1, $sp, 0xF18
    ctx->pc = 0x454b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454b44:
    // 0x454b44: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x454b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_454b48:
    // 0x454b48: 0xc041b38  jal         func_106CE0
label_454b4c:
    if (ctx->pc == 0x454B4Cu) {
        ctx->pc = 0x454B50u;
        goto label_454b50;
    }
    ctx->pc = 0x454B48u;
    SET_GPR_U32(ctx, 31, 0x454B50u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x454B48u, 0x454B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454B50u;
label_454b50:
    // 0x454b50: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x454b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454b54:
    // 0x454b54: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x454b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_454b58:
    // 0x454b58: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x454b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_454b5c:
    // 0x454b5c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x454b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_454b60:
    // 0x454b60: 0xc0bc5c6  jal         func_2F1718
label_454b64:
    if (ctx->pc == 0x454B64u) {
        ctx->pc = 0x454B68u;
        goto label_454b68;
    }
    ctx->pc = 0x454B60u;
    SET_GPR_U32(ctx, 31, 0x454B68u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x454B60u, 0x454B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454B68u;
label_454b68:
    // 0x454b68: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x454b68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454b6c:
    // 0x454b6c: 0x27a50f18  addiu       $a1, $sp, 0xF18
    ctx->pc = 0x454b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454b70:
    // 0x454b70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x454b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_454b74:
    // 0x454b74: 0x27a60f28  addiu       $a2, $sp, 0xF28
    ctx->pc = 0x454b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_454b78:
    // 0x454b78: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x454b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_454b7c:
    // 0x454b7c: 0x27a60f78  addiu       $a2, $sp, 0xF78
    ctx->pc = 0x454b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_454b80:
    // 0x454b80: 0xc061d44  jal         func_187510
label_454b84:
    if (ctx->pc == 0x454B84u) {
        ctx->pc = 0x454B88u;
        goto label_454b88;
    }
    ctx->pc = 0x454B80u;
    SET_GPR_U32(ctx, 31, 0x454B88u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x454B80u, 0x454B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454B88u;
label_454b88:
    // 0x454b88: 0x27a60e38  addiu       $a2, $sp, 0xE38
    ctx->pc = 0x454b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3640));
label_454b8c:
    // 0x454b8c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x454b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_454b90:
    // 0x454b90: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x454b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_454b94:
    // 0x454b94: 0x2442e298  addiu       $v0, $v0, -0x1D68
    ctx->pc = 0x454b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959768));
label_454b98:
    // 0x454b98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x454b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454b9c:
    // 0x454b9c: 0xc040304  jal         func_100C10
label_454ba0:
    if (ctx->pc == 0x454BA0u) {
        ctx->pc = 0x454BA4u;
        goto label_454ba4;
    }
    ctx->pc = 0x454B9Cu;
    SET_GPR_U32(ctx, 31, 0x454BA4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x454B9Cu, 0x454BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454BA4u;
label_454ba4:
    // 0x454ba4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454ba8:
    // 0x454ba8: 0x27a50f18  addiu       $a1, $sp, 0xF18
    ctx->pc = 0x454ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454bac:
    // 0x454bac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x454bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_454bb0:
    // 0x454bb0: 0x27a20e38  addiu       $v0, $sp, 0xE38
    ctx->pc = 0x454bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3640));
label_454bb4:
    // 0x454bb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x454bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454bb8:
    // 0x454bb8: 0xc05c618  jal         func_171860
label_454bbc:
    if (ctx->pc == 0x454BBCu) {
        ctx->pc = 0x454BC0u;
        goto label_454bc0;
    }
    ctx->pc = 0x454BB8u;
    SET_GPR_U32(ctx, 31, 0x454BC0u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x454BB8u, 0x454BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454BC0u;
label_454bc0:
    // 0x454bc0: 0x403827  not         $a3, $v0
    ctx->pc = 0x454bc0u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_454bc4:
    // 0x454bc4: 0x7402b  sltu        $t0, $zero, $a3
    ctx->pc = 0x454bc4u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_454bc8:
    // 0x454bc8: 0xa3a80f7e  sb          $t0, 0xF7E($sp)
    ctx->pc = 0x454bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3966), (uint8_t)GPR_U32(ctx, 8));
label_454bcc:
    // 0x454bcc: 0x27a90e38  addiu       $t1, $sp, 0xE38
    ctx->pc = 0x454bccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 3640));
label_454bd0:
    // 0x454bd0: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x454bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_454bd4:
    // 0x454bd4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x454bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_454bd8:
    // 0x454bd8: 0xc0402d4  jal         func_100B50
label_454bdc:
    if (ctx->pc == 0x454BDCu) {
        ctx->pc = 0x454BE0u;
        goto label_454be0;
    }
    ctx->pc = 0x454BD8u;
    SET_GPR_U32(ctx, 31, 0x454BE0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x454BD8u, 0x454BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454BE0u;
label_454be0:
    // 0x454be0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454be4:
    // 0x454be4: 0x93a20f7e  lbu         $v0, 0xF7E($sp)
    ctx->pc = 0x454be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3966)));
label_454be8:
    // 0x454be8: 0x10400445  beqz        $v0, . + 4 + (0x445 << 2)
label_454bec:
    if (ctx->pc == 0x454BECu) {
        ctx->pc = 0x454BF0u;
        goto label_454bf0;
    }
    ctx->pc = 0x454BE8u;
    {
        const bool branch_taken_0x454be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454be8) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x454BF0u;
label_454bf0:
    // 0x454bf0: 0x27a40e28  addiu       $a0, $sp, 0xE28
    ctx->pc = 0x454bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3624));
label_454bf4:
    // 0x454bf4: 0x2785b070  addiu       $a1, $gp, -0x4F90
    ctx->pc = 0x454bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946928));
label_454bf8:
    // 0x454bf8: 0xc040304  jal         func_100C10
label_454bfc:
    if (ctx->pc == 0x454BFCu) {
        ctx->pc = 0x454C00u;
        goto label_454c00;
    }
    ctx->pc = 0x454BF8u;
    SET_GPR_U32(ctx, 31, 0x454C00u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x454BF8u, 0x454C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454C00u;
label_454c00:
    // 0x454c00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x454c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454c04:
    // 0x454c04: 0x27a60f18  addiu       $a2, $sp, 0xF18
    ctx->pc = 0x454c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454c08:
    // 0x454c08: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x454c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_454c0c:
    // 0x454c0c: 0x27a20e28  addiu       $v0, $sp, 0xE28
    ctx->pc = 0x454c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3624));
label_454c10:
    // 0x454c10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x454c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454c14:
    // 0x454c14: 0xc05c618  jal         func_171860
label_454c18:
    if (ctx->pc == 0x454C18u) {
        ctx->pc = 0x454C1Cu;
        goto label_454c1c;
    }
    ctx->pc = 0x454C14u;
    SET_GPR_U32(ctx, 31, 0x454C1Cu);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x454C14u, 0x454C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454C1Cu;
label_454c1c:
    // 0x454c1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454c20:
    // 0x454c20: 0x801027  not         $v0, $a0
    ctx->pc = 0x454c20u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_454c24:
    // 0x454c24: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x454c24u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_454c28:
    // 0x454c28: 0xa3a40f7d  sb          $a0, 0xF7D($sp)
    ctx->pc = 0x454c28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3965), (uint8_t)GPR_U32(ctx, 4));
label_454c2c:
    // 0x454c2c: 0x27a20e28  addiu       $v0, $sp, 0xE28
    ctx->pc = 0x454c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3624));
label_454c30:
    // 0x454c30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454c34:
    // 0x454c34: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x454c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_454c38:
    // 0x454c38: 0xc0402d4  jal         func_100B50
label_454c3c:
    if (ctx->pc == 0x454C3Cu) {
        ctx->pc = 0x454C40u;
        goto label_454c40;
    }
    ctx->pc = 0x454C38u;
    SET_GPR_U32(ctx, 31, 0x454C40u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x454C38u, 0x454C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454C40u;
label_454c40:
    // 0x454c40: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x454c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454c44:
    // 0x454c44: 0x93a20f7d  lbu         $v0, 0xF7D($sp)
    ctx->pc = 0x454c44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3965)));
label_454c48:
    // 0x454c48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_454c4c:
    if (ctx->pc == 0x454C4Cu) {
        ctx->pc = 0x454C50u;
        goto label_454c50;
    }
    ctx->pc = 0x454C48u;
    {
        const bool branch_taken_0x454c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454c48) {
            ctx->pc = 0x454C60u;
            goto label_454c60;
        }
    }
    ctx->pc = 0x454C50u;
label_454c50:
    // 0x454c50: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x454c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_454c54:
    // 0x454c54: 0xa0400084  sb          $zero, 0x84($v0)
    ctx->pc = 0x454c54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 132), (uint8_t)GPR_U32(ctx, 0));
label_454c58:
    // 0x454c58: 0x10000429  b           . + 4 + (0x429 << 2)
label_454c5c:
    if (ctx->pc == 0x454C5Cu) {
        ctx->pc = 0x454C60u;
        goto label_454c60;
    }
    ctx->pc = 0x454C58u;
    {
        const bool branch_taken_0x454c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x454c58) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x454C60u;
label_454c60:
    // 0x454c60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x454c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_454c64:
    // 0x454c64: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x454c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_454c68:
    // 0x454c68: 0xa0450084  sb          $a1, 0x84($v0)
    ctx->pc = 0x454c68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 132), (uint8_t)GPR_U32(ctx, 5));
label_454c6c:
    // 0x454c6c: 0x10000424  b           . + 4 + (0x424 << 2)
label_454c70:
    if (ctx->pc == 0x454C70u) {
        ctx->pc = 0x454C74u;
        goto label_454c74;
    }
    ctx->pc = 0x454C6Cu;
    {
        const bool branch_taken_0x454c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x454c6c) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x454C74u;
label_454c74:
    // 0x454c74: 0x27a40f28  addiu       $a0, $sp, 0xF28
    ctx->pc = 0x454c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_454c78:
    // 0x454c78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x454c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_454c7c:
    // 0x454c7c: 0xc1193e8  jal         func_464FA0
label_454c80:
    if (ctx->pc == 0x454C80u) {
        ctx->pc = 0x454C84u;
        goto label_454c84;
    }
    ctx->pc = 0x454C7Cu;
    SET_GPR_U32(ctx, 31, 0x454C84u);
    ctx->pc = 0x464FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464FA0u, 0x454C7Cu, 0x454C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454C84u;
label_454c84:
    // 0x454c84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454c88:
    // 0x454c88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x454c88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_454c8c:
    // 0x454c8c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x454c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_454c90:
    // 0x454c90: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x454c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_454c94:
    // 0x454c94: 0xc119b68  jal         func_466DA0
label_454c98:
    if (ctx->pc == 0x454C98u) {
        ctx->pc = 0x454C9Cu;
        goto label_454c9c;
    }
    ctx->pc = 0x454C94u;
    SET_GPR_U32(ctx, 31, 0x454C9Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x454C94u, 0x454C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454C9Cu;
label_454c9c:
    // 0x454c9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x454c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454ca0:
    // 0x454ca0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x454ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_454ca4:
    // 0x454ca4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454ca8:
    // 0x454ca8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x454ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_454cac:
    // 0x454cac: 0xc0400e0  jal         func_100380
label_454cb0:
    if (ctx->pc == 0x454CB0u) {
        ctx->pc = 0x454CB4u;
        goto label_454cb4;
    }
    ctx->pc = 0x454CACu;
    SET_GPR_U32(ctx, 31, 0x454CB4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x454CACu, 0x454CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454CB4u;
label_454cb4:
    // 0x454cb4: 0xafa20f40  sw          $v0, 0xF40($sp)
    ctx->pc = 0x454cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3904), GPR_U32(ctx, 2));
label_454cb8:
    // 0x454cb8: 0x8fa50f40  lw          $a1, 0xF40($sp)
    ctx->pc = 0x454cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3904)));
label_454cbc:
    // 0x454cbc: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_454cc0:
    if (ctx->pc == 0x454CC0u) {
        ctx->pc = 0x454CC4u;
        goto label_454cc4;
    }
    ctx->pc = 0x454CBCu;
    {
        const bool branch_taken_0x454cbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x454cbc) {
            ctx->pc = 0x454CE0u;
            goto label_454ce0;
        }
    }
    ctx->pc = 0x454CC4u;
label_454cc4:
    // 0x454cc4: 0x8fa50f40  lw          $a1, 0xF40($sp)
    ctx->pc = 0x454cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3904)));
label_454cc8:
    // 0x454cc8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x454cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_454ccc:
    // 0x454ccc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x454cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_454cd0:
    // 0x454cd0: 0xc1135f0  jal         func_44D7C0
label_454cd4:
    if (ctx->pc == 0x454CD4u) {
        ctx->pc = 0x454CD8u;
        goto label_454cd8;
    }
    ctx->pc = 0x454CD0u;
    SET_GPR_U32(ctx, 31, 0x454CD8u);
    ctx->pc = 0x44D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D7C0u, 0x454CD0u, 0x454CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454CD8u;
label_454cd8:
    // 0x454cd8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x454cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454cdc:
    // 0x454cdc: 0xafa60f40  sw          $a2, 0xF40($sp)
    ctx->pc = 0x454cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3904), GPR_U32(ctx, 6));
label_454ce0:
    // 0x454ce0: 0x8fa70f40  lw          $a3, 0xF40($sp)
    ctx->pc = 0x454ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3904)));
label_454ce4:
    // 0x454ce4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x454ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_454ce8:
    // 0x454ce8: 0x10402b  sltu        $t0, $zero, $s0
    ctx->pc = 0x454ce8u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_454cec:
    // 0x454cec: 0x310900ff  andi        $t1, $t0, 0xFF
    ctx->pc = 0x454cecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_454cf0:
    // 0x454cf0: 0x15200033  bnez        $t1, . + 4 + (0x33 << 2)
label_454cf4:
    if (ctx->pc == 0x454CF4u) {
        ctx->pc = 0x454CF8u;
        goto label_454cf8;
    }
    ctx->pc = 0x454CF0u;
    {
        const bool branch_taken_0x454cf0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x454cf0) {
            ctx->pc = 0x454DC0u;
            goto label_454dc0;
        }
    }
    ctx->pc = 0x454CF8u;
label_454cf8:
    // 0x454cf8: 0x8f82b04c  lw          $v0, -0x4FB4($gp)
    ctx->pc = 0x454cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946892)));
label_454cfc:
    // 0x454cfc: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_454d00:
    if (ctx->pc == 0x454D00u) {
        ctx->pc = 0x454D04u;
        goto label_454d04;
    }
    ctx->pc = 0x454CFCu;
    {
        const bool branch_taken_0x454cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454cfc) {
            ctx->pc = 0x454DC0u;
            goto label_454dc0;
        }
    }
    ctx->pc = 0x454D04u;
label_454d04:
    // 0x454d04: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x454d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_454d08:
    // 0x454d08: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x454d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_454d0c:
    // 0x454d0c: 0x27a20ec8  addiu       $v0, $sp, 0xEC8
    ctx->pc = 0x454d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3784));
label_454d10:
    // 0x454d10: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x454d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454d14:
    // 0x454d14: 0xc115ee8  jal         func_457BA0
label_454d18:
    if (ctx->pc == 0x454D18u) {
        ctx->pc = 0x454D1Cu;
        goto label_454d1c;
    }
    ctx->pc = 0x454D14u;
    SET_GPR_U32(ctx, 31, 0x454D1Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x454D14u, 0x454D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454D1Cu;
label_454d1c:
    // 0x454d1c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_454d20:
    if (ctx->pc == 0x454D20u) {
        ctx->pc = 0x454D24u;
        goto label_454d24;
    }
    ctx->pc = 0x454D1Cu;
    {
        const bool branch_taken_0x454d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454d1c) {
            ctx->pc = 0x454DC0u;
            goto label_454dc0;
        }
    }
    ctx->pc = 0x454D24u;
label_454d24:
    // 0x454d24: 0x8fa70ed0  lw          $a3, 0xED0($sp)
    ctx->pc = 0x454d24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3792)));
label_454d28:
    // 0x454d28: 0x10e00025  beqz        $a3, . + 4 + (0x25 << 2)
label_454d2c:
    if (ctx->pc == 0x454D2Cu) {
        ctx->pc = 0x454D30u;
        goto label_454d30;
    }
    ctx->pc = 0x454D28u;
    {
        const bool branch_taken_0x454d28 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x454d28) {
            ctx->pc = 0x454DC0u;
            goto label_454dc0;
        }
    }
    ctx->pc = 0x454D30u;
label_454d30:
    // 0x454d30: 0x27a20880  addiu       $v0, $sp, 0x880
    ctx->pc = 0x454d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_454d34:
    // 0x454d34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454d38:
    // 0x454d38: 0x2409fffc  addiu       $t1, $zero, -0x4
    ctx->pc = 0x454d38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_454d3c:
    // 0x454d3c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x454d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_454d40:
    // 0x454d40: 0x8fa60ecc  lw          $a2, 0xECC($sp)
    ctx->pc = 0x454d40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3788)));
label_454d44:
    // 0x454d44: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x454d44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_454d48:
    // 0x454d48: 0x24e7de80  addiu       $a3, $a3, -0x2180
    ctx->pc = 0x454d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
label_454d4c:
    // 0x454d4c: 0x240202db  addiu       $v0, $zero, 0x2DB
    ctx->pc = 0x454d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 731));
label_454d50:
    // 0x454d50: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x454d50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454d54:
    // 0x454d54: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x454d54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_454d58:
    // 0x454d58: 0x2529e240  addiu       $t1, $t1, -0x1DC0
    ctx->pc = 0x454d58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959680));
label_454d5c:
    // 0x454d5c: 0xc113940  jal         func_44E500
label_454d60:
    if (ctx->pc == 0x454D60u) {
        ctx->pc = 0x454D64u;
        goto label_454d64;
    }
    ctx->pc = 0x454D5Cu;
    SET_GPR_U32(ctx, 31, 0x454D64u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x454D5Cu, 0x454D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454D64u;
label_454d64:
    // 0x454d64: 0x27a30880  addiu       $v1, $sp, 0x880
    ctx->pc = 0x454d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_454d68:
    // 0x454d68: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x454d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_454d6c:
    // 0x454d6c: 0x2785b00c  addiu       $a1, $gp, -0x4FF4
    ctx->pc = 0x454d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946828));
label_454d70:
    // 0x454d70: 0xc115c24  jal         func_457090
label_454d74:
    if (ctx->pc == 0x454D74u) {
        ctx->pc = 0x454D78u;
        goto label_454d78;
    }
    ctx->pc = 0x454D70u;
    SET_GPR_U32(ctx, 31, 0x454D78u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x454D70u, 0x454D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454D78u;
label_454d78:
    // 0x454d78: 0x27a20880  addiu       $v0, $sp, 0x880
    ctx->pc = 0x454d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_454d7c:
    // 0x454d7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454d80:
    // 0x454d80: 0x8fa50ed0  lw          $a1, 0xED0($sp)
    ctx->pc = 0x454d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3792)));
label_454d84:
    // 0x454d84: 0xa0f809  jalr        $a1
label_454d88:
    if (ctx->pc == 0x454D88u) {
        ctx->pc = 0x454D8Cu;
        goto label_454d8c;
    }
    ctx->pc = 0x454D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x454D8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x454D84u, 0x454D8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x454D8Cu;
label_454d8c:
    // 0x454d8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x454d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454d90:
    // 0x454d90: 0xaf85b04c  sw          $a1, -0x4FB4($gp)
    ctx->pc = 0x454d90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946892), GPR_U32(ctx, 5));
label_454d94:
    // 0x454d94: 0x8fa60880  lw          $a2, 0x880($sp)
    ctx->pc = 0x454d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2176)));
label_454d98:
    // 0x454d98: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_454d9c:
    if (ctx->pc == 0x454D9Cu) {
        ctx->pc = 0x454DA0u;
        goto label_454da0;
    }
    ctx->pc = 0x454D98u;
    {
        const bool branch_taken_0x454d98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x454d98) {
            ctx->pc = 0x454DA8u;
            goto label_454da8;
        }
    }
    ctx->pc = 0x454DA0u;
label_454da0:
    // 0x454da0: 0xd  break       0
    ctx->pc = 0x454da0u;
    runtime->handleBreak(rdram, ctx);
label_454da4:
    // 0x454da4: 0x0  nop
    ctx->pc = 0x454da4u;
    // NOP
label_454da8:
    // 0x454da8: 0x27a20880  addiu       $v0, $sp, 0x880
    ctx->pc = 0x454da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_454dac:
    // 0x454dac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454db0:
    // 0x454db0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x454db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_454db4:
    // 0x454db4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x454db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_454db8:
    // 0x454db8: 0xc11392c  jal         func_44E4B0
label_454dbc:
    if (ctx->pc == 0x454DBCu) {
        ctx->pc = 0x454DC0u;
        goto label_454dc0;
    }
    ctx->pc = 0x454DB8u;
    SET_GPR_U32(ctx, 31, 0x454DC0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x454DB8u, 0x454DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454DC0u;
label_454dc0:
    // 0x454dc0: 0x27a40f18  addiu       $a0, $sp, 0xF18
    ctx->pc = 0x454dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454dc4:
    // 0x454dc4: 0x27a50f28  addiu       $a1, $sp, 0xF28
    ctx->pc = 0x454dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_454dc8:
    // 0x454dc8: 0x27a20f78  addiu       $v0, $sp, 0xF78
    ctx->pc = 0x454dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_454dcc:
    // 0x454dcc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x454dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454dd0:
    // 0x454dd0: 0xc061d44  jal         func_187510
label_454dd4:
    if (ctx->pc == 0x454DD4u) {
        ctx->pc = 0x454DD8u;
        goto label_454dd8;
    }
    ctx->pc = 0x454DD0u;
    SET_GPR_U32(ctx, 31, 0x454DD8u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x454DD0u, 0x454DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454DD8u;
label_454dd8:
    // 0x454dd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454ddc:
    // 0x454ddc: 0x27a50f18  addiu       $a1, $sp, 0xF18
    ctx->pc = 0x454ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454de0:
    // 0x454de0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x454de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_454de4:
    // 0x454de4: 0xc041b38  jal         func_106CE0
label_454de8:
    if (ctx->pc == 0x454DE8u) {
        ctx->pc = 0x454DECu;
        goto label_454dec;
    }
    ctx->pc = 0x454DE4u;
    SET_GPR_U32(ctx, 31, 0x454DECu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x454DE4u, 0x454DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454DECu;
label_454dec:
    // 0x454dec: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x454decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_454df0:
    // 0x454df0: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x454df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_454df4:
    // 0x454df4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x454df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_454df8:
    // 0x454df8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x454df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454dfc:
    // 0x454dfc: 0xc0bc5c6  jal         func_2F1718
label_454e00:
    if (ctx->pc == 0x454E00u) {
        ctx->pc = 0x454E04u;
        goto label_454e04;
    }
    ctx->pc = 0x454DFCu;
    SET_GPR_U32(ctx, 31, 0x454E04u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x454DFCu, 0x454E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454E04u;
label_454e04:
    // 0x454e04: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x454e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_454e08:
    // 0x454e08: 0x16440012  bne         $s2, $a0, . + 4 + (0x12 << 2)
label_454e0c:
    if (ctx->pc == 0x454E0Cu) {
        ctx->pc = 0x454E10u;
        goto label_454e10;
    }
    ctx->pc = 0x454E08u;
    {
        const bool branch_taken_0x454e08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        if (branch_taken_0x454e08) {
            ctx->pc = 0x454E54u;
            goto label_454e54;
        }
    }
    ctx->pc = 0x454E10u;
label_454e10:
    // 0x454e10: 0x27a50f18  addiu       $a1, $sp, 0xF18
    ctx->pc = 0x454e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454e14:
    // 0x454e14: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x454e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_454e18:
    // 0x454e18: 0x27a20f28  addiu       $v0, $sp, 0xF28
    ctx->pc = 0x454e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_454e1c:
    // 0x454e1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x454e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454e20:
    // 0x454e20: 0x27a60f78  addiu       $a2, $sp, 0xF78
    ctx->pc = 0x454e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_454e24:
    // 0x454e24: 0xc061d44  jal         func_187510
label_454e28:
    if (ctx->pc == 0x454E28u) {
        ctx->pc = 0x454E2Cu;
        goto label_454e2c;
    }
    ctx->pc = 0x454E24u;
    SET_GPR_U32(ctx, 31, 0x454E2Cu);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x454E24u, 0x454E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454E2Cu;
label_454e2c:
    // 0x454e2c: 0x27a40f18  addiu       $a0, $sp, 0xF18
    ctx->pc = 0x454e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454e30:
    // 0x454e30: 0xc041b38  jal         func_106CE0
label_454e34:
    if (ctx->pc == 0x454E34u) {
        ctx->pc = 0x454E38u;
        goto label_454e38;
    }
    ctx->pc = 0x454E30u;
    SET_GPR_U32(ctx, 31, 0x454E38u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x454E30u, 0x454E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454E38u;
label_454e38:
    // 0x454e38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x454e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454e3c:
    // 0x454e3c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x454e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_454e40:
    // 0x454e40: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x454e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_454e44:
    // 0x454e44: 0xc0bc5c6  jal         func_2F1718
label_454e48:
    if (ctx->pc == 0x454E48u) {
        ctx->pc = 0x454E4Cu;
        goto label_454e4c;
    }
    ctx->pc = 0x454E44u;
    SET_GPR_U32(ctx, 31, 0x454E4Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x454E44u, 0x454E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454E4Cu;
label_454e4c:
    // 0x454e4c: 0x100003ac  b           . + 4 + (0x3AC << 2)
label_454e50:
    if (ctx->pc == 0x454E50u) {
        ctx->pc = 0x454E54u;
        goto label_454e54;
    }
    ctx->pc = 0x454E4Cu;
    {
        const bool branch_taken_0x454e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x454e4c) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x454E54u;
label_454e54:
    // 0x454e54: 0x27a40f18  addiu       $a0, $sp, 0xF18
    ctx->pc = 0x454e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454e58:
    // 0x454e58: 0x27a50f28  addiu       $a1, $sp, 0xF28
    ctx->pc = 0x454e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_454e5c:
    // 0x454e5c: 0x27a60f78  addiu       $a2, $sp, 0xF78
    ctx->pc = 0x454e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_454e60:
    // 0x454e60: 0xc061d44  jal         func_187510
label_454e64:
    if (ctx->pc == 0x454E64u) {
        ctx->pc = 0x454E68u;
        goto label_454e68;
    }
    ctx->pc = 0x454E60u;
    SET_GPR_U32(ctx, 31, 0x454E68u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x454E60u, 0x454E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454E68u;
label_454e68:
    // 0x454e68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x454e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454e6c:
    // 0x454e6c: 0x27a60f18  addiu       $a2, $sp, 0xF18
    ctx->pc = 0x454e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454e70:
    // 0x454e70: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x454e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_454e74:
    // 0x454e74: 0xc041b38  jal         func_106CE0
label_454e78:
    if (ctx->pc == 0x454E78u) {
        ctx->pc = 0x454E7Cu;
        goto label_454e7c;
    }
    ctx->pc = 0x454E74u;
    SET_GPR_U32(ctx, 31, 0x454E7Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x454E74u, 0x454E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454E7Cu;
label_454e7c:
    // 0x454e7c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x454e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_454e80:
    // 0x454e80: 0x24850024  addiu       $a1, $a0, 0x24
    ctx->pc = 0x454e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
label_454e84:
    // 0x454e84: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x454e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_454e88:
    // 0x454e88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x454e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454e8c:
    // 0x454e8c: 0xc0bc5c6  jal         func_2F1718
label_454e90:
    if (ctx->pc == 0x454E90u) {
        ctx->pc = 0x454E94u;
        goto label_454e94;
    }
    ctx->pc = 0x454E8Cu;
    SET_GPR_U32(ctx, 31, 0x454E94u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x454E8Cu, 0x454E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454E94u;
label_454e94:
    // 0x454e94: 0x27a60f18  addiu       $a2, $sp, 0xF18
    ctx->pc = 0x454e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454e98:
    // 0x454e98: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x454e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_454e9c:
    // 0x454e9c: 0x27a70f28  addiu       $a3, $sp, 0xF28
    ctx->pc = 0x454e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_454ea0:
    // 0x454ea0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x454ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_454ea4:
    // 0x454ea4: 0x27a80f78  addiu       $t0, $sp, 0xF78
    ctx->pc = 0x454ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_454ea8:
    // 0x454ea8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x454ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_454eac:
    // 0x454eac: 0xc061d44  jal         func_187510
label_454eb0:
    if (ctx->pc == 0x454EB0u) {
        ctx->pc = 0x454EB4u;
        goto label_454eb4;
    }
    ctx->pc = 0x454EACu;
    SET_GPR_U32(ctx, 31, 0x454EB4u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x454EACu, 0x454EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454EB4u;
label_454eb4:
    // 0x454eb4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x454eb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454eb8:
    // 0x454eb8: 0x27a20f18  addiu       $v0, $sp, 0xF18
    ctx->pc = 0x454eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454ebc:
    // 0x454ebc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454ec0:
    // 0x454ec0: 0xc041b38  jal         func_106CE0
label_454ec4:
    if (ctx->pc == 0x454EC4u) {
        ctx->pc = 0x454EC8u;
        goto label_454ec8;
    }
    ctx->pc = 0x454EC0u;
    SET_GPR_U32(ctx, 31, 0x454EC8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x454EC0u, 0x454EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454EC8u;
label_454ec8:
    // 0x454ec8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x454ec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454ecc:
    // 0x454ecc: 0x8e080020  lw          $t0, 0x20($s0)
    ctx->pc = 0x454eccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_454ed0:
    // 0x454ed0: 0x25020044  addiu       $v0, $t0, 0x44
    ctx->pc = 0x454ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 68));
label_454ed4:
    // 0x454ed4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454ed8:
    // 0x454ed8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x454ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_454edc:
    // 0x454edc: 0xc0bc5c6  jal         func_2F1718
label_454ee0:
    if (ctx->pc == 0x454EE0u) {
        ctx->pc = 0x454EE4u;
        goto label_454ee4;
    }
    ctx->pc = 0x454EDCu;
    SET_GPR_U32(ctx, 31, 0x454EE4u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x454EDCu, 0x454EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454EE4u;
label_454ee4:
    // 0x454ee4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454ee8:
    // 0x454ee8: 0x27a20f18  addiu       $v0, $sp, 0xF18
    ctx->pc = 0x454ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454eec:
    // 0x454eec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454ef0:
    // 0x454ef0: 0x27a20f28  addiu       $v0, $sp, 0xF28
    ctx->pc = 0x454ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_454ef4:
    // 0x454ef4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x454ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454ef8:
    // 0x454ef8: 0x27a60f78  addiu       $a2, $sp, 0xF78
    ctx->pc = 0x454ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_454efc:
    // 0x454efc: 0xc061d44  jal         func_187510
label_454f00:
    if (ctx->pc == 0x454F00u) {
        ctx->pc = 0x454F04u;
        goto label_454f04;
    }
    ctx->pc = 0x454EFCu;
    SET_GPR_U32(ctx, 31, 0x454F04u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x454EFCu, 0x454F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454F04u;
label_454f04:
    // 0x454f04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454f08:
    // 0x454f08: 0x27a50f18  addiu       $a1, $sp, 0xF18
    ctx->pc = 0x454f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454f0c:
    // 0x454f0c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x454f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_454f10:
    // 0x454f10: 0xc041b38  jal         func_106CE0
label_454f14:
    if (ctx->pc == 0x454F14u) {
        ctx->pc = 0x454F18u;
        goto label_454f18;
    }
    ctx->pc = 0x454F10u;
    SET_GPR_U32(ctx, 31, 0x454F18u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x454F10u, 0x454F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454F18u;
label_454f18:
    // 0x454f18: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x454f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_454f1c:
    // 0x454f1c: 0x24640064  addiu       $a0, $v1, 0x64
    ctx->pc = 0x454f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
label_454f20:
    // 0x454f20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x454f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454f24:
    // 0x454f24: 0xc0bc5c6  jal         func_2F1718
label_454f28:
    if (ctx->pc == 0x454F28u) {
        ctx->pc = 0x454F2Cu;
        goto label_454f2c;
    }
    ctx->pc = 0x454F24u;
    SET_GPR_U32(ctx, 31, 0x454F2Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x454F24u, 0x454F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454F2Cu;
label_454f2c:
    // 0x454f2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x454f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454f30:
    // 0x454f30: 0x10000373  b           . + 4 + (0x373 << 2)
label_454f34:
    if (ctx->pc == 0x454F34u) {
        ctx->pc = 0x454F38u;
        goto label_454f38;
    }
    ctx->pc = 0x454F30u;
    {
        const bool branch_taken_0x454f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x454f30) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x454F38u;
label_454f38:
    // 0x454f38: 0x27a60f28  addiu       $a2, $sp, 0xF28
    ctx->pc = 0x454f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_454f3c:
    // 0x454f3c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x454f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_454f40:
    // 0x454f40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x454f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_454f44:
    // 0x454f44: 0xc1193e8  jal         func_464FA0
label_454f48:
    if (ctx->pc == 0x454F48u) {
        ctx->pc = 0x454F4Cu;
        goto label_454f4c;
    }
    ctx->pc = 0x454F44u;
    SET_GPR_U32(ctx, 31, 0x454F4Cu);
    ctx->pc = 0x464FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464FA0u, 0x454F44u, 0x454F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454F4Cu;
label_454f4c:
    // 0x454f4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x454f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454f50:
    // 0x454f50: 0x1240036b  beqz        $s2, . + 4 + (0x36B << 2)
label_454f54:
    if (ctx->pc == 0x454F54u) {
        ctx->pc = 0x454F58u;
        goto label_454f58;
    }
    ctx->pc = 0x454F50u;
    {
        const bool branch_taken_0x454f50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x454f50) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x454F58u;
label_454f58:
    // 0x454f58: 0x2e410003  sltiu       $at, $s2, 0x3
    ctx->pc = 0x454f58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_454f5c:
    // 0x454f5c: 0x10200368  beqz        $at, . + 4 + (0x368 << 2)
label_454f60:
    if (ctx->pc == 0x454F60u) {
        ctx->pc = 0x454F64u;
        goto label_454f64;
    }
    ctx->pc = 0x454F5Cu;
    {
        const bool branch_taken_0x454f5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x454f5c) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x454F64u;
label_454f64:
    // 0x454f64: 0x27a50f18  addiu       $a1, $sp, 0xF18
    ctx->pc = 0x454f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_454f68:
    // 0x454f68: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x454f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_454f6c:
    // 0x454f6c: 0x27a20f28  addiu       $v0, $sp, 0xF28
    ctx->pc = 0x454f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_454f70:
    // 0x454f70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x454f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454f74:
    // 0x454f74: 0x27a60f78  addiu       $a2, $sp, 0xF78
    ctx->pc = 0x454f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_454f78:
    // 0x454f78: 0xc061d44  jal         func_187510
label_454f7c:
    if (ctx->pc == 0x454F7Cu) {
        ctx->pc = 0x454F80u;
        goto label_454f80;
    }
    ctx->pc = 0x454F78u;
    SET_GPR_U32(ctx, 31, 0x454F80u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x454F78u, 0x454F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454F80u;
label_454f80:
    // 0x454f80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454f84:
    // 0x454f84: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x454f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_454f88:
    // 0x454f88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454f8c:
    // 0x454f8c: 0xc119b68  jal         func_466DA0
label_454f90:
    if (ctx->pc == 0x454F90u) {
        ctx->pc = 0x454F94u;
        goto label_454f94;
    }
    ctx->pc = 0x454F8Cu;
    SET_GPR_U32(ctx, 31, 0x454F94u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x454F8Cu, 0x454F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454F94u;
label_454f94:
    // 0x454f94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x454f94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454f98:
    // 0x454f98: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x454f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_454f9c:
    // 0x454f9c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x454f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_454fa0:
    // 0x454fa0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x454fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_454fa4:
    // 0x454fa4: 0xc0400e0  jal         func_100380
label_454fa8:
    if (ctx->pc == 0x454FA8u) {
        ctx->pc = 0x454FACu;
        goto label_454fac;
    }
    ctx->pc = 0x454FA4u;
    SET_GPR_U32(ctx, 31, 0x454FACu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x454FA4u, 0x454FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454FACu;
label_454fac:
    // 0x454fac: 0xafa20f3c  sw          $v0, 0xF3C($sp)
    ctx->pc = 0x454facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3900), GPR_U32(ctx, 2));
label_454fb0:
    // 0x454fb0: 0x8fa60f3c  lw          $a2, 0xF3C($sp)
    ctx->pc = 0x454fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3900)));
label_454fb4:
    // 0x454fb4: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_454fb8:
    if (ctx->pc == 0x454FB8u) {
        ctx->pc = 0x454FBCu;
        goto label_454fbc;
    }
    ctx->pc = 0x454FB4u;
    {
        const bool branch_taken_0x454fb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x454fb4) {
            ctx->pc = 0x454FD8u;
            goto label_454fd8;
        }
    }
    ctx->pc = 0x454FBCu;
label_454fbc:
    // 0x454fbc: 0x8fa20f3c  lw          $v0, 0xF3C($sp)
    ctx->pc = 0x454fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3900)));
label_454fc0:
    // 0x454fc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454fc4:
    // 0x454fc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x454fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_454fc8:
    // 0x454fc8: 0xc1135f0  jal         func_44D7C0
label_454fcc:
    if (ctx->pc == 0x454FCCu) {
        ctx->pc = 0x454FD0u;
        goto label_454fd0;
    }
    ctx->pc = 0x454FC8u;
    SET_GPR_U32(ctx, 31, 0x454FD0u);
    ctx->pc = 0x44D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D7C0u, 0x454FC8u, 0x454FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454FD0u;
label_454fd0:
    // 0x454fd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x454fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454fd4:
    // 0x454fd4: 0xafa40f3c  sw          $a0, 0xF3C($sp)
    ctx->pc = 0x454fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3900), GPR_U32(ctx, 4));
label_454fd8:
    // 0x454fd8: 0x8fa20f3c  lw          $v0, 0xF3C($sp)
    ctx->pc = 0x454fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3900)));
label_454fdc:
    // 0x454fdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x454fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454fe0:
    // 0x454fe0: 0x10202b  sltu        $a0, $zero, $s0
    ctx->pc = 0x454fe0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_454fe4:
    // 0x454fe4: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x454fe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_454fe8:
    // 0x454fe8: 0x14a00034  bnez        $a1, . + 4 + (0x34 << 2)
label_454fec:
    if (ctx->pc == 0x454FECu) {
        ctx->pc = 0x454FF0u;
        goto label_454ff0;
    }
    ctx->pc = 0x454FE8u;
    {
        const bool branch_taken_0x454fe8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x454fe8) {
            ctx->pc = 0x4550BCu;
            goto label_4550bc;
        }
    }
    ctx->pc = 0x454FF0u;
label_454ff0:
    // 0x454ff0: 0x8f82b050  lw          $v0, -0x4FB0($gp)
    ctx->pc = 0x454ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946896)));
label_454ff4:
    // 0x454ff4: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_454ff8:
    if (ctx->pc == 0x454FF8u) {
        ctx->pc = 0x454FFCu;
        goto label_454ffc;
    }
    ctx->pc = 0x454FF4u;
    {
        const bool branch_taken_0x454ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x454ff4) {
            ctx->pc = 0x4550BCu;
            goto label_4550bc;
        }
    }
    ctx->pc = 0x454FFCu;
label_454ffc:
    // 0x454ffc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x454ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_455000:
    // 0x455000: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x455000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_455004:
    // 0x455004: 0x27a20eb8  addiu       $v0, $sp, 0xEB8
    ctx->pc = 0x455004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3768));
label_455008:
    // 0x455008: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x455008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45500c:
    // 0x45500c: 0xc115ee8  jal         func_457BA0
label_455010:
    if (ctx->pc == 0x455010u) {
        ctx->pc = 0x455014u;
        goto label_455014;
    }
    ctx->pc = 0x45500Cu;
    SET_GPR_U32(ctx, 31, 0x455014u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x45500Cu, 0x455014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455014u;
label_455014:
    // 0x455014: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_455018:
    if (ctx->pc == 0x455018u) {
        ctx->pc = 0x45501Cu;
        goto label_45501c;
    }
    ctx->pc = 0x455014u;
    {
        const bool branch_taken_0x455014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x455014) {
            ctx->pc = 0x4550BCu;
            goto label_4550bc;
        }
    }
    ctx->pc = 0x45501Cu;
label_45501c:
    // 0x45501c: 0x8fa40ec0  lw          $a0, 0xEC0($sp)
    ctx->pc = 0x45501cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3776)));
label_455020:
    // 0x455020: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
label_455024:
    if (ctx->pc == 0x455024u) {
        ctx->pc = 0x455028u;
        goto label_455028;
    }
    ctx->pc = 0x455020u;
    {
        const bool branch_taken_0x455020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x455020) {
            ctx->pc = 0x4550BCu;
            goto label_4550bc;
        }
    }
    ctx->pc = 0x455028u;
label_455028:
    // 0x455028: 0x27a50760  addiu       $a1, $sp, 0x760
    ctx->pc = 0x455028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1888));
label_45502c:
    // 0x45502c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x45502cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_455030:
    // 0x455030: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x455030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_455034:
    // 0x455034: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x455034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_455038:
    // 0x455038: 0x8fa20ebc  lw          $v0, 0xEBC($sp)
    ctx->pc = 0x455038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3772)));
label_45503c:
    // 0x45503c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x45503cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455040:
    // 0x455040: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x455040u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_455044:
    // 0x455044: 0x24e7de80  addiu       $a3, $a3, -0x2180
    ctx->pc = 0x455044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
label_455048:
    // 0x455048: 0x2402030a  addiu       $v0, $zero, 0x30A
    ctx->pc = 0x455048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 778));
label_45504c:
    // 0x45504c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x45504cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455050:
    // 0x455050: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x455050u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_455054:
    // 0x455054: 0x2529e240  addiu       $t1, $t1, -0x1DC0
    ctx->pc = 0x455054u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959680));
label_455058:
    // 0x455058: 0xc113940  jal         func_44E500
label_45505c:
    if (ctx->pc == 0x45505Cu) {
        ctx->pc = 0x455060u;
        goto label_455060;
    }
    ctx->pc = 0x455058u;
    SET_GPR_U32(ctx, 31, 0x455060u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x455058u, 0x455060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455060u;
label_455060:
    // 0x455060: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455064:
    // 0x455064: 0x27a20760  addiu       $v0, $sp, 0x760
    ctx->pc = 0x455064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1888));
label_455068:
    // 0x455068: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45506c:
    // 0x45506c: 0x2787b00c  addiu       $a3, $gp, -0x4FF4
    ctx->pc = 0x45506cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946828));
label_455070:
    // 0x455070: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x455070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_455074:
    // 0x455074: 0xc115c24  jal         func_457090
label_455078:
    if (ctx->pc == 0x455078u) {
        ctx->pc = 0x45507Cu;
        goto label_45507c;
    }
    ctx->pc = 0x455074u;
    SET_GPR_U32(ctx, 31, 0x45507Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x455074u, 0x45507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45507Cu;
label_45507c:
    // 0x45507c: 0x27a90760  addiu       $t1, $sp, 0x760
    ctx->pc = 0x45507cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1888));
label_455080:
    // 0x455080: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x455080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_455084:
    // 0x455084: 0x8fa20ec0  lw          $v0, 0xEC0($sp)
    ctx->pc = 0x455084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3776)));
label_455088:
    // 0x455088: 0x40f809  jalr        $v0
label_45508c:
    if (ctx->pc == 0x45508Cu) {
        ctx->pc = 0x455090u;
        goto label_455090;
    }
    ctx->pc = 0x455088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x455090u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x455088u, 0x455090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x455090u;
label_455090:
    // 0x455090: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455094:
    // 0x455094: 0xaf84b050  sw          $a0, -0x4FB0($gp)
    ctx->pc = 0x455094u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946896), GPR_U32(ctx, 4));
label_455098:
    // 0x455098: 0x8fa20760  lw          $v0, 0x760($sp)
    ctx->pc = 0x455098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1888)));
label_45509c:
    // 0x45509c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4550a0:
    if (ctx->pc == 0x4550A0u) {
        ctx->pc = 0x4550A4u;
        goto label_4550a4;
    }
    ctx->pc = 0x45509Cu;
    {
        const bool branch_taken_0x45509c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45509c) {
            ctx->pc = 0x4550ACu;
            goto label_4550ac;
        }
    }
    ctx->pc = 0x4550A4u;
label_4550a4:
    // 0x4550a4: 0xd  break       0
    ctx->pc = 0x4550a4u;
    runtime->handleBreak(rdram, ctx);
label_4550a8:
    // 0x4550a8: 0x0  nop
    ctx->pc = 0x4550a8u;
    // NOP
label_4550ac:
    // 0x4550ac: 0x27a40760  addiu       $a0, $sp, 0x760
    ctx->pc = 0x4550acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1888));
label_4550b0:
    // 0x4550b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4550b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4550b4:
    // 0x4550b4: 0xc11392c  jal         func_44E4B0
label_4550b8:
    if (ctx->pc == 0x4550B8u) {
        ctx->pc = 0x4550BCu;
        goto label_4550bc;
    }
    ctx->pc = 0x4550B4u;
    SET_GPR_U32(ctx, 31, 0x4550BCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4550B4u, 0x4550BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4550BCu;
label_4550bc:
    // 0x4550bc: 0x27a40f18  addiu       $a0, $sp, 0xF18
    ctx->pc = 0x4550bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_4550c0:
    // 0x4550c0: 0x27a50f28  addiu       $a1, $sp, 0xF28
    ctx->pc = 0x4550c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_4550c4:
    // 0x4550c4: 0x27a60f78  addiu       $a2, $sp, 0xF78
    ctx->pc = 0x4550c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_4550c8:
    // 0x4550c8: 0xc061d44  jal         func_187510
label_4550cc:
    if (ctx->pc == 0x4550CCu) {
        ctx->pc = 0x4550D0u;
        goto label_4550d0;
    }
    ctx->pc = 0x4550C8u;
    SET_GPR_U32(ctx, 31, 0x4550D0u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x4550C8u, 0x4550D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4550D0u;
label_4550d0:
    // 0x4550d0: 0x27a40f18  addiu       $a0, $sp, 0xF18
    ctx->pc = 0x4550d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_4550d4:
    // 0x4550d4: 0xc041b38  jal         func_106CE0
label_4550d8:
    if (ctx->pc == 0x4550D8u) {
        ctx->pc = 0x4550DCu;
        goto label_4550dc;
    }
    ctx->pc = 0x4550D4u;
    SET_GPR_U32(ctx, 31, 0x4550DCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x4550D4u, 0x4550DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4550DCu;
label_4550dc:
    // 0x4550dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4550dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4550e0:
    // 0x4550e0: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x4550e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4550e4:
    // 0x4550e4: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x4550e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_4550e8:
    // 0x4550e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4550e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4550ec:
    // 0x4550ec: 0xc0bc5c6  jal         func_2F1718
label_4550f0:
    if (ctx->pc == 0x4550F0u) {
        ctx->pc = 0x4550F4u;
        goto label_4550f4;
    }
    ctx->pc = 0x4550ECu;
    SET_GPR_U32(ctx, 31, 0x4550F4u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x4550ECu, 0x4550F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4550F4u;
label_4550f4:
    // 0x4550f4: 0x10000302  b           . + 4 + (0x302 << 2)
label_4550f8:
    if (ctx->pc == 0x4550F8u) {
        ctx->pc = 0x4550FCu;
        goto label_4550fc;
    }
    ctx->pc = 0x4550F4u;
    {
        const bool branch_taken_0x4550f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4550f4) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x4550FCu;
label_4550fc:
    // 0x4550fc: 0x27a40f28  addiu       $a0, $sp, 0xF28
    ctx->pc = 0x4550fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_455100:
    // 0x455100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x455100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_455104:
    // 0x455104: 0xc1193e8  jal         func_464FA0
label_455108:
    if (ctx->pc == 0x455108u) {
        ctx->pc = 0x45510Cu;
        goto label_45510c;
    }
    ctx->pc = 0x455104u;
    SET_GPR_U32(ctx, 31, 0x45510Cu);
    ctx->pc = 0x464FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464FA0u, 0x455104u, 0x45510Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45510Cu;
label_45510c:
    // 0x45510c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x45510cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455110:
    // 0x455110: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x455110u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_455114:
    // 0x455114: 0x124002fa  beqz        $s2, . + 4 + (0x2FA << 2)
label_455118:
    if (ctx->pc == 0x455118u) {
        ctx->pc = 0x45511Cu;
        goto label_45511c;
    }
    ctx->pc = 0x455114u;
    {
        const bool branch_taken_0x455114 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x455114) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x45511Cu;
label_45511c:
    // 0x45511c: 0x2e410005  sltiu       $at, $s2, 0x5
    ctx->pc = 0x45511cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_455120:
    // 0x455120: 0x102002f7  beqz        $at, . + 4 + (0x2F7 << 2)
label_455124:
    if (ctx->pc == 0x455124u) {
        ctx->pc = 0x455128u;
        goto label_455128;
    }
    ctx->pc = 0x455120u;
    {
        const bool branch_taken_0x455120 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x455120) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x455128u;
label_455128:
    // 0x455128: 0x27a60f18  addiu       $a2, $sp, 0xF18
    ctx->pc = 0x455128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_45512c:
    // 0x45512c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x45512cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_455130:
    // 0x455130: 0x27a70f28  addiu       $a3, $sp, 0xF28
    ctx->pc = 0x455130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_455134:
    // 0x455134: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x455134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_455138:
    // 0x455138: 0x27a80f78  addiu       $t0, $sp, 0xF78
    ctx->pc = 0x455138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_45513c:
    // 0x45513c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x45513cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_455140:
    // 0x455140: 0xc061d44  jal         func_187510
label_455144:
    if (ctx->pc == 0x455144u) {
        ctx->pc = 0x455148u;
        goto label_455148;
    }
    ctx->pc = 0x455140u;
    SET_GPR_U32(ctx, 31, 0x455148u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x455140u, 0x455148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455148u;
label_455148:
    // 0x455148: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x455148u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45514c:
    // 0x45514c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x45514cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_455150:
    // 0x455150: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455154:
    // 0x455154: 0xc119b68  jal         func_466DA0
label_455158:
    if (ctx->pc == 0x455158u) {
        ctx->pc = 0x45515Cu;
        goto label_45515c;
    }
    ctx->pc = 0x455154u;
    SET_GPR_U32(ctx, 31, 0x45515Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x455154u, 0x45515Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45515Cu;
label_45515c:
    // 0x45515c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x45515cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_455160:
    // 0x455160: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x455160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_455164:
    // 0x455164: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455168:
    // 0x455168: 0xc0400e0  jal         func_100380
label_45516c:
    if (ctx->pc == 0x45516Cu) {
        ctx->pc = 0x455170u;
        goto label_455170;
    }
    ctx->pc = 0x455168u;
    SET_GPR_U32(ctx, 31, 0x455170u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x455168u, 0x455170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455170u;
label_455170:
    // 0x455170: 0xafa20f38  sw          $v0, 0xF38($sp)
    ctx->pc = 0x455170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3896), GPR_U32(ctx, 2));
label_455174:
    // 0x455174: 0x8fa40f38  lw          $a0, 0xF38($sp)
    ctx->pc = 0x455174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3896)));
label_455178:
    // 0x455178: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_45517c:
    if (ctx->pc == 0x45517Cu) {
        ctx->pc = 0x455180u;
        goto label_455180;
    }
    ctx->pc = 0x455178u;
    {
        const bool branch_taken_0x455178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x455178) {
            ctx->pc = 0x455198u;
            goto label_455198;
        }
    }
    ctx->pc = 0x455180u;
label_455180:
    // 0x455180: 0x8fa30f38  lw          $v1, 0xF38($sp)
    ctx->pc = 0x455180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3896)));
label_455184:
    // 0x455184: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x455184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_455188:
    // 0x455188: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x455188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45518c:
    // 0x45518c: 0xc1135f0  jal         func_44D7C0
label_455190:
    if (ctx->pc == 0x455190u) {
        ctx->pc = 0x455194u;
        goto label_455194;
    }
    ctx->pc = 0x45518Cu;
    SET_GPR_U32(ctx, 31, 0x455194u);
    ctx->pc = 0x44D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D7C0u, 0x45518Cu, 0x455194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455194u;
label_455194:
    // 0x455194: 0xafa20f38  sw          $v0, 0xF38($sp)
    ctx->pc = 0x455194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3896), GPR_U32(ctx, 2));
label_455198:
    // 0x455198: 0x8fa60f38  lw          $a2, 0xF38($sp)
    ctx->pc = 0x455198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3896)));
label_45519c:
    // 0x45519c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x45519cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4551a0:
    // 0x4551a0: 0x10202b  sltu        $a0, $zero, $s0
    ctx->pc = 0x4551a0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4551a4:
    // 0x4551a4: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x4551a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4551a8:
    // 0x4551a8: 0x14a00031  bnez        $a1, . + 4 + (0x31 << 2)
label_4551ac:
    if (ctx->pc == 0x4551ACu) {
        ctx->pc = 0x4551B0u;
        goto label_4551b0;
    }
    ctx->pc = 0x4551A8u;
    {
        const bool branch_taken_0x4551a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4551a8) {
            ctx->pc = 0x455270u;
            goto label_455270;
        }
    }
    ctx->pc = 0x4551B0u;
label_4551b0:
    // 0x4551b0: 0x8f82b054  lw          $v0, -0x4FAC($gp)
    ctx->pc = 0x4551b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946900)));
label_4551b4:
    // 0x4551b4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_4551b8:
    if (ctx->pc == 0x4551B8u) {
        ctx->pc = 0x4551BCu;
        goto label_4551bc;
    }
    ctx->pc = 0x4551B4u;
    {
        const bool branch_taken_0x4551b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4551b4) {
            ctx->pc = 0x455270u;
            goto label_455270;
        }
    }
    ctx->pc = 0x4551BCu;
label_4551bc:
    // 0x4551bc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4551bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4551c0:
    // 0x4551c0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4551c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4551c4:
    // 0x4551c4: 0x27a60ea8  addiu       $a2, $sp, 0xEA8
    ctx->pc = 0x4551c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3752));
label_4551c8:
    // 0x4551c8: 0xc115ee8  jal         func_457BA0
label_4551cc:
    if (ctx->pc == 0x4551CCu) {
        ctx->pc = 0x4551D0u;
        goto label_4551d0;
    }
    ctx->pc = 0x4551C8u;
    SET_GPR_U32(ctx, 31, 0x4551D0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4551C8u, 0x4551D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4551D0u;
label_4551d0:
    // 0x4551d0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_4551d4:
    if (ctx->pc == 0x4551D4u) {
        ctx->pc = 0x4551D8u;
        goto label_4551d8;
    }
    ctx->pc = 0x4551D0u;
    {
        const bool branch_taken_0x4551d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4551d0) {
            ctx->pc = 0x455270u;
            goto label_455270;
        }
    }
    ctx->pc = 0x4551D8u;
label_4551d8:
    // 0x4551d8: 0x8fa40eb0  lw          $a0, 0xEB0($sp)
    ctx->pc = 0x4551d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3760)));
label_4551dc:
    // 0x4551dc: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
label_4551e0:
    if (ctx->pc == 0x4551E0u) {
        ctx->pc = 0x4551E4u;
        goto label_4551e4;
    }
    ctx->pc = 0x4551DCu;
    {
        const bool branch_taken_0x4551dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4551dc) {
            ctx->pc = 0x455270u;
            goto label_455270;
        }
    }
    ctx->pc = 0x4551E4u;
label_4551e4:
    // 0x4551e4: 0x27a50640  addiu       $a1, $sp, 0x640
    ctx->pc = 0x4551e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
label_4551e8:
    // 0x4551e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4551e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4551ec:
    // 0x4551ec: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x4551ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4551f0:
    // 0x4551f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4551f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4551f4:
    // 0x4551f4: 0x8fa60eac  lw          $a2, 0xEAC($sp)
    ctx->pc = 0x4551f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3756)));
label_4551f8:
    // 0x4551f8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x4551f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_4551fc:
    // 0x4551fc: 0x2442de80  addiu       $v0, $v0, -0x2180
    ctx->pc = 0x4551fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958720));
label_455200:
    // 0x455200: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x455200u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455204:
    // 0x455204: 0x2408031f  addiu       $t0, $zero, 0x31F
    ctx->pc = 0x455204u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 799));
label_455208:
    // 0x455208: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x455208u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_45520c:
    // 0x45520c: 0x2529e240  addiu       $t1, $t1, -0x1DC0
    ctx->pc = 0x45520cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959680));
label_455210:
    // 0x455210: 0xc113940  jal         func_44E500
label_455214:
    if (ctx->pc == 0x455214u) {
        ctx->pc = 0x455218u;
        goto label_455218;
    }
    ctx->pc = 0x455210u;
    SET_GPR_U32(ctx, 31, 0x455218u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x455210u, 0x455218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455218u;
label_455218:
    // 0x455218: 0x27a40640  addiu       $a0, $sp, 0x640
    ctx->pc = 0x455218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
label_45521c:
    // 0x45521c: 0x2785b00c  addiu       $a1, $gp, -0x4FF4
    ctx->pc = 0x45521cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946828));
label_455220:
    // 0x455220: 0xc115c24  jal         func_457090
label_455224:
    if (ctx->pc == 0x455224u) {
        ctx->pc = 0x455228u;
        goto label_455228;
    }
    ctx->pc = 0x455220u;
    SET_GPR_U32(ctx, 31, 0x455228u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x455220u, 0x455228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455228u;
label_455228:
    // 0x455228: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x455228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45522c:
    // 0x45522c: 0x27a20640  addiu       $v0, $sp, 0x640
    ctx->pc = 0x45522cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
label_455230:
    // 0x455230: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455234:
    // 0x455234: 0x8fa20eb0  lw          $v0, 0xEB0($sp)
    ctx->pc = 0x455234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3760)));
label_455238:
    // 0x455238: 0x40f809  jalr        $v0
label_45523c:
    if (ctx->pc == 0x45523Cu) {
        ctx->pc = 0x455240u;
        goto label_455240;
    }
    ctx->pc = 0x455238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x455240u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x455238u, 0x455240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x455240u;
label_455240:
    // 0x455240: 0xaf82b054  sw          $v0, -0x4FAC($gp)
    ctx->pc = 0x455240u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946900), GPR_U32(ctx, 2));
label_455244:
    // 0x455244: 0x8fa90640  lw          $t1, 0x640($sp)
    ctx->pc = 0x455244u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_455248:
    // 0x455248: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
label_45524c:
    if (ctx->pc == 0x45524Cu) {
        ctx->pc = 0x455250u;
        goto label_455250;
    }
    ctx->pc = 0x455248u;
    {
        const bool branch_taken_0x455248 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x455248) {
            ctx->pc = 0x455258u;
            goto label_455258;
        }
    }
    ctx->pc = 0x455250u;
label_455250:
    // 0x455250: 0xd  break       0
    ctx->pc = 0x455250u;
    runtime->handleBreak(rdram, ctx);
label_455254:
    // 0x455254: 0x0  nop
    ctx->pc = 0x455254u;
    // NOP
label_455258:
    // 0x455258: 0x27a50640  addiu       $a1, $sp, 0x640
    ctx->pc = 0x455258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
label_45525c:
    // 0x45525c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x45525cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_455260:
    // 0x455260: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x455260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_455264:
    // 0x455264: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x455264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_455268:
    // 0x455268: 0xc11392c  jal         func_44E4B0
label_45526c:
    if (ctx->pc == 0x45526Cu) {
        ctx->pc = 0x455270u;
        goto label_455270;
    }
    ctx->pc = 0x455268u;
    SET_GPR_U32(ctx, 31, 0x455270u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x455268u, 0x455270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455270u;
label_455270:
    // 0x455270: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x455270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_455274:
    // 0x455274: 0x8fa60f80  lw          $a2, 0xF80($sp)
    ctx->pc = 0x455274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3968)));
label_455278:
    // 0x455278: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x455278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_45527c:
    // 0x45527c: 0x27a20f18  addiu       $v0, $sp, 0xF18
    ctx->pc = 0x45527cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_455280:
    // 0x455280: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455284:
    // 0x455284: 0x24620024  addiu       $v0, $v1, 0x24
    ctx->pc = 0x455284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
label_455288:
    // 0x455288: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x455288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45528c:
    // 0x45528c: 0xc11575c  jal         func_455D70
label_455290:
    if (ctx->pc == 0x455290u) {
        ctx->pc = 0x455294u;
        goto label_455294;
    }
    ctx->pc = 0x45528Cu;
    SET_GPR_U32(ctx, 31, 0x455294u);
    ctx->pc = 0x455D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x455D70u, 0x45528Cu, 0x455294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455294u;
label_455294:
    // 0x455294: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455298:
    // 0x455298: 0x1480001a  bnez        $a0, . + 4 + (0x1A << 2)
label_45529c:
    if (ctx->pc == 0x45529Cu) {
        ctx->pc = 0x4552A0u;
        goto label_4552a0;
    }
    ctx->pc = 0x455298u;
    {
        const bool branch_taken_0x455298 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x455298) {
            ctx->pc = 0x455304u;
            goto label_455304;
        }
    }
    ctx->pc = 0x4552A0u;
label_4552a0:
    // 0x4552a0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4552a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4552a4:
    // 0x4552a4: 0x24a5e250  addiu       $a1, $a1, -0x1DB0
    ctx->pc = 0x4552a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959696));
label_4552a8:
    // 0x4552a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4552a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4552ac:
    // 0x4552ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4552acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4552b0:
    // 0x4552b0: 0xc115ae4  jal         func_456B90
label_4552b4:
    if (ctx->pc == 0x4552B4u) {
        ctx->pc = 0x4552B8u;
        goto label_4552b8;
    }
    ctx->pc = 0x4552B0u;
    SET_GPR_U32(ctx, 31, 0x4552B8u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x4552B0u, 0x4552B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4552B8u;
label_4552b8:
    // 0x4552b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4552b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4552bc:
    // 0x4552bc: 0xafa00f54  sw          $zero, 0xF54($sp)
    ctx->pc = 0x4552bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3924), GPR_U32(ctx, 0));
label_4552c0:
    // 0x4552c0: 0x27a70f18  addiu       $a3, $sp, 0xF18
    ctx->pc = 0x4552c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_4552c4:
    // 0x4552c4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4552c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4552c8:
    // 0x4552c8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4552c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4552cc:
    // 0x4552cc: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4552ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4552d0:
    // 0x4552d0: 0xc0402d4  jal         func_100B50
label_4552d4:
    if (ctx->pc == 0x4552D4u) {
        ctx->pc = 0x4552D8u;
        goto label_4552d8;
    }
    ctx->pc = 0x4552D0u;
    SET_GPR_U32(ctx, 31, 0x4552D8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x4552D0u, 0x4552D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4552D8u;
label_4552d8:
    // 0x4552d8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4552d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4552dc:
    // 0x4552dc: 0x27a20f28  addiu       $v0, $sp, 0xF28
    ctx->pc = 0x4552dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_4552e0:
    // 0x4552e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4552e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4552e4:
    // 0x4552e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4552e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4552e8:
    // 0x4552e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4552e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4552ec:
    // 0x4552ec: 0xc0402d4  jal         func_100B50
label_4552f0:
    if (ctx->pc == 0x4552F0u) {
        ctx->pc = 0x4552F4u;
        goto label_4552f4;
    }
    ctx->pc = 0x4552ECu;
    SET_GPR_U32(ctx, 31, 0x4552F4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x4552ECu, 0x4552F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4552F4u;
label_4552f4:
    // 0x4552f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4552f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4552f8:
    // 0x4552f8: 0x8fa20f54  lw          $v0, 0xF54($sp)
    ctx->pc = 0x4552f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3924)));
label_4552fc:
    // 0x4552fc: 0x1000028f  b           . + 4 + (0x28F << 2)
label_455300:
    if (ctx->pc == 0x455300u) {
        ctx->pc = 0x455304u;
        goto label_455304;
    }
    ctx->pc = 0x4552FCu;
    {
        const bool branch_taken_0x4552fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4552fc) {
            ctx->pc = 0x455D3Cu;
            goto label_455d3c;
        }
    }
    ctx->pc = 0x455304u;
label_455304:
    // 0x455304: 0x27a40f18  addiu       $a0, $sp, 0xF18
    ctx->pc = 0x455304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_455308:
    // 0x455308: 0x27a50f28  addiu       $a1, $sp, 0xF28
    ctx->pc = 0x455308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_45530c:
    // 0x45530c: 0x27a20f78  addiu       $v0, $sp, 0xF78
    ctx->pc = 0x45530cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_455310:
    // 0x455310: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x455310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455314:
    // 0x455314: 0xc061d44  jal         func_187510
label_455318:
    if (ctx->pc == 0x455318u) {
        ctx->pc = 0x45531Cu;
        goto label_45531c;
    }
    ctx->pc = 0x455314u;
    SET_GPR_U32(ctx, 31, 0x45531Cu);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x455314u, 0x45531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45531Cu;
label_45531c:
    // 0x45531c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45531cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455320:
    // 0x455320: 0x27a20f18  addiu       $v0, $sp, 0xF18
    ctx->pc = 0x455320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_455324:
    // 0x455324: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455328:
    // 0x455328: 0xc041b38  jal         func_106CE0
label_45532c:
    if (ctx->pc == 0x45532Cu) {
        ctx->pc = 0x455330u;
        goto label_455330;
    }
    ctx->pc = 0x455328u;
    SET_GPR_U32(ctx, 31, 0x455330u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x455328u, 0x455330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455330u;
label_455330:
    // 0x455330: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455334:
    // 0x455334: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x455334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_455338:
    // 0x455338: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x455338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_45533c:
    // 0x45533c: 0x2785b078  addiu       $a1, $gp, -0x4F88
    ctx->pc = 0x45533cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946936));
label_455340:
    // 0x455340: 0x24460028  addiu       $a2, $v0, 0x28
    ctx->pc = 0x455340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_455344:
    // 0x455344: 0xc0bc408  jal         func_2F1020
label_455348:
    if (ctx->pc == 0x455348u) {
        ctx->pc = 0x45534Cu;
        goto label_45534c;
    }
    ctx->pc = 0x455344u;
    SET_GPR_U32(ctx, 31, 0x45534Cu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x455344u, 0x45534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45534Cu;
label_45534c:
    // 0x45534c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x45534cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_455350:
    // 0x455350: 0x1644026b  bne         $s2, $a0, . + 4 + (0x26B << 2)
label_455354:
    if (ctx->pc == 0x455354u) {
        ctx->pc = 0x455358u;
        goto label_455358;
    }
    ctx->pc = 0x455350u;
    {
        const bool branch_taken_0x455350 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        if (branch_taken_0x455350) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x455358u;
label_455358:
    // 0x455358: 0x27b30f18  addiu       $s3, $sp, 0xF18
    ctx->pc = 0x455358u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_45535c:
    // 0x45535c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45535cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_455360:
    // 0x455360: 0x27a50f28  addiu       $a1, $sp, 0xF28
    ctx->pc = 0x455360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_455364:
    // 0x455364: 0x27a60f78  addiu       $a2, $sp, 0xF78
    ctx->pc = 0x455364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_455368:
    // 0x455368: 0xc061d44  jal         func_187510
label_45536c:
    if (ctx->pc == 0x45536Cu) {
        ctx->pc = 0x455370u;
        goto label_455370;
    }
    ctx->pc = 0x455368u;
    SET_GPR_U32(ctx, 31, 0x455370u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x455368u, 0x455370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455370u;
label_455370:
    // 0x455370: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x455370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455374:
    // 0x455374: 0x27a20e18  addiu       $v0, $sp, 0xE18
    ctx->pc = 0x455374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3608));
label_455378:
    // 0x455378: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45537c:
    // 0x45537c: 0x2786b080  addiu       $a2, $gp, -0x4F80
    ctx->pc = 0x45537cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946944));
label_455380:
    // 0x455380: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x455380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_455384:
    // 0x455384: 0xc040304  jal         func_100C10
label_455388:
    if (ctx->pc == 0x455388u) {
        ctx->pc = 0x45538Cu;
        goto label_45538c;
    }
    ctx->pc = 0x455384u;
    SET_GPR_U32(ctx, 31, 0x45538Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x455384u, 0x45538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45538Cu;
label_45538c:
    // 0x45538c: 0x27a40f18  addiu       $a0, $sp, 0xF18
    ctx->pc = 0x45538cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_455390:
    // 0x455390: 0x27a50e18  addiu       $a1, $sp, 0xE18
    ctx->pc = 0x455390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3608));
label_455394:
    // 0x455394: 0xc05c618  jal         func_171860
label_455398:
    if (ctx->pc == 0x455398u) {
        ctx->pc = 0x45539Cu;
        goto label_45539c;
    }
    ctx->pc = 0x455394u;
    SET_GPR_U32(ctx, 31, 0x45539Cu);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x455394u, 0x45539Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45539Cu;
label_45539c:
    // 0x45539c: 0x401027  not         $v0, $v0
    ctx->pc = 0x45539cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_4553a0:
    // 0x4553a0: 0x2382b  sltu        $a3, $zero, $v0
    ctx->pc = 0x4553a0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4553a4:
    // 0x4553a4: 0xa3a70f7c  sb          $a3, 0xF7C($sp)
    ctx->pc = 0x4553a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3964), (uint8_t)GPR_U32(ctx, 7));
label_4553a8:
    // 0x4553a8: 0x27a80e18  addiu       $t0, $sp, 0xE18
    ctx->pc = 0x4553a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 3608));
label_4553ac:
    // 0x4553ac: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x4553acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4553b0:
    // 0x4553b0: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x4553b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4553b4:
    // 0x4553b4: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4553b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4553b8:
    // 0x4553b8: 0xc0402d4  jal         func_100B50
label_4553bc:
    if (ctx->pc == 0x4553BCu) {
        ctx->pc = 0x4553C0u;
        goto label_4553c0;
    }
    ctx->pc = 0x4553B8u;
    SET_GPR_U32(ctx, 31, 0x4553C0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x4553B8u, 0x4553C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4553C0u;
label_4553c0:
    // 0x4553c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4553c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4553c4:
    // 0x4553c4: 0x93a40f7c  lbu         $a0, 0xF7C($sp)
    ctx->pc = 0x4553c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3964)));
label_4553c8:
    // 0x4553c8: 0x1080024d  beqz        $a0, . + 4 + (0x24D << 2)
label_4553cc:
    if (ctx->pc == 0x4553CCu) {
        ctx->pc = 0x4553D0u;
        goto label_4553d0;
    }
    ctx->pc = 0x4553C8u;
    {
        const bool branch_taken_0x4553c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4553c8) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x4553D0u;
label_4553d0:
    // 0x4553d0: 0x2782b080  addiu       $v0, $gp, -0x4F80
    ctx->pc = 0x4553d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946944));
label_4553d4:
    // 0x4553d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4553d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4553d8:
    // 0x4553d8: 0xc0bc60c  jal         func_2F1830
label_4553dc:
    if (ctx->pc == 0x4553DCu) {
        ctx->pc = 0x4553E0u;
        goto label_4553e0;
    }
    ctx->pc = 0x4553D8u;
    SET_GPR_U32(ctx, 31, 0x4553E0u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x4553D8u, 0x4553E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4553E0u;
label_4553e0:
    // 0x4553e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4553e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4553e4:
    // 0x4553e4: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x4553e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_4553e8:
    // 0x4553e8: 0xafa50f68  sw          $a1, 0xF68($sp)
    ctx->pc = 0x4553e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3944), GPR_U32(ctx, 5));
label_4553ec:
    // 0x4553ec: 0x27a50f18  addiu       $a1, $sp, 0xF18
    ctx->pc = 0x4553ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_4553f0:
    // 0x4553f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4553f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4553f4:
    // 0x4553f4: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x4553f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_4553f8:
    // 0x4553f8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4553f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4553fc:
    // 0x4553fc: 0xc047874  jal         func_11E1D0
label_455400:
    if (ctx->pc == 0x455400u) {
        ctx->pc = 0x455404u;
        goto label_455404;
    }
    ctx->pc = 0x4553FCu;
    SET_GPR_U32(ctx, 31, 0x455404u);
    ctx->pc = 0x11E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1D0u, 0x4553FCu, 0x455404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455404u;
label_455404:
    // 0x455404: 0xafa20f64  sw          $v0, 0xF64($sp)
    ctx->pc = 0x455404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3940), GPR_U32(ctx, 2));
label_455408:
    // 0x455408: 0x8fa40f64  lw          $a0, 0xF64($sp)
    ctx->pc = 0x455408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3940)));
label_45540c:
    // 0x45540c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45540cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_455410:
    // 0x455410: 0x1082023b  beq         $a0, $v0, . + 4 + (0x23B << 2)
label_455414:
    if (ctx->pc == 0x455414u) {
        ctx->pc = 0x455418u;
        goto label_455418;
    }
    ctx->pc = 0x455410u;
    {
        const bool branch_taken_0x455410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x455410) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x455418u;
label_455418:
    // 0x455418: 0x8fa40f68  lw          $a0, 0xF68($sp)
    ctx->pc = 0x455418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3944)));
label_45541c:
    // 0x45541c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x45541cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_455420:
    // 0x455420: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x455420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_455424:
    // 0x455424: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x455424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_455428:
    // 0x455428: 0x27a60f18  addiu       $a2, $sp, 0xF18
    ctx->pc = 0x455428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_45542c:
    // 0x45542c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x45542cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_455430:
    // 0x455430: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x455430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455434:
    // 0x455434: 0x8fa20f64  lw          $v0, 0xF64($sp)
    ctx->pc = 0x455434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3940)));
label_455438:
    // 0x455438: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x455438u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45543c:
    // 0x45543c: 0xc043764  jal         func_10DD90
label_455440:
    if (ctx->pc == 0x455440u) {
        ctx->pc = 0x455444u;
        goto label_455444;
    }
    ctx->pc = 0x45543Cu;
    SET_GPR_U32(ctx, 31, 0x455444u);
    ctx->pc = 0x10DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD90u, 0x45543Cu, 0x455444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455444u;
label_455444:
    // 0x455444: 0x1000022e  b           . + 4 + (0x22E << 2)
label_455448:
    if (ctx->pc == 0x455448u) {
        ctx->pc = 0x45544Cu;
        goto label_45544c;
    }
    ctx->pc = 0x455444u;
    {
        const bool branch_taken_0x455444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x455444) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x45544Cu;
label_45544c:
    // 0x45544c: 0x27a50f28  addiu       $a1, $sp, 0xF28
    ctx->pc = 0x45544cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_455450:
    // 0x455450: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x455450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_455454:
    // 0x455454: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x455454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_455458:
    // 0x455458: 0xc1193e8  jal         func_464FA0
label_45545c:
    if (ctx->pc == 0x45545Cu) {
        ctx->pc = 0x455460u;
        goto label_455460;
    }
    ctx->pc = 0x455458u;
    SET_GPR_U32(ctx, 31, 0x455460u);
    ctx->pc = 0x464FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464FA0u, 0x455458u, 0x455460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455460u;
label_455460:
    // 0x455460: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x455460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_455464:
    // 0x455464: 0x14440226  bne         $v0, $a0, . + 4 + (0x226 << 2)
label_455468:
    if (ctx->pc == 0x455468u) {
        ctx->pc = 0x45546Cu;
        goto label_45546c;
    }
    ctx->pc = 0x455464u;
    {
        const bool branch_taken_0x455464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x455464) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x45546Cu;
label_45546c:
    // 0x45546c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x45546cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_455470:
    // 0x455470: 0xc119b68  jal         func_466DA0
label_455474:
    if (ctx->pc == 0x455474u) {
        ctx->pc = 0x455478u;
        goto label_455478;
    }
    ctx->pc = 0x455470u;
    SET_GPR_U32(ctx, 31, 0x455478u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x455470u, 0x455478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455478u;
label_455478:
    // 0x455478: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45547c:
    // 0x45547c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x45547cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_455480:
    // 0x455480: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x455480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_455484:
    // 0x455484: 0xc0400e0  jal         func_100380
label_455488:
    if (ctx->pc == 0x455488u) {
        ctx->pc = 0x45548Cu;
        goto label_45548c;
    }
    ctx->pc = 0x455484u;
    SET_GPR_U32(ctx, 31, 0x45548Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x455484u, 0x45548Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45548Cu;
label_45548c:
    // 0x45548c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x45548cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455490:
    // 0x455490: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
label_455494:
    if (ctx->pc == 0x455494u) {
        ctx->pc = 0x455498u;
        goto label_455498;
    }
    ctx->pc = 0x455490u;
    {
        const bool branch_taken_0x455490 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x455490) {
            ctx->pc = 0x4554ACu;
            goto label_4554ac;
        }
    }
    ctx->pc = 0x455498u;
label_455498:
    // 0x455498: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x455498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_45549c:
    // 0x45549c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x45549cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4554a0:
    // 0x4554a0: 0xc1135f0  jal         func_44D7C0
label_4554a4:
    if (ctx->pc == 0x4554A4u) {
        ctx->pc = 0x4554A8u;
        goto label_4554a8;
    }
    ctx->pc = 0x4554A0u;
    SET_GPR_U32(ctx, 31, 0x4554A8u);
    ctx->pc = 0x44D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D7C0u, 0x4554A0u, 0x4554A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4554A8u;
label_4554a8:
    // 0x4554a8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x4554a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4554ac:
    // 0x4554ac: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x4554acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4554b0:
    // 0x4554b0: 0x10282b  sltu        $a1, $zero, $s0
    ctx->pc = 0x4554b0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4554b4:
    // 0x4554b4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x4554b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_4554b8:
    // 0x4554b8: 0x14a00039  bnez        $a1, . + 4 + (0x39 << 2)
label_4554bc:
    if (ctx->pc == 0x4554BCu) {
        ctx->pc = 0x4554C0u;
        goto label_4554c0;
    }
    ctx->pc = 0x4554B8u;
    {
        const bool branch_taken_0x4554b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4554b8) {
            ctx->pc = 0x4555A0u;
            goto label_4555a0;
        }
    }
    ctx->pc = 0x4554C0u;
label_4554c0:
    // 0x4554c0: 0x8f86b058  lw          $a2, -0x4FA8($gp)
    ctx->pc = 0x4554c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946904)));
label_4554c4:
    // 0x4554c4: 0x10c00036  beqz        $a2, . + 4 + (0x36 << 2)
label_4554c8:
    if (ctx->pc == 0x4554C8u) {
        ctx->pc = 0x4554CCu;
        goto label_4554cc;
    }
    ctx->pc = 0x4554C4u;
    {
        const bool branch_taken_0x4554c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4554c4) {
            ctx->pc = 0x4555A0u;
            goto label_4555a0;
        }
    }
    ctx->pc = 0x4554CCu;
label_4554cc:
    // 0x4554cc: 0x8f87bf38  lw          $a3, -0x40C8($gp)
    ctx->pc = 0x4554ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4554d0:
    // 0x4554d0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4554d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4554d4:
    // 0x4554d4: 0x2408fffc  addiu       $t0, $zero, -0x4
    ctx->pc = 0x4554d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4554d8:
    // 0x4554d8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4554d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4554dc:
    // 0x4554dc: 0x27a90e98  addiu       $t1, $sp, 0xE98
    ctx->pc = 0x4554dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 3736));
label_4554e0:
    // 0x4554e0: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x4554e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4554e4:
    // 0x4554e4: 0xc115ee8  jal         func_457BA0
label_4554e8:
    if (ctx->pc == 0x4554E8u) {
        ctx->pc = 0x4554ECu;
        goto label_4554ec;
    }
    ctx->pc = 0x4554E4u;
    SET_GPR_U32(ctx, 31, 0x4554ECu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4554E4u, 0x4554ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4554ECu;
label_4554ec:
    // 0x4554ec: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_4554f0:
    if (ctx->pc == 0x4554F0u) {
        ctx->pc = 0x4554F4u;
        goto label_4554f4;
    }
    ctx->pc = 0x4554ECu;
    {
        const bool branch_taken_0x4554ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4554ec) {
            ctx->pc = 0x4555A0u;
            goto label_4555a0;
        }
    }
    ctx->pc = 0x4554F4u;
label_4554f4:
    // 0x4554f4: 0x8fa40ea0  lw          $a0, 0xEA0($sp)
    ctx->pc = 0x4554f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3744)));
label_4554f8:
    // 0x4554f8: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
label_4554fc:
    if (ctx->pc == 0x4554FCu) {
        ctx->pc = 0x455500u;
        goto label_455500;
    }
    ctx->pc = 0x4554F8u;
    {
        const bool branch_taken_0x4554f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4554f8) {
            ctx->pc = 0x4555A0u;
            goto label_4555a0;
        }
    }
    ctx->pc = 0x455500u;
label_455500:
    // 0x455500: 0x27a50520  addiu       $a1, $sp, 0x520
    ctx->pc = 0x455500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
label_455504:
    // 0x455504: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x455504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_455508:
    // 0x455508: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x455508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45550c:
    // 0x45550c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x45550cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455510:
    // 0x455510: 0x8fa20e9c  lw          $v0, 0xE9C($sp)
    ctx->pc = 0x455510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3740)));
label_455514:
    // 0x455514: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x455514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455518:
    // 0x455518: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x455518u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_45551c:
    // 0x45551c: 0x24e7de80  addiu       $a3, $a3, -0x2180
    ctx->pc = 0x45551cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
label_455520:
    // 0x455520: 0x2402034c  addiu       $v0, $zero, 0x34C
    ctx->pc = 0x455520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 844));
label_455524:
    // 0x455524: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x455524u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455528:
    // 0x455528: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x455528u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_45552c:
    // 0x45552c: 0x2529e240  addiu       $t1, $t1, -0x1DC0
    ctx->pc = 0x45552cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959680));
label_455530:
    // 0x455530: 0xc113940  jal         func_44E500
label_455534:
    if (ctx->pc == 0x455534u) {
        ctx->pc = 0x455538u;
        goto label_455538;
    }
    ctx->pc = 0x455530u;
    SET_GPR_U32(ctx, 31, 0x455538u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x455530u, 0x455538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455538u;
label_455538:
    // 0x455538: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x455538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45553c:
    // 0x45553c: 0x27a70520  addiu       $a3, $sp, 0x520
    ctx->pc = 0x45553cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
label_455540:
    // 0x455540: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x455540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_455544:
    // 0x455544: 0x2782b00c  addiu       $v0, $gp, -0x4FF4
    ctx->pc = 0x455544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946828));
label_455548:
    // 0x455548: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45554c:
    // 0x45554c: 0xc115c24  jal         func_457090
label_455550:
    if (ctx->pc == 0x455550u) {
        ctx->pc = 0x455554u;
        goto label_455554;
    }
    ctx->pc = 0x45554Cu;
    SET_GPR_U32(ctx, 31, 0x455554u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x45554Cu, 0x455554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455554u;
label_455554:
    // 0x455554: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x455554u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455558:
    // 0x455558: 0x27a20520  addiu       $v0, $sp, 0x520
    ctx->pc = 0x455558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
label_45555c:
    // 0x45555c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45555cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455560:
    // 0x455560: 0x8fa30ea0  lw          $v1, 0xEA0($sp)
    ctx->pc = 0x455560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3744)));
label_455564:
    // 0x455564: 0x60f809  jalr        $v1
label_455568:
    if (ctx->pc == 0x455568u) {
        ctx->pc = 0x45556Cu;
        goto label_45556c;
    }
    ctx->pc = 0x455564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x45556Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x455564u, 0x45556Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45556Cu;
label_45556c:
    // 0x45556c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x45556cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455570:
    // 0x455570: 0xaf85b058  sw          $a1, -0x4FA8($gp)
    ctx->pc = 0x455570u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946904), GPR_U32(ctx, 5));
label_455574:
    // 0x455574: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x455574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
label_455578:
    // 0x455578: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_45557c:
    if (ctx->pc == 0x45557Cu) {
        ctx->pc = 0x455580u;
        goto label_455580;
    }
    ctx->pc = 0x455578u;
    {
        const bool branch_taken_0x455578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x455578) {
            ctx->pc = 0x455588u;
            goto label_455588;
        }
    }
    ctx->pc = 0x455580u;
label_455580:
    // 0x455580: 0xd  break       0
    ctx->pc = 0x455580u;
    runtime->handleBreak(rdram, ctx);
label_455584:
    // 0x455584: 0x0  nop
    ctx->pc = 0x455584u;
    // NOP
label_455588:
    // 0x455588: 0x27a20520  addiu       $v0, $sp, 0x520
    ctx->pc = 0x455588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
label_45558c:
    // 0x45558c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45558cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455590:
    // 0x455590: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x455590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_455594:
    // 0x455594: 0xc11392c  jal         func_44E4B0
label_455598:
    if (ctx->pc == 0x455598u) {
        ctx->pc = 0x45559Cu;
        goto label_45559c;
    }
    ctx->pc = 0x455594u;
    SET_GPR_U32(ctx, 31, 0x45559Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x455594u, 0x45559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45559Cu;
label_45559c:
    // 0x45559c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x45559cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4555a0:
    // 0x4555a0: 0x27a60f18  addiu       $a2, $sp, 0xF18
    ctx->pc = 0x4555a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_4555a4:
    // 0x4555a4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4555a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4555a8:
    // 0x4555a8: 0x27a20f28  addiu       $v0, $sp, 0xF28
    ctx->pc = 0x4555a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_4555ac:
    // 0x4555ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4555acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4555b0:
    // 0x4555b0: 0x27a60f78  addiu       $a2, $sp, 0xF78
    ctx->pc = 0x4555b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_4555b4:
    // 0x4555b4: 0xc061d44  jal         func_187510
label_4555b8:
    if (ctx->pc == 0x4555B8u) {
        ctx->pc = 0x4555BCu;
        goto label_4555bc;
    }
    ctx->pc = 0x4555B4u;
    SET_GPR_U32(ctx, 31, 0x4555BCu);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x4555B4u, 0x4555BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4555BCu;
label_4555bc:
    // 0x4555bc: 0x27a40f18  addiu       $a0, $sp, 0xF18
    ctx->pc = 0x4555bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_4555c0:
    // 0x4555c0: 0xc041b38  jal         func_106CE0
label_4555c4:
    if (ctx->pc == 0x4555C4u) {
        ctx->pc = 0x4555C8u;
        goto label_4555c8;
    }
    ctx->pc = 0x4555C0u;
    SET_GPR_U32(ctx, 31, 0x4555C8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x4555C0u, 0x4555C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4555C8u;
label_4555c8:
    // 0x4555c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4555c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4555cc:
    // 0x4555cc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x4555ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4555d0:
    // 0x4555d0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x4555d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4555d4:
    // 0x4555d4: 0xc0bc5c6  jal         func_2F1718
label_4555d8:
    if (ctx->pc == 0x4555D8u) {
        ctx->pc = 0x4555DCu;
        goto label_4555dc;
    }
    ctx->pc = 0x4555D4u;
    SET_GPR_U32(ctx, 31, 0x4555DCu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x4555D4u, 0x4555DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4555DCu;
label_4555dc:
    // 0x4555dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4555dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4555e0:
    // 0x4555e0: 0x27a20f18  addiu       $v0, $sp, 0xF18
    ctx->pc = 0x4555e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_4555e4:
    // 0x4555e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4555e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4555e8:
    // 0x4555e8: 0x27a50f28  addiu       $a1, $sp, 0xF28
    ctx->pc = 0x4555e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_4555ec:
    // 0x4555ec: 0x27a60f78  addiu       $a2, $sp, 0xF78
    ctx->pc = 0x4555ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_4555f0:
    // 0x4555f0: 0xc061d44  jal         func_187510
label_4555f4:
    if (ctx->pc == 0x4555F4u) {
        ctx->pc = 0x4555F8u;
        goto label_4555f8;
    }
    ctx->pc = 0x4555F0u;
    SET_GPR_U32(ctx, 31, 0x4555F8u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x4555F0u, 0x4555F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4555F8u;
label_4555f8:
    // 0x4555f8: 0x27a40f18  addiu       $a0, $sp, 0xF18
    ctx->pc = 0x4555f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_4555fc:
    // 0x4555fc: 0xc041b38  jal         func_106CE0
label_455600:
    if (ctx->pc == 0x455600u) {
        ctx->pc = 0x455604u;
        goto label_455604;
    }
    ctx->pc = 0x4555FCu;
    SET_GPR_U32(ctx, 31, 0x455604u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x4555FCu, 0x455604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455604u;
label_455604:
    // 0x455604: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455608:
    // 0x455608: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x455608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_45560c:
    // 0x45560c: 0x24460024  addiu       $a2, $v0, 0x24
    ctx->pc = 0x45560cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_455610:
    // 0x455610: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x455610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_455614:
    // 0x455614: 0xc0bc5c6  jal         func_2F1718
label_455618:
    if (ctx->pc == 0x455618u) {
        ctx->pc = 0x45561Cu;
        goto label_45561c;
    }
    ctx->pc = 0x455614u;
    SET_GPR_U32(ctx, 31, 0x45561Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x455614u, 0x45561Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45561Cu;
label_45561c:
    // 0x45561c: 0x100001b8  b           . + 4 + (0x1B8 << 2)
label_455620:
    if (ctx->pc == 0x455620u) {
        ctx->pc = 0x455624u;
        goto label_455624;
    }
    ctx->pc = 0x45561Cu;
    {
        const bool branch_taken_0x45561c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45561c) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x455624u;
label_455624:
    // 0x455624: 0x27a40f28  addiu       $a0, $sp, 0xF28
    ctx->pc = 0x455624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_455628:
    // 0x455628: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x455628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45562c:
    // 0x45562c: 0xc119408  jal         func_465020
label_455630:
    if (ctx->pc == 0x455630u) {
        ctx->pc = 0x455634u;
        goto label_455634;
    }
    ctx->pc = 0x45562Cu;
    SET_GPR_U32(ctx, 31, 0x455634u);
    ctx->pc = 0x465020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465020u, 0x45562Cu, 0x455634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455634u;
label_455634:
    // 0x455634: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455638:
    // 0x455638: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x455638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45563c:
    // 0x45563c: 0x14a201b0  bne         $a1, $v0, . + 4 + (0x1B0 << 2)
label_455640:
    if (ctx->pc == 0x455640u) {
        ctx->pc = 0x455644u;
        goto label_455644;
    }
    ctx->pc = 0x45563Cu;
    {
        const bool branch_taken_0x45563c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x45563c) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x455644u;
label_455644:
    // 0x455644: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x455644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_455648:
    // 0x455648: 0xc119b68  jal         func_466DA0
label_45564c:
    if (ctx->pc == 0x45564Cu) {
        ctx->pc = 0x455650u;
        goto label_455650;
    }
    ctx->pc = 0x455648u;
    SET_GPR_U32(ctx, 31, 0x455650u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x455648u, 0x455650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455650u;
label_455650:
    // 0x455650: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x455650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_455654:
    // 0x455654: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455658:
    // 0x455658: 0xc0400e0  jal         func_100380
label_45565c:
    if (ctx->pc == 0x45565Cu) {
        ctx->pc = 0x455660u;
        goto label_455660;
    }
    ctx->pc = 0x455658u;
    SET_GPR_U32(ctx, 31, 0x455660u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x455658u, 0x455660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455660u;
label_455660:
    // 0x455660: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455664:
    // 0x455664: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x455664u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_455668:
    // 0x455668: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
label_45566c:
    if (ctx->pc == 0x45566Cu) {
        ctx->pc = 0x455670u;
        goto label_455670;
    }
    ctx->pc = 0x455668u;
    {
        const bool branch_taken_0x455668 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x455668) {
            ctx->pc = 0x455688u;
            goto label_455688;
        }
    }
    ctx->pc = 0x455670u;
label_455670:
    // 0x455670: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x455670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_455674:
    // 0x455674: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x455674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_455678:
    // 0x455678: 0xc1135f0  jal         func_44D7C0
label_45567c:
    if (ctx->pc == 0x45567Cu) {
        ctx->pc = 0x455680u;
        goto label_455680;
    }
    ctx->pc = 0x455678u;
    SET_GPR_U32(ctx, 31, 0x455680u);
    ctx->pc = 0x44D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D7C0u, 0x455678u, 0x455680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455680u;
label_455680:
    // 0x455680: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x455680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455684:
    // 0x455684: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x455684u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_455688:
    // 0x455688: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x455688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_45568c:
    // 0x45568c: 0x10282b  sltu        $a1, $zero, $s0
    ctx->pc = 0x45568cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_455690:
    // 0x455690: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x455690u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_455694:
    // 0x455694: 0x14c00035  bnez        $a2, . + 4 + (0x35 << 2)
label_455698:
    if (ctx->pc == 0x455698u) {
        ctx->pc = 0x45569Cu;
        goto label_45569c;
    }
    ctx->pc = 0x455694u;
    {
        const bool branch_taken_0x455694 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x455694) {
            ctx->pc = 0x45576Cu;
            goto label_45576c;
        }
    }
    ctx->pc = 0x45569Cu;
label_45569c:
    // 0x45569c: 0x8f82b05c  lw          $v0, -0x4FA4($gp)
    ctx->pc = 0x45569cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946908)));
label_4556a0:
    // 0x4556a0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_4556a4:
    if (ctx->pc == 0x4556A4u) {
        ctx->pc = 0x4556A8u;
        goto label_4556a8;
    }
    ctx->pc = 0x4556A0u;
    {
        const bool branch_taken_0x4556a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4556a0) {
            ctx->pc = 0x45576Cu;
            goto label_45576c;
        }
    }
    ctx->pc = 0x4556A8u;
label_4556a8:
    // 0x4556a8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4556a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4556ac:
    // 0x4556ac: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4556acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4556b0:
    // 0x4556b0: 0x27a20e88  addiu       $v0, $sp, 0xE88
    ctx->pc = 0x4556b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3720));
label_4556b4:
    // 0x4556b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4556b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4556b8:
    // 0x4556b8: 0xc115ee8  jal         func_457BA0
label_4556bc:
    if (ctx->pc == 0x4556BCu) {
        ctx->pc = 0x4556C0u;
        goto label_4556c0;
    }
    ctx->pc = 0x4556B8u;
    SET_GPR_U32(ctx, 31, 0x4556C0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4556B8u, 0x4556C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4556C0u;
label_4556c0:
    // 0x4556c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4556c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4556c4:
    // 0x4556c4: 0x10c00029  beqz        $a2, . + 4 + (0x29 << 2)
label_4556c8:
    if (ctx->pc == 0x4556C8u) {
        ctx->pc = 0x4556CCu;
        goto label_4556cc;
    }
    ctx->pc = 0x4556C4u;
    {
        const bool branch_taken_0x4556c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4556c4) {
            ctx->pc = 0x45576Cu;
            goto label_45576c;
        }
    }
    ctx->pc = 0x4556CCu;
label_4556cc:
    // 0x4556cc: 0x8fa70e90  lw          $a3, 0xE90($sp)
    ctx->pc = 0x4556ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3728)));
label_4556d0:
    // 0x4556d0: 0x10e00026  beqz        $a3, . + 4 + (0x26 << 2)
label_4556d4:
    if (ctx->pc == 0x4556D4u) {
        ctx->pc = 0x4556D8u;
        goto label_4556d8;
    }
    ctx->pc = 0x4556D0u;
    {
        const bool branch_taken_0x4556d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x4556d0) {
            ctx->pc = 0x45576Cu;
            goto label_45576c;
        }
    }
    ctx->pc = 0x4556D8u;
label_4556d8:
    // 0x4556d8: 0x27a80400  addiu       $t0, $sp, 0x400
    ctx->pc = 0x4556d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_4556dc:
    // 0x4556dc: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x4556dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4556e0:
    // 0x4556e0: 0x2409fffc  addiu       $t1, $zero, -0x4
    ctx->pc = 0x4556e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4556e4:
    // 0x4556e4: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4556e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4556e8:
    // 0x4556e8: 0x8fa20e8c  lw          $v0, 0xE8C($sp)
    ctx->pc = 0x4556e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3724)));
label_4556ec:
    // 0x4556ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4556ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4556f0:
    // 0x4556f0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4556f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4556f4:
    // 0x4556f4: 0x24e7de80  addiu       $a3, $a3, -0x2180
    ctx->pc = 0x4556f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
label_4556f8:
    // 0x4556f8: 0x2408036d  addiu       $t0, $zero, 0x36D
    ctx->pc = 0x4556f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 877));
label_4556fc:
    // 0x4556fc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x4556fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_455700:
    // 0x455700: 0x2442e240  addiu       $v0, $v0, -0x1DC0
    ctx->pc = 0x455700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959680));
label_455704:
    // 0x455704: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x455704u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455708:
    // 0x455708: 0xc113940  jal         func_44E500
label_45570c:
    if (ctx->pc == 0x45570Cu) {
        ctx->pc = 0x455710u;
        goto label_455710;
    }
    ctx->pc = 0x455708u;
    SET_GPR_U32(ctx, 31, 0x455710u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x455708u, 0x455710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455710u;
label_455710:
    // 0x455710: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455714:
    // 0x455714: 0x27a20400  addiu       $v0, $sp, 0x400
    ctx->pc = 0x455714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_455718:
    // 0x455718: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45571c:
    // 0x45571c: 0x2782b00c  addiu       $v0, $gp, -0x4FF4
    ctx->pc = 0x45571cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946828));
label_455720:
    // 0x455720: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455724:
    // 0x455724: 0xc115c24  jal         func_457090
label_455728:
    if (ctx->pc == 0x455728u) {
        ctx->pc = 0x45572Cu;
        goto label_45572c;
    }
    ctx->pc = 0x455724u;
    SET_GPR_U32(ctx, 31, 0x45572Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x455724u, 0x45572Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45572Cu;
label_45572c:
    // 0x45572c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x45572cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455730:
    // 0x455730: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x455730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_455734:
    // 0x455734: 0x8fa50e90  lw          $a1, 0xE90($sp)
    ctx->pc = 0x455734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3728)));
label_455738:
    // 0x455738: 0xa0f809  jalr        $a1
label_45573c:
    if (ctx->pc == 0x45573Cu) {
        ctx->pc = 0x455740u;
        goto label_455740;
    }
    ctx->pc = 0x455738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x455740u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x455738u, 0x455740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x455740u;
label_455740:
    // 0x455740: 0xaf82b05c  sw          $v0, -0x4FA4($gp)
    ctx->pc = 0x455740u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946908), GPR_U32(ctx, 2));
label_455744:
    // 0x455744: 0x8fa30400  lw          $v1, 0x400($sp)
    ctx->pc = 0x455744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
label_455748:
    // 0x455748: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_45574c:
    if (ctx->pc == 0x45574Cu) {
        ctx->pc = 0x455750u;
        goto label_455750;
    }
    ctx->pc = 0x455748u;
    {
        const bool branch_taken_0x455748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x455748) {
            ctx->pc = 0x455758u;
            goto label_455758;
        }
    }
    ctx->pc = 0x455750u;
label_455750:
    // 0x455750: 0xd  break       0
    ctx->pc = 0x455750u;
    runtime->handleBreak(rdram, ctx);
label_455754:
    // 0x455754: 0x0  nop
    ctx->pc = 0x455754u;
    // NOP
label_455758:
    // 0x455758: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x455758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_45575c:
    // 0x45575c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45575cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_455760:
    // 0x455760: 0xc11392c  jal         func_44E4B0
label_455764:
    if (ctx->pc == 0x455764u) {
        ctx->pc = 0x455768u;
        goto label_455768;
    }
    ctx->pc = 0x455760u;
    SET_GPR_U32(ctx, 31, 0x455768u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x455760u, 0x455768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455768u;
label_455768:
    // 0x455768: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x455768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45576c:
    // 0x45576c: 0x27a20f18  addiu       $v0, $sp, 0xF18
    ctx->pc = 0x45576cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_455770:
    // 0x455770: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455774:
    // 0x455774: 0x27a50f28  addiu       $a1, $sp, 0xF28
    ctx->pc = 0x455774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_455778:
    // 0x455778: 0x27a20f78  addiu       $v0, $sp, 0xF78
    ctx->pc = 0x455778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_45577c:
    // 0x45577c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x45577cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455780:
    // 0x455780: 0xc115800  jal         func_456000
label_455784:
    if (ctx->pc == 0x455784u) {
        ctx->pc = 0x455788u;
        goto label_455788;
    }
    ctx->pc = 0x455780u;
    SET_GPR_U32(ctx, 31, 0x455788u);
    ctx->pc = 0x456000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456000u, 0x455780u, 0x455788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455788u;
label_455788:
    // 0x455788: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x455788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45578c:
    // 0x45578c: 0x27a40f18  addiu       $a0, $sp, 0xF18
    ctx->pc = 0x45578cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_455790:
    // 0x455790: 0xc041b38  jal         func_106CE0
label_455794:
    if (ctx->pc == 0x455794u) {
        ctx->pc = 0x455798u;
        goto label_455798;
    }
    ctx->pc = 0x455790u;
    SET_GPR_U32(ctx, 31, 0x455798u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x455790u, 0x455798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455798u;
label_455798:
    // 0x455798: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x455798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_45579c:
    // 0x45579c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45579cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4557a0:
    // 0x4557a0: 0x2785b078  addiu       $a1, $gp, -0x4F88
    ctx->pc = 0x4557a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946936));
label_4557a4:
    // 0x4557a4: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x4557a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4557a8:
    // 0x4557a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4557a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4557ac:
    // 0x4557ac: 0xc0bc408  jal         func_2F1020
label_4557b0:
    if (ctx->pc == 0x4557B0u) {
        ctx->pc = 0x4557B4u;
        goto label_4557b4;
    }
    ctx->pc = 0x4557ACu;
    SET_GPR_U32(ctx, 31, 0x4557B4u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x4557ACu, 0x4557B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4557B4u;
label_4557b4:
    // 0x4557b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4557b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4557b8:
    // 0x4557b8: 0x10000151  b           . + 4 + (0x151 << 2)
label_4557bc:
    if (ctx->pc == 0x4557BCu) {
        ctx->pc = 0x4557C0u;
        goto label_4557c0;
    }
    ctx->pc = 0x4557B8u;
    {
        const bool branch_taken_0x4557b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4557b8) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x4557C0u;
label_4557c0:
    // 0x4557c0: 0x27a20f28  addiu       $v0, $sp, 0xF28
    ctx->pc = 0x4557c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_4557c4:
    // 0x4557c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4557c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4557c8:
    // 0x4557c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4557c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4557cc:
    // 0x4557cc: 0xc119408  jal         func_465020
label_4557d0:
    if (ctx->pc == 0x4557D0u) {
        ctx->pc = 0x4557D4u;
        goto label_4557d4;
    }
    ctx->pc = 0x4557CCu;
    SET_GPR_U32(ctx, 31, 0x4557D4u);
    ctx->pc = 0x465020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465020u, 0x4557CCu, 0x4557D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4557D4u;
label_4557d4:
    // 0x4557d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4557d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4557d8:
    // 0x4557d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4557d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4557dc:
    // 0x4557dc: 0x14820148  bne         $a0, $v0, . + 4 + (0x148 << 2)
label_4557e0:
    if (ctx->pc == 0x4557E0u) {
        ctx->pc = 0x4557E4u;
        goto label_4557e4;
    }
    ctx->pc = 0x4557DCu;
    {
        const bool branch_taken_0x4557dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4557dc) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x4557E4u;
label_4557e4:
    // 0x4557e4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x4557e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4557e8:
    // 0x4557e8: 0xc119b68  jal         func_466DA0
label_4557ec:
    if (ctx->pc == 0x4557ECu) {
        ctx->pc = 0x4557F0u;
        goto label_4557f0;
    }
    ctx->pc = 0x4557E8u;
    SET_GPR_U32(ctx, 31, 0x4557F0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x4557E8u, 0x4557F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4557F0u;
label_4557f0:
    // 0x4557f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4557f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4557f4:
    // 0x4557f4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x4557f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4557f8:
    // 0x4557f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4557f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4557fc:
    // 0x4557fc: 0xc0400e0  jal         func_100380
label_455800:
    if (ctx->pc == 0x455800u) {
        ctx->pc = 0x455804u;
        goto label_455804;
    }
    ctx->pc = 0x4557FCu;
    SET_GPR_U32(ctx, 31, 0x455804u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x4557FCu, 0x455804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455804u;
label_455804:
    // 0x455804: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455808:
    // 0x455808: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x455808u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_45580c:
    // 0x45580c: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
label_455810:
    if (ctx->pc == 0x455810u) {
        ctx->pc = 0x455814u;
        goto label_455814;
    }
    ctx->pc = 0x45580Cu;
    {
        const bool branch_taken_0x45580c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x45580c) {
            ctx->pc = 0x45582Cu;
            goto label_45582c;
        }
    }
    ctx->pc = 0x455814u;
label_455814:
    // 0x455814: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x455814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_455818:
    // 0x455818: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x455818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45581c:
    // 0x45581c: 0xc1135f0  jal         func_44D7C0
label_455820:
    if (ctx->pc == 0x455820u) {
        ctx->pc = 0x455824u;
        goto label_455824;
    }
    ctx->pc = 0x45581Cu;
    SET_GPR_U32(ctx, 31, 0x455824u);
    ctx->pc = 0x44D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D7C0u, 0x45581Cu, 0x455824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455824u;
label_455824:
    // 0x455824: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455828:
    // 0x455828: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x455828u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_45582c:
    // 0x45582c: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x45582cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_455830:
    // 0x455830: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x455830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_455834:
    // 0x455834: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x455834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_455838:
    // 0x455838: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_45583c:
    if (ctx->pc == 0x45583Cu) {
        ctx->pc = 0x455840u;
        goto label_455840;
    }
    ctx->pc = 0x455838u;
    {
        const bool branch_taken_0x455838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x455838) {
            ctx->pc = 0x45591Cu;
            goto label_45591c;
        }
    }
    ctx->pc = 0x455840u;
label_455840:
    // 0x455840: 0x8f84b060  lw          $a0, -0x4FA0($gp)
    ctx->pc = 0x455840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946912)));
label_455844:
    // 0x455844: 0x10800035  beqz        $a0, . + 4 + (0x35 << 2)
label_455848:
    if (ctx->pc == 0x455848u) {
        ctx->pc = 0x45584Cu;
        goto label_45584c;
    }
    ctx->pc = 0x455844u;
    {
        const bool branch_taken_0x455844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x455844) {
            ctx->pc = 0x45591Cu;
            goto label_45591c;
        }
    }
    ctx->pc = 0x45584Cu;
label_45584c:
    // 0x45584c: 0x8f85bf38  lw          $a1, -0x40C8($gp)
    ctx->pc = 0x45584cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_455850:
    // 0x455850: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x455850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_455854:
    // 0x455854: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x455854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_455858:
    // 0x455858: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x455858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_45585c:
    // 0x45585c: 0x27a20e78  addiu       $v0, $sp, 0xE78
    ctx->pc = 0x45585cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3704));
label_455860:
    // 0x455860: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x455860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455864:
    // 0x455864: 0xc115ee8  jal         func_457BA0
label_455868:
    if (ctx->pc == 0x455868u) {
        ctx->pc = 0x45586Cu;
        goto label_45586c;
    }
    ctx->pc = 0x455864u;
    SET_GPR_U32(ctx, 31, 0x45586Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x455864u, 0x45586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45586Cu;
label_45586c:
    // 0x45586c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x45586cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455870:
    // 0x455870: 0x10e0002a  beqz        $a3, . + 4 + (0x2A << 2)
label_455874:
    if (ctx->pc == 0x455874u) {
        ctx->pc = 0x455878u;
        goto label_455878;
    }
    ctx->pc = 0x455870u;
    {
        const bool branch_taken_0x455870 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x455870) {
            ctx->pc = 0x45591Cu;
            goto label_45591c;
        }
    }
    ctx->pc = 0x455878u;
label_455878:
    // 0x455878: 0x8fa20e80  lw          $v0, 0xE80($sp)
    ctx->pc = 0x455878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3712)));
label_45587c:
    // 0x45587c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_455880:
    if (ctx->pc == 0x455880u) {
        ctx->pc = 0x455884u;
        goto label_455884;
    }
    ctx->pc = 0x45587Cu;
    {
        const bool branch_taken_0x45587c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45587c) {
            ctx->pc = 0x45591Cu;
            goto label_45591c;
        }
    }
    ctx->pc = 0x455884u;
label_455884:
    // 0x455884: 0x27a902e0  addiu       $t1, $sp, 0x2E0
    ctx->pc = 0x455884u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_455888:
    // 0x455888: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x455888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_45588c:
    // 0x45588c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45588cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_455890:
    // 0x455890: 0x8fa20e7c  lw          $v0, 0xE7C($sp)
    ctx->pc = 0x455890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3708)));
label_455894:
    // 0x455894: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x455894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455898:
    // 0x455898: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x455898u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_45589c:
    // 0x45589c: 0x24e7de80  addiu       $a3, $a3, -0x2180
    ctx->pc = 0x45589cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
label_4558a0:
    // 0x4558a0: 0x24020381  addiu       $v0, $zero, 0x381
    ctx->pc = 0x4558a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 897));
label_4558a4:
    // 0x4558a4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4558a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4558a8:
    // 0x4558a8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4558a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4558ac:
    // 0x4558ac: 0x2529e240  addiu       $t1, $t1, -0x1DC0
    ctx->pc = 0x4558acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959680));
label_4558b0:
    // 0x4558b0: 0xc113940  jal         func_44E500
label_4558b4:
    if (ctx->pc == 0x4558B4u) {
        ctx->pc = 0x4558B8u;
        goto label_4558b8;
    }
    ctx->pc = 0x4558B0u;
    SET_GPR_U32(ctx, 31, 0x4558B8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4558B0u, 0x4558B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4558B8u;
label_4558b8:
    // 0x4558b8: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x4558b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_4558bc:
    // 0x4558bc: 0x2782b00c  addiu       $v0, $gp, -0x4FF4
    ctx->pc = 0x4558bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946828));
label_4558c0:
    // 0x4558c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4558c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4558c4:
    // 0x4558c4: 0xc115c24  jal         func_457090
label_4558c8:
    if (ctx->pc == 0x4558C8u) {
        ctx->pc = 0x4558CCu;
        goto label_4558cc;
    }
    ctx->pc = 0x4558C4u;
    SET_GPR_U32(ctx, 31, 0x4558CCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4558C4u, 0x4558CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4558CCu;
label_4558cc:
    // 0x4558cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4558ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4558d0:
    // 0x4558d0: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x4558d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_4558d4:
    // 0x4558d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4558d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4558d8:
    // 0x4558d8: 0x8fa20e80  lw          $v0, 0xE80($sp)
    ctx->pc = 0x4558d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3712)));
label_4558dc:
    // 0x4558dc: 0x40f809  jalr        $v0
label_4558e0:
    if (ctx->pc == 0x4558E0u) {
        ctx->pc = 0x4558E4u;
        goto label_4558e4;
    }
    ctx->pc = 0x4558DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4558E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4558DCu, 0x4558E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4558E4u;
label_4558e4:
    // 0x4558e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4558e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4558e8:
    // 0x4558e8: 0xaf84b060  sw          $a0, -0x4FA0($gp)
    ctx->pc = 0x4558e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946912), GPR_U32(ctx, 4));
label_4558ec:
    // 0x4558ec: 0x8fa502e0  lw          $a1, 0x2E0($sp)
    ctx->pc = 0x4558ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_4558f0:
    // 0x4558f0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_4558f4:
    if (ctx->pc == 0x4558F4u) {
        ctx->pc = 0x4558F8u;
        goto label_4558f8;
    }
    ctx->pc = 0x4558F0u;
    {
        const bool branch_taken_0x4558f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4558f0) {
            ctx->pc = 0x455900u;
            goto label_455900;
        }
    }
    ctx->pc = 0x4558F8u;
label_4558f8:
    // 0x4558f8: 0xd  break       0
    ctx->pc = 0x4558f8u;
    runtime->handleBreak(rdram, ctx);
label_4558fc:
    // 0x4558fc: 0x0  nop
    ctx->pc = 0x4558fcu;
    // NOP
label_455900:
    // 0x455900: 0x27a602e0  addiu       $a2, $sp, 0x2E0
    ctx->pc = 0x455900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_455904:
    // 0x455904: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x455904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_455908:
    // 0x455908: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x455908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45590c:
    // 0x45590c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x45590cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455910:
    // 0x455910: 0xc11392c  jal         func_44E4B0
label_455914:
    if (ctx->pc == 0x455914u) {
        ctx->pc = 0x455918u;
        goto label_455918;
    }
    ctx->pc = 0x455910u;
    SET_GPR_U32(ctx, 31, 0x455918u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x455910u, 0x455918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455918u;
label_455918:
    // 0x455918: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45591c:
    // 0x45591c: 0x27a50f18  addiu       $a1, $sp, 0xF18
    ctx->pc = 0x45591cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_455920:
    // 0x455920: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x455920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_455924:
    // 0x455924: 0x27a60f28  addiu       $a2, $sp, 0xF28
    ctx->pc = 0x455924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_455928:
    // 0x455928: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x455928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_45592c:
    // 0x45592c: 0x27a20f78  addiu       $v0, $sp, 0xF78
    ctx->pc = 0x45592cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_455930:
    // 0x455930: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x455930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455934:
    // 0x455934: 0xc115800  jal         func_456000
label_455938:
    if (ctx->pc == 0x455938u) {
        ctx->pc = 0x45593Cu;
        goto label_45593c;
    }
    ctx->pc = 0x455934u;
    SET_GPR_U32(ctx, 31, 0x45593Cu);
    ctx->pc = 0x456000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456000u, 0x455934u, 0x45593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45593Cu;
label_45593c:
    // 0x45593c: 0x27a40f18  addiu       $a0, $sp, 0xF18
    ctx->pc = 0x45593cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_455940:
    // 0x455940: 0xc041b38  jal         func_106CE0
label_455944:
    if (ctx->pc == 0x455944u) {
        ctx->pc = 0x455948u;
        goto label_455948;
    }
    ctx->pc = 0x455940u;
    SET_GPR_U32(ctx, 31, 0x455948u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x455940u, 0x455948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455948u;
label_455948:
    // 0x455948: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45594c:
    // 0x45594c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x45594cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_455950:
    // 0x455950: 0x24c70004  addiu       $a3, $a2, 0x4
    ctx->pc = 0x455950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_455954:
    // 0x455954: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x455954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_455958:
    // 0x455958: 0xc0bc5c6  jal         func_2F1718
label_45595c:
    if (ctx->pc == 0x45595Cu) {
        ctx->pc = 0x455960u;
        goto label_455960;
    }
    ctx->pc = 0x455958u;
    SET_GPR_U32(ctx, 31, 0x455960u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x455958u, 0x455960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455960u;
label_455960:
    // 0x455960: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x455960u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455964:
    // 0x455964: 0x27a90f18  addiu       $t1, $sp, 0xF18
    ctx->pc = 0x455964u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_455968:
    // 0x455968: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x455968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_45596c:
    // 0x45596c: 0x27a20f28  addiu       $v0, $sp, 0xF28
    ctx->pc = 0x45596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_455970:
    // 0x455970: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455974:
    // 0x455974: 0x27a20f78  addiu       $v0, $sp, 0xF78
    ctx->pc = 0x455974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_455978:
    // 0x455978: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x455978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45597c:
    // 0x45597c: 0xc061d44  jal         func_187510
label_455980:
    if (ctx->pc == 0x455980u) {
        ctx->pc = 0x455984u;
        goto label_455984;
    }
    ctx->pc = 0x45597Cu;
    SET_GPR_U32(ctx, 31, 0x455984u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x45597Cu, 0x455984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455984u;
label_455984:
    // 0x455984: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455988:
    // 0x455988: 0x27a20f18  addiu       $v0, $sp, 0xF18
    ctx->pc = 0x455988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_45598c:
    // 0x45598c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45598cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455990:
    // 0x455990: 0xc041b38  jal         func_106CE0
label_455994:
    if (ctx->pc == 0x455994u) {
        ctx->pc = 0x455998u;
        goto label_455998;
    }
    ctx->pc = 0x455990u;
    SET_GPR_U32(ctx, 31, 0x455998u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x455990u, 0x455998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455998u;
label_455998:
    // 0x455998: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45599c:
    // 0x45599c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x45599cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4559a0:
    // 0x4559a0: 0x2782b078  addiu       $v0, $gp, -0x4F88
    ctx->pc = 0x4559a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946936));
label_4559a4:
    // 0x4559a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4559a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4559a8:
    // 0x4559a8: 0x24660024  addiu       $a2, $v1, 0x24
    ctx->pc = 0x4559a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
label_4559ac:
    // 0x4559ac: 0xc0bc408  jal         func_2F1020
label_4559b0:
    if (ctx->pc == 0x4559B0u) {
        ctx->pc = 0x4559B4u;
        goto label_4559b4;
    }
    ctx->pc = 0x4559ACu;
    SET_GPR_U32(ctx, 31, 0x4559B4u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x4559ACu, 0x4559B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4559B4u;
label_4559b4:
    // 0x4559b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4559b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4559b8:
    // 0x4559b8: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_4559bc:
    if (ctx->pc == 0x4559BCu) {
        ctx->pc = 0x4559C0u;
        goto label_4559c0;
    }
    ctx->pc = 0x4559B8u;
    {
        const bool branch_taken_0x4559b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4559b8) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x4559C0u;
label_4559c0:
    // 0x4559c0: 0x27a50f28  addiu       $a1, $sp, 0xF28
    ctx->pc = 0x4559c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_4559c4:
    // 0x4559c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4559c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4559c8:
    // 0x4559c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4559c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4559cc:
    // 0x4559cc: 0xc1193e8  jal         func_464FA0
label_4559d0:
    if (ctx->pc == 0x4559D0u) {
        ctx->pc = 0x4559D4u;
        goto label_4559d4;
    }
    ctx->pc = 0x4559CCu;
    SET_GPR_U32(ctx, 31, 0x4559D4u);
    ctx->pc = 0x464FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464FA0u, 0x4559CCu, 0x4559D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4559D4u;
label_4559d4:
    // 0x4559d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4559d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4559d8:
    // 0x4559d8: 0x144400c9  bne         $v0, $a0, . + 4 + (0xC9 << 2)
label_4559dc:
    if (ctx->pc == 0x4559DCu) {
        ctx->pc = 0x4559E0u;
        goto label_4559e0;
    }
    ctx->pc = 0x4559D8u;
    {
        const bool branch_taken_0x4559d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4559d8) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x4559E0u;
label_4559e0:
    // 0x4559e0: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x4559e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4559e4:
    // 0x4559e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4559e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4559e8:
    // 0x4559e8: 0xc119b68  jal         func_466DA0
label_4559ec:
    if (ctx->pc == 0x4559ECu) {
        ctx->pc = 0x4559F0u;
        goto label_4559f0;
    }
    ctx->pc = 0x4559E8u;
    SET_GPR_U32(ctx, 31, 0x4559F0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x4559E8u, 0x4559F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4559F0u;
label_4559f0:
    // 0x4559f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4559f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4559f4:
    // 0x4559f4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x4559f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4559f8:
    // 0x4559f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4559f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4559fc:
    // 0x4559fc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4559fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_455a00:
    // 0x455a00: 0xc0400e0  jal         func_100380
label_455a04:
    if (ctx->pc == 0x455A04u) {
        ctx->pc = 0x455A08u;
        goto label_455a08;
    }
    ctx->pc = 0x455A00u;
    SET_GPR_U32(ctx, 31, 0x455A08u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x455A00u, 0x455A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455A08u;
label_455a08:
    // 0x455a08: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x455a08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455a0c:
    // 0x455a0c: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_455a10:
    if (ctx->pc == 0x455A10u) {
        ctx->pc = 0x455A14u;
        goto label_455a14;
    }
    ctx->pc = 0x455A0Cu;
    {
        const bool branch_taken_0x455a0c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x455a0c) {
            ctx->pc = 0x455A2Cu;
            goto label_455a2c;
        }
    }
    ctx->pc = 0x455A14u;
label_455a14:
    // 0x455a14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x455a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_455a18:
    // 0x455a18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x455a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_455a1c:
    // 0x455a1c: 0xc1135f0  jal         func_44D7C0
label_455a20:
    if (ctx->pc == 0x455A20u) {
        ctx->pc = 0x455A24u;
        goto label_455a24;
    }
    ctx->pc = 0x455A1Cu;
    SET_GPR_U32(ctx, 31, 0x455A24u);
    ctx->pc = 0x44D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D7C0u, 0x455A1Cu, 0x455A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455A24u;
label_455a24:
    // 0x455a24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455a28:
    // 0x455a28: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x455a28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_455a2c:
    // 0x455a2c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x455a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_455a30:
    // 0x455a30: 0x10282b  sltu        $a1, $zero, $s0
    ctx->pc = 0x455a30u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_455a34:
    // 0x455a34: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x455a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_455a38:
    // 0x455a38: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_455a3c:
    if (ctx->pc == 0x455A3Cu) {
        ctx->pc = 0x455A40u;
        goto label_455a40;
    }
    ctx->pc = 0x455A38u;
    {
        const bool branch_taken_0x455a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x455a38) {
            ctx->pc = 0x455B24u;
            goto label_455b24;
        }
    }
    ctx->pc = 0x455A40u;
label_455a40:
    // 0x455a40: 0x8f86b064  lw          $a2, -0x4F9C($gp)
    ctx->pc = 0x455a40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946916)));
label_455a44:
    // 0x455a44: 0x10c00037  beqz        $a2, . + 4 + (0x37 << 2)
label_455a48:
    if (ctx->pc == 0x455A48u) {
        ctx->pc = 0x455A4Cu;
        goto label_455a4c;
    }
    ctx->pc = 0x455A44u;
    {
        const bool branch_taken_0x455a44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x455a44) {
            ctx->pc = 0x455B24u;
            goto label_455b24;
        }
    }
    ctx->pc = 0x455A4Cu;
label_455a4c:
    // 0x455a4c: 0x8f82bf38  lw          $v0, -0x40C8($gp)
    ctx->pc = 0x455a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_455a50:
    // 0x455a50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455a54:
    // 0x455a54: 0x2408fffc  addiu       $t0, $zero, -0x4
    ctx->pc = 0x455a54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_455a58:
    // 0x455a58: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x455a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_455a5c:
    // 0x455a5c: 0x27a90e68  addiu       $t1, $sp, 0xE68
    ctx->pc = 0x455a5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 3688));
label_455a60:
    // 0x455a60: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x455a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_455a64:
    // 0x455a64: 0xc115ee8  jal         func_457BA0
label_455a68:
    if (ctx->pc == 0x455A68u) {
        ctx->pc = 0x455A6Cu;
        goto label_455a6c;
    }
    ctx->pc = 0x455A64u;
    SET_GPR_U32(ctx, 31, 0x455A6Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x455A64u, 0x455A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455A6Cu;
label_455a6c:
    // 0x455a6c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_455a70:
    if (ctx->pc == 0x455A70u) {
        ctx->pc = 0x455A74u;
        goto label_455a74;
    }
    ctx->pc = 0x455A6Cu;
    {
        const bool branch_taken_0x455a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x455a6c) {
            ctx->pc = 0x455B24u;
            goto label_455b24;
        }
    }
    ctx->pc = 0x455A74u;
label_455a74:
    // 0x455a74: 0x8fa40e70  lw          $a0, 0xE70($sp)
    ctx->pc = 0x455a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3696)));
label_455a78:
    // 0x455a78: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
label_455a7c:
    if (ctx->pc == 0x455A7Cu) {
        ctx->pc = 0x455A80u;
        goto label_455a80;
    }
    ctx->pc = 0x455A78u;
    {
        const bool branch_taken_0x455a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x455a78) {
            ctx->pc = 0x455B24u;
            goto label_455b24;
        }
    }
    ctx->pc = 0x455A80u;
label_455a80:
    // 0x455a80: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x455a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_455a84:
    // 0x455a84: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x455a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_455a88:
    // 0x455a88: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x455a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_455a8c:
    // 0x455a8c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x455a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_455a90:
    // 0x455a90: 0x8fa20e6c  lw          $v0, 0xE6C($sp)
    ctx->pc = 0x455a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3692)));
label_455a94:
    // 0x455a94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x455a94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455a98:
    // 0x455a98: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x455a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_455a9c:
    // 0x455a9c: 0x2442de80  addiu       $v0, $v0, -0x2180
    ctx->pc = 0x455a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958720));
label_455aa0:
    // 0x455aa0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x455aa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455aa4:
    // 0x455aa4: 0x24020392  addiu       $v0, $zero, 0x392
    ctx->pc = 0x455aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 914));
label_455aa8:
    // 0x455aa8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x455aa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455aac:
    // 0x455aac: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x455aacu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_455ab0:
    // 0x455ab0: 0x2529e240  addiu       $t1, $t1, -0x1DC0
    ctx->pc = 0x455ab0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959680));
label_455ab4:
    // 0x455ab4: 0xc113940  jal         func_44E500
label_455ab8:
    if (ctx->pc == 0x455AB8u) {
        ctx->pc = 0x455ABCu;
        goto label_455abc;
    }
    ctx->pc = 0x455AB4u;
    SET_GPR_U32(ctx, 31, 0x455ABCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x455AB4u, 0x455ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455ABCu;
label_455abc:
    // 0x455abc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455ac0:
    // 0x455ac0: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x455ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_455ac4:
    // 0x455ac4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x455ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_455ac8:
    // 0x455ac8: 0x2782b00c  addiu       $v0, $gp, -0x4FF4
    ctx->pc = 0x455ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946828));
label_455acc:
    // 0x455acc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455ad0:
    // 0x455ad0: 0xc115c24  jal         func_457090
label_455ad4:
    if (ctx->pc == 0x455AD4u) {
        ctx->pc = 0x455AD8u;
        goto label_455ad8;
    }
    ctx->pc = 0x455AD0u;
    SET_GPR_U32(ctx, 31, 0x455AD8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x455AD0u, 0x455AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455AD8u;
label_455ad8:
    // 0x455ad8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x455ad8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455adc:
    // 0x455adc: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x455adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_455ae0:
    // 0x455ae0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x455ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_455ae4:
    // 0x455ae4: 0x8fa20e70  lw          $v0, 0xE70($sp)
    ctx->pc = 0x455ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3696)));
label_455ae8:
    // 0x455ae8: 0x40f809  jalr        $v0
label_455aec:
    if (ctx->pc == 0x455AECu) {
        ctx->pc = 0x455AF0u;
        goto label_455af0;
    }
    ctx->pc = 0x455AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x455AF0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x455AE8u, 0x455AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x455AF0u;
label_455af0:
    // 0x455af0: 0xaf82b064  sw          $v0, -0x4F9C($gp)
    ctx->pc = 0x455af0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946916), GPR_U32(ctx, 2));
label_455af4:
    // 0x455af4: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x455af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_455af8:
    // 0x455af8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_455afc:
    if (ctx->pc == 0x455AFCu) {
        ctx->pc = 0x455B00u;
        goto label_455b00;
    }
    ctx->pc = 0x455AF8u;
    {
        const bool branch_taken_0x455af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x455af8) {
            ctx->pc = 0x455B08u;
            goto label_455b08;
        }
    }
    ctx->pc = 0x455B00u;
label_455b00:
    // 0x455b00: 0xd  break       0
    ctx->pc = 0x455b00u;
    runtime->handleBreak(rdram, ctx);
label_455b04:
    // 0x455b04: 0x0  nop
    ctx->pc = 0x455b04u;
    // NOP
label_455b08:
    // 0x455b08: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x455b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_455b0c:
    // 0x455b0c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x455b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_455b10:
    // 0x455b10: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x455b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_455b14:
    // 0x455b14: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x455b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_455b18:
    // 0x455b18: 0xc11392c  jal         func_44E4B0
label_455b1c:
    if (ctx->pc == 0x455B1Cu) {
        ctx->pc = 0x455B20u;
        goto label_455b20;
    }
    ctx->pc = 0x455B18u;
    SET_GPR_U32(ctx, 31, 0x455B20u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x455B18u, 0x455B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455B20u;
label_455b20:
    // 0x455b20: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x455b20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455b24:
    // 0x455b24: 0x27a80f18  addiu       $t0, $sp, 0xF18
    ctx->pc = 0x455b24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_455b28:
    // 0x455b28: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x455b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_455b2c:
    // 0x455b2c: 0x27a90f28  addiu       $t1, $sp, 0xF28
    ctx->pc = 0x455b2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_455b30:
    // 0x455b30: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x455b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_455b34:
    // 0x455b34: 0x27a20f78  addiu       $v0, $sp, 0xF78
    ctx->pc = 0x455b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_455b38:
    // 0x455b38: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x455b38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455b3c:
    // 0x455b3c: 0xc061d44  jal         func_187510
label_455b40:
    if (ctx->pc == 0x455B40u) {
        ctx->pc = 0x455B44u;
        goto label_455b44;
    }
    ctx->pc = 0x455B3Cu;
    SET_GPR_U32(ctx, 31, 0x455B44u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x455B3Cu, 0x455B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455B44u;
label_455b44:
    // 0x455b44: 0x27a50f18  addiu       $a1, $sp, 0xF18
    ctx->pc = 0x455b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_455b48:
    // 0x455b48: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x455b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_455b4c:
    // 0x455b4c: 0xc041b38  jal         func_106CE0
label_455b50:
    if (ctx->pc == 0x455B50u) {
        ctx->pc = 0x455B54u;
        goto label_455b54;
    }
    ctx->pc = 0x455B4Cu;
    SET_GPR_U32(ctx, 31, 0x455B54u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x455B4Cu, 0x455B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455B54u;
label_455b54:
    // 0x455b54: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x455b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_455b58:
    // 0x455b58: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x455b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_455b5c:
    // 0x455b5c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x455b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_455b60:
    // 0x455b60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455b64:
    // 0x455b64: 0xc0bc5c6  jal         func_2F1718
label_455b68:
    if (ctx->pc == 0x455B68u) {
        ctx->pc = 0x455B6Cu;
        goto label_455b6c;
    }
    ctx->pc = 0x455B64u;
    SET_GPR_U32(ctx, 31, 0x455B6Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x455B64u, 0x455B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455B6Cu;
label_455b6c:
    // 0x455b6c: 0x10000064  b           . + 4 + (0x64 << 2)
label_455b70:
    if (ctx->pc == 0x455B70u) {
        ctx->pc = 0x455B74u;
        goto label_455b74;
    }
    ctx->pc = 0x455B6Cu;
    {
        const bool branch_taken_0x455b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x455b6c) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x455B74u;
label_455b74:
    // 0x455b74: 0x27a40f28  addiu       $a0, $sp, 0xF28
    ctx->pc = 0x455b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_455b78:
    // 0x455b78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x455b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_455b7c:
    // 0x455b7c: 0xc1193e8  jal         func_464FA0
label_455b80:
    if (ctx->pc == 0x455B80u) {
        ctx->pc = 0x455B84u;
        goto label_455b84;
    }
    ctx->pc = 0x455B7Cu;
    SET_GPR_U32(ctx, 31, 0x455B84u);
    ctx->pc = 0x464FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464FA0u, 0x455B7Cu, 0x455B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455B84u;
label_455b84:
    // 0x455b84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x455b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_455b88:
    // 0x455b88: 0x1445005d  bne         $v0, $a1, . + 4 + (0x5D << 2)
label_455b8c:
    if (ctx->pc == 0x455B8Cu) {
        ctx->pc = 0x455B90u;
        goto label_455b90;
    }
    ctx->pc = 0x455B88u;
    {
        const bool branch_taken_0x455b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x455b88) {
            ctx->pc = 0x455D00u;
            goto label_455d00;
        }
    }
    ctx->pc = 0x455B90u;
label_455b90:
    // 0x455b90: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x455b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_455b94:
    // 0x455b94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455b98:
    // 0x455b98: 0xc119b68  jal         func_466DA0
label_455b9c:
    if (ctx->pc == 0x455B9Cu) {
        ctx->pc = 0x455BA0u;
        goto label_455ba0;
    }
    ctx->pc = 0x455B98u;
    SET_GPR_U32(ctx, 31, 0x455BA0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x455B98u, 0x455BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455BA0u;
label_455ba0:
    // 0x455ba0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455ba4:
    // 0x455ba4: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x455ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_455ba8:
    // 0x455ba8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x455ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_455bac:
    // 0x455bac: 0xc0400e0  jal         func_100380
label_455bb0:
    if (ctx->pc == 0x455BB0u) {
        ctx->pc = 0x455BB4u;
        goto label_455bb4;
    }
    ctx->pc = 0x455BACu;
    SET_GPR_U32(ctx, 31, 0x455BB4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x455BACu, 0x455BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455BB4u;
label_455bb4:
    // 0x455bb4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x455bb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455bb8:
    // 0x455bb8: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_455bbc:
    if (ctx->pc == 0x455BBCu) {
        ctx->pc = 0x455BC0u;
        goto label_455bc0;
    }
    ctx->pc = 0x455BB8u;
    {
        const bool branch_taken_0x455bb8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x455bb8) {
            ctx->pc = 0x455BD8u;
            goto label_455bd8;
        }
    }
    ctx->pc = 0x455BC0u;
label_455bc0:
    // 0x455bc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x455bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_455bc4:
    // 0x455bc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x455bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_455bc8:
    // 0x455bc8: 0xc1135f0  jal         func_44D7C0
label_455bcc:
    if (ctx->pc == 0x455BCCu) {
        ctx->pc = 0x455BD0u;
        goto label_455bd0;
    }
    ctx->pc = 0x455BC8u;
    SET_GPR_U32(ctx, 31, 0x455BD0u);
    ctx->pc = 0x44D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D7C0u, 0x455BC8u, 0x455BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455BD0u;
label_455bd0:
    // 0x455bd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455bd4:
    // 0x455bd4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x455bd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_455bd8:
    // 0x455bd8: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x455bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_455bdc:
    // 0x455bdc: 0x10982b  sltu        $s3, $zero, $s0
    ctx->pc = 0x455bdcu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_455be0:
    // 0x455be0: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x455be0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_455be4:
    // 0x455be4: 0x14a00036  bnez        $a1, . + 4 + (0x36 << 2)
label_455be8:
    if (ctx->pc == 0x455BE8u) {
        ctx->pc = 0x455BECu;
        goto label_455bec;
    }
    ctx->pc = 0x455BE4u;
    {
        const bool branch_taken_0x455be4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x455be4) {
            ctx->pc = 0x455CC0u;
            goto label_455cc0;
        }
    }
    ctx->pc = 0x455BECu;
label_455bec:
    // 0x455bec: 0x8f86b068  lw          $a2, -0x4F98($gp)
    ctx->pc = 0x455becu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946920)));
label_455bf0:
    // 0x455bf0: 0x10c00033  beqz        $a2, . + 4 + (0x33 << 2)
label_455bf4:
    if (ctx->pc == 0x455BF4u) {
        ctx->pc = 0x455BF8u;
        goto label_455bf8;
    }
    ctx->pc = 0x455BF0u;
    {
        const bool branch_taken_0x455bf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x455bf0) {
            ctx->pc = 0x455CC0u;
            goto label_455cc0;
        }
    }
    ctx->pc = 0x455BF8u;
label_455bf8:
    // 0x455bf8: 0x8f86bf38  lw          $a2, -0x40C8($gp)
    ctx->pc = 0x455bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_455bfc:
    // 0x455bfc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x455bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_455c00:
    // 0x455c00: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x455c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_455c04:
    // 0x455c04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455c08:
    // 0x455c08: 0x27a60e58  addiu       $a2, $sp, 0xE58
    ctx->pc = 0x455c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3672));
label_455c0c:
    // 0x455c0c: 0xc115ee8  jal         func_457BA0
label_455c10:
    if (ctx->pc == 0x455C10u) {
        ctx->pc = 0x455C14u;
        goto label_455c14;
    }
    ctx->pc = 0x455C0Cu;
    SET_GPR_U32(ctx, 31, 0x455C14u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x455C0Cu, 0x455C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455C14u;
label_455c14:
    // 0x455c14: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_455c18:
    if (ctx->pc == 0x455C18u) {
        ctx->pc = 0x455C1Cu;
        goto label_455c1c;
    }
    ctx->pc = 0x455C14u;
    {
        const bool branch_taken_0x455c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x455c14) {
            ctx->pc = 0x455CC0u;
            goto label_455cc0;
        }
    }
    ctx->pc = 0x455C1Cu;
label_455c1c:
    // 0x455c1c: 0x8fa40e60  lw          $a0, 0xE60($sp)
    ctx->pc = 0x455c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3680)));
label_455c20:
    // 0x455c20: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
label_455c24:
    if (ctx->pc == 0x455C24u) {
        ctx->pc = 0x455C28u;
        goto label_455c28;
    }
    ctx->pc = 0x455C20u;
    {
        const bool branch_taken_0x455c20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x455c20) {
            ctx->pc = 0x455CC0u;
            goto label_455cc0;
        }
    }
    ctx->pc = 0x455C28u;
label_455c28:
    // 0x455c28: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x455c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_455c2c:
    // 0x455c2c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x455c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_455c30:
    // 0x455c30: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x455c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_455c34:
    // 0x455c34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455c38:
    // 0x455c38: 0x8fa20e5c  lw          $v0, 0xE5C($sp)
    ctx->pc = 0x455c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3676)));
label_455c3c:
    // 0x455c3c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x455c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455c40:
    // 0x455c40: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x455c40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_455c44:
    // 0x455c44: 0x24e7de80  addiu       $a3, $a3, -0x2180
    ctx->pc = 0x455c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
label_455c48:
    // 0x455c48: 0x2408039e  addiu       $t0, $zero, 0x39E
    ctx->pc = 0x455c48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 926));
label_455c4c:
    // 0x455c4c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x455c4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_455c50:
    // 0x455c50: 0x2529e240  addiu       $t1, $t1, -0x1DC0
    ctx->pc = 0x455c50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959680));
label_455c54:
    // 0x455c54: 0xc113940  jal         func_44E500
label_455c58:
    if (ctx->pc == 0x455C58u) {
        ctx->pc = 0x455C5Cu;
        goto label_455c5c;
    }
    ctx->pc = 0x455C54u;
    SET_GPR_U32(ctx, 31, 0x455C5Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x455C54u, 0x455C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455C5Cu;
label_455c5c:
    // 0x455c5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455c60:
    // 0x455c60: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x455c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_455c64:
    // 0x455c64: 0x2782b00c  addiu       $v0, $gp, -0x4FF4
    ctx->pc = 0x455c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946828));
label_455c68:
    // 0x455c68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455c6c:
    // 0x455c6c: 0xc115c24  jal         func_457090
label_455c70:
    if (ctx->pc == 0x455C70u) {
        ctx->pc = 0x455C74u;
        goto label_455c74;
    }
    ctx->pc = 0x455C6Cu;
    SET_GPR_U32(ctx, 31, 0x455C74u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x455C6Cu, 0x455C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455C74u;
label_455c74:
    // 0x455c74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455c78:
    // 0x455c78: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x455c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_455c7c:
    // 0x455c7c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x455c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_455c80:
    // 0x455c80: 0x8fa50e60  lw          $a1, 0xE60($sp)
    ctx->pc = 0x455c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3680)));
label_455c84:
    // 0x455c84: 0xa0f809  jalr        $a1
label_455c88:
    if (ctx->pc == 0x455C88u) {
        ctx->pc = 0x455C8Cu;
        goto label_455c8c;
    }
    ctx->pc = 0x455C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x455C8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x455C84u, 0x455C8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x455C8Cu;
label_455c8c:
    // 0x455c8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x455c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455c90:
    // 0x455c90: 0xaf86b068  sw          $a2, -0x4F98($gp)
    ctx->pc = 0x455c90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946920), GPR_U32(ctx, 6));
label_455c94:
    // 0x455c94: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x455c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_455c98:
    // 0x455c98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_455c9c:
    if (ctx->pc == 0x455C9Cu) {
        ctx->pc = 0x455CA0u;
        goto label_455ca0;
    }
    ctx->pc = 0x455C98u;
    {
        const bool branch_taken_0x455c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x455c98) {
            ctx->pc = 0x455CA8u;
            goto label_455ca8;
        }
    }
    ctx->pc = 0x455CA0u;
label_455ca0:
    // 0x455ca0: 0xd  break       0
    ctx->pc = 0x455ca0u;
    runtime->handleBreak(rdram, ctx);
label_455ca4:
    // 0x455ca4: 0x0  nop
    ctx->pc = 0x455ca4u;
    // NOP
label_455ca8:
    // 0x455ca8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x455ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_455cac:
    // 0x455cac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x455cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_455cb0:
    // 0x455cb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455cb4:
    // 0x455cb4: 0xc11392c  jal         func_44E4B0
label_455cb8:
    if (ctx->pc == 0x455CB8u) {
        ctx->pc = 0x455CBCu;
        goto label_455cbc;
    }
    ctx->pc = 0x455CB4u;
    SET_GPR_U32(ctx, 31, 0x455CBCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x455CB4u, 0x455CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455CBCu;
label_455cbc:
    // 0x455cbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455cc0:
    // 0x455cc0: 0x27a20f18  addiu       $v0, $sp, 0xF18
    ctx->pc = 0x455cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_455cc4:
    // 0x455cc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455cc8:
    // 0x455cc8: 0x27a50f28  addiu       $a1, $sp, 0xF28
    ctx->pc = 0x455cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_455ccc:
    // 0x455ccc: 0x27a60f78  addiu       $a2, $sp, 0xF78
    ctx->pc = 0x455cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
label_455cd0:
    // 0x455cd0: 0xc061d44  jal         func_187510
label_455cd4:
    if (ctx->pc == 0x455CD4u) {
        ctx->pc = 0x455CD8u;
        goto label_455cd8;
    }
    ctx->pc = 0x455CD0u;
    SET_GPR_U32(ctx, 31, 0x455CD8u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x455CD0u, 0x455CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455CD8u;
label_455cd8:
    // 0x455cd8: 0x27a20f18  addiu       $v0, $sp, 0xF18
    ctx->pc = 0x455cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_455cdc:
    // 0x455cdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455ce0:
    // 0x455ce0: 0xc041b38  jal         func_106CE0
label_455ce4:
    if (ctx->pc == 0x455CE4u) {
        ctx->pc = 0x455CE8u;
        goto label_455ce8;
    }
    ctx->pc = 0x455CE0u;
    SET_GPR_U32(ctx, 31, 0x455CE8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x455CE0u, 0x455CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455CE8u;
label_455ce8:
    // 0x455ce8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455cec:
    // 0x455cec: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x455cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_455cf0:
    // 0x455cf0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x455cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_455cf4:
    // 0x455cf4: 0xc0bc5c6  jal         func_2F1718
label_455cf8:
    if (ctx->pc == 0x455CF8u) {
        ctx->pc = 0x455CFCu;
        goto label_455cfc;
    }
    ctx->pc = 0x455CF4u;
    SET_GPR_U32(ctx, 31, 0x455CFCu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x455CF4u, 0x455CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455CFCu;
label_455cfc:
    // 0x455cfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455d00:
    // 0x455d00: 0xafb00f50  sw          $s0, 0xF50($sp)
    ctx->pc = 0x455d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3920), GPR_U32(ctx, 16));
label_455d04:
    // 0x455d04: 0x27a50f18  addiu       $a1, $sp, 0xF18
    ctx->pc = 0x455d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3864));
label_455d08:
    // 0x455d08: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x455d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_455d0c:
    // 0x455d0c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x455d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_455d10:
    // 0x455d10: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x455d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_455d14:
    // 0x455d14: 0xc0402d4  jal         func_100B50
label_455d18:
    if (ctx->pc == 0x455D18u) {
        ctx->pc = 0x455D1Cu;
        goto label_455d1c;
    }
    ctx->pc = 0x455D14u;
    SET_GPR_U32(ctx, 31, 0x455D1Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x455D14u, 0x455D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455D1Cu;
label_455d1c:
    // 0x455d1c: 0x27a20f28  addiu       $v0, $sp, 0xF28
    ctx->pc = 0x455d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_455d20:
    // 0x455d20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455d24:
    // 0x455d24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x455d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_455d28:
    // 0x455d28: 0xc0402d4  jal         func_100B50
label_455d2c:
    if (ctx->pc == 0x455D2Cu) {
        ctx->pc = 0x455D30u;
        goto label_455d30;
    }
    ctx->pc = 0x455D28u;
    SET_GPR_U32(ctx, 31, 0x455D30u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x455D28u, 0x455D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x455D30u;
label_455d30:
    // 0x455d30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x455d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455d34:
    // 0x455d34: 0x8fa60f50  lw          $a2, 0xF50($sp)
    ctx->pc = 0x455d34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3920)));
label_455d38:
    // 0x455d38: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x455d38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_455d3c:
    // 0x455d3c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x455d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_455d40:
    // 0x455d40: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x455d40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_455d44:
    // 0x455d44: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x455d44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_455d48:
    // 0x455d48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x455d48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_455d4c:
    // 0x455d4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x455d4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_455d50:
    // 0x455d50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x455d50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_455d54:
    // 0x455d54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x455d54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_455d58:
    // 0x455d58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x455d58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_455d5c:
    // 0x455d5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x455d5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_455d60:
    // 0x455d60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x455d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_455d64:
    // 0x455d64: 0x27bd0fa0  addiu       $sp, $sp, 0xFA0
    ctx->pc = 0x455d64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4000));
label_455d68:
    // 0x455d68: 0x3e00008  jr          $ra
label_455d6c:
    if (ctx->pc == 0x455D6Cu) {
        ctx->pc = 0x455D70u;
        goto label_fallthrough_0x455d68;
    }
    ctx->pc = 0x455D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x455D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x455d68:
    ctx->pc = 0x455D70u;
}
