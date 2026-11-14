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

// Function: sub_00391230
// Address: 0x391230 - 0x3920e8
void sub_00391230_0x391230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391230_0x391230");
#endif

    switch (ctx->pc) {
        case 0x391230u: goto label_391230;
        case 0x391234u: goto label_391234;
        case 0x391238u: goto label_391238;
        case 0x39123cu: goto label_39123c;
        case 0x391240u: goto label_391240;
        case 0x391244u: goto label_391244;
        case 0x391248u: goto label_391248;
        case 0x39124cu: goto label_39124c;
        case 0x391250u: goto label_391250;
        case 0x391254u: goto label_391254;
        case 0x391258u: goto label_391258;
        case 0x39125cu: goto label_39125c;
        case 0x391260u: goto label_391260;
        case 0x391264u: goto label_391264;
        case 0x391268u: goto label_391268;
        case 0x39126cu: goto label_39126c;
        case 0x391270u: goto label_391270;
        case 0x391274u: goto label_391274;
        case 0x391278u: goto label_391278;
        case 0x39127cu: goto label_39127c;
        case 0x391280u: goto label_391280;
        case 0x391284u: goto label_391284;
        case 0x391288u: goto label_391288;
        case 0x39128cu: goto label_39128c;
        case 0x391290u: goto label_391290;
        case 0x391294u: goto label_391294;
        case 0x391298u: goto label_391298;
        case 0x39129cu: goto label_39129c;
        case 0x3912a0u: goto label_3912a0;
        case 0x3912a4u: goto label_3912a4;
        case 0x3912a8u: goto label_3912a8;
        case 0x3912acu: goto label_3912ac;
        case 0x3912b0u: goto label_3912b0;
        case 0x3912b4u: goto label_3912b4;
        case 0x3912b8u: goto label_3912b8;
        case 0x3912bcu: goto label_3912bc;
        case 0x3912c0u: goto label_3912c0;
        case 0x3912c4u: goto label_3912c4;
        case 0x3912c8u: goto label_3912c8;
        case 0x3912ccu: goto label_3912cc;
        case 0x3912d0u: goto label_3912d0;
        case 0x3912d4u: goto label_3912d4;
        case 0x3912d8u: goto label_3912d8;
        case 0x3912dcu: goto label_3912dc;
        case 0x3912e0u: goto label_3912e0;
        case 0x3912e4u: goto label_3912e4;
        case 0x3912e8u: goto label_3912e8;
        case 0x3912ecu: goto label_3912ec;
        case 0x3912f0u: goto label_3912f0;
        case 0x3912f4u: goto label_3912f4;
        case 0x3912f8u: goto label_3912f8;
        case 0x3912fcu: goto label_3912fc;
        case 0x391300u: goto label_391300;
        case 0x391304u: goto label_391304;
        case 0x391308u: goto label_391308;
        case 0x39130cu: goto label_39130c;
        case 0x391310u: goto label_391310;
        case 0x391314u: goto label_391314;
        case 0x391318u: goto label_391318;
        case 0x39131cu: goto label_39131c;
        case 0x391320u: goto label_391320;
        case 0x391324u: goto label_391324;
        case 0x391328u: goto label_391328;
        case 0x39132cu: goto label_39132c;
        case 0x391330u: goto label_391330;
        case 0x391334u: goto label_391334;
        case 0x391338u: goto label_391338;
        case 0x39133cu: goto label_39133c;
        case 0x391340u: goto label_391340;
        case 0x391344u: goto label_391344;
        case 0x391348u: goto label_391348;
        case 0x39134cu: goto label_39134c;
        case 0x391350u: goto label_391350;
        case 0x391354u: goto label_391354;
        case 0x391358u: goto label_391358;
        case 0x39135cu: goto label_39135c;
        case 0x391360u: goto label_391360;
        case 0x391364u: goto label_391364;
        case 0x391368u: goto label_391368;
        case 0x39136cu: goto label_39136c;
        case 0x391370u: goto label_391370;
        case 0x391374u: goto label_391374;
        case 0x391378u: goto label_391378;
        case 0x39137cu: goto label_39137c;
        case 0x391380u: goto label_391380;
        case 0x391384u: goto label_391384;
        case 0x391388u: goto label_391388;
        case 0x39138cu: goto label_39138c;
        case 0x391390u: goto label_391390;
        case 0x391394u: goto label_391394;
        case 0x391398u: goto label_391398;
        case 0x39139cu: goto label_39139c;
        case 0x3913a0u: goto label_3913a0;
        case 0x3913a4u: goto label_3913a4;
        case 0x3913a8u: goto label_3913a8;
        case 0x3913acu: goto label_3913ac;
        case 0x3913b0u: goto label_3913b0;
        case 0x3913b4u: goto label_3913b4;
        case 0x3913b8u: goto label_3913b8;
        case 0x3913bcu: goto label_3913bc;
        case 0x3913c0u: goto label_3913c0;
        case 0x3913c4u: goto label_3913c4;
        case 0x3913c8u: goto label_3913c8;
        case 0x3913ccu: goto label_3913cc;
        case 0x3913d0u: goto label_3913d0;
        case 0x3913d4u: goto label_3913d4;
        case 0x3913d8u: goto label_3913d8;
        case 0x3913dcu: goto label_3913dc;
        case 0x3913e0u: goto label_3913e0;
        case 0x3913e4u: goto label_3913e4;
        case 0x3913e8u: goto label_3913e8;
        case 0x3913ecu: goto label_3913ec;
        case 0x3913f0u: goto label_3913f0;
        case 0x3913f4u: goto label_3913f4;
        case 0x3913f8u: goto label_3913f8;
        case 0x3913fcu: goto label_3913fc;
        case 0x391400u: goto label_391400;
        case 0x391404u: goto label_391404;
        case 0x391408u: goto label_391408;
        case 0x39140cu: goto label_39140c;
        case 0x391410u: goto label_391410;
        case 0x391414u: goto label_391414;
        case 0x391418u: goto label_391418;
        case 0x39141cu: goto label_39141c;
        case 0x391420u: goto label_391420;
        case 0x391424u: goto label_391424;
        case 0x391428u: goto label_391428;
        case 0x39142cu: goto label_39142c;
        case 0x391430u: goto label_391430;
        case 0x391434u: goto label_391434;
        case 0x391438u: goto label_391438;
        case 0x39143cu: goto label_39143c;
        case 0x391440u: goto label_391440;
        case 0x391444u: goto label_391444;
        case 0x391448u: goto label_391448;
        case 0x39144cu: goto label_39144c;
        case 0x391450u: goto label_391450;
        case 0x391454u: goto label_391454;
        case 0x391458u: goto label_391458;
        case 0x39145cu: goto label_39145c;
        case 0x391460u: goto label_391460;
        case 0x391464u: goto label_391464;
        case 0x391468u: goto label_391468;
        case 0x39146cu: goto label_39146c;
        case 0x391470u: goto label_391470;
        case 0x391474u: goto label_391474;
        case 0x391478u: goto label_391478;
        case 0x39147cu: goto label_39147c;
        case 0x391480u: goto label_391480;
        case 0x391484u: goto label_391484;
        case 0x391488u: goto label_391488;
        case 0x39148cu: goto label_39148c;
        case 0x391490u: goto label_391490;
        case 0x391494u: goto label_391494;
        case 0x391498u: goto label_391498;
        case 0x39149cu: goto label_39149c;
        case 0x3914a0u: goto label_3914a0;
        case 0x3914a4u: goto label_3914a4;
        case 0x3914a8u: goto label_3914a8;
        case 0x3914acu: goto label_3914ac;
        case 0x3914b0u: goto label_3914b0;
        case 0x3914b4u: goto label_3914b4;
        case 0x3914b8u: goto label_3914b8;
        case 0x3914bcu: goto label_3914bc;
        case 0x3914c0u: goto label_3914c0;
        case 0x3914c4u: goto label_3914c4;
        case 0x3914c8u: goto label_3914c8;
        case 0x3914ccu: goto label_3914cc;
        case 0x3914d0u: goto label_3914d0;
        case 0x3914d4u: goto label_3914d4;
        case 0x3914d8u: goto label_3914d8;
        case 0x3914dcu: goto label_3914dc;
        case 0x3914e0u: goto label_3914e0;
        case 0x3914e4u: goto label_3914e4;
        case 0x3914e8u: goto label_3914e8;
        case 0x3914ecu: goto label_3914ec;
        case 0x3914f0u: goto label_3914f0;
        case 0x3914f4u: goto label_3914f4;
        case 0x3914f8u: goto label_3914f8;
        case 0x3914fcu: goto label_3914fc;
        case 0x391500u: goto label_391500;
        case 0x391504u: goto label_391504;
        case 0x391508u: goto label_391508;
        case 0x39150cu: goto label_39150c;
        case 0x391510u: goto label_391510;
        case 0x391514u: goto label_391514;
        case 0x391518u: goto label_391518;
        case 0x39151cu: goto label_39151c;
        case 0x391520u: goto label_391520;
        case 0x391524u: goto label_391524;
        case 0x391528u: goto label_391528;
        case 0x39152cu: goto label_39152c;
        case 0x391530u: goto label_391530;
        case 0x391534u: goto label_391534;
        case 0x391538u: goto label_391538;
        case 0x39153cu: goto label_39153c;
        case 0x391540u: goto label_391540;
        case 0x391544u: goto label_391544;
        case 0x391548u: goto label_391548;
        case 0x39154cu: goto label_39154c;
        case 0x391550u: goto label_391550;
        case 0x391554u: goto label_391554;
        case 0x391558u: goto label_391558;
        case 0x39155cu: goto label_39155c;
        case 0x391560u: goto label_391560;
        case 0x391564u: goto label_391564;
        case 0x391568u: goto label_391568;
        case 0x39156cu: goto label_39156c;
        case 0x391570u: goto label_391570;
        case 0x391574u: goto label_391574;
        case 0x391578u: goto label_391578;
        case 0x39157cu: goto label_39157c;
        case 0x391580u: goto label_391580;
        case 0x391584u: goto label_391584;
        case 0x391588u: goto label_391588;
        case 0x39158cu: goto label_39158c;
        case 0x391590u: goto label_391590;
        case 0x391594u: goto label_391594;
        case 0x391598u: goto label_391598;
        case 0x39159cu: goto label_39159c;
        case 0x3915a0u: goto label_3915a0;
        case 0x3915a4u: goto label_3915a4;
        case 0x3915a8u: goto label_3915a8;
        case 0x3915acu: goto label_3915ac;
        case 0x3915b0u: goto label_3915b0;
        case 0x3915b4u: goto label_3915b4;
        case 0x3915b8u: goto label_3915b8;
        case 0x3915bcu: goto label_3915bc;
        case 0x3915c0u: goto label_3915c0;
        case 0x3915c4u: goto label_3915c4;
        case 0x3915c8u: goto label_3915c8;
        case 0x3915ccu: goto label_3915cc;
        case 0x3915d0u: goto label_3915d0;
        case 0x3915d4u: goto label_3915d4;
        case 0x3915d8u: goto label_3915d8;
        case 0x3915dcu: goto label_3915dc;
        case 0x3915e0u: goto label_3915e0;
        case 0x3915e4u: goto label_3915e4;
        case 0x3915e8u: goto label_3915e8;
        case 0x3915ecu: goto label_3915ec;
        case 0x3915f0u: goto label_3915f0;
        case 0x3915f4u: goto label_3915f4;
        case 0x3915f8u: goto label_3915f8;
        case 0x3915fcu: goto label_3915fc;
        case 0x391600u: goto label_391600;
        case 0x391604u: goto label_391604;
        case 0x391608u: goto label_391608;
        case 0x39160cu: goto label_39160c;
        case 0x391610u: goto label_391610;
        case 0x391614u: goto label_391614;
        case 0x391618u: goto label_391618;
        case 0x39161cu: goto label_39161c;
        case 0x391620u: goto label_391620;
        case 0x391624u: goto label_391624;
        case 0x391628u: goto label_391628;
        case 0x39162cu: goto label_39162c;
        case 0x391630u: goto label_391630;
        case 0x391634u: goto label_391634;
        case 0x391638u: goto label_391638;
        case 0x39163cu: goto label_39163c;
        case 0x391640u: goto label_391640;
        case 0x391644u: goto label_391644;
        case 0x391648u: goto label_391648;
        case 0x39164cu: goto label_39164c;
        case 0x391650u: goto label_391650;
        case 0x391654u: goto label_391654;
        case 0x391658u: goto label_391658;
        case 0x39165cu: goto label_39165c;
        case 0x391660u: goto label_391660;
        case 0x391664u: goto label_391664;
        case 0x391668u: goto label_391668;
        case 0x39166cu: goto label_39166c;
        case 0x391670u: goto label_391670;
        case 0x391674u: goto label_391674;
        case 0x391678u: goto label_391678;
        case 0x39167cu: goto label_39167c;
        case 0x391680u: goto label_391680;
        case 0x391684u: goto label_391684;
        case 0x391688u: goto label_391688;
        case 0x39168cu: goto label_39168c;
        case 0x391690u: goto label_391690;
        case 0x391694u: goto label_391694;
        case 0x391698u: goto label_391698;
        case 0x39169cu: goto label_39169c;
        case 0x3916a0u: goto label_3916a0;
        case 0x3916a4u: goto label_3916a4;
        case 0x3916a8u: goto label_3916a8;
        case 0x3916acu: goto label_3916ac;
        case 0x3916b0u: goto label_3916b0;
        case 0x3916b4u: goto label_3916b4;
        case 0x3916b8u: goto label_3916b8;
        case 0x3916bcu: goto label_3916bc;
        case 0x3916c0u: goto label_3916c0;
        case 0x3916c4u: goto label_3916c4;
        case 0x3916c8u: goto label_3916c8;
        case 0x3916ccu: goto label_3916cc;
        case 0x3916d0u: goto label_3916d0;
        case 0x3916d4u: goto label_3916d4;
        case 0x3916d8u: goto label_3916d8;
        case 0x3916dcu: goto label_3916dc;
        case 0x3916e0u: goto label_3916e0;
        case 0x3916e4u: goto label_3916e4;
        case 0x3916e8u: goto label_3916e8;
        case 0x3916ecu: goto label_3916ec;
        case 0x3916f0u: goto label_3916f0;
        case 0x3916f4u: goto label_3916f4;
        case 0x3916f8u: goto label_3916f8;
        case 0x3916fcu: goto label_3916fc;
        case 0x391700u: goto label_391700;
        case 0x391704u: goto label_391704;
        case 0x391708u: goto label_391708;
        case 0x39170cu: goto label_39170c;
        case 0x391710u: goto label_391710;
        case 0x391714u: goto label_391714;
        case 0x391718u: goto label_391718;
        case 0x39171cu: goto label_39171c;
        case 0x391720u: goto label_391720;
        case 0x391724u: goto label_391724;
        case 0x391728u: goto label_391728;
        case 0x39172cu: goto label_39172c;
        case 0x391730u: goto label_391730;
        case 0x391734u: goto label_391734;
        case 0x391738u: goto label_391738;
        case 0x39173cu: goto label_39173c;
        case 0x391740u: goto label_391740;
        case 0x391744u: goto label_391744;
        case 0x391748u: goto label_391748;
        case 0x39174cu: goto label_39174c;
        case 0x391750u: goto label_391750;
        case 0x391754u: goto label_391754;
        case 0x391758u: goto label_391758;
        case 0x39175cu: goto label_39175c;
        case 0x391760u: goto label_391760;
        case 0x391764u: goto label_391764;
        case 0x391768u: goto label_391768;
        case 0x39176cu: goto label_39176c;
        case 0x391770u: goto label_391770;
        case 0x391774u: goto label_391774;
        case 0x391778u: goto label_391778;
        case 0x39177cu: goto label_39177c;
        case 0x391780u: goto label_391780;
        case 0x391784u: goto label_391784;
        case 0x391788u: goto label_391788;
        case 0x39178cu: goto label_39178c;
        case 0x391790u: goto label_391790;
        case 0x391794u: goto label_391794;
        case 0x391798u: goto label_391798;
        case 0x39179cu: goto label_39179c;
        case 0x3917a0u: goto label_3917a0;
        case 0x3917a4u: goto label_3917a4;
        case 0x3917a8u: goto label_3917a8;
        case 0x3917acu: goto label_3917ac;
        case 0x3917b0u: goto label_3917b0;
        case 0x3917b4u: goto label_3917b4;
        case 0x3917b8u: goto label_3917b8;
        case 0x3917bcu: goto label_3917bc;
        case 0x3917c0u: goto label_3917c0;
        case 0x3917c4u: goto label_3917c4;
        case 0x3917c8u: goto label_3917c8;
        case 0x3917ccu: goto label_3917cc;
        case 0x3917d0u: goto label_3917d0;
        case 0x3917d4u: goto label_3917d4;
        case 0x3917d8u: goto label_3917d8;
        case 0x3917dcu: goto label_3917dc;
        case 0x3917e0u: goto label_3917e0;
        case 0x3917e4u: goto label_3917e4;
        case 0x3917e8u: goto label_3917e8;
        case 0x3917ecu: goto label_3917ec;
        case 0x3917f0u: goto label_3917f0;
        case 0x3917f4u: goto label_3917f4;
        case 0x3917f8u: goto label_3917f8;
        case 0x3917fcu: goto label_3917fc;
        case 0x391800u: goto label_391800;
        case 0x391804u: goto label_391804;
        case 0x391808u: goto label_391808;
        case 0x39180cu: goto label_39180c;
        case 0x391810u: goto label_391810;
        case 0x391814u: goto label_391814;
        case 0x391818u: goto label_391818;
        case 0x39181cu: goto label_39181c;
        case 0x391820u: goto label_391820;
        case 0x391824u: goto label_391824;
        case 0x391828u: goto label_391828;
        case 0x39182cu: goto label_39182c;
        case 0x391830u: goto label_391830;
        case 0x391834u: goto label_391834;
        case 0x391838u: goto label_391838;
        case 0x39183cu: goto label_39183c;
        case 0x391840u: goto label_391840;
        case 0x391844u: goto label_391844;
        case 0x391848u: goto label_391848;
        case 0x39184cu: goto label_39184c;
        case 0x391850u: goto label_391850;
        case 0x391854u: goto label_391854;
        case 0x391858u: goto label_391858;
        case 0x39185cu: goto label_39185c;
        case 0x391860u: goto label_391860;
        case 0x391864u: goto label_391864;
        case 0x391868u: goto label_391868;
        case 0x39186cu: goto label_39186c;
        case 0x391870u: goto label_391870;
        case 0x391874u: goto label_391874;
        case 0x391878u: goto label_391878;
        case 0x39187cu: goto label_39187c;
        case 0x391880u: goto label_391880;
        case 0x391884u: goto label_391884;
        case 0x391888u: goto label_391888;
        case 0x39188cu: goto label_39188c;
        case 0x391890u: goto label_391890;
        case 0x391894u: goto label_391894;
        case 0x391898u: goto label_391898;
        case 0x39189cu: goto label_39189c;
        case 0x3918a0u: goto label_3918a0;
        case 0x3918a4u: goto label_3918a4;
        case 0x3918a8u: goto label_3918a8;
        case 0x3918acu: goto label_3918ac;
        case 0x3918b0u: goto label_3918b0;
        case 0x3918b4u: goto label_3918b4;
        case 0x3918b8u: goto label_3918b8;
        case 0x3918bcu: goto label_3918bc;
        case 0x3918c0u: goto label_3918c0;
        case 0x3918c4u: goto label_3918c4;
        case 0x3918c8u: goto label_3918c8;
        case 0x3918ccu: goto label_3918cc;
        case 0x3918d0u: goto label_3918d0;
        case 0x3918d4u: goto label_3918d4;
        case 0x3918d8u: goto label_3918d8;
        case 0x3918dcu: goto label_3918dc;
        case 0x3918e0u: goto label_3918e0;
        case 0x3918e4u: goto label_3918e4;
        case 0x3918e8u: goto label_3918e8;
        case 0x3918ecu: goto label_3918ec;
        case 0x3918f0u: goto label_3918f0;
        case 0x3918f4u: goto label_3918f4;
        case 0x3918f8u: goto label_3918f8;
        case 0x3918fcu: goto label_3918fc;
        case 0x391900u: goto label_391900;
        case 0x391904u: goto label_391904;
        case 0x391908u: goto label_391908;
        case 0x39190cu: goto label_39190c;
        case 0x391910u: goto label_391910;
        case 0x391914u: goto label_391914;
        case 0x391918u: goto label_391918;
        case 0x39191cu: goto label_39191c;
        case 0x391920u: goto label_391920;
        case 0x391924u: goto label_391924;
        case 0x391928u: goto label_391928;
        case 0x39192cu: goto label_39192c;
        case 0x391930u: goto label_391930;
        case 0x391934u: goto label_391934;
        case 0x391938u: goto label_391938;
        case 0x39193cu: goto label_39193c;
        case 0x391940u: goto label_391940;
        case 0x391944u: goto label_391944;
        case 0x391948u: goto label_391948;
        case 0x39194cu: goto label_39194c;
        case 0x391950u: goto label_391950;
        case 0x391954u: goto label_391954;
        case 0x391958u: goto label_391958;
        case 0x39195cu: goto label_39195c;
        case 0x391960u: goto label_391960;
        case 0x391964u: goto label_391964;
        case 0x391968u: goto label_391968;
        case 0x39196cu: goto label_39196c;
        case 0x391970u: goto label_391970;
        case 0x391974u: goto label_391974;
        case 0x391978u: goto label_391978;
        case 0x39197cu: goto label_39197c;
        case 0x391980u: goto label_391980;
        case 0x391984u: goto label_391984;
        case 0x391988u: goto label_391988;
        case 0x39198cu: goto label_39198c;
        case 0x391990u: goto label_391990;
        case 0x391994u: goto label_391994;
        case 0x391998u: goto label_391998;
        case 0x39199cu: goto label_39199c;
        case 0x3919a0u: goto label_3919a0;
        case 0x3919a4u: goto label_3919a4;
        case 0x3919a8u: goto label_3919a8;
        case 0x3919acu: goto label_3919ac;
        case 0x3919b0u: goto label_3919b0;
        case 0x3919b4u: goto label_3919b4;
        case 0x3919b8u: goto label_3919b8;
        case 0x3919bcu: goto label_3919bc;
        case 0x3919c0u: goto label_3919c0;
        case 0x3919c4u: goto label_3919c4;
        case 0x3919c8u: goto label_3919c8;
        case 0x3919ccu: goto label_3919cc;
        case 0x3919d0u: goto label_3919d0;
        case 0x3919d4u: goto label_3919d4;
        case 0x3919d8u: goto label_3919d8;
        case 0x3919dcu: goto label_3919dc;
        case 0x3919e0u: goto label_3919e0;
        case 0x3919e4u: goto label_3919e4;
        case 0x3919e8u: goto label_3919e8;
        case 0x3919ecu: goto label_3919ec;
        case 0x3919f0u: goto label_3919f0;
        case 0x3919f4u: goto label_3919f4;
        case 0x3919f8u: goto label_3919f8;
        case 0x3919fcu: goto label_3919fc;
        case 0x391a00u: goto label_391a00;
        case 0x391a04u: goto label_391a04;
        case 0x391a08u: goto label_391a08;
        case 0x391a0cu: goto label_391a0c;
        case 0x391a10u: goto label_391a10;
        case 0x391a14u: goto label_391a14;
        case 0x391a18u: goto label_391a18;
        case 0x391a1cu: goto label_391a1c;
        case 0x391a20u: goto label_391a20;
        case 0x391a24u: goto label_391a24;
        case 0x391a28u: goto label_391a28;
        case 0x391a2cu: goto label_391a2c;
        case 0x391a30u: goto label_391a30;
        case 0x391a34u: goto label_391a34;
        case 0x391a38u: goto label_391a38;
        case 0x391a3cu: goto label_391a3c;
        case 0x391a40u: goto label_391a40;
        case 0x391a44u: goto label_391a44;
        case 0x391a48u: goto label_391a48;
        case 0x391a4cu: goto label_391a4c;
        case 0x391a50u: goto label_391a50;
        case 0x391a54u: goto label_391a54;
        case 0x391a58u: goto label_391a58;
        case 0x391a5cu: goto label_391a5c;
        case 0x391a60u: goto label_391a60;
        case 0x391a64u: goto label_391a64;
        case 0x391a68u: goto label_391a68;
        case 0x391a6cu: goto label_391a6c;
        case 0x391a70u: goto label_391a70;
        case 0x391a74u: goto label_391a74;
        case 0x391a78u: goto label_391a78;
        case 0x391a7cu: goto label_391a7c;
        case 0x391a80u: goto label_391a80;
        case 0x391a84u: goto label_391a84;
        case 0x391a88u: goto label_391a88;
        case 0x391a8cu: goto label_391a8c;
        case 0x391a90u: goto label_391a90;
        case 0x391a94u: goto label_391a94;
        case 0x391a98u: goto label_391a98;
        case 0x391a9cu: goto label_391a9c;
        case 0x391aa0u: goto label_391aa0;
        case 0x391aa4u: goto label_391aa4;
        case 0x391aa8u: goto label_391aa8;
        case 0x391aacu: goto label_391aac;
        case 0x391ab0u: goto label_391ab0;
        case 0x391ab4u: goto label_391ab4;
        case 0x391ab8u: goto label_391ab8;
        case 0x391abcu: goto label_391abc;
        case 0x391ac0u: goto label_391ac0;
        case 0x391ac4u: goto label_391ac4;
        case 0x391ac8u: goto label_391ac8;
        case 0x391accu: goto label_391acc;
        case 0x391ad0u: goto label_391ad0;
        case 0x391ad4u: goto label_391ad4;
        case 0x391ad8u: goto label_391ad8;
        case 0x391adcu: goto label_391adc;
        case 0x391ae0u: goto label_391ae0;
        case 0x391ae4u: goto label_391ae4;
        case 0x391ae8u: goto label_391ae8;
        case 0x391aecu: goto label_391aec;
        case 0x391af0u: goto label_391af0;
        case 0x391af4u: goto label_391af4;
        case 0x391af8u: goto label_391af8;
        case 0x391afcu: goto label_391afc;
        case 0x391b00u: goto label_391b00;
        case 0x391b04u: goto label_391b04;
        case 0x391b08u: goto label_391b08;
        case 0x391b0cu: goto label_391b0c;
        case 0x391b10u: goto label_391b10;
        case 0x391b14u: goto label_391b14;
        case 0x391b18u: goto label_391b18;
        case 0x391b1cu: goto label_391b1c;
        case 0x391b20u: goto label_391b20;
        case 0x391b24u: goto label_391b24;
        case 0x391b28u: goto label_391b28;
        case 0x391b2cu: goto label_391b2c;
        case 0x391b30u: goto label_391b30;
        case 0x391b34u: goto label_391b34;
        case 0x391b38u: goto label_391b38;
        case 0x391b3cu: goto label_391b3c;
        case 0x391b40u: goto label_391b40;
        case 0x391b44u: goto label_391b44;
        case 0x391b48u: goto label_391b48;
        case 0x391b4cu: goto label_391b4c;
        case 0x391b50u: goto label_391b50;
        case 0x391b54u: goto label_391b54;
        case 0x391b58u: goto label_391b58;
        case 0x391b5cu: goto label_391b5c;
        case 0x391b60u: goto label_391b60;
        case 0x391b64u: goto label_391b64;
        case 0x391b68u: goto label_391b68;
        case 0x391b6cu: goto label_391b6c;
        case 0x391b70u: goto label_391b70;
        case 0x391b74u: goto label_391b74;
        case 0x391b78u: goto label_391b78;
        case 0x391b7cu: goto label_391b7c;
        case 0x391b80u: goto label_391b80;
        case 0x391b84u: goto label_391b84;
        case 0x391b88u: goto label_391b88;
        case 0x391b8cu: goto label_391b8c;
        case 0x391b90u: goto label_391b90;
        case 0x391b94u: goto label_391b94;
        case 0x391b98u: goto label_391b98;
        case 0x391b9cu: goto label_391b9c;
        case 0x391ba0u: goto label_391ba0;
        case 0x391ba4u: goto label_391ba4;
        case 0x391ba8u: goto label_391ba8;
        case 0x391bacu: goto label_391bac;
        case 0x391bb0u: goto label_391bb0;
        case 0x391bb4u: goto label_391bb4;
        case 0x391bb8u: goto label_391bb8;
        case 0x391bbcu: goto label_391bbc;
        case 0x391bc0u: goto label_391bc0;
        case 0x391bc4u: goto label_391bc4;
        case 0x391bc8u: goto label_391bc8;
        case 0x391bccu: goto label_391bcc;
        case 0x391bd0u: goto label_391bd0;
        case 0x391bd4u: goto label_391bd4;
        case 0x391bd8u: goto label_391bd8;
        case 0x391bdcu: goto label_391bdc;
        case 0x391be0u: goto label_391be0;
        case 0x391be4u: goto label_391be4;
        case 0x391be8u: goto label_391be8;
        case 0x391becu: goto label_391bec;
        case 0x391bf0u: goto label_391bf0;
        case 0x391bf4u: goto label_391bf4;
        case 0x391bf8u: goto label_391bf8;
        case 0x391bfcu: goto label_391bfc;
        case 0x391c00u: goto label_391c00;
        case 0x391c04u: goto label_391c04;
        case 0x391c08u: goto label_391c08;
        case 0x391c0cu: goto label_391c0c;
        case 0x391c10u: goto label_391c10;
        case 0x391c14u: goto label_391c14;
        case 0x391c18u: goto label_391c18;
        case 0x391c1cu: goto label_391c1c;
        case 0x391c20u: goto label_391c20;
        case 0x391c24u: goto label_391c24;
        case 0x391c28u: goto label_391c28;
        case 0x391c2cu: goto label_391c2c;
        case 0x391c30u: goto label_391c30;
        case 0x391c34u: goto label_391c34;
        case 0x391c38u: goto label_391c38;
        case 0x391c3cu: goto label_391c3c;
        case 0x391c40u: goto label_391c40;
        case 0x391c44u: goto label_391c44;
        case 0x391c48u: goto label_391c48;
        case 0x391c4cu: goto label_391c4c;
        case 0x391c50u: goto label_391c50;
        case 0x391c54u: goto label_391c54;
        case 0x391c58u: goto label_391c58;
        case 0x391c5cu: goto label_391c5c;
        case 0x391c60u: goto label_391c60;
        case 0x391c64u: goto label_391c64;
        case 0x391c68u: goto label_391c68;
        case 0x391c6cu: goto label_391c6c;
        case 0x391c70u: goto label_391c70;
        case 0x391c74u: goto label_391c74;
        case 0x391c78u: goto label_391c78;
        case 0x391c7cu: goto label_391c7c;
        case 0x391c80u: goto label_391c80;
        case 0x391c84u: goto label_391c84;
        case 0x391c88u: goto label_391c88;
        case 0x391c8cu: goto label_391c8c;
        case 0x391c90u: goto label_391c90;
        case 0x391c94u: goto label_391c94;
        case 0x391c98u: goto label_391c98;
        case 0x391c9cu: goto label_391c9c;
        case 0x391ca0u: goto label_391ca0;
        case 0x391ca4u: goto label_391ca4;
        case 0x391ca8u: goto label_391ca8;
        case 0x391cacu: goto label_391cac;
        case 0x391cb0u: goto label_391cb0;
        case 0x391cb4u: goto label_391cb4;
        case 0x391cb8u: goto label_391cb8;
        case 0x391cbcu: goto label_391cbc;
        case 0x391cc0u: goto label_391cc0;
        case 0x391cc4u: goto label_391cc4;
        case 0x391cc8u: goto label_391cc8;
        case 0x391cccu: goto label_391ccc;
        case 0x391cd0u: goto label_391cd0;
        case 0x391cd4u: goto label_391cd4;
        case 0x391cd8u: goto label_391cd8;
        case 0x391cdcu: goto label_391cdc;
        case 0x391ce0u: goto label_391ce0;
        case 0x391ce4u: goto label_391ce4;
        case 0x391ce8u: goto label_391ce8;
        case 0x391cecu: goto label_391cec;
        case 0x391cf0u: goto label_391cf0;
        case 0x391cf4u: goto label_391cf4;
        case 0x391cf8u: goto label_391cf8;
        case 0x391cfcu: goto label_391cfc;
        case 0x391d00u: goto label_391d00;
        case 0x391d04u: goto label_391d04;
        case 0x391d08u: goto label_391d08;
        case 0x391d0cu: goto label_391d0c;
        case 0x391d10u: goto label_391d10;
        case 0x391d14u: goto label_391d14;
        case 0x391d18u: goto label_391d18;
        case 0x391d1cu: goto label_391d1c;
        case 0x391d20u: goto label_391d20;
        case 0x391d24u: goto label_391d24;
        case 0x391d28u: goto label_391d28;
        case 0x391d2cu: goto label_391d2c;
        case 0x391d30u: goto label_391d30;
        case 0x391d34u: goto label_391d34;
        case 0x391d38u: goto label_391d38;
        case 0x391d3cu: goto label_391d3c;
        case 0x391d40u: goto label_391d40;
        case 0x391d44u: goto label_391d44;
        case 0x391d48u: goto label_391d48;
        case 0x391d4cu: goto label_391d4c;
        case 0x391d50u: goto label_391d50;
        case 0x391d54u: goto label_391d54;
        case 0x391d58u: goto label_391d58;
        case 0x391d5cu: goto label_391d5c;
        case 0x391d60u: goto label_391d60;
        case 0x391d64u: goto label_391d64;
        case 0x391d68u: goto label_391d68;
        case 0x391d6cu: goto label_391d6c;
        case 0x391d70u: goto label_391d70;
        case 0x391d74u: goto label_391d74;
        case 0x391d78u: goto label_391d78;
        case 0x391d7cu: goto label_391d7c;
        case 0x391d80u: goto label_391d80;
        case 0x391d84u: goto label_391d84;
        case 0x391d88u: goto label_391d88;
        case 0x391d8cu: goto label_391d8c;
        case 0x391d90u: goto label_391d90;
        case 0x391d94u: goto label_391d94;
        case 0x391d98u: goto label_391d98;
        case 0x391d9cu: goto label_391d9c;
        case 0x391da0u: goto label_391da0;
        case 0x391da4u: goto label_391da4;
        case 0x391da8u: goto label_391da8;
        case 0x391dacu: goto label_391dac;
        case 0x391db0u: goto label_391db0;
        case 0x391db4u: goto label_391db4;
        case 0x391db8u: goto label_391db8;
        case 0x391dbcu: goto label_391dbc;
        case 0x391dc0u: goto label_391dc0;
        case 0x391dc4u: goto label_391dc4;
        case 0x391dc8u: goto label_391dc8;
        case 0x391dccu: goto label_391dcc;
        case 0x391dd0u: goto label_391dd0;
        case 0x391dd4u: goto label_391dd4;
        case 0x391dd8u: goto label_391dd8;
        case 0x391ddcu: goto label_391ddc;
        case 0x391de0u: goto label_391de0;
        case 0x391de4u: goto label_391de4;
        case 0x391de8u: goto label_391de8;
        case 0x391decu: goto label_391dec;
        case 0x391df0u: goto label_391df0;
        case 0x391df4u: goto label_391df4;
        case 0x391df8u: goto label_391df8;
        case 0x391dfcu: goto label_391dfc;
        case 0x391e00u: goto label_391e00;
        case 0x391e04u: goto label_391e04;
        case 0x391e08u: goto label_391e08;
        case 0x391e0cu: goto label_391e0c;
        case 0x391e10u: goto label_391e10;
        case 0x391e14u: goto label_391e14;
        case 0x391e18u: goto label_391e18;
        case 0x391e1cu: goto label_391e1c;
        case 0x391e20u: goto label_391e20;
        case 0x391e24u: goto label_391e24;
        case 0x391e28u: goto label_391e28;
        case 0x391e2cu: goto label_391e2c;
        case 0x391e30u: goto label_391e30;
        case 0x391e34u: goto label_391e34;
        case 0x391e38u: goto label_391e38;
        case 0x391e3cu: goto label_391e3c;
        case 0x391e40u: goto label_391e40;
        case 0x391e44u: goto label_391e44;
        case 0x391e48u: goto label_391e48;
        case 0x391e4cu: goto label_391e4c;
        case 0x391e50u: goto label_391e50;
        case 0x391e54u: goto label_391e54;
        case 0x391e58u: goto label_391e58;
        case 0x391e5cu: goto label_391e5c;
        case 0x391e60u: goto label_391e60;
        case 0x391e64u: goto label_391e64;
        case 0x391e68u: goto label_391e68;
        case 0x391e6cu: goto label_391e6c;
        case 0x391e70u: goto label_391e70;
        case 0x391e74u: goto label_391e74;
        case 0x391e78u: goto label_391e78;
        case 0x391e7cu: goto label_391e7c;
        case 0x391e80u: goto label_391e80;
        case 0x391e84u: goto label_391e84;
        case 0x391e88u: goto label_391e88;
        case 0x391e8cu: goto label_391e8c;
        case 0x391e90u: goto label_391e90;
        case 0x391e94u: goto label_391e94;
        case 0x391e98u: goto label_391e98;
        case 0x391e9cu: goto label_391e9c;
        case 0x391ea0u: goto label_391ea0;
        case 0x391ea4u: goto label_391ea4;
        case 0x391ea8u: goto label_391ea8;
        case 0x391eacu: goto label_391eac;
        case 0x391eb0u: goto label_391eb0;
        case 0x391eb4u: goto label_391eb4;
        case 0x391eb8u: goto label_391eb8;
        case 0x391ebcu: goto label_391ebc;
        case 0x391ec0u: goto label_391ec0;
        case 0x391ec4u: goto label_391ec4;
        case 0x391ec8u: goto label_391ec8;
        case 0x391eccu: goto label_391ecc;
        case 0x391ed0u: goto label_391ed0;
        case 0x391ed4u: goto label_391ed4;
        case 0x391ed8u: goto label_391ed8;
        case 0x391edcu: goto label_391edc;
        case 0x391ee0u: goto label_391ee0;
        case 0x391ee4u: goto label_391ee4;
        case 0x391ee8u: goto label_391ee8;
        case 0x391eecu: goto label_391eec;
        case 0x391ef0u: goto label_391ef0;
        case 0x391ef4u: goto label_391ef4;
        case 0x391ef8u: goto label_391ef8;
        case 0x391efcu: goto label_391efc;
        case 0x391f00u: goto label_391f00;
        case 0x391f04u: goto label_391f04;
        case 0x391f08u: goto label_391f08;
        case 0x391f0cu: goto label_391f0c;
        case 0x391f10u: goto label_391f10;
        case 0x391f14u: goto label_391f14;
        case 0x391f18u: goto label_391f18;
        case 0x391f1cu: goto label_391f1c;
        case 0x391f20u: goto label_391f20;
        case 0x391f24u: goto label_391f24;
        case 0x391f28u: goto label_391f28;
        case 0x391f2cu: goto label_391f2c;
        case 0x391f30u: goto label_391f30;
        case 0x391f34u: goto label_391f34;
        case 0x391f38u: goto label_391f38;
        case 0x391f3cu: goto label_391f3c;
        case 0x391f40u: goto label_391f40;
        case 0x391f44u: goto label_391f44;
        case 0x391f48u: goto label_391f48;
        case 0x391f4cu: goto label_391f4c;
        case 0x391f50u: goto label_391f50;
        case 0x391f54u: goto label_391f54;
        case 0x391f58u: goto label_391f58;
        case 0x391f5cu: goto label_391f5c;
        case 0x391f60u: goto label_391f60;
        case 0x391f64u: goto label_391f64;
        case 0x391f68u: goto label_391f68;
        case 0x391f6cu: goto label_391f6c;
        case 0x391f70u: goto label_391f70;
        case 0x391f74u: goto label_391f74;
        case 0x391f78u: goto label_391f78;
        case 0x391f7cu: goto label_391f7c;
        case 0x391f80u: goto label_391f80;
        case 0x391f84u: goto label_391f84;
        case 0x391f88u: goto label_391f88;
        case 0x391f8cu: goto label_391f8c;
        case 0x391f90u: goto label_391f90;
        case 0x391f94u: goto label_391f94;
        case 0x391f98u: goto label_391f98;
        case 0x391f9cu: goto label_391f9c;
        case 0x391fa0u: goto label_391fa0;
        case 0x391fa4u: goto label_391fa4;
        case 0x391fa8u: goto label_391fa8;
        case 0x391facu: goto label_391fac;
        case 0x391fb0u: goto label_391fb0;
        case 0x391fb4u: goto label_391fb4;
        case 0x391fb8u: goto label_391fb8;
        case 0x391fbcu: goto label_391fbc;
        case 0x391fc0u: goto label_391fc0;
        case 0x391fc4u: goto label_391fc4;
        case 0x391fc8u: goto label_391fc8;
        case 0x391fccu: goto label_391fcc;
        case 0x391fd0u: goto label_391fd0;
        case 0x391fd4u: goto label_391fd4;
        case 0x391fd8u: goto label_391fd8;
        case 0x391fdcu: goto label_391fdc;
        case 0x391fe0u: goto label_391fe0;
        case 0x391fe4u: goto label_391fe4;
        case 0x391fe8u: goto label_391fe8;
        case 0x391fecu: goto label_391fec;
        case 0x391ff0u: goto label_391ff0;
        case 0x391ff4u: goto label_391ff4;
        case 0x391ff8u: goto label_391ff8;
        case 0x391ffcu: goto label_391ffc;
        case 0x392000u: goto label_392000;
        case 0x392004u: goto label_392004;
        case 0x392008u: goto label_392008;
        case 0x39200cu: goto label_39200c;
        case 0x392010u: goto label_392010;
        case 0x392014u: goto label_392014;
        case 0x392018u: goto label_392018;
        case 0x39201cu: goto label_39201c;
        case 0x392020u: goto label_392020;
        case 0x392024u: goto label_392024;
        case 0x392028u: goto label_392028;
        case 0x39202cu: goto label_39202c;
        case 0x392030u: goto label_392030;
        case 0x392034u: goto label_392034;
        case 0x392038u: goto label_392038;
        case 0x39203cu: goto label_39203c;
        case 0x392040u: goto label_392040;
        case 0x392044u: goto label_392044;
        case 0x392048u: goto label_392048;
        case 0x39204cu: goto label_39204c;
        case 0x392050u: goto label_392050;
        case 0x392054u: goto label_392054;
        case 0x392058u: goto label_392058;
        case 0x39205cu: goto label_39205c;
        case 0x392060u: goto label_392060;
        case 0x392064u: goto label_392064;
        case 0x392068u: goto label_392068;
        case 0x39206cu: goto label_39206c;
        case 0x392070u: goto label_392070;
        case 0x392074u: goto label_392074;
        case 0x392078u: goto label_392078;
        case 0x39207cu: goto label_39207c;
        case 0x392080u: goto label_392080;
        case 0x392084u: goto label_392084;
        case 0x392088u: goto label_392088;
        case 0x39208cu: goto label_39208c;
        case 0x392090u: goto label_392090;
        case 0x392094u: goto label_392094;
        case 0x392098u: goto label_392098;
        case 0x39209cu: goto label_39209c;
        case 0x3920a0u: goto label_3920a0;
        case 0x3920a4u: goto label_3920a4;
        case 0x3920a8u: goto label_3920a8;
        case 0x3920acu: goto label_3920ac;
        case 0x3920b0u: goto label_3920b0;
        case 0x3920b4u: goto label_3920b4;
        case 0x3920b8u: goto label_3920b8;
        case 0x3920bcu: goto label_3920bc;
        case 0x3920c0u: goto label_3920c0;
        case 0x3920c4u: goto label_3920c4;
        case 0x3920c8u: goto label_3920c8;
        case 0x3920ccu: goto label_3920cc;
        case 0x3920d0u: goto label_3920d0;
        case 0x3920d4u: goto label_3920d4;
        case 0x3920d8u: goto label_3920d8;
        case 0x3920dcu: goto label_3920dc;
        case 0x3920e0u: goto label_3920e0;
        case 0x3920e4u: goto label_3920e4;
        default: break;
    }

    ctx->pc = 0x391230u;

label_391230:
    // 0x391230: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x391230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_391234:
    // 0x391234: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x391234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
label_391238:
    // 0x391238: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x391238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
label_39123c:
    // 0x39123c: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x39123cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
label_391240:
    // 0x391240: 0xafa6002c  sw          $a2, 0x2C($sp)
    ctx->pc = 0x391240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 6));
label_391244:
    // 0x391244: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x391244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_391248:
    // 0x391248: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x391248u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_39124c:
    // 0x39124c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x39124cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_391250:
    // 0x391250: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x391250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_391254:
    // 0x391254: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x391254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_391258:
    // 0x391258: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x391258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_39125c:
    // 0x39125c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x39125cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_391260:
    // 0x391260: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x391260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_391264:
    // 0x391264: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x391264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_391268:
    // 0x391268: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x391268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_39126c:
    // 0x39126c: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x39126cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_391270:
    // 0x391270: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x391270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_391274:
    // 0x391274: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x391274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_391278:
    // 0x391278: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x391278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_39127c:
    // 0x39127c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x39127cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_391280:
    // 0x391280: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x391280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_391284:
    // 0x391284: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x391284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_391288:
    // 0x391288: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x391288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_39128c:
    // 0x39128c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x39128cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_391290:
    // 0x391290: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x391290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_391294:
    // 0x391294: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x391294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_391298:
    // 0x391298: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x391298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_39129c:
    // 0x39129c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x39129cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_3912a0:
    // 0x3912a0: 0xc0e423c  jal         func_3908F0
label_3912a4:
    if (ctx->pc == 0x3912A4u) {
        ctx->pc = 0x3912A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3912A0u;
        // 0x3912a4: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3912A8u;
        goto label_3912a8;
    }
    ctx->pc = 0x3912A0u;
    SET_GPR_U32(ctx, 31, 0x3912A8u);
    ctx->pc = 0x3912A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3912A0u;
    // 0x3912a4: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3908F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3908F0u, 0x3912A0u, 0x3912A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3912A8u;
label_3912a8:
    // 0x3912a8: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x3912a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_3912ac:
    // 0x3912ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3912acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3912b0:
    // 0x3912b0: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
label_3912b4:
    if (ctx->pc == 0x3912B4u) {
        ctx->pc = 0x3912B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3912B0u;
        // 0x3912b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3912B8u;
        goto label_3912b8;
    }
    ctx->pc = 0x3912B0u;
    {
        const bool branch_taken_0x3912b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3912B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3912B0u;
        // 0x3912b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3912b0) {
            ctx->pc = 0x391504u;
            goto label_391504;
        }
    }
    ctx->pc = 0x3912B8u;
label_3912b8:
    // 0x3912b8: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x3912b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3912bc:
    // 0x3912bc: 0x18400031  blez        $v0, . + 4 + (0x31 << 2)
label_3912c0:
    if (ctx->pc == 0x3912C0u) {
        ctx->pc = 0x3912C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3912BCu;
        // 0x3912c0: 0x30430003  andi        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3912C4u;
        goto label_3912c4;
    }
    ctx->pc = 0x3912BCu;
    {
        const bool branch_taken_0x3912bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3912C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3912BCu;
        // 0x3912c0: 0x30430003  andi        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3912bc) {
            ctx->pc = 0x391384u;
            goto label_391384;
        }
    }
    ctx->pc = 0x3912C4u;
label_3912c4:
    // 0x3912c4: 0x50600047  beql        $v1, $zero, . + 4 + (0x47 << 2)
label_3912c8:
    if (ctx->pc == 0x3912C8u) {
        ctx->pc = 0x3912C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3912C4u;
        // 0x3912c8: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3912CCu;
        goto label_3912cc;
    }
    ctx->pc = 0x3912C4u;
    {
        const bool branch_taken_0x3912c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3912c4) {
            ctx->pc = 0x3912C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3912C4u;
            // 0x3912c8: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3913E4u;
            goto label_3913e4;
        }
    }
    ctx->pc = 0x3912CCu;
label_3912cc:
    // 0x3912cc: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3912ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3912d0:
    // 0x3912d0: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_3912d4:
    if (ctx->pc == 0x3912D4u) {
        ctx->pc = 0x3912D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3912D0u;
        // 0x3912d4: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3912D8u;
        goto label_3912d8;
    }
    ctx->pc = 0x3912D0u;
    {
        const bool branch_taken_0x3912d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3912D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3912D0u;
        // 0x3912d4: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3912d0) {
            ctx->pc = 0x391388u;
            goto label_391388;
        }
    }
    ctx->pc = 0x3912D8u;
label_3912d8:
    // 0x3912d8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3912d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3912dc:
    // 0x3912dc: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_3912e0:
    if (ctx->pc == 0x3912E0u) {
        ctx->pc = 0x3912E4u;
        goto label_3912e4;
    }
    ctx->pc = 0x3912DCu;
    {
        const bool branch_taken_0x3912dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3912dc) {
            ctx->pc = 0x39133Cu;
            goto label_39133c;
        }
    }
    ctx->pc = 0x3912E4u;
label_3912e4:
    // 0x3912e4: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x3912e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
label_3912e8:
    // 0x3912e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3912e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3912ec:
    // 0x3912ec: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3912ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3912f0:
    // 0x3912f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3912f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3912f4:
    // 0x3912f4: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x3912f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
label_3912f8:
    // 0x3912f8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3912f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3912fc:
    // 0x3912fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3912fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_391300:
    // 0x391300: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x391300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_391304:
    // 0x391304: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_391308:
    if (ctx->pc == 0x391308u) {
        ctx->pc = 0x391308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391304u;
        // 0x391308: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39130Cu;
        goto label_39130c;
    }
    ctx->pc = 0x391304u;
    {
        const bool branch_taken_0x391304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x391304) {
            ctx->pc = 0x391308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391304u;
            // 0x391308: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39130Cu;
            goto label_39130c;
        }
    }
    ctx->pc = 0x39130Cu;
label_39130c:
    // 0x39130c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x39130cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_391310:
    // 0x391310: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x391310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_391314:
    // 0x391314: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x391314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_391318:
    // 0x391318: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x391318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_39131c:
    // 0x39131c: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x39131cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_391320:
    // 0x391320: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x391320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_391324:
    // 0x391324: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x391324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_391328:
    // 0x391328: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x391328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_39132c:
    // 0x39132c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x39132cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_391330:
    // 0x391330: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x391330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_391334:
    // 0x391334: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x391334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_391338:
    // 0x391338: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x391338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39133c:
    // 0x39133c: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x39133cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
label_391340:
    // 0x391340: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x391340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_391344:
    // 0x391344: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x391344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_391348:
    // 0x391348: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x391348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39134c:
    // 0x39134c: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x39134cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
label_391350:
    // 0x391350: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x391350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_391354:
    // 0x391354: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x391354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_391358:
    // 0x391358: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_39135c:
    if (ctx->pc == 0x39135Cu) {
        ctx->pc = 0x39135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391358u;
        // 0x39135c: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391360u;
        goto label_391360;
    }
    ctx->pc = 0x391358u;
    {
        const bool branch_taken_0x391358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x391358) {
            ctx->pc = 0x39135Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391358u;
            // 0x39135c: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x391360u;
            goto label_391360;
        }
    }
    ctx->pc = 0x391360u;
label_391360:
    // 0x391360: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x391360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_391364:
    // 0x391364: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x391364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_391368:
    // 0x391368: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x391368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_39136c:
    // 0x39136c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39136cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_391370:
    // 0x391370: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x391370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_391374:
    // 0x391374: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x391374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_391378:
    // 0x391378: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x391378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39137c:
    // 0x39137c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x39137cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_391380:
    // 0x391380: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x391380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_391384:
    // 0x391384: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x391384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_391388:
    // 0x391388: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x391388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
label_39138c:
    // 0x39138c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39138cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_391390:
    // 0x391390: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x391390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_391394:
    // 0x391394: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x391394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_391398:
    // 0x391398: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x391398u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
label_39139c:
    // 0x39139c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x39139cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3913a0:
    // 0x3913a0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3913a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3913a4:
    // 0x3913a4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_3913a8:
    if (ctx->pc == 0x3913A8u) {
        ctx->pc = 0x3913A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3913A4u;
        // 0x3913a8: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3913ACu;
        goto label_3913ac;
    }
    ctx->pc = 0x3913A4u;
    {
        const bool branch_taken_0x3913a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3913a4) {
            ctx->pc = 0x3913A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3913A4u;
            // 0x3913a8: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3913ACu;
            goto label_3913ac;
        }
    }
    ctx->pc = 0x3913ACu;
label_3913ac:
    // 0x3913ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3913acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3913b0:
    // 0x3913b0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3913b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3913b4:
    // 0x3913b4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3913b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3913b8:
    // 0x3913b8: 0xe2282b  sltu        $a1, $a3, $v0
    ctx->pc = 0x3913b8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3913bc:
    // 0x3913bc: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x3913bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_3913c0:
    // 0x3913c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3913c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3913c4:
    // 0x3913c4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3913c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3913c8:
    // 0x3913c8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3913c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_3913cc:
    // 0x3913cc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3913ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3913d0:
    // 0x3913d0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3913d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3913d4:
    // 0x3913d4: 0x10a0004b  beqz        $a1, . + 4 + (0x4B << 2)
label_3913d8:
    if (ctx->pc == 0x3913D8u) {
        ctx->pc = 0x3913D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3913D4u;
        // 0x3913d8: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3913DCu;
        goto label_3913dc;
    }
    ctx->pc = 0x3913D4u;
    {
        const bool branch_taken_0x3913d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3913D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3913D4u;
        // 0x3913d8: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3913d4) {
            ctx->pc = 0x391504u;
            goto label_391504;
        }
    }
    ctx->pc = 0x3913DCu;
label_3913dc:
    // 0x3913dc: 0x0  nop
    ctx->pc = 0x3913dcu;
    // NOP
label_3913e0:
    // 0x3913e0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x3913e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3913e4:
    // 0x3913e4: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x3913e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
label_3913e8:
    // 0x3913e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3913e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3913ec:
    // 0x3913ec: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3913ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3913f0:
    // 0x3913f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3913f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3913f4:
    // 0x3913f4: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x3913f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
label_3913f8:
    // 0x3913f8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3913f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3913fc:
    // 0x3913fc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3913fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_391400:
    // 0x391400: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_391404:
    if (ctx->pc == 0x391404u) {
        ctx->pc = 0x391404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391400u;
        // 0x391404: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391408u;
        goto label_391408;
    }
    ctx->pc = 0x391400u;
    {
        const bool branch_taken_0x391400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x391400) {
            ctx->pc = 0x391404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391400u;
            // 0x391404: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x391408u;
            goto label_391408;
        }
    }
    ctx->pc = 0x391408u;
label_391408:
    // 0x391408: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x391408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39140c:
    // 0x39140c: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x39140cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_391410:
    // 0x391410: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x391410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_391414:
    // 0x391414: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x391414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_391418:
    // 0x391418: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x391418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_39141c:
    // 0x39141c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x39141cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_391420:
    // 0x391420: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x391420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_391424:
    // 0x391424: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x391424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_391428:
    // 0x391428: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x391428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
label_39142c:
    // 0x39142c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39142cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_391430:
    // 0x391430: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x391430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_391434:
    // 0x391434: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x391434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_391438:
    // 0x391438: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x391438u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
label_39143c:
    // 0x39143c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x39143cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_391440:
    // 0x391440: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x391440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_391444:
    // 0x391444: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_391448:
    if (ctx->pc == 0x391448u) {
        ctx->pc = 0x391448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391444u;
        // 0x391448: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39144Cu;
        goto label_39144c;
    }
    ctx->pc = 0x391444u;
    {
        const bool branch_taken_0x391444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x391444) {
            ctx->pc = 0x391448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391444u;
            // 0x391448: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39144Cu;
            goto label_39144c;
        }
    }
    ctx->pc = 0x39144Cu;
label_39144c:
    // 0x39144c: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x39144cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_391450:
    // 0x391450: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x391450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_391454:
    // 0x391454: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x391454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_391458:
    // 0x391458: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x391458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_39145c:
    // 0x39145c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x39145cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_391460:
    // 0x391460: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x391460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_391464:
    // 0x391464: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x391464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_391468:
    // 0x391468: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x391468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_39146c:
    // 0x39146c: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x39146cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
label_391470:
    // 0x391470: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x391470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_391474:
    // 0x391474: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x391474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_391478:
    // 0x391478: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x391478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39147c:
    // 0x39147c: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x39147cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
label_391480:
    // 0x391480: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x391480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_391484:
    // 0x391484: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x391484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_391488:
    // 0x391488: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_39148c:
    if (ctx->pc == 0x39148Cu) {
        ctx->pc = 0x39148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391488u;
        // 0x39148c: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391490u;
        goto label_391490;
    }
    ctx->pc = 0x391488u;
    {
        const bool branch_taken_0x391488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x391488) {
            ctx->pc = 0x39148Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391488u;
            // 0x39148c: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x391490u;
            goto label_391490;
        }
    }
    ctx->pc = 0x391490u;
label_391490:
    // 0x391490: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x391490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_391494:
    // 0x391494: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x391494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_391498:
    // 0x391498: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x391498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_39149c:
    // 0x39149c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x39149cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3914a0:
    // 0x3914a0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3914a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_3914a4:
    // 0x3914a4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3914a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3914a8:
    // 0x3914a8: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x3914a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_3914ac:
    // 0x3914ac: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x3914acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_3914b0:
    // 0x3914b0: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x3914b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
label_3914b4:
    // 0x3914b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3914b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3914b8:
    // 0x3914b8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3914b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3914bc:
    // 0x3914bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3914bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3914c0:
    // 0x3914c0: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x3914c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
label_3914c4:
    // 0x3914c4: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x3914c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_3914c8:
    // 0x3914c8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3914c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3914cc:
    // 0x3914cc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_3914d0:
    if (ctx->pc == 0x3914D0u) {
        ctx->pc = 0x3914D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3914CCu;
        // 0x3914d0: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3914D4u;
        goto label_3914d4;
    }
    ctx->pc = 0x3914CCu;
    {
        const bool branch_taken_0x3914cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3914cc) {
            ctx->pc = 0x3914D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3914CCu;
            // 0x3914d0: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3914D4u;
            goto label_3914d4;
        }
    }
    ctx->pc = 0x3914D4u;
label_3914d4:
    // 0x3914d4: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x3914d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_3914d8:
    // 0x3914d8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3914d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3914dc:
    // 0x3914dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3914dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3914e0:
    // 0x3914e0: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x3914e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_3914e4:
    // 0x3914e4: 0xe3282b  sltu        $a1, $a3, $v1
    ctx->pc = 0x3914e4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3914e8:
    // 0x3914e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3914e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3914ec:
    // 0x3914ec: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3914ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3914f0:
    // 0x3914f0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3914f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_3914f4:
    // 0x3914f4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x3914f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_3914f8:
    // 0x3914f8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3914f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_3914fc:
    // 0x3914fc: 0x14a0ffb8  bnez        $a1, . + 4 + (-0x48 << 2)
label_391500:
    if (ctx->pc == 0x391500u) {
        ctx->pc = 0x391500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3914FCu;
        // 0x391500: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391504u;
        goto label_391504;
    }
    ctx->pc = 0x3914FCu;
    {
        const bool branch_taken_0x3914fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x391500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3914FCu;
        // 0x391500: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3914fc) {
            ctx->pc = 0x3913E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3913e0;
        }
    }
    ctx->pc = 0x391504u;
label_391504:
    // 0x391504: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x391504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_391508:
    // 0x391508: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x391508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_39150c:
    // 0x39150c: 0x2492e880  addiu       $s2, $a0, -0x1780
    ctx->pc = 0x39150cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_391510:
    // 0x391510: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x391510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_391514:
    // 0x391514: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x391514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_391518:
    // 0x391518: 0x8e420118  lw          $v0, 0x118($s2)
    ctx->pc = 0x391518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_39151c:
    // 0x39151c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x39151cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_391520:
    // 0x391520: 0x40f809  jalr        $v0
label_391524:
    if (ctx->pc == 0x391524u) {
        ctx->pc = 0x391524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391520u;
        // 0x391524: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x391528u;
        goto label_391528;
    }
    ctx->pc = 0x391520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x391528u);
        ctx->pc = 0x391524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391520u;
        // 0x391524: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391520u, 0x391528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391528u;
label_391528:
    // 0x391528: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x391528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_39152c:
    // 0x39152c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x39152cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391530:
    // 0x391530: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x391530u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_391534:
    // 0x391534: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x391534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_391538:
    // 0x391538: 0x68040  sll         $s0, $a2, 1
    ctx->pc = 0x391538u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_39153c:
    // 0x39153c: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x39153cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_391540:
    // 0x391540: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x391540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_391544:
    // 0x391544: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x391544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_391548:
    // 0x391548: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x391548u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_39154c:
    // 0x39154c: 0xaeb00008  sw          $s0, 0x8($s5)
    ctx->pc = 0x39154cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 16));
label_391550:
    // 0x391550: 0x40f809  jalr        $v0
label_391554:
    if (ctx->pc == 0x391554u) {
        ctx->pc = 0x391554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391550u;
        // 0x391554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391558u;
        goto label_391558;
    }
    ctx->pc = 0x391550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x391558u);
        ctx->pc = 0x391554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391550u;
        // 0x391554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391550u, 0x391558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391558u;
label_391558:
    // 0x391558: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x391558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_39155c:
    // 0x39155c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x39155cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_391560:
    // 0x391560: 0x8e460118  lw          $a2, 0x118($s2)
    ctx->pc = 0x391560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_391564:
    // 0x391564: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x391564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_391568:
    // 0x391568: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x391568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_39156c:
    // 0x39156c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x39156cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_391570:
    // 0x391570: 0xc0f809  jalr        $a2
label_391574:
    if (ctx->pc == 0x391574u) {
        ctx->pc = 0x391574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391570u;
        // 0x391574: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391578u;
        goto label_391578;
    }
    ctx->pc = 0x391570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x391578u);
        ctx->pc = 0x391574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391570u;
        // 0x391574: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391570u, 0x391578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391578u;
label_391578:
    // 0x391578: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x391578u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39157c:
    // 0x39157c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x39157cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_391580:
    // 0x391580: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x391580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_391584:
    // 0x391584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x391584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_391588:
    // 0x391588: 0xae900008  sw          $s0, 0x8($s4)
    ctx->pc = 0x391588u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 16));
label_39158c:
    // 0x39158c: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x39158cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_391590:
    // 0x391590: 0x40f809  jalr        $v0
label_391594:
    if (ctx->pc == 0x391594u) {
        ctx->pc = 0x391594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391590u;
        // 0x391594: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391598u;
        goto label_391598;
    }
    ctx->pc = 0x391590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x391598u);
        ctx->pc = 0x391594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391590u;
        // 0x391594: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391590u, 0x391598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391598u;
label_391598:
    // 0x391598: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x391598u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_39159c:
    // 0x39159c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x39159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3915a0:
    // 0x3915a0: 0x10400254  beqz        $v0, . + 4 + (0x254 << 2)
label_3915a4:
    if (ctx->pc == 0x3915A4u) {
        ctx->pc = 0x3915A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3915A0u;
        // 0x3915a4: 0x3c060062  lui         $a2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3915A8u;
        goto label_3915a8;
    }
    ctx->pc = 0x3915A0u;
    {
        const bool branch_taken_0x3915a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3915A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3915A0u;
        // 0x3915a4: 0x3c060062  lui         $a2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3915a0) {
            ctx->pc = 0x391EF4u;
            goto label_391ef4;
        }
    }
    ctx->pc = 0x3915A8u;
label_3915a8:
    // 0x3915a8: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x3915a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3915ac:
    // 0x3915ac: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3915acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3915b0:
    // 0x3915b0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x3915b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3915b4:
    // 0x3915b4: 0x0  nop
    ctx->pc = 0x3915b4u;
    // NOP
label_3915b8:
    // 0x3915b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3915b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3915bc:
    // 0x3915bc: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x3915bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3915c0:
    // 0x3915c0: 0x4180b  movn        $v1, $zero, $a0
    ctx->pc = 0x3915c0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_3915c4:
    // 0x3915c4: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x3915c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_3915c8:
    // 0x3915c8: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
label_3915cc:
    if (ctx->pc == 0x3915CCu) {
        ctx->pc = 0x3915CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3915C8u;
        // 0x3915cc: 0xafa30048  sw          $v1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3915D0u;
        goto label_3915d0;
    }
    ctx->pc = 0x3915C8u;
    {
        const bool branch_taken_0x3915c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3915CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3915C8u;
        // 0x3915cc: 0xafa30048  sw          $v1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3915c8) {
            ctx->pc = 0x391684u;
            goto label_391684;
        }
    }
    ctx->pc = 0x3915D0u;
label_3915d0:
    // 0x3915d0: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x3915d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_3915d4:
    // 0x3915d4: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x3915d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_3915d8:
    // 0x3915d8: 0x24c6e880  addiu       $a2, $a2, -0x1780
    ctx->pc = 0x3915d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961280));
label_3915dc:
    // 0x3915dc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3915dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3915e0:
    // 0x3915e0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3915e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3915e4:
    // 0x3915e4: 0x8cc20118  lw          $v0, 0x118($a2)
    ctx->pc = 0x3915e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 280)));
label_3915e8:
    // 0x3915e8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x3915e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3915ec:
    // 0x3915ec: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x3915ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_3915f0:
    // 0x3915f0: 0x40f809  jalr        $v0
label_3915f4:
    if (ctx->pc == 0x3915F4u) {
        ctx->pc = 0x3915F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3915F0u;
        // 0x3915f4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3915F8u;
        goto label_3915f8;
    }
    ctx->pc = 0x3915F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3915F8u);
        ctx->pc = 0x3915F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3915F0u;
        // 0x3915f4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3915F0u, 0x3915F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3915F8u;
label_3915f8:
    // 0x3915f8: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x3915f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3915fc:
    // 0x3915fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3915fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391600:
    // 0x391600: 0xae360008  sw          $s6, 0x8($s1)
    ctx->pc = 0x391600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 22));
label_391604:
    // 0x391604: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x391604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_391608:
    // 0x391608: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x391608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39160c:
    // 0x39160c: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x39160cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_391610:
    // 0x391610: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x391610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_391614:
    // 0x391614: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x391614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_391618:
    // 0x391618: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x391618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_39161c:
    // 0x39161c: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x39161cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_391620:
    // 0x391620: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x391620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_391624:
    // 0x391624: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x391624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_391628:
    // 0x391628: 0xacd10000  sw          $s1, 0x0($a2)
    ctx->pc = 0x391628u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
label_39162c:
    // 0x39162c: 0x40f809  jalr        $v0
label_391630:
    if (ctx->pc == 0x391630u) {
        ctx->pc = 0x391630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39162Cu;
        // 0x391630: 0xae360004  sw          $s6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391634u;
        goto label_391634;
    }
    ctx->pc = 0x39162Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x391634u);
        ctx->pc = 0x391630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39162Cu;
        // 0x391630: 0xae360004  sw          $s6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39162Cu, 0x391634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391634u;
label_391634:
    // 0x391634: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x391634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_391638:
    // 0x391638: 0x600013  mtlo        $v1
    ctx->pc = 0x391638u;
    ctx->lo = GPR_U64(ctx, 3);
label_39163c:
    // 0x39163c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x39163cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_391640:
    // 0x391640: 0x72038000  madd        $s0, $s0, $v1
    ctx->pc = 0x391640u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_391644:
    // 0x391644: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x391644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_391648:
    // 0x391648: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x391648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_39164c:
    // 0x39164c: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x39164cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_391650:
    // 0x391650: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x391650u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_391654:
    // 0x391654: 0xac720018  sw          $s2, 0x18($v1)
    ctx->pc = 0x391654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 18));
label_391658:
    // 0x391658: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x391658u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_39165c:
    // 0x39165c: 0xac72001c  sw          $s2, 0x1C($v1)
    ctx->pc = 0x39165cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 18));
label_391660:
    // 0x391660: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x391660u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_391664:
    // 0x391664: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x391664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_391668:
    // 0x391668: 0xa4440002  sh          $a0, 0x2($v0)
    ctx->pc = 0x391668u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 4));
label_39166c:
    // 0x39166c: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x39166cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_391670:
    // 0x391670: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_391674:
    if (ctx->pc == 0x391674u) {
        ctx->pc = 0x391674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391670u;
        // 0x391674: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391678u;
        goto label_391678;
    }
    ctx->pc = 0x391670u;
    {
        const bool branch_taken_0x391670 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x391674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391670u;
        // 0x391674: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391670) {
            ctx->pc = 0x39167Cu;
            goto label_39167c;
        }
    }
    ctx->pc = 0x391678u;
label_391678:
    // 0x391678: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x391678u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_39167c:
    // 0x39167c: 0x10000218  b           . + 4 + (0x218 << 2)
label_391680:
    if (ctx->pc == 0x391680u) {
        ctx->pc = 0x391680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39167Cu;
        // 0x391680: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391684u;
        goto label_391684;
    }
    ctx->pc = 0x39167Cu;
    {
        const bool branch_taken_0x39167c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39167Cu;
        // 0x391680: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39167c) {
            ctx->pc = 0x391EE0u;
            goto label_391ee0;
        }
    }
    ctx->pc = 0x391684u;
label_391684:
    // 0x391684: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x391684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_391688:
    // 0x391688: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_39168c:
    if (ctx->pc == 0x39168Cu) {
        ctx->pc = 0x39168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391688u;
        // 0x39168c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391690u;
        goto label_391690;
    }
    ctx->pc = 0x391688u;
    {
        const bool branch_taken_0x391688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391688u;
        // 0x39168c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391688) {
            ctx->pc = 0x3916B4u;
            goto label_3916b4;
        }
    }
    ctx->pc = 0x391690u;
label_391690:
    // 0x391690: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x391690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_391694:
    // 0x391694: 0x0  nop
    ctx->pc = 0x391694u;
    // NOP
label_391698:
    // 0x391698: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x391698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_39169c:
    // 0x39169c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3916a0:
    // 0x3916a0: 0x0  nop
    ctx->pc = 0x3916a0u;
    // NOP
label_3916a4:
    // 0x3916a4: 0x0  nop
    ctx->pc = 0x3916a4u;
    // NOP
label_3916a8:
    // 0x3916a8: 0x0  nop
    ctx->pc = 0x3916a8u;
    // NOP
label_3916ac:
    // 0x3916ac: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_3916b0:
    if (ctx->pc == 0x3916B0u) {
        ctx->pc = 0x3916B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3916ACu;
        // 0x3916b0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3916B4u;
        goto label_3916b4;
    }
    ctx->pc = 0x3916ACu;
    {
        const bool branch_taken_0x3916ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3916B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3916ACu;
        // 0x3916b0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3916ac) {
            ctx->pc = 0x391698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391698;
        }
    }
    ctx->pc = 0x3916B4u;
label_3916b4:
    // 0x3916b4: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x3916b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_3916b8:
    // 0x3916b8: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x3916b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_3916bc:
    // 0x3916bc: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x3916bcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3916c0:
    // 0x3916c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3916c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3916c4:
    // 0x3916c4: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x3916c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3916c8:
    // 0x3916c8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3916c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3916cc:
    // 0x3916cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3916d0:
    if (ctx->pc == 0x3916D0u) {
        ctx->pc = 0x3916D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3916CCu;
        // 0x3916d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3916D4u;
        goto label_3916d4;
    }
    ctx->pc = 0x3916CCu;
    {
        const bool branch_taken_0x3916cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3916D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3916CCu;
        // 0x3916d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3916cc) {
            ctx->pc = 0x3916E0u;
            goto label_3916e0;
        }
    }
    ctx->pc = 0x3916D4u;
label_3916d4:
    // 0x3916d4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3916d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3916d8:
    // 0x3916d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3916d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3916dc:
    // 0x3916dc: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x3916dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_3916e0:
    // 0x3916e0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3916e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3916e4:
    // 0x3916e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3916e8:
    if (ctx->pc == 0x3916E8u) {
        ctx->pc = 0x3916E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3916E4u;
        // 0x3916e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3916ECu;
        goto label_3916ec;
    }
    ctx->pc = 0x3916E4u;
    {
        const bool branch_taken_0x3916e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3916E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3916E4u;
        // 0x3916e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3916e4) {
            ctx->pc = 0x3916F8u;
            goto label_3916f8;
        }
    }
    ctx->pc = 0x3916ECu;
label_3916ec:
    // 0x3916ec: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3916ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3916f0:
    // 0x3916f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3916f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3916f4:
    // 0x3916f4: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x3916f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_3916f8:
    // 0x3916f8: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x3916f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3916fc:
    // 0x3916fc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3916fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_391700:
    // 0x391700: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_391704:
    if (ctx->pc == 0x391704u) {
        ctx->pc = 0x391704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391700u;
        // 0x391704: 0x3ac1021  addu        $v0, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391708u;
        goto label_391708;
    }
    ctx->pc = 0x391700u;
    {
        const bool branch_taken_0x391700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391700u;
        // 0x391704: 0x3ac1021  addu        $v0, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391700) {
            ctx->pc = 0x391754u;
            goto label_391754;
        }
    }
    ctx->pc = 0x391708u;
label_391708:
    // 0x391708: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x391708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_39170c:
    // 0x39170c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x39170cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_391710:
    // 0x391710: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_391714:
    if (ctx->pc == 0x391714u) {
        ctx->pc = 0x391714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391710u;
        // 0x391714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391718u;
        goto label_391718;
    }
    ctx->pc = 0x391710u;
    {
        const bool branch_taken_0x391710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391710u;
        // 0x391714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391710) {
            ctx->pc = 0x391724u;
            goto label_391724;
        }
    }
    ctx->pc = 0x391718u;
label_391718:
    // 0x391718: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x391718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_39171c:
    // 0x39171c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x39171cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_391720:
    // 0x391720: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x391720u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_391724:
    // 0x391724: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x391724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_391728:
    // 0x391728: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_39172c:
    if (ctx->pc == 0x39172Cu) {
        ctx->pc = 0x39172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391728u;
        // 0x39172c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391730u;
        goto label_391730;
    }
    ctx->pc = 0x391728u;
    {
        const bool branch_taken_0x391728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391728u;
        // 0x39172c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391728) {
            ctx->pc = 0x39173Cu;
            goto label_39173c;
        }
    }
    ctx->pc = 0x391730u;
label_391730:
    // 0x391730: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x391730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_391734:
    // 0x391734: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x391734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_391738:
    // 0x391738: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x391738u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_39173c:
    // 0x39173c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x39173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_391740:
    // 0x391740: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x391740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_391744:
    // 0x391744: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_391748:
    if (ctx->pc == 0x391748u) {
        ctx->pc = 0x391748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391744u;
        // 0x391748: 0x3ac1021  addu        $v0, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39174Cu;
        goto label_39174c;
    }
    ctx->pc = 0x391744u;
    {
        const bool branch_taken_0x391744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391744u;
        // 0x391748: 0x3ac1021  addu        $v0, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391744) {
            ctx->pc = 0x391754u;
            goto label_391754;
        }
    }
    ctx->pc = 0x39174Cu;
label_39174c:
    // 0x39174c: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_391750:
    if (ctx->pc == 0x391750u) {
        ctx->pc = 0x391750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39174Cu;
        // 0x391750: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391754u;
        goto label_391754;
    }
    ctx->pc = 0x39174Cu;
    {
        const bool branch_taken_0x39174c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39174Cu;
        // 0x391750: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39174c) {
            ctx->pc = 0x3919E0u;
            goto label_3919e0;
        }
    }
    ctx->pc = 0x391754u;
label_391754:
    // 0x391754: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x391754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_391758:
    // 0x391758: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x391758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_39175c:
    // 0x39175c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x39175cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_391760:
    // 0x391760: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_391764:
    if (ctx->pc == 0x391764u) {
        ctx->pc = 0x391764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391760u;
        // 0x391764: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391768u;
        goto label_391768;
    }
    ctx->pc = 0x391760u;
    {
        const bool branch_taken_0x391760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391760u;
        // 0x391764: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391760) {
            ctx->pc = 0x391774u;
            goto label_391774;
        }
    }
    ctx->pc = 0x391768u;
label_391768:
    // 0x391768: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x391768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_39176c:
    // 0x39176c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39176cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_391770:
    // 0x391770: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x391770u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_391774:
    // 0x391774: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x391774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_391778:
    // 0x391778: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_39177c:
    if (ctx->pc == 0x39177Cu) {
        ctx->pc = 0x39177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391778u;
        // 0x39177c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391780u;
        goto label_391780;
    }
    ctx->pc = 0x391778u;
    {
        const bool branch_taken_0x391778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391778u;
        // 0x39177c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391778) {
            ctx->pc = 0x39178Cu;
            goto label_39178c;
        }
    }
    ctx->pc = 0x391780u;
label_391780:
    // 0x391780: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x391780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_391784:
    // 0x391784: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x391784u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_391788:
    // 0x391788: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x391788u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_39178c:
    // 0x39178c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x39178cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_391790:
    // 0x391790: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x391790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_391794:
    // 0x391794: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_391798:
    if (ctx->pc == 0x391798u) {
        ctx->pc = 0x391798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391794u;
        // 0x391798: 0x3ac1021  addu        $v0, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39179Cu;
        goto label_39179c;
    }
    ctx->pc = 0x391794u;
    {
        const bool branch_taken_0x391794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391794u;
        // 0x391798: 0x3ac1021  addu        $v0, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391794) {
            ctx->pc = 0x3917E8u;
            goto label_3917e8;
        }
    }
    ctx->pc = 0x39179Cu;
label_39179c:
    // 0x39179c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x39179cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3917a0:
    // 0x3917a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3917a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3917a4:
    // 0x3917a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3917a8:
    if (ctx->pc == 0x3917A8u) {
        ctx->pc = 0x3917A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3917A4u;
        // 0x3917a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3917ACu;
        goto label_3917ac;
    }
    ctx->pc = 0x3917A4u;
    {
        const bool branch_taken_0x3917a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3917A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3917A4u;
        // 0x3917a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3917a4) {
            ctx->pc = 0x3917B8u;
            goto label_3917b8;
        }
    }
    ctx->pc = 0x3917ACu;
label_3917ac:
    // 0x3917ac: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3917acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3917b0:
    // 0x3917b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3917b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3917b4:
    // 0x3917b4: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x3917b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_3917b8:
    // 0x3917b8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3917b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3917bc:
    // 0x3917bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3917c0:
    if (ctx->pc == 0x3917C0u) {
        ctx->pc = 0x3917C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3917BCu;
        // 0x3917c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3917C4u;
        goto label_3917c4;
    }
    ctx->pc = 0x3917BCu;
    {
        const bool branch_taken_0x3917bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3917C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3917BCu;
        // 0x3917c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3917bc) {
            ctx->pc = 0x3917D0u;
            goto label_3917d0;
        }
    }
    ctx->pc = 0x3917C4u;
label_3917c4:
    // 0x3917c4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3917c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3917c8:
    // 0x3917c8: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x3917c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3917cc:
    // 0x3917cc: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x3917ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_3917d0:
    // 0x3917d0: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x3917d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3917d4:
    // 0x3917d4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3917d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3917d8:
    // 0x3917d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3917dc:
    if (ctx->pc == 0x3917DCu) {
        ctx->pc = 0x3917DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3917D8u;
        // 0x3917dc: 0x3ac1021  addu        $v0, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3917E0u;
        goto label_3917e0;
    }
    ctx->pc = 0x3917D8u;
    {
        const bool branch_taken_0x3917d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3917DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3917D8u;
        // 0x3917dc: 0x3ac1021  addu        $v0, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3917d8) {
            ctx->pc = 0x3917E8u;
            goto label_3917e8;
        }
    }
    ctx->pc = 0x3917E0u;
label_3917e0:
    // 0x3917e0: 0x1000007f  b           . + 4 + (0x7F << 2)
label_3917e4:
    if (ctx->pc == 0x3917E4u) {
        ctx->pc = 0x3917E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3917E0u;
        // 0x3917e4: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3917E8u;
        goto label_3917e8;
    }
    ctx->pc = 0x3917E0u;
    {
        const bool branch_taken_0x3917e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3917E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3917E0u;
        // 0x3917e4: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3917e0) {
            ctx->pc = 0x3919E0u;
            goto label_3919e0;
        }
    }
    ctx->pc = 0x3917E8u;
label_3917e8:
    // 0x3917e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3917e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3917ec:
    // 0x3917ec: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3917ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3917f0:
    // 0x3917f0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3917f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3917f4:
    // 0x3917f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3917f8:
    if (ctx->pc == 0x3917F8u) {
        ctx->pc = 0x3917F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3917F4u;
        // 0x3917f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3917FCu;
        goto label_3917fc;
    }
    ctx->pc = 0x3917F4u;
    {
        const bool branch_taken_0x3917f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3917F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3917F4u;
        // 0x3917f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3917f4) {
            ctx->pc = 0x391808u;
            goto label_391808;
        }
    }
    ctx->pc = 0x3917FCu;
label_3917fc:
    // 0x3917fc: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3917fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_391800:
    // 0x391800: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x391800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_391804:
    // 0x391804: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x391804u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_391808:
    // 0x391808: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x391808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_39180c:
    // 0x39180c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_391810:
    if (ctx->pc == 0x391810u) {
        ctx->pc = 0x391810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39180Cu;
        // 0x391810: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391814u;
        goto label_391814;
    }
    ctx->pc = 0x39180Cu;
    {
        const bool branch_taken_0x39180c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39180Cu;
        // 0x391810: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39180c) {
            ctx->pc = 0x391820u;
            goto label_391820;
        }
    }
    ctx->pc = 0x391814u;
label_391814:
    // 0x391814: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x391814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_391818:
    // 0x391818: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x391818u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39181c:
    // 0x39181c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x39181cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_391820:
    // 0x391820: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x391820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_391824:
    // 0x391824: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x391824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_391828:
    // 0x391828: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_39182c:
    if (ctx->pc == 0x39182Cu) {
        ctx->pc = 0x39182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391828u;
        // 0x39182c: 0x3ac1021  addu        $v0, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391830u;
        goto label_391830;
    }
    ctx->pc = 0x391828u;
    {
        const bool branch_taken_0x391828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391828u;
        // 0x39182c: 0x3ac1021  addu        $v0, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391828) {
            ctx->pc = 0x39187Cu;
            goto label_39187c;
        }
    }
    ctx->pc = 0x391830u;
label_391830:
    // 0x391830: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x391830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_391834:
    // 0x391834: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x391834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_391838:
    // 0x391838: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_39183c:
    if (ctx->pc == 0x39183Cu) {
        ctx->pc = 0x39183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391838u;
        // 0x39183c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391840u;
        goto label_391840;
    }
    ctx->pc = 0x391838u;
    {
        const bool branch_taken_0x391838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391838u;
        // 0x39183c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391838) {
            ctx->pc = 0x39184Cu;
            goto label_39184c;
        }
    }
    ctx->pc = 0x391840u;
label_391840:
    // 0x391840: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x391840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_391844:
    // 0x391844: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x391844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_391848:
    // 0x391848: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x391848u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_39184c:
    // 0x39184c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x39184cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_391850:
    // 0x391850: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_391854:
    if (ctx->pc == 0x391854u) {
        ctx->pc = 0x391854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391850u;
        // 0x391854: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391858u;
        goto label_391858;
    }
    ctx->pc = 0x391850u;
    {
        const bool branch_taken_0x391850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391850u;
        // 0x391854: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391850) {
            ctx->pc = 0x391864u;
            goto label_391864;
        }
    }
    ctx->pc = 0x391858u;
label_391858:
    // 0x391858: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x391858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_39185c:
    // 0x39185c: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x39185cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_391860:
    // 0x391860: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x391860u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_391864:
    // 0x391864: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x391864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_391868:
    // 0x391868: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x391868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_39186c:
    // 0x39186c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_391870:
    if (ctx->pc == 0x391870u) {
        ctx->pc = 0x391870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39186Cu;
        // 0x391870: 0x3ac1021  addu        $v0, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391874u;
        goto label_391874;
    }
    ctx->pc = 0x39186Cu;
    {
        const bool branch_taken_0x39186c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39186Cu;
        // 0x391870: 0x3ac1021  addu        $v0, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39186c) {
            ctx->pc = 0x39187Cu;
            goto label_39187c;
        }
    }
    ctx->pc = 0x391874u;
label_391874:
    // 0x391874: 0x1000005a  b           . + 4 + (0x5A << 2)
label_391878:
    if (ctx->pc == 0x391878u) {
        ctx->pc = 0x391878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391874u;
        // 0x391878: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39187Cu;
        goto label_39187c;
    }
    ctx->pc = 0x391874u;
    {
        const bool branch_taken_0x391874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391874u;
        // 0x391878: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391874) {
            ctx->pc = 0x3919E0u;
            goto label_3919e0;
        }
    }
    ctx->pc = 0x39187Cu;
label_39187c:
    // 0x39187c: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x39187cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_391880:
    // 0x391880: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x391880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_391884:
    // 0x391884: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x391884u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_391888:
    // 0x391888: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
label_39188c:
    if (ctx->pc == 0x39188Cu) {
        ctx->pc = 0x39188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391888u;
        // 0x39188c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391890u;
        goto label_391890;
    }
    ctx->pc = 0x391888u;
    {
        const bool branch_taken_0x391888 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x39188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391888u;
        // 0x39188c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391888) {
            ctx->pc = 0x39189Cu;
            goto label_39189c;
        }
    }
    ctx->pc = 0x391890u;
label_391890:
    // 0x391890: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x391890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_391894:
    // 0x391894: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x391894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_391898:
    // 0x391898: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x391898u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_39189c:
    // 0x39189c: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x39189cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3918a0:
    // 0x3918a0: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_3918a4:
    if (ctx->pc == 0x3918A4u) {
        ctx->pc = 0x3918A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3918A0u;
        // 0x3918a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3918A8u;
        goto label_3918a8;
    }
    ctx->pc = 0x3918A0u;
    {
        const bool branch_taken_0x3918a0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3918A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3918A0u;
        // 0x3918a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3918a0) {
            ctx->pc = 0x3918B4u;
            goto label_3918b4;
        }
    }
    ctx->pc = 0x3918A8u;
label_3918a8:
    // 0x3918a8: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x3918a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_3918ac:
    // 0x3918ac: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x3918acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3918b0:
    // 0x3918b0: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x3918b0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_3918b4:
    // 0x3918b4: 0x8d250008  lw          $a1, 0x8($t1)
    ctx->pc = 0x3918b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_3918b8:
    // 0x3918b8: 0x835021  addu        $t2, $a0, $v1
    ctx->pc = 0x3918b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3918bc:
    // 0x3918bc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3918bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3918c0:
    // 0x3918c0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3918c4:
    if (ctx->pc == 0x3918C4u) {
        ctx->pc = 0x3918C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3918C0u;
        // 0x3918c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3918C8u;
        goto label_3918c8;
    }
    ctx->pc = 0x3918C0u;
    {
        const bool branch_taken_0x3918c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3918C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3918C0u;
        // 0x3918c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3918c0) {
            ctx->pc = 0x3918D4u;
            goto label_3918d4;
        }
    }
    ctx->pc = 0x3918C8u;
label_3918c8:
    // 0x3918c8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x3918c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3918cc:
    // 0x3918cc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3918ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3918d0:
    // 0x3918d0: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x3918d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_3918d4:
    // 0x3918d4: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x3918d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3918d8:
    // 0x3918d8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_3918dc:
    if (ctx->pc == 0x3918DCu) {
        ctx->pc = 0x3918DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3918D8u;
        // 0x3918dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3918E0u;
        goto label_3918e0;
    }
    ctx->pc = 0x3918D8u;
    {
        const bool branch_taken_0x3918d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3918DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3918D8u;
        // 0x3918dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3918d8) {
            ctx->pc = 0x3918ECu;
            goto label_3918ec;
        }
    }
    ctx->pc = 0x3918E0u;
label_3918e0:
    // 0x3918e0: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x3918e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_3918e4:
    // 0x3918e4: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x3918e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3918e8:
    // 0x3918e8: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x3918e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_3918ec:
    // 0x3918ec: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x3918ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3918f0:
    // 0x3918f0: 0x4a102a  slt         $v0, $v0, $t2
    ctx->pc = 0x3918f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_3918f4:
    // 0x3918f4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3918f8:
    if (ctx->pc == 0x3918F8u) {
        ctx->pc = 0x3918FCu;
        goto label_3918fc;
    }
    ctx->pc = 0x3918F4u;
    {
        const bool branch_taken_0x3918f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3918f4) {
            ctx->pc = 0x391974u;
            goto label_391974;
        }
    }
    ctx->pc = 0x3918FCu;
label_3918fc:
    // 0x3918fc: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
label_391900:
    if (ctx->pc == 0x391900u) {
        ctx->pc = 0x391900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3918FCu;
        // 0x391900: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391904u;
        goto label_391904;
    }
    ctx->pc = 0x3918FCu;
    {
        const bool branch_taken_0x3918fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x391900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3918FCu;
        // 0x391900: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3918fc) {
            ctx->pc = 0x391910u;
            goto label_391910;
        }
    }
    ctx->pc = 0x391904u;
label_391904:
    // 0x391904: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x391904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_391908:
    // 0x391908: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x391908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39190c:
    // 0x39190c: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x39190cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_391910:
    // 0x391910: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_391914:
    if (ctx->pc == 0x391914u) {
        ctx->pc = 0x391914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391910u;
        // 0x391914: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391918u;
        goto label_391918;
    }
    ctx->pc = 0x391910u;
    {
        const bool branch_taken_0x391910 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x391914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391910u;
        // 0x391914: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391910) {
            ctx->pc = 0x391924u;
            goto label_391924;
        }
    }
    ctx->pc = 0x391918u;
label_391918:
    // 0x391918: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x391918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_39191c:
    // 0x39191c: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x39191cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_391920:
    // 0x391920: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x391920u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_391924:
    // 0x391924: 0x8d25000c  lw          $a1, 0xC($t1)
    ctx->pc = 0x391924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_391928:
    // 0x391928: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x391928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_39192c:
    // 0x39192c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x39192cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_391930:
    // 0x391930: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_391934:
    if (ctx->pc == 0x391934u) {
        ctx->pc = 0x391934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391930u;
        // 0x391934: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391938u;
        goto label_391938;
    }
    ctx->pc = 0x391930u;
    {
        const bool branch_taken_0x391930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391930u;
        // 0x391934: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391930) {
            ctx->pc = 0x391944u;
            goto label_391944;
        }
    }
    ctx->pc = 0x391938u;
label_391938:
    // 0x391938: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x391938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_39193c:
    // 0x39193c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39193cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_391940:
    // 0x391940: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x391940u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_391944:
    // 0x391944: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x391944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_391948:
    // 0x391948: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_39194c:
    if (ctx->pc == 0x39194Cu) {
        ctx->pc = 0x39194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391948u;
        // 0x39194c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391950u;
        goto label_391950;
    }
    ctx->pc = 0x391948u;
    {
        const bool branch_taken_0x391948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391948u;
        // 0x39194c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391948) {
            ctx->pc = 0x39195Cu;
            goto label_39195c;
        }
    }
    ctx->pc = 0x391950u;
label_391950:
    // 0x391950: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x391950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_391954:
    // 0x391954: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x391954u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_391958:
    // 0x391958: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x391958u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_39195c:
    // 0x39195c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x39195cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_391960:
    // 0x391960: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x391960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_391964:
    // 0x391964: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x391964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_391968:
    // 0x391968: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x391968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39196c:
    // 0x39196c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_391970:
    if (ctx->pc == 0x391970u) {
        ctx->pc = 0x391970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39196Cu;
        // 0x391970: 0x82800b  movn        $s0, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391974u;
        goto label_391974;
    }
    ctx->pc = 0x39196Cu;
    {
        const bool branch_taken_0x39196c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39196Cu;
        // 0x391970: 0x82800b  movn        $s0, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39196c) {
            ctx->pc = 0x3919E0u;
            goto label_3919e0;
        }
    }
    ctx->pc = 0x391974u;
label_391974:
    // 0x391974: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_391978:
    if (ctx->pc == 0x391978u) {
        ctx->pc = 0x391978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391974u;
        // 0x391978: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39197Cu;
        goto label_39197c;
    }
    ctx->pc = 0x391974u;
    {
        const bool branch_taken_0x391974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x391978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391974u;
        // 0x391978: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391974) {
            ctx->pc = 0x391988u;
            goto label_391988;
        }
    }
    ctx->pc = 0x39197Cu;
label_39197c:
    // 0x39197c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x39197cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_391980:
    // 0x391980: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x391980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_391984:
    // 0x391984: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x391984u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_391988:
    // 0x391988: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_39198c:
    if (ctx->pc == 0x39198Cu) {
        ctx->pc = 0x39198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391988u;
        // 0x39198c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391990u;
        goto label_391990;
    }
    ctx->pc = 0x391988u;
    {
        const bool branch_taken_0x391988 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x39198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391988u;
        // 0x39198c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391988) {
            ctx->pc = 0x39199Cu;
            goto label_39199c;
        }
    }
    ctx->pc = 0x391990u;
label_391990:
    // 0x391990: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x391990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_391994:
    // 0x391994: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x391994u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_391998:
    // 0x391998: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x391998u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_39199c:
    // 0x39199c: 0x8d24000c  lw          $a0, 0xC($t1)
    ctx->pc = 0x39199cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_3919a0:
    // 0x3919a0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3919a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3919a4:
    // 0x3919a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3919a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3919a8:
    // 0x3919a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3919ac:
    if (ctx->pc == 0x3919ACu) {
        ctx->pc = 0x3919ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3919A8u;
        // 0x3919ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3919B0u;
        goto label_3919b0;
    }
    ctx->pc = 0x3919A8u;
    {
        const bool branch_taken_0x3919a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3919ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3919A8u;
        // 0x3919ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3919a8) {
            ctx->pc = 0x3919BCu;
            goto label_3919bc;
        }
    }
    ctx->pc = 0x3919B0u;
label_3919b0:
    // 0x3919b0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3919b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3919b4:
    // 0x3919b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3919b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3919b8:
    // 0x3919b8: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x3919b8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_3919bc:
    // 0x3919bc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3919bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3919c0:
    // 0x3919c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3919c4:
    if (ctx->pc == 0x3919C4u) {
        ctx->pc = 0x3919C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3919C0u;
        // 0x3919c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3919C8u;
        goto label_3919c8;
    }
    ctx->pc = 0x3919C0u;
    {
        const bool branch_taken_0x3919c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3919C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3919C0u;
        // 0x3919c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3919c0) {
            ctx->pc = 0x3919D4u;
            goto label_3919d4;
        }
    }
    ctx->pc = 0x3919C8u;
label_3919c8:
    // 0x3919c8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3919c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3919cc:
    // 0x3919cc: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x3919ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3919d0:
    // 0x3919d0: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x3919d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_3919d4:
    // 0x3919d4: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x3919d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3919d8:
    // 0x3919d8: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x3919d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_3919dc:
    // 0x3919dc: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x3919dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3919e0:
    // 0x3919e0: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x3919e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3919e4:
    // 0x3919e4: 0xafbe0034  sw          $fp, 0x34($sp)
    ctx->pc = 0x3919e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 30));
label_3919e8:
    // 0x3919e8: 0xafb70044  sw          $s7, 0x44($sp)
    ctx->pc = 0x3919e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 23));
label_3919ec:
    // 0x3919ec: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x3919ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3919f0:
    // 0x3919f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3919f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3919f4:
    // 0x3919f4: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x3919f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_3919f8:
    // 0x3919f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3919f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3919fc:
    // 0x3919fc: 0x24d30001  addiu       $s3, $a2, 0x1
    ctx->pc = 0x3919fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_391a00:
    // 0x391a00: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_391a04:
    if (ctx->pc == 0x391A04u) {
        ctx->pc = 0x391A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A00u;
        // 0x391a04: 0x24510001  addiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391A08u;
        goto label_391a08;
    }
    ctx->pc = 0x391A00u;
    {
        const bool branch_taken_0x391a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x391A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A00u;
        // 0x391a04: 0x24510001  addiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391a00) {
            ctx->pc = 0x391AC4u;
            goto label_391ac4;
        }
    }
    ctx->pc = 0x391A08u;
label_391a08:
    // 0x391a08: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x391a08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_391a0c:
    // 0x391a0c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x391a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_391a10:
    // 0x391a10: 0x18c00011  blez        $a2, . + 4 + (0x11 << 2)
label_391a14:
    if (ctx->pc == 0x391A14u) {
        ctx->pc = 0x391A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A10u;
        // 0x391a14: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391A18u;
        goto label_391a18;
    }
    ctx->pc = 0x391A10u;
    {
        const bool branch_taken_0x391a10 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x391A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A10u;
        // 0x391a14: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391a10) {
            ctx->pc = 0x391A58u;
            goto label_391a58;
        }
    }
    ctx->pc = 0x391A18u;
label_391a18:
    // 0x391a18: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_391a1c:
    if (ctx->pc == 0x391A1Cu) {
        ctx->pc = 0x391A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A18u;
        // 0x391a1c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x391A20u;
        goto label_391a20;
    }
    ctx->pc = 0x391A18u;
    {
        const bool branch_taken_0x391a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x391A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A18u;
        // 0x391a1c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x391a18) {
            ctx->pc = 0x391A78u;
            goto label_391a78;
        }
    }
    ctx->pc = 0x391A20u;
label_391a20:
    // 0x391a20: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_391a24:
    if (ctx->pc == 0x391A24u) {
        ctx->pc = 0x391A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A20u;
        // 0x391a24: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391A28u;
        goto label_391a28;
    }
    ctx->pc = 0x391A20u;
    {
        const bool branch_taken_0x391a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A20u;
        // 0x391a24: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391a20) {
            ctx->pc = 0x391A5Cu;
            goto label_391a5c;
        }
    }
    ctx->pc = 0x391A28u;
label_391a28:
    // 0x391a28: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x391a28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_391a2c:
    // 0x391a2c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_391a30:
    if (ctx->pc == 0x391A30u) {
        ctx->pc = 0x391A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A2Cu;
        // 0x391a30: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391A34u;
        goto label_391a34;
    }
    ctx->pc = 0x391A2Cu;
    {
        const bool branch_taken_0x391a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A2Cu;
        // 0x391a30: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391a2c) {
            ctx->pc = 0x391A48u;
            goto label_391a48;
        }
    }
    ctx->pc = 0x391A34u;
label_391a34:
    // 0x391a34: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x391a34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_391a38:
    // 0x391a38: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x391a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_391a3c:
    // 0x391a3c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x391a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_391a40:
    // 0x391a40: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x391a40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_391a44:
    // 0x391a44: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x391a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_391a48:
    // 0x391a48: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x391a48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_391a4c:
    // 0x391a4c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x391a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_391a50:
    // 0x391a50: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x391a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_391a54:
    // 0x391a54: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x391a54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_391a58:
    // 0x391a58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x391a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_391a5c:
    // 0x391a5c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x391a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_391a60:
    // 0x391a60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x391a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_391a64:
    // 0x391a64: 0x102482b  sltu        $t1, $t0, $v0
    ctx->pc = 0x391a64u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_391a68:
    // 0x391a68: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x391a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_391a6c:
    // 0x391a6c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x391a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_391a70:
    // 0x391a70: 0x11200014  beqz        $t1, . + 4 + (0x14 << 2)
label_391a74:
    if (ctx->pc == 0x391A74u) {
        ctx->pc = 0x391A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A70u;
        // 0x391a74: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391A78u;
        goto label_391a78;
    }
    ctx->pc = 0x391A70u;
    {
        const bool branch_taken_0x391a70 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x391A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A70u;
        // 0x391a74: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391a70) {
            ctx->pc = 0x391AC4u;
            goto label_391ac4;
        }
    }
    ctx->pc = 0x391A78u;
label_391a78:
    // 0x391a78: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x391a78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_391a7c:
    // 0x391a7c: 0x0  nop
    ctx->pc = 0x391a7cu;
    // NOP
label_391a80:
    // 0x391a80: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x391a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_391a84:
    // 0x391a84: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x391a84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_391a88:
    // 0x391a88: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x391a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_391a8c:
    // 0x391a8c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x391a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_391a90:
    // 0x391a90: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x391a90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_391a94:
    // 0x391a94: 0x104482b  sltu        $t1, $t0, $a0
    ctx->pc = 0x391a94u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_391a98:
    // 0x391a98: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x391a98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_391a9c:
    // 0x391a9c: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x391a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_391aa0:
    // 0x391aa0: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x391aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_391aa4:
    // 0x391aa4: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x391aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_391aa8:
    // 0x391aa8: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x391aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
label_391aac:
    // 0x391aac: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x391aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_391ab0:
    // 0x391ab0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x391ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_391ab4:
    // 0x391ab4: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x391ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_391ab8:
    // 0x391ab8: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x391ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_391abc:
    // 0x391abc: 0x1520fff0  bnez        $t1, . + 4 + (-0x10 << 2)
label_391ac0:
    if (ctx->pc == 0x391AC0u) {
        ctx->pc = 0x391AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391ABCu;
        // 0x391ac0: 0xaca3001c  sw          $v1, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391AC4u;
        goto label_391ac4;
    }
    ctx->pc = 0x391ABCu;
    {
        const bool branch_taken_0x391abc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x391AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391ABCu;
        // 0x391ac0: 0xaca3001c  sw          $v1, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391abc) {
            ctx->pc = 0x391A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391a80;
        }
    }
    ctx->pc = 0x391AC4u;
label_391ac4:
    // 0x391ac4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x391ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_391ac8:
    // 0x391ac8: 0x10720012  beq         $v1, $s2, . + 4 + (0x12 << 2)
label_391acc:
    if (ctx->pc == 0x391ACCu) {
        ctx->pc = 0x391ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391AC8u;
        // 0x391acc: 0xafb30048  sw          $s3, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391AD0u;
        goto label_391ad0;
    }
    ctx->pc = 0x391AC8u;
    {
        const bool branch_taken_0x391ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x391ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391AC8u;
        // 0x391acc: 0xafb30048  sw          $s3, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391ac8) {
            ctx->pc = 0x391B14u;
            goto label_391b14;
        }
    }
    ctx->pc = 0x391AD0u;
label_391ad0:
    // 0x391ad0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x391ad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_391ad4:
    // 0x391ad4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_391ad8:
    if (ctx->pc == 0x391AD8u) {
        ctx->pc = 0x391AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391AD4u;
        // 0x391ad8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391ADCu;
        goto label_391adc;
    }
    ctx->pc = 0x391AD4u;
    {
        const bool branch_taken_0x391ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391AD4u;
        // 0x391ad8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391ad4) {
            ctx->pc = 0x391AECu;
            goto label_391aec;
        }
    }
    ctx->pc = 0x391ADCu;
label_391adc:
    // 0x391adc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_391ae0:
    if (ctx->pc == 0x391AE0u) {
        ctx->pc = 0x391AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391ADCu;
        // 0x391ae0: 0x8fb00044  lw          $s0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391AE4u;
        goto label_391ae4;
    }
    ctx->pc = 0x391ADCu;
    {
        const bool branch_taken_0x391adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x391AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391ADCu;
        // 0x391ae0: 0x8fb00044  lw          $s0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391adc) {
            ctx->pc = 0x391AFCu;
            goto label_391afc;
        }
    }
    ctx->pc = 0x391AE4u;
label_391ae4:
    // 0x391ae4: 0x10000013  b           . + 4 + (0x13 << 2)
label_391ae8:
    if (ctx->pc == 0x391AE8u) {
        ctx->pc = 0x391AECu;
        goto label_391aec;
    }
    ctx->pc = 0x391AE4u;
    {
        const bool branch_taken_0x391ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x391ae4) {
            ctx->pc = 0x391B34u;
            goto label_391b34;
        }
    }
    ctx->pc = 0x391AECu;
label_391aec:
    // 0x391aec: 0x1066000b  beq         $v1, $a2, . + 4 + (0xB << 2)
label_391af0:
    if (ctx->pc == 0x391AF0u) {
        ctx->pc = 0x391AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391AECu;
        // 0x391af0: 0x8fb00044  lw          $s0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391AF4u;
        goto label_391af4;
    }
    ctx->pc = 0x391AECu;
    {
        const bool branch_taken_0x391aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x391AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391AECu;
        // 0x391af0: 0x8fb00044  lw          $s0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391aec) {
            ctx->pc = 0x391B1Cu;
            goto label_391b1c;
        }
    }
    ctx->pc = 0x391AF4u;
label_391af4:
    // 0x391af4: 0x1000000f  b           . + 4 + (0xF << 2)
label_391af8:
    if (ctx->pc == 0x391AF8u) {
        ctx->pc = 0x391AFCu;
        goto label_391afc;
    }
    ctx->pc = 0x391AF4u;
    {
        const bool branch_taken_0x391af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x391af4) {
            ctx->pc = 0x391B34u;
            goto label_391b34;
        }
    }
    ctx->pc = 0x391AFCu;
label_391afc:
    // 0x391afc: 0x2f6001b  divu        $zero, $s7, $s6
    ctx->pc = 0x391afcu;
    { uint32_t divisor = GPR_U32(ctx, 22); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 23) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 23) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,23); } }
label_391b00:
    // 0x391b00: 0x52c00001  beql        $s6, $zero, . + 4 + (0x1 << 2)
label_391b04:
    if (ctx->pc == 0x391B04u) {
        ctx->pc = 0x391B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B00u;
        // 0x391b04: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x391B08u;
        goto label_391b08;
    }
    ctx->pc = 0x391B00u;
    {
        const bool branch_taken_0x391b00 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x391b00) {
            ctx->pc = 0x391B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391B00u;
            // 0x391b04: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x391B08u;
            goto label_391b08;
        }
    }
    ctx->pc = 0x391B08u;
label_391b08:
    // 0x391b08: 0x1010  mfhi        $v0
    ctx->pc = 0x391b08u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_391b0c:
    // 0x391b0c: 0x10000009  b           . + 4 + (0x9 << 2)
label_391b10:
    if (ctx->pc == 0x391B10u) {
        ctx->pc = 0x391B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B0Cu;
        // 0x391b10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391B14u;
        goto label_391b14;
    }
    ctx->pc = 0x391B0Cu;
    {
        const bool branch_taken_0x391b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B0Cu;
        // 0x391b10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391b0c) {
            ctx->pc = 0x391B34u;
            goto label_391b34;
        }
    }
    ctx->pc = 0x391B14u;
label_391b14:
    // 0x391b14: 0x10000002  b           . + 4 + (0x2 << 2)
label_391b18:
    if (ctx->pc == 0x391B18u) {
        ctx->pc = 0x391B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B14u;
        // 0x391b18: 0x26e20001  addiu       $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391B1Cu;
        goto label_391b1c;
    }
    ctx->pc = 0x391B14u;
    {
        const bool branch_taken_0x391b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B14u;
        // 0x391b18: 0x26e20001  addiu       $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391b14) {
            ctx->pc = 0x391B20u;
            goto label_391b20;
        }
    }
    ctx->pc = 0x391B1Cu;
label_391b1c:
    // 0x391b1c: 0x26e20002  addiu       $v0, $s7, 0x2
    ctx->pc = 0x391b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
label_391b20:
    // 0x391b20: 0x52c00001  beql        $s6, $zero, . + 4 + (0x1 << 2)
label_391b24:
    if (ctx->pc == 0x391B24u) {
        ctx->pc = 0x391B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B20u;
        // 0x391b24: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x391B28u;
        goto label_391b28;
    }
    ctx->pc = 0x391B20u;
    {
        const bool branch_taken_0x391b20 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x391b20) {
            ctx->pc = 0x391B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391B20u;
            // 0x391b24: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x391B28u;
            goto label_391b28;
        }
    }
    ctx->pc = 0x391B28u;
label_391b28:
    // 0x391b28: 0x56001b  divu        $zero, $v0, $s6
    ctx->pc = 0x391b28u;
    { uint32_t divisor = GPR_U32(ctx, 22); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_391b2c:
    // 0x391b2c: 0x1810  mfhi        $v1
    ctx->pc = 0x391b2cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_391b30:
    // 0x391b30: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x391b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_391b34:
    // 0x391b34: 0x1212000d  beq         $s0, $s2, . + 4 + (0xD << 2)
label_391b38:
    if (ctx->pc == 0x391B38u) {
        ctx->pc = 0x391B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B34u;
        // 0x391b38: 0x3ac1021  addu        $v0, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391B3Cu;
        goto label_391b3c;
    }
    ctx->pc = 0x391B34u;
    {
        const bool branch_taken_0x391b34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x391B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B34u;
        // 0x391b38: 0x3ac1021  addu        $v0, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391b34) {
            ctx->pc = 0x391B6Cu;
            goto label_391b6c;
        }
    }
    ctx->pc = 0x391B3Cu;
label_391b3c:
    // 0x391b3c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_391b40:
    if (ctx->pc == 0x391B40u) {
        ctx->pc = 0x391B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B3Cu;
        // 0x391b40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391B44u;
        goto label_391b44;
    }
    ctx->pc = 0x391B3Cu;
    {
        const bool branch_taken_0x391b3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x391B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B3Cu;
        // 0x391b40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391b3c) {
            ctx->pc = 0x391B54u;
            goto label_391b54;
        }
    }
    ctx->pc = 0x391B44u;
label_391b44:
    // 0x391b44: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
label_391b48:
    if (ctx->pc == 0x391B48u) {
        ctx->pc = 0x391B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B44u;
        // 0x391b48: 0x3ac1021  addu        $v0, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391B4Cu;
        goto label_391b4c;
    }
    ctx->pc = 0x391B44u;
    {
        const bool branch_taken_0x391b44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x391B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B44u;
        // 0x391b48: 0x3ac1021  addu        $v0, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391b44) {
            ctx->pc = 0x391B80u;
            goto label_391b80;
        }
    }
    ctx->pc = 0x391B4Cu;
label_391b4c:
    // 0x391b4c: 0x10000012  b           . + 4 + (0x12 << 2)
label_391b50:
    if (ctx->pc == 0x391B50u) {
        ctx->pc = 0x391B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B4Cu;
        // 0x391b50: 0x216001b  divu        $zero, $s0, $s6 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 22); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x391B54u;
        goto label_391b54;
    }
    ctx->pc = 0x391B4Cu;
    {
        const bool branch_taken_0x391b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B4Cu;
        // 0x391b50: 0x216001b  divu        $zero, $s0, $s6 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 22); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x391b4c) {
            ctx->pc = 0x391B98u;
            goto label_391b98;
        }
    }
    ctx->pc = 0x391B54u;
label_391b54:
    // 0x391b54: 0x3ac1021  addu        $v0, $sp, $t4
    ctx->pc = 0x391b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
label_391b58:
    // 0x391b58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x391b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_391b5c:
    // 0x391b5c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x391b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_391b60:
    // 0x391b60: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x391b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_391b64:
    // 0x391b64: 0x1000000a  b           . + 4 + (0xA << 2)
label_391b68:
    if (ctx->pc == 0x391B68u) {
        ctx->pc = 0x391B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B64u;
        // 0x391b68: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391B6Cu;
        goto label_391b6c;
    }
    ctx->pc = 0x391B64u;
    {
        const bool branch_taken_0x391b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B64u;
        // 0x391b68: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391b64) {
            ctx->pc = 0x391B90u;
            goto label_391b90;
        }
    }
    ctx->pc = 0x391B6Cu;
label_391b6c:
    // 0x391b6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x391b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_391b70:
    // 0x391b70: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x391b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_391b74:
    // 0x391b74: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x391b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_391b78:
    // 0x391b78: 0x10000005  b           . + 4 + (0x5 << 2)
label_391b7c:
    if (ctx->pc == 0x391B7Cu) {
        ctx->pc = 0x391B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B78u;
        // 0x391b7c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391B80u;
        goto label_391b80;
    }
    ctx->pc = 0x391B78u;
    {
        const bool branch_taken_0x391b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B78u;
        // 0x391b7c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391b78) {
            ctx->pc = 0x391B90u;
            goto label_391b90;
        }
    }
    ctx->pc = 0x391B80u;
label_391b80:
    // 0x391b80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x391b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_391b84:
    // 0x391b84: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x391b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_391b88:
    // 0x391b88: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x391b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_391b8c:
    // 0x391b8c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x391b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_391b90:
    // 0x391b90: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x391b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_391b94:
    // 0x391b94: 0x216001b  divu        $zero, $s0, $s6
    ctx->pc = 0x391b94u;
    { uint32_t divisor = GPR_U32(ctx, 22); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
label_391b98:
    // 0x391b98: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x391b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_391b9c:
    // 0x391b9c: 0x260a0002  addiu       $t2, $s0, 0x2
    ctx->pc = 0x391b9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_391ba0:
    // 0x391ba0: 0x52c00001  beql        $s6, $zero, . + 4 + (0x1 << 2)
label_391ba4:
    if (ctx->pc == 0x391BA4u) {
        ctx->pc = 0x391BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391BA0u;
        // 0x391ba4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x391BA8u;
        goto label_391ba8;
    }
    ctx->pc = 0x391BA0u;
    {
        const bool branch_taken_0x391ba0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x391ba0) {
            ctx->pc = 0x391BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391BA0u;
            // 0x391ba4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x391BA8u;
            goto label_391ba8;
        }
    }
    ctx->pc = 0x391BA8u;
label_391ba8:
    // 0x391ba8: 0x8eab0000  lw          $t3, 0x0($s5)
    ctx->pc = 0x391ba8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_391bac:
    // 0x391bac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x391bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_391bb0:
    // 0x391bb0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x391bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_391bb4:
    // 0x391bb4: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x391bb4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_391bb8:
    // 0x391bb8: 0x2a710004  slti        $s1, $s3, 0x4
    ctx->pc = 0x391bb8u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
label_391bbc:
    // 0x391bbc: 0x3810  mfhi        $a3
    ctx->pc = 0x391bbcu;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_391bc0:
    // 0x391bc0: 0x56001b  divu        $zero, $v0, $s6
    ctx->pc = 0x391bc0u;
    { uint32_t divisor = GPR_U32(ctx, 22); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_391bc4:
    // 0x391bc4: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x391bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_391bc8:
    // 0x391bc8: 0x3ac1021  addu        $v0, $sp, $t4
    ctx->pc = 0x391bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
label_391bcc:
    // 0x391bcc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x391bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_391bd0:
    // 0x391bd0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x391bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_391bd4:
    // 0x391bd4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x391bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_391bd8:
    // 0x391bd8: 0x4010  mfhi        $t0
    ctx->pc = 0x391bd8u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_391bdc:
    // 0x391bdc: 0x156001b  divu        $zero, $t2, $s6
    ctx->pc = 0x391bdcu;
    { uint32_t divisor = GPR_U32(ctx, 22); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
label_391be0:
    // 0x391be0: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x391be0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_391be4:
    // 0x391be4: 0x400013  mtlo        $v0
    ctx->pc = 0x391be4u;
    ctx->lo = GPR_U64(ctx, 2);
label_391be8:
    // 0x391be8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x391be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_391bec:
    // 0x391bec: 0x4810  mfhi        $t1
    ctx->pc = 0x391becu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_391bf0:
    // 0x391bf0: 0x70621800  madd        $v1, $v1, $v0
    ctx->pc = 0x391bf0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_391bf4:
    // 0x391bf4: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x391bf4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_391bf8:
    // 0x391bf8: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x391bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_391bfc:
    // 0x391bfc: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x391bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_391c00:
    // 0x391c00: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x391c00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_391c04:
    // 0x391c04: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x391c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_391c08:
    // 0x391c08: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x391c08u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
label_391c0c:
    // 0x391c0c: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x391c0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_391c10:
    // 0x391c10: 0xa5620002  sh          $v0, 0x2($t3)
    ctx->pc = 0x391c10u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 2), (uint16_t)GPR_U32(ctx, 2));
label_391c14:
    // 0x391c14: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x391c14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_391c18:
    // 0x391c18: 0xaeb60004  sw          $s6, 0x4($s5)
    ctx->pc = 0x391c18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 22));
label_391c1c:
    // 0x391c1c: 0xa5620004  sh          $v0, 0x4($t3)
    ctx->pc = 0x391c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4), (uint16_t)GPR_U32(ctx, 2));
label_391c20:
    // 0x391c20: 0xc0e4322  jal         func_390C88
label_391c24:
    if (ctx->pc == 0x391C24u) {
        ctx->pc = 0x391C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C20u;
        // 0x391c24: 0x7fac0050  sq          $t4, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391C28u;
        goto label_391c28;
    }
    ctx->pc = 0x391C20u;
    SET_GPR_U32(ctx, 31, 0x391C28u);
    ctx->pc = 0x391C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391C20u;
    // 0x391c24: 0x7fac0050  sq          $t4, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390C88u, 0x391C20u, 0x391C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391C28u;
label_391c28:
    // 0x391c28: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x391c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_391c2c:
    // 0x391c2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x391c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_391c30:
    // 0x391c30: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x391c30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_391c34:
    // 0x391c34: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x391c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_391c38:
    // 0x391c38: 0xc0e4388  jal         func_390E20
label_391c3c:
    if (ctx->pc == 0x391C3Cu) {
        ctx->pc = 0x391C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C38u;
        // 0x391c3c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391C40u;
        goto label_391c40;
    }
    ctx->pc = 0x391C38u;
    SET_GPR_U32(ctx, 31, 0x391C40u);
    ctx->pc = 0x391C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391C38u;
    // 0x391c3c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390E20u, 0x391C38u, 0x391C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391C40u;
label_391c40:
    // 0x391c40: 0x3c2f021  addu        $fp, $fp, $v0
    ctx->pc = 0x391c40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_391c44:
    // 0x391c44: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_391c48:
    if (ctx->pc == 0x391C48u) {
        ctx->pc = 0x391C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C44u;
        // 0x391c48: 0x7bac0050  lq          $t4, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391C4Cu;
        goto label_391c4c;
    }
    ctx->pc = 0x391C44u;
    {
        const bool branch_taken_0x391c44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x391C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C44u;
        // 0x391c48: 0x7bac0050  lq          $t4, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391c44) {
            ctx->pc = 0x391C80u;
            goto label_391c80;
        }
    }
    ctx->pc = 0x391C4Cu;
label_391c4c:
    // 0x391c4c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x391c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_391c50:
    // 0x391c50: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x391c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_391c54:
    // 0x391c54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_391c58:
    if (ctx->pc == 0x391C58u) {
        ctx->pc = 0x391C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C54u;
        // 0x391c58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391C5Cu;
        goto label_391c5c;
    }
    ctx->pc = 0x391C54u;
    {
        const bool branch_taken_0x391c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C54u;
        // 0x391c58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391c54) {
            ctx->pc = 0x391C68u;
            goto label_391c68;
        }
    }
    ctx->pc = 0x391C5Cu;
label_391c5c:
    // 0x391c5c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x391c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_391c60:
    // 0x391c60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x391c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_391c64:
    // 0x391c64: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x391c64u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_391c68:
    // 0x391c68: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x391c68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_391c6c:
    // 0x391c6c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x391c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_391c70:
    // 0x391c70: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_391c74:
    if (ctx->pc == 0x391C74u) {
        ctx->pc = 0x391C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C70u;
        // 0x391c74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391C78u;
        goto label_391c78;
    }
    ctx->pc = 0x391C70u;
    {
        const bool branch_taken_0x391c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C70u;
        // 0x391c74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391c70) {
            ctx->pc = 0x391CB8u;
            goto label_391cb8;
        }
    }
    ctx->pc = 0x391C78u;
label_391c78:
    // 0x391c78: 0x1000000d  b           . + 4 + (0xD << 2)
label_391c7c:
    if (ctx->pc == 0x391C7Cu) {
        ctx->pc = 0x391C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C78u;
        // 0x391c7c: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391C80u;
        goto label_391c80;
    }
    ctx->pc = 0x391C78u;
    {
        const bool branch_taken_0x391c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C78u;
        // 0x391c7c: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391c78) {
            ctx->pc = 0x391CB0u;
            goto label_391cb0;
        }
    }
    ctx->pc = 0x391C80u;
label_391c80:
    // 0x391c80: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x391c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_391c84:
    // 0x391c84: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x391c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_391c88:
    // 0x391c88: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_391c8c:
    if (ctx->pc == 0x391C8Cu) {
        ctx->pc = 0x391C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C88u;
        // 0x391c8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391C90u;
        goto label_391c90;
    }
    ctx->pc = 0x391C88u;
    {
        const bool branch_taken_0x391c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C88u;
        // 0x391c8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391c88) {
            ctx->pc = 0x391C9Cu;
            goto label_391c9c;
        }
    }
    ctx->pc = 0x391C90u;
label_391c90:
    // 0x391c90: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x391c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_391c94:
    // 0x391c94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x391c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_391c98:
    // 0x391c98: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x391c98u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_391c9c:
    // 0x391c9c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x391c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_391ca0:
    // 0x391ca0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x391ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_391ca4:
    // 0x391ca4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_391ca8:
    if (ctx->pc == 0x391CA8u) {
        ctx->pc = 0x391CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391CA4u;
        // 0x391ca8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391CACu;
        goto label_391cac;
    }
    ctx->pc = 0x391CA4u;
    {
        const bool branch_taken_0x391ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391CA4u;
        // 0x391ca8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391ca4) {
            ctx->pc = 0x391CB8u;
            goto label_391cb8;
        }
    }
    ctx->pc = 0x391CACu;
label_391cac:
    // 0x391cac: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x391cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_391cb0:
    // 0x391cb0: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x391cb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_391cb4:
    // 0x391cb4: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x391cb4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_391cb8:
    // 0x391cb8: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x391cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_391cbc:
    // 0x391cbc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x391cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_391cc0:
    // 0x391cc0: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_391cc4:
    if (ctx->pc == 0x391CC4u) {
        ctx->pc = 0x391CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391CC0u;
        // 0x391cc4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391CC8u;
        goto label_391cc8;
    }
    ctx->pc = 0x391CC0u;
    {
        const bool branch_taken_0x391cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391CC0u;
        // 0x391cc4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391cc0) {
            ctx->pc = 0x391E40u;
            goto label_391e40;
        }
    }
    ctx->pc = 0x391CC8u;
label_391cc8:
    // 0x391cc8: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x391cc8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_391ccc:
    // 0x391ccc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x391cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_391cd0:
    // 0x391cd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x391cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_391cd4:
    // 0x391cd4: 0x95220002  lhu         $v0, 0x2($t1)
    ctx->pc = 0x391cd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
label_391cd8:
    // 0x391cd8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x391cd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_391cdc:
    // 0x391cdc: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x391cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_391ce0:
    // 0x391ce0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x391ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_391ce4:
    // 0x391ce4: 0xae860004  sw          $a2, 0x4($s4)
    ctx->pc = 0x391ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 6));
label_391ce8:
    // 0x391ce8: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x391ce8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_391cec:
    // 0x391cec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x391cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_391cf0:
    // 0x391cf0: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x391cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_391cf4:
    // 0x391cf4: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x391cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
label_391cf8:
    // 0x391cf8: 0xc0e4388  jal         func_390E20
label_391cfc:
    if (ctx->pc == 0x391CFCu) {
        ctx->pc = 0x391CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391CF8u;
        // 0x391cfc: 0x7fac0050  sq          $t4, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391D00u;
        goto label_391d00;
    }
    ctx->pc = 0x391CF8u;
    SET_GPR_U32(ctx, 31, 0x391D00u);
    ctx->pc = 0x391CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391CF8u;
    // 0x391cfc: 0x7fac0050  sq          $t4, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390E20u, 0x391CF8u, 0x391D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391D00u;
label_391d00:
    // 0x391d00: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x391d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_391d04:
    // 0x391d04: 0x3c2f021  addu        $fp, $fp, $v0
    ctx->pc = 0x391d04u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_391d08:
    // 0x391d08: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x391d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_391d0c:
    // 0x391d0c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_391d10:
    if (ctx->pc == 0x391D10u) {
        ctx->pc = 0x391D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391D0Cu;
        // 0x391d10: 0x7bac0050  lq          $t4, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391D14u;
        goto label_391d14;
    }
    ctx->pc = 0x391D0Cu;
    {
        const bool branch_taken_0x391d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391D0Cu;
        // 0x391d10: 0x7bac0050  lq          $t4, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391d0c) {
            ctx->pc = 0x391D30u;
            goto label_391d30;
        }
    }
    ctx->pc = 0x391D14u;
label_391d14:
    // 0x391d14: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x391d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_391d18:
    // 0x391d18: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x391d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_391d1c:
    // 0x391d1c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x391d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_391d20:
    // 0x391d20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x391d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_391d24:
    // 0x391d24: 0xae840004  sw          $a0, 0x4($s4)
    ctx->pc = 0x391d24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 4));
label_391d28:
    // 0x391d28: 0x9462fffc  lhu         $v0, -0x4($v1)
    ctx->pc = 0x391d28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_391d2c:
    // 0x391d2c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x391d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_391d30:
    // 0x391d30: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x391d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_391d34:
    // 0x391d34: 0x7e102b  sltu        $v0, $v1, $fp
    ctx->pc = 0x391d34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_391d38:
    // 0x391d38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_391d3c:
    if (ctx->pc == 0x391D3Cu) {
        ctx->pc = 0x391D40u;
        goto label_391d40;
    }
    ctx->pc = 0x391D38u;
    {
        const bool branch_taken_0x391d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x391d38) {
            ctx->pc = 0x391D48u;
            goto label_391d48;
        }
    }
    ctx->pc = 0x391D40u;
label_391d40:
    // 0x391d40: 0xafb00044  sw          $s0, 0x44($sp)
    ctx->pc = 0x391d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
label_391d44:
    // 0x391d44: 0xafbe004c  sw          $fp, 0x4C($sp)
    ctx->pc = 0x391d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 30));
label_391d48:
    // 0x391d48: 0x1620ff29  bnez        $s1, . + 4 + (-0xD7 << 2)
label_391d4c:
    if (ctx->pc == 0x391D4Cu) {
        ctx->pc = 0x391D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391D48u;
        // 0x391d4c: 0x8fa60048  lw          $a2, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391D50u;
        goto label_391d50;
    }
    ctx->pc = 0x391D48u;
    {
        const bool branch_taken_0x391d48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x391D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391D48u;
        // 0x391d4c: 0x8fa60048  lw          $a2, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391d48) {
            ctx->pc = 0x3919F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3919f0;
        }
    }
    ctx->pc = 0x391D50u;
label_391d50:
    // 0x391d50: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x391d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_391d54:
    // 0x391d54: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x391d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_391d58:
    // 0x391d58: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x391d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_391d5c:
    // 0x391d5c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x391d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_391d60:
    // 0x391d60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x391d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_391d64:
    // 0x391d64: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x391d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_391d68:
    // 0x391d68: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x391d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_391d6c:
    // 0x391d6c: 0x40f809  jalr        $v0
label_391d70:
    if (ctx->pc == 0x391D70u) {
        ctx->pc = 0x391D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391D6Cu;
        // 0x391d70: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x391D74u;
        goto label_391d74;
    }
    ctx->pc = 0x391D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x391D74u);
        ctx->pc = 0x391D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391D6Cu;
        // 0x391d70: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391D6Cu, 0x391D74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391D74u;
label_391d74:
    // 0x391d74: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x391d74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_391d78:
    // 0x391d78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x391d78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391d7c:
    // 0x391d7c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x391d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_391d80:
    // 0x391d80: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x391d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_391d84:
    // 0x391d84: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x391d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_391d88:
    // 0x391d88: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x391d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_391d8c:
    // 0x391d8c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x391d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_391d90:
    // 0x391d90: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x391d90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
label_391d94:
    // 0x391d94: 0xacd10000  sw          $s1, 0x0($a2)
    ctx->pc = 0x391d94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
label_391d98:
    // 0x391d98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x391d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_391d9c:
    // 0x391d9c: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x391d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_391da0:
    // 0x391da0: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x391da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_391da4:
    // 0x391da4: 0x24c6e880  addiu       $a2, $a2, -0x1780
    ctx->pc = 0x391da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961280));
label_391da8:
    // 0x391da8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x391da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_391dac:
    // 0x391dac: 0x8cc20108  lw          $v0, 0x108($a2)
    ctx->pc = 0x391dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 264)));
label_391db0:
    // 0x391db0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x391db0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_391db4:
    // 0x391db4: 0x40f809  jalr        $v0
label_391db8:
    if (ctx->pc == 0x391DB8u) {
        ctx->pc = 0x391DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391DB4u;
        // 0x391db8: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391DBCu;
        goto label_391dbc;
    }
    ctx->pc = 0x391DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x391DBCu);
        ctx->pc = 0x391DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391DB4u;
        // 0x391db8: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391DB4u, 0x391DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391DBCu;
label_391dbc:
    // 0x391dbc: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x391dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_391dc0:
    // 0x391dc0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x391dc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391dc4:
    // 0x391dc4: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x391dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_391dc8:
    // 0x391dc8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_391dcc:
    if (ctx->pc == 0x391DCCu) {
        ctx->pc = 0x391DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391DC8u;
        // 0x391dcc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391DD0u;
        goto label_391dd0;
    }
    ctx->pc = 0x391DC8u;
    {
        const bool branch_taken_0x391dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391DC8u;
        // 0x391dcc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391dc8) {
            ctx->pc = 0x391E14u;
            goto label_391e14;
        }
    }
    ctx->pc = 0x391DD0u;
label_391dd0:
    // 0x391dd0: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x391dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_391dd4:
    // 0x391dd4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x391dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_391dd8:
    // 0x391dd8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x391dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_391ddc:
    // 0x391ddc: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x391ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_391de0:
    // 0x391de0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x391de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_391de4:
    // 0x391de4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x391de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_391de8:
    // 0x391de8: 0x9445fffe  lhu         $a1, -0x2($v0)
    ctx->pc = 0x391de8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967294)));
label_391dec:
    // 0x391dec: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x391decu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_391df0:
    // 0x391df0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x391df0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_391df4:
    // 0x391df4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x391df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_391df8:
    // 0x391df8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x391df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_391dfc:
    // 0x391dfc: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x391dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_391e00:
    // 0x391e00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x391e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_391e04:
    // 0x391e04: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x391e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_391e08:
    // 0x391e08: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x391e08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_391e0c:
    // 0x391e0c: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
label_391e10:
    if (ctx->pc == 0x391E10u) {
        ctx->pc = 0x391E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E0Cu;
        // 0x391e10: 0xae830004  sw          $v1, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391E14u;
        goto label_391e14;
    }
    ctx->pc = 0x391E0Cu;
    {
        const bool branch_taken_0x391e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E0Cu;
        // 0x391e10: 0xae830004  sw          $v1, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391e0c) {
            ctx->pc = 0x391DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391dd8;
        }
    }
    ctx->pc = 0x391E14u;
label_391e14:
    // 0x391e14: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x391e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_391e18:
    // 0x391e18: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x391e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_391e1c:
    // 0x391e1c: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x391e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_391e20:
    // 0x391e20: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x391e20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_391e24:
    // 0x391e24: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x391e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_391e28:
    // 0x391e28: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x391e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_391e2c:
    // 0x391e2c: 0xc0bb778  jal         func_2EDDE0
label_391e30:
    if (ctx->pc == 0x391E30u) {
        ctx->pc = 0x391E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E2Cu;
        // 0x391e30: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391E34u;
        goto label_391e34;
    }
    ctx->pc = 0x391E2Cu;
    SET_GPR_U32(ctx, 31, 0x391E34u);
    ctx->pc = 0x391E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391E2Cu;
    // 0x391e30: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x391E2Cu, 0x391E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391E34u;
label_391e34:
    // 0x391e34: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x391e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_391e38:
    // 0x391e38: 0x10000029  b           . + 4 + (0x29 << 2)
label_391e3c:
    if (ctx->pc == 0x391E3Cu) {
        ctx->pc = 0x391E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E38u;
        // 0x391e3c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391E40u;
        goto label_391e40;
    }
    ctx->pc = 0x391E38u;
    {
        const bool branch_taken_0x391e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E38u;
        // 0x391e3c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391e38) {
            ctx->pc = 0x391EE0u;
            goto label_391ee0;
        }
    }
    ctx->pc = 0x391E40u;
label_391e40:
    // 0x391e40: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x391e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_391e44:
    // 0x391e44: 0x7e102b  sltu        $v0, $v1, $fp
    ctx->pc = 0x391e44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_391e48:
    // 0x391e48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_391e4c:
    if (ctx->pc == 0x391E4Cu) {
        ctx->pc = 0x391E50u;
        goto label_391e50;
    }
    ctx->pc = 0x391E48u;
    {
        const bool branch_taken_0x391e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x391e48) {
            ctx->pc = 0x391E58u;
            goto label_391e58;
        }
    }
    ctx->pc = 0x391E50u;
label_391e50:
    // 0x391e50: 0xafb00044  sw          $s0, 0x44($sp)
    ctx->pc = 0x391e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
label_391e54:
    // 0x391e54: 0xafbe004c  sw          $fp, 0x4C($sp)
    ctx->pc = 0x391e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 30));
label_391e58:
    // 0x391e58: 0x5620fee5  bnel        $s1, $zero, . + 4 + (-0x11B << 2)
label_391e5c:
    if (ctx->pc == 0x391E5Cu) {
        ctx->pc = 0x391E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E58u;
        // 0x391e5c: 0x8fa60048  lw          $a2, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391E60u;
        goto label_391e60;
    }
    ctx->pc = 0x391E58u;
    {
        const bool branch_taken_0x391e58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x391e58) {
            ctx->pc = 0x391E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391E58u;
            // 0x391e5c: 0x8fa60048  lw          $a2, 0x48($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3919F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3919f0;
        }
    }
    ctx->pc = 0x391E60u;
label_391e60:
    // 0x391e60: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x391e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_391e64:
    // 0x391e64: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x391e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_391e68:
    // 0x391e68: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x391e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_391e6c:
    // 0x391e6c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x391e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_391e70:
    // 0x391e70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x391e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_391e74:
    // 0x391e74: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x391e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_391e78:
    // 0x391e78: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x391e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_391e7c:
    // 0x391e7c: 0x40f809  jalr        $v0
label_391e80:
    if (ctx->pc == 0x391E80u) {
        ctx->pc = 0x391E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E7Cu;
        // 0x391e80: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x391E84u;
        goto label_391e84;
    }
    ctx->pc = 0x391E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x391E84u);
        ctx->pc = 0x391E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E7Cu;
        // 0x391e80: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391E7Cu, 0x391E84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391E84u;
label_391e84:
    // 0x391e84: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x391e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_391e88:
    // 0x391e88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x391e88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391e8c:
    // 0x391e8c: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x391e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_391e90:
    // 0x391e90: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x391e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_391e94:
    // 0x391e94: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x391e94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_391e98:
    // 0x391e98: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x391e98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_391e9c:
    // 0x391e9c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x391e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_391ea0:
    // 0x391ea0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x391ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_391ea4:
    // 0x391ea4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x391ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_391ea8:
    // 0x391ea8: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x391ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_391eac:
    // 0x391eac: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x391eacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
label_391eb0:
    // 0x391eb0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x391eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_391eb4:
    // 0x391eb4: 0xacd10000  sw          $s1, 0x0($a2)
    ctx->pc = 0x391eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
label_391eb8:
    // 0x391eb8: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x391eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_391ebc:
    // 0x391ebc: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x391ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_391ec0:
    // 0x391ec0: 0x40f809  jalr        $v0
label_391ec4:
    if (ctx->pc == 0x391EC4u) {
        ctx->pc = 0x391EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391EC0u;
        // 0x391ec4: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391EC8u;
        goto label_391ec8;
    }
    ctx->pc = 0x391EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x391EC8u);
        ctx->pc = 0x391EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391EC0u;
        // 0x391ec4: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391EC0u, 0x391EC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391EC8u;
label_391ec8:
    // 0x391ec8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x391ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_391ecc:
    // 0x391ecc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x391eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391ed0:
    // 0x391ed0: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x391ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_391ed4:
    // 0x391ed4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x391ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_391ed8:
    // 0x391ed8: 0xc0bb778  jal         func_2EDDE0
label_391edc:
    if (ctx->pc == 0x391EDCu) {
        ctx->pc = 0x391EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391ED8u;
        // 0x391edc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391EE0u;
        goto label_391ee0;
    }
    ctx->pc = 0x391ED8u;
    SET_GPR_U32(ctx, 31, 0x391EE0u);
    ctx->pc = 0x391EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391ED8u;
    // 0x391edc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x391ED8u, 0x391EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391EE0u;
label_391ee0:
    // 0x391ee0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x391ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_391ee4:
    // 0x391ee4: 0x3c4102b  sltu        $v0, $fp, $a0
    ctx->pc = 0x391ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_391ee8:
    // 0x391ee8: 0x1440fdb3  bnez        $v0, . + 4 + (-0x24D << 2)
label_391eec:
    if (ctx->pc == 0x391EECu) {
        ctx->pc = 0x391EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391EE8u;
        // 0x391eec: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391EF0u;
        goto label_391ef0;
    }
    ctx->pc = 0x391EE8u;
    {
        const bool branch_taken_0x391ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391EE8u;
        // 0x391eec: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391ee8) {
            ctx->pc = 0x3915B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3915b8;
        }
    }
    ctx->pc = 0x391EF0u;
label_391ef0:
    // 0x391ef0: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x391ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_391ef4:
    // 0x391ef4: 0x24d1e880  addiu       $s1, $a2, -0x1780
    ctx->pc = 0x391ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961280));
label_391ef8:
    // 0x391ef8: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x391ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_391efc:
    // 0x391efc: 0x40f809  jalr        $v0
label_391f00:
    if (ctx->pc == 0x391F00u) {
        ctx->pc = 0x391F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391EFCu;
        // 0x391f00: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391F04u;
        goto label_391f04;
    }
    ctx->pc = 0x391EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x391F04u);
        ctx->pc = 0x391F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391EFCu;
        // 0x391f00: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391EFCu, 0x391F04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391F04u;
label_391f04:
    // 0x391f04: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x391f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_391f08:
    // 0x391f08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x391f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_391f0c:
    // 0x391f0c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x391f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_391f10:
    // 0x391f10: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x391f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_391f14:
    // 0x391f14: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x391f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_391f18:
    // 0x391f18: 0x40f809  jalr        $v0
label_391f1c:
    if (ctx->pc == 0x391F1Cu) {
        ctx->pc = 0x391F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F18u;
        // 0x391f1c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391F20u;
        goto label_391f20;
    }
    ctx->pc = 0x391F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x391F20u);
        ctx->pc = 0x391F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F18u;
        // 0x391f1c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391F18u, 0x391F20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391F20u;
label_391f20:
    // 0x391f20: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x391f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_391f24:
    // 0x391f24: 0x40f809  jalr        $v0
label_391f28:
    if (ctx->pc == 0x391F28u) {
        ctx->pc = 0x391F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F24u;
        // 0x391f28: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391F2Cu;
        goto label_391f2c;
    }
    ctx->pc = 0x391F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x391F2Cu);
        ctx->pc = 0x391F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F24u;
        // 0x391f28: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391F24u, 0x391F2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391F2Cu;
label_391f2c:
    // 0x391f2c: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x391f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_391f30:
    // 0x391f30: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x391f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_391f34:
    // 0x391f34: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x391f34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_391f38:
    // 0x391f38: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x391f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_391f3c:
    // 0x391f3c: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x391f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_391f40:
    // 0x391f40: 0x40f809  jalr        $v0
label_391f44:
    if (ctx->pc == 0x391F44u) {
        ctx->pc = 0x391F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F40u;
        // 0x391f44: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391F48u;
        goto label_391f48;
    }
    ctx->pc = 0x391F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x391F48u);
        ctx->pc = 0x391F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F40u;
        // 0x391f44: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391F40u, 0x391F48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391F48u;
label_391f48:
    // 0x391f48: 0x8fb00020  lw          $s0, 0x20($sp)
    ctx->pc = 0x391f48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_391f4c:
    // 0x391f4c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_391f50:
    if (ctx->pc == 0x391F50u) {
        ctx->pc = 0x391F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F4Cu;
        // 0x391f50: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391F54u;
        goto label_391f54;
    }
    ctx->pc = 0x391F4Cu;
    {
        const bool branch_taken_0x391f4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x391F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F4Cu;
        // 0x391f50: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391f4c) {
            ctx->pc = 0x391F74u;
            goto label_391f74;
        }
    }
    ctx->pc = 0x391F54u;
label_391f54:
    // 0x391f54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x391f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_391f58:
    // 0x391f58: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x391f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_391f5c:
    // 0x391f5c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x391f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_391f60:
    // 0x391f60: 0x40f809  jalr        $v0
label_391f64:
    if (ctx->pc == 0x391F64u) {
        ctx->pc = 0x391F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F60u;
        // 0x391f64: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391F68u;
        goto label_391f68;
    }
    ctx->pc = 0x391F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x391F68u);
        ctx->pc = 0x391F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F60u;
        // 0x391f64: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391F60u, 0x391F68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391F68u;
label_391f68:
    // 0x391f68: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
label_391f6c:
    if (ctx->pc == 0x391F6Cu) {
        ctx->pc = 0x391F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F68u;
        // 0x391f6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391F70u;
        goto label_391f70;
    }
    ctx->pc = 0x391F68u;
    {
        const bool branch_taken_0x391f68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x391F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F68u;
        // 0x391f6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391f68) {
            ctx->pc = 0x391F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391f58;
        }
    }
    ctx->pc = 0x391F70u;
label_391f70:
    // 0x391f70: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x391f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_391f74:
    // 0x391f74: 0xc104284  jal         func_410A10
label_391f78:
    if (ctx->pc == 0x391F78u) {
        ctx->pc = 0x391F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F74u;
        // 0x391f78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391F7Cu;
        goto label_391f7c;
    }
    ctx->pc = 0x391F74u;
    SET_GPR_U32(ctx, 31, 0x391F7Cu);
    ctx->pc = 0x391F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391F74u;
    // 0x391f78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x391F74u, 0x391F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391F7Cu;
label_391f7c:
    // 0x391f7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x391f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_391f80:
    // 0x391f80: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_391f84:
    if (ctx->pc == 0x391F84u) {
        ctx->pc = 0x391F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F80u;
        // 0x391f84: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391F88u;
        goto label_391f88;
    }
    ctx->pc = 0x391F80u;
    {
        const bool branch_taken_0x391f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F80u;
        // 0x391f84: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391f80) {
            ctx->pc = 0x392094u;
            goto label_392094;
        }
    }
    ctx->pc = 0x391F88u;
label_391f88:
    // 0x391f88: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x391f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_391f8c:
    // 0x391f8c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x391f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_391f90:
    // 0x391f90: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x391f90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_391f94:
    // 0x391f94: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x391f94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_391f98:
    // 0x391f98: 0x18800019  blez        $a0, . + 4 + (0x19 << 2)
label_391f9c:
    if (ctx->pc == 0x391F9Cu) {
        ctx->pc = 0x391F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F98u;
        // 0x391f9c: 0x30830003  andi        $v1, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x391FA0u;
        goto label_391fa0;
    }
    ctx->pc = 0x391F98u;
    {
        const bool branch_taken_0x391f98 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x391F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F98u;
        // 0x391f9c: 0x30830003  andi        $v1, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x391f98) {
            ctx->pc = 0x392000u;
            goto label_392000;
        }
    }
    ctx->pc = 0x391FA0u;
label_391fa0:
    // 0x391fa0: 0x50600022  beql        $v1, $zero, . + 4 + (0x22 << 2)
label_391fa4:
    if (ctx->pc == 0x391FA4u) {
        ctx->pc = 0x391FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391FA0u;
        // 0x391fa4: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391FA8u;
        goto label_391fa8;
    }
    ctx->pc = 0x391FA0u;
    {
        const bool branch_taken_0x391fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x391fa0) {
            ctx->pc = 0x391FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391FA0u;
            // 0x391fa4: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39202Cu;
            goto label_39202c;
        }
    }
    ctx->pc = 0x391FA8u;
label_391fa8:
    // 0x391fa8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x391fa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_391fac:
    // 0x391fac: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_391fb0:
    if (ctx->pc == 0x391FB0u) {
        ctx->pc = 0x391FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391FACu;
        // 0x391fb0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391FB4u;
        goto label_391fb4;
    }
    ctx->pc = 0x391FACu;
    {
        const bool branch_taken_0x391fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x391fac) {
            ctx->pc = 0x391FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391FACu;
            // 0x391fb0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392004u;
            goto label_392004;
        }
    }
    ctx->pc = 0x391FB4u;
label_391fb4:
    // 0x391fb4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x391fb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_391fb8:
    // 0x391fb8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_391fbc:
    if (ctx->pc == 0x391FBCu) {
        ctx->pc = 0x391FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391FB8u;
        // 0x391fbc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391FC0u;
        goto label_391fc0;
    }
    ctx->pc = 0x391FB8u;
    {
        const bool branch_taken_0x391fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x391fb8) {
            ctx->pc = 0x391FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391FB8u;
            // 0x391fbc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x391FE8u;
            goto label_391fe8;
        }
    }
    ctx->pc = 0x391FC0u;
label_391fc0:
    // 0x391fc0: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x391fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_391fc4:
    // 0x391fc4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x391fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_391fc8:
    // 0x391fc8: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x391fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_391fcc:
    // 0x391fcc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x391fccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_391fd0:
    // 0x391fd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x391fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_391fd4:
    // 0x391fd4: 0x40f809  jalr        $v0
label_391fd8:
    if (ctx->pc == 0x391FD8u) {
        ctx->pc = 0x391FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391FD4u;
        // 0x391fd8: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391FDCu;
        goto label_391fdc;
    }
    ctx->pc = 0x391FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x391FDCu);
        ctx->pc = 0x391FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391FD4u;
        // 0x391fd8: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391FD4u, 0x391FDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391FDCu;
label_391fdc:
    // 0x391fdc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x391fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_391fe0:
    // 0x391fe0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x391fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_391fe4:
    // 0x391fe4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x391fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_391fe8:
    // 0x391fe8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x391fe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_391fec:
    // 0x391fec: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x391fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_391ff0:
    // 0x391ff0: 0x40f809  jalr        $v0
label_391ff4:
    if (ctx->pc == 0x391FF4u) {
        ctx->pc = 0x391FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391FF0u;
        // 0x391ff4: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391FF8u;
        goto label_391ff8;
    }
    ctx->pc = 0x391FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x391FF8u);
        ctx->pc = 0x391FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391FF0u;
        // 0x391ff4: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391FF0u, 0x391FF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391FF8u;
label_391ff8:
    // 0x391ff8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x391ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_391ffc:
    // 0x391ffc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x391ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_392000:
    // 0x392000: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x392000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_392004:
    // 0x392004: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x392004u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_392008:
    // 0x392008: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x392008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_39200c:
    // 0x39200c: 0x40f809  jalr        $v0
label_392010:
    if (ctx->pc == 0x392010u) {
        ctx->pc = 0x392010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39200Cu;
        // 0x392010: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392014u;
        goto label_392014;
    }
    ctx->pc = 0x39200Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392014u);
        ctx->pc = 0x392010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39200Cu;
        // 0x392010: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39200Cu, 0x392014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392014u;
label_392014:
    // 0x392014: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x392014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_392018:
    // 0x392018: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x392018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_39201c:
    // 0x39201c: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x39201cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_392020:
    // 0x392020: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_392024:
    if (ctx->pc == 0x392024u) {
        ctx->pc = 0x392024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392020u;
        // 0x392024: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392028u;
        goto label_392028;
    }
    ctx->pc = 0x392020u;
    {
        const bool branch_taken_0x392020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392020u;
        // 0x392024: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392020) {
            ctx->pc = 0x392094u;
            goto label_392094;
        }
    }
    ctx->pc = 0x392028u;
label_392028:
    // 0x392028: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x392028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_39202c:
    // 0x39202c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x39202cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_392030:
    // 0x392030: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x392030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_392034:
    // 0x392034: 0x40f809  jalr        $v0
label_392038:
    if (ctx->pc == 0x392038u) {
        ctx->pc = 0x392038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392034u;
        // 0x392038: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39203Cu;
        goto label_39203c;
    }
    ctx->pc = 0x392034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39203Cu);
        ctx->pc = 0x392038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392034u;
        // 0x392038: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392034u, 0x39203Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39203Cu;
label_39203c:
    // 0x39203c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x39203cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_392040:
    // 0x392040: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x392040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_392044:
    // 0x392044: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x392044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_392048:
    // 0x392048: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x392048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_39204c:
    // 0x39204c: 0x40f809  jalr        $v0
label_392050:
    if (ctx->pc == 0x392050u) {
        ctx->pc = 0x392054u;
        goto label_392054;
    }
    ctx->pc = 0x39204Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392054u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39204Cu, 0x392054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392054u;
label_392054:
    // 0x392054: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x392054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_392058:
    // 0x392058: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x392058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_39205c:
    // 0x39205c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x39205cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_392060:
    // 0x392060: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x392060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_392064:
    // 0x392064: 0x40f809  jalr        $v0
label_392068:
    if (ctx->pc == 0x392068u) {
        ctx->pc = 0x39206Cu;
        goto label_39206c;
    }
    ctx->pc = 0x392064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39206Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392064u, 0x39206Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39206Cu;
label_39206c:
    // 0x39206c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x39206cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_392070:
    // 0x392070: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x392070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_392074:
    // 0x392074: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x392074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_392078:
    // 0x392078: 0x40f809  jalr        $v0
label_39207c:
    if (ctx->pc == 0x39207Cu) {
        ctx->pc = 0x39207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392078u;
        // 0x39207c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392080u;
        goto label_392080;
    }
    ctx->pc = 0x392078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392080u);
        ctx->pc = 0x39207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392078u;
        // 0x39207c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392078u, 0x392080u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392080u;
label_392080:
    // 0x392080: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x392080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_392084:
    // 0x392084: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x392084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_392088:
    // 0x392088: 0x224102b  sltu        $v0, $s1, $a0
    ctx->pc = 0x392088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_39208c:
    // 0x39208c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_392090:
    if (ctx->pc == 0x392090u) {
        ctx->pc = 0x392090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39208Cu;
        // 0x392090: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392094u;
        goto label_392094;
    }
    ctx->pc = 0x39208Cu;
    {
        const bool branch_taken_0x39208c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39208Cu;
        // 0x392090: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39208c) {
            ctx->pc = 0x392028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392028;
        }
    }
    ctx->pc = 0x392094u;
label_392094:
    // 0x392094: 0xc104284  jal         func_410A10
label_392098:
    if (ctx->pc == 0x392098u) {
        ctx->pc = 0x392098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392094u;
        // 0x392098: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39209Cu;
        goto label_39209c;
    }
    ctx->pc = 0x392094u;
    SET_GPR_U32(ctx, 31, 0x39209Cu);
    ctx->pc = 0x392098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392094u;
    // 0x392098: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x392094u, 0x39209Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39209Cu;
label_39209c:
    // 0x39209c: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x39209cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_3920a0:
    // 0x3920a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3920a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3920a4:
    // 0x3920a4: 0x24c3e880  addiu       $v1, $a2, -0x1780
    ctx->pc = 0x3920a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961280));
label_3920a8:
    // 0x3920a8: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3920a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3920ac:
    // 0x3920ac: 0x40f809  jalr        $v0
label_3920b0:
    if (ctx->pc == 0x3920B0u) {
        ctx->pc = 0x3920B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3920ACu;
        // 0x3920b0: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3920B4u;
        goto label_3920b4;
    }
    ctx->pc = 0x3920ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3920B4u);
        ctx->pc = 0x3920B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3920ACu;
        // 0x3920b0: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3920ACu, 0x3920B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3920B4u;
label_3920b4:
    // 0x3920b4: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x3920b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3920b8:
    // 0x3920b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3920b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3920bc:
    // 0x3920bc: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x3920bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3920c0:
    // 0x3920c0: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x3920c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3920c4:
    // 0x3920c4: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x3920c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3920c8:
    // 0x3920c8: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x3920c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3920cc:
    // 0x3920cc: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x3920ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3920d0:
    // 0x3920d0: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x3920d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3920d4:
    // 0x3920d4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3920d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3920d8:
    // 0x3920d8: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x3920d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3920dc:
    // 0x3920dc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3920dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3920e0:
    // 0x3920e0: 0x3e00008  jr          $ra
label_3920e4:
    if (ctx->pc == 0x3920E4u) {
        ctx->pc = 0x3920E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3920E0u;
        // 0x3920e4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3920E8u;
        goto label_fallthrough_0x3920e0;
    }
    ctx->pc = 0x3920E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3920E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3920E0u;
        // 0x3920e4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3920E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3920e0:
    ctx->pc = 0x3920E8u;
}
