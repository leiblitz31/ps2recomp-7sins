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

// Function: sub_001431B0
// Address: 0x1431b0 - 0x143b20
void sub_001431B0_0x1431b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001431B0_0x1431b0");
#endif

    switch (ctx->pc) {
        case 0x1431b0u: goto label_1431b0;
        case 0x1431b4u: goto label_1431b4;
        case 0x1431b8u: goto label_1431b8;
        case 0x1431bcu: goto label_1431bc;
        case 0x1431c0u: goto label_1431c0;
        case 0x1431c4u: goto label_1431c4;
        case 0x1431c8u: goto label_1431c8;
        case 0x1431ccu: goto label_1431cc;
        case 0x1431d0u: goto label_1431d0;
        case 0x1431d4u: goto label_1431d4;
        case 0x1431d8u: goto label_1431d8;
        case 0x1431dcu: goto label_1431dc;
        case 0x1431e0u: goto label_1431e0;
        case 0x1431e4u: goto label_1431e4;
        case 0x1431e8u: goto label_1431e8;
        case 0x1431ecu: goto label_1431ec;
        case 0x1431f0u: goto label_1431f0;
        case 0x1431f4u: goto label_1431f4;
        case 0x1431f8u: goto label_1431f8;
        case 0x1431fcu: goto label_1431fc;
        case 0x143200u: goto label_143200;
        case 0x143204u: goto label_143204;
        case 0x143208u: goto label_143208;
        case 0x14320cu: goto label_14320c;
        case 0x143210u: goto label_143210;
        case 0x143214u: goto label_143214;
        case 0x143218u: goto label_143218;
        case 0x14321cu: goto label_14321c;
        case 0x143220u: goto label_143220;
        case 0x143224u: goto label_143224;
        case 0x143228u: goto label_143228;
        case 0x14322cu: goto label_14322c;
        case 0x143230u: goto label_143230;
        case 0x143234u: goto label_143234;
        case 0x143238u: goto label_143238;
        case 0x14323cu: goto label_14323c;
        case 0x143240u: goto label_143240;
        case 0x143244u: goto label_143244;
        case 0x143248u: goto label_143248;
        case 0x14324cu: goto label_14324c;
        case 0x143250u: goto label_143250;
        case 0x143254u: goto label_143254;
        case 0x143258u: goto label_143258;
        case 0x14325cu: goto label_14325c;
        case 0x143260u: goto label_143260;
        case 0x143264u: goto label_143264;
        case 0x143268u: goto label_143268;
        case 0x14326cu: goto label_14326c;
        case 0x143270u: goto label_143270;
        case 0x143274u: goto label_143274;
        case 0x143278u: goto label_143278;
        case 0x14327cu: goto label_14327c;
        case 0x143280u: goto label_143280;
        case 0x143284u: goto label_143284;
        case 0x143288u: goto label_143288;
        case 0x14328cu: goto label_14328c;
        case 0x143290u: goto label_143290;
        case 0x143294u: goto label_143294;
        case 0x143298u: goto label_143298;
        case 0x14329cu: goto label_14329c;
        case 0x1432a0u: goto label_1432a0;
        case 0x1432a4u: goto label_1432a4;
        case 0x1432a8u: goto label_1432a8;
        case 0x1432acu: goto label_1432ac;
        case 0x1432b0u: goto label_1432b0;
        case 0x1432b4u: goto label_1432b4;
        case 0x1432b8u: goto label_1432b8;
        case 0x1432bcu: goto label_1432bc;
        case 0x1432c0u: goto label_1432c0;
        case 0x1432c4u: goto label_1432c4;
        case 0x1432c8u: goto label_1432c8;
        case 0x1432ccu: goto label_1432cc;
        case 0x1432d0u: goto label_1432d0;
        case 0x1432d4u: goto label_1432d4;
        case 0x1432d8u: goto label_1432d8;
        case 0x1432dcu: goto label_1432dc;
        case 0x1432e0u: goto label_1432e0;
        case 0x1432e4u: goto label_1432e4;
        case 0x1432e8u: goto label_1432e8;
        case 0x1432ecu: goto label_1432ec;
        case 0x1432f0u: goto label_1432f0;
        case 0x1432f4u: goto label_1432f4;
        case 0x1432f8u: goto label_1432f8;
        case 0x1432fcu: goto label_1432fc;
        case 0x143300u: goto label_143300;
        case 0x143304u: goto label_143304;
        case 0x143308u: goto label_143308;
        case 0x14330cu: goto label_14330c;
        case 0x143310u: goto label_143310;
        case 0x143314u: goto label_143314;
        case 0x143318u: goto label_143318;
        case 0x14331cu: goto label_14331c;
        case 0x143320u: goto label_143320;
        case 0x143324u: goto label_143324;
        case 0x143328u: goto label_143328;
        case 0x14332cu: goto label_14332c;
        case 0x143330u: goto label_143330;
        case 0x143334u: goto label_143334;
        case 0x143338u: goto label_143338;
        case 0x14333cu: goto label_14333c;
        case 0x143340u: goto label_143340;
        case 0x143344u: goto label_143344;
        case 0x143348u: goto label_143348;
        case 0x14334cu: goto label_14334c;
        case 0x143350u: goto label_143350;
        case 0x143354u: goto label_143354;
        case 0x143358u: goto label_143358;
        case 0x14335cu: goto label_14335c;
        case 0x143360u: goto label_143360;
        case 0x143364u: goto label_143364;
        case 0x143368u: goto label_143368;
        case 0x14336cu: goto label_14336c;
        case 0x143370u: goto label_143370;
        case 0x143374u: goto label_143374;
        case 0x143378u: goto label_143378;
        case 0x14337cu: goto label_14337c;
        case 0x143380u: goto label_143380;
        case 0x143384u: goto label_143384;
        case 0x143388u: goto label_143388;
        case 0x14338cu: goto label_14338c;
        case 0x143390u: goto label_143390;
        case 0x143394u: goto label_143394;
        case 0x143398u: goto label_143398;
        case 0x14339cu: goto label_14339c;
        case 0x1433a0u: goto label_1433a0;
        case 0x1433a4u: goto label_1433a4;
        case 0x1433a8u: goto label_1433a8;
        case 0x1433acu: goto label_1433ac;
        case 0x1433b0u: goto label_1433b0;
        case 0x1433b4u: goto label_1433b4;
        case 0x1433b8u: goto label_1433b8;
        case 0x1433bcu: goto label_1433bc;
        case 0x1433c0u: goto label_1433c0;
        case 0x1433c4u: goto label_1433c4;
        case 0x1433c8u: goto label_1433c8;
        case 0x1433ccu: goto label_1433cc;
        case 0x1433d0u: goto label_1433d0;
        case 0x1433d4u: goto label_1433d4;
        case 0x1433d8u: goto label_1433d8;
        case 0x1433dcu: goto label_1433dc;
        case 0x1433e0u: goto label_1433e0;
        case 0x1433e4u: goto label_1433e4;
        case 0x1433e8u: goto label_1433e8;
        case 0x1433ecu: goto label_1433ec;
        case 0x1433f0u: goto label_1433f0;
        case 0x1433f4u: goto label_1433f4;
        case 0x1433f8u: goto label_1433f8;
        case 0x1433fcu: goto label_1433fc;
        case 0x143400u: goto label_143400;
        case 0x143404u: goto label_143404;
        case 0x143408u: goto label_143408;
        case 0x14340cu: goto label_14340c;
        case 0x143410u: goto label_143410;
        case 0x143414u: goto label_143414;
        case 0x143418u: goto label_143418;
        case 0x14341cu: goto label_14341c;
        case 0x143420u: goto label_143420;
        case 0x143424u: goto label_143424;
        case 0x143428u: goto label_143428;
        case 0x14342cu: goto label_14342c;
        case 0x143430u: goto label_143430;
        case 0x143434u: goto label_143434;
        case 0x143438u: goto label_143438;
        case 0x14343cu: goto label_14343c;
        case 0x143440u: goto label_143440;
        case 0x143444u: goto label_143444;
        case 0x143448u: goto label_143448;
        case 0x14344cu: goto label_14344c;
        case 0x143450u: goto label_143450;
        case 0x143454u: goto label_143454;
        case 0x143458u: goto label_143458;
        case 0x14345cu: goto label_14345c;
        case 0x143460u: goto label_143460;
        case 0x143464u: goto label_143464;
        case 0x143468u: goto label_143468;
        case 0x14346cu: goto label_14346c;
        case 0x143470u: goto label_143470;
        case 0x143474u: goto label_143474;
        case 0x143478u: goto label_143478;
        case 0x14347cu: goto label_14347c;
        case 0x143480u: goto label_143480;
        case 0x143484u: goto label_143484;
        case 0x143488u: goto label_143488;
        case 0x14348cu: goto label_14348c;
        case 0x143490u: goto label_143490;
        case 0x143494u: goto label_143494;
        case 0x143498u: goto label_143498;
        case 0x14349cu: goto label_14349c;
        case 0x1434a0u: goto label_1434a0;
        case 0x1434a4u: goto label_1434a4;
        case 0x1434a8u: goto label_1434a8;
        case 0x1434acu: goto label_1434ac;
        case 0x1434b0u: goto label_1434b0;
        case 0x1434b4u: goto label_1434b4;
        case 0x1434b8u: goto label_1434b8;
        case 0x1434bcu: goto label_1434bc;
        case 0x1434c0u: goto label_1434c0;
        case 0x1434c4u: goto label_1434c4;
        case 0x1434c8u: goto label_1434c8;
        case 0x1434ccu: goto label_1434cc;
        case 0x1434d0u: goto label_1434d0;
        case 0x1434d4u: goto label_1434d4;
        case 0x1434d8u: goto label_1434d8;
        case 0x1434dcu: goto label_1434dc;
        case 0x1434e0u: goto label_1434e0;
        case 0x1434e4u: goto label_1434e4;
        case 0x1434e8u: goto label_1434e8;
        case 0x1434ecu: goto label_1434ec;
        case 0x1434f0u: goto label_1434f0;
        case 0x1434f4u: goto label_1434f4;
        case 0x1434f8u: goto label_1434f8;
        case 0x1434fcu: goto label_1434fc;
        case 0x143500u: goto label_143500;
        case 0x143504u: goto label_143504;
        case 0x143508u: goto label_143508;
        case 0x14350cu: goto label_14350c;
        case 0x143510u: goto label_143510;
        case 0x143514u: goto label_143514;
        case 0x143518u: goto label_143518;
        case 0x14351cu: goto label_14351c;
        case 0x143520u: goto label_143520;
        case 0x143524u: goto label_143524;
        case 0x143528u: goto label_143528;
        case 0x14352cu: goto label_14352c;
        case 0x143530u: goto label_143530;
        case 0x143534u: goto label_143534;
        case 0x143538u: goto label_143538;
        case 0x14353cu: goto label_14353c;
        case 0x143540u: goto label_143540;
        case 0x143544u: goto label_143544;
        case 0x143548u: goto label_143548;
        case 0x14354cu: goto label_14354c;
        case 0x143550u: goto label_143550;
        case 0x143554u: goto label_143554;
        case 0x143558u: goto label_143558;
        case 0x14355cu: goto label_14355c;
        case 0x143560u: goto label_143560;
        case 0x143564u: goto label_143564;
        case 0x143568u: goto label_143568;
        case 0x14356cu: goto label_14356c;
        case 0x143570u: goto label_143570;
        case 0x143574u: goto label_143574;
        case 0x143578u: goto label_143578;
        case 0x14357cu: goto label_14357c;
        case 0x143580u: goto label_143580;
        case 0x143584u: goto label_143584;
        case 0x143588u: goto label_143588;
        case 0x14358cu: goto label_14358c;
        case 0x143590u: goto label_143590;
        case 0x143594u: goto label_143594;
        case 0x143598u: goto label_143598;
        case 0x14359cu: goto label_14359c;
        case 0x1435a0u: goto label_1435a0;
        case 0x1435a4u: goto label_1435a4;
        case 0x1435a8u: goto label_1435a8;
        case 0x1435acu: goto label_1435ac;
        case 0x1435b0u: goto label_1435b0;
        case 0x1435b4u: goto label_1435b4;
        case 0x1435b8u: goto label_1435b8;
        case 0x1435bcu: goto label_1435bc;
        case 0x1435c0u: goto label_1435c0;
        case 0x1435c4u: goto label_1435c4;
        case 0x1435c8u: goto label_1435c8;
        case 0x1435ccu: goto label_1435cc;
        case 0x1435d0u: goto label_1435d0;
        case 0x1435d4u: goto label_1435d4;
        case 0x1435d8u: goto label_1435d8;
        case 0x1435dcu: goto label_1435dc;
        case 0x1435e0u: goto label_1435e0;
        case 0x1435e4u: goto label_1435e4;
        case 0x1435e8u: goto label_1435e8;
        case 0x1435ecu: goto label_1435ec;
        case 0x1435f0u: goto label_1435f0;
        case 0x1435f4u: goto label_1435f4;
        case 0x1435f8u: goto label_1435f8;
        case 0x1435fcu: goto label_1435fc;
        case 0x143600u: goto label_143600;
        case 0x143604u: goto label_143604;
        case 0x143608u: goto label_143608;
        case 0x14360cu: goto label_14360c;
        case 0x143610u: goto label_143610;
        case 0x143614u: goto label_143614;
        case 0x143618u: goto label_143618;
        case 0x14361cu: goto label_14361c;
        case 0x143620u: goto label_143620;
        case 0x143624u: goto label_143624;
        case 0x143628u: goto label_143628;
        case 0x14362cu: goto label_14362c;
        case 0x143630u: goto label_143630;
        case 0x143634u: goto label_143634;
        case 0x143638u: goto label_143638;
        case 0x14363cu: goto label_14363c;
        case 0x143640u: goto label_143640;
        case 0x143644u: goto label_143644;
        case 0x143648u: goto label_143648;
        case 0x14364cu: goto label_14364c;
        case 0x143650u: goto label_143650;
        case 0x143654u: goto label_143654;
        case 0x143658u: goto label_143658;
        case 0x14365cu: goto label_14365c;
        case 0x143660u: goto label_143660;
        case 0x143664u: goto label_143664;
        case 0x143668u: goto label_143668;
        case 0x14366cu: goto label_14366c;
        case 0x143670u: goto label_143670;
        case 0x143674u: goto label_143674;
        case 0x143678u: goto label_143678;
        case 0x14367cu: goto label_14367c;
        case 0x143680u: goto label_143680;
        case 0x143684u: goto label_143684;
        case 0x143688u: goto label_143688;
        case 0x14368cu: goto label_14368c;
        case 0x143690u: goto label_143690;
        case 0x143694u: goto label_143694;
        case 0x143698u: goto label_143698;
        case 0x14369cu: goto label_14369c;
        case 0x1436a0u: goto label_1436a0;
        case 0x1436a4u: goto label_1436a4;
        case 0x1436a8u: goto label_1436a8;
        case 0x1436acu: goto label_1436ac;
        case 0x1436b0u: goto label_1436b0;
        case 0x1436b4u: goto label_1436b4;
        case 0x1436b8u: goto label_1436b8;
        case 0x1436bcu: goto label_1436bc;
        case 0x1436c0u: goto label_1436c0;
        case 0x1436c4u: goto label_1436c4;
        case 0x1436c8u: goto label_1436c8;
        case 0x1436ccu: goto label_1436cc;
        case 0x1436d0u: goto label_1436d0;
        case 0x1436d4u: goto label_1436d4;
        case 0x1436d8u: goto label_1436d8;
        case 0x1436dcu: goto label_1436dc;
        case 0x1436e0u: goto label_1436e0;
        case 0x1436e4u: goto label_1436e4;
        case 0x1436e8u: goto label_1436e8;
        case 0x1436ecu: goto label_1436ec;
        case 0x1436f0u: goto label_1436f0;
        case 0x1436f4u: goto label_1436f4;
        case 0x1436f8u: goto label_1436f8;
        case 0x1436fcu: goto label_1436fc;
        case 0x143700u: goto label_143700;
        case 0x143704u: goto label_143704;
        case 0x143708u: goto label_143708;
        case 0x14370cu: goto label_14370c;
        case 0x143710u: goto label_143710;
        case 0x143714u: goto label_143714;
        case 0x143718u: goto label_143718;
        case 0x14371cu: goto label_14371c;
        case 0x143720u: goto label_143720;
        case 0x143724u: goto label_143724;
        case 0x143728u: goto label_143728;
        case 0x14372cu: goto label_14372c;
        case 0x143730u: goto label_143730;
        case 0x143734u: goto label_143734;
        case 0x143738u: goto label_143738;
        case 0x14373cu: goto label_14373c;
        case 0x143740u: goto label_143740;
        case 0x143744u: goto label_143744;
        case 0x143748u: goto label_143748;
        case 0x14374cu: goto label_14374c;
        case 0x143750u: goto label_143750;
        case 0x143754u: goto label_143754;
        case 0x143758u: goto label_143758;
        case 0x14375cu: goto label_14375c;
        case 0x143760u: goto label_143760;
        case 0x143764u: goto label_143764;
        case 0x143768u: goto label_143768;
        case 0x14376cu: goto label_14376c;
        case 0x143770u: goto label_143770;
        case 0x143774u: goto label_143774;
        case 0x143778u: goto label_143778;
        case 0x14377cu: goto label_14377c;
        case 0x143780u: goto label_143780;
        case 0x143784u: goto label_143784;
        case 0x143788u: goto label_143788;
        case 0x14378cu: goto label_14378c;
        case 0x143790u: goto label_143790;
        case 0x143794u: goto label_143794;
        case 0x143798u: goto label_143798;
        case 0x14379cu: goto label_14379c;
        case 0x1437a0u: goto label_1437a0;
        case 0x1437a4u: goto label_1437a4;
        case 0x1437a8u: goto label_1437a8;
        case 0x1437acu: goto label_1437ac;
        case 0x1437b0u: goto label_1437b0;
        case 0x1437b4u: goto label_1437b4;
        case 0x1437b8u: goto label_1437b8;
        case 0x1437bcu: goto label_1437bc;
        case 0x1437c0u: goto label_1437c0;
        case 0x1437c4u: goto label_1437c4;
        case 0x1437c8u: goto label_1437c8;
        case 0x1437ccu: goto label_1437cc;
        case 0x1437d0u: goto label_1437d0;
        case 0x1437d4u: goto label_1437d4;
        case 0x1437d8u: goto label_1437d8;
        case 0x1437dcu: goto label_1437dc;
        case 0x1437e0u: goto label_1437e0;
        case 0x1437e4u: goto label_1437e4;
        case 0x1437e8u: goto label_1437e8;
        case 0x1437ecu: goto label_1437ec;
        case 0x1437f0u: goto label_1437f0;
        case 0x1437f4u: goto label_1437f4;
        case 0x1437f8u: goto label_1437f8;
        case 0x1437fcu: goto label_1437fc;
        case 0x143800u: goto label_143800;
        case 0x143804u: goto label_143804;
        case 0x143808u: goto label_143808;
        case 0x14380cu: goto label_14380c;
        case 0x143810u: goto label_143810;
        case 0x143814u: goto label_143814;
        case 0x143818u: goto label_143818;
        case 0x14381cu: goto label_14381c;
        case 0x143820u: goto label_143820;
        case 0x143824u: goto label_143824;
        case 0x143828u: goto label_143828;
        case 0x14382cu: goto label_14382c;
        case 0x143830u: goto label_143830;
        case 0x143834u: goto label_143834;
        case 0x143838u: goto label_143838;
        case 0x14383cu: goto label_14383c;
        case 0x143840u: goto label_143840;
        case 0x143844u: goto label_143844;
        case 0x143848u: goto label_143848;
        case 0x14384cu: goto label_14384c;
        case 0x143850u: goto label_143850;
        case 0x143854u: goto label_143854;
        case 0x143858u: goto label_143858;
        case 0x14385cu: goto label_14385c;
        case 0x143860u: goto label_143860;
        case 0x143864u: goto label_143864;
        case 0x143868u: goto label_143868;
        case 0x14386cu: goto label_14386c;
        case 0x143870u: goto label_143870;
        case 0x143874u: goto label_143874;
        case 0x143878u: goto label_143878;
        case 0x14387cu: goto label_14387c;
        case 0x143880u: goto label_143880;
        case 0x143884u: goto label_143884;
        case 0x143888u: goto label_143888;
        case 0x14388cu: goto label_14388c;
        case 0x143890u: goto label_143890;
        case 0x143894u: goto label_143894;
        case 0x143898u: goto label_143898;
        case 0x14389cu: goto label_14389c;
        case 0x1438a0u: goto label_1438a0;
        case 0x1438a4u: goto label_1438a4;
        case 0x1438a8u: goto label_1438a8;
        case 0x1438acu: goto label_1438ac;
        case 0x1438b0u: goto label_1438b0;
        case 0x1438b4u: goto label_1438b4;
        case 0x1438b8u: goto label_1438b8;
        case 0x1438bcu: goto label_1438bc;
        case 0x1438c0u: goto label_1438c0;
        case 0x1438c4u: goto label_1438c4;
        case 0x1438c8u: goto label_1438c8;
        case 0x1438ccu: goto label_1438cc;
        case 0x1438d0u: goto label_1438d0;
        case 0x1438d4u: goto label_1438d4;
        case 0x1438d8u: goto label_1438d8;
        case 0x1438dcu: goto label_1438dc;
        case 0x1438e0u: goto label_1438e0;
        case 0x1438e4u: goto label_1438e4;
        case 0x1438e8u: goto label_1438e8;
        case 0x1438ecu: goto label_1438ec;
        case 0x1438f0u: goto label_1438f0;
        case 0x1438f4u: goto label_1438f4;
        case 0x1438f8u: goto label_1438f8;
        case 0x1438fcu: goto label_1438fc;
        case 0x143900u: goto label_143900;
        case 0x143904u: goto label_143904;
        case 0x143908u: goto label_143908;
        case 0x14390cu: goto label_14390c;
        case 0x143910u: goto label_143910;
        case 0x143914u: goto label_143914;
        case 0x143918u: goto label_143918;
        case 0x14391cu: goto label_14391c;
        case 0x143920u: goto label_143920;
        case 0x143924u: goto label_143924;
        case 0x143928u: goto label_143928;
        case 0x14392cu: goto label_14392c;
        case 0x143930u: goto label_143930;
        case 0x143934u: goto label_143934;
        case 0x143938u: goto label_143938;
        case 0x14393cu: goto label_14393c;
        case 0x143940u: goto label_143940;
        case 0x143944u: goto label_143944;
        case 0x143948u: goto label_143948;
        case 0x14394cu: goto label_14394c;
        case 0x143950u: goto label_143950;
        case 0x143954u: goto label_143954;
        case 0x143958u: goto label_143958;
        case 0x14395cu: goto label_14395c;
        case 0x143960u: goto label_143960;
        case 0x143964u: goto label_143964;
        case 0x143968u: goto label_143968;
        case 0x14396cu: goto label_14396c;
        case 0x143970u: goto label_143970;
        case 0x143974u: goto label_143974;
        case 0x143978u: goto label_143978;
        case 0x14397cu: goto label_14397c;
        case 0x143980u: goto label_143980;
        case 0x143984u: goto label_143984;
        case 0x143988u: goto label_143988;
        case 0x14398cu: goto label_14398c;
        case 0x143990u: goto label_143990;
        case 0x143994u: goto label_143994;
        case 0x143998u: goto label_143998;
        case 0x14399cu: goto label_14399c;
        case 0x1439a0u: goto label_1439a0;
        case 0x1439a4u: goto label_1439a4;
        case 0x1439a8u: goto label_1439a8;
        case 0x1439acu: goto label_1439ac;
        case 0x1439b0u: goto label_1439b0;
        case 0x1439b4u: goto label_1439b4;
        case 0x1439b8u: goto label_1439b8;
        case 0x1439bcu: goto label_1439bc;
        case 0x1439c0u: goto label_1439c0;
        case 0x1439c4u: goto label_1439c4;
        case 0x1439c8u: goto label_1439c8;
        case 0x1439ccu: goto label_1439cc;
        case 0x1439d0u: goto label_1439d0;
        case 0x1439d4u: goto label_1439d4;
        case 0x1439d8u: goto label_1439d8;
        case 0x1439dcu: goto label_1439dc;
        case 0x1439e0u: goto label_1439e0;
        case 0x1439e4u: goto label_1439e4;
        case 0x1439e8u: goto label_1439e8;
        case 0x1439ecu: goto label_1439ec;
        case 0x1439f0u: goto label_1439f0;
        case 0x1439f4u: goto label_1439f4;
        case 0x1439f8u: goto label_1439f8;
        case 0x1439fcu: goto label_1439fc;
        case 0x143a00u: goto label_143a00;
        case 0x143a04u: goto label_143a04;
        case 0x143a08u: goto label_143a08;
        case 0x143a0cu: goto label_143a0c;
        case 0x143a10u: goto label_143a10;
        case 0x143a14u: goto label_143a14;
        case 0x143a18u: goto label_143a18;
        case 0x143a1cu: goto label_143a1c;
        case 0x143a20u: goto label_143a20;
        case 0x143a24u: goto label_143a24;
        case 0x143a28u: goto label_143a28;
        case 0x143a2cu: goto label_143a2c;
        case 0x143a30u: goto label_143a30;
        case 0x143a34u: goto label_143a34;
        case 0x143a38u: goto label_143a38;
        case 0x143a3cu: goto label_143a3c;
        case 0x143a40u: goto label_143a40;
        case 0x143a44u: goto label_143a44;
        case 0x143a48u: goto label_143a48;
        case 0x143a4cu: goto label_143a4c;
        case 0x143a50u: goto label_143a50;
        case 0x143a54u: goto label_143a54;
        case 0x143a58u: goto label_143a58;
        case 0x143a5cu: goto label_143a5c;
        case 0x143a60u: goto label_143a60;
        case 0x143a64u: goto label_143a64;
        case 0x143a68u: goto label_143a68;
        case 0x143a6cu: goto label_143a6c;
        case 0x143a70u: goto label_143a70;
        case 0x143a74u: goto label_143a74;
        case 0x143a78u: goto label_143a78;
        case 0x143a7cu: goto label_143a7c;
        case 0x143a80u: goto label_143a80;
        case 0x143a84u: goto label_143a84;
        case 0x143a88u: goto label_143a88;
        case 0x143a8cu: goto label_143a8c;
        case 0x143a90u: goto label_143a90;
        case 0x143a94u: goto label_143a94;
        case 0x143a98u: goto label_143a98;
        case 0x143a9cu: goto label_143a9c;
        case 0x143aa0u: goto label_143aa0;
        case 0x143aa4u: goto label_143aa4;
        case 0x143aa8u: goto label_143aa8;
        case 0x143aacu: goto label_143aac;
        case 0x143ab0u: goto label_143ab0;
        case 0x143ab4u: goto label_143ab4;
        case 0x143ab8u: goto label_143ab8;
        case 0x143abcu: goto label_143abc;
        case 0x143ac0u: goto label_143ac0;
        case 0x143ac4u: goto label_143ac4;
        case 0x143ac8u: goto label_143ac8;
        case 0x143accu: goto label_143acc;
        case 0x143ad0u: goto label_143ad0;
        case 0x143ad4u: goto label_143ad4;
        case 0x143ad8u: goto label_143ad8;
        case 0x143adcu: goto label_143adc;
        case 0x143ae0u: goto label_143ae0;
        case 0x143ae4u: goto label_143ae4;
        case 0x143ae8u: goto label_143ae8;
        case 0x143aecu: goto label_143aec;
        case 0x143af0u: goto label_143af0;
        case 0x143af4u: goto label_143af4;
        case 0x143af8u: goto label_143af8;
        case 0x143afcu: goto label_143afc;
        case 0x143b00u: goto label_143b00;
        case 0x143b04u: goto label_143b04;
        case 0x143b08u: goto label_143b08;
        case 0x143b0cu: goto label_143b0c;
        case 0x143b10u: goto label_143b10;
        case 0x143b14u: goto label_143b14;
        case 0x143b18u: goto label_143b18;
        case 0x143b1cu: goto label_143b1c;
        default: break;
    }

    ctx->pc = 0x1431b0u;

label_1431b0:
    // 0x1431b0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1431b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_1431b4:
    // 0x1431b4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1431b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1431b8:
    // 0x1431b8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1431b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1431bc:
    // 0x1431bc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1431bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1431c0:
    // 0x1431c0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1431c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1431c4:
    // 0x1431c4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1431c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1431c8:
    // 0x1431c8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1431c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1431cc:
    // 0x1431cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1431ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1431d0:
    // 0x1431d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1431d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1431d4:
    // 0x1431d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1431d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1431d8:
    // 0x1431d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1431d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1431dc:
    // 0x1431dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1431dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1431e0:
    // 0x1431e0: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x1431e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
label_1431e4:
    // 0x1431e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1431e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1431e8:
    // 0x1431e8: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1431e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1431ec:
    // 0x1431ec: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x1431ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_1431f0:
    // 0x1431f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1431f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1431f4:
    // 0x1431f4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1431f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1431f8:
    // 0x1431f8: 0x24a52a20  addiu       $a1, $a1, 0x2A20
    ctx->pc = 0x1431f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10784));
label_1431fc:
    // 0x1431fc: 0x27868c8c  addiu       $a2, $gp, -0x7374
    ctx->pc = 0x1431fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937740));
label_143200:
    // 0x143200: 0xc04206c  jal         func_1081B0
label_143204:
    if (ctx->pc == 0x143204u) {
        ctx->pc = 0x143208u;
        goto label_143208;
    }
    ctx->pc = 0x143200u;
    SET_GPR_U32(ctx, 31, 0x143208u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x143200u, 0x143208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143208u;
label_143208:
    // 0x143208: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x143208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_14320c:
    // 0x14320c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14320cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143210:
    // 0x143210: 0xc040304  jal         func_100C10
label_143214:
    if (ctx->pc == 0x143214u) {
        ctx->pc = 0x143218u;
        goto label_143218;
    }
    ctx->pc = 0x143210u;
    SET_GPR_U32(ctx, 31, 0x143218u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x143210u, 0x143218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143218u;
label_143218:
    // 0x143218: 0xc090864  jal         func_242190
label_14321c:
    if (ctx->pc == 0x14321Cu) {
        ctx->pc = 0x143220u;
        goto label_143220;
    }
    ctx->pc = 0x143218u;
    SET_GPR_U32(ctx, 31, 0x143220u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x143218u, 0x143220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143220u;
label_143220:
    // 0x143220: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x143220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143224:
    // 0x143224: 0xc090590  jal         func_241640
label_143228:
    if (ctx->pc == 0x143228u) {
        ctx->pc = 0x14322Cu;
        goto label_14322c;
    }
    ctx->pc = 0x143224u;
    SET_GPR_U32(ctx, 31, 0x14322Cu);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x143224u, 0x14322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14322Cu;
label_14322c:
    // 0x14322c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14322cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143230:
    // 0x143230: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x143230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_143234:
    // 0x143234: 0xc09157c  jal         func_2455F0
label_143238:
    if (ctx->pc == 0x143238u) {
        ctx->pc = 0x14323Cu;
        goto label_14323c;
    }
    ctx->pc = 0x143234u;
    SET_GPR_U32(ctx, 31, 0x14323Cu);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x143234u, 0x14323Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14323Cu;
label_14323c:
    // 0x14323c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x14323cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143240:
    // 0x143240: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x143240u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143244:
    // 0x143244: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x143244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_143248:
    // 0x143248: 0xc050ee0  jal         func_143B80
label_14324c:
    if (ctx->pc == 0x14324Cu) {
        ctx->pc = 0x143250u;
        goto label_143250;
    }
    ctx->pc = 0x143248u;
    SET_GPR_U32(ctx, 31, 0x143250u);
    ctx->pc = 0x143B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B80u, 0x143248u, 0x143250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143250u;
label_143250:
    // 0x143250: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_143254:
    if (ctx->pc == 0x143254u) {
        ctx->pc = 0x143258u;
        goto label_143258;
    }
    ctx->pc = 0x143250u;
    {
        const bool branch_taken_0x143250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143250) {
            ctx->pc = 0x143318u;
            goto label_143318;
        }
    }
    ctx->pc = 0x143258u;
label_143258:
    // 0x143258: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x143258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_14325c:
    // 0x14325c: 0xc040e7c  jal         func_1039F0
label_143260:
    if (ctx->pc == 0x143260u) {
        ctx->pc = 0x143264u;
        goto label_143264;
    }
    ctx->pc = 0x14325Cu;
    SET_GPR_U32(ctx, 31, 0x143264u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x14325Cu, 0x143264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143264u;
label_143264:
    // 0x143264: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x143264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143268:
    // 0x143268: 0x10000026  b           . + 4 + (0x26 << 2)
label_14326c:
    if (ctx->pc == 0x14326Cu) {
        ctx->pc = 0x143270u;
        goto label_143270;
    }
    ctx->pc = 0x143268u;
    {
        const bool branch_taken_0x143268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143268) {
            ctx->pc = 0x143304u;
            goto label_143304;
        }
    }
    ctx->pc = 0x143270u;
label_143270:
    // 0x143270: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x143270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_143274:
    // 0x143274: 0xc0913ec  jal         func_244FB0
label_143278:
    if (ctx->pc == 0x143278u) {
        ctx->pc = 0x14327Cu;
        goto label_14327c;
    }
    ctx->pc = 0x143274u;
    SET_GPR_U32(ctx, 31, 0x14327Cu);
    ctx->pc = 0x244FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244FB0u, 0x143274u, 0x14327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14327Cu;
label_14327c:
    // 0x14327c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14327cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143280:
    // 0x143280: 0x2405055d  addiu       $a1, $zero, 0x55D
    ctx->pc = 0x143280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1373));
label_143284:
    // 0x143284: 0x27868c8c  addiu       $a2, $gp, -0x7374
    ctx->pc = 0x143284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937740));
label_143288:
    // 0x143288: 0xc041a50  jal         func_106940
label_14328c:
    if (ctx->pc == 0x14328Cu) {
        ctx->pc = 0x143290u;
        goto label_143290;
    }
    ctx->pc = 0x143288u;
    SET_GPR_U32(ctx, 31, 0x143290u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x143288u, 0x143290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143290u;
label_143290:
    // 0x143290: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x143290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
label_143294:
    // 0x143294: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x143294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_143298:
    // 0x143298: 0xc041b38  jal         func_106CE0
label_14329c:
    if (ctx->pc == 0x14329Cu) {
        ctx->pc = 0x1432A0u;
        goto label_1432a0;
    }
    ctx->pc = 0x143298u;
    SET_GPR_U32(ctx, 31, 0x1432A0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x143298u, 0x1432A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1432A0u;
label_1432a0:
    // 0x1432a0: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x1432a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_1432a4:
    // 0x1432a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1432a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1432a8:
    // 0x1432a8: 0xc0bc48e  jal         func_2F1238
label_1432ac:
    if (ctx->pc == 0x1432ACu) {
        ctx->pc = 0x1432B0u;
        goto label_1432b0;
    }
    ctx->pc = 0x1432A8u;
    SET_GPR_U32(ctx, 31, 0x1432B0u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x1432A8u, 0x1432B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1432B0u;
label_1432b0:
    // 0x1432b0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_1432b4:
    if (ctx->pc == 0x1432B4u) {
        ctx->pc = 0x1432B8u;
        goto label_1432b8;
    }
    ctx->pc = 0x1432B0u;
    {
        const bool branch_taken_0x1432b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1432b0) {
            ctx->pc = 0x143300u;
            goto label_143300;
        }
    }
    ctx->pc = 0x1432B8u;
label_1432b8:
    // 0x1432b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1432b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1432bc:
    // 0x1432bc: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1432bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1432c0:
    // 0x1432c0: 0xc085538  jal         func_2154E0
label_1432c4:
    if (ctx->pc == 0x1432C4u) {
        ctx->pc = 0x1432C8u;
        goto label_1432c8;
    }
    ctx->pc = 0x1432C0u;
    SET_GPR_U32(ctx, 31, 0x1432C8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1432C0u, 0x1432C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1432C8u;
label_1432c8:
    // 0x1432c8: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x1432c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
label_1432cc:
    // 0x1432cc: 0x8fa40184  lw          $a0, 0x184($sp)
    ctx->pc = 0x1432ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_1432d0:
    // 0x1432d0: 0xc094178  jal         func_2505E0
label_1432d4:
    if (ctx->pc == 0x1432D4u) {
        ctx->pc = 0x1432D8u;
        goto label_1432d8;
    }
    ctx->pc = 0x1432D0u;
    SET_GPR_U32(ctx, 31, 0x1432D8u);
    ctx->pc = 0x2505E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2505E0u, 0x1432D0u, 0x1432D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1432D8u;
label_1432d8:
    // 0x1432d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1432d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1432dc:
    // 0x1432dc: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_1432e0:
    if (ctx->pc == 0x1432E0u) {
        ctx->pc = 0x1432E4u;
        goto label_1432e4;
    }
    ctx->pc = 0x1432DCu;
    {
        const bool branch_taken_0x1432dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1432dc) {
            ctx->pc = 0x1432F4u;
            goto label_1432f4;
        }
    }
    ctx->pc = 0x1432E4u;
label_1432e4:
    // 0x1432e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1432e8:
    if (ctx->pc == 0x1432E8u) {
        ctx->pc = 0x1432ECu;
        goto label_1432ec;
    }
    ctx->pc = 0x1432E4u;
    {
        const bool branch_taken_0x1432e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1432e4) {
            ctx->pc = 0x1432F4u;
            goto label_1432f4;
        }
    }
    ctx->pc = 0x1432ECu;
label_1432ec:
    // 0x1432ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_1432f0:
    if (ctx->pc == 0x1432F0u) {
        ctx->pc = 0x1432F4u;
        goto label_1432f4;
    }
    ctx->pc = 0x1432ECu;
    {
        const bool branch_taken_0x1432ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1432ec) {
            ctx->pc = 0x1432F8u;
            goto label_1432f8;
        }
    }
    ctx->pc = 0x1432F4u;
label_1432f4:
    // 0x1432f4: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x1432f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1432f8:
    // 0x1432f8: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
label_1432fc:
    if (ctx->pc == 0x1432FCu) {
        ctx->pc = 0x143300u;
        goto label_143300;
    }
    ctx->pc = 0x1432F8u;
    {
        const bool branch_taken_0x1432f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1432f8) {
            ctx->pc = 0x143318u;
            goto label_143318;
        }
    }
    ctx->pc = 0x143300u;
label_143300:
    // 0x143300: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x143300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_143304:
    // 0x143304: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x143304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_143308:
    // 0x143308: 0xc04147c  jal         func_1051F0
label_14330c:
    if (ctx->pc == 0x14330Cu) {
        ctx->pc = 0x143310u;
        goto label_143310;
    }
    ctx->pc = 0x143308u;
    SET_GPR_U32(ctx, 31, 0x143310u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x143308u, 0x143310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143310u;
label_143310:
    // 0x143310: 0x1602ffd7  bne         $s0, $v0, . + 4 + (-0x29 << 2)
label_143314:
    if (ctx->pc == 0x143314u) {
        ctx->pc = 0x143318u;
        goto label_143318;
    }
    ctx->pc = 0x143310u;
    {
        const bool branch_taken_0x143310 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x143310) {
            ctx->pc = 0x143270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143270;
        }
    }
    ctx->pc = 0x143318u;
label_143318:
    // 0x143318: 0x1412000a  bne         $zero, $s2, . + 4 + (0xA << 2)
label_14331c:
    if (ctx->pc == 0x14331Cu) {
        ctx->pc = 0x143320u;
        goto label_143320;
    }
    ctx->pc = 0x143318u;
    {
        const bool branch_taken_0x143318 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 18));
        if (branch_taken_0x143318) {
            ctx->pc = 0x143344u;
            goto label_143344;
        }
    }
    ctx->pc = 0x143320u;
label_143320:
    // 0x143320: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x143320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_143324:
    // 0x143324: 0xc0411f0  jal         func_1047C0
label_143328:
    if (ctx->pc == 0x143328u) {
        ctx->pc = 0x14332Cu;
        goto label_14332c;
    }
    ctx->pc = 0x143324u;
    SET_GPR_U32(ctx, 31, 0x14332Cu);
    ctx->pc = 0x1047C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047C0u, 0x143324u, 0x14332Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14332Cu;
label_14332c:
    // 0x14332c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_143330:
    if (ctx->pc == 0x143330u) {
        ctx->pc = 0x143334u;
        goto label_143334;
    }
    ctx->pc = 0x14332Cu;
    {
        const bool branch_taken_0x14332c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14332c) {
            ctx->pc = 0x143344u;
            goto label_143344;
        }
    }
    ctx->pc = 0x143334u;
label_143334:
    // 0x143334: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x143334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_143338:
    // 0x143338: 0xc040e7c  jal         func_1039F0
label_14333c:
    if (ctx->pc == 0x14333Cu) {
        ctx->pc = 0x143340u;
        goto label_143340;
    }
    ctx->pc = 0x143338u;
    SET_GPR_U32(ctx, 31, 0x143340u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x143338u, 0x143340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143340u;
label_143340:
    // 0x143340: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x143340u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_143344:
    // 0x143344: 0x124001de  beqz        $s2, . + 4 + (0x1DE << 2)
label_143348:
    if (ctx->pc == 0x143348u) {
        ctx->pc = 0x14334Cu;
        goto label_14334c;
    }
    ctx->pc = 0x143344u;
    {
        const bool branch_taken_0x143344 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x143344) {
            ctx->pc = 0x143AC0u;
            goto label_143ac0;
        }
    }
    ctx->pc = 0x14334Cu;
label_14334c:
    // 0x14334c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14334cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_143350:
    // 0x143350: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x143350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_143354:
    // 0x143354: 0xc085538  jal         func_2154E0
label_143358:
    if (ctx->pc == 0x143358u) {
        ctx->pc = 0x14335Cu;
        goto label_14335c;
    }
    ctx->pc = 0x143354u;
    SET_GPR_U32(ctx, 31, 0x14335Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x143354u, 0x14335Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14335Cu;
label_14335c:
    // 0x14335c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x14335cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143360:
    // 0x143360: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x143360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_143364:
    // 0x143364: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x143364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_143368:
    // 0x143368: 0xc090f80  jal         func_243E00
label_14336c:
    if (ctx->pc == 0x14336Cu) {
        ctx->pc = 0x143370u;
        goto label_143370;
    }
    ctx->pc = 0x143368u;
    SET_GPR_U32(ctx, 31, 0x143370u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x143368u, 0x143370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143370u;
label_143370:
    // 0x143370: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x143370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_143374:
    // 0x143374: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x143374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_143378:
    // 0x143378: 0xc041d58  jal         func_107560
label_14337c:
    if (ctx->pc == 0x14337Cu) {
        ctx->pc = 0x143380u;
        goto label_143380;
    }
    ctx->pc = 0x143378u;
    SET_GPR_U32(ctx, 31, 0x143380u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x143378u, 0x143380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143380u;
label_143380:
    // 0x143380: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x143380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_143384:
    // 0x143384: 0xc091008  jal         func_244020
label_143388:
    if (ctx->pc == 0x143388u) {
        ctx->pc = 0x14338Cu;
        goto label_14338c;
    }
    ctx->pc = 0x143384u;
    SET_GPR_U32(ctx, 31, 0x14338Cu);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x143384u, 0x14338Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14338Cu;
label_14338c:
    // 0x14338c: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x14338cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_143390:
    // 0x143390: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x143390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_143394:
    // 0x143394: 0xc050ed8  jal         func_143B60
label_143398:
    if (ctx->pc == 0x143398u) {
        ctx->pc = 0x14339Cu;
        goto label_14339c;
    }
    ctx->pc = 0x143394u;
    SET_GPR_U32(ctx, 31, 0x14339Cu);
    ctx->pc = 0x143B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B60u, 0x143394u, 0x14339Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14339Cu;
label_14339c:
    // 0x14339c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x14339cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1433a0:
    // 0x1433a0: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x1433a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1433a4:
    // 0x1433a4: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x1433a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_1433a8:
    // 0x1433a8: 0xa3a2018f  sb          $v0, 0x18F($sp)
    ctx->pc = 0x1433a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 399), (uint8_t)GPR_U32(ctx, 2));
label_1433ac:
    // 0x1433ac: 0x93a2018f  lbu         $v0, 0x18F($sp)
    ctx->pc = 0x1433acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 399)));
label_1433b0:
    // 0x1433b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1433b4:
    if (ctx->pc == 0x1433B4u) {
        ctx->pc = 0x1433B8u;
        goto label_1433b8;
    }
    ctx->pc = 0x1433B0u;
    {
        const bool branch_taken_0x1433b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1433b0) {
            ctx->pc = 0x1433D8u;
            goto label_1433d8;
        }
    }
    ctx->pc = 0x1433B8u;
label_1433b8:
    // 0x1433b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1433b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1433bc:
    // 0x1433bc: 0x24050549  addiu       $a1, $zero, 0x549
    ctx->pc = 0x1433bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1353));
label_1433c0:
    // 0x1433c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1433c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1433c4:
    // 0x1433c4: 0xc040ab0  jal         func_102AC0
label_1433c8:
    if (ctx->pc == 0x1433C8u) {
        ctx->pc = 0x1433CCu;
        goto label_1433cc;
    }
    ctx->pc = 0x1433C4u;
    SET_GPR_U32(ctx, 31, 0x1433CCu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x1433C4u, 0x1433CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1433CCu;
label_1433cc:
    // 0x1433cc: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x1433ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
label_1433d0:
    // 0x1433d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1433d4:
    if (ctx->pc == 0x1433D4u) {
        ctx->pc = 0x1433D8u;
        goto label_1433d8;
    }
    ctx->pc = 0x1433D0u;
    {
        const bool branch_taken_0x1433d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1433d0) {
            ctx->pc = 0x1433F0u;
            goto label_1433f0;
        }
    }
    ctx->pc = 0x1433D8u;
label_1433d8:
    // 0x1433d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1433d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1433dc:
    // 0x1433dc: 0x2405054e  addiu       $a1, $zero, 0x54E
    ctx->pc = 0x1433dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1358));
label_1433e0:
    // 0x1433e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1433e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1433e4:
    // 0x1433e4: 0xc040ab0  jal         func_102AC0
label_1433e8:
    if (ctx->pc == 0x1433E8u) {
        ctx->pc = 0x1433ECu;
        goto label_1433ec;
    }
    ctx->pc = 0x1433E4u;
    SET_GPR_U32(ctx, 31, 0x1433ECu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x1433E4u, 0x1433ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1433ECu;
label_1433ec:
    // 0x1433ec: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x1433ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
label_1433f0:
    // 0x1433f0: 0x93a2018f  lbu         $v0, 0x18F($sp)
    ctx->pc = 0x1433f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 399)));
label_1433f4:
    // 0x1433f4: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_1433f8:
    if (ctx->pc == 0x1433F8u) {
        ctx->pc = 0x1433FCu;
        goto label_1433fc;
    }
    ctx->pc = 0x1433F4u;
    {
        const bool branch_taken_0x1433f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1433f4) {
            ctx->pc = 0x143488u;
            goto label_143488;
        }
    }
    ctx->pc = 0x1433FCu;
label_1433fc:
    // 0x1433fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1433fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_143400:
    // 0x143400: 0x2405054d  addiu       $a1, $zero, 0x54D
    ctx->pc = 0x143400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1357));
label_143404:
    // 0x143404: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x143404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143408:
    // 0x143408: 0xc040ab0  jal         func_102AC0
label_14340c:
    if (ctx->pc == 0x14340Cu) {
        ctx->pc = 0x143410u;
        goto label_143410;
    }
    ctx->pc = 0x143408u;
    SET_GPR_U32(ctx, 31, 0x143410u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x143408u, 0x143410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143410u;
label_143410:
    // 0x143410: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x143410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
label_143414:
    // 0x143414: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x143414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_143418:
    // 0x143418: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_14341c:
    if (ctx->pc == 0x14341Cu) {
        ctx->pc = 0x143420u;
        goto label_143420;
    }
    ctx->pc = 0x143418u;
    {
        const bool branch_taken_0x143418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143418) {
            ctx->pc = 0x143488u;
            goto label_143488;
        }
    }
    ctx->pc = 0x143420u;
label_143420:
    // 0x143420: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x143420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_143424:
    // 0x143424: 0xc091008  jal         func_244020
label_143428:
    if (ctx->pc == 0x143428u) {
        ctx->pc = 0x14342Cu;
        goto label_14342c;
    }
    ctx->pc = 0x143424u;
    SET_GPR_U32(ctx, 31, 0x14342Cu);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x143424u, 0x14342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14342Cu;
label_14342c:
    // 0x14342c: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x14342cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_143430:
    // 0x143430: 0xc7ac0174  lwc1        $f12, 0x174($sp)
    ctx->pc = 0x143430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_143434:
    // 0x143434: 0xc0c38f0  jal         func_30E3C0
label_143438:
    if (ctx->pc == 0x143438u) {
        ctx->pc = 0x14343Cu;
        goto label_14343c;
    }
    ctx->pc = 0x143434u;
    SET_GPR_U32(ctx, 31, 0x14343Cu);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x143434u, 0x14343Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14343Cu;
label_14343c:
    // 0x14343c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14343cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_143440:
    // 0x143440: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x143440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_143444:
    // 0x143444: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x143444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_143448:
    // 0x143448: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x143448u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14344c:
    // 0x14344c: 0x0  nop
    ctx->pc = 0x14344cu;
    // NOP
label_143450:
    // 0x143450: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x143450u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
label_143454:
    // 0x143454: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x143454u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_143458:
    // 0x143458: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x143458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_14345c:
    // 0x14345c: 0xc7ac0174  lwc1        $f12, 0x174($sp)
    ctx->pc = 0x14345cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_143460:
    // 0x143460: 0xc0c3966  jal         func_30E598
label_143464:
    if (ctx->pc == 0x143464u) {
        ctx->pc = 0x143468u;
        goto label_143468;
    }
    ctx->pc = 0x143460u;
    SET_GPR_U32(ctx, 31, 0x143468u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x143460u, 0x143468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143468u;
label_143468:
    // 0x143468: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x143468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_14346c:
    // 0x14346c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x14346cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_143470:
    // 0x143470: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x143470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_143474:
    // 0x143474: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x143474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_143478:
    // 0x143478: 0x0  nop
    ctx->pc = 0x143478u;
    // NOP
label_14347c:
    // 0x14347c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x14347cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
label_143480:
    // 0x143480: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x143480u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_143484:
    // 0x143484: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x143484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_143488:
    // 0x143488: 0xa3a0018e  sb          $zero, 0x18E($sp)
    ctx->pc = 0x143488u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 398), (uint8_t)GPR_U32(ctx, 0));
label_14348c:
    // 0x14348c: 0xc090864  jal         func_242190
label_143490:
    if (ctx->pc == 0x143490u) {
        ctx->pc = 0x143494u;
        goto label_143494;
    }
    ctx->pc = 0x14348Cu;
    SET_GPR_U32(ctx, 31, 0x143494u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x14348Cu, 0x143494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143494u;
label_143494:
    // 0x143494: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x143494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143498:
    // 0x143498: 0xc090590  jal         func_241640
label_14349c:
    if (ctx->pc == 0x14349Cu) {
        ctx->pc = 0x1434A0u;
        goto label_1434a0;
    }
    ctx->pc = 0x143498u;
    SET_GPR_U32(ctx, 31, 0x1434A0u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x143498u, 0x1434A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1434A0u;
label_1434a0:
    // 0x1434a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1434a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1434a4:
    // 0x1434a4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1434a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1434a8:
    // 0x1434a8: 0xc09157c  jal         func_2455F0
label_1434ac:
    if (ctx->pc == 0x1434ACu) {
        ctx->pc = 0x1434B0u;
        goto label_1434b0;
    }
    ctx->pc = 0x1434A8u;
    SET_GPR_U32(ctx, 31, 0x1434B0u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x1434A8u, 0x1434B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1434B0u;
label_1434b0:
    // 0x1434b0: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x1434b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
label_1434b4:
    // 0x1434b4: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1434b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_1434b8:
    // 0x1434b8: 0xc040e7c  jal         func_1039F0
label_1434bc:
    if (ctx->pc == 0x1434BCu) {
        ctx->pc = 0x1434C0u;
        goto label_1434c0;
    }
    ctx->pc = 0x1434B8u;
    SET_GPR_U32(ctx, 31, 0x1434C0u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x1434B8u, 0x1434C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1434C0u;
label_1434c0:
    // 0x1434c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1434c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1434c4:
    // 0x1434c4: 0x1000000f  b           . + 4 + (0xF << 2)
label_1434c8:
    if (ctx->pc == 0x1434C8u) {
        ctx->pc = 0x1434CCu;
        goto label_1434cc;
    }
    ctx->pc = 0x1434C4u;
    {
        const bool branch_taken_0x1434c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1434c4) {
            ctx->pc = 0x143504u;
            goto label_143504;
        }
    }
    ctx->pc = 0x1434CCu;
label_1434cc:
    // 0x1434cc: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x1434ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_1434d0:
    // 0x1434d0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1434d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_1434d4:
    // 0x1434d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1434d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1434d8:
    // 0x1434d8: 0xc09138c  jal         func_244E30
label_1434dc:
    if (ctx->pc == 0x1434DCu) {
        ctx->pc = 0x1434E0u;
        goto label_1434e0;
    }
    ctx->pc = 0x1434D8u;
    SET_GPR_U32(ctx, 31, 0x1434E0u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x1434D8u, 0x1434E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1434E0u;
label_1434e0:
    // 0x1434e0: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x1434e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1434e4:
    // 0x1434e4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1434e8:
    if (ctx->pc == 0x1434E8u) {
        ctx->pc = 0x1434ECu;
        goto label_1434ec;
    }
    ctx->pc = 0x1434E4u;
    {
        const bool branch_taken_0x1434e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1434e4) {
            ctx->pc = 0x143500u;
            goto label_143500;
        }
    }
    ctx->pc = 0x1434ECu;
label_1434ec:
    // 0x1434ec: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1434ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1434f0:
    // 0x1434f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1434f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1434f4:
    // 0x1434f4: 0xa3a2018e  sb          $v0, 0x18E($sp)
    ctx->pc = 0x1434f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 398), (uint8_t)GPR_U32(ctx, 2));
label_1434f8:
    // 0x1434f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1434fc:
    if (ctx->pc == 0x1434FCu) {
        ctx->pc = 0x143500u;
        goto label_143500;
    }
    ctx->pc = 0x1434F8u;
    {
        const bool branch_taken_0x1434f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1434f8) {
            ctx->pc = 0x143518u;
            goto label_143518;
        }
    }
    ctx->pc = 0x143500u;
label_143500:
    // 0x143500: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x143500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_143504:
    // 0x143504: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x143504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_143508:
    // 0x143508: 0xc04147c  jal         func_1051F0
label_14350c:
    if (ctx->pc == 0x14350Cu) {
        ctx->pc = 0x143510u;
        goto label_143510;
    }
    ctx->pc = 0x143508u;
    SET_GPR_U32(ctx, 31, 0x143510u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x143508u, 0x143510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143510u;
label_143510:
    // 0x143510: 0x1602ffee  bne         $s0, $v0, . + 4 + (-0x12 << 2)
label_143514:
    if (ctx->pc == 0x143514u) {
        ctx->pc = 0x143518u;
        goto label_143518;
    }
    ctx->pc = 0x143510u;
    {
        const bool branch_taken_0x143510 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x143510) {
            ctx->pc = 0x1434CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1434cc;
        }
    }
    ctx->pc = 0x143518u;
label_143518:
    // 0x143518: 0x93a2018e  lbu         $v0, 0x18E($sp)
    ctx->pc = 0x143518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 398)));
label_14351c:
    // 0x14351c: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
label_143520:
    if (ctx->pc == 0x143520u) {
        ctx->pc = 0x143524u;
        goto label_143524;
    }
    ctx->pc = 0x14351Cu;
    {
        const bool branch_taken_0x14351c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14351c) {
            ctx->pc = 0x1436A0u;
            goto label_1436a0;
        }
    }
    ctx->pc = 0x143524u;
label_143524:
    // 0x143524: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x143524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_143528:
    // 0x143528: 0xc088560  jal         func_221580
label_14352c:
    if (ctx->pc == 0x14352Cu) {
        ctx->pc = 0x143530u;
        goto label_143530;
    }
    ctx->pc = 0x143528u;
    SET_GPR_U32(ctx, 31, 0x143530u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x143528u, 0x143530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143530u;
label_143530:
    // 0x143530: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x143530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_143534:
    // 0x143534: 0xc050b24  jal         func_142C90
label_143538:
    if (ctx->pc == 0x143538u) {
        ctx->pc = 0x14353Cu;
        goto label_14353c;
    }
    ctx->pc = 0x143534u;
    SET_GPR_U32(ctx, 31, 0x14353Cu);
    ctx->pc = 0x142C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142C90u, 0x143534u, 0x14353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14353Cu;
label_14353c:
    // 0x14353c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143540:
    // 0x143540: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x143540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_143544:
    // 0x143544: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x143544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_143548:
    // 0x143548: 0x320f809  jalr        $t9
label_14354c:
    if (ctx->pc == 0x14354Cu) {
        ctx->pc = 0x143550u;
        goto label_143550;
    }
    ctx->pc = 0x143548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x143550u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143548u, 0x143550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143550u;
label_143550:
    // 0x143550: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x143550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
label_143554:
    // 0x143554: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x143554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_143558:
    // 0x143558: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_14355c:
    if (ctx->pc == 0x14355Cu) {
        ctx->pc = 0x143560u;
        goto label_143560;
    }
    ctx->pc = 0x143558u;
    {
        const bool branch_taken_0x143558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143558) {
            ctx->pc = 0x143620u;
            goto label_143620;
        }
    }
    ctx->pc = 0x143560u;
label_143560:
    // 0x143560: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x143560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_143564:
    // 0x143564: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x143564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_143568:
    // 0x143568: 0xc085538  jal         func_2154E0
label_14356c:
    if (ctx->pc == 0x14356Cu) {
        ctx->pc = 0x143570u;
        goto label_143570;
    }
    ctx->pc = 0x143568u;
    SET_GPR_U32(ctx, 31, 0x143570u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x143568u, 0x143570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143570u;
label_143570:
    // 0x143570: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x143570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
label_143574:
    // 0x143574: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x143574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_143578:
    // 0x143578: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_14357c:
    if (ctx->pc == 0x14357Cu) {
        ctx->pc = 0x143580u;
        goto label_143580;
    }
    ctx->pc = 0x143578u;
    {
        const bool branch_taken_0x143578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143578) {
            ctx->pc = 0x143620u;
            goto label_143620;
        }
    }
    ctx->pc = 0x143580u;
label_143580:
    // 0x143580: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x143580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_143584:
    // 0x143584: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143588:
    // 0x143588: 0xc050ec8  jal         func_143B20
label_14358c:
    if (ctx->pc == 0x14358Cu) {
        ctx->pc = 0x143590u;
        goto label_143590;
    }
    ctx->pc = 0x143588u;
    SET_GPR_U32(ctx, 31, 0x143590u);
    ctx->pc = 0x143B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B20u, 0x143588u, 0x143590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143590u;
label_143590:
    // 0x143590: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x143590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143594:
    // 0x143594: 0xc041b38  jal         func_106CE0
label_143598:
    if (ctx->pc == 0x143598u) {
        ctx->pc = 0x14359Cu;
        goto label_14359c;
    }
    ctx->pc = 0x143594u;
    SET_GPR_U32(ctx, 31, 0x14359Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x143594u, 0x14359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14359Cu;
label_14359c:
    // 0x14359c: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x14359cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
label_1435a0:
    // 0x1435a0: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x1435a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_1435a4:
    // 0x1435a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1435a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1435a8:
    // 0x1435a8: 0xc050ec8  jal         func_143B20
label_1435ac:
    if (ctx->pc == 0x1435ACu) {
        ctx->pc = 0x1435B0u;
        goto label_1435b0;
    }
    ctx->pc = 0x1435A8u;
    SET_GPR_U32(ctx, 31, 0x1435B0u);
    ctx->pc = 0x143B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B20u, 0x1435A8u, 0x1435B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1435B0u;
label_1435b0:
    // 0x1435b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1435b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1435b4:
    // 0x1435b4: 0xc041b38  jal         func_106CE0
label_1435b8:
    if (ctx->pc == 0x1435B8u) {
        ctx->pc = 0x1435BCu;
        goto label_1435bc;
    }
    ctx->pc = 0x1435B4u;
    SET_GPR_U32(ctx, 31, 0x1435BCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1435B4u, 0x1435BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1435BCu;
label_1435bc:
    // 0x1435bc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1435bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1435c0:
    // 0x1435c0: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x1435c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_1435c4:
    // 0x1435c4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1435c8:
    if (ctx->pc == 0x1435C8u) {
        ctx->pc = 0x1435CCu;
        goto label_1435cc;
    }
    ctx->pc = 0x1435C4u;
    {
        const bool branch_taken_0x1435c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1435c4) {
            ctx->pc = 0x1435F4u;
            goto label_1435f4;
        }
    }
    ctx->pc = 0x1435CCu;
label_1435cc:
    // 0x1435cc: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x1435ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_1435d0:
    // 0x1435d0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1435d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1435d4:
    // 0x1435d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1435d8:
    if (ctx->pc == 0x1435D8u) {
        ctx->pc = 0x1435DCu;
        goto label_1435dc;
    }
    ctx->pc = 0x1435D4u;
    {
        const bool branch_taken_0x1435d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1435d4) {
            ctx->pc = 0x1435F4u;
            goto label_1435f4;
        }
    }
    ctx->pc = 0x1435DCu;
label_1435dc:
    // 0x1435dc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1435dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1435e0:
    // 0x1435e0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1435e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1435e4:
    // 0x1435e4: 0x24a52a58  addiu       $a1, $a1, 0x2A58
    ctx->pc = 0x1435e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10840));
label_1435e8:
    // 0x1435e8: 0x8fa60164  lw          $a2, 0x164($sp)
    ctx->pc = 0x1435e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_1435ec:
    // 0x1435ec: 0xc041b90  jal         func_106E40
label_1435f0:
    if (ctx->pc == 0x1435F0u) {
        ctx->pc = 0x1435F4u;
        goto label_1435f4;
    }
    ctx->pc = 0x1435ECu;
    SET_GPR_U32(ctx, 31, 0x1435F4u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x1435ECu, 0x1435F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1435F4u;
label_1435f4:
    // 0x1435f4: 0x13c0000a  beqz        $fp, . + 4 + (0xA << 2)
label_1435f8:
    if (ctx->pc == 0x1435F8u) {
        ctx->pc = 0x1435FCu;
        goto label_1435fc;
    }
    ctx->pc = 0x1435F4u;
    {
        const bool branch_taken_0x1435f4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1435f4) {
            ctx->pc = 0x143620u;
            goto label_143620;
        }
    }
    ctx->pc = 0x1435FCu;
label_1435fc:
    // 0x1435fc: 0x83c20000  lb          $v0, 0x0($fp)
    ctx->pc = 0x1435fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
label_143600:
    // 0x143600: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_143604:
    if (ctx->pc == 0x143604u) {
        ctx->pc = 0x143608u;
        goto label_143608;
    }
    ctx->pc = 0x143600u;
    {
        const bool branch_taken_0x143600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143600) {
            ctx->pc = 0x143620u;
            goto label_143620;
        }
    }
    ctx->pc = 0x143608u;
label_143608:
    // 0x143608: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x143608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_14360c:
    // 0x14360c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x14360cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_143610:
    // 0x143610: 0x24a52a70  addiu       $a1, $a1, 0x2A70
    ctx->pc = 0x143610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10864));
label_143614:
    // 0x143614: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x143614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_143618:
    // 0x143618: 0xc041b90  jal         func_106E40
label_14361c:
    if (ctx->pc == 0x14361Cu) {
        ctx->pc = 0x143620u;
        goto label_143620;
    }
    ctx->pc = 0x143618u;
    SET_GPR_U32(ctx, 31, 0x143620u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x143618u, 0x143620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143620u;
label_143620:
    // 0x143620: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x143620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_143624:
    // 0x143624: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x143624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_143628:
    // 0x143628: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_14362c:
    if (ctx->pc == 0x14362Cu) {
        ctx->pc = 0x143630u;
        goto label_143630;
    }
    ctx->pc = 0x143628u;
    {
        const bool branch_taken_0x143628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143628) {
            ctx->pc = 0x143674u;
            goto label_143674;
        }
    }
    ctx->pc = 0x143630u;
label_143630:
    // 0x143630: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x143630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_143634:
    // 0x143634: 0xc4410084  lwc1        $f1, 0x84($v0)
    ctx->pc = 0x143634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_143638:
    // 0x143638: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x143638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_14363c:
    // 0x14363c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14363cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_143640:
    // 0x143640: 0x0  nop
    ctx->pc = 0x143640u;
    // NOP
label_143644:
    // 0x143644: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x143644u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_143648:
    // 0x143648: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_14364c:
    if (ctx->pc == 0x14364Cu) {
        ctx->pc = 0x143650u;
        goto label_143650;
    }
    ctx->pc = 0x143648u;
    {
        const bool branch_taken_0x143648 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x143648) {
            ctx->pc = 0x143674u;
            goto label_143674;
        }
    }
    ctx->pc = 0x143650u;
label_143650:
    // 0x143650: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x143650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_143654:
    // 0x143654: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x143654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_143658:
    // 0x143658: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x143658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_14365c:
    // 0x14365c: 0xc041d58  jal         func_107560
label_143660:
    if (ctx->pc == 0x143660u) {
        ctx->pc = 0x143664u;
        goto label_143664;
    }
    ctx->pc = 0x14365Cu;
    SET_GPR_U32(ctx, 31, 0x143664u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x14365Cu, 0x143664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143664u;
label_143664:
    // 0x143664: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x143664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_143668:
    // 0x143668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x143668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14366c:
    // 0x14366c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14366cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_143670:
    // 0x143670: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x143670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
label_143674:
    // 0x143674: 0x8fa4017c  lw          $a0, 0x17C($sp)
    ctx->pc = 0x143674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_143678:
    // 0x143678: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x143678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_14367c:
    // 0x14367c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x14367cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_143680:
    // 0x143680: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x143680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143684:
    // 0x143684: 0xc043448  jal         func_10D120
label_143688:
    if (ctx->pc == 0x143688u) {
        ctx->pc = 0x14368Cu;
        goto label_14368c;
    }
    ctx->pc = 0x143684u;
    SET_GPR_U32(ctx, 31, 0x14368Cu);
    ctx->pc = 0x10D120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D120u, 0x143684u, 0x14368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14368Cu;
label_14368c:
    // 0x14368c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14368cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143690:
    // 0x143690: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x143690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_143694:
    // 0x143694: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x143694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_143698:
    // 0x143698: 0xc0887b4  jal         func_221ED0
label_14369c:
    if (ctx->pc == 0x14369Cu) {
        ctx->pc = 0x1436A0u;
        goto label_1436a0;
    }
    ctx->pc = 0x143698u;
    SET_GPR_U32(ctx, 31, 0x1436A0u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x143698u, 0x1436A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1436A0u;
label_1436a0:
    // 0x1436a0: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1436a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1436a4:
    // 0x1436a4: 0xc047eb8  jal         func_11FAE0
label_1436a8:
    if (ctx->pc == 0x1436A8u) {
        ctx->pc = 0x1436ACu;
        goto label_1436ac;
    }
    ctx->pc = 0x1436A4u;
    SET_GPR_U32(ctx, 31, 0x1436ACu);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1436A4u, 0x1436ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1436ACu;
label_1436ac:
    // 0x1436ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1436acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1436b0:
    // 0x1436b0: 0xc047eb0  jal         func_11FAC0
label_1436b4:
    if (ctx->pc == 0x1436B4u) {
        ctx->pc = 0x1436B8u;
        goto label_1436b8;
    }
    ctx->pc = 0x1436B0u;
    SET_GPR_U32(ctx, 31, 0x1436B8u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x1436B0u, 0x1436B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1436B8u;
label_1436b8:
    // 0x1436b8: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x1436b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_1436bc:
    // 0x1436bc: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1436bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_1436c0:
    // 0x1436c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1436c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1436c4:
    // 0x1436c4: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x1436c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
label_1436c8:
    // 0x1436c8: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x1436c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_1436cc:
    // 0x1436cc: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_1436d0:
    if (ctx->pc == 0x1436D0u) {
        ctx->pc = 0x1436D4u;
        goto label_1436d4;
    }
    ctx->pc = 0x1436CCu;
    {
        const bool branch_taken_0x1436cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1436cc) {
            ctx->pc = 0x1436E4u;
            goto label_1436e4;
        }
    }
    ctx->pc = 0x1436D4u;
label_1436d4:
    // 0x1436d4: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x1436d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_1436d8:
    // 0x1436d8: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x1436d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_1436dc:
    // 0x1436dc: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
label_1436e0:
    if (ctx->pc == 0x1436E0u) {
        ctx->pc = 0x1436E4u;
        goto label_1436e4;
    }
    ctx->pc = 0x1436DCu;
    {
        const bool branch_taken_0x1436dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1436dc) {
            ctx->pc = 0x1437D8u;
            goto label_1437d8;
        }
    }
    ctx->pc = 0x1436E4u;
label_1436e4:
    // 0x1436e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1436e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1436e8:
    // 0x1436e8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1436e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1436ec:
    // 0x1436ec: 0xc085538  jal         func_2154E0
label_1436f0:
    if (ctx->pc == 0x1436F0u) {
        ctx->pc = 0x1436F4u;
        goto label_1436f4;
    }
    ctx->pc = 0x1436ECu;
    SET_GPR_U32(ctx, 31, 0x1436F4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1436ECu, 0x1436F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1436F4u;
label_1436f4:
    // 0x1436f4: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x1436f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
label_1436f8:
    // 0x1436f8: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x1436f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_1436fc:
    // 0x1436fc: 0xc040aa8  jal         func_102AA0
label_143700:
    if (ctx->pc == 0x143700u) {
        ctx->pc = 0x143704u;
        goto label_143704;
    }
    ctx->pc = 0x1436FCu;
    SET_GPR_U32(ctx, 31, 0x143704u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1436FCu, 0x143704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143704u;
label_143704:
    // 0x143704: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x143704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_143708:
    // 0x143708: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x143708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_14370c:
    // 0x14370c: 0x24632a38  addiu       $v1, $v1, 0x2A38
    ctx->pc = 0x14370cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10808));
label_143710:
    // 0x143710: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x143710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_143714:
    // 0x143714: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x143714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_143718:
    // 0x143718: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x143718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14371c:
    // 0x14371c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x14371cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_143720:
    // 0x143720: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x143720u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_143724:
    // 0x143724: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x143724u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_143728:
    // 0x143728: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x143728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_14372c:
    // 0x14372c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14372cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143730:
    // 0x143730: 0x10000026  b           . + 4 + (0x26 << 2)
label_143734:
    if (ctx->pc == 0x143734u) {
        ctx->pc = 0x143738u;
        goto label_143738;
    }
    ctx->pc = 0x143730u;
    {
        const bool branch_taken_0x143730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143730) {
            ctx->pc = 0x1437CCu;
            goto label_1437cc;
        }
    }
    ctx->pc = 0x143738u;
label_143738:
    // 0x143738: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x143738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_14373c:
    // 0x14373c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x14373cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_143740:
    // 0x143740: 0x8c4500e0  lw          $a1, 0xE0($v0)
    ctx->pc = 0x143740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
label_143744:
    // 0x143744: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x143744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_143748:
    // 0x143748: 0xc040a90  jal         func_102A40
label_14374c:
    if (ctx->pc == 0x14374Cu) {
        ctx->pc = 0x143750u;
        goto label_143750;
    }
    ctx->pc = 0x143748u;
    SET_GPR_U32(ctx, 31, 0x143750u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x143748u, 0x143750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143750u;
label_143750:
    // 0x143750: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x143750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_143754:
    // 0x143754: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x143754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_143758:
    // 0x143758: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x143758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_14375c:
    // 0x14375c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x14375cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_143760:
    // 0x143760: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x143760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_143764:
    // 0x143764: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x143764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_143768:
    // 0x143768: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x143768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_14376c:
    // 0x14376c: 0x8c4500e0  lw          $a1, 0xE0($v0)
    ctx->pc = 0x14376cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
label_143770:
    // 0x143770: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x143770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_143774:
    // 0x143774: 0xc040a90  jal         func_102A40
label_143778:
    if (ctx->pc == 0x143778u) {
        ctx->pc = 0x14377Cu;
        goto label_14377c;
    }
    ctx->pc = 0x143774u;
    SET_GPR_U32(ctx, 31, 0x14377Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x143774u, 0x14377Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14377Cu;
label_14377c:
    // 0x14377c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14377cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_143780:
    // 0x143780: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x143780u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_143784:
    // 0x143784: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x143784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_143788:
    // 0x143788: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x143788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14378c:
    // 0x14378c: 0x0  nop
    ctx->pc = 0x14378cu;
    // NOP
label_143790:
    // 0x143790: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x143790u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_143794:
    // 0x143794: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_143798:
    if (ctx->pc == 0x143798u) {
        ctx->pc = 0x14379Cu;
        goto label_14379c;
    }
    ctx->pc = 0x143794u;
    {
        const bool branch_taken_0x143794 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x143794) {
            ctx->pc = 0x1437C8u;
            goto label_1437c8;
        }
    }
    ctx->pc = 0x14379Cu;
label_14379c:
    // 0x14379c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x14379cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1437a0:
    // 0x1437a0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1437a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1437a4:
    // 0x1437a4: 0x8c4500e0  lw          $a1, 0xE0($v0)
    ctx->pc = 0x1437a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
label_1437a8:
    // 0x1437a8: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x1437a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_1437ac:
    // 0x1437ac: 0xc040a90  jal         func_102A40
label_1437b0:
    if (ctx->pc == 0x1437B0u) {
        ctx->pc = 0x1437B4u;
        goto label_1437b4;
    }
    ctx->pc = 0x1437ACu;
    SET_GPR_U32(ctx, 31, 0x1437B4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1437ACu, 0x1437B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1437B4u;
label_1437b4:
    // 0x1437b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1437b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1437b8:
    // 0x1437b8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1437b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1437bc:
    // 0x1437bc: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1437bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1437c0:
    // 0x1437c0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1437c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1437c4:
    // 0x1437c4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1437c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1437c8:
    // 0x1437c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1437c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1437cc:
    // 0x1437cc: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x1437ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_1437d0:
    // 0x1437d0: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_1437d4:
    if (ctx->pc == 0x1437D4u) {
        ctx->pc = 0x1437D8u;
        goto label_1437d8;
    }
    ctx->pc = 0x1437D0u;
    {
        const bool branch_taken_0x1437d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1437d0) {
            ctx->pc = 0x143738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143738;
        }
    }
    ctx->pc = 0x1437D8u;
label_1437d8:
    // 0x1437d8: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1437d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1437dc:
    // 0x1437dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1437dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1437e0:
    // 0x1437e0: 0xc08d95c  jal         func_236570
label_1437e4:
    if (ctx->pc == 0x1437E4u) {
        ctx->pc = 0x1437E8u;
        goto label_1437e8;
    }
    ctx->pc = 0x1437E0u;
    SET_GPR_U32(ctx, 31, 0x1437E8u);
    ctx->pc = 0x236570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236570u, 0x1437E0u, 0x1437E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1437E8u;
label_1437e8:
    // 0x1437e8: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1437e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_1437ec:
    // 0x1437ec: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x1437ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_1437f0:
    // 0x1437f0: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x1437f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1437f4:
    // 0x1437f4: 0x1420003d  bnez        $at, . + 4 + (0x3D << 2)
label_1437f8:
    if (ctx->pc == 0x1437F8u) {
        ctx->pc = 0x1437FCu;
        goto label_1437fc;
    }
    ctx->pc = 0x1437F4u;
    {
        const bool branch_taken_0x1437f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1437f4) {
            ctx->pc = 0x1438ECu;
            goto label_1438ec;
        }
    }
    ctx->pc = 0x1437FCu;
label_1437fc:
    // 0x1437fc: 0x8f828c90  lw          $v0, -0x7370($gp)
    ctx->pc = 0x1437fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937744)));
label_143800:
    // 0x143800: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x143800u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_143804:
    // 0x143804: 0x14200039  bnez        $at, . + 4 + (0x39 << 2)
label_143808:
    if (ctx->pc == 0x143808u) {
        ctx->pc = 0x14380Cu;
        goto label_14380c;
    }
    ctx->pc = 0x143804u;
    {
        const bool branch_taken_0x143804 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x143804) {
            ctx->pc = 0x1438ECu;
            goto label_1438ec;
        }
    }
    ctx->pc = 0x14380Cu;
label_14380c:
    // 0x14380c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14380cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_143810:
    // 0x143810: 0xaf828c90  sw          $v0, -0x7370($gp)
    ctx->pc = 0x143810u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937744), GPR_U32(ctx, 2));
label_143814:
    // 0x143814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x143814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_143818:
    // 0x143818: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x143818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_14381c:
    // 0x14381c: 0xc085538  jal         func_2154E0
label_143820:
    if (ctx->pc == 0x143820u) {
        ctx->pc = 0x143824u;
        goto label_143824;
    }
    ctx->pc = 0x14381Cu;
    SET_GPR_U32(ctx, 31, 0x143824u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x14381Cu, 0x143824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143824u;
label_143824:
    // 0x143824: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x143824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
label_143828:
    // 0x143828: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x143828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_14382c:
    // 0x14382c: 0xc040aa8  jal         func_102AA0
label_143830:
    if (ctx->pc == 0x143830u) {
        ctx->pc = 0x143834u;
        goto label_143834;
    }
    ctx->pc = 0x14382Cu;
    SET_GPR_U32(ctx, 31, 0x143834u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x14382Cu, 0x143834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143834u;
label_143834:
    // 0x143834: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x143834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_143838:
    // 0x143838: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x143838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_14383c:
    // 0x14383c: 0x24632a48  addiu       $v1, $v1, 0x2A48
    ctx->pc = 0x14383cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10824));
label_143840:
    // 0x143840: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x143840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_143844:
    // 0x143844: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x143844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_143848:
    // 0x143848: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x143848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14384c:
    // 0x14384c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x14384cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_143850:
    // 0x143850: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x143850u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_143854:
    // 0x143854: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x143854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_143858:
    // 0x143858: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x143858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_14385c:
    // 0x14385c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x14385cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143860:
    // 0x143860: 0x1000000b  b           . + 4 + (0xB << 2)
label_143864:
    if (ctx->pc == 0x143864u) {
        ctx->pc = 0x143868u;
        goto label_143868;
    }
    ctx->pc = 0x143860u;
    {
        const bool branch_taken_0x143860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143860) {
            ctx->pc = 0x143890u;
            goto label_143890;
        }
    }
    ctx->pc = 0x143868u;
label_143868:
    // 0x143868: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x143868u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_14386c:
    // 0x14386c: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x14386cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_143870:
    // 0x143870: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x143870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_143874:
    // 0x143874: 0x8c4500d0  lw          $a1, 0xD0($v0)
    ctx->pc = 0x143874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
label_143878:
    // 0x143878: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x143878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_14387c:
    // 0x14387c: 0xc040a90  jal         func_102A40
label_143880:
    if (ctx->pc == 0x143880u) {
        ctx->pc = 0x143884u;
        goto label_143884;
    }
    ctx->pc = 0x14387Cu;
    SET_GPR_U32(ctx, 31, 0x143884u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x14387Cu, 0x143884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143884u;
label_143884:
    // 0x143884: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x143884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_143888:
    // 0x143888: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x143888u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_14388c:
    // 0x14388c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x14388cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_143890:
    // 0x143890: 0x2ae20003  slti        $v0, $s7, 0x3
    ctx->pc = 0x143890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)3) ? 1 : 0);
label_143894:
    // 0x143894: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_143898:
    if (ctx->pc == 0x143898u) {
        ctx->pc = 0x14389Cu;
        goto label_14389c;
    }
    ctx->pc = 0x143894u;
    {
        const bool branch_taken_0x143894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143894) {
            ctx->pc = 0x143868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143868;
        }
    }
    ctx->pc = 0x14389Cu;
label_14389c:
    // 0x14389c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14389cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1438a0:
    // 0x1438a0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1438a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1438a4:
    // 0x1438a4: 0xc085538  jal         func_2154E0
label_1438a8:
    if (ctx->pc == 0x1438A8u) {
        ctx->pc = 0x1438ACu;
        goto label_1438ac;
    }
    ctx->pc = 0x1438A4u;
    SET_GPR_U32(ctx, 31, 0x1438ACu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1438A4u, 0x1438ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1438ACu;
label_1438ac:
    // 0x1438ac: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1438acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_1438b0:
    // 0x1438b0: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1438b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1438b4:
    // 0x1438b4: 0xc096e80  jal         func_25BA00
label_1438b8:
    if (ctx->pc == 0x1438B8u) {
        ctx->pc = 0x1438BCu;
        goto label_1438bc;
    }
    ctx->pc = 0x1438B4u;
    SET_GPR_U32(ctx, 31, 0x1438BCu);
    ctx->pc = 0x25BA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA00u, 0x1438B4u, 0x1438BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1438BCu;
label_1438bc:
    // 0x1438bc: 0xc05548c  jal         func_155230
label_1438c0:
    if (ctx->pc == 0x1438C0u) {
        ctx->pc = 0x1438C4u;
        goto label_1438c4;
    }
    ctx->pc = 0x1438BCu;
    SET_GPR_U32(ctx, 31, 0x1438C4u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x1438BCu, 0x1438C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1438C4u;
label_1438c4:
    // 0x1438c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1438c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1438c8:
    // 0x1438c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1438c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1438cc:
    // 0x1438cc: 0xc0553d4  jal         func_154F50
label_1438d0:
    if (ctx->pc == 0x1438D0u) {
        ctx->pc = 0x1438D4u;
        goto label_1438d4;
    }
    ctx->pc = 0x1438CCu;
    SET_GPR_U32(ctx, 31, 0x1438D4u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x1438CCu, 0x1438D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1438D4u;
label_1438d4:
    // 0x1438d4: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x1438d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_1438d8:
    // 0x1438d8: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x1438d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_1438dc:
    // 0x1438dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1438e0:
    if (ctx->pc == 0x1438E0u) {
        ctx->pc = 0x1438E4u;
        goto label_1438e4;
    }
    ctx->pc = 0x1438DCu;
    {
        const bool branch_taken_0x1438dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1438dc) {
            ctx->pc = 0x1438ECu;
            goto label_1438ec;
        }
    }
    ctx->pc = 0x1438E4u;
label_1438e4:
    // 0x1438e4: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x1438e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_1438e8:
    // 0x1438e8: 0xac400098  sw          $zero, 0x98($v0)
    ctx->pc = 0x1438e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 0));
label_1438ec:
    // 0x1438ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1438ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1438f0:
    // 0x1438f0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1438f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1438f4:
    // 0x1438f4: 0xc085538  jal         func_2154E0
label_1438f8:
    if (ctx->pc == 0x1438F8u) {
        ctx->pc = 0x1438FCu;
        goto label_1438fc;
    }
    ctx->pc = 0x1438F4u;
    SET_GPR_U32(ctx, 31, 0x1438FCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1438F4u, 0x1438FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1438FCu;
label_1438fc:
    // 0x1438fc: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x1438fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
label_143900:
    // 0x143900: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x143900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_143904:
    // 0x143904: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x143904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_143908:
    // 0x143908: 0xc090f14  jal         func_243C50
label_14390c:
    if (ctx->pc == 0x14390Cu) {
        ctx->pc = 0x143910u;
        goto label_143910;
    }
    ctx->pc = 0x143908u;
    SET_GPR_U32(ctx, 31, 0x143910u);
    ctx->pc = 0x243C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C50u, 0x143908u, 0x143910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143910u;
label_143910:
    // 0x143910: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x143910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_143914:
    // 0x143914: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x143914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_143918:
    // 0x143918: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x143918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_14391c:
    // 0x14391c: 0xc7ac0180  lwc1        $f12, 0x180($sp)
    ctx->pc = 0x14391cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_143920:
    // 0x143920: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x143920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_143924:
    // 0x143924: 0xc090fe0  jal         func_243F80
label_143928:
    if (ctx->pc == 0x143928u) {
        ctx->pc = 0x14392Cu;
        goto label_14392c;
    }
    ctx->pc = 0x143924u;
    SET_GPR_U32(ctx, 31, 0x14392Cu);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x143924u, 0x14392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14392Cu;
label_14392c:
    // 0x14392c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x14392cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_143930:
    // 0x143930: 0xc091084  jal         func_244210
label_143934:
    if (ctx->pc == 0x143934u) {
        ctx->pc = 0x143938u;
        goto label_143938;
    }
    ctx->pc = 0x143930u;
    SET_GPR_U32(ctx, 31, 0x143938u);
    ctx->pc = 0x244210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244210u, 0x143930u, 0x143938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143938u;
label_143938:
    // 0x143938: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x143938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14393c:
    // 0x14393c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x14393cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_143940:
    // 0x143940: 0xc085538  jal         func_2154E0
label_143944:
    if (ctx->pc == 0x143944u) {
        ctx->pc = 0x143948u;
        goto label_143948;
    }
    ctx->pc = 0x143940u;
    SET_GPR_U32(ctx, 31, 0x143948u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x143940u, 0x143948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143948u;
label_143948:
    // 0x143948: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x143948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
label_14394c:
    // 0x14394c: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x14394cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_143950:
    // 0x143950: 0xc09684c  jal         func_25A130
label_143954:
    if (ctx->pc == 0x143954u) {
        ctx->pc = 0x143958u;
        goto label_143958;
    }
    ctx->pc = 0x143950u;
    SET_GPR_U32(ctx, 31, 0x143958u);
    ctx->pc = 0x25A130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A130u, 0x143950u, 0x143958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143958u;
label_143958:
    // 0x143958: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x143958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_14395c:
    // 0x14395c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x14395cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_143960:
    // 0x143960: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143964:
    // 0x143964: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x143964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_143968:
    // 0x143968: 0xc04fbf8  jal         func_13EFE0
label_14396c:
    if (ctx->pc == 0x14396Cu) {
        ctx->pc = 0x143970u;
        goto label_143970;
    }
    ctx->pc = 0x143968u;
    SET_GPR_U32(ctx, 31, 0x143970u);
    ctx->pc = 0x13EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EFE0u, 0x143968u, 0x143970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143970u;
label_143970:
    // 0x143970: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x143970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_143974:
    // 0x143974: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x143974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_143978:
    // 0x143978: 0xc04fc3c  jal         func_13F0F0
label_14397c:
    if (ctx->pc == 0x14397Cu) {
        ctx->pc = 0x143980u;
        goto label_143980;
    }
    ctx->pc = 0x143978u;
    SET_GPR_U32(ctx, 31, 0x143980u);
    ctx->pc = 0x13F0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F0F0u, 0x143978u, 0x143980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143980u;
label_143980:
    // 0x143980: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x143980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_143984:
    // 0x143984: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x143984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_143988:
    // 0x143988: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x143988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14398c:
    // 0x14398c: 0xc0acb18  jal         func_2B2C60
label_143990:
    if (ctx->pc == 0x143990u) {
        ctx->pc = 0x143994u;
        goto label_143994;
    }
    ctx->pc = 0x14398Cu;
    SET_GPR_U32(ctx, 31, 0x143994u);
    ctx->pc = 0x2B2C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C60u, 0x14398Cu, 0x143994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143994u;
label_143994:
    // 0x143994: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x143994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_143998:
    // 0x143998: 0xc7ac0180  lwc1        $f12, 0x180($sp)
    ctx->pc = 0x143998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14399c:
    // 0x14399c: 0xc0ad614  jal         func_2B5850
label_1439a0:
    if (ctx->pc == 0x1439A0u) {
        ctx->pc = 0x1439A4u;
        goto label_1439a4;
    }
    ctx->pc = 0x14399Cu;
    SET_GPR_U32(ctx, 31, 0x1439A4u);
    ctx->pc = 0x2B5850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5850u, 0x14399Cu, 0x1439A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1439A4u;
label_1439a4:
    // 0x1439a4: 0x8f84ba64  lw          $a0, -0x459C($gp)
    ctx->pc = 0x1439a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949476)));
label_1439a8:
    // 0x1439a8: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1439a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1439ac:
    // 0x1439ac: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1439acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1439b0:
    // 0x1439b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1439b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1439b4:
    // 0x1439b4: 0xc04c5bc  jal         func_1316F0
label_1439b8:
    if (ctx->pc == 0x1439B8u) {
        ctx->pc = 0x1439BCu;
        goto label_1439bc;
    }
    ctx->pc = 0x1439B4u;
    SET_GPR_U32(ctx, 31, 0x1439BCu);
    ctx->pc = 0x1316F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316F0u, 0x1439B4u, 0x1439BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1439BCu;
label_1439bc:
    // 0x1439bc: 0x93a2018f  lbu         $v0, 0x18F($sp)
    ctx->pc = 0x1439bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 399)));
label_1439c0:
    // 0x1439c0: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
label_1439c4:
    if (ctx->pc == 0x1439C4u) {
        ctx->pc = 0x1439C8u;
        goto label_1439c8;
    }
    ctx->pc = 0x1439C0u;
    {
        const bool branch_taken_0x1439c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1439c0) {
            ctx->pc = 0x143AC0u;
            goto label_143ac0;
        }
    }
    ctx->pc = 0x1439C8u;
label_1439c8:
    // 0x1439c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1439c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1439cc:
    // 0x1439cc: 0x2405054d  addiu       $a1, $zero, 0x54D
    ctx->pc = 0x1439ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1357));
label_1439d0:
    // 0x1439d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1439d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1439d4:
    // 0x1439d4: 0xc040ab0  jal         func_102AC0
label_1439d8:
    if (ctx->pc == 0x1439D8u) {
        ctx->pc = 0x1439DCu;
        goto label_1439dc;
    }
    ctx->pc = 0x1439D4u;
    SET_GPR_U32(ctx, 31, 0x1439DCu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x1439D4u, 0x1439DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1439DCu;
label_1439dc:
    // 0x1439dc: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x1439dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_1439e0:
    // 0x1439e0: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x1439e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_1439e4:
    // 0x1439e4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_1439e8:
    if (ctx->pc == 0x1439E8u) {
        ctx->pc = 0x1439ECu;
        goto label_1439ec;
    }
    ctx->pc = 0x1439E4u;
    {
        const bool branch_taken_0x1439e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1439e4) {
            ctx->pc = 0x143AC0u;
            goto label_143ac0;
        }
    }
    ctx->pc = 0x1439ECu;
label_1439ec:
    // 0x1439ec: 0x93a2018e  lbu         $v0, 0x18E($sp)
    ctx->pc = 0x1439ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 398)));
label_1439f0:
    // 0x1439f0: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_1439f4:
    if (ctx->pc == 0x1439F4u) {
        ctx->pc = 0x1439F8u;
        goto label_1439f8;
    }
    ctx->pc = 0x1439F0u;
    {
        const bool branch_taken_0x1439f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1439f0) {
            ctx->pc = 0x143AC0u;
            goto label_143ac0;
        }
    }
    ctx->pc = 0x1439F8u;
label_1439f8:
    // 0x1439f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1439f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1439fc:
    // 0x1439fc: 0xc091008  jal         func_244020
label_143a00:
    if (ctx->pc == 0x143A00u) {
        ctx->pc = 0x143A04u;
        goto label_143a04;
    }
    ctx->pc = 0x1439FCu;
    SET_GPR_U32(ctx, 31, 0x143A04u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x1439FCu, 0x143A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A04u;
label_143a04:
    // 0x143a04: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x143a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_143a08:
    // 0x143a08: 0xc7ac0128  lwc1        $f12, 0x128($sp)
    ctx->pc = 0x143a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_143a0c:
    // 0x143a0c: 0xc0c38f0  jal         func_30E3C0
label_143a10:
    if (ctx->pc == 0x143A10u) {
        ctx->pc = 0x143A14u;
        goto label_143a14;
    }
    ctx->pc = 0x143A0Cu;
    SET_GPR_U32(ctx, 31, 0x143A14u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x143A0Cu, 0x143A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A14u;
label_143a14:
    // 0x143a14: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x143a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_143a18:
    // 0x143a18: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x143a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_143a1c:
    // 0x143a1c: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x143a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_143a20:
    // 0x143a20: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x143a20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_143a24:
    // 0x143a24: 0x0  nop
    ctx->pc = 0x143a24u;
    // NOP
label_143a28:
    // 0x143a28: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x143a28u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
label_143a2c:
    // 0x143a2c: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x143a2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_143a30:
    // 0x143a30: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x143a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_143a34:
    // 0x143a34: 0xc7ac0128  lwc1        $f12, 0x128($sp)
    ctx->pc = 0x143a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_143a38:
    // 0x143a38: 0xc0c3966  jal         func_30E598
label_143a3c:
    if (ctx->pc == 0x143A3Cu) {
        ctx->pc = 0x143A40u;
        goto label_143a40;
    }
    ctx->pc = 0x143A38u;
    SET_GPR_U32(ctx, 31, 0x143A40u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x143A38u, 0x143A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A40u;
label_143a40:
    // 0x143a40: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x143a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_143a44:
    // 0x143a44: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x143a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_143a48:
    // 0x143a48: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x143a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_143a4c:
    // 0x143a4c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x143a4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_143a50:
    // 0x143a50: 0x0  nop
    ctx->pc = 0x143a50u;
    // NOP
label_143a54:
    // 0x143a54: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x143a54u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
label_143a58:
    // 0x143a58: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x143a58u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_143a5c:
    // 0x143a5c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x143a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_143a60:
    // 0x143a60: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x143a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_143a64:
    // 0x143a64: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x143a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_143a68:
    // 0x143a68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x143a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143a6c:
    // 0x143a6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x143a6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143a70:
    // 0x143a70: 0xc043448  jal         func_10D120
label_143a74:
    if (ctx->pc == 0x143A74u) {
        ctx->pc = 0x143A78u;
        goto label_143a78;
    }
    ctx->pc = 0x143A70u;
    SET_GPR_U32(ctx, 31, 0x143A78u);
    ctx->pc = 0x10D120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D120u, 0x143A70u, 0x143A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A78u;
label_143a78:
    // 0x143a78: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x143a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
label_143a7c:
    // 0x143a7c: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x143a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_143a80:
    // 0x143a80: 0xc050b24  jal         func_142C90
label_143a84:
    if (ctx->pc == 0x143A84u) {
        ctx->pc = 0x143A88u;
        goto label_143a88;
    }
    ctx->pc = 0x143A80u;
    SET_GPR_U32(ctx, 31, 0x143A88u);
    ctx->pc = 0x142C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142C90u, 0x143A80u, 0x143A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A88u;
label_143a88:
    // 0x143a88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x143a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143a8c:
    // 0x143a8c: 0xc0412ec  jal         func_104BB0
label_143a90:
    if (ctx->pc == 0x143A90u) {
        ctx->pc = 0x143A94u;
        goto label_143a94;
    }
    ctx->pc = 0x143A8Cu;
    SET_GPR_U32(ctx, 31, 0x143A94u);
    ctx->pc = 0x104BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104BB0u, 0x143A8Cu, 0x143A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A94u;
label_143a94:
    // 0x143a94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x143a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143a98:
    // 0x143a98: 0xc0ac868  jal         func_2B21A0
label_143a9c:
    if (ctx->pc == 0x143A9Cu) {
        ctx->pc = 0x143AA0u;
        goto label_143aa0;
    }
    ctx->pc = 0x143A98u;
    SET_GPR_U32(ctx, 31, 0x143AA0u);
    ctx->pc = 0x2B21A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B21A0u, 0x143A98u, 0x143AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143AA0u;
label_143aa0:
    // 0x143aa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x143aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143aa4:
    // 0x143aa4: 0xc0b06c4  jal         func_2C1B10
label_143aa8:
    if (ctx->pc == 0x143AA8u) {
        ctx->pc = 0x143AACu;
        goto label_143aac;
    }
    ctx->pc = 0x143AA4u;
    SET_GPR_U32(ctx, 31, 0x143AACu);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x143AA4u, 0x143AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143AACu;
label_143aac:
    // 0x143aac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x143aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143ab0:
    // 0x143ab0: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x143ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_143ab4:
    // 0x143ab4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x143ab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_143ab8:
    // 0x143ab8: 0xc0b4784  jal         func_2D1E10
label_143abc:
    if (ctx->pc == 0x143ABCu) {
        ctx->pc = 0x143AC0u;
        goto label_143ac0;
    }
    ctx->pc = 0x143AB8u;
    SET_GPR_U32(ctx, 31, 0x143AC0u);
    ctx->pc = 0x2D1E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1E10u, 0x143AB8u, 0x143AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143AC0u;
label_143ac0:
    // 0x143ac0: 0xafb10120  sw          $s1, 0x120($sp)
    ctx->pc = 0x143ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 17));
label_143ac4:
    // 0x143ac4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x143ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_143ac8:
    // 0x143ac8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x143ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_143acc:
    // 0x143acc: 0xc0402d4  jal         func_100B50
label_143ad0:
    if (ctx->pc == 0x143AD0u) {
        ctx->pc = 0x143AD4u;
        goto label_143ad4;
    }
    ctx->pc = 0x143ACCu;
    SET_GPR_U32(ctx, 31, 0x143AD4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x143ACCu, 0x143AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143AD4u;
label_143ad4:
    // 0x143ad4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x143ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143ad8:
    // 0x143ad8: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x143ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_143adc:
    // 0x143adc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x143adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_143ae0:
    // 0x143ae0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x143ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_143ae4:
    // 0x143ae4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x143ae4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_143ae8:
    // 0x143ae8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x143ae8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_143aec:
    // 0x143aec: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x143aecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_143af0:
    // 0x143af0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x143af0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_143af4:
    // 0x143af4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x143af4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_143af8:
    // 0x143af8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x143af8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_143afc:
    // 0x143afc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x143afcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_143b00:
    // 0x143b00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x143b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_143b04:
    // 0x143b04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x143b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_143b08:
    // 0x143b08: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x143b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_143b0c:
    // 0x143b0c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x143b0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_143b10:
    // 0x143b10: 0x3e00008  jr          $ra
label_143b14:
    if (ctx->pc == 0x143B14u) {
        ctx->pc = 0x143B18u;
        goto label_143b18;
    }
    ctx->pc = 0x143B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143B18u;
label_143b18:
    // 0x143b18: 0x0  nop
    ctx->pc = 0x143b18u;
    // NOP
label_143b1c:
    // 0x143b1c: 0x0  nop
    ctx->pc = 0x143b1cu;
    // NOP
    ctx->pc = 0x143b20u;
}
