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

// Function: sub_00317120
// Address: 0x317120 - 0x3178d8
void sub_00317120_0x317120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317120_0x317120");
#endif

    switch (ctx->pc) {
        case 0x317120u: goto label_317120;
        case 0x317124u: goto label_317124;
        case 0x317128u: goto label_317128;
        case 0x31712cu: goto label_31712c;
        case 0x317130u: goto label_317130;
        case 0x317134u: goto label_317134;
        case 0x317138u: goto label_317138;
        case 0x31713cu: goto label_31713c;
        case 0x317140u: goto label_317140;
        case 0x317144u: goto label_317144;
        case 0x317148u: goto label_317148;
        case 0x31714cu: goto label_31714c;
        case 0x317150u: goto label_317150;
        case 0x317154u: goto label_317154;
        case 0x317158u: goto label_317158;
        case 0x31715cu: goto label_31715c;
        case 0x317160u: goto label_317160;
        case 0x317164u: goto label_317164;
        case 0x317168u: goto label_317168;
        case 0x31716cu: goto label_31716c;
        case 0x317170u: goto label_317170;
        case 0x317174u: goto label_317174;
        case 0x317178u: goto label_317178;
        case 0x31717cu: goto label_31717c;
        case 0x317180u: goto label_317180;
        case 0x317184u: goto label_317184;
        case 0x317188u: goto label_317188;
        case 0x31718cu: goto label_31718c;
        case 0x317190u: goto label_317190;
        case 0x317194u: goto label_317194;
        case 0x317198u: goto label_317198;
        case 0x31719cu: goto label_31719c;
        case 0x3171a0u: goto label_3171a0;
        case 0x3171a4u: goto label_3171a4;
        case 0x3171a8u: goto label_3171a8;
        case 0x3171acu: goto label_3171ac;
        case 0x3171b0u: goto label_3171b0;
        case 0x3171b4u: goto label_3171b4;
        case 0x3171b8u: goto label_3171b8;
        case 0x3171bcu: goto label_3171bc;
        case 0x3171c0u: goto label_3171c0;
        case 0x3171c4u: goto label_3171c4;
        case 0x3171c8u: goto label_3171c8;
        case 0x3171ccu: goto label_3171cc;
        case 0x3171d0u: goto label_3171d0;
        case 0x3171d4u: goto label_3171d4;
        case 0x3171d8u: goto label_3171d8;
        case 0x3171dcu: goto label_3171dc;
        case 0x3171e0u: goto label_3171e0;
        case 0x3171e4u: goto label_3171e4;
        case 0x3171e8u: goto label_3171e8;
        case 0x3171ecu: goto label_3171ec;
        case 0x3171f0u: goto label_3171f0;
        case 0x3171f4u: goto label_3171f4;
        case 0x3171f8u: goto label_3171f8;
        case 0x3171fcu: goto label_3171fc;
        case 0x317200u: goto label_317200;
        case 0x317204u: goto label_317204;
        case 0x317208u: goto label_317208;
        case 0x31720cu: goto label_31720c;
        case 0x317210u: goto label_317210;
        case 0x317214u: goto label_317214;
        case 0x317218u: goto label_317218;
        case 0x31721cu: goto label_31721c;
        case 0x317220u: goto label_317220;
        case 0x317224u: goto label_317224;
        case 0x317228u: goto label_317228;
        case 0x31722cu: goto label_31722c;
        case 0x317230u: goto label_317230;
        case 0x317234u: goto label_317234;
        case 0x317238u: goto label_317238;
        case 0x31723cu: goto label_31723c;
        case 0x317240u: goto label_317240;
        case 0x317244u: goto label_317244;
        case 0x317248u: goto label_317248;
        case 0x31724cu: goto label_31724c;
        case 0x317250u: goto label_317250;
        case 0x317254u: goto label_317254;
        case 0x317258u: goto label_317258;
        case 0x31725cu: goto label_31725c;
        case 0x317260u: goto label_317260;
        case 0x317264u: goto label_317264;
        case 0x317268u: goto label_317268;
        case 0x31726cu: goto label_31726c;
        case 0x317270u: goto label_317270;
        case 0x317274u: goto label_317274;
        case 0x317278u: goto label_317278;
        case 0x31727cu: goto label_31727c;
        case 0x317280u: goto label_317280;
        case 0x317284u: goto label_317284;
        case 0x317288u: goto label_317288;
        case 0x31728cu: goto label_31728c;
        case 0x317290u: goto label_317290;
        case 0x317294u: goto label_317294;
        case 0x317298u: goto label_317298;
        case 0x31729cu: goto label_31729c;
        case 0x3172a0u: goto label_3172a0;
        case 0x3172a4u: goto label_3172a4;
        case 0x3172a8u: goto label_3172a8;
        case 0x3172acu: goto label_3172ac;
        case 0x3172b0u: goto label_3172b0;
        case 0x3172b4u: goto label_3172b4;
        case 0x3172b8u: goto label_3172b8;
        case 0x3172bcu: goto label_3172bc;
        case 0x3172c0u: goto label_3172c0;
        case 0x3172c4u: goto label_3172c4;
        case 0x3172c8u: goto label_3172c8;
        case 0x3172ccu: goto label_3172cc;
        case 0x3172d0u: goto label_3172d0;
        case 0x3172d4u: goto label_3172d4;
        case 0x3172d8u: goto label_3172d8;
        case 0x3172dcu: goto label_3172dc;
        case 0x3172e0u: goto label_3172e0;
        case 0x3172e4u: goto label_3172e4;
        case 0x3172e8u: goto label_3172e8;
        case 0x3172ecu: goto label_3172ec;
        case 0x3172f0u: goto label_3172f0;
        case 0x3172f4u: goto label_3172f4;
        case 0x3172f8u: goto label_3172f8;
        case 0x3172fcu: goto label_3172fc;
        case 0x317300u: goto label_317300;
        case 0x317304u: goto label_317304;
        case 0x317308u: goto label_317308;
        case 0x31730cu: goto label_31730c;
        case 0x317310u: goto label_317310;
        case 0x317314u: goto label_317314;
        case 0x317318u: goto label_317318;
        case 0x31731cu: goto label_31731c;
        case 0x317320u: goto label_317320;
        case 0x317324u: goto label_317324;
        case 0x317328u: goto label_317328;
        case 0x31732cu: goto label_31732c;
        case 0x317330u: goto label_317330;
        case 0x317334u: goto label_317334;
        case 0x317338u: goto label_317338;
        case 0x31733cu: goto label_31733c;
        case 0x317340u: goto label_317340;
        case 0x317344u: goto label_317344;
        case 0x317348u: goto label_317348;
        case 0x31734cu: goto label_31734c;
        case 0x317350u: goto label_317350;
        case 0x317354u: goto label_317354;
        case 0x317358u: goto label_317358;
        case 0x31735cu: goto label_31735c;
        case 0x317360u: goto label_317360;
        case 0x317364u: goto label_317364;
        case 0x317368u: goto label_317368;
        case 0x31736cu: goto label_31736c;
        case 0x317370u: goto label_317370;
        case 0x317374u: goto label_317374;
        case 0x317378u: goto label_317378;
        case 0x31737cu: goto label_31737c;
        case 0x317380u: goto label_317380;
        case 0x317384u: goto label_317384;
        case 0x317388u: goto label_317388;
        case 0x31738cu: goto label_31738c;
        case 0x317390u: goto label_317390;
        case 0x317394u: goto label_317394;
        case 0x317398u: goto label_317398;
        case 0x31739cu: goto label_31739c;
        case 0x3173a0u: goto label_3173a0;
        case 0x3173a4u: goto label_3173a4;
        case 0x3173a8u: goto label_3173a8;
        case 0x3173acu: goto label_3173ac;
        case 0x3173b0u: goto label_3173b0;
        case 0x3173b4u: goto label_3173b4;
        case 0x3173b8u: goto label_3173b8;
        case 0x3173bcu: goto label_3173bc;
        case 0x3173c0u: goto label_3173c0;
        case 0x3173c4u: goto label_3173c4;
        case 0x3173c8u: goto label_3173c8;
        case 0x3173ccu: goto label_3173cc;
        case 0x3173d0u: goto label_3173d0;
        case 0x3173d4u: goto label_3173d4;
        case 0x3173d8u: goto label_3173d8;
        case 0x3173dcu: goto label_3173dc;
        case 0x3173e0u: goto label_3173e0;
        case 0x3173e4u: goto label_3173e4;
        case 0x3173e8u: goto label_3173e8;
        case 0x3173ecu: goto label_3173ec;
        case 0x3173f0u: goto label_3173f0;
        case 0x3173f4u: goto label_3173f4;
        case 0x3173f8u: goto label_3173f8;
        case 0x3173fcu: goto label_3173fc;
        case 0x317400u: goto label_317400;
        case 0x317404u: goto label_317404;
        case 0x317408u: goto label_317408;
        case 0x31740cu: goto label_31740c;
        case 0x317410u: goto label_317410;
        case 0x317414u: goto label_317414;
        case 0x317418u: goto label_317418;
        case 0x31741cu: goto label_31741c;
        case 0x317420u: goto label_317420;
        case 0x317424u: goto label_317424;
        case 0x317428u: goto label_317428;
        case 0x31742cu: goto label_31742c;
        case 0x317430u: goto label_317430;
        case 0x317434u: goto label_317434;
        case 0x317438u: goto label_317438;
        case 0x31743cu: goto label_31743c;
        case 0x317440u: goto label_317440;
        case 0x317444u: goto label_317444;
        case 0x317448u: goto label_317448;
        case 0x31744cu: goto label_31744c;
        case 0x317450u: goto label_317450;
        case 0x317454u: goto label_317454;
        case 0x317458u: goto label_317458;
        case 0x31745cu: goto label_31745c;
        case 0x317460u: goto label_317460;
        case 0x317464u: goto label_317464;
        case 0x317468u: goto label_317468;
        case 0x31746cu: goto label_31746c;
        case 0x317470u: goto label_317470;
        case 0x317474u: goto label_317474;
        case 0x317478u: goto label_317478;
        case 0x31747cu: goto label_31747c;
        case 0x317480u: goto label_317480;
        case 0x317484u: goto label_317484;
        case 0x317488u: goto label_317488;
        case 0x31748cu: goto label_31748c;
        case 0x317490u: goto label_317490;
        case 0x317494u: goto label_317494;
        case 0x317498u: goto label_317498;
        case 0x31749cu: goto label_31749c;
        case 0x3174a0u: goto label_3174a0;
        case 0x3174a4u: goto label_3174a4;
        case 0x3174a8u: goto label_3174a8;
        case 0x3174acu: goto label_3174ac;
        case 0x3174b0u: goto label_3174b0;
        case 0x3174b4u: goto label_3174b4;
        case 0x3174b8u: goto label_3174b8;
        case 0x3174bcu: goto label_3174bc;
        case 0x3174c0u: goto label_3174c0;
        case 0x3174c4u: goto label_3174c4;
        case 0x3174c8u: goto label_3174c8;
        case 0x3174ccu: goto label_3174cc;
        case 0x3174d0u: goto label_3174d0;
        case 0x3174d4u: goto label_3174d4;
        case 0x3174d8u: goto label_3174d8;
        case 0x3174dcu: goto label_3174dc;
        case 0x3174e0u: goto label_3174e0;
        case 0x3174e4u: goto label_3174e4;
        case 0x3174e8u: goto label_3174e8;
        case 0x3174ecu: goto label_3174ec;
        case 0x3174f0u: goto label_3174f0;
        case 0x3174f4u: goto label_3174f4;
        case 0x3174f8u: goto label_3174f8;
        case 0x3174fcu: goto label_3174fc;
        case 0x317500u: goto label_317500;
        case 0x317504u: goto label_317504;
        case 0x317508u: goto label_317508;
        case 0x31750cu: goto label_31750c;
        case 0x317510u: goto label_317510;
        case 0x317514u: goto label_317514;
        case 0x317518u: goto label_317518;
        case 0x31751cu: goto label_31751c;
        case 0x317520u: goto label_317520;
        case 0x317524u: goto label_317524;
        case 0x317528u: goto label_317528;
        case 0x31752cu: goto label_31752c;
        case 0x317530u: goto label_317530;
        case 0x317534u: goto label_317534;
        case 0x317538u: goto label_317538;
        case 0x31753cu: goto label_31753c;
        case 0x317540u: goto label_317540;
        case 0x317544u: goto label_317544;
        case 0x317548u: goto label_317548;
        case 0x31754cu: goto label_31754c;
        case 0x317550u: goto label_317550;
        case 0x317554u: goto label_317554;
        case 0x317558u: goto label_317558;
        case 0x31755cu: goto label_31755c;
        case 0x317560u: goto label_317560;
        case 0x317564u: goto label_317564;
        case 0x317568u: goto label_317568;
        case 0x31756cu: goto label_31756c;
        case 0x317570u: goto label_317570;
        case 0x317574u: goto label_317574;
        case 0x317578u: goto label_317578;
        case 0x31757cu: goto label_31757c;
        case 0x317580u: goto label_317580;
        case 0x317584u: goto label_317584;
        case 0x317588u: goto label_317588;
        case 0x31758cu: goto label_31758c;
        case 0x317590u: goto label_317590;
        case 0x317594u: goto label_317594;
        case 0x317598u: goto label_317598;
        case 0x31759cu: goto label_31759c;
        case 0x3175a0u: goto label_3175a0;
        case 0x3175a4u: goto label_3175a4;
        case 0x3175a8u: goto label_3175a8;
        case 0x3175acu: goto label_3175ac;
        case 0x3175b0u: goto label_3175b0;
        case 0x3175b4u: goto label_3175b4;
        case 0x3175b8u: goto label_3175b8;
        case 0x3175bcu: goto label_3175bc;
        case 0x3175c0u: goto label_3175c0;
        case 0x3175c4u: goto label_3175c4;
        case 0x3175c8u: goto label_3175c8;
        case 0x3175ccu: goto label_3175cc;
        case 0x3175d0u: goto label_3175d0;
        case 0x3175d4u: goto label_3175d4;
        case 0x3175d8u: goto label_3175d8;
        case 0x3175dcu: goto label_3175dc;
        case 0x3175e0u: goto label_3175e0;
        case 0x3175e4u: goto label_3175e4;
        case 0x3175e8u: goto label_3175e8;
        case 0x3175ecu: goto label_3175ec;
        case 0x3175f0u: goto label_3175f0;
        case 0x3175f4u: goto label_3175f4;
        case 0x3175f8u: goto label_3175f8;
        case 0x3175fcu: goto label_3175fc;
        case 0x317600u: goto label_317600;
        case 0x317604u: goto label_317604;
        case 0x317608u: goto label_317608;
        case 0x31760cu: goto label_31760c;
        case 0x317610u: goto label_317610;
        case 0x317614u: goto label_317614;
        case 0x317618u: goto label_317618;
        case 0x31761cu: goto label_31761c;
        case 0x317620u: goto label_317620;
        case 0x317624u: goto label_317624;
        case 0x317628u: goto label_317628;
        case 0x31762cu: goto label_31762c;
        case 0x317630u: goto label_317630;
        case 0x317634u: goto label_317634;
        case 0x317638u: goto label_317638;
        case 0x31763cu: goto label_31763c;
        case 0x317640u: goto label_317640;
        case 0x317644u: goto label_317644;
        case 0x317648u: goto label_317648;
        case 0x31764cu: goto label_31764c;
        case 0x317650u: goto label_317650;
        case 0x317654u: goto label_317654;
        case 0x317658u: goto label_317658;
        case 0x31765cu: goto label_31765c;
        case 0x317660u: goto label_317660;
        case 0x317664u: goto label_317664;
        case 0x317668u: goto label_317668;
        case 0x31766cu: goto label_31766c;
        case 0x317670u: goto label_317670;
        case 0x317674u: goto label_317674;
        case 0x317678u: goto label_317678;
        case 0x31767cu: goto label_31767c;
        case 0x317680u: goto label_317680;
        case 0x317684u: goto label_317684;
        case 0x317688u: goto label_317688;
        case 0x31768cu: goto label_31768c;
        case 0x317690u: goto label_317690;
        case 0x317694u: goto label_317694;
        case 0x317698u: goto label_317698;
        case 0x31769cu: goto label_31769c;
        case 0x3176a0u: goto label_3176a0;
        case 0x3176a4u: goto label_3176a4;
        case 0x3176a8u: goto label_3176a8;
        case 0x3176acu: goto label_3176ac;
        case 0x3176b0u: goto label_3176b0;
        case 0x3176b4u: goto label_3176b4;
        case 0x3176b8u: goto label_3176b8;
        case 0x3176bcu: goto label_3176bc;
        case 0x3176c0u: goto label_3176c0;
        case 0x3176c4u: goto label_3176c4;
        case 0x3176c8u: goto label_3176c8;
        case 0x3176ccu: goto label_3176cc;
        case 0x3176d0u: goto label_3176d0;
        case 0x3176d4u: goto label_3176d4;
        case 0x3176d8u: goto label_3176d8;
        case 0x3176dcu: goto label_3176dc;
        case 0x3176e0u: goto label_3176e0;
        case 0x3176e4u: goto label_3176e4;
        case 0x3176e8u: goto label_3176e8;
        case 0x3176ecu: goto label_3176ec;
        case 0x3176f0u: goto label_3176f0;
        case 0x3176f4u: goto label_3176f4;
        case 0x3176f8u: goto label_3176f8;
        case 0x3176fcu: goto label_3176fc;
        case 0x317700u: goto label_317700;
        case 0x317704u: goto label_317704;
        case 0x317708u: goto label_317708;
        case 0x31770cu: goto label_31770c;
        case 0x317710u: goto label_317710;
        case 0x317714u: goto label_317714;
        case 0x317718u: goto label_317718;
        case 0x31771cu: goto label_31771c;
        case 0x317720u: goto label_317720;
        case 0x317724u: goto label_317724;
        case 0x317728u: goto label_317728;
        case 0x31772cu: goto label_31772c;
        case 0x317730u: goto label_317730;
        case 0x317734u: goto label_317734;
        case 0x317738u: goto label_317738;
        case 0x31773cu: goto label_31773c;
        case 0x317740u: goto label_317740;
        case 0x317744u: goto label_317744;
        case 0x317748u: goto label_317748;
        case 0x31774cu: goto label_31774c;
        case 0x317750u: goto label_317750;
        case 0x317754u: goto label_317754;
        case 0x317758u: goto label_317758;
        case 0x31775cu: goto label_31775c;
        case 0x317760u: goto label_317760;
        case 0x317764u: goto label_317764;
        case 0x317768u: goto label_317768;
        case 0x31776cu: goto label_31776c;
        case 0x317770u: goto label_317770;
        case 0x317774u: goto label_317774;
        case 0x317778u: goto label_317778;
        case 0x31777cu: goto label_31777c;
        case 0x317780u: goto label_317780;
        case 0x317784u: goto label_317784;
        case 0x317788u: goto label_317788;
        case 0x31778cu: goto label_31778c;
        case 0x317790u: goto label_317790;
        case 0x317794u: goto label_317794;
        case 0x317798u: goto label_317798;
        case 0x31779cu: goto label_31779c;
        case 0x3177a0u: goto label_3177a0;
        case 0x3177a4u: goto label_3177a4;
        case 0x3177a8u: goto label_3177a8;
        case 0x3177acu: goto label_3177ac;
        case 0x3177b0u: goto label_3177b0;
        case 0x3177b4u: goto label_3177b4;
        case 0x3177b8u: goto label_3177b8;
        case 0x3177bcu: goto label_3177bc;
        case 0x3177c0u: goto label_3177c0;
        case 0x3177c4u: goto label_3177c4;
        case 0x3177c8u: goto label_3177c8;
        case 0x3177ccu: goto label_3177cc;
        case 0x3177d0u: goto label_3177d0;
        case 0x3177d4u: goto label_3177d4;
        case 0x3177d8u: goto label_3177d8;
        case 0x3177dcu: goto label_3177dc;
        case 0x3177e0u: goto label_3177e0;
        case 0x3177e4u: goto label_3177e4;
        case 0x3177e8u: goto label_3177e8;
        case 0x3177ecu: goto label_3177ec;
        case 0x3177f0u: goto label_3177f0;
        case 0x3177f4u: goto label_3177f4;
        case 0x3177f8u: goto label_3177f8;
        case 0x3177fcu: goto label_3177fc;
        case 0x317800u: goto label_317800;
        case 0x317804u: goto label_317804;
        case 0x317808u: goto label_317808;
        case 0x31780cu: goto label_31780c;
        case 0x317810u: goto label_317810;
        case 0x317814u: goto label_317814;
        case 0x317818u: goto label_317818;
        case 0x31781cu: goto label_31781c;
        case 0x317820u: goto label_317820;
        case 0x317824u: goto label_317824;
        case 0x317828u: goto label_317828;
        case 0x31782cu: goto label_31782c;
        case 0x317830u: goto label_317830;
        case 0x317834u: goto label_317834;
        case 0x317838u: goto label_317838;
        case 0x31783cu: goto label_31783c;
        case 0x317840u: goto label_317840;
        case 0x317844u: goto label_317844;
        case 0x317848u: goto label_317848;
        case 0x31784cu: goto label_31784c;
        case 0x317850u: goto label_317850;
        case 0x317854u: goto label_317854;
        case 0x317858u: goto label_317858;
        case 0x31785cu: goto label_31785c;
        case 0x317860u: goto label_317860;
        case 0x317864u: goto label_317864;
        case 0x317868u: goto label_317868;
        case 0x31786cu: goto label_31786c;
        case 0x317870u: goto label_317870;
        case 0x317874u: goto label_317874;
        case 0x317878u: goto label_317878;
        case 0x31787cu: goto label_31787c;
        case 0x317880u: goto label_317880;
        case 0x317884u: goto label_317884;
        case 0x317888u: goto label_317888;
        case 0x31788cu: goto label_31788c;
        case 0x317890u: goto label_317890;
        case 0x317894u: goto label_317894;
        case 0x317898u: goto label_317898;
        case 0x31789cu: goto label_31789c;
        case 0x3178a0u: goto label_3178a0;
        case 0x3178a4u: goto label_3178a4;
        case 0x3178a8u: goto label_3178a8;
        case 0x3178acu: goto label_3178ac;
        case 0x3178b0u: goto label_3178b0;
        case 0x3178b4u: goto label_3178b4;
        case 0x3178b8u: goto label_3178b8;
        case 0x3178bcu: goto label_3178bc;
        case 0x3178c0u: goto label_3178c0;
        case 0x3178c4u: goto label_3178c4;
        case 0x3178c8u: goto label_3178c8;
        case 0x3178ccu: goto label_3178cc;
        case 0x3178d0u: goto label_3178d0;
        case 0x3178d4u: goto label_3178d4;
        default: break;
    }

    ctx->pc = 0x317120u;

label_317120:
    // 0x317120: 0x27bdfc00  addiu       $sp, $sp, -0x400
    ctx->pc = 0x317120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966272));
label_317124:
    // 0x317124: 0x7fb60380  sq          $s6, 0x380($sp)
    ctx->pc = 0x317124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 22));
label_317128:
    // 0x317128: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x317128u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31712c:
    // 0x31712c: 0x7fb003e0  sq          $s0, 0x3E0($sp)
    ctx->pc = 0x31712cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), GPR_VEC(ctx, 16));
label_317130:
    // 0x317130: 0x7fb103d0  sq          $s1, 0x3D0($sp)
    ctx->pc = 0x317130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), GPR_VEC(ctx, 17));
label_317134:
    // 0x317134: 0x2c0682d  daddu       $t5, $s6, $zero
    ctx->pc = 0x317134u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_317138:
    // 0x317138: 0x7fb203c0  sq          $s2, 0x3C0($sp)
    ctx->pc = 0x317138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), GPR_VEC(ctx, 18));
label_31713c:
    // 0x31713c: 0x7fb303b0  sq          $s3, 0x3B0($sp)
    ctx->pc = 0x31713cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), GPR_VEC(ctx, 19));
label_317140:
    // 0x317140: 0x7fb403a0  sq          $s4, 0x3A0($sp)
    ctx->pc = 0x317140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), GPR_VEC(ctx, 20));
label_317144:
    // 0x317144: 0x7fb50390  sq          $s5, 0x390($sp)
    ctx->pc = 0x317144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), GPR_VEC(ctx, 21));
label_317148:
    // 0x317148: 0x7fb70370  sq          $s7, 0x370($sp)
    ctx->pc = 0x317148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 23));
label_31714c:
    // 0x31714c: 0x7fbe0360  sq          $fp, 0x360($sp)
    ctx->pc = 0x31714cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 30));
label_317150:
    // 0x317150: 0xffbf0350  sd          $ra, 0x350($sp)
    ctx->pc = 0x317150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 848), GPR_U64(ctx, 31));
label_317154:
    // 0x317154: 0xe7b503f8  swc1        $f21, 0x3F8($sp)
    ctx->pc = 0x317154u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1016), bits); }
label_317158:
    // 0x317158: 0xe7b403f0  swc1        $f20, 0x3F0($sp)
    ctx->pc = 0x317158u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1008), bits); }
label_31715c:
    // 0x31715c: 0xafa602d0  sw          $a2, 0x2D0($sp)
    ctx->pc = 0x31715cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 6));
label_317160:
    // 0x317160: 0xafa702d4  sw          $a3, 0x2D4($sp)
    ctx->pc = 0x317160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 7));
label_317164:
    // 0x317164: 0x6ac20007  ldl         $v0, 0x7($s6)
    ctx->pc = 0x317164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_317168:
    // 0x317168: 0x6ec20000  ldr         $v0, 0x0($s6)
    ctx->pc = 0x317168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_31716c:
    // 0x31716c: 0x6ac3000f  ldl         $v1, 0xF($s6)
    ctx->pc = 0x31716cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_317170:
    // 0x317170: 0x6ec30008  ldr         $v1, 0x8($s6)
    ctx->pc = 0x317170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_317174:
    // 0x317174: 0x6ac50017  ldl         $a1, 0x17($s6)
    ctx->pc = 0x317174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_317178:
    // 0x317178: 0x6ec50010  ldr         $a1, 0x10($s6)
    ctx->pc = 0x317178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_31717c:
    // 0x31717c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x31717cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_317180:
    // 0x317180: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x317180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_317184:
    // 0x317184: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x317184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_317188:
    // 0x317188: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x317188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31718c:
    // 0x31718c: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x31718cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_317190:
    // 0x317190: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x317190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_317194:
    // 0x317194: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x317194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_317198:
    // 0x317198: 0x27a3001c  addiu       $v1, $sp, 0x1C
    ctx->pc = 0x317198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_31719c:
    // 0x31719c: 0xafa3011c  sw          $v1, 0x11C($sp)
    ctx->pc = 0x31719cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
label_3171a0:
    // 0x3171a0: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x3171a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_3171a4:
    // 0x3171a4: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x3171a4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3171a8:
    // 0x3171a8: 0x108001bc  beqz        $a0, . + 4 + (0x1BC << 2)
label_3171ac:
    if (ctx->pc == 0x3171ACu) {
        ctx->pc = 0x3171ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3171A8u;
        // 0x3171ac: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3171B0u;
        goto label_3171b0;
    }
    ctx->pc = 0x3171A8u;
    {
        const bool branch_taken_0x3171a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3171ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3171A8u;
        // 0x3171ac: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3171a8) {
            ctx->pc = 0x31789Cu;
            goto label_31789c;
        }
    }
    ctx->pc = 0x3171B0u;
label_3171b0:
    // 0x3171b0: 0x27a70154  addiu       $a3, $sp, 0x154
    ctx->pc = 0x3171b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_3171b4:
    // 0x3171b4: 0x27a20164  addiu       $v0, $sp, 0x164
    ctx->pc = 0x3171b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
label_3171b8:
    // 0x3171b8: 0x27a4015c  addiu       $a0, $sp, 0x15C
    ctx->pc = 0x3171b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_3171bc:
    // 0x3171bc: 0xafa702dc  sw          $a3, 0x2DC($sp)
    ctx->pc = 0x3171bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 7));
label_3171c0:
    // 0x3171c0: 0xafa202e0  sw          $v0, 0x2E0($sp)
    ctx->pc = 0x3171c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 2));
label_3171c4:
    // 0x3171c4: 0xafa402e4  sw          $a0, 0x2E4($sp)
    ctx->pc = 0x3171c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 4));
label_3171c8:
    // 0x3171c8: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x3171c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_3171cc:
    // 0x3171cc: 0x0  nop
    ctx->pc = 0x3171ccu;
    // NOP
label_3171d0:
    // 0x3171d0: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x3171d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_3171d4:
    // 0x3171d4: 0xafa3011c  sw          $v1, 0x11C($sp)
    ctx->pc = 0x3171d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
label_3171d8:
    // 0x3171d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3171d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3171dc:
    // 0x3171dc: 0x480001e  bltz        $a0, . + 4 + (0x1E << 2)
label_3171e0:
    if (ctx->pc == 0x3171E0u) {
        ctx->pc = 0x3171E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3171DCu;
        // 0x3171e0: 0x8fa2011c  lw          $v0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3171E4u;
        goto label_3171e4;
    }
    ctx->pc = 0x3171DCu;
    {
        const bool branch_taken_0x3171dc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3171E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3171DCu;
        // 0x3171e0: 0x8fa2011c  lw          $v0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3171dc) {
            ctx->pc = 0x317258u;
            goto label_317258;
        }
    }
    ctx->pc = 0x3171E4u;
label_3171e4:
    // 0x3171e4: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x3171e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_3171e8:
    // 0x3171e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3171e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3171ec:
    // 0x3171ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3171ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3171f0:
    // 0x3171f0: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x3171f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3171f4:
    // 0x3171f4: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x3171f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3171f8:
    // 0x3171f8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3171f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3171fc:
    // 0x3171fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3171fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317200:
    // 0x317200: 0x0  nop
    ctx->pc = 0x317200u;
    // NOP
label_317204:
    // 0x317204: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_317208:
    if (ctx->pc == 0x317208u) {
        ctx->pc = 0x317208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317204u;
        // 0x317208: 0xc440000c  lwc1        $f0, 0xC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31720Cu;
        goto label_31720c;
    }
    ctx->pc = 0x317204u;
    {
        const bool branch_taken_0x317204 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x317204) {
            ctx->pc = 0x317208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317204u;
            // 0x317208: 0xc440000c  lwc1        $f0, 0xC($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x317218u;
            goto label_317218;
        }
    }
    ctx->pc = 0x31720Cu;
label_31720c:
    // 0x31720c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x31720cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_317210:
    // 0x317210: 0x1000000b  b           . + 4 + (0xB << 2)
label_317214:
    if (ctx->pc == 0x317214u) {
        ctx->pc = 0x317214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317210u;
        // 0x317214: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317218u;
        goto label_317218;
    }
    ctx->pc = 0x317210u;
    {
        const bool branch_taken_0x317210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317210u;
        // 0x317214: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317210) {
            ctx->pc = 0x317240u;
            goto label_317240;
        }
    }
    ctx->pc = 0x317218u;
label_317218:
    // 0x317218: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x317218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31721c:
    // 0x31721c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x31721cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_317220:
    // 0x317220: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x317220u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317224:
    // 0x317224: 0x0  nop
    ctx->pc = 0x317224u;
    // NOP
label_317228:
    // 0x317228: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_31722c:
    if (ctx->pc == 0x31722Cu) {
        ctx->pc = 0x31722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317228u;
        // 0x31722c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317230u;
        goto label_317230;
    }
    ctx->pc = 0x317228u;
    {
        const bool branch_taken_0x317228 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317228u;
        // 0x31722c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317228) {
            ctx->pc = 0x317240u;
            goto label_317240;
        }
    }
    ctx->pc = 0x317230u;
label_317230:
    // 0x317230: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x317230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_317234:
    // 0x317234: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x317234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_317238:
    // 0x317238: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x317238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_31723c:
    // 0x31723c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x31723cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_317240:
    // 0x317240: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x317240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_317244:
    // 0x317244: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x317244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_317248:
    // 0x317248: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x317248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31724c:
    // 0x31724c: 0x481ffe6  bgez        $a0, . + 4 + (-0x1A << 2)
label_317250:
    if (ctx->pc == 0x317250u) {
        ctx->pc = 0x317250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31724Cu;
        // 0x317250: 0x8fa4011c  lw          $a0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317254u;
        goto label_317254;
    }
    ctx->pc = 0x31724Cu;
    {
        const bool branch_taken_0x31724c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x317250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31724Cu;
        // 0x317250: 0x8fa4011c  lw          $a0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31724c) {
            ctx->pc = 0x3171E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3171e8;
        }
    }
    ctx->pc = 0x317254u;
label_317254:
    // 0x317254: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x317254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_317258:
    // 0x317258: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x317258u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31725c:
    // 0x31725c: 0x8f83a5b4  lw          $v1, -0x5A4C($gp)
    ctx->pc = 0x31725cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944180)));
label_317260:
    // 0x317260: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x317260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
label_317264:
    // 0x317264: 0x8c750000  lw          $s5, 0x0($v1)
    ctx->pc = 0x317264u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_317268:
    // 0x317268: 0x52a00188  beql        $s5, $zero, . + 4 + (0x188 << 2)
label_31726c:
    if (ctx->pc == 0x31726Cu) {
        ctx->pc = 0x31726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317268u;
        // 0x31726c: 0x8fa3011c  lw          $v1, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317270u;
        goto label_317270;
    }
    ctx->pc = 0x317268u;
    {
        const bool branch_taken_0x317268 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x317268) {
            ctx->pc = 0x31726Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317268u;
            // 0x31726c: 0x8fa3011c  lw          $v1, 0x11C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31788Cu;
            goto label_31788c;
        }
    }
    ctx->pc = 0x317270u;
label_317270:
    // 0x317270: 0x8d850004  lw          $a1, 0x4($t4)
    ctx->pc = 0x317270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
label_317274:
    // 0x317274: 0xafa502d8  sw          $a1, 0x2D8($sp)
    ctx->pc = 0x317274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 5));
label_317278:
    // 0x317278: 0xc6a10010  lwc1        $f1, 0x10($s5)
    ctx->pc = 0x317278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31727c:
    // 0x31727c: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x31727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317280:
    // 0x317280: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x317280u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317284:
    // 0x317284: 0x0  nop
    ctx->pc = 0x317284u;
    // NOP
label_317288:
    // 0x317288: 0x4500006c  bc1f        . + 4 + (0x6C << 2)
label_31728c:
    if (ctx->pc == 0x31728Cu) {
        ctx->pc = 0x31728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317288u;
        // 0x31728c: 0x8d8b0008  lw          $t3, 0x8($t4) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317290u;
        goto label_317290;
    }
    ctx->pc = 0x317288u;
    {
        const bool branch_taken_0x317288 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317288u;
        // 0x31728c: 0x8d8b0008  lw          $t3, 0x8($t4) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317288) {
            ctx->pc = 0x31743Cu;
            goto label_31743c;
        }
    }
    ctx->pc = 0x317290u;
label_317290:
    // 0x317290: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x317290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317294:
    // 0x317294: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x317294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317298:
    // 0x317298: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x317298u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31729c:
    // 0x31729c: 0x0  nop
    ctx->pc = 0x31729cu;
    // NOP
label_3172a0:
    // 0x3172a0: 0x45000067  bc1f        . + 4 + (0x67 << 2)
label_3172a4:
    if (ctx->pc == 0x3172A4u) {
        ctx->pc = 0x3172A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172A0u;
        // 0x3172a4: 0x8fa602e4  lw          $a2, 0x2E4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3172A8u;
        goto label_3172a8;
    }
    ctx->pc = 0x3172A0u;
    {
        const bool branch_taken_0x3172a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3172A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172A0u;
        // 0x3172a4: 0x8fa602e4  lw          $a2, 0x2E4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3172a0) {
            ctx->pc = 0x317440u;
            goto label_317440;
        }
    }
    ctx->pc = 0x3172A8u;
label_3172a8:
    // 0x3172a8: 0xc6a10018  lwc1        $f1, 0x18($s5)
    ctx->pc = 0x3172a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3172ac:
    // 0x3172ac: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x3172acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3172b0:
    // 0x3172b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3172b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3172b4:
    // 0x3172b4: 0x0  nop
    ctx->pc = 0x3172b4u;
    // NOP
label_3172b8:
    // 0x3172b8: 0x45000062  bc1f        . + 4 + (0x62 << 2)
label_3172bc:
    if (ctx->pc == 0x3172BCu) {
        ctx->pc = 0x3172BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172B8u;
        // 0x3172bc: 0x27aa015c  addiu       $t2, $sp, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3172C0u;
        goto label_3172c0;
    }
    ctx->pc = 0x3172B8u;
    {
        const bool branch_taken_0x3172b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3172BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172B8u;
        // 0x3172bc: 0x27aa015c  addiu       $t2, $sp, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3172b8) {
            ctx->pc = 0x317444u;
            goto label_317444;
        }
    }
    ctx->pc = 0x3172C0u;
label_3172c0:
    // 0x3172c0: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x3172c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3172c4:
    // 0x3172c4: 0xc6c0000c  lwc1        $f0, 0xC($s6)
    ctx->pc = 0x3172c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3172c8:
    // 0x3172c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3172c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3172cc:
    // 0x3172cc: 0x0  nop
    ctx->pc = 0x3172ccu;
    // NOP
label_3172d0:
    // 0x3172d0: 0x4502005d  bc1fl       . + 4 + (0x5D << 2)
label_3172d4:
    if (ctx->pc == 0x3172D4u) {
        ctx->pc = 0x3172D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172D0u;
        // 0x3172d4: 0xafa60264  sw          $a2, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3172D8u;
        goto label_3172d8;
    }
    ctx->pc = 0x3172D0u;
    {
        const bool branch_taken_0x3172d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3172d0) {
            ctx->pc = 0x3172D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3172D0u;
            // 0x3172d4: 0xafa60264  sw          $a2, 0x264($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317448u;
            goto label_317448;
        }
    }
    ctx->pc = 0x3172D8u;
label_3172d8:
    // 0x3172d8: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x3172d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3172dc:
    // 0x3172dc: 0xc6c00010  lwc1        $f0, 0x10($s6)
    ctx->pc = 0x3172dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3172e0:
    // 0x3172e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3172e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3172e4:
    // 0x3172e4: 0x0  nop
    ctx->pc = 0x3172e4u;
    // NOP
label_3172e8:
    // 0x3172e8: 0x45020057  bc1fl       . + 4 + (0x57 << 2)
label_3172ec:
    if (ctx->pc == 0x3172ECu) {
        ctx->pc = 0x3172ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172E8u;
        // 0x3172ec: 0xafa60264  sw          $a2, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3172F0u;
        goto label_3172f0;
    }
    ctx->pc = 0x3172E8u;
    {
        const bool branch_taken_0x3172e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3172e8) {
            ctx->pc = 0x3172ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3172E8u;
            // 0x3172ec: 0xafa60264  sw          $a2, 0x264($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317448u;
            goto label_317448;
        }
    }
    ctx->pc = 0x3172F0u;
label_3172f0:
    // 0x3172f0: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x3172f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3172f4:
    // 0x3172f4: 0xc6c00014  lwc1        $f0, 0x14($s6)
    ctx->pc = 0x3172f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3172f8:
    // 0x3172f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3172f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3172fc:
    // 0x3172fc: 0x0  nop
    ctx->pc = 0x3172fcu;
    // NOP
label_317300:
    // 0x317300: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
label_317304:
    if (ctx->pc == 0x317304u) {
        ctx->pc = 0x317304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317300u;
        // 0x317304: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317308u;
        goto label_317308;
    }
    ctx->pc = 0x317300u;
    {
        const bool branch_taken_0x317300 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x317304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317300u;
        // 0x317304: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317300) {
            ctx->pc = 0x31743Cu;
            goto label_31743c;
        }
    }
    ctx->pc = 0x317308u;
label_317308:
    // 0x317308: 0xa7a00156  sh          $zero, 0x156($sp)
    ctx->pc = 0x317308u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 342), (uint16_t)GPR_U32(ctx, 0));
label_31730c:
    // 0x31730c: 0xa3a60155  sb          $a2, 0x155($sp)
    ctx->pc = 0x31730cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 341), (uint8_t)GPR_U32(ctx, 6));
label_317310:
    // 0x317310: 0xafb50120  sw          $s5, 0x120($sp)
    ctx->pc = 0x317310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 21));
label_317314:
    // 0x317314: 0x96a2001e  lhu         $v0, 0x1E($s5)
    ctx->pc = 0x317314u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
label_317318:
    // 0x317318: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_31731c:
    if (ctx->pc == 0x31731Cu) {
        ctx->pc = 0x317320u;
        goto label_317320;
    }
    ctx->pc = 0x317318u;
    {
        const bool branch_taken_0x317318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317318) {
            ctx->pc = 0x317328u;
            goto label_317328;
        }
    }
    ctx->pc = 0x317320u;
label_317320:
    // 0x317320: 0x92a2001c  lbu         $v0, 0x1C($s5)
    ctx->pc = 0x317320u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 28)));
label_317324:
    // 0x317324: 0xa3a20155  sb          $v0, 0x155($sp)
    ctx->pc = 0x317324u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 341), (uint8_t)GPR_U32(ctx, 2));
label_317328:
    // 0x317328: 0x69a70007  ldl         $a3, 0x7($t5)
    ctx->pc = 0x317328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_31732c:
    // 0x31732c: 0x6da70000  ldr         $a3, 0x0($t5)
    ctx->pc = 0x31732cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_317330:
    // 0x317330: 0x69a2000f  ldl         $v0, 0xF($t5)
    ctx->pc = 0x317330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_317334:
    // 0x317334: 0x6da20008  ldr         $v0, 0x8($t5)
    ctx->pc = 0x317334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_317338:
    // 0x317338: 0x69a30017  ldl         $v1, 0x17($t5)
    ctx->pc = 0x317338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_31733c:
    // 0x31733c: 0x6da30010  ldr         $v1, 0x10($t5)
    ctx->pc = 0x31733cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_317340:
    // 0x317340: 0xb3a7012b  sdl         $a3, 0x12B($sp)
    ctx->pc = 0x317340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 299); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_317344:
    // 0x317344: 0xb7a70124  sdr         $a3, 0x124($sp)
    ctx->pc = 0x317344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_317348:
    // 0x317348: 0xb3a20133  sdl         $v0, 0x133($sp)
    ctx->pc = 0x317348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31734c:
    // 0x31734c: 0xb7a2012c  sdr         $v0, 0x12C($sp)
    ctx->pc = 0x31734cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_317350:
    // 0x317350: 0xb3a3013b  sdl         $v1, 0x13B($sp)
    ctx->pc = 0x317350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 315); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_317354:
    // 0x317354: 0xb7a30134  sdr         $v1, 0x134($sp)
    ctx->pc = 0x317354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_317358:
    // 0x317358: 0x69a50007  ldl         $a1, 0x7($t5)
    ctx->pc = 0x317358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_31735c:
    // 0x31735c: 0x6da50000  ldr         $a1, 0x0($t5)
    ctx->pc = 0x31735cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_317360:
    // 0x317360: 0x69a6000f  ldl         $a2, 0xF($t5)
    ctx->pc = 0x317360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_317364:
    // 0x317364: 0x6da60008  ldr         $a2, 0x8($t5)
    ctx->pc = 0x317364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_317368:
    // 0x317368: 0x69a70017  ldl         $a3, 0x17($t5)
    ctx->pc = 0x317368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_31736c:
    // 0x31736c: 0x6da70010  ldr         $a3, 0x10($t5)
    ctx->pc = 0x31736cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_317370:
    // 0x317370: 0xb3a50143  sdl         $a1, 0x143($sp)
    ctx->pc = 0x317370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 323); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_317374:
    // 0x317374: 0xb7a5013c  sdr         $a1, 0x13C($sp)
    ctx->pc = 0x317374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 316); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_317378:
    // 0x317378: 0xb3a6014b  sdl         $a2, 0x14B($sp)
    ctx->pc = 0x317378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 331); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31737c:
    // 0x31737c: 0xb7a60144  sdr         $a2, 0x144($sp)
    ctx->pc = 0x31737cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 324); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_317380:
    // 0x317380: 0xb3a70153  sdl         $a3, 0x153($sp)
    ctx->pc = 0x317380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 339); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_317384:
    // 0x317384: 0xb7a7014c  sdr         $a3, 0x14C($sp)
    ctx->pc = 0x317384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 332); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_317388:
    // 0x317388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31738c:
    // 0x31738c: 0xc6c1000c  lwc1        $f1, 0xC($s6)
    ctx->pc = 0x31738cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317390:
    // 0x317390: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x317390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317394:
    // 0x317394: 0x8fa402dc  lw          $a0, 0x2DC($sp)
    ctx->pc = 0x317394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
label_317398:
    // 0x317398: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x317398u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31739c:
    // 0x31739c: 0x0  nop
    ctx->pc = 0x31739cu;
    // NOP
label_3173a0:
    // 0x3173a0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_3173a4:
    if (ctx->pc == 0x3173A4u) {
        ctx->pc = 0x3173A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3173A0u;
        // 0x3173a4: 0xafa4015c  sw          $a0, 0x15C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3173A8u;
        goto label_3173a8;
    }
    ctx->pc = 0x3173A0u;
    {
        const bool branch_taken_0x3173a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3173A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3173A0u;
        // 0x3173a4: 0xafa4015c  sw          $a0, 0x15C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3173a0) {
            ctx->pc = 0x3173B0u;
            goto label_3173b0;
        }
    }
    ctx->pc = 0x3173A8u;
label_3173a8:
    // 0x3173a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3173a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3173ac:
    // 0x3173ac: 0x0  nop
    ctx->pc = 0x3173acu;
    // NOP
label_3173b0:
    // 0x3173b0: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x3173b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3173b4:
    // 0x3173b4: 0xc6c00010  lwc1        $f0, 0x10($s6)
    ctx->pc = 0x3173b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3173b8:
    // 0x3173b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3173b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3173bc:
    // 0x3173bc: 0x0  nop
    ctx->pc = 0x3173bcu;
    // NOP
label_3173c0:
    // 0x3173c0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3173c4:
    if (ctx->pc == 0x3173C4u) {
        ctx->pc = 0x3173C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3173C0u;
        // 0x3173c4: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3173C8u;
        goto label_3173c8;
    }
    ctx->pc = 0x3173C0u;
    {
        const bool branch_taken_0x3173c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3173c0) {
            ctx->pc = 0x3173C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3173C0u;
            // 0x3173c4: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3173C8u;
            goto label_3173c8;
        }
    }
    ctx->pc = 0x3173C8u;
label_3173c8:
    // 0x3173c8: 0xc6a10018  lwc1        $f1, 0x18($s5)
    ctx->pc = 0x3173c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3173cc:
    // 0x3173cc: 0xc6c00014  lwc1        $f0, 0x14($s6)
    ctx->pc = 0x3173ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3173d0:
    // 0x3173d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3173d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3173d4:
    // 0x3173d4: 0x0  nop
    ctx->pc = 0x3173d4u;
    // NOP
label_3173d8:
    // 0x3173d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3173dc:
    if (ctx->pc == 0x3173DCu) {
        ctx->pc = 0x3173DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3173D8u;
        // 0x3173dc: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3173E0u;
        goto label_3173e0;
    }
    ctx->pc = 0x3173D8u;
    {
        const bool branch_taken_0x3173d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3173d8) {
            ctx->pc = 0x3173DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3173D8u;
            // 0x3173dc: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3173E0u;
            goto label_3173e0;
        }
    }
    ctx->pc = 0x3173E0u;
label_3173e0:
    // 0x3173e0: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x3173e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3173e4:
    // 0x3173e4: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x3173e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3173e8:
    // 0x3173e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3173e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3173ec:
    // 0x3173ec: 0x0  nop
    ctx->pc = 0x3173ecu;
    // NOP
label_3173f0:
    // 0x3173f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3173f4:
    if (ctx->pc == 0x3173F4u) {
        ctx->pc = 0x3173F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3173F0u;
        // 0x3173f4: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3173F8u;
        goto label_3173f8;
    }
    ctx->pc = 0x3173F0u;
    {
        const bool branch_taken_0x3173f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3173f0) {
            ctx->pc = 0x3173F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3173F0u;
            // 0x3173f4: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3173F8u;
            goto label_3173f8;
        }
    }
    ctx->pc = 0x3173F8u;
label_3173f8:
    // 0x3173f8: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x3173f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3173fc:
    // 0x3173fc: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x3173fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317400:
    // 0x317400: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x317400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317404:
    // 0x317404: 0x0  nop
    ctx->pc = 0x317404u;
    // NOP
label_317408:
    // 0x317408: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_31740c:
    if (ctx->pc == 0x31740Cu) {
        ctx->pc = 0x31740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317408u;
        // 0x31740c: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x317410u;
        goto label_317410;
    }
    ctx->pc = 0x317408u;
    {
        const bool branch_taken_0x317408 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x317408) {
            ctx->pc = 0x31740Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317408u;
            // 0x31740c: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x317410u;
            goto label_317410;
        }
    }
    ctx->pc = 0x317410u;
label_317410:
    // 0x317410: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x317410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317414:
    // 0x317414: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x317414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317418:
    // 0x317418: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x317418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31741c:
    // 0x31741c: 0x0  nop
    ctx->pc = 0x31741cu;
    // NOP
label_317420:
    // 0x317420: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_317424:
    if (ctx->pc == 0x317424u) {
        ctx->pc = 0x317424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317420u;
        // 0x317424: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x317428u;
        goto label_317428;
    }
    ctx->pc = 0x317420u;
    {
        const bool branch_taken_0x317420 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x317420) {
            ctx->pc = 0x317424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317420u;
            // 0x317424: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x317428u;
            goto label_317428;
        }
    }
    ctx->pc = 0x317428u;
label_317428:
    // 0x317428: 0x8fa502e0  lw          $a1, 0x2E0($sp)
    ctx->pc = 0x317428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_31742c:
    // 0x31742c: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x31742cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_317430:
    // 0x317430: 0xafa50264  sw          $a1, 0x264($sp)
    ctx->pc = 0x317430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 5));
label_317434:
    // 0x317434: 0x10000004  b           . + 4 + (0x4 << 2)
label_317438:
    if (ctx->pc == 0x317438u) {
        ctx->pc = 0x317438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317434u;
        // 0x317438: 0x27aa015c  addiu       $t2, $sp, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31743Cu;
        goto label_31743c;
    }
    ctx->pc = 0x317434u;
    {
        const bool branch_taken_0x317434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317434u;
        // 0x317438: 0x27aa015c  addiu       $t2, $sp, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317434) {
            ctx->pc = 0x317448u;
            goto label_317448;
        }
    }
    ctx->pc = 0x31743Cu;
label_31743c:
    // 0x31743c: 0x8fa602e4  lw          $a2, 0x2E4($sp)
    ctx->pc = 0x31743cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
label_317440:
    // 0x317440: 0x27aa015c  addiu       $t2, $sp, 0x15C
    ctx->pc = 0x317440u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_317444:
    // 0x317444: 0xafa60264  sw          $a2, 0x264($sp)
    ctx->pc = 0x317444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 6));
label_317448:
    // 0x317448: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x317448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_31744c:
    // 0x31744c: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x31744cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_317450:
    // 0x317450: 0x1040010d  beqz        $v0, . + 4 + (0x10D << 2)
label_317454:
    if (ctx->pc == 0x317454u) {
        ctx->pc = 0x317454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317450u;
        // 0x317454: 0x27a70124  addiu       $a3, $sp, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317458u;
        goto label_317458;
    }
    ctx->pc = 0x317450u;
    {
        const bool branch_taken_0x317450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317450u;
        // 0x317454: 0x27a70124  addiu       $a3, $sp, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317450) {
            ctx->pc = 0x317888u;
            goto label_317888;
        }
    }
    ctx->pc = 0x317458u;
label_317458:
    // 0x317458: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x317458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_31745c:
    // 0x31745c: 0x27a4013c  addiu       $a0, $sp, 0x13C
    ctx->pc = 0x31745cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_317460:
    // 0x317460: 0x27a50148  addiu       $a1, $sp, 0x148
    ctx->pc = 0x317460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_317464:
    // 0x317464: 0xafa702e8  sw          $a3, 0x2E8($sp)
    ctx->pc = 0x317464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 7));
label_317468:
    // 0x317468: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x317468u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_31746c:
    // 0x31746c: 0xafa202ec  sw          $v0, 0x2EC($sp)
    ctx->pc = 0x31746cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 2));
label_317470:
    // 0x317470: 0xafa402f0  sw          $a0, 0x2F0($sp)
    ctx->pc = 0x317470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 4));
label_317474:
    // 0x317474: 0xafa502f4  sw          $a1, 0x2F4($sp)
    ctx->pc = 0x317474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 5));
label_317478:
    // 0x317478: 0x8c64fff8  lw          $a0, -0x8($v1)
    ctx->pc = 0x317478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_31747c:
    // 0x31747c: 0x0  nop
    ctx->pc = 0x31747cu;
    // NOP
label_317480:
    // 0x317480: 0x2465fff8  addiu       $a1, $v1, -0x8
    ctx->pc = 0x317480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_317484:
    // 0x317484: 0x10000067  b           . + 4 + (0x67 << 2)
label_317488:
    if (ctx->pc == 0x317488u) {
        ctx->pc = 0x317488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317484u;
        // 0x317488: 0xafa50264  sw          $a1, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31748Cu;
        goto label_31748c;
    }
    ctx->pc = 0x317484u;
    {
        const bool branch_taken_0x317484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317484u;
        // 0x317488: 0xafa50264  sw          $a1, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317484) {
            ctx->pc = 0x317624u;
            goto label_317624;
        }
    }
    ctx->pc = 0x31748Cu;
label_31748c:
    // 0x31748c: 0x0  nop
    ctx->pc = 0x31748cu;
    // NOP
label_317490:
    // 0x317490: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x317490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_317494:
    // 0x317494: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_317498:
    if (ctx->pc == 0x317498u) {
        ctx->pc = 0x317498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317494u;
        // 0x317498: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31749Cu;
        goto label_31749c;
    }
    ctx->pc = 0x317494u;
    {
        const bool branch_taken_0x317494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317494u;
        // 0x317498: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317494) {
            ctx->pc = 0x317544u;
            goto label_317544;
        }
    }
    ctx->pc = 0x31749Cu;
label_31749c:
    // 0x31749c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x31749cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_3174a0:
    // 0x3174a0: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x3174a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_3174a4:
    // 0x3174a4: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x3174a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3174a8:
    // 0x3174a8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3174a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3174ac:
    // 0x3174ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3174acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3174b0:
    // 0x3174b0: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x3174b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3174b4:
    // 0x3174b4: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x3174b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_3174b8:
    // 0x3174b8: 0x1449000a  bne         $v0, $t1, . + 4 + (0xA << 2)
label_3174bc:
    if (ctx->pc == 0x3174BCu) {
        ctx->pc = 0x3174BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3174B8u;
        // 0x3174bc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3174C0u;
        goto label_3174c0;
    }
    ctx->pc = 0x3174B8u;
    {
        const bool branch_taken_0x3174b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x3174BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3174B8u;
        // 0x3174bc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3174b8) {
            ctx->pc = 0x3174E4u;
            goto label_3174e4;
        }
    }
    ctx->pc = 0x3174C0u;
label_3174c0:
    // 0x3174c0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3174c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3174c4:
    // 0x3174c4: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x3174c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_3174c8:
    // 0x3174c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3174c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3174cc:
    // 0x3174cc: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x3174ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3174d0:
    // 0x3174d0: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x3174d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_3174d4:
    // 0x3174d4: 0x0  nop
    ctx->pc = 0x3174d4u;
    // NOP
label_3174d8:
    // 0x3174d8: 0x0  nop
    ctx->pc = 0x3174d8u;
    // NOP
label_3174dc:
    // 0x3174dc: 0x5067fffa  beql        $v1, $a3, . + 4 + (-0x6 << 2)
label_3174e0:
    if (ctx->pc == 0x3174E0u) {
        ctx->pc = 0x3174E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3174DCu;
        // 0x3174e0: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3174E4u;
        goto label_3174e4;
    }
    ctx->pc = 0x3174DCu;
    {
        const bool branch_taken_0x3174dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x3174dc) {
            ctx->pc = 0x3174E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3174DCu;
            // 0x3174e0: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3174C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3174c8;
        }
    }
    ctx->pc = 0x3174E4u;
label_3174e4:
    // 0x3174e4: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x3174e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_3174e8:
    // 0x3174e8: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3174e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_3174ec:
    // 0x3174ec: 0x1449000b  bne         $v0, $t1, . + 4 + (0xB << 2)
label_3174f0:
    if (ctx->pc == 0x3174F0u) {
        ctx->pc = 0x3174F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3174ECu;
        // 0x3174f0: 0x94860002  lhu         $a2, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3174F4u;
        goto label_3174f4;
    }
    ctx->pc = 0x3174ECu;
    {
        const bool branch_taken_0x3174ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x3174F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3174ECu;
        // 0x3174f0: 0x94860002  lhu         $a2, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3174ec) {
            ctx->pc = 0x31751Cu;
            goto label_31751c;
        }
    }
    ctx->pc = 0x3174F4u;
label_3174f4:
    // 0x3174f4: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x3174f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_3174f8:
    // 0x3174f8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3174f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3174fc:
    // 0x3174fc: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x3174fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_317500:
    // 0x317500: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x317500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_317504:
    // 0x317504: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x317504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_317508:
    // 0x317508: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x317508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_31750c:
    // 0x31750c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x31750cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_317510:
    // 0x317510: 0x0  nop
    ctx->pc = 0x317510u;
    // NOP
label_317514:
    // 0x317514: 0x5067fffa  beql        $v1, $a3, . + 4 + (-0x6 << 2)
label_317518:
    if (ctx->pc == 0x317518u) {
        ctx->pc = 0x317518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317514u;
        // 0x317518: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31751Cu;
        goto label_31751c;
    }
    ctx->pc = 0x317514u;
    {
        const bool branch_taken_0x317514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x317514) {
            ctx->pc = 0x317518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317514u;
            // 0x317518: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317500;
        }
    }
    ctx->pc = 0x31751Cu;
label_31751c:
    // 0x31751c: 0xa7a60270  sh          $a2, 0x270($sp)
    ctx->pc = 0x31751cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 624), (uint16_t)GPR_U32(ctx, 6));
label_317520:
    // 0x317520: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x317520u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_317524:
    // 0x317524: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x317524u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_317528:
    // 0x317528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x317528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31752c:
    // 0x31752c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x31752cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_317530:
    // 0x317530: 0xa7a20272  sh          $v0, 0x272($sp)
    ctx->pc = 0x317530u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 626), (uint16_t)GPR_U32(ctx, 2));
label_317534:
    // 0x317534: 0x10000043  b           . + 4 + (0x43 << 2)
label_317538:
    if (ctx->pc == 0x317538u) {
        ctx->pc = 0x317538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317534u;
        // 0x317538: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31753Cu;
        goto label_31753c;
    }
    ctx->pc = 0x317534u;
    {
        const bool branch_taken_0x317534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317534u;
        // 0x317538: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317534) {
            ctx->pc = 0x317644u;
            goto label_317644;
        }
    }
    ctx->pc = 0x31753Cu;
label_31753c:
    // 0x31753c: 0x10000037  b           . + 4 + (0x37 << 2)
label_317540:
    if (ctx->pc == 0x317540u) {
        ctx->pc = 0x317540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31753Cu;
        // 0x317540: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317544u;
        goto label_317544;
    }
    ctx->pc = 0x31753Cu;
    {
        const bool branch_taken_0x31753c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31753Cu;
        // 0x317540: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31753c) {
            ctx->pc = 0x31761Cu;
            goto label_31761c;
        }
    }
    ctx->pc = 0x317544u;
label_317544:
    // 0x317544: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x317544u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_317548:
    // 0x317548: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x317548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_31754c:
    // 0x31754c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31754cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_317550:
    // 0x317550: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x317550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_317554:
    // 0x317554: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x317554u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_317558:
    // 0x317558: 0x3066000c  andi        $a2, $v1, 0xC
    ctx->pc = 0x317558u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
label_31755c:
    // 0x31755c: 0x8fa302e8  lw          $v1, 0x2E8($sp)
    ctx->pc = 0x31755cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
label_317560:
    // 0x317560: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x317560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_317564:
    // 0x317564: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x317564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317568:
    // 0x317568: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x317568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31756c:
    // 0x31756c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31756cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317570:
    // 0x317570: 0x0  nop
    ctx->pc = 0x317570u;
    // NOP
label_317574:
    // 0x317574: 0x4501fff1  bc1t        . + 4 + (-0xF << 2)
label_317578:
    if (ctx->pc == 0x317578u) {
        ctx->pc = 0x317578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317574u;
        // 0x317578: 0x8fa502ec  lw          $a1, 0x2EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 748)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31757Cu;
        goto label_31757c;
    }
    ctx->pc = 0x317574u;
    {
        const bool branch_taken_0x317574 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x317578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317574u;
        // 0x317578: 0x8fa502ec  lw          $a1, 0x2EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317574) {
            ctx->pc = 0x31753Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31753c;
        }
    }
    ctx->pc = 0x31757Cu;
label_31757c:
    // 0x31757c: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x31757cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_317580:
    // 0x317580: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x317580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317584:
    // 0x317584: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x317584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_317588:
    // 0x317588: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x317588u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_31758c:
    // 0x31758c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317590:
    // 0x317590: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x317590u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317594:
    // 0x317594: 0x0  nop
    ctx->pc = 0x317594u;
    // NOP
label_317598:
    // 0x317598: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_31759c:
    if (ctx->pc == 0x31759Cu) {
        ctx->pc = 0x31759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317598u;
        // 0x31759c: 0x8fa302f0  lw          $v1, 0x2F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3175A0u;
        goto label_3175a0;
    }
    ctx->pc = 0x317598u;
    {
        const bool branch_taken_0x317598 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317598u;
        // 0x31759c: 0x8fa302f0  lw          $v1, 0x2F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317598) {
            ctx->pc = 0x31761Cu;
            goto label_31761c;
        }
    }
    ctx->pc = 0x3175A0u;
label_3175a0:
    // 0x3175a0: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x3175a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
label_3175a4:
    // 0x3175a4: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x3175a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3175a8:
    // 0x3175a8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3175a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3175ac:
    // 0x3175ac: 0x24e30008  addiu       $v1, $a3, 0x8
    ctx->pc = 0x3175acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_3175b0:
    // 0x3175b0: 0x8c65fffc  lw          $a1, -0x4($v1)
    ctx->pc = 0x3175b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_3175b4:
    // 0x3175b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3175b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3175b8:
    // 0x3175b8: 0xafa30264  sw          $v1, 0x264($sp)
    ctx->pc = 0x3175b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 3));
label_3175bc:
    // 0x3175bc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_3175c0:
    if (ctx->pc == 0x3175C0u) {
        ctx->pc = 0x3175C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3175BCu;
        // 0x3175c0: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3175C4u;
        goto label_3175c4;
    }
    ctx->pc = 0x3175BCu;
    {
        const bool branch_taken_0x3175bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3175C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3175BCu;
        // 0x3175c0: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3175bc) {
            ctx->pc = 0x3175E0u;
            goto label_3175e0;
        }
    }
    ctx->pc = 0x3175C4u;
label_3175c4:
    // 0x3175c4: 0x61042  srl         $v0, $a2, 1
    ctx->pc = 0x3175c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_3175c8:
    // 0x3175c8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3175c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3175cc:
    // 0x3175cc: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x3175ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_3175d0:
    // 0x3175d0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3175d0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_3175d4:
    // 0x3175d4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3175d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_3175d8:
    // 0x3175d8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3175d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3175dc:
    // 0x3175dc: 0x0  nop
    ctx->pc = 0x3175dcu;
    // NOP
label_3175e0:
    // 0x3175e0: 0x8fa302f4  lw          $v1, 0x2F4($sp)
    ctx->pc = 0x3175e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
label_3175e4:
    // 0x3175e4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x3175e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3175e8:
    // 0x3175e8: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x3175e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3175ec:
    // 0x3175ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3175ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3175f0:
    // 0x3175f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3175f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3175f4:
    // 0x3175f4: 0x0  nop
    ctx->pc = 0x3175f4u;
    // NOP
label_3175f8:
    // 0x3175f8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_3175fc:
    if (ctx->pc == 0x3175FCu) {
        ctx->pc = 0x3175FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3175F8u;
        // 0x3175fc: 0x8fa20264  lw          $v0, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317600u;
        goto label_317600;
    }
    ctx->pc = 0x3175F8u;
    {
        const bool branch_taken_0x3175f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3175FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3175F8u;
        // 0x3175fc: 0x8fa20264  lw          $v0, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3175f8) {
            ctx->pc = 0x31761Cu;
            goto label_31761c;
        }
    }
    ctx->pc = 0x317600u;
label_317600:
    // 0x317600: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x317600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_317604:
    // 0x317604: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x317604u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_317608:
    // 0x317608: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x317608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_31760c:
    // 0x31760c: 0x8c44fffc  lw          $a0, -0x4($v0)
    ctx->pc = 0x31760cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_317610:
    // 0x317610: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x317610u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_317614:
    // 0x317614: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x317614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_317618:
    // 0x317618: 0xac44fffc  sw          $a0, -0x4($v0)
    ctx->pc = 0x317618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 4));
label_31761c:
    // 0x31761c: 0x8fa50264  lw          $a1, 0x264($sp)
    ctx->pc = 0x31761cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_317620:
    // 0x317620: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x317620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_317624:
    // 0x317624: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x317624u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_317628:
    // 0x317628: 0x1049ff99  beq         $v0, $t1, . + 4 + (-0x67 << 2)
label_31762c:
    if (ctx->pc == 0x31762Cu) {
        ctx->pc = 0x31762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317628u;
        // 0x31762c: 0x8fa70264  lw          $a3, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317630u;
        goto label_317630;
    }
    ctx->pc = 0x317628u;
    {
        const bool branch_taken_0x317628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x31762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317628u;
        // 0x31762c: 0x8fa70264  lw          $a3, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317628) {
            ctx->pc = 0x317490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317490;
        }
    }
    ctx->pc = 0x317630u;
label_317630:
    // 0x317630: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x317630u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_317634:
    // 0x317634: 0x8cb70004  lw          $s7, 0x4($a1)
    ctx->pc = 0x317634u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_317638:
    // 0x317638: 0xa7a30270  sh          $v1, 0x270($sp)
    ctx->pc = 0x317638u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 624), (uint16_t)GPR_U32(ctx, 3));
label_31763c:
    // 0x31763c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x31763cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_317640:
    // 0x317640: 0xa7a20272  sh          $v0, 0x272($sp)
    ctx->pc = 0x317640u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 626), (uint16_t)GPR_U32(ctx, 2));
label_317644:
    // 0x317644: 0x97b40270  lhu         $s4, 0x270($sp)
    ctx->pc = 0x317644u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 624)));
label_317648:
    // 0x317648: 0x97a20272  lhu         $v0, 0x272($sp)
    ctx->pc = 0x317648u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 626)));
label_31764c:
    // 0x31764c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x31764cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_317650:
    // 0x317650: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x317650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_317654:
    // 0x317654: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
label_317658:
    if (ctx->pc == 0x317658u) {
        ctx->pc = 0x317658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317654u;
        // 0x317658: 0x8fa30264  lw          $v1, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31765Cu;
        goto label_31765c;
    }
    ctx->pc = 0x317654u;
    {
        const bool branch_taken_0x317654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317654u;
        // 0x317658: 0x8fa30264  lw          $v1, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317654) {
            ctx->pc = 0x31787Cu;
            goto label_31787c;
        }
    }
    ctx->pc = 0x31765Cu;
label_31765c:
    // 0x31765c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x31765cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_317660:
    // 0x317660: 0x241e000c  addiu       $fp, $zero, 0xC
    ctx->pc = 0x317660u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_317664:
    // 0x317664: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x317664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_317668:
    // 0x317668: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x317668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_31766c:
    // 0x31766c: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x31766cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_317670:
    // 0x317670: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_317674:
    if (ctx->pc == 0x317674u) {
        ctx->pc = 0x317674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317670u;
        // 0x317674: 0x141040  sll         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317678u;
        goto label_317678;
    }
    ctx->pc = 0x317670u;
    {
        const bool branch_taken_0x317670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x317674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317670u;
        // 0x317674: 0x141040  sll         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317670) {
            ctx->pc = 0x317684u;
            goto label_317684;
        }
    }
    ctx->pc = 0x317678u;
label_317678:
    // 0x317678: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x317678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31767c:
    // 0x31767c: 0x10000002  b           . + 4 + (0x2 << 2)
label_317680:
    if (ctx->pc == 0x317680u) {
        ctx->pc = 0x317680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31767Cu;
        // 0x317680: 0x94530000  lhu         $s3, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317684u;
        goto label_317684;
    }
    ctx->pc = 0x31767Cu;
    {
        const bool branch_taken_0x31767c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31767Cu;
        // 0x317680: 0x94530000  lhu         $s3, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31767c) {
            ctx->pc = 0x317688u;
            goto label_317688;
        }
    }
    ctx->pc = 0x317684u;
label_317684:
    // 0x317684: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x317684u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_317688:
    // 0x317688: 0x8fa502d8  lw          $a1, 0x2D8($sp)
    ctx->pc = 0x317688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
label_31768c:
    // 0x31768c: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x31768cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_317690:
    // 0x317690: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x317690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_317694:
    // 0x317694: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x317694u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_317698:
    // 0x317698: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x317698u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31769c:
    // 0x31769c: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x31769cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_3176a0:
    // 0x3176a0: 0x7e1018  mult        $v0, $v1, $fp
    ctx->pc = 0x3176a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3176a4:
    // 0x3176a4: 0x4b9021  addu        $s2, $v0, $t3
    ctx->pc = 0x3176a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_3176a8:
    // 0x3176a8: 0x9e1018  mult        $v0, $a0, $fp
    ctx->pc = 0x3176a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3176ac:
    // 0x3176ac: 0x4b8021  addu        $s0, $v0, $t3
    ctx->pc = 0x3176acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_3176b0:
    // 0x3176b0: 0xbe1018  mult        $v0, $a1, $fp
    ctx->pc = 0x3176b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3176b4:
    // 0x3176b4: 0x12e00011  beqz        $s7, . + 4 + (0x11 << 2)
label_3176b8:
    if (ctx->pc == 0x3176B8u) {
        ctx->pc = 0x3176B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3176B4u;
        // 0x3176b8: 0x4b8821  addu        $s1, $v0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3176BCu;
        goto label_3176bc;
    }
    ctx->pc = 0x3176B4u;
    {
        const bool branch_taken_0x3176b4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x3176B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3176B4u;
        // 0x3176b8: 0x4b8821  addu        $s1, $v0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3176b4) {
            ctx->pc = 0x3176FCu;
            goto label_3176fc;
        }
    }
    ctx->pc = 0x3176BCu;
label_3176bc:
    // 0x3176bc: 0x7fa90300  sq          $t1, 0x300($sp)
    ctx->pc = 0x3176bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 9));
label_3176c0:
    // 0x3176c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3176c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3176c4:
    // 0x3176c4: 0x7faa0310  sq          $t2, 0x310($sp)
    ctx->pc = 0x3176c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 10));
label_3176c8:
    // 0x3176c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3176c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3176cc:
    // 0x3176cc: 0x7fab0320  sq          $t3, 0x320($sp)
    ctx->pc = 0x3176ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 11));
label_3176d0:
    // 0x3176d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3176d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3176d4:
    // 0x3176d4: 0x7fac0330  sq          $t4, 0x330($sp)
    ctx->pc = 0x3176d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 12));
label_3176d8:
    // 0x3176d8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3176d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3176dc:
    // 0x3176dc: 0xc0f172c  jal         func_3C5CB0
label_3176e0:
    if (ctx->pc == 0x3176E0u) {
        ctx->pc = 0x3176E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3176DCu;
        // 0x3176e0: 0x7fad0340  sq          $t5, 0x340($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3176E4u;
        goto label_3176e4;
    }
    ctx->pc = 0x3176DCu;
    SET_GPR_U32(ctx, 31, 0x3176E4u);
    ctx->pc = 0x3176E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3176DCu;
    // 0x3176e0: 0x7fad0340  sq          $t5, 0x340($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5CB0u, 0x3176DCu, 0x3176E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3176E4u;
label_3176e4:
    // 0x3176e4: 0x7ba90300  lq          $t1, 0x300($sp)
    ctx->pc = 0x3176e4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_3176e8:
    // 0x3176e8: 0x7baa0310  lq          $t2, 0x310($sp)
    ctx->pc = 0x3176e8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_3176ec:
    // 0x3176ec: 0x7bab0320  lq          $t3, 0x320($sp)
    ctx->pc = 0x3176ecu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 800)));
label_3176f0:
    // 0x3176f0: 0x7bac0330  lq          $t4, 0x330($sp)
    ctx->pc = 0x3176f0u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 816)));
label_3176f4:
    // 0x3176f4: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
label_3176f8:
    if (ctx->pc == 0x3176F8u) {
        ctx->pc = 0x3176F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3176F4u;
        // 0x3176f8: 0x7bad0340  lq          $t5, 0x340($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 832)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3176FCu;
        goto label_3176fc;
    }
    ctx->pc = 0x3176F4u;
    {
        const bool branch_taken_0x3176f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3176F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3176F4u;
        // 0x3176f8: 0x7bad0340  lq          $t5, 0x340($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3176f4) {
            ctx->pc = 0x317858u;
            goto label_317858;
        }
    }
    ctx->pc = 0x3176FCu;
label_3176fc:
    // 0x3176fc: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x3176fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_317700:
    // 0x317700: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x317700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_317704:
    // 0x317704: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x317704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_317708:
    // 0x317708: 0xb3a30293  sdl         $v1, 0x293($sp)
    ctx->pc = 0x317708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 659); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31770c:
    // 0x31770c: 0xb7a3028c  sdr         $v1, 0x28C($sp)
    ctx->pc = 0x31770cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 652); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_317710:
    // 0x317710: 0xafa40294  sw          $a0, 0x294($sp)
    ctx->pc = 0x317710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 4));
label_317714:
    // 0x317714: 0xafb30298  sw          $s3, 0x298($sp)
    ctx->pc = 0x317714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 19));
label_317718:
    // 0x317718: 0xafb0029c  sw          $s0, 0x29C($sp)
    ctx->pc = 0x317718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 16));
label_31771c:
    // 0x31771c: 0xafb102a0  sw          $s1, 0x2A0($sp)
    ctx->pc = 0x31771cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 17));
label_317720:
    // 0x317720: 0xafb202a4  sw          $s2, 0x2A4($sp)
    ctx->pc = 0x317720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 18));
label_317724:
    // 0x317724: 0xc6270000  lwc1        $f7, 0x0($s1)
    ctx->pc = 0x317724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_317728:
    // 0x317728: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x317728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31772c:
    // 0x31772c: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x31772cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_317730:
    // 0x317730: 0xe7a702b0  swc1        $f7, 0x2B0($sp)
    ctx->pc = 0x317730u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
label_317734:
    // 0x317734: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x317734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317738:
    // 0x317738: 0xc6260004  lwc1        $f6, 0x4($s1)
    ctx->pc = 0x317738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_31773c:
    // 0x31773c: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x31773cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_317740:
    // 0x317740: 0xe7a602b4  swc1        $f6, 0x2B4($sp)
    ctx->pc = 0x317740u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 692), bits); }
label_317744:
    // 0x317744: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x317744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_317748:
    // 0x317748: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x317748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31774c:
    // 0x31774c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x31774cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_317750:
    // 0x317750: 0xe7a502b8  swc1        $f5, 0x2B8($sp)
    ctx->pc = 0x317750u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
label_317754:
    // 0x317754: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x317754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_317758:
    // 0x317758: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x317758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31775c:
    // 0x31775c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x31775cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_317760:
    // 0x317760: 0xe7a202c0  swc1        $f2, 0x2C0($sp)
    ctx->pc = 0x317760u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_317764:
    // 0x317764: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x317764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317768:
    // 0x317768: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x317768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_31776c:
    // 0x31776c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x31776cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_317770:
    // 0x317770: 0xe7a402c4  swc1        $f4, 0x2C4($sp)
    ctx->pc = 0x317770u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
label_317774:
    // 0x317774: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x317774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317778:
    // 0x317778: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x317778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31777c:
    // 0x31777c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31777cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_317780:
    // 0x317780: 0xe7a102c8  swc1        $f1, 0x2C8($sp)
    ctx->pc = 0x317780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
label_317784:
    // 0x317784: 0x46013002  mul.s       $f0, $f6, $f1
    ctx->pc = 0x317784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_317788:
    // 0x317788: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x317788u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_31778c:
    // 0x31778c: 0x460438c2  mul.s       $f3, $f7, $f4
    ctx->pc = 0x31778cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_317790:
    // 0x317790: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x317790u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_317794:
    // 0x317794: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x317794u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_317798:
    // 0x317798: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x317798u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_31779c:
    // 0x31779c: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x31779cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_3177a0:
    // 0x3177a0: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x3177a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_3177a4:
    // 0x3177a4: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x3177a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_3177a8:
    // 0x3177a8: 0xe7a30288  swc1        $f3, 0x288($sp)
    ctx->pc = 0x3177a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_3177ac:
    // 0x3177ac: 0xe7a20284  swc1        $f2, 0x284($sp)
    ctx->pc = 0x3177acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
label_3177b0:
    // 0x3177b0: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x3177b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_3177b4:
    // 0x3177b4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3177b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_3177b8:
    // 0x3177b8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x3177b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_3177bc:
    // 0x3177bc: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x3177bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_3177c0:
    // 0x3177c0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3177c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3177c4:
    // 0x3177c4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3177c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3177c8:
    // 0x3177c8: 0x46000004  c1          0x4
    ctx->pc = 0x3177c8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_3177cc:
    // 0x3177cc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x3177ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3177d0:
    // 0x3177d0: 0x0  nop
    ctx->pc = 0x3177d0u;
    // NOP
label_3177d4:
    // 0x3177d4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_3177d8:
    if (ctx->pc == 0x3177D8u) {
        ctx->pc = 0x3177D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3177D4u;
        // 0x3177d8: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3177DCu;
        goto label_3177dc;
    }
    ctx->pc = 0x3177D4u;
    {
        const bool branch_taken_0x3177d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3177D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3177D4u;
        // 0x3177d8: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3177d4) {
            ctx->pc = 0x3177E8u;
            goto label_3177e8;
        }
    }
    ctx->pc = 0x3177DCu;
label_3177dc:
    // 0x3177dc: 0x4600a1c3  div.s       $f7, $f20, $f0
    ctx->pc = 0x3177dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_3177e0:
    // 0x3177e0: 0x10000003  b           . + 4 + (0x3 << 2)
label_3177e4:
    if (ctx->pc == 0x3177E4u) {
        ctx->pc = 0x3177E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3177E0u;
        // 0x3177e4: 0xc7a00280  lwc1        $f0, 0x280($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3177E8u;
        goto label_3177e8;
    }
    ctx->pc = 0x3177E0u;
    {
        const bool branch_taken_0x3177e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3177E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3177E0u;
        // 0x3177e4: 0xc7a00280  lwc1        $f0, 0x280($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3177e0) {
            ctx->pc = 0x3177F0u;
            goto label_3177f0;
        }
    }
    ctx->pc = 0x3177E8u;
label_3177e8:
    // 0x3177e8: 0xc7a00280  lwc1        $f0, 0x280($sp)
    ctx->pc = 0x3177e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3177ec:
    // 0x3177ec: 0x0  nop
    ctx->pc = 0x3177ecu;
    // NOP
label_3177f0:
    // 0x3177f0: 0xc7a10284  lwc1        $f1, 0x284($sp)
    ctx->pc = 0x3177f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3177f4:
    // 0x3177f4: 0xc7a20288  lwc1        $f2, 0x288($sp)
    ctx->pc = 0x3177f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3177f8:
    // 0x3177f8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x3177f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_3177fc:
    // 0x3177fc: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x3177fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_317800:
    // 0x317800: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x317800u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_317804:
    // 0x317804: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x317804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_317808:
    // 0x317808: 0xe7a10284  swc1        $f1, 0x284($sp)
    ctx->pc = 0x317808u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
label_31780c:
    // 0x31780c: 0xe7a20288  swc1        $f2, 0x288($sp)
    ctx->pc = 0x31780cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_317810:
    // 0x317810: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x317810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_317814:
    // 0x317814: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x317814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_317818:
    // 0x317818: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x317818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_31781c:
    // 0x31781c: 0x8fa702d4  lw          $a3, 0x2D4($sp)
    ctx->pc = 0x31781cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
label_317820:
    // 0x317820: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x317820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_317824:
    // 0x317824: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x317824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_317828:
    // 0x317828: 0x7fa90300  sq          $t1, 0x300($sp)
    ctx->pc = 0x317828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 9));
label_31782c:
    // 0x31782c: 0x7faa0310  sq          $t2, 0x310($sp)
    ctx->pc = 0x31782cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 10));
label_317830:
    // 0x317830: 0x7fab0320  sq          $t3, 0x320($sp)
    ctx->pc = 0x317830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 11));
label_317834:
    // 0x317834: 0x7fac0330  sq          $t4, 0x330($sp)
    ctx->pc = 0x317834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 12));
label_317838:
    // 0x317838: 0x60f809  jalr        $v1
label_31783c:
    if (ctx->pc == 0x31783Cu) {
        ctx->pc = 0x31783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317838u;
        // 0x31783c: 0x7fad0340  sq          $t5, 0x340($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317840u;
        goto label_317840;
    }
    ctx->pc = 0x317838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x317840u);
        ctx->pc = 0x31783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317838u;
        // 0x31783c: 0x7fad0340  sq          $t5, 0x340($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317838u, 0x317840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x317840u;
label_317840:
    // 0x317840: 0x7ba90300  lq          $t1, 0x300($sp)
    ctx->pc = 0x317840u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_317844:
    // 0x317844: 0x7baa0310  lq          $t2, 0x310($sp)
    ctx->pc = 0x317844u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_317848:
    // 0x317848: 0x7bab0320  lq          $t3, 0x320($sp)
    ctx->pc = 0x317848u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 800)));
label_31784c:
    // 0x31784c: 0x7bac0330  lq          $t4, 0x330($sp)
    ctx->pc = 0x31784cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 816)));
label_317850:
    // 0x317850: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_317854:
    if (ctx->pc == 0x317854u) {
        ctx->pc = 0x317854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317850u;
        // 0x317854: 0x7bad0340  lq          $t5, 0x340($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 832)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317858u;
        goto label_317858;
    }
    ctx->pc = 0x317850u;
    {
        const bool branch_taken_0x317850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317850u;
        // 0x317854: 0x7bad0340  lq          $t5, 0x340($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317850) {
            ctx->pc = 0x31789Cu;
            goto label_31789c;
        }
    }
    ctx->pc = 0x317858u;
label_317858:
    // 0x317858: 0x97a20270  lhu         $v0, 0x270($sp)
    ctx->pc = 0x317858u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 624)));
label_31785c:
    // 0x31785c: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x31785cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_317860:
    // 0x317860: 0x97a40272  lhu         $a0, 0x272($sp)
    ctx->pc = 0x317860u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 626)));
label_317864:
    // 0x317864: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x317864u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_317868:
    // 0x317868: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x317868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_31786c:
    // 0x31786c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x31786cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_317870:
    // 0x317870: 0x5440ff7f  bnel        $v0, $zero, . + 4 + (-0x81 << 2)
label_317874:
    if (ctx->pc == 0x317874u) {
        ctx->pc = 0x317874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317870u;
        // 0x317874: 0x8ea30024  lw          $v1, 0x24($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317878u;
        goto label_317878;
    }
    ctx->pc = 0x317870u;
    {
        const bool branch_taken_0x317870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317870) {
            ctx->pc = 0x317874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317870u;
            // 0x317874: 0x8ea30024  lw          $v1, 0x24($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317670;
        }
    }
    ctx->pc = 0x317878u;
label_317878:
    // 0x317878: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x317878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_31787c:
    // 0x31787c: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x31787cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_317880:
    // 0x317880: 0x5440feff  bnel        $v0, $zero, . + 4 + (-0x101 << 2)
label_317884:
    if (ctx->pc == 0x317884u) {
        ctx->pc = 0x317884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317880u;
        // 0x317884: 0x8c64fff8  lw          $a0, -0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317888u;
        goto label_317888;
    }
    ctx->pc = 0x317880u;
    {
        const bool branch_taken_0x317880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317880) {
            ctx->pc = 0x317884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317880u;
            // 0x317884: 0x8c64fff8  lw          $a0, -0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317480;
        }
    }
    ctx->pc = 0x317888u;
label_317888:
    // 0x317888: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x317888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_31788c:
    // 0x31788c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x31788cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_317890:
    // 0x317890: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x317890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_317894:
    // 0x317894: 0x5440fe4e  bnel        $v0, $zero, . + 4 + (-0x1B2 << 2)
label_317898:
    if (ctx->pc == 0x317898u) {
        ctx->pc = 0x317898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317894u;
        // 0x317898: 0x8c62fffc  lw          $v0, -0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31789Cu;
        goto label_31789c;
    }
    ctx->pc = 0x317894u;
    {
        const bool branch_taken_0x317894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317894) {
            ctx->pc = 0x317898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317894u;
            // 0x317898: 0x8c62fffc  lw          $v0, -0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3171D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3171d0;
        }
    }
    ctx->pc = 0x31789Cu;
label_31789c:
    // 0x31789c: 0x7bb003e0  lq          $s0, 0x3E0($sp)
    ctx->pc = 0x31789cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 992)));
label_3178a0:
    // 0x3178a0: 0x7bb103d0  lq          $s1, 0x3D0($sp)
    ctx->pc = 0x3178a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 976)));
label_3178a4:
    // 0x3178a4: 0x7bb203c0  lq          $s2, 0x3C0($sp)
    ctx->pc = 0x3178a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 960)));
label_3178a8:
    // 0x3178a8: 0x7bb303b0  lq          $s3, 0x3B0($sp)
    ctx->pc = 0x3178a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 944)));
label_3178ac:
    // 0x3178ac: 0x7bb403a0  lq          $s4, 0x3A0($sp)
    ctx->pc = 0x3178acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 928)));
label_3178b0:
    // 0x3178b0: 0x7bb50390  lq          $s5, 0x390($sp)
    ctx->pc = 0x3178b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 912)));
label_3178b4:
    // 0x3178b4: 0x7bb60380  lq          $s6, 0x380($sp)
    ctx->pc = 0x3178b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 896)));
label_3178b8:
    // 0x3178b8: 0x7bb70370  lq          $s7, 0x370($sp)
    ctx->pc = 0x3178b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 880)));
label_3178bc:
    // 0x3178bc: 0x7bbe0360  lq          $fp, 0x360($sp)
    ctx->pc = 0x3178bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 864)));
label_3178c0:
    // 0x3178c0: 0xdfbf0350  ld          $ra, 0x350($sp)
    ctx->pc = 0x3178c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 848)));
label_3178c4:
    // 0x3178c4: 0xc7b503f8  lwc1        $f21, 0x3F8($sp)
    ctx->pc = 0x3178c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3178c8:
    // 0x3178c8: 0xc7b403f0  lwc1        $f20, 0x3F0($sp)
    ctx->pc = 0x3178c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3178cc:
    // 0x3178cc: 0x3e00008  jr          $ra
label_3178d0:
    if (ctx->pc == 0x3178D0u) {
        ctx->pc = 0x3178D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3178CCu;
        // 0x3178d0: 0x27bd0400  addiu       $sp, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3178D4u;
        goto label_3178d4;
    }
    ctx->pc = 0x3178CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3178D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3178CCu;
        // 0x3178d0: 0x27bd0400  addiu       $sp, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3178CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3178D4u;
label_3178d4:
    // 0x3178d4: 0x0  nop
    ctx->pc = 0x3178d4u;
    // NOP
    ctx->pc = 0x3178d8u;
}
